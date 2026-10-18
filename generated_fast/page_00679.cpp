#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_673(u8* __restrict R,Cpu& c);
u32 body_675(u8* __restrict R,Cpu& c);
u32 body_677(u8* __restrict R,Cpu& c);
u32 body_678(u8* __restrict R,Cpu& c);
u32 body_67a(u8* __restrict R,Cpu& c);
u32 body_681(u8* __restrict R,Cpu& c);
u32 body_682(u8* __restrict R,Cpu& c);
u32 body_699(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x679,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x679,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_679(u8* __restrict R,Cpu& c);
u32 page_679(Cpu& c){return body_679(c.regs.data(),c);}
__attribute__((noinline)) u32 body_679(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x679000:goto L679000;
case 0x679001:c.instructions+=2;goto B679001;
case 0x679004:c.instructions+=1;goto B679004;
case 0x67900a:goto L67900a;
case 0x67900d:c.instructions+=5;goto B67900d;
case 0x679010:c.instructions+=4;goto B679010;
case 0x679013:c.instructions+=3;goto B679013;
case 0x679016:c.instructions+=2;goto B679016;
case 0x679018:c.instructions+=1;goto B679018;
case 0x67901b:goto L67901b;
case 0x67901d:goto L67901d;
case 0x67901f:c.instructions+=1;goto B67901f;
case 0x679022:goto L679022;
case 0x679024:goto L679024;
case 0x679026:c.instructions+=2;goto B679026;
case 0x679029:c.instructions+=1;goto B679029;
case 0x67902f:goto L67902f;
case 0x679032:c.instructions+=4;goto B679032;
case 0x679035:c.instructions+=3;goto B679035;
case 0x679038:c.instructions+=2;goto B679038;
case 0x67903b:c.instructions+=1;goto B67903b;
case 0x67903d:goto L67903d;
case 0x679040:c.instructions+=1;goto B679040;
case 0x679042:goto L679042;
case 0x679045:c.instructions+=1;goto B679045;
case 0x679047:goto L679047;
case 0x67904a:goto L67904a;
case 0x67904e:c.instructions+=10;goto B67904e;
case 0x679050:c.instructions+=9;goto B679050;
case 0x679052:c.instructions+=8;goto B679052;
case 0x679055:c.instructions+=7;goto B679055;
case 0x679056:c.instructions+=6;goto B679056;
case 0x679059:c.instructions+=5;goto B679059;
case 0x67905a:c.instructions+=4;goto B67905a;
case 0x67905f:c.instructions+=3;goto B67905f;
case 0x679062:c.instructions+=2;goto B679062;
case 0x679064:c.instructions+=1;goto B679064;
case 0x679069:goto L679069;
case 0x67906b:c.instructions+=2;goto B67906b;
case 0x67906d:c.instructions+=1;goto B67906d;
case 0x679073:goto L679073;
case 0x679076:c.instructions+=2;goto B679076;
case 0x67907a:c.instructions+=1;goto B67907a;
case 0x67907c:goto L67907c;
case 0x679082:c.instructions+=1;goto B679082;
case 0x679084:goto L679084;
case 0x67908a:goto L67908a;
case 0x67908e:c.instructions+=5;goto B67908e;
case 0x679091:c.instructions+=4;goto B679091;
case 0x679094:c.instructions+=3;goto B679094;
case 0x679097:c.instructions+=2;goto B679097;
case 0x67909a:c.instructions+=1;goto B67909a;
case 0x67909c:goto L67909c;
case 0x67909f:c.instructions+=7;goto B67909f;
case 0x6790a2:c.instructions+=6;goto B6790a2;
case 0x6790a5:c.instructions+=5;goto B6790a5;
case 0x6790a8:c.instructions+=4;goto B6790a8;
case 0x6790ab:c.instructions+=3;goto B6790ab;
case 0x6790ad:c.instructions+=2;goto B6790ad;
case 0x6790b0:c.instructions+=1;goto B6790b0;
case 0x6790b5:goto L6790b5;
case 0x6790b7:c.instructions+=2;goto B6790b7;
case 0x6790b9:c.instructions+=1;goto B6790b9;
case 0x6790bf:goto L6790bf;
case 0x6790c2:c.instructions+=6;goto B6790c2;
case 0x6790c5:c.instructions+=5;goto B6790c5;
case 0x6790c8:c.instructions+=4;goto B6790c8;
case 0x6790cb:c.instructions+=3;goto B6790cb;
case 0x6790cd:c.instructions+=2;goto B6790cd;
case 0x6790cf:c.instructions+=1;goto B6790cf;
case 0x6790d2:goto L6790d2;
case 0x6790d4:goto L6790d4;
case 0x6790d6:c.instructions+=1;goto B6790d6;
case 0x6790d9:goto L6790d9;
case 0x6790db:goto L6790db;
case 0x6790de:c.instructions+=3;goto B6790de;
case 0x6790e1:c.instructions+=2;goto B6790e1;
case 0x6790e3:c.instructions+=1;goto B6790e3;
case 0x6790e6:goto L6790e6;
case 0x6790e8:goto L6790e8;
case 0x6790ea:c.instructions+=2;goto B6790ea;
case 0x6790ed:c.instructions+=1;goto B6790ed;
case 0x6790f0:goto L6790f0;
case 0x6790f2:goto L6790f2;
case 0x6790f5:c.instructions+=9;goto B6790f5;
case 0x6790f8:c.instructions+=8;goto B6790f8;
case 0x6790fb:c.instructions+=7;goto B6790fb;
case 0x6790fe:c.instructions+=6;goto B6790fe;
case 0x679102:c.instructions+=5;goto B679102;
case 0x679105:c.instructions+=4;goto B679105;
case 0x679108:c.instructions+=3;goto B679108;
case 0x67910c:c.instructions+=2;goto B67910c;
case 0x67910f:c.instructions+=1;goto B67910f;
case 0x679111:goto L679111;
case 0x679114:c.instructions+=5;goto B679114;
case 0x679117:c.instructions+=4;goto B679117;
case 0x67911a:c.instructions+=3;goto B67911a;
case 0x67911d:c.instructions+=2;goto B67911d;
case 0x67911f:c.instructions+=1;goto B67911f;
case 0x679122:goto L679122;
case 0x679124:goto L679124;
case 0x679126:c.instructions+=1;goto B679126;
case 0x679129:goto L679129;
case 0x67912b:goto L67912b;
case 0x67912f:c.instructions+=1;goto B67912f;
case 0x679131:goto L679131;
case 0x679134:c.instructions+=9;goto B679134;
case 0x679137:c.instructions+=8;goto B679137;
case 0x67913a:c.instructions+=7;goto B67913a;
case 0x67913d:c.instructions+=6;goto B67913d;
case 0x67913f:c.instructions+=5;goto B67913f;
case 0x679142:c.instructions+=4;goto B679142;
case 0x679144:c.instructions+=3;goto B679144;
case 0x679147:c.instructions+=2;goto B679147;
case 0x67914a:c.instructions+=1;goto B67914a;
case 0x67914f:goto L67914f;
case 0x679151:c.instructions+=2;goto B679151;
case 0x679153:c.instructions+=1;goto B679153;
case 0x679159:goto L679159;
case 0x67915c:c.instructions+=6;goto B67915c;
case 0x67915f:c.instructions+=5;goto B67915f;
case 0x679162:c.instructions+=4;goto B679162;
case 0x679165:c.instructions+=3;goto B679165;
case 0x679167:c.instructions+=2;goto B679167;
case 0x679169:c.instructions+=1;goto B679169;
case 0x67916c:goto L67916c;
case 0x67916e:goto L67916e;
case 0x679170:c.instructions+=1;goto B679170;
case 0x679173:goto L679173;
case 0x679175:goto L679175;
case 0x679178:c.instructions+=3;goto B679178;
case 0x67917b:c.instructions+=2;goto B67917b;
case 0x67917d:c.instructions+=1;goto B67917d;
case 0x679180:goto L679180;
case 0x679182:goto L679182;
case 0x679184:c.instructions+=2;goto B679184;
case 0x679187:c.instructions+=1;goto B679187;
case 0x67918a:goto L67918a;
case 0x67918c:goto L67918c;
case 0x67918f:c.instructions+=9;goto B67918f;
case 0x679192:c.instructions+=8;goto B679192;
case 0x679195:c.instructions+=7;goto B679195;
case 0x679198:c.instructions+=6;goto B679198;
case 0x67919c:c.instructions+=5;goto B67919c;
case 0x67919f:c.instructions+=4;goto B67919f;
case 0x6791a2:c.instructions+=3;goto B6791a2;
case 0x6791a6:c.instructions+=2;goto B6791a6;
case 0x6791a9:c.instructions+=1;goto B6791a9;
case 0x6791ab:goto L6791ab;
case 0x6791ae:c.instructions+=5;goto B6791ae;
case 0x6791b1:c.instructions+=4;goto B6791b1;
case 0x6791b4:c.instructions+=3;goto B6791b4;
case 0x6791b7:c.instructions+=2;goto B6791b7;
case 0x6791b9:c.instructions+=1;goto B6791b9;
case 0x6791bc:goto L6791bc;
case 0x6791be:goto L6791be;
case 0x6791c0:c.instructions+=1;goto B6791c0;
case 0x6791c3:goto L6791c3;
case 0x6791c5:goto L6791c5;
case 0x6791c8:c.instructions+=4;goto B6791c8;
case 0x6791ca:c.instructions+=3;goto B6791ca;
case 0x6791cc:c.instructions+=2;goto B6791cc;
case 0x6791cf:c.instructions+=1;goto B6791cf;
case 0x6791d1:goto L6791d1;
case 0x6791d4:c.instructions+=2;goto B6791d4;
case 0x6791d7:c.instructions+=1;goto B6791d7;
case 0x6791d9:goto L6791d9;
case 0x6791db:c.instructions+=2;goto B6791db;
case 0x6791de:c.instructions+=1;goto B6791de;
case 0x6791e0:goto L6791e0;
case 0x6791e3:goto L6791e3;
case 0x6791e6:c.instructions+=2;goto B6791e6;
case 0x6791e7:c.instructions+=1;goto B6791e7;
case 0x6791e9:goto L6791e9;
case 0x6791ec:c.instructions+=5;goto B6791ec;
case 0x6791ef:c.instructions+=4;goto B6791ef;
case 0x6791f2:c.instructions+=3;goto B6791f2;
case 0x6791f5:c.instructions+=2;goto B6791f5;
case 0x6791f8:c.instructions+=1;goto B6791f8;
case 0x6791fa:goto L6791fa;
case 0x6791fe:c.instructions+=1;goto B6791fe;
case 0x679200:goto L679200;
case 0x679203:c.instructions+=5;goto B679203;
case 0x679206:c.instructions+=4;goto B679206;
case 0x679209:c.instructions+=3;goto B679209;
case 0x67920b:c.instructions+=2;goto B67920b;
case 0x67920e:c.instructions+=1;goto B67920e;
case 0x679210:goto L679210;
case 0x679212:goto L679212;
case 0x679215:goto L679215;
case 0x679218:goto L679218;
case 0x67921b:c.instructions+=1;goto B67921b;
case 0x67921d:goto L67921d;
case 0x679220:c.instructions+=3;goto B679220;
case 0x679223:c.instructions+=2;goto B679223;
case 0x679225:c.instructions+=1;goto B679225;
case 0x679227:goto L679227;
case 0x67922a:c.instructions+=1;goto B67922a;
case 0x67922d:goto L67922d;
case 0x67922f:c.instructions+=4;goto B67922f;
case 0x679231:c.instructions+=3;goto B679231;
case 0x679237:c.instructions+=2;goto B679237;
case 0x67923d:c.instructions+=1;goto B67923d;
case 0x67923f:goto L67923f;
case 0x679242:c.instructions+=4;goto B679242;
case 0x679243:c.instructions+=3;goto B679243;
case 0x679246:c.instructions+=2;goto B679246;
case 0x679249:c.instructions+=1;goto B679249;
case 0x67924b:goto L67924b;
case 0x67924d:goto L67924d;
case 0x679250:goto L679250;
case 0x679253:c.instructions+=1;goto B679253;
case 0x679255:goto L679255;
case 0x679257:goto L679257;
case 0x67925a:goto L67925a;
case 0x67925d:c.instructions+=1;goto B67925d;
case 0x67925f:goto L67925f;
case 0x679262:c.instructions+=3;goto B679262;
case 0x679265:c.instructions+=2;goto B679265;
case 0x679267:c.instructions+=1;goto B679267;
case 0x679269:goto L679269;
case 0x67926c:c.instructions+=3;goto B67926c;
case 0x67926f:c.instructions+=2;goto B67926f;
case 0x679272:c.instructions+=1;goto B679272;
case 0x679277:goto L679277;
case 0x679279:c.instructions+=1;goto B679279;
case 0x67927b:goto L67927b;
case 0x67927e:c.instructions+=3;goto B67927e;
case 0x67927f:c.instructions+=2;goto B67927f;
case 0x679282:c.instructions+=1;goto B679282;
case 0x679284:goto L679284;
case 0x679286:goto L679286;
case 0x67928d:goto L67928d;
case 0x679291:c.instructions+=1;goto B679291;
case 0x679297:goto L679297;
case 0x67929a:goto L67929a;
case 0x67929d:c.instructions+=3;goto B67929d;
case 0x6792a0:c.instructions+=2;goto B6792a0;
case 0x6792a2:c.instructions+=1;goto B6792a2;
case 0x6792a4:goto L6792a4;
case 0x6792a7:c.instructions+=4;goto B6792a7;
case 0x6792aa:c.instructions+=3;goto B6792aa;
case 0x6792ad:c.instructions+=2;goto B6792ad;
case 0x6792af:c.instructions+=1;goto B6792af;
case 0x6792b1:goto L6792b1;
case 0x6792b3:c.instructions+=1;goto B6792b3;
case 0x6792b8:goto L6792b8;
case 0x6792bb:goto L6792bb;
case 0x6792be:c.instructions+=6;goto B6792be;
case 0x6792c1:c.instructions+=5;goto B6792c1;
case 0x6792c5:c.instructions+=4;goto B6792c5;
case 0x6792c8:c.instructions+=3;goto B6792c8;
case 0x6792c9:c.instructions+=2;goto B6792c9;
case 0x6792cc:c.instructions+=1;goto B6792cc;
case 0x6792ce:goto L6792ce;
case 0x6792d1:c.instructions+=7;goto B6792d1;
case 0x6792d4:c.instructions+=6;goto B6792d4;
case 0x6792d7:c.instructions+=5;goto B6792d7;
case 0x6792da:c.instructions+=4;goto B6792da;
case 0x6792dd:c.instructions+=3;goto B6792dd;
case 0x6792e0:c.instructions+=2;goto B6792e0;
case 0x6792e2:c.instructions+=1;goto B6792e2;
case 0x6792e5:goto L6792e5;
case 0x6792e7:goto L6792e7;
case 0x6792e9:c.instructions+=1;goto B6792e9;
case 0x6792ec:goto L6792ec;
case 0x6792ee:goto L6792ee;
case 0x6792f2:c.instructions+=1;goto B6792f2;
case 0x6792f8:goto L6792f8;
case 0x6792fc:c.instructions+=1;goto B6792fc;
case 0x679302:goto L679302;
case 0x679304:c.instructions+=4;goto B679304;
case 0x679307:c.instructions+=3;goto B679307;
case 0x679308:c.instructions+=2;goto B679308;
case 0x67930a:c.instructions+=1;goto B67930a;
case 0x67930f:goto L67930f;
case 0x679311:c.instructions+=2;goto B679311;
case 0x679313:c.instructions+=1;goto B679313;
case 0x679319:goto L679319;
case 0x67931d:c.instructions+=2;goto B67931d;
case 0x679320:c.instructions+=1;goto B679320;
case 0x679322:goto L679322;
case 0x679325:goto L679325;
case 0x679327:c.instructions+=9;goto B679327;
case 0x679328:c.instructions+=8;goto B679328;
case 0x67932b:c.instructions+=7;goto B67932b;
case 0x67932c:c.instructions+=6;goto B67932c;
case 0x67932f:c.instructions+=5;goto B67932f;
case 0x679330:c.instructions+=4;goto B679330;
case 0x679335:c.instructions+=3;goto B679335;
case 0x679338:c.instructions+=2;goto B679338;
case 0x67933a:c.instructions+=1;goto B67933a;
case 0x67933f:goto L67933f;
case 0x679341:c.instructions+=2;goto B679341;
case 0x679343:c.instructions+=1;goto B679343;
case 0x679349:goto L679349;
case 0x67934c:c.instructions+=3;goto B67934c;
case 0x67934e:c.instructions+=2;goto B67934e;
case 0x679351:c.instructions+=1;goto B679351;
case 0x679356:goto L679356;
case 0x679358:c.instructions+=2;goto B679358;
case 0x67935a:c.instructions+=1;goto B67935a;
case 0x679360:goto L679360;
case 0x679363:c.instructions+=6;goto B679363;
case 0x679366:c.instructions+=5;goto B679366;
case 0x679369:c.instructions+=4;goto B679369;
case 0x67936c:c.instructions+=3;goto B67936c;
case 0x67936e:c.instructions+=2;goto B67936e;
case 0x679370:c.instructions+=1;goto B679370;
case 0x679373:goto L679373;
case 0x679375:goto L679375;
case 0x679377:c.instructions+=1;goto B679377;
case 0x67937a:goto L67937a;
case 0x67937c:goto L67937c;
case 0x67937f:c.instructions+=3;goto B67937f;
case 0x679382:c.instructions+=2;goto B679382;
case 0x679384:c.instructions+=1;goto B679384;
case 0x679387:goto L679387;
case 0x679389:goto L679389;
case 0x67938b:c.instructions+=1;goto B67938b;
case 0x67938e:goto L67938e;
case 0x679390:goto L679390;
case 0x679393:c.instructions+=8;goto B679393;
case 0x679396:c.instructions+=7;goto B679396;
case 0x679399:c.instructions+=6;goto B679399;
case 0x67939d:c.instructions+=5;goto B67939d;
case 0x6793a0:c.instructions+=4;goto B6793a0;
case 0x6793a3:c.instructions+=3;goto B6793a3;
case 0x6793a7:c.instructions+=2;goto B6793a7;
case 0x6793aa:c.instructions+=1;goto B6793aa;
case 0x6793ac:goto L6793ac;
case 0x6793af:c.instructions+=5;goto B6793af;
case 0x6793b2:c.instructions+=4;goto B6793b2;
case 0x6793b5:c.instructions+=3;goto B6793b5;
case 0x6793b8:c.instructions+=2;goto B6793b8;
case 0x6793ba:c.instructions+=1;goto B6793ba;
case 0x6793bd:goto L6793bd;
case 0x6793bf:goto L6793bf;
case 0x6793c1:c.instructions+=1;goto B6793c1;
case 0x6793c4:goto L6793c4;
case 0x6793c6:goto L6793c6;
case 0x6793ca:c.instructions+=1;goto B6793ca;
case 0x6793d0:goto L6793d0;
case 0x6793d2:c.instructions+=4;goto B6793d2;
case 0x6793d5:c.instructions+=3;goto B6793d5;
case 0x6793d6:c.instructions+=2;goto B6793d6;
case 0x6793d8:c.instructions+=1;goto B6793d8;
case 0x6793dd:goto L6793dd;
case 0x6793df:c.instructions+=2;goto B6793df;
case 0x6793e1:c.instructions+=1;goto B6793e1;
case 0x6793e7:goto L6793e7;
case 0x6793eb:c.instructions+=2;goto B6793eb;
case 0x6793ee:c.instructions+=1;goto B6793ee;
case 0x6793f0:goto L6793f0;
case 0x6793f3:goto L6793f3;
case 0x6793f5:c.instructions+=9;goto B6793f5;
case 0x6793f6:c.instructions+=8;goto B6793f6;
case 0x6793f9:c.instructions+=7;goto B6793f9;
case 0x6793fa:c.instructions+=6;goto B6793fa;
case 0x6793fd:c.instructions+=5;goto B6793fd;
case 0x6793fe:c.instructions+=4;goto B6793fe;
case 0x679403:c.instructions+=3;goto B679403;
case 0x679406:c.instructions+=2;goto B679406;
case 0x679408:c.instructions+=1;goto B679408;
case 0x67940d:goto L67940d;
case 0x67940f:c.instructions+=2;goto B67940f;
case 0x679411:c.instructions+=1;goto B679411;
case 0x679417:goto L679417;
case 0x67941a:c.instructions+=3;goto B67941a;
case 0x67941c:c.instructions+=2;goto B67941c;
case 0x67941f:c.instructions+=1;goto B67941f;
case 0x679424:goto L679424;
case 0x679426:c.instructions+=2;goto B679426;
case 0x679428:c.instructions+=1;goto B679428;
case 0x67942e:goto L67942e;
case 0x679431:c.instructions+=6;goto B679431;
case 0x679434:c.instructions+=5;goto B679434;
case 0x679437:c.instructions+=4;goto B679437;
case 0x67943a:c.instructions+=3;goto B67943a;
case 0x67943c:c.instructions+=2;goto B67943c;
case 0x67943e:c.instructions+=1;goto B67943e;
case 0x679441:goto L679441;
case 0x679443:goto L679443;
case 0x679445:c.instructions+=1;goto B679445;
case 0x679448:goto L679448;
case 0x67944a:goto L67944a;
case 0x67944d:c.instructions+=3;goto B67944d;
case 0x679450:c.instructions+=2;goto B679450;
case 0x679452:c.instructions+=1;goto B679452;
case 0x679455:goto L679455;
case 0x679457:goto L679457;
case 0x679459:c.instructions+=1;goto B679459;
case 0x67945c:goto L67945c;
case 0x67945e:goto L67945e;
case 0x679461:c.instructions+=9;goto B679461;
case 0x679464:c.instructions+=8;goto B679464;
case 0x679467:c.instructions+=7;goto B679467;
case 0x67946a:c.instructions+=6;goto B67946a;
case 0x67946d:c.instructions+=5;goto B67946d;
case 0x67946f:c.instructions+=4;goto B67946f;
case 0x679472:c.instructions+=3;goto B679472;
case 0x679475:c.instructions+=2;goto B679475;
case 0x679478:c.instructions+=1;goto B679478;
case 0x67947a:goto L67947a;
case 0x67947d:c.instructions+=5;goto B67947d;
case 0x679480:c.instructions+=4;goto B679480;
case 0x679483:c.instructions+=3;goto B679483;
case 0x679486:c.instructions+=2;goto B679486;
case 0x679488:c.instructions+=1;goto B679488;
case 0x67948b:goto L67948b;
case 0x67948d:goto L67948d;
case 0x67948f:c.instructions+=1;goto B67948f;
case 0x679492:goto L679492;
case 0x679494:goto L679494;
case 0x679496:goto L679496;
case 0x679499:c.instructions+=3;goto B679499;
case 0x67949c:c.instructions+=2;goto B67949c;
case 0x67949f:c.instructions+=1;goto B67949f;
case 0x6794a5:goto L6794a5;
case 0x6794a8:c.instructions+=5;goto B6794a8;
case 0x6794ab:c.instructions+=4;goto B6794ab;
case 0x6794ad:c.instructions+=3;goto B6794ad;
case 0x6794b0:c.instructions+=2;goto B6794b0;
case 0x6794b3:c.instructions+=1;goto B6794b3;
case 0x6794b5:goto L6794b5;
case 0x6794b8:goto L6794b8;
case 0x6794ba:c.instructions+=5;goto B6794ba;
case 0x6794bc:c.instructions+=4;goto B6794bc;
case 0x6794bf:c.instructions+=3;goto B6794bf;
case 0x6794c1:c.instructions+=2;goto B6794c1;
case 0x6794c3:c.instructions+=1;goto B6794c3;
case 0x6794c5:goto L6794c5;
case 0x6794c8:c.instructions+=1;goto B6794c8;
case 0x6794ca:goto L6794ca;
case 0x6794cd:c.instructions+=5;goto B6794cd;
case 0x6794d0:c.instructions+=4;goto B6794d0;
case 0x6794d3:c.instructions+=3;goto B6794d3;
case 0x6794d6:c.instructions+=2;goto B6794d6;
case 0x6794d9:c.instructions+=1;goto B6794d9;
case 0x6794db:goto L6794db;
case 0x6794de:c.instructions+=1;goto B6794de;
case 0x6794e0:goto L6794e0;
case 0x6794e3:c.instructions+=2;goto B6794e3;
case 0x6794e6:c.instructions+=1;goto B6794e6;
case 0x6794e8:goto L6794e8;
case 0x6794eb:c.instructions+=1;goto B6794eb;
case 0x6794ed:goto L6794ed;
case 0x6794f0:c.instructions+=5;goto B6794f0;
case 0x6794f3:c.instructions+=4;goto B6794f3;
case 0x6794f5:c.instructions+=3;goto B6794f5;
case 0x6794f8:c.instructions+=2;goto B6794f8;
case 0x6794fb:c.instructions+=1;goto B6794fb;
case 0x6794fd:goto L6794fd;
case 0x679500:c.instructions+=4;goto B679500;
case 0x679503:c.instructions+=3;goto B679503;
case 0x679505:c.instructions+=2;goto B679505;
case 0x679508:c.instructions+=1;goto B679508;
case 0x67950b:goto L67950b;
case 0x67950e:c.instructions+=6;goto B67950e;
case 0x679511:c.instructions+=5;goto B679511;
case 0x679514:c.instructions+=4;goto B679514;
case 0x679517:c.instructions+=3;goto B679517;
case 0x67951a:c.instructions+=2;goto B67951a;
case 0x67951d:c.instructions+=1;goto B67951d;
case 0x67951f:goto L67951f;
case 0x679523:c.instructions+=1;goto B679523;
case 0x679529:goto L679529;
case 0x67952c:c.instructions+=4;goto B67952c;
case 0x67952f:c.instructions+=3;goto B67952f;
case 0x679532:c.instructions+=2;goto B679532;
case 0x679533:c.instructions+=1;goto B679533;
case 0x679538:goto L679538;
case 0x67953a:c.instructions+=4;goto B67953a;
case 0x67953c:c.instructions+=3;goto B67953c;
case 0x67953d:c.instructions+=2;goto B67953d;
case 0x679540:c.instructions+=1;goto B679540;
case 0x679546:goto L679546;
case 0x679548:c.instructions+=2;goto B679548;
case 0x67954a:c.instructions+=1;goto B67954a;
case 0x67954d:goto L67954d;
case 0x679551:c.instructions+=4;goto B679551;
case 0x679552:c.instructions+=3;goto B679552;
case 0x679554:c.instructions+=2;goto B679554;
case 0x679557:c.instructions+=1;goto B679557;
case 0x679559:goto L679559;
case 0x67955d:c.instructions+=2;goto B67955d;
case 0x679560:c.instructions+=1;goto B679560;
case 0x679566:goto L679566;
case 0x679569:c.instructions+=11;goto B679569;
case 0x67956c:c.instructions+=10;goto B67956c;
case 0x67956f:c.instructions+=9;goto B67956f;
case 0x679571:c.instructions+=8;goto B679571;
case 0x679574:c.instructions+=7;goto B679574;
case 0x679577:c.instructions+=6;goto B679577;
case 0x679579:c.instructions+=5;goto B679579;
case 0x67957b:c.instructions+=4;goto B67957b;
case 0x67957e:c.instructions+=3;goto B67957e;
case 0x679581:c.instructions+=2;goto B679581;
case 0x679584:c.instructions+=1;goto B679584;
case 0x679587:goto L679587;
case 0x67958a:c.instructions+=4;goto B67958a;
case 0x67958d:c.instructions+=3;goto B67958d;
case 0x67958f:c.instructions+=2;goto B67958f;
case 0x679591:c.instructions+=1;goto B679591;
case 0x679593:goto L679593;
case 0x679597:c.instructions+=2;goto B679597;
case 0x67959a:c.instructions+=1;goto B67959a;
case 0x67959c:goto L67959c;
case 0x67959f:goto L67959f;
case 0x6795a2:c.instructions+=5;goto B6795a2;
case 0x6795a5:c.instructions+=4;goto B6795a5;
case 0x6795a8:c.instructions+=3;goto B6795a8;
case 0x6795aa:c.instructions+=2;goto B6795aa;
case 0x6795ad:c.instructions+=1;goto B6795ad;
case 0x6795af:goto L6795af;
case 0x6795b2:c.instructions+=5;goto B6795b2;
case 0x6795b5:c.instructions+=4;goto B6795b5;
case 0x6795b8:c.instructions+=3;goto B6795b8;
case 0x6795bb:c.instructions+=2;goto B6795bb;
case 0x6795be:c.instructions+=1;goto B6795be;
case 0x6795c0:goto L6795c0;
case 0x6795c3:goto L6795c3;
case 0x6795c5:c.instructions+=3;goto B6795c5;
case 0x6795c7:c.instructions+=2;goto B6795c7;
case 0x6795ca:c.instructions+=1;goto B6795ca;
case 0x6795cc:goto L6795cc;
case 0x6795cf:c.instructions+=5;goto B6795cf;
case 0x6795d2:c.instructions+=4;goto B6795d2;
case 0x6795d5:c.instructions+=3;goto B6795d5;
case 0x6795d8:c.instructions+=2;goto B6795d8;
case 0x6795db:c.instructions+=1;goto B6795db;
case 0x6795dd:goto L6795dd;
case 0x6795e0:goto L6795e0;
case 0x6795e3:c.instructions+=4;goto B6795e3;
case 0x6795e6:c.instructions+=3;goto B6795e6;
case 0x6795e9:c.instructions+=2;goto B6795e9;
case 0x6795ec:c.instructions+=1;goto B6795ec;
case 0x6795ef:goto L6795ef;
case 0x6795f2:c.instructions+=2;goto B6795f2;
case 0x6795f5:c.instructions+=1;goto B6795f5;
case 0x6795f7:goto L6795f7;
case 0x6795fb:c.instructions+=2;goto B6795fb;
case 0x6795fd:c.instructions+=1;goto B6795fd;
case 0x6795ff:goto L6795ff;
case 0x679600:c.instructions+=6;goto B679600;
case 0x679603:c.instructions+=5;goto B679603;
case 0x679606:c.instructions+=4;goto B679606;
case 0x679609:c.instructions+=3;goto B679609;
case 0x67960c:c.instructions+=2;goto B67960c;
case 0x67960f:c.instructions+=1;goto B67960f;
case 0x679614:goto L679614;
case 0x679619:goto L679619;
case 0x67961c:c.instructions+=14;goto B67961c;
case 0x67961f:c.instructions+=13;goto B67961f;
case 0x679621:c.instructions+=12;goto B679621;
case 0x679623:c.instructions+=11;goto B679623;
case 0x679626:c.instructions+=10;goto B679626;
case 0x67962c:c.instructions+=9;goto B67962c;
case 0x67962f:c.instructions+=8;goto B67962f;
case 0x679632:c.instructions+=7;goto B679632;
case 0x679636:c.instructions+=6;goto B679636;
case 0x679639:c.instructions+=5;goto B679639;
case 0x67963c:c.instructions+=4;goto B67963c;
case 0x67963f:c.instructions+=3;goto B67963f;
case 0x679642:c.instructions+=2;goto B679642;
case 0x679645:c.instructions+=1;goto B679645;
case 0x67964a:goto L67964a;
case 0x67964c:c.instructions+=2;goto B67964c;
case 0x67964e:c.instructions+=1;goto B67964e;
case 0x679654:goto L679654;
case 0x679656:c.instructions+=2;goto B679656;
case 0x679659:c.instructions+=1;goto B679659;
case 0x67965b:goto L67965b;
case 0x67965e:c.instructions+=9;goto B67965e;
case 0x679661:c.instructions+=8;goto B679661;
case 0x679664:c.instructions+=7;goto B679664;
case 0x679667:c.instructions+=6;goto B679667;
case 0x67966a:c.instructions+=5;goto B67966a;
case 0x679670:c.instructions+=4;goto B679670;
case 0x679671:c.instructions+=3;goto B679671;
case 0x679674:c.instructions+=2;goto B679674;
case 0x679677:c.instructions+=1;goto B679677;
case 0x679679:goto L679679;
case 0x67967c:c.instructions+=14;goto B67967c;
case 0x67967f:c.instructions+=13;goto B67967f;
case 0x679681:c.instructions+=12;goto B679681;
case 0x679682:c.instructions+=11;goto B679682;
case 0x679684:c.instructions+=10;goto B679684;
case 0x679687:c.instructions+=9;goto B679687;
case 0x679688:c.instructions+=8;goto B679688;
case 0x67968b:c.instructions+=7;goto B67968b;
case 0x67968e:c.instructions+=6;goto B67968e;
case 0x679691:c.instructions+=5;goto B679691;
case 0x679694:c.instructions+=4;goto B679694;
case 0x679697:c.instructions+=3;goto B679697;
case 0x67969a:c.instructions+=2;goto B67969a;
case 0x67969c:c.instructions+=1;goto B67969c;
case 0x6796a1:goto L6796a1;
case 0x6796a3:c.instructions+=2;goto B6796a3;
case 0x6796a5:c.instructions+=1;goto B6796a5;
case 0x6796ab:goto L6796ab;
case 0x6796ad:c.instructions+=2;goto B6796ad;
case 0x6796b0:c.instructions+=1;goto B6796b0;
case 0x6796b2:goto L6796b2;
case 0x6796b5:c.instructions+=9;goto B6796b5;
case 0x6796b8:c.instructions+=8;goto B6796b8;
case 0x6796bb:c.instructions+=7;goto B6796bb;
case 0x6796be:c.instructions+=6;goto B6796be;
case 0x6796c1:c.instructions+=5;goto B6796c1;
case 0x6796c7:c.instructions+=4;goto B6796c7;
case 0x6796c8:c.instructions+=3;goto B6796c8;
case 0x6796cb:c.instructions+=2;goto B6796cb;
case 0x6796ce:c.instructions+=1;goto B6796ce;
case 0x6796d0:goto L6796d0;
case 0x6796d3:c.instructions+=7;goto B6796d3;
case 0x6796d6:c.instructions+=6;goto B6796d6;
case 0x6796d9:c.instructions+=5;goto B6796d9;
case 0x6796dc:c.instructions+=4;goto B6796dc;
case 0x6796df:c.instructions+=3;goto B6796df;
case 0x6796e1:c.instructions+=2;goto B6796e1;
case 0x6796e4:c.instructions+=1;goto B6796e4;
case 0x6796e9:goto L6796e9;
case 0x6796eb:c.instructions+=2;goto B6796eb;
case 0x6796ed:c.instructions+=1;goto B6796ed;
case 0x6796f3:goto L6796f3;
case 0x6796f5:c.instructions+=8;goto B6796f5;
case 0x6796f8:c.instructions+=7;goto B6796f8;
case 0x6796fe:c.instructions+=6;goto B6796fe;
case 0x679701:c.instructions+=5;goto B679701;
case 0x679703:c.instructions+=4;goto B679703;
case 0x679706:c.instructions+=3;goto B679706;
case 0x679707:c.instructions+=2;goto B679707;
case 0x67970a:c.instructions+=1;goto B67970a;
case 0x67970f:goto L67970f;
case 0x679711:c.instructions+=2;goto B679711;
case 0x679713:c.instructions+=1;goto B679713;
case 0x679719:goto L679719;
case 0x67971b:c.instructions+=3;goto B67971b;
case 0x67971e:c.instructions+=2;goto B67971e;
case 0x679721:c.instructions+=1;goto B679721;
case 0x679723:goto L679723;
case 0x679726:c.instructions+=3;goto B679726;
case 0x679729:c.instructions+=2;goto B679729;
case 0x67972c:c.instructions+=1;goto B67972c;
case 0x67972f:goto L67972f;
case 0x679732:c.instructions+=4;goto B679732;
case 0x679735:c.instructions+=3;goto B679735;
case 0x679737:c.instructions+=2;goto B679737;
case 0x67973a:c.instructions+=1;goto B67973a;
case 0x67973c:goto L67973c;
case 0x67973f:c.instructions+=7;goto B67973f;
case 0x679741:c.instructions+=6;goto B679741;
case 0x679744:c.instructions+=5;goto B679744;
case 0x679747:c.instructions+=4;goto B679747;
case 0x67974a:c.instructions+=3;goto B67974a;
case 0x67974d:c.instructions+=2;goto B67974d;
case 0x679750:c.instructions+=1;goto B679750;
case 0x679752:goto L679752;
case 0x679755:c.instructions+=2;goto B679755;
case 0x679757:c.instructions+=1;goto B679757;
case 0x67975c:goto L67975c;
case 0x67975e:c.instructions+=7;goto B67975e;
case 0x679761:c.instructions+=6;goto B679761;
case 0x679764:c.instructions+=5;goto B679764;
case 0x679767:c.instructions+=4;goto B679767;
case 0x679769:c.instructions+=3;goto B679769;
case 0x67976c:c.instructions+=2;goto B67976c;
case 0x67976f:c.instructions+=1;goto B67976f;
case 0x679772:goto L679772;
case 0x679773:c.instructions+=3;goto B679773;
case 0x679776:c.instructions+=2;goto B679776;
case 0x679779:c.instructions+=1;goto B679779;
case 0x67977b:goto L67977b;
case 0x67977d:c.instructions+=2;goto B67977d;
case 0x679780:c.instructions+=1;goto B679780;
case 0x679782:goto L679782;
case 0x679785:c.instructions+=1;goto B679785;
case 0x679787:goto L679787;
case 0x679789:c.instructions+=2;goto B679789;
case 0x67978a:c.instructions+=1;goto B67978a;
case 0x67978c:goto L67978c;
case 0x67978e:goto L67978e;
case 0x679791:c.instructions+=3;goto B679791;
case 0x679793:c.instructions+=2;goto B679793;
case 0x679796:c.instructions+=1;goto B679796;
case 0x679798:goto L679798;
case 0x67979b:c.instructions+=1;goto B67979b;
case 0x67979d:goto L67979d;
case 0x6797a0:c.instructions+=1;goto B6797a0;
case 0x6797a2:goto L6797a2;
case 0x6797a5:c.instructions+=1;goto B6797a5;
case 0x6797a7:goto L6797a7;
case 0x6797a9:c.instructions+=1;goto B6797a9;
case 0x6797ab:goto L6797ab;
case 0x6797ae:c.instructions+=1;goto B6797ae;
case 0x6797b0:goto L6797b0;
case 0x6797b2:c.instructions+=2;goto B6797b2;
case 0x6797b3:c.instructions+=1;goto B6797b3;
case 0x6797b5:goto L6797b5;
case 0x6797b7:goto L6797b7;
case 0x6797b9:c.instructions+=2;goto B6797b9;
case 0x6797bc:c.instructions+=1;goto B6797bc;
case 0x6797be:goto L6797be;
case 0x6797c1:c.instructions+=1;goto B6797c1;
case 0x6797c3:goto L6797c3;
case 0x6797c6:c.instructions+=1;goto B6797c6;
case 0x6797c8:goto L6797c8;
case 0x6797cb:c.instructions+=1;goto B6797cb;
case 0x6797cd:goto L6797cd;
case 0x6797cf:c.instructions+=1;goto B6797cf;
case 0x6797d1:goto L6797d1;
case 0x6797d4:c.instructions+=1;goto B6797d4;
case 0x6797d6:goto L6797d6;
case 0x6797db:c.instructions+=4;goto B6797db;
case 0x6797e0:c.instructions+=3;goto B6797e0;
case 0x6797e3:c.instructions+=2;goto B6797e3;
case 0x6797e4:c.instructions+=1;goto B6797e4;
case 0x6797e9:goto L6797e9;
case 0x6797ec:c.instructions+=2;goto B6797ec;
case 0x6797f1:c.instructions+=1;goto B6797f1;
case 0x6797f3:goto L6797f3;
case 0x6797f8:goto L6797f8;
case 0x6797fb:c.instructions+=1;goto B6797fb;
case 0x679800:goto L679800;
case 0x679803:c.instructions+=1;goto B679803;
case 0x679808:goto L679808;
case 0x67980b:c.instructions+=1;goto B67980b;
case 0x679810:goto L679810;
case 0x679813:c.instructions+=1;goto B679813;
case 0x679818:goto L679818;
case 0x67981b:c.instructions+=16;goto B67981b;
case 0x67981e:c.instructions+=15;goto B67981e;
case 0x679821:c.instructions+=14;goto B679821;
case 0x679824:c.instructions+=13;goto B679824;
case 0x679827:c.instructions+=12;goto B679827;
case 0x67982a:c.instructions+=11;goto B67982a;
case 0x67982d:c.instructions+=10;goto B67982d;
case 0x679830:c.instructions+=9;goto B679830;
case 0x679833:c.instructions+=8;goto B679833;
case 0x679836:c.instructions+=7;goto B679836;
case 0x679839:c.instructions+=6;goto B679839;
case 0x67983a:c.instructions+=5;goto B67983a;
case 0x67983c:c.instructions+=4;goto B67983c;
case 0x67983d:c.instructions+=3;goto B67983d;
case 0x67983e:c.instructions+=2;goto B67983e;
case 0x67983f:c.instructions+=1;goto B67983f;
case 0x679842:goto L679842;
case 0x679844:c.instructions+=28;goto B679844;
case 0x679845:c.instructions+=27;goto B679845;
case 0x679847:c.instructions+=26;goto B679847;
case 0x67984d:c.instructions+=25;goto B67984d;
case 0x67984e:c.instructions+=24;goto B67984e;
case 0x679850:c.instructions+=23;goto B679850;
case 0x679853:c.instructions+=22;goto B679853;
case 0x679856:c.instructions+=21;goto B679856;
case 0x679859:c.instructions+=20;goto B679859;
case 0x67985c:c.instructions+=19;goto B67985c;
case 0x67985f:c.instructions+=18;goto B67985f;
case 0x679862:c.instructions+=17;goto B679862;
case 0x679868:c.instructions+=16;goto B679868;
case 0x67986b:c.instructions+=15;goto B67986b;
case 0x679871:c.instructions+=14;goto B679871;
case 0x679873:c.instructions+=13;goto B679873;
case 0x679874:c.instructions+=12;goto B679874;
case 0x679876:c.instructions+=11;goto B679876;
case 0x679879:c.instructions+=10;goto B679879;
case 0x67987c:c.instructions+=9;goto B67987c;
case 0x67987f:c.instructions+=8;goto B67987f;
case 0x679882:c.instructions+=7;goto B679882;
case 0x679885:c.instructions+=6;goto B679885;
case 0x679888:c.instructions+=5;goto B679888;
case 0x67988b:c.instructions+=4;goto B67988b;
case 0x67988e:c.instructions+=3;goto B67988e;
case 0x679891:c.instructions+=2;goto B679891;
case 0x679894:c.instructions+=1;goto B679894;
case 0x679896:goto L679896;
case 0x67989b:c.instructions+=1;goto B67989b;
case 0x6798a0:goto L6798a0;
case 0x6798a1:c.instructions+=13;goto B6798a1;
case 0x6798a4:c.instructions+=12;goto B6798a4;
case 0x6798a7:c.instructions+=11;goto B6798a7;
case 0x6798aa:c.instructions+=10;goto B6798aa;
case 0x6798ad:c.instructions+=9;goto B6798ad;
case 0x6798b0:c.instructions+=8;goto B6798b0;
case 0x6798b3:c.instructions+=7;goto B6798b3;
case 0x6798b5:c.instructions+=6;goto B6798b5;
case 0x6798b8:c.instructions+=5;goto B6798b8;
case 0x6798b9:c.instructions+=4;goto B6798b9;
case 0x6798ba:c.instructions+=3;goto B6798ba;
case 0x6798bd:c.instructions+=2;goto B6798bd;
case 0x6798c0:c.instructions+=1;goto B6798c0;
case 0x6798c5:goto L6798c5;
case 0x6798c7:c.instructions+=3;goto B6798c7;
case 0x6798c8:c.instructions+=2;goto B6798c8;
case 0x6798cb:c.instructions+=1;goto B6798cb;
case 0x6798d1:goto L6798d1;
case 0x6798d4:c.instructions+=3;goto B6798d4;
case 0x6798d7:c.instructions+=2;goto B6798d7;
case 0x6798d8:c.instructions+=1;goto B6798d8;
case 0x6798dd:goto L6798dd;
case 0x6798df:c.instructions+=3;goto B6798df;
case 0x6798e0:c.instructions+=2;goto B6798e0;
case 0x6798e3:c.instructions+=1;goto B6798e3;
case 0x6798e9:goto L6798e9;
case 0x6798ec:c.instructions+=3;goto B6798ec;
case 0x6798ef:c.instructions+=2;goto B6798ef;
case 0x6798f0:c.instructions+=1;goto B6798f0;
case 0x6798f5:goto L6798f5;
case 0x6798f7:c.instructions+=3;goto B6798f7;
case 0x6798f8:c.instructions+=2;goto B6798f8;
case 0x6798fb:c.instructions+=1;goto B6798fb;
case 0x679901:goto L679901;
case 0x679904:c.instructions+=4;goto B679904;
case 0x679907:c.instructions+=3;goto B679907;
case 0x679908:c.instructions+=2;goto B679908;
case 0x67990b:c.instructions+=1;goto B67990b;
case 0x679910:goto L679910;
case 0x679912:c.instructions+=3;goto B679912;
case 0x679913:c.instructions+=2;goto B679913;
case 0x679916:c.instructions+=1;goto B679916;
case 0x67991c:goto L67991c;
case 0x67991f:c.instructions+=1;goto B67991f;
case 0x679924:goto L679924;
case 0x679926:c.instructions+=3;goto B679926;
case 0x679927:c.instructions+=2;goto B679927;
case 0x67992a:c.instructions+=1;goto B67992a;
case 0x679930:goto L679930;
case 0x679932:c.instructions+=2;goto B679932;
case 0x679935:c.instructions+=1;goto B679935;
case 0x679937:goto L679937;
case 0x67993a:c.instructions+=1;goto B67993a;
case 0x67993d:goto L67993d;
case 0x679940:c.instructions+=5;goto B679940;
case 0x679942:c.instructions+=4;goto B679942;
case 0x679945:c.instructions+=3;goto B679945;
case 0x679948:c.instructions+=2;goto B679948;
case 0x67994b:c.instructions+=1;goto B67994b;
case 0x67994d:goto L67994d;
case 0x679950:c.instructions+=3;goto B679950;
case 0x679952:c.instructions+=2;goto B679952;
case 0x679953:c.instructions+=1;goto B679953;
case 0x679958:goto L679958;
case 0x67995a:c.instructions+=1;goto B67995a;
case 0x67995c:goto L67995c;
case 0x679962:c.instructions+=4;goto B679962;
case 0x679965:c.instructions+=3;goto B679965;
case 0x679967:c.instructions+=2;goto B679967;
case 0x67996d:c.instructions+=1;goto B67996d;
case 0x679970:goto L679970;
case 0x679973:c.instructions+=3;goto B679973;
case 0x679976:c.instructions+=2;goto B679976;
case 0x679979:c.instructions+=1;goto B679979;
case 0x67997b:goto L67997b;
case 0x67997e:c.instructions+=5;goto B67997e;
case 0x679981:c.instructions+=4;goto B679981;
case 0x679984:c.instructions+=3;goto B679984;
case 0x679987:c.instructions+=2;goto B679987;
case 0x67998a:c.instructions+=1;goto B67998a;
case 0x67998c:goto L67998c;
case 0x67998e:c.instructions+=4;goto B67998e;
case 0x679991:c.instructions+=3;goto B679991;
case 0x679994:c.instructions+=2;goto B679994;
case 0x679997:c.instructions+=1;goto B679997;
case 0x679999:goto L679999;
case 0x67999c:c.instructions+=1;goto B67999c;
case 0x6799a3:goto L6799a3;
case 0x6799a7:c.instructions+=3;goto B6799a7;
case 0x6799a8:c.instructions+=2;goto B6799a8;
case 0x6799ab:c.instructions+=1;goto B6799ab;
case 0x6799ad:goto L6799ad;
case 0x6799b0:c.instructions+=7;goto B6799b0;
case 0x6799b2:c.instructions+=6;goto B6799b2;
case 0x6799b5:c.instructions+=5;goto B6799b5;
case 0x6799bb:c.instructions+=4;goto B6799bb;
case 0x6799be:c.instructions+=3;goto B6799be;
case 0x6799c1:c.instructions+=2;goto B6799c1;
case 0x6799c3:c.instructions+=1;goto B6799c3;
case 0x6799c6:goto L6799c6;
case 0x6799c8:goto L6799c8;
case 0x6799ca:c.instructions+=1;goto B6799ca;
case 0x6799cd:goto L6799cd;
case 0x6799cf:goto L6799cf;
case 0x6799d2:c.instructions+=4;goto B6799d2;
case 0x6799d5:c.instructions+=3;goto B6799d5;
case 0x6799d8:c.instructions+=2;goto B6799d8;
case 0x6799da:c.instructions+=1;goto B6799da;
case 0x6799dd:goto L6799dd;
case 0x6799df:goto L6799df;
case 0x6799e1:c.instructions+=1;goto B6799e1;
case 0x6799e4:goto L6799e4;
case 0x6799e6:goto L6799e6;
case 0x6799e9:c.instructions+=12;goto B6799e9;
case 0x6799ed:c.instructions+=11;goto B6799ed;
case 0x6799f1:c.instructions+=10;goto B6799f1;
case 0x6799f4:c.instructions+=9;goto B6799f4;
case 0x6799f6:c.instructions+=8;goto B6799f6;
case 0x6799f7:c.instructions+=7;goto B6799f7;
case 0x6799fa:c.instructions+=6;goto B6799fa;
case 0x6799fd:c.instructions+=5;goto B6799fd;
case 0x679a00:c.instructions+=4;goto B679a00;
case 0x679a03:c.instructions+=3;goto B679a03;
case 0x679a05:c.instructions+=2;goto B679a05;
case 0x679a08:c.instructions+=1;goto B679a08;
case 0x679a0a:goto L679a0a;
case 0x679a11:goto L679a11;
case 0x679a15:c.instructions+=2;goto B679a15;
case 0x679a19:c.instructions+=1;goto B679a19;
case 0x679a1f:goto L679a1f;
case 0x679a22:c.instructions+=6;goto B679a22;
case 0x679a25:c.instructions+=5;goto B679a25;
case 0x679a26:c.instructions+=4;goto B679a26;
case 0x679a2a:c.instructions+=3;goto B679a2a;
case 0x679a2d:c.instructions+=2;goto B679a2d;
case 0x679a30:c.instructions+=1;goto B679a30;
case 0x679a32:goto L679a32;
case 0x679a36:c.instructions+=1;goto B679a36;
case 0x679a38:goto L679a38;
case 0x679a3a:c.instructions+=4;goto B679a3a;
case 0x679a3b:c.instructions+=3;goto B679a3b;
case 0x679a3e:c.instructions+=2;goto B679a3e;
case 0x679a40:c.instructions+=1;goto B679a40;
case 0x679a45:goto L679a45;
case 0x679a47:c.instructions+=2;goto B679a47;
case 0x679a49:c.instructions+=1;goto B679a49;
case 0x679a4f:goto L679a4f;
case 0x679a52:c.instructions+=1;goto B679a52;
case 0x679a58:goto L679a58;
case 0x679a5b:c.instructions+=1;goto B679a5b;
case 0x679a61:goto L679a61;
case 0x679a64:c.instructions+=1;goto B679a64;
case 0x679a6a:goto L679a6a;
case 0x679a6d:c.instructions+=5;goto B679a6d;
case 0x679a70:c.instructions+=4;goto B679a70;
case 0x679a73:c.instructions+=3;goto B679a73;
case 0x679a76:c.instructions+=2;goto B679a76;
case 0x679a78:c.instructions+=1;goto B679a78;
case 0x679a7b:goto L679a7b;
case 0x679a7d:goto L679a7d;
case 0x679a7f:c.instructions+=1;goto B679a7f;
case 0x679a82:goto L679a82;
case 0x679a84:goto L679a84;
case 0x679a88:c.instructions+=2;goto B679a88;
case 0x679a8c:c.instructions+=1;goto B679a8c;
case 0x679a8e:goto L679a8e;
case 0x679a92:c.instructions+=6;goto B679a92;
case 0x679a94:c.instructions+=5;goto B679a94;
case 0x679a97:c.instructions+=4;goto B679a97;
case 0x679a98:c.instructions+=3;goto B679a98;
case 0x679a9b:c.instructions+=2;goto B679a9b;
case 0x679a9d:c.instructions+=1;goto B679a9d;
case 0x679aa2:goto L679aa2;
case 0x679aa4:c.instructions+=2;goto B679aa4;
case 0x679aa6:c.instructions+=1;goto B679aa6;
case 0x679aac:goto L679aac;
case 0x679aae:c.instructions+=9;goto B679aae;
case 0x679ab1:c.instructions+=8;goto B679ab1;
case 0x679ab2:c.instructions+=7;goto B679ab2;
case 0x679ab5:c.instructions+=6;goto B679ab5;
case 0x679ab6:c.instructions+=5;goto B679ab6;
case 0x679ab7:c.instructions+=4;goto B679ab7;
case 0x679abc:c.instructions+=3;goto B679abc;
case 0x679abf:c.instructions+=2;goto B679abf;
case 0x679ac1:c.instructions+=1;goto B679ac1;
case 0x679ac6:goto L679ac6;
case 0x679ac8:c.instructions+=2;goto B679ac8;
case 0x679aca:c.instructions+=1;goto B679aca;
case 0x679ad0:goto L679ad0;
case 0x679ad4:c.instructions+=1;goto B679ad4;
case 0x679ada:goto L679ada;
case 0x679ade:c.instructions+=1;goto B679ade;
case 0x679ae4:goto L679ae4;
case 0x679ae8:c.instructions+=1;goto B679ae8;
case 0x679aee:goto L679aee;
case 0x679af4:c.instructions+=4;goto B679af4;
case 0x679af5:c.instructions+=3;goto B679af5;
case 0x679af8:c.instructions+=2;goto B679af8;
case 0x679afa:c.instructions+=1;goto B679afa;
case 0x679aff:goto L679aff;
case 0x679b01:c.instructions+=1;goto B679b01;
case 0x679b07:goto L679b07;
case 0x679b0d:c.instructions+=5;goto B679b0d;
case 0x679b13:c.instructions+=4;goto B679b13;
case 0x679b15:c.instructions+=3;goto B679b15;
case 0x679b17:c.instructions+=2;goto B679b17;
case 0x679b1a:c.instructions+=1;goto B679b1a;
case 0x679b1c:goto L679b1c;
case 0x679b1e:c.instructions+=2;goto B679b1e;
case 0x679b21:c.instructions+=1;goto B679b21;
case 0x679b27:goto L679b27;
case 0x679b2a:c.instructions+=4;goto B679b2a;
case 0x679b2d:c.instructions+=3;goto B679b2d;
case 0x679b30:c.instructions+=2;goto B679b30;
case 0x679b33:c.instructions+=1;goto B679b33;
case 0x679b36:goto L679b36;
case 0x679b39:c.instructions+=5;goto B679b39;
case 0x679b3c:c.instructions+=4;goto B679b3c;
case 0x679b3f:c.instructions+=3;goto B679b3f;
case 0x679b42:c.instructions+=2;goto B679b42;
case 0x679b45:c.instructions+=1;goto B679b45;
case 0x679b47:goto L679b47;
case 0x679b4a:c.instructions+=3;goto B679b4a;
case 0x679b4c:c.instructions+=2;goto B679b4c;
case 0x679b4d:c.instructions+=1;goto B679b4d;
case 0x679b52:goto L679b52;
case 0x679b54:c.instructions+=1;goto B679b54;
case 0x679b56:goto L679b56;
case 0x679b5c:c.instructions+=4;goto B679b5c;
case 0x679b5f:c.instructions+=3;goto B679b5f;
case 0x679b61:c.instructions+=2;goto B679b61;
case 0x679b67:c.instructions+=1;goto B679b67;
case 0x679b6a:goto L679b6a;
case 0x679b6d:c.instructions+=7;goto B679b6d;
case 0x679b70:c.instructions+=6;goto B679b70;
case 0x679b73:c.instructions+=5;goto B679b73;
case 0x679b76:c.instructions+=4;goto B679b76;
case 0x679b79:c.instructions+=3;goto B679b79;
case 0x679b7b:c.instructions+=2;goto B679b7b;
case 0x679b7e:c.instructions+=1;goto B679b7e;
case 0x679b80:goto L679b80;
case 0x679b84:c.instructions+=3;goto B679b84;
case 0x679b85:c.instructions+=2;goto B679b85;
case 0x679b88:c.instructions+=1;goto B679b88;
case 0x679b8a:goto L679b8a;
case 0x679b8f:goto L679b8f;
case 0x679b91:c.instructions+=3;goto B679b91;
case 0x679b94:c.instructions+=2;goto B679b94;
case 0x679b97:c.instructions+=1;goto B679b97;
case 0x679b9d:goto L679b9d;
case 0x679ba0:c.instructions+=3;goto B679ba0;
case 0x679ba3:c.instructions+=2;goto B679ba3;
case 0x679ba6:c.instructions+=1;goto B679ba6;
case 0x679ba9:goto L679ba9;
case 0x679bac:c.instructions+=5;goto B679bac;
case 0x679baf:c.instructions+=4;goto B679baf;
case 0x679bb2:c.instructions+=3;goto B679bb2;
case 0x679bb5:c.instructions+=2;goto B679bb5;
case 0x679bb8:c.instructions+=1;goto B679bb8;
case 0x679bbe:goto L679bbe;
case 0x679bc0:c.instructions+=4;goto B679bc0;
case 0x679bc6:c.instructions+=3;goto B679bc6;
case 0x679bc8:c.instructions+=2;goto B679bc8;
case 0x679bcb:c.instructions+=1;goto B679bcb;
case 0x679bcd:goto L679bcd;
case 0x679bd0:c.instructions+=4;goto B679bd0;
case 0x679bd6:c.instructions+=3;goto B679bd6;
case 0x679bd8:c.instructions+=2;goto B679bd8;
case 0x679bdb:c.instructions+=1;goto B679bdb;
case 0x679bdd:goto L679bdd;
case 0x679be3:c.instructions+=4;goto B679be3;
case 0x679be4:c.instructions+=3;goto B679be4;
case 0x679be5:c.instructions+=2;goto B679be5;
case 0x679be7:c.instructions+=1;goto B679be7;
case 0x679bec:goto L679bec;
case 0x679bee:c.instructions+=1;goto B679bee;
case 0x679bf0:goto L679bf0;
case 0x679bf2:c.instructions+=4;goto B679bf2;
case 0x679bf8:c.instructions+=3;goto B679bf8;
case 0x679bfa:c.instructions+=2;goto B679bfa;
case 0x679bfd:c.instructions+=1;goto B679bfd;
case 0x679bff:goto L679bff;
case 0x679c05:c.instructions+=1;goto B679c05;
case 0x679c07:goto L679c07;
case 0x679c0a:c.instructions+=4;goto B679c0a;
case 0x679c10:c.instructions+=3;goto B679c10;
case 0x679c12:c.instructions+=2;goto B679c12;
case 0x679c15:c.instructions+=1;goto B679c15;
case 0x679c17:goto L679c17;
case 0x679c1d:c.instructions+=1;goto B679c1d;
case 0x679c1f:goto L679c1f;
case 0x679c25:c.instructions+=2;goto B679c25;
case 0x679c27:c.instructions+=1;goto B679c27;
case 0x679c2d:goto L679c2d;
case 0x679c30:goto L679c30;
case 0x679c33:c.instructions+=9;goto B679c33;
case 0x679c36:c.instructions+=8;goto B679c36;
case 0x679c39:c.instructions+=7;goto B679c39;
case 0x679c3c:c.instructions+=6;goto B679c3c;
case 0x679c3f:c.instructions+=5;goto B679c3f;
case 0x679c42:c.instructions+=4;goto B679c42;
case 0x679c44:c.instructions+=3;goto B679c44;
case 0x679c46:c.instructions+=2;goto B679c46;
case 0x679c49:c.instructions+=1;goto B679c49;
case 0x679c4c:goto L679c4c;
case 0x679c4d:c.instructions+=4;goto B679c4d;
case 0x679c50:c.instructions+=3;goto B679c50;
case 0x679c53:c.instructions+=2;goto B679c53;
case 0x679c56:c.instructions+=1;goto B679c56;
case 0x679c5c:goto L679c5c;
case 0x679c60:c.instructions+=1;goto B679c60;
case 0x679c66:goto L679c66;
case 0x679c6c:c.instructions+=4;goto B679c6c;
case 0x679c6d:c.instructions+=3;goto B679c6d;
case 0x679c70:c.instructions+=2;goto B679c70;
case 0x679c72:c.instructions+=1;goto B679c72;
case 0x679c77:goto L679c77;
case 0x679c79:c.instructions+=1;goto B679c79;
case 0x679c7b:goto L679c7b;
case 0x679c81:c.instructions+=5;goto B679c81;
case 0x679c87:c.instructions+=4;goto B679c87;
case 0x679c89:c.instructions+=3;goto B679c89;
case 0x679c8b:c.instructions+=2;goto B679c8b;
case 0x679c8e:c.instructions+=1;goto B679c8e;
case 0x679c90:goto L679c90;
case 0x679c96:c.instructions+=5;goto B679c96;
case 0x679c9c:c.instructions+=4;goto B679c9c;
case 0x679c9e:c.instructions+=3;goto B679c9e;
case 0x679ca0:c.instructions+=2;goto B679ca0;
case 0x679ca3:c.instructions+=1;goto B679ca3;
case 0x679ca9:goto L679ca9;
case 0x679cab:c.instructions+=4;goto B679cab;
case 0x679cb1:c.instructions+=3;goto B679cb1;
case 0x679cb3:c.instructions+=2;goto B679cb3;
case 0x679cb6:c.instructions+=1;goto B679cb6;
case 0x679cb8:goto L679cb8;
case 0x679cba:c.instructions+=4;goto B679cba;
case 0x679cc0:c.instructions+=3;goto B679cc0;
case 0x679cc2:c.instructions+=2;goto B679cc2;
case 0x679cc5:c.instructions+=1;goto B679cc5;
case 0x679cc7:goto L679cc7;
case 0x679ccb:goto L679ccb;
case 0x679cce:c.instructions+=11;goto B679cce;
case 0x679cd0:c.instructions+=10;goto B679cd0;
case 0x679cd3:c.instructions+=9;goto B679cd3;
case 0x679cd6:c.instructions+=8;goto B679cd6;
case 0x679cd9:c.instructions+=7;goto B679cd9;
case 0x679cdc:c.instructions+=6;goto B679cdc;
case 0x679cdf:c.instructions+=5;goto B679cdf;
case 0x679ce2:c.instructions+=4;goto B679ce2;
case 0x679ce4:c.instructions+=3;goto B679ce4;
case 0x679ce7:c.instructions+=2;goto B679ce7;
case 0x679cea:c.instructions+=1;goto B679cea;
case 0x679ced:goto L679ced;
case 0x679cf1:c.instructions+=1;goto B679cf1;
case 0x679cf7:goto L679cf7;
case 0x679cfa:c.instructions+=9;goto B679cfa;
case 0x679cfd:c.instructions+=8;goto B679cfd;
case 0x679d00:c.instructions+=7;goto B679d00;
case 0x679d03:c.instructions+=6;goto B679d03;
case 0x679d05:c.instructions+=5;goto B679d05;
case 0x679d07:c.instructions+=4;goto B679d07;
case 0x679d0a:c.instructions+=3;goto B679d0a;
case 0x679d0d:c.instructions+=2;goto B679d0d;
case 0x679d13:c.instructions+=1;goto B679d13;
case 0x679d16:goto L679d16;
case 0x679d18:c.instructions+=2;goto B679d18;
case 0x679d1b:c.instructions+=1;goto B679d1b;
case 0x679d21:goto L679d21;
case 0x679d23:c.instructions+=4;goto B679d23;
case 0x679d29:c.instructions+=3;goto B679d29;
case 0x679d2b:c.instructions+=2;goto B679d2b;
case 0x679d2e:c.instructions+=1;goto B679d2e;
case 0x679d30:goto L679d30;
case 0x679d33:c.instructions+=4;goto B679d33;
case 0x679d39:c.instructions+=3;goto B679d39;
case 0x679d3b:c.instructions+=2;goto B679d3b;
case 0x679d3e:c.instructions+=1;goto B679d3e;
case 0x679d40:goto L679d40;
case 0x679d46:c.instructions+=4;goto B679d46;
case 0x679d47:c.instructions+=3;goto B679d47;
case 0x679d48:c.instructions+=2;goto B679d48;
case 0x679d4a:c.instructions+=1;goto B679d4a;
case 0x679d4f:goto L679d4f;
case 0x679d51:c.instructions+=1;goto B679d51;
case 0x679d53:goto L679d53;
case 0x679d55:c.instructions+=4;goto B679d55;
case 0x679d5b:c.instructions+=3;goto B679d5b;
case 0x679d5d:c.instructions+=2;goto B679d5d;
case 0x679d60:c.instructions+=1;goto B679d60;
case 0x679d62:goto L679d62;
case 0x679d68:c.instructions+=1;goto B679d68;
case 0x679d6a:goto L679d6a;
case 0x679d6d:c.instructions+=4;goto B679d6d;
case 0x679d73:c.instructions+=3;goto B679d73;
case 0x679d75:c.instructions+=2;goto B679d75;
case 0x679d78:c.instructions+=1;goto B679d78;
case 0x679d7a:goto L679d7a;
case 0x679d80:c.instructions+=1;goto B679d80;
case 0x679d82:goto L679d82;
case 0x679d88:c.instructions+=2;goto B679d88;
case 0x679d8a:c.instructions+=1;goto B679d8a;
case 0x679d90:goto L679d90;
case 0x679d93:goto L679d93;
case 0x679d96:c.instructions+=8;goto B679d96;
case 0x679d98:c.instructions+=7;goto B679d98;
case 0x679d9b:c.instructions+=6;goto B679d9b;
case 0x679d9e:c.instructions+=5;goto B679d9e;
case 0x679da1:c.instructions+=4;goto B679da1;
case 0x679da3:c.instructions+=3;goto B679da3;
case 0x679da5:c.instructions+=2;goto B679da5;
case 0x679da7:c.instructions+=1;goto B679da7;
case 0x679dad:goto L679dad;
case 0x679db0:c.instructions+=3;goto B679db0;
case 0x679db3:c.instructions+=2;goto B679db3;
case 0x679db6:c.instructions+=1;goto B679db6;
case 0x679dbc:goto L679dbc;
case 0x679dc0:c.instructions+=1;goto B679dc0;
case 0x679dc2:goto L679dc2;
case 0x679dc6:c.instructions+=1;goto B679dc6;
case 0x679dc8:goto L679dc8;
case 0x679dcb:c.instructions+=7;goto B679dcb;
case 0x679dcc:c.instructions+=6;goto B679dcc;
case 0x679dcf:c.instructions+=5;goto B679dcf;
case 0x679dd0:c.instructions+=4;goto B679dd0;
case 0x679dd3:c.instructions+=3;goto B679dd3;
case 0x679dd5:c.instructions+=2;goto B679dd5;
case 0x679dd8:c.instructions+=1;goto B679dd8;
case 0x679ddd:goto L679ddd;
case 0x679ddf:c.instructions+=1;goto B679ddf;
case 0x679de1:goto L679de1;
case 0x679de8:c.instructions+=1;goto B679de8;
case 0x679dea:goto L679dea;
case 0x679dee:goto L679dee;
case 0x679df0:c.instructions+=2;goto B679df0;
case 0x679df3:c.instructions+=1;goto B679df3;
case 0x679df5:goto L679df5;
case 0x679df8:c.instructions+=1;goto B679df8;
case 0x679dfa:goto L679dfa;
case 0x679dfb:c.instructions+=3;goto B679dfb;
case 0x679dfe:c.instructions+=2;goto B679dfe;
case 0x679e00:c.instructions+=1;goto B679e00;
case 0x679e05:goto L679e05;
case 0x679e07:c.instructions+=2;goto B679e07;
case 0x679e09:c.instructions+=1;goto B679e09;
case 0x679e0f:goto L679e0f;
case 0x679e12:c.instructions+=1;goto B679e12;
case 0x679e14:goto L679e14;
case 0x679e17:c.instructions+=1;goto B679e17;
case 0x679e1d:goto L679e1d;
case 0x679e20:c.instructions+=1;goto B679e20;
case 0x679e26:goto L679e26;
case 0x679e29:c.instructions+=3;goto B679e29;
case 0x679e2c:c.instructions+=2;goto B679e2c;
case 0x679e2f:c.instructions+=1;goto B679e2f;
case 0x679e35:goto L679e35;
case 0x679e38:c.instructions+=2;goto B679e38;
case 0x679e3b:c.instructions+=1;goto B679e3b;
case 0x679e41:goto L679e41;
case 0x679e43:c.instructions+=2;goto B679e43;
case 0x679e46:c.instructions+=1;goto B679e46;
case 0x679e48:goto L679e48;
case 0x679e4b:c.instructions+=1;goto B679e4b;
case 0x679e51:goto L679e51;
case 0x679e55:c.instructions+=1;goto B679e55;
case 0x679e5b:goto L679e5b;
case 0x679e5e:c.instructions+=1;goto B679e5e;
case 0x679e60:goto L679e60;
case 0x679e63:goto L679e63;
case 0x679e66:c.instructions+=1;goto B679e66;
case 0x679e6c:goto L679e6c;
case 0x679e6f:c.instructions+=1;goto B679e6f;
case 0x679e75:goto L679e75;
case 0x679e78:c.instructions+=2;goto B679e78;
case 0x679e7c:c.instructions+=1;goto B679e7c;
case 0x679e82:goto L679e82;
case 0x679e85:c.instructions+=3;goto B679e85;
case 0x679e88:c.instructions+=2;goto B679e88;
case 0x679e8a:c.instructions+=1;goto B679e8a;
case 0x679e8c:goto L679e8c;
case 0x679e8f:c.instructions+=3;goto B679e8f;
case 0x679e92:c.instructions+=2;goto B679e92;
case 0x679e95:c.instructions+=1;goto B679e95;
case 0x679e9a:goto L679e9a;
case 0x679e9c:c.instructions+=1;goto B679e9c;
case 0x679ea2:goto L679ea2;
case 0x679ea5:c.instructions+=3;goto B679ea5;
case 0x679ea6:c.instructions+=2;goto B679ea6;
case 0x679ea9:c.instructions+=1;goto B679ea9;
case 0x679eab:goto L679eab;
case 0x679ead:goto L679ead;
case 0x679eb0:c.instructions+=1;goto B679eb0;
case 0x679eb2:goto L679eb2;
case 0x679eb5:c.instructions+=2;goto B679eb5;
case 0x679eb8:c.instructions+=1;goto B679eb8;
case 0x679ebb:goto L679ebb;
case 0x679ebe:c.instructions+=2;goto B679ebe;
case 0x679ec1:c.instructions+=1;goto B679ec1;
case 0x679ec3:goto L679ec3;
case 0x679ec9:c.instructions+=4;goto B679ec9;
case 0x679eca:c.instructions+=3;goto B679eca;
case 0x679ecd:c.instructions+=2;goto B679ecd;
case 0x679ecf:c.instructions+=1;goto B679ecf;
case 0x679ed4:goto L679ed4;
case 0x679ed6:c.instructions+=1;goto B679ed6;
case 0x679ed8:goto L679ed8;
case 0x679ede:c.instructions+=5;goto B679ede;
case 0x679ee4:c.instructions+=4;goto B679ee4;
case 0x679ee6:c.instructions+=3;goto B679ee6;
case 0x679ee8:c.instructions+=2;goto B679ee8;
case 0x679eeb:c.instructions+=1;goto B679eeb;
case 0x679ef1:goto L679ef1;
case 0x679ef4:c.instructions+=2;goto B679ef4;
case 0x679ef7:c.instructions+=1;goto B679ef7;
case 0x679efd:goto L679efd;
case 0x679f01:c.instructions+=1;goto B679f01;
case 0x679f07:goto L679f07;
case 0x679f0b:c.instructions+=1;goto B679f0b;
case 0x679f11:goto L679f11;
case 0x679f14:c.instructions+=3;goto B679f14;
case 0x679f17:c.instructions+=2;goto B679f17;
case 0x679f19:c.instructions+=1;goto B679f19;
case 0x679f1b:goto L679f1b;
case 0x679f1e:c.instructions+=2;goto B679f1e;
case 0x679f21:c.instructions+=1;goto B679f21;
case 0x679f26:goto L679f26;
case 0x679f28:c.instructions+=4;goto B679f28;
case 0x679f2a:c.instructions+=3;goto B679f2a;
case 0x679f2f:c.instructions+=2;goto B679f2f;
case 0x679f31:c.instructions+=1;goto B679f31;
case 0x679f33:goto L679f33;
case 0x679f35:goto L679f35;
case 0x679f37:c.instructions+=1;goto B679f37;
case 0x679f39:goto L679f39;
case 0x679f3e:c.instructions+=1;goto B679f3e;
case 0x679f40:goto L679f40;
case 0x679f45:c.instructions+=1;goto B679f45;
case 0x679f47:goto L679f47;
case 0x679f4c:c.instructions+=1;goto B679f4c;
case 0x679f4e:goto L679f4e;
case 0x679f53:c.instructions+=1;goto B679f53;
case 0x679f55:goto L679f55;
case 0x679f5a:c.instructions+=1;goto B679f5a;
case 0x679f5c:goto L679f5c;
case 0x679f5f:c.instructions+=1;goto B679f5f;
case 0x679f64:goto L679f64;
case 0x679f69:c.instructions+=1;goto B679f69;
case 0x679f6b:goto L679f6b;
case 0x679f70:c.instructions+=1;goto B679f70;
case 0x679f72:goto L679f72;
case 0x679f77:c.instructions+=1;goto B679f77;
case 0x679f79:goto L679f79;
case 0x679f7e:c.instructions+=1;goto B679f7e;
case 0x679f80:goto L679f80;
case 0x679f85:goto L679f85;
case 0x679f87:goto L679f87;
case 0x679f8a:c.instructions+=4;goto B679f8a;
case 0x679f8b:c.instructions+=3;goto B679f8b;
case 0x679f8e:c.instructions+=2;goto B679f8e;
case 0x679f91:c.instructions+=1;goto B679f91;
case 0x679f93:goto L679f93;
case 0x679f95:goto L679f95;
case 0x679f9b:goto L679f9b;
case 0x679f9d:c.instructions+=3;goto B679f9d;
case 0x679f9f:c.instructions+=2;goto B679f9f;
case 0x679fa2:c.instructions+=1;goto B679fa2;
case 0x679fa4:goto L679fa4;
case 0x679fa7:c.instructions+=3;goto B679fa7;
case 0x679faa:c.instructions+=2;goto B679faa;
case 0x679fad:c.instructions+=1;goto B679fad;
case 0x679faf:goto L679faf;
case 0x679fb2:c.instructions+=2;goto B679fb2;
case 0x679fb5:c.instructions+=1;goto B679fb5;
case 0x679fb7:goto L679fb7;
case 0x679fb8:goto L679fb8;
case 0x679fb9:c.instructions+=2;goto B679fb9;
case 0x679fbc:c.instructions+=1;goto B679fbc;
case 0x679fbe:goto L679fbe;
case 0x679fc1:c.instructions+=3;goto B679fc1;
case 0x679fc4:c.instructions+=2;goto B679fc4;
case 0x679fc5:c.instructions+=1;goto B679fc5;
case 0x679fca:goto L679fca;
case 0x679fcc:c.instructions+=4;goto B679fcc;
case 0x679fce:c.instructions+=3;goto B679fce;
case 0x679fcf:c.instructions+=2;goto B679fcf;
case 0x679fd2:c.instructions+=1;goto B679fd2;
case 0x679fd8:goto L679fd8;
case 0x679fdb:c.instructions+=4;goto B679fdb;
case 0x679fdc:c.instructions+=3;goto B679fdc;
case 0x679fdd:c.instructions+=2;goto B679fdd;
case 0x679fdf:c.instructions+=1;goto B679fdf;
case 0x679fe4:goto L679fe4;
case 0x679fe6:c.instructions+=2;goto B679fe6;
case 0x679fe8:c.instructions+=1;goto B679fe8;
case 0x679fee:goto L679fee;
case 0x679ff0:c.instructions+=2;goto B679ff0;
case 0x679ff3:c.instructions+=1;goto B679ff3;
case 0x679ff5:goto L679ff5;
case 0x679ff9:c.instructions+=4;goto B679ff9;
case 0x679ffa:c.instructions+=3;goto B679ffa;
case 0x679ffc:c.instructions+=2;goto B679ffc;
case 0x679fff:c.instructions+=1;goto B679fff;
default:missing_instruction(c.pc);}
B679000:L679000:{c.instructions+=3;NFSU2_TR(0x679000);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B679001:{NFSU2_TR(0x679001);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B679004:{NFSU2_TR(0x679004);
if(r1(R+518)){{goto L6797f3;}}
}
B67900a:L67900a:{c.instructions+=6;NFSU2_TR(0x67900a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67900d:{NFSU2_TR(0x67900d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B679010:{NFSU2_TR(0x679010);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B679013:{NFSU2_TR(0x679013);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B679016:{NFSU2_TR(0x679016);
__builtin_memmove((R+0),(R+4),4);
}
B679018:{NFSU2_TR(0x679018);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B67901b:L67901b:{c.instructions+=1;NFSU2_TR(0x67901b);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L67901d;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67901bu);}goto L67901b;}
}
B67901d:L67901d:{c.instructions+=2;NFSU2_TR(0x67901d);
__builtin_memmove((R+4),(R+0),4);
}
B67901f:{NFSU2_TR(0x67901f);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B679022:L679022:{c.instructions+=1;NFSU2_TR(0x679022);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L679024;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x679022u);}goto L679022;}
}
B679024:L679024:{c.instructions+=3;NFSU2_TR(0x679024);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B679026:{NFSU2_TR(0x679026);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B679029:{NFSU2_TR(0x679029);
if(r1(R+518)){{goto L6792ee;}}
}
B67902f:L67902f:{c.instructions+=5;NFSU2_TR(0x67902f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B679032:{NFSU2_TR(0x679032);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B679035:{NFSU2_TR(0x679035);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B679038:{NFSU2_TR(0x679038);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67903b:{NFSU2_TR(0x67903b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L67904a;}}
}
B67903d:L67903d:{c.instructions+=2;NFSU2_TR(0x67903d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B679040:{NFSU2_TR(0x679040);
if(r1(R+518)){{goto L679047;}}
}
B679042:L679042:{c.instructions+=2;NFSU2_TR(0x679042);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B679045:{NFSU2_TR(0x679045);
{goto L67904a;}
}
B679047:L679047:{c.instructions+=1;NFSU2_TR(0x679047);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B67904a:L67904a:{c.instructions+=11;NFSU2_TR(0x67904a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B67904e:{NFSU2_TR(0x67904e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B679050:{NFSU2_TR(0x679050);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B679052:{NFSU2_TR(0x679052);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B679055:{NFSU2_TR(0x679055);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B679056:{NFSU2_TR(0x679056);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B679059:{NFSU2_TR(0x679059);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67905a:{NFSU2_TR(0x67905a);
u8 U[4];
w4(U+0,u32(0x10f00001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67905f:{NFSU2_TR(0x67905f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B679062:{NFSU2_TR(0x679062);
__builtin_memmove((R+4),(R+12),4);
}
B679064:{NFSU2_TR(0x679064);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x679069ull));
TAIL_STATIC(0x6758ceu,675);
}
B679069:L679069:{c.instructions+=3;NFSU2_TR(0x679069);
__builtin_memmove((R+24),(R+0),4);
}
B67906b:{NFSU2_TR(0x67906b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B67906d:{NFSU2_TR(0x67906d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6797f8;}}
}
B679073:L679073:{c.instructions+=3;NFSU2_TR(0x679073);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B679076:{NFSU2_TR(0x679076);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67907a:{NFSU2_TR(0x67907a);
if(r1(R+518)){{goto L679084;}}
}
B67907c:L67907c:{c.instructions+=2;NFSU2_TR(0x67907c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B679082:{NFSU2_TR(0x679082);
{goto L67908a;}
}
B679084:L679084:{c.instructions+=1;NFSU2_TR(0x679084);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67908a:L67908a:{c.instructions+=6;NFSU2_TR(0x67908a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67908e:{NFSU2_TR(0x67908e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B679091:{NFSU2_TR(0x679091);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B679094:{NFSU2_TR(0x679094);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B679097:{NFSU2_TR(0x679097);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67909a:{NFSU2_TR(0x67909a);
if(r1(R+518)){{goto L679111;}}
}
B67909c:L67909c:{c.instructions+=8;NFSU2_TR(0x67909c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67909f:{NFSU2_TR(0x67909f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6790a2:{NFSU2_TR(0x6790a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6790a5:{NFSU2_TR(0x6790a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6790a8:{NFSU2_TR(0x6790a8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6790ab:{NFSU2_TR(0x6790ab);
__builtin_memmove((R+4),(R+12),4);
}
B6790ad:{NFSU2_TR(0x6790ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6790b0:{NFSU2_TR(0x6790b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6790b5ull));
TAIL_STATIC(0x681bf8u,681);
}
B6790b5:L6790b5:{c.instructions+=3;NFSU2_TR(0x6790b5);
__builtin_memmove((R+24),(R+0),4);
}
B6790b7:{NFSU2_TR(0x6790b7);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6790b9:{NFSU2_TR(0x6790b9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6797f8;}}
}
B6790bf:L6790bf:{c.instructions+=7;NFSU2_TR(0x6790bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6790c2:{NFSU2_TR(0x6790c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6790c5:{NFSU2_TR(0x6790c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6790c8:{NFSU2_TR(0x6790c8);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6790cb:{NFSU2_TR(0x6790cb);
__builtin_memmove((R+4),(R+0),4);
}
B6790cd:{NFSU2_TR(0x6790cd);
__builtin_memmove((R+8),(R+4),4);
}
B6790cf:{NFSU2_TR(0x6790cf);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6790d2:L6790d2:{c.instructions+=1;NFSU2_TR(0x6790d2);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6790d4;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6790d2u);}goto L6790d2;}
}
B6790d4:L6790d4:{c.instructions+=2;NFSU2_TR(0x6790d4);
__builtin_memmove((R+4),(R+8),4);
}
B6790d6:{NFSU2_TR(0x6790d6);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6790d9:L6790d9:{c.instructions+=1;NFSU2_TR(0x6790d9);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6790db;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6790d9u);}goto L6790d9;}
}
B6790db:L6790db:{c.instructions+=4;NFSU2_TR(0x6790db);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6790de:{NFSU2_TR(0x6790de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6790e1:{NFSU2_TR(0x6790e1);
__builtin_memmove((R+4),(R+0),4);
}
B6790e3:{NFSU2_TR(0x6790e3);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6790e6:L6790e6:{c.instructions+=1;NFSU2_TR(0x6790e6);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6790e8;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6790e6u);}goto L6790e6;}
}
B6790e8:L6790e8:{c.instructions+=3;NFSU2_TR(0x6790e8);
__builtin_memmove((R+4),(R+0),4);
}
B6790ea:{NFSU2_TR(0x6790ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6790ed:{NFSU2_TR(0x6790ed);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6790f0:L6790f0:{c.instructions+=1;NFSU2_TR(0x6790f0);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6790f2;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6790f0u);}goto L6790f0;}
}
B6790f2:L6790f2:{c.instructions+=10;NFSU2_TR(0x6790f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6790f5:{NFSU2_TR(0x6790f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6790f8:{NFSU2_TR(0x6790f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6790fb:{NFSU2_TR(0x6790fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6790fe:{NFSU2_TR(0x6790fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B679102:{NFSU2_TR(0x679102);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B679105:{NFSU2_TR(0x679105);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B679108:{NFSU2_TR(0x679108);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B67910c:{NFSU2_TR(0x67910c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67910f:{NFSU2_TR(0x67910f);
{goto L67912b;}
}
B679111:L679111:{c.instructions+=6;NFSU2_TR(0x679111);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B679114:{NFSU2_TR(0x679114);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B679117:{NFSU2_TR(0x679117);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B67911a:{NFSU2_TR(0x67911a);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B67911d:{NFSU2_TR(0x67911d);
__builtin_memmove((R+0),(R+4),4);
}
B67911f:{NFSU2_TR(0x67911f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B679122:L679122:{c.instructions+=1;NFSU2_TR(0x679122);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L679124;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x679122u);}goto L679122;}
}
B679124:L679124:{c.instructions+=2;NFSU2_TR(0x679124);
__builtin_memmove((R+4),(R+0),4);
}
B679126:{NFSU2_TR(0x679126);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B679129:L679129:{c.instructions+=1;NFSU2_TR(0x679129);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L67912b;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x679129u);}goto L679129;}
}
B67912b:L67912b:{c.instructions+=2;NFSU2_TR(0x67912b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67912f:{NFSU2_TR(0x67912f);
if(r1(R+518)){{goto L6791ab;}}
}
B679131:L679131:{c.instructions+=10;NFSU2_TR(0x679131);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B679134:{NFSU2_TR(0x679134);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B679137:{NFSU2_TR(0x679137);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67913a:{NFSU2_TR(0x67913a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67913d:{NFSU2_TR(0x67913d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B67913f:{NFSU2_TR(0x67913f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B679142:{NFSU2_TR(0x679142);
__builtin_memmove((R+4),(R+12),4);
}
B679144:{NFSU2_TR(0x679144);
__builtin_memmove((R+0),(R+518),1);
}
B679147:{NFSU2_TR(0x679147);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67914a:{NFSU2_TR(0x67914a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67914full));
TAIL_STATIC(0x681bf8u,681);
}
B67914f:L67914f:{c.instructions+=3;NFSU2_TR(0x67914f);
__builtin_memmove((R+24),(R+0),4);
}
B679151:{NFSU2_TR(0x679151);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B679153:{NFSU2_TR(0x679153);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6797f8;}}
}
B679159:L679159:{c.instructions+=7;NFSU2_TR(0x679159);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67915c:{NFSU2_TR(0x67915c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B67915f:{NFSU2_TR(0x67915f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B679162:{NFSU2_TR(0x679162);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B679165:{NFSU2_TR(0x679165);
__builtin_memmove((R+4),(R+0),4);
}
B679167:{NFSU2_TR(0x679167);
__builtin_memmove((R+8),(R+4),4);
}
B679169:{NFSU2_TR(0x679169);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B67916c:L67916c:{c.instructions+=1;NFSU2_TR(0x67916c);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L67916e;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67916cu);}goto L67916c;}
}
B67916e:L67916e:{c.instructions+=2;NFSU2_TR(0x67916e);
__builtin_memmove((R+4),(R+8),4);
}
B679170:{NFSU2_TR(0x679170);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B679173:L679173:{c.instructions+=1;NFSU2_TR(0x679173);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L679175;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x679173u);}goto L679173;}
}
B679175:L679175:{c.instructions+=4;NFSU2_TR(0x679175);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B679178:{NFSU2_TR(0x679178);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B67917b:{NFSU2_TR(0x67917b);
__builtin_memmove((R+4),(R+0),4);
}
B67917d:{NFSU2_TR(0x67917d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B679180:L679180:{c.instructions+=1;NFSU2_TR(0x679180);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L679182;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x679180u);}goto L679180;}
}
B679182:L679182:{c.instructions+=3;NFSU2_TR(0x679182);
__builtin_memmove((R+4),(R+0),4);
}
B679184:{NFSU2_TR(0x679184);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B679187:{NFSU2_TR(0x679187);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B67918a:L67918a:{c.instructions+=1;NFSU2_TR(0x67918a);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L67918c;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67918au);}goto L67918a;}
}
B67918c:L67918c:{c.instructions+=10;NFSU2_TR(0x67918c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67918f:{NFSU2_TR(0x67918f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B679192:{NFSU2_TR(0x679192);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B679195:{NFSU2_TR(0x679195);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B679198:{NFSU2_TR(0x679198);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B67919c:{NFSU2_TR(0x67919c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67919f:{NFSU2_TR(0x67919f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6791a2:{NFSU2_TR(0x6791a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6791a6:{NFSU2_TR(0x6791a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6791a9:{NFSU2_TR(0x6791a9);
{goto L6791c5;}
}
B6791ab:L6791ab:{c.instructions+=6;NFSU2_TR(0x6791ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6791ae:{NFSU2_TR(0x6791ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6791b1:{NFSU2_TR(0x6791b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6791b4:{NFSU2_TR(0x6791b4);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6791b7:{NFSU2_TR(0x6791b7);
__builtin_memmove((R+0),(R+4),4);
}
B6791b9:{NFSU2_TR(0x6791b9);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6791bc:L6791bc:{c.instructions+=1;NFSU2_TR(0x6791bc);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6791be;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6791bcu);}goto L6791bc;}
}
B6791be:L6791be:{c.instructions+=2;NFSU2_TR(0x6791be);
__builtin_memmove((R+4),(R+0),4);
}
B6791c0:{NFSU2_TR(0x6791c0);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6791c3:L6791c3:{c.instructions+=1;NFSU2_TR(0x6791c3);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6791c5;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6791c3u);}goto L6791c3;}
}
B6791c5:L6791c5:{c.instructions+=5;NFSU2_TR(0x6791c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6791c8:{NFSU2_TR(0x6791c8);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6791ca:{NFSU2_TR(0x6791ca);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6791cc:{NFSU2_TR(0x6791cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6791cf:{NFSU2_TR(0x6791cf);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6791e9;}}
}
B6791d1:L6791d1:{c.instructions+=3;NFSU2_TR(0x6791d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6791d4:{NFSU2_TR(0x6791d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6791d7:{NFSU2_TR(0x6791d7);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B6791d9:L6791d9:{c.instructions+=3;NFSU2_TR(0x6791d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6791db:{NFSU2_TR(0x6791db);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(R+28))-u32(r4(U+12))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6791de:{NFSU2_TR(0x6791de);
if(r1(R+518)){{goto L6791e3;}}
}
B6791e0:L6791e0:{c.instructions+=1;NFSU2_TR(0x6791e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6791e3:L6791e3:{c.instructions+=3;NFSU2_TR(0x6791e3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6791e6:{NFSU2_TR(0x6791e6);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B6791e7:{NFSU2_TR(0x6791e7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6791d9u);}goto L6791d9;}}
}
B6791e9:L6791e9:{c.instructions+=6;NFSU2_TR(0x6791e9);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6791ec:{NFSU2_TR(0x6791ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6791ef:{NFSU2_TR(0x6791ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6791f2:{NFSU2_TR(0x6791f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6791f5:{NFSU2_TR(0x6791f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6791f8:{NFSU2_TR(0x6791f8);
if(r1(R+518)){{goto L679257;}}
}
B6791fa:L6791fa:{c.instructions+=2;NFSU2_TR(0x6791fa);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x10ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x10ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6791fe:{NFSU2_TR(0x6791fe);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L679212;}}
}
B679200:L679200:{c.instructions+=6;NFSU2_TR(0x679200);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B679203:{NFSU2_TR(0x679203);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B679206:{NFSU2_TR(0x679206);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B679209:{NFSU2_TR(0x679209);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B67920b:{NFSU2_TR(0x67920b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x20ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67920e:{NFSU2_TR(0x67920e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L679218;}}
}
B679210:L679210:{c.instructions+=1;NFSU2_TR(0x679210);
{goto L679215;}
}
B679212:L679212:{c.instructions+=1;NFSU2_TR(0x679212);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B679215:L679215:{c.instructions+=1;NFSU2_TR(0x679215);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B679218:L679218:{c.instructions+=2;NFSU2_TR(0x679218);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67921b:{NFSU2_TR(0x67921b);
if(r1(R+518)){{goto L67925a;}}
}
B67921d:L67921d:{c.instructions+=4;NFSU2_TR(0x67921d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B679220:{NFSU2_TR(0x679220);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B679223:{NFSU2_TR(0x679223);
__builtin_memmove((R+8),(R+0),4);
}
B679225:{NFSU2_TR(0x679225);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L679250;}}
}
B679227:L679227:{c.instructions+=2;NFSU2_TR(0x679227);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67922a:{NFSU2_TR(0x67922a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B67922d:L67922d:{c.instructions+=5;NFSU2_TR(0x67922d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+28),(U+0),4);
}
B67922f:{NFSU2_TR(0x67922f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B679231:{NFSU2_TR(0x679231);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xf0000000ull))));
}
B679237:{NFSU2_TR(0x679237);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67923d:{NFSU2_TR(0x67923d);
if(r1(R+518)){{goto L67924d;}}
}
B67923f:L67923f:{c.instructions+=5;NFSU2_TR(0x67923f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B679242:{NFSU2_TR(0x679242);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B679243:{NFSU2_TR(0x679243);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B679246:{NFSU2_TR(0x679246);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B679249:{NFSU2_TR(0x679249);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67922du);}goto L67922d;}}
}
B67924b:L67924b:{c.instructions+=1;NFSU2_TR(0x67924b);
{goto L679250;}
}
B67924d:L67924d:{c.instructions+=1;NFSU2_TR(0x67924d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B679250:L679250:{c.instructions+=2;NFSU2_TR(0x679250);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B679253:{NFSU2_TR(0x679253);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L67929a;}}
}
B679255:L679255:{c.instructions+=1;NFSU2_TR(0x679255);
{goto L67925a;}
}
B679257:L679257:{c.instructions+=1;NFSU2_TR(0x679257);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67925a:L67925a:{c.instructions+=2;NFSU2_TR(0x67925a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67925d:{NFSU2_TR(0x67925d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L67928d;}}
}
B67925f:L67925f:{c.instructions+=4;NFSU2_TR(0x67925f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B679262:{NFSU2_TR(0x679262);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B679265:{NFSU2_TR(0x679265);
__builtin_memmove((R+24),(R+0),4);
}
B679267:{NFSU2_TR(0x679267);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L67928d;}}
}
B679269:L679269:{c.instructions+=4;NFSU2_TR(0x679269);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67926c:{NFSU2_TR(0x67926c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67926f:{NFSU2_TR(0x67926f);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B679272:{NFSU2_TR(0x679272);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x679277ull));
TAIL_STATIC(0x69926eu,699);
}
B679277:L679277:{c.instructions+=2;NFSU2_TR(0x679277);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B679279:{NFSU2_TR(0x679279);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L679286;}}
}
B67927b:L67927b:{c.instructions+=4;NFSU2_TR(0x67927b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67927e:{NFSU2_TR(0x67927e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B67927f:{NFSU2_TR(0x67927f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B679282:{NFSU2_TR(0x679282);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x679269u);}goto L679269;}}
}
B679284:L679284:{c.instructions+=1;NFSU2_TR(0x679284);
{goto L67928d;}
}
B679286:L679286:{c.instructions+=1;NFSU2_TR(0x679286);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B67928d:L67928d:{c.instructions+=2;NFSU2_TR(0x67928d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B679291:{NFSU2_TR(0x679291);
if(r1(R+518)){{goto L67951f;}}
}
B679297:L679297:{c.instructions+=1;NFSU2_TR(0x679297);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67929a:L67929a:{c.instructions+=4;NFSU2_TR(0x67929a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67929d:{NFSU2_TR(0x67929d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6792a0:{NFSU2_TR(0x6792a0);
__builtin_memmove((R+24),(R+0),4);
}
B6792a2:{NFSU2_TR(0x6792a2);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6792ce;}}
}
B6792a4:L6792a4:{c.instructions+=5;NFSU2_TR(0x6792a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6792a7:{NFSU2_TR(0x6792a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6792aa:{NFSU2_TR(0x6792aa);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6792ad:{NFSU2_TR(0x6792ad);
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
B6792af:{NFSU2_TR(0x6792af);
if(r1(R+518)){{goto L6792bb;}}
}
B6792b1:L6792b1:{c.instructions+=2;NFSU2_TR(0x6792b1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6792b3:{NFSU2_TR(0x6792b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6792b8ull));
TAIL_STATIC(0x6739efu,673);
}
B6792b8:L6792b8:{c.instructions+=1;NFSU2_TR(0x6792b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6792bb:L6792bb:{c.instructions+=7;NFSU2_TR(0x6792bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6792be:{NFSU2_TR(0x6792be);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6792c1:{NFSU2_TR(0x6792c1);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+8,u32(u32(r4(U+8))&u32(u32(0x0ull))));
s4(u32(r4(U+4)),r4(U+8));
}
B6792c5:{NFSU2_TR(0x6792c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6792c8:{NFSU2_TR(0x6792c8);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6792c9:{NFSU2_TR(0x6792c9);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B6792cc:{NFSU2_TR(0x6792cc);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6792a4u);}goto L6792a4;}}
}
B6792ce:L6792ce:{c.instructions+=8;NFSU2_TR(0x6792ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6792d1:{NFSU2_TR(0x6792d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6792d4:{NFSU2_TR(0x6792d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6792d7:{NFSU2_TR(0x6792d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6792da:{NFSU2_TR(0x6792da);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6792dd:{NFSU2_TR(0x6792dd);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6792e0:{NFSU2_TR(0x6792e0);
__builtin_memmove((R+0),(R+4),4);
}
B6792e2:{NFSU2_TR(0x6792e2);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6792e5:L6792e5:{c.instructions+=1;NFSU2_TR(0x6792e5);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6792e7;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6792e5u);}goto L6792e5;}
}
B6792e7:L6792e7:{c.instructions+=2;NFSU2_TR(0x6792e7);
__builtin_memmove((R+4),(R+0),4);
}
B6792e9:{NFSU2_TR(0x6792e9);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6792ec:L6792ec:{c.instructions+=1;NFSU2_TR(0x6792ec);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6792ee;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6792ecu);}goto L6792ec;}
}
B6792ee:L6792ee:{c.instructions+=2;NFSU2_TR(0x6792ee);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6792f2:{NFSU2_TR(0x6792f2);
if(r1(R+518)){{goto L67951f;}}
}
B6792f8:L6792f8:{c.instructions+=2;NFSU2_TR(0x6792f8);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6792fc:{NFSU2_TR(0x6792fc);
if(r1(R+518)){{goto L6793ac;}}
}
B679302:L679302:{c.instructions+=5;NFSU2_TR(0x679302);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B679304:{NFSU2_TR(0x679304);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((R+0),(U+0),4);
}
B679307:{NFSU2_TR(0x679307);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B679308:{NFSU2_TR(0x679308);
__builtin_memmove((R+4),(R+12),4);
}
B67930a:{NFSU2_TR(0x67930a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67930full));
TAIL_STATIC(0x673b2cu,673);
}
B67930f:L67930f:{c.instructions+=3;NFSU2_TR(0x67930f);
__builtin_memmove((R+24),(R+0),4);
}
B679311:{NFSU2_TR(0x679311);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B679313:{NFSU2_TR(0x679313);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6797f8;}}
}
B679319:L679319:{c.instructions+=3;NFSU2_TR(0x679319);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67931d:{NFSU2_TR(0x67931d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B679320:{NFSU2_TR(0x679320);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L679325;}}
}
B679322:L679322:{c.instructions+=1;NFSU2_TR(0x679322);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B679325:L679325:{c.instructions+=10;NFSU2_TR(0x679325);
u8 U[4];
w4(U+0,u32(0x17ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B679327:{NFSU2_TR(0x679327);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B679328:{NFSU2_TR(0x679328);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((R+0),(U+0),4);
}
B67932b:{NFSU2_TR(0x67932b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67932c:{NFSU2_TR(0x67932c);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((R+0),(U+0),4);
}
B67932f:{NFSU2_TR(0x67932f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B679330:{NFSU2_TR(0x679330);
u8 U[4];
w4(U+0,u32(0x20500001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B679335:{NFSU2_TR(0x679335);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B679338:{NFSU2_TR(0x679338);
__builtin_memmove((R+4),(R+12),4);
}
B67933a:{NFSU2_TR(0x67933a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67933full));
TAIL_STATIC(0x6758ceu,675);
}
B67933f:L67933f:{c.instructions+=3;NFSU2_TR(0x67933f);
__builtin_memmove((R+24),(R+0),4);
}
B679341:{NFSU2_TR(0x679341);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B679343:{NFSU2_TR(0x679343);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6797f8;}}
}
B679349:L679349:{c.instructions+=4;NFSU2_TR(0x679349);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67934c:{NFSU2_TR(0x67934c);
__builtin_memmove((R+4),(R+12),4);
}
B67934e:{NFSU2_TR(0x67934e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B679351:{NFSU2_TR(0x679351);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x679356ull));
TAIL_STATIC(0x681bf8u,681);
}
B679356:L679356:{c.instructions+=3;NFSU2_TR(0x679356);
__builtin_memmove((R+24),(R+0),4);
}
B679358:{NFSU2_TR(0x679358);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B67935a:{NFSU2_TR(0x67935a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6797f8;}}
}
B679360:L679360:{c.instructions+=7;NFSU2_TR(0x679360);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B679363:{NFSU2_TR(0x679363);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B679366:{NFSU2_TR(0x679366);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B679369:{NFSU2_TR(0x679369);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B67936c:{NFSU2_TR(0x67936c);
__builtin_memmove((R+4),(R+0),4);
}
B67936e:{NFSU2_TR(0x67936e);
__builtin_memmove((R+8),(R+4),4);
}
B679370:{NFSU2_TR(0x679370);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B679373:L679373:{c.instructions+=1;NFSU2_TR(0x679373);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L679375;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x679373u);}goto L679373;}
}
B679375:L679375:{c.instructions+=2;NFSU2_TR(0x679375);
__builtin_memmove((R+4),(R+8),4);
}
B679377:{NFSU2_TR(0x679377);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B67937a:L67937a:{c.instructions+=1;NFSU2_TR(0x67937a);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L67937c;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67937au);}goto L67937a;}
}
B67937c:L67937c:{c.instructions+=4;NFSU2_TR(0x67937c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B67937f:{NFSU2_TR(0x67937f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B679382:{NFSU2_TR(0x679382);
__builtin_memmove((R+4),(R+0),4);
}
B679384:{NFSU2_TR(0x679384);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B679387:L679387:{c.instructions+=1;NFSU2_TR(0x679387);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L679389;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x679387u);}goto L679387;}
}
B679389:L679389:{c.instructions+=2;NFSU2_TR(0x679389);
__builtin_memmove((R+4),(R+0),4);
}
B67938b:{NFSU2_TR(0x67938b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B67938e:L67938e:{c.instructions+=1;NFSU2_TR(0x67938e);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L679390;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67938eu);}goto L67938e;}
}
B679390:L679390:{c.instructions+=9;NFSU2_TR(0x679390);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B679393:{NFSU2_TR(0x679393);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B679396:{NFSU2_TR(0x679396);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B679399:{NFSU2_TR(0x679399);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B67939d:{NFSU2_TR(0x67939d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6793a0:{NFSU2_TR(0x6793a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6793a3:{NFSU2_TR(0x6793a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6793a7:{NFSU2_TR(0x6793a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6793aa:{NFSU2_TR(0x6793aa);
{goto L6793c6;}
}
B6793ac:L6793ac:{c.instructions+=6;NFSU2_TR(0x6793ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6793af:{NFSU2_TR(0x6793af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6793b2:{NFSU2_TR(0x6793b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6793b5:{NFSU2_TR(0x6793b5);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6793b8:{NFSU2_TR(0x6793b8);
__builtin_memmove((R+0),(R+4),4);
}
B6793ba:{NFSU2_TR(0x6793ba);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6793bd:L6793bd:{c.instructions+=1;NFSU2_TR(0x6793bd);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6793bf;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6793bdu);}goto L6793bd;}
}
B6793bf:L6793bf:{c.instructions+=2;NFSU2_TR(0x6793bf);
__builtin_memmove((R+4),(R+0),4);
}
B6793c1:{NFSU2_TR(0x6793c1);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6793c4:L6793c4:{c.instructions+=1;NFSU2_TR(0x6793c4);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6793c6;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6793c4u);}goto L6793c4;}
}
B6793c6:L6793c6:{c.instructions+=2;NFSU2_TR(0x6793c6);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6793ca:{NFSU2_TR(0x6793ca);
if(r1(R+518)){{goto L67947a;}}
}
B6793d0:L6793d0:{c.instructions+=5;NFSU2_TR(0x6793d0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6793d2:{NFSU2_TR(0x6793d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((R+0),(U+0),4);
}
B6793d5:{NFSU2_TR(0x6793d5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6793d6:{NFSU2_TR(0x6793d6);
__builtin_memmove((R+4),(R+12),4);
}
B6793d8:{NFSU2_TR(0x6793d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6793ddull));
TAIL_STATIC(0x673b2cu,673);
}
B6793dd:L6793dd:{c.instructions+=3;NFSU2_TR(0x6793dd);
__builtin_memmove((R+24),(R+0),4);
}
B6793df:{NFSU2_TR(0x6793df);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6793e1:{NFSU2_TR(0x6793e1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6797f8;}}
}
B6793e7:L6793e7:{c.instructions+=3;NFSU2_TR(0x6793e7);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6793eb:{NFSU2_TR(0x6793eb);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6793ee:{NFSU2_TR(0x6793ee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6793f3;}}
}
B6793f0:L6793f0:{c.instructions+=1;NFSU2_TR(0x6793f0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B6793f3:L6793f3:{c.instructions+=10;NFSU2_TR(0x6793f3);
u8 U[4];
w4(U+0,u32(0x17ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6793f5:{NFSU2_TR(0x6793f5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6793f6:{NFSU2_TR(0x6793f6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6793f9:{NFSU2_TR(0x6793f9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6793fa:{NFSU2_TR(0x6793fa);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((R+0),(U+0),4);
}
B6793fd:{NFSU2_TR(0x6793fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6793fe:{NFSU2_TR(0x6793fe);
u8 U[4];
w4(U+0,u32(0x20500001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B679403:{NFSU2_TR(0x679403);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B679406:{NFSU2_TR(0x679406);
__builtin_memmove((R+4),(R+12),4);
}
B679408:{NFSU2_TR(0x679408);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67940dull));
TAIL_STATIC(0x6758ceu,675);
}
B67940d:L67940d:{c.instructions+=3;NFSU2_TR(0x67940d);
__builtin_memmove((R+24),(R+0),4);
}
B67940f:{NFSU2_TR(0x67940f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B679411:{NFSU2_TR(0x679411);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6797f8;}}
}
B679417:L679417:{c.instructions+=4;NFSU2_TR(0x679417);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67941a:{NFSU2_TR(0x67941a);
__builtin_memmove((R+4),(R+12),4);
}
B67941c:{NFSU2_TR(0x67941c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67941f:{NFSU2_TR(0x67941f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x679424ull));
TAIL_STATIC(0x681bf8u,681);
}
B679424:L679424:{c.instructions+=3;NFSU2_TR(0x679424);
__builtin_memmove((R+24),(R+0),4);
}
B679426:{NFSU2_TR(0x679426);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B679428:{NFSU2_TR(0x679428);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6797f8;}}
}
B67942e:L67942e:{c.instructions+=7;NFSU2_TR(0x67942e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B679431:{NFSU2_TR(0x679431);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B679434:{NFSU2_TR(0x679434);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B679437:{NFSU2_TR(0x679437);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B67943a:{NFSU2_TR(0x67943a);
__builtin_memmove((R+4),(R+0),4);
}
B67943c:{NFSU2_TR(0x67943c);
__builtin_memmove((R+8),(R+4),4);
}
B67943e:{NFSU2_TR(0x67943e);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B679441:L679441:{c.instructions+=1;NFSU2_TR(0x679441);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L679443;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x679441u);}goto L679441;}
}
B679443:L679443:{c.instructions+=2;NFSU2_TR(0x679443);
__builtin_memmove((R+4),(R+8),4);
}
B679445:{NFSU2_TR(0x679445);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B679448:L679448:{c.instructions+=1;NFSU2_TR(0x679448);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L67944a;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x679448u);}goto L679448;}
}
B67944a:L67944a:{c.instructions+=4;NFSU2_TR(0x67944a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B67944d:{NFSU2_TR(0x67944d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B679450:{NFSU2_TR(0x679450);
__builtin_memmove((R+4),(R+0),4);
}
B679452:{NFSU2_TR(0x679452);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B679455:L679455:{c.instructions+=1;NFSU2_TR(0x679455);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L679457;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x679455u);}goto L679455;}
}
B679457:L679457:{c.instructions+=2;NFSU2_TR(0x679457);
__builtin_memmove((R+4),(R+0),4);
}
B679459:{NFSU2_TR(0x679459);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B67945c:L67945c:{c.instructions+=1;NFSU2_TR(0x67945c);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L67945e;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67945cu);}goto L67945c;}
}
B67945e:L67945e:{c.instructions+=10;NFSU2_TR(0x67945e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B679461:{NFSU2_TR(0x679461);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B679464:{NFSU2_TR(0x679464);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B679467:{NFSU2_TR(0x679467);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67946a:{NFSU2_TR(0x67946a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67946d:{NFSU2_TR(0x67946d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B67946f:{NFSU2_TR(0x67946f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B679472:{NFSU2_TR(0x679472);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B679475:{NFSU2_TR(0x679475);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B679478:{NFSU2_TR(0x679478);
{goto L679496;}
}
B67947a:L67947a:{c.instructions+=6;NFSU2_TR(0x67947a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67947d:{NFSU2_TR(0x67947d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B679480:{NFSU2_TR(0x679480);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B679483:{NFSU2_TR(0x679483);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B679486:{NFSU2_TR(0x679486);
__builtin_memmove((R+0),(R+4),4);
}
B679488:{NFSU2_TR(0x679488);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B67948b:L67948b:{c.instructions+=1;NFSU2_TR(0x67948b);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L67948d;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67948bu);}goto L67948b;}
}
B67948d:L67948d:{c.instructions+=2;NFSU2_TR(0x67948d);
__builtin_memmove((R+4),(R+0),4);
}
B67948f:{NFSU2_TR(0x67948f);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B679492:L679492:{c.instructions+=1;NFSU2_TR(0x679492);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L679494;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x679492u);}goto L679492;}
}
B679494:L679494:{c.instructions+=1;NFSU2_TR(0x679494);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B679496:L679496:{c.instructions+=4;NFSU2_TR(0x679496);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B679499:{NFSU2_TR(0x679499);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67949c:{NFSU2_TR(0x67949c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67949f:{NFSU2_TR(0x67949f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L67977b;}}
}
B6794a5:L6794a5:{c.instructions+=6;NFSU2_TR(0x6794a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6794a8:{NFSU2_TR(0x6794a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6794ab:{NFSU2_TR(0x6794ab);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B6794ad:{NFSU2_TR(0x6794ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6794b0:{NFSU2_TR(0x6794b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6794b3:{NFSU2_TR(0x6794b3);
{goto L6794b8;}
}
B6794b5:L6794b5:{c.instructions+=1;NFSU2_TR(0x6794b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6794b8:L6794b8:{c.instructions+=6;NFSU2_TR(0x6794b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6794ba:{NFSU2_TR(0x6794ba);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B6794bc:{NFSU2_TR(0x6794bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6794bf:{NFSU2_TR(0x6794bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6794c1:{NFSU2_TR(0x6794c1);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6794c3:{NFSU2_TR(0x6794c3);
if(r1(R+518)){{goto L67950b;}}
}
B6794c5:L6794c5:{c.instructions+=2;NFSU2_TR(0x6794c5);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6794c8:{NFSU2_TR(0x6794c8);
if(r1(R+518)){{goto L6794fd;}}
}
B6794ca:L6794ca:{c.instructions+=6;NFSU2_TR(0x6794ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6794cd:{NFSU2_TR(0x6794cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6794d0:{NFSU2_TR(0x6794d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6794d3:{NFSU2_TR(0x6794d3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6794d6:{NFSU2_TR(0x6794d6);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6794d9:{NFSU2_TR(0x6794d9);
if(r1(R+518)){{goto L6794fd;}}
}
B6794db:L6794db:{c.instructions+=2;NFSU2_TR(0x6794db);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6794de:{NFSU2_TR(0x6794de);
if(r1(R+518)){{goto L6794ed;}}
}
B6794e0:L6794e0:{c.instructions+=3;NFSU2_TR(0x6794e0);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6794e3:{NFSU2_TR(0x6794e3);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6794e6:{NFSU2_TR(0x6794e6);
if(r1(R+518)){{goto L6794ed;}}
}
B6794e8:L6794e8:{c.instructions+=2;NFSU2_TR(0x6794e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6794eb:{NFSU2_TR(0x6794eb);
{goto L67950b;}
}
B6794ed:L6794ed:{c.instructions+=6;NFSU2_TR(0x6794ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6794f0:{NFSU2_TR(0x6794f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6794f3:{NFSU2_TR(0x6794f3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6794f5:{NFSU2_TR(0x6794f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6794f8:{NFSU2_TR(0x6794f8);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6794fb:{NFSU2_TR(0x6794fb);
{goto L67950b;}
}
B6794fd:L6794fd:{c.instructions+=5;NFSU2_TR(0x6794fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B679500:{NFSU2_TR(0x679500);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B679503:{NFSU2_TR(0x679503);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B679505:{NFSU2_TR(0x679505);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B679508:{NFSU2_TR(0x679508);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B67950b:L67950b:{c.instructions+=7;NFSU2_TR(0x67950b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B67950e:{NFSU2_TR(0x67950e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B679511:{NFSU2_TR(0x679511);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B679514:{NFSU2_TR(0x679514);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B679517:{NFSU2_TR(0x679517);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B67951a:{NFSU2_TR(0x67951a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67951d:{NFSU2_TR(0x67951d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6794b5u);}goto L6794b5;}}
}
B67951f:L67951f:{c.instructions+=2;NFSU2_TR(0x67951f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B679523:{NFSU2_TR(0x679523);
if(r1(R+518)){{goto L67977b;}}
}
B679529:L679529:{c.instructions+=5;NFSU2_TR(0x679529);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B67952c:{NFSU2_TR(0x67952c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B67952f:{NFSU2_TR(0x67952f);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B679532:{NFSU2_TR(0x679532);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B679533:{NFSU2_TR(0x679533);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x679538ull));
TAIL_STATIC(0x575620u,575);
}
B679538:L679538:{c.instructions+=5;NFSU2_TR(0x679538);
__builtin_memmove((R+8),(R+0),4);
}
B67953a:{NFSU2_TR(0x67953a);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B67953c:{NFSU2_TR(0x67953c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B67953d:{NFSU2_TR(0x67953d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B679540:{NFSU2_TR(0x679540);
if(r1(R+518)){{goto L6797f3;}}
}
B679546:L679546:{c.instructions+=3;NFSU2_TR(0x679546);
__builtin_memmove((R+4),(R+28),4);
}
B679548:{NFSU2_TR(0x679548);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B67954a:{NFSU2_TR(0x67954a);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B67954d:L67954d:{c.instructions+=5;NFSU2_TR(0x67954d);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff84ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B679551:{NFSU2_TR(0x679551);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B679552:{NFSU2_TR(0x679552);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B679554:{NFSU2_TR(0x679554);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x6ull))));
}
B679557:{NFSU2_TR(0x679557);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67954du);}goto L67954d;}}
}
B679559:L679559:{c.instructions+=3;NFSU2_TR(0x679559);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67955d:{NFSU2_TR(0x67955d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B679560:{NFSU2_TR(0x679560);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6795f7;}}
}
B679566:L679566:{c.instructions+=12;NFSU2_TR(0x679566);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B679569:{NFSU2_TR(0x679569);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B67956c:{NFSU2_TR(0x67956c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67956f:{NFSU2_TR(0x67956f);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B679571:{NFSU2_TR(0x679571);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B679574:{NFSU2_TR(0x679574);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B679577:{NFSU2_TR(0x679577);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+24))));
}
B679579:{NFSU2_TR(0x679579);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B67957b:{NFSU2_TR(0x67957b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67957e:{NFSU2_TR(0x67957e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B679581:{NFSU2_TR(0x679581);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B679584:{NFSU2_TR(0x679584);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B679587:L679587:{c.instructions+=5;NFSU2_TR(0x679587);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B67958a:{NFSU2_TR(0x67958a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67958d:{NFSU2_TR(0x67958d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B67958f:{NFSU2_TR(0x67958f);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+8))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B679591:{NFSU2_TR(0x679591);
if(r1(R+518)){{goto L6795ef;}}
}
B679593:L679593:{c.instructions+=3;NFSU2_TR(0x679593);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B679597:{NFSU2_TR(0x679597);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67959a:{NFSU2_TR(0x67959a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L67959f;}}
}
B67959c:L67959c:{c.instructions+=1;NFSU2_TR(0x67959c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67959f:L67959f:{c.instructions+=6;NFSU2_TR(0x67959f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6795a2:{NFSU2_TR(0x6795a2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6795a5:{NFSU2_TR(0x6795a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6795a8:{NFSU2_TR(0x6795a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6795aa:{NFSU2_TR(0x6795aa);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6795ad:{NFSU2_TR(0x6795ad);
if(r1(R+518)){{goto L6795c0;}}
}
B6795af:L6795af:{c.instructions+=6;NFSU2_TR(0x6795af);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6795b2:{NFSU2_TR(0x6795b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6795b5:{NFSU2_TR(0x6795b5);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6795b8:{NFSU2_TR(0x6795b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6795bb:{NFSU2_TR(0x6795bb);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6795be:{NFSU2_TR(0x6795be);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6795c3;}}
}
B6795c0:L6795c0:{c.instructions+=1;NFSU2_TR(0x6795c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6795c3:L6795c3:{c.instructions+=4;NFSU2_TR(0x6795c3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6795c5:{NFSU2_TR(0x6795c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6795c7:{NFSU2_TR(0x6795c7);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6795ca:{NFSU2_TR(0x6795ca);
if(r1(R+518)){{goto L6795dd;}}
}
B6795cc:L6795cc:{c.instructions+=6;NFSU2_TR(0x6795cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6795cf:{NFSU2_TR(0x6795cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6795d2:{NFSU2_TR(0x6795d2);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6795d5:{NFSU2_TR(0x6795d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6795d8:{NFSU2_TR(0x6795d8);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6795db:{NFSU2_TR(0x6795db);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6795e0;}}
}
B6795dd:L6795dd:{c.instructions+=1;NFSU2_TR(0x6795dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6795e0:L6795e0:{c.instructions+=5;NFSU2_TR(0x6795e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6795e3:{NFSU2_TR(0x6795e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6795e6:{NFSU2_TR(0x6795e6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6795e9:{NFSU2_TR(0x6795e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6795ec:{NFSU2_TR(0x6795ec);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6795ef:L6795ef:{c.instructions+=3;NFSU2_TR(0x6795ef);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B6795f2:{NFSU2_TR(0x6795f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6795f5:{NFSU2_TR(0x6795f5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x679587u);}goto L679587;}}
}
B6795f7:L6795f7:{c.instructions+=3;NFSU2_TR(0x6795f7);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6795fb:{NFSU2_TR(0x6795fb);
__builtin_memmove((R+4),(R+12),4);
}
B6795fd:{NFSU2_TR(0x6795fd);
if(r1(R+518)){{goto L679619;}}
}
B6795ff:L6795ff:{c.instructions+=7;NFSU2_TR(0x6795ff);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B679600:{NFSU2_TR(0x679600);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B679603:{NFSU2_TR(0x679603);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B679606:{NFSU2_TR(0x679606);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B679609:{NFSU2_TR(0x679609);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67960c:{NFSU2_TR(0x67960c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67960f:{NFSU2_TR(0x67960f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x679614ull));
TAIL_STATIC(0x6779e0u,677);
}
B679614:L679614:{c.instructions+=1;NFSU2_TR(0x679614);
{goto L67970f;}
}
B679619:L679619:{c.instructions+=15;NFSU2_TR(0x679619);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B67961c:{NFSU2_TR(0x67961c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67961f:{NFSU2_TR(0x67961f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B679621:{NFSU2_TR(0x679621);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B679623:{NFSU2_TR(0x679623);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B679626:{NFSU2_TR(0x679626);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xfffffull))));
}
B67962c:{NFSU2_TR(0x67962c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67962f:{NFSU2_TR(0x67962f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B679632:{NFSU2_TR(0x679632);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x13ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x10ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B679636:{NFSU2_TR(0x679636);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B679639:{NFSU2_TR(0x679639);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67963c:{NFSU2_TR(0x67963c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67963f:{NFSU2_TR(0x67963f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B679642:{NFSU2_TR(0x679642);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B679645:{NFSU2_TR(0x679645);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67964aull));
TAIL_STATIC(0x6758ceu,675);
}
B67964a:L67964a:{c.instructions+=3;NFSU2_TR(0x67964a);
__builtin_memmove((R+24),(R+0),4);
}
B67964c:{NFSU2_TR(0x67964c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B67964e:{NFSU2_TR(0x67964e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6797f8;}}
}
B679654:L679654:{c.instructions+=3;NFSU2_TR(0x679654);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B679656:{NFSU2_TR(0x679656);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B679659:{NFSU2_TR(0x679659);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L679679;}}
}
B67965b:L67965b:{c.instructions+=10;NFSU2_TR(0x67965b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67965e:{NFSU2_TR(0x67965e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B679661:{NFSU2_TR(0x679661);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B679664:{NFSU2_TR(0x679664);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B679667:{NFSU2_TR(0x679667);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B67966a:{NFSU2_TR(0x67966a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B679670:{NFSU2_TR(0x679670);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B679671:{NFSU2_TR(0x679671);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B679674:{NFSU2_TR(0x679674);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B679677:{NFSU2_TR(0x679677);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67965bu);}goto L67965b;}}
}
B679679:L679679:{c.instructions+=15;NFSU2_TR(0x679679);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67967c:{NFSU2_TR(0x67967c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67967f:{NFSU2_TR(0x67967f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B679681:{NFSU2_TR(0x679681);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B679682:{NFSU2_TR(0x679682);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B679684:{NFSU2_TR(0x679684);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B679687:{NFSU2_TR(0x679687);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B679688:{NFSU2_TR(0x679688);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67968b:{NFSU2_TR(0x67968b);
__builtin_memmove((R+4),(R+518),1);
}
B67968e:{NFSU2_TR(0x67968e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B679691:{NFSU2_TR(0x679691);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B679694:{NFSU2_TR(0x679694);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B679697:{NFSU2_TR(0x679697);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67969a:{NFSU2_TR(0x67969a);
__builtin_memmove((R+4),(R+12),4);
}
B67969c:{NFSU2_TR(0x67969c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6796a1ull));
TAIL_STATIC(0x6758ceu,675);
}
B6796a1:L6796a1:{c.instructions+=3;NFSU2_TR(0x6796a1);
__builtin_memmove((R+24),(R+0),4);
}
B6796a3:{NFSU2_TR(0x6796a3);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6796a5:{NFSU2_TR(0x6796a5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6797f8;}}
}
B6796ab:L6796ab:{c.instructions+=3;NFSU2_TR(0x6796ab);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6796ad:{NFSU2_TR(0x6796ad);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6796b0:{NFSU2_TR(0x6796b0);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6796d0;}}
}
B6796b2:L6796b2:{c.instructions+=10;NFSU2_TR(0x6796b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6796b5:{NFSU2_TR(0x6796b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6796b8:{NFSU2_TR(0x6796b8);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6796bb:{NFSU2_TR(0x6796bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6796be:{NFSU2_TR(0x6796be);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6796c1:{NFSU2_TR(0x6796c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6796c7:{NFSU2_TR(0x6796c7);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6796c8:{NFSU2_TR(0x6796c8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6796cb:{NFSU2_TR(0x6796cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6796ce:{NFSU2_TR(0x6796ce);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6796b2u);}goto L6796b2;}}
}
B6796d0:L6796d0:{c.instructions+=8;NFSU2_TR(0x6796d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6796d3:{NFSU2_TR(0x6796d3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6796d6:{NFSU2_TR(0x6796d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6796d9:{NFSU2_TR(0x6796d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6796dc:{NFSU2_TR(0x6796dc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6796df:{NFSU2_TR(0x6796df);
__builtin_memmove((R+4),(R+12),4);
}
B6796e1:{NFSU2_TR(0x6796e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6796e4:{NFSU2_TR(0x6796e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6796e9ull));
TAIL_STATIC(0x673b2cu,673);
}
B6796e9:L6796e9:{c.instructions+=3;NFSU2_TR(0x6796e9);
__builtin_memmove((R+24),(R+0),4);
}
B6796eb:{NFSU2_TR(0x6796eb);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6796ed:{NFSU2_TR(0x6796ed);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6797f8;}}
}
B6796f3:L6796f3:{c.instructions+=9;NFSU2_TR(0x6796f3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6796f5:{NFSU2_TR(0x6796f5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6796f8:{NFSU2_TR(0x6796f8);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0x20700000ull))));
}
B6796fe:{NFSU2_TR(0x6796fe);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B679701:{NFSU2_TR(0x679701);
__builtin_memmove((R+4),(R+12),4);
}
B679703:{NFSU2_TR(0x679703);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B679706:{NFSU2_TR(0x679706);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B679707:{NFSU2_TR(0x679707);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67970a:{NFSU2_TR(0x67970a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67970full));
TAIL_STATIC(0x6758ceu,675);
}
B67970f:L67970f:{c.instructions+=3;NFSU2_TR(0x67970f);
__builtin_memmove((R+24),(R+0),4);
}
B679711:{NFSU2_TR(0x679711);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B679713:{NFSU2_TR(0x679713);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6797f8;}}
}
B679719:L679719:{c.instructions+=4;NFSU2_TR(0x679719);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B67971b:{NFSU2_TR(0x67971b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67971e:{NFSU2_TR(0x67971e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B679721:{NFSU2_TR(0x679721);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L67977b;}}
}
B679723:L679723:{c.instructions+=4;NFSU2_TR(0x679723);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B679726:{NFSU2_TR(0x679726);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B679729:{NFSU2_TR(0x679729);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B67972c:{NFSU2_TR(0x67972c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67972f:L67972f:{c.instructions+=5;NFSU2_TR(0x67972f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B679732:{NFSU2_TR(0x679732);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B679735:{NFSU2_TR(0x679735);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B679737:{NFSU2_TR(0x679737);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(R+24))-u32(r4(U+12))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B67973a:{NFSU2_TR(0x67973a);
if(r1(R+518)){{goto L679772;}}
}
B67973c:L67973c:{c.instructions+=8;NFSU2_TR(0x67973c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67973f:{NFSU2_TR(0x67973f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B679741:{NFSU2_TR(0x679741);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B679744:{NFSU2_TR(0x679744);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B679747:{NFSU2_TR(0x679747);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67974a:{NFSU2_TR(0x67974a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B67974d:{NFSU2_TR(0x67974d);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B679750:{NFSU2_TR(0x679750);
if(r1(R+518)){{goto L67975c;}}
}
B679752:L679752:{c.instructions+=3;NFSU2_TR(0x679752);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B679755:{NFSU2_TR(0x679755);
__builtin_memmove((R+4),(R+24),4);
}
B679757:{NFSU2_TR(0x679757);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67975cull));
TAIL_STATIC(0x699821u,699);
}
B67975c:L67975c:{c.instructions+=8;NFSU2_TR(0x67975c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B67975e:{NFSU2_TR(0x67975e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B679761:{NFSU2_TR(0x679761);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B679764:{NFSU2_TR(0x679764);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B679767:{NFSU2_TR(0x679767);
__builtin_memmove((R+4),(R+8),4);
}
B679769:{NFSU2_TR(0x679769);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67976c:{NFSU2_TR(0x67976c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67976f:{NFSU2_TR(0x67976f);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B679772:L679772:{c.instructions+=4;NFSU2_TR(0x679772);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B679773:{NFSU2_TR(0x679773);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B679776:{NFSU2_TR(0x679776);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B679779:{NFSU2_TR(0x679779);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67972fu);}goto L67972f;}}
}
B67977b:L67977b:{c.instructions+=3;NFSU2_TR(0x67977b);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B67977d:{NFSU2_TR(0x67977d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B679780:{NFSU2_TR(0x679780);
if(r1(R+518)){{goto L67978c;}}
}
B679782:L679782:{c.instructions+=2;NFSU2_TR(0x679782);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B679785:{NFSU2_TR(0x679785);
if(r1(R+518)){{goto L67978c;}}
}
B679787:L679787:{c.instructions+=3;NFSU2_TR(0x679787);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B679789:{NFSU2_TR(0x679789);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B67978a:{NFSU2_TR(0x67978a);
{goto L67978e;}
}
B67978c:L67978c:{c.instructions+=1;NFSU2_TR(0x67978c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B67978e:L67978e:{c.instructions+=4;NFSU2_TR(0x67978e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B679791:{NFSU2_TR(0x679791);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B679793:{NFSU2_TR(0x679793);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B679796:{NFSU2_TR(0x679796);
if(r1(R+518)){{goto L6797a2;}}
}
B679798:L679798:{c.instructions+=2;NFSU2_TR(0x679798);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67979b:{NFSU2_TR(0x67979b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6797b0;}}
}
B67979d:L67979d:{c.instructions+=2;NFSU2_TR(0x67979d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6797a0:{NFSU2_TR(0x6797a0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6797b0;}}
}
B6797a2:L6797a2:{c.instructions+=2;NFSU2_TR(0x6797a2);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6797a5:{NFSU2_TR(0x6797a5);
if(r1(R+518)){{goto L6797b5;}}
}
B6797a7:L6797a7:{c.instructions+=2;NFSU2_TR(0x6797a7);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6797a9:{NFSU2_TR(0x6797a9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6797b0;}}
}
B6797ab:L6797ab:{c.instructions+=2;NFSU2_TR(0x6797ab);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6797ae:{NFSU2_TR(0x6797ae);
if(r1(R+518)){{goto L6797b5;}}
}
B6797b0:L6797b0:{c.instructions+=3;NFSU2_TR(0x6797b0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6797b2:{NFSU2_TR(0x6797b2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6797b3:{NFSU2_TR(0x6797b3);
{goto L6797b7;}
}
B6797b5:L6797b5:{c.instructions+=1;NFSU2_TR(0x6797b5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6797b7:L6797b7:{c.instructions+=3;NFSU2_TR(0x6797b7);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6797b9:{NFSU2_TR(0x6797b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6797bc:{NFSU2_TR(0x6797bc);
if(r1(R+518)){{goto L6797c8;}}
}
B6797be:L6797be:{c.instructions+=2;NFSU2_TR(0x6797be);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6797c1:{NFSU2_TR(0x6797c1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6797cd;}}
}
B6797c3:L6797c3:{c.instructions+=2;NFSU2_TR(0x6797c3);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6797c6:{NFSU2_TR(0x6797c6);
if(r1(R+518)){{goto L6797d6;}}
}
B6797c8:L6797c8:{c.instructions+=2;NFSU2_TR(0x6797c8);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6797cb:{NFSU2_TR(0x6797cb);
if(r1(R+518)){{goto L6797f8;}}
}
B6797cd:L6797cd:{c.instructions+=2;NFSU2_TR(0x6797cd);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6797cf:{NFSU2_TR(0x6797cf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6797f8;}}
}
B6797d1:L6797d1:{c.instructions+=2;NFSU2_TR(0x6797d1);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6797d4:{NFSU2_TR(0x6797d4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6797f8;}}
}
B6797d6:L6797d6:{c.instructions+=5;NFSU2_TR(0x6797d6);
u8 U[4];
w4(U+0,u32(0x7b7980ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6797db:{NFSU2_TR(0x6797db);
u8 U[4];
w4(U+0,u32(0xdacull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6797e0:{NFSU2_TR(0x6797e0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6797e3:{NFSU2_TR(0x6797e3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6797e4:{NFSU2_TR(0x6797e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6797e9ull));
TAIL_STATIC(0x675267u,675);
}
B6797e9:L6797e9:{c.instructions+=3;NFSU2_TR(0x6797e9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6797ec:{NFSU2_TR(0x6797ec);
w4(R+24,u32(0x80004001ull));
}
B6797f1:{NFSU2_TR(0x6797f1);
{goto L6797f8;}
}
B6797f3:L6797f3:{c.instructions+=1;NFSU2_TR(0x6797f3);
w4(R+24,u32(0x8007000eull));
}
B6797f8:L6797f8:{c.instructions+=2;NFSU2_TR(0x6797f8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6797fb:{NFSU2_TR(0x6797fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x679800ull));
TAIL_STATIC(0x575630u,575);
}
B679800:L679800:{c.instructions+=2;NFSU2_TR(0x679800);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B679803:{NFSU2_TR(0x679803);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x679808ull));
TAIL_STATIC(0x575630u,575);
}
B679808:L679808:{c.instructions+=2;NFSU2_TR(0x679808);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67980b:{NFSU2_TR(0x67980b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x679810ull));
TAIL_STATIC(0x575630u,575);
}
B679810:L679810:{c.instructions+=2;NFSU2_TR(0x679810);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B679813:{NFSU2_TR(0x679813);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x679818ull));
TAIL_STATIC(0x575630u,575);
}
B679818:L679818:{c.instructions+=17;NFSU2_TR(0x679818);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67981b:{NFSU2_TR(0x67981b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67981e:{NFSU2_TR(0x67981e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B679821:{NFSU2_TR(0x679821);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B679824:{NFSU2_TR(0x679824);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B679827:{NFSU2_TR(0x679827);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67982a:{NFSU2_TR(0x67982a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67982d:{NFSU2_TR(0x67982d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B679830:{NFSU2_TR(0x679830);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B679833:{NFSU2_TR(0x679833);
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
B679836:{NFSU2_TR(0x679836);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B679839:{NFSU2_TR(0x679839);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B67983a:{NFSU2_TR(0x67983a);
__builtin_memmove((R+0),(R+24),4);
}
B67983c:{NFSU2_TR(0x67983c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B67983d:{NFSU2_TR(0x67983d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B67983e:{NFSU2_TR(0x67983e);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B67983f:{NFSU2_TR(0x67983f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B679842:L679842:{c.instructions+=29;NFSU2_TR(0x679842);
__builtin_memmove((R+28),(R+28),4);
}
B679844:{NFSU2_TR(0x679844);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B679845:{NFSU2_TR(0x679845);
__builtin_memmove((R+20),(R+16),4);
}
B679847:{NFSU2_TR(0x679847);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xc8ull))));
}
B67984d:{NFSU2_TR(0x67984d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67984e:{NFSU2_TR(0x67984e);
__builtin_memmove((R+12),(R+4),4);
}
B679850:{NFSU2_TR(0x679850);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B679853:{NFSU2_TR(0x679853);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B679856:{NFSU2_TR(0x679856);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff8cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B679859:{NFSU2_TR(0x679859);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67985c:{NFSU2_TR(0x67985c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff90ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67985f:{NFSU2_TR(0x67985f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B679862:{NFSU2_TR(0x679862);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff68ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B679868:{NFSU2_TR(0x679868);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67986b:{NFSU2_TR(0x67986b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff6cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B679871:{NFSU2_TR(0x679871);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B679873:{NFSU2_TR(0x679873);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B679874:{NFSU2_TR(0x679874);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B679876:{NFSU2_TR(0x679876);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B679879:{NFSU2_TR(0x679879);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67987c:{NFSU2_TR(0x67987c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B67987f:{NFSU2_TR(0x67987f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B679882:{NFSU2_TR(0x679882);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B679885:{NFSU2_TR(0x679885);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B679888:{NFSU2_TR(0x679888);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67988b:{NFSU2_TR(0x67988b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67988e:{NFSU2_TR(0x67988e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B679891:{NFSU2_TR(0x679891);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
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
B679894:{NFSU2_TR(0x679894);
if(r1(R+512)){{goto L6798a0;}}
}
B679896:L679896:{c.instructions+=2;NFSU2_TR(0x679896);
w4(R+0,u32(0x80004005ull));
}
B67989b:{NFSU2_TR(0x67989b);
TAIL_STATIC(0x67a67au,67a);
}
B6798a0:L6798a0:{c.instructions+=14;NFSU2_TR(0x6798a0);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6798a1:{NFSU2_TR(0x6798a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6798a4:{NFSU2_TR(0x6798a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6798a7:{NFSU2_TR(0x6798a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6798aa:{NFSU2_TR(0x6798aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6798ad:{NFSU2_TR(0x6798ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6798b0:{NFSU2_TR(0x6798b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6798b3:{NFSU2_TR(0x6798b3);
__builtin_memmove((R+0),(R+4),4);
}
B6798b5:{NFSU2_TR(0x6798b5);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6798b8:{NFSU2_TR(0x6798b8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6798b9:{NFSU2_TR(0x6798b9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6798ba:{NFSU2_TR(0x6798ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6798bd:{NFSU2_TR(0x6798bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff98ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6798c0:{NFSU2_TR(0x6798c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6798c5ull));
TAIL_STATIC(0x575620u,575);
}
B6798c5:L6798c5:{c.instructions+=4;NFSU2_TR(0x6798c5);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6798c7:{NFSU2_TR(0x6798c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6798c8:{NFSU2_TR(0x6798c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6798cb:{NFSU2_TR(0x6798cb);
if(r1(R+518)){TAIL_STATIC(0x67a61eu,67a);}
}
B6798d1:L6798d1:{c.instructions+=4;NFSU2_TR(0x6798d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6798d4:{NFSU2_TR(0x6798d4);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6798d7:{NFSU2_TR(0x6798d7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6798d8:{NFSU2_TR(0x6798d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6798ddull));
TAIL_STATIC(0x575620u,575);
}
B6798dd:L6798dd:{c.instructions+=4;NFSU2_TR(0x6798dd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6798df:{NFSU2_TR(0x6798df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6798e0:{NFSU2_TR(0x6798e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6798e3:{NFSU2_TR(0x6798e3);
if(r1(R+518)){TAIL_STATIC(0x67a61eu,67a);}
}
B6798e9:L6798e9:{c.instructions+=4;NFSU2_TR(0x6798e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6798ec:{NFSU2_TR(0x6798ec);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6798ef:{NFSU2_TR(0x6798ef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6798f0:{NFSU2_TR(0x6798f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6798f5ull));
TAIL_STATIC(0x575620u,575);
}
B6798f5:L6798f5:{c.instructions+=4;NFSU2_TR(0x6798f5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6798f7:{NFSU2_TR(0x6798f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6798f8:{NFSU2_TR(0x6798f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6798fb:{NFSU2_TR(0x6798fb);
if(r1(R+518)){TAIL_STATIC(0x67a61eu,67a);}
}
B679901:L679901:{c.instructions+=5;NFSU2_TR(0x679901);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B679904:{NFSU2_TR(0x679904);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B679907:{NFSU2_TR(0x679907);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B679908:{NFSU2_TR(0x679908);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67990b:{NFSU2_TR(0x67990b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x679910ull));
TAIL_STATIC(0x575620u,575);
}
B679910:L679910:{c.instructions+=4;NFSU2_TR(0x679910);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B679912:{NFSU2_TR(0x679912);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B679913:{NFSU2_TR(0x679913);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B679916:{NFSU2_TR(0x679916);
if(r1(R+518)){TAIL_STATIC(0x67a61eu,67a);}
}
B67991c:L67991c:{c.instructions+=2;NFSU2_TR(0x67991c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67991f:{NFSU2_TR(0x67991f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x679924ull));
TAIL_STATIC(0x575620u,575);
}
B679924:L679924:{c.instructions+=4;NFSU2_TR(0x679924);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B679926:{NFSU2_TR(0x679926);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B679927:{NFSU2_TR(0x679927);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67992a:{NFSU2_TR(0x67992a);
if(r1(R+518)){TAIL_STATIC(0x67a61eu,67a);}
}
B679930:L679930:{c.instructions+=3;NFSU2_TR(0x679930);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B679932:{NFSU2_TR(0x679932);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B679935:{NFSU2_TR(0x679935);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6799ad;}}
}
B679937:L679937:{c.instructions+=2;NFSU2_TR(0x679937);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67993a:{NFSU2_TR(0x67993a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67993d:L67993d:{c.instructions+=6;NFSU2_TR(0x67993d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B679940:{NFSU2_TR(0x679940);
__builtin_memmove((R+24),(R+28),4);
}
B679942:{NFSU2_TR(0x679942);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B679945:{NFSU2_TR(0x679945);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B679948:{NFSU2_TR(0x679948);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67994b:{NFSU2_TR(0x67994b);
if(r1(R+518)){{goto L67995c;}}
}
B67994d:L67994d:{c.instructions+=4;NFSU2_TR(0x67994d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B679950:{NFSU2_TR(0x679950);
__builtin_memmove((R+4),(R+12),4);
}
B679952:{NFSU2_TR(0x679952);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B679953:{NFSU2_TR(0x679953);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x679958ull));
TAIL_STATIC(0x673e90u,673);
}
B679958:L679958:{c.instructions+=2;NFSU2_TR(0x679958);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B67995a:{NFSU2_TR(0x67995a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L679970;}}
}
B67995c:L67995c:{c.instructions+=5;NFSU2_TR(0x67995c);
{u32 ea_=u32(r4(R+12)+u32(160u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B679962:{NFSU2_TR(0x679962);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B679965:{NFSU2_TR(0x679965);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B679967:{NFSU2_TR(0x679967);
{u32 ea_=u32(r4(R+12)+u32(168u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67996d:{NFSU2_TR(0x67996d);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B679970:L679970:{c.instructions+=4;NFSU2_TR(0x679970);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B679973:{NFSU2_TR(0x679973);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B679976:{NFSU2_TR(0x679976);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B679979:{NFSU2_TR(0x679979);
if(r1(R+518)){{goto L679999;}}
}
B67997b:L67997b:{c.instructions+=6;NFSU2_TR(0x67997b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67997e:{NFSU2_TR(0x67997e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B679981:{NFSU2_TR(0x679981);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B679984:{NFSU2_TR(0x679984);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B679987:{NFSU2_TR(0x679987);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67998a:{NFSU2_TR(0x67998a);
if(r1(R+518)){{goto L679999;}}
}
B67998c:L67998c:{c.instructions+=5;NFSU2_TR(0x67998c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B67998e:{NFSU2_TR(0x67998e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B679991:{NFSU2_TR(0x679991);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1full))));
}
B679994:{NFSU2_TR(0x679994);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B679997:{NFSU2_TR(0x679997);
{goto L6799a3;}
}
B679999:L679999:{c.instructions+=2;NFSU2_TR(0x679999);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67999c:{NFSU2_TR(0x67999c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
w4(U+8,u32(0x1full));
s4(u32(r4(U+4)),r4(U+8));
}
B6799a3:L6799a3:{c.instructions+=4;NFSU2_TR(0x6799a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6799a7:{NFSU2_TR(0x6799a7);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6799a8:{NFSU2_TR(0x6799a8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6799ab:{NFSU2_TR(0x6799ab);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67993du);}goto L67993d;}}
}
B6799ad:L6799ad:{c.instructions+=8;NFSU2_TR(0x6799ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6799b0:{NFSU2_TR(0x6799b0);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B6799b2:{NFSU2_TR(0x6799b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6799b5:{NFSU2_TR(0x6799b5);
{u32 ea_=u32(r4(R+20)+u32(4294967160u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6799bb:{NFSU2_TR(0x6799bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6799be:{NFSU2_TR(0x6799be);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6799c1:{NFSU2_TR(0x6799c1);
__builtin_memmove((R+0),(R+4),4);
}
B6799c3:{NFSU2_TR(0x6799c3);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6799c6:L6799c6:{c.instructions+=1;NFSU2_TR(0x6799c6);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6799c8;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6799c6u);}goto L6799c6;}
}
B6799c8:L6799c8:{c.instructions+=2;NFSU2_TR(0x6799c8);
__builtin_memmove((R+4),(R+0),4);
}
B6799ca:{NFSU2_TR(0x6799ca);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6799cd:L6799cd:{c.instructions+=1;NFSU2_TR(0x6799cd);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6799cf;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6799cdu);}goto L6799cd;}
}
B6799cf:L6799cf:{c.instructions+=5;NFSU2_TR(0x6799cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6799d2:{NFSU2_TR(0x6799d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6799d5:{NFSU2_TR(0x6799d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6799d8:{NFSU2_TR(0x6799d8);
__builtin_memmove((R+0),(R+4),4);
}
B6799da:{NFSU2_TR(0x6799da);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6799dd:L6799dd:{c.instructions+=1;NFSU2_TR(0x6799dd);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6799df;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6799ddu);}goto L6799dd;}
}
B6799df:L6799df:{c.instructions+=2;NFSU2_TR(0x6799df);
__builtin_memmove((R+4),(R+0),4);
}
B6799e1:{NFSU2_TR(0x6799e1);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6799e4:L6799e4:{c.instructions+=1;NFSU2_TR(0x6799e4);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6799e6;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6799e4u);}goto L6799e4;}
}
B6799e6:L6799e6:{c.instructions+=13;NFSU2_TR(0x6799e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6799e9:{NFSU2_TR(0x6799e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6799ed:{NFSU2_TR(0x6799ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6799f1:{NFSU2_TR(0x6799f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6799f4:{NFSU2_TR(0x6799f4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6799f6:{NFSU2_TR(0x6799f6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6799f7:{NFSU2_TR(0x6799f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6799fa:{NFSU2_TR(0x6799fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6799fd:{NFSU2_TR(0x6799fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B679a00:{NFSU2_TR(0x679a00);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B679a03:{NFSU2_TR(0x679a03);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B679a05:{NFSU2_TR(0x679a05);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B679a08:{NFSU2_TR(0x679a08);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L679a11;}}
}
B679a0a:L679a0a:{c.instructions+=1;NFSU2_TR(0x679a0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
w4(U+4,u32(0xffull));
s4(u32(r4(U+0)),r4(U+4));
}
B679a11:L679a11:{c.instructions+=3;NFSU2_TR(0x679a11);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B679a15:{NFSU2_TR(0x679a15);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B679a19:{NFSU2_TR(0x679a19);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x67a613u,67a);}
}
B679a1f:L679a1f:{c.instructions+=7;NFSU2_TR(0x679a1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B679a22:{NFSU2_TR(0x679a22);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B679a25:{NFSU2_TR(0x679a25);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B679a26:{NFSU2_TR(0x679a26);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B679a2a:{NFSU2_TR(0x679a2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B679a2d:{NFSU2_TR(0x679a2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B679a30:{NFSU2_TR(0x679a30);
if(r1(R+518)){{goto L679a6a;}}
}
B679a32:L679a32:{c.instructions+=2;NFSU2_TR(0x679a32);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B679a36:{NFSU2_TR(0x679a36);
if(r1(R+518)){{goto L679a6a;}}
}
B679a38:L679a38:{c.instructions+=5;NFSU2_TR(0x679a38);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B679a3a:{NFSU2_TR(0x679a3a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B679a3b:{NFSU2_TR(0x679a3b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B679a3e:{NFSU2_TR(0x679a3e);
__builtin_memmove((R+4),(R+12),4);
}
B679a40:{NFSU2_TR(0x679a40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x679a45ull));
TAIL_STATIC(0x681bf8u,681);
}
B679a45:L679a45:{c.instructions+=3;NFSU2_TR(0x679a45);
__builtin_memmove((R+24),(R+0),4);
}
B679a47:{NFSU2_TR(0x679a47);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B679a49:{NFSU2_TR(0x679a49);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x67a623u,67a);}
}
B679a4f:L679a4f:{c.instructions+=2;NFSU2_TR(0x679a4f);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B679a52:{NFSU2_TR(0x679a52);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L679e35;}}
}
B679a58:L679a58:{c.instructions+=2;NFSU2_TR(0x679a58);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B679a5b:{NFSU2_TR(0x679a5b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x67a613u,67a);}
}
B679a61:L679a61:{c.instructions+=2;NFSU2_TR(0x679a61);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B679a64:{NFSU2_TR(0x679a64);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x67a613u,67a);}
}
B679a6a:L679a6a:{c.instructions+=6;NFSU2_TR(0x679a6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B679a6d:{NFSU2_TR(0x679a6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B679a70:{NFSU2_TR(0x679a70);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B679a73:{NFSU2_TR(0x679a73);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B679a76:{NFSU2_TR(0x679a76);
__builtin_memmove((R+0),(R+4),4);
}
B679a78:{NFSU2_TR(0x679a78);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B679a7b:L679a7b:{c.instructions+=1;NFSU2_TR(0x679a7b);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L679a7d;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x679a7bu);}goto L679a7b;}
}
B679a7d:L679a7d:{c.instructions+=2;NFSU2_TR(0x679a7d);
__builtin_memmove((R+4),(R+0),4);
}
B679a7f:{NFSU2_TR(0x679a7f);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B679a82:L679a82:{c.instructions+=1;NFSU2_TR(0x679a82);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L679a84;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x679a82u);}goto L679a82;}
}
B679a84:L679a84:{c.instructions+=3;NFSU2_TR(0x679a84);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B679a88:{NFSU2_TR(0x679a88);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B679a8c:{NFSU2_TR(0x679a8c);
if(r1(R+518)){{goto L679aee;}}
}
B679a8e:L679a8e:{c.instructions+=7;NFSU2_TR(0x679a8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B679a92:{NFSU2_TR(0x679a92);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B679a94:{NFSU2_TR(0x679a94);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B679a97:{NFSU2_TR(0x679a97);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B679a98:{NFSU2_TR(0x679a98);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B679a9b:{NFSU2_TR(0x679a9b);
__builtin_memmove((R+4),(R+12),4);
}
B679a9d:{NFSU2_TR(0x679a9d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x679aa2ull));
TAIL_STATIC(0x682bb1u,682);
}
B679aa2:L679aa2:{c.instructions+=3;NFSU2_TR(0x679aa2);
__builtin_memmove((R+24),(R+0),4);
}
B679aa4:{NFSU2_TR(0x679aa4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B679aa6:{NFSU2_TR(0x679aa6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x67a623u,67a);}
}
B679aac:L679aac:{c.instructions+=10;NFSU2_TR(0x679aac);
u8 U[4];
w4(U+0,u32(0x17ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B679aae:{NFSU2_TR(0x679aae);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B679ab1:{NFSU2_TR(0x679ab1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B679ab2:{NFSU2_TR(0x679ab2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B679ab5:{NFSU2_TR(0x679ab5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B679ab6:{NFSU2_TR(0x679ab6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B679ab7:{NFSU2_TR(0x679ab7);
u8 U[4];
w4(U+0,u32(0x20500001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B679abc:{NFSU2_TR(0x679abc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B679abf:{NFSU2_TR(0x679abf);
__builtin_memmove((R+4),(R+12),4);
}
B679ac1:{NFSU2_TR(0x679ac1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x679ac6ull));
TAIL_STATIC(0x6758ceu,675);
}
B679ac6:L679ac6:{c.instructions+=3;NFSU2_TR(0x679ac6);
__builtin_memmove((R+24),(R+0),4);
}
B679ac8:{NFSU2_TR(0x679ac8);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B679aca:{NFSU2_TR(0x679aca);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x67a623u,67a);}
}
B679ad0:L679ad0:{c.instructions+=2;NFSU2_TR(0x679ad0);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B679ad4:{NFSU2_TR(0x679ad4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L679e35;}}
}
B679ada:L679ada:{c.instructions+=2;NFSU2_TR(0x679ada);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B679ade:{NFSU2_TR(0x679ade);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x67a613u,67a);}
}
B679ae4:L679ae4:{c.instructions+=2;NFSU2_TR(0x679ae4);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B679ae8:{NFSU2_TR(0x679ae8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x67a613u,67a);}
}
B679aee:L679aee:{c.instructions+=5;NFSU2_TR(0x679aee);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff78ull))));
__builtin_memmove((R+0),(U+0),4);
}
B679af4:{NFSU2_TR(0x679af4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B679af5:{NFSU2_TR(0x679af5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B679af8:{NFSU2_TR(0x679af8);
__builtin_memmove((R+4),(R+12),4);
}
B679afa:{NFSU2_TR(0x679afa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x679affull));
TAIL_STATIC(0x675732u,675);
}
B679aff:L679aff:{c.instructions+=2;NFSU2_TR(0x679aff);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B679b01:{NFSU2_TR(0x679b01);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L679b8f;}}
}
B679b07:L679b07:{c.instructions+=6;NFSU2_TR(0x679b07);
{u32 ea_=u32(r4(R+20)+u32(4294967160u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B679b0d:{NFSU2_TR(0x679b0d);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B679b13:{NFSU2_TR(0x679b13);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B679b15:{NFSU2_TR(0x679b15);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B679b17:{NFSU2_TR(0x679b17);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B679b1a:{NFSU2_TR(0x679b1a);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L679b8f;}}
}
B679b1c:L679b1c:{c.instructions+=3;NFSU2_TR(0x679b1c);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B679b1e:{NFSU2_TR(0x679b1e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B679b21:{NFSU2_TR(0x679b21);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L679c5c;}}
}
B679b27:L679b27:{c.instructions+=5;NFSU2_TR(0x679b27);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B679b2a:{NFSU2_TR(0x679b2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B679b2d:{NFSU2_TR(0x679b2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B679b30:{NFSU2_TR(0x679b30);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B679b33:{NFSU2_TR(0x679b33);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B679b36:L679b36:{c.instructions+=6;NFSU2_TR(0x679b36);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B679b39:{NFSU2_TR(0x679b39);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B679b3c:{NFSU2_TR(0x679b3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B679b3f:{NFSU2_TR(0x679b3f);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B679b42:{NFSU2_TR(0x679b42);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+0))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B679b45:{NFSU2_TR(0x679b45);
if(r1(R+518)){{goto L679b80;}}
}
B679b47:L679b47:{c.instructions+=4;NFSU2_TR(0x679b47);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B679b4a:{NFSU2_TR(0x679b4a);
__builtin_memmove((R+4),(R+12),4);
}
B679b4c:{NFSU2_TR(0x679b4c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B679b4d:{NFSU2_TR(0x679b4d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x679b52ull));
TAIL_STATIC(0x673e90u,673);
}
B679b52:L679b52:{c.instructions+=2;NFSU2_TR(0x679b52);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B679b54:{NFSU2_TR(0x679b54);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L679b6a;}}
}
B679b56:L679b56:{c.instructions+=5;NFSU2_TR(0x679b56);
{u32 ea_=u32(r4(R+12)+u32(160u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B679b5c:{NFSU2_TR(0x679b5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B679b5f:{NFSU2_TR(0x679b5f);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B679b61:{NFSU2_TR(0x679b61);
{u32 ea_=u32(r4(R+12)+u32(168u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B679b67:{NFSU2_TR(0x679b67);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B679b6a:L679b6a:{c.instructions+=8;NFSU2_TR(0x679b6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B679b6d:{NFSU2_TR(0x679b6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B679b70:{NFSU2_TR(0x679b70);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B679b73:{NFSU2_TR(0x679b73);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B679b76:{NFSU2_TR(0x679b76);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B679b79:{NFSU2_TR(0x679b79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B679b7b:{NFSU2_TR(0x679b7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B679b7e:{NFSU2_TR(0x679b7e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B679b80:L679b80:{c.instructions+=4;NFSU2_TR(0x679b80);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B679b84:{NFSU2_TR(0x679b84);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B679b85:{NFSU2_TR(0x679b85);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B679b88:{NFSU2_TR(0x679b88);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x679b36u);}goto L679b36;}}
}
B679b8a:L679b8a:{c.instructions+=1;NFSU2_TR(0x679b8a);
{goto L679c5c;}
}
B679b8f:L679b8f:{c.instructions+=4;NFSU2_TR(0x679b8f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B679b91:{NFSU2_TR(0x679b91);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B679b94:{NFSU2_TR(0x679b94);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B679b97:{NFSU2_TR(0x679b97);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L679c5c;}}
}
B679b9d:L679b9d:{c.instructions+=4;NFSU2_TR(0x679b9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B679ba0:{NFSU2_TR(0x679ba0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B679ba3:{NFSU2_TR(0x679ba3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B679ba6:{NFSU2_TR(0x679ba6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B679ba9:L679ba9:{c.instructions+=6;NFSU2_TR(0x679ba9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B679bac:{NFSU2_TR(0x679bac);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B679baf:{NFSU2_TR(0x679baf);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B679bb2:{NFSU2_TR(0x679bb2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B679bb5:{NFSU2_TR(0x679bb5);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+4))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B679bb8:{NFSU2_TR(0x679bb8);
if(r1(R+518)){{goto L679c4c;}}
}
B679bbe:L679bbe:{c.instructions+=5;NFSU2_TR(0x679bbe);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B679bc0:{NFSU2_TR(0x679bc0);
{u32 ea_=u32(r4(R+12)+u32(168u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B679bc6:{NFSU2_TR(0x679bc6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B679bc8:{NFSU2_TR(0x679bc8);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B679bcb:{NFSU2_TR(0x679bcb);
if(r1(R+518)){{goto L679bdd;}}
}
B679bcd:L679bcd:{c.instructions+=5;NFSU2_TR(0x679bcd);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B679bd0:{NFSU2_TR(0x679bd0);
{u32 ea_=u32(r4(R+12)+u32(160u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B679bd6:{NFSU2_TR(0x679bd6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B679bd8:{NFSU2_TR(0x679bd8);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B679bdb:{NFSU2_TR(0x679bdb);
if(r1(R+514)){{goto L679c30;}}
}
B679bdd:L679bdd:{c.instructions+=5;NFSU2_TR(0x679bdd);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff48ull))));
__builtin_memmove((R+0),(U+0),4);
}
B679be3:{NFSU2_TR(0x679be3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B679be4:{NFSU2_TR(0x679be4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B679be5:{NFSU2_TR(0x679be5);
__builtin_memmove((R+4),(R+12),4);
}
B679be7:{NFSU2_TR(0x679be7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x679becull));
TAIL_STATIC(0x673e90u,673);
}
B679bec:L679bec:{c.instructions+=2;NFSU2_TR(0x679bec);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B679bee:{NFSU2_TR(0x679bee);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L679c1f;}}
}
B679bf0:L679bf0:{c.instructions+=5;NFSU2_TR(0x679bf0);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B679bf2:{NFSU2_TR(0x679bf2);
{u32 ea_=u32(r4(R+20)+u32(4294967112u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B679bf8:{NFSU2_TR(0x679bf8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B679bfa:{NFSU2_TR(0x679bfa);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B679bfd:{NFSU2_TR(0x679bfd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L679c07;}}
}
B679bff:L679bff:{c.instructions+=2;NFSU2_TR(0x679bff);
{u32 ea_=u32(r4(R+20)+u32(4294967112u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B679c05:{NFSU2_TR(0x679c05);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B679c07:L679c07:{c.instructions+=5;NFSU2_TR(0x679c07);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B679c0a:{NFSU2_TR(0x679c0a);
{u32 ea_=u32(r4(R+20)+u32(4294967120u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B679c10:{NFSU2_TR(0x679c10);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B679c12:{NFSU2_TR(0x679c12);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B679c15:{NFSU2_TR(0x679c15);
if(r1(R+514)){{goto L679c30;}}
}
B679c17:L679c17:{c.instructions+=2;NFSU2_TR(0x679c17);
{u32 ea_=u32(r4(R+20)+u32(4294967120u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B679c1d:{NFSU2_TR(0x679c1d);
{goto L679c2d;}
}
B679c1f:L679c1f:{c.instructions+=3;NFSU2_TR(0x679c1f);
{u32 ea_=u32(r4(R+12)+u32(160u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B679c25:{NFSU2_TR(0x679c25);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B679c27:{NFSU2_TR(0x679c27);
{u32 ea_=u32(r4(R+12)+u32(168u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B679c2d:L679c2d:{c.instructions+=1;NFSU2_TR(0x679c2d);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B679c30:L679c30:{c.instructions+=10;NFSU2_TR(0x679c30);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B679c33:{NFSU2_TR(0x679c33);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B679c36:{NFSU2_TR(0x679c36);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B679c39:{NFSU2_TR(0x679c39);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B679c3c:{NFSU2_TR(0x679c3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B679c3f:{NFSU2_TR(0x679c3f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B679c42:{NFSU2_TR(0x679c42);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B679c44:{NFSU2_TR(0x679c44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))&u32(r4(R+0))));
s4(u32(r4(R+24)),r4(U+0));
}
B679c46:{NFSU2_TR(0x679c46);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B679c49:{NFSU2_TR(0x679c49);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B679c4c:L679c4c:{c.instructions+=5;NFSU2_TR(0x679c4c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B679c4d:{NFSU2_TR(0x679c4d);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B679c50:{NFSU2_TR(0x679c50);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B679c53:{NFSU2_TR(0x679c53);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B679c56:{NFSU2_TR(0x679c56);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x679ba9u);}goto L679ba9;}}
}
B679c5c:L679c5c:{c.instructions+=2;NFSU2_TR(0x679c5c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B679c60:{NFSU2_TR(0x679c60);
if(r1(R+518)){{goto L679ced;}}
}
B679c66:L679c66:{c.instructions+=5;NFSU2_TR(0x679c66);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff38ull))));
__builtin_memmove((R+0),(U+0),4);
}
B679c6c:{NFSU2_TR(0x679c6c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B679c6d:{NFSU2_TR(0x679c6d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B679c70:{NFSU2_TR(0x679c70);
__builtin_memmove((R+4),(R+12),4);
}
B679c72:{NFSU2_TR(0x679c72);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x679c77ull));
TAIL_STATIC(0x673e90u,673);
}
B679c77:L679c77:{c.instructions+=2;NFSU2_TR(0x679c77);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B679c79:{NFSU2_TR(0x679c79);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L679ccb;}}
}
B679c7b:L679c7b:{c.instructions+=6;NFSU2_TR(0x679c7b);
{u32 ea_=u32(r4(R+20)+u32(4294967096u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B679c81:{NFSU2_TR(0x679c81);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B679c87:{NFSU2_TR(0x679c87);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B679c89:{NFSU2_TR(0x679c89);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B679c8b:{NFSU2_TR(0x679c8b);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B679c8e:{NFSU2_TR(0x679c8e);
if(r1(R+514)){{goto L679ca9;}}
}
B679c90:L679c90:{c.instructions+=6;NFSU2_TR(0x679c90);
{u32 ea_=u32(r4(R+20)+u32(4294967104u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B679c96:{NFSU2_TR(0x679c96);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B679c9c:{NFSU2_TR(0x679c9c);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B679c9e:{NFSU2_TR(0x679c9e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B679ca0:{NFSU2_TR(0x679ca0);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B679ca3:{NFSU2_TR(0x679ca3);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L679e35;}}
}
B679ca9:L679ca9:{c.instructions+=5;NFSU2_TR(0x679ca9);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B679cab:{NFSU2_TR(0x679cab);
{u32 ea_=u32(r4(R+20)+u32(4294967096u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B679cb1:{NFSU2_TR(0x679cb1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B679cb3:{NFSU2_TR(0x679cb3);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B679cb6:{NFSU2_TR(0x679cb6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L679ccb;}}
}
B679cb8:L679cb8:{c.instructions+=5;NFSU2_TR(0x679cb8);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B679cba:{NFSU2_TR(0x679cba);
{u32 ea_=u32(r4(R+20)+u32(4294967104u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B679cc0:{NFSU2_TR(0x679cc0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B679cc2:{NFSU2_TR(0x679cc2);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B679cc5:{NFSU2_TR(0x679cc5);
if(r1(R+514)){{goto L679ccb;}}
}
B679cc7:L679cc7:{c.instructions+=1;NFSU2_TR(0x679cc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B679ccb:L679ccb:{c.instructions+=12;NFSU2_TR(0x679ccb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B679cce:{NFSU2_TR(0x679cce);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B679cd0:{NFSU2_TR(0x679cd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B679cd3:{NFSU2_TR(0x679cd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B679cd6:{NFSU2_TR(0x679cd6);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B679cd9:{NFSU2_TR(0x679cd9);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B679cdc:{NFSU2_TR(0x679cdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B679cdf:{NFSU2_TR(0x679cdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B679ce2:{NFSU2_TR(0x679ce2);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B679ce4:{NFSU2_TR(0x679ce4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B679ce7:{NFSU2_TR(0x679ce7);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B679cea:{NFSU2_TR(0x679cea);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B679ced:L679ced:{c.instructions+=2;NFSU2_TR(0x679ced);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B679cf1:{NFSU2_TR(0x679cf1);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L679dbc;}}
}
B679cf7:L679cf7:{c.instructions+=10;NFSU2_TR(0x679cf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B679cfa:{NFSU2_TR(0x679cfa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B679cfd:{NFSU2_TR(0x679cfd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B679d00:{NFSU2_TR(0x679d00);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B679d03:{NFSU2_TR(0x679d03);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B679d05:{NFSU2_TR(0x679d05);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+28))));
}
B679d07:{NFSU2_TR(0x679d07);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B679d0a:{NFSU2_TR(0x679d0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B679d0d:{NFSU2_TR(0x679d0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff70ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B679d13:{NFSU2_TR(0x679d13);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B679d16:L679d16:{c.instructions+=3;NFSU2_TR(0x679d16);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B679d18:{NFSU2_TR(0x679d18);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+4))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B679d1b:{NFSU2_TR(0x679d1b);
if(r1(R+518)){{goto L679dad;}}
}
B679d21:L679d21:{c.instructions+=5;NFSU2_TR(0x679d21);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B679d23:{NFSU2_TR(0x679d23);
{u32 ea_=u32(r4(R+12)+u32(168u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B679d29:{NFSU2_TR(0x679d29);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B679d2b:{NFSU2_TR(0x679d2b);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B679d2e:{NFSU2_TR(0x679d2e);
if(r1(R+518)){{goto L679d40;}}
}
B679d30:L679d30:{c.instructions+=5;NFSU2_TR(0x679d30);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B679d33:{NFSU2_TR(0x679d33);
{u32 ea_=u32(r4(R+12)+u32(160u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B679d39:{NFSU2_TR(0x679d39);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B679d3b:{NFSU2_TR(0x679d3b);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B679d3e:{NFSU2_TR(0x679d3e);
if(r1(R+514)){{goto L679d93;}}
}
B679d40:L679d40:{c.instructions+=5;NFSU2_TR(0x679d40);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff58ull))));
__builtin_memmove((R+0),(U+0),4);
}
B679d46:{NFSU2_TR(0x679d46);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B679d47:{NFSU2_TR(0x679d47);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B679d48:{NFSU2_TR(0x679d48);
__builtin_memmove((R+4),(R+12),4);
}
B679d4a:{NFSU2_TR(0x679d4a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x679d4full));
TAIL_STATIC(0x673e90u,673);
}
B679d4f:L679d4f:{c.instructions+=2;NFSU2_TR(0x679d4f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B679d51:{NFSU2_TR(0x679d51);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L679d82;}}
}
B679d53:L679d53:{c.instructions+=5;NFSU2_TR(0x679d53);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B679d55:{NFSU2_TR(0x679d55);
{u32 ea_=u32(r4(R+20)+u32(4294967128u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B679d5b:{NFSU2_TR(0x679d5b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B679d5d:{NFSU2_TR(0x679d5d);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B679d60:{NFSU2_TR(0x679d60);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L679d6a;}}
}
B679d62:L679d62:{c.instructions+=2;NFSU2_TR(0x679d62);
{u32 ea_=u32(r4(R+20)+u32(4294967128u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B679d68:{NFSU2_TR(0x679d68);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B679d6a:L679d6a:{c.instructions+=5;NFSU2_TR(0x679d6a);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B679d6d:{NFSU2_TR(0x679d6d);
{u32 ea_=u32(r4(R+20)+u32(4294967136u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B679d73:{NFSU2_TR(0x679d73);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B679d75:{NFSU2_TR(0x679d75);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B679d78:{NFSU2_TR(0x679d78);
if(r1(R+514)){{goto L679d93;}}
}
B679d7a:L679d7a:{c.instructions+=2;NFSU2_TR(0x679d7a);
{u32 ea_=u32(r4(R+20)+u32(4294967136u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B679d80:{NFSU2_TR(0x679d80);
{goto L679d90;}
}
B679d82:L679d82:{c.instructions+=3;NFSU2_TR(0x679d82);
{u32 ea_=u32(r4(R+12)+u32(160u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B679d88:{NFSU2_TR(0x679d88);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B679d8a:{NFSU2_TR(0x679d8a);
{u32 ea_=u32(r4(R+12)+u32(168u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B679d90:L679d90:{c.instructions+=1;NFSU2_TR(0x679d90);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B679d93:L679d93:{c.instructions+=9;NFSU2_TR(0x679d93);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B679d96:{NFSU2_TR(0x679d96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B679d98:{NFSU2_TR(0x679d98);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B679d9b:{NFSU2_TR(0x679d9b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B679d9e:{NFSU2_TR(0x679d9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B679da1:{NFSU2_TR(0x679da1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B679da3:{NFSU2_TR(0x679da3);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B679da5:{NFSU2_TR(0x679da5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(r4(R+4))));
s4(u32(r4(R+0)),r4(U+0));
}
B679da7:{NFSU2_TR(0x679da7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B679dad:L679dad:{c.instructions+=4;NFSU2_TR(0x679dad);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B679db0:{NFSU2_TR(0x679db0);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B679db3:{NFSU2_TR(0x679db3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B679db6:{NFSU2_TR(0x679db6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x679d16u);}goto L679d16;}}
}
B679dbc:L679dbc:{c.instructions+=2;NFSU2_TR(0x679dbc);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B679dc0:{NFSU2_TR(0x679dc0);
if(r1(R+518)){{goto L679dee;}}
}
B679dc2:L679dc2:{c.instructions+=2;NFSU2_TR(0x679dc2);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B679dc6:{NFSU2_TR(0x679dc6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L679dea;}}
}
B679dc8:L679dc8:{c.instructions+=8;NFSU2_TR(0x679dc8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((R+0),(U+0),4);
}
B679dcb:{NFSU2_TR(0x679dcb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B679dcc:{NFSU2_TR(0x679dcc);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff84ull))));
__builtin_memmove((R+0),(U+0),4);
}
B679dcf:{NFSU2_TR(0x679dcf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B679dd0:{NFSU2_TR(0x679dd0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B679dd3:{NFSU2_TR(0x679dd3);
__builtin_memmove((R+4),(R+12),4);
}
B679dd5:{NFSU2_TR(0x679dd5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B679dd8:{NFSU2_TR(0x679dd8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x679dddull));
TAIL_STATIC(0x67874eu,678);
}
B679ddd:L679ddd:{c.instructions+=2;NFSU2_TR(0x679ddd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B679ddf:{NFSU2_TR(0x679ddf);
if(r1(R+518)){{goto L679dea;}}
}
B679de1:L679de1:{c.instructions+=2;NFSU2_TR(0x679de1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B679de8:{NFSU2_TR(0x679de8);
{goto L679dee;}
}
B679dea:L679dea:{c.instructions+=1;NFSU2_TR(0x679dea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B679dee:L679dee:{c.instructions+=3;NFSU2_TR(0x679dee);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B679df0:{NFSU2_TR(0x679df0);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B679df3:{NFSU2_TR(0x679df3);
if(r1(R+518)){{goto L679e26;}}
}
B679df5:L679df5:{c.instructions+=2;NFSU2_TR(0x679df5);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B679df8:{NFSU2_TR(0x679df8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L679e26;}}
}
B679dfa:L679dfa:{c.instructions+=4;NFSU2_TR(0x679dfa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B679dfb:{NFSU2_TR(0x679dfb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B679dfe:{NFSU2_TR(0x679dfe);
__builtin_memmove((R+4),(R+12),4);
}
B679e00:{NFSU2_TR(0x679e00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x679e05ull));
TAIL_STATIC(0x681bf8u,681);
}
B679e05:L679e05:{c.instructions+=3;NFSU2_TR(0x679e05);
__builtin_memmove((R+24),(R+0),4);
}
B679e07:{NFSU2_TR(0x679e07);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B679e09:{NFSU2_TR(0x679e09);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x67a623u,67a);}
}
B679e0f:L679e0f:{c.instructions+=2;NFSU2_TR(0x679e0f);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B679e12:{NFSU2_TR(0x679e12);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L679e35;}}
}
B679e14:L679e14:{c.instructions+=2;NFSU2_TR(0x679e14);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B679e17:{NFSU2_TR(0x679e17);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x67a613u,67a);}
}
B679e1d:L679e1d:{c.instructions+=2;NFSU2_TR(0x679e1d);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B679e20:{NFSU2_TR(0x679e20);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x67a613u,67a);}
}
B679e26:L679e26:{c.instructions+=4;NFSU2_TR(0x679e26);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B679e29:{NFSU2_TR(0x679e29);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B679e2c:{NFSU2_TR(0x679e2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B679e2f:{NFSU2_TR(0x679e2f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x679a1fu);}goto L679a1f;}}
}
B679e35:L679e35:{c.instructions+=3;NFSU2_TR(0x679e35);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B679e38:{NFSU2_TR(0x679e38);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x1ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B679e3b:{NFSU2_TR(0x679e3b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x67a613u,67a);}
}
B679e41:L679e41:{c.instructions+=3;NFSU2_TR(0x679e41);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B679e43:{NFSU2_TR(0x679e43);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B679e46:{NFSU2_TR(0x679e46);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L679e63;}}
}
B679e48:L679e48:{c.instructions+=2;NFSU2_TR(0x679e48);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B679e4b:{NFSU2_TR(0x679e4b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x67a613u,67a);}
}
B679e51:L679e51:{c.instructions+=2;NFSU2_TR(0x679e51);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x15ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B679e55:{NFSU2_TR(0x679e55);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x67a613u,67a);}
}
B679e5b:L679e5b:{c.instructions+=2;NFSU2_TR(0x679e5b);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B679e5e:{NFSU2_TR(0x679e5e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L679e63;}}
}
B679e60:L679e60:{c.instructions+=1;NFSU2_TR(0x679e60);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B679e63:L679e63:{c.instructions+=2;NFSU2_TR(0x679e63);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B679e66:{NFSU2_TR(0x679e66);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L679f5c;}}
}
B679e6c:L679e6c:{c.instructions+=2;NFSU2_TR(0x679e6c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B679e6f:{NFSU2_TR(0x679e6f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L679f5c;}}
}
B679e75:L679e75:{c.instructions+=3;NFSU2_TR(0x679e75);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B679e78:{NFSU2_TR(0x679e78);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B679e7c:{NFSU2_TR(0x679e7c);
if(r1(R+518)){TAIL_STATIC(0x67a613u,67a);}
}
B679e82:L679e82:{c.instructions+=4;NFSU2_TR(0x679e82);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B679e85:{NFSU2_TR(0x679e85);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B679e88:{NFSU2_TR(0x679e88);
__builtin_memmove((R+24),(R+28),4);
}
B679e8a:{NFSU2_TR(0x679e8a);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L679ead;}}
}
B679e8c:L679e8c:{c.instructions+=4;NFSU2_TR(0x679e8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B679e8f:{NFSU2_TR(0x679e8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B679e92:{NFSU2_TR(0x679e92);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B679e95:{NFSU2_TR(0x679e95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x679e9aull));
TAIL_STATIC(0x69926eu,699);
}
B679e9a:L679e9a:{c.instructions+=2;NFSU2_TR(0x679e9a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B679e9c:{NFSU2_TR(0x679e9c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x67a613u,67a);}
}
B679ea2:L679ea2:{c.instructions+=4;NFSU2_TR(0x679ea2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B679ea5:{NFSU2_TR(0x679ea5);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B679ea6:{NFSU2_TR(0x679ea6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B679ea9:{NFSU2_TR(0x679ea9);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x679e8cu);}goto L679e8c;}}
}
B679eab:L679eab:{c.instructions+=1;NFSU2_TR(0x679eab);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B679ead:L679ead:{c.instructions+=2;NFSU2_TR(0x679ead);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B679eb0:{NFSU2_TR(0x679eb0);
if(r1(R+518)){{goto L679ebb;}}
}
B679eb2:L679eb2:{c.instructions+=3;NFSU2_TR(0x679eb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B679eb5:{NFSU2_TR(0x679eb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B679eb8:{NFSU2_TR(0x679eb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B679ebb:L679ebb:{c.instructions+=3;NFSU2_TR(0x679ebb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B679ebe:{NFSU2_TR(0x679ebe);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B679ec1:{NFSU2_TR(0x679ec1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L679ef1;}}
}
B679ec3:L679ec3:{c.instructions+=5;NFSU2_TR(0x679ec3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff78ull))));
__builtin_memmove((R+0),(U+0),4);
}
B679ec9:{NFSU2_TR(0x679ec9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B679eca:{NFSU2_TR(0x679eca);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B679ecd:{NFSU2_TR(0x679ecd);
__builtin_memmove((R+4),(R+12),4);
}
B679ecf:{NFSU2_TR(0x679ecf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x679ed4ull));
TAIL_STATIC(0x675732u,675);
}
B679ed4:L679ed4:{c.instructions+=2;NFSU2_TR(0x679ed4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B679ed6:{NFSU2_TR(0x679ed6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L679ef1;}}
}
B679ed8:L679ed8:{c.instructions+=6;NFSU2_TR(0x679ed8);
{u32 ea_=u32(r4(R+20)+u32(4294967160u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B679ede:{NFSU2_TR(0x679ede);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B679ee4:{NFSU2_TR(0x679ee4);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B679ee6:{NFSU2_TR(0x679ee6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B679ee8:{NFSU2_TR(0x679ee8);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B679eeb:{NFSU2_TR(0x679eeb);
if(r1(R+514)){TAIL_STATIC(0x67a613u,67a);}
}
B679ef1:L679ef1:{c.instructions+=3;NFSU2_TR(0x679ef1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B679ef4:{NFSU2_TR(0x679ef4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B679ef7:{NFSU2_TR(0x679ef7);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L679f9b;}}
}
B679efd:L679efd:{c.instructions+=2;NFSU2_TR(0x679efd);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B679f01:{NFSU2_TR(0x679f01);
if(r1(R+518)){{goto L679f9b;}}
}
B679f07:L679f07:{c.instructions+=2;NFSU2_TR(0x679f07);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x15ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B679f0b:{NFSU2_TR(0x679f0b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L679f9b;}}
}
B679f11:L679f11:{c.instructions+=4;NFSU2_TR(0x679f11);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B679f14:{NFSU2_TR(0x679f14);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B679f17:{NFSU2_TR(0x679f17);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B679f19:{NFSU2_TR(0x679f19);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L679f95;}}
}
B679f1b:L679f1b:{c.instructions+=3;NFSU2_TR(0x679f1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B679f1e:{NFSU2_TR(0x679f1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B679f21:{NFSU2_TR(0x679f21);
w4(R+8,u32(0x20100000ull));
}
B679f26:L679f26:{c.instructions+=5;NFSU2_TR(0x679f26);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B679f28:{NFSU2_TR(0x679f28);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B679f2a:{NFSU2_TR(0x679f2a);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B679f2f:{NFSU2_TR(0x679f2f);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B679f31:{NFSU2_TR(0x679f31);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L679f64;}}
}
B679f33:L679f33:{c.instructions+=1;NFSU2_TR(0x679f33);
if(r1(R+518)){{goto L679f87;}}
}
B679f35:L679f35:{c.instructions+=2;NFSU2_TR(0x679f35);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B679f37:{NFSU2_TR(0x679f37);
if(r1(R+518)){{goto L679f87;}}
}
B679f39:L679f39:{c.instructions+=2;NFSU2_TR(0x679f39);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B679f3e:{NFSU2_TR(0x679f3e);
if(r1(R+518)){{goto L679f87;}}
}
B679f40:L679f40:{c.instructions+=2;NFSU2_TR(0x679f40);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10100000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B679f45:{NFSU2_TR(0x679f45);
if(r1(R+518)){{goto L679f87;}}
}
B679f47:L679f47:{c.instructions+=2;NFSU2_TR(0x679f47);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10200000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B679f4c:{NFSU2_TR(0x679f4c);
if(r1(R+518)){{goto L679f87;}}
}
B679f4e:L679f4e:{c.instructions+=2;NFSU2_TR(0x679f4e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10400000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B679f53:{NFSU2_TR(0x679f53);
if(r1(R+518)){{goto L679f87;}}
}
B679f55:L679f55:{c.instructions+=2;NFSU2_TR(0x679f55);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B679f5a:{NFSU2_TR(0x679f5a);
{goto L679f85;}
}
B679f5c:L679f5c:{c.instructions+=2;NFSU2_TR(0x679f5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B679f5f:{NFSU2_TR(0x679f5f);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x679eadu);}goto L679ead;}
}
B679f64:L679f64:{c.instructions+=2;NFSU2_TR(0x679f64);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20200000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B679f69:{NFSU2_TR(0x679f69);
if(r1(R+518)){{goto L679f87;}}
}
B679f6b:L679f6b:{c.instructions+=2;NFSU2_TR(0x679f6b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20300000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B679f70:{NFSU2_TR(0x679f70);
if(r1(R+518)){{goto L679f87;}}
}
B679f72:L679f72:{c.instructions+=2;NFSU2_TR(0x679f72);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20400000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B679f77:{NFSU2_TR(0x679f77);
if(r1(R+518)){{goto L679f87;}}
}
B679f79:L679f79:{c.instructions+=2;NFSU2_TR(0x679f79);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20500000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B679f7e:{NFSU2_TR(0x679f7e);
if(r1(R+518)){{goto L679f87;}}
}
B679f80:L679f80:{c.instructions+=1;NFSU2_TR(0x679f80);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x30000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B679f85:L679f85:{c.instructions+=1;NFSU2_TR(0x679f85);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L679f93;}}
}
B679f87:L679f87:{c.instructions+=5;NFSU2_TR(0x679f87);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B679f8a:{NFSU2_TR(0x679f8a);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B679f8b:{NFSU2_TR(0x679f8b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B679f8e:{NFSU2_TR(0x679f8e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B679f91:{NFSU2_TR(0x679f91);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x679f26u);}goto L679f26;}}
}
B679f93:L679f93:{c.instructions+=1;NFSU2_TR(0x679f93);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B679f95:L679f95:{c.instructions+=1;NFSU2_TR(0x679f95);
if(r1(R+518)){TAIL_STATIC(0x67a613u,67a);}
}
B679f9b:L679f9b:{c.instructions+=4;NFSU2_TR(0x679f9b);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B679f9d:{NFSU2_TR(0x679f9d);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B679f9f:{NFSU2_TR(0x679f9f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B679fa2:{NFSU2_TR(0x679fa2);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L679fbe;}}
}
B679fa4:L679fa4:{c.instructions+=4;NFSU2_TR(0x679fa4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B679fa7:{NFSU2_TR(0x679fa7);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B679faa:{NFSU2_TR(0x679faa);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B679fad:{NFSU2_TR(0x679fad);
if(r1(R+518)){{goto L679fb8;}}
}
B679faf:L679faf:{c.instructions+=3;NFSU2_TR(0x679faf);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B679fb2:{NFSU2_TR(0x679fb2);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+0))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B679fb5:{NFSU2_TR(0x679fb5);
if(r1(R+518)){{goto L679fb8;}}
}
B679fb7:L679fb7:{c.instructions+=1;NFSU2_TR(0x679fb7);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B679fb8:L679fb8:{c.instructions+=3;NFSU2_TR(0x679fb8);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B679fb9:{NFSU2_TR(0x679fb9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B679fbc:{NFSU2_TR(0x679fbc);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x679fa4u);}goto L679fa4;}}
}
B679fbe:L679fbe:{c.instructions+=4;NFSU2_TR(0x679fbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B679fc1:{NFSU2_TR(0x679fc1);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B679fc4:{NFSU2_TR(0x679fc4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B679fc5:{NFSU2_TR(0x679fc5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x679fcaull));
TAIL_STATIC(0x575620u,575);
}
B679fca:L679fca:{c.instructions+=5;NFSU2_TR(0x679fca);
__builtin_memmove((R+8),(R+0),4);
}
B679fcc:{NFSU2_TR(0x679fcc);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B679fce:{NFSU2_TR(0x679fce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B679fcf:{NFSU2_TR(0x679fcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B679fd2:{NFSU2_TR(0x679fd2);
if(r1(R+518)){TAIL_STATIC(0x67a61eu,67a);}
}
B679fd8:L679fd8:{c.instructions+=5;NFSU2_TR(0x679fd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B679fdb:{NFSU2_TR(0x679fdb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B679fdc:{NFSU2_TR(0x679fdc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B679fdd:{NFSU2_TR(0x679fdd);
__builtin_memmove((R+4),(R+12),4);
}
B679fdf:{NFSU2_TR(0x679fdf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x679fe4ull));
TAIL_STATIC(0x673b2cu,673);
}
B679fe4:L679fe4:{c.instructions+=3;NFSU2_TR(0x679fe4);
__builtin_memmove((R+24),(R+0),4);
}
B679fe6:{NFSU2_TR(0x679fe6);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B679fe8:{NFSU2_TR(0x679fe8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x67a623u,67a);}
}
B679fee:L679fee:{c.instructions+=3;NFSU2_TR(0x679fee);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B679ff0:{NFSU2_TR(0x679ff0);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B679ff3:{NFSU2_TR(0x679ff3);
__builtin_memmove((R+4),(R+8),4);
}
B679ff5:L679ff5:{c.instructions+=5;NFSU2_TR(0x679ff5);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffa0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B679ff9:{NFSU2_TR(0x679ff9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B679ffa:{NFSU2_TR(0x679ffa);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B679ffc:{NFSU2_TR(0x679ffc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x9ull))));
}
B679fff:{NFSU2_TR(0x679fff);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x679ff5u);}goto L679ff5;}}
TAIL_STATIC(0x67a001u,67a);
}
XIT:NFSU2_TR_EXIT(0x679,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
