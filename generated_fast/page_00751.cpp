#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_583(u8* __restrict R,Cpu& c);
u32 body_598(u8* __restrict R,Cpu& c);
u32 body_743(u8* __restrict R,Cpu& c);
u32 body_74a(u8* __restrict R,Cpu& c);
u32 body_74b(u8* __restrict R,Cpu& c);
u32 body_750(u8* __restrict R,Cpu& c);
u32 body_752(u8* __restrict R,Cpu& c);
u32 body_761(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x751,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x751,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_751(u8* __restrict R,Cpu& c);
u32 page_751(Cpu& c){return body_751(c.regs.data(),c);}
__attribute__((noinline)) u32 body_751(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x751002:goto L751002;
case 0x751004:c.instructions+=13;goto B751004;
case 0x751006:c.instructions+=12;goto B751006;
case 0x75100a:c.instructions+=11;goto B75100a;
case 0x75100d:c.instructions+=10;goto B75100d;
case 0x751013:c.instructions+=9;goto B751013;
case 0x751015:c.instructions+=8;goto B751015;
case 0x751019:c.instructions+=7;goto B751019;
case 0x75101a:c.instructions+=6;goto B75101a;
case 0x75101f:c.instructions+=5;goto B75101f;
case 0x751021:c.instructions+=4;goto B751021;
case 0x751025:c.instructions+=3;goto B751025;
case 0x751028:c.instructions+=2;goto B751028;
case 0x751029:c.instructions+=1;goto B751029;
case 0x75102e:goto L75102e;
case 0x751033:c.instructions+=17;goto B751033;
case 0x751038:c.instructions+=16;goto B751038;
case 0x75103d:c.instructions+=15;goto B75103d;
case 0x751040:c.instructions+=14;goto B751040;
case 0x751042:c.instructions+=13;goto B751042;
case 0x751047:c.instructions+=12;goto B751047;
case 0x75104a:c.instructions+=11;goto B75104a;
case 0x75104c:c.instructions+=10;goto B75104c;
case 0x75104f:c.instructions+=9;goto B75104f;
case 0x751051:c.instructions+=8;goto B751051;
case 0x751053:c.instructions+=7;goto B751053;
case 0x751057:c.instructions+=6;goto B751057;
case 0x75105a:c.instructions+=5;goto B75105a;
case 0x751060:c.instructions+=4;goto B751060;
case 0x751062:c.instructions+=3;goto B751062;
case 0x751066:c.instructions+=2;goto B751066;
case 0x75106a:c.instructions+=1;goto B75106a;
case 0x75106f:goto L75106f;
case 0x751072:c.instructions+=1;goto B751072;
case 0x751080:goto L751080;
case 0x751082:c.instructions+=7;goto B751082;
case 0x751088:c.instructions+=6;goto B751088;
case 0x75108e:c.instructions+=5;goto B75108e;
case 0x751098:c.instructions+=4;goto B751098;
case 0x75109e:c.instructions+=3;goto B75109e;
case 0x7510a4:c.instructions+=2;goto B7510a4;
case 0x7510aa:c.instructions+=1;goto B7510aa;
case 0x7510af:goto L7510af;
case 0x7510b4:c.instructions+=2;goto B7510b4;
case 0x7510ba:c.instructions+=1;goto B7510ba;
case 0x7510c0:goto L7510c0;
case 0x7510c3:c.instructions+=7;goto B7510c3;
case 0x7510c8:c.instructions+=6;goto B7510c8;
case 0x7510c9:c.instructions+=5;goto B7510c9;
case 0x7510cb:c.instructions+=4;goto B7510cb;
case 0x7510cf:c.instructions+=3;goto B7510cf;
case 0x7510d6:c.instructions+=2;goto B7510d6;
case 0x7510de:c.instructions+=1;goto B7510de;
case 0x7510e0:goto L7510e0;
case 0x7510e3:c.instructions+=5;goto B7510e3;
case 0x7510e5:c.instructions+=4;goto B7510e5;
case 0x7510e7:c.instructions+=3;goto B7510e7;
case 0x7510ec:c.instructions+=2;goto B7510ec;
case 0x7510ed:c.instructions+=1;goto B7510ed;
case 0x7510f2:goto L7510f2;
case 0x7510f5:c.instructions+=2;goto B7510f5;
case 0x7510f7:c.instructions+=1;goto B7510f7;
case 0x7510f9:goto L7510f9;
case 0x751103:c.instructions+=1;goto B751103;
case 0x751108:goto L751108;
case 0x75110f:c.instructions+=3;goto B75110f;
case 0x751110:c.instructions+=2;goto B751110;
case 0x751111:c.instructions+=1;goto B751111;
case 0x751113:goto L751113;
case 0x751116:c.instructions+=7;goto B751116;
case 0x75111a:c.instructions+=6;goto B75111a;
case 0x75111b:c.instructions+=5;goto B75111b;
case 0x75111f:c.instructions+=4;goto B75111f;
case 0x751120:c.instructions+=3;goto B751120;
case 0x751121:c.instructions+=2;goto B751121;
case 0x751129:c.instructions+=1;goto B751129;
case 0x75112e:goto L75112e;
case 0x751130:c.instructions+=3;goto B751130;
case 0x751133:c.instructions+=2;goto B751133;
case 0x751135:c.instructions+=1;goto B751135;
case 0x751137:goto L751137;
case 0x75113a:c.instructions+=2;goto B75113a;
case 0x75113b:c.instructions+=1;goto B75113b;
case 0x751140:goto L751140;
case 0x751145:c.instructions+=6;goto B751145;
case 0x751146:c.instructions+=5;goto B751146;
case 0x751148:c.instructions+=4;goto B751148;
case 0x75114a:c.instructions+=3;goto B75114a;
case 0x75114b:c.instructions+=2;goto B75114b;
case 0x75114e:c.instructions+=1;goto B75114e;
case 0x751153:goto L751153;
case 0x751156:c.instructions+=2;goto B751156;
case 0x751160:c.instructions+=1;goto B751160;
case 0x751165:goto L751165;
case 0x75116c:c.instructions+=1;goto B75116c;
case 0x751172:goto L751172;
case 0x751178:c.instructions+=6;goto B751178;
case 0x75117e:c.instructions+=5;goto B75117e;
case 0x751180:c.instructions+=4;goto B751180;
case 0x751181:c.instructions+=3;goto B751181;
case 0x751187:c.instructions+=2;goto B751187;
case 0x75118d:c.instructions+=1;goto B75118d;
case 0x751193:goto L751193;
case 0x751199:c.instructions+=6;goto B751199;
case 0x75119b:c.instructions+=5;goto B75119b;
case 0x7511a1:c.instructions+=4;goto B7511a1;
case 0x7511a6:c.instructions+=3;goto B7511a6;
case 0x7511a8:c.instructions+=2;goto B7511a8;
case 0x7511ac:c.instructions+=1;goto B7511ac;
case 0x7511ae:goto L7511ae;
case 0x7511b2:c.instructions+=1;goto B7511b2;
case 0x7511b5:goto L7511b5;
case 0x7511b7:c.instructions+=8;goto B7511b7;
case 0x7511b9:c.instructions+=7;goto B7511b9;
case 0x7511bb:c.instructions+=6;goto B7511bb;
case 0x7511bd:c.instructions+=5;goto B7511bd;
case 0x7511be:c.instructions+=4;goto B7511be;
case 0x7511bf:c.instructions+=3;goto B7511bf;
case 0x7511c2:c.instructions+=2;goto B7511c2;
case 0x7511c3:c.instructions+=1;goto B7511c3;
case 0x7511c8:goto L7511c8;
case 0x7511ca:c.instructions+=3;goto B7511ca;
case 0x7511cd:c.instructions+=2;goto B7511cd;
case 0x7511cf:c.instructions+=1;goto B7511cf;
case 0x7511d5:goto L7511d5;
case 0x7511db:goto L7511db;
case 0x7511e0:goto L7511e0;
case 0x7511e6:c.instructions+=3;goto B7511e6;
case 0x7511e8:c.instructions+=2;goto B7511e8;
case 0x7511ee:c.instructions+=1;goto B7511ee;
case 0x7511f0:goto L7511f0;
case 0x7511f2:goto L7511f2;
case 0x7511f6:c.instructions+=8;goto B7511f6;
case 0x7511fc:c.instructions+=7;goto B7511fc;
case 0x7511fe:c.instructions+=6;goto B7511fe;
case 0x751200:c.instructions+=5;goto B751200;
case 0x751204:c.instructions+=4;goto B751204;
case 0x751206:c.instructions+=3;goto B751206;
case 0x751209:c.instructions+=2;goto B751209;
case 0x75120f:c.instructions+=1;goto B75120f;
case 0x751211:goto L751211;
case 0x751215:c.instructions+=3;goto B751215;
case 0x751218:c.instructions+=2;goto B751218;
case 0x75121a:c.instructions+=1;goto B75121a;
case 0x75121c:goto L75121c;
case 0x751226:c.instructions+=2;goto B751226;
case 0x75122b:c.instructions+=1;goto B75122b;
case 0x75122d:goto L75122d;
case 0x751233:c.instructions+=10;goto B751233;
case 0x751239:c.instructions+=9;goto B751239;
case 0x75123a:c.instructions+=8;goto B75123a;
case 0x751240:c.instructions+=7;goto B751240;
case 0x751246:c.instructions+=6;goto B751246;
case 0x751247:c.instructions+=5;goto B751247;
case 0x75124d:c.instructions+=4;goto B75124d;
case 0x751250:c.instructions+=3;goto B751250;
case 0x751252:c.instructions+=2;goto B751252;
case 0x751258:c.instructions+=1;goto B751258;
case 0x75125a:goto L75125a;
case 0x75125c:c.instructions+=7;goto B75125c;
case 0x751260:c.instructions+=6;goto B751260;
case 0x751261:c.instructions+=5;goto B751261;
case 0x751262:c.instructions+=4;goto B751262;
case 0x751265:c.instructions+=3;goto B751265;
case 0x751266:c.instructions+=2;goto B751266;
case 0x751267:c.instructions+=1;goto B751267;
case 0x751269:goto L751269;
case 0x75126c:goto L75126c;
case 0x751272:c.instructions+=3;goto B751272;
case 0x751273:c.instructions+=2;goto B751273;
case 0x751279:c.instructions+=1;goto B751279;
case 0x751280:goto L751280;
case 0x751287:c.instructions+=1;goto B751287;
case 0x75128d:goto L75128d;
case 0x75128f:goto L75128f;
case 0x751299:goto L751299;
case 0x75129f:c.instructions+=3;goto B75129f;
case 0x7512a4:c.instructions+=2;goto B7512a4;
case 0x7512a6:c.instructions+=1;goto B7512a6;
case 0x7512ac:goto L7512ac;
case 0x7512b2:c.instructions+=2;goto B7512b2;
case 0x7512b4:c.instructions+=1;goto B7512b4;
case 0x7512b6:goto L7512b6;
case 0x7512bc:c.instructions+=2;goto B7512bc;
case 0x7512c2:c.instructions+=1;goto B7512c2;
case 0x7512c4:goto L7512c4;
case 0x7512c9:goto L7512c9;
case 0x7512cf:c.instructions+=3;goto B7512cf;
case 0x7512d2:c.instructions+=2;goto B7512d2;
case 0x7512d4:c.instructions+=1;goto B7512d4;
case 0x7512d6:goto L7512d6;
case 0x7512dc:c.instructions+=2;goto B7512dc;
case 0x7512e2:c.instructions+=1;goto B7512e2;
case 0x7512e7:goto L7512e7;
case 0x7512e9:c.instructions+=7;goto B7512e9;
case 0x7512ef:c.instructions+=6;goto B7512ef;
case 0x7512f5:c.instructions+=5;goto B7512f5;
case 0x7512fb:c.instructions+=4;goto B7512fb;
case 0x7512fd:c.instructions+=3;goto B7512fd;
case 0x7512fe:c.instructions+=2;goto B7512fe;
case 0x751304:c.instructions+=1;goto B751304;
case 0x75130a:goto L75130a;
case 0x751310:c.instructions+=1;goto B751310;
case 0x751316:goto L751316;
case 0x75131c:c.instructions+=2;goto B75131c;
case 0x75131e:c.instructions+=1;goto B75131e;
case 0x751320:goto L751320;
case 0x751326:c.instructions+=2;goto B751326;
case 0x75132c:c.instructions+=1;goto B75132c;
case 0x751332:goto L751332;
case 0x751335:c.instructions+=3;goto B751335;
case 0x751337:c.instructions+=2;goto B751337;
case 0x751341:c.instructions+=1;goto B751341;
case 0x751343:goto L751343;
case 0x751349:c.instructions+=8;goto B751349;
case 0x75134b:c.instructions+=7;goto B75134b;
case 0x75134f:c.instructions+=6;goto B75134f;
case 0x751351:c.instructions+=5;goto B751351;
case 0x751352:c.instructions+=4;goto B751352;
case 0x751355:c.instructions+=3;goto B751355;
case 0x751356:c.instructions+=2;goto B751356;
case 0x751357:c.instructions+=1;goto B751357;
case 0x751359:goto L751359;
case 0x75135c:goto L75135c;
case 0x751362:c.instructions+=15;goto B751362;
case 0x751368:c.instructions+=14;goto B751368;
case 0x75136e:c.instructions+=13;goto B75136e;
case 0x751370:c.instructions+=12;goto B751370;
case 0x751374:c.instructions+=11;goto B751374;
case 0x751376:c.instructions+=10;goto B751376;
case 0x751378:c.instructions+=9;goto B751378;
case 0x75137a:c.instructions+=8;goto B75137a;
case 0x75137d:c.instructions+=7;goto B75137d;
case 0x75137f:c.instructions+=6;goto B75137f;
case 0x751380:c.instructions+=5;goto B751380;
case 0x751383:c.instructions+=4;goto B751383;
case 0x751387:c.instructions+=3;goto B751387;
case 0x751388:c.instructions+=2;goto B751388;
case 0x751389:c.instructions+=1;goto B751389;
case 0x75138e:goto L75138e;
case 0x751390:c.instructions+=3;goto B751390;
case 0x751393:c.instructions+=2;goto B751393;
case 0x751395:c.instructions+=1;goto B751395;
case 0x751397:goto L751397;
case 0x75139c:goto L75139c;
case 0x7513a2:c.instructions+=7;goto B7513a2;
case 0x7513a8:c.instructions+=6;goto B7513a8;
case 0x7513aa:c.instructions+=5;goto B7513aa;
case 0x7513b0:c.instructions+=4;goto B7513b0;
case 0x7513b4:c.instructions+=3;goto B7513b4;
case 0x7513b7:c.instructions+=2;goto B7513b7;
case 0x7513b9:c.instructions+=1;goto B7513b9;
case 0x7513bb:goto L7513bb;
case 0x7513c1:c.instructions+=6;goto B7513c1;
case 0x7513c7:c.instructions+=5;goto B7513c7;
case 0x7513c9:c.instructions+=4;goto B7513c9;
case 0x7513ca:c.instructions+=3;goto B7513ca;
case 0x7513d0:c.instructions+=2;goto B7513d0;
case 0x7513da:c.instructions+=1;goto B7513da;
case 0x7513e0:goto L7513e0;
case 0x7513e7:c.instructions+=1;goto B7513e7;
case 0x7513ed:goto L7513ed;
case 0x7513f3:c.instructions+=4;goto B7513f3;
case 0x7513f5:c.instructions+=3;goto B7513f5;
case 0x7513f6:c.instructions+=2;goto B7513f6;
case 0x7513f7:c.instructions+=1;goto B7513f7;
case 0x7513f9:goto L7513f9;
case 0x7513ff:c.instructions+=2;goto B7513ff;
case 0x751401:c.instructions+=1;goto B751401;
case 0x751403:goto L751403;
case 0x751409:c.instructions+=5;goto B751409;
case 0x75140f:c.instructions+=4;goto B75140f;
case 0x751410:c.instructions+=3;goto B751410;
case 0x751412:c.instructions+=2;goto B751412;
case 0x751418:c.instructions+=1;goto B751418;
case 0x75141a:goto L75141a;
case 0x75141b:c.instructions+=2;goto B75141b;
case 0x75141c:c.instructions+=1;goto B75141c;
case 0x75141e:goto L75141e;
case 0x751421:goto L751421;
case 0x751427:c.instructions+=3;goto B751427;
case 0x751428:c.instructions+=2;goto B751428;
case 0x75142e:c.instructions+=1;goto B75142e;
case 0x751438:goto L751438;
case 0x75143c:c.instructions+=3;goto B75143c;
case 0x751440:c.instructions+=2;goto B751440;
case 0x751441:c.instructions+=1;goto B751441;
case 0x751446:goto L751446;
case 0x751449:c.instructions+=1;goto B751449;
case 0x751450:goto L751450;
case 0x751451:c.instructions+=5;goto B751451;
case 0x751452:c.instructions+=4;goto B751452;
case 0x751456:c.instructions+=3;goto B751456;
case 0x75145c:c.instructions+=2;goto B75145c;
case 0x75145d:c.instructions+=1;goto B75145d;
case 0x751462:goto L751462;
case 0x751465:c.instructions+=2;goto B751465;
case 0x751467:c.instructions+=1;goto B751467;
case 0x751469:goto L751469;
case 0x75146e:goto L75146e;
case 0x751470:c.instructions+=2;goto B751470;
case 0x751474:c.instructions+=1;goto B751474;
case 0x751479:goto L751479;
case 0x75147a:c.instructions+=1;goto B75147a;
case 0x75147f:goto L75147f;
case 0x751482:goto L751482;
case 0x751483:c.instructions+=3;goto B751483;
case 0x751485:c.instructions+=2;goto B751485;
case 0x751486:c.instructions+=1;goto B751486;
case 0x751490:goto L751490;
case 0x751491:c.instructions+=3;goto B751491;
case 0x751495:c.instructions+=2;goto B751495;
case 0x75149c:c.instructions+=1;goto B75149c;
case 0x75149e:goto L75149e;
case 0x7514a8:c.instructions+=1;goto B7514a8;
case 0x7514b2:goto L7514b2;
case 0x7514b5:c.instructions+=2;goto B7514b5;
case 0x7514b7:c.instructions+=1;goto B7514b7;
case 0x7514b9:goto L7514b9;
case 0x7514ba:c.instructions+=1;goto B7514ba;
case 0x7514bf:goto L7514bf;
case 0x7514c2:c.instructions+=1;goto B7514c2;
case 0x7514c9:goto L7514c9;
case 0x7514cf:c.instructions+=2;goto B7514cf;
case 0x7514d0:c.instructions+=1;goto B7514d0;
case 0x7514d5:goto L7514d5;
case 0x7514db:c.instructions+=2;goto B7514db;
case 0x7514dc:c.instructions+=1;goto B7514dc;
case 0x7514e1:goto L7514e1;
case 0x7514e7:c.instructions+=2;goto B7514e7;
case 0x7514e8:c.instructions+=1;goto B7514e8;
case 0x7514ed:goto L7514ed;
case 0x7514ee:c.instructions+=1;goto B7514ee;
case 0x7514f3:goto L7514f3;
case 0x7514f6:c.instructions+=2;goto B7514f6;
case 0x7514f7:c.instructions+=1;goto B7514f7;
case 0x751500:goto L751500;
case 0x751504:c.instructions+=4;goto B751504;
case 0x751508:c.instructions+=3;goto B751508;
case 0x75150e:c.instructions+=2;goto B75150e;
case 0x751515:c.instructions+=1;goto B751515;
case 0x751520:goto L751520;
case 0x751521:c.instructions+=3;goto B751521;
case 0x751525:c.instructions+=2;goto B751525;
case 0x75152c:c.instructions+=1;goto B75152c;
case 0x75152e:goto L75152e;
case 0x751535:goto L751535;
case 0x751538:c.instructions+=2;goto B751538;
case 0x75153a:c.instructions+=1;goto B75153a;
case 0x75153c:goto L75153c;
case 0x75153d:c.instructions+=1;goto B75153d;
case 0x751542:goto L751542;
case 0x751545:goto L751545;
case 0x75154c:c.instructions+=4;goto B75154c;
case 0x751556:c.instructions+=3;goto B751556;
case 0x751558:c.instructions+=2;goto B751558;
case 0x751559:c.instructions+=1;goto B751559;
case 0x751560:goto L751560;
case 0x751561:c.instructions+=3;goto B751561;
case 0x751565:c.instructions+=2;goto B751565;
case 0x75156c:c.instructions+=1;goto B75156c;
case 0x75156e:goto L75156e;
case 0x751573:c.instructions+=2;goto B751573;
case 0x751574:c.instructions+=1;goto B751574;
case 0x751575:goto L751575;
case 0x751576:c.instructions+=12;goto B751576;
case 0x75157c:c.instructions+=11;goto B75157c;
case 0x75157d:c.instructions+=10;goto B75157d;
case 0x751583:c.instructions+=9;goto B751583;
case 0x751586:c.instructions+=8;goto B751586;
case 0x751587:c.instructions+=7;goto B751587;
case 0x75158d:c.instructions+=6;goto B75158d;
case 0x75158e:c.instructions+=5;goto B75158e;
case 0x751590:c.instructions+=4;goto B751590;
case 0x751596:c.instructions+=3;goto B751596;
case 0x75159a:c.instructions+=2;goto B75159a;
case 0x75159c:c.instructions+=1;goto B75159c;
case 0x75159e:goto L75159e;
case 0x75159f:c.instructions+=5;goto B75159f;
case 0x7515a0:c.instructions+=4;goto B7515a0;
case 0x7515a1:c.instructions+=3;goto B7515a1;
case 0x7515a3:c.instructions+=2;goto B7515a3;
case 0x7515a4:c.instructions+=1;goto B7515a4;
case 0x7515a5:goto L7515a5;
case 0x7515a9:c.instructions+=3;goto B7515a9;
case 0x7515ac:c.instructions+=2;goto B7515ac;
case 0x7515ae:c.instructions+=1;goto B7515ae;
case 0x7515b0:goto L7515b0;
case 0x7515b1:c.instructions+=5;goto B7515b1;
case 0x7515b2:c.instructions+=4;goto B7515b2;
case 0x7515b3:c.instructions+=3;goto B7515b3;
case 0x7515b8:c.instructions+=2;goto B7515b8;
case 0x7515b9:c.instructions+=1;goto B7515b9;
case 0x7515ba:goto L7515ba;
case 0x7515bc:c.instructions+=1;goto B7515bc;
case 0x7515be:goto L7515be;
case 0x7515c2:c.instructions+=14;goto B7515c2;
case 0x7515c4:c.instructions+=13;goto B7515c4;
case 0x7515c6:c.instructions+=12;goto B7515c6;
case 0x7515c8:c.instructions+=11;goto B7515c8;
case 0x7515c9:c.instructions+=10;goto B7515c9;
case 0x7515cb:c.instructions+=9;goto B7515cb;
case 0x7515cc:c.instructions+=8;goto B7515cc;
case 0x7515cd:c.instructions+=7;goto B7515cd;
case 0x7515cf:c.instructions+=6;goto B7515cf;
case 0x7515d0:c.instructions+=5;goto B7515d0;
case 0x7515d2:c.instructions+=4;goto B7515d2;
case 0x7515d3:c.instructions+=3;goto B7515d3;
case 0x7515d4:c.instructions+=2;goto B7515d4;
case 0x7515d5:c.instructions+=1;goto B7515d5;
case 0x7515d6:goto L7515d6;
case 0x7515dc:c.instructions+=6;goto B7515dc;
case 0x7515de:c.instructions+=5;goto B7515de;
case 0x7515e2:c.instructions+=4;goto B7515e2;
case 0x7515e6:c.instructions+=3;goto B7515e6;
case 0x7515e8:c.instructions+=2;goto B7515e8;
case 0x7515eb:c.instructions+=1;goto B7515eb;
case 0x7515ee:goto L7515ee;
case 0x7515f0:goto L7515f0;
case 0x7515f2:c.instructions+=1;goto B7515f2;
case 0x7515f5:goto L7515f5;
case 0x7515f7:goto L7515f7;
case 0x7515fc:goto L7515fc;
case 0x7515ff:c.instructions+=11;goto B7515ff;
case 0x751605:c.instructions+=10;goto B751605;
case 0x75160b:c.instructions+=9;goto B75160b;
case 0x75160d:c.instructions+=8;goto B75160d;
case 0x75160e:c.instructions+=7;goto B75160e;
case 0x751614:c.instructions+=6;goto B751614;
case 0x751617:c.instructions+=5;goto B751617;
case 0x751618:c.instructions+=4;goto B751618;
case 0x75161a:c.instructions+=3;goto B75161a;
case 0x75161b:c.instructions+=2;goto B75161b;
case 0x751621:c.instructions+=1;goto B751621;
case 0x751626:goto L751626;
case 0x75162c:c.instructions+=13;goto B75162c;
case 0x751632:c.instructions+=12;goto B751632;
case 0x751638:c.instructions+=11;goto B751638;
case 0x75163a:c.instructions+=10;goto B75163a;
case 0x75163c:c.instructions+=9;goto B75163c;
case 0x75163e:c.instructions+=8;goto B75163e;
case 0x75163f:c.instructions+=7;goto B75163f;
case 0x751641:c.instructions+=6;goto B751641;
case 0x751644:c.instructions+=5;goto B751644;
case 0x751646:c.instructions+=4;goto B751646;
case 0x751647:c.instructions+=3;goto B751647;
case 0x75164d:c.instructions+=2;goto B75164d;
case 0x75164f:c.instructions+=1;goto B75164f;
case 0x751651:goto L751651;
case 0x751656:goto L751656;
case 0x751657:c.instructions+=4;goto B751657;
case 0x751658:c.instructions+=3;goto B751658;
case 0x751659:c.instructions+=2;goto B751659;
case 0x75165a:c.instructions+=1;goto B75165a;
case 0x751660:goto L751660;
case 0x751661:c.instructions+=5;goto B751661;
case 0x751665:c.instructions+=4;goto B751665;
case 0x75166b:c.instructions+=3;goto B75166b;
case 0x751671:c.instructions+=2;goto B751671;
case 0x751672:c.instructions+=1;goto B751672;
case 0x751674:goto L751674;
case 0x75167a:c.instructions+=2;goto B75167a;
case 0x75167b:c.instructions+=1;goto B75167b;
case 0x751680:goto L751680;
case 0x751683:c.instructions+=2;goto B751683;
case 0x751685:c.instructions+=1;goto B751685;
case 0x751687:goto L751687;
case 0x75168c:goto L75168c;
case 0x75168e:c.instructions+=2;goto B75168e;
case 0x751692:c.instructions+=1;goto B751692;
case 0x751697:goto L751697;
case 0x751698:c.instructions+=1;goto B751698;
case 0x75169d:goto L75169d;
case 0x7516a0:goto L7516a0;
case 0x7516a6:c.instructions+=2;goto B7516a6;
case 0x7516ac:c.instructions+=1;goto B7516ac;
case 0x7516ae:goto L7516ae;
case 0x7516af:c.instructions+=3;goto B7516af;
case 0x7516b4:c.instructions+=2;goto B7516b4;
case 0x7516b5:c.instructions+=1;goto B7516b5;
case 0x7516b6:goto L7516b6;
case 0x7516bc:c.instructions+=5;goto B7516bc;
case 0x7516c0:c.instructions+=4;goto B7516c0;
case 0x7516c2:c.instructions+=3;goto B7516c2;
case 0x7516c6:c.instructions+=2;goto B7516c6;
case 0x7516c8:c.instructions+=1;goto B7516c8;
case 0x7516ca:goto L7516ca;
case 0x7516cc:goto L7516cc;
case 0x7516d0:c.instructions+=3;goto B7516d0;
case 0x7516d2:c.instructions+=2;goto B7516d2;
case 0x7516d5:c.instructions+=1;goto B7516d5;
case 0x7516d8:goto L7516d8;
case 0x7516da:goto L7516da;
case 0x7516dc:c.instructions+=1;goto B7516dc;
case 0x7516df:goto L7516df;
case 0x7516e1:goto L7516e1;
case 0x7516e5:c.instructions+=2;goto B7516e5;
case 0x7516e7:c.instructions+=1;goto B7516e7;
case 0x7516e9:goto L7516e9;
case 0x7516eb:c.instructions+=1;goto B7516eb;
case 0x7516ed:goto L7516ed;
case 0x7516f1:c.instructions+=3;goto B7516f1;
case 0x7516f2:c.instructions+=2;goto B7516f2;
case 0x7516f3:c.instructions+=1;goto B7516f3;
case 0x751700:goto L751700;
case 0x751704:c.instructions+=9;goto B751704;
case 0x751708:c.instructions+=8;goto B751708;
case 0x75170c:c.instructions+=7;goto B75170c;
case 0x75170d:c.instructions+=6;goto B75170d;
case 0x751711:c.instructions+=5;goto B751711;
case 0x751712:c.instructions+=4;goto B751712;
case 0x751713:c.instructions+=3;goto B751713;
case 0x751714:c.instructions+=2;goto B751714;
case 0x751715:c.instructions+=1;goto B751715;
case 0x75171a:goto L75171a;
case 0x75171c:c.instructions+=3;goto B75171c;
case 0x75171f:c.instructions+=2;goto B75171f;
case 0x751721:c.instructions+=1;goto B751721;
case 0x751723:goto L751723;
case 0x751729:c.instructions+=5;goto B751729;
case 0x75172f:c.instructions+=4;goto B75172f;
case 0x751731:c.instructions+=3;goto B751731;
case 0x751732:c.instructions+=2;goto B751732;
case 0x751738:c.instructions+=1;goto B751738;
case 0x75173e:goto L75173e;
case 0x751740:c.instructions+=2;goto B751740;
case 0x751741:c.instructions+=1;goto B751741;
case 0x751750:goto L751750;
case 0x751753:c.instructions+=7;goto B751753;
case 0x751758:c.instructions+=6;goto B751758;
case 0x751759:c.instructions+=5;goto B751759;
case 0x75175d:c.instructions+=4;goto B75175d;
case 0x751761:c.instructions+=3;goto B751761;
case 0x751768:c.instructions+=2;goto B751768;
case 0x751769:c.instructions+=1;goto B751769;
case 0x75176f:goto L75176f;
case 0x751772:c.instructions+=3;goto B751772;
case 0x751774:c.instructions+=2;goto B751774;
case 0x751776:c.instructions+=1;goto B751776;
case 0x75177c:goto L75177c;
case 0x751780:c.instructions+=9;goto B751780;
case 0x751781:c.instructions+=8;goto B751781;
case 0x751785:c.instructions+=7;goto B751785;
case 0x751786:c.instructions+=6;goto B751786;
case 0x75178d:c.instructions+=5;goto B75178d;
case 0x751792:c.instructions+=4;goto B751792;
case 0x751796:c.instructions+=3;goto B751796;
case 0x75179a:c.instructions+=2;goto B75179a;
case 0x75179e:c.instructions+=1;goto B75179e;
case 0x7517a3:goto L7517a3;
case 0x7517a6:c.instructions+=2;goto B7517a6;
case 0x7517a8:c.instructions+=1;goto B7517a8;
case 0x7517aa:goto L7517aa;
case 0x7517ab:c.instructions+=4;goto B7517ab;
case 0x7517b0:c.instructions+=3;goto B7517b0;
case 0x7517b1:c.instructions+=2;goto B7517b1;
case 0x7517b5:c.instructions+=1;goto B7517b5;
case 0x7517ba:goto L7517ba;
case 0x7517bd:c.instructions+=1;goto B7517bd;
case 0x7517be:goto L7517be;
case 0x7517c3:goto L7517c3;
case 0x7517c4:c.instructions+=3;goto B7517c4;
case 0x7517c6:c.instructions+=2;goto B7517c6;
case 0x7517c8:c.instructions+=1;goto B7517c8;
case 0x7517cd:goto L7517cd;
case 0x7517d0:c.instructions+=3;goto B7517d0;
case 0x7517d2:c.instructions+=2;goto B7517d2;
case 0x7517d5:c.instructions+=1;goto B7517d5;
case 0x7517d7:goto L7517d7;
case 0x7517d8:c.instructions+=4;goto B7517d8;
case 0x7517dd:c.instructions+=3;goto B7517dd;
case 0x7517de:c.instructions+=2;goto B7517de;
case 0x7517e2:c.instructions+=1;goto B7517e2;
case 0x7517e7:goto L7517e7;
case 0x7517ea:c.instructions+=1;goto B7517ea;
case 0x7517eb:goto L7517eb;
case 0x7517ed:c.instructions+=4;goto B7517ed;
case 0x7517f1:c.instructions+=3;goto B7517f1;
case 0x7517f2:c.instructions+=2;goto B7517f2;
case 0x7517f3:c.instructions+=1;goto B7517f3;
case 0x7517f8:goto L7517f8;
case 0x7517fb:c.instructions+=2;goto B7517fb;
case 0x7517fd:c.instructions+=1;goto B7517fd;
case 0x7517ff:goto L7517ff;
case 0x751802:c.instructions+=2;goto B751802;
case 0x751803:c.instructions+=1;goto B751803;
case 0x751808:goto L751808;
case 0x75180b:c.instructions+=6;goto B75180b;
case 0x75180e:c.instructions+=5;goto B75180e;
case 0x75180f:c.instructions+=4;goto B75180f;
case 0x751814:c.instructions+=3;goto B751814;
case 0x751815:c.instructions+=2;goto B751815;
case 0x751819:c.instructions+=1;goto B751819;
case 0x75181e:goto L75181e;
case 0x751821:c.instructions+=1;goto B751821;
case 0x751822:goto L751822;
case 0x751825:c.instructions+=3;goto B751825;
case 0x751827:c.instructions+=2;goto B751827;
case 0x751828:c.instructions+=1;goto B751828;
case 0x75182d:goto L75182d;
case 0x751830:c.instructions+=6;goto B751830;
case 0x751835:c.instructions+=5;goto B751835;
case 0x751836:c.instructions+=4;goto B751836;
case 0x751838:c.instructions+=3;goto B751838;
case 0x75183a:c.instructions+=2;goto B75183a;
case 0x75183b:c.instructions+=1;goto B75183b;
case 0x751840:goto L751840;
case 0x751843:c.instructions+=6;goto B751843;
case 0x751844:c.instructions+=5;goto B751844;
case 0x75184e:c.instructions+=4;goto B75184e;
case 0x751850:c.instructions+=3;goto B751850;
case 0x751851:c.instructions+=2;goto B751851;
case 0x751855:c.instructions+=1;goto B751855;
case 0x75185a:goto L75185a;
case 0x75185d:c.instructions+=1;goto B75185d;
case 0x75185e:goto L75185e;
case 0x751862:c.instructions+=4;goto B751862;
case 0x751863:c.instructions+=3;goto B751863;
case 0x751868:c.instructions+=2;goto B751868;
case 0x751869:c.instructions+=1;goto B751869;
case 0x75186e:goto L75186e;
case 0x751871:c.instructions+=1;goto B751871;
case 0x751880:goto L751880;
case 0x751881:c.instructions+=4;goto B751881;
case 0x751882:c.instructions+=3;goto B751882;
case 0x751886:c.instructions+=2;goto B751886;
case 0x75188d:c.instructions+=1;goto B75188d;
case 0x751893:goto L751893;
case 0x751896:c.instructions+=3;goto B751896;
case 0x751898:c.instructions+=2;goto B751898;
case 0x75189a:c.instructions+=1;goto B75189a;
case 0x7518a0:goto L7518a0;
case 0x7518a4:c.instructions+=10;goto B7518a4;
case 0x7518a5:c.instructions+=9;goto B7518a5;
case 0x7518a8:c.instructions+=8;goto B7518a8;
case 0x7518a9:c.instructions+=7;goto B7518a9;
case 0x7518aa:c.instructions+=6;goto B7518aa;
case 0x7518af:c.instructions+=5;goto B7518af;
case 0x7518b3:c.instructions+=4;goto B7518b3;
case 0x7518b9:c.instructions+=3;goto B7518b9;
case 0x7518bf:c.instructions+=2;goto B7518bf;
case 0x7518c5:c.instructions+=1;goto B7518c5;
case 0x7518ca:goto L7518ca;
case 0x7518cd:c.instructions+=2;goto B7518cd;
case 0x7518d0:c.instructions+=1;goto B7518d0;
case 0x7518d2:goto L7518d2;
case 0x7518d3:c.instructions+=4;goto B7518d3;
case 0x7518d4:c.instructions+=3;goto B7518d4;
case 0x7518d9:c.instructions+=2;goto B7518d9;
case 0x7518da:c.instructions+=1;goto B7518da;
case 0x7518db:goto L7518db;
case 0x7518e0:goto L7518e0;
case 0x7518e1:c.instructions+=3;goto B7518e1;
case 0x7518e3:c.instructions+=2;goto B7518e3;
case 0x7518e5:c.instructions+=1;goto B7518e5;
case 0x7518ea:goto L7518ea;
case 0x7518ed:c.instructions+=3;goto B7518ed;
case 0x7518ef:c.instructions+=2;goto B7518ef;
case 0x7518f2:c.instructions+=1;goto B7518f2;
case 0x7518f4:goto L7518f4;
case 0x7518f5:c.instructions+=4;goto B7518f5;
case 0x7518f6:c.instructions+=3;goto B7518f6;
case 0x7518fb:c.instructions+=2;goto B7518fb;
case 0x7518fc:c.instructions+=1;goto B7518fc;
case 0x7518fd:goto L7518fd;
case 0x7518ff:c.instructions+=3;goto B7518ff;
case 0x751900:c.instructions+=2;goto B751900;
case 0x751901:c.instructions+=1;goto B751901;
case 0x751906:goto L751906;
case 0x751909:c.instructions+=6;goto B751909;
case 0x75190e:c.instructions+=5;goto B75190e;
case 0x75190f:c.instructions+=4;goto B75190f;
case 0x751911:c.instructions+=3;goto B751911;
case 0x751913:c.instructions+=2;goto B751913;
case 0x751914:c.instructions+=1;goto B751914;
case 0x751919:goto L751919;
case 0x75191c:c.instructions+=6;goto B75191c;
case 0x75191d:c.instructions+=5;goto B75191d;
case 0x751927:c.instructions+=4;goto B751927;
case 0x751928:c.instructions+=3;goto B751928;
case 0x75192a:c.instructions+=2;goto B75192a;
case 0x75192b:c.instructions+=1;goto B75192b;
case 0x75192c:goto L75192c;
case 0x75192d:c.instructions+=3;goto B75192d;
case 0x751932:c.instructions+=2;goto B751932;
case 0x751933:c.instructions+=1;goto B751933;
case 0x751940:goto L751940;
case 0x751941:c.instructions+=2;goto B751941;
case 0x751946:c.instructions+=1;goto B751946;
case 0x75194b:goto L75194b;
case 0x75194d:c.instructions+=4;goto B75194d;
case 0x751950:c.instructions+=3;goto B751950;
case 0x751952:c.instructions+=2;goto B751952;
case 0x751954:c.instructions+=1;goto B751954;
case 0x75195a:goto L75195a;
case 0x75195b:c.instructions+=2;goto B75195b;
case 0x751960:c.instructions+=1;goto B751960;
case 0x751962:goto L751962;
case 0x751964:goto L751964;
case 0x75196a:c.instructions+=17;goto B75196a;
case 0x75196b:c.instructions+=16;goto B75196b;
case 0x751971:c.instructions+=15;goto B751971;
case 0x751978:c.instructions+=14;goto B751978;
case 0x75197f:c.instructions+=13;goto B75197f;
case 0x751986:c.instructions+=12;goto B751986;
case 0x75198d:c.instructions+=11;goto B75198d;
case 0x751994:c.instructions+=10;goto B751994;
case 0x75199b:c.instructions+=9;goto B75199b;
case 0x7519a2:c.instructions+=8;goto B7519a2;
case 0x7519a9:c.instructions+=7;goto B7519a9;
case 0x7519b0:c.instructions+=6;goto B7519b0;
case 0x7519b7:c.instructions+=5;goto B7519b7;
case 0x7519be:c.instructions+=4;goto B7519be;
case 0x7519c5:c.instructions+=3;goto B7519c5;
case 0x7519cc:c.instructions+=2;goto B7519cc;
case 0x7519d3:c.instructions+=1;goto B7519d3;
case 0x7519d8:goto L7519d8;
case 0x7519dc:c.instructions+=8;goto B7519dc;
case 0x7519df:c.instructions+=7;goto B7519df;
case 0x7519e5:c.instructions+=6;goto B7519e5;
case 0x7519e7:c.instructions+=5;goto B7519e7;
case 0x7519ec:c.instructions+=4;goto B7519ec;
case 0x7519ed:c.instructions+=3;goto B7519ed;
case 0x7519f3:c.instructions+=2;goto B7519f3;
case 0x7519f9:c.instructions+=1;goto B7519f9;
case 0x7519fe:goto L7519fe;
case 0x751a04:c.instructions+=5;goto B751a04;
case 0x751a09:c.instructions+=4;goto B751a09;
case 0x751a0a:c.instructions+=3;goto B751a0a;
case 0x751a10:c.instructions+=2;goto B751a10;
case 0x751a16:c.instructions+=1;goto B751a16;
case 0x751a1b:goto L751a1b;
case 0x751a1e:c.instructions+=6;goto B751a1e;
case 0x751a24:c.instructions+=5;goto B751a24;
case 0x751a2b:c.instructions+=4;goto B751a2b;
case 0x751a35:c.instructions+=3;goto B751a35;
case 0x751a3f:c.instructions+=2;goto B751a3f;
case 0x751a41:c.instructions+=1;goto B751a41;
case 0x751a42:goto L751a42;
case 0x751a43:c.instructions+=1;goto B751a43;
case 0x751a50:goto L751a50;
case 0x751a53:c.instructions+=24;goto B751a53;
case 0x751a58:c.instructions+=23;goto B751a58;
case 0x751a5a:c.instructions+=22;goto B751a5a;
case 0x751a5e:c.instructions+=21;goto B751a5e;
case 0x751a62:c.instructions+=20;goto B751a62;
case 0x751a65:c.instructions+=19;goto B751a65;
case 0x751a69:c.instructions+=18;goto B751a69;
case 0x751a6b:c.instructions+=17;goto B751a6b;
case 0x751a6e:c.instructions+=16;goto B751a6e;
case 0x751a71:c.instructions+=15;goto B751a71;
case 0x751a73:c.instructions+=14;goto B751a73;
case 0x751a77:c.instructions+=13;goto B751a77;
case 0x751a7a:c.instructions+=12;goto B751a7a;
case 0x751a7c:c.instructions+=11;goto B751a7c;
case 0x751a7f:c.instructions+=10;goto B751a7f;
case 0x751a81:c.instructions+=9;goto B751a81;
case 0x751a84:c.instructions+=8;goto B751a84;
case 0x751a88:c.instructions+=7;goto B751a88;
case 0x751a89:c.instructions+=6;goto B751a89;
case 0x751a8e:c.instructions+=5;goto B751a8e;
case 0x751a91:c.instructions+=4;goto B751a91;
case 0x751a94:c.instructions+=3;goto B751a94;
case 0x751a95:c.instructions+=2;goto B751a95;
case 0x751a99:c.instructions+=1;goto B751a99;
case 0x751a9e:goto L751a9e;
case 0x751aa3:goto L751aa3;
case 0x751aa9:c.instructions+=7;goto B751aa9;
case 0x751aab:c.instructions+=6;goto B751aab;
case 0x751aaf:c.instructions+=5;goto B751aaf;
case 0x751ab2:c.instructions+=4;goto B751ab2;
case 0x751ab4:c.instructions+=3;goto B751ab4;
case 0x751ab8:c.instructions+=2;goto B751ab8;
case 0x751abc:c.instructions+=1;goto B751abc;
case 0x751ac1:goto L751ac1;
case 0x751ac4:c.instructions+=1;goto B751ac4;
case 0x751ad0:goto L751ad0;
case 0x751ad2:c.instructions+=5;goto B751ad2;
case 0x751ad8:c.instructions+=4;goto B751ad8;
case 0x751ade:c.instructions+=3;goto B751ade;
case 0x751ae4:c.instructions+=2;goto B751ae4;
case 0x751aea:c.instructions+=1;goto B751aea;
case 0x751aef:goto L751aef;
case 0x751af4:c.instructions+=3;goto B751af4;
case 0x751afa:c.instructions+=2;goto B751afa;
case 0x751b04:c.instructions+=1;goto B751b04;
case 0x751b10:goto L751b10;
case 0x751b13:c.instructions+=12;goto B751b13;
case 0x751b14:c.instructions+=11;goto B751b14;
case 0x751b17:c.instructions+=10;goto B751b17;
case 0x751b19:c.instructions+=9;goto B751b19;
case 0x751b1c:c.instructions+=8;goto B751b1c;
case 0x751b1d:c.instructions+=7;goto B751b1d;
case 0x751b1f:c.instructions+=6;goto B751b1f;
case 0x751b20:c.instructions+=5;goto B751b20;
case 0x751b21:c.instructions+=4;goto B751b21;
case 0x751b24:c.instructions+=3;goto B751b24;
case 0x751b25:c.instructions+=2;goto B751b25;
case 0x751b26:c.instructions+=1;goto B751b26;
case 0x751b2b:goto L751b2b;
case 0x751b2e:c.instructions+=2;goto B751b2e;
case 0x751b30:c.instructions+=1;goto B751b30;
case 0x751b32:goto L751b32;
case 0x751b35:c.instructions+=2;goto B751b35;
case 0x751b36:c.instructions+=1;goto B751b36;
case 0x751b37:goto L751b37;
case 0x751b3c:goto L751b3c;
case 0x751b3f:c.instructions+=9;goto B751b3f;
case 0x751b45:c.instructions+=8;goto B751b45;
case 0x751b48:c.instructions+=7;goto B751b48;
case 0x751b4a:c.instructions+=6;goto B751b4a;
case 0x751b4b:c.instructions+=5;goto B751b4b;
case 0x751b4e:c.instructions+=4;goto B751b4e;
case 0x751b50:c.instructions+=3;goto B751b50;
case 0x751b53:c.instructions+=2;goto B751b53;
case 0x751b54:c.instructions+=1;goto B751b54;
case 0x751b60:goto L751b60;
case 0x751b63:c.instructions+=15;goto B751b63;
case 0x751b68:c.instructions+=14;goto B751b68;
case 0x751b6a:c.instructions+=13;goto B751b6a;
case 0x751b6d:c.instructions+=12;goto B751b6d;
case 0x751b6e:c.instructions+=11;goto B751b6e;
case 0x751b72:c.instructions+=10;goto B751b72;
case 0x751b76:c.instructions+=9;goto B751b76;
case 0x751b78:c.instructions+=8;goto B751b78;
case 0x751b7a:c.instructions+=7;goto B751b7a;
case 0x751b7e:c.instructions+=6;goto B751b7e;
case 0x751b82:c.instructions+=5;goto B751b82;
case 0x751b85:c.instructions+=4;goto B751b85;
case 0x751b86:c.instructions+=3;goto B751b86;
case 0x751b87:c.instructions+=2;goto B751b87;
case 0x751b8f:c.instructions+=1;goto B751b8f;
case 0x751b94:goto L751b94;
case 0x751b97:c.instructions+=2;goto B751b97;
case 0x751b9a:c.instructions+=1;goto B751b9a;
case 0x751b9c:goto L751b9c;
case 0x751ba1:goto L751ba1;
case 0x751ba4:c.instructions+=6;goto B751ba4;
case 0x751baa:c.instructions+=5;goto B751baa;
case 0x751bad:c.instructions+=4;goto B751bad;
case 0x751bae:c.instructions+=3;goto B751bae;
case 0x751baf:c.instructions+=2;goto B751baf;
case 0x751bb2:c.instructions+=1;goto B751bb2;
case 0x751bb5:goto L751bb5;
case 0x751bb9:c.instructions+=1;goto B751bb9;
case 0x751bbe:goto L751bbe;
case 0x751bc1:c.instructions+=1;goto B751bc1;
case 0x751bd0:goto L751bd0;
case 0x751bd1:c.instructions+=11;goto B751bd1;
case 0x751bd3:c.instructions+=10;goto B751bd3;
case 0x751bda:c.instructions+=9;goto B751bda;
case 0x751be1:c.instructions+=8;goto B751be1;
case 0x751be3:c.instructions+=7;goto B751be3;
case 0x751be9:c.instructions+=6;goto B751be9;
case 0x751bef:c.instructions+=5;goto B751bef;
case 0x751bf2:c.instructions+=4;goto B751bf2;
case 0x751bf4:c.instructions+=3;goto B751bf4;
case 0x751bf7:c.instructions+=2;goto B751bf7;
case 0x751bf9:c.instructions+=1;goto B751bf9;
case 0x751bfb:goto L751bfb;
case 0x751bfd:c.instructions+=4;goto B751bfd;
case 0x751c00:c.instructions+=3;goto B751c00;
case 0x751c03:c.instructions+=2;goto B751c03;
case 0x751c05:c.instructions+=1;goto B751c05;
case 0x751c07:goto L751c07;
case 0x751c0c:goto L751c0c;
case 0x751c12:c.instructions+=2;goto B751c12;
case 0x751c17:c.instructions+=1;goto B751c17;
case 0x751c19:goto L751c19;
case 0x751c1f:c.instructions+=2;goto B751c1f;
case 0x751c22:c.instructions+=1;goto B751c22;
case 0x751c24:goto L751c24;
case 0x751c26:c.instructions+=1;goto B751c26;
case 0x751c2b:goto L751c2b;
case 0x751c2e:c.instructions+=2;goto B751c2e;
case 0x751c2f:c.instructions+=1;goto B751c2f;
case 0x751c30:goto L751c30;
case 0x751c33:c.instructions+=1;goto B751c33;
case 0x751c35:goto L751c35;
case 0x751c37:c.instructions+=1;goto B751c37;
case 0x751c3c:goto L751c3c;
case 0x751c3f:goto L751c3f;
case 0x751c40:c.instructions+=1;goto B751c40;
case 0x751c50:goto L751c50;
case 0x751c51:c.instructions+=2;goto B751c51;
case 0x751c53:c.instructions+=1;goto B751c53;
case 0x751c58:goto L751c58;
case 0x751c5d:c.instructions+=6;goto B751c5d;
case 0x751c63:c.instructions+=5;goto B751c63;
case 0x751c67:c.instructions+=4;goto B751c67;
case 0x751c6b:c.instructions+=3;goto B751c6b;
case 0x751c6e:c.instructions+=2;goto B751c6e;
case 0x751c71:c.instructions+=1;goto B751c71;
case 0x751c77:goto L751c77;
case 0x751c7e:goto L751c7e;
case 0x751c85:c.instructions+=1;goto B751c85;
case 0x751c87:goto L751c87;
case 0x751c89:c.instructions+=11;goto B751c89;
case 0x751c8b:c.instructions+=10;goto B751c8b;
case 0x751c8e:c.instructions+=9;goto B751c8e;
case 0x751c90:c.instructions+=8;goto B751c90;
case 0x751c93:c.instructions+=7;goto B751c93;
case 0x751c96:c.instructions+=6;goto B751c96;
case 0x751c99:c.instructions+=5;goto B751c99;
case 0x751c9c:c.instructions+=4;goto B751c9c;
case 0x751c9f:c.instructions+=3;goto B751c9f;
case 0x751ca0:c.instructions+=2;goto B751ca0;
case 0x751ca3:c.instructions+=1;goto B751ca3;
case 0x751ca8:goto L751ca8;
case 0x751cab:c.instructions+=1;goto B751cab;
case 0x751cb5:goto L751cb5;
case 0x751cb7:c.instructions+=1;goto B751cb7;
case 0x751cbc:goto L751cbc;
case 0x751cbf:c.instructions+=2;goto B751cbf;
case 0x751cc0:c.instructions+=1;goto B751cc0;
case 0x751cc1:goto L751cc1;
case 0x751cc8:c.instructions+=1;goto B751cc8;
case 0x751cca:goto L751cca;
case 0x751ccc:c.instructions+=10;goto B751ccc;
case 0x751ccf:c.instructions+=9;goto B751ccf;
case 0x751cd1:c.instructions+=8;goto B751cd1;
case 0x751cd4:c.instructions+=7;goto B751cd4;
case 0x751cd7:c.instructions+=6;goto B751cd7;
case 0x751cda:c.instructions+=5;goto B751cda;
case 0x751cdd:c.instructions+=4;goto B751cdd;
case 0x751ce0:c.instructions+=3;goto B751ce0;
case 0x751ce3:c.instructions+=2;goto B751ce3;
case 0x751ce4:c.instructions+=1;goto B751ce4;
case 0x751ce5:goto L751ce5;
case 0x751cec:c.instructions+=1;goto B751cec;
case 0x751cee:goto L751cee;
case 0x751cef:c.instructions+=1;goto B751cef;
case 0x751cf4:goto L751cf4;
case 0x751cf7:c.instructions+=3;goto B751cf7;
case 0x751d01:c.instructions+=2;goto B751d01;
case 0x751d02:c.instructions+=1;goto B751d02;
case 0x751d03:goto L751d03;
case 0x751d0a:c.instructions+=1;goto B751d0a;
case 0x751d0c:goto L751d0c;
case 0x751d16:goto L751d16;
case 0x751d17:c.instructions+=1;goto B751d17;
case 0x751d30:goto L751d30;
case 0x751d34:c.instructions+=6;goto B751d34;
case 0x751d37:c.instructions+=5;goto B751d37;
case 0x751d3a:c.instructions+=4;goto B751d3a;
case 0x751d3b:c.instructions+=3;goto B751d3b;
case 0x751d3c:c.instructions+=2;goto B751d3c;
case 0x751d3d:c.instructions+=1;goto B751d3d;
case 0x751d3f:goto L751d3f;
case 0x751d42:c.instructions+=1;goto B751d42;
case 0x751d44:goto L751d44;
case 0x751d4a:c.instructions+=14;goto B751d4a;
case 0x751d50:c.instructions+=13;goto B751d50;
case 0x751d56:c.instructions+=12;goto B751d56;
case 0x751d58:c.instructions+=11;goto B751d58;
case 0x751d5a:c.instructions+=10;goto B751d5a;
case 0x751d5c:c.instructions+=9;goto B751d5c;
case 0x751d5d:c.instructions+=8;goto B751d5d;
case 0x751d5f:c.instructions+=7;goto B751d5f;
case 0x751d65:c.instructions+=6;goto B751d65;
case 0x751d67:c.instructions+=5;goto B751d67;
case 0x751d69:c.instructions+=4;goto B751d69;
case 0x751d6a:c.instructions+=3;goto B751d6a;
case 0x751d6c:c.instructions+=2;goto B751d6c;
case 0x751d72:c.instructions+=1;goto B751d72;
case 0x751d74:goto L751d74;
case 0x751d75:c.instructions+=4;goto B751d75;
case 0x751d76:c.instructions+=3;goto B751d76;
case 0x751d79:c.instructions+=2;goto B751d79;
case 0x751d7a:c.instructions+=1;goto B751d7a;
case 0x751d7b:goto L751d7b;
case 0x751d7e:c.instructions+=3;goto B751d7e;
case 0x751d81:c.instructions+=2;goto B751d81;
case 0x751d87:c.instructions+=1;goto B751d87;
case 0x751d89:goto L751d89;
case 0x751d8f:c.instructions+=6;goto B751d8f;
case 0x751d95:c.instructions+=5;goto B751d95;
case 0x751d98:c.instructions+=4;goto B751d98;
case 0x751d99:c.instructions+=3;goto B751d99;
case 0x751d9f:c.instructions+=2;goto B751d9f;
case 0x751da5:c.instructions+=1;goto B751da5;
case 0x751da7:goto L751da7;
case 0x751daa:c.instructions+=6;goto B751daa;
case 0x751db0:c.instructions+=5;goto B751db0;
case 0x751db3:c.instructions+=4;goto B751db3;
case 0x751db8:c.instructions+=3;goto B751db8;
case 0x751dbb:c.instructions+=2;goto B751dbb;
case 0x751dbd:c.instructions+=1;goto B751dbd;
case 0x751dc3:goto L751dc3;
case 0x751dc9:goto L751dc9;
case 0x751dcf:c.instructions+=6;goto B751dcf;
case 0x751dd1:c.instructions+=5;goto B751dd1;
case 0x751dd5:c.instructions+=4;goto B751dd5;
case 0x751dd7:c.instructions+=3;goto B751dd7;
case 0x751dd9:c.instructions+=2;goto B751dd9;
case 0x751ddc:c.instructions+=1;goto B751ddc;
case 0x751dde:goto L751dde;
case 0x751de0:goto L751de0;
case 0x751de2:c.instructions+=1;goto B751de2;
case 0x751de5:goto L751de5;
case 0x751de7:goto L751de7;
case 0x751ded:c.instructions+=14;goto B751ded;
case 0x751df3:c.instructions+=13;goto B751df3;
case 0x751df5:c.instructions+=12;goto B751df5;
case 0x751df6:c.instructions+=11;goto B751df6;
case 0x751dfc:c.instructions+=10;goto B751dfc;
case 0x751e02:c.instructions+=9;goto B751e02;
case 0x751e05:c.instructions+=8;goto B751e05;
case 0x751e06:c.instructions+=7;goto B751e06;
case 0x751e0c:c.instructions+=6;goto B751e0c;
case 0x751e12:c.instructions+=5;goto B751e12;
case 0x751e18:c.instructions+=4;goto B751e18;
case 0x751e1b:c.instructions+=3;goto B751e1b;
case 0x751e1d:c.instructions+=2;goto B751e1d;
case 0x751e23:c.instructions+=1;goto B751e23;
case 0x751e25:goto L751e25;
case 0x751e28:c.instructions+=7;goto B751e28;
case 0x751e2b:c.instructions+=6;goto B751e2b;
case 0x751e2c:c.instructions+=5;goto B751e2c;
case 0x751e2d:c.instructions+=4;goto B751e2d;
case 0x751e30:c.instructions+=3;goto B751e30;
case 0x751e31:c.instructions+=2;goto B751e31;
case 0x751e32:c.instructions+=1;goto B751e32;
case 0x751e34:goto L751e34;
case 0x751e37:goto L751e37;
case 0x751e3d:c.instructions+=7;goto B751e3d;
case 0x751e3e:c.instructions+=6;goto B751e3e;
case 0x751e3f:c.instructions+=5;goto B751e3f;
case 0x751e40:c.instructions+=4;goto B751e40;
case 0x751e46:c.instructions+=3;goto B751e46;
case 0x751e4b:c.instructions+=2;goto B751e4b;
case 0x751e4c:c.instructions+=1;goto B751e4c;
case 0x751e4d:goto L751e4d;
case 0x751e4f:c.instructions+=7;goto B751e4f;
case 0x751e51:c.instructions+=6;goto B751e51;
case 0x751e54:c.instructions+=5;goto B751e54;
case 0x751e55:c.instructions+=4;goto B751e55;
case 0x751e56:c.instructions+=3;goto B751e56;
case 0x751e57:c.instructions+=2;goto B751e57;
case 0x751e59:c.instructions+=1;goto B751e59;
case 0x751e60:goto L751e60;
case 0x751e63:c.instructions+=9;goto B751e63;
case 0x751e68:c.instructions+=8;goto B751e68;
case 0x751e69:c.instructions+=7;goto B751e69;
case 0x751e6a:c.instructions+=6;goto B751e6a;
case 0x751e6c:c.instructions+=5;goto B751e6c;
case 0x751e70:c.instructions+=4;goto B751e70;
case 0x751e76:c.instructions+=3;goto B751e76;
case 0x751e78:c.instructions+=2;goto B751e78;
case 0x751e7b:c.instructions+=1;goto B751e7b;
case 0x751e81:goto L751e81;
case 0x751e82:c.instructions+=1;goto B751e82;
case 0x751e83:goto L751e83;
case 0x751e8a:c.instructions+=1;goto B751e8a;
case 0x751e90:goto L751e90;
case 0x751e92:c.instructions+=1;goto B751e92;
case 0x751e98:goto L751e98;
case 0x751e9e:c.instructions+=15;goto B751e9e;
case 0x751ea4:c.instructions+=14;goto B751ea4;
case 0x751ea8:c.instructions+=13;goto B751ea8;
case 0x751ea9:c.instructions+=12;goto B751ea9;
case 0x751eac:c.instructions+=11;goto B751eac;
case 0x751eb0:c.instructions+=10;goto B751eb0;
case 0x751eb1:c.instructions+=9;goto B751eb1;
case 0x751eb3:c.instructions+=8;goto B751eb3;
case 0x751eb9:c.instructions+=7;goto B751eb9;
case 0x751ebb:c.instructions+=6;goto B751ebb;
case 0x751ebc:c.instructions+=5;goto B751ebc;
case 0x751ebf:c.instructions+=4;goto B751ebf;
case 0x751ec0:c.instructions+=3;goto B751ec0;
case 0x751ec1:c.instructions+=2;goto B751ec1;
case 0x751ec9:c.instructions+=1;goto B751ec9;
case 0x751ece:goto L751ece;
case 0x751ed1:c.instructions+=2;goto B751ed1;
case 0x751ed3:c.instructions+=1;goto B751ed3;
case 0x751ed9:goto L751ed9;
case 0x751edc:c.instructions+=14;goto B751edc;
case 0x751ee1:c.instructions+=13;goto B751ee1;
case 0x751ee6:c.instructions+=12;goto B751ee6;
case 0x751eeb:c.instructions+=11;goto B751eeb;
case 0x751eee:c.instructions+=10;goto B751eee;
case 0x751ef0:c.instructions+=9;goto B751ef0;
case 0x751ef5:c.instructions+=8;goto B751ef5;
case 0x751ef8:c.instructions+=7;goto B751ef8;
case 0x751efa:c.instructions+=6;goto B751efa;
case 0x751efd:c.instructions+=5;goto B751efd;
case 0x751f00:c.instructions+=4;goto B751f00;
case 0x751f02:c.instructions+=3;goto B751f02;
case 0x751f04:c.instructions+=2;goto B751f04;
case 0x751f06:c.instructions+=1;goto B751f06;
case 0x751f08:goto L751f08;
case 0x751f0a:c.instructions+=1;goto B751f0a;
case 0x751f0c:goto L751f0c;
case 0x751f0d:c.instructions+=3;goto B751f0d;
case 0x751f11:c.instructions+=2;goto B751f11;
case 0x751f13:c.instructions+=1;goto B751f13;
case 0x751f18:goto L751f18;
case 0x751f1a:goto L751f1a;
case 0x751f1c:c.instructions+=1;goto B751f1c;
case 0x751f1e:goto L751f1e;
case 0x751f24:c.instructions+=7;goto B751f24;
case 0x751f2a:c.instructions+=6;goto B751f2a;
case 0x751f2f:c.instructions+=5;goto B751f2f;
case 0x751f32:c.instructions+=4;goto B751f32;
case 0x751f38:c.instructions+=3;goto B751f38;
case 0x751f3d:c.instructions+=2;goto B751f3d;
case 0x751f3f:c.instructions+=1;goto B751f3f;
case 0x751f41:goto L751f41;
case 0x751f47:c.instructions+=5;goto B751f47;
case 0x751f49:c.instructions+=4;goto B751f49;
case 0x751f4a:c.instructions+=3;goto B751f4a;
case 0x751f50:c.instructions+=2;goto B751f50;
case 0x751f56:c.instructions+=1;goto B751f56;
case 0x751f58:goto L751f58;
case 0x751f59:c.instructions+=2;goto B751f59;
case 0x751f5b:c.instructions+=1;goto B751f5b;
case 0x751f60:goto L751f60;
case 0x751f62:c.instructions+=3;goto B751f62;
case 0x751f65:c.instructions+=2;goto B751f65;
case 0x751f68:c.instructions+=1;goto B751f68;
case 0x751f6a:goto L751f6a;
case 0x751f6c:c.instructions+=3;goto B751f6c;
case 0x751f6f:c.instructions+=2;goto B751f6f;
case 0x751f71:c.instructions+=1;goto B751f71;
case 0x751f73:goto L751f73;
case 0x751f75:c.instructions+=1;goto B751f75;
case 0x751f77:goto L751f77;
case 0x751f79:c.instructions+=2;goto B751f79;
case 0x751f7a:c.instructions+=1;goto B751f7a;
case 0x751f7f:goto L751f7f;
case 0x751f82:goto L751f82;
case 0x751f89:c.instructions+=1;goto B751f89;
case 0x751f8f:goto L751f8f;
case 0x751f90:c.instructions+=5;goto B751f90;
case 0x751f91:c.instructions+=4;goto B751f91;
case 0x751f92:c.instructions+=3;goto B751f92;
case 0x751f93:c.instructions+=2;goto B751f93;
case 0x751f97:c.instructions+=1;goto B751f97;
case 0x751f9c:goto L751f9c;
case 0x751f9f:c.instructions+=1;goto B751f9f;
case 0x751fa0:goto L751fa0;
case 0x751fa2:goto L751fa2;
case 0x751fac:goto L751fac;
case 0x751fad:c.instructions+=1;goto B751fad;
case 0x751fae:goto L751fae;
case 0x751fb2:c.instructions+=3;goto B751fb2;
case 0x751fb3:c.instructions+=2;goto B751fb3;
case 0x751fb4:c.instructions+=1;goto B751fb4;
case 0x751fb9:goto L751fb9;
case 0x751fbc:c.instructions+=1;goto B751fbc;
case 0x751fc0:goto L751fc0;
case 0x751fc1:c.instructions+=4;goto B751fc1;
case 0x751fc3:c.instructions+=3;goto B751fc3;
case 0x751fc9:c.instructions+=2;goto B751fc9;
case 0x751fcc:c.instructions+=1;goto B751fcc;
case 0x751fce:goto L751fce;
case 0x751fd1:c.instructions+=1;goto B751fd1;
case 0x751fd3:goto L751fd3;
case 0x751fd5:c.instructions+=1;goto B751fd5;
case 0x751fda:goto L751fda;
case 0x751fdb:c.instructions+=2;goto B751fdb;
case 0x751fdd:c.instructions+=1;goto B751fdd;
case 0x751fe2:goto L751fe2;
case 0x751fe8:c.instructions+=3;goto B751fe8;
case 0x751fed:c.instructions+=2;goto B751fed;
case 0x751fef:c.instructions+=1;goto B751fef;
case 0x751ff1:goto L751ff1;
case 0x751ff7:c.instructions+=2;goto B751ff7;
case 0x751ffd:c.instructions+=1;goto B751ffd;
case 0x751fff:goto L751fff;
default:missing_instruction(c.pc);}
B751002:L751002:{c.instructions+=14;NFSU2_TR(0x751002);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+0))));
}
B751004:{NFSU2_TR(0x751004);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B751006:{NFSU2_TR(0x751006);
u8 U[5];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+5),(U+4),1);
}
B75100a:{NFSU2_TR(0x75100a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75100d:{NFSU2_TR(0x75100d);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w2(R+8,u16(r1(U+4)));
}
B751013:{NFSU2_TR(0x751013);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751015:{NFSU2_TR(0x751015);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B751019:{NFSU2_TR(0x751019);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75101a:{NFSU2_TR(0x75101a);
u8 U[4];
w4(U+0,u32(0x62696e64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75101f:{NFSU2_TR(0x75101f);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+8))));
}
B751021:{NFSU2_TR(0x751021);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B751025:{NFSU2_TR(0x751025);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B751028:{NFSU2_TR(0x751028);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751029:{NFSU2_TR(0x751029);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75102eull));
TAIL_STATIC(0x74a760u,74a);
}
B75102e:L75102e:{c.instructions+=18;NFSU2_TR(0x75102e);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B751033:{NFSU2_TR(0x751033);
u8 U[5];
w4(U+0,u32(u32(u32(0x25ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B751038:{NFSU2_TR(0x751038);
u8 U[5];
w4(U+0,u32(u32(u32(0x26ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B75103d:{NFSU2_TR(0x75103d);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B751040:{NFSU2_TR(0x751040);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+0))));
}
B751042:{NFSU2_TR(0x751042);
u8 U[5];
w4(U+0,u32(u32(u32(0x27ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B751047:{NFSU2_TR(0x751047);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B75104a:{NFSU2_TR(0x75104a);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
}
B75104c:{NFSU2_TR(0x75104c);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B75104f:{NFSU2_TR(0x75104f);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+0))));
}
B751051:{NFSU2_TR(0x751051);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B751053:{NFSU2_TR(0x751053);
u8 U[5];
w4(U+0,u32(u32(u32(0x22ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+5),(U+4),1);
}
B751057:{NFSU2_TR(0x751057);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75105a:{NFSU2_TR(0x75105a);
u8 U[5];
w4(U+0,u32(u32(u32(0x23ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w2(R+8,u16(r1(U+4)));
}
B751060:{NFSU2_TR(0x751060);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+8))));
}
B751062:{NFSU2_TR(0x751062);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B751066:{NFSU2_TR(0x751066);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75106a:{NFSU2_TR(0x75106a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75106full));
TAIL_STATIC(0x76115eu,761);
}
B75106f:L75106f:{c.instructions+=2;NFSU2_TR(0x75106f);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x34ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x34ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x34ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B751072:{NFSU2_TR(0x751072);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B751080:L751080:{c.instructions+=8;NFSU2_TR(0x751080);
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
B751082:{NFSU2_TR(0x751082);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B751088:{NFSU2_TR(0x751088);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75108e:{NFSU2_TR(0x75108e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B751098:{NFSU2_TR(0x751098);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75109e:{NFSU2_TR(0x75109e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7510a4:{NFSU2_TR(0x7510a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7510aa:{NFSU2_TR(0x7510aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7510afull));
TAIL_STATIC(0x74b730u,74b);
}
B7510af:L7510af:{c.instructions+=3;NFSU2_TR(0x7510af);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0x1388ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1388ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1388ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7510b4:{NFSU2_TR(0x7510b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7510ba:{NFSU2_TR(0x7510ba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7510c0:L7510c0:{c.instructions+=8;NFSU2_TR(0x7510c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B7510c3:{NFSU2_TR(0x7510c3);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B7510c8:{NFSU2_TR(0x7510c8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7510c9:{NFSU2_TR(0x7510c9);
__builtin_memmove((R+24),(R+4),4);
}
B7510cb:{NFSU2_TR(0x7510cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7510cf:{NFSU2_TR(0x7510cf);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7510d6:{NFSU2_TR(0x7510d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7510de:{NFSU2_TR(0x7510de);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L751108;}}
}
B7510e0:L7510e0:{c.instructions+=6;NFSU2_TR(0x7510e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7510e3:{NFSU2_TR(0x7510e3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7510e5:{NFSU2_TR(0x7510e5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7510e7:{NFSU2_TR(0x7510e7);
u8 U[4];
w4(U+0,u32(0x73746174ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7510ec:{NFSU2_TR(0x7510ec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7510ed:{NFSU2_TR(0x7510ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7510f2ull));
TAIL_STATIC(0x74a760u,74a);
}
B7510f2:L7510f2:{c.instructions+=3;NFSU2_TR(0x7510f2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B7510f5:{NFSU2_TR(0x7510f5);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7510f7:{NFSU2_TR(0x7510f7);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L751108;}}
}
B7510f9:L7510f9:{c.instructions+=2;NFSU2_TR(0x7510f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B751103:{NFSU2_TR(0x751103);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x751108ull));
TAIL_STATIC(0x750fc0u,750);
}
B751108:L751108:{c.instructions+=4;NFSU2_TR(0x751108);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B75110f:{NFSU2_TR(0x75110f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751110:{NFSU2_TR(0x751110);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751111:{NFSU2_TR(0x751111);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L751165;}}
}
B751113:L751113:{c.instructions+=8;NFSU2_TR(0x751113);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B751116:{NFSU2_TR(0x751116);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B75111a:{NFSU2_TR(0x75111a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75111b:{NFSU2_TR(0x75111b);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B75111f:{NFSU2_TR(0x75111f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751120:{NFSU2_TR(0x751120);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751121:{NFSU2_TR(0x751121);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x10ull));
s4(u32(r4(U+0)),r4(U+4));
}
B751129:{NFSU2_TR(0x751129);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75112eull));
TAIL_STATIC(0x74a500u,74a);
}
B75112e:L75112e:{c.instructions+=4;NFSU2_TR(0x75112e);
__builtin_memmove((R+28),(R+0),4);
}
B751130:{NFSU2_TR(0x751130);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B751133:{NFSU2_TR(0x751133);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B751135:{NFSU2_TR(0x751135);
if(r1(R+518)){{goto L751165;}}
}
B751137:L751137:{c.instructions+=3;NFSU2_TR(0x751137);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75113a:{NFSU2_TR(0x75113a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75113b:{NFSU2_TR(0x75113b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x751140ull));
TAIL_STATIC(0x74a2d0u,74a);
}
B751140:L751140:{c.instructions+=7;NFSU2_TR(0x751140);
u8 U[4];
w4(U+0,u32(0x751450ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751145:{NFSU2_TR(0x751145);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751146:{NFSU2_TR(0x751146);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751148:{NFSU2_TR(0x751148);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75114a:{NFSU2_TR(0x75114a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75114b:{NFSU2_TR(0x75114b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75114e:{NFSU2_TR(0x75114e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x751153ull));
TAIL_STATIC(0x74a960u,74a);
}
B751153:L751153:{c.instructions+=3;NFSU2_TR(0x751153);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B751156:{NFSU2_TR(0x751156);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B751160:{NFSU2_TR(0x751160);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x751165ull));
TAIL_STATIC(0x750fc0u,750);
}
B751165:L751165:{c.instructions+=2;NFSU2_TR(0x751165);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B75116c:{NFSU2_TR(0x75116c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L751299;}}
}
B751172:L751172:{c.instructions+=7;NFSU2_TR(0x751172);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B751178:{NFSU2_TR(0x751178);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75117e:{NFSU2_TR(0x75117e);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B751180:{NFSU2_TR(0x751180);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B751181:{NFSU2_TR(0x751181);
u8 U[64];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(s64(s32(r4(U+4)))));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x751181);w8(U+48,u64(x_/y_));}
w4(R+0,u32(r8(U+48)));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x751181);w8(U+56,u64(x_%y_));}
w4(R+8,u32(r8(U+56)));
}
B751187:{NFSU2_TR(0x751187);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B75118d:{NFSU2_TR(0x75118d);
if(r1(R+518)){{goto L751299;}}
}
B751193:L751193:{c.instructions+=7;NFSU2_TR(0x751193);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B751199:{NFSU2_TR(0x751199);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+4))));
}
B75119b:{NFSU2_TR(0x75119b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7511a1:{NFSU2_TR(0x7511a1);
w4(R+0,u32(0x2ull));
}
B7511a6:{NFSU2_TR(0x7511a6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B7511a8:{NFSU2_TR(0x7511a8);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B7511ac:{NFSU2_TR(0x7511ac);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L7511b5;}}
}
B7511ae:L7511ae:{c.instructions+=2;NFSU2_TR(0x7511ae);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B7511b2:{NFSU2_TR(0x7511b2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B7511b5:L7511b5:{c.instructions+=9;NFSU2_TR(0x7511b5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7511b7:{NFSU2_TR(0x7511b7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7511b9:{NFSU2_TR(0x7511b9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7511bb:{NFSU2_TR(0x7511bb);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B7511bd:{NFSU2_TR(0x7511bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7511be:{NFSU2_TR(0x7511be);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7511bf:{NFSU2_TR(0x7511bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7511c2:{NFSU2_TR(0x7511c2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7511c3:{NFSU2_TR(0x7511c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7511c8ull));
TAIL_STATIC(0x74a6d0u,74a);
}
B7511c8:L7511c8:{c.instructions+=4;NFSU2_TR(0x7511c8);
__builtin_memmove((R+12),(R+0),4);
}
B7511ca:{NFSU2_TR(0x7511ca);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B7511cd:{NFSU2_TR(0x7511cd);
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
B7511cf:{NFSU2_TR(0x7511cf);
if(r1(R+518)){{goto L751299;}}
}
B7511d5:L7511d5:{c.instructions+=1;NFSU2_TR(0x7511d5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L75128f;}}
}
B7511db:L7511db:{c.instructions+=1;NFSU2_TR(0x7511db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7511e0ull));
TAIL_STATIC(0x74b730u,74b);
}
B7511e0:L7511e0:{c.instructions+=4;NFSU2_TR(0x7511e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7511e6:{NFSU2_TR(0x7511e6);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7511e8:{NFSU2_TR(0x7511e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7511ee:{NFSU2_TR(0x7511ee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7511f2;}}
}
B7511f0:L7511f0:{c.instructions+=1;NFSU2_TR(0x7511f0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B7511f2:L7511f2:{c.instructions+=9;NFSU2_TR(0x7511f2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7511f6:{NFSU2_TR(0x7511f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7511fc:{NFSU2_TR(0x7511fc);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B7511fe:{NFSU2_TR(0x7511fe);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+12))));
}
B751200:{NFSU2_TR(0x751200);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B751204:{NFSU2_TR(0x751204);
__builtin_memmove((R+0),(R+8),4);
}
B751206:{NFSU2_TR(0x751206);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B751209:{NFSU2_TR(0x751209);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75120f:{NFSU2_TR(0x75120f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L751280;}}
}
B751211:L751211:{c.instructions+=4;NFSU2_TR(0x751211);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B751215:{NFSU2_TR(0x751215);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B751218:{NFSU2_TR(0x751218);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B75121a:{NFSU2_TR(0x75121a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L751280;}}
}
B75121c:L75121c:{c.instructions+=3;NFSU2_TR(0x75121c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B751226:{NFSU2_TR(0x751226);
u8 U[10];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B75122b:{NFSU2_TR(0x75122b);
if(r1(R+518)){{goto L751280;}}
}
B75122d:L75122d:{c.instructions+=11;NFSU2_TR(0x75122d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x208ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B751233:{NFSU2_TR(0x751233);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B751239:{NFSU2_TR(0x751239);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B75123a:{NFSU2_TR(0x75123a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x208ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B751240:{NFSU2_TR(0x751240);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B751246:{NFSU2_TR(0x751246);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B751247:{NFSU2_TR(0x751247);
u8 U[64];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(s64(s32(r4(U+4)))));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x751247);w8(U+48,u64(x_/y_));}
w4(R+0,u32(r8(U+48)));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x751247);w8(U+56,u64(x_%y_));}
w4(R+8,u32(r8(U+56)));
}
B75124d:{NFSU2_TR(0x75124d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B751250:{NFSU2_TR(0x751250);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B751252:{NFSU2_TR(0x751252);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B751258:{NFSU2_TR(0x751258);
if(r1(R+518)){{goto L75126c;}}
}
B75125a:L75125a:{c.instructions+=8;NFSU2_TR(0x75125a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B75125c:{NFSU2_TR(0x75125c);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B751260:{NFSU2_TR(0x751260);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751261:{NFSU2_TR(0x751261);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751262:{NFSU2_TR(0x751262);
u8 U[6];
w1(R+512,carry<u32>(r4(R+28),u32(0x6ull)));
w1(R+523,scarry<u32>(r4(R+28),u32(0x6ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B751265:{NFSU2_TR(0x751265);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751266:{NFSU2_TR(0x751266);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751267:{NFSU2_TR(0x751267);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x751269ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B751269:L751269:{c.instructions+=1;NFSU2_TR(0x751269);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B75126c:L75126c:{c.instructions+=4;NFSU2_TR(0x75126c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x208ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B751272:{NFSU2_TR(0x751272);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B751273:{NFSU2_TR(0x751273);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x208ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B751279:{NFSU2_TR(0x751279);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B751280:L751280:{c.instructions+=2;NFSU2_TR(0x751280);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B751287:{NFSU2_TR(0x751287);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x751172u);}goto L751172;}}
}
B75128d:L75128d:{c.instructions+=1;NFSU2_TR(0x75128d);
{goto L751299;}
}
B75128f:L75128f:{c.instructions+=1;NFSU2_TR(0x75128f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B751299:L751299:{c.instructions+=4;NFSU2_TR(0x751299);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75129f:{NFSU2_TR(0x75129f);
w4(R+12,u32(0x4ull));
}
B7512a4:{NFSU2_TR(0x7512a4);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7512a6:{NFSU2_TR(0x7512a6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7513ed;}}
}
B7512ac:L7512ac:{c.instructions+=3;NFSU2_TR(0x7512ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7512b2:{NFSU2_TR(0x7512b2);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B7512b4:{NFSU2_TR(0x7512b4);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L75130a;}}
}
B7512b6:L7512b6:{c.instructions+=3;NFSU2_TR(0x7512b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7512bc:{NFSU2_TR(0x7512bc);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
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
B7512c2:{NFSU2_TR(0x7512c2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75130a;}}
}
B7512c4:L7512c4:{c.instructions+=1;NFSU2_TR(0x7512c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7512c9ull));
TAIL_STATIC(0x74b730u,74b);
}
B7512c9:L7512c9:{c.instructions+=4;NFSU2_TR(0x7512c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7512cf:{NFSU2_TR(0x7512cf);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x32ull))));
}
B7512d2:{NFSU2_TR(0x7512d2);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7512d4:{NFSU2_TR(0x7512d4);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L75130a;}}
}
B7512d6:L7512d6:{c.instructions+=3;NFSU2_TR(0x7512d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7512dc:{NFSU2_TR(0x7512dc);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+28),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(R+28),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B7512e2:{NFSU2_TR(0x7512e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7512e7ull));
TAIL_STATIC(0x74b730u,74b);
}
B7512e7:L7512e7:{c.instructions+=8;NFSU2_TR(0x7512e7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B7512e9:{NFSU2_TR(0x7512e9);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w2(U+4,u16(0x0ull));
s2(u32(r4(U+0)),r2(U+4));
}
B7512ef:{NFSU2_TR(0x7512ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7512f5:{NFSU2_TR(0x7512f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7512fb:{NFSU2_TR(0x7512fb);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B7512fd:{NFSU2_TR(0x7512fd);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B7512fe:{NFSU2_TR(0x7512fe);
u8 U[64];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(s64(s32(r4(U+4)))));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x7512fe);w8(U+48,u64(x_/y_));}
w4(R+0,u32(r8(U+48)));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x7512fe);w8(U+56,u64(x_%y_));}
w4(R+8,u32(r8(U+56)));
}
B751304:{NFSU2_TR(0x751304);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75130a:L75130a:{c.instructions+=2;NFSU2_TR(0x75130a);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B751310:{NFSU2_TR(0x751310);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7513ed;}}
}
B751316:L751316:{c.instructions+=3;NFSU2_TR(0x751316);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75131c:{NFSU2_TR(0x75131c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B75131e:{NFSU2_TR(0x75131e);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L75135c;}}
}
B751320:L751320:{c.instructions+=3;NFSU2_TR(0x751320);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B751326:{NFSU2_TR(0x751326);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B75132c:{NFSU2_TR(0x75132c);
if(r1(R+518)){{goto L7513ed;}}
}
B751332:L751332:{c.instructions+=4;NFSU2_TR(0x751332);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B751335:{NFSU2_TR(0x751335);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B751337:{NFSU2_TR(0x751337);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B751341:{NFSU2_TR(0x751341);
if(r1(R+518)){{goto L75135c;}}
}
B751343:L751343:{c.instructions+=9;NFSU2_TR(0x751343);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B751349:{NFSU2_TR(0x751349);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B75134b:{NFSU2_TR(0x75134b);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B75134f:{NFSU2_TR(0x75134f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751351:{NFSU2_TR(0x751351);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751352:{NFSU2_TR(0x751352);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x6ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x6ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B751355:{NFSU2_TR(0x751355);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751356:{NFSU2_TR(0x751356);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751357:{NFSU2_TR(0x751357);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x751359ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B751359:L751359:{c.instructions+=1;NFSU2_TR(0x751359);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B75135c:L75135c:{c.instructions+=16;NFSU2_TR(0x75135c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B751362:{NFSU2_TR(0x751362);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B751368:{NFSU2_TR(0x751368);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75136e:{NFSU2_TR(0x75136e);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B751370:{NFSU2_TR(0x751370);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B751374:{NFSU2_TR(0x751374);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751376:{NFSU2_TR(0x751376);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751378:{NFSU2_TR(0x751378);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B75137a:{NFSU2_TR(0x75137a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B75137d:{NFSU2_TR(0x75137d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75137f:{NFSU2_TR(0x75137f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751380:{NFSU2_TR(0x751380);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B751383:{NFSU2_TR(0x751383);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B751387:{NFSU2_TR(0x751387);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751388:{NFSU2_TR(0x751388);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751389:{NFSU2_TR(0x751389);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75138eull));
TAIL_STATIC(0x74a5c0u,74a);
}
B75138e:L75138e:{c.instructions+=4;NFSU2_TR(0x75138e);
__builtin_memmove((R+12),(R+0),4);
}
B751390:{NFSU2_TR(0x751390);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B751393:{NFSU2_TR(0x751393);
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
B751395:{NFSU2_TR(0x751395);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7513ed;}}
}
B751397:L751397:{c.instructions+=1;NFSU2_TR(0x751397);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75139cull));
TAIL_STATIC(0x74b730u,74b);
}
B75139c:L75139c:{c.instructions+=8;NFSU2_TR(0x75139c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7513a2:{NFSU2_TR(0x7513a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7513a8:{NFSU2_TR(0x7513a8);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B7513aa:{NFSU2_TR(0x7513aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7513b0:{NFSU2_TR(0x7513b0);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B7513b4:{NFSU2_TR(0x7513b4);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B7513b7:{NFSU2_TR(0x7513b7);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7513b9:{NFSU2_TR(0x7513b9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7513e0;}}
}
B7513bb:L7513bb:{c.instructions+=7;NFSU2_TR(0x7513bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7513c1:{NFSU2_TR(0x7513c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7513c7:{NFSU2_TR(0x7513c7);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B7513c9:{NFSU2_TR(0x7513c9);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B7513ca:{NFSU2_TR(0x7513ca);
u8 U[64];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(s64(s32(r4(U+4)))));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x7513ca);w8(U+48,u64(x_/y_));}
w4(R+0,u32(r8(U+48)));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x7513ca);w8(U+56,u64(x_%y_));}
w4(R+8,u32(r8(U+56)));
}
B7513d0:{NFSU2_TR(0x7513d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B7513da:{NFSU2_TR(0x7513da);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7513e0:L7513e0:{c.instructions+=2;NFSU2_TR(0x7513e0);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7513e7:{NFSU2_TR(0x7513e7);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x751316u);}goto L751316;}}
}
B7513ed:L7513ed:{c.instructions+=5;NFSU2_TR(0x7513ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x208ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7513f3:{NFSU2_TR(0x7513f3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7513f5:{NFSU2_TR(0x7513f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7513f6:{NFSU2_TR(0x7513f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7513f7:{NFSU2_TR(0x7513f7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L751438;}}
}
B7513f9:L7513f9:{c.instructions+=3;NFSU2_TR(0x7513f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7513ff:{NFSU2_TR(0x7513ff);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B751401:{NFSU2_TR(0x751401);
if(r1(R+518)){{goto L751438;}}
}
B751403:L751403:{c.instructions+=6;NFSU2_TR(0x751403);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x208ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B751409:{NFSU2_TR(0x751409);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x210ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75140f:{NFSU2_TR(0x75140f);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B751410:{NFSU2_TR(0x751410);
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
B751412:{NFSU2_TR(0x751412);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x208ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B751418:{NFSU2_TR(0x751418);
if(r1(R+518)){{goto L751421;}}
}
B75141a:L75141a:{c.instructions+=3;NFSU2_TR(0x75141a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75141b:{NFSU2_TR(0x75141b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75141c:{NFSU2_TR(0x75141c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75141eull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B75141e:L75141e:{c.instructions+=1;NFSU2_TR(0x75141e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B751421:L751421:{c.instructions+=4;NFSU2_TR(0x751421);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x208ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B751427:{NFSU2_TR(0x751427);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B751428:{NFSU2_TR(0x751428);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x208ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75142e:{NFSU2_TR(0x75142e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B751438:L751438:{c.instructions+=4;NFSU2_TR(0x751438);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75143c:{NFSU2_TR(0x75143c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B751440:{NFSU2_TR(0x751440);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B751441:{NFSU2_TR(0x751441);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x751446ull));
TAIL_STATIC(0x76115eu,761);
}
B751446:L751446:{c.instructions+=2;NFSU2_TR(0x751446);
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
B751449:{NFSU2_TR(0x751449);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B751450:L751450:{c.instructions+=6;NFSU2_TR(0x751450);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751451:{NFSU2_TR(0x751451);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751452:{NFSU2_TR(0x751452);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B751456:{NFSU2_TR(0x751456);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1e4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75145c:{NFSU2_TR(0x75145c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75145d:{NFSU2_TR(0x75145d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x751462ull));
TAIL_STATIC(0x74b790u,74b);
}
B751462:L751462:{c.instructions+=3;NFSU2_TR(0x751462);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B751465:{NFSU2_TR(0x751465);
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
B751467:{NFSU2_TR(0x751467);
if(r1(R+518)){{goto L751482;}}
}
B751469:L751469:{c.instructions+=1;NFSU2_TR(0x751469);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75146eull));
TAIL_STATIC(0x74b730u,74b);
}
B75146e:L75146e:{c.instructions+=3;NFSU2_TR(0x75146e);
__builtin_memmove((R+4),(R+28),4);
}
B751470:{NFSU2_TR(0x751470);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B751474:{NFSU2_TR(0x751474);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x751479ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7510c0u);}goto L7510c0;}
}
B751479:L751479:{c.instructions+=2;NFSU2_TR(0x751479);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75147a:{NFSU2_TR(0x75147a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75147full));
TAIL_STATIC(0x74b870u,74b);
}
B75147f:L75147f:{c.instructions+=1;NFSU2_TR(0x75147f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B751482:L751482:{c.instructions+=4;NFSU2_TR(0x751482);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B751483:{NFSU2_TR(0x751483);
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
B751485:{NFSU2_TR(0x751485);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B751486:{NFSU2_TR(0x751486);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B751490:L751490:{c.instructions+=4;NFSU2_TR(0x751490);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751491:{NFSU2_TR(0x751491);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B751495:{NFSU2_TR(0x751495);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B75149c:{NFSU2_TR(0x75149c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7514b2;}}
}
B75149e:L75149e:{c.instructions+=2;NFSU2_TR(0x75149e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7514a8:{NFSU2_TR(0x7514a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7514b2:L7514b2:{c.instructions+=3;NFSU2_TR(0x7514b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7514b5:{NFSU2_TR(0x7514b5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7514b7:{NFSU2_TR(0x7514b7);
if(r1(R+518)){{goto L7514c9;}}
}
B7514b9:L7514b9:{c.instructions+=2;NFSU2_TR(0x7514b9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7514ba:{NFSU2_TR(0x7514ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7514bfull));
TAIL_STATIC(0x74a2d0u,74a);
}
B7514bf:L7514bf:{c.instructions+=2;NFSU2_TR(0x7514bf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7514c2:{NFSU2_TR(0x7514c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7514c9:L7514c9:{c.instructions+=3;NFSU2_TR(0x7514c9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7514cf:{NFSU2_TR(0x7514cf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7514d0:{NFSU2_TR(0x7514d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7514d5ull));
TAIL_STATIC(0x74b770u,74b);
}
B7514d5:L7514d5:{c.instructions+=3;NFSU2_TR(0x7514d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7514db:{NFSU2_TR(0x7514db);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7514dc:{NFSU2_TR(0x7514dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7514e1ull));
TAIL_STATIC(0x598ec0u,598);
}
B7514e1:L7514e1:{c.instructions+=3;NFSU2_TR(0x7514e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7514e7:{NFSU2_TR(0x7514e7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7514e8:{NFSU2_TR(0x7514e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7514edull));
TAIL_STATIC(0x598ec0u,598);
}
B7514ed:L7514ed:{c.instructions+=2;NFSU2_TR(0x7514ed);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7514ee:{NFSU2_TR(0x7514ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7514f3ull));
TAIL_STATIC(0x598ec0u,598);
}
B7514f3:L7514f3:{c.instructions+=3;NFSU2_TR(0x7514f3);
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
B7514f6:{NFSU2_TR(0x7514f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7514f7:{NFSU2_TR(0x7514f7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B751500:L751500:{c.instructions+=5;NFSU2_TR(0x751500);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B751504:{NFSU2_TR(0x751504);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B751508:{NFSU2_TR(0x751508);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x210ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75150e:{NFSU2_TR(0x75150e);
u8 U[14];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20cull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x2ull))));
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
B751515:{NFSU2_TR(0x751515);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B751520:L751520:{c.instructions+=4;NFSU2_TR(0x751520);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751521:{NFSU2_TR(0x751521);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B751525:{NFSU2_TR(0x751525);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B75152c:{NFSU2_TR(0x75152c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L751535;}}
}
B75152e:L75152e:{c.instructions+=1;NFSU2_TR(0x75152e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B751535:L751535:{c.instructions+=3;NFSU2_TR(0x751535);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B751538:{NFSU2_TR(0x751538);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75153a:{NFSU2_TR(0x75153a);
if(r1(R+518)){{goto L751545;}}
}
B75153c:L75153c:{c.instructions+=2;NFSU2_TR(0x75153c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75153d:{NFSU2_TR(0x75153d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x751542ull));
TAIL_STATIC(0x74a2d0u,74a);
}
B751542:L751542:{c.instructions+=1;NFSU2_TR(0x751542);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B751545:L751545:{c.instructions+=5;NFSU2_TR(0x751545);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B75154c:{NFSU2_TR(0x75154c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B751556:{NFSU2_TR(0x751556);
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
B751558:{NFSU2_TR(0x751558);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B751559:{NFSU2_TR(0x751559);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B751560:L751560:{c.instructions+=4;NFSU2_TR(0x751560);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751561:{NFSU2_TR(0x751561);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B751565:{NFSU2_TR(0x751565);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x4ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B75156c:{NFSU2_TR(0x75156c);
if(r1(R+518)){{goto L751575;}}
}
B75156e:L75156e:{c.instructions+=3;NFSU2_TR(0x75156e);
w4(R+0,u32(0xfffffffeull));
}
B751573:{NFSU2_TR(0x751573);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B751574:{NFSU2_TR(0x751574);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B751575:L751575:{c.instructions+=13;NFSU2_TR(0x751575);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751576:{NFSU2_TR(0x751576);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75157c:{NFSU2_TR(0x75157c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75157d:{NFSU2_TR(0x75157d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B751583:{NFSU2_TR(0x751583);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B751586:{NFSU2_TR(0x751586);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751587:{NFSU2_TR(0x751587);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B75158d:{NFSU2_TR(0x75158d);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B75158e:{NFSU2_TR(0x75158e);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x75158e);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x75158e);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B751590:{NFSU2_TR(0x751590);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B751596:{NFSU2_TR(0x751596);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75159a:{NFSU2_TR(0x75159a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75159c:{NFSU2_TR(0x75159c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7515a5;}}
}
B75159e:L75159e:{c.instructions+=6;NFSU2_TR(0x75159e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75159f:{NFSU2_TR(0x75159f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7515a0:{NFSU2_TR(0x7515a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7515a1:{NFSU2_TR(0x7515a1);
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
B7515a3:{NFSU2_TR(0x7515a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7515a4:{NFSU2_TR(0x7515a4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7515a5:L7515a5:{c.instructions+=4;NFSU2_TR(0x7515a5);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7515a9:{NFSU2_TR(0x7515a9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7515ac:{NFSU2_TR(0x7515ac);
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
B7515ae:{NFSU2_TR(0x7515ae);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7515ba;}}
}
B7515b0:L7515b0:{c.instructions+=6;NFSU2_TR(0x7515b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7515b1:{NFSU2_TR(0x7515b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7515b2:{NFSU2_TR(0x7515b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7515b3:{NFSU2_TR(0x7515b3);
w4(R+0,u32(0xfffffffaull));
}
B7515b8:{NFSU2_TR(0x7515b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7515b9:{NFSU2_TR(0x7515b9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7515ba:L7515ba:{c.instructions+=2;NFSU2_TR(0x7515ba);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7515bc:{NFSU2_TR(0x7515bc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7515d6;}}
}
B7515be:L7515be:{c.instructions+=15;NFSU2_TR(0x7515be);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7515c2:{NFSU2_TR(0x7515c2);
__builtin_memmove((R+0),(R+28),4);
}
B7515c4:{NFSU2_TR(0x7515c4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B7515c6:{NFSU2_TR(0x7515c6);
w1(R+512,carry<u32>(r4(R+0),r4(R+24)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B7515c8:{NFSU2_TR(0x7515c8);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B7515c9:{NFSU2_TR(0x7515c9);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x7515c9);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x7515c9);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B7515cb:{NFSU2_TR(0x7515cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7515cc:{NFSU2_TR(0x7515cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7515cd:{NFSU2_TR(0x7515cd);
__builtin_memmove((R+0),(R+8),4);
}
B7515cf:{NFSU2_TR(0x7515cf);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B7515d0:{NFSU2_TR(0x7515d0);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+20)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x7515d0);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x7515d0);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B7515d2:{NFSU2_TR(0x7515d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7515d3:{NFSU2_TR(0x7515d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7515d4:{NFSU2_TR(0x7515d4);
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
B7515d5:{NFSU2_TR(0x7515d5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7515d6:L7515d6:{c.instructions+=7;NFSU2_TR(0x7515d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B7515dc:{NFSU2_TR(0x7515dc);
w4(R+20,u32(u32(r4(R+20))+u32(r4(R+24))));
}
B7515de:{NFSU2_TR(0x7515de);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7515e2:{NFSU2_TR(0x7515e2);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7515e6:{NFSU2_TR(0x7515e6);
__builtin_memmove((R+8),(R+4),4);
}
B7515e8:{NFSU2_TR(0x7515e8);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B7515eb:{NFSU2_TR(0x7515eb);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x6ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7515ee:L7515ee:{c.instructions+=1;NFSU2_TR(0x7515ee);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L7515f0;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7515eeu);}goto L7515ee;}
}
B7515f0:L7515f0:{c.instructions+=2;NFSU2_TR(0x7515f0);
__builtin_memmove((R+4),(R+8),4);
}
B7515f2:{NFSU2_TR(0x7515f2);
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
B7515f5:L7515f5:{c.instructions+=1;NFSU2_TR(0x7515f5);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L7515f7;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7515f5u);}goto L7515f5;}
}
B7515f7:L7515f7:{c.instructions+=1;NFSU2_TR(0x7515f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7515fcull));
TAIL_STATIC(0x74b730u,74b);
}
B7515fc:L7515fc:{c.instructions+=12;NFSU2_TR(0x7515fc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+20)),r4(U+0));
}
B7515ff:{NFSU2_TR(0x7515ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B751605:{NFSU2_TR(0x751605);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75160b:{NFSU2_TR(0x75160b);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B75160d:{NFSU2_TR(0x75160d);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B75160e:{NFSU2_TR(0x75160e);
u8 U[64];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(s64(s32(r4(U+4)))));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x75160e);w8(U+48,u64(x_/y_));}
w4(R+0,u32(r8(U+48)));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x75160e);w8(U+56,u64(x_%y_));}
w4(R+8,u32(r8(U+56)));
}
B751614:{NFSU2_TR(0x751614);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B751617:{NFSU2_TR(0x751617);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751618:{NFSU2_TR(0x751618);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75161a:{NFSU2_TR(0x75161a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75161b:{NFSU2_TR(0x75161b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B751621:{NFSU2_TR(0x751621);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x751626ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x751450u);}goto L751450;}
}
B751626:L751626:{c.instructions+=14;NFSU2_TR(0x751626);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75162c:{NFSU2_TR(0x75162c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B751632:{NFSU2_TR(0x751632);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B751638:{NFSU2_TR(0x751638);
__builtin_memmove((R+0),(R+4),4);
}
B75163a:{NFSU2_TR(0x75163a);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B75163c:{NFSU2_TR(0x75163c);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B75163e:{NFSU2_TR(0x75163e);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B75163f:{NFSU2_TR(0x75163f);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x75163f);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x75163f);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B751641:{NFSU2_TR(0x751641);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B751644:{NFSU2_TR(0x751644);
__builtin_memmove((R+0),(R+8),4);
}
B751646:{NFSU2_TR(0x751646);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B751647:{NFSU2_TR(0x751647);
u8 U[64];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(s64(s32(r4(U+4)))));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x751647);w8(U+48,u64(x_/y_));}
w4(R+0,u32(r8(U+48)));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x751647);w8(U+56,u64(x_%y_));}
w4(R+8,u32(r8(U+56)));
}
B75164d:{NFSU2_TR(0x75164d);
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
B75164f:{NFSU2_TR(0x75164f);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L751656;}}
}
B751651:L751651:{c.instructions+=1;NFSU2_TR(0x751651);
w4(R+0,u32(0x1ull));
}
B751656:L751656:{c.instructions+=5;NFSU2_TR(0x751656);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B751657:{NFSU2_TR(0x751657);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B751658:{NFSU2_TR(0x751658);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B751659:{NFSU2_TR(0x751659);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B75165a:{NFSU2_TR(0x75165a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B751660:L751660:{c.instructions+=6;NFSU2_TR(0x751660);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751661:{NFSU2_TR(0x751661);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B751665:{NFSU2_TR(0x751665);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75166b:{NFSU2_TR(0x75166b);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B751671:{NFSU2_TR(0x751671);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751672:{NFSU2_TR(0x751672);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7516a0;}}
}
B751674:L751674:{c.instructions+=3;NFSU2_TR(0x751674);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75167a:{NFSU2_TR(0x75167a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75167b:{NFSU2_TR(0x75167b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x751680ull));
TAIL_STATIC(0x74b790u,74b);
}
B751680:L751680:{c.instructions+=3;NFSU2_TR(0x751680);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B751683:{NFSU2_TR(0x751683);
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
B751685:{NFSU2_TR(0x751685);
if(r1(R+518)){{goto L7516a0;}}
}
B751687:L751687:{c.instructions+=1;NFSU2_TR(0x751687);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75168cull));
TAIL_STATIC(0x74b730u,74b);
}
B75168c:L75168c:{c.instructions+=3;NFSU2_TR(0x75168c);
__builtin_memmove((R+4),(R+24),4);
}
B75168e:{NFSU2_TR(0x75168e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B751692:{NFSU2_TR(0x751692);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x751697ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7510c0u);}goto L7510c0;}
}
B751697:L751697:{c.instructions+=2;NFSU2_TR(0x751697);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751698:{NFSU2_TR(0x751698);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75169dull));
TAIL_STATIC(0x74b870u,74b);
}
B75169d:L75169d:{c.instructions+=1;NFSU2_TR(0x75169d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7516a0:L7516a0:{c.instructions+=3;NFSU2_TR(0x7516a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7516a6:{NFSU2_TR(0x7516a6);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
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
B7516ac:{NFSU2_TR(0x7516ac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7516b6;}}
}
B7516ae:L7516ae:{c.instructions+=4;NFSU2_TR(0x7516ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7516af:{NFSU2_TR(0x7516af);
w4(R+0,u32(0xfffffff9ull));
}
B7516b4:{NFSU2_TR(0x7516b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7516b5:{NFSU2_TR(0x7516b5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7516b6:L7516b6:{c.instructions+=6;NFSU2_TR(0x7516b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7516bc:{NFSU2_TR(0x7516bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7516c0:{NFSU2_TR(0x7516c0);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B7516c2:{NFSU2_TR(0x7516c2);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B7516c6:{NFSU2_TR(0x7516c6);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B7516c8:{NFSU2_TR(0x7516c8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L7516cc;}}
}
B7516ca:L7516ca:{c.instructions+=1;NFSU2_TR(0x7516ca);
__builtin_memmove((R+4),(R+8),4);
}
B7516cc:L7516cc:{c.instructions+=4;NFSU2_TR(0x7516cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7516d0:{NFSU2_TR(0x7516d0);
__builtin_memmove((R+8),(R+4),4);
}
B7516d2:{NFSU2_TR(0x7516d2);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B7516d5:{NFSU2_TR(0x7516d5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7516d8:L7516d8:{c.instructions+=1;NFSU2_TR(0x7516d8);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L7516da;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7516d8u);}goto L7516d8;}
}
B7516da:L7516da:{c.instructions+=2;NFSU2_TR(0x7516da);
__builtin_memmove((R+4),(R+8),4);
}
B7516dc:{NFSU2_TR(0x7516dc);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B7516df:L7516df:{c.instructions+=1;NFSU2_TR(0x7516df);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L7516e1;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7516dfu);}goto L7516df;}
}
B7516e1:L7516e1:{c.instructions+=3;NFSU2_TR(0x7516e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7516e5:{NFSU2_TR(0x7516e5);
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
B7516e7:{NFSU2_TR(0x7516e7);
if(r1(R+518)){{goto L7516ed;}}
}
B7516e9:L7516e9:{c.instructions+=2;NFSU2_TR(0x7516e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B7516eb:{NFSU2_TR(0x7516eb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B7516ed:L7516ed:{c.instructions+=4;NFSU2_TR(0x7516ed);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B7516f1:{NFSU2_TR(0x7516f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7516f2:{NFSU2_TR(0x7516f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7516f3:{NFSU2_TR(0x7516f3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B751700:L751700:{c.instructions+=10;NFSU2_TR(0x751700);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B751704:{NFSU2_TR(0x751704);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B751708:{NFSU2_TR(0x751708);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B75170c:{NFSU2_TR(0x75170c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75170d:{NFSU2_TR(0x75170d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B751711:{NFSU2_TR(0x751711);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751712:{NFSU2_TR(0x751712);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751713:{NFSU2_TR(0x751713);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751714:{NFSU2_TR(0x751714);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751715:{NFSU2_TR(0x751715);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75171aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x751660u);}goto L751660;}
}
B75171a:L75171a:{c.instructions+=4;NFSU2_TR(0x75171a);
__builtin_memmove((R+4),(R+0),4);
}
B75171c:{NFSU2_TR(0x75171c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B75171f:{NFSU2_TR(0x75171f);
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
B751721:{NFSU2_TR(0x751721);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L75173e;}}
}
B751723:L751723:{c.instructions+=6;NFSU2_TR(0x751723);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B751729:{NFSU2_TR(0x751729);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75172f:{NFSU2_TR(0x75172f);
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
B751731:{NFSU2_TR(0x751731);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B751732:{NFSU2_TR(0x751732);
u8 U[64];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(s64(s32(r4(U+4)))));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x751732);w8(U+48,u64(x_/y_));}
w4(R+0,u32(r8(U+48)));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x751732);w8(U+56,u64(x_%y_));}
w4(R+8,u32(r8(U+56)));
}
B751738:{NFSU2_TR(0x751738);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75173e:L75173e:{c.instructions+=3;NFSU2_TR(0x75173e);
__builtin_memmove((R+0),(R+4),4);
}
B751740:{NFSU2_TR(0x751740);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B751741:{NFSU2_TR(0x751741);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B751750:L751750:{c.instructions+=8;NFSU2_TR(0x751750);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B751753:{NFSU2_TR(0x751753);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B751758:{NFSU2_TR(0x751758);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751759:{NFSU2_TR(0x751759);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75175d:{NFSU2_TR(0x75175d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B751761:{NFSU2_TR(0x751761);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B751768:{NFSU2_TR(0x751768);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751769:{NFSU2_TR(0x751769);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75185e;}}
}
B75176f:L75176f:{c.instructions+=4;NFSU2_TR(0x75176f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B751772:{NFSU2_TR(0x751772);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B751774:{NFSU2_TR(0x751774);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B751776:{NFSU2_TR(0x751776);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75185e;}}
}
B75177c:L75177c:{c.instructions+=10;NFSU2_TR(0x75177c);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B751780:{NFSU2_TR(0x751780);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751781:{NFSU2_TR(0x751781);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B751785:{NFSU2_TR(0x751785);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751786:{NFSU2_TR(0x751786);
u8 U[6];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w2(U+4,u16(0x2ull));
s2(u32(r4(U+0)),r2(U+4));
}
B75178d:{NFSU2_TR(0x75178d);
u8 U[6];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),2);
s2(u32(r4(U+0)),r2(U+4));
}
B751792:{NFSU2_TR(0x751792);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B751796:{NFSU2_TR(0x751796);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75179a:{NFSU2_TR(0x75179a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75179e:{NFSU2_TR(0x75179e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7517a3ull));
TAIL_STATIC(0x7432c0u,743);
}
B7517a3:L7517a3:{c.instructions+=3;NFSU2_TR(0x7517a3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B7517a6:{NFSU2_TR(0x7517a6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7517a8:{NFSU2_TR(0x7517a8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7517be;}}
}
B7517aa:L7517aa:{c.instructions+=5;NFSU2_TR(0x7517aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7517ab:{NFSU2_TR(0x7517ab);
w4(R+0,u32(0xfffffffdull));
}
B7517b0:{NFSU2_TR(0x7517b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7517b1:{NFSU2_TR(0x7517b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7517b5:{NFSU2_TR(0x7517b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7517baull));
TAIL_STATIC(0x76115eu,761);
}
B7517ba:L7517ba:{c.instructions+=2;NFSU2_TR(0x7517ba);
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
B7517bd:{NFSU2_TR(0x7517bd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7517be:L7517be:{c.instructions+=1;NFSU2_TR(0x7517be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7517c3ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x751080u);}goto L751080;}
}
B7517c3:L7517c3:{c.instructions+=4;NFSU2_TR(0x7517c3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7517c4:{NFSU2_TR(0x7517c4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7517c6:{NFSU2_TR(0x7517c6);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7517c8:{NFSU2_TR(0x7517c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7517cdull));
TAIL_STATIC(0x74a220u,74a);
}
B7517cd:L7517cd:{c.instructions+=4;NFSU2_TR(0x7517cd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B7517d0:{NFSU2_TR(0x7517d0);
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
B7517d2:{NFSU2_TR(0x7517d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7517d5:{NFSU2_TR(0x7517d5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7517eb;}}
}
B7517d7:L7517d7:{c.instructions+=5;NFSU2_TR(0x7517d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7517d8:{NFSU2_TR(0x7517d8);
w4(R+0,u32(0xfffffffcull));
}
B7517dd:{NFSU2_TR(0x7517dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7517de:{NFSU2_TR(0x7517de);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7517e2:{NFSU2_TR(0x7517e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7517e7ull));
TAIL_STATIC(0x76115eu,761);
}
B7517e7:L7517e7:{c.instructions+=2;NFSU2_TR(0x7517e7);
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
B7517ea:{NFSU2_TR(0x7517ea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7517eb:L7517eb:{c.instructions+=5;NFSU2_TR(0x7517eb);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7517ed:{NFSU2_TR(0x7517ed);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B7517f1:{NFSU2_TR(0x7517f1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7517f2:{NFSU2_TR(0x7517f2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7517f3:{NFSU2_TR(0x7517f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7517f8ull));
TAIL_STATIC(0x74a380u,74a);
}
B7517f8:L7517f8:{c.instructions+=3;NFSU2_TR(0x7517f8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B7517fb:{NFSU2_TR(0x7517fb);
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
B7517fd:{NFSU2_TR(0x7517fd);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L751822;}}
}
B7517ff:L7517ff:{c.instructions+=3;NFSU2_TR(0x7517ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B751802:{NFSU2_TR(0x751802);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751803:{NFSU2_TR(0x751803);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x751808ull));
TAIL_STATIC(0x74a2d0u,74a);
}
B751808:L751808:{c.instructions+=7;NFSU2_TR(0x751808);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B75180b:{NFSU2_TR(0x75180b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75180e:{NFSU2_TR(0x75180e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75180f:{NFSU2_TR(0x75180f);
w4(R+0,u32(0xfffffffbull));
}
B751814:{NFSU2_TR(0x751814);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B751815:{NFSU2_TR(0x751815);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B751819:{NFSU2_TR(0x751819);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75181eull));
TAIL_STATIC(0x76115eu,761);
}
B75181e:L75181e:{c.instructions+=2;NFSU2_TR(0x75181e);
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
B751821:{NFSU2_TR(0x751821);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B751822:L751822:{c.instructions+=4;NFSU2_TR(0x751822);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B751825:{NFSU2_TR(0x751825);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751827:{NFSU2_TR(0x751827);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751828:{NFSU2_TR(0x751828);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75182dull));
TAIL_STATIC(0x74a4a0u,74a);
}
B75182d:L75182d:{c.instructions+=7;NFSU2_TR(0x75182d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B751830:{NFSU2_TR(0x751830);
u8 U[4];
w4(U+0,u32(0x751450ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751835:{NFSU2_TR(0x751835);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751836:{NFSU2_TR(0x751836);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751838:{NFSU2_TR(0x751838);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75183a:{NFSU2_TR(0x75183a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75183b:{NFSU2_TR(0x75183b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x751840ull));
TAIL_STATIC(0x74a960u,74a);
}
B751840:L751840:{c.instructions+=7;NFSU2_TR(0x751840);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B751843:{NFSU2_TR(0x751843);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B751844:{NFSU2_TR(0x751844);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B75184e:{NFSU2_TR(0x75184e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B751850:{NFSU2_TR(0x751850);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B751851:{NFSU2_TR(0x751851);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B751855:{NFSU2_TR(0x751855);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75185aull));
TAIL_STATIC(0x76115eu,761);
}
B75185a:L75185a:{c.instructions+=2;NFSU2_TR(0x75185a);
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
B75185d:{NFSU2_TR(0x75185d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75185e:L75185e:{c.instructions+=5;NFSU2_TR(0x75185e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B751862:{NFSU2_TR(0x751862);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B751863:{NFSU2_TR(0x751863);
w4(R+0,u32(0xfffffffeull));
}
B751868:{NFSU2_TR(0x751868);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B751869:{NFSU2_TR(0x751869);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75186eull));
TAIL_STATIC(0x76115eu,761);
}
B75186e:L75186e:{c.instructions+=2;NFSU2_TR(0x75186e);
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
B751871:{NFSU2_TR(0x751871);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B751880:L751880:{c.instructions+=5;NFSU2_TR(0x751880);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751881:{NFSU2_TR(0x751881);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751882:{NFSU2_TR(0x751882);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B751886:{NFSU2_TR(0x751886);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x1ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B75188d:{NFSU2_TR(0x75188d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75192c;}}
}
B751893:L751893:{c.instructions+=4;NFSU2_TR(0x751893);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B751896:{NFSU2_TR(0x751896);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B751898:{NFSU2_TR(0x751898);
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
B75189a:{NFSU2_TR(0x75189a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75192c;}}
}
B7518a0:L7518a0:{c.instructions+=11;NFSU2_TR(0x7518a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7518a4:{NFSU2_TR(0x7518a4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7518a5:{NFSU2_TR(0x7518a5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((R+28),(U+0),4);
}
B7518a8:{NFSU2_TR(0x7518a8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7518a9:{NFSU2_TR(0x7518a9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7518aa:{NFSU2_TR(0x7518aa);
u8 U[2];
w2(U+0,u16(0x2ull));
s2(u32(r4(R+28)),r2(U+0));
}
B7518af:{NFSU2_TR(0x7518af);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7eull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7518b3:{NFSU2_TR(0x7518b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7518b9:{NFSU2_TR(0x7518b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7518bf:{NFSU2_TR(0x7518bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7518c5:{NFSU2_TR(0x7518c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7518caull));
TAIL_STATIC(0x7432c0u,743);
}
B7518ca:L7518ca:{c.instructions+=3;NFSU2_TR(0x7518ca);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B7518cd:{NFSU2_TR(0x7518cd);
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
B7518d0:{NFSU2_TR(0x7518d0);
if(r1(R+518)){{goto L7518db;}}
}
B7518d2:L7518d2:{c.instructions+=5;NFSU2_TR(0x7518d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7518d3:{NFSU2_TR(0x7518d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7518d4:{NFSU2_TR(0x7518d4);
w4(R+0,u32(0xfffffffdull));
}
B7518d9:{NFSU2_TR(0x7518d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7518da:{NFSU2_TR(0x7518da);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7518db:L7518db:{c.instructions+=1;NFSU2_TR(0x7518db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7518e0ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x751080u);}goto L751080;}
}
B7518e0:L7518e0:{c.instructions+=4;NFSU2_TR(0x7518e0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7518e1:{NFSU2_TR(0x7518e1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7518e3:{NFSU2_TR(0x7518e3);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7518e5:{NFSU2_TR(0x7518e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7518eaull));
TAIL_STATIC(0x74a220u,74a);
}
B7518ea:L7518ea:{c.instructions+=4;NFSU2_TR(0x7518ea);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B7518ed:{NFSU2_TR(0x7518ed);
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
B7518ef:{NFSU2_TR(0x7518ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7518f2:{NFSU2_TR(0x7518f2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7518fd;}}
}
B7518f4:L7518f4:{c.instructions+=5;NFSU2_TR(0x7518f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7518f5:{NFSU2_TR(0x7518f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7518f6:{NFSU2_TR(0x7518f6);
w4(R+0,u32(0xfffffffcull));
}
B7518fb:{NFSU2_TR(0x7518fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7518fc:{NFSU2_TR(0x7518fc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7518fd:L7518fd:{c.instructions+=4;NFSU2_TR(0x7518fd);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7518ff:{NFSU2_TR(0x7518ff);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751900:{NFSU2_TR(0x751900);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751901:{NFSU2_TR(0x751901);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x751906ull));
TAIL_STATIC(0x74a3f0u,74a);
}
B751906:L751906:{c.instructions+=7;NFSU2_TR(0x751906);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B751909:{NFSU2_TR(0x751909);
u8 U[4];
w4(U+0,u32(0x751450ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75190e:{NFSU2_TR(0x75190e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75190f:{NFSU2_TR(0x75190f);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751911:{NFSU2_TR(0x751911);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751913:{NFSU2_TR(0x751913);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751914:{NFSU2_TR(0x751914);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x751919ull));
TAIL_STATIC(0x74a960u,74a);
}
B751919:L751919:{c.instructions+=7;NFSU2_TR(0x751919);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B75191c:{NFSU2_TR(0x75191c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75191d:{NFSU2_TR(0x75191d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B751927:{NFSU2_TR(0x751927);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B751928:{NFSU2_TR(0x751928);
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
B75192a:{NFSU2_TR(0x75192a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B75192b:{NFSU2_TR(0x75192b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75192c:L75192c:{c.instructions+=4;NFSU2_TR(0x75192c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75192d:{NFSU2_TR(0x75192d);
w4(R+0,u32(0xfffffffeull));
}
B751932:{NFSU2_TR(0x751932);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B751933:{NFSU2_TR(0x751933);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B751940:L751940:{c.instructions+=3;NFSU2_TR(0x751940);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751941:{NFSU2_TR(0x751941);
u8 U[4];
w4(U+0,u32(0x214ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751946:{NFSU2_TR(0x751946);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75194bull));
TAIL_STATIC(0x5832f0u,583);
}
B75194b:L75194b:{c.instructions+=5;NFSU2_TR(0x75194b);
__builtin_memmove((R+24),(R+0),4);
}
B75194d:{NFSU2_TR(0x75194d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B751950:{NFSU2_TR(0x751950);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B751952:{NFSU2_TR(0x751952);
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
B751954:{NFSU2_TR(0x751954);
if(r1(R+518)){{goto L751a42;}}
}
B75195a:L75195a:{c.instructions+=3;NFSU2_TR(0x75195a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75195b:{NFSU2_TR(0x75195b);
w4(R+4,u32(0x85ull));
}
B751960:{NFSU2_TR(0x751960);
__builtin_memmove((R+28),(R+24),4);
}
B751962:L751962:{c.instructions+=1;NFSU2_TR(0x751962);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L751964;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x751962u);}goto L751962;}
}
B751964:L751964:{c.instructions+=18;NFSU2_TR(0x751964);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B75196a:{NFSU2_TR(0x75196a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75196b:{NFSU2_TR(0x75196b);
u8 U[4];
w4(U+0,u32(0x751940ull));
s4(u32(r4(R+24)),r4(U+0));
}
B751971:{NFSU2_TR(0x751971);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(0x751490ull));
s4(u32(r4(U+0)),r4(U+4));
}
B751978:{NFSU2_TR(0x751978);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0x752200ull));
s4(u32(r4(U+0)),r4(U+4));
}
B75197f:{NFSU2_TR(0x75197f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
w4(U+4,u32(0x757900ull));
s4(u32(r4(U+0)),r4(U+4));
}
B751986:{NFSU2_TR(0x751986);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x751750ull));
s4(u32(r4(U+0)),r4(U+4));
}
B75198d:{NFSU2_TR(0x75198d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w4(U+4,u32(0x751520ull));
s4(u32(r4(U+0)),r4(U+4));
}
B751994:{NFSU2_TR(0x751994);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
w4(U+4,u32(0x751880ull));
s4(u32(r4(U+0)),r4(U+4));
}
B75199b:{NFSU2_TR(0x75199b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
w4(U+4,u32(0x751520ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7519a2:{NFSU2_TR(0x7519a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
w4(U+4,u32(0x751500ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7519a9:{NFSU2_TR(0x7519a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
w4(U+4,u32(0x753ab0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7519b0:{NFSU2_TR(0x7519b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0x754c40ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7519b7:{NFSU2_TR(0x7519b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
w4(U+4,u32(0x751560ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7519be:{NFSU2_TR(0x7519be);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
w4(U+4,u32(0x751660ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7519c5:{NFSU2_TR(0x7519c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
w4(U+4,u32(0x751700ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7519cc:{NFSU2_TR(0x7519cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
w4(U+4,u32(0x504354ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7519d3:{NFSU2_TR(0x7519d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7519d8ull));
TAIL_STATIC(0x74b740u,74b);
}
B7519d8:L7519d8:{c.instructions+=9;NFSU2_TR(0x7519d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7519dc:{NFSU2_TR(0x7519dc);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0xbull))));
}
B7519df:{NFSU2_TR(0x7519df);
u8 U[6];
w4(R+28,u32(u32(r4(R+28))&u32(u32(0x7ffcull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7519e5:{NFSU2_TR(0x7519e5);
__builtin_memmove((R+0),(R+28),4);
}
B7519e7:{NFSU2_TR(0x7519e7);
u8 U[40];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w8(U+16,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+24,u64(s64(s32(r4(U+4)))));
w8(U+32,u64(u64(r8(U+16))*u64(r8(U+24))));
w4(R+0,u32(r8(U+32)));
w8(U+8,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+8))!=(r8(U+32))));
__builtin_memmove((R+523),(R+512),1);
}
B7519ec:{NFSU2_TR(0x7519ec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7519ed:{NFSU2_TR(0x7519ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7519f3:{NFSU2_TR(0x7519f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7519f9:{NFSU2_TR(0x7519f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7519feull));
TAIL_STATIC(0x5832f0u,583);
}
B7519fe:L7519fe:{c.instructions+=6;NFSU2_TR(0x7519fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B751a04:{NFSU2_TR(0x751a04);
u8 U[40];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w8(U+16,u64(s64(s32(r4(R+28)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+24,u64(s64(s32(r4(U+4)))));
w8(U+32,u64(u64(r8(U+16))*u64(r8(U+24))));
w4(R+28,u32(r8(U+32)));
w8(U+8,u64(s64(s32(r4(R+28)))));
w1(R+512,u8((r8(U+8))!=(r8(U+32))));
__builtin_memmove((R+523),(R+512),1);
}
B751a09:{NFSU2_TR(0x751a09);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751a0a:{NFSU2_TR(0x751a0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B751a10:{NFSU2_TR(0x751a10);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B751a16:{NFSU2_TR(0x751a16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x751a1bull));
TAIL_STATIC(0x5832f0u,583);
}
B751a1b:L751a1b:{c.instructions+=7;NFSU2_TR(0x751a1b);
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
B751a1e:{NFSU2_TR(0x751a1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B751a24:{NFSU2_TR(0x751a24);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B751a2b:{NFSU2_TR(0x751a2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B751a35:{NFSU2_TR(0x751a35);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B751a3f:{NFSU2_TR(0x751a3f);
__builtin_memmove((R+0),(R+24),4);
}
B751a41:{NFSU2_TR(0x751a41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B751a42:L751a42:{c.instructions+=2;NFSU2_TR(0x751a42);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B751a43:{NFSU2_TR(0x751a43);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B751a50:L751a50:{c.instructions+=25;NFSU2_TR(0x751a50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B751a53:{NFSU2_TR(0x751a53);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B751a58:{NFSU2_TR(0x751a58);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B751a5a:{NFSU2_TR(0x751a5a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B751a5e:{NFSU2_TR(0x751a5e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B751a62:{NFSU2_TR(0x751a62);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+5),(U+4),1);
}
B751a65:{NFSU2_TR(0x751a65);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B751a69:{NFSU2_TR(0x751a69);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751a6b:{NFSU2_TR(0x751a6b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B751a6e:{NFSU2_TR(0x751a6e);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B751a71:{NFSU2_TR(0x751a71);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+8))));
}
B751a73:{NFSU2_TR(0x751a73);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B751a77:{NFSU2_TR(0x751a77);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B751a7a:{NFSU2_TR(0x751a7a);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+8))));
}
B751a7c:{NFSU2_TR(0x751a7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B751a7f:{NFSU2_TR(0x751a7f);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B751a81:{NFSU2_TR(0x751a81);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+5),(U+4),1);
}
B751a84:{NFSU2_TR(0x751a84);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B751a88:{NFSU2_TR(0x751a88);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751a89:{NFSU2_TR(0x751a89);
u8 U[4];
w4(U+0,u32(0x62696e64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751a8e:{NFSU2_TR(0x751a8e);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B751a91:{NFSU2_TR(0x751a91);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B751a94:{NFSU2_TR(0x751a94);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751a95:{NFSU2_TR(0x751a95);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x72ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B751a99:{NFSU2_TR(0x751a99);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x751a9eull));
TAIL_STATIC(0x74a760u,74a);
}
B751a9e:L751a9e:{c.instructions+=1;NFSU2_TR(0x751a9e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x751aa3ull));
TAIL_STATIC(0x74ad60u,74a);
}
B751aa3:L751aa3:{c.instructions+=8;NFSU2_TR(0x751aa3);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w2(R+8,u16(r1(U+4)));
}
B751aa9:{NFSU2_TR(0x751aa9);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B751aab:{NFSU2_TR(0x751aab);
u8 U[5];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+5),(U+4),1);
}
B751aaf:{NFSU2_TR(0x751aaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B751ab2:{NFSU2_TR(0x751ab2);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+8))));
}
B751ab4:{NFSU2_TR(0x751ab4);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B751ab8:{NFSU2_TR(0x751ab8);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B751abc:{NFSU2_TR(0x751abc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x751ac1ull));
TAIL_STATIC(0x76115eu,761);
}
B751ac1:L751ac1:{c.instructions+=2;NFSU2_TR(0x751ac1);
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
B751ac4:{NFSU2_TR(0x751ac4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B751ad0:L751ad0:{c.instructions+=6;NFSU2_TR(0x751ad0);
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
B751ad2:{NFSU2_TR(0x751ad2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B751ad8:{NFSU2_TR(0x751ad8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B751ade:{NFSU2_TR(0x751ade);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B751ae4:{NFSU2_TR(0x751ae4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B751aea:{NFSU2_TR(0x751aea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x751aefull));
TAIL_STATIC(0x74b730u,74b);
}
B751aef:L751aef:{c.instructions+=4;NFSU2_TR(0x751aef);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0x1388ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1388ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1388ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B751af4:{NFSU2_TR(0x751af4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B751afa:{NFSU2_TR(0x751afa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B751b04:{NFSU2_TR(0x751b04);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B751b10:L751b10:{c.instructions+=13;NFSU2_TR(0x751b10);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B751b13:{NFSU2_TR(0x751b13);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751b14:{NFSU2_TR(0x751b14);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B751b17:{NFSU2_TR(0x751b17);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751b19:{NFSU2_TR(0x751b19);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7cull))));
__builtin_memmove((R+4),(U+0),4);
}
B751b1c:{NFSU2_TR(0x751b1c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751b1d:{NFSU2_TR(0x751b1d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751b1f:{NFSU2_TR(0x751b1f);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B751b20:{NFSU2_TR(0x751b20);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751b21:{NFSU2_TR(0x751b21);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B751b24:{NFSU2_TR(0x751b24);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751b25:{NFSU2_TR(0x751b25);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751b26:{NFSU2_TR(0x751b26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x751b2bull));
TAIL_STATIC(0x74a5c0u,74a);
}
B751b2b:L751b2b:{c.instructions+=3;NFSU2_TR(0x751b2b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B751b2e:{NFSU2_TR(0x751b2e);
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
B751b30:{NFSU2_TR(0x751b30);
if(r1(R+518)){{goto L751b37;}}
}
B751b32:L751b32:{c.instructions+=3;NFSU2_TR(0x751b32);
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
B751b35:{NFSU2_TR(0x751b35);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B751b36:{NFSU2_TR(0x751b36);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B751b37:L751b37:{c.instructions+=1;NFSU2_TR(0x751b37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x751b3cull));
TAIL_STATIC(0x74b730u,74b);
}
B751b3c:L751b3c:{c.instructions+=10;NFSU2_TR(0x751b3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B751b3f:{NFSU2_TR(0x751b3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B751b45:{NFSU2_TR(0x751b45);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B751b48:{NFSU2_TR(0x751b48);
w1(R+512,carry<u32>(r4(R+4),r4(R+24)));
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B751b4a:{NFSU2_TR(0x751b4a);
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
B751b4b:{NFSU2_TR(0x751b4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B751b4e:{NFSU2_TR(0x751b4e);
__builtin_memmove((R+0),(R+24),4);
}
B751b50:{NFSU2_TR(0x751b50);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B751b53:{NFSU2_TR(0x751b53);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B751b54:{NFSU2_TR(0x751b54);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B751b60:L751b60:{c.instructions+=16;NFSU2_TR(0x751b60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B751b63:{NFSU2_TR(0x751b63);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B751b68:{NFSU2_TR(0x751b68);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751b6a:{NFSU2_TR(0x751b6a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((R+4),(U+0),4);
}
B751b6d:{NFSU2_TR(0x751b6d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751b6e:{NFSU2_TR(0x751b6e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B751b72:{NFSU2_TR(0x751b72);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B751b76:{NFSU2_TR(0x751b76);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751b78:{NFSU2_TR(0x751b78);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751b7a:{NFSU2_TR(0x751b7a);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B751b7e:{NFSU2_TR(0x751b7e);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B751b82:{NFSU2_TR(0x751b82);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B751b85:{NFSU2_TR(0x751b85);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751b86:{NFSU2_TR(0x751b86);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751b87:{NFSU2_TR(0x751b87);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B751b8f:{NFSU2_TR(0x751b8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x751b94ull));
TAIL_STATIC(0x74a5c0u,74a);
}
B751b94:L751b94:{c.instructions+=3;NFSU2_TR(0x751b94);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B751b97:{NFSU2_TR(0x751b97);
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
B751b9a:{NFSU2_TR(0x751b9a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L751bb5;}}
}
B751b9c:L751b9c:{c.instructions+=1;NFSU2_TR(0x751b9c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x751ba1ull));
TAIL_STATIC(0x74b730u,74b);
}
B751ba1:L751ba1:{c.instructions+=7;NFSU2_TR(0x751ba1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B751ba4:{NFSU2_TR(0x751ba4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B751baa:{NFSU2_TR(0x751baa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B751bad:{NFSU2_TR(0x751bad);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B751bae:{NFSU2_TR(0x751bae);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B751baf:{NFSU2_TR(0x751baf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B751bb2:{NFSU2_TR(0x751bb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B751bb5:L751bb5:{c.instructions+=2;NFSU2_TR(0x751bb5);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B751bb9:{NFSU2_TR(0x751bb9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x751bbeull));
TAIL_STATIC(0x76115eu,761);
}
B751bbe:L751bbe:{c.instructions+=2;NFSU2_TR(0x751bbe);
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
B751bc1:{NFSU2_TR(0x751bc1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B751bd0:L751bd0:{c.instructions+=12;NFSU2_TR(0x751bd0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751bd1:{NFSU2_TR(0x751bd1);
__builtin_memmove((R+24),(R+0),4);
}
B751bd3:{NFSU2_TR(0x751bd3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x82ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B751bda:{NFSU2_TR(0x751bda);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x83ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B751be1:{NFSU2_TR(0x751be1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B751be3:{NFSU2_TR(0x751be3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+1),(U+4),1);
}
B751be9:{NFSU2_TR(0x751be9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x81ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B751bef:{NFSU2_TR(0x751bef);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B751bf2:{NFSU2_TR(0x751bf2);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
}
B751bf4:{NFSU2_TR(0x751bf4);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B751bf7:{NFSU2_TR(0x751bf7);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B751bf9:{NFSU2_TR(0x751bf9);
if(r1(R+518)){{goto L751c3f;}}
}
B751bfb:L751bfb:{c.instructions+=5;NFSU2_TR(0x751bfb);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B751bfd:{NFSU2_TR(0x751bfd);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+1),(U+4),1);
}
B751c00:{NFSU2_TR(0x751c00);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7full))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B751c03:{NFSU2_TR(0x751c03);
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
B751c05:{NFSU2_TR(0x751c05);
if(r1(R+518)){{goto L751c3f;}}
}
B751c07:L751c07:{c.instructions+=1;NFSU2_TR(0x751c07);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x751c0cull));
TAIL_STATIC(0x74b730u,74b);
}
B751c0c:L751c0c:{c.instructions+=3;NFSU2_TR(0x751c0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B751c12:{NFSU2_TR(0x751c12);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x3e8ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x3e8ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x3e8ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B751c17:{NFSU2_TR(0x751c17);
if(r1(R+512)){{goto L751c3f;}}
}
B751c19:L751c19:{c.instructions+=3;NFSU2_TR(0x751c19);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B751c1f:{NFSU2_TR(0x751c1f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B751c22:{NFSU2_TR(0x751c22);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L751c30;}}
}
B751c24:L751c24:{c.instructions+=2;NFSU2_TR(0x751c24);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751c26:{NFSU2_TR(0x751c26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x751c2bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x751b60u);}goto L751b60;}
}
B751c2b:L751c2b:{c.instructions+=3;NFSU2_TR(0x751c2b);
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
B751c2e:{NFSU2_TR(0x751c2e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B751c2f:{NFSU2_TR(0x751c2f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B751c30:L751c30:{c.instructions+=2;NFSU2_TR(0x751c30);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x2ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B751c33:{NFSU2_TR(0x751c33);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L751c3f;}}
}
B751c35:L751c35:{c.instructions+=2;NFSU2_TR(0x751c35);
u8 U[4];
w4(U+0,u32(0x11ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751c37:{NFSU2_TR(0x751c37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x751c3cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x751b60u);}goto L751b60;}
}
B751c3c:L751c3c:{c.instructions+=1;NFSU2_TR(0x751c3c);
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
B751c3f:L751c3f:{c.instructions+=2;NFSU2_TR(0x751c3f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B751c40:{NFSU2_TR(0x751c40);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B751c50:L751c50:{c.instructions+=3;NFSU2_TR(0x751c50);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751c51:{NFSU2_TR(0x751c51);
__builtin_memmove((R+24),(R+0),4);
}
B751c53:{NFSU2_TR(0x751c53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x751c58ull));
TAIL_STATIC(0x74b730u,74b);
}
B751c58:L751c58:{c.instructions+=7;NFSU2_TR(0x751c58);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x3e8ull))));
}
B751c5d:{NFSU2_TR(0x751c5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B751c63:{NFSU2_TR(0x751c63);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B751c67:{NFSU2_TR(0x751c67);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B751c6b:{NFSU2_TR(0x751c6b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
}
B751c6e:{NFSU2_TR(0x751c6e);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x4ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B751c71:{NFSU2_TR(0x751c71);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L751d16;}}
}
B751c77:L751c77:{c.instructions+=1;NFSU2_TR(0x751c77);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x751d18ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B751c7e:L751c7e:{c.instructions+=2;NFSU2_TR(0x751c7e);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B751c85:{NFSU2_TR(0x751c85);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L751cb5;}}
}
B751c87:L751c87:{c.instructions+=12;NFSU2_TR(0x751c87);
__builtin_memmove((R+8),(R+28),4);
}
B751c89:{NFSU2_TR(0x751c89);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B751c8b:{NFSU2_TR(0x751c8b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((R+4),(U+0),4);
}
B751c8e:{NFSU2_TR(0x751c8e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B751c90:{NFSU2_TR(0x751c90);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B751c93:{NFSU2_TR(0x751c93);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B751c96:{NFSU2_TR(0x751c96);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B751c99:{NFSU2_TR(0x751c99);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B751c9c:{NFSU2_TR(0x751c9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B751c9f:{NFSU2_TR(0x751c9f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751ca0:{NFSU2_TR(0x751ca0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B751ca3:{NFSU2_TR(0x751ca3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x751ca8ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x751a50u);}goto L751a50;}
}
B751ca8:L751ca8:{c.instructions+=2;NFSU2_TR(0x751ca8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B751cab:{NFSU2_TR(0x751cab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B751cb5:L751cb5:{c.instructions+=2;NFSU2_TR(0x751cb5);
u8 U[4];
w4(U+0,u32(0x12ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751cb7:{NFSU2_TR(0x751cb7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x751cbcull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x751b60u);}goto L751b60;}
}
B751cbc:L751cbc:{c.instructions+=3;NFSU2_TR(0x751cbc);
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
B751cbf:{NFSU2_TR(0x751cbf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B751cc0:{NFSU2_TR(0x751cc0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B751cc1:L751cc1:{c.instructions+=2;NFSU2_TR(0x751cc1);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x1ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B751cc8:{NFSU2_TR(0x751cc8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L751d16;}}
}
B751cca:L751cca:{c.instructions+=11;NFSU2_TR(0x751cca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B751ccc:{NFSU2_TR(0x751ccc);
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x7cull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x7cull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x7cull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B751ccf:{NFSU2_TR(0x751ccf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B751cd1:{NFSU2_TR(0x751cd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B751cd4:{NFSU2_TR(0x751cd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B751cd7:{NFSU2_TR(0x751cd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B751cda:{NFSU2_TR(0x751cda);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B751cdd:{NFSU2_TR(0x751cdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B751ce0:{NFSU2_TR(0x751ce0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B751ce3:{NFSU2_TR(0x751ce3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B751ce4:{NFSU2_TR(0x751ce4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B751ce5:L751ce5:{c.instructions+=2;NFSU2_TR(0x751ce5);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x1ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B751cec:{NFSU2_TR(0x751cec);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L751d16;}}
}
B751cee:L751cee:{c.instructions+=2;NFSU2_TR(0x751cee);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751cef:{NFSU2_TR(0x751cef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x751cf4ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x751a50u);}goto L751a50;}
}
B751cf4:L751cf4:{c.instructions+=4;NFSU2_TR(0x751cf4);
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
B751cf7:{NFSU2_TR(0x751cf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B751d01:{NFSU2_TR(0x751d01);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B751d02:{NFSU2_TR(0x751d02);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B751d03:L751d03:{c.instructions+=2;NFSU2_TR(0x751d03);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x3ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B751d0a:{NFSU2_TR(0x751d0a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L751d16;}}
}
B751d0c:L751d0c:{c.instructions+=1;NFSU2_TR(0x751d0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B751d16:L751d16:{c.instructions+=2;NFSU2_TR(0x751d16);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B751d17:{NFSU2_TR(0x751d17);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B751d30:L751d30:{c.instructions+=7;NFSU2_TR(0x751d30);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B751d34:{NFSU2_TR(0x751d34);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B751d37:{NFSU2_TR(0x751d37);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
w1(R+512,u8((r1(U+0))<(u8(0x40ull))));
}
B751d3a:{NFSU2_TR(0x751d3a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751d3b:{NFSU2_TR(0x751d3b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751d3c:{NFSU2_TR(0x751d3c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751d3d:{NFSU2_TR(0x751d3d);
if(r1(R+512)){{goto L751d89;}}
}
B751d3f:L751d3f:{c.instructions+=2;NFSU2_TR(0x751d3f);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
w1(R+512,u8((r1(U+0))<(u8(0x80ull))));
}
B751d42:{NFSU2_TR(0x751d42);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L751d89;}}
}
B751d44:L751d44:{c.instructions+=15;NFSU2_TR(0x751d44);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B751d4a:{NFSU2_TR(0x751d4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B751d50:{NFSU2_TR(0x751d50);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B751d56:{NFSU2_TR(0x751d56);
__builtin_memmove((R+0),(R+20),4);
}
B751d58:{NFSU2_TR(0x751d58);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B751d5a:{NFSU2_TR(0x751d5a);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B751d5c:{NFSU2_TR(0x751d5c);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B751d5d:{NFSU2_TR(0x751d5d);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+20)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x751d5d);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x751d5d);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B751d5f:{NFSU2_TR(0x751d5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B751d65:{NFSU2_TR(0x751d65);
__builtin_memmove((R+0),(R+20),4);
}
B751d67:{NFSU2_TR(0x751d67);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B751d69:{NFSU2_TR(0x751d69);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B751d6a:{NFSU2_TR(0x751d6a);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x751d6a);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x751d6a);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B751d6c:{NFSU2_TR(0x751d6c);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B751d72:{NFSU2_TR(0x751d72);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L751d7b;}}
}
B751d74:L751d74:{c.instructions+=5;NFSU2_TR(0x751d74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B751d75:{NFSU2_TR(0x751d75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B751d76:{NFSU2_TR(0x751d76);
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
B751d79:{NFSU2_TR(0x751d79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B751d7a:{NFSU2_TR(0x751d7a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B751d7b:L751d7b:{c.instructions+=4;NFSU2_TR(0x751d7b);
w4(R+4,u32(r1(R+4)));
}
B751d7e:{NFSU2_TR(0x751d7e);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x40ull))));
}
B751d81:{NFSU2_TR(0x751d81);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B751d87:{NFSU2_TR(0x751d87);
{goto L751dc9;}
}
B751d89:L751d89:{c.instructions+=7;NFSU2_TR(0x751d89);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B751d8f:{NFSU2_TR(0x751d8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B751d95:{NFSU2_TR(0x751d95);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B751d98:{NFSU2_TR(0x751d98);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B751d99:{NFSU2_TR(0x751d99);
u8 U[64];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(s64(s32(r4(U+4)))));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x751d99);w8(U+48,u64(x_/y_));}
w4(R+0,u32(r8(U+48)));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x751d99);w8(U+56,u64(x_%y_));}
w4(R+8,u32(r8(U+56)));
}
B751d9f:{NFSU2_TR(0x751d9f);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B751da5:{NFSU2_TR(0x751da5);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x751d74u);}goto L751d74;}}
}
B751da7:L751da7:{c.instructions+=7;NFSU2_TR(0x751da7);
w4(R+0,u32(r1(R+4)));
}
B751daa:{NFSU2_TR(0x751daa);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B751db0:{NFSU2_TR(0x751db0);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B751db3:{NFSU2_TR(0x751db3);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x80ull))));
}
B751db8:{NFSU2_TR(0x751db8);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x3full))));
}
B751dbb:{NFSU2_TR(0x751dbb);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B751dbd:{NFSU2_TR(0x751dbd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L751e4d;}}
}
B751dc3:L751dc3:{c.instructions+=1;NFSU2_TR(0x751dc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B751dc9:L751dc9:{c.instructions+=7;NFSU2_TR(0x751dc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B751dcf:{NFSU2_TR(0x751dcf);
__builtin_memmove((R+4),(R+24),4);
}
B751dd1:{NFSU2_TR(0x751dd1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B751dd5:{NFSU2_TR(0x751dd5);
__builtin_memmove((R+0),(R+4),4);
}
B751dd7:{NFSU2_TR(0x751dd7);
w4(R+20,u32(u32(r4(R+20))+u32(r4(R+28))));
}
B751dd9:{NFSU2_TR(0x751dd9);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B751ddc:{NFSU2_TR(0x751ddc);
__builtin_memmove((R+28),(R+20),4);
}
B751dde:L751dde:{c.instructions+=1;NFSU2_TR(0x751dde);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L751de0;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x751ddeu);}goto L751dde;}
}
B751de0:L751de0:{c.instructions+=2;NFSU2_TR(0x751de0);
__builtin_memmove((R+4),(R+0),4);
}
B751de2:{NFSU2_TR(0x751de2);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B751de5:L751de5:{c.instructions+=1;NFSU2_TR(0x751de5);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L751de7;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x751de5u);}goto L751de5;}
}
B751de7:L751de7:{c.instructions+=15;NFSU2_TR(0x751de7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B751ded:{NFSU2_TR(0x751ded);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B751df3:{NFSU2_TR(0x751df3);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B751df5:{NFSU2_TR(0x751df5);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B751df6:{NFSU2_TR(0x751df6);
u8 U[64];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(s64(s32(r4(U+4)))));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x751df6);w8(U+48,u64(x_/y_));}
w4(R+0,u32(r8(U+48)));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x751df6);w8(U+56,u64(x_%y_));}
w4(R+8,u32(r8(U+56)));
}
B751dfc:{NFSU2_TR(0x751dfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B751e02:{NFSU2_TR(0x751e02);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B751e05:{NFSU2_TR(0x751e05);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B751e06:{NFSU2_TR(0x751e06);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B751e0c:{NFSU2_TR(0x751e0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B751e12:{NFSU2_TR(0x751e12);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x210ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B751e18:{NFSU2_TR(0x751e18);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x1ull))));
}
B751e1b:{NFSU2_TR(0x751e1b);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B751e1d:{NFSU2_TR(0x751e1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x210ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B751e23:{NFSU2_TR(0x751e23);
if(r1(R+518)){{goto L751e37;}}
}
B751e25:L751e25:{c.instructions+=8;NFSU2_TR(0x751e25);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+8),(U+0),4);
}
B751e28:{NFSU2_TR(0x751e28);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B751e2b:{NFSU2_TR(0x751e2b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751e2c:{NFSU2_TR(0x751e2c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751e2d:{NFSU2_TR(0x751e2d);
u8 U[6];
w1(R+512,carry<u32>(r4(R+20),u32(0x9ull)));
w1(R+523,scarry<u32>(r4(R+20),u32(0x9ull)));
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x9ull))));
w1(R+519,u8(s32(r4(R+20))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+20))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B751e30:{NFSU2_TR(0x751e30);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751e31:{NFSU2_TR(0x751e31);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751e32:{NFSU2_TR(0x751e32);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x751e34ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B751e34:L751e34:{c.instructions+=1;NFSU2_TR(0x751e34);
w1(R+512,carry<u32>(r4(R+16),u32(0x10ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B751e37:L751e37:{c.instructions+=8;NFSU2_TR(0x751e37);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B751e3d:{NFSU2_TR(0x751e3d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B751e3e:{NFSU2_TR(0x751e3e);
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
B751e3f:{NFSU2_TR(0x751e3f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B751e40:{NFSU2_TR(0x751e40);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B751e46:{NFSU2_TR(0x751e46);
w4(R+0,u32(0x1ull));
}
B751e4b:{NFSU2_TR(0x751e4b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B751e4c:{NFSU2_TR(0x751e4c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B751e4d:L751e4d:{c.instructions+=8;NFSU2_TR(0x751e4d);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B751e4f:{NFSU2_TR(0x751e4f);
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
B751e51:{NFSU2_TR(0x751e51);
__builtin_memmove((R+8),(R+518),1);
}
B751e54:{NFSU2_TR(0x751e54);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B751e55:{NFSU2_TR(0x751e55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B751e56:{NFSU2_TR(0x751e56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B751e57:{NFSU2_TR(0x751e57);
__builtin_memmove((R+0),(R+8),4);
}
B751e59:{NFSU2_TR(0x751e59);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B751e60:L751e60:{c.instructions+=10;NFSU2_TR(0x751e60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B751e63:{NFSU2_TR(0x751e63);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B751e68:{NFSU2_TR(0x751e68);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751e69:{NFSU2_TR(0x751e69);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751e6a:{NFSU2_TR(0x751e6a);
__builtin_memmove((R+24),(R+4),4);
}
B751e6c:{NFSU2_TR(0x751e6c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B751e70:{NFSU2_TR(0x751e70);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B751e76:{NFSU2_TR(0x751e76);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B751e78:{NFSU2_TR(0x751e78);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B751e7b:{NFSU2_TR(0x751e7b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L751fae;}}
}
B751e81:L751e81:{c.instructions+=2;NFSU2_TR(0x751e81);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751e82:{NFSU2_TR(0x751e82);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751e83:L751e83:{c.instructions+=2;NFSU2_TR(0x751e83);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x3ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B751e8a:{NFSU2_TR(0x751e8a);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L751fac;}}
}
B751e90:L751e90:{c.instructions+=2;NFSU2_TR(0x751e90);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B751e92:{NFSU2_TR(0x751e92);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L751fac;}}
}
B751e98:L751e98:{c.instructions+=16;NFSU2_TR(0x751e98);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B751e9e:{NFSU2_TR(0x751e9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B751ea4:{NFSU2_TR(0x751ea4);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B751ea8:{NFSU2_TR(0x751ea8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751ea9:{NFSU2_TR(0x751ea9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B751eac:{NFSU2_TR(0x751eac);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B751eb0:{NFSU2_TR(0x751eb0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751eb1:{NFSU2_TR(0x751eb1);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B751eb3:{NFSU2_TR(0x751eb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B751eb9:{NFSU2_TR(0x751eb9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751ebb:{NFSU2_TR(0x751ebb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751ebc:{NFSU2_TR(0x751ebc);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((R+20),(U+0),4);
}
B751ebf:{NFSU2_TR(0x751ebf);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751ec0:{NFSU2_TR(0x751ec0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751ec1:{NFSU2_TR(0x751ec1);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x10ull));
s4(u32(r4(U+0)),r4(U+4));
}
B751ec9:{NFSU2_TR(0x751ec9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x751eceull));
TAIL_STATIC(0x74a6d0u,74a);
}
B751ece:L751ece:{c.instructions+=3;NFSU2_TR(0x751ece);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B751ed1:{NFSU2_TR(0x751ed1);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B751ed3:{NFSU2_TR(0x751ed3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L751fa0;}}
}
B751ed9:L751ed9:{c.instructions+=15;NFSU2_TR(0x751ed9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B751edc:{NFSU2_TR(0x751edc);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B751ee1:{NFSU2_TR(0x751ee1);
u8 U[5];
w4(U+0,u32(u32(u32(0x1dull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B751ee6:{NFSU2_TR(0x751ee6);
u8 U[5];
w4(U+0,u32(u32(u32(0x1eull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B751eeb:{NFSU2_TR(0x751eeb);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B751eee:{NFSU2_TR(0x751eee);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+8))));
}
B751ef0:{NFSU2_TR(0x751ef0);
u8 U[5];
w4(U+0,u32(u32(u32(0x1full))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B751ef5:{NFSU2_TR(0x751ef5);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B751ef8:{NFSU2_TR(0x751ef8);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+0))));
}
B751efa:{NFSU2_TR(0x751efa);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+20))),1);
__builtin_memmove((R+0),(U+0),1);
}
B751efd:{NFSU2_TR(0x751efd);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B751f00:{NFSU2_TR(0x751f00);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+8))));
}
B751f02:{NFSU2_TR(0x751f02);
w1(R+512,u8((r1(R+0))<(u8(0x10ull))));
}
B751f04:{NFSU2_TR(0x751f04);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+28)),r4(U+0));
}
B751f06:{NFSU2_TR(0x751f06);
if(r1(R+512)){{goto L751f1a;}}
}
B751f08:L751f08:{c.instructions+=2;NFSU2_TR(0x751f08);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0x3full))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0x3full)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0x3full))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B751f0a:{NFSU2_TR(0x751f0a);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L751f1a;}}
}
B751f0c:L751f0c:{c.instructions+=4;NFSU2_TR(0x751f0c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751f0d:{NFSU2_TR(0x751f0d);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B751f11:{NFSU2_TR(0x751f11);
__builtin_memmove((R+0),(R+24),4);
}
B751f13:{NFSU2_TR(0x751f13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x751f18ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x751c50u);}goto L751c50;}
}
B751f18:L751f18:{c.instructions+=1;NFSU2_TR(0x751f18);
{goto L751f7f;}
}
B751f1a:L751f1a:{c.instructions+=2;NFSU2_TR(0x751f1a);
w1(R+512,u8((r1(R+0))<(u8(0xc0ull))));
}
B751f1c:{NFSU2_TR(0x751f1c);
if(r1(R+512)){{goto L751f58;}}
}
B751f1e:L751f1e:{c.instructions+=8;NFSU2_TR(0x751f1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B751f24:{NFSU2_TR(0x751f24);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B751f2a:{NFSU2_TR(0x751f2a);
u8 U[13];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+8,u32(r1(U+12)));
}
B751f2f:{NFSU2_TR(0x751f2f);
w4(R+0,u32(r1(R+0)));
}
B751f32:{NFSU2_TR(0x751f32);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x80ull))));
}
B751f38:{NFSU2_TR(0x751f38);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0xc0ull))));
}
B751f3d:{NFSU2_TR(0x751f3d);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B751f3f:{NFSU2_TR(0x751f3f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L751f82;}}
}
B751f41:L751f41:{c.instructions+=6;NFSU2_TR(0x751f41);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B751f47:{NFSU2_TR(0x751f47);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B751f49:{NFSU2_TR(0x751f49);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B751f4a:{NFSU2_TR(0x751f4a);
u8 U[64];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(s64(s32(r4(U+4)))));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x751f4a);w8(U+48,u64(x_/y_));}
w4(R+0,u32(r8(U+48)));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x751f4a);w8(U+56,u64(x_%y_));}
w4(R+8,u32(r8(U+56)));
}
B751f50:{NFSU2_TR(0x751f50);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B751f56:{NFSU2_TR(0x751f56);
{goto L751f82;}
}
B751f58:L751f58:{c.instructions+=3;NFSU2_TR(0x751f58);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751f59:{NFSU2_TR(0x751f59);
__builtin_memmove((R+12),(R+24),4);
}
B751f5b:{NFSU2_TR(0x751f5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x751f60ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x751d30u);}goto L751d30;}
}
B751f60:L751f60:{c.instructions+=4;NFSU2_TR(0x751f60);
__builtin_memmove((R+12),(R+0),4);
}
B751f62:{NFSU2_TR(0x751f62);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B751f65:{NFSU2_TR(0x751f65);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B751f68:{NFSU2_TR(0x751f68);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L751f82;}}
}
B751f6a:L751f6a:{c.instructions+=4;NFSU2_TR(0x751f6a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B751f6c:{NFSU2_TR(0x751f6c);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+20))),1);
__builtin_memmove((R+0),(U+0),1);
}
B751f6f:{NFSU2_TR(0x751f6f);
w1(R+512,u8((r1(R+0))<(u8(0x80ull))));
}
B751f71:{NFSU2_TR(0x751f71);
if(r1(R+512)){{goto L751f82;}}
}
B751f73:L751f73:{c.instructions+=2;NFSU2_TR(0x751f73);
w1(R+512,u8((r1(R+0))<(u8(0xc0ull))));
}
B751f75:{NFSU2_TR(0x751f75);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L751f82;}}
}
B751f77:L751f77:{c.instructions+=3;NFSU2_TR(0x751f77);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x40ull))));
}
B751f79:{NFSU2_TR(0x751f79);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751f7a:{NFSU2_TR(0x751f7a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x751f7full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x751b60u);}goto L751b60;}
}
B751f7f:L751f7f:{c.instructions+=1;NFSU2_TR(0x751f7f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B751f82:L751f82:{c.instructions+=2;NFSU2_TR(0x751f82);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x1ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B751f89:{NFSU2_TR(0x751f89);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x751e83u);}goto L751e83;}}
}
B751f8f:L751f8f:{c.instructions+=6;NFSU2_TR(0x751f8f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B751f90:{NFSU2_TR(0x751f90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B751f91:{NFSU2_TR(0x751f91);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B751f92:{NFSU2_TR(0x751f92);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B751f93:{NFSU2_TR(0x751f93);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B751f97:{NFSU2_TR(0x751f97);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x751f9cull));
TAIL_STATIC(0x76115eu,761);
}
B751f9c:L751f9c:{c.instructions+=2;NFSU2_TR(0x751f9c);
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
B751f9f:{NFSU2_TR(0x751f9f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B751fa0:L751fa0:{c.instructions+=1;NFSU2_TR(0x751fa0);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L751fac;}}
}
B751fa2:L751fa2:{c.instructions+=1;NFSU2_TR(0x751fa2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B751fac:L751fac:{c.instructions+=2;NFSU2_TR(0x751fac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B751fad:{NFSU2_TR(0x751fad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B751fae:L751fae:{c.instructions+=4;NFSU2_TR(0x751fae);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B751fb2:{NFSU2_TR(0x751fb2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B751fb3:{NFSU2_TR(0x751fb3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B751fb4:{NFSU2_TR(0x751fb4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x751fb9ull));
TAIL_STATIC(0x76115eu,761);
}
B751fb9:L751fb9:{c.instructions+=2;NFSU2_TR(0x751fb9);
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
B751fbc:{NFSU2_TR(0x751fbc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B751fc0:L751fc0:{c.instructions+=5;NFSU2_TR(0x751fc0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751fc1:{NFSU2_TR(0x751fc1);
__builtin_memmove((R+24),(R+0),4);
}
B751fc3:{NFSU2_TR(0x751fc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B751fc9:{NFSU2_TR(0x751fc9);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B751fcc:{NFSU2_TR(0x751fcc);
if(r1(R+518)){{goto L751fd3;}}
}
B751fce:L751fce:{c.instructions+=2;NFSU2_TR(0x751fce);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B751fd1:{NFSU2_TR(0x751fd1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L751fda;}}
}
B751fd3:L751fd3:{c.instructions+=2;NFSU2_TR(0x751fd3);
__builtin_memmove((R+0),(R+24),4);
}
B751fd5:{NFSU2_TR(0x751fd5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x751fdaull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x751bd0u);}goto L751bd0;}
}
B751fda:L751fda:{c.instructions+=3;NFSU2_TR(0x751fda);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B751fdb:{NFSU2_TR(0x751fdb);
__builtin_memmove((R+4),(R+24),4);
}
B751fdd:{NFSU2_TR(0x751fdd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x751fe2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x751e60u);}goto L751e60;}
}
B751fe2:L751fe2:{c.instructions+=4;NFSU2_TR(0x751fe2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B751fe8:{NFSU2_TR(0x751fe8);
w4(R+28,u32(0x3ull));
}
B751fed:{NFSU2_TR(0x751fed);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B751fef:{NFSU2_TR(0x751fef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x752065u,752);}
}
B751ff1:L751ff1:{c.instructions+=3;NFSU2_TR(0x751ff1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B751ff7:{NFSU2_TR(0x751ff7);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
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
B751ffd:{NFSU2_TR(0x751ffd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x75201eu,752);}
}
B751fff:L751fff:{c.instructions+=1;NFSU2_TR(0x751fff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x752004ull));
TAIL_STATIC(0x74b730u,74b);
}
XIT:NFSU2_TR_EXIT(0x751,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
