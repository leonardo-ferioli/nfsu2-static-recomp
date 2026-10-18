#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_583(u8* __restrict R,Cpu& c);
u32 body_598(u8* __restrict R,Cpu& c);
u32 body_73d(u8* __restrict R,Cpu& c);
u32 body_741(u8* __restrict R,Cpu& c);
u32 body_742(u8* __restrict R,Cpu& c);
u32 body_743(u8* __restrict R,Cpu& c);
u32 body_745(u8* __restrict R,Cpu& c);
u32 body_74b(u8* __restrict R,Cpu& c);
u32 body_754(u8* __restrict R,Cpu& c);
u32 body_755(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_761(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x744,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x744,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_744(u8* __restrict R,Cpu& c);
u32 page_744(Cpu& c){return body_744(c.regs.data(),c);}
__attribute__((noinline)) u32 body_744(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x744002:goto L744002;
case 0x744004:c.instructions+=2;goto B744004;
case 0x744005:c.instructions+=1;goto B744005;
case 0x74400a:goto L74400a;
case 0x74400d:c.instructions+=6;goto B74400d;
case 0x744010:c.instructions+=5;goto B744010;
case 0x744017:c.instructions+=4;goto B744017;
case 0x744018:c.instructions+=3;goto B744018;
case 0x744019:c.instructions+=2;goto B744019;
case 0x74401a:c.instructions+=1;goto B74401a;
case 0x74401f:goto L74401f;
case 0x744025:c.instructions+=1;goto B744025;
case 0x744030:goto L744030;
case 0x744034:c.instructions+=4;goto B744034;
case 0x744036:c.instructions+=3;goto B744036;
case 0x744037:c.instructions+=2;goto B744037;
case 0x74403b:c.instructions+=1;goto B74403b;
case 0x74403d:goto L74403d;
case 0x744040:c.instructions+=5;goto B744040;
case 0x744041:c.instructions+=4;goto B744041;
case 0x744043:c.instructions+=3;goto B744043;
case 0x744046:c.instructions+=2;goto B744046;
case 0x744049:c.instructions+=1;goto B744049;
case 0x74404b:goto L74404b;
case 0x744050:goto L744050;
case 0x744053:c.instructions+=2;goto B744053;
case 0x744054:c.instructions+=1;goto B744054;
case 0x744055:goto L744055;
case 0x744058:c.instructions+=1;goto B744058;
case 0x74405d:goto L74405d;
case 0x744062:c.instructions+=1;goto B744062;
case 0x744065:goto L744065;
case 0x74406c:c.instructions+=2;goto B74406c;
case 0x74406d:c.instructions+=1;goto B74406d;
case 0x744070:goto L744070;
case 0x744076:c.instructions+=6;goto B744076;
case 0x744079:c.instructions+=5;goto B744079;
case 0x74407a:c.instructions+=4;goto B74407a;
case 0x74407f:c.instructions+=3;goto B74407f;
case 0x744080:c.instructions+=2;goto B744080;
case 0x744081:c.instructions+=1;goto B744081;
case 0x744086:goto L744086;
case 0x744089:c.instructions+=1;goto B744089;
case 0x744090:goto L744090;
case 0x744093:c.instructions+=7;goto B744093;
case 0x744094:c.instructions+=6;goto B744094;
case 0x744095:c.instructions+=5;goto B744095;
case 0x744096:c.instructions+=4;goto B744096;
case 0x744098:c.instructions+=3;goto B744098;
case 0x744099:c.instructions+=2;goto B744099;
case 0x74409f:c.instructions+=1;goto B74409f;
case 0x7440a4:goto L7440a4;
case 0x7440a8:c.instructions+=5;goto B7440a8;
case 0x7440aa:c.instructions+=4;goto B7440aa;
case 0x7440ab:c.instructions+=3;goto B7440ab;
case 0x7440b1:c.instructions+=2;goto B7440b1;
case 0x7440b2:c.instructions+=1;goto B7440b2;
case 0x7440b7:goto L7440b7;
case 0x7440bb:c.instructions+=9;goto B7440bb;
case 0x7440bc:c.instructions+=8;goto B7440bc;
case 0x7440c0:c.instructions+=7;goto B7440c0;
case 0x7440c6:c.instructions+=6;goto B7440c6;
case 0x7440ce:c.instructions+=5;goto B7440ce;
case 0x7440d6:c.instructions+=4;goto B7440d6;
case 0x7440de:c.instructions+=3;goto B7440de;
case 0x7440e6:c.instructions+=2;goto B7440e6;
case 0x7440ea:c.instructions+=1;goto B7440ea;
case 0x7440ef:goto L7440ef;
case 0x7440f5:c.instructions+=3;goto B7440f5;
case 0x7440f8:c.instructions+=2;goto B7440f8;
case 0x7440fa:c.instructions+=1;goto B7440fa;
case 0x7440fc:goto L7440fc;
case 0x7440fd:c.instructions+=1;goto B7440fd;
case 0x744102:goto L744102;
case 0x744105:c.instructions+=2;goto B744105;
case 0x744107:c.instructions+=1;goto B744107;
case 0x744109:goto L744109;
case 0x744110:goto L744110;
case 0x744111:c.instructions+=3;goto B744111;
case 0x744117:c.instructions+=2;goto B744117;
case 0x744118:c.instructions+=1;goto B744118;
case 0x74411d:goto L74411d;
case 0x74411e:c.instructions+=1;goto B74411e;
case 0x744123:goto L744123;
case 0x744129:c.instructions+=2;goto B744129;
case 0x74412a:c.instructions+=1;goto B74412a;
case 0x74412f:goto L74412f;
case 0x744132:c.instructions+=2;goto B744132;
case 0x744134:c.instructions+=1;goto B744134;
case 0x744136:goto L744136;
case 0x74413c:c.instructions+=2;goto B74413c;
case 0x74413e:c.instructions+=1;goto B74413e;
case 0x744140:goto L744140;
case 0x744141:c.instructions+=1;goto B744141;
case 0x744146:goto L744146;
case 0x744149:c.instructions+=2;goto B744149;
case 0x74414b:c.instructions+=1;goto B74414b;
case 0x74414d:goto L74414d;
case 0x744150:goto L744150;
case 0x744156:c.instructions+=3;goto B744156;
case 0x744157:c.instructions+=2;goto B744157;
case 0x744158:c.instructions+=1;goto B744158;
case 0x74415d:goto L74415d;
case 0x74415e:c.instructions+=1;goto B74415e;
case 0x744163:goto L744163;
case 0x744169:c.instructions+=2;goto B744169;
case 0x74416a:c.instructions+=1;goto B74416a;
case 0x74416f:goto L74416f;
case 0x744172:c.instructions+=2;goto B744172;
case 0x744174:c.instructions+=1;goto B744174;
case 0x744176:goto L744176;
case 0x744177:c.instructions+=4;goto B744177;
case 0x744178:c.instructions+=3;goto B744178;
case 0x744179:c.instructions+=2;goto B744179;
case 0x74417c:c.instructions+=1;goto B74417c;
case 0x744180:goto L744180;
case 0x744181:c.instructions+=5;goto B744181;
case 0x744183:c.instructions+=4;goto B744183;
case 0x744188:c.instructions+=3;goto B744188;
case 0x744189:c.instructions+=2;goto B744189;
case 0x74418b:c.instructions+=1;goto B74418b;
case 0x744190:goto L744190;
case 0x744193:c.instructions+=2;goto B744193;
case 0x744194:c.instructions+=1;goto B744194;
case 0x744199:goto L744199;
case 0x74419c:c.instructions+=5;goto B74419c;
case 0x74419e:c.instructions+=4;goto B74419e;
case 0x7441a3:c.instructions+=3;goto B7441a3;
case 0x7441a4:c.instructions+=2;goto B7441a4;
case 0x7441a6:c.instructions+=1;goto B7441a6;
case 0x7441ab:goto L7441ab;
case 0x7441ae:c.instructions+=2;goto B7441ae;
case 0x7441af:c.instructions+=1;goto B7441af;
case 0x7441b4:goto L7441b4;
case 0x7441b7:c.instructions+=5;goto B7441b7;
case 0x7441b9:c.instructions+=4;goto B7441b9;
case 0x7441be:c.instructions+=3;goto B7441be;
case 0x7441bf:c.instructions+=2;goto B7441bf;
case 0x7441c2:c.instructions+=1;goto B7441c2;
case 0x7441c7:goto L7441c7;
case 0x7441ca:c.instructions+=2;goto B7441ca;
case 0x7441cb:c.instructions+=1;goto B7441cb;
case 0x7441d0:goto L7441d0;
case 0x7441d3:c.instructions+=5;goto B7441d3;
case 0x7441d5:c.instructions+=4;goto B7441d5;
case 0x7441da:c.instructions+=3;goto B7441da;
case 0x7441db:c.instructions+=2;goto B7441db;
case 0x7441de:c.instructions+=1;goto B7441de;
case 0x7441e3:goto L7441e3;
case 0x7441e6:c.instructions+=2;goto B7441e6;
case 0x7441e7:c.instructions+=1;goto B7441e7;
case 0x7441ec:goto L7441ec;
case 0x7441ef:c.instructions+=8;goto B7441ef;
case 0x7441f4:c.instructions+=7;goto B7441f4;
case 0x7441f7:c.instructions+=6;goto B7441f7;
case 0x7441f9:c.instructions+=5;goto B7441f9;
case 0x7441fc:c.instructions+=4;goto B7441fc;
case 0x7441fd:c.instructions+=3;goto B7441fd;
case 0x744202:c.instructions+=2;goto B744202;
case 0x744203:c.instructions+=1;goto B744203;
case 0x744208:goto L744208;
case 0x74420b:c.instructions+=2;goto B74420b;
case 0x74420c:c.instructions+=1;goto B74420c;
case 0x744211:goto L744211;
case 0x744214:c.instructions+=4;goto B744214;
case 0x744216:c.instructions+=3;goto B744216;
case 0x74421b:c.instructions+=2;goto B74421b;
case 0x74421c:c.instructions+=1;goto B74421c;
case 0x744221:goto L744221;
case 0x744224:c.instructions+=2;goto B744224;
case 0x744225:c.instructions+=1;goto B744225;
case 0x74422a:goto L74422a;
case 0x74422d:c.instructions+=8;goto B74422d;
case 0x744232:c.instructions+=7;goto B744232;
case 0x744234:c.instructions+=6;goto B744234;
case 0x744237:c.instructions+=5;goto B744237;
case 0x744238:c.instructions+=4;goto B744238;
case 0x74423d:c.instructions+=3;goto B74423d;
case 0x74423e:c.instructions+=2;goto B74423e;
case 0x744241:c.instructions+=1;goto B744241;
case 0x744246:goto L744246;
case 0x744249:c.instructions+=2;goto B744249;
case 0x74424a:c.instructions+=1;goto B74424a;
case 0x74424f:goto L74424f;
case 0x744252:c.instructions+=7;goto B744252;
case 0x744257:c.instructions+=6;goto B744257;
case 0x744259:c.instructions+=5;goto B744259;
case 0x74425c:c.instructions+=4;goto B74425c;
case 0x74425d:c.instructions+=3;goto B74425d;
case 0x744262:c.instructions+=2;goto B744262;
case 0x744263:c.instructions+=1;goto B744263;
case 0x744268:goto L744268;
case 0x74426b:c.instructions+=2;goto B74426b;
case 0x74426c:c.instructions+=1;goto B74426c;
case 0x744271:goto L744271;
case 0x744274:c.instructions+=7;goto B744274;
case 0x744279:c.instructions+=6;goto B744279;
case 0x74427b:c.instructions+=5;goto B74427b;
case 0x74427e:c.instructions+=4;goto B74427e;
case 0x74427f:c.instructions+=3;goto B74427f;
case 0x744284:c.instructions+=2;goto B744284;
case 0x744285:c.instructions+=1;goto B744285;
case 0x74428a:goto L74428a;
case 0x74428d:c.instructions+=2;goto B74428d;
case 0x74428e:c.instructions+=1;goto B74428e;
case 0x744293:goto L744293;
case 0x744296:c.instructions+=2;goto B744296;
case 0x744297:c.instructions+=1;goto B744297;
case 0x7442a0:goto L7442a0;
case 0x7442a4:c.instructions+=7;goto B7442a4;
case 0x7442a7:c.instructions+=6;goto B7442a7;
case 0x7442aa:c.instructions+=5;goto B7442aa;
case 0x7442b0:c.instructions+=4;goto B7442b0;
case 0x7442b1:c.instructions+=3;goto B7442b1;
case 0x7442b5:c.instructions+=2;goto B7442b5;
case 0x7442b6:c.instructions+=1;goto B7442b6;
case 0x7442b8:goto L7442b8;
case 0x7442bb:c.instructions+=5;goto B7442bb;
case 0x7442bc:c.instructions+=4;goto B7442bc;
case 0x7442c2:c.instructions+=3;goto B7442c2;
case 0x7442c7:c.instructions+=2;goto B7442c7;
case 0x7442c8:c.instructions+=1;goto B7442c8;
case 0x7442cd:goto L7442cd;
case 0x7442d0:goto L7442d0;
case 0x7442d2:c.instructions+=8;goto B7442d2;
case 0x7442d3:c.instructions+=7;goto B7442d3;
case 0x7442d7:c.instructions+=6;goto B7442d7;
case 0x7442db:c.instructions+=5;goto B7442db;
case 0x7442e3:c.instructions+=4;goto B7442e3;
case 0x7442eb:c.instructions+=3;goto B7442eb;
case 0x7442ef:c.instructions+=2;goto B7442ef;
case 0x7442f3:c.instructions+=1;goto B7442f3;
case 0x7442f8:goto L7442f8;
case 0x7442fb:c.instructions+=4;goto B7442fb;
case 0x7442fc:c.instructions+=3;goto B7442fc;
case 0x7442fd:c.instructions+=2;goto B7442fd;
case 0x744300:c.instructions+=1;goto B744300;
case 0x744310:goto L744310;
case 0x744313:c.instructions+=9;goto B744313;
case 0x744314:c.instructions+=8;goto B744314;
case 0x744318:c.instructions+=7;goto B744318;
case 0x74431b:c.instructions+=6;goto B74431b;
case 0x74431c:c.instructions+=5;goto B74431c;
case 0x744321:c.instructions+=4;goto B744321;
case 0x744323:c.instructions+=3;goto B744323;
case 0x744325:c.instructions+=2;goto B744325;
case 0x744326:c.instructions+=1;goto B744326;
case 0x744328:goto L744328;
case 0x74432b:c.instructions+=9;goto B74432b;
case 0x74432f:c.instructions+=8;goto B74432f;
case 0x744330:c.instructions+=7;goto B744330;
case 0x744334:c.instructions+=6;goto B744334;
case 0x744338:c.instructions+=5;goto B744338;
case 0x744340:c.instructions+=4;goto B744340;
case 0x744348:c.instructions+=3;goto B744348;
case 0x74434c:c.instructions+=2;goto B74434c;
case 0x744350:c.instructions+=1;goto B744350;
case 0x744355:goto L744355;
case 0x744358:goto L744358;
case 0x74435a:c.instructions+=3;goto B74435a;
case 0x74435b:c.instructions+=2;goto B74435b;
case 0x74435c:c.instructions+=1;goto B74435c;
case 0x744361:goto L744361;
case 0x744364:c.instructions+=3;goto B744364;
case 0x74436a:c.instructions+=2;goto B74436a;
case 0x74436f:c.instructions+=1;goto B74436f;
case 0x744370:goto L744370;
case 0x744372:c.instructions+=2;goto B744372;
case 0x744374:c.instructions+=1;goto B744374;
case 0x744376:goto L744376;
case 0x744377:c.instructions+=1;goto B744377;
case 0x74437c:goto L74437c;
case 0x74437f:c.instructions+=2;goto B74437f;
case 0x744381:c.instructions+=1;goto B744381;
case 0x744383:goto L744383;
case 0x744386:c.instructions+=3;goto B744386;
case 0x744387:c.instructions+=2;goto B744387;
case 0x744388:c.instructions+=1;goto B744388;
case 0x74438d:goto L74438d;
case 0x74438e:c.instructions+=1;goto B74438e;
case 0x744393:goto L744393;
case 0x744395:c.instructions+=2;goto B744395;
case 0x744396:c.instructions+=1;goto B744396;
case 0x74439b:goto L74439b;
case 0x74439e:c.instructions+=2;goto B74439e;
case 0x7443a0:c.instructions+=1;goto B7443a0;
case 0x7443a2:goto L7443a2;
case 0x7443a5:c.instructions+=2;goto B7443a5;
case 0x7443a6:c.instructions+=1;goto B7443a6;
case 0x7443a8:goto L7443a8;
case 0x7443ae:c.instructions+=2;goto B7443ae;
case 0x7443af:c.instructions+=1;goto B7443af;
case 0x7443b1:goto L7443b1;
case 0x7443b7:c.instructions+=4;goto B7443b7;
case 0x7443ba:c.instructions+=3;goto B7443ba;
case 0x7443bb:c.instructions+=2;goto B7443bb;
case 0x7443c1:c.instructions+=1;goto B7443c1;
case 0x7443c6:goto L7443c6;
case 0x7443cc:c.instructions+=3;goto B7443cc;
case 0x7443cf:c.instructions+=2;goto B7443cf;
case 0x7443d1:c.instructions+=1;goto B7443d1;
case 0x7443d3:goto L7443d3;
case 0x7443d6:c.instructions+=7;goto B7443d6;
case 0x7443d9:c.instructions+=6;goto B7443d9;
case 0x7443df:c.instructions+=5;goto B7443df;
case 0x7443e5:c.instructions+=4;goto B7443e5;
case 0x7443eb:c.instructions+=3;goto B7443eb;
case 0x7443f2:c.instructions+=2;goto B7443f2;
case 0x7443f7:c.instructions+=1;goto B7443f7;
case 0x7443f9:goto L7443f9;
case 0x7443fb:goto L7443fb;
case 0x7443fc:c.instructions+=4;goto B7443fc;
case 0x7443fd:c.instructions+=3;goto B7443fd;
case 0x7443fe:c.instructions+=2;goto B7443fe;
case 0x744401:c.instructions+=1;goto B744401;
case 0x744410:goto L744410;
case 0x744414:c.instructions+=4;goto B744414;
case 0x744416:c.instructions+=3;goto B744416;
case 0x74441c:c.instructions+=2;goto B74441c;
case 0x74441d:c.instructions+=1;goto B74441d;
case 0x744420:goto L744420;
case 0x744423:c.instructions+=1;goto B744423;
case 0x744425:goto L744425;
case 0x744426:c.instructions+=3;goto B744426;
case 0x744429:c.instructions+=2;goto B744429;
case 0x74442c:c.instructions+=1;goto B74442c;
case 0x74442e:goto L74442e;
case 0x744431:c.instructions+=2;goto B744431;
case 0x744432:c.instructions+=1;goto B744432;
case 0x744433:goto L744433;
case 0x744437:c.instructions+=11;goto B744437;
case 0x74443a:c.instructions+=10;goto B74443a;
case 0x74443d:c.instructions+=9;goto B74443d;
case 0x744443:c.instructions+=8;goto B744443;
case 0x744447:c.instructions+=7;goto B744447;
case 0x74444d:c.instructions+=6;goto B74444d;
case 0x744451:c.instructions+=5;goto B744451;
case 0x744458:c.instructions+=4;goto B744458;
case 0x74445b:c.instructions+=3;goto B74445b;
case 0x744460:c.instructions+=2;goto B744460;
case 0x744461:c.instructions+=1;goto B744461;
case 0x744470:goto L744470;
case 0x744474:c.instructions+=2;goto B744474;
case 0x744479:c.instructions+=1;goto B744479;
case 0x74447b:goto L74447b;
case 0x74447e:c.instructions+=1;goto B74447e;
case 0x744480:goto L744480;
case 0x744484:c.instructions+=4;goto B744484;
case 0x744487:c.instructions+=3;goto B744487;
case 0x74448e:c.instructions+=2;goto B74448e;
case 0x744491:c.instructions+=1;goto B744491;
case 0x744493:goto L744493;
case 0x744499:c.instructions+=2;goto B744499;
case 0x74449e:c.instructions+=1;goto B74449e;
case 0x74449f:goto L74449f;
case 0x7444a1:c.instructions+=1;goto B7444a1;
case 0x7444b0:goto L7444b0;
case 0x7444b4:c.instructions+=4;goto B7444b4;
case 0x7444b8:c.instructions+=3;goto B7444b8;
case 0x7444bb:c.instructions+=2;goto B7444bb;
case 0x7444be:c.instructions+=1;goto B7444be;
case 0x7444c0:goto L7444c0;
case 0x7444c4:c.instructions+=3;goto B7444c4;
case 0x7444c6:c.instructions+=2;goto B7444c6;
case 0x7444c8:c.instructions+=1;goto B7444c8;
case 0x7444ca:goto L7444ca;
case 0x7444cd:c.instructions+=1;goto B7444cd;
case 0x7444cf:goto L7444cf;
case 0x7444d3:c.instructions+=11;goto B7444d3;
case 0x7444d6:c.instructions+=10;goto B7444d6;
case 0x7444d7:c.instructions+=9;goto B7444d7;
case 0x7444da:c.instructions+=8;goto B7444da;
case 0x7444de:c.instructions+=7;goto B7444de;
case 0x7444e4:c.instructions+=6;goto B7444e4;
case 0x7444e8:c.instructions+=5;goto B7444e8;
case 0x7444ef:c.instructions+=4;goto B7444ef;
case 0x7444f4:c.instructions+=3;goto B7444f4;
case 0x7444f9:c.instructions+=2;goto B7444f9;
case 0x7444fc:c.instructions+=1;goto B7444fc;
case 0x744501:goto L744501;
case 0x744503:c.instructions+=4;goto B744503;
case 0x744505:c.instructions+=3;goto B744505;
case 0x744507:c.instructions+=2;goto B744507;
case 0x74450d:c.instructions+=1;goto B74450d;
case 0x744512:goto L744512;
case 0x744518:c.instructions+=4;goto B744518;
case 0x744519:c.instructions+=3;goto B744519;
case 0x74451a:c.instructions+=2;goto B74451a;
case 0x744520:c.instructions+=1;goto B744520;
case 0x744525:goto L744525;
case 0x74452b:c.instructions+=2;goto B74452b;
case 0x74452e:c.instructions+=1;goto B74452e;
case 0x74452f:goto L74452f;
case 0x744530:goto L744530;
case 0x744531:c.instructions+=3;goto B744531;
case 0x744535:c.instructions+=2;goto B744535;
case 0x744537:c.instructions+=1;goto B744537;
case 0x74453d:goto L74453d;
case 0x744540:c.instructions+=1;goto B744540;
case 0x744546:goto L744546;
case 0x744547:c.instructions+=3;goto B744547;
case 0x74454b:c.instructions+=2;goto B74454b;
case 0x74454d:c.instructions+=1;goto B74454d;
case 0x744553:goto L744553;
case 0x744554:c.instructions+=2;goto B744554;
case 0x744555:c.instructions+=1;goto B744555;
case 0x74455a:goto L74455a;
case 0x74455c:c.instructions+=2;goto B74455c;
case 0x74455d:c.instructions+=1;goto B74455d;
case 0x744562:goto L744562;
case 0x744565:c.instructions+=2;goto B744565;
case 0x744567:c.instructions+=1;goto B744567;
case 0x744569:goto L744569;
case 0x744570:goto L744570;
case 0x744571:c.instructions+=2;goto B744571;
case 0x744572:c.instructions+=1;goto B744572;
case 0x744577:goto L744577;
case 0x744578:c.instructions+=1;goto B744578;
case 0x74457d:goto L74457d;
case 0x74457e:c.instructions+=1;goto B74457e;
case 0x744583:goto L744583;
case 0x744586:c.instructions+=2;goto B744586;
case 0x744588:c.instructions+=1;goto B744588;
case 0x74458a:goto L74458a;
case 0x74458b:c.instructions+=1;goto B74458b;
case 0x744590:goto L744590;
case 0x744591:c.instructions+=1;goto B744591;
case 0x744596:goto L744596;
case 0x74459a:c.instructions+=7;goto B74459a;
case 0x74459d:c.instructions+=6;goto B74459d;
case 0x7445a4:c.instructions+=5;goto B7445a4;
case 0x7445a7:c.instructions+=4;goto B7445a7;
case 0x7445aa:c.instructions+=3;goto B7445aa;
case 0x7445ac:c.instructions+=2;goto B7445ac;
case 0x7445ad:c.instructions+=1;goto B7445ad;
case 0x7445af:goto L7445af;
case 0x7445b9:c.instructions+=1;goto B7445b9;
case 0x7445c3:goto L7445c3;
case 0x7445ca:c.instructions+=2;goto B7445ca;
case 0x7445d4:c.instructions+=1;goto B7445d4;
case 0x7445db:goto L7445db;
case 0x7445dc:goto L7445dc;
case 0x7445dd:c.instructions+=1;goto B7445dd;
case 0x7445e0:goto L7445e0;
case 0x7445e4:c.instructions+=2;goto B7445e4;
case 0x7445e6:c.instructions+=1;goto B7445e6;
case 0x7445e8:goto L7445e8;
case 0x7445eb:c.instructions+=1;goto B7445eb;
case 0x7445ed:goto L7445ed;
case 0x7445f1:c.instructions+=4;goto B7445f1;
case 0x7445f4:c.instructions+=3;goto B7445f4;
case 0x7445fb:c.instructions+=2;goto B7445fb;
case 0x7445fd:c.instructions+=1;goto B7445fd;
case 0x7445ff:goto L7445ff;
case 0x744603:c.instructions+=3;goto B744603;
case 0x744604:c.instructions+=2;goto B744604;
case 0x744605:c.instructions+=1;goto B744605;
case 0x74460a:goto L74460a;
case 0x74460d:c.instructions+=1;goto B74460d;
case 0x74460e:goto L74460e;
case 0x744610:c.instructions+=1;goto B744610;
case 0x744620:goto L744620;
case 0x744624:c.instructions+=2;goto B744624;
case 0x744629:c.instructions+=1;goto B744629;
case 0x74462f:goto L74462f;
case 0x744634:c.instructions+=1;goto B744634;
case 0x744636:goto L744636;
case 0x74463b:c.instructions+=1;goto B74463b;
case 0x74463d:goto L74463d;
case 0x744641:c.instructions+=2;goto B744641;
case 0x744646:c.instructions+=1;goto B744646;
case 0x744647:goto L744647;
case 0x74464c:c.instructions+=1;goto B74464c;
case 0x74464e:goto L74464e;
case 0x744652:c.instructions+=2;goto B744652;
case 0x744657:c.instructions+=1;goto B744657;
case 0x744658:goto L744658;
case 0x74465d:c.instructions+=1;goto B74465d;
case 0x74465f:goto L74465f;
case 0x744663:c.instructions+=2;goto B744663;
case 0x744668:c.instructions+=1;goto B744668;
case 0x744669:goto L744669;
case 0x74466e:c.instructions+=1;goto B74466e;
case 0x744670:goto L744670;
case 0x744674:c.instructions+=2;goto B744674;
case 0x744679:c.instructions+=1;goto B744679;
case 0x74467a:goto L74467a;
case 0x74467f:c.instructions+=1;goto B74467f;
case 0x744681:goto L744681;
case 0x744685:c.instructions+=2;goto B744685;
case 0x74468a:c.instructions+=1;goto B74468a;
case 0x74468b:goto L74468b;
case 0x744690:c.instructions+=1;goto B744690;
case 0x744692:goto L744692;
case 0x744696:c.instructions+=2;goto B744696;
case 0x74469b:c.instructions+=1;goto B74469b;
case 0x74469c:goto L74469c;
case 0x7446a1:c.instructions+=1;goto B7446a1;
case 0x7446a3:goto L7446a3;
case 0x7446a7:c.instructions+=2;goto B7446a7;
case 0x7446ac:c.instructions+=1;goto B7446ac;
case 0x7446ad:goto L7446ad;
case 0x7446af:c.instructions+=1;goto B7446af;
case 0x7446b0:goto L7446b0;
case 0x7446b4:c.instructions+=2;goto B7446b4;
case 0x7446b9:c.instructions+=1;goto B7446b9;
case 0x7446c0:goto L7446c0;
case 0x7446c6:c.instructions+=7;goto B7446c6;
case 0x7446cb:c.instructions+=6;goto B7446cb;
case 0x7446cc:c.instructions+=5;goto B7446cc;
case 0x7446d3:c.instructions+=4;goto B7446d3;
case 0x7446da:c.instructions+=3;goto B7446da;
case 0x7446dd:c.instructions+=2;goto B7446dd;
case 0x7446e2:c.instructions+=1;goto B7446e2;
case 0x7446e4:goto L7446e4;
case 0x7446e9:c.instructions+=1;goto B7446e9;
case 0x7446eb:goto L7446eb;
case 0x7446f0:c.instructions+=1;goto B7446f0;
case 0x7446f2:goto L7446f2;
case 0x7446f7:c.instructions+=1;goto B7446f7;
case 0x7446f9:goto L7446f9;
case 0x7446fc:c.instructions+=3;goto B7446fc;
case 0x7446fd:c.instructions+=2;goto B7446fd;
case 0x744704:c.instructions+=1;goto B744704;
case 0x744709:goto L744709;
case 0x74470f:c.instructions+=1;goto B74470f;
case 0x744710:goto L744710;
case 0x744717:c.instructions+=7;goto B744717;
case 0x74471e:c.instructions+=6;goto B74471e;
case 0x74471f:c.instructions+=5;goto B74471f;
case 0x744726:c.instructions+=4;goto B744726;
case 0x744727:c.instructions+=3;goto B744727;
case 0x744728:c.instructions+=2;goto B744728;
case 0x744729:c.instructions+=1;goto B744729;
case 0x74472e:goto L74472e;
case 0x744731:c.instructions+=3;goto B744731;
case 0x744733:c.instructions+=2;goto B744733;
case 0x744737:c.instructions+=1;goto B744737;
case 0x744739:goto L744739;
case 0x74473a:c.instructions+=4;goto B74473a;
case 0x74473f:c.instructions+=3;goto B74473f;
case 0x744740:c.instructions+=2;goto B744740;
case 0x744747:c.instructions+=1;goto B744747;
case 0x74474c:goto L74474c;
case 0x744752:c.instructions+=1;goto B744752;
case 0x744753:goto L744753;
case 0x744759:c.instructions+=3;goto B744759;
case 0x74475a:c.instructions+=2;goto B74475a;
case 0x74475b:c.instructions+=1;goto B74475b;
case 0x74475d:goto L74475d;
case 0x744763:c.instructions+=1;goto B744763;
case 0x744765:goto L744765;
case 0x74476b:c.instructions+=1;goto B74476b;
case 0x744771:goto L744771;
case 0x744774:c.instructions+=5;goto B744774;
case 0x744775:c.instructions+=4;goto B744775;
case 0x744779:c.instructions+=3;goto B744779;
case 0x74477e:c.instructions+=2;goto B74477e;
case 0x74477f:c.instructions+=1;goto B74477f;
case 0x744784:goto L744784;
case 0x74478b:c.instructions+=5;goto B74478b;
case 0x74478c:c.instructions+=4;goto B74478c;
case 0x744790:c.instructions+=3;goto B744790;
case 0x744795:c.instructions+=2;goto B744795;
case 0x744796:c.instructions+=1;goto B744796;
case 0x74479b:goto L74479b;
case 0x74479e:c.instructions+=8;goto B74479e;
case 0x7447a3:c.instructions+=7;goto B7447a3;
case 0x7447a5:c.instructions+=6;goto B7447a5;
case 0x7447a9:c.instructions+=5;goto B7447a9;
case 0x7447aa:c.instructions+=4;goto B7447aa;
case 0x7447ae:c.instructions+=3;goto B7447ae;
case 0x7447b3:c.instructions+=2;goto B7447b3;
case 0x7447b4:c.instructions+=1;goto B7447b4;
case 0x7447b9:goto L7447b9;
case 0x7447bc:c.instructions+=2;goto B7447bc;
case 0x7447bd:c.instructions+=1;goto B7447bd;
case 0x7447c2:goto L7447c2;
case 0x7447c5:c.instructions+=5;goto B7447c5;
case 0x7447c8:c.instructions+=4;goto B7447c8;
case 0x7447cb:c.instructions+=3;goto B7447cb;
case 0x7447cd:c.instructions+=2;goto B7447cd;
case 0x7447d1:c.instructions+=1;goto B7447d1;
case 0x7447d3:goto L7447d3;
case 0x7447d4:c.instructions+=7;goto B7447d4;
case 0x7447da:c.instructions+=6;goto B7447da;
case 0x7447db:c.instructions+=5;goto B7447db;
case 0x7447e0:c.instructions+=4;goto B7447e0;
case 0x7447e4:c.instructions+=3;goto B7447e4;
case 0x7447e9:c.instructions+=2;goto B7447e9;
case 0x7447ea:c.instructions+=1;goto B7447ea;
case 0x7447ef:goto L7447ef;
case 0x7447f5:c.instructions+=6;goto B7447f5;
case 0x7447f6:c.instructions+=5;goto B7447f6;
case 0x7447fb:c.instructions+=4;goto B7447fb;
case 0x7447ff:c.instructions+=3;goto B7447ff;
case 0x744804:c.instructions+=2;goto B744804;
case 0x744805:c.instructions+=1;goto B744805;
case 0x74480a:goto L74480a;
case 0x74480d:c.instructions+=2;goto B74480d;
case 0x744811:c.instructions+=1;goto B744811;
case 0x744813:goto L744813;
case 0x744815:c.instructions+=8;goto B744815;
case 0x744817:c.instructions+=7;goto B744817;
case 0x744818:c.instructions+=6;goto B744818;
case 0x74481c:c.instructions+=5;goto B74481c;
case 0x74481d:c.instructions+=4;goto B74481d;
case 0x74481f:c.instructions+=3;goto B74481f;
case 0x744820:c.instructions+=2;goto B744820;
case 0x744825:c.instructions+=1;goto B744825;
case 0x74482a:goto L74482a;
case 0x74482e:c.instructions+=6;goto B74482e;
case 0x74482f:c.instructions+=5;goto B74482f;
case 0x744834:c.instructions+=4;goto B744834;
case 0x744838:c.instructions+=3;goto B744838;
case 0x74483d:c.instructions+=2;goto B74483d;
case 0x74483e:c.instructions+=1;goto B74483e;
case 0x744843:goto L744843;
case 0x744846:c.instructions+=2;goto B744846;
case 0x74484a:c.instructions+=1;goto B74484a;
case 0x74484c:goto L74484c;
case 0x744853:goto L744853;
case 0x744859:c.instructions+=1;goto B744859;
case 0x74485f:goto L74485f;
case 0x744861:c.instructions+=3;goto B744861;
case 0x744866:c.instructions+=2;goto B744866;
case 0x744867:c.instructions+=1;goto B744867;
case 0x74486c:goto L74486c;
case 0x74486f:c.instructions+=2;goto B74486f;
case 0x744870:c.instructions+=1;goto B744870;
case 0x744875:goto L744875;
case 0x744878:c.instructions+=2;goto B744878;
case 0x74487b:c.instructions+=1;goto B74487b;
case 0x74487d:goto L74487d;
case 0x744880:c.instructions+=1;goto B744880;
case 0x744882:goto L744882;
case 0x744885:c.instructions+=4;goto B744885;
case 0x74488c:c.instructions+=3;goto B74488c;
case 0x74488e:c.instructions+=2;goto B74488e;
case 0x744891:c.instructions+=1;goto B744891;
case 0x744893:goto L744893;
case 0x744894:c.instructions+=1;goto B744894;
case 0x744899:goto L744899;
case 0x74489c:c.instructions+=2;goto B74489c;
case 0x74489e:c.instructions+=1;goto B74489e;
case 0x7448a0:goto L7448a0;
case 0x7448a1:c.instructions+=3;goto B7448a1;
case 0x7448a7:c.instructions+=2;goto B7448a7;
case 0x7448a8:c.instructions+=1;goto B7448a8;
case 0x7448ad:goto L7448ad;
case 0x7448ae:c.instructions+=1;goto B7448ae;
case 0x7448b3:goto L7448b3;
case 0x7448b9:c.instructions+=2;goto B7448b9;
case 0x7448ba:c.instructions+=1;goto B7448ba;
case 0x7448bf:goto L7448bf;
case 0x7448c2:c.instructions+=2;goto B7448c2;
case 0x7448c4:c.instructions+=1;goto B7448c4;
case 0x7448c6:goto L7448c6;
case 0x7448cc:c.instructions+=4;goto B7448cc;
case 0x7448cd:c.instructions+=3;goto B7448cd;
case 0x7448d7:c.instructions+=2;goto B7448d7;
case 0x7448dd:c.instructions+=1;goto B7448dd;
case 0x7448e2:goto L7448e2;
case 0x7448e8:c.instructions+=1;goto B7448e8;
case 0x7448ee:goto L7448ee;
case 0x7448f4:c.instructions+=2;goto B7448f4;
case 0x7448f6:c.instructions+=1;goto B7448f6;
case 0x7448fc:goto L7448fc;
case 0x744901:c.instructions+=6;goto B744901;
case 0x744903:c.instructions+=5;goto B744903;
case 0x744907:c.instructions+=4;goto B744907;
case 0x744908:c.instructions+=3;goto B744908;
case 0x74490d:c.instructions+=2;goto B74490d;
case 0x74490e:c.instructions+=1;goto B74490e;
case 0x744913:goto L744913;
case 0x744916:c.instructions+=2;goto B744916;
case 0x744917:c.instructions+=1;goto B744917;
case 0x74491c:goto L74491c;
case 0x744920:c.instructions+=3;goto B744920;
case 0x744923:c.instructions+=2;goto B744923;
case 0x744925:c.instructions+=1;goto B744925;
case 0x74492b:goto L74492b;
case 0x744931:c.instructions+=2;goto B744931;
case 0x744932:c.instructions+=1;goto B744932;
case 0x744937:goto L744937;
case 0x74493d:c.instructions+=3;goto B74493d;
case 0x74493f:c.instructions+=2;goto B74493f;
case 0x744940:c.instructions+=1;goto B744940;
case 0x744945:goto L744945;
case 0x744948:c.instructions+=2;goto B744948;
case 0x74494a:c.instructions+=1;goto B74494a;
case 0x74494c:goto L74494c;
case 0x744950:goto L744950;
case 0x744956:c.instructions+=3;goto B744956;
case 0x744957:c.instructions+=2;goto B744957;
case 0x744958:c.instructions+=1;goto B744958;
case 0x74495d:goto L74495d;
case 0x74495f:c.instructions+=5;goto B74495f;
case 0x744963:c.instructions+=4;goto B744963;
case 0x744964:c.instructions+=3;goto B744964;
case 0x744967:c.instructions+=2;goto B744967;
case 0x744968:c.instructions+=1;goto B744968;
case 0x74496d:goto L74496d;
case 0x744970:c.instructions+=2;goto B744970;
case 0x744972:c.instructions+=1;goto B744972;
case 0x744974:goto L744974;
case 0x74497a:c.instructions+=3;goto B74497a;
case 0x74497c:c.instructions+=2;goto B74497c;
case 0x74497d:c.instructions+=1;goto B74497d;
case 0x744982:goto L744982;
case 0x744985:c.instructions+=2;goto B744985;
case 0x744987:c.instructions+=1;goto B744987;
case 0x744989:goto L744989;
case 0x74498b:goto L74498b;
case 0x74498c:c.instructions+=4;goto B74498c;
case 0x744990:c.instructions+=3;goto B744990;
case 0x744995:c.instructions+=2;goto B744995;
case 0x744996:c.instructions+=1;goto B744996;
case 0x74499b:goto L74499b;
case 0x74499d:c.instructions+=6;goto B74499d;
case 0x74499e:c.instructions+=5;goto B74499e;
case 0x7449a3:c.instructions+=4;goto B7449a3;
case 0x7449a7:c.instructions+=3;goto B7449a7;
case 0x7449ac:c.instructions+=2;goto B7449ac;
case 0x7449ad:c.instructions+=1;goto B7449ad;
case 0x7449b2:goto L7449b2;
case 0x7449b5:c.instructions+=1;goto B7449b5;
case 0x7449b9:goto L7449b9;
case 0x7449bb:c.instructions+=6;goto B7449bb;
case 0x7449bd:c.instructions+=5;goto B7449bd;
case 0x7449be:c.instructions+=4;goto B7449be;
case 0x7449c0:c.instructions+=3;goto B7449c0;
case 0x7449c1:c.instructions+=2;goto B7449c1;
case 0x7449c2:c.instructions+=1;goto B7449c2;
case 0x7449c7:goto L7449c7;
case 0x7449cb:c.instructions+=8;goto B7449cb;
case 0x7449ce:c.instructions+=7;goto B7449ce;
case 0x7449d5:c.instructions+=6;goto B7449d5;
case 0x7449d8:c.instructions+=5;goto B7449d8;
case 0x7449d9:c.instructions+=4;goto B7449d9;
case 0x7449da:c.instructions+=3;goto B7449da;
case 0x7449db:c.instructions+=2;goto B7449db;
case 0x7449dc:c.instructions+=1;goto B7449dc;
case 0x7449e1:goto L7449e1;
case 0x7449e7:c.instructions+=1;goto B7449e7;
case 0x7449f0:goto L7449f0;
case 0x7449f3:c.instructions+=14;goto B7449f3;
case 0x7449f8:c.instructions+=13;goto B7449f8;
case 0x7449f9:c.instructions+=12;goto B7449f9;
case 0x7449fa:c.instructions+=11;goto B7449fa;
case 0x7449fe:c.instructions+=10;goto B7449fe;
case 0x7449ff:c.instructions+=9;goto B7449ff;
case 0x744a03:c.instructions+=8;goto B744a03;
case 0x744a04:c.instructions+=7;goto B744a04;
case 0x744a06:c.instructions+=6;goto B744a06;
case 0x744a0a:c.instructions+=5;goto B744a0a;
case 0x744a0c:c.instructions+=4;goto B744a0c;
case 0x744a11:c.instructions+=3;goto B744a11;
case 0x744a16:c.instructions+=2;goto B744a16;
case 0x744a18:c.instructions+=1;goto B744a18;
case 0x744a19:goto L744a19;
case 0x744a1b:goto L744a1b;
case 0x744a20:goto L744a20;
case 0x744a23:c.instructions+=2;goto B744a23;
case 0x744a24:c.instructions+=1;goto B744a24;
case 0x744a29:goto L744a29;
case 0x744a2c:c.instructions+=8;goto B744a2c;
case 0x744a31:c.instructions+=7;goto B744a31;
case 0x744a34:c.instructions+=6;goto B744a34;
case 0x744a36:c.instructions+=5;goto B744a36;
case 0x744a39:c.instructions+=4;goto B744a39;
case 0x744a3a:c.instructions+=3;goto B744a3a;
case 0x744a3f:c.instructions+=2;goto B744a3f;
case 0x744a40:c.instructions+=1;goto B744a40;
case 0x744a45:goto L744a45;
case 0x744a48:c.instructions+=2;goto B744a48;
case 0x744a49:c.instructions+=1;goto B744a49;
case 0x744a4e:goto L744a4e;
case 0x744a51:c.instructions+=7;goto B744a51;
case 0x744a56:c.instructions+=6;goto B744a56;
case 0x744a58:c.instructions+=5;goto B744a58;
case 0x744a5b:c.instructions+=4;goto B744a5b;
case 0x744a5c:c.instructions+=3;goto B744a5c;
case 0x744a61:c.instructions+=2;goto B744a61;
case 0x744a62:c.instructions+=1;goto B744a62;
case 0x744a67:goto L744a67;
case 0x744a6a:c.instructions+=2;goto B744a6a;
case 0x744a6b:c.instructions+=1;goto B744a6b;
case 0x744a70:goto L744a70;
case 0x744a73:c.instructions+=7;goto B744a73;
case 0x744a78:c.instructions+=6;goto B744a78;
case 0x744a7a:c.instructions+=5;goto B744a7a;
case 0x744a7d:c.instructions+=4;goto B744a7d;
case 0x744a7e:c.instructions+=3;goto B744a7e;
case 0x744a83:c.instructions+=2;goto B744a83;
case 0x744a84:c.instructions+=1;goto B744a84;
case 0x744a89:goto L744a89;
case 0x744a8c:c.instructions+=2;goto B744a8c;
case 0x744a8d:c.instructions+=1;goto B744a8d;
case 0x744a92:goto L744a92;
case 0x744a95:c.instructions+=7;goto B744a95;
case 0x744a9a:c.instructions+=6;goto B744a9a;
case 0x744a9f:c.instructions+=5;goto B744a9f;
case 0x744aa5:c.instructions+=4;goto B744aa5;
case 0x744aa6:c.instructions+=3;goto B744aa6;
case 0x744aab:c.instructions+=2;goto B744aab;
case 0x744aac:c.instructions+=1;goto B744aac;
case 0x744ab1:goto L744ab1;
case 0x744ab4:c.instructions+=2;goto B744ab4;
case 0x744ab5:c.instructions+=1;goto B744ab5;
case 0x744aba:goto L744aba;
case 0x744abd:c.instructions+=4;goto B744abd;
case 0x744abf:c.instructions+=3;goto B744abf;
case 0x744ac4:c.instructions+=2;goto B744ac4;
case 0x744ac5:c.instructions+=1;goto B744ac5;
case 0x744aca:goto L744aca;
case 0x744acd:c.instructions+=2;goto B744acd;
case 0x744ace:c.instructions+=1;goto B744ace;
case 0x744ad3:goto L744ad3;
case 0x744ad6:c.instructions+=5;goto B744ad6;
case 0x744ad8:c.instructions+=4;goto B744ad8;
case 0x744add:c.instructions+=3;goto B744add;
case 0x744ade:c.instructions+=2;goto B744ade;
case 0x744ae1:c.instructions+=1;goto B744ae1;
case 0x744ae6:goto L744ae6;
case 0x744ae9:c.instructions+=2;goto B744ae9;
case 0x744aea:c.instructions+=1;goto B744aea;
case 0x744aef:goto L744aef;
case 0x744af2:c.instructions+=5;goto B744af2;
case 0x744af4:c.instructions+=4;goto B744af4;
case 0x744af9:c.instructions+=3;goto B744af9;
case 0x744afa:c.instructions+=2;goto B744afa;
case 0x744b00:c.instructions+=1;goto B744b00;
case 0x744b05:goto L744b05;
case 0x744b08:c.instructions+=2;goto B744b08;
case 0x744b09:c.instructions+=1;goto B744b09;
case 0x744b0e:goto L744b0e;
case 0x744b11:c.instructions+=5;goto B744b11;
case 0x744b13:c.instructions+=4;goto B744b13;
case 0x744b18:c.instructions+=3;goto B744b18;
case 0x744b19:c.instructions+=2;goto B744b19;
case 0x744b1f:c.instructions+=1;goto B744b1f;
case 0x744b24:goto L744b24;
case 0x744b27:c.instructions+=2;goto B744b27;
case 0x744b28:c.instructions+=1;goto B744b28;
case 0x744b2d:goto L744b2d;
case 0x744b30:c.instructions+=5;goto B744b30;
case 0x744b32:c.instructions+=4;goto B744b32;
case 0x744b37:c.instructions+=3;goto B744b37;
case 0x744b38:c.instructions+=2;goto B744b38;
case 0x744b3e:c.instructions+=1;goto B744b3e;
case 0x744b43:goto L744b43;
case 0x744b46:c.instructions+=2;goto B744b46;
case 0x744b47:c.instructions+=1;goto B744b47;
case 0x744b4c:goto L744b4c;
case 0x744b4f:c.instructions+=5;goto B744b4f;
case 0x744b51:c.instructions+=4;goto B744b51;
case 0x744b56:c.instructions+=3;goto B744b56;
case 0x744b57:c.instructions+=2;goto B744b57;
case 0x744b5d:c.instructions+=1;goto B744b5d;
case 0x744b62:goto L744b62;
case 0x744b65:c.instructions+=2;goto B744b65;
case 0x744b66:c.instructions+=1;goto B744b66;
case 0x744b6b:goto L744b6b;
case 0x744b6e:c.instructions+=5;goto B744b6e;
case 0x744b70:c.instructions+=4;goto B744b70;
case 0x744b75:c.instructions+=3;goto B744b75;
case 0x744b76:c.instructions+=2;goto B744b76;
case 0x744b7c:c.instructions+=1;goto B744b7c;
case 0x744b81:goto L744b81;
case 0x744b84:c.instructions+=2;goto B744b84;
case 0x744b85:c.instructions+=1;goto B744b85;
case 0x744b8a:goto L744b8a;
case 0x744b8d:c.instructions+=5;goto B744b8d;
case 0x744b8f:c.instructions+=4;goto B744b8f;
case 0x744b94:c.instructions+=3;goto B744b94;
case 0x744b95:c.instructions+=2;goto B744b95;
case 0x744b9b:c.instructions+=1;goto B744b9b;
case 0x744ba0:goto L744ba0;
case 0x744ba3:c.instructions+=2;goto B744ba3;
case 0x744ba4:c.instructions+=1;goto B744ba4;
case 0x744ba9:goto L744ba9;
case 0x744bac:c.instructions+=5;goto B744bac;
case 0x744bae:c.instructions+=4;goto B744bae;
case 0x744bb3:c.instructions+=3;goto B744bb3;
case 0x744bb4:c.instructions+=2;goto B744bb4;
case 0x744bba:c.instructions+=1;goto B744bba;
case 0x744bbf:goto L744bbf;
case 0x744bc2:c.instructions+=2;goto B744bc2;
case 0x744bc3:c.instructions+=1;goto B744bc3;
case 0x744bc8:goto L744bc8;
case 0x744bcb:c.instructions+=8;goto B744bcb;
case 0x744bd0:c.instructions+=7;goto B744bd0;
case 0x744bd2:c.instructions+=6;goto B744bd2;
case 0x744bd8:c.instructions+=5;goto B744bd8;
case 0x744bd9:c.instructions+=4;goto B744bd9;
case 0x744bde:c.instructions+=3;goto B744bde;
case 0x744bdf:c.instructions+=2;goto B744bdf;
case 0x744be5:c.instructions+=1;goto B744be5;
case 0x744bea:goto L744bea;
case 0x744bed:c.instructions+=2;goto B744bed;
case 0x744bee:c.instructions+=1;goto B744bee;
case 0x744bf3:goto L744bf3;
case 0x744bf9:c.instructions+=4;goto B744bf9;
case 0x744bfc:c.instructions+=3;goto B744bfc;
case 0x744bfe:c.instructions+=2;goto B744bfe;
case 0x744c00:c.instructions+=1;goto B744c00;
case 0x744c06:goto L744c06;
case 0x744c0c:c.instructions+=1;goto B744c0c;
case 0x744c10:goto L744c10;
case 0x744c11:c.instructions+=4;goto B744c11;
case 0x744c15:c.instructions+=3;goto B744c15;
case 0x744c1a:c.instructions+=2;goto B744c1a;
case 0x744c1b:c.instructions+=1;goto B744c1b;
case 0x744c20:goto L744c20;
case 0x744c23:c.instructions+=5;goto B744c23;
case 0x744c25:c.instructions+=4;goto B744c25;
case 0x744c29:c.instructions+=3;goto B744c29;
case 0x744c2a:c.instructions+=2;goto B744c2a;
case 0x744c2b:c.instructions+=1;goto B744c2b;
case 0x744c30:goto L744c30;
case 0x744c33:c.instructions+=2;goto B744c33;
case 0x744c34:c.instructions+=1;goto B744c34;
case 0x744c39:goto L744c39;
case 0x744c3a:c.instructions+=5;goto B744c3a;
case 0x744c3e:c.instructions+=4;goto B744c3e;
case 0x744c43:c.instructions+=3;goto B744c43;
case 0x744c44:c.instructions+=2;goto B744c44;
case 0x744c47:c.instructions+=1;goto B744c47;
case 0x744c4c:goto L744c4c;
case 0x744c4f:c.instructions+=7;goto B744c4f;
case 0x744c54:c.instructions+=6;goto B744c54;
case 0x744c56:c.instructions+=5;goto B744c56;
case 0x744c57:c.instructions+=4;goto B744c57;
case 0x744c5b:c.instructions+=3;goto B744c5b;
case 0x744c5c:c.instructions+=2;goto B744c5c;
case 0x744c5d:c.instructions+=1;goto B744c5d;
case 0x744c62:goto L744c62;
case 0x744c65:c.instructions+=2;goto B744c65;
case 0x744c66:c.instructions+=1;goto B744c66;
case 0x744c6b:goto L744c6b;
case 0x744c6c:c.instructions+=4;goto B744c6c;
case 0x744c70:c.instructions+=3;goto B744c70;
case 0x744c75:c.instructions+=2;goto B744c75;
case 0x744c76:c.instructions+=1;goto B744c76;
case 0x744c7b:goto L744c7b;
case 0x744c7e:c.instructions+=5;goto B744c7e;
case 0x744c80:c.instructions+=4;goto B744c80;
case 0x744c84:c.instructions+=3;goto B744c84;
case 0x744c85:c.instructions+=2;goto B744c85;
case 0x744c86:c.instructions+=1;goto B744c86;
case 0x744c8b:goto L744c8b;
case 0x744c8e:c.instructions+=2;goto B744c8e;
case 0x744c8f:c.instructions+=1;goto B744c8f;
case 0x744c94:goto L744c94;
case 0x744c95:c.instructions+=5;goto B744c95;
case 0x744c99:c.instructions+=4;goto B744c99;
case 0x744c9e:c.instructions+=3;goto B744c9e;
case 0x744c9f:c.instructions+=2;goto B744c9f;
case 0x744ca2:c.instructions+=1;goto B744ca2;
case 0x744ca7:goto L744ca7;
case 0x744caa:c.instructions+=5;goto B744caa;
case 0x744cac:c.instructions+=4;goto B744cac;
case 0x744cb0:c.instructions+=3;goto B744cb0;
case 0x744cb1:c.instructions+=2;goto B744cb1;
case 0x744cb2:c.instructions+=1;goto B744cb2;
case 0x744cb7:goto L744cb7;
case 0x744cba:c.instructions+=2;goto B744cba;
case 0x744cbb:c.instructions+=1;goto B744cbb;
case 0x744cc0:goto L744cc0;
case 0x744cc1:c.instructions+=5;goto B744cc1;
case 0x744cc5:c.instructions+=4;goto B744cc5;
case 0x744cca:c.instructions+=3;goto B744cca;
case 0x744ccb:c.instructions+=2;goto B744ccb;
case 0x744cce:c.instructions+=1;goto B744cce;
case 0x744cd3:goto L744cd3;
case 0x744cd6:c.instructions+=8;goto B744cd6;
case 0x744cdb:c.instructions+=7;goto B744cdb;
case 0x744cdd:c.instructions+=6;goto B744cdd;
case 0x744ce0:c.instructions+=5;goto B744ce0;
case 0x744ce1:c.instructions+=4;goto B744ce1;
case 0x744ce5:c.instructions+=3;goto B744ce5;
case 0x744ce6:c.instructions+=2;goto B744ce6;
case 0x744ce7:c.instructions+=1;goto B744ce7;
case 0x744cec:goto L744cec;
case 0x744cef:c.instructions+=2;goto B744cef;
case 0x744cf0:c.instructions+=1;goto B744cf0;
case 0x744cf5:goto L744cf5;
case 0x744cf6:c.instructions+=4;goto B744cf6;
case 0x744cfb:c.instructions+=3;goto B744cfb;
case 0x744cff:c.instructions+=2;goto B744cff;
case 0x744d00:c.instructions+=1;goto B744d00;
case 0x744d05:goto L744d05;
case 0x744d08:c.instructions+=5;goto B744d08;
case 0x744d0a:c.instructions+=4;goto B744d0a;
case 0x744d0e:c.instructions+=3;goto B744d0e;
case 0x744d0f:c.instructions+=2;goto B744d0f;
case 0x744d10:c.instructions+=1;goto B744d10;
case 0x744d15:goto L744d15;
case 0x744d18:c.instructions+=2;goto B744d18;
case 0x744d19:c.instructions+=1;goto B744d19;
case 0x744d1e:goto L744d1e;
case 0x744d1f:c.instructions+=5;goto B744d1f;
case 0x744d22:c.instructions+=4;goto B744d22;
case 0x744d26:c.instructions+=3;goto B744d26;
case 0x744d2b:c.instructions+=2;goto B744d2b;
case 0x744d2c:c.instructions+=1;goto B744d2c;
case 0x744d31:goto L744d31;
case 0x744d34:c.instructions+=8;goto B744d34;
case 0x744d39:c.instructions+=7;goto B744d39;
case 0x744d3b:c.instructions+=6;goto B744d3b;
case 0x744d3e:c.instructions+=5;goto B744d3e;
case 0x744d3f:c.instructions+=4;goto B744d3f;
case 0x744d43:c.instructions+=3;goto B744d43;
case 0x744d44:c.instructions+=2;goto B744d44;
case 0x744d45:c.instructions+=1;goto B744d45;
case 0x744d4a:goto L744d4a;
case 0x744d4d:c.instructions+=2;goto B744d4d;
case 0x744d4e:c.instructions+=1;goto B744d4e;
case 0x744d53:goto L744d53;
case 0x744d54:c.instructions+=4;goto B744d54;
case 0x744d58:c.instructions+=3;goto B744d58;
case 0x744d5d:c.instructions+=2;goto B744d5d;
case 0x744d5e:c.instructions+=1;goto B744d5e;
case 0x744d63:goto L744d63;
case 0x744d66:c.instructions+=5;goto B744d66;
case 0x744d68:c.instructions+=4;goto B744d68;
case 0x744d6c:c.instructions+=3;goto B744d6c;
case 0x744d6d:c.instructions+=2;goto B744d6d;
case 0x744d6e:c.instructions+=1;goto B744d6e;
case 0x744d73:goto L744d73;
case 0x744d76:c.instructions+=2;goto B744d76;
case 0x744d77:c.instructions+=1;goto B744d77;
case 0x744d7c:goto L744d7c;
case 0x744d7f:c.instructions+=6;goto B744d7f;
case 0x744d82:c.instructions+=5;goto B744d82;
case 0x744d88:c.instructions+=4;goto B744d88;
case 0x744d89:c.instructions+=3;goto B744d89;
case 0x744d8c:c.instructions+=2;goto B744d8c;
case 0x744d8e:c.instructions+=1;goto B744d8e;
case 0x744d94:goto L744d94;
case 0x744d9a:c.instructions+=3;goto B744d9a;
case 0x744d9c:c.instructions+=2;goto B744d9c;
case 0x744d9e:c.instructions+=1;goto B744d9e;
case 0x744da0:goto L744da0;
case 0x744da6:goto L744da6;
case 0x744da7:c.instructions+=4;goto B744da7;
case 0x744dab:c.instructions+=3;goto B744dab;
case 0x744db0:c.instructions+=2;goto B744db0;
case 0x744db1:c.instructions+=1;goto B744db1;
case 0x744db6:goto L744db6;
case 0x744db9:c.instructions+=5;goto B744db9;
case 0x744dbb:c.instructions+=4;goto B744dbb;
case 0x744dbf:c.instructions+=3;goto B744dbf;
case 0x744dc0:c.instructions+=2;goto B744dc0;
case 0x744dc1:c.instructions+=1;goto B744dc1;
case 0x744dc6:goto L744dc6;
case 0x744dc9:c.instructions+=2;goto B744dc9;
case 0x744dca:c.instructions+=1;goto B744dca;
case 0x744dcf:goto L744dcf;
case 0x744dd0:c.instructions+=5;goto B744dd0;
case 0x744dd4:c.instructions+=4;goto B744dd4;
case 0x744dd9:c.instructions+=3;goto B744dd9;
case 0x744dda:c.instructions+=2;goto B744dda;
case 0x744ddd:c.instructions+=1;goto B744ddd;
case 0x744de2:goto L744de2;
case 0x744de5:c.instructions+=7;goto B744de5;
case 0x744de7:c.instructions+=6;goto B744de7;
case 0x744de9:c.instructions+=5;goto B744de9;
case 0x744dea:c.instructions+=4;goto B744dea;
case 0x744dee:c.instructions+=3;goto B744dee;
case 0x744def:c.instructions+=2;goto B744def;
case 0x744df0:c.instructions+=1;goto B744df0;
case 0x744df5:goto L744df5;
case 0x744df8:c.instructions+=2;goto B744df8;
case 0x744df9:c.instructions+=1;goto B744df9;
case 0x744dfe:goto L744dfe;
case 0x744e04:c.instructions+=5;goto B744e04;
case 0x744e07:c.instructions+=4;goto B744e07;
case 0x744e08:c.instructions+=3;goto B744e08;
case 0x744e0b:c.instructions+=2;goto B744e0b;
case 0x744e0d:c.instructions+=1;goto B744e0d;
case 0x744e0f:goto L744e0f;
case 0x744e14:c.instructions+=2;goto B744e14;
case 0x744e15:c.instructions+=1;goto B744e15;
case 0x744e1a:goto L744e1a;
case 0x744e1d:c.instructions+=2;goto B744e1d;
case 0x744e1f:c.instructions+=1;goto B744e1f;
case 0x744e21:goto L744e21;
case 0x744e26:c.instructions+=5;goto B744e26;
case 0x744e28:c.instructions+=4;goto B744e28;
case 0x744e2b:c.instructions+=3;goto B744e2b;
case 0x744e2c:c.instructions+=2;goto B744e2c;
case 0x744e2d:c.instructions+=1;goto B744e2d;
case 0x744e32:goto L744e32;
case 0x744e35:c.instructions+=6;goto B744e35;
case 0x744e36:c.instructions+=5;goto B744e36;
case 0x744e37:c.instructions+=4;goto B744e37;
case 0x744e38:c.instructions+=3;goto B744e38;
case 0x744e39:c.instructions+=2;goto B744e39;
case 0x744e3d:c.instructions+=1;goto B744e3d;
case 0x744e42:goto L744e42;
case 0x744e45:c.instructions+=1;goto B744e45;
case 0x744e46:goto L744e46;
case 0x744e4c:c.instructions+=9;goto B744e4c;
case 0x744e4d:c.instructions+=8;goto B744e4d;
case 0x744e53:c.instructions+=7;goto B744e53;
case 0x744e54:c.instructions+=6;goto B744e54;
case 0x744e5a:c.instructions+=5;goto B744e5a;
case 0x744e5b:c.instructions+=4;goto B744e5b;
case 0x744e60:c.instructions+=3;goto B744e60;
case 0x744e63:c.instructions+=2;goto B744e63;
case 0x744e64:c.instructions+=1;goto B744e64;
case 0x744e69:goto L744e69;
case 0x744e6d:c.instructions+=6;goto B744e6d;
case 0x744e70:c.instructions+=5;goto B744e70;
case 0x744e71:c.instructions+=4;goto B744e71;
case 0x744e72:c.instructions+=3;goto B744e72;
case 0x744e73:c.instructions+=2;goto B744e73;
case 0x744e74:c.instructions+=1;goto B744e74;
case 0x744e79:goto L744e79;
case 0x744e7c:c.instructions+=1;goto B744e7c;
case 0x744e80:goto L744e80;
case 0x744e84:c.instructions+=2;goto B744e84;
case 0x744e86:c.instructions+=1;goto B744e86;
case 0x744e88:goto L744e88;
case 0x744e8d:goto L744e8d;
case 0x744e8e:c.instructions+=34;goto B744e8e;
case 0x744e90:c.instructions+=33;goto B744e90;
case 0x744e93:c.instructions+=32;goto B744e93;
case 0x744e95:c.instructions+=31;goto B744e95;
case 0x744e97:c.instructions+=30;goto B744e97;
case 0x744e9a:c.instructions+=29;goto B744e9a;
case 0x744e9c:c.instructions+=28;goto B744e9c;
case 0x744e9e:c.instructions+=27;goto B744e9e;
case 0x744ea1:c.instructions+=26;goto B744ea1;
case 0x744ea4:c.instructions+=25;goto B744ea4;
case 0x744ea6:c.instructions+=24;goto B744ea6;
case 0x744ea9:c.instructions+=23;goto B744ea9;
case 0x744eab:c.instructions+=22;goto B744eab;
case 0x744ead:c.instructions+=21;goto B744ead;
case 0x744eb0:c.instructions+=20;goto B744eb0;
case 0x744eb2:c.instructions+=19;goto B744eb2;
case 0x744eb4:c.instructions+=18;goto B744eb4;
case 0x744eb7:c.instructions+=17;goto B744eb7;
case 0x744eba:c.instructions+=16;goto B744eba;
case 0x744ebc:c.instructions+=15;goto B744ebc;
case 0x744ebe:c.instructions+=14;goto B744ebe;
case 0x744ec1:c.instructions+=13;goto B744ec1;
case 0x744ec3:c.instructions+=12;goto B744ec3;
case 0x744ec4:c.instructions+=11;goto B744ec4;
case 0x744ec8:c.instructions+=10;goto B744ec8;
case 0x744ecb:c.instructions+=9;goto B744ecb;
case 0x744ecd:c.instructions+=8;goto B744ecd;
case 0x744ecf:c.instructions+=7;goto B744ecf;
case 0x744ed1:c.instructions+=6;goto B744ed1;
case 0x744ed4:c.instructions+=5;goto B744ed4;
case 0x744ed7:c.instructions+=4;goto B744ed7;
case 0x744edb:c.instructions+=3;goto B744edb;
case 0x744edc:c.instructions+=2;goto B744edc;
case 0x744edd:c.instructions+=1;goto B744edd;
case 0x744ee0:goto L744ee0;
case 0x744ee4:c.instructions+=9;goto B744ee4;
case 0x744ee5:c.instructions+=8;goto B744ee5;
case 0x744ee9:c.instructions+=7;goto B744ee9;
case 0x744eec:c.instructions+=6;goto B744eec;
case 0x744eed:c.instructions+=5;goto B744eed;
case 0x744ef1:c.instructions+=4;goto B744ef1;
case 0x744ef2:c.instructions+=3;goto B744ef2;
case 0x744ef3:c.instructions+=2;goto B744ef3;
case 0x744ef4:c.instructions+=1;goto B744ef4;
case 0x744ef7:goto L744ef7;
case 0x744efa:c.instructions+=3;goto B744efa;
case 0x744efd:c.instructions+=2;goto B744efd;
case 0x744f02:c.instructions+=1;goto B744f02;
case 0x744f04:goto L744f04;
case 0x744f07:c.instructions+=1;goto B744f07;
case 0x744f09:goto L744f09;
case 0x744f0c:c.instructions+=4;goto B744f0c;
case 0x744f13:c.instructions+=3;goto B744f13;
case 0x744f16:c.instructions+=2;goto B744f16;
case 0x744f1d:c.instructions+=1;goto B744f1d;
case 0x744f1f:goto L744f1f;
case 0x744f25:goto L744f25;
case 0x744f26:c.instructions+=1;goto B744f26;
case 0x744f2b:goto L744f2b;
case 0x744f2e:c.instructions+=3;goto B744f2e;
case 0x744f2f:c.instructions+=2;goto B744f2f;
case 0x744f30:c.instructions+=1;goto B744f30;
case 0x744f40:goto L744f40;
case 0x744f41:c.instructions+=2;goto B744f41;
case 0x744f43:c.instructions+=1;goto B744f43;
case 0x744f48:goto L744f48;
case 0x744f4a:c.instructions+=3;goto B744f4a;
case 0x744f4d:c.instructions+=2;goto B744f4d;
case 0x744f4f:c.instructions+=1;goto B744f4f;
case 0x744f51:goto L744f51;
case 0x744f55:c.instructions+=4;goto B744f55;
case 0x744f56:c.instructions+=3;goto B744f56;
case 0x744f58:c.instructions+=2;goto B744f58;
case 0x744f5d:c.instructions+=1;goto B744f5d;
case 0x744f5f:goto L744f5f;
case 0x744f61:goto L744f61;
case 0x744f65:c.instructions+=11;goto B744f65;
case 0x744f69:c.instructions+=10;goto B744f69;
case 0x744f6a:c.instructions+=9;goto B744f6a;
case 0x744f6b:c.instructions+=8;goto B744f6b;
case 0x744f70:c.instructions+=7;goto B744f70;
case 0x744f73:c.instructions+=6;goto B744f73;
case 0x744f77:c.instructions+=5;goto B744f77;
case 0x744f78:c.instructions+=4;goto B744f78;
case 0x744f79:c.instructions+=3;goto B744f79;
case 0x744f80:c.instructions+=2;goto B744f80;
case 0x744f83:c.instructions+=1;goto B744f83;
case 0x744f88:goto L744f88;
case 0x744f8b:c.instructions+=3;goto B744f8b;
case 0x744f8e:c.instructions+=2;goto B744f8e;
case 0x744f8f:c.instructions+=1;goto B744f8f;
case 0x744f90:goto L744f90;
case 0x744f93:c.instructions+=2;goto B744f93;
case 0x744f94:c.instructions+=1;goto B744f94;
case 0x744fa0:goto L744fa0;
case 0x744fa5:c.instructions+=1;goto B744fa5;
case 0x744fa7:goto L744fa7;
case 0x744faa:c.instructions+=1;goto B744faa;
case 0x744fac:goto L744fac;
case 0x744fb3:c.instructions+=3;goto B744fb3;
case 0x744fb8:c.instructions+=2;goto B744fb8;
case 0x744fbb:c.instructions+=1;goto B744fbb;
case 0x744fbd:goto L744fbd;
case 0x744fc0:c.instructions+=1;goto B744fc0;
case 0x744fc2:goto L744fc2;
case 0x744fc5:c.instructions+=3;goto B744fc5;
case 0x744fcc:c.instructions+=2;goto B744fcc;
case 0x744fcf:c.instructions+=1;goto B744fcf;
case 0x744fd1:goto L744fd1;
case 0x744fd7:goto L744fd7;
case 0x744fd8:c.instructions+=1;goto B744fd8;
case 0x744fdd:goto L744fdd;
case 0x744fe0:c.instructions+=2;goto B744fe0;
case 0x744fe5:c.instructions+=1;goto B744fe5;
case 0x744fe6:goto L744fe6;
case 0x744fe8:c.instructions+=1;goto B744fe8;
case 0x744ff0:goto L744ff0;
case 0x744ff1:c.instructions+=2;goto B744ff1;
case 0x744ff6:c.instructions+=1;goto B744ff6;
case 0x744ffb:goto L744ffb;
case 0x744ffd:c.instructions+=1;goto B744ffd;
default:missing_instruction(c.pc);}
B744002:L744002:{c.instructions+=3;NFSU2_TR(0x744002);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744004:{NFSU2_TR(0x744004);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744005:{NFSU2_TR(0x744005);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74400aull));
TAIL_STATIC(0x73d990u,73d);
}
B74400a:L74400a:{c.instructions+=7;NFSU2_TR(0x74400a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74400d:{NFSU2_TR(0x74400d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B744010:{NFSU2_TR(0x744010);
u8 U[8];
w4(U+0,u32(u32(u32(0x288ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B744017:{NFSU2_TR(0x744017);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B744018:{NFSU2_TR(0x744018);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B744019:{NFSU2_TR(0x744019);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B74401a:{NFSU2_TR(0x74401a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74401full));
TAIL_STATIC(0x76115eu,761);
}
B74401f:L74401f:{c.instructions+=2;NFSU2_TR(0x74401f);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x280ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x280ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x280ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B744025:{NFSU2_TR(0x744025);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B744030:L744030:{c.instructions+=5;NFSU2_TR(0x744030);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B744034:{NFSU2_TR(0x744034);
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
B744036:{NFSU2_TR(0x744036);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744037:{NFSU2_TR(0x744037);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B74403b:{NFSU2_TR(0x74403b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L744055;}}
}
B74403d:L74403d:{c.instructions+=6;NFSU2_TR(0x74403d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B744040:{NFSU2_TR(0x744040);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B744041:{NFSU2_TR(0x744041);
__builtin_memmove((R+0),(R+4),4);
}
B744043:{NFSU2_TR(0x744043);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x3ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B744046:{NFSU2_TR(0x744046);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B744049:{NFSU2_TR(0x744049);
if(r1(R+518)){{goto L744065;}}
}
B74404b:L74404b:{c.instructions+=1;NFSU2_TR(0x74404b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744050ull));
TAIL_STATIC(0x74b730u,74b);
}
B744050:L744050:{c.instructions+=3;NFSU2_TR(0x744050);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B744053:{NFSU2_TR(0x744053);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B744054:{NFSU2_TR(0x744054);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B744055:L744055:{c.instructions+=2;NFSU2_TR(0x744055);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B744058:{NFSU2_TR(0x744058);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74405dull));
TAIL_STATIC(0x74b730u,74b);
}
B74405d:L74405d:{c.instructions+=2;NFSU2_TR(0x74405d);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x7530ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x7530ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x7530ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B744062:{NFSU2_TR(0x744062);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B744065:L744065:{c.instructions+=3;NFSU2_TR(0x744065);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B74406c:{NFSU2_TR(0x74406c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74406d:{NFSU2_TR(0x74406d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B744070:L744070:{c.instructions+=7;NFSU2_TR(0x744070);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1434ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B744076:{NFSU2_TR(0x744076);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B744079:{NFSU2_TR(0x744079);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74407a:{NFSU2_TR(0x74407a);
u8 U[4];
w4(U+0,u32(0x744030ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74407f:{NFSU2_TR(0x74407f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744080:{NFSU2_TR(0x744080);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744081:{NFSU2_TR(0x744081);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744086ull));
TAIL_STATIC(0x74b2d0u,74b);
}
B744086:L744086:{c.instructions+=2;NFSU2_TR(0x744086);
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
B744089:{NFSU2_TR(0x744089);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B744090:L744090:{c.instructions+=8;NFSU2_TR(0x744090);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B744093:{NFSU2_TR(0x744093);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744094:{NFSU2_TR(0x744094);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744095:{NFSU2_TR(0x744095);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744096:{NFSU2_TR(0x744096);
__builtin_memmove((R+12),(R+8),4);
}
B744098:{NFSU2_TR(0x744098);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744099:{NFSU2_TR(0x744099);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1108ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74409f:{NFSU2_TR(0x74409f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7440a4ull));
TAIL_STATIC(0x743d20u,743);
}
B7440a4:L7440a4:{c.instructions+=6;NFSU2_TR(0x7440a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7440a8:{NFSU2_TR(0x7440a8);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7440aa:{NFSU2_TR(0x7440aa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7440ab:{NFSU2_TR(0x7440ab);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1110ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7440b1:{NFSU2_TR(0x7440b1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7440b2:{NFSU2_TR(0x7440b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7440b7ull));
TAIL_STATIC(0x75c840u,75c);
}
B7440b7:L7440b7:{c.instructions+=10;NFSU2_TR(0x7440b7);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7440bb:{NFSU2_TR(0x7440bb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7440bc:{NFSU2_TR(0x7440bc);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B7440c0:{NFSU2_TR(0x7440c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x110cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7440c6:{NFSU2_TR(0x7440c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7440ce:{NFSU2_TR(0x7440ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7440d6:{NFSU2_TR(0x7440d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x6d6f7665ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7440de:{NFSU2_TR(0x7440de);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7440e6:{NFSU2_TR(0x7440e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7440ea:{NFSU2_TR(0x7440ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7440efull));
TAIL_STATIC(0x743d90u,743);
}
B7440ef:L7440ef:{c.instructions+=4;NFSU2_TR(0x7440ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1174ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7440f5:{NFSU2_TR(0x7440f5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B7440f8:{NFSU2_TR(0x7440f8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7440fa:{NFSU2_TR(0x7440fa);
if(r1(R+518)){{goto L744136;}}
}
B7440fc:L7440fc:{c.instructions+=2;NFSU2_TR(0x7440fc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7440fd:{NFSU2_TR(0x7440fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744102ull));
TAIL_STATIC(0x754e10u,754);
}
B744102:L744102:{c.instructions+=3;NFSU2_TR(0x744102);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B744105:{NFSU2_TR(0x744105);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B744107:{NFSU2_TR(0x744107);
if(r1(R+518)){{goto L744136;}}
}
B744109:L744109:{c.instructions+=1;NFSU2_TR(0x744109);
__builtin_memmove((R+16),(R+16),4);
}
B744110:L744110:{c.instructions+=4;NFSU2_TR(0x744110);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744111:{NFSU2_TR(0x744111);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1178ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B744117:{NFSU2_TR(0x744117);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744118:{NFSU2_TR(0x744118);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74411dull));
TAIL_STATIC(0x73d890u,73d);
}
B74411d:L74411d:{c.instructions+=2;NFSU2_TR(0x74411d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74411e:{NFSU2_TR(0x74411e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744123ull));
TAIL_STATIC(0x598ec0u,598);
}
B744123:L744123:{c.instructions+=3;NFSU2_TR(0x744123);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1174ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B744129:{NFSU2_TR(0x744129);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74412a:{NFSU2_TR(0x74412a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74412full));
TAIL_STATIC(0x754e10u,754);
}
B74412f:L74412f:{c.instructions+=3;NFSU2_TR(0x74412f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B744132:{NFSU2_TR(0x744132);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B744134:{NFSU2_TR(0x744134);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x744110u);}goto L744110;}}
}
B744136:L744136:{c.instructions+=3;NFSU2_TR(0x744136);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x11c4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74413c:{NFSU2_TR(0x74413c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74413e:{NFSU2_TR(0x74413e);
if(r1(R+518)){{goto L744176;}}
}
B744140:L744140:{c.instructions+=2;NFSU2_TR(0x744140);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744141:{NFSU2_TR(0x744141);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744146ull));
TAIL_STATIC(0x754e10u,754);
}
B744146:L744146:{c.instructions+=3;NFSU2_TR(0x744146);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B744149:{NFSU2_TR(0x744149);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74414b:{NFSU2_TR(0x74414b);
if(r1(R+518)){{goto L744176;}}
}
B74414d:L74414d:{c.instructions+=1;NFSU2_TR(0x74414d);
__builtin_memmove((R+4),(R+4),4);
}
B744150:L744150:{c.instructions+=4;NFSU2_TR(0x744150);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x11c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B744156:{NFSU2_TR(0x744156);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744157:{NFSU2_TR(0x744157);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744158:{NFSU2_TR(0x744158);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74415dull));
TAIL_STATIC(0x73d890u,73d);
}
B74415d:L74415d:{c.instructions+=2;NFSU2_TR(0x74415d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74415e:{NFSU2_TR(0x74415e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744163ull));
TAIL_STATIC(0x598ec0u,598);
}
B744163:L744163:{c.instructions+=3;NFSU2_TR(0x744163);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x11c4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B744169:{NFSU2_TR(0x744169);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74416a:{NFSU2_TR(0x74416a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74416full));
TAIL_STATIC(0x754e10u,754);
}
B74416f:L74416f:{c.instructions+=3;NFSU2_TR(0x74416f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B744172:{NFSU2_TR(0x744172);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B744174:{NFSU2_TR(0x744174);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x744150u);}goto L744150;}}
}
B744176:L744176:{c.instructions+=5;NFSU2_TR(0x744176);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B744177:{NFSU2_TR(0x744177);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B744178:{NFSU2_TR(0x744178);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B744179:{NFSU2_TR(0x744179);
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
B74417c:{NFSU2_TR(0x74417c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B744180:L744180:{c.instructions+=6;NFSU2_TR(0x744180);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744181:{NFSU2_TR(0x744181);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744183:{NFSU2_TR(0x744183);
u8 U[4];
w4(U+0,u32(0x7b3b88ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744188:{NFSU2_TR(0x744188);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744189:{NFSU2_TR(0x744189);
__builtin_memmove((R+28),(R+0),4);
}
B74418b:{NFSU2_TR(0x74418b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744190ull));
TAIL_STATIC(0x7414a0u,741);
}
B744190:L744190:{c.instructions+=3;NFSU2_TR(0x744190);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B744193:{NFSU2_TR(0x744193);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744194:{NFSU2_TR(0x744194);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744199ull));
TAIL_STATIC(0x7420b0u,742);
}
B744199:L744199:{c.instructions+=6;NFSU2_TR(0x744199);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74419c:{NFSU2_TR(0x74419c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74419e:{NFSU2_TR(0x74419e);
u8 U[4];
w4(U+0,u32(0x7a1784ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7441a3:{NFSU2_TR(0x7441a3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7441a4:{NFSU2_TR(0x7441a4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B7441a6:{NFSU2_TR(0x7441a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7441abull));
TAIL_STATIC(0x7414a0u,741);
}
B7441ab:L7441ab:{c.instructions+=3;NFSU2_TR(0x7441ab);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B7441ae:{NFSU2_TR(0x7441ae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7441af:{NFSU2_TR(0x7441af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7441b4ull));
TAIL_STATIC(0x7420b0u,742);
}
B7441b4:L7441b4:{c.instructions+=6;NFSU2_TR(0x7441b4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B7441b7:{NFSU2_TR(0x7441b7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7441b9:{NFSU2_TR(0x7441b9);
u8 U[4];
w4(U+0,u32(0x7d28f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7441be:{NFSU2_TR(0x7441be);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7441bf:{NFSU2_TR(0x7441bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7441c2:{NFSU2_TR(0x7441c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7441c7ull));
TAIL_STATIC(0x7414a0u,741);
}
B7441c7:L7441c7:{c.instructions+=3;NFSU2_TR(0x7441c7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B7441ca:{NFSU2_TR(0x7441ca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7441cb:{NFSU2_TR(0x7441cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7441d0ull));
TAIL_STATIC(0x742100u,742);
}
B7441d0:L7441d0:{c.instructions+=6;NFSU2_TR(0x7441d0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B7441d3:{NFSU2_TR(0x7441d3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7441d5:{NFSU2_TR(0x7441d5);
u8 U[4];
w4(U+0,u32(0x7d28f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7441da:{NFSU2_TR(0x7441da);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7441db:{NFSU2_TR(0x7441db);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7441de:{NFSU2_TR(0x7441de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7441e3ull));
TAIL_STATIC(0x7414a0u,741);
}
B7441e3:L7441e3:{c.instructions+=3;NFSU2_TR(0x7441e3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B7441e6:{NFSU2_TR(0x7441e6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7441e7:{NFSU2_TR(0x7441e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7441ecull));
TAIL_STATIC(0x742100u,742);
}
B7441ec:L7441ec:{c.instructions+=9;NFSU2_TR(0x7441ec);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B7441ef:{NFSU2_TR(0x7441ef);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7441f4:{NFSU2_TR(0x7441f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7441f7:{NFSU2_TR(0x7441f7);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7441f9:{NFSU2_TR(0x7441f9);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7441fc:{NFSU2_TR(0x7441fc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7441fd:{NFSU2_TR(0x7441fd);
u8 U[4];
w4(U+0,u32(0x7d28f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744202:{NFSU2_TR(0x744202);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744203:{NFSU2_TR(0x744203);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744208ull));
TAIL_STATIC(0x7414a0u,741);
}
B744208:L744208:{c.instructions+=3;NFSU2_TR(0x744208);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74420b:{NFSU2_TR(0x74420b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74420c:{NFSU2_TR(0x74420c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744211ull));
TAIL_STATIC(0x742360u,742);
}
B744211:L744211:{c.instructions+=5;NFSU2_TR(0x744211);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B744214:{NFSU2_TR(0x744214);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744216:{NFSU2_TR(0x744216);
u8 U[4];
w4(U+0,u32(0x7d28ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74421b:{NFSU2_TR(0x74421b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74421c:{NFSU2_TR(0x74421c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744221ull));
TAIL_STATIC(0x7414a0u,741);
}
B744221:L744221:{c.instructions+=3;NFSU2_TR(0x744221);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B744224:{NFSU2_TR(0x744224);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744225:{NFSU2_TR(0x744225);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74422aull));
TAIL_STATIC(0x7420b0u,742);
}
B74422a:L74422a:{c.instructions+=9;NFSU2_TR(0x74422a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74422d:{NFSU2_TR(0x74422d);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744232:{NFSU2_TR(0x744232);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744234:{NFSU2_TR(0x744234);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((R+4),(U+0),4);
}
B744237:{NFSU2_TR(0x744237);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744238:{NFSU2_TR(0x744238);
u8 U[4];
w4(U+0,u32(0x7a15f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74423d:{NFSU2_TR(0x74423d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74423e:{NFSU2_TR(0x74423e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B744241:{NFSU2_TR(0x744241);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744246ull));
TAIL_STATIC(0x7414a0u,741);
}
B744246:L744246:{c.instructions+=3;NFSU2_TR(0x744246);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B744249:{NFSU2_TR(0x744249);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74424a:{NFSU2_TR(0x74424a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74424full));
TAIL_STATIC(0x742360u,742);
}
B74424f:L74424f:{c.instructions+=8;NFSU2_TR(0x74424f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B744252:{NFSU2_TR(0x744252);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744257:{NFSU2_TR(0x744257);
u8 U[4];
w4(U+0,u32(0x44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744259:{NFSU2_TR(0x744259);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((R+8),(U+0),4);
}
B74425c:{NFSU2_TR(0x74425c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74425d:{NFSU2_TR(0x74425d);
u8 U[4];
w4(U+0,u32(0x7d28e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744262:{NFSU2_TR(0x744262);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744263:{NFSU2_TR(0x744263);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744268ull));
TAIL_STATIC(0x7414a0u,741);
}
B744268:L744268:{c.instructions+=3;NFSU2_TR(0x744268);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74426b:{NFSU2_TR(0x74426b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74426c:{NFSU2_TR(0x74426c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744271ull));
TAIL_STATIC(0x742360u,742);
}
B744271:L744271:{c.instructions+=8;NFSU2_TR(0x744271);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B744274:{NFSU2_TR(0x744274);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744279:{NFSU2_TR(0x744279);
u8 U[4];
w4(U+0,u32(0x44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74427b:{NFSU2_TR(0x74427b);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x78ull))));
}
B74427e:{NFSU2_TR(0x74427e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74427f:{NFSU2_TR(0x74427f);
u8 U[4];
w4(U+0,u32(0x7d28e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744284:{NFSU2_TR(0x744284);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744285:{NFSU2_TR(0x744285);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74428aull));
TAIL_STATIC(0x7414a0u,741);
}
B74428a:L74428a:{c.instructions+=3;NFSU2_TR(0x74428a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74428d:{NFSU2_TR(0x74428d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74428e:{NFSU2_TR(0x74428e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744293ull));
TAIL_STATIC(0x742360u,742);
}
B744293:L744293:{c.instructions+=3;NFSU2_TR(0x744293);
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
B744296:{NFSU2_TR(0x744296);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B744297:{NFSU2_TR(0x744297);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7442a0:L7442a0:{c.instructions+=8;NFSU2_TR(0x7442a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7442a4:{NFSU2_TR(0x7442a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7442a7:{NFSU2_TR(0x7442a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B7442aa:{NFSU2_TR(0x7442aa);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6e657737ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7442b0:{NFSU2_TR(0x7442b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7442b1:{NFSU2_TR(0x7442b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7442b5:{NFSU2_TR(0x7442b5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7442b6:{NFSU2_TR(0x7442b6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7442d0;}}
}
B7442b8:L7442b8:{c.instructions+=6;NFSU2_TR(0x7442b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7442bb:{NFSU2_TR(0x7442bb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7442bc:{NFSU2_TR(0x7442bc);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x540ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7442c2:{NFSU2_TR(0x7442c2);
u8 U[4];
w4(U+0,u32(0x804ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7442c7:{NFSU2_TR(0x7442c7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7442c8:{NFSU2_TR(0x7442c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7442cdull));
TAIL_STATIC(0x741650u,741);
}
B7442cd:L7442cd:{c.instructions+=1;NFSU2_TR(0x7442cd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B7442d0:L7442d0:{c.instructions+=9;NFSU2_TR(0x7442d0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7442d2:{NFSU2_TR(0x7442d2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7442d3:{NFSU2_TR(0x7442d3);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B7442d7:{NFSU2_TR(0x7442d7);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7442db:{NFSU2_TR(0x7442db);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7442e3:{NFSU2_TR(0x7442e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x636f6e6eull));
s4(u32(r4(U+0)),r4(U+4));
}
B7442eb:{NFSU2_TR(0x7442eb);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7442ef:{NFSU2_TR(0x7442ef);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7442f3:{NFSU2_TR(0x7442f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7442f8ull));
TAIL_STATIC(0x743d90u,743);
}
B7442f8:L7442f8:{c.instructions+=5;NFSU2_TR(0x7442f8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7442fb:{NFSU2_TR(0x7442fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7442fc:{NFSU2_TR(0x7442fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7442fd:{NFSU2_TR(0x7442fd);
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
B744300:{NFSU2_TR(0x744300);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B744310:L744310:{c.instructions+=10;NFSU2_TR(0x744310);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B744313:{NFSU2_TR(0x744313);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744314:{NFSU2_TR(0x744314);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B744318:{NFSU2_TR(0x744318);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74431b:{NFSU2_TR(0x74431b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74431c:{NFSU2_TR(0x74431c);
w4(R+0,u32(0x6f66666cull));
}
B744321:{NFSU2_TR(0x744321);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B744323:{NFSU2_TR(0x744323);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B744325:{NFSU2_TR(0x744325);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744326:{NFSU2_TR(0x744326);
if(r1(R+518)){{goto L744358;}}
}
B744328:L744328:{c.instructions+=10;NFSU2_TR(0x744328);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74432b:{NFSU2_TR(0x74432b);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74432f:{NFSU2_TR(0x74432f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744330:{NFSU2_TR(0x744330);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B744334:{NFSU2_TR(0x744334);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B744338:{NFSU2_TR(0x744338);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B744340:{NFSU2_TR(0x744340);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x64697363ull));
s4(u32(r4(U+0)),r4(U+4));
}
B744348:{NFSU2_TR(0x744348);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74434c:{NFSU2_TR(0x74434c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B744350:{NFSU2_TR(0x744350);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744355ull));
TAIL_STATIC(0x743d90u,743);
}
B744355:L744355:{c.instructions+=1;NFSU2_TR(0x744355);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B744358:L744358:{c.instructions+=4;NFSU2_TR(0x744358);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B74435a:{NFSU2_TR(0x74435a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74435b:{NFSU2_TR(0x74435b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74435c:{NFSU2_TR(0x74435c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744361ull));
TAIL_STATIC(0x7543d0u,754);
}
B744361:L744361:{c.instructions+=4;NFSU2_TR(0x744361);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B744364:{NFSU2_TR(0x744364);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1160ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74436a:{NFSU2_TR(0x74436a);
w4(R+28,u32(0x24ull));
}
B74436f:{NFSU2_TR(0x74436f);
}
B744370:L744370:{c.instructions+=3;NFSU2_TR(0x744370);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B744372:{NFSU2_TR(0x744372);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B744374:{NFSU2_TR(0x744374);
if(r1(R+518)){{goto L7443a2;}}
}
B744376:L744376:{c.instructions+=2;NFSU2_TR(0x744376);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744377:{NFSU2_TR(0x744377);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74437cull));
TAIL_STATIC(0x754e10u,754);
}
B74437c:L74437c:{c.instructions+=3;NFSU2_TR(0x74437c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B74437f:{NFSU2_TR(0x74437f);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B744381:{NFSU2_TR(0x744381);
if(r1(R+518)){{goto L7443a2;}}
}
B744383:L744383:{c.instructions+=4;NFSU2_TR(0x744383);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B744386:{NFSU2_TR(0x744386);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744387:{NFSU2_TR(0x744387);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744388:{NFSU2_TR(0x744388);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74438dull));
TAIL_STATIC(0x73d890u,73d);
}
B74438d:L74438d:{c.instructions+=2;NFSU2_TR(0x74438d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74438e:{NFSU2_TR(0x74438e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744393ull));
TAIL_STATIC(0x598ec0u,598);
}
B744393:L744393:{c.instructions+=3;NFSU2_TR(0x744393);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B744395:{NFSU2_TR(0x744395);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744396:{NFSU2_TR(0x744396);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74439bull));
TAIL_STATIC(0x754e10u,754);
}
B74439b:L74439b:{c.instructions+=3;NFSU2_TR(0x74439b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B74439e:{NFSU2_TR(0x74439e);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7443a0:{NFSU2_TR(0x7443a0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x744383u);}goto L744383;}}
}
B7443a2:L7443a2:{c.instructions+=3;NFSU2_TR(0x7443a2);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x14ull))));
}
B7443a5:{NFSU2_TR(0x7443a5);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B7443a6:{NFSU2_TR(0x7443a6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x744370u);}goto L744370;}}
}
B7443a8:L7443a8:{c.instructions+=3;NFSU2_TR(0x7443a8);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1618ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+20))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7443ae:{NFSU2_TR(0x7443ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7443af:{NFSU2_TR(0x7443af);
if(r1(R+518)){{goto L7443d3;}}
}
B7443b1:L7443b1:{c.instructions+=5;NFSU2_TR(0x7443b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1618ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7443b7:{NFSU2_TR(0x7443b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7443ba:{NFSU2_TR(0x7443ba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7443bb:{NFSU2_TR(0x7443bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1618ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7443c1:{NFSU2_TR(0x7443c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7443c6ull));
TAIL_STATIC(0x598ec0u,598);
}
B7443c6:L7443c6:{c.instructions+=4;NFSU2_TR(0x7443c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1618ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7443cc:{NFSU2_TR(0x7443cc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7443cf:{NFSU2_TR(0x7443cf);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7443d1:{NFSU2_TR(0x7443d1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7443b1u);}goto L7443b1;}}
}
B7443d3:L7443d3:{c.instructions+=8;NFSU2_TR(0x7443d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7443d6:{NFSU2_TR(0x7443d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7443d9:{NFSU2_TR(0x7443d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x161cull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7443df:{NFSU2_TR(0x7443df);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1628ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7443e5:{NFSU2_TR(0x7443e5);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xd58ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7443eb:{NFSU2_TR(0x7443eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B7443f2:{NFSU2_TR(0x7443f2);
w4(R+4,u32(0xecull));
}
B7443f7:{NFSU2_TR(0x7443f7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7443f9:L7443f9:{c.instructions+=1;NFSU2_TR(0x7443f9);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L7443fb;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7443f9u);}goto L7443f9;}
}
B7443fb:L7443fb:{c.instructions+=5;NFSU2_TR(0x7443fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7443fc:{NFSU2_TR(0x7443fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7443fd:{NFSU2_TR(0x7443fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7443fe:{NFSU2_TR(0x7443fe);
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
B744401:{NFSU2_TR(0x744401);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B744410:L744410:{c.instructions+=5;NFSU2_TR(0x744410);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B744414:{NFSU2_TR(0x744414);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B744416:{NFSU2_TR(0x744416);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1498ull))));
__builtin_memmove((R+4),(U+0),4);
}
B74441c:{NFSU2_TR(0x74441c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74441d:{NFSU2_TR(0x74441d);
__builtin_memmove((R+4),(R+4),4);
}
B744420:L744420:{c.instructions+=2;NFSU2_TR(0x744420);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B744423:{NFSU2_TR(0x744423);
if(r1(R+518)){{goto L744433;}}
}
B744425:L744425:{c.instructions+=4;NFSU2_TR(0x744425);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B744426:{NFSU2_TR(0x744426);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xcull))));
}
B744429:{NFSU2_TR(0x744429);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x20ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B74442c:{NFSU2_TR(0x74442c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x744420u);}goto L744420;}}
}
B74442e:L74442e:{c.instructions+=3;NFSU2_TR(0x74442e);
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
B744431:{NFSU2_TR(0x744431);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B744432:{NFSU2_TR(0x744432);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B744433:L744433:{c.instructions+=12;NFSU2_TR(0x744433);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B744437:{NFSU2_TR(0x744437);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B74443a:{NFSU2_TR(0x74443a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B74443d:{NFSU2_TR(0x74443d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1498ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B744443:{NFSU2_TR(0x744443);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B744447:{NFSU2_TR(0x744447);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x149cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74444d:{NFSU2_TR(0x74444d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B744451:{NFSU2_TR(0x744451);
u8 U[12];
w4(U+0,u32(u32(u32(0x528ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B744458:{NFSU2_TR(0x744458);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+24),4);
s4(u32(r4(U+4)),r4(U+8));
}
B74445b:{NFSU2_TR(0x74445b);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x1000ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B744460:{NFSU2_TR(0x744460);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B744461:{NFSU2_TR(0x744461);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B744470:L744470:{c.instructions+=3;NFSU2_TR(0x744470);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B744474:{NFSU2_TR(0x744474);
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffefffull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
}
B744479:{NFSU2_TR(0x744479);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L74449f;}}
}
B74447b:L74447b:{c.instructions+=2;NFSU2_TR(0x74447b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x20ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B74447e:{NFSU2_TR(0x74447e);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L74449f;}}
}
B744480:L744480:{c.instructions+=5;NFSU2_TR(0x744480);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B744484:{NFSU2_TR(0x744484);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B744487:{NFSU2_TR(0x744487);
u8 U[12];
w4(U+0,u32(u32(u32(0x1498ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B74448e:{NFSU2_TR(0x74448e);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0xffffffffull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B744491:{NFSU2_TR(0x744491);
if(r1(R+518)){{goto L74449f;}}
}
B744493:L744493:{c.instructions+=3;NFSU2_TR(0x744493);
u8 U[4];
w4(U+0,u32(0xffffffffull));
s4(u32(r4(R+0)),r4(U+0));
}
B744499:{NFSU2_TR(0x744499);
w4(R+0,u32(0x1ull));
}
B74449e:{NFSU2_TR(0x74449e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74449f:L74449f:{c.instructions+=2;NFSU2_TR(0x74449f);
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
B7444a1:{NFSU2_TR(0x7444a1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7444b0:L7444b0:{c.instructions+=5;NFSU2_TR(0x7444b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7444b4:{NFSU2_TR(0x7444b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7444b8:{NFSU2_TR(0x7444b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7444bb:{NFSU2_TR(0x7444bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7444be:{NFSU2_TR(0x7444be);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7444c0:L7444c0:{c.instructions+=4;NFSU2_TR(0x7444c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7444c4:{NFSU2_TR(0x7444c4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7444c6:{NFSU2_TR(0x7444c6);
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
B7444c8:{NFSU2_TR(0x7444c8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L74452f;}}
}
B7444ca:L7444ca:{c.instructions+=2;NFSU2_TR(0x7444ca);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x24ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x24ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x24ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7444cd:{NFSU2_TR(0x7444cd);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L74452f;}}
}
B7444cf:L7444cf:{c.instructions+=12;NFSU2_TR(0x7444cf);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7444d3:{NFSU2_TR(0x7444d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B7444d6:{NFSU2_TR(0x7444d6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7444d7:{NFSU2_TR(0x7444d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B7444da:{NFSU2_TR(0x7444da);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7444de:{NFSU2_TR(0x7444de);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1168ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7444e4:{NFSU2_TR(0x7444e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7444e8:{NFSU2_TR(0x7444e8);
u8 U[12];
w4(U+0,u32(u32(u32(0x45bull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B7444ef:{NFSU2_TR(0x7444ef);
u8 U[4];
w4(U+0,u32(0x7d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7444f4:{NFSU2_TR(0x7444f4);
u8 U[4];
w4(U+0,u32(0x3e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7444f9:{NFSU2_TR(0x7444f9);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B7444fc:{NFSU2_TR(0x7444fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744501ull));
TAIL_STATIC(0x7551a0u,755);
}
B744501:L744501:{c.instructions+=5;NFSU2_TR(0x744501);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744503:{NFSU2_TR(0x744503);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744505:{NFSU2_TR(0x744505);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744507:{NFSU2_TR(0x744507);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1160ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74450d:{NFSU2_TR(0x74450d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744512ull));
TAIL_STATIC(0x73d6d0u,73d);
}
B744512:L744512:{c.instructions+=5;NFSU2_TR(0x744512);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1160ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B744518:{NFSU2_TR(0x744518);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744519:{NFSU2_TR(0x744519);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74451a:{NFSU2_TR(0x74451a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1164ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B744520:{NFSU2_TR(0x744520);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744525ull));
TAIL_STATIC(0x73da80u,73d);
}
B744525:L744525:{c.instructions+=3;NFSU2_TR(0x744525);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1164ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74452b:{NFSU2_TR(0x74452b);
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
B74452e:{NFSU2_TR(0x74452e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74452f:L74452f:{c.instructions+=1;NFSU2_TR(0x74452f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B744530:L744530:{c.instructions+=4;NFSU2_TR(0x744530);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744531:{NFSU2_TR(0x744531);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B744535:{NFSU2_TR(0x744535);
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
B744537:{NFSU2_TR(0x744537);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L7445dc;}}
}
B74453d:L74453d:{c.instructions+=2;NFSU2_TR(0x74453d);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
w1(R+512,u8((r4(U+6))<(u32(0x24ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x24ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x24ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B744540:{NFSU2_TR(0x744540);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L7445dc;}}
}
B744546:L744546:{c.instructions+=4;NFSU2_TR(0x744546);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744547:{NFSU2_TR(0x744547);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B74454b:{NFSU2_TR(0x74454b);
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
B74454d:{NFSU2_TR(0x74454d);
if(r1(R+518)){{goto L7445db;}}
}
B744553:L744553:{c.instructions+=3;NFSU2_TR(0x744553);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744554:{NFSU2_TR(0x744554);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744555:{NFSU2_TR(0x744555);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74455aull));
TAIL_STATIC(0x73da90u,73d);
}
B74455a:L74455a:{c.instructions+=3;NFSU2_TR(0x74455a);
__builtin_memmove((R+28),(R+0),4);
}
B74455c:{NFSU2_TR(0x74455c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74455d:{NFSU2_TR(0x74455d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744562ull));
TAIL_STATIC(0x754e10u,754);
}
B744562:L744562:{c.instructions+=3;NFSU2_TR(0x744562);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B744565:{NFSU2_TR(0x744565);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B744567:{NFSU2_TR(0x744567);
if(r1(R+518)){{goto L74458a;}}
}
B744569:L744569:{c.instructions+=1;NFSU2_TR(0x744569);
__builtin_memmove((R+16),(R+16),4);
}
B744570:L744570:{c.instructions+=3;NFSU2_TR(0x744570);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744571:{NFSU2_TR(0x744571);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744572:{NFSU2_TR(0x744572);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744577ull));
TAIL_STATIC(0x73d890u,73d);
}
B744577:L744577:{c.instructions+=2;NFSU2_TR(0x744577);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744578:{NFSU2_TR(0x744578);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74457dull));
TAIL_STATIC(0x598ec0u,598);
}
B74457d:L74457d:{c.instructions+=2;NFSU2_TR(0x74457d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74457e:{NFSU2_TR(0x74457e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744583ull));
TAIL_STATIC(0x754e10u,754);
}
B744583:L744583:{c.instructions+=3;NFSU2_TR(0x744583);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B744586:{NFSU2_TR(0x744586);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B744588:{NFSU2_TR(0x744588);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x744570u);}goto L744570;}}
}
B74458a:L74458a:{c.instructions+=2;NFSU2_TR(0x74458a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74458b:{NFSU2_TR(0x74458b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744590ull));
TAIL_STATIC(0x754d70u,754);
}
B744590:L744590:{c.instructions+=2;NFSU2_TR(0x744590);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744591:{NFSU2_TR(0x744591);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744596ull));
TAIL_STATIC(0x73d710u,73d);
}
B744596:L744596:{c.instructions+=8;NFSU2_TR(0x744596);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74459a:{NFSU2_TR(0x74459a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B74459d:{NFSU2_TR(0x74459d);
u8 U[16];
w4(U+0,u32(u32(u32(0x1164ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B7445a4:{NFSU2_TR(0x7445a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B7445a7:{NFSU2_TR(0x7445a7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B7445aa:{NFSU2_TR(0x7445aa);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B7445ac:{NFSU2_TR(0x7445ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7445ad:{NFSU2_TR(0x7445ad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7445c3;}}
}
B7445af:L7445af:{c.instructions+=2;NFSU2_TR(0x7445af);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1160ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7445b9:{NFSU2_TR(0x7445b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1164ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7445c3:L7445c3:{c.instructions+=3;NFSU2_TR(0x7445c3);
u8 U[12];
w4(U+0,u32(u32(u32(0x45bull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B7445ca:{NFSU2_TR(0x7445ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1168ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7445d4:{NFSU2_TR(0x7445d4);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
w4(U+8,u32(0x0ull));
s4(u32(r4(U+4)),r4(U+8));
}
B7445db:L7445db:{c.instructions+=1;NFSU2_TR(0x7445db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7445dc:L7445dc:{c.instructions+=2;NFSU2_TR(0x7445dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7445dd:{NFSU2_TR(0x7445dd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7445e0:L7445e0:{c.instructions+=3;NFSU2_TR(0x7445e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7445e4:{NFSU2_TR(0x7445e4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B7445e6:{NFSU2_TR(0x7445e6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L74460e;}}
}
B7445e8:L7445e8:{c.instructions+=2;NFSU2_TR(0x7445e8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x24ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x24ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B7445eb:{NFSU2_TR(0x7445eb);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L74460e;}}
}
B7445ed:L7445ed:{c.instructions+=5;NFSU2_TR(0x7445ed);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7445f1:{NFSU2_TR(0x7445f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B7445f4:{NFSU2_TR(0x7445f4);
u8 U[16];
w4(U+0,u32(u32(u32(0x1160ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B7445fb:{NFSU2_TR(0x7445fb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7445fd:{NFSU2_TR(0x7445fd);
if(r1(R+518)){{goto L74460e;}}
}
B7445ff:L7445ff:{c.instructions+=4;NFSU2_TR(0x7445ff);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B744603:{NFSU2_TR(0x744603);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744604:{NFSU2_TR(0x744604);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744605:{NFSU2_TR(0x744605);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74460aull));
TAIL_STATIC(0x755090u,755);
}
B74460a:L74460a:{c.instructions+=2;NFSU2_TR(0x74460a);
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
B74460d:{NFSU2_TR(0x74460d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74460e:L74460e:{c.instructions+=2;NFSU2_TR(0x74460e);
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
B744610:{NFSU2_TR(0x744610);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B744620:L744620:{c.instructions+=3;NFSU2_TR(0x744620);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B744624:{NFSU2_TR(0x744624);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x75736572ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B744629:{NFSU2_TR(0x744629);
if(r1(R+518)){{goto L7446b0;}}
}
B74462f:L74462f:{c.instructions+=2;NFSU2_TR(0x74462f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x61636374ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B744634:{NFSU2_TR(0x744634);
if(r1(R+518)){{goto L7446b0;}}
}
B744636:L744636:{c.instructions+=2;NFSU2_TR(0x744636);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x70657273ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74463b:{NFSU2_TR(0x74463b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L744647;}}
}
B74463d:L74463d:{c.instructions+=3;NFSU2_TR(0x74463d);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B744641:{NFSU2_TR(0x744641);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0xd60ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0xd60ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xd60ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B744646:{NFSU2_TR(0x744646);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B744647:L744647:{c.instructions+=2;NFSU2_TR(0x744647);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x726f6f6dull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74464c:{NFSU2_TR(0x74464c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L744658;}}
}
B74464e:L74464e:{c.instructions+=3;NFSU2_TR(0x74464e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B744652:{NFSU2_TR(0x744652);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x1110ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x1110ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1110ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B744657:{NFSU2_TR(0x744657);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B744658:L744658:{c.instructions+=2;NFSU2_TR(0x744658);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x636f6e66ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74465d:{NFSU2_TR(0x74465d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L744669;}}
}
B74465f:L74465f:{c.instructions+=3;NFSU2_TR(0x74465f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B744663:{NFSU2_TR(0x744663);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x540ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x540ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x540ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B744668:{NFSU2_TR(0x744668);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B744669:L744669:{c.instructions+=2;NFSU2_TR(0x744669);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x61757464ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74466e:{NFSU2_TR(0x74466e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74467a;}}
}
B744670:L744670:{c.instructions+=3;NFSU2_TR(0x744670);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B744674:{NFSU2_TR(0x744674);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x140ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x140ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x140ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B744679:{NFSU2_TR(0x744679);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74467a:L74467a:{c.instructions+=2;NFSU2_TR(0x74467a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x70657264ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74467f:{NFSU2_TR(0x74467f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74468b;}}
}
B744681:L744681:{c.instructions+=3;NFSU2_TR(0x744681);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B744685:{NFSU2_TR(0x744685);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x340ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x340ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x340ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74468a:{NFSU2_TR(0x74468a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74468b:L74468b:{c.instructions+=2;NFSU2_TR(0x74468b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73656c66ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B744690:{NFSU2_TR(0x744690);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74469c;}}
}
B744692:L744692:{c.instructions+=3;NFSU2_TR(0x744692);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B744696:{NFSU2_TR(0x744696);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0xd58ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0xd58ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xd58ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74469b:{NFSU2_TR(0x74469b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74469c:L74469c:{c.instructions+=2;NFSU2_TR(0x74469c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73657276ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7446a1:{NFSU2_TR(0x7446a1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7446ad;}}
}
B7446a3:L7446a3:{c.instructions+=3;NFSU2_TR(0x7446a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7446a7:{NFSU2_TR(0x7446a7);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x1928ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x1928ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1928ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7446ac:{NFSU2_TR(0x7446ac);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7446ad:L7446ad:{c.instructions+=2;NFSU2_TR(0x7446ad);
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
B7446af:{NFSU2_TR(0x7446af);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7446b0:L7446b0:{c.instructions+=3;NFSU2_TR(0x7446b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7446b4:{NFSU2_TR(0x7446b4);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0xd44ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0xd44ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xd44ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7446b9:{NFSU2_TR(0x7446b9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7446c0:L7446c0:{c.instructions+=8;NFSU2_TR(0x7446c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x22cull))));
}
B7446c6:{NFSU2_TR(0x7446c6);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B7446cb:{NFSU2_TR(0x7446cb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7446cc:{NFSU2_TR(0x7446cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x234ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7446d3:{NFSU2_TR(0x7446d3);
u8 U[8];
w4(U+0,u32(u32(u32(0x22cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7446da:{NFSU2_TR(0x7446da);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7446dd:{NFSU2_TR(0x7446dd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x69646c65ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7446e2:{NFSU2_TR(0x7446e2);
if(r1(R+518)){{goto L744710;}}
}
B7446e4:L7446e4:{c.instructions+=2;NFSU2_TR(0x7446e4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x61757468ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7446e9:{NFSU2_TR(0x7446e9);
if(r1(R+518)){{goto L744710;}}
}
B7446eb:L7446eb:{c.instructions+=2;NFSU2_TR(0x7446eb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x61636374ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7446f0:{NFSU2_TR(0x7446f0);
if(r1(R+518)){{goto L744710;}}
}
B7446f2:L7446f2:{c.instructions+=2;NFSU2_TR(0x7446f2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x736b6579ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7446f7:{NFSU2_TR(0x7446f7);
if(r1(R+518)){{goto L744710;}}
}
B7446f9:L7446f9:{c.instructions+=4;NFSU2_TR(0x7446f9);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B7446fc:{NFSU2_TR(0x7446fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7446fd:{NFSU2_TR(0x7446fd);
u8 U[8];
w4(U+0,u32(u32(u32(0x228ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B744704:{NFSU2_TR(0x744704);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744709ull));
TAIL_STATIC(0x76115eu,761);
}
B744709:L744709:{c.instructions+=2;NFSU2_TR(0x744709);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x22cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x22cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x22cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74470f:{NFSU2_TR(0x74470f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B744710:L744710:{c.instructions+=8;NFSU2_TR(0x744710);
u8 U[8];
w4(U+0,u32(u32(u32(0x244ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B744717:{NFSU2_TR(0x744717);
u8 U[8];
w4(U+0,u32(u32(u32(0x240ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74471e:{NFSU2_TR(0x74471e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74471f:{NFSU2_TR(0x74471f);
u8 U[8];
w4(U+0,u32(u32(u32(0x23cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B744726:{NFSU2_TR(0x744726);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744727:{NFSU2_TR(0x744727);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744728:{NFSU2_TR(0x744728);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744729:{NFSU2_TR(0x744729);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74472eull));
TAIL_STATIC(0x743b50u,743);
}
B74472e:L74472e:{c.instructions+=4;NFSU2_TR(0x74472e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B744731:{NFSU2_TR(0x744731);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B744733:{NFSU2_TR(0x744733);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B744737:{NFSU2_TR(0x744737);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L744753;}}
}
B744739:L744739:{c.instructions+=5;NFSU2_TR(0x744739);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B74473a:{NFSU2_TR(0x74473a);
w4(R+0,u32(0xfffffffeull));
}
B74473f:{NFSU2_TR(0x74473f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B744740:{NFSU2_TR(0x744740);
u8 U[8];
w4(U+0,u32(u32(u32(0x228ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B744747:{NFSU2_TR(0x744747);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74474cull));
TAIL_STATIC(0x76115eu,761);
}
B74474c:L74474c:{c.instructions+=2;NFSU2_TR(0x74474c);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x22cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x22cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x22cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B744752:{NFSU2_TR(0x744752);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B744753:L744753:{c.instructions+=4;NFSU2_TR(0x744753);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x61757468ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B744759:{NFSU2_TR(0x744759);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74475a:{NFSU2_TR(0x74475a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74475b:{NFSU2_TR(0x74475b);
if(r1(R+518)){{goto L744771;}}
}
B74475d:L74475d:{c.instructions+=2;NFSU2_TR(0x74475d);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x61636374ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B744763:{NFSU2_TR(0x744763);
if(r1(R+518)){{goto L744771;}}
}
B744765:L744765:{c.instructions+=2;NFSU2_TR(0x744765);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x70617373ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74476b:{NFSU2_TR(0x74476b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74484c;}}
}
B744771:L744771:{c.instructions+=6;NFSU2_TR(0x744771);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((R+8),(U+0),4);
}
B744774:{NFSU2_TR(0x744774);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744775:{NFSU2_TR(0x744775);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B744779:{NFSU2_TR(0x744779);
u8 U[4];
w4(U+0,u32(0x200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74477e:{NFSU2_TR(0x74477e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74477f:{NFSU2_TR(0x74477f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744784ull));
TAIL_STATIC(0x741650u,741);
}
B744784:L744784:{c.instructions+=6;NFSU2_TR(0x744784);
u8 U[8];
w4(U+0,u32(u32(u32(0x254ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74478b:{NFSU2_TR(0x74478b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74478c:{NFSU2_TR(0x74478c);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B744790:{NFSU2_TR(0x744790);
u8 U[4];
w4(U+0,u32(0x200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744795:{NFSU2_TR(0x744795);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744796:{NFSU2_TR(0x744796);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74479bull));
TAIL_STATIC(0x741ec0u,741);
}
B74479b:L74479b:{c.instructions+=9;NFSU2_TR(0x74479b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B74479e:{NFSU2_TR(0x74479e);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7447a3:{NFSU2_TR(0x7447a3);
u8 U[4];
w4(U+0,u32(0x1full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7447a5:{NFSU2_TR(0x7447a5);
u8 U[4];
w4(U+0,u32(u32(u32(0x1dull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B7447a9:{NFSU2_TR(0x7447a9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7447aa:{NFSU2_TR(0x7447aa);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B7447ae:{NFSU2_TR(0x7447ae);
u8 U[4];
w4(U+0,u32(0x7a13c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7447b3:{NFSU2_TR(0x7447b3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7447b4:{NFSU2_TR(0x7447b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7447b9ull));
TAIL_STATIC(0x7414a0u,741);
}
B7447b9:L7447b9:{c.instructions+=3;NFSU2_TR(0x7447b9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B7447bc:{NFSU2_TR(0x7447bc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7447bd:{NFSU2_TR(0x7447bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7447c2ull));
TAIL_STATIC(0x742360u,742);
}
B7447c2:L7447c2:{c.instructions+=6;NFSU2_TR(0x7447c2);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B7447c5:{NFSU2_TR(0x7447c5);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7447c8:{NFSU2_TR(0x7447c8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B7447cb:{NFSU2_TR(0x7447cb);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7447cd:{NFSU2_TR(0x7447cd);
u8 U[4];
w4(U+0,u32(u32(u32(0x15ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B7447d1:{NFSU2_TR(0x7447d1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L744813;}}
}
B7447d3:L7447d3:{c.instructions+=8;NFSU2_TR(0x7447d3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7447d4:{NFSU2_TR(0x7447d4);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1440ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7447da:{NFSU2_TR(0x7447da);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7447db:{NFSU2_TR(0x7447db);
u8 U[4];
w4(U+0,u32(0x7a13c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7447e0:{NFSU2_TR(0x7447e0);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B7447e4:{NFSU2_TR(0x7447e4);
u8 U[4];
w4(U+0,u32(0x200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7447e9:{NFSU2_TR(0x7447e9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7447ea:{NFSU2_TR(0x7447ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7447efull));
TAIL_STATIC(0x741cb0u,741);
}
B7447ef:L7447ef:{c.instructions+=7;NFSU2_TR(0x7447ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x143cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7447f5:{NFSU2_TR(0x7447f5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7447f6:{NFSU2_TR(0x7447f6);
u8 U[4];
w4(U+0,u32(0x7d28fcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7447fb:{NFSU2_TR(0x7447fb);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B7447ff:{NFSU2_TR(0x7447ff);
u8 U[4];
w4(U+0,u32(0x200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744804:{NFSU2_TR(0x744804);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744805:{NFSU2_TR(0x744805);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74480aull));
TAIL_STATIC(0x741690u,741);
}
B74480a:L74480a:{c.instructions+=3;NFSU2_TR(0x74480a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B74480d:{NFSU2_TR(0x74480d);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B744811:{NFSU2_TR(0x744811);
{goto L744853;}
}
B744813:L744813:{c.instructions+=9;NFSU2_TR(0x744813);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744815:{NFSU2_TR(0x744815);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744817:{NFSU2_TR(0x744817);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744818:{NFSU2_TR(0x744818);
u8 U[4];
w4(U+0,u32(u32(u32(0x21ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B74481c:{NFSU2_TR(0x74481c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74481d:{NFSU2_TR(0x74481d);
u8 U[4];
w4(U+0,u32(0x1full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74481f:{NFSU2_TR(0x74481f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744820:{NFSU2_TR(0x744820);
u8 U[5];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w1(U+4,u8(0x7eull));
s1(u32(r4(U+0)),r1(U+4));
}
B744825:{NFSU2_TR(0x744825);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74482aull));
TAIL_STATIC(0x7553d0u,755);
}
B74482a:L74482a:{c.instructions+=7;NFSU2_TR(0x74482a);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B74482e:{NFSU2_TR(0x74482e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74482f:{NFSU2_TR(0x74482f);
u8 U[4];
w4(U+0,u32(0x7a13c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744834:{NFSU2_TR(0x744834);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B744838:{NFSU2_TR(0x744838);
u8 U[4];
w4(U+0,u32(0x200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74483d:{NFSU2_TR(0x74483d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74483e:{NFSU2_TR(0x74483e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744843ull));
TAIL_STATIC(0x741a50u,741);
}
B744843:L744843:{c.instructions+=3;NFSU2_TR(0x744843);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
}
B744846:{NFSU2_TR(0x744846);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B74484a:{NFSU2_TR(0x74484a);
{goto L744853;}
}
B74484c:L74484c:{c.instructions+=1;NFSU2_TR(0x74484c);
u8 U[8];
w4(U+0,u32(u32(u32(0x248ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B744853:L744853:{c.instructions+=2;NFSU2_TR(0x744853);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x736e6170ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B744859:{NFSU2_TR(0x744859);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7448e2;}}
}
B74485f:L74485f:{c.instructions+=4;NFSU2_TR(0x74485f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744861:{NFSU2_TR(0x744861);
u8 U[4];
w4(U+0,u32(0x7a14f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744866:{NFSU2_TR(0x744866);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744867:{NFSU2_TR(0x744867);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74486cull));
TAIL_STATIC(0x7414a0u,741);
}
B74486c:L74486c:{c.instructions+=3;NFSU2_TR(0x74486c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74486f:{NFSU2_TR(0x74486f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744870:{NFSU2_TR(0x744870);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744875ull));
TAIL_STATIC(0x7420b0u,742);
}
B744875:L744875:{c.instructions+=3;NFSU2_TR(0x744875);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B744878:{NFSU2_TR(0x744878);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B74487b:{NFSU2_TR(0x74487b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L7448c6;}}
}
B74487d:L74487d:{c.instructions+=2;NFSU2_TR(0x74487d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1dull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1dull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B744880:{NFSU2_TR(0x744880);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L7448c6;}}
}
B744882:L744882:{c.instructions+=5;NFSU2_TR(0x744882);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B744885:{NFSU2_TR(0x744885);
u8 U[16];
w4(U+0,u32(u32(u32(0x1160ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B74488c:{NFSU2_TR(0x74488c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74488e:{NFSU2_TR(0x74488e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B744891:{NFSU2_TR(0x744891);
if(r1(R+518)){{goto L7448c6;}}
}
B744893:L744893:{c.instructions+=2;NFSU2_TR(0x744893);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744894:{NFSU2_TR(0x744894);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744899ull));
TAIL_STATIC(0x754e10u,754);
}
B744899:L744899:{c.instructions+=3;NFSU2_TR(0x744899);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B74489c:{NFSU2_TR(0x74489c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74489e:{NFSU2_TR(0x74489e);
if(r1(R+518)){{goto L7448c6;}}
}
B7448a0:L7448a0:{c.instructions+=4;NFSU2_TR(0x7448a0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7448a1:{NFSU2_TR(0x7448a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1164ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7448a7:{NFSU2_TR(0x7448a7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7448a8:{NFSU2_TR(0x7448a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7448adull));
TAIL_STATIC(0x73d890u,73d);
}
B7448ad:L7448ad:{c.instructions+=2;NFSU2_TR(0x7448ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7448ae:{NFSU2_TR(0x7448ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7448b3ull));
TAIL_STATIC(0x598ec0u,598);
}
B7448b3:L7448b3:{c.instructions+=3;NFSU2_TR(0x7448b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1160ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7448b9:{NFSU2_TR(0x7448b9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7448ba:{NFSU2_TR(0x7448ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7448bfull));
TAIL_STATIC(0x754e10u,754);
}
B7448bf:L7448bf:{c.instructions+=3;NFSU2_TR(0x7448bf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B7448c2:{NFSU2_TR(0x7448c2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7448c4:{NFSU2_TR(0x7448c4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7448a0u);}goto L7448a0;}}
}
B7448c6:L7448c6:{c.instructions+=5;NFSU2_TR(0x7448c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1490ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7448cc:{NFSU2_TR(0x7448cc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7448cd:{NFSU2_TR(0x7448cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x148cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7448d7:{NFSU2_TR(0x7448d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1490ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7448dd:{NFSU2_TR(0x7448dd);
{goto L7449b9;}
}
B7448e2:L7448e2:{c.instructions+=2;NFSU2_TR(0x7448e2);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6d6f7665ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7448e8:{NFSU2_TR(0x7448e8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7449b9;}}
}
B7448ee:L7448ee:{c.instructions+=3;NFSU2_TR(0x7448ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1160ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7448f4:{NFSU2_TR(0x7448f4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7448f6:{NFSU2_TR(0x7448f6);
if(r1(R+518)){{goto L7449b9;}}
}
B7448fc:L7448fc:{c.instructions+=7;NFSU2_TR(0x7448fc);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744901:{NFSU2_TR(0x744901);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744903:{NFSU2_TR(0x744903);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B744907:{NFSU2_TR(0x744907);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744908:{NFSU2_TR(0x744908);
u8 U[4];
w4(U+0,u32(0x79ac28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74490d:{NFSU2_TR(0x74490d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74490e:{NFSU2_TR(0x74490e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744913ull));
TAIL_STATIC(0x7414a0u,741);
}
B744913:L744913:{c.instructions+=3;NFSU2_TR(0x744913);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B744916:{NFSU2_TR(0x744916);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744917:{NFSU2_TR(0x744917);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74491cull));
TAIL_STATIC(0x742360u,742);
}
B74491c:L74491c:{c.instructions+=4;NFSU2_TR(0x74491c);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B744920:{NFSU2_TR(0x744920);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B744923:{NFSU2_TR(0x744923);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B744925:{NFSU2_TR(0x744925);
if(r1(R+518)){{goto L7449b9;}}
}
B74492b:L74492b:{c.instructions+=3;NFSU2_TR(0x74492b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1160ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B744931:{NFSU2_TR(0x744931);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744932:{NFSU2_TR(0x744932);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744937ull));
TAIL_STATIC(0x755120u,755);
}
B744937:L744937:{c.instructions+=4;NFSU2_TR(0x744937);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1160ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74493d:{NFSU2_TR(0x74493d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74493f:{NFSU2_TR(0x74493f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744940:{NFSU2_TR(0x744940);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744945ull));
TAIL_STATIC(0x755130u,755);
}
B744945:L744945:{c.instructions+=3;NFSU2_TR(0x744945);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B744948:{NFSU2_TR(0x744948);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74494a:{NFSU2_TR(0x74494a);
if(r1(R+518)){{goto L7449b9;}}
}
B74494c:L74494c:{c.instructions+=1;NFSU2_TR(0x74494c);
__builtin_memmove((R+16),(R+16),4);
}
B744950:L744950:{c.instructions+=4;NFSU2_TR(0x744950);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1164ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B744956:{NFSU2_TR(0x744956);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744957:{NFSU2_TR(0x744957);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744958:{NFSU2_TR(0x744958);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74495dull));
TAIL_STATIC(0x73d810u,73d);
}
B74495d:L74495d:{c.instructions+=6;NFSU2_TR(0x74495d);
__builtin_memmove((R+24),(R+0),4);
}
B74495f:{NFSU2_TR(0x74495f);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B744963:{NFSU2_TR(0x744963);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744964:{NFSU2_TR(0x744964);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((R+4),(U+0),4);
}
B744967:{NFSU2_TR(0x744967);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744968:{NFSU2_TR(0x744968);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74496dull));
TAIL_STATIC(0x75dd6fu,75d);
}
B74496d:L74496d:{c.instructions+=3;NFSU2_TR(0x74496d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B744970:{NFSU2_TR(0x744970);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B744972:{NFSU2_TR(0x744972);
if(r1(R+518)){{goto L74498b;}}
}
B744974:L744974:{c.instructions+=4;NFSU2_TR(0x744974);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1160ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74497a:{NFSU2_TR(0x74497a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74497c:{NFSU2_TR(0x74497c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74497d:{NFSU2_TR(0x74497d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744982ull));
TAIL_STATIC(0x755130u,755);
}
B744982:L744982:{c.instructions+=3;NFSU2_TR(0x744982);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B744985:{NFSU2_TR(0x744985);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B744987:{NFSU2_TR(0x744987);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x744950u);}goto L744950;}}
}
B744989:L744989:{c.instructions+=1;NFSU2_TR(0x744989);
{goto L7449b9;}
}
B74498b:L74498b:{c.instructions+=5;NFSU2_TR(0x74498b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74498c:{NFSU2_TR(0x74498c);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B744990:{NFSU2_TR(0x744990);
u8 U[4];
w4(U+0,u32(0x200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744995:{NFSU2_TR(0x744995);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744996:{NFSU2_TR(0x744996);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74499bull));
TAIL_STATIC(0x741650u,741);
}
B74499b:L74499b:{c.instructions+=7;NFSU2_TR(0x74499b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B74499d:{NFSU2_TR(0x74499d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74499e:{NFSU2_TR(0x74499e);
u8 U[4];
w4(U+0,u32(0x7a15b4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7449a3:{NFSU2_TR(0x7449a3);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B7449a7:{NFSU2_TR(0x7449a7);
u8 U[4];
w4(U+0,u32(0x200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7449ac:{NFSU2_TR(0x7449ac);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7449ad:{NFSU2_TR(0x7449ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7449b2ull));
TAIL_STATIC(0x741690u,741);
}
B7449b2:L7449b2:{c.instructions+=2;NFSU2_TR(0x7449b2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B7449b5:{NFSU2_TR(0x7449b5);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B7449b9:L7449b9:{c.instructions+=7;NFSU2_TR(0x7449b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B7449bb:{NFSU2_TR(0x7449bb);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7449bd:{NFSU2_TR(0x7449bd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7449be:{NFSU2_TR(0x7449be);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7449c0:{NFSU2_TR(0x7449c0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7449c1:{NFSU2_TR(0x7449c1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7449c2:{NFSU2_TR(0x7449c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7449c7ull));
TAIL_STATIC(0x7549f0u,754);
}
B7449c7:L7449c7:{c.instructions+=9;NFSU2_TR(0x7449c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7449cb:{NFSU2_TR(0x7449cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7449ce:{NFSU2_TR(0x7449ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x24cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7449d5:{NFSU2_TR(0x7449d5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B7449d8:{NFSU2_TR(0x7449d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7449d9:{NFSU2_TR(0x7449d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7449da:{NFSU2_TR(0x7449da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7449db:{NFSU2_TR(0x7449db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7449dc:{NFSU2_TR(0x7449dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7449e1ull));
TAIL_STATIC(0x76115eu,761);
}
B7449e1:L7449e1:{c.instructions+=2;NFSU2_TR(0x7449e1);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x22cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x22cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x22cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7449e7:{NFSU2_TR(0x7449e7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7449f0:L7449f0:{c.instructions+=15;NFSU2_TR(0x7449f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B7449f3:{NFSU2_TR(0x7449f3);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B7449f8:{NFSU2_TR(0x7449f8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7449f9:{NFSU2_TR(0x7449f9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7449fa:{NFSU2_TR(0x7449fa);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B7449fe:{NFSU2_TR(0x7449fe);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7449ff:{NFSU2_TR(0x7449ff);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B744a03:{NFSU2_TR(0x744a03);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744a04:{NFSU2_TR(0x744a04);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744a06:{NFSU2_TR(0x744a06);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B744a0a:{NFSU2_TR(0x744a0a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B744a0c:{NFSU2_TR(0x744a0c);
u8 U[4];
w4(U+0,u32(0x7a15b4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744a11:{NFSU2_TR(0x744a11);
w4(R+4,u32(0x138ull));
}
B744a16:{NFSU2_TR(0x744a16);
__builtin_memmove((R+28),(R+20),4);
}
B744a18:{NFSU2_TR(0x744a18);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744a19:L744a19:{c.instructions+=1;NFSU2_TR(0x744a19);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L744a1b;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x744a19u);}goto L744a19;}
}
B744a1b:L744a1b:{c.instructions+=1;NFSU2_TR(0x744a1b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744a20ull));
TAIL_STATIC(0x7414a0u,741);
}
B744a20:L744a20:{c.instructions+=3;NFSU2_TR(0x744a20);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B744a23:{NFSU2_TR(0x744a23);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744a24:{NFSU2_TR(0x744a24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744a29ull));
TAIL_STATIC(0x7420b0u,742);
}
B744a29:L744a29:{c.instructions+=9;NFSU2_TR(0x744a29);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B744a2c:{NFSU2_TR(0x744a2c);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744a31:{NFSU2_TR(0x744a31);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+20)),r4(U+0));
}
B744a34:{NFSU2_TR(0x744a34);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744a36:{NFSU2_TR(0x744a36);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B744a39:{NFSU2_TR(0x744a39);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744a3a:{NFSU2_TR(0x744a3a);
u8 U[4];
w4(U+0,u32(0x79ac28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744a3f:{NFSU2_TR(0x744a3f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744a40:{NFSU2_TR(0x744a40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744a45ull));
TAIL_STATIC(0x7414a0u,741);
}
B744a45:L744a45:{c.instructions+=3;NFSU2_TR(0x744a45);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B744a48:{NFSU2_TR(0x744a48);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744a49:{NFSU2_TR(0x744a49);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744a4eull));
TAIL_STATIC(0x742360u,742);
}
B744a4e:L744a4e:{c.instructions+=8;NFSU2_TR(0x744a4e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B744a51:{NFSU2_TR(0x744a51);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744a56:{NFSU2_TR(0x744a56);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744a58:{NFSU2_TR(0x744a58);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((R+4),(U+0),4);
}
B744a5b:{NFSU2_TR(0x744a5b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744a5c:{NFSU2_TR(0x744a5c);
u8 U[4];
w4(U+0,u32(0x7d2990ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744a61:{NFSU2_TR(0x744a61);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744a62:{NFSU2_TR(0x744a62);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744a67ull));
TAIL_STATIC(0x7414a0u,741);
}
B744a67:L744a67:{c.instructions+=3;NFSU2_TR(0x744a67);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B744a6a:{NFSU2_TR(0x744a6a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744a6b:{NFSU2_TR(0x744a6b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744a70ull));
TAIL_STATIC(0x742360u,742);
}
B744a70:L744a70:{c.instructions+=8;NFSU2_TR(0x744a70);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B744a73:{NFSU2_TR(0x744a73);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744a78:{NFSU2_TR(0x744a78);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744a7a:{NFSU2_TR(0x744a7a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x38ull))));
__builtin_memmove((R+8),(U+0),4);
}
B744a7d:{NFSU2_TR(0x744a7d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744a7e:{NFSU2_TR(0x744a7e);
u8 U[4];
w4(U+0,u32(0x7d2058ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744a83:{NFSU2_TR(0x744a83);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744a84:{NFSU2_TR(0x744a84);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744a89ull));
TAIL_STATIC(0x7414a0u,741);
}
B744a89:L744a89:{c.instructions+=3;NFSU2_TR(0x744a89);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B744a8c:{NFSU2_TR(0x744a8c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744a8d:{NFSU2_TR(0x744a8d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744a92ull));
TAIL_STATIC(0x742360u,742);
}
B744a92:L744a92:{c.instructions+=8;NFSU2_TR(0x744a92);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B744a95:{NFSU2_TR(0x744a95);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744a9a:{NFSU2_TR(0x744a9a);
u8 U[4];
w4(U+0,u32(0x84ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744a9f:{NFSU2_TR(0x744a9f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8cull))));
__builtin_memmove((R+0),(U+0),4);
}
B744aa5:{NFSU2_TR(0x744aa5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744aa6:{NFSU2_TR(0x744aa6);
u8 U[4];
w4(U+0,u32(0x7a1668ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744aab:{NFSU2_TR(0x744aab);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744aac:{NFSU2_TR(0x744aac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744ab1ull));
TAIL_STATIC(0x7414a0u,741);
}
B744ab1:L744ab1:{c.instructions+=3;NFSU2_TR(0x744ab1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B744ab4:{NFSU2_TR(0x744ab4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744ab5:{NFSU2_TR(0x744ab5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744abaull));
TAIL_STATIC(0x742360u,742);
}
B744aba:L744aba:{c.instructions+=5;NFSU2_TR(0x744aba);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B744abd:{NFSU2_TR(0x744abd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744abf:{NFSU2_TR(0x744abf);
u8 U[4];
w4(U+0,u32(0x7d2988ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744ac4:{NFSU2_TR(0x744ac4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744ac5:{NFSU2_TR(0x744ac5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744acaull));
TAIL_STATIC(0x7414a0u,741);
}
B744aca:L744aca:{c.instructions+=3;NFSU2_TR(0x744aca);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B744acd:{NFSU2_TR(0x744acd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744ace:{NFSU2_TR(0x744ace);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744ad3ull));
TAIL_STATIC(0x7420b0u,742);
}
B744ad3:L744ad3:{c.instructions+=6;NFSU2_TR(0x744ad3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B744ad6:{NFSU2_TR(0x744ad6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744ad8:{NFSU2_TR(0x744ad8);
u8 U[4];
w4(U+0,u32(0x7a1688ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744add:{NFSU2_TR(0x744add);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744ade:{NFSU2_TR(0x744ade);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B744ae1:{NFSU2_TR(0x744ae1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744ae6ull));
TAIL_STATIC(0x7414a0u,741);
}
B744ae6:L744ae6:{c.instructions+=3;NFSU2_TR(0x744ae6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B744ae9:{NFSU2_TR(0x744ae9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744aea:{NFSU2_TR(0x744aea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744aefull));
TAIL_STATIC(0x7420b0u,742);
}
B744aef:L744aef:{c.instructions+=6;NFSU2_TR(0x744aef);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B744af2:{NFSU2_TR(0x744af2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744af4:{NFSU2_TR(0x744af4);
u8 U[4];
w4(U+0,u32(0x7a15a8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744af9:{NFSU2_TR(0x744af9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744afa:{NFSU2_TR(0x744afa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x110ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B744b00:{NFSU2_TR(0x744b00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744b05ull));
TAIL_STATIC(0x7414a0u,741);
}
B744b05:L744b05:{c.instructions+=3;NFSU2_TR(0x744b05);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B744b08:{NFSU2_TR(0x744b08);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744b09:{NFSU2_TR(0x744b09);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744b0eull));
TAIL_STATIC(0x7420b0u,742);
}
B744b0e:L744b0e:{c.instructions+=6;NFSU2_TR(0x744b0e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B744b11:{NFSU2_TR(0x744b11);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744b13:{NFSU2_TR(0x744b13);
u8 U[4];
w4(U+0,u32(0x7a15d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744b18:{NFSU2_TR(0x744b18);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744b19:{NFSU2_TR(0x744b19);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x114ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B744b1f:{NFSU2_TR(0x744b1f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744b24ull));
TAIL_STATIC(0x7414a0u,741);
}
B744b24:L744b24:{c.instructions+=3;NFSU2_TR(0x744b24);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B744b27:{NFSU2_TR(0x744b27);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744b28:{NFSU2_TR(0x744b28);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744b2dull));
TAIL_STATIC(0x7420b0u,742);
}
B744b2d:L744b2d:{c.instructions+=6;NFSU2_TR(0x744b2d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B744b30:{NFSU2_TR(0x744b30);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744b32:{NFSU2_TR(0x744b32);
u8 U[4];
w4(U+0,u32(0x7a1694ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744b37:{NFSU2_TR(0x744b37);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744b38:{NFSU2_TR(0x744b38);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B744b3e:{NFSU2_TR(0x744b3e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744b43ull));
TAIL_STATIC(0x7414a0u,741);
}
B744b43:L744b43:{c.instructions+=3;NFSU2_TR(0x744b43);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B744b46:{NFSU2_TR(0x744b46);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744b47:{NFSU2_TR(0x744b47);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744b4cull));
TAIL_STATIC(0x7420b0u,742);
}
B744b4c:L744b4c:{c.instructions+=6;NFSU2_TR(0x744b4c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B744b4f:{NFSU2_TR(0x744b4f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744b51:{NFSU2_TR(0x744b51);
u8 U[4];
w4(U+0,u32(0x7a169cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744b56:{NFSU2_TR(0x744b56);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744b57:{NFSU2_TR(0x744b57);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x118ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B744b5d:{NFSU2_TR(0x744b5d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744b62ull));
TAIL_STATIC(0x7414a0u,741);
}
B744b62:L744b62:{c.instructions+=3;NFSU2_TR(0x744b62);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B744b65:{NFSU2_TR(0x744b65);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744b66:{NFSU2_TR(0x744b66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744b6bull));
TAIL_STATIC(0x7420b0u,742);
}
B744b6b:L744b6b:{c.instructions+=6;NFSU2_TR(0x744b6b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B744b6e:{NFSU2_TR(0x744b6e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744b70:{NFSU2_TR(0x744b70);
u8 U[4];
w4(U+0,u32(0x7d2980ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744b75:{NFSU2_TR(0x744b75);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744b76:{NFSU2_TR(0x744b76);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x11cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B744b7c:{NFSU2_TR(0x744b7c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744b81ull));
TAIL_STATIC(0x7414a0u,741);
}
B744b81:L744b81:{c.instructions+=3;NFSU2_TR(0x744b81);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B744b84:{NFSU2_TR(0x744b84);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744b85:{NFSU2_TR(0x744b85);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744b8aull));
TAIL_STATIC(0x7420b0u,742);
}
B744b8a:L744b8a:{c.instructions+=6;NFSU2_TR(0x744b8a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B744b8d:{NFSU2_TR(0x744b8d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744b8f:{NFSU2_TR(0x744b8f);
u8 U[4];
w4(U+0,u32(0x7d2978ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744b94:{NFSU2_TR(0x744b94);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744b95:{NFSU2_TR(0x744b95);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x168ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B744b9b:{NFSU2_TR(0x744b9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744ba0ull));
TAIL_STATIC(0x7414a0u,741);
}
B744ba0:L744ba0:{c.instructions+=3;NFSU2_TR(0x744ba0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B744ba3:{NFSU2_TR(0x744ba3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744ba4:{NFSU2_TR(0x744ba4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744ba9ull));
TAIL_STATIC(0x7420b0u,742);
}
B744ba9:L744ba9:{c.instructions+=6;NFSU2_TR(0x744ba9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B744bac:{NFSU2_TR(0x744bac);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744bae:{NFSU2_TR(0x744bae);
u8 U[4];
w4(U+0,u32(0x7a1480ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744bb3:{NFSU2_TR(0x744bb3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744bb4:{NFSU2_TR(0x744bb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x120ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B744bba:{NFSU2_TR(0x744bba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744bbfull));
TAIL_STATIC(0x7414a0u,741);
}
B744bbf:L744bbf:{c.instructions+=3;NFSU2_TR(0x744bbf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B744bc2:{NFSU2_TR(0x744bc2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744bc3:{NFSU2_TR(0x744bc3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744bc8ull));
TAIL_STATIC(0x742860u,742);
}
B744bc8:L744bc8:{c.instructions+=9;NFSU2_TR(0x744bc8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B744bcb:{NFSU2_TR(0x744bcb);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744bd0:{NFSU2_TR(0x744bd0);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744bd2:{NFSU2_TR(0x744bd2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x128ull))));
__builtin_memmove((R+4),(U+0),4);
}
B744bd8:{NFSU2_TR(0x744bd8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744bd9:{NFSU2_TR(0x744bd9);
u8 U[4];
w4(U+0,u32(0x7a1488ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744bde:{NFSU2_TR(0x744bde);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744bdf:{NFSU2_TR(0x744bdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x124ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B744be5:{NFSU2_TR(0x744be5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744beaull));
TAIL_STATIC(0x7414a0u,741);
}
B744bea:L744bea:{c.instructions+=3;NFSU2_TR(0x744bea);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B744bed:{NFSU2_TR(0x744bed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744bee:{NFSU2_TR(0x744bee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744bf3ull));
TAIL_STATIC(0x742360u,742);
}
B744bf3:L744bf3:{c.instructions+=5;NFSU2_TR(0x744bf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B744bf9:{NFSU2_TR(0x744bf9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B744bfc:{NFSU2_TR(0x744bfc);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B744bfe:{NFSU2_TR(0x744bfe);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B744c00:{NFSU2_TR(0x744c00);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L744d94;}}
}
B744c06:L744c06:{c.instructions+=2;NFSU2_TR(0x744c06);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1c4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B744c0c:{NFSU2_TR(0x744c0c);
__builtin_memmove((R+16),(R+16),4);
}
B744c10:L744c10:{c.instructions+=5;NFSU2_TR(0x744c10);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744c11:{NFSU2_TR(0x744c11);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B744c15:{NFSU2_TR(0x744c15);
u8 U[4];
w4(U+0,u32(0x7d2970ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744c1a:{NFSU2_TR(0x744c1a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744c1b:{NFSU2_TR(0x744c1b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744c20ull));
TAIL_STATIC(0x75c784u,75c);
}
B744c20:L744c20:{c.instructions+=6;NFSU2_TR(0x744c20);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B744c23:{NFSU2_TR(0x744c23);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744c25:{NFSU2_TR(0x744c25);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B744c29:{NFSU2_TR(0x744c29);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744c2a:{NFSU2_TR(0x744c2a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744c2b:{NFSU2_TR(0x744c2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744c30ull));
TAIL_STATIC(0x7414a0u,741);
}
B744c30:L744c30:{c.instructions+=3;NFSU2_TR(0x744c30);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B744c33:{NFSU2_TR(0x744c33);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744c34:{NFSU2_TR(0x744c34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744c39ull));
TAIL_STATIC(0x7420b0u,742);
}
B744c39:L744c39:{c.instructions+=6;NFSU2_TR(0x744c39);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744c3a:{NFSU2_TR(0x744c3a);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B744c3e:{NFSU2_TR(0x744c3e);
u8 U[4];
w4(U+0,u32(0x7a16c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744c43:{NFSU2_TR(0x744c43);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744c44:{NFSU2_TR(0x744c44);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B744c47:{NFSU2_TR(0x744c47);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744c4cull));
TAIL_STATIC(0x75c784u,75c);
}
B744c4c:L744c4c:{c.instructions+=8;NFSU2_TR(0x744c4c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B744c4f:{NFSU2_TR(0x744c4f);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744c54:{NFSU2_TR(0x744c54);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744c56:{NFSU2_TR(0x744c56);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744c57:{NFSU2_TR(0x744c57);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B744c5b:{NFSU2_TR(0x744c5b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744c5c:{NFSU2_TR(0x744c5c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744c5d:{NFSU2_TR(0x744c5d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744c62ull));
TAIL_STATIC(0x7414a0u,741);
}
B744c62:L744c62:{c.instructions+=3;NFSU2_TR(0x744c62);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B744c65:{NFSU2_TR(0x744c65);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744c66:{NFSU2_TR(0x744c66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744c6bull));
TAIL_STATIC(0x742360u,742);
}
B744c6b:L744c6b:{c.instructions+=5;NFSU2_TR(0x744c6b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744c6c:{NFSU2_TR(0x744c6c);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B744c70:{NFSU2_TR(0x744c70);
u8 U[4];
w4(U+0,u32(0x7d2968ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744c75:{NFSU2_TR(0x744c75);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744c76:{NFSU2_TR(0x744c76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744c7bull));
TAIL_STATIC(0x75c784u,75c);
}
B744c7b:L744c7b:{c.instructions+=6;NFSU2_TR(0x744c7b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B744c7e:{NFSU2_TR(0x744c7e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744c80:{NFSU2_TR(0x744c80);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B744c84:{NFSU2_TR(0x744c84);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744c85:{NFSU2_TR(0x744c85);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744c86:{NFSU2_TR(0x744c86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744c8bull));
TAIL_STATIC(0x7414a0u,741);
}
B744c8b:L744c8b:{c.instructions+=3;NFSU2_TR(0x744c8b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B744c8e:{NFSU2_TR(0x744c8e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744c8f:{NFSU2_TR(0x744c8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744c94ull));
TAIL_STATIC(0x742140u,742);
}
B744c94:L744c94:{c.instructions+=6;NFSU2_TR(0x744c94);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744c95:{NFSU2_TR(0x744c95);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B744c99:{NFSU2_TR(0x744c99);
u8 U[4];
w4(U+0,u32(0x7d2960ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744c9e:{NFSU2_TR(0x744c9e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744c9f:{NFSU2_TR(0x744c9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B744ca2:{NFSU2_TR(0x744ca2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744ca7ull));
TAIL_STATIC(0x75c784u,75c);
}
B744ca7:L744ca7:{c.instructions+=6;NFSU2_TR(0x744ca7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B744caa:{NFSU2_TR(0x744caa);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744cac:{NFSU2_TR(0x744cac);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B744cb0:{NFSU2_TR(0x744cb0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744cb1:{NFSU2_TR(0x744cb1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744cb2:{NFSU2_TR(0x744cb2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744cb7ull));
TAIL_STATIC(0x7414a0u,741);
}
B744cb7:L744cb7:{c.instructions+=3;NFSU2_TR(0x744cb7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B744cba:{NFSU2_TR(0x744cba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744cbb:{NFSU2_TR(0x744cbb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744cc0ull));
TAIL_STATIC(0x742140u,742);
}
B744cc0:L744cc0:{c.instructions+=6;NFSU2_TR(0x744cc0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744cc1:{NFSU2_TR(0x744cc1);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B744cc5:{NFSU2_TR(0x744cc5);
u8 U[4];
w4(U+0,u32(0x7d2958ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744cca:{NFSU2_TR(0x744cca);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744ccb:{NFSU2_TR(0x744ccb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B744cce:{NFSU2_TR(0x744cce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744cd3ull));
TAIL_STATIC(0x75c784u,75c);
}
B744cd3:L744cd3:{c.instructions+=9;NFSU2_TR(0x744cd3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B744cd6:{NFSU2_TR(0x744cd6);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744cdb:{NFSU2_TR(0x744cdb);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744cdd:{NFSU2_TR(0x744cdd);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((R+8),(U+0),4);
}
B744ce0:{NFSU2_TR(0x744ce0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744ce1:{NFSU2_TR(0x744ce1);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B744ce5:{NFSU2_TR(0x744ce5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744ce6:{NFSU2_TR(0x744ce6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744ce7:{NFSU2_TR(0x744ce7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744cecull));
TAIL_STATIC(0x7414a0u,741);
}
B744cec:L744cec:{c.instructions+=3;NFSU2_TR(0x744cec);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B744cef:{NFSU2_TR(0x744cef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744cf0:{NFSU2_TR(0x744cf0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744cf5ull));
TAIL_STATIC(0x742360u,742);
}
B744cf5:L744cf5:{c.instructions+=5;NFSU2_TR(0x744cf5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744cf6:{NFSU2_TR(0x744cf6);
u8 U[4];
w4(U+0,u32(0x7d294cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744cfb:{NFSU2_TR(0x744cfb);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B744cff:{NFSU2_TR(0x744cff);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744d00:{NFSU2_TR(0x744d00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744d05ull));
TAIL_STATIC(0x75c784u,75c);
}
B744d05:L744d05:{c.instructions+=6;NFSU2_TR(0x744d05);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B744d08:{NFSU2_TR(0x744d08);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744d0a:{NFSU2_TR(0x744d0a);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B744d0e:{NFSU2_TR(0x744d0e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744d0f:{NFSU2_TR(0x744d0f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744d10:{NFSU2_TR(0x744d10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744d15ull));
TAIL_STATIC(0x7414a0u,741);
}
B744d15:L744d15:{c.instructions+=3;NFSU2_TR(0x744d15);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B744d18:{NFSU2_TR(0x744d18);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744d19:{NFSU2_TR(0x744d19);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744d1eull));
TAIL_STATIC(0x7420b0u,742);
}
B744d1e:L744d1e:{c.instructions+=6;NFSU2_TR(0x744d1e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744d1f:{NFSU2_TR(0x744d1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B744d22:{NFSU2_TR(0x744d22);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B744d26:{NFSU2_TR(0x744d26);
u8 U[4];
w4(U+0,u32(0x7d2940ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744d2b:{NFSU2_TR(0x744d2b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744d2c:{NFSU2_TR(0x744d2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744d31ull));
TAIL_STATIC(0x75c784u,75c);
}
B744d31:L744d31:{c.instructions+=9;NFSU2_TR(0x744d31);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B744d34:{NFSU2_TR(0x744d34);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744d39:{NFSU2_TR(0x744d39);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744d3b:{NFSU2_TR(0x744d3b);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((R+4),(U+0),4);
}
B744d3e:{NFSU2_TR(0x744d3e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744d3f:{NFSU2_TR(0x744d3f);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B744d43:{NFSU2_TR(0x744d43);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744d44:{NFSU2_TR(0x744d44);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744d45:{NFSU2_TR(0x744d45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744d4aull));
TAIL_STATIC(0x7414a0u,741);
}
B744d4a:L744d4a:{c.instructions+=3;NFSU2_TR(0x744d4a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B744d4d:{NFSU2_TR(0x744d4d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744d4e:{NFSU2_TR(0x744d4e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744d53ull));
TAIL_STATIC(0x742360u,742);
}
B744d53:L744d53:{c.instructions+=5;NFSU2_TR(0x744d53);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744d54:{NFSU2_TR(0x744d54);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B744d58:{NFSU2_TR(0x744d58);
u8 U[4];
w4(U+0,u32(0x7d2934ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744d5d:{NFSU2_TR(0x744d5d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744d5e:{NFSU2_TR(0x744d5e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744d63ull));
TAIL_STATIC(0x75c784u,75c);
}
B744d63:L744d63:{c.instructions+=6;NFSU2_TR(0x744d63);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B744d66:{NFSU2_TR(0x744d66);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744d68:{NFSU2_TR(0x744d68);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B744d6c:{NFSU2_TR(0x744d6c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744d6d:{NFSU2_TR(0x744d6d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744d6e:{NFSU2_TR(0x744d6e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744d73ull));
TAIL_STATIC(0x7414a0u,741);
}
B744d73:L744d73:{c.instructions+=3;NFSU2_TR(0x744d73);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B744d76:{NFSU2_TR(0x744d76);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744d77:{NFSU2_TR(0x744d77);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744d7cull));
TAIL_STATIC(0x7420b0u,742);
}
B744d7c:L744d7c:{c.instructions+=7;NFSU2_TR(0x744d7c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B744d7f:{NFSU2_TR(0x744d7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B744d82:{NFSU2_TR(0x744d82);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B744d88:{NFSU2_TR(0x744d88);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B744d89:{NFSU2_TR(0x744d89);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x64ull))));
}
B744d8c:{NFSU2_TR(0x744d8c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B744d8e:{NFSU2_TR(0x744d8e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x744c10u);}goto L744c10;}}
}
B744d94:L744d94:{c.instructions+=4;NFSU2_TR(0x744d94);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x168ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B744d9a:{NFSU2_TR(0x744d9a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B744d9c:{NFSU2_TR(0x744d9c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B744d9e:{NFSU2_TR(0x744d9e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L744e0f;}}
}
B744da0:L744da0:{c.instructions+=1;NFSU2_TR(0x744da0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x170ull))));
__builtin_memmove((R+12),(U+0),4);
}
B744da6:L744da6:{c.instructions+=5;NFSU2_TR(0x744da6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744da7:{NFSU2_TR(0x744da7);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B744dab:{NFSU2_TR(0x744dab);
u8 U[4];
w4(U+0,u32(0x7d2928ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744db0:{NFSU2_TR(0x744db0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744db1:{NFSU2_TR(0x744db1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744db6ull));
TAIL_STATIC(0x75c784u,75c);
}
B744db6:L744db6:{c.instructions+=6;NFSU2_TR(0x744db6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B744db9:{NFSU2_TR(0x744db9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744dbb:{NFSU2_TR(0x744dbb);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B744dbf:{NFSU2_TR(0x744dbf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744dc0:{NFSU2_TR(0x744dc0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744dc1:{NFSU2_TR(0x744dc1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744dc6ull));
TAIL_STATIC(0x7414a0u,741);
}
B744dc6:L744dc6:{c.instructions+=3;NFSU2_TR(0x744dc6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B744dc9:{NFSU2_TR(0x744dc9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744dca:{NFSU2_TR(0x744dca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744dcfull));
TAIL_STATIC(0x7420b0u,742);
}
B744dcf:L744dcf:{c.instructions+=6;NFSU2_TR(0x744dcf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744dd0:{NFSU2_TR(0x744dd0);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B744dd4:{NFSU2_TR(0x744dd4);
u8 U[4];
w4(U+0,u32(0x7d2918ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744dd9:{NFSU2_TR(0x744dd9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744dda:{NFSU2_TR(0x744dda);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B744ddd:{NFSU2_TR(0x744ddd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744de2ull));
TAIL_STATIC(0x75c784u,75c);
}
B744de2:L744de2:{c.instructions+=8;NFSU2_TR(0x744de2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B744de5:{NFSU2_TR(0x744de5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744de7:{NFSU2_TR(0x744de7);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744de9:{NFSU2_TR(0x744de9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744dea:{NFSU2_TR(0x744dea);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B744dee:{NFSU2_TR(0x744dee);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744def:{NFSU2_TR(0x744def);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744df0:{NFSU2_TR(0x744df0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744df5ull));
TAIL_STATIC(0x7414a0u,741);
}
B744df5:L744df5:{c.instructions+=3;NFSU2_TR(0x744df5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B744df8:{NFSU2_TR(0x744df8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744df9:{NFSU2_TR(0x744df9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744dfeull));
TAIL_STATIC(0x742360u,742);
}
B744dfe:L744dfe:{c.instructions+=6;NFSU2_TR(0x744dfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x168ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B744e04:{NFSU2_TR(0x744e04);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B744e07:{NFSU2_TR(0x744e07);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B744e08:{NFSU2_TR(0x744e08);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x28ull))));
}
B744e0b:{NFSU2_TR(0x744e0b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B744e0d:{NFSU2_TR(0x744e0d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x744da6u);}goto L744da6;}}
}
B744e0f:L744e0f:{c.instructions+=3;NFSU2_TR(0x744e0f);
u8 U[4];
w4(U+0,u32(0x7d2910ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744e14:{NFSU2_TR(0x744e14);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744e15:{NFSU2_TR(0x744e15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744e1aull));
TAIL_STATIC(0x7414a0u,741);
}
B744e1a:L744e1a:{c.instructions+=3;NFSU2_TR(0x744e1a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B744e1d:{NFSU2_TR(0x744e1d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B744e1f:{NFSU2_TR(0x744e1f);
if(r1(R+518)){{goto L744e46;}}
}
B744e21:L744e21:{c.instructions+=6;NFSU2_TR(0x744e21);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744e26:{NFSU2_TR(0x744e26);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744e28:{NFSU2_TR(0x744e28);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x4cull))));
}
B744e2b:{NFSU2_TR(0x744e2b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744e2c:{NFSU2_TR(0x744e2c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744e2d:{NFSU2_TR(0x744e2d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744e32ull));
TAIL_STATIC(0x742360u,742);
}
B744e32:L744e32:{c.instructions+=7;NFSU2_TR(0x744e32);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B744e35:{NFSU2_TR(0x744e35);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B744e36:{NFSU2_TR(0x744e36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B744e37:{NFSU2_TR(0x744e37);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B744e38:{NFSU2_TR(0x744e38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B744e39:{NFSU2_TR(0x744e39);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B744e3d:{NFSU2_TR(0x744e3d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744e42ull));
TAIL_STATIC(0x76115eu,761);
}
B744e42:L744e42:{c.instructions+=2;NFSU2_TR(0x744e42);
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
B744e45:{NFSU2_TR(0x744e45);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B744e46:L744e46:{c.instructions+=10;NFSU2_TR(0x744e46);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B744e4c:{NFSU2_TR(0x744e4c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744e4d:{NFSU2_TR(0x744e4d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x228ull))));
__builtin_memmove((R+4),(U+0),4);
}
B744e53:{NFSU2_TR(0x744e53);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744e54:{NFSU2_TR(0x744e54);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1c4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B744e5a:{NFSU2_TR(0x744e5a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744e5b:{NFSU2_TR(0x744e5b);
u8 U[4];
w4(U+0,u32(0x7d2904ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744e60:{NFSU2_TR(0x744e60);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x4cull))));
}
B744e63:{NFSU2_TR(0x744e63);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744e64:{NFSU2_TR(0x744e64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744e69ull));
TAIL_STATIC(0x75c784u,75c);
}
B744e69:L744e69:{c.instructions+=7;NFSU2_TR(0x744e69);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B744e6d:{NFSU2_TR(0x744e6d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B744e70:{NFSU2_TR(0x744e70);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B744e71:{NFSU2_TR(0x744e71);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B744e72:{NFSU2_TR(0x744e72);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B744e73:{NFSU2_TR(0x744e73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B744e74:{NFSU2_TR(0x744e74);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744e79ull));
TAIL_STATIC(0x76115eu,761);
}
B744e79:L744e79:{c.instructions+=2;NFSU2_TR(0x744e79);
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
B744e7c:{NFSU2_TR(0x744e7c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B744e80:L744e80:{c.instructions+=3;NFSU2_TR(0x744e80);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B744e84:{NFSU2_TR(0x744e84);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B744e86:{NFSU2_TR(0x744e86);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L744e8d;}}
}
B744e88:L744e88:{c.instructions+=1;NFSU2_TR(0x744e88);
w4(R+8,u32(0x1ffull));
}
B744e8d:L744e8d:{c.instructions+=35;NFSU2_TR(0x744e8d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744e8e:{NFSU2_TR(0x744e8e);
__builtin_memmove((R+0),(R+8),4);
}
B744e90:{NFSU2_TR(0x744e90);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B744e93:{NFSU2_TR(0x744e93);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0x7ull))));
}
B744e95:{NFSU2_TR(0x744e95);
__builtin_memmove((R+12),(R+0),1);
}
B744e97:{NFSU2_TR(0x744e97);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w1(R+12,shl<u8>(r1(R+12),u64(r4(U+0))));
}
B744e9a:{NFSU2_TR(0x744e9a);
w1(R+12,u8(u32(r1(R+12))|u32(r1(R+0))));
}
B744e9c:{NFSU2_TR(0x744e9c);
__builtin_memmove((R+4),(R+8),4);
}
B744e9e:{NFSU2_TR(0x744e9e);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B744ea1:{NFSU2_TR(0x744ea1);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0x7ull))));
}
B744ea4:{NFSU2_TR(0x744ea4);
w1(R+0,shr<u8>(r1(R+0),u64(u32(0x1ull))));
}
B744ea6:{NFSU2_TR(0x744ea6);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w1(R+12,shl<u8>(r1(R+12),u64(r4(U+0))));
}
B744ea9:{NFSU2_TR(0x744ea9);
w1(R+12,u8(u32(r1(R+12))|u32(r1(R+0))));
}
B744eab:{NFSU2_TR(0x744eab);
__builtin_memmove((R+0),(R+4),1);
}
B744ead:{NFSU2_TR(0x744ead);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w1(R+0,shl<u8>(r1(R+0),u64(r4(U+0))));
}
B744eb0:{NFSU2_TR(0x744eb0);
w1(R+0,u8(u32(r1(R+0))|u32(r1(R+4))));
}
B744eb2:{NFSU2_TR(0x744eb2);
w1(R+4,shr<u8>(r1(R+4),u64(u32(0x1ull))));
}
B744eb4:{NFSU2_TR(0x744eb4);
w1(R+8,u8(u32(r1(R+8))&u32(u8(0x7ull))));
}
B744eb7:{NFSU2_TR(0x744eb7);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w1(R+0,shl<u8>(r1(R+0),u64(r4(U+0))));
}
B744eba:{NFSU2_TR(0x744eba);
w1(R+0,u8(u32(r1(R+0))|u32(r1(R+4))));
}
B744ebc:{NFSU2_TR(0x744ebc);
__builtin_memmove((R+4),(R+8),1);
}
B744ebe:{NFSU2_TR(0x744ebe);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w1(R+4,shl<u8>(r1(R+4),u64(r4(U+0))));
}
B744ec1:{NFSU2_TR(0x744ec1);
w1(R+4,u8(u32(r1(R+4))|u32(r1(R+8))));
}
B744ec3:{NFSU2_TR(0x744ec3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744ec4:{NFSU2_TR(0x744ec4);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B744ec8:{NFSU2_TR(0x744ec8);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w1(R+4,shl<u8>(r1(R+4),u64(r4(U+0))));
}
B744ecb:{NFSU2_TR(0x744ecb);
w1(R+8,shr<u8>(r1(R+8),u64(u32(0x1ull))));
}
B744ecd:{NFSU2_TR(0x744ecd);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+4,u8(u32(r1(R+4))|u32(r1(R+8))));
w1(R+519,u8(s8(r1(R+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B744ecf:{NFSU2_TR(0x744ecf);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
s1(u32(r4(R+24)),r1(U+0));
}
B744ed1:{NFSU2_TR(0x744ed1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B744ed4:{NFSU2_TR(0x744ed4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B744ed7:{NFSU2_TR(0x744ed7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ull))));
w1(U+4,u8(0xffull));
s1(u32(r4(U+0)),r1(U+4));
}
B744edb:{NFSU2_TR(0x744edb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B744edc:{NFSU2_TR(0x744edc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B744edd:{NFSU2_TR(0x744edd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B744ee0:L744ee0:{c.instructions+=10;NFSU2_TR(0x744ee0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B744ee4:{NFSU2_TR(0x744ee4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744ee5:{NFSU2_TR(0x744ee5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B744ee9:{NFSU2_TR(0x744ee9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B744eec:{NFSU2_TR(0x744eec);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744eed:{NFSU2_TR(0x744eed);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B744ef1:{NFSU2_TR(0x744ef1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744ef2:{NFSU2_TR(0x744ef2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744ef3:{NFSU2_TR(0x744ef3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744ef4:{NFSU2_TR(0x744ef4);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744ef7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B744ef7:L744ef7:{c.instructions+=4;NFSU2_TR(0x744ef7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B744efa:{NFSU2_TR(0x744efa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B744efd:{NFSU2_TR(0x744efd);
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffefffull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
}
B744f02:{NFSU2_TR(0x744f02);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L744f25;}}
}
B744f04:L744f04:{c.instructions+=2;NFSU2_TR(0x744f04);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x20ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B744f07:{NFSU2_TR(0x744f07);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L744f25;}}
}
B744f09:L744f09:{c.instructions+=5;NFSU2_TR(0x744f09);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B744f0c:{NFSU2_TR(0x744f0c);
u8 U[16];
w4(U+0,u32(u32(u32(0x1498ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B744f13:{NFSU2_TR(0x744f13);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B744f16:{NFSU2_TR(0x744f16);
u8 U[12];
w4(U+0,u32(u32(u32(0x1498ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B744f1d:{NFSU2_TR(0x744f1d);
if(r1(R+518)){{goto L744f25;}}
}
B744f1f:L744f1f:{c.instructions+=1;NFSU2_TR(0x744f1f);
u8 U[4];
w4(U+0,u32(0xffffffffull));
s4(u32(r4(R+0)),r4(U+0));
}
B744f25:L744f25:{c.instructions+=2;NFSU2_TR(0x744f25);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744f26:{NFSU2_TR(0x744f26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744f2bull));
TAIL_STATIC(0x598ec0u,598);
}
B744f2b:L744f2b:{c.instructions+=4;NFSU2_TR(0x744f2b);
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
B744f2e:{NFSU2_TR(0x744f2e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B744f2f:{NFSU2_TR(0x744f2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B744f30:{NFSU2_TR(0x744f30);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B744f40:L744f40:{c.instructions+=3;NFSU2_TR(0x744f40);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744f41:{NFSU2_TR(0x744f41);
u8 U[4];
w4(U+0,u32(0x5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744f43:{NFSU2_TR(0x744f43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744f48ull));
TAIL_STATIC(0x5836d0u,583);
}
B744f48:L744f48:{c.instructions+=4;NFSU2_TR(0x744f48);
__builtin_memmove((R+24),(R+0),4);
}
B744f4a:{NFSU2_TR(0x744f4a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B744f4d:{NFSU2_TR(0x744f4d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B744f4f:{NFSU2_TR(0x744f4f);
if(r1(R+518)){{goto L744f90;}}
}
B744f51:L744f51:{c.instructions+=5;NFSU2_TR(0x744f51);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B744f55:{NFSU2_TR(0x744f55);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744f56:{NFSU2_TR(0x744f56);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B744f58:{NFSU2_TR(0x744f58);
w4(R+4,u32(0x17ull));
}
B744f5d:{NFSU2_TR(0x744f5d);
__builtin_memmove((R+28),(R+24),4);
}
B744f5f:L744f5f:{c.instructions+=1;NFSU2_TR(0x744f5f);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L744f61;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x744f5fu);}goto L744f5f;}
}
B744f61:L744f61:{c.instructions+=12;NFSU2_TR(0x744f61);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B744f65:{NFSU2_TR(0x744f65);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B744f69:{NFSU2_TR(0x744f69);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B744f6a:{NFSU2_TR(0x744f6a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744f6b:{NFSU2_TR(0x744f6b);
u8 U[4];
w4(U+0,u32(0x744ee0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744f70:{NFSU2_TR(0x744f70);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B744f73:{NFSU2_TR(0x744f73);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B744f77:{NFSU2_TR(0x744f77);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744f78:{NFSU2_TR(0x744f78);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744f79:{NFSU2_TR(0x744f79);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
w4(U+4,u32(0x6f6e6365ull));
s4(u32(r4(U+0)),r4(U+4));
}
B744f80:{NFSU2_TR(0x744f80);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B744f83:{NFSU2_TR(0x744f83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744f88ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x744410u);}goto L744410;}
}
B744f88:L744f88:{c.instructions+=4;NFSU2_TR(0x744f88);
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
B744f8b:{NFSU2_TR(0x744f8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B744f8e:{NFSU2_TR(0x744f8e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B744f8f:{NFSU2_TR(0x744f8f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B744f90:L744f90:{c.instructions+=3;NFSU2_TR(0x744f90);
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
B744f93:{NFSU2_TR(0x744f93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B744f94:{NFSU2_TR(0x744f94);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B744fa0:L744fa0:{c.instructions+=2;NFSU2_TR(0x744fa0);
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffefffull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
}
B744fa5:{NFSU2_TR(0x744fa5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L744fe6;}}
}
B744fa7:L744fa7:{c.instructions+=2;NFSU2_TR(0x744fa7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x20ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B744faa:{NFSU2_TR(0x744faa);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L744fe6;}}
}
B744fac:L744fac:{c.instructions+=4;NFSU2_TR(0x744fac);
u8 U[12];
w4(U+0,u32(u32(u32(0x528ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B744fb3:{NFSU2_TR(0x744fb3);
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffefffull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
}
B744fb8:{NFSU2_TR(0x744fb8);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B744fbb:{NFSU2_TR(0x744fbb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L744fd7;}}
}
B744fbd:L744fbd:{c.instructions+=2;NFSU2_TR(0x744fbd);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x20ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B744fc0:{NFSU2_TR(0x744fc0);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L744fd7;}}
}
B744fc2:L744fc2:{c.instructions+=4;NFSU2_TR(0x744fc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B744fc5:{NFSU2_TR(0x744fc5);
u8 U[12];
w4(U+0,u32(u32(u32(0x1498ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B744fcc:{NFSU2_TR(0x744fcc);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B744fcf:{NFSU2_TR(0x744fcf);
if(r1(R+518)){{goto L744fd7;}}
}
B744fd1:L744fd1:{c.instructions+=1;NFSU2_TR(0x744fd1);
u8 U[4];
w4(U+0,u32(0xffffffffull));
s4(u32(r4(R+0)),r4(U+0));
}
B744fd7:L744fd7:{c.instructions+=2;NFSU2_TR(0x744fd7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744fd8:{NFSU2_TR(0x744fd8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744fddull));
TAIL_STATIC(0x598ec0u,598);
}
B744fdd:L744fdd:{c.instructions+=3;NFSU2_TR(0x744fdd);
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
B744fe0:{NFSU2_TR(0x744fe0);
w4(R+0,u32(0x1ull));
}
B744fe5:{NFSU2_TR(0x744fe5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B744fe6:L744fe6:{c.instructions+=2;NFSU2_TR(0x744fe6);
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
B744fe8:{NFSU2_TR(0x744fe8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B744ff0:L744ff0:{c.instructions+=3;NFSU2_TR(0x744ff0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744ff1:{NFSU2_TR(0x744ff1);
u8 U[4];
w4(U+0,u32(0x1988ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B744ff6:{NFSU2_TR(0x744ff6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x744ffbull));
TAIL_STATIC(0x5836d0u,583);
}
B744ffb:L744ffb:{c.instructions+=2;NFSU2_TR(0x744ffb);
__builtin_memmove((R+24),(R+0),4);
}
B744ffd:{NFSU2_TR(0x744ffd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
TAIL_STATIC(0x745000u,745);
}
XIT:NFSU2_TR_EXIT(0x744,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
