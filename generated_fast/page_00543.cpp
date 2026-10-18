#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_458(u8* __restrict R,Cpu& c);
u32 body_495(u8* __restrict R,Cpu& c);
u32 body_4cb(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_517(u8* __restrict R,Cpu& c);
u32 body_51d(u8* __restrict R,Cpu& c);
u32 body_51e(u8* __restrict R,Cpu& c);
u32 body_51f(u8* __restrict R,Cpu& c);
u32 body_527(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_52e(u8* __restrict R,Cpu& c);
u32 body_52f(u8* __restrict R,Cpu& c);
u32 body_538(u8* __restrict R,Cpu& c);
u32 body_542(u8* __restrict R,Cpu& c);
u32 body_544(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x543,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x543,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_543(u8* __restrict R,Cpu& c);
u32 page_543(Cpu& c){return body_543(c.regs.data(),c);}
__attribute__((noinline)) u32 body_543(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x543001:goto L543001;
case 0x543003:c.instructions+=1;goto B543003;
case 0x543005:goto L543005;
case 0x543009:c.instructions+=1;goto B543009;
case 0x54300b:goto L54300b;
case 0x54300e:c.instructions+=1;goto B54300e;
case 0x543010:goto L543010;
case 0x543012:goto L543012;
case 0x543014:c.instructions+=1;goto B543014;
case 0x543016:goto L543016;
case 0x543019:c.instructions+=1;goto B543019;
case 0x54301b:goto L54301b;
case 0x54301d:goto L54301d;
case 0x54301f:c.instructions+=1;goto B54301f;
case 0x543021:goto L543021;
case 0x543024:c.instructions+=2;goto B543024;
case 0x543026:c.instructions+=1;goto B543026;
case 0x543028:goto L543028;
case 0x54302b:c.instructions+=4;goto B54302b;
case 0x54302e:c.instructions+=3;goto B54302e;
case 0x543031:c.instructions+=2;goto B543031;
case 0x543032:c.instructions+=1;goto B543032;
case 0x543034:goto L543034;
case 0x543037:c.instructions+=4;goto B543037;
case 0x54303a:c.instructions+=3;goto B54303a;
case 0x54303c:c.instructions+=2;goto B54303c;
case 0x54303d:c.instructions+=1;goto B54303d;
case 0x54303f:goto L54303f;
case 0x543042:c.instructions+=2;goto B543042;
case 0x543044:c.instructions+=1;goto B543044;
case 0x543046:goto L543046;
case 0x543049:c.instructions+=1;goto B543049;
case 0x54304b:goto L54304b;
case 0x54304d:goto L54304d;
case 0x543050:c.instructions+=2;goto B543050;
case 0x543052:c.instructions+=1;goto B543052;
case 0x543054:goto L543054;
case 0x543057:c.instructions+=1;goto B543057;
case 0x543059:goto L543059;
case 0x54305b:goto L54305b;
case 0x54305d:c.instructions+=1;goto B54305d;
case 0x54305f:goto L54305f;
case 0x543060:goto L543060;
case 0x543062:goto L543062;
case 0x543065:c.instructions+=2;goto B543065;
case 0x543067:c.instructions+=1;goto B543067;
case 0x543069:goto L543069;
case 0x54306c:c.instructions+=1;goto B54306c;
case 0x54306e:goto L54306e;
case 0x54306f:c.instructions+=5;goto B54306f;
case 0x543071:c.instructions+=4;goto B543071;
case 0x543074:c.instructions+=3;goto B543074;
case 0x543077:c.instructions+=2;goto B543077;
case 0x54307a:c.instructions+=1;goto B54307a;
case 0x54307f:goto L54307f;
case 0x543081:c.instructions+=1;goto B543081;
case 0x543086:goto L543086;
case 0x54308b:goto L54308b;
case 0x54308c:c.instructions+=5;goto B54308c;
case 0x54308d:c.instructions+=4;goto B54308d;
case 0x54308e:c.instructions+=3;goto B54308e;
case 0x543090:c.instructions+=2;goto B543090;
case 0x543092:c.instructions+=1;goto B543092;
case 0x543095:goto L543095;
case 0x54309b:c.instructions+=2;goto B54309b;
case 0x54309d:c.instructions+=1;goto B54309d;
case 0x54309f:goto L54309f;
case 0x5430a1:c.instructions+=1;goto B5430a1;
case 0x5430a6:goto L5430a6;
case 0x5430aa:c.instructions+=3;goto B5430aa;
case 0x5430ab:c.instructions+=2;goto B5430ab;
case 0x5430ac:c.instructions+=1;goto B5430ac;
case 0x5430af:goto L5430af;
case 0x5430b1:c.instructions+=3;goto B5430b1;
case 0x5430b2:c.instructions+=2;goto B5430b2;
case 0x5430b3:c.instructions+=1;goto B5430b3;
case 0x5430c0:goto L5430c0;
case 0x5430c3:c.instructions+=11;goto B5430c3;
case 0x5430c4:c.instructions+=10;goto B5430c4;
case 0x5430c5:c.instructions+=9;goto B5430c5;
case 0x5430c6:c.instructions+=8;goto B5430c6;
case 0x5430c8:c.instructions+=7;goto B5430c8;
case 0x5430cb:c.instructions+=6;goto B5430cb;
case 0x5430cc:c.instructions+=5;goto B5430cc;
case 0x5430cf:c.instructions+=4;goto B5430cf;
case 0x5430d1:c.instructions+=3;goto B5430d1;
case 0x5430d3:c.instructions+=2;goto B5430d3;
case 0x5430d7:c.instructions+=1;goto B5430d7;
case 0x5430dd:goto L5430dd;
case 0x5430e0:c.instructions+=3;goto B5430e0;
case 0x5430e3:c.instructions+=2;goto B5430e3;
case 0x5430e5:c.instructions+=1;goto B5430e5;
case 0x5430eb:goto L5430eb;
case 0x5430ee:c.instructions+=3;goto B5430ee;
case 0x5430f1:c.instructions+=2;goto B5430f1;
case 0x5430f3:c.instructions+=1;goto B5430f3;
case 0x5430f9:goto L5430f9;
case 0x5430fc:c.instructions+=4;goto B5430fc;
case 0x543100:c.instructions+=3;goto B543100;
case 0x543104:c.instructions+=2;goto B543104;
case 0x543107:c.instructions+=1;goto B543107;
case 0x543109:goto L543109;
case 0x54310b:c.instructions+=2;goto B54310b;
case 0x54310e:c.instructions+=1;goto B54310e;
case 0x543114:goto L543114;
case 0x543117:c.instructions+=2;goto B543117;
case 0x543119:c.instructions+=1;goto B543119;
case 0x54311b:goto L54311b;
case 0x54311e:c.instructions+=3;goto B54311e;
case 0x543123:c.instructions+=2;goto B543123;
case 0x543124:c.instructions+=1;goto B543124;
case 0x543129:goto L543129;
case 0x54312b:c.instructions+=2;goto B54312b;
case 0x54312d:c.instructions+=1;goto B54312d;
case 0x54312f:goto L54312f;
case 0x543132:c.instructions+=1;goto B543132;
case 0x543134:goto L543134;
case 0x543136:goto L543136;
case 0x543139:c.instructions+=2;goto B543139;
case 0x54313b:c.instructions+=1;goto B54313b;
case 0x54313d:goto L54313d;
case 0x543140:c.instructions+=2;goto B543140;
case 0x543142:c.instructions+=1;goto B543142;
case 0x543144:goto L543144;
case 0x543147:c.instructions+=1;goto B543147;
case 0x543149:goto L543149;
case 0x54314b:goto L54314b;
case 0x54314e:c.instructions+=4;goto B54314e;
case 0x543151:c.instructions+=3;goto B543151;
case 0x543156:c.instructions+=2;goto B543156;
case 0x543157:c.instructions+=1;goto B543157;
case 0x54315c:goto L54315c;
case 0x54315e:goto L54315e;
case 0x543161:goto L543161;
case 0x543164:c.instructions+=3;goto B543164;
case 0x543167:c.instructions+=2;goto B543167;
case 0x543169:c.instructions+=1;goto B543169;
case 0x54316b:goto L54316b;
case 0x54316e:c.instructions+=4;goto B54316e;
case 0x543171:c.instructions+=3;goto B543171;
case 0x543174:c.instructions+=2;goto B543174;
case 0x543175:c.instructions+=1;goto B543175;
case 0x54317a:goto L54317a;
case 0x54317c:c.instructions+=4;goto B54317c;
case 0x54317f:c.instructions+=3;goto B54317f;
case 0x543182:c.instructions+=2;goto B543182;
case 0x543183:c.instructions+=1;goto B543183;
case 0x543185:goto L543185;
case 0x543188:c.instructions+=1;goto B543188;
case 0x54318a:goto L54318a;
case 0x54318d:c.instructions+=2;goto B54318d;
case 0x54318f:c.instructions+=1;goto B54318f;
case 0x543191:goto L543191;
case 0x543194:c.instructions+=1;goto B543194;
case 0x543196:goto L543196;
case 0x543198:goto L543198;
case 0x54319c:c.instructions+=1;goto B54319c;
case 0x54319e:goto L54319e;
case 0x5431a1:c.instructions+=2;goto B5431a1;
case 0x5431a3:c.instructions+=1;goto B5431a3;
case 0x5431a5:goto L5431a5;
case 0x5431a8:c.instructions+=3;goto B5431a8;
case 0x5431ad:c.instructions+=2;goto B5431ad;
case 0x5431ae:c.instructions+=1;goto B5431ae;
case 0x5431b3:goto L5431b3;
case 0x5431b6:c.instructions+=2;goto B5431b6;
case 0x5431b8:c.instructions+=1;goto B5431b8;
case 0x5431ba:goto L5431ba;
case 0x5431bd:c.instructions+=1;goto B5431bd;
case 0x5431bf:goto L5431bf;
case 0x5431c1:goto L5431c1;
case 0x5431c4:c.instructions+=2;goto B5431c4;
case 0x5431c6:c.instructions+=1;goto B5431c6;
case 0x5431c8:goto L5431c8;
case 0x5431cb:c.instructions+=2;goto B5431cb;
case 0x5431cd:c.instructions+=1;goto B5431cd;
case 0x5431cf:goto L5431cf;
case 0x5431d2:c.instructions+=1;goto B5431d2;
case 0x5431d4:goto L5431d4;
case 0x5431d6:goto L5431d6;
case 0x5431d9:c.instructions+=4;goto B5431d9;
case 0x5431dc:c.instructions+=3;goto B5431dc;
case 0x5431e1:c.instructions+=2;goto B5431e1;
case 0x5431e2:c.instructions+=1;goto B5431e2;
case 0x5431e7:goto L5431e7;
case 0x5431e9:goto L5431e9;
case 0x5431ec:goto L5431ec;
case 0x5431ef:c.instructions+=3;goto B5431ef;
case 0x5431f2:c.instructions+=2;goto B5431f2;
case 0x5431f4:c.instructions+=1;goto B5431f4;
case 0x5431f6:goto L5431f6;
case 0x5431f9:c.instructions+=1;goto B5431f9;
case 0x5431fb:goto L5431fb;
case 0x5431fd:goto L5431fd;
case 0x543200:c.instructions+=2;goto B543200;
case 0x543203:c.instructions+=1;goto B543203;
case 0x543204:goto L543204;
case 0x543207:goto L543207;
case 0x54320b:c.instructions+=2;goto B54320b;
case 0x54320e:c.instructions+=1;goto B54320e;
case 0x543210:goto L543210;
case 0x543213:c.instructions+=3;goto B543213;
case 0x543214:c.instructions+=2;goto B543214;
case 0x543216:c.instructions+=1;goto B543216;
case 0x54321b:goto L54321b;
case 0x54321e:c.instructions+=2;goto B54321e;
case 0x543220:c.instructions+=1;goto B543220;
case 0x543222:goto L543222;
case 0x543225:c.instructions+=3;goto B543225;
case 0x543227:c.instructions+=2;goto B543227;
case 0x543229:c.instructions+=1;goto B543229;
case 0x54322b:goto L54322b;
case 0x54322e:c.instructions+=2;goto B54322e;
case 0x543234:c.instructions+=1;goto B543234;
case 0x543236:goto L543236;
case 0x543237:c.instructions+=2;goto B543237;
case 0x543239:c.instructions+=1;goto B543239;
case 0x54323e:goto L54323e;
case 0x543240:c.instructions+=2;goto B543240;
case 0x543243:c.instructions+=1;goto B543243;
case 0x543248:goto L543248;
case 0x54324a:goto L54324a;
case 0x543251:goto L543251;
case 0x543253:c.instructions+=1;goto B543253;
case 0x543258:goto L543258;
case 0x54325a:c.instructions+=2;goto B54325a;
case 0x54325c:c.instructions+=1;goto B54325c;
case 0x54325f:goto L54325f;
case 0x543265:c.instructions+=1;goto B543265;
case 0x543267:goto L543267;
case 0x543269:c.instructions+=1;goto B543269;
case 0x54326e:goto L54326e;
case 0x54326f:c.instructions+=6;goto B54326f;
case 0x543270:c.instructions+=5;goto B543270;
case 0x543271:c.instructions+=4;goto B543271;
case 0x543273:c.instructions+=3;goto B543273;
case 0x543274:c.instructions+=2;goto B543274;
case 0x543277:c.instructions+=1;goto B543277;
case 0x54327a:goto L54327a;
case 0x54327e:c.instructions+=6;goto B54327e;
case 0x54327f:c.instructions+=5;goto B54327f;
case 0x543280:c.instructions+=4;goto B543280;
case 0x543281:c.instructions+=3;goto B543281;
case 0x543282:c.instructions+=2;goto B543282;
case 0x543285:c.instructions+=1;goto B543285;
case 0x543288:goto L543288;
case 0x543289:c.instructions+=6;goto B543289;
case 0x54328a:c.instructions+=5;goto B54328a;
case 0x54328b:c.instructions+=4;goto B54328b;
case 0x54328d:c.instructions+=3;goto B54328d;
case 0x54328e:c.instructions+=2;goto B54328e;
case 0x543291:c.instructions+=1;goto B543291;
case 0x5432a0:goto L5432a0;
case 0x5432a1:c.instructions+=9;goto B5432a1;
case 0x5432a2:c.instructions+=8;goto B5432a2;
case 0x5432a3:c.instructions+=7;goto B5432a3;
case 0x5432a5:c.instructions+=6;goto B5432a5;
case 0x5432a8:c.instructions+=5;goto B5432a8;
case 0x5432ab:c.instructions+=4;goto B5432ab;
case 0x5432ad:c.instructions+=3;goto B5432ad;
case 0x5432af:c.instructions+=2;goto B5432af;
case 0x5432b0:c.instructions+=1;goto B5432b0;
case 0x5432b6:goto L5432b6;
case 0x5432b9:c.instructions+=3;goto B5432b9;
case 0x5432bc:c.instructions+=2;goto B5432bc;
case 0x5432be:c.instructions+=1;goto B5432be;
case 0x5432c4:goto L5432c4;
case 0x5432ca:c.instructions+=2;goto B5432ca;
case 0x5432cc:c.instructions+=1;goto B5432cc;
case 0x5432ce:goto L5432ce;
case 0x5432d0:c.instructions+=1;goto B5432d0;
case 0x5432d5:goto L5432d5;
case 0x5432da:goto L5432da;
case 0x5432de:c.instructions+=2;goto B5432de;
case 0x5432e1:c.instructions+=1;goto B5432e1;
case 0x5432e7:goto L5432e7;
case 0x5432ea:c.instructions+=2;goto B5432ea;
case 0x5432ec:c.instructions+=1;goto B5432ec;
case 0x5432ee:goto L5432ee;
case 0x5432f1:c.instructions+=1;goto B5432f1;
case 0x5432f3:goto L5432f3;
case 0x5432f5:goto L5432f5;
case 0x5432f8:c.instructions+=2;goto B5432f8;
case 0x5432fa:c.instructions+=1;goto B5432fa;
case 0x543300:goto L543300;
case 0x543303:c.instructions+=3;goto B543303;
case 0x543305:c.instructions+=2;goto B543305;
case 0x543308:c.instructions+=1;goto B543308;
case 0x54330a:goto L54330a;
case 0x54330d:c.instructions+=1;goto B54330d;
case 0x54330f:goto L54330f;
case 0x543311:goto L543311;
case 0x543313:c.instructions+=9;goto B543313;
case 0x543315:c.instructions+=8;goto B543315;
case 0x543317:c.instructions+=7;goto B543317;
case 0x543319:c.instructions+=6;goto B543319;
case 0x54331c:c.instructions+=5;goto B54331c;
case 0x54331e:c.instructions+=4;goto B54331e;
case 0x543321:c.instructions+=3;goto B543321;
case 0x543324:c.instructions+=2;goto B543324;
case 0x543326:c.instructions+=1;goto B543326;
case 0x543328:goto L543328;
case 0x54332b:c.instructions+=1;goto B54332b;
case 0x54332d:goto L54332d;
case 0x54332f:goto L54332f;
case 0x543331:c.instructions+=1;goto B543331;
case 0x543333:goto L543333;
case 0x543336:c.instructions+=1;goto B543336;
case 0x543338:goto L543338;
case 0x54333a:goto L54333a;
case 0x54333c:c.instructions+=8;goto B54333c;
case 0x54333e:c.instructions+=7;goto B54333e;
case 0x543341:c.instructions+=6;goto B543341;
case 0x543344:c.instructions+=5;goto B543344;
case 0x543346:c.instructions+=4;goto B543346;
case 0x543349:c.instructions+=3;goto B543349;
case 0x54334c:c.instructions+=2;goto B54334c;
case 0x54334e:c.instructions+=1;goto B54334e;
case 0x543350:goto L543350;
case 0x543353:c.instructions+=2;goto B543353;
case 0x543355:c.instructions+=1;goto B543355;
case 0x543357:goto L543357;
case 0x54335a:c.instructions+=2;goto B54335a;
case 0x54335d:c.instructions+=1;goto B54335d;
case 0x543362:goto L543362;
case 0x543364:c.instructions+=2;goto B543364;
case 0x543367:c.instructions+=1;goto B543367;
case 0x54336c:goto L54336c;
case 0x54336f:c.instructions+=3;goto B54336f;
case 0x543370:c.instructions+=2;goto B543370;
case 0x543372:c.instructions+=1;goto B543372;
case 0x543377:goto L543377;
case 0x54337a:c.instructions+=3;goto B54337a;
case 0x54337c:c.instructions+=2;goto B54337c;
case 0x54337e:c.instructions+=1;goto B54337e;
case 0x543384:goto L543384;
case 0x543385:c.instructions+=4;goto B543385;
case 0x543388:c.instructions+=3;goto B543388;
case 0x54338b:c.instructions+=2;goto B54338b;
case 0x54338d:c.instructions+=1;goto B54338d;
case 0x54338f:goto L54338f;
case 0x543392:c.instructions+=2;goto B543392;
case 0x543395:c.instructions+=1;goto B543395;
case 0x54339a:goto L54339a;
case 0x54339d:c.instructions+=1;goto B54339d;
case 0x5433a3:goto L5433a3;
case 0x5433a5:c.instructions+=2;goto B5433a5;
case 0x5433a7:c.instructions+=1;goto B5433a7;
case 0x5433a9:goto L5433a9;
case 0x5433ac:c.instructions+=1;goto B5433ac;
case 0x5433ae:goto L5433ae;
case 0x5433b0:goto L5433b0;
case 0x5433b3:c.instructions+=2;goto B5433b3;
case 0x5433b5:c.instructions+=1;goto B5433b5;
case 0x5433bb:goto L5433bb;
case 0x5433be:c.instructions+=2;goto B5433be;
case 0x5433c0:c.instructions+=1;goto B5433c0;
case 0x5433c2:goto L5433c2;
case 0x5433c5:c.instructions+=1;goto B5433c5;
case 0x5433c7:goto L5433c7;
case 0x5433c9:goto L5433c9;
case 0x5433cb:c.instructions+=1;goto B5433cb;
case 0x5433cd:goto L5433cd;
case 0x5433d0:c.instructions+=1;goto B5433d0;
case 0x5433d2:goto L5433d2;
case 0x5433d4:goto L5433d4;
case 0x5433d6:c.instructions+=6;goto B5433d6;
case 0x5433d9:c.instructions+=5;goto B5433d9;
case 0x5433db:c.instructions+=4;goto B5433db;
case 0x5433de:c.instructions+=3;goto B5433de;
case 0x5433e1:c.instructions+=2;goto B5433e1;
case 0x5433e3:c.instructions+=1;goto B5433e3;
case 0x5433e5:goto L5433e5;
case 0x5433e8:c.instructions+=1;goto B5433e8;
case 0x5433ea:goto L5433ea;
case 0x5433ec:goto L5433ec;
case 0x5433ee:c.instructions+=1;goto B5433ee;
case 0x5433f0:goto L5433f0;
case 0x5433f3:c.instructions+=1;goto B5433f3;
case 0x5433f5:goto L5433f5;
case 0x5433f7:goto L5433f7;
case 0x5433fa:c.instructions+=8;goto B5433fa;
case 0x5433fc:c.instructions+=7;goto B5433fc;
case 0x5433ff:c.instructions+=6;goto B5433ff;
case 0x543402:c.instructions+=5;goto B543402;
case 0x543404:c.instructions+=4;goto B543404;
case 0x543407:c.instructions+=3;goto B543407;
case 0x54340a:c.instructions+=2;goto B54340a;
case 0x54340c:c.instructions+=1;goto B54340c;
case 0x54340e:goto L54340e;
case 0x543411:c.instructions+=1;goto B543411;
case 0x543413:goto L543413;
case 0x543416:c.instructions+=2;goto B543416;
case 0x543418:c.instructions+=1;goto B543418;
case 0x54341a:goto L54341a;
case 0x54341d:c.instructions+=1;goto B54341d;
case 0x54341f:goto L54341f;
case 0x543421:goto L543421;
case 0x543423:c.instructions+=1;goto B543423;
case 0x543425:goto L543425;
case 0x543428:goto L543428;
case 0x543429:c.instructions+=2;goto B543429;
case 0x54342b:c.instructions+=1;goto B54342b;
case 0x543430:goto L543430;
case 0x543432:goto L543432;
case 0x543436:c.instructions+=2;goto B543436;
case 0x543438:c.instructions+=1;goto B543438;
case 0x54343a:goto L54343a;
case 0x54343c:c.instructions+=2;goto B54343c;
case 0x54343e:c.instructions+=1;goto B54343e;
case 0x543441:goto L543441;
case 0x543447:c.instructions+=2;goto B543447;
case 0x543449:c.instructions+=1;goto B543449;
case 0x54344b:goto L54344b;
case 0x54344d:c.instructions+=1;goto B54344d;
case 0x543452:goto L543452;
case 0x543453:c.instructions+=5;goto B543453;
case 0x543454:c.instructions+=4;goto B543454;
case 0x543455:c.instructions+=3;goto B543455;
case 0x543457:c.instructions+=2;goto B543457;
case 0x543458:c.instructions+=1;goto B543458;
case 0x54345b:goto L54345b;
case 0x54345c:c.instructions+=5;goto B54345c;
case 0x54345d:c.instructions+=4;goto B54345d;
case 0x54345e:c.instructions+=3;goto B54345e;
case 0x543460:c.instructions+=2;goto B543460;
case 0x543461:c.instructions+=1;goto B543461;
case 0x543470:goto L543470;
case 0x543471:c.instructions+=5;goto B543471;
case 0x543473:c.instructions+=4;goto B543473;
case 0x543476:c.instructions+=3;goto B543476;
case 0x543479:c.instructions+=2;goto B543479;
case 0x54347b:c.instructions+=1;goto B54347b;
case 0x54347d:goto L54347d;
case 0x54347f:c.instructions+=2;goto B54347f;
case 0x543481:c.instructions+=1;goto B543481;
case 0x543483:goto L543483;
case 0x543486:c.instructions+=1;goto B543486;
case 0x543488:goto L543488;
case 0x54348a:goto L54348a;
case 0x54348d:c.instructions+=3;goto B54348d;
case 0x543490:c.instructions+=2;goto B543490;
case 0x543492:c.instructions+=1;goto B543492;
case 0x543494:goto L543494;
case 0x543497:c.instructions+=1;goto B543497;
case 0x543499:goto L543499;
case 0x54349b:goto L54349b;
case 0x54349e:c.instructions+=4;goto B54349e;
case 0x5434a1:c.instructions+=3;goto B5434a1;
case 0x5434a5:c.instructions+=2;goto B5434a5;
case 0x5434a7:c.instructions+=1;goto B5434a7;
case 0x5434a9:goto L5434a9;
case 0x5434ab:c.instructions+=2;goto B5434ab;
case 0x5434ad:c.instructions+=1;goto B5434ad;
case 0x5434b0:goto L5434b0;
case 0x5434b6:c.instructions+=2;goto B5434b6;
case 0x5434b8:c.instructions+=1;goto B5434b8;
case 0x5434ba:goto L5434ba;
case 0x5434bc:c.instructions+=1;goto B5434bc;
case 0x5434c1:goto L5434c1;
case 0x5434c3:c.instructions+=2;goto B5434c3;
case 0x5434c4:c.instructions+=1;goto B5434c4;
case 0x5434c7:goto L5434c7;
case 0x5434c9:c.instructions+=2;goto B5434c9;
case 0x5434ca:c.instructions+=1;goto B5434ca;
case 0x5434d0:goto L5434d0;
case 0x5434d1:c.instructions+=5;goto B5434d1;
case 0x5434d2:c.instructions+=4;goto B5434d2;
case 0x5434d6:c.instructions+=3;goto B5434d6;
case 0x5434d8:c.instructions+=2;goto B5434d8;
case 0x5434da:c.instructions+=1;goto B5434da;
case 0x5434dc:goto L5434dc;
case 0x5434df:c.instructions+=5;goto B5434df;
case 0x5434e0:c.instructions+=4;goto B5434e0;
case 0x5434e1:c.instructions+=3;goto B5434e1;
case 0x5434e4:c.instructions+=2;goto B5434e4;
case 0x5434e6:c.instructions+=1;goto B5434e6;
case 0x5434e8:goto L5434e8;
case 0x5434eb:c.instructions+=3;goto B5434eb;
case 0x5434ee:c.instructions+=2;goto B5434ee;
case 0x5434f0:c.instructions+=1;goto B5434f0;
case 0x5434f2:goto L5434f2;
case 0x5434f3:c.instructions+=3;goto B5434f3;
case 0x5434f5:c.instructions+=2;goto B5434f5;
case 0x5434f9:c.instructions+=1;goto B5434f9;
case 0x5434fe:goto L5434fe;
case 0x543500:c.instructions+=2;goto B543500;
case 0x543502:c.instructions+=1;goto B543502;
case 0x543504:goto L543504;
case 0x543507:c.instructions+=1;goto B543507;
case 0x543509:goto L543509;
case 0x54350b:c.instructions+=2;goto B54350b;
case 0x54350d:c.instructions+=1;goto B54350d;
case 0x543512:goto L543512;
case 0x543514:c.instructions+=1;goto B543514;
case 0x543516:goto L543516;
case 0x543519:c.instructions+=2;goto B543519;
case 0x54351b:c.instructions+=1;goto B54351b;
case 0x54351d:goto L54351d;
case 0x543520:c.instructions+=1;goto B543520;
case 0x543522:goto L543522;
case 0x543524:c.instructions+=2;goto B543524;
case 0x543526:c.instructions+=1;goto B543526;
case 0x54352b:goto L54352b;
case 0x54352d:c.instructions+=1;goto B54352d;
case 0x54352f:goto L54352f;
case 0x543532:c.instructions+=2;goto B543532;
case 0x543534:c.instructions+=1;goto B543534;
case 0x543536:goto L543536;
case 0x543539:c.instructions+=1;goto B543539;
case 0x54353b:goto L54353b;
case 0x54353d:goto L54353d;
case 0x54353f:c.instructions+=1;goto B54353f;
case 0x543541:goto L543541;
case 0x543543:c.instructions+=1;goto B543543;
case 0x543548:goto L543548;
case 0x543549:c.instructions+=1;goto B543549;
case 0x54354a:goto L54354a;
case 0x54354b:c.instructions+=2;goto B54354b;
case 0x54354c:c.instructions+=1;goto B54354c;
case 0x543550:goto L543550;
case 0x543551:c.instructions+=5;goto B543551;
case 0x543552:c.instructions+=4;goto B543552;
case 0x543553:c.instructions+=3;goto B543553;
case 0x543555:c.instructions+=2;goto B543555;
case 0x543558:c.instructions+=1;goto B543558;
case 0x54355b:goto L54355b;
case 0x54355d:c.instructions+=1;goto B54355d;
case 0x54355f:goto L54355f;
case 0x543562:c.instructions+=1;goto B543562;
case 0x543564:goto L543564;
case 0x543566:goto L543566;
case 0x543568:c.instructions+=1;goto B543568;
case 0x54356a:goto L54356a;
case 0x54356d:c.instructions+=1;goto B54356d;
case 0x54356f:goto L54356f;
case 0x543571:goto L543571;
case 0x543573:c.instructions+=1;goto B543573;
case 0x543575:goto L543575;
case 0x543577:c.instructions+=2;goto B543577;
case 0x543579:c.instructions+=1;goto B543579;
case 0x54357e:goto L54357e;
case 0x543581:c.instructions+=1;goto B543581;
case 0x543583:goto L543583;
case 0x543584:c.instructions+=3;goto B543584;
case 0x543585:c.instructions+=2;goto B543585;
case 0x543586:c.instructions+=1;goto B543586;
case 0x543590:goto L543590;
case 0x543591:c.instructions+=5;goto B543591;
case 0x543592:c.instructions+=4;goto B543592;
case 0x543593:c.instructions+=3;goto B543593;
case 0x543595:c.instructions+=2;goto B543595;
case 0x543598:c.instructions+=1;goto B543598;
case 0x54359b:goto L54359b;
case 0x54359d:c.instructions+=1;goto B54359d;
case 0x54359f:goto L54359f;
case 0x5435a2:c.instructions+=1;goto B5435a2;
case 0x5435a4:goto L5435a4;
case 0x5435a6:goto L5435a6;
case 0x5435a8:c.instructions+=1;goto B5435a8;
case 0x5435aa:goto L5435aa;
case 0x5435ad:c.instructions+=1;goto B5435ad;
case 0x5435af:goto L5435af;
case 0x5435b1:goto L5435b1;
case 0x5435b3:c.instructions+=1;goto B5435b3;
case 0x5435b5:goto L5435b5;
case 0x5435b7:c.instructions+=2;goto B5435b7;
case 0x5435b9:c.instructions+=1;goto B5435b9;
case 0x5435be:goto L5435be;
case 0x5435c1:c.instructions+=1;goto B5435c1;
case 0x5435c3:goto L5435c3;
case 0x5435c4:c.instructions+=3;goto B5435c4;
case 0x5435c5:c.instructions+=2;goto B5435c5;
case 0x5435c6:c.instructions+=1;goto B5435c6;
case 0x5435d0:goto L5435d0;
case 0x5435d2:c.instructions+=39;goto B5435d2;
case 0x5435d7:c.instructions+=38;goto B5435d7;
case 0x5435dd:c.instructions+=37;goto B5435dd;
case 0x5435de:c.instructions+=36;goto B5435de;
case 0x5435e5:c.instructions+=35;goto B5435e5;
case 0x5435e6:c.instructions+=34;goto B5435e6;
case 0x5435e7:c.instructions+=33;goto B5435e7;
case 0x5435e8:c.instructions+=32;goto B5435e8;
case 0x5435e9:c.instructions+=31;goto B5435e9;
case 0x5435eb:c.instructions+=30;goto B5435eb;
case 0x5435ee:c.instructions+=29;goto B5435ee;
case 0x5435f4:c.instructions+=28;goto B5435f4;
case 0x5435f5:c.instructions+=27;goto B5435f5;
case 0x5435f9:c.instructions+=26;goto B5435f9;
case 0x5435fb:c.instructions+=25;goto B5435fb;
case 0x5435fe:c.instructions+=24;goto B5435fe;
case 0x543602:c.instructions+=23;goto B543602;
case 0x543606:c.instructions+=22;goto B543606;
case 0x54360a:c.instructions+=21;goto B54360a;
case 0x54360c:c.instructions+=20;goto B54360c;
case 0x54360e:c.instructions+=19;goto B54360e;
case 0x543612:c.instructions+=18;goto B543612;
case 0x543615:c.instructions+=17;goto B543615;
case 0x543618:c.instructions+=16;goto B543618;
case 0x54361b:c.instructions+=15;goto B54361b;
case 0x54361e:c.instructions+=14;goto B54361e;
case 0x543621:c.instructions+=13;goto B543621;
case 0x543624:c.instructions+=12;goto B543624;
case 0x543627:c.instructions+=11;goto B543627;
case 0x54362b:c.instructions+=10;goto B54362b;
case 0x54362f:c.instructions+=9;goto B54362f;
case 0x543632:c.instructions+=8;goto B543632;
case 0x543635:c.instructions+=7;goto B543635;
case 0x543638:c.instructions+=6;goto B543638;
case 0x54363b:c.instructions+=5;goto B54363b;
case 0x54363e:c.instructions+=4;goto B54363e;
case 0x543645:c.instructions+=3;goto B543645;
case 0x54364c:c.instructions+=2;goto B54364c;
case 0x54364f:c.instructions+=1;goto B54364f;
case 0x543654:goto L543654;
case 0x543657:c.instructions+=2;goto B543657;
case 0x543659:c.instructions+=1;goto B543659;
case 0x54365b:goto L54365b;
case 0x543660:c.instructions+=9;goto B543660;
case 0x543662:c.instructions+=8;goto B543662;
case 0x543665:c.instructions+=7;goto B543665;
case 0x543668:c.instructions+=6;goto B543668;
case 0x54366b:c.instructions+=5;goto B54366b;
case 0x54366e:c.instructions+=4;goto B54366e;
case 0x543671:c.instructions+=3;goto B543671;
case 0x543675:c.instructions+=2;goto B543675;
case 0x54367b:c.instructions+=1;goto B54367b;
case 0x54367d:goto L54367d;
case 0x54367f:goto L54367f;
case 0x543683:c.instructions+=7;goto B543683;
case 0x543686:c.instructions+=6;goto B543686;
case 0x54368d:c.instructions+=5;goto B54368d;
case 0x543690:c.instructions+=4;goto B543690;
case 0x543694:c.instructions+=3;goto B543694;
case 0x543697:c.instructions+=2;goto B543697;
case 0x543698:c.instructions+=1;goto B543698;
case 0x54369d:goto L54369d;
case 0x5436a0:c.instructions+=3;goto B5436a0;
case 0x5436a2:c.instructions+=2;goto B5436a2;
case 0x5436a4:c.instructions+=1;goto B5436a4;
case 0x5436a6:goto L5436a6;
case 0x5436a7:c.instructions+=1;goto B5436a7;
case 0x5436ac:goto L5436ac;
case 0x5436af:c.instructions+=2;goto B5436af;
case 0x5436b1:c.instructions+=1;goto B5436b1;
case 0x5436b3:goto L5436b3;
case 0x5436b4:c.instructions+=2;goto B5436b4;
case 0x5436b6:c.instructions+=1;goto B5436b6;
case 0x5436bb:goto L5436bb;
case 0x5436bd:c.instructions+=1;goto B5436bd;
case 0x5436bf:goto L5436bf;
case 0x5436c4:c.instructions+=2;goto B5436c4;
case 0x5436c6:c.instructions+=1;goto B5436c6;
case 0x5436c8:goto L5436c8;
case 0x5436cb:c.instructions+=3;goto B5436cb;
case 0x5436cc:c.instructions+=2;goto B5436cc;
case 0x5436cd:c.instructions+=1;goto B5436cd;
case 0x5436d2:goto L5436d2;
case 0x5436d4:goto L5436d4;
case 0x5436d6:goto L5436d6;
case 0x5436d9:c.instructions+=6;goto B5436d9;
case 0x5436da:c.instructions+=5;goto B5436da;
case 0x5436dd:c.instructions+=4;goto B5436dd;
case 0x5436de:c.instructions+=3;goto B5436de;
case 0x5436df:c.instructions+=2;goto B5436df;
case 0x5436e2:c.instructions+=1;goto B5436e2;
case 0x5436e7:goto L5436e7;
case 0x5436ea:c.instructions+=6;goto B5436ea;
case 0x5436ed:c.instructions+=5;goto B5436ed;
case 0x5436ee:c.instructions+=4;goto B5436ee;
case 0x5436f1:c.instructions+=3;goto B5436f1;
case 0x5436f2:c.instructions+=2;goto B5436f2;
case 0x5436f3:c.instructions+=1;goto B5436f3;
case 0x5436f8:goto L5436f8;
case 0x5436fb:c.instructions+=3;goto B5436fb;
case 0x5436fc:c.instructions+=2;goto B5436fc;
case 0x5436fe:c.instructions+=1;goto B5436fe;
case 0x543703:goto L543703;
case 0x543706:c.instructions+=3;goto B543706;
case 0x543707:c.instructions+=2;goto B543707;
case 0x54370a:c.instructions+=1;goto B54370a;
case 0x54370f:goto L54370f;
case 0x543712:c.instructions+=6;goto B543712;
case 0x543713:c.instructions+=5;goto B543713;
case 0x543716:c.instructions+=4;goto B543716;
case 0x543717:c.instructions+=3;goto B543717;
case 0x54371a:c.instructions+=2;goto B54371a;
case 0x54371b:c.instructions+=1;goto B54371b;
case 0x543720:goto L543720;
case 0x543726:c.instructions+=4;goto B543726;
case 0x543729:c.instructions+=3;goto B543729;
case 0x54372c:c.instructions+=2;goto B54372c;
case 0x54372e:c.instructions+=1;goto B54372e;
case 0x543730:goto L543730;
case 0x543732:c.instructions+=1;goto B543732;
case 0x543734:goto L543734;
case 0x543737:c.instructions+=4;goto B543737;
case 0x54373a:c.instructions+=3;goto B54373a;
case 0x54373b:c.instructions+=2;goto B54373b;
case 0x54373c:c.instructions+=1;goto B54373c;
case 0x543741:goto L543741;
case 0x543745:c.instructions+=4;goto B543745;
case 0x543749:c.instructions+=3;goto B543749;
case 0x54374a:c.instructions+=2;goto B54374a;
case 0x54374b:c.instructions+=1;goto B54374b;
case 0x543750:goto L543750;
case 0x543754:c.instructions+=3;goto B543754;
case 0x543755:c.instructions+=2;goto B543755;
case 0x543758:c.instructions+=1;goto B543758;
case 0x54375d:goto L54375d;
case 0x543760:c.instructions+=3;goto B543760;
case 0x543762:c.instructions+=2;goto B543762;
case 0x543764:c.instructions+=1;goto B543764;
case 0x543766:goto L543766;
case 0x543767:c.instructions+=1;goto B543767;
case 0x54376c:goto L54376c;
case 0x54376f:c.instructions+=2;goto B54376f;
case 0x543771:c.instructions+=1;goto B543771;
case 0x543773:goto L543773;
case 0x543774:c.instructions+=2;goto B543774;
case 0x543776:c.instructions+=1;goto B543776;
case 0x54377b:goto L54377b;
case 0x54377d:c.instructions+=1;goto B54377d;
case 0x54377f:goto L54377f;
case 0x543784:c.instructions+=2;goto B543784;
case 0x543786:c.instructions+=1;goto B543786;
case 0x543788:goto L543788;
case 0x54378b:c.instructions+=3;goto B54378b;
case 0x54378c:c.instructions+=2;goto B54378c;
case 0x54378d:c.instructions+=1;goto B54378d;
case 0x543792:goto L543792;
case 0x543795:c.instructions+=1;goto B543795;
case 0x543797:goto L543797;
case 0x54379a:goto L54379a;
case 0x54379e:c.instructions+=8;goto B54379e;
case 0x54379f:c.instructions+=7;goto B54379f;
case 0x5437a1:c.instructions+=6;goto B5437a1;
case 0x5437a2:c.instructions+=5;goto B5437a2;
case 0x5437a3:c.instructions+=4;goto B5437a3;
case 0x5437a4:c.instructions+=3;goto B5437a4;
case 0x5437ab:c.instructions+=2;goto B5437ab;
case 0x5437ae:c.instructions+=1;goto B5437ae;
case 0x5437c0:goto L5437c0;
case 0x5437c3:c.instructions+=4;goto B5437c3;
case 0x5437c4:c.instructions+=3;goto B5437c4;
case 0x5437c7:c.instructions+=2;goto B5437c7;
case 0x5437c9:c.instructions+=1;goto B5437c9;
case 0x5437cb:goto L5437cb;
case 0x5437ce:c.instructions+=5;goto B5437ce;
case 0x5437cf:c.instructions+=4;goto B5437cf;
case 0x5437d3:c.instructions+=3;goto B5437d3;
case 0x5437d6:c.instructions+=2;goto B5437d6;
case 0x5437d8:c.instructions+=1;goto B5437d8;
case 0x5437da:goto L5437da;
case 0x5437dc:c.instructions+=2;goto B5437dc;
case 0x5437de:c.instructions+=1;goto B5437de;
case 0x5437e0:goto L5437e0;
case 0x5437e3:c.instructions+=1;goto B5437e3;
case 0x5437e5:goto L5437e5;
case 0x5437e7:goto L5437e7;
case 0x5437e9:c.instructions+=1;goto B5437e9;
case 0x5437eb:goto L5437eb;
case 0x5437ee:c.instructions+=1;goto B5437ee;
case 0x5437f0:goto L5437f0;
case 0x5437f3:c.instructions+=1;goto B5437f3;
case 0x5437f5:goto L5437f5;
case 0x5437f8:c.instructions+=2;goto B5437f8;
case 0x5437fa:c.instructions+=1;goto B5437fa;
case 0x5437fc:goto L5437fc;
case 0x5437ff:c.instructions+=1;goto B5437ff;
case 0x543801:goto L543801;
case 0x543803:goto L543803;
case 0x543805:c.instructions+=1;goto B543805;
case 0x543807:goto L543807;
case 0x54380a:goto L54380a;
case 0x54380c:c.instructions+=1;goto B54380c;
case 0x54380e:goto L54380e;
case 0x543811:c.instructions+=1;goto B543811;
case 0x543813:goto L543813;
case 0x543815:goto L543815;
case 0x543817:c.instructions+=2;goto B543817;
case 0x543818:c.instructions+=1;goto B543818;
case 0x54381a:goto L54381a;
case 0x54381d:c.instructions+=3;goto B54381d;
case 0x54381f:c.instructions+=2;goto B54381f;
case 0x543820:c.instructions+=1;goto B543820;
case 0x543822:goto L543822;
case 0x543825:c.instructions+=2;goto B543825;
case 0x543829:c.instructions+=1;goto B543829;
case 0x54382e:goto L54382e;
case 0x543831:c.instructions+=2;goto B543831;
case 0x543835:c.instructions+=1;goto B543835;
case 0x54383a:goto L54383a;
case 0x54383b:c.instructions+=1;goto B54383b;
case 0x543840:goto L543840;
case 0x543842:c.instructions+=37;goto B543842;
case 0x543847:c.instructions+=36;goto B543847;
case 0x54384d:c.instructions+=35;goto B54384d;
case 0x54384e:c.instructions+=34;goto B54384e;
case 0x543855:c.instructions+=33;goto B543855;
case 0x543856:c.instructions+=32;goto B543856;
case 0x543857:c.instructions+=31;goto B543857;
case 0x543858:c.instructions+=30;goto B543858;
case 0x543859:c.instructions+=29;goto B543859;
case 0x54385b:c.instructions+=28;goto B54385b;
case 0x54385e:c.instructions+=27;goto B54385e;
case 0x543864:c.instructions+=26;goto B543864;
case 0x543865:c.instructions+=25;goto B543865;
case 0x543869:c.instructions+=24;goto B543869;
case 0x54386b:c.instructions+=23;goto B54386b;
case 0x54386e:c.instructions+=22;goto B54386e;
case 0x543872:c.instructions+=21;goto B543872;
case 0x543876:c.instructions+=20;goto B543876;
case 0x54387a:c.instructions+=19;goto B54387a;
case 0x54387e:c.instructions+=18;goto B54387e;
case 0x543880:c.instructions+=17;goto B543880;
case 0x543883:c.instructions+=16;goto B543883;
case 0x543888:c.instructions+=15;goto B543888;
case 0x543889:c.instructions+=14;goto B543889;
case 0x54388d:c.instructions+=13;goto B54388d;
case 0x543890:c.instructions+=12;goto B543890;
case 0x543893:c.instructions+=11;goto B543893;
case 0x543896:c.instructions+=10;goto B543896;
case 0x543899:c.instructions+=9;goto B543899;
case 0x5438a0:c.instructions+=8;goto B5438a0;
case 0x5438a3:c.instructions+=7;goto B5438a3;
case 0x5438a6:c.instructions+=6;goto B5438a6;
case 0x5438a9:c.instructions+=5;goto B5438a9;
case 0x5438ac:c.instructions+=4;goto B5438ac;
case 0x5438af:c.instructions+=3;goto B5438af;
case 0x5438b2:c.instructions+=2;goto B5438b2;
case 0x5438b9:c.instructions+=1;goto B5438b9;
case 0x5438be:goto L5438be;
case 0x5438c1:c.instructions+=3;goto B5438c1;
case 0x5438c3:c.instructions+=2;goto B5438c3;
case 0x5438c5:c.instructions+=1;goto B5438c5;
case 0x5438c7:goto L5438c7;
case 0x5438c8:c.instructions+=1;goto B5438c8;
case 0x5438cd:goto L5438cd;
case 0x5438d0:c.instructions+=2;goto B5438d0;
case 0x5438d2:c.instructions+=1;goto B5438d2;
case 0x5438d4:goto L5438d4;
case 0x5438d5:c.instructions+=2;goto B5438d5;
case 0x5438d7:c.instructions+=1;goto B5438d7;
case 0x5438dc:goto L5438dc;
case 0x5438de:c.instructions+=1;goto B5438de;
case 0x5438e0:goto L5438e0;
case 0x5438e5:c.instructions+=2;goto B5438e5;
case 0x5438e7:c.instructions+=1;goto B5438e7;
case 0x5438e9:goto L5438e9;
case 0x5438ec:c.instructions+=3;goto B5438ec;
case 0x5438ed:c.instructions+=2;goto B5438ed;
case 0x5438ee:c.instructions+=1;goto B5438ee;
case 0x5438f3:goto L5438f3;
case 0x5438f5:goto L5438f5;
case 0x5438f7:goto L5438f7;
case 0x5438fa:c.instructions+=4;goto B5438fa;
case 0x5438fd:c.instructions+=3;goto B5438fd;
case 0x543901:c.instructions+=2;goto B543901;
case 0x543902:c.instructions+=1;goto B543902;
case 0x543907:goto L543907;
case 0x54390a:c.instructions+=3;goto B54390a;
case 0x54390c:c.instructions+=2;goto B54390c;
case 0x54390e:c.instructions+=1;goto B54390e;
case 0x543910:goto L543910;
case 0x543911:c.instructions+=1;goto B543911;
case 0x543916:goto L543916;
case 0x543919:c.instructions+=2;goto B543919;
case 0x54391b:c.instructions+=1;goto B54391b;
case 0x54391d:goto L54391d;
case 0x54391e:c.instructions+=2;goto B54391e;
case 0x543920:c.instructions+=1;goto B543920;
case 0x543925:goto L543925;
case 0x543927:c.instructions+=1;goto B543927;
case 0x543929:goto L543929;
case 0x54392e:c.instructions+=2;goto B54392e;
case 0x543930:c.instructions+=1;goto B543930;
case 0x543932:goto L543932;
case 0x543935:c.instructions+=3;goto B543935;
case 0x543936:c.instructions+=2;goto B543936;
case 0x543937:c.instructions+=1;goto B543937;
case 0x54393c:goto L54393c;
case 0x54393e:goto L54393e;
case 0x543940:goto L543940;
case 0x543944:c.instructions+=4;goto B543944;
case 0x543947:c.instructions+=3;goto B543947;
case 0x543948:c.instructions+=2;goto B543948;
case 0x54394b:c.instructions+=1;goto B54394b;
case 0x543950:goto L543950;
case 0x543953:c.instructions+=3;goto B543953;
case 0x543955:c.instructions+=2;goto B543955;
case 0x543957:c.instructions+=1;goto B543957;
case 0x543959:goto L543959;
case 0x54395a:c.instructions+=1;goto B54395a;
case 0x54395f:goto L54395f;
case 0x543962:c.instructions+=2;goto B543962;
case 0x543964:c.instructions+=1;goto B543964;
case 0x543966:goto L543966;
case 0x543967:c.instructions+=2;goto B543967;
case 0x543969:c.instructions+=1;goto B543969;
case 0x54396e:goto L54396e;
case 0x543970:c.instructions+=1;goto B543970;
case 0x543972:goto L543972;
case 0x543977:c.instructions+=2;goto B543977;
case 0x543979:c.instructions+=1;goto B543979;
case 0x54397b:goto L54397b;
case 0x54397e:c.instructions+=3;goto B54397e;
case 0x54397f:c.instructions+=2;goto B54397f;
case 0x543980:c.instructions+=1;goto B543980;
case 0x543985:goto L543985;
case 0x543988:c.instructions+=1;goto B543988;
case 0x54398a:goto L54398a;
case 0x54398d:goto L54398d;
case 0x543991:c.instructions+=8;goto B543991;
case 0x543992:c.instructions+=7;goto B543992;
case 0x543994:c.instructions+=6;goto B543994;
case 0x543995:c.instructions+=5;goto B543995;
case 0x543996:c.instructions+=4;goto B543996;
case 0x543997:c.instructions+=3;goto B543997;
case 0x54399e:c.instructions+=2;goto B54399e;
case 0x5439a1:c.instructions+=1;goto B5439a1;
case 0x5439b0:goto L5439b0;
case 0x5439b3:c.instructions+=9;goto B5439b3;
case 0x5439b4:c.instructions+=8;goto B5439b4;
case 0x5439b5:c.instructions+=7;goto B5439b5;
case 0x5439b7:c.instructions+=6;goto B5439b7;
case 0x5439ba:c.instructions+=5;goto B5439ba;
case 0x5439bf:c.instructions+=4;goto B5439bf;
case 0x5439c0:c.instructions+=3;goto B5439c0;
case 0x5439c4:c.instructions+=2;goto B5439c4;
case 0x5439c5:c.instructions+=1;goto B5439c5;
case 0x5439ca:goto L5439ca;
case 0x5439cd:c.instructions+=7;goto B5439cd;
case 0x5439ce:c.instructions+=6;goto B5439ce;
case 0x5439d2:c.instructions+=5;goto B5439d2;
case 0x5439d3:c.instructions+=4;goto B5439d3;
case 0x5439d7:c.instructions+=3;goto B5439d7;
case 0x5439d9:c.instructions+=2;goto B5439d9;
case 0x5439da:c.instructions+=1;goto B5439da;
case 0x5439df:goto L5439df;
case 0x5439e2:c.instructions+=4;goto B5439e2;
case 0x5439e6:c.instructions+=3;goto B5439e6;
case 0x5439e7:c.instructions+=2;goto B5439e7;
case 0x5439e8:c.instructions+=1;goto B5439e8;
case 0x5439ed:goto L5439ed;
case 0x5439ef:c.instructions+=3;goto B5439ef;
case 0x5439f2:c.instructions+=2;goto B5439f2;
case 0x5439f4:c.instructions+=1;goto B5439f4;
case 0x5439f6:goto L5439f6;
case 0x5439f7:c.instructions+=3;goto B5439f7;
case 0x5439f8:c.instructions+=2;goto B5439f8;
case 0x5439fb:c.instructions+=1;goto B5439fb;
case 0x5439fe:goto L5439fe;
case 0x543a01:c.instructions+=6;goto B543a01;
case 0x543a02:c.instructions+=5;goto B543a02;
case 0x543a06:c.instructions+=4;goto B543a06;
case 0x543a07:c.instructions+=3;goto B543a07;
case 0x543a09:c.instructions+=2;goto B543a09;
case 0x543a0c:c.instructions+=1;goto B543a0c;
case 0x543a0e:goto L543a0e;
case 0x543a0f:c.instructions+=5;goto B543a0f;
case 0x543a10:c.instructions+=4;goto B543a10;
case 0x543a12:c.instructions+=3;goto B543a12;
case 0x543a13:c.instructions+=2;goto B543a13;
case 0x543a16:c.instructions+=1;goto B543a16;
case 0x543a19:goto L543a19;
case 0x543a1c:c.instructions+=6;goto B543a1c;
case 0x543a1d:c.instructions+=5;goto B543a1d;
case 0x543a20:c.instructions+=4;goto B543a20;
case 0x543a21:c.instructions+=3;goto B543a21;
case 0x543a22:c.instructions+=2;goto B543a22;
case 0x543a25:c.instructions+=1;goto B543a25;
case 0x543a2a:goto L543a2a;
case 0x543a2b:c.instructions+=1;goto B543a2b;
case 0x543a30:goto L543a30;
case 0x543a33:c.instructions+=11;goto B543a33;
case 0x543a36:c.instructions+=10;goto B543a36;
case 0x543a39:c.instructions+=9;goto B543a39;
case 0x543a3c:c.instructions+=8;goto B543a3c;
case 0x543a3e:c.instructions+=7;goto B543a3e;
case 0x543a41:c.instructions+=6;goto B543a41;
case 0x543a44:c.instructions+=5;goto B543a44;
case 0x543a46:c.instructions+=4;goto B543a46;
case 0x543a49:c.instructions+=3;goto B543a49;
case 0x543a4c:c.instructions+=2;goto B543a4c;
case 0x543a4e:c.instructions+=1;goto B543a4e;
case 0x543a50:goto L543a50;
case 0x543a52:c.instructions+=2;goto B543a52;
case 0x543a54:c.instructions+=1;goto B543a54;
case 0x543a56:goto L543a56;
case 0x543a59:c.instructions+=1;goto B543a59;
case 0x543a5b:goto L543a5b;
case 0x543a5d:goto L543a5d;
case 0x543a60:c.instructions+=4;goto B543a60;
case 0x543a66:c.instructions+=3;goto B543a66;
case 0x543a68:c.instructions+=2;goto B543a68;
case 0x543a6b:c.instructions+=1;goto B543a6b;
case 0x543a6d:goto L543a6d;
case 0x543a6f:c.instructions+=1;goto B543a6f;
case 0x543a71:goto L543a71;
case 0x543a74:c.instructions+=4;goto B543a74;
case 0x543a77:c.instructions+=3;goto B543a77;
case 0x543a78:c.instructions+=2;goto B543a78;
case 0x543a79:c.instructions+=1;goto B543a79;
case 0x543a7e:goto L543a7e;
case 0x543a7f:c.instructions+=5;goto B543a7f;
case 0x543a80:c.instructions+=4;goto B543a80;
case 0x543a82:c.instructions+=3;goto B543a82;
case 0x543a83:c.instructions+=2;goto B543a83;
case 0x543a86:c.instructions+=1;goto B543a86;
case 0x543a90:goto L543a90;
case 0x543a92:c.instructions+=25;goto B543a92;
case 0x543a97:c.instructions+=24;goto B543a97;
case 0x543a9d:c.instructions+=23;goto B543a9d;
case 0x543a9e:c.instructions+=22;goto B543a9e;
case 0x543aa5:c.instructions+=21;goto B543aa5;
case 0x543aa6:c.instructions+=20;goto B543aa6;
case 0x543aaa:c.instructions+=19;goto B543aaa;
case 0x543aae:c.instructions+=18;goto B543aae;
case 0x543aaf:c.instructions+=17;goto B543aaf;
case 0x543ab0:c.instructions+=16;goto B543ab0;
case 0x543ab4:c.instructions+=15;goto B543ab4;
case 0x543ab5:c.instructions+=14;goto B543ab5;
case 0x543ab6:c.instructions+=13;goto B543ab6;
case 0x543aba:c.instructions+=12;goto B543aba;
case 0x543abc:c.instructions+=11;goto B543abc;
case 0x543ac0:c.instructions+=10;goto B543ac0;
case 0x543ac2:c.instructions+=9;goto B543ac2;
case 0x543ac3:c.instructions+=8;goto B543ac3;
case 0x543ac4:c.instructions+=7;goto B543ac4;
case 0x543ac5:c.instructions+=6;goto B543ac5;
case 0x543ac6:c.instructions+=5;goto B543ac6;
case 0x543ac7:c.instructions+=4;goto B543ac7;
case 0x543ac8:c.instructions+=3;goto B543ac8;
case 0x543aca:c.instructions+=2;goto B543aca;
case 0x543ace:c.instructions+=1;goto B543ace;
case 0x543ad3:goto L543ad3;
case 0x543ad4:c.instructions+=8;goto B543ad4;
case 0x543ad5:c.instructions+=7;goto B543ad5;
case 0x543ad6:c.instructions+=6;goto B543ad6;
case 0x543adb:c.instructions+=5;goto B543adb;
case 0x543adc:c.instructions+=4;goto B543adc;
case 0x543adf:c.instructions+=3;goto B543adf;
case 0x543ae3:c.instructions+=2;goto B543ae3;
case 0x543ae9:c.instructions+=1;goto B543ae9;
case 0x543aee:goto L543aee;
case 0x543af4:c.instructions+=21;goto B543af4;
case 0x543afa:c.instructions+=20;goto B543afa;
case 0x543b00:c.instructions+=19;goto B543b00;
case 0x543b06:c.instructions+=18;goto B543b06;
case 0x543b0d:c.instructions+=17;goto B543b0d;
case 0x543b12:c.instructions+=16;goto B543b12;
case 0x543b18:c.instructions+=15;goto B543b18;
case 0x543b1e:c.instructions+=14;goto B543b1e;
case 0x543b23:c.instructions+=13;goto B543b23;
case 0x543b2a:c.instructions+=12;goto B543b2a;
case 0x543b30:c.instructions+=11;goto B543b30;
case 0x543b36:c.instructions+=10;goto B543b36;
case 0x543b3a:c.instructions+=9;goto B543b3a;
case 0x543b3b:c.instructions+=8;goto B543b3b;
case 0x543b41:c.instructions+=7;goto B543b41;
case 0x543b47:c.instructions+=6;goto B543b47;
case 0x543b4d:c.instructions+=5;goto B543b4d;
case 0x543b53:c.instructions+=4;goto B543b53;
case 0x543b59:c.instructions+=3;goto B543b59;
case 0x543b5f:c.instructions+=2;goto B543b5f;
case 0x543b66:c.instructions+=1;goto B543b66;
case 0x543b6b:goto L543b6b;
case 0x543b6e:c.instructions+=3;goto B543b6e;
case 0x543b70:c.instructions+=2;goto B543b70;
case 0x543b72:c.instructions+=1;goto B543b72;
case 0x543b74:goto L543b74;
case 0x543b75:c.instructions+=1;goto B543b75;
case 0x543b7a:goto L543b7a;
case 0x543b7d:c.instructions+=2;goto B543b7d;
case 0x543b7f:c.instructions+=1;goto B543b7f;
case 0x543b81:goto L543b81;
case 0x543b82:c.instructions+=2;goto B543b82;
case 0x543b84:c.instructions+=1;goto B543b84;
case 0x543b89:goto L543b89;
case 0x543b8b:c.instructions+=1;goto B543b8b;
case 0x543b8d:goto L543b8d;
case 0x543b92:c.instructions+=2;goto B543b92;
case 0x543b94:c.instructions+=1;goto B543b94;
case 0x543b96:goto L543b96;
case 0x543b99:c.instructions+=3;goto B543b99;
case 0x543b9a:c.instructions+=2;goto B543b9a;
case 0x543b9b:c.instructions+=1;goto B543b9b;
case 0x543ba0:goto L543ba0;
case 0x543ba2:c.instructions+=2;goto B543ba2;
case 0x543ba4:c.instructions+=1;goto B543ba4;
case 0x543ba6:goto L543ba6;
case 0x543bac:c.instructions+=5;goto B543bac;
case 0x543bad:c.instructions+=4;goto B543bad;
case 0x543bb3:c.instructions+=3;goto B543bb3;
case 0x543bb4:c.instructions+=2;goto B543bb4;
case 0x543bb5:c.instructions+=1;goto B543bb5;
case 0x543bba:goto L543bba;
case 0x543bbb:c.instructions+=1;goto B543bbb;
case 0x543bc0:goto L543bc0;
case 0x543bc3:goto L543bc3;
case 0x543bc7:c.instructions+=10;goto B543bc7;
case 0x543bc8:c.instructions+=9;goto B543bc8;
case 0x543bcf:c.instructions+=8;goto B543bcf;
case 0x543bd9:c.instructions+=7;goto B543bd9;
case 0x543bdb:c.instructions+=6;goto B543bdb;
case 0x543bdc:c.instructions+=5;goto B543bdc;
case 0x543bdd:c.instructions+=4;goto B543bdd;
case 0x543bde:c.instructions+=3;goto B543bde;
case 0x543be5:c.instructions+=2;goto B543be5;
case 0x543be8:c.instructions+=1;goto B543be8;
case 0x543bf0:goto L543bf0;
case 0x543bf1:c.instructions+=2;goto B543bf1;
case 0x543bf3:c.instructions+=1;goto B543bf3;
case 0x543bf8:goto L543bf8;
case 0x543bfd:c.instructions+=1;goto B543bfd;
case 0x543bff:goto L543bff;
case 0x543c00:c.instructions+=1;goto B543c00;
case 0x543c05:goto L543c05;
case 0x543c08:goto L543c08;
case 0x543c0a:c.instructions+=2;goto B543c0a;
case 0x543c0b:c.instructions+=1;goto B543c0b;
case 0x543c10:goto L543c10;
case 0x543c13:c.instructions+=11;goto B543c13;
case 0x543c14:c.instructions+=10;goto B543c14;
case 0x543c16:c.instructions+=9;goto B543c16;
case 0x543c19:c.instructions+=8;goto B543c19;
case 0x543c1c:c.instructions+=7;goto B543c1c;
case 0x543c1d:c.instructions+=6;goto B543c1d;
case 0x543c1e:c.instructions+=5;goto B543c1e;
case 0x543c23:c.instructions+=4;goto B543c23;
case 0x543c27:c.instructions+=3;goto B543c27;
case 0x543c29:c.instructions+=2;goto B543c29;
case 0x543c2a:c.instructions+=1;goto B543c2a;
case 0x543c2f:goto L543c2f;
case 0x543c32:c.instructions+=4;goto B543c32;
case 0x543c36:c.instructions+=3;goto B543c36;
case 0x543c37:c.instructions+=2;goto B543c37;
case 0x543c38:c.instructions+=1;goto B543c38;
case 0x543c3d:goto L543c3d;
case 0x543c40:c.instructions+=3;goto B543c40;
case 0x543c42:c.instructions+=2;goto B543c42;
case 0x543c46:c.instructions+=1;goto B543c46;
case 0x543c48:goto L543c48;
case 0x543c4c:c.instructions+=2;goto B543c4c;
case 0x543c4e:c.instructions+=1;goto B543c4e;
case 0x543c50:goto L543c50;
case 0x543c52:c.instructions+=2;goto B543c52;
case 0x543c54:c.instructions+=1;goto B543c54;
case 0x543c56:goto L543c56;
case 0x543c58:c.instructions+=3;goto B543c58;
case 0x543c59:c.instructions+=2;goto B543c59;
case 0x543c5c:c.instructions+=1;goto B543c5c;
case 0x543c5f:goto L543c5f;
case 0x543c62:c.instructions+=6;goto B543c62;
case 0x543c63:c.instructions+=5;goto B543c63;
case 0x543c67:c.instructions+=4;goto B543c67;
case 0x543c68:c.instructions+=3;goto B543c68;
case 0x543c6a:c.instructions+=2;goto B543c6a;
case 0x543c6d:c.instructions+=1;goto B543c6d;
case 0x543c6f:goto L543c6f;
case 0x543c70:c.instructions+=4;goto B543c70;
case 0x543c72:c.instructions+=3;goto B543c72;
case 0x543c73:c.instructions+=2;goto B543c73;
case 0x543c76:c.instructions+=1;goto B543c76;
case 0x543c79:goto L543c79;
case 0x543c7a:c.instructions+=8;goto B543c7a;
case 0x543c7b:c.instructions+=7;goto B543c7b;
case 0x543c7e:c.instructions+=6;goto B543c7e;
case 0x543c7f:c.instructions+=5;goto B543c7f;
case 0x543c82:c.instructions+=4;goto B543c82;
case 0x543c83:c.instructions+=3;goto B543c83;
case 0x543c84:c.instructions+=2;goto B543c84;
case 0x543c87:c.instructions+=1;goto B543c87;
case 0x543c8c:goto L543c8c;
case 0x543c90:c.instructions+=2;goto B543c90;
case 0x543c91:c.instructions+=1;goto B543c91;
case 0x543c96:goto L543c96;
case 0x543c99:c.instructions+=8;goto B543c99;
case 0x543c9a:c.instructions+=7;goto B543c9a;
case 0x543c9d:c.instructions+=6;goto B543c9d;
case 0x543ca3:c.instructions+=5;goto B543ca3;
case 0x543ca4:c.instructions+=4;goto B543ca4;
case 0x543ca5:c.instructions+=3;goto B543ca5;
case 0x543ca8:c.instructions+=2;goto B543ca8;
case 0x543caf:c.instructions+=1;goto B543caf;
case 0x543cb4:goto L543cb4;
case 0x543cb7:c.instructions+=6;goto B543cb7;
case 0x543cbb:c.instructions+=5;goto B543cbb;
case 0x543cbc:c.instructions+=4;goto B543cbc;
case 0x543cc0:c.instructions+=3;goto B543cc0;
case 0x543cc1:c.instructions+=2;goto B543cc1;
case 0x543cc2:c.instructions+=1;goto B543cc2;
case 0x543cc7:goto L543cc7;
case 0x543cca:c.instructions+=16;goto B543cca;
case 0x543cd0:c.instructions+=15;goto B543cd0;
case 0x543cd3:c.instructions+=14;goto B543cd3;
case 0x543cd6:c.instructions+=13;goto B543cd6;
case 0x543cd9:c.instructions+=12;goto B543cd9;
case 0x543cdd:c.instructions+=11;goto B543cdd;
case 0x543cde:c.instructions+=10;goto B543cde;
case 0x543cdf:c.instructions+=9;goto B543cdf;
case 0x543ce5:c.instructions+=8;goto B543ce5;
case 0x543ce8:c.instructions+=7;goto B543ce8;
case 0x543cea:c.instructions+=6;goto B543cea;
case 0x543ced:c.instructions+=5;goto B543ced;
case 0x543cf0:c.instructions+=4;goto B543cf0;
case 0x543cf2:c.instructions+=3;goto B543cf2;
case 0x543cf5:c.instructions+=2;goto B543cf5;
case 0x543cf7:c.instructions+=1;goto B543cf7;
case 0x543cf9:goto L543cf9;
case 0x543cfb:c.instructions+=2;goto B543cfb;
case 0x543cfd:c.instructions+=1;goto B543cfd;
case 0x543cff:goto L543cff;
case 0x543d02:c.instructions+=1;goto B543d02;
case 0x543d04:goto L543d04;
case 0x543d06:goto L543d06;
case 0x543d09:c.instructions+=4;goto B543d09;
case 0x543d0f:c.instructions+=3;goto B543d0f;
case 0x543d11:c.instructions+=2;goto B543d11;
case 0x543d14:c.instructions+=1;goto B543d14;
case 0x543d16:goto L543d16;
case 0x543d18:c.instructions+=1;goto B543d18;
case 0x543d1a:goto L543d1a;
case 0x543d1d:c.instructions+=4;goto B543d1d;
case 0x543d20:c.instructions+=3;goto B543d20;
case 0x543d21:c.instructions+=2;goto B543d21;
case 0x543d22:c.instructions+=1;goto B543d22;
case 0x543d27:goto L543d27;
case 0x543d2b:c.instructions+=4;goto B543d2b;
case 0x543d2c:c.instructions+=3;goto B543d2c;
case 0x543d2d:c.instructions+=2;goto B543d2d;
case 0x543d30:c.instructions+=1;goto B543d30;
case 0x543d40:goto L543d40;
case 0x543d43:c.instructions+=9;goto B543d43;
case 0x543d44:c.instructions+=8;goto B543d44;
case 0x543d46:c.instructions+=7;goto B543d46;
case 0x543d49:c.instructions+=6;goto B543d49;
case 0x543d4d:c.instructions+=5;goto B543d4d;
case 0x543d51:c.instructions+=4;goto B543d51;
case 0x543d56:c.instructions+=3;goto B543d56;
case 0x543d57:c.instructions+=2;goto B543d57;
case 0x543d5f:c.instructions+=1;goto B543d5f;
case 0x543d65:goto L543d65;
case 0x543d6b:goto L543d6b;
case 0x543d70:c.instructions+=1;goto B543d70;
case 0x543d76:goto L543d76;
case 0x543d7c:goto L543d7c;
case 0x543d81:c.instructions+=1;goto B543d81;
case 0x543d87:goto L543d87;
case 0x543d8d:goto L543d8d;
case 0x543d92:c.instructions+=1;goto B543d92;
case 0x543d98:goto L543d98;
case 0x543d9d:c.instructions+=1;goto B543d9d;
case 0x543da3:goto L543da3;
case 0x543da6:c.instructions+=3;goto B543da6;
case 0x543da9:c.instructions+=2;goto B543da9;
case 0x543dab:c.instructions+=1;goto B543dab;
case 0x543dad:goto L543dad;
case 0x543db5:goto L543db5;
case 0x543db8:c.instructions+=3;goto B543db8;
case 0x543dbb:c.instructions+=2;goto B543dbb;
case 0x543dbd:c.instructions+=1;goto B543dbd;
case 0x543dc3:goto L543dc3;
case 0x543dc6:c.instructions+=2;goto B543dc6;
case 0x543dc8:c.instructions+=1;goto B543dc8;
case 0x543dce:goto L543dce;
case 0x543dd1:c.instructions+=2;goto B543dd1;
case 0x543dd3:c.instructions+=1;goto B543dd3;
case 0x543dd9:goto L543dd9;
case 0x543ddb:c.instructions+=1;goto B543ddb;
case 0x543de1:goto L543de1;
case 0x543de4:c.instructions+=8;goto B543de4;
case 0x543de6:c.instructions+=7;goto B543de6;
case 0x543dea:c.instructions+=6;goto B543dea;
case 0x543ded:c.instructions+=5;goto B543ded;
case 0x543dee:c.instructions+=4;goto B543dee;
case 0x543df2:c.instructions+=3;goto B543df2;
case 0x543df3:c.instructions+=2;goto B543df3;
case 0x543df7:c.instructions+=1;goto B543df7;
case 0x543df9:goto L543df9;
case 0x543dfc:c.instructions+=2;goto B543dfc;
case 0x543dfe:c.instructions+=1;goto B543dfe;
case 0x543e00:goto L543e00;
case 0x543e02:c.instructions+=6;goto B543e02;
case 0x543e03:c.instructions+=5;goto B543e03;
case 0x543e04:c.instructions+=4;goto B543e04;
case 0x543e05:c.instructions+=3;goto B543e05;
case 0x543e0a:c.instructions+=2;goto B543e0a;
case 0x543e12:c.instructions+=1;goto B543e12;
case 0x543e15:goto L543e15;
case 0x543e17:goto L543e17;
case 0x543e1f:c.instructions+=1;goto B543e1f;
case 0x543e24:goto L543e24;
case 0x543e26:c.instructions+=1;goto B543e26;
case 0x543e2b:goto L543e2b;
case 0x543e2c:c.instructions+=5;goto B543e2c;
case 0x543e2d:c.instructions+=4;goto B543e2d;
case 0x543e2e:c.instructions+=3;goto B543e2e;
case 0x543e33:c.instructions+=2;goto B543e33;
case 0x543e35:c.instructions+=1;goto B543e35;
case 0x543e3a:goto L543e3a;
case 0x543e3b:c.instructions+=2;goto B543e3b;
case 0x543e3c:c.instructions+=1;goto B543e3c;
case 0x543e41:goto L543e41;
case 0x543e46:c.instructions+=1;goto B543e46;
case 0x543e4b:goto L543e4b;
case 0x543e4e:c.instructions+=5;goto B543e4e;
case 0x543e4f:c.instructions+=4;goto B543e4f;
case 0x543e56:c.instructions+=3;goto B543e56;
case 0x543e57:c.instructions+=2;goto B543e57;
case 0x543e5a:c.instructions+=1;goto B543e5a;
case 0x543e5d:goto L543e5d;
case 0x543e5f:c.instructions+=1;goto B543e5f;
case 0x543e64:goto L543e64;
case 0x543e65:c.instructions+=3;goto B543e65;
case 0x543e66:c.instructions+=2;goto B543e66;
case 0x543e69:c.instructions+=1;goto B543e69;
case 0x543e6c:goto L543e6c;
case 0x543e71:c.instructions+=1;goto B543e71;
case 0x543e77:goto L543e77;
case 0x543e79:c.instructions+=2;goto B543e79;
case 0x543e7b:c.instructions+=1;goto B543e7b;
case 0x543e7e:goto L543e7e;
case 0x543e7f:c.instructions+=4;goto B543e7f;
case 0x543e86:c.instructions+=3;goto B543e86;
case 0x543e87:c.instructions+=2;goto B543e87;
case 0x543e8a:c.instructions+=1;goto B543e8a;
case 0x543e8d:goto L543e8d;
case 0x543e92:c.instructions+=1;goto B543e92;
case 0x543e94:goto L543e94;
case 0x543e99:c.instructions+=1;goto B543e99;
case 0x543e9f:goto L543e9f;
case 0x543ea4:c.instructions+=1;goto B543ea4;
case 0x543eaa:goto L543eaa;
case 0x543ead:c.instructions+=2;goto B543ead;
case 0x543eb5:c.instructions+=1;goto B543eb5;
case 0x543eba:goto L543eba;
case 0x543ebe:c.instructions+=8;goto B543ebe;
case 0x543ec2:c.instructions+=7;goto B543ec2;
case 0x543ec6:c.instructions+=6;goto B543ec6;
case 0x543ec7:c.instructions+=5;goto B543ec7;
case 0x543ec8:c.instructions+=4;goto B543ec8;
case 0x543ec9:c.instructions+=3;goto B543ec9;
case 0x543ece:c.instructions+=2;goto B543ece;
case 0x543ed0:c.instructions+=1;goto B543ed0;
case 0x543ed5:goto L543ed5;
case 0x543eda:goto L543eda;
case 0x543ede:c.instructions+=1;goto B543ede;
case 0x543ee3:goto L543ee3;
case 0x543ee6:c.instructions+=3;goto B543ee6;
case 0x543ee9:c.instructions+=2;goto B543ee9;
case 0x543eeb:c.instructions+=1;goto B543eeb;
case 0x543ef1:goto L543ef1;
case 0x543ef4:c.instructions+=2;goto B543ef4;
case 0x543ef6:c.instructions+=1;goto B543ef6;
case 0x543efc:goto L543efc;
case 0x543eff:c.instructions+=2;goto B543eff;
case 0x543f01:c.instructions+=1;goto B543f01;
case 0x543f07:goto L543f07;
case 0x543f0a:c.instructions+=2;goto B543f0a;
case 0x543f0c:c.instructions+=1;goto B543f0c;
case 0x543f11:goto L543f11;
case 0x543f13:c.instructions+=1;goto B543f13;
case 0x543f15:goto L543f15;
case 0x543f17:c.instructions+=1;goto B543f17;
case 0x543f1c:goto L543f1c;
case 0x543f1e:c.instructions+=3;goto B543f1e;
case 0x543f20:c.instructions+=2;goto B543f20;
case 0x543f28:c.instructions+=1;goto B543f28;
case 0x543f2b:goto L543f2b;
case 0x543f2d:c.instructions+=1;goto B543f2d;
case 0x543f32:goto L543f32;
case 0x543f33:c.instructions+=3;goto B543f33;
case 0x543f36:c.instructions+=2;goto B543f36;
case 0x543f37:c.instructions+=1;goto B543f37;
case 0x543f3c:goto L543f3c;
case 0x543f3f:c.instructions+=1;goto B543f3f;
case 0x543f41:goto L543f41;
case 0x543f44:c.instructions+=3;goto B543f44;
case 0x543f47:c.instructions+=2;goto B543f47;
case 0x543f49:c.instructions+=1;goto B543f49;
case 0x543f4b:goto L543f4b;
case 0x543f4e:c.instructions+=2;goto B543f4e;
case 0x543f50:c.instructions+=1;goto B543f50;
case 0x543f52:goto L543f52;
case 0x543f55:c.instructions+=2;goto B543f55;
case 0x543f57:c.instructions+=1;goto B543f57;
case 0x543f59:goto L543f59;
case 0x543f5c:c.instructions+=2;goto B543f5c;
case 0x543f5e:c.instructions+=1;goto B543f5e;
case 0x543f63:goto L543f63;
case 0x543f65:c.instructions+=1;goto B543f65;
case 0x543f67:goto L543f67;
case 0x543f6f:goto L543f6f;
case 0x543f71:c.instructions+=1;goto B543f71;
case 0x543f76:goto L543f76;
case 0x543f78:c.instructions+=2;goto B543f78;
case 0x543f7a:c.instructions+=1;goto B543f7a;
case 0x543f7d:goto L543f7d;
case 0x543f7f:c.instructions+=1;goto B543f7f;
case 0x543f84:goto L543f84;
case 0x543f85:c.instructions+=3;goto B543f85;
case 0x543f88:c.instructions+=2;goto B543f88;
case 0x543f89:c.instructions+=1;goto B543f89;
case 0x543f8e:goto L543f8e;
case 0x543f91:goto L543f91;
case 0x543f95:c.instructions+=2;goto B543f95;
case 0x543f97:c.instructions+=1;goto B543f97;
case 0x543f99:goto L543f99;
case 0x543f9d:c.instructions+=5;goto B543f9d;
case 0x543fa1:c.instructions+=4;goto B543fa1;
case 0x543fa4:c.instructions+=3;goto B543fa4;
case 0x543fac:c.instructions+=2;goto B543fac;
case 0x543faf:c.instructions+=1;goto B543faf;
case 0x543fb1:goto L543fb1;
case 0x543fb7:c.instructions+=2;goto B543fb7;
case 0x543fb8:c.instructions+=1;goto B543fb8;
case 0x543fbd:goto L543fbd;
case 0x543fbe:c.instructions+=3;goto B543fbe;
case 0x543fbf:c.instructions+=2;goto B543fbf;
case 0x543fc2:c.instructions+=1;goto B543fc2;
case 0x543fc5:goto L543fc5;
case 0x543fca:c.instructions+=1;goto B543fca;
case 0x543fd0:goto L543fd0;
case 0x543fd6:goto L543fd6;
case 0x543fdb:c.instructions+=1;goto B543fdb;
case 0x543fdd:goto L543fdd;
case 0x543fe2:c.instructions+=1;goto B543fe2;
case 0x543fe4:goto L543fe4;
case 0x543fe9:c.instructions+=1;goto B543fe9;
case 0x543feb:goto L543feb;
case 0x543fee:c.instructions+=3;goto B543fee;
case 0x543ff1:c.instructions+=2;goto B543ff1;
case 0x543ff3:c.instructions+=1;goto B543ff3;
case 0x543ff6:goto L543ff6;
case 0x543ff8:c.instructions+=1;goto B543ff8;
case 0x543ffa:goto L543ffa;
case 0x543ffc:c.instructions+=2;goto B543ffc;
case 0x543ffe:c.instructions+=1;goto B543ffe;
default:missing_instruction(c.pc);}
B543001:L543001:{c.instructions+=2;NFSU2_TR(0x543001);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B543003:{NFSU2_TR(0x543003);
if(r1(R+518)){TAIL_STATIC(0x542fa0u,542);}
}
B543005:L543005:{c.instructions+=2;NFSU2_TR(0x543005);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B543009:{NFSU2_TR(0x543009);
{goto L543069;}
}
B54300b:L54300b:{c.instructions+=2;NFSU2_TR(0x54300b);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54300e:{NFSU2_TR(0x54300e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L543069;}}
}
B543010:L543010:{c.instructions+=1;NFSU2_TR(0x543010);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B543012:L543012:{c.instructions+=2;NFSU2_TR(0x543012);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B543014:{NFSU2_TR(0x543014);
if(r1(R+518)){{goto L54301b;}}
}
B543016:L543016:{c.instructions+=2;NFSU2_TR(0x543016);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B543019:{NFSU2_TR(0x543019);
{goto L54301d;}
}
B54301b:L54301b:{c.instructions+=1;NFSU2_TR(0x54301b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B54301d:L54301d:{c.instructions+=2;NFSU2_TR(0x54301d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54301f:{NFSU2_TR(0x54301f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54303f;}}
}
B543021:L543021:{c.instructions+=3;NFSU2_TR(0x543021);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B543024:{NFSU2_TR(0x543024);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B543026:{NFSU2_TR(0x543026);
if(r1(R+518)){{goto L543034;}}
}
B543028:L543028:{c.instructions+=5;NFSU2_TR(0x543028);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B54302b:{NFSU2_TR(0x54302b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+20,u32(u32(r4(R+20))-u32(r4(U+4))));
}
B54302e:{NFSU2_TR(0x54302e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+24),(U+0),4);
}
B543031:{NFSU2_TR(0x543031);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B543032:{NFSU2_TR(0x543032);
{goto L543060;}
}
B543034:L543034:{c.instructions+=5;NFSU2_TR(0x543034);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B543037:{NFSU2_TR(0x543037);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+20,u32(u32(r4(R+20))-u32(r4(U+4))));
}
B54303a:{NFSU2_TR(0x54303a);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B54303c:{NFSU2_TR(0x54303c);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B54303d:{NFSU2_TR(0x54303d);
{goto L543060;}
}
B54303f:L54303f:{c.instructions+=3;NFSU2_TR(0x54303f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B543042:{NFSU2_TR(0x543042);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B543044:{NFSU2_TR(0x543044);
if(r1(R+518)){{goto L54304b;}}
}
B543046:L543046:{c.instructions+=2;NFSU2_TR(0x543046);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
}
B543049:{NFSU2_TR(0x543049);
{goto L54304d;}
}
B54304b:L54304b:{c.instructions+=1;NFSU2_TR(0x54304b);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B54304d:L54304d:{c.instructions+=3;NFSU2_TR(0x54304d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B543050:{NFSU2_TR(0x543050);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B543052:{NFSU2_TR(0x543052);
if(r1(R+518)){{goto L543059;}}
}
B543054:L543054:{c.instructions+=2;NFSU2_TR(0x543054);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B543057:{NFSU2_TR(0x543057);
{goto L54305b;}
}
B543059:L543059:{c.instructions+=1;NFSU2_TR(0x543059);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B54305b:L54305b:{c.instructions+=2;NFSU2_TR(0x54305b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54305d:{NFSU2_TR(0x54305d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L543062;}}
}
B54305f:L54305f:{c.instructions+=1;NFSU2_TR(0x54305f);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
}
B543060:L543060:{c.instructions+=1;NFSU2_TR(0x543060);
__builtin_memmove((R+12),(R+24),4);
}
B543062:L543062:{c.instructions+=3;NFSU2_TR(0x543062);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B543065:{NFSU2_TR(0x543065);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B543067:{NFSU2_TR(0x543067);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x543012u);}goto L543012;}}
}
B543069:L543069:{c.instructions+=2;NFSU2_TR(0x543069);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+24),r4(U+14)));
w4(U+18,u32(u32(r4(R+24))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B54306c:{NFSU2_TR(0x54306c);
if(r1(R+518)){{goto L54308b;}}
}
B54306e:L54306e:{c.instructions+=6;NFSU2_TR(0x54306e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54306f:{NFSU2_TR(0x54306f);
__builtin_memmove((R+4),(R+28),4);
}
B543071:{NFSU2_TR(0x543071);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B543074:{NFSU2_TR(0x543074);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B543077:{NFSU2_TR(0x543077);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54307a:{NFSU2_TR(0x54307a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54307full));
TAIL_STATIC(0x52e8c0u,52e);
}
B54307f:L54307f:{c.instructions+=2;NFSU2_TR(0x54307f);
__builtin_memmove((R+4),(R+28),4);
}
B543081:{NFSU2_TR(0x543081);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x543086ull));
TAIL_STATIC(0x52e9c0u,52e);
}
B543086:L543086:{c.instructions+=1;NFSU2_TR(0x543086);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B54308b:L54308b:{c.instructions+=6;NFSU2_TR(0x54308b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54308c:{NFSU2_TR(0x54308c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B54308d:{NFSU2_TR(0x54308d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B54308e:{NFSU2_TR(0x54308e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B543090:{NFSU2_TR(0x543090);
__builtin_memmove((R+4),(R+28),4);
}
B543092:{NFSU2_TR(0x543092);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x543095ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B543095:L543095:{c.instructions+=3;NFSU2_TR(0x543095);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B54309b:{NFSU2_TR(0x54309b);
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
B54309d:{NFSU2_TR(0x54309d);
if(r1(R+518)){{goto L5430a6;}}
}
B54309f:L54309f:{c.instructions+=2;NFSU2_TR(0x54309f);
__builtin_memmove((R+4),(R+28),4);
}
B5430a1:{NFSU2_TR(0x5430a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5430a6ull));
TAIL_STATIC(0x538490u,538);
}
B5430a6:L5430a6:{c.instructions+=4;NFSU2_TR(0x5430a6);
u8 U[5];
w4(U+0,u32(u32(u32(0x7ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5430aa:{NFSU2_TR(0x5430aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5430ab:{NFSU2_TR(0x5430ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5430ac:{NFSU2_TR(0x5430ac);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5430af:L5430af:{c.instructions+=4;NFSU2_TR(0x5430af);
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
B5430b1:{NFSU2_TR(0x5430b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5430b2:{NFSU2_TR(0x5430b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5430b3:{NFSU2_TR(0x5430b3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5430c0:L5430c0:{c.instructions+=12;NFSU2_TR(0x5430c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B5430c3:{NFSU2_TR(0x5430c3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5430c4:{NFSU2_TR(0x5430c4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5430c5:{NFSU2_TR(0x5430c5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5430c6:{NFSU2_TR(0x5430c6);
__builtin_memmove((R+24),(R+4),4);
}
B5430c8:{NFSU2_TR(0x5430c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5430cb:{NFSU2_TR(0x5430cb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5430cc:{NFSU2_TR(0x5430cc);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5430cf:{NFSU2_TR(0x5430cf);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5430d1:{NFSU2_TR(0x5430d1);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5430d3:{NFSU2_TR(0x5430d3);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5430d7:{NFSU2_TR(0x5430d7);
if(r1(R+518)){{goto L543288;}}
}
B5430dd:L5430dd:{c.instructions+=4;NFSU2_TR(0x5430dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5430e0:{NFSU2_TR(0x5430e0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5430e3:{NFSU2_TR(0x5430e3);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5430e5:{NFSU2_TR(0x5430e5);
if(r1(R+518)){{goto L543288;}}
}
B5430eb:L5430eb:{c.instructions+=4;NFSU2_TR(0x5430eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5430ee:{NFSU2_TR(0x5430ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5430f1:{NFSU2_TR(0x5430f1);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5430f3:{NFSU2_TR(0x5430f3);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L543288;}}
}
B5430f9:L5430f9:{c.instructions+=5;NFSU2_TR(0x5430f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5430fc:{NFSU2_TR(0x5430fc);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B543100:{NFSU2_TR(0x543100);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B543104:{NFSU2_TR(0x543104);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B543107:{NFSU2_TR(0x543107);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L543185;}}
}
B543109:L543109:{c.instructions+=3;NFSU2_TR(0x543109);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B54310b:{NFSU2_TR(0x54310b);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B54310e:{NFSU2_TR(0x54310e);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L543207;}}
}
B543114:L543114:{c.instructions+=3;NFSU2_TR(0x543114);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B543117:{NFSU2_TR(0x543117);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B543119:{NFSU2_TR(0x543119);
if(r1(R+518)){{goto L543161;}}
}
B54311b:L54311b:{c.instructions+=4;NFSU2_TR(0x54311b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54311e:{NFSU2_TR(0x54311e);
u8 U[4];
w4(U+0,u32(0x78f21cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543123:{NFSU2_TR(0x543123);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543124:{NFSU2_TR(0x543124);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x543129ull));
TAIL_STATIC(0x51ee80u,51e);
}
B543129:L543129:{c.instructions+=3;NFSU2_TR(0x543129);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B54312b:{NFSU2_TR(0x54312b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54312d:{NFSU2_TR(0x54312d);
if(r1(R+518)){{goto L543134;}}
}
B54312f:L54312f:{c.instructions+=2;NFSU2_TR(0x54312f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B543132:{NFSU2_TR(0x543132);
{goto L543136;}
}
B543134:L543134:{c.instructions+=1;NFSU2_TR(0x543134);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B543136:L543136:{c.instructions+=3;NFSU2_TR(0x543136);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B543139:{NFSU2_TR(0x543139);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54313b:{NFSU2_TR(0x54313b);
if(r1(R+518)){{goto L54315e;}}
}
B54313d:L54313d:{c.instructions+=3;NFSU2_TR(0x54313d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B543140:{NFSU2_TR(0x543140);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B543142:{NFSU2_TR(0x543142);
if(r1(R+518)){{goto L543149;}}
}
B543144:L543144:{c.instructions+=2;NFSU2_TR(0x543144);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B543147:{NFSU2_TR(0x543147);
{goto L54314b;}
}
B543149:L543149:{c.instructions+=1;NFSU2_TR(0x543149);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B54314b:L54314b:{c.instructions+=5;NFSU2_TR(0x54314b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54314e:{NFSU2_TR(0x54314e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B543151:{NFSU2_TR(0x543151);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543156:{NFSU2_TR(0x543156);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543157:{NFSU2_TR(0x543157);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54315cull));
TAIL_STATIC(0x51ee80u,51e);
}
B54315c:L54315c:{c.instructions+=1;NFSU2_TR(0x54315c);
{goto L543161;}
}
B54315e:L54315e:{c.instructions+=1;NFSU2_TR(0x54315e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B543161:L543161:{c.instructions+=4;NFSU2_TR(0x543161);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B543164:{NFSU2_TR(0x543164);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B543167:{NFSU2_TR(0x543167);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B543169:{NFSU2_TR(0x543169);
if(r1(R+518)){{goto L54317a;}}
}
B54316b:L54316b:{c.instructions+=5;NFSU2_TR(0x54316b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B54316e:{NFSU2_TR(0x54316e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B543171:{NFSU2_TR(0x543171);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B543174:{NFSU2_TR(0x543174);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B543175:{NFSU2_TR(0x543175);
{goto L543204;}
}
B54317a:L54317a:{c.instructions+=5;NFSU2_TR(0x54317a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B54317c:{NFSU2_TR(0x54317c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54317f:{NFSU2_TR(0x54317f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B543182:{NFSU2_TR(0x543182);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B543183:{NFSU2_TR(0x543183);
{goto L543204;}
}
B543185:L543185:{c.instructions+=2;NFSU2_TR(0x543185);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B543188:{NFSU2_TR(0x543188);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L543207;}}
}
B54318a:L54318a:{c.instructions+=3;NFSU2_TR(0x54318a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B54318d:{NFSU2_TR(0x54318d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54318f:{NFSU2_TR(0x54318f);
if(r1(R+518)){{goto L543196;}}
}
B543191:L543191:{c.instructions+=2;NFSU2_TR(0x543191);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B543194:{NFSU2_TR(0x543194);
{goto L543198;}
}
B543196:L543196:{c.instructions+=1;NFSU2_TR(0x543196);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B543198:L543198:{c.instructions+=2;NFSU2_TR(0x543198);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B54319c:{NFSU2_TR(0x54319c);
if(r1(R+518)){{goto L543207;}}
}
B54319e:L54319e:{c.instructions+=3;NFSU2_TR(0x54319e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5431a1:{NFSU2_TR(0x5431a1);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5431a3:{NFSU2_TR(0x5431a3);
if(r1(R+518)){{goto L5431ec;}}
}
B5431a5:L5431a5:{c.instructions+=4;NFSU2_TR(0x5431a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5431a8:{NFSU2_TR(0x5431a8);
u8 U[4];
w4(U+0,u32(0x78f21cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5431ad:{NFSU2_TR(0x5431ad);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5431ae:{NFSU2_TR(0x5431ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5431b3ull));
TAIL_STATIC(0x51ee80u,51e);
}
B5431b3:L5431b3:{c.instructions+=3;NFSU2_TR(0x5431b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5431b6:{NFSU2_TR(0x5431b6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5431b8:{NFSU2_TR(0x5431b8);
if(r1(R+518)){{goto L5431bf;}}
}
B5431ba:L5431ba:{c.instructions+=2;NFSU2_TR(0x5431ba);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B5431bd:{NFSU2_TR(0x5431bd);
{goto L5431c1;}
}
B5431bf:L5431bf:{c.instructions+=1;NFSU2_TR(0x5431bf);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5431c1:L5431c1:{c.instructions+=3;NFSU2_TR(0x5431c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5431c4:{NFSU2_TR(0x5431c4);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5431c6:{NFSU2_TR(0x5431c6);
if(r1(R+518)){{goto L5431e9;}}
}
B5431c8:L5431c8:{c.instructions+=3;NFSU2_TR(0x5431c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5431cb:{NFSU2_TR(0x5431cb);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5431cd:{NFSU2_TR(0x5431cd);
if(r1(R+518)){{goto L5431d4;}}
}
B5431cf:L5431cf:{c.instructions+=2;NFSU2_TR(0x5431cf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B5431d2:{NFSU2_TR(0x5431d2);
{goto L5431d6;}
}
B5431d4:L5431d4:{c.instructions+=1;NFSU2_TR(0x5431d4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5431d6:L5431d6:{c.instructions+=5;NFSU2_TR(0x5431d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5431d9:{NFSU2_TR(0x5431d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5431dc:{NFSU2_TR(0x5431dc);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5431e1:{NFSU2_TR(0x5431e1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5431e2:{NFSU2_TR(0x5431e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5431e7ull));
TAIL_STATIC(0x51ee80u,51e);
}
B5431e7:L5431e7:{c.instructions+=1;NFSU2_TR(0x5431e7);
{goto L5431ec;}
}
B5431e9:L5431e9:{c.instructions+=1;NFSU2_TR(0x5431e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5431ec:L5431ec:{c.instructions+=4;NFSU2_TR(0x5431ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5431ef:{NFSU2_TR(0x5431ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5431f2:{NFSU2_TR(0x5431f2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5431f4:{NFSU2_TR(0x5431f4);
if(r1(R+518)){{goto L5431fb;}}
}
B5431f6:L5431f6:{c.instructions+=2;NFSU2_TR(0x5431f6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B5431f9:{NFSU2_TR(0x5431f9);
{goto L5431fd;}
}
B5431fb:L5431fb:{c.instructions+=1;NFSU2_TR(0x5431fb);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5431fd:L5431fd:{c.instructions+=3;NFSU2_TR(0x5431fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B543200:{NFSU2_TR(0x543200);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B543203:{NFSU2_TR(0x543203);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B543204:L543204:{c.instructions+=1;NFSU2_TR(0x543204);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B543207:L543207:{c.instructions+=3;NFSU2_TR(0x543207);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54320b:{NFSU2_TR(0x54320b);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B54320e:{NFSU2_TR(0x54320e);
if(r1(R+518)){{goto L54327a;}}
}
B543210:L543210:{c.instructions+=4;NFSU2_TR(0x543210);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B543213:{NFSU2_TR(0x543213);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543214:{NFSU2_TR(0x543214);
__builtin_memmove((R+4),(R+24),4);
}
B543216:{NFSU2_TR(0x543216);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54321bull));
TAIL_STATIC(0x51f440u,51f);
}
B54321b:L54321b:{c.instructions+=3;NFSU2_TR(0x54321b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54321e:{NFSU2_TR(0x54321e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B543220:{NFSU2_TR(0x543220);
if(r1(R+512)){{goto L54324a;}}
}
B543222:L543222:{c.instructions+=4;NFSU2_TR(0x543222);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B543225:{NFSU2_TR(0x543225);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B543227:{NFSU2_TR(0x543227);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B543229:{NFSU2_TR(0x543229);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L54324a;}}
}
B54322b:L54322b:{c.instructions+=3;NFSU2_TR(0x54322b);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B54322e:{NFSU2_TR(0x54322e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9dull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B543234:{NFSU2_TR(0x543234);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L543251;}}
}
B543236:L543236:{c.instructions+=3;NFSU2_TR(0x543236);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543237:{NFSU2_TR(0x543237);
__builtin_memmove((R+4),(R+24),4);
}
B543239:{NFSU2_TR(0x543239);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54323eull));
TAIL_STATIC(0x52e850u,52e);
}
B54323e:L54323e:{c.instructions+=3;NFSU2_TR(0x54323e);
__builtin_memmove((R+4),(R+24),4);
}
B543240:{NFSU2_TR(0x543240);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B543243:{NFSU2_TR(0x543243);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x543248ull));
TAIL_STATIC(0x4958d0u,495);
}
B543248:L543248:{c.instructions+=1;NFSU2_TR(0x543248);
{goto L543251;}
}
B54324a:L54324a:{c.instructions+=1;NFSU2_TR(0x54324a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9dull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B543251:L543251:{c.instructions+=2;NFSU2_TR(0x543251);
__builtin_memmove((R+4),(R+24),4);
}
B543253:{NFSU2_TR(0x543253);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x543258ull));
TAIL_STATIC(0x52e9c0u,52e);
}
B543258:L543258:{c.instructions+=3;NFSU2_TR(0x543258);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B54325a:{NFSU2_TR(0x54325a);
__builtin_memmove((R+4),(R+24),4);
}
B54325c:{NFSU2_TR(0x54325c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54325full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B54325f:L54325f:{c.instructions+=2;NFSU2_TR(0x54325f);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B543265:{NFSU2_TR(0x543265);
if(r1(R+518)){{goto L54326e;}}
}
B543267:L543267:{c.instructions+=2;NFSU2_TR(0x543267);
__builtin_memmove((R+4),(R+24),4);
}
B543269:{NFSU2_TR(0x543269);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54326eull));
TAIL_STATIC(0x538490u,538);
}
B54326e:L54326e:{c.instructions+=7;NFSU2_TR(0x54326e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54326f:{NFSU2_TR(0x54326f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B543270:{NFSU2_TR(0x543270);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B543271:{NFSU2_TR(0x543271);
w1(R+0,u8(0x1ull));
}
B543273:{NFSU2_TR(0x543273);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B543274:{NFSU2_TR(0x543274);
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
B543277:{NFSU2_TR(0x543277);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54327a:L54327a:{c.instructions+=7;NFSU2_TR(0x54327a);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B54327e:{NFSU2_TR(0x54327e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54327f:{NFSU2_TR(0x54327f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B543280:{NFSU2_TR(0x543280);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B543281:{NFSU2_TR(0x543281);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B543282:{NFSU2_TR(0x543282);
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
B543285:{NFSU2_TR(0x543285);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B543288:L543288:{c.instructions+=7;NFSU2_TR(0x543288);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B543289:{NFSU2_TR(0x543289);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54328a:{NFSU2_TR(0x54328a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B54328b:{NFSU2_TR(0x54328b);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B54328d:{NFSU2_TR(0x54328d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B54328e:{NFSU2_TR(0x54328e);
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
B543291:{NFSU2_TR(0x543291);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5432a0:L5432a0:{c.instructions+=10;NFSU2_TR(0x5432a0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5432a1:{NFSU2_TR(0x5432a1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5432a2:{NFSU2_TR(0x5432a2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5432a3:{NFSU2_TR(0x5432a3);
__builtin_memmove((R+24),(R+4),4);
}
B5432a5:{NFSU2_TR(0x5432a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5432a8:{NFSU2_TR(0x5432a8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5432ab:{NFSU2_TR(0x5432ab);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B5432ad:{NFSU2_TR(0x5432ad);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5432af:{NFSU2_TR(0x5432af);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5432b0:{NFSU2_TR(0x5432b0);
if(r1(R+518)){{goto L54345b;}}
}
B5432b6:L5432b6:{c.instructions+=4;NFSU2_TR(0x5432b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5432b9:{NFSU2_TR(0x5432b9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5432bc:{NFSU2_TR(0x5432bc);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5432be:{NFSU2_TR(0x5432be);
if(r1(R+518)){{goto L54345b;}}
}
B5432c4:L5432c4:{c.instructions+=3;NFSU2_TR(0x5432c4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5432ca:{NFSU2_TR(0x5432ca);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5432cc:{NFSU2_TR(0x5432cc);
if(r1(R+518)){{goto L5432da;}}
}
B5432ce:L5432ce:{c.instructions+=2;NFSU2_TR(0x5432ce);
__builtin_memmove((R+4),(R+24),4);
}
B5432d0:{NFSU2_TR(0x5432d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5432d5ull));
TAIL_STATIC(0x538240u,538);
}
B5432d5:L5432d5:{c.instructions+=1;NFSU2_TR(0x5432d5);
{goto L543432;}
}
B5432da:L5432da:{c.instructions+=3;NFSU2_TR(0x5432da);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5432de:{NFSU2_TR(0x5432de);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5432e1:{NFSU2_TR(0x5432e1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54339a;}}
}
B5432e7:L5432e7:{c.instructions+=3;NFSU2_TR(0x5432e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5432ea:{NFSU2_TR(0x5432ea);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5432ec:{NFSU2_TR(0x5432ec);
if(r1(R+518)){{goto L5432f3;}}
}
B5432ee:L5432ee:{c.instructions+=2;NFSU2_TR(0x5432ee);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B5432f1:{NFSU2_TR(0x5432f1);
{goto L5432f5;}
}
B5432f3:L5432f3:{c.instructions+=1;NFSU2_TR(0x5432f3);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5432f5:L5432f5:{c.instructions+=3;NFSU2_TR(0x5432f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5432f8:{NFSU2_TR(0x5432f8);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5432fa:{NFSU2_TR(0x5432fa);
if(r1(R+518)){{goto L54345b;}}
}
B543300:L543300:{c.instructions+=4;NFSU2_TR(0x543300);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B543303:{NFSU2_TR(0x543303);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B543305:{NFSU2_TR(0x543305);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B543308:{NFSU2_TR(0x543308);
if(r1(R+518)){{goto L54330f;}}
}
B54330a:L54330a:{c.instructions+=2;NFSU2_TR(0x54330a);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xfffffffcull))));
}
B54330d:{NFSU2_TR(0x54330d);
{goto L543311;}
}
B54330f:L54330f:{c.instructions+=1;NFSU2_TR(0x54330f);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B543311:L543311:{c.instructions+=10;NFSU2_TR(0x543311);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B543313:{NFSU2_TR(0x543313);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B543315:{NFSU2_TR(0x543315);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
}
B543317:{NFSU2_TR(0x543317);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B543319:{NFSU2_TR(0x543319);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54331c:{NFSU2_TR(0x54331c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B54331e:{NFSU2_TR(0x54331e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B543321:{NFSU2_TR(0x543321);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B543324:{NFSU2_TR(0x543324);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B543326:{NFSU2_TR(0x543326);
if(r1(R+518)){{goto L54332d;}}
}
B543328:L543328:{c.instructions+=2;NFSU2_TR(0x543328);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B54332b:{NFSU2_TR(0x54332b);
{goto L54332f;}
}
B54332d:L54332d:{c.instructions+=1;NFSU2_TR(0x54332d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B54332f:L54332f:{c.instructions+=2;NFSU2_TR(0x54332f);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B543331:{NFSU2_TR(0x543331);
if(r1(R+518)){{goto L543338;}}
}
B543333:L543333:{c.instructions+=2;NFSU2_TR(0x543333);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B543336:{NFSU2_TR(0x543336);
{goto L54333a;}
}
B543338:L543338:{c.instructions+=1;NFSU2_TR(0x543338);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B54333a:L54333a:{c.instructions+=9;NFSU2_TR(0x54333a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B54333c:{NFSU2_TR(0x54333c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B54333e:{NFSU2_TR(0x54333e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B543341:{NFSU2_TR(0x543341);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B543344:{NFSU2_TR(0x543344);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B543346:{NFSU2_TR(0x543346);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B543349:{NFSU2_TR(0x543349);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54334c:{NFSU2_TR(0x54334c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54334e:{NFSU2_TR(0x54334e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54336c;}}
}
B543350:L543350:{c.instructions+=3;NFSU2_TR(0x543350);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B543353:{NFSU2_TR(0x543353);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B543355:{NFSU2_TR(0x543355);
if(r1(R+518)){{goto L543362;}}
}
B543357:L543357:{c.instructions+=3;NFSU2_TR(0x543357);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B54335a:{NFSU2_TR(0x54335a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54335d:{NFSU2_TR(0x54335d);
{goto L543428;}
}
B543362:L543362:{c.instructions+=3;NFSU2_TR(0x543362);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B543364:{NFSU2_TR(0x543364);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B543367:{NFSU2_TR(0x543367);
{goto L543428;}
}
B54336c:L54336c:{c.instructions+=4;NFSU2_TR(0x54336c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B54336f:{NFSU2_TR(0x54336f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543370:{NFSU2_TR(0x543370);
__builtin_memmove((R+4),(R+24),4);
}
B543372:{NFSU2_TR(0x543372);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x543377ull));
TAIL_STATIC(0x51f440u,51f);
}
B543377:L543377:{c.instructions+=4;NFSU2_TR(0x543377);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54337a:{NFSU2_TR(0x54337a);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+12))));
}
B54337c:{NFSU2_TR(0x54337c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B54337e:{NFSU2_TR(0x54337e);
if(r1(R+512)){{goto L543428;}}
}
B543384:L543384:{c.instructions+=5;NFSU2_TR(0x543384);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B543385:{NFSU2_TR(0x543385);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B543388:{NFSU2_TR(0x543388);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B54338b:{NFSU2_TR(0x54338b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54338d:{NFSU2_TR(0x54338d);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x543362u);}goto L543362;}}
}
B54338f:L54338f:{c.instructions+=3;NFSU2_TR(0x54338f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B543392:{NFSU2_TR(0x543392);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B543395:{NFSU2_TR(0x543395);
{goto L543428;}
}
B54339a:L54339a:{c.instructions+=2;NFSU2_TR(0x54339a);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54339d:{NFSU2_TR(0x54339d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L543428;}}
}
B5433a3:L5433a3:{c.instructions+=3;NFSU2_TR(0x5433a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5433a5:{NFSU2_TR(0x5433a5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5433a7:{NFSU2_TR(0x5433a7);
if(r1(R+518)){{goto L5433ae;}}
}
B5433a9:L5433a9:{c.instructions+=2;NFSU2_TR(0x5433a9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B5433ac:{NFSU2_TR(0x5433ac);
{goto L5433b0;}
}
B5433ae:L5433ae:{c.instructions+=1;NFSU2_TR(0x5433ae);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5433b0:L5433b0:{c.instructions+=3;NFSU2_TR(0x5433b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5433b3:{NFSU2_TR(0x5433b3);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5433b5:{NFSU2_TR(0x5433b5);
if(r1(R+518)){{goto L54345b;}}
}
B5433bb:L5433bb:{c.instructions+=3;NFSU2_TR(0x5433bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5433be:{NFSU2_TR(0x5433be);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5433c0:{NFSU2_TR(0x5433c0);
if(r1(R+518)){{goto L5433c7;}}
}
B5433c2:L5433c2:{c.instructions+=2;NFSU2_TR(0x5433c2);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+8),(U+0),4);
}
B5433c5:{NFSU2_TR(0x5433c5);
{goto L5433c9;}
}
B5433c7:L5433c7:{c.instructions+=1;NFSU2_TR(0x5433c7);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5433c9:L5433c9:{c.instructions+=2;NFSU2_TR(0x5433c9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5433cb:{NFSU2_TR(0x5433cb);
if(r1(R+518)){{goto L5433d2;}}
}
B5433cd:L5433cd:{c.instructions+=2;NFSU2_TR(0x5433cd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5433d0:{NFSU2_TR(0x5433d0);
{goto L5433d4;}
}
B5433d2:L5433d2:{c.instructions+=1;NFSU2_TR(0x5433d2);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5433d4:L5433d4:{c.instructions+=7;NFSU2_TR(0x5433d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5433d6:{NFSU2_TR(0x5433d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5433d9:{NFSU2_TR(0x5433d9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5433db:{NFSU2_TR(0x5433db);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5433de:{NFSU2_TR(0x5433de);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5433e1:{NFSU2_TR(0x5433e1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5433e3:{NFSU2_TR(0x5433e3);
if(r1(R+518)){{goto L5433ea;}}
}
B5433e5:L5433e5:{c.instructions+=2;NFSU2_TR(0x5433e5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B5433e8:{NFSU2_TR(0x5433e8);
{goto L5433ec;}
}
B5433ea:L5433ea:{c.instructions+=1;NFSU2_TR(0x5433ea);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5433ec:L5433ec:{c.instructions+=2;NFSU2_TR(0x5433ec);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5433ee:{NFSU2_TR(0x5433ee);
if(r1(R+518)){{goto L5433f5;}}
}
B5433f0:L5433f0:{c.instructions+=2;NFSU2_TR(0x5433f0);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5433f3:{NFSU2_TR(0x5433f3);
{goto L5433f7;}
}
B5433f5:L5433f5:{c.instructions+=1;NFSU2_TR(0x5433f5);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5433f7:L5433f7:{c.instructions+=9;NFSU2_TR(0x5433f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5433fa:{NFSU2_TR(0x5433fa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5433fc:{NFSU2_TR(0x5433fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5433ff:{NFSU2_TR(0x5433ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B543402:{NFSU2_TR(0x543402);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B543404:{NFSU2_TR(0x543404);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B543407:{NFSU2_TR(0x543407);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54340a:{NFSU2_TR(0x54340a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54340c:{NFSU2_TR(0x54340c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L543413;}}
}
B54340e:L54340e:{c.instructions+=2;NFSU2_TR(0x54340e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B543411:{NFSU2_TR(0x543411);
{goto L543425;}
}
B543413:L543413:{c.instructions+=3;NFSU2_TR(0x543413);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B543416:{NFSU2_TR(0x543416);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B543418:{NFSU2_TR(0x543418);
if(r1(R+518)){{goto L54341f;}}
}
B54341a:L54341a:{c.instructions+=2;NFSU2_TR(0x54341a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B54341d:{NFSU2_TR(0x54341d);
{goto L543421;}
}
B54341f:L54341f:{c.instructions+=1;NFSU2_TR(0x54341f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B543421:L543421:{c.instructions+=2;NFSU2_TR(0x543421);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B543423:{NFSU2_TR(0x543423);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L543428;}}
}
B543425:L543425:{c.instructions+=1;NFSU2_TR(0x543425);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B543428:L543428:{c.instructions+=3;NFSU2_TR(0x543428);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543429:{NFSU2_TR(0x543429);
__builtin_memmove((R+4),(R+24),4);
}
B54342b:{NFSU2_TR(0x54342b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x543430ull));
TAIL_STATIC(0x52e8c0u,52e);
}
B543430:L543430:{c.instructions+=1;NFSU2_TR(0x543430);
w1(R+12,u8(0x1ull));
}
B543432:L543432:{c.instructions+=3;NFSU2_TR(0x543432);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B543436:{NFSU2_TR(0x543436);
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
B543438:{NFSU2_TR(0x543438);
if(r1(R+518)){{goto L543441;}}
}
B54343a:L54343a:{c.instructions+=3;NFSU2_TR(0x54343a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B54343c:{NFSU2_TR(0x54343c);
__builtin_memmove((R+4),(R+24),4);
}
B54343e:{NFSU2_TR(0x54343e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x543441ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B543441:L543441:{c.instructions+=3;NFSU2_TR(0x543441);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B543447:{NFSU2_TR(0x543447);
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
B543449:{NFSU2_TR(0x543449);
if(r1(R+518)){{goto L543452;}}
}
B54344b:L54344b:{c.instructions+=2;NFSU2_TR(0x54344b);
__builtin_memmove((R+4),(R+24),4);
}
B54344d:{NFSU2_TR(0x54344d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x543452ull));
TAIL_STATIC(0x538490u,538);
}
B543452:L543452:{c.instructions+=6;NFSU2_TR(0x543452);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B543453:{NFSU2_TR(0x543453);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B543454:{NFSU2_TR(0x543454);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B543455:{NFSU2_TR(0x543455);
__builtin_memmove((R+0),(R+12),1);
}
B543457:{NFSU2_TR(0x543457);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B543458:{NFSU2_TR(0x543458);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54345b:L54345b:{c.instructions+=6;NFSU2_TR(0x54345b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54345c:{NFSU2_TR(0x54345c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54345d:{NFSU2_TR(0x54345d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B54345e:{NFSU2_TR(0x54345e);
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
B543460:{NFSU2_TR(0x543460);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B543461:{NFSU2_TR(0x543461);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B543470:L543470:{c.instructions+=6;NFSU2_TR(0x543470);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543471:{NFSU2_TR(0x543471);
__builtin_memmove((R+24),(R+4),4);
}
B543473:{NFSU2_TR(0x543473);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B543476:{NFSU2_TR(0x543476);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B543479:{NFSU2_TR(0x543479);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54347b:{NFSU2_TR(0x54347b);
if(r1(R+518)){{goto L5434c7;}}
}
B54347d:L54347d:{c.instructions+=3;NFSU2_TR(0x54347d);
__builtin_memmove((R+0),(R+4),4);
}
B54347f:{NFSU2_TR(0x54347f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B543481:{NFSU2_TR(0x543481);
if(r1(R+518)){{goto L543488;}}
}
B543483:L543483:{c.instructions+=2;NFSU2_TR(0x543483);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B543486:{NFSU2_TR(0x543486);
{goto L54348a;}
}
B543488:L543488:{c.instructions+=1;NFSU2_TR(0x543488);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B54348a:L54348a:{c.instructions+=4;NFSU2_TR(0x54348a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54348d:{NFSU2_TR(0x54348d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B543490:{NFSU2_TR(0x543490);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B543492:{NFSU2_TR(0x543492);
if(r1(R+518)){{goto L543499;}}
}
B543494:L543494:{c.instructions+=2;NFSU2_TR(0x543494);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B543497:{NFSU2_TR(0x543497);
{goto L54349b;}
}
B543499:L543499:{c.instructions+=1;NFSU2_TR(0x543499);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B54349b:L54349b:{c.instructions+=5;NFSU2_TR(0x54349b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54349e:{NFSU2_TR(0x54349e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5434a1:{NFSU2_TR(0x5434a1);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5434a5:{NFSU2_TR(0x5434a5);
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
B5434a7:{NFSU2_TR(0x5434a7);
if(r1(R+518)){{goto L5434c1;}}
}
B5434a9:L5434a9:{c.instructions+=3;NFSU2_TR(0x5434a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5434ab:{NFSU2_TR(0x5434ab);
__builtin_memmove((R+4),(R+24),4);
}
B5434ad:{NFSU2_TR(0x5434ad);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5434b0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5434b0:L5434b0:{c.instructions+=3;NFSU2_TR(0x5434b0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5434b6:{NFSU2_TR(0x5434b6);
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
B5434b8:{NFSU2_TR(0x5434b8);
if(r1(R+518)){{goto L5434c1;}}
}
B5434ba:L5434ba:{c.instructions+=2;NFSU2_TR(0x5434ba);
__builtin_memmove((R+4),(R+24),4);
}
B5434bc:{NFSU2_TR(0x5434bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5434c1ull));
TAIL_STATIC(0x538490u,538);
}
B5434c1:L5434c1:{c.instructions+=3;NFSU2_TR(0x5434c1);
w1(R+0,u8(0x1ull));
}
B5434c3:{NFSU2_TR(0x5434c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5434c4:{NFSU2_TR(0x5434c4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5434c7:L5434c7:{c.instructions+=3;NFSU2_TR(0x5434c7);
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
B5434c9:{NFSU2_TR(0x5434c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5434ca:{NFSU2_TR(0x5434ca);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5434d0:L5434d0:{c.instructions+=6;NFSU2_TR(0x5434d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5434d1:{NFSU2_TR(0x5434d1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5434d2:{NFSU2_TR(0x5434d2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5434d6:{NFSU2_TR(0x5434d6);
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
B5434d8:{NFSU2_TR(0x5434d8);
__builtin_memmove((R+24),(R+4),4);
}
B5434da:{NFSU2_TR(0x5434da);
if(r1(R+518)){{goto L54354a;}}
}
B5434dc:L5434dc:{c.instructions+=6;NFSU2_TR(0x5434dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5434df:{NFSU2_TR(0x5434df);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5434e0:{NFSU2_TR(0x5434e0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5434e1:{NFSU2_TR(0x5434e1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5434e4:{NFSU2_TR(0x5434e4);
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
B5434e6:{NFSU2_TR(0x5434e6);
if(r1(R+518)){{goto L543548;}}
}
B5434e8:L5434e8:{c.instructions+=4;NFSU2_TR(0x5434e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5434eb:{NFSU2_TR(0x5434eb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5434ee:{NFSU2_TR(0x5434ee);
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
B5434f0:{NFSU2_TR(0x5434f0);
if(r1(R+518)){{goto L543548;}}
}
B5434f2:L5434f2:{c.instructions+=4;NFSU2_TR(0x5434f2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5434f3:{NFSU2_TR(0x5434f3);
__builtin_memmove((R+4),(R+24),4);
}
B5434f5:{NFSU2_TR(0x5434f5);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5434f9:{NFSU2_TR(0x5434f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5434feull));
TAIL_STATIC(0x52e850u,52e);
}
B5434fe:L5434fe:{c.instructions+=3;NFSU2_TR(0x5434fe);
__builtin_memmove((R+12),(R+0),4);
}
B543500:{NFSU2_TR(0x543500);
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
B543502:{NFSU2_TR(0x543502);
if(r1(R+518)){{goto L543548;}}
}
B543504:L543504:{c.instructions+=2;NFSU2_TR(0x543504);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B543507:{NFSU2_TR(0x543507);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L543541;}}
}
B543509:L543509:{c.instructions+=3;NFSU2_TR(0x543509);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54350b:{NFSU2_TR(0x54350b);
__builtin_memmove((R+4),(R+24),4);
}
B54350d:{NFSU2_TR(0x54350d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x543512ull));
TAIL_STATIC(0x542df0u,542);
}
B543512:L543512:{c.instructions+=2;NFSU2_TR(0x543512);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B543514:{NFSU2_TR(0x543514);
if(r1(R+518)){{goto L543522;}}
}
B543516:L543516:{c.instructions+=3;NFSU2_TR(0x543516);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B543519:{NFSU2_TR(0x543519);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54351b:{NFSU2_TR(0x54351b);
if(r1(R+518)){{goto L54353b;}}
}
B54351d:L54351d:{c.instructions+=2;NFSU2_TR(0x54351d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B543520:{NFSU2_TR(0x543520);
{goto L54353d;}
}
B543522:L543522:{c.instructions+=3;NFSU2_TR(0x543522);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543524:{NFSU2_TR(0x543524);
__builtin_memmove((R+4),(R+24),4);
}
B543526:{NFSU2_TR(0x543526);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54352bull));
TAIL_STATIC(0x542df0u,542);
}
B54352b:L54352b:{c.instructions+=2;NFSU2_TR(0x54352b);
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
B54352d:{NFSU2_TR(0x54352d);
if(r1(R+518)){{goto L543548;}}
}
B54352f:L54352f:{c.instructions+=3;NFSU2_TR(0x54352f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B543532:{NFSU2_TR(0x543532);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B543534:{NFSU2_TR(0x543534);
if(r1(R+518)){{goto L54353b;}}
}
B543536:L543536:{c.instructions+=2;NFSU2_TR(0x543536);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B543539:{NFSU2_TR(0x543539);
{goto L54353d;}
}
B54353b:L54353b:{c.instructions+=1;NFSU2_TR(0x54353b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B54353d:L54353d:{c.instructions+=2;NFSU2_TR(0x54353d);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B54353f:{NFSU2_TR(0x54353f);
if(r1(R+518)){{goto L543548;}}
}
B543541:L543541:{c.instructions+=2;NFSU2_TR(0x543541);
__builtin_memmove((R+4),(R+12),4);
}
B543543:{NFSU2_TR(0x543543);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x543548ull));
TAIL_STATIC(0x495890u,495);
}
B543548:L543548:{c.instructions+=2;NFSU2_TR(0x543548);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B543549:{NFSU2_TR(0x543549);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B54354a:L54354a:{c.instructions+=3;NFSU2_TR(0x54354a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54354b:{NFSU2_TR(0x54354b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54354c:{NFSU2_TR(0x54354c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B543550:L543550:{c.instructions+=6;NFSU2_TR(0x543550);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543551:{NFSU2_TR(0x543551);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543552:{NFSU2_TR(0x543552);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543553:{NFSU2_TR(0x543553);
__builtin_memmove((R+28),(R+4),4);
}
B543555:{NFSU2_TR(0x543555);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B543558:{NFSU2_TR(0x543558);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((R+12),(U+0),4);
}
B54355b:L54355b:{c.instructions+=2;NFSU2_TR(0x54355b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54355d:{NFSU2_TR(0x54355d);
if(r1(R+518)){{goto L543564;}}
}
B54355f:L54355f:{c.instructions+=2;NFSU2_TR(0x54355f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+24),(U+0),4);
}
B543562:{NFSU2_TR(0x543562);
{goto L543566;}
}
B543564:L543564:{c.instructions+=1;NFSU2_TR(0x543564);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B543566:L543566:{c.instructions+=2;NFSU2_TR(0x543566);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B543568:{NFSU2_TR(0x543568);
if(r1(R+518)){{goto L54356f;}}
}
B54356a:L54356a:{c.instructions+=2;NFSU2_TR(0x54356a);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B54356d:{NFSU2_TR(0x54356d);
{goto L543571;}
}
B54356f:L54356f:{c.instructions+=1;NFSU2_TR(0x54356f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B543571:L543571:{c.instructions+=2;NFSU2_TR(0x543571);
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
B543573:{NFSU2_TR(0x543573);
if(r1(R+518)){{goto L543583;}}
}
B543575:L543575:{c.instructions+=3;NFSU2_TR(0x543575);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543577:{NFSU2_TR(0x543577);
__builtin_memmove((R+4),(R+28),4);
}
B543579:{NFSU2_TR(0x543579);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54357eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5430c0u);}goto L5430c0;}
}
B54357e:L54357e:{c.instructions+=2;NFSU2_TR(0x54357e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B543581:{NFSU2_TR(0x543581);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54355bu);}goto L54355b;}
}
B543583:L543583:{c.instructions+=4;NFSU2_TR(0x543583);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B543584:{NFSU2_TR(0x543584);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B543585:{NFSU2_TR(0x543585);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B543586:{NFSU2_TR(0x543586);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B543590:L543590:{c.instructions+=6;NFSU2_TR(0x543590);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543591:{NFSU2_TR(0x543591);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543592:{NFSU2_TR(0x543592);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543593:{NFSU2_TR(0x543593);
__builtin_memmove((R+28),(R+4),4);
}
B543595:{NFSU2_TR(0x543595);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B543598:{NFSU2_TR(0x543598);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((R+12),(U+0),4);
}
B54359b:L54359b:{c.instructions+=2;NFSU2_TR(0x54359b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54359d:{NFSU2_TR(0x54359d);
if(r1(R+518)){{goto L5435a4;}}
}
B54359f:L54359f:{c.instructions+=2;NFSU2_TR(0x54359f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+24),(U+0),4);
}
B5435a2:{NFSU2_TR(0x5435a2);
{goto L5435a6;}
}
B5435a4:L5435a4:{c.instructions+=1;NFSU2_TR(0x5435a4);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5435a6:L5435a6:{c.instructions+=2;NFSU2_TR(0x5435a6);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5435a8:{NFSU2_TR(0x5435a8);
if(r1(R+518)){{goto L5435af;}}
}
B5435aa:L5435aa:{c.instructions+=2;NFSU2_TR(0x5435aa);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B5435ad:{NFSU2_TR(0x5435ad);
{goto L5435b1;}
}
B5435af:L5435af:{c.instructions+=1;NFSU2_TR(0x5435af);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5435b1:L5435b1:{c.instructions+=2;NFSU2_TR(0x5435b1);
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
B5435b3:{NFSU2_TR(0x5435b3);
if(r1(R+518)){{goto L5435c3;}}
}
B5435b5:L5435b5:{c.instructions+=3;NFSU2_TR(0x5435b5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5435b7:{NFSU2_TR(0x5435b7);
__builtin_memmove((R+4),(R+28),4);
}
B5435b9:{NFSU2_TR(0x5435b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5435beull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5430c0u);}goto L5430c0;}
}
B5435be:L5435be:{c.instructions+=2;NFSU2_TR(0x5435be);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5435c1:{NFSU2_TR(0x5435c1);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54359bu);}goto L54359b;}
}
B5435c3:L5435c3:{c.instructions+=4;NFSU2_TR(0x5435c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5435c4:{NFSU2_TR(0x5435c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5435c5:{NFSU2_TR(0x5435c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5435c6:{NFSU2_TR(0x5435c6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5435d0:L5435d0:{c.instructions+=40;NFSU2_TR(0x5435d0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5435d2:{NFSU2_TR(0x5435d2);
u8 U[4];
w4(U+0,u32(0x7779bbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5435d7:{NFSU2_TR(0x5435d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5435dd:{NFSU2_TR(0x5435dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5435de:{NFSU2_TR(0x5435de);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5435e5:{NFSU2_TR(0x5435e5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5435e6:{NFSU2_TR(0x5435e6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5435e7:{NFSU2_TR(0x5435e7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5435e8:{NFSU2_TR(0x5435e8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5435e9:{NFSU2_TR(0x5435e9);
__builtin_memmove((R+24),(R+4),4);
}
B5435eb:{NFSU2_TR(0x5435eb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5435ee:{NFSU2_TR(0x5435ee);
u8 U[4];
w4(U+0,u32(0x79b948ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5435f4:{NFSU2_TR(0x5435f4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5435f5:{NFSU2_TR(0x5435f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5435f9:{NFSU2_TR(0x5435f9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5435fb:{NFSU2_TR(0x5435fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5435fe:{NFSU2_TR(0x5435fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B543602:{NFSU2_TR(0x543602);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B543606:{NFSU2_TR(0x543606);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54360a:{NFSU2_TR(0x54360a);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B54360c:{NFSU2_TR(0x54360c);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54360e:{NFSU2_TR(0x54360e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B543612:{NFSU2_TR(0x543612);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B543615:{NFSU2_TR(0x543615);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B543618:{NFSU2_TR(0x543618);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54361b:{NFSU2_TR(0x54361b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B54361e:{NFSU2_TR(0x54361e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2dull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B543621:{NFSU2_TR(0x543621);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2eull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B543624:{NFSU2_TR(0x543624);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2full))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B543627:{NFSU2_TR(0x543627);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B54362b:{NFSU2_TR(0x54362b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x31ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B54362f:{NFSU2_TR(0x54362f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B543632:{NFSU2_TR(0x543632);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B543635:{NFSU2_TR(0x543635);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B543638:{NFSU2_TR(0x543638);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54363b:{NFSU2_TR(0x54363b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54363e:{NFSU2_TR(0x54363e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
w4(U+4,u32(0x43f00000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B543645:{NFSU2_TR(0x543645);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
w4(U+4,u32(0x42c80000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B54364c:{NFSU2_TR(0x54364c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54364f:{NFSU2_TR(0x54364f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x543654ull));
TAIL_STATIC(0x575620u,575);
}
B543654:L543654:{c.instructions+=3;NFSU2_TR(0x543654);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B543657:{NFSU2_TR(0x543657);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B543659:{NFSU2_TR(0x543659);
if(r1(R+518)){{goto L54367d;}}
}
B54365b:L54365b:{c.instructions+=10;NFSU2_TR(0x54365b);
w4(R+4,u32(0x3f800000ull));
}
B543660:{NFSU2_TR(0x543660);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B543662:{NFSU2_TR(0x543662);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B543665:{NFSU2_TR(0x543665);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B543668:{NFSU2_TR(0x543668);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54366b:{NFSU2_TR(0x54366b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54366e:{NFSU2_TR(0x54366e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B543671:{NFSU2_TR(0x543671);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B543675:{NFSU2_TR(0x543675);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2eull))));
w2(U+4,u16(0x1ull));
s2(u32(r4(U+0)),r2(U+4));
}
B54367b:{NFSU2_TR(0x54367b);
{goto L54367f;}
}
B54367d:L54367d:{c.instructions+=1;NFSU2_TR(0x54367d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B54367f:L54367f:{c.instructions+=8;NFSU2_TR(0x54367f);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B543683:{NFSU2_TR(0x543683);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B543686:{NFSU2_TR(0x543686);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
w4(U+4,u32(0x3e99999aull));
s4(u32(r4(U+0)),r4(U+4));
}
B54368d:{NFSU2_TR(0x54368d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B543690:{NFSU2_TR(0x543690);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2eull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B543694:{NFSU2_TR(0x543694);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B543697:{NFSU2_TR(0x543697);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543698:{NFSU2_TR(0x543698);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54369dull));
TAIL_STATIC(0x505450u,505);
}
B54369d:L54369d:{c.instructions+=4;NFSU2_TR(0x54369d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5436a0:{NFSU2_TR(0x5436a0);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5436a2:{NFSU2_TR(0x5436a2);
__builtin_memmove((R+20),(R+0),4);
}
B5436a4:{NFSU2_TR(0x5436a4);
if(r1(R+518)){{goto L5436bf;}}
}
B5436a6:L5436a6:{c.instructions+=2;NFSU2_TR(0x5436a6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5436a7:{NFSU2_TR(0x5436a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5436acull));
TAIL_STATIC(0x52cef0u,52c);
}
B5436ac:L5436ac:{c.instructions+=3;NFSU2_TR(0x5436ac);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5436af:{NFSU2_TR(0x5436af);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5436b1:{NFSU2_TR(0x5436b1);
if(r1(R+518)){{goto L5436bf;}}
}
B5436b3:L5436b3:{c.instructions+=3;NFSU2_TR(0x5436b3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5436b4:{NFSU2_TR(0x5436b4);
__builtin_memmove((R+4),(R+0),4);
}
B5436b6:{NFSU2_TR(0x5436b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5436bbull));
TAIL_STATIC(0x517f80u,517);
}
B5436bb:L5436bb:{c.instructions+=2;NFSU2_TR(0x5436bb);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5436bd:{NFSU2_TR(0x5436bd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5436d6;}}
}
B5436bf:L5436bf:{c.instructions+=3;NFSU2_TR(0x5436bf);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B5436c4:{NFSU2_TR(0x5436c4);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5436c6:{NFSU2_TR(0x5436c6);
if(r1(R+518)){{goto L5436d4;}}
}
B5436c8:L5436c8:{c.instructions+=4;NFSU2_TR(0x5436c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5436cb:{NFSU2_TR(0x5436cb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5436cc:{NFSU2_TR(0x5436cc);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5436cd:{NFSU2_TR(0x5436cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5436d2ull));
TAIL_STATIC(0x52c570u,52c);
}
B5436d2:L5436d2:{c.instructions+=1;NFSU2_TR(0x5436d2);
{goto L5436d6;}
}
B5436d4:L5436d4:{c.instructions+=1;NFSU2_TR(0x5436d4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5436d6:L5436d6:{c.instructions+=7;NFSU2_TR(0x5436d6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+8),(U+0),4);
}
B5436d9:{NFSU2_TR(0x5436d9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5436da:{NFSU2_TR(0x5436da);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5436dd:{NFSU2_TR(0x5436dd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5436de:{NFSU2_TR(0x5436de);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5436df:{NFSU2_TR(0x5436df);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5436e2:{NFSU2_TR(0x5436e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5436e7ull));
TAIL_STATIC(0x51d730u,51d);
}
B5436e7:L5436e7:{c.instructions+=7;NFSU2_TR(0x5436e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5436ea:{NFSU2_TR(0x5436ea);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((R+8),(U+0),4);
}
B5436ed:{NFSU2_TR(0x5436ed);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5436ee:{NFSU2_TR(0x5436ee);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5436f1:{NFSU2_TR(0x5436f1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5436f2:{NFSU2_TR(0x5436f2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5436f3:{NFSU2_TR(0x5436f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5436f8ull));
TAIL_STATIC(0x51d620u,51d);
}
B5436f8:L5436f8:{c.instructions+=4;NFSU2_TR(0x5436f8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B5436fb:{NFSU2_TR(0x5436fb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5436fc:{NFSU2_TR(0x5436fc);
__builtin_memmove((R+4),(R+24),4);
}
B5436fe:{NFSU2_TR(0x5436fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x543703ull));
TAIL_STATIC(0x52ec20u,52e);
}
B543703:L543703:{c.instructions+=4;NFSU2_TR(0x543703);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B543706:{NFSU2_TR(0x543706);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543707:{NFSU2_TR(0x543707);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54370a:{NFSU2_TR(0x54370a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54370full));
TAIL_STATIC(0x50ca00u,50c);
}
B54370f:L54370f:{c.instructions+=7;NFSU2_TR(0x54370f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((R+0),(U+0),4);
}
B543712:{NFSU2_TR(0x543712);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543713:{NFSU2_TR(0x543713);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+0),(U+0),4);
}
B543716:{NFSU2_TR(0x543716);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543717:{NFSU2_TR(0x543717);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54371a:{NFSU2_TR(0x54371a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54371b:{NFSU2_TR(0x54371b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x543720ull));
TAIL_STATIC(0x51d620u,51d);
}
B543720:L543720:{c.instructions+=5;NFSU2_TR(0x543720);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B543726:{NFSU2_TR(0x543726);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B543729:{NFSU2_TR(0x543729);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B54372c:{NFSU2_TR(0x54372c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54372e:{NFSU2_TR(0x54372e);
if(r1(R+518)){{goto L543741;}}
}
B543730:L543730:{c.instructions+=2;NFSU2_TR(0x543730);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B543732:{NFSU2_TR(0x543732);
if(r1(R+518)){{goto L543741;}}
}
B543734:L543734:{c.instructions+=5;NFSU2_TR(0x543734);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B543737:{NFSU2_TR(0x543737);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54373a:{NFSU2_TR(0x54373a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54373b:{NFSU2_TR(0x54373b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54373c:{NFSU2_TR(0x54373c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x543741ull));
TAIL_STATIC(0x52ce40u,52c);
}
B543741:L543741:{c.instructions+=5;NFSU2_TR(0x543741);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B543745:{NFSU2_TR(0x543745);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B543749:{NFSU2_TR(0x543749);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54374a:{NFSU2_TR(0x54374a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54374b:{NFSU2_TR(0x54374b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x543750ull));
TAIL_STATIC(0x4953e0u,495);
}
B543750:L543750:{c.instructions+=4;NFSU2_TR(0x543750);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B543754:{NFSU2_TR(0x543754);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543755:{NFSU2_TR(0x543755);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B543758:{NFSU2_TR(0x543758);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54375dull));
TAIL_STATIC(0x505450u,505);
}
B54375d:L54375d:{c.instructions+=4;NFSU2_TR(0x54375d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B543760:{NFSU2_TR(0x543760);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B543762:{NFSU2_TR(0x543762);
__builtin_memmove((R+28),(R+0),4);
}
B543764:{NFSU2_TR(0x543764);
if(r1(R+518)){{goto L54377f;}}
}
B543766:L543766:{c.instructions+=2;NFSU2_TR(0x543766);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543767:{NFSU2_TR(0x543767);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54376cull));
TAIL_STATIC(0x52cef0u,52c);
}
B54376c:L54376c:{c.instructions+=3;NFSU2_TR(0x54376c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B54376f:{NFSU2_TR(0x54376f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B543771:{NFSU2_TR(0x543771);
if(r1(R+518)){{goto L54377f;}}
}
B543773:L543773:{c.instructions+=3;NFSU2_TR(0x543773);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543774:{NFSU2_TR(0x543774);
__builtin_memmove((R+4),(R+0),4);
}
B543776:{NFSU2_TR(0x543776);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54377bull));
TAIL_STATIC(0x517f80u,517);
}
B54377b:L54377b:{c.instructions+=2;NFSU2_TR(0x54377b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54377d:{NFSU2_TR(0x54377d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L543792;}}
}
B54377f:L54377f:{c.instructions+=3;NFSU2_TR(0x54377f);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B543784:{NFSU2_TR(0x543784);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B543786:{NFSU2_TR(0x543786);
if(r1(R+518)){{goto L543797;}}
}
B543788:L543788:{c.instructions+=4;NFSU2_TR(0x543788);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54378b:{NFSU2_TR(0x54378b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54378c:{NFSU2_TR(0x54378c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54378d:{NFSU2_TR(0x54378d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x543792ull));
TAIL_STATIC(0x52c570u,52c);
}
B543792:L543792:{c.instructions+=2;NFSU2_TR(0x543792);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B543795:{NFSU2_TR(0x543795);
{goto L54379a;}
}
B543797:L543797:{c.instructions+=1;NFSU2_TR(0x543797);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54379a:L54379a:{c.instructions+=9;NFSU2_TR(0x54379a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54379e:{NFSU2_TR(0x54379e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54379f:{NFSU2_TR(0x54379f);
__builtin_memmove((R+0),(R+24),4);
}
B5437a1:{NFSU2_TR(0x5437a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5437a2:{NFSU2_TR(0x5437a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5437a3:{NFSU2_TR(0x5437a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5437a4:{NFSU2_TR(0x5437a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5437ab:{NFSU2_TR(0x5437ab);
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
B5437ae:{NFSU2_TR(0x5437ae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5437c0:L5437c0:{c.instructions+=5;NFSU2_TR(0x5437c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5437c3:{NFSU2_TR(0x5437c3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5437c4:{NFSU2_TR(0x5437c4);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5437c7:{NFSU2_TR(0x5437c7);
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
B5437c9:{NFSU2_TR(0x5437c9);
if(r1(R+518)){{goto L54383a;}}
}
B5437cb:L5437cb:{c.instructions+=6;NFSU2_TR(0x5437cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5437ce:{NFSU2_TR(0x5437ce);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5437cf:{NFSU2_TR(0x5437cf);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5437d3:{NFSU2_TR(0x5437d3);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5437d6:{NFSU2_TR(0x5437d6);
__builtin_memmove((R+8),(R+0),4);
}
B5437d8:{NFSU2_TR(0x5437d8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5437f0;}}
}
B5437da:L5437da:{c.instructions+=3;NFSU2_TR(0x5437da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5437dc:{NFSU2_TR(0x5437dc);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5437de:{NFSU2_TR(0x5437de);
if(r1(R+518)){{goto L5437e5;}}
}
B5437e0:L5437e0:{c.instructions+=2;NFSU2_TR(0x5437e0);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
}
B5437e3:{NFSU2_TR(0x5437e3);
{goto L5437e7;}
}
B5437e5:L5437e5:{c.instructions+=1;NFSU2_TR(0x5437e5);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5437e7:L5437e7:{c.instructions+=2;NFSU2_TR(0x5437e7);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5437e9:{NFSU2_TR(0x5437e9);
if(r1(R+518)){{goto L543815;}}
}
B5437eb:L5437eb:{c.instructions+=2;NFSU2_TR(0x5437eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5437ee:{NFSU2_TR(0x5437ee);
{goto L54380a;}
}
B5437f0:L5437f0:{c.instructions+=2;NFSU2_TR(0x5437f0);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5437f3:{NFSU2_TR(0x5437f3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L543815;}}
}
B5437f5:L5437f5:{c.instructions+=3;NFSU2_TR(0x5437f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5437f8:{NFSU2_TR(0x5437f8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5437fa:{NFSU2_TR(0x5437fa);
if(r1(R+518)){{goto L543801;}}
}
B5437fc:L5437fc:{c.instructions+=2;NFSU2_TR(0x5437fc);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
}
B5437ff:{NFSU2_TR(0x5437ff);
{goto L543803;}
}
B543801:L543801:{c.instructions+=1;NFSU2_TR(0x543801);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B543803:L543803:{c.instructions+=2;NFSU2_TR(0x543803);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B543805:{NFSU2_TR(0x543805);
if(r1(R+518)){{goto L543815;}}
}
B543807:L543807:{c.instructions+=1;NFSU2_TR(0x543807);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54380a:L54380a:{c.instructions+=2;NFSU2_TR(0x54380a);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54380c:{NFSU2_TR(0x54380c);
if(r1(R+518)){{goto L543813;}}
}
B54380e:L54380e:{c.instructions+=2;NFSU2_TR(0x54380e);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xfffffffcull))));
}
B543811:{NFSU2_TR(0x543811);
{goto L543815;}
}
B543813:L543813:{c.instructions+=1;NFSU2_TR(0x543813);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B543815:L543815:{c.instructions+=3;NFSU2_TR(0x543815);
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
B543817:{NFSU2_TR(0x543817);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B543818:{NFSU2_TR(0x543818);
if(r1(R+518)){{goto L54383a;}}
}
B54381a:L54381a:{c.instructions+=4;NFSU2_TR(0x54381a);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B54381d:{NFSU2_TR(0x54381d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54381f:{NFSU2_TR(0x54381f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B543820:{NFSU2_TR(0x543820);
if(r1(R+518)){{goto L54382e;}}
}
B543822:L543822:{c.instructions+=3;NFSU2_TR(0x543822);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B543825:{NFSU2_TR(0x543825);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B543829:{NFSU2_TR(0x543829);
TAIL_STATIC(0x52ee40u,52e);
}
B54382e:L54382e:{c.instructions+=3;NFSU2_TR(0x54382e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B543831:{NFSU2_TR(0x543831);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B543835:{NFSU2_TR(0x543835);
TAIL_STATIC(0x538700u,538);
}
B54383a:L54383a:{c.instructions+=2;NFSU2_TR(0x54383a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54383b:{NFSU2_TR(0x54383b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B543840:L543840:{c.instructions+=38;NFSU2_TR(0x543840);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543842:{NFSU2_TR(0x543842);
u8 U[4];
w4(U+0,u32(0x7779bbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543847:{NFSU2_TR(0x543847);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54384d:{NFSU2_TR(0x54384d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54384e:{NFSU2_TR(0x54384e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B543855:{NFSU2_TR(0x543855);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543856:{NFSU2_TR(0x543856);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543857:{NFSU2_TR(0x543857);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543858:{NFSU2_TR(0x543858);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543859:{NFSU2_TR(0x543859);
__builtin_memmove((R+24),(R+4),4);
}
B54385b:{NFSU2_TR(0x54385b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B54385e:{NFSU2_TR(0x54385e);
u8 U[4];
w4(U+0,u32(0x795cbcull));
s4(u32(r4(R+24)),r4(U+0));
}
B543864:{NFSU2_TR(0x543864);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543865:{NFSU2_TR(0x543865);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B543869:{NFSU2_TR(0x543869);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+0)),r4(U+0));
}
B54386b:{NFSU2_TR(0x54386b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54386e:{NFSU2_TR(0x54386e);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B543872:{NFSU2_TR(0x543872);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B543876:{NFSU2_TR(0x543876);
u8 U[5];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B54387a:{NFSU2_TR(0x54387a);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B54387e:{NFSU2_TR(0x54387e);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B543880:{NFSU2_TR(0x543880);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B543883:{NFSU2_TR(0x543883);
w4(R+0,u32(0x1ull));
}
B543888:{NFSU2_TR(0x543888);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543889:{NFSU2_TR(0x543889);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54388d:{NFSU2_TR(0x54388d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B543890:{NFSU2_TR(0x543890);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B543893:{NFSU2_TR(0x543893);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B543896:{NFSU2_TR(0x543896);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B543899:{NFSU2_TR(0x543899);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
w4(U+4,u32(0x41200000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5438a0:{NFSU2_TR(0x5438a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5438a3:{NFSU2_TR(0x5438a3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5438a6:{NFSU2_TR(0x5438a6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2dull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5438a9:{NFSU2_TR(0x5438a9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2eull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5438ac:{NFSU2_TR(0x5438ac);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2full))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5438af:{NFSU2_TR(0x5438af);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5438b2:{NFSU2_TR(0x5438b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
w4(U+4,u32(0xfffffff7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5438b9:{NFSU2_TR(0x5438b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5438beull));
TAIL_STATIC(0x505450u,505);
}
B5438be:L5438be:{c.instructions+=4;NFSU2_TR(0x5438be);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5438c1:{NFSU2_TR(0x5438c1);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5438c3:{NFSU2_TR(0x5438c3);
__builtin_memmove((R+20),(R+0),4);
}
B5438c5:{NFSU2_TR(0x5438c5);
if(r1(R+518)){{goto L5438e0;}}
}
B5438c7:L5438c7:{c.instructions+=2;NFSU2_TR(0x5438c7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5438c8:{NFSU2_TR(0x5438c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5438cdull));
TAIL_STATIC(0x52cef0u,52c);
}
B5438cd:L5438cd:{c.instructions+=3;NFSU2_TR(0x5438cd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5438d0:{NFSU2_TR(0x5438d0);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5438d2:{NFSU2_TR(0x5438d2);
if(r1(R+518)){{goto L5438e0;}}
}
B5438d4:L5438d4:{c.instructions+=3;NFSU2_TR(0x5438d4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5438d5:{NFSU2_TR(0x5438d5);
__builtin_memmove((R+4),(R+0),4);
}
B5438d7:{NFSU2_TR(0x5438d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5438dcull));
TAIL_STATIC(0x517f80u,517);
}
B5438dc:L5438dc:{c.instructions+=2;NFSU2_TR(0x5438dc);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5438de:{NFSU2_TR(0x5438de);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5438f7;}}
}
B5438e0:L5438e0:{c.instructions+=3;NFSU2_TR(0x5438e0);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B5438e5:{NFSU2_TR(0x5438e5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5438e7:{NFSU2_TR(0x5438e7);
if(r1(R+518)){{goto L5438f5;}}
}
B5438e9:L5438e9:{c.instructions+=4;NFSU2_TR(0x5438e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5438ec:{NFSU2_TR(0x5438ec);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5438ed:{NFSU2_TR(0x5438ed);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5438ee:{NFSU2_TR(0x5438ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5438f3ull));
TAIL_STATIC(0x52c570u,52c);
}
B5438f3:L5438f3:{c.instructions+=1;NFSU2_TR(0x5438f3);
{goto L5438f7;}
}
B5438f5:L5438f5:{c.instructions+=1;NFSU2_TR(0x5438f5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5438f7:L5438f7:{c.instructions+=5;NFSU2_TR(0x5438f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5438fa:{NFSU2_TR(0x5438fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5438fd:{NFSU2_TR(0x5438fd);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B543901:{NFSU2_TR(0x543901);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543902:{NFSU2_TR(0x543902);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x543907ull));
TAIL_STATIC(0x505450u,505);
}
B543907:L543907:{c.instructions+=4;NFSU2_TR(0x543907);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B54390a:{NFSU2_TR(0x54390a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54390c:{NFSU2_TR(0x54390c);
__builtin_memmove((R+20),(R+0),4);
}
B54390e:{NFSU2_TR(0x54390e);
if(r1(R+518)){{goto L543929;}}
}
B543910:L543910:{c.instructions+=2;NFSU2_TR(0x543910);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543911:{NFSU2_TR(0x543911);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x543916ull));
TAIL_STATIC(0x52cef0u,52c);
}
B543916:L543916:{c.instructions+=3;NFSU2_TR(0x543916);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B543919:{NFSU2_TR(0x543919);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54391b:{NFSU2_TR(0x54391b);
if(r1(R+518)){{goto L543929;}}
}
B54391d:L54391d:{c.instructions+=3;NFSU2_TR(0x54391d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54391e:{NFSU2_TR(0x54391e);
__builtin_memmove((R+4),(R+0),4);
}
B543920:{NFSU2_TR(0x543920);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x543925ull));
TAIL_STATIC(0x517f80u,517);
}
B543925:L543925:{c.instructions+=2;NFSU2_TR(0x543925);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B543927:{NFSU2_TR(0x543927);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L543940;}}
}
B543929:L543929:{c.instructions+=3;NFSU2_TR(0x543929);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B54392e:{NFSU2_TR(0x54392e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B543930:{NFSU2_TR(0x543930);
if(r1(R+518)){{goto L54393e;}}
}
B543932:L543932:{c.instructions+=4;NFSU2_TR(0x543932);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B543935:{NFSU2_TR(0x543935);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543936:{NFSU2_TR(0x543936);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543937:{NFSU2_TR(0x543937);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54393cull));
TAIL_STATIC(0x52c570u,52c);
}
B54393c:L54393c:{c.instructions+=1;NFSU2_TR(0x54393c);
{goto L543940;}
}
B54393e:L54393e:{c.instructions+=1;NFSU2_TR(0x54393e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B543940:L543940:{c.instructions+=5;NFSU2_TR(0x543940);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B543944:{NFSU2_TR(0x543944);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B543947:{NFSU2_TR(0x543947);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543948:{NFSU2_TR(0x543948);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54394b:{NFSU2_TR(0x54394b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x543950ull));
TAIL_STATIC(0x505450u,505);
}
B543950:L543950:{c.instructions+=4;NFSU2_TR(0x543950);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B543953:{NFSU2_TR(0x543953);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B543955:{NFSU2_TR(0x543955);
__builtin_memmove((R+20),(R+0),4);
}
B543957:{NFSU2_TR(0x543957);
if(r1(R+518)){{goto L543972;}}
}
B543959:L543959:{c.instructions+=2;NFSU2_TR(0x543959);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54395a:{NFSU2_TR(0x54395a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54395full));
TAIL_STATIC(0x52cef0u,52c);
}
B54395f:L54395f:{c.instructions+=3;NFSU2_TR(0x54395f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B543962:{NFSU2_TR(0x543962);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B543964:{NFSU2_TR(0x543964);
if(r1(R+518)){{goto L543972;}}
}
B543966:L543966:{c.instructions+=3;NFSU2_TR(0x543966);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543967:{NFSU2_TR(0x543967);
__builtin_memmove((R+4),(R+0),4);
}
B543969:{NFSU2_TR(0x543969);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54396eull));
TAIL_STATIC(0x517f80u,517);
}
B54396e:L54396e:{c.instructions+=2;NFSU2_TR(0x54396e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B543970:{NFSU2_TR(0x543970);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L543985;}}
}
B543972:L543972:{c.instructions+=3;NFSU2_TR(0x543972);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B543977:{NFSU2_TR(0x543977);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B543979:{NFSU2_TR(0x543979);
if(r1(R+518)){{goto L54398a;}}
}
B54397b:L54397b:{c.instructions+=4;NFSU2_TR(0x54397b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54397e:{NFSU2_TR(0x54397e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54397f:{NFSU2_TR(0x54397f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543980:{NFSU2_TR(0x543980);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x543985ull));
TAIL_STATIC(0x52c570u,52c);
}
B543985:L543985:{c.instructions+=2;NFSU2_TR(0x543985);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B543988:{NFSU2_TR(0x543988);
{goto L54398d;}
}
B54398a:L54398a:{c.instructions+=1;NFSU2_TR(0x54398a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54398d:L54398d:{c.instructions+=9;NFSU2_TR(0x54398d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B543991:{NFSU2_TR(0x543991);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B543992:{NFSU2_TR(0x543992);
__builtin_memmove((R+0),(R+24),4);
}
B543994:{NFSU2_TR(0x543994);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B543995:{NFSU2_TR(0x543995);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B543996:{NFSU2_TR(0x543996);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B543997:{NFSU2_TR(0x543997);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54399e:{NFSU2_TR(0x54399e);
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
B5439a1:{NFSU2_TR(0x5439a1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5439b0:L5439b0:{c.instructions+=10;NFSU2_TR(0x5439b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x40ull))));
}
B5439b3:{NFSU2_TR(0x5439b3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5439b4:{NFSU2_TR(0x5439b4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5439b5:{NFSU2_TR(0x5439b5);
__builtin_memmove((R+28),(R+4),4);
}
B5439b7:{NFSU2_TR(0x5439b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5439ba:{NFSU2_TR(0x5439ba);
u8 U[4];
w4(U+0,u32(0x7845d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5439bf:{NFSU2_TR(0x5439bf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5439c0:{NFSU2_TR(0x5439c0);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5439c4:{NFSU2_TR(0x5439c4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5439c5:{NFSU2_TR(0x5439c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5439caull));
TAIL_STATIC(0x43dda0u,43d);
}
B5439ca:L5439ca:{c.instructions+=8;NFSU2_TR(0x5439ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5439cd:{NFSU2_TR(0x5439cd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5439ce:{NFSU2_TR(0x5439ce);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5439d2:{NFSU2_TR(0x5439d2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5439d3:{NFSU2_TR(0x5439d3);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5439d7:{NFSU2_TR(0x5439d7);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5439d9:{NFSU2_TR(0x5439d9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5439da:{NFSU2_TR(0x5439da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5439dfull));
TAIL_STATIC(0x50c960u,50c);
}
B5439df:L5439df:{c.instructions+=5;NFSU2_TR(0x5439df);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5439e2:{NFSU2_TR(0x5439e2);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5439e6:{NFSU2_TR(0x5439e6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5439e7:{NFSU2_TR(0x5439e7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5439e8:{NFSU2_TR(0x5439e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5439edull));
TAIL_STATIC(0x4953e0u,495);
}
B5439ed:L5439ed:{c.instructions+=4;NFSU2_TR(0x5439ed);
__builtin_memmove((R+12),(R+0),4);
}
B5439ef:{NFSU2_TR(0x5439ef);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B5439f2:{NFSU2_TR(0x5439f2);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5439f4:{NFSU2_TR(0x5439f4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5439fe;}}
}
B5439f6:L5439f6:{c.instructions+=4;NFSU2_TR(0x5439f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5439f7:{NFSU2_TR(0x5439f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5439f8:{NFSU2_TR(0x5439f8);
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
B5439fb:{NFSU2_TR(0x5439fb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5439fe:L5439fe:{c.instructions+=7;NFSU2_TR(0x5439fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B543a01:{NFSU2_TR(0x543a01);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543a02:{NFSU2_TR(0x543a02);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B543a06:{NFSU2_TR(0x543a06);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B543a07:{NFSU2_TR(0x543a07);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B543a09:{NFSU2_TR(0x543a09);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B543a0c:{NFSU2_TR(0x543a0c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L543a19;}}
}
B543a0e:L543a0e:{c.instructions+=6;NFSU2_TR(0x543a0e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B543a0f:{NFSU2_TR(0x543a0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B543a10:{NFSU2_TR(0x543a10);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B543a12:{NFSU2_TR(0x543a12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B543a13:{NFSU2_TR(0x543a13);
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
B543a16:{NFSU2_TR(0x543a16);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B543a19:L543a19:{c.instructions+=7;NFSU2_TR(0x543a19);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((R+4),(U+0),4);
}
B543a1c:{NFSU2_TR(0x543a1c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543a1d:{NFSU2_TR(0x543a1d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((R+8),(U+0),4);
}
B543a20:{NFSU2_TR(0x543a20);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543a21:{NFSU2_TR(0x543a21);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543a22:{NFSU2_TR(0x543a22);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B543a25:{NFSU2_TR(0x543a25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x543a2aull));
TAIL_STATIC(0x51d730u,51d);
}
B543a2a:L543a2a:{c.instructions+=2;NFSU2_TR(0x543a2a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543a2b:{NFSU2_TR(0x543a2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x543a30ull));
TAIL_STATIC(0x495570u,495);
}
B543a30:L543a30:{c.instructions+=12;NFSU2_TR(0x543a30);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B543a33:{NFSU2_TR(0x543a33);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B543a36:{NFSU2_TR(0x543a36);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B543a39:{NFSU2_TR(0x543a39);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B543a3c:{NFSU2_TR(0x543a3c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B543a3e:{NFSU2_TR(0x543a3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B543a41:{NFSU2_TR(0x543a41);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B543a44:{NFSU2_TR(0x543a44);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B543a46:{NFSU2_TR(0x543a46);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B543a49:{NFSU2_TR(0x543a49);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B543a4c:{NFSU2_TR(0x543a4c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B543a4e:{NFSU2_TR(0x543a4e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L543a7e;}}
}
B543a50:L543a50:{c.instructions+=3;NFSU2_TR(0x543a50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B543a52:{NFSU2_TR(0x543a52);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B543a54:{NFSU2_TR(0x543a54);
if(r1(R+518)){{goto L543a5b;}}
}
B543a56:L543a56:{c.instructions+=2;NFSU2_TR(0x543a56);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B543a59:{NFSU2_TR(0x543a59);
{goto L543a5d;}
}
B543a5b:L543a5b:{c.instructions+=1;NFSU2_TR(0x543a5b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B543a5d:L543a5d:{c.instructions+=5;NFSU2_TR(0x543a5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B543a60:{NFSU2_TR(0x543a60);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B543a66:{NFSU2_TR(0x543a66);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B543a68:{NFSU2_TR(0x543a68);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B543a6b:{NFSU2_TR(0x543a6b);
if(r1(R+518)){{goto L543a7e;}}
}
B543a6d:L543a6d:{c.instructions+=2;NFSU2_TR(0x543a6d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B543a6f:{NFSU2_TR(0x543a6f);
if(r1(R+518)){{goto L543a7e;}}
}
B543a71:L543a71:{c.instructions+=5;NFSU2_TR(0x543a71);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B543a74:{NFSU2_TR(0x543a74);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B543a77:{NFSU2_TR(0x543a77);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543a78:{NFSU2_TR(0x543a78);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543a79:{NFSU2_TR(0x543a79);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x543a7eull));
TAIL_STATIC(0x52ce40u,52c);
}
B543a7e:L543a7e:{c.instructions+=6;NFSU2_TR(0x543a7e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B543a7f:{NFSU2_TR(0x543a7f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B543a80:{NFSU2_TR(0x543a80);
__builtin_memmove((R+0),(R+12),4);
}
B543a82:{NFSU2_TR(0x543a82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B543a83:{NFSU2_TR(0x543a83);
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
B543a86:{NFSU2_TR(0x543a86);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B543a90:L543a90:{c.instructions+=26;NFSU2_TR(0x543a90);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543a92:{NFSU2_TR(0x543a92);
u8 U[4];
w4(U+0,u32(0x7779d8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543a97:{NFSU2_TR(0x543a97);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B543a9d:{NFSU2_TR(0x543a9d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543a9e:{NFSU2_TR(0x543a9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B543aa5:{NFSU2_TR(0x543aa5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543aa6:{NFSU2_TR(0x543aa6);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B543aaa:{NFSU2_TR(0x543aaa);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B543aae:{NFSU2_TR(0x543aae);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543aaf:{NFSU2_TR(0x543aaf);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543ab0:{NFSU2_TR(0x543ab0);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B543ab4:{NFSU2_TR(0x543ab4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543ab5:{NFSU2_TR(0x543ab5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543ab6:{NFSU2_TR(0x543ab6);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B543aba:{NFSU2_TR(0x543aba);
__builtin_memmove((R+24),(R+4),4);
}
B543abc:{NFSU2_TR(0x543abc);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B543ac0:{NFSU2_TR(0x543ac0);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B543ac2:{NFSU2_TR(0x543ac2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543ac3:{NFSU2_TR(0x543ac3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543ac4:{NFSU2_TR(0x543ac4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543ac5:{NFSU2_TR(0x543ac5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543ac6:{NFSU2_TR(0x543ac6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543ac7:{NFSU2_TR(0x543ac7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543ac8:{NFSU2_TR(0x543ac8);
__builtin_memmove((R+4),(R+24),4);
}
B543aca:{NFSU2_TR(0x543aca);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B543ace:{NFSU2_TR(0x543ace);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x543ad3ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x543840u);}goto L543840;}
}
B543ad3:L543ad3:{c.instructions+=9;NFSU2_TR(0x543ad3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543ad4:{NFSU2_TR(0x543ad4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543ad5:{NFSU2_TR(0x543ad5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543ad6:{NFSU2_TR(0x543ad6);
u8 U[4];
w4(U+0,u32(0x796484ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543adb:{NFSU2_TR(0x543adb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543adc:{NFSU2_TR(0x543adc);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((R+4),(U+0),4);
}
B543adf:{NFSU2_TR(0x543adf);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B543ae3:{NFSU2_TR(0x543ae3);
u8 U[4];
w4(U+0,u32(0x79c0f4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B543ae9:{NFSU2_TR(0x543ae9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x543aeeull));
TAIL_STATIC(0x542ac0u,542);
}
B543aee:L543aee:{c.instructions+=22;NFSU2_TR(0x543aee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B543af4:{NFSU2_TR(0x543af4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B543afa:{NFSU2_TR(0x543afa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B543b00:{NFSU2_TR(0x543b00);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B543b06:{NFSU2_TR(0x543b06);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B543b0d:{NFSU2_TR(0x543b0d);
w4(R+0,u32(0x3f800000ull));
}
B543b12:{NFSU2_TR(0x543b12);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B543b18:{NFSU2_TR(0x543b18);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B543b1e:{NFSU2_TR(0x543b1e);
w4(R+0,u32(0x1ull));
}
B543b23:{NFSU2_TR(0x543b23);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbeull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B543b2a:{NFSU2_TR(0x543b2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B543b30:{NFSU2_TR(0x543b30);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B543b36:{NFSU2_TR(0x543b36);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B543b3a:{NFSU2_TR(0x543b3a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543b3b:{NFSU2_TR(0x543b3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B543b41:{NFSU2_TR(0x543b41);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B543b47:{NFSU2_TR(0x543b47);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B543b4d:{NFSU2_TR(0x543b4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B543b53:{NFSU2_TR(0x543b53);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B543b59:{NFSU2_TR(0x543b59);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B543b5f:{NFSU2_TR(0x543b5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
w4(U+4,u32(0x42200000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B543b66:{NFSU2_TR(0x543b66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x543b6bull));
TAIL_STATIC(0x505450u,505);
}
B543b6b:L543b6b:{c.instructions+=4;NFSU2_TR(0x543b6b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B543b6e:{NFSU2_TR(0x543b6e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B543b70:{NFSU2_TR(0x543b70);
__builtin_memmove((R+20),(R+0),4);
}
B543b72:{NFSU2_TR(0x543b72);
if(r1(R+518)){{goto L543b8d;}}
}
B543b74:L543b74:{c.instructions+=2;NFSU2_TR(0x543b74);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543b75:{NFSU2_TR(0x543b75);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x543b7aull));
TAIL_STATIC(0x52cef0u,52c);
}
B543b7a:L543b7a:{c.instructions+=3;NFSU2_TR(0x543b7a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B543b7d:{NFSU2_TR(0x543b7d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B543b7f:{NFSU2_TR(0x543b7f);
if(r1(R+518)){{goto L543b8d;}}
}
B543b81:L543b81:{c.instructions+=3;NFSU2_TR(0x543b81);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543b82:{NFSU2_TR(0x543b82);
__builtin_memmove((R+4),(R+0),4);
}
B543b84:{NFSU2_TR(0x543b84);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x543b89ull));
TAIL_STATIC(0x517f80u,517);
}
B543b89:L543b89:{c.instructions+=2;NFSU2_TR(0x543b89);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B543b8b:{NFSU2_TR(0x543b8b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L543ba0;}}
}
B543b8d:L543b8d:{c.instructions+=3;NFSU2_TR(0x543b8d);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B543b92:{NFSU2_TR(0x543b92);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B543b94:{NFSU2_TR(0x543b94);
if(r1(R+518)){{goto L543bc3;}}
}
B543b96:L543b96:{c.instructions+=4;NFSU2_TR(0x543b96);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B543b99:{NFSU2_TR(0x543b99);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543b9a:{NFSU2_TR(0x543b9a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543b9b:{NFSU2_TR(0x543b9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x543ba0ull));
TAIL_STATIC(0x52c570u,52c);
}
B543ba0:L543ba0:{c.instructions+=3;NFSU2_TR(0x543ba0);
__builtin_memmove((R+28),(R+0),4);
}
B543ba2:{NFSU2_TR(0x543ba2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B543ba4:{NFSU2_TR(0x543ba4);
if(r1(R+518)){{goto L543bc3;}}
}
B543ba6:L543ba6:{c.instructions+=6;NFSU2_TR(0x543ba6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B543bac:{NFSU2_TR(0x543bac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543bad:{NFSU2_TR(0x543bad);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B543bb3:{NFSU2_TR(0x543bb3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543bb4:{NFSU2_TR(0x543bb4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543bb5:{NFSU2_TR(0x543bb5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x543bbaull));
TAIL_STATIC(0x51d620u,51d);
}
B543bba:L543bba:{c.instructions+=2;NFSU2_TR(0x543bba);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543bbb:{NFSU2_TR(0x543bbb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x543bc0ull));
TAIL_STATIC(0x50ca00u,50c);
}
B543bc0:L543bc0:{c.instructions+=1;NFSU2_TR(0x543bc0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B543bc3:L543bc3:{c.instructions+=11;NFSU2_TR(0x543bc3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B543bc7:{NFSU2_TR(0x543bc7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B543bc8:{NFSU2_TR(0x543bc8);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbeull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B543bcf:{NFSU2_TR(0x543bcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
w4(U+4,u32(0x3e99999aull));
s4(u32(r4(U+0)),r4(U+4));
}
B543bd9:{NFSU2_TR(0x543bd9);
__builtin_memmove((R+0),(R+24),4);
}
B543bdb:{NFSU2_TR(0x543bdb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B543bdc:{NFSU2_TR(0x543bdc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B543bdd:{NFSU2_TR(0x543bdd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B543bde:{NFSU2_TR(0x543bde);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B543be5:{NFSU2_TR(0x543be5);
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
B543be8:{NFSU2_TR(0x543be8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B543bf0:L543bf0:{c.instructions+=3;NFSU2_TR(0x543bf0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543bf1:{NFSU2_TR(0x543bf1);
__builtin_memmove((R+24),(R+4),4);
}
B543bf3:{NFSU2_TR(0x543bf3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x543bf8ull));
TAIL_STATIC(0x4cbc20u,4cb);
}
B543bf8:L543bf8:{c.instructions+=2;NFSU2_TR(0x543bf8);
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
B543bfd:{NFSU2_TR(0x543bfd);
if(r1(R+518)){{goto L543c08;}}
}
B543bff:L543bff:{c.instructions+=2;NFSU2_TR(0x543bff);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543c00:{NFSU2_TR(0x543c00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x543c05ull));
TAIL_STATIC(0x575630u,575);
}
B543c05:L543c05:{c.instructions+=1;NFSU2_TR(0x543c05);
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
B543c08:L543c08:{c.instructions+=3;NFSU2_TR(0x543c08);
__builtin_memmove((R+0),(R+24),4);
}
B543c0a:{NFSU2_TR(0x543c0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B543c0b:{NFSU2_TR(0x543c0b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B543c10:L543c10:{c.instructions+=12;NFSU2_TR(0x543c10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x28ull))));
}
B543c13:{NFSU2_TR(0x543c13);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543c14:{NFSU2_TR(0x543c14);
__builtin_memmove((R+28),(R+4),4);
}
B543c16:{NFSU2_TR(0x543c16);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B543c19:{NFSU2_TR(0x543c19);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B543c1c:{NFSU2_TR(0x543c1c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543c1d:{NFSU2_TR(0x543c1d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543c1e:{NFSU2_TR(0x543c1e);
u8 U[4];
w4(U+0,u32(0x78f6f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543c23:{NFSU2_TR(0x543c23);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B543c27:{NFSU2_TR(0x543c27);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543c29:{NFSU2_TR(0x543c29);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543c2a:{NFSU2_TR(0x543c2a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x543c2full));
TAIL_STATIC(0x50c960u,50c);
}
B543c2f:L543c2f:{c.instructions+=5;NFSU2_TR(0x543c2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B543c32:{NFSU2_TR(0x543c32);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B543c36:{NFSU2_TR(0x543c36);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543c37:{NFSU2_TR(0x543c37);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543c38:{NFSU2_TR(0x543c38);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x543c3dull));
TAIL_STATIC(0x4953e0u,495);
}
B543c3d:L543c3d:{c.instructions+=4;NFSU2_TR(0x543c3d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B543c40:{NFSU2_TR(0x543c40);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B543c42:{NFSU2_TR(0x543c42);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B543c46:{NFSU2_TR(0x543c46);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L543c5f;}}
}
B543c48:L543c48:{c.instructions+=3;NFSU2_TR(0x543c48);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B543c4c:{NFSU2_TR(0x543c4c);
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
B543c4e:{NFSU2_TR(0x543c4e);
if(r1(R+518)){{goto L543c56;}}
}
B543c50:L543c50:{c.instructions+=3;NFSU2_TR(0x543c50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B543c52:{NFSU2_TR(0x543c52);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543c54:{NFSU2_TR(0x543c54);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x543c56ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B543c56:L543c56:{c.instructions+=4;NFSU2_TR(0x543c56);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B543c58:{NFSU2_TR(0x543c58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B543c59:{NFSU2_TR(0x543c59);
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
B543c5c:{NFSU2_TR(0x543c5c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B543c5f:L543c5f:{c.instructions+=7;NFSU2_TR(0x543c5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B543c62:{NFSU2_TR(0x543c62);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543c63:{NFSU2_TR(0x543c63);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B543c67:{NFSU2_TR(0x543c67);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B543c68:{NFSU2_TR(0x543c68);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B543c6a:{NFSU2_TR(0x543c6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B543c6d:{NFSU2_TR(0x543c6d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L543c79;}}
}
B543c6f:L543c6f:{c.instructions+=5;NFSU2_TR(0x543c6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B543c70:{NFSU2_TR(0x543c70);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B543c72:{NFSU2_TR(0x543c72);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B543c73:{NFSU2_TR(0x543c73);
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
B543c76:{NFSU2_TR(0x543c76);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B543c79:L543c79:{c.instructions+=9;NFSU2_TR(0x543c79);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543c7a:{NFSU2_TR(0x543c7a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543c7b:{NFSU2_TR(0x543c7b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((R+12),(U+0),4);
}
B543c7e:{NFSU2_TR(0x543c7e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543c7f:{NFSU2_TR(0x543c7f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((R+20),(U+0),4);
}
B543c82:{NFSU2_TR(0x543c82);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543c83:{NFSU2_TR(0x543c83);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543c84:{NFSU2_TR(0x543c84);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B543c87:{NFSU2_TR(0x543c87);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x543c8cull));
TAIL_STATIC(0x51d730u,51d);
}
B543c8c:L543c8c:{c.instructions+=3;NFSU2_TR(0x543c8c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B543c90:{NFSU2_TR(0x543c90);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543c91:{NFSU2_TR(0x543c91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x543c96ull));
TAIL_STATIC(0x495570u,495);
}
B543c96:L543c96:{c.instructions+=9;NFSU2_TR(0x543c96);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B543c99:{NFSU2_TR(0x543c99);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543c9a:{NFSU2_TR(0x543c9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B543c9d:{NFSU2_TR(0x543c9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B543ca3:{NFSU2_TR(0x543ca3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543ca4:{NFSU2_TR(0x543ca4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543ca5:{NFSU2_TR(0x543ca5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B543ca8:{NFSU2_TR(0x543ca8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B543caf:{NFSU2_TR(0x543caf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x543cb4ull));
TAIL_STATIC(0x51d730u,51d);
}
B543cb4:L543cb4:{c.instructions+=7;NFSU2_TR(0x543cb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B543cb7:{NFSU2_TR(0x543cb7);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B543cbb:{NFSU2_TR(0x543cbb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543cbc:{NFSU2_TR(0x543cbc);
u8 U[4];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B543cc0:{NFSU2_TR(0x543cc0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543cc1:{NFSU2_TR(0x543cc1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543cc2:{NFSU2_TR(0x543cc2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x543cc7ull));
TAIL_STATIC(0x51d730u,51d);
}
B543cc7:L543cc7:{c.instructions+=17;NFSU2_TR(0x543cc7);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B543cca:{NFSU2_TR(0x543cca);
{u32 ea_=u32(r4(R+28)+u32(224u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B543cd0:{NFSU2_TR(0x543cd0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B543cd3:{NFSU2_TR(0x543cd3);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B543cd6:{NFSU2_TR(0x543cd6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
}
B543cd9:{NFSU2_TR(0x543cd9);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B543cdd:{NFSU2_TR(0x543cdd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B543cde:{NFSU2_TR(0x543cde);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B543cdf:{NFSU2_TR(0x543cdf);
{u32 ea_=u32(r4(R+28)+u32(224u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B543ce5:{NFSU2_TR(0x543ce5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B543ce8:{NFSU2_TR(0x543ce8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B543cea:{NFSU2_TR(0x543cea);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B543ced:{NFSU2_TR(0x543ced);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B543cf0:{NFSU2_TR(0x543cf0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B543cf2:{NFSU2_TR(0x543cf2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B543cf5:{NFSU2_TR(0x543cf5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B543cf7:{NFSU2_TR(0x543cf7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L543d27;}}
}
B543cf9:L543cf9:{c.instructions+=3;NFSU2_TR(0x543cf9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B543cfb:{NFSU2_TR(0x543cfb);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B543cfd:{NFSU2_TR(0x543cfd);
if(r1(R+518)){{goto L543d04;}}
}
B543cff:L543cff:{c.instructions+=2;NFSU2_TR(0x543cff);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B543d02:{NFSU2_TR(0x543d02);
{goto L543d06;}
}
B543d04:L543d04:{c.instructions+=1;NFSU2_TR(0x543d04);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B543d06:L543d06:{c.instructions+=5;NFSU2_TR(0x543d06);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B543d09:{NFSU2_TR(0x543d09);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B543d0f:{NFSU2_TR(0x543d0f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B543d11:{NFSU2_TR(0x543d11);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B543d14:{NFSU2_TR(0x543d14);
if(r1(R+518)){{goto L543d27;}}
}
B543d16:L543d16:{c.instructions+=2;NFSU2_TR(0x543d16);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B543d18:{NFSU2_TR(0x543d18);
if(r1(R+518)){{goto L543d27;}}
}
B543d1a:L543d1a:{c.instructions+=5;NFSU2_TR(0x543d1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B543d1d:{NFSU2_TR(0x543d1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B543d20:{NFSU2_TR(0x543d20);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543d21:{NFSU2_TR(0x543d21);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543d22:{NFSU2_TR(0x543d22);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x543d27ull));
TAIL_STATIC(0x52ce40u,52c);
}
B543d27:L543d27:{c.instructions+=5;NFSU2_TR(0x543d27);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B543d2b:{NFSU2_TR(0x543d2b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B543d2c:{NFSU2_TR(0x543d2c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B543d2d:{NFSU2_TR(0x543d2d);
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
B543d30:{NFSU2_TR(0x543d30);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B543d40:L543d40:{c.instructions+=10;NFSU2_TR(0x543d40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B543d43:{NFSU2_TR(0x543d43);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543d44:{NFSU2_TR(0x543d44);
__builtin_memmove((R+24),(R+4),4);
}
B543d46:{NFSU2_TR(0x543d46);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B543d49:{NFSU2_TR(0x543d49);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B543d4d:{NFSU2_TR(0x543d4d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B543d51:{NFSU2_TR(0x543d51);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x911c0a4bull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x911c0a4bull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B543d56:{NFSU2_TR(0x543d56);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543d57:{NFSU2_TR(0x543d57);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B543d5f:{NFSU2_TR(0x543d5f);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L543fc5;}}
}
B543d65:L543d65:{c.instructions+=1;NFSU2_TR(0x543d65);
if(r1(R+518)){{goto L543f41;}}
}
B543d6b:L543d6b:{c.instructions+=2;NFSU2_TR(0x543d6b);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x5eca113dull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x5eca113dull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B543d70:{NFSU2_TR(0x543d70);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L543e8d;}}
}
B543d76:L543d76:{c.instructions+=1;NFSU2_TR(0x543d76);
if(r1(R+518)){TAIL_STATIC(0x544128u,544);}
}
B543d7c:L543d7c:{c.instructions+=2;NFSU2_TR(0x543d7c);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x251bf83eull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x251bf83eull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B543d81:{NFSU2_TR(0x543d81);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L543e6c;}}
}
B543d87:L543d87:{c.instructions+=1;NFSU2_TR(0x543d87);
if(r1(R+518)){{goto L543e5d;}}
}
B543d8d:L543d8d:{c.instructions+=2;NFSU2_TR(0x543d8d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x153e234ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B543d92:{NFSU2_TR(0x543d92);
if(r1(R+518)){{goto L543e41;}}
}
B543d98:L543d98:{c.instructions+=2;NFSU2_TR(0x543d98);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc407210ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B543d9d:{NFSU2_TR(0x543d9d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L543fbd;}}
}
B543da3:L543da3:{c.instructions+=4;NFSU2_TR(0x543da3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B543da6:{NFSU2_TR(0x543da6);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x22ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B543da9:{NFSU2_TR(0x543da9);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B543dab:{NFSU2_TR(0x543dab);
if(r1(R+518)){{goto L543db5;}}
}
B543dad:L543dad:{c.instructions+=1;NFSU2_TR(0x543dad);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x13ull));
s4(u32(r4(U+0)),r4(U+4));
}
B543db5:L543db5:{c.instructions+=4;NFSU2_TR(0x543db5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B543db8:{NFSU2_TR(0x543db8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+8),(U+0),4);
}
B543dbb:{NFSU2_TR(0x543dbb);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B543dbd:{NFSU2_TR(0x543dbd);
if(r1(R+518)){{goto L543f91;}}
}
B543dc3:L543dc3:{c.instructions+=3;NFSU2_TR(0x543dc3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7bull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B543dc6:{NFSU2_TR(0x543dc6);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B543dc8:{NFSU2_TR(0x543dc8);
if(r1(R+518)){{goto L543f91;}}
}
B543dce:L543dce:{c.instructions+=3;NFSU2_TR(0x543dce);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B543dd1:{NFSU2_TR(0x543dd1);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B543dd3:{NFSU2_TR(0x543dd3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L543f91;}}
}
B543dd9:L543dd9:{c.instructions+=2;NFSU2_TR(0x543dd9);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B543ddb:{NFSU2_TR(0x543ddb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L543f91;}}
}
B543de1:L543de1:{c.instructions+=9;NFSU2_TR(0x543de1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B543de4:{NFSU2_TR(0x543de4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B543de6:{NFSU2_TR(0x543de6);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B543dea:{NFSU2_TR(0x543dea);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B543ded:{NFSU2_TR(0x543ded);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543dee:{NFSU2_TR(0x543dee);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B543df2:{NFSU2_TR(0x543df2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543df3:{NFSU2_TR(0x543df3);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B543df7:{NFSU2_TR(0x543df7);
if(r1(R+518)){{goto L543e17;}}
}
B543df9:L543df9:{c.instructions+=3;NFSU2_TR(0x543df9);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x45ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B543dfc:{NFSU2_TR(0x543dfc);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B543dfe:{NFSU2_TR(0x543dfe);
if(r1(R+518)){{goto L543e17;}}
}
B543e00:L543e00:{c.instructions+=7;NFSU2_TR(0x543e00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B543e02:{NFSU2_TR(0x543e02);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543e03:{NFSU2_TR(0x543e03);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543e04:{NFSU2_TR(0x543e04);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543e05:{NFSU2_TR(0x543e05);
u8 U[4];
w4(U+0,u32(0xc407210ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543e0a:{NFSU2_TR(0x543e0a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B543e12:{NFSU2_TR(0x543e12);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x543e15ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B543e15:L543e15:{c.instructions+=1;NFSU2_TR(0x543e15);
{goto L543e2b;}
}
B543e17:L543e17:{c.instructions+=2;NFSU2_TR(0x543e17);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B543e1f:{NFSU2_TR(0x543e1f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x543e24ull));
TAIL_STATIC(0x51fd10u,51f);
}
B543e24:L543e24:{c.instructions+=2;NFSU2_TR(0x543e24);
__builtin_memmove((R+4),(R+24),4);
}
B543e26:{NFSU2_TR(0x543e26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x543e2bull));
TAIL_STATIC(0x52fbf0u,52f);
}
B543e2b:L543e2b:{c.instructions+=6;NFSU2_TR(0x543e2b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543e2c:{NFSU2_TR(0x543e2c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543e2d:{NFSU2_TR(0x543e2d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543e2e:{NFSU2_TR(0x543e2e);
u8 U[4];
w4(U+0,u32(0xc407210ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543e33:{NFSU2_TR(0x543e33);
__builtin_memmove((R+4),(R+24),4);
}
B543e35:{NFSU2_TR(0x543e35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x543e3aull));
TAIL_STATIC(0x50da20u,50d);
}
B543e3a:L543e3a:{c.instructions+=3;NFSU2_TR(0x543e3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B543e3b:{NFSU2_TR(0x543e3b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B543e3c:{NFSU2_TR(0x543e3c);
{goto L543f99;}
}
B543e41:L543e41:{c.instructions+=2;NFSU2_TR(0x543e41);
u8 U[4];
w4(U+0,u32(0x79c194ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543e46:{NFSU2_TR(0x543e46);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x543e4bull));
TAIL_STATIC(0x50d510u,50d);
}
B543e4b:L543e4b:{c.instructions+=6;NFSU2_TR(0x543e4b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B543e4e:{NFSU2_TR(0x543e4e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B543e4f:{NFSU2_TR(0x543e4f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B543e56:{NFSU2_TR(0x543e56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B543e57:{NFSU2_TR(0x543e57);
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
B543e5a:{NFSU2_TR(0x543e5a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B543e5d:L543e5d:{c.instructions+=2;NFSU2_TR(0x543e5d);
__builtin_memmove((R+4),(R+24),4);
}
B543e5f:{NFSU2_TR(0x543e5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x543e64ull));
TAIL_STATIC(0x538ca0u,538);
}
B543e64:L543e64:{c.instructions+=4;NFSU2_TR(0x543e64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B543e65:{NFSU2_TR(0x543e65);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B543e66:{NFSU2_TR(0x543e66);
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
B543e69:{NFSU2_TR(0x543e69);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B543e6c:L543e6c:{c.instructions+=2;NFSU2_TR(0x543e6c);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x35f8620bull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x35f8620bull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x35f8620bull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B543e71:{NFSU2_TR(0x543e71);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L543fbd;}}
}
B543e77:L543e77:{c.instructions+=3;NFSU2_TR(0x543e77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B543e79:{NFSU2_TR(0x543e79);
__builtin_memmove((R+4),(R+24),4);
}
B543e7b:{NFSU2_TR(0x543e7b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x543e7eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B543e7e:L543e7e:{c.instructions+=5;NFSU2_TR(0x543e7e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B543e7f:{NFSU2_TR(0x543e7f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B543e86:{NFSU2_TR(0x543e86);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B543e87:{NFSU2_TR(0x543e87);
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
B543e8a:{NFSU2_TR(0x543e8a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B543e8d:L543e8d:{c.instructions+=2;NFSU2_TR(0x543e8d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x72619778ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B543e92:{NFSU2_TR(0x543e92);
if(r1(R+518)){{goto L543ee3;}}
}
B543e94:L543e94:{c.instructions+=2;NFSU2_TR(0x543e94);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x90ca113dull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B543e99:{NFSU2_TR(0x543e99);
if(r1(R+518)){TAIL_STATIC(0x544128u,544);}
}
B543e9f:L543e9f:{c.instructions+=2;NFSU2_TR(0x543e9f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x911ab364ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B543ea4:{NFSU2_TR(0x543ea4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L543fbd;}}
}
B543eaa:L543eaa:{c.instructions+=3;NFSU2_TR(0x543eaa);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B543ead:{NFSU2_TR(0x543ead);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0xaull));
s4(u32(r4(U+0)),r4(U+4));
}
B543eb5:{NFSU2_TR(0x543eb5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x543ebaull));
TAIL_STATIC(0x51fd10u,51f);
}
B543eba:L543eba:{c.instructions+=9;NFSU2_TR(0x543eba);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B543ebe:{NFSU2_TR(0x543ebe);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B543ec2:{NFSU2_TR(0x543ec2);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B543ec6:{NFSU2_TR(0x543ec6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543ec7:{NFSU2_TR(0x543ec7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543ec8:{NFSU2_TR(0x543ec8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543ec9:{NFSU2_TR(0x543ec9);
u8 U[4];
w4(U+0,u32(0x911ab364ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543ece:{NFSU2_TR(0x543ece);
__builtin_memmove((R+4),(R+24),4);
}
B543ed0:{NFSU2_TR(0x543ed0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x543ed5ull));
TAIL_STATIC(0x50da20u,50d);
}
B543ed5:L543ed5:{c.instructions+=1;NFSU2_TR(0x543ed5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x543edaull));
TAIL_STATIC(0x52fbf0u,52f);
}
B543eda:L543eda:{c.instructions+=2;NFSU2_TR(0x543eda);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7bull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B543ede:{NFSU2_TR(0x543ede);
{goto L543f99;}
}
B543ee3:L543ee3:{c.instructions+=4;NFSU2_TR(0x543ee3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B543ee6:{NFSU2_TR(0x543ee6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+0),(U+0),4);
}
B543ee9:{NFSU2_TR(0x543ee9);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B543eeb:{NFSU2_TR(0x543eeb);
if(r1(R+518)){{goto L543fbd;}}
}
B543ef1:L543ef1:{c.instructions+=3;NFSU2_TR(0x543ef1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x79ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B543ef4:{NFSU2_TR(0x543ef4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B543ef6:{NFSU2_TR(0x543ef6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L543fbd;}}
}
B543efc:L543efc:{c.instructions+=3;NFSU2_TR(0x543efc);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7bull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B543eff:{NFSU2_TR(0x543eff);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B543f01:{NFSU2_TR(0x543f01);
if(r1(R+518)){{goto L543fbd;}}
}
B543f07:L543f07:{c.instructions+=3;NFSU2_TR(0x543f07);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+28),(U+0),4);
}
B543f0a:{NFSU2_TR(0x543f0a);
__builtin_memmove((R+4),(R+28),4);
}
B543f0c:{NFSU2_TR(0x543f0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x543f11ull));
TAIL_STATIC(0x5276d0u,527);
}
B543f11:L543f11:{c.instructions+=2;NFSU2_TR(0x543f11);
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
B543f13:{NFSU2_TR(0x543f13);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L543f1c;}}
}
B543f15:L543f15:{c.instructions+=2;NFSU2_TR(0x543f15);
__builtin_memmove((R+4),(R+28),4);
}
B543f17:{NFSU2_TR(0x543f17);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x543f1cull));
TAIL_STATIC(0x527750u,527);
}
B543f1c:L543f1c:{c.instructions+=4;NFSU2_TR(0x543f1c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B543f1e:{NFSU2_TR(0x543f1e);
__builtin_memmove((R+4),(R+24),4);
}
B543f20:{NFSU2_TR(0x543f20);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B543f28:{NFSU2_TR(0x543f28);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x543f2bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B543f2b:L543f2b:{c.instructions+=2;NFSU2_TR(0x543f2b);
__builtin_memmove((R+4),(R+28),4);
}
B543f2d:{NFSU2_TR(0x543f2d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x543f32ull));
TAIL_STATIC(0x495910u,495);
}
B543f32:L543f32:{c.instructions+=4;NFSU2_TR(0x543f32);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543f33:{NFSU2_TR(0x543f33);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B543f36:{NFSU2_TR(0x543f36);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543f37:{NFSU2_TR(0x543f37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x543f3cull));
TAIL_STATIC(0x50b8c0u,50b);
}
B543f3c:L543f3c:{c.instructions+=2;NFSU2_TR(0x543f3c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B543f3f:{NFSU2_TR(0x543f3f);
{goto L543f99;}
}
B543f41:L543f41:{c.instructions+=4;NFSU2_TR(0x543f41);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B543f44:{NFSU2_TR(0x543f44);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+0),(U+0),4);
}
B543f47:{NFSU2_TR(0x543f47);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B543f49:{NFSU2_TR(0x543f49);
if(r1(R+518)){{goto L543fbd;}}
}
B543f4b:L543f4b:{c.instructions+=3;NFSU2_TR(0x543f4b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x79ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B543f4e:{NFSU2_TR(0x543f4e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B543f50:{NFSU2_TR(0x543f50);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L543fbd;}}
}
B543f52:L543f52:{c.instructions+=3;NFSU2_TR(0x543f52);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7bull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B543f55:{NFSU2_TR(0x543f55);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B543f57:{NFSU2_TR(0x543f57);
if(r1(R+518)){{goto L543fbd;}}
}
B543f59:L543f59:{c.instructions+=3;NFSU2_TR(0x543f59);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+28),(U+0),4);
}
B543f5c:{NFSU2_TR(0x543f5c);
__builtin_memmove((R+4),(R+28),4);
}
B543f5e:{NFSU2_TR(0x543f5e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x543f63ull));
TAIL_STATIC(0x527700u,527);
}
B543f63:L543f63:{c.instructions+=2;NFSU2_TR(0x543f63);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B543f65:{NFSU2_TR(0x543f65);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L543f6f;}}
}
B543f67:L543f67:{c.instructions+=1;NFSU2_TR(0x543f67);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B543f6f:L543f6f:{c.instructions+=2;NFSU2_TR(0x543f6f);
__builtin_memmove((R+4),(R+28),4);
}
B543f71:{NFSU2_TR(0x543f71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x543f76ull));
TAIL_STATIC(0x527730u,527);
}
B543f76:L543f76:{c.instructions+=3;NFSU2_TR(0x543f76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B543f78:{NFSU2_TR(0x543f78);
__builtin_memmove((R+4),(R+24),4);
}
B543f7a:{NFSU2_TR(0x543f7a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x543f7dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B543f7d:L543f7d:{c.instructions+=2;NFSU2_TR(0x543f7d);
__builtin_memmove((R+4),(R+28),4);
}
B543f7f:{NFSU2_TR(0x543f7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x543f84ull));
TAIL_STATIC(0x495910u,495);
}
B543f84:L543f84:{c.instructions+=4;NFSU2_TR(0x543f84);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543f85:{NFSU2_TR(0x543f85);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B543f88:{NFSU2_TR(0x543f88);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543f89:{NFSU2_TR(0x543f89);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x543f8eull));
TAIL_STATIC(0x50b8c0u,50b);
}
B543f8e:L543f8e:{c.instructions+=1;NFSU2_TR(0x543f8e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B543f91:L543f91:{c.instructions+=3;NFSU2_TR(0x543f91);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B543f95:{NFSU2_TR(0x543f95);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B543f97:{NFSU2_TR(0x543f97);
if(r1(R+518)){{goto L543fbd;}}
}
B543f99:L543f99:{c.instructions+=6;NFSU2_TR(0x543f99);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B543f9d:{NFSU2_TR(0x543f9d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B543fa1:{NFSU2_TR(0x543fa1);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x1bull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B543fa4:{NFSU2_TR(0x543fa4);
u8 U[13];
w4(U+0,u32(u32(u32(0x837fe0ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+0,u32(s32(s8(r1(U+12)))));
}
B543fac:{NFSU2_TR(0x543fac);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B543faf:{NFSU2_TR(0x543faf);
if(r1(R+518)){{goto L543fbd;}}
}
B543fb1:L543fb1:{c.instructions+=3;NFSU2_TR(0x543fb1);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B543fb7:{NFSU2_TR(0x543fb7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B543fb8:{NFSU2_TR(0x543fb8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x543fbdull));
TAIL_STATIC(0x458520u,458);
}
B543fbd:L543fbd:{c.instructions+=4;NFSU2_TR(0x543fbd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B543fbe:{NFSU2_TR(0x543fbe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B543fbf:{NFSU2_TR(0x543fbf);
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
B543fc2:{NFSU2_TR(0x543fc2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B543fc5:L543fc5:{c.instructions+=2;NFSU2_TR(0x543fc5);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0xb5971bf1ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xb5971bf1ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B543fca:{NFSU2_TR(0x543fca);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x5440adu,544);}
}
B543fd0:L543fd0:{c.instructions+=1;NFSU2_TR(0x543fd0);
if(r1(R+518)){TAIL_STATIC(0x54406au,544);}
}
B543fd6:L543fd6:{c.instructions+=2;NFSU2_TR(0x543fd6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x9120409eull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B543fdb:{NFSU2_TR(0x543fdb);
if(r1(R+518)){TAIL_STATIC(0x54402cu,544);}
}
B543fdd:L543fdd:{c.instructions+=2;NFSU2_TR(0x543fdd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x96dda9e6ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B543fe2:{NFSU2_TR(0x543fe2);
if(r1(R+518)){TAIL_STATIC(0x54401du,544);}
}
B543fe4:L543fe4:{c.instructions+=2;NFSU2_TR(0x543fe4);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x9803f6e2ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x9803f6e2ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x9803f6e2ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B543fe9:{NFSU2_TR(0x543fe9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x543fbdu);}goto L543fbd;}}
}
B543feb:L543feb:{c.instructions+=4;NFSU2_TR(0x543feb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B543fee:{NFSU2_TR(0x543fee);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+28),(U+0),4);
}
B543ff1:{NFSU2_TR(0x543ff1);
__builtin_memmove((R+4),(R+28),4);
}
B543ff3:{NFSU2_TR(0x543ff3);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x543ff6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B543ff6:L543ff6:{c.instructions+=2;NFSU2_TR(0x543ff6);
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
B543ff8:{NFSU2_TR(0x543ff8);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x543fbdu);}goto L543fbd;}}
}
B543ffa:L543ffa:{c.instructions+=3;NFSU2_TR(0x543ffa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B543ffc:{NFSU2_TR(0x543ffc);
__builtin_memmove((R+4),(R+24),4);
}
B543ffe:{NFSU2_TR(0x543ffe);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x544001ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
XIT:NFSU2_TR_EXIT(0x543,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
