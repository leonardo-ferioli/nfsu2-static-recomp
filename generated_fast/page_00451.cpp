#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_40c(u8* __restrict R,Cpu& c);
u32 body_432(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_441(u8* __restrict R,Cpu& c);
u32 body_442(u8* __restrict R,Cpu& c);
u32 body_443(u8* __restrict R,Cpu& c);
u32 body_444(u8* __restrict R,Cpu& c);
u32 body_446(u8* __restrict R,Cpu& c);
u32 body_447(u8* __restrict R,Cpu& c);
u32 body_44a(u8* __restrict R,Cpu& c);
u32 body_44b(u8* __restrict R,Cpu& c);
u32 body_44c(u8* __restrict R,Cpu& c);
u32 body_44d(u8* __restrict R,Cpu& c);
u32 body_44e(u8* __restrict R,Cpu& c);
u32 body_44f(u8* __restrict R,Cpu& c);
u32 body_450(u8* __restrict R,Cpu& c);
u32 body_452(u8* __restrict R,Cpu& c);
u32 body_574(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_579(u8* __restrict R,Cpu& c);
u32 body_5ba(u8* __restrict R,Cpu& c);
u32 body_5d7(u8* __restrict R,Cpu& c);
u32 body_5ec(u8* __restrict R,Cpu& c);
u32 body_5fb(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x451,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x451,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_451(u8* __restrict R,Cpu& c);
u32 page_451(Cpu& c){return body_451(c.regs.data(),c);}
__attribute__((noinline)) u32 body_451(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x451000:goto L451000;
case 0x451006:goto L451006;
case 0x45100c:c.instructions+=11;goto B45100c;
case 0x45100e:c.instructions+=10;goto B45100e;
case 0x451012:c.instructions+=9;goto B451012;
case 0x451013:c.instructions+=8;goto B451013;
case 0x451017:c.instructions+=7;goto B451017;
case 0x451018:c.instructions+=6;goto B451018;
case 0x45101a:c.instructions+=5;goto B45101a;
case 0x45101b:c.instructions+=4;goto B45101b;
case 0x45101d:c.instructions+=3;goto B45101d;
case 0x451025:c.instructions+=2;goto B451025;
case 0x45102d:c.instructions+=1;goto B45102d;
case 0x451032:goto L451032;
case 0x451036:c.instructions+=8;goto B451036;
case 0x45103a:c.instructions+=7;goto B45103a;
case 0x45103b:c.instructions+=6;goto B45103b;
case 0x45103f:c.instructions+=5;goto B45103f;
case 0x451041:c.instructions+=4;goto B451041;
case 0x451045:c.instructions+=3;goto B451045;
case 0x451047:c.instructions+=2;goto B451047;
case 0x45104a:c.instructions+=1;goto B45104a;
case 0x45104f:goto L45104f;
case 0x451050:c.instructions+=1;goto B451050;
case 0x451055:goto L451055;
case 0x451057:c.instructions+=3;goto B451057;
case 0x45105a:c.instructions+=2;goto B45105a;
case 0x45105d:c.instructions+=1;goto B45105d;
case 0x451062:goto L451062;
case 0x451064:c.instructions+=2;goto B451064;
case 0x451067:c.instructions+=1;goto B451067;
case 0x45106c:goto L45106c;
case 0x45106e:c.instructions+=2;goto B45106e;
case 0x451071:c.instructions+=1;goto B451071;
case 0x451076:goto L451076;
case 0x451078:c.instructions+=2;goto B451078;
case 0x45107b:c.instructions+=1;goto B45107b;
case 0x451080:goto L451080;
case 0x451082:c.instructions+=2;goto B451082;
case 0x451085:c.instructions+=1;goto B451085;
case 0x45108a:goto L45108a;
case 0x45108c:c.instructions+=2;goto B45108c;
case 0x45108f:c.instructions+=1;goto B45108f;
case 0x451094:goto L451094;
case 0x451096:c.instructions+=2;goto B451096;
case 0x451099:c.instructions+=1;goto B451099;
case 0x45109e:goto L45109e;
case 0x4510a0:c.instructions+=2;goto B4510a0;
case 0x4510a3:c.instructions+=1;goto B4510a3;
case 0x4510a8:goto L4510a8;
case 0x4510aa:goto L4510aa;
case 0x4510ab:c.instructions+=3;goto B4510ab;
case 0x4510ac:c.instructions+=2;goto B4510ac;
case 0x4510af:c.instructions+=1;goto B4510af;
case 0x4510c0:goto L4510c0;
case 0x4510c1:c.instructions+=2;goto B4510c1;
case 0x4510c3:c.instructions+=1;goto B4510c3;
case 0x4510c8:goto L4510c8;
case 0x4510cd:c.instructions+=1;goto B4510cd;
case 0x4510cf:goto L4510cf;
case 0x4510d0:c.instructions+=1;goto B4510d0;
case 0x4510d5:goto L4510d5;
case 0x4510d8:goto L4510d8;
case 0x4510da:c.instructions+=2;goto B4510da;
case 0x4510db:c.instructions+=1;goto B4510db;
case 0x4510e0:goto L4510e0;
case 0x4510e1:c.instructions+=2;goto B4510e1;
case 0x4510e3:c.instructions+=1;goto B4510e3;
case 0x4510e8:goto L4510e8;
case 0x4510ed:c.instructions+=1;goto B4510ed;
case 0x4510ef:goto L4510ef;
case 0x4510f0:c.instructions+=1;goto B4510f0;
case 0x4510f5:goto L4510f5;
case 0x4510f8:goto L4510f8;
case 0x4510fa:c.instructions+=2;goto B4510fa;
case 0x4510fb:c.instructions+=1;goto B4510fb;
case 0x451100:goto L451100;
case 0x451101:c.instructions+=4;goto B451101;
case 0x451103:c.instructions+=3;goto B451103;
case 0x451109:c.instructions+=2;goto B451109;
case 0x45110b:c.instructions+=1;goto B45110b;
case 0x451111:goto L451111;
case 0x451117:c.instructions+=5;goto B451117;
case 0x451118:c.instructions+=4;goto B451118;
case 0x45111d:c.instructions+=3;goto B45111d;
case 0x45111f:c.instructions+=2;goto B45111f;
case 0x451120:c.instructions+=1;goto B451120;
case 0x451125:goto L451125;
case 0x45112b:c.instructions+=5;goto B45112b;
case 0x45112c:c.instructions+=4;goto B45112c;
case 0x451131:c.instructions+=3;goto B451131;
case 0x451133:c.instructions+=2;goto B451133;
case 0x451134:c.instructions+=1;goto B451134;
case 0x451139:goto L451139;
case 0x45113f:c.instructions+=5;goto B45113f;
case 0x451140:c.instructions+=4;goto B451140;
case 0x451145:c.instructions+=3;goto B451145;
case 0x451147:c.instructions+=2;goto B451147;
case 0x451148:c.instructions+=1;goto B451148;
case 0x45114d:goto L45114d;
case 0x451153:c.instructions+=5;goto B451153;
case 0x451154:c.instructions+=4;goto B451154;
case 0x451159:c.instructions+=3;goto B451159;
case 0x45115b:c.instructions+=2;goto B45115b;
case 0x45115c:c.instructions+=1;goto B45115c;
case 0x451161:goto L451161;
case 0x451167:c.instructions+=6;goto B451167;
case 0x45116a:c.instructions+=5;goto B45116a;
case 0x45116b:c.instructions+=4;goto B45116b;
case 0x451170:c.instructions+=3;goto B451170;
case 0x451172:c.instructions+=2;goto B451172;
case 0x451173:c.instructions+=1;goto B451173;
case 0x451178:goto L451178;
case 0x45117e:c.instructions+=5;goto B45117e;
case 0x45117f:c.instructions+=4;goto B45117f;
case 0x451184:c.instructions+=3;goto B451184;
case 0x451186:c.instructions+=2;goto B451186;
case 0x451187:c.instructions+=1;goto B451187;
case 0x45118c:goto L45118c;
case 0x451192:c.instructions+=5;goto B451192;
case 0x451193:c.instructions+=4;goto B451193;
case 0x451198:c.instructions+=3;goto B451198;
case 0x45119a:c.instructions+=2;goto B45119a;
case 0x45119b:c.instructions+=1;goto B45119b;
case 0x4511a0:goto L4511a0;
case 0x4511a6:c.instructions+=5;goto B4511a6;
case 0x4511a7:c.instructions+=4;goto B4511a7;
case 0x4511ac:c.instructions+=3;goto B4511ac;
case 0x4511ae:c.instructions+=2;goto B4511ae;
case 0x4511af:c.instructions+=1;goto B4511af;
case 0x4511b4:goto L4511b4;
case 0x4511ba:c.instructions+=6;goto B4511ba;
case 0x4511bd:c.instructions+=5;goto B4511bd;
case 0x4511be:c.instructions+=4;goto B4511be;
case 0x4511c3:c.instructions+=3;goto B4511c3;
case 0x4511c5:c.instructions+=2;goto B4511c5;
case 0x4511c6:c.instructions+=1;goto B4511c6;
case 0x4511cb:goto L4511cb;
case 0x4511ce:c.instructions+=1;goto B4511ce;
case 0x4511d8:goto L4511d8;
case 0x4511d9:c.instructions+=1;goto B4511d9;
case 0x4511e0:goto L4511e0;
case 0x4511e1:c.instructions+=2;goto B4511e1;
case 0x4511e3:c.instructions+=1;goto B4511e3;
case 0x4511e8:goto L4511e8;
case 0x4511ed:c.instructions+=1;goto B4511ed;
case 0x4511ef:goto L4511ef;
case 0x4511f0:c.instructions+=1;goto B4511f0;
case 0x4511f5:goto L4511f5;
case 0x4511f8:goto L4511f8;
case 0x4511fa:c.instructions+=2;goto B4511fa;
case 0x4511fb:c.instructions+=1;goto B4511fb;
case 0x451200:goto L451200;
case 0x451207:c.instructions+=45;goto B451207;
case 0x45120d:c.instructions+=44;goto B45120d;
case 0x451213:c.instructions+=43;goto B451213;
case 0x451219:c.instructions+=42;goto B451219;
case 0x45121f:c.instructions+=41;goto B45121f;
case 0x451225:c.instructions+=40;goto B451225;
case 0x45122b:c.instructions+=39;goto B45122b;
case 0x45122d:c.instructions+=38;goto B45122d;
case 0x451233:c.instructions+=37;goto B451233;
case 0x451239:c.instructions+=36;goto B451239;
case 0x45123f:c.instructions+=35;goto B45123f;
case 0x451245:c.instructions+=34;goto B451245;
case 0x45124b:c.instructions+=33;goto B45124b;
case 0x451251:c.instructions+=32;goto B451251;
case 0x451253:c.instructions+=31;goto B451253;
case 0x451259:c.instructions+=30;goto B451259;
case 0x45125f:c.instructions+=29;goto B45125f;
case 0x451265:c.instructions+=28;goto B451265;
case 0x45126b:c.instructions+=27;goto B45126b;
case 0x451271:c.instructions+=26;goto B451271;
case 0x451277:c.instructions+=25;goto B451277;
case 0x45127d:c.instructions+=24;goto B45127d;
case 0x451281:c.instructions+=23;goto B451281;
case 0x451287:c.instructions+=22;goto B451287;
case 0x45128b:c.instructions+=21;goto B45128b;
case 0x451291:c.instructions+=20;goto B451291;
case 0x451295:c.instructions+=19;goto B451295;
case 0x45129b:c.instructions+=18;goto B45129b;
case 0x45129f:c.instructions+=17;goto B45129f;
case 0x4512a5:c.instructions+=16;goto B4512a5;
case 0x4512a9:c.instructions+=15;goto B4512a9;
case 0x4512af:c.instructions+=14;goto B4512af;
case 0x4512b3:c.instructions+=13;goto B4512b3;
case 0x4512b9:c.instructions+=12;goto B4512b9;
case 0x4512bd:c.instructions+=11;goto B4512bd;
case 0x4512c3:c.instructions+=10;goto B4512c3;
case 0x4512c7:c.instructions+=9;goto B4512c7;
case 0x4512cd:c.instructions+=8;goto B4512cd;
case 0x4512d1:c.instructions+=7;goto B4512d1;
case 0x4512d7:c.instructions+=6;goto B4512d7;
case 0x4512db:c.instructions+=5;goto B4512db;
case 0x4512e1:c.instructions+=4;goto B4512e1;
case 0x4512e5:c.instructions+=3;goto B4512e5;
case 0x4512e6:c.instructions+=2;goto B4512e6;
case 0x4512e7:c.instructions+=1;goto B4512e7;
case 0x4512ec:goto L4512ec;
case 0x4512f0:goto L4512f0;
case 0x4512f1:c.instructions+=2;goto B4512f1;
case 0x4512f3:c.instructions+=1;goto B4512f3;
case 0x4512f8:goto L4512f8;
case 0x4512fd:c.instructions+=1;goto B4512fd;
case 0x4512ff:goto L4512ff;
case 0x451300:c.instructions+=1;goto B451300;
case 0x451305:goto L451305;
case 0x451308:goto L451308;
case 0x45130a:c.instructions+=2;goto B45130a;
case 0x45130b:c.instructions+=1;goto B45130b;
case 0x451310:goto L451310;
case 0x451311:c.instructions+=16;goto B451311;
case 0x451313:c.instructions+=15;goto B451313;
case 0x451316:c.instructions+=14;goto B451316;
case 0x451319:c.instructions+=13;goto B451319;
case 0x45131a:c.instructions+=12;goto B45131a;
case 0x45131d:c.instructions+=11;goto B45131d;
case 0x451320:c.instructions+=10;goto B451320;
case 0x451324:c.instructions+=9;goto B451324;
case 0x451325:c.instructions+=8;goto B451325;
case 0x451329:c.instructions+=7;goto B451329;
case 0x45132a:c.instructions+=6;goto B45132a;
case 0x45132e:c.instructions+=5;goto B45132e;
case 0x451334:c.instructions+=4;goto B451334;
case 0x451337:c.instructions+=3;goto B451337;
case 0x451338:c.instructions+=2;goto B451338;
case 0x45133d:c.instructions+=1;goto B45133d;
case 0x451342:goto L451342;
case 0x451345:c.instructions+=3;goto B451345;
case 0x451348:c.instructions+=2;goto B451348;
case 0x45134b:c.instructions+=1;goto B45134b;
case 0x451351:goto L451351;
case 0x451358:goto L451358;
case 0x45135b:c.instructions+=9;goto B45135b;
case 0x45135d:c.instructions+=8;goto B45135d;
case 0x45135f:c.instructions+=7;goto B45135f;
case 0x451365:c.instructions+=6;goto B451365;
case 0x451369:c.instructions+=5;goto B451369;
case 0x45136a:c.instructions+=4;goto B45136a;
case 0x45136b:c.instructions+=3;goto B45136b;
case 0x45136d:c.instructions+=2;goto B45136d;
case 0x45136e:c.instructions+=1;goto B45136e;
case 0x45136f:goto L45136f;
case 0x451372:c.instructions+=9;goto B451372;
case 0x451374:c.instructions+=8;goto B451374;
case 0x451376:c.instructions+=7;goto B451376;
case 0x45137c:c.instructions+=6;goto B45137c;
case 0x451380:c.instructions+=5;goto B451380;
case 0x451381:c.instructions+=4;goto B451381;
case 0x451382:c.instructions+=3;goto B451382;
case 0x451384:c.instructions+=2;goto B451384;
case 0x451385:c.instructions+=1;goto B451385;
case 0x451386:goto L451386;
case 0x45138c:c.instructions+=3;goto B45138c;
case 0x45138e:c.instructions+=2;goto B45138e;
case 0x451392:c.instructions+=1;goto B451392;
case 0x451397:goto L451397;
case 0x45139a:c.instructions+=6;goto B45139a;
case 0x45139e:c.instructions+=5;goto B45139e;
case 0x45139f:c.instructions+=4;goto B45139f;
case 0x4513a0:c.instructions+=3;goto B4513a0;
case 0x4513a2:c.instructions+=2;goto B4513a2;
case 0x4513a3:c.instructions+=1;goto B4513a3;
case 0x4513a4:goto L4513a4;
case 0x4513a7:c.instructions+=9;goto B4513a7;
case 0x4513a9:c.instructions+=8;goto B4513a9;
case 0x4513ab:c.instructions+=7;goto B4513ab;
case 0x4513b1:c.instructions+=6;goto B4513b1;
case 0x4513b5:c.instructions+=5;goto B4513b5;
case 0x4513b6:c.instructions+=4;goto B4513b6;
case 0x4513b7:c.instructions+=3;goto B4513b7;
case 0x4513b9:c.instructions+=2;goto B4513b9;
case 0x4513ba:c.instructions+=1;goto B4513ba;
case 0x4513bb:goto L4513bb;
case 0x4513be:c.instructions+=9;goto B4513be;
case 0x4513c0:c.instructions+=8;goto B4513c0;
case 0x4513c2:c.instructions+=7;goto B4513c2;
case 0x4513c8:c.instructions+=6;goto B4513c8;
case 0x4513cc:c.instructions+=5;goto B4513cc;
case 0x4513cd:c.instructions+=4;goto B4513cd;
case 0x4513ce:c.instructions+=3;goto B4513ce;
case 0x4513d0:c.instructions+=2;goto B4513d0;
case 0x4513d1:c.instructions+=1;goto B4513d1;
case 0x4513d2:goto L4513d2;
case 0x4513d8:c.instructions+=2;goto B4513d8;
case 0x4513dc:c.instructions+=1;goto B4513dc;
case 0x4513e1:goto L4513e1;
case 0x4513e4:c.instructions+=6;goto B4513e4;
case 0x4513e8:c.instructions+=5;goto B4513e8;
case 0x4513e9:c.instructions+=4;goto B4513e9;
case 0x4513ea:c.instructions+=3;goto B4513ea;
case 0x4513ec:c.instructions+=2;goto B4513ec;
case 0x4513ed:c.instructions+=1;goto B4513ed;
case 0x4513ee:goto L4513ee;
case 0x4513f0:c.instructions+=1;goto B4513f0;
case 0x4513f2:goto L4513f2;
case 0x4513f8:c.instructions+=8;goto B4513f8;
case 0x4513fb:c.instructions+=7;goto B4513fb;
case 0x451401:c.instructions+=6;goto B451401;
case 0x451404:c.instructions+=5;goto B451404;
case 0x451405:c.instructions+=4;goto B451405;
case 0x451406:c.instructions+=3;goto B451406;
case 0x451408:c.instructions+=2;goto B451408;
case 0x451409:c.instructions+=1;goto B451409;
case 0x45140a:goto L45140a;
case 0x45140d:c.instructions+=6;goto B45140d;
case 0x451414:c.instructions+=5;goto B451414;
case 0x451415:c.instructions+=4;goto B451415;
case 0x451416:c.instructions+=3;goto B451416;
case 0x451418:c.instructions+=2;goto B451418;
case 0x451419:c.instructions+=1;goto B451419;
case 0x45141a:goto L45141a;
case 0x45141c:c.instructions+=1;goto B45141c;
case 0x45141e:goto L45141e;
case 0x451424:c.instructions+=8;goto B451424;
case 0x451427:c.instructions+=7;goto B451427;
case 0x45142d:c.instructions+=6;goto B45142d;
case 0x451430:c.instructions+=5;goto B451430;
case 0x451431:c.instructions+=4;goto B451431;
case 0x451432:c.instructions+=3;goto B451432;
case 0x451434:c.instructions+=2;goto B451434;
case 0x451435:c.instructions+=1;goto B451435;
case 0x451436:goto L451436;
case 0x451439:c.instructions+=6;goto B451439;
case 0x451440:c.instructions+=5;goto B451440;
case 0x451441:c.instructions+=4;goto B451441;
case 0x451442:c.instructions+=3;goto B451442;
case 0x451444:c.instructions+=2;goto B451444;
case 0x451445:c.instructions+=1;goto B451445;
case 0x451446:goto L451446;
case 0x451448:c.instructions+=2;goto B451448;
case 0x45144b:c.instructions+=1;goto B45144b;
case 0x45144d:goto L45144d;
case 0x451453:c.instructions+=7;goto B451453;
case 0x45145a:c.instructions+=6;goto B45145a;
case 0x45145d:c.instructions+=5;goto B45145d;
case 0x45145e:c.instructions+=4;goto B45145e;
case 0x45145f:c.instructions+=3;goto B45145f;
case 0x451461:c.instructions+=2;goto B451461;
case 0x451462:c.instructions+=1;goto B451462;
case 0x451463:goto L451463;
case 0x451465:c.instructions+=2;goto B451465;
case 0x451468:c.instructions+=1;goto B451468;
case 0x45146a:goto L45146a;
case 0x451470:c.instructions+=8;goto B451470;
case 0x451477:c.instructions+=7;goto B451477;
case 0x451479:c.instructions+=6;goto B451479;
case 0x45147c:c.instructions+=5;goto B45147c;
case 0x45147d:c.instructions+=4;goto B45147d;
case 0x45147e:c.instructions+=3;goto B45147e;
case 0x451480:c.instructions+=2;goto B451480;
case 0x451481:c.instructions+=1;goto B451481;
case 0x451482:goto L451482;
case 0x451484:c.instructions+=7;goto B451484;
case 0x451487:c.instructions+=6;goto B451487;
case 0x45148a:c.instructions+=5;goto B45148a;
case 0x45148b:c.instructions+=4;goto B45148b;
case 0x45148c:c.instructions+=3;goto B45148c;
case 0x45148e:c.instructions+=2;goto B45148e;
case 0x45148f:c.instructions+=1;goto B45148f;
case 0x451490:goto L451490;
case 0x451496:c.instructions+=9;goto B451496;
case 0x451499:c.instructions+=8;goto B451499;
case 0x45149b:c.instructions+=7;goto B45149b;
case 0x45149f:c.instructions+=6;goto B45149f;
case 0x4514a2:c.instructions+=5;goto B4514a2;
case 0x4514a3:c.instructions+=4;goto B4514a3;
case 0x4514a4:c.instructions+=3;goto B4514a4;
case 0x4514a6:c.instructions+=2;goto B4514a6;
case 0x4514a7:c.instructions+=1;goto B4514a7;
case 0x4514a8:goto L4514a8;
case 0x4514aa:c.instructions+=1;goto B4514aa;
case 0x4514ac:goto L4514ac;
case 0x4514b2:c.instructions+=7;goto B4514b2;
case 0x4514b5:c.instructions+=6;goto B4514b5;
case 0x4514b8:c.instructions+=5;goto B4514b8;
case 0x4514b9:c.instructions+=4;goto B4514b9;
case 0x4514ba:c.instructions+=3;goto B4514ba;
case 0x4514bc:c.instructions+=2;goto B4514bc;
case 0x4514bd:c.instructions+=1;goto B4514bd;
case 0x4514be:goto L4514be;
case 0x4514c1:c.instructions+=6;goto B4514c1;
case 0x4514c8:c.instructions+=5;goto B4514c8;
case 0x4514c9:c.instructions+=4;goto B4514c9;
case 0x4514ca:c.instructions+=3;goto B4514ca;
case 0x4514cc:c.instructions+=2;goto B4514cc;
case 0x4514cd:c.instructions+=1;goto B4514cd;
case 0x4514ce:goto L4514ce;
case 0x4514d0:c.instructions+=1;goto B4514d0;
case 0x4514d2:goto L4514d2;
case 0x4514d8:c.instructions+=8;goto B4514d8;
case 0x4514db:c.instructions+=7;goto B4514db;
case 0x4514dd:c.instructions+=6;goto B4514dd;
case 0x4514e0:c.instructions+=5;goto B4514e0;
case 0x4514e1:c.instructions+=4;goto B4514e1;
case 0x4514e2:c.instructions+=3;goto B4514e2;
case 0x4514e4:c.instructions+=2;goto B4514e4;
case 0x4514e5:c.instructions+=1;goto B4514e5;
case 0x4514e6:goto L4514e6;
case 0x4514e9:c.instructions+=6;goto B4514e9;
case 0x4514f0:c.instructions+=5;goto B4514f0;
case 0x4514f1:c.instructions+=4;goto B4514f1;
case 0x4514f2:c.instructions+=3;goto B4514f2;
case 0x4514f4:c.instructions+=2;goto B4514f4;
case 0x4514f5:c.instructions+=1;goto B4514f5;
case 0x4514f6:goto L4514f6;
case 0x4514fc:c.instructions+=9;goto B4514fc;
case 0x4514ff:c.instructions+=8;goto B4514ff;
case 0x451501:c.instructions+=7;goto B451501;
case 0x451505:c.instructions+=6;goto B451505;
case 0x451508:c.instructions+=5;goto B451508;
case 0x451509:c.instructions+=4;goto B451509;
case 0x45150a:c.instructions+=3;goto B45150a;
case 0x45150c:c.instructions+=2;goto B45150c;
case 0x45150d:c.instructions+=1;goto B45150d;
case 0x45150e:goto L45150e;
case 0x451510:c.instructions+=8;goto B451510;
case 0x451512:c.instructions+=7;goto B451512;
case 0x451515:c.instructions+=6;goto B451515;
case 0x45151a:c.instructions+=5;goto B45151a;
case 0x45151b:c.instructions+=4;goto B45151b;
case 0x45151c:c.instructions+=3;goto B45151c;
case 0x45151e:c.instructions+=2;goto B45151e;
case 0x45151f:c.instructions+=1;goto B45151f;
case 0x451520:goto L451520;
case 0x451522:c.instructions+=8;goto B451522;
case 0x451524:c.instructions+=7;goto B451524;
case 0x451527:c.instructions+=6;goto B451527;
case 0x45152d:c.instructions+=5;goto B45152d;
case 0x45152e:c.instructions+=4;goto B45152e;
case 0x45152f:c.instructions+=3;goto B45152f;
case 0x451531:c.instructions+=2;goto B451531;
case 0x451532:c.instructions+=1;goto B451532;
case 0x451533:goto L451533;
case 0x451535:c.instructions+=8;goto B451535;
case 0x451537:c.instructions+=7;goto B451537;
case 0x45153a:c.instructions+=6;goto B45153a;
case 0x451540:c.instructions+=5;goto B451540;
case 0x451541:c.instructions+=4;goto B451541;
case 0x451542:c.instructions+=3;goto B451542;
case 0x451544:c.instructions+=2;goto B451544;
case 0x451545:c.instructions+=1;goto B451545;
case 0x451546:goto L451546;
case 0x451548:c.instructions+=1;goto B451548;
case 0x45154d:goto L45154d;
case 0x451550:c.instructions+=5;goto B451550;
case 0x451551:c.instructions+=4;goto B451551;
case 0x451552:c.instructions+=3;goto B451552;
case 0x451554:c.instructions+=2;goto B451554;
case 0x451555:c.instructions+=1;goto B451555;
case 0x451556:goto L451556;
case 0x451558:c.instructions+=1;goto B451558;
case 0x45155d:goto L45155d;
case 0x451560:c.instructions+=5;goto B451560;
case 0x451561:c.instructions+=4;goto B451561;
case 0x451562:c.instructions+=3;goto B451562;
case 0x451564:c.instructions+=2;goto B451564;
case 0x451565:c.instructions+=1;goto B451565;
case 0x451566:goto L451566;
case 0x45156c:c.instructions+=2;goto B45156c;
case 0x45156e:c.instructions+=1;goto B45156e;
case 0x451570:goto L451570;
case 0x451576:c.instructions+=13;goto B451576;
case 0x45157a:c.instructions+=12;goto B45157a;
case 0x451580:c.instructions+=11;goto B451580;
case 0x451581:c.instructions+=10;goto B451581;
case 0x451585:c.instructions+=9;goto B451585;
case 0x451586:c.instructions+=8;goto B451586;
case 0x45158a:c.instructions+=7;goto B45158a;
case 0x451590:c.instructions+=6;goto B451590;
case 0x451596:c.instructions+=5;goto B451596;
case 0x45159a:c.instructions+=4;goto B45159a;
case 0x4515a0:c.instructions+=3;goto B4515a0;
case 0x4515a6:c.instructions+=2;goto B4515a6;
case 0x4515aa:c.instructions+=1;goto B4515aa;
case 0x4515af:goto L4515af;
case 0x4515b4:c.instructions+=6;goto B4515b4;
case 0x4515b8:c.instructions+=5;goto B4515b8;
case 0x4515b9:c.instructions+=4;goto B4515b9;
case 0x4515bd:c.instructions+=3;goto B4515bd;
case 0x4515c2:c.instructions+=2;goto B4515c2;
case 0x4515c3:c.instructions+=1;goto B4515c3;
case 0x4515c8:goto L4515c8;
case 0x4515cb:c.instructions+=7;goto B4515cb;
case 0x4515cd:c.instructions+=6;goto B4515cd;
case 0x4515cf:c.instructions+=5;goto B4515cf;
case 0x4515d1:c.instructions+=4;goto B4515d1;
case 0x4515d5:c.instructions+=3;goto B4515d5;
case 0x4515d6:c.instructions+=2;goto B4515d6;
case 0x4515d9:c.instructions+=1;goto B4515d9;
case 0x4515de:goto L4515de;
case 0x4515df:c.instructions+=4;goto B4515df;
case 0x4515e0:c.instructions+=3;goto B4515e0;
case 0x4515e2:c.instructions+=2;goto B4515e2;
case 0x4515e3:c.instructions+=1;goto B4515e3;
case 0x451640:goto L451640;
case 0x451641:c.instructions+=2;goto B451641;
case 0x451643:c.instructions+=1;goto B451643;
case 0x451648:goto L451648;
case 0x45164d:c.instructions+=1;goto B45164d;
case 0x45164f:goto L45164f;
case 0x451650:c.instructions+=1;goto B451650;
case 0x451655:goto L451655;
case 0x451658:goto L451658;
case 0x45165a:c.instructions+=2;goto B45165a;
case 0x45165b:c.instructions+=1;goto B45165b;
case 0x451660:goto L451660;
case 0x451661:c.instructions+=17;goto B451661;
case 0x451663:c.instructions+=16;goto B451663;
case 0x451666:c.instructions+=15;goto B451666;
case 0x451668:c.instructions+=14;goto B451668;
case 0x45166d:c.instructions+=13;goto B45166d;
case 0x451673:c.instructions+=12;goto B451673;
case 0x451674:c.instructions+=11;goto B451674;
case 0x45167b:c.instructions+=10;goto B45167b;
case 0x451681:c.instructions+=9;goto B451681;
case 0x451684:c.instructions+=8;goto B451684;
case 0x451685:c.instructions+=7;goto B451685;
case 0x451686:c.instructions+=6;goto B451686;
case 0x451687:c.instructions+=5;goto B451687;
case 0x451689:c.instructions+=4;goto B451689;
case 0x45168b:c.instructions+=3;goto B45168b;
case 0x45168c:c.instructions+=2;goto B45168c;
case 0x451690:c.instructions+=1;goto B451690;
case 0x451695:goto L451695;
case 0x451698:c.instructions+=27;goto B451698;
case 0x45169b:c.instructions+=26;goto B45169b;
case 0x45169e:c.instructions+=25;goto B45169e;
case 0x4516a1:c.instructions+=24;goto B4516a1;
case 0x4516a3:c.instructions+=23;goto B4516a3;
case 0x4516a5:c.instructions+=22;goto B4516a5;
case 0x4516a8:c.instructions+=21;goto B4516a8;
case 0x4516ab:c.instructions+=20;goto B4516ab;
case 0x4516ae:c.instructions+=19;goto B4516ae;
case 0x4516b1:c.instructions+=18;goto B4516b1;
case 0x4516b4:c.instructions+=17;goto B4516b4;
case 0x4516b7:c.instructions+=16;goto B4516b7;
case 0x4516bd:c.instructions+=15;goto B4516bd;
case 0x4516c3:c.instructions+=14;goto B4516c3;
case 0x4516c6:c.instructions+=13;goto B4516c6;
case 0x4516c9:c.instructions+=12;goto B4516c9;
case 0x4516cc:c.instructions+=11;goto B4516cc;
case 0x4516cf:c.instructions+=10;goto B4516cf;
case 0x4516d5:c.instructions+=9;goto B4516d5;
case 0x4516d8:c.instructions+=8;goto B4516d8;
case 0x4516d9:c.instructions+=7;goto B4516d9;
case 0x4516dd:c.instructions+=6;goto B4516dd;
case 0x4516de:c.instructions+=5;goto B4516de;
case 0x4516e1:c.instructions+=4;goto B4516e1;
case 0x4516e8:c.instructions+=3;goto B4516e8;
case 0x4516ef:c.instructions+=2;goto B4516ef;
case 0x4516f3:c.instructions+=1;goto B4516f3;
case 0x4516f8:goto L4516f8;
case 0x4516fa:c.instructions+=1;goto B4516fa;
case 0x4516ff:goto L4516ff;
case 0x451702:c.instructions+=2;goto B451702;
case 0x451704:c.instructions+=1;goto B451704;
case 0x451706:goto L451706;
case 0x45170a:c.instructions+=10;goto B45170a;
case 0x451710:c.instructions+=9;goto B451710;
case 0x451713:c.instructions+=8;goto B451713;
case 0x451715:c.instructions+=7;goto B451715;
case 0x451718:c.instructions+=6;goto B451718;
case 0x45171b:c.instructions+=5;goto B45171b;
case 0x45171e:c.instructions+=4;goto B45171e;
case 0x451721:c.instructions+=3;goto B451721;
case 0x451725:c.instructions+=2;goto B451725;
case 0x45172b:c.instructions+=1;goto B45172b;
case 0x45172d:goto L45172d;
case 0x45172f:goto L45172f;
case 0x451734:c.instructions+=2;goto B451734;
case 0x451737:c.instructions+=1;goto B451737;
case 0x45173c:goto L45173c;
case 0x45173f:c.instructions+=2;goto B45173f;
case 0x451741:c.instructions+=1;goto B451741;
case 0x451743:goto L451743;
case 0x451749:c.instructions+=6;goto B451749;
case 0x45174d:c.instructions+=5;goto B45174d;
case 0x45174e:c.instructions+=4;goto B45174e;
case 0x45174f:c.instructions+=3;goto B45174f;
case 0x451751:c.instructions+=2;goto B451751;
case 0x451753:c.instructions+=1;goto B451753;
case 0x451758:goto L451758;
case 0x45175a:goto L45175a;
case 0x45175c:goto L45175c;
case 0x451761:c.instructions+=2;goto B451761;
case 0x451764:c.instructions+=1;goto B451764;
case 0x451769:goto L451769;
case 0x45176c:c.instructions+=2;goto B45176c;
case 0x45176e:c.instructions+=1;goto B45176e;
case 0x451770:goto L451770;
case 0x451776:c.instructions+=6;goto B451776;
case 0x45177a:c.instructions+=5;goto B45177a;
case 0x45177b:c.instructions+=4;goto B45177b;
case 0x45177c:c.instructions+=3;goto B45177c;
case 0x45177e:c.instructions+=2;goto B45177e;
case 0x451780:c.instructions+=1;goto B451780;
case 0x451785:goto L451785;
case 0x451787:goto L451787;
case 0x451789:goto L451789;
case 0x45178e:c.instructions+=2;goto B45178e;
case 0x451791:c.instructions+=1;goto B451791;
case 0x451796:goto L451796;
case 0x451799:c.instructions+=2;goto B451799;
case 0x45179b:c.instructions+=1;goto B45179b;
case 0x45179d:goto L45179d;
case 0x4517a3:c.instructions+=6;goto B4517a3;
case 0x4517a4:c.instructions+=5;goto B4517a4;
case 0x4517ab:c.instructions+=4;goto B4517ab;
case 0x4517ac:c.instructions+=3;goto B4517ac;
case 0x4517ae:c.instructions+=2;goto B4517ae;
case 0x4517b0:c.instructions+=1;goto B4517b0;
case 0x4517b5:goto L4517b5;
case 0x4517b7:goto L4517b7;
case 0x4517b9:goto L4517b9;
case 0x4517be:c.instructions+=2;goto B4517be;
case 0x4517c1:c.instructions+=1;goto B4517c1;
case 0x4517c6:goto L4517c6;
case 0x4517c9:c.instructions+=2;goto B4517c9;
case 0x4517cb:c.instructions+=1;goto B4517cb;
case 0x4517cd:goto L4517cd;
case 0x4517d3:c.instructions+=6;goto B4517d3;
case 0x4517d4:c.instructions+=5;goto B4517d4;
case 0x4517db:c.instructions+=4;goto B4517db;
case 0x4517dc:c.instructions+=3;goto B4517dc;
case 0x4517de:c.instructions+=2;goto B4517de;
case 0x4517e0:c.instructions+=1;goto B4517e0;
case 0x4517e5:goto L4517e5;
case 0x4517e7:goto L4517e7;
case 0x4517e9:goto L4517e9;
case 0x4517eb:c.instructions+=2;goto B4517eb;
case 0x4517ee:c.instructions+=1;goto B4517ee;
case 0x4517f3:goto L4517f3;
case 0x4517f6:c.instructions+=4;goto B4517f6;
case 0x4517fa:c.instructions+=3;goto B4517fa;
case 0x4517fc:c.instructions+=2;goto B4517fc;
case 0x451804:c.instructions+=1;goto B451804;
case 0x451806:goto L451806;
case 0x451808:c.instructions+=2;goto B451808;
case 0x45180a:c.instructions+=1;goto B45180a;
case 0x45180f:goto L45180f;
case 0x451811:goto L451811;
case 0x451813:goto L451813;
case 0x451816:c.instructions+=5;goto B451816;
case 0x451819:c.instructions+=4;goto B451819;
case 0x45181c:c.instructions+=3;goto B45181c;
case 0x45181d:c.instructions+=2;goto B45181d;
case 0x451824:c.instructions+=1;goto B451824;
case 0x451829:goto L451829;
case 0x45182b:c.instructions+=7;goto B45182b;
case 0x45182f:c.instructions+=6;goto B45182f;
case 0x451830:c.instructions+=5;goto B451830;
case 0x451831:c.instructions+=4;goto B451831;
case 0x451838:c.instructions+=3;goto B451838;
case 0x451839:c.instructions+=2;goto B451839;
case 0x45183b:c.instructions+=1;goto B45183b;
case 0x451840:goto L451840;
case 0x451847:c.instructions+=4;goto B451847;
case 0x451848:c.instructions+=3;goto B451848;
case 0x45184c:c.instructions+=2;goto B45184c;
case 0x45184d:c.instructions+=1;goto B45184d;
case 0x451852:goto L451852;
case 0x451855:c.instructions+=3;goto B451855;
case 0x451858:c.instructions+=2;goto B451858;
case 0x45185a:c.instructions+=1;goto B45185a;
case 0x45185c:goto L45185c;
case 0x451860:c.instructions+=23;goto B451860;
case 0x451862:c.instructions+=22;goto B451862;
case 0x451866:c.instructions+=21;goto B451866;
case 0x45186a:c.instructions+=20;goto B45186a;
case 0x45186c:c.instructions+=19;goto B45186c;
case 0x451870:c.instructions+=18;goto B451870;
case 0x451874:c.instructions+=17;goto B451874;
case 0x451876:c.instructions+=16;goto B451876;
case 0x45187a:c.instructions+=15;goto B45187a;
case 0x45187e:c.instructions+=14;goto B45187e;
case 0x451880:c.instructions+=13;goto B451880;
case 0x451884:c.instructions+=12;goto B451884;
case 0x451888:c.instructions+=11;goto B451888;
case 0x45188a:c.instructions+=10;goto B45188a;
case 0x45188e:c.instructions+=9;goto B45188e;
case 0x451892:c.instructions+=8;goto B451892;
case 0x451894:c.instructions+=7;goto B451894;
case 0x451898:c.instructions+=6;goto B451898;
case 0x45189c:c.instructions+=5;goto B45189c;
case 0x45189e:c.instructions+=4;goto B45189e;
case 0x4518a2:c.instructions+=3;goto B4518a2;
case 0x4518a6:c.instructions+=2;goto B4518a6;
case 0x4518a8:c.instructions+=1;goto B4518a8;
case 0x4518ac:goto L4518ac;
case 0x4518af:c.instructions+=9;goto B4518af;
case 0x4518b2:c.instructions+=8;goto B4518b2;
case 0x4518b5:c.instructions+=7;goto B4518b5;
case 0x4518b8:c.instructions+=6;goto B4518b8;
case 0x4518b9:c.instructions+=5;goto B4518b9;
case 0x4518bb:c.instructions+=4;goto B4518bb;
case 0x4518be:c.instructions+=3;goto B4518be;
case 0x4518c2:c.instructions+=2;goto B4518c2;
case 0x4518c6:c.instructions+=1;goto B4518c6;
case 0x4518cb:goto L4518cb;
case 0x4518cf:c.instructions+=6;goto B4518cf;
case 0x4518d0:c.instructions+=5;goto B4518d0;
case 0x4518d4:c.instructions+=4;goto B4518d4;
case 0x4518d5:c.instructions+=3;goto B4518d5;
case 0x4518d6:c.instructions+=2;goto B4518d6;
case 0x4518d8:c.instructions+=1;goto B4518d8;
case 0x4518dd:goto L4518dd;
case 0x4518e1:c.instructions+=6;goto B4518e1;
case 0x4518e2:c.instructions+=5;goto B4518e2;
case 0x4518e6:c.instructions+=4;goto B4518e6;
case 0x4518e7:c.instructions+=3;goto B4518e7;
case 0x4518e8:c.instructions+=2;goto B4518e8;
case 0x4518ea:c.instructions+=1;goto B4518ea;
case 0x4518ef:goto L4518ef;
case 0x4518f2:c.instructions+=22;goto B4518f2;
case 0x4518f4:c.instructions+=21;goto B4518f4;
case 0x4518f7:c.instructions+=20;goto B4518f7;
case 0x4518fa:c.instructions+=19;goto B4518fa;
case 0x4518fd:c.instructions+=18;goto B4518fd;
case 0x451900:c.instructions+=17;goto B451900;
case 0x451903:c.instructions+=16;goto B451903;
case 0x451905:c.instructions+=15;goto B451905;
case 0x451907:c.instructions+=14;goto B451907;
case 0x451909:c.instructions+=13;goto B451909;
case 0x45190b:c.instructions+=12;goto B45190b;
case 0x45190d:c.instructions+=11;goto B45190d;
case 0x45190f:c.instructions+=10;goto B45190f;
case 0x451911:c.instructions+=9;goto B451911;
case 0x451913:c.instructions+=8;goto B451913;
case 0x451915:c.instructions+=7;goto B451915;
case 0x451917:c.instructions+=6;goto B451917;
case 0x451919:c.instructions+=5;goto B451919;
case 0x45191b:c.instructions+=4;goto B45191b;
case 0x451921:c.instructions+=3;goto B451921;
case 0x451923:c.instructions+=2;goto B451923;
case 0x451926:c.instructions+=1;goto B451926;
case 0x451928:goto L451928;
case 0x45192b:c.instructions+=37;goto B45192b;
case 0x45192e:c.instructions+=36;goto B45192e;
case 0x451931:c.instructions+=35;goto B451931;
case 0x451933:c.instructions+=34;goto B451933;
case 0x451936:c.instructions+=33;goto B451936;
case 0x45193a:c.instructions+=32;goto B45193a;
case 0x45193d:c.instructions+=31;goto B45193d;
case 0x451940:c.instructions+=30;goto B451940;
case 0x451943:c.instructions+=29;goto B451943;
case 0x451945:c.instructions+=28;goto B451945;
case 0x451948:c.instructions+=27;goto B451948;
case 0x45194c:c.instructions+=26;goto B45194c;
case 0x45194f:c.instructions+=25;goto B45194f;
case 0x451952:c.instructions+=24;goto B451952;
case 0x451955:c.instructions+=23;goto B451955;
case 0x451958:c.instructions+=22;goto B451958;
case 0x45195c:c.instructions+=21;goto B45195c;
case 0x45195f:c.instructions+=20;goto B45195f;
case 0x451962:c.instructions+=19;goto B451962;
case 0x451965:c.instructions+=18;goto B451965;
case 0x451968:c.instructions+=17;goto B451968;
case 0x45196f:c.instructions+=16;goto B45196f;
case 0x451972:c.instructions+=15;goto B451972;
case 0x451975:c.instructions+=14;goto B451975;
case 0x451978:c.instructions+=13;goto B451978;
case 0x45197a:c.instructions+=12;goto B45197a;
case 0x45197d:c.instructions+=11;goto B45197d;
case 0x451981:c.instructions+=10;goto B451981;
case 0x451984:c.instructions+=9;goto B451984;
case 0x451987:c.instructions+=8;goto B451987;
case 0x45198a:c.instructions+=7;goto B45198a;
case 0x45198d:c.instructions+=6;goto B45198d;
case 0x451991:c.instructions+=5;goto B451991;
case 0x451994:c.instructions+=4;goto B451994;
case 0x451997:c.instructions+=3;goto B451997;
case 0x45199a:c.instructions+=2;goto B45199a;
case 0x45199d:c.instructions+=1;goto B45199d;
case 0x4519a4:goto L4519a4;
case 0x4519ab:c.instructions+=8;goto B4519ab;
case 0x4519ac:c.instructions+=7;goto B4519ac;
case 0x4519ae:c.instructions+=6;goto B4519ae;
case 0x4519af:c.instructions+=5;goto B4519af;
case 0x4519b6:c.instructions+=4;goto B4519b6;
case 0x4519b7:c.instructions+=3;goto B4519b7;
case 0x4519b9:c.instructions+=2;goto B4519b9;
case 0x4519ba:c.instructions+=1;goto B4519ba;
case 0x4519c0:goto L4519c0;
case 0x4519c1:c.instructions+=2;goto B4519c1;
case 0x4519c3:c.instructions+=1;goto B4519c3;
case 0x4519c8:goto L4519c8;
case 0x4519cd:c.instructions+=1;goto B4519cd;
case 0x4519cf:goto L4519cf;
case 0x4519d0:c.instructions+=1;goto B4519d0;
case 0x4519d5:goto L4519d5;
case 0x4519d8:goto L4519d8;
case 0x4519da:c.instructions+=2;goto B4519da;
case 0x4519db:c.instructions+=1;goto B4519db;
case 0x4519e0:goto L4519e0;
case 0x4519e1:c.instructions+=16;goto B4519e1;
case 0x4519e3:c.instructions+=15;goto B4519e3;
case 0x4519e6:c.instructions+=14;goto B4519e6;
case 0x4519e8:c.instructions+=13;goto B4519e8;
case 0x4519ed:c.instructions+=12;goto B4519ed;
case 0x4519f3:c.instructions+=11;goto B4519f3;
case 0x4519f4:c.instructions+=10;goto B4519f4;
case 0x4519fb:c.instructions+=9;goto B4519fb;
case 0x451a01:c.instructions+=8;goto B451a01;
case 0x451a04:c.instructions+=7;goto B451a04;
case 0x451a05:c.instructions+=6;goto B451a05;
case 0x451a06:c.instructions+=5;goto B451a06;
case 0x451a08:c.instructions+=4;goto B451a08;
case 0x451a0a:c.instructions+=3;goto B451a0a;
case 0x451a0b:c.instructions+=2;goto B451a0b;
case 0x451a0f:c.instructions+=1;goto B451a0f;
case 0x451a14:goto L451a14;
case 0x451a17:c.instructions+=8;goto B451a17;
case 0x451a1a:c.instructions+=7;goto B451a1a;
case 0x451a1c:c.instructions+=6;goto B451a1c;
case 0x451a1e:c.instructions+=5;goto B451a1e;
case 0x451a25:c.instructions+=4;goto B451a25;
case 0x451a2b:c.instructions+=3;goto B451a2b;
case 0x451a2e:c.instructions+=2;goto B451a2e;
case 0x451a31:c.instructions+=1;goto B451a31;
case 0x451a36:goto L451a36;
case 0x451a39:c.instructions+=2;goto B451a39;
case 0x451a3b:c.instructions+=1;goto B451a3b;
case 0x451a3d:goto L451a3d;
case 0x451a43:c.instructions+=9;goto B451a43;
case 0x451a45:c.instructions+=8;goto B451a45;
case 0x451a48:c.instructions+=7;goto B451a48;
case 0x451a4b:c.instructions+=6;goto B451a4b;
case 0x451a4e:c.instructions+=5;goto B451a4e;
case 0x451a51:c.instructions+=4;goto B451a51;
case 0x451a58:c.instructions+=3;goto B451a58;
case 0x451a5c:c.instructions+=2;goto B451a5c;
case 0x451a62:c.instructions+=1;goto B451a62;
case 0x451a64:goto L451a64;
case 0x451a66:goto L451a66;
case 0x451a6b:c.instructions+=2;goto B451a6b;
case 0x451a6e:c.instructions+=1;goto B451a6e;
case 0x451a73:goto L451a73;
case 0x451a76:c.instructions+=2;goto B451a76;
case 0x451a78:c.instructions+=1;goto B451a78;
case 0x451a7a:goto L451a7a;
case 0x451a80:c.instructions+=5;goto B451a80;
case 0x451a85:c.instructions+=4;goto B451a85;
case 0x451a86:c.instructions+=3;goto B451a86;
case 0x451a88:c.instructions+=2;goto B451a88;
case 0x451a8a:c.instructions+=1;goto B451a8a;
case 0x451a8f:goto L451a8f;
case 0x451a91:goto L451a91;
case 0x451a93:goto L451a93;
case 0x451a98:c.instructions+=2;goto B451a98;
case 0x451a9b:c.instructions+=1;goto B451a9b;
case 0x451aa0:goto L451aa0;
case 0x451aa3:c.instructions+=2;goto B451aa3;
case 0x451aa5:c.instructions+=1;goto B451aa5;
case 0x451aa7:goto L451aa7;
case 0x451aad:c.instructions+=5;goto B451aad;
case 0x451ab2:c.instructions+=4;goto B451ab2;
case 0x451ab3:c.instructions+=3;goto B451ab3;
case 0x451ab5:c.instructions+=2;goto B451ab5;
case 0x451ab7:c.instructions+=1;goto B451ab7;
case 0x451abc:goto L451abc;
case 0x451abe:goto L451abe;
case 0x451ac0:goto L451ac0;
case 0x451ac4:c.instructions+=8;goto B451ac4;
case 0x451ac5:c.instructions+=7;goto B451ac5;
case 0x451ac8:c.instructions+=6;goto B451ac8;
case 0x451ac9:c.instructions+=5;goto B451ac9;
case 0x451acd:c.instructions+=4;goto B451acd;
case 0x451ace:c.instructions+=3;goto B451ace;
case 0x451acf:c.instructions+=2;goto B451acf;
case 0x451ad1:c.instructions+=1;goto B451ad1;
case 0x451ad6:goto L451ad6;
case 0x451ad9:c.instructions+=3;goto B451ad9;
case 0x451ada:c.instructions+=2;goto B451ada;
case 0x451adc:c.instructions+=1;goto B451adc;
case 0x451ae1:goto L451ae1;
case 0x451ae4:c.instructions+=8;goto B451ae4;
case 0x451ae7:c.instructions+=7;goto B451ae7;
case 0x451aea:c.instructions+=6;goto B451aea;
case 0x451aeb:c.instructions+=5;goto B451aeb;
case 0x451aef:c.instructions+=4;goto B451aef;
case 0x451af0:c.instructions+=3;goto B451af0;
case 0x451af1:c.instructions+=2;goto B451af1;
case 0x451af3:c.instructions+=1;goto B451af3;
case 0x451af8:goto L451af8;
case 0x451afb:c.instructions+=8;goto B451afb;
case 0x451afe:c.instructions+=7;goto B451afe;
case 0x451b01:c.instructions+=6;goto B451b01;
case 0x451b02:c.instructions+=5;goto B451b02;
case 0x451b06:c.instructions+=4;goto B451b06;
case 0x451b07:c.instructions+=3;goto B451b07;
case 0x451b08:c.instructions+=2;goto B451b08;
case 0x451b0a:c.instructions+=1;goto B451b0a;
case 0x451b0f:goto L451b0f;
case 0x451b16:c.instructions+=7;goto B451b16;
case 0x451b17:c.instructions+=6;goto B451b17;
case 0x451b19:c.instructions+=5;goto B451b19;
case 0x451b20:c.instructions+=4;goto B451b20;
case 0x451b21:c.instructions+=3;goto B451b21;
case 0x451b23:c.instructions+=2;goto B451b23;
case 0x451b24:c.instructions+=1;goto B451b24;
case 0x451b30:goto L451b30;
case 0x451b31:c.instructions+=2;goto B451b31;
case 0x451b33:c.instructions+=1;goto B451b33;
case 0x451b38:goto L451b38;
case 0x451b3d:c.instructions+=1;goto B451b3d;
case 0x451b3f:goto L451b3f;
case 0x451b40:c.instructions+=1;goto B451b40;
case 0x451b45:goto L451b45;
case 0x451b48:goto L451b48;
case 0x451b4a:c.instructions+=2;goto B451b4a;
case 0x451b4b:c.instructions+=1;goto B451b4b;
case 0x451b50:goto L451b50;
case 0x451b51:c.instructions+=2;goto B451b51;
case 0x451b53:c.instructions+=1;goto B451b53;
case 0x451b58:goto L451b58;
case 0x451b5d:c.instructions+=1;goto B451b5d;
case 0x451b5f:goto L451b5f;
case 0x451b60:c.instructions+=1;goto B451b60;
case 0x451b65:goto L451b65;
case 0x451b68:goto L451b68;
case 0x451b6a:c.instructions+=2;goto B451b6a;
case 0x451b6b:c.instructions+=1;goto B451b6b;
case 0x451b70:goto L451b70;
case 0x451b71:c.instructions+=11;goto B451b71;
case 0x451b73:c.instructions+=10;goto B451b73;
case 0x451b76:c.instructions+=9;goto B451b76;
case 0x451b7c:c.instructions+=8;goto B451b7c;
case 0x451b7d:c.instructions+=7;goto B451b7d;
case 0x451b7e:c.instructions+=6;goto B451b7e;
case 0x451b80:c.instructions+=5;goto B451b80;
case 0x451b86:c.instructions+=4;goto B451b86;
case 0x451b88:c.instructions+=3;goto B451b88;
case 0x451b89:c.instructions+=2;goto B451b89;
case 0x451b8d:c.instructions+=1;goto B451b8d;
case 0x451b8f:goto L451b8f;
case 0x451b94:c.instructions+=2;goto B451b94;
case 0x451b96:c.instructions+=1;goto B451b96;
case 0x451b98:goto L451b98;
case 0x451b9a:c.instructions+=7;goto B451b9a;
case 0x451b9d:c.instructions+=6;goto B451b9d;
case 0x451b9e:c.instructions+=5;goto B451b9e;
case 0x451ba1:c.instructions+=4;goto B451ba1;
case 0x451ba4:c.instructions+=3;goto B451ba4;
case 0x451ba5:c.instructions+=2;goto B451ba5;
case 0x451ba6:c.instructions+=1;goto B451ba6;
case 0x451bab:goto L451bab;
case 0x451bad:goto L451bad;
case 0x451bb0:c.instructions+=10;goto B451bb0;
case 0x451bb2:c.instructions+=9;goto B451bb2;
case 0x451bb5:c.instructions+=8;goto B451bb5;
case 0x451bb6:c.instructions+=7;goto B451bb6;
case 0x451bb9:c.instructions+=6;goto B451bb9;
case 0x451bba:c.instructions+=5;goto B451bba;
case 0x451bbe:c.instructions+=4;goto B451bbe;
case 0x451bbf:c.instructions+=3;goto B451bbf;
case 0x451bc0:c.instructions+=2;goto B451bc0;
case 0x451bc5:c.instructions+=1;goto B451bc5;
case 0x451bca:goto L451bca;
case 0x451bcd:c.instructions+=7;goto B451bcd;
case 0x451bd0:c.instructions+=6;goto B451bd0;
case 0x451bd2:c.instructions+=5;goto B451bd2;
case 0x451bd4:c.instructions+=4;goto B451bd4;
case 0x451bd7:c.instructions+=3;goto B451bd7;
case 0x451bd9:c.instructions+=2;goto B451bd9;
case 0x451bdd:c.instructions+=1;goto B451bdd;
case 0x451bdf:goto L451bdf;
case 0x451be1:c.instructions+=1;goto B451be1;
case 0x451be7:goto L451be7;
case 0x451be9:goto L451be9;
case 0x451beb:c.instructions+=1;goto B451beb;
case 0x451bed:goto L451bed;
case 0x451bef:c.instructions+=1;goto B451bef;
case 0x451bf1:goto L451bf1;
case 0x451bf3:c.instructions+=1;goto B451bf3;
case 0x451bf5:goto L451bf5;
case 0x451bf7:c.instructions+=5;goto B451bf7;
case 0x451bf8:c.instructions+=4;goto B451bf8;
case 0x451bfa:c.instructions+=3;goto B451bfa;
case 0x451bfb:c.instructions+=2;goto B451bfb;
case 0x451c00:c.instructions+=1;goto B451c00;
case 0x451c05:goto L451c05;
case 0x451c07:c.instructions+=1;goto B451c07;
case 0x451c09:goto L451c09;
case 0x451c0b:c.instructions+=1;goto B451c0b;
case 0x451c0d:goto L451c0d;
case 0x451c12:c.instructions+=1;goto B451c12;
case 0x451c16:goto L451c16;
case 0x451c18:c.instructions+=1;goto B451c18;
case 0x451c1a:goto L451c1a;
case 0x451c1c:c.instructions+=1;goto B451c1c;
case 0x451c1e:goto L451c1e;
case 0x451c21:c.instructions+=2;goto B451c21;
case 0x451c23:c.instructions+=1;goto B451c23;
case 0x451c25:goto L451c25;
case 0x451c2a:c.instructions+=1;goto B451c2a;
case 0x451c2c:goto L451c2c;
case 0x451c2e:goto L451c2e;
case 0x451c30:c.instructions+=2;goto B451c30;
case 0x451c32:c.instructions+=1;goto B451c32;
case 0x451c34:goto L451c34;
case 0x451c36:c.instructions+=1;goto B451c36;
case 0x451c38:goto L451c38;
case 0x451c3b:c.instructions+=2;goto B451c3b;
case 0x451c3d:c.instructions+=1;goto B451c3d;
case 0x451c3f:goto L451c3f;
case 0x451c44:c.instructions+=1;goto B451c44;
case 0x451c46:goto L451c46;
case 0x451c48:goto L451c48;
case 0x451c4a:c.instructions+=2;goto B451c4a;
case 0x451c4e:c.instructions+=1;goto B451c4e;
case 0x451c50:goto L451c50;
case 0x451c55:goto L451c55;
case 0x451c57:c.instructions+=2;goto B451c57;
case 0x451c5a:c.instructions+=1;goto B451c5a;
case 0x451c60:goto L451c60;
case 0x451c64:c.instructions+=8;goto B451c64;
case 0x451c67:c.instructions+=7;goto B451c67;
case 0x451c6b:c.instructions+=6;goto B451c6b;
case 0x451c72:c.instructions+=5;goto B451c72;
case 0x451c73:c.instructions+=4;goto B451c73;
case 0x451c76:c.instructions+=3;goto B451c76;
case 0x451c78:c.instructions+=2;goto B451c78;
case 0x451c7a:c.instructions+=1;goto B451c7a;
case 0x451c7f:goto L451c7f;
case 0x451c86:c.instructions+=4;goto B451c86;
case 0x451c87:c.instructions+=3;goto B451c87;
case 0x451c89:c.instructions+=2;goto B451c89;
case 0x451c8b:c.instructions+=1;goto B451c8b;
case 0x451c90:goto L451c90;
case 0x451c97:c.instructions+=4;goto B451c97;
case 0x451c98:c.instructions+=3;goto B451c98;
case 0x451c9a:c.instructions+=2;goto B451c9a;
case 0x451c9c:c.instructions+=1;goto B451c9c;
case 0x451ca1:goto L451ca1;
case 0x451ca8:c.instructions+=4;goto B451ca8;
case 0x451ca9:c.instructions+=3;goto B451ca9;
case 0x451cab:c.instructions+=2;goto B451cab;
case 0x451cad:c.instructions+=1;goto B451cad;
case 0x451cb2:goto L451cb2;
case 0x451cb6:c.instructions+=11;goto B451cb6;
case 0x451cb7:c.instructions+=10;goto B451cb7;
case 0x451cb9:c.instructions+=9;goto B451cb9;
case 0x451cba:c.instructions+=8;goto B451cba;
case 0x451cbe:c.instructions+=7;goto B451cbe;
case 0x451cbf:c.instructions+=6;goto B451cbf;
case 0x451cc6:c.instructions+=5;goto B451cc6;
case 0x451cc7:c.instructions+=4;goto B451cc7;
case 0x451cce:c.instructions+=3;goto B451cce;
case 0x451ccf:c.instructions+=2;goto B451ccf;
case 0x451cd4:c.instructions+=1;goto B451cd4;
case 0x451cd9:goto L451cd9;
case 0x451cda:c.instructions+=10;goto B451cda;
case 0x451cdc:c.instructions+=9;goto B451cdc;
case 0x451cdd:c.instructions+=8;goto B451cdd;
case 0x451ce1:c.instructions+=7;goto B451ce1;
case 0x451ce2:c.instructions+=6;goto B451ce2;
case 0x451ce9:c.instructions+=5;goto B451ce9;
case 0x451cea:c.instructions+=4;goto B451cea;
case 0x451cf1:c.instructions+=3;goto B451cf1;
case 0x451cf2:c.instructions+=2;goto B451cf2;
case 0x451cf7:c.instructions+=1;goto B451cf7;
case 0x451cfc:goto L451cfc;
case 0x451cff:c.instructions+=3;goto B451cff;
case 0x451d06:c.instructions+=2;goto B451d06;
case 0x451d07:c.instructions+=1;goto B451d07;
case 0x451d0c:goto L451d0c;
case 0x451d13:c.instructions+=3;goto B451d13;
case 0x451d14:c.instructions+=2;goto B451d14;
case 0x451d17:c.instructions+=1;goto B451d17;
case 0x451d1c:goto L451d1c;
case 0x451d1f:c.instructions+=3;goto B451d1f;
case 0x451d26:c.instructions+=2;goto B451d26;
case 0x451d27:c.instructions+=1;goto B451d27;
case 0x451d2c:goto L451d2c;
case 0x451d2f:c.instructions+=3;goto B451d2f;
case 0x451d36:c.instructions+=2;goto B451d36;
case 0x451d37:c.instructions+=1;goto B451d37;
case 0x451d3c:goto L451d3c;
case 0x451d43:c.instructions+=3;goto B451d43;
case 0x451d44:c.instructions+=2;goto B451d44;
case 0x451d47:c.instructions+=1;goto B451d47;
case 0x451d4c:goto L451d4c;
case 0x451d4f:c.instructions+=3;goto B451d4f;
case 0x451d56:c.instructions+=2;goto B451d56;
case 0x451d57:c.instructions+=1;goto B451d57;
case 0x451d5c:goto L451d5c;
case 0x451d5f:c.instructions+=3;goto B451d5f;
case 0x451d66:c.instructions+=2;goto B451d66;
case 0x451d67:c.instructions+=1;goto B451d67;
case 0x451d6c:goto L451d6c;
case 0x451d73:c.instructions+=3;goto B451d73;
case 0x451d74:c.instructions+=2;goto B451d74;
case 0x451d77:c.instructions+=1;goto B451d77;
case 0x451d7c:goto L451d7c;
case 0x451d7f:c.instructions+=8;goto B451d7f;
case 0x451d83:c.instructions+=7;goto B451d83;
case 0x451d89:c.instructions+=6;goto B451d89;
case 0x451d8a:c.instructions+=5;goto B451d8a;
case 0x451d90:c.instructions+=4;goto B451d90;
case 0x451d92:c.instructions+=3;goto B451d92;
case 0x451d95:c.instructions+=2;goto B451d95;
case 0x451d96:c.instructions+=1;goto B451d96;
case 0x451d9b:goto L451d9b;
case 0x451d9e:c.instructions+=10;goto B451d9e;
case 0x451da0:c.instructions+=9;goto B451da0;
case 0x451da3:c.instructions+=8;goto B451da3;
case 0x451da7:c.instructions+=7;goto B451da7;
case 0x451daa:c.instructions+=6;goto B451daa;
case 0x451dae:c.instructions+=5;goto B451dae;
case 0x451db0:c.instructions+=4;goto B451db0;
case 0x451db3:c.instructions+=3;goto B451db3;
case 0x451db5:c.instructions+=2;goto B451db5;
case 0x451db8:c.instructions+=1;goto B451db8;
case 0x451dba:goto L451dba;
case 0x451dc0:goto L451dc0;
case 0x451dc4:c.instructions+=4;goto B451dc4;
case 0x451dc7:c.instructions+=3;goto B451dc7;
case 0x451dc8:c.instructions+=2;goto B451dc8;
case 0x451dc9:c.instructions+=1;goto B451dc9;
case 0x451dce:goto L451dce;
case 0x451dd1:c.instructions+=6;goto B451dd1;
case 0x451dd4:c.instructions+=5;goto B451dd4;
case 0x451dd7:c.instructions+=4;goto B451dd7;
case 0x451dda:c.instructions+=3;goto B451dda;
case 0x451ddc:c.instructions+=2;goto B451ddc;
case 0x451ddf:c.instructions+=1;goto B451ddf;
case 0x451de1:goto L451de1;
case 0x451de7:goto L451de7;
case 0x451dea:c.instructions+=8;goto B451dea;
case 0x451df0:c.instructions+=7;goto B451df0;
case 0x451df6:c.instructions+=6;goto B451df6;
case 0x451df7:c.instructions+=5;goto B451df7;
case 0x451df9:c.instructions+=4;goto B451df9;
case 0x451dfd:c.instructions+=3;goto B451dfd;
case 0x451e00:c.instructions+=2;goto B451e00;
case 0x451e01:c.instructions+=1;goto B451e01;
case 0x451e06:goto L451e06;
case 0x451e09:c.instructions+=10;goto B451e09;
case 0x451e0c:c.instructions+=9;goto B451e0c;
case 0x451e0e:c.instructions+=8;goto B451e0e;
case 0x451e11:c.instructions+=7;goto B451e11;
case 0x451e15:c.instructions+=6;goto B451e15;
case 0x451e19:c.instructions+=5;goto B451e19;
case 0x451e1c:c.instructions+=4;goto B451e1c;
case 0x451e1e:c.instructions+=3;goto B451e1e;
case 0x451e20:c.instructions+=2;goto B451e20;
case 0x451e23:c.instructions+=1;goto B451e23;
case 0x451e25:goto L451e25;
case 0x451e2b:goto L451e2b;
case 0x451e2f:c.instructions+=4;goto B451e2f;
case 0x451e32:c.instructions+=3;goto B451e32;
case 0x451e33:c.instructions+=2;goto B451e33;
case 0x451e34:c.instructions+=1;goto B451e34;
case 0x451e39:goto L451e39;
case 0x451e3c:c.instructions+=5;goto B451e3c;
case 0x451e3f:c.instructions+=4;goto B451e3f;
case 0x451e43:c.instructions+=3;goto B451e43;
case 0x451e46:c.instructions+=2;goto B451e46;
case 0x451e48:c.instructions+=1;goto B451e48;
case 0x451e4a:goto L451e4a;
case 0x451e50:c.instructions+=2;goto B451e50;
case 0x451e51:c.instructions+=1;goto B451e51;
case 0x451e56:goto L451e56;
case 0x451e59:c.instructions+=6;goto B451e59;
case 0x451e5c:c.instructions+=5;goto B451e5c;
case 0x451e5d:c.instructions+=4;goto B451e5d;
case 0x451e62:c.instructions+=3;goto B451e62;
case 0x451e63:c.instructions+=2;goto B451e63;
case 0x451e64:c.instructions+=1;goto B451e64;
case 0x451e69:goto L451e69;
case 0x451e6c:goto L451e6c;
case 0x451e70:c.instructions+=2;goto B451e70;
case 0x451e72:c.instructions+=1;goto B451e72;
case 0x451e78:goto L451e78;
case 0x451e7b:c.instructions+=2;goto B451e7b;
case 0x451e7d:c.instructions+=1;goto B451e7d;
case 0x451e83:goto L451e83;
case 0x451e86:c.instructions+=7;goto B451e86;
case 0x451e89:c.instructions+=6;goto B451e89;
case 0x451e8a:c.instructions+=5;goto B451e8a;
case 0x451e8f:c.instructions+=4;goto B451e8f;
case 0x451e90:c.instructions+=3;goto B451e90;
case 0x451e97:c.instructions+=2;goto B451e97;
case 0x451e98:c.instructions+=1;goto B451e98;
case 0x451e9d:goto L451e9d;
case 0x451ea4:c.instructions+=4;goto B451ea4;
case 0x451ea5:c.instructions+=3;goto B451ea5;
case 0x451eac:c.instructions+=2;goto B451eac;
case 0x451ead:c.instructions+=1;goto B451ead;
case 0x451eb2:goto L451eb2;
case 0x451eb8:c.instructions+=4;goto B451eb8;
case 0x451eb9:c.instructions+=3;goto B451eb9;
case 0x451ec0:c.instructions+=2;goto B451ec0;
case 0x451ec1:c.instructions+=1;goto B451ec1;
case 0x451ec6:goto L451ec6;
case 0x451ec9:c.instructions+=5;goto B451ec9;
case 0x451ece:c.instructions+=4;goto B451ece;
case 0x451ed3:c.instructions+=3;goto B451ed3;
case 0x451ed5:c.instructions+=2;goto B451ed5;
case 0x451edc:c.instructions+=1;goto B451edc;
case 0x451ee1:goto L451ee1;
case 0x451ee6:c.instructions+=4;goto B451ee6;
case 0x451eeb:c.instructions+=3;goto B451eeb;
case 0x451eed:c.instructions+=2;goto B451eed;
case 0x451ef4:c.instructions+=1;goto B451ef4;
case 0x451ef9:goto L451ef9;
case 0x451efc:c.instructions+=12;goto B451efc;
case 0x451efe:c.instructions+=11;goto B451efe;
case 0x451f03:c.instructions+=10;goto B451f03;
case 0x451f05:c.instructions+=9;goto B451f05;
case 0x451f0d:c.instructions+=8;goto B451f0d;
case 0x451f15:c.instructions+=7;goto B451f15;
case 0x451f1d:c.instructions+=6;goto B451f1d;
case 0x451f25:c.instructions+=5;goto B451f25;
case 0x451f2d:c.instructions+=4;goto B451f2d;
case 0x451f35:c.instructions+=3;goto B451f35;
case 0x451f3a:c.instructions+=2;goto B451f3a;
case 0x451f41:c.instructions+=1;goto B451f41;
case 0x451f43:goto L451f43;
case 0x451f46:c.instructions+=1;goto B451f46;
case 0x451f48:goto L451f48;
case 0x451f4a:c.instructions+=2;goto B451f4a;
case 0x451f4f:c.instructions+=1;goto B451f4f;
case 0x451f54:goto L451f54;
case 0x451f56:c.instructions+=1;goto B451f56;
case 0x451f58:goto L451f58;
case 0x451f59:c.instructions+=2;goto B451f59;
case 0x451f5e:c.instructions+=1;goto B451f5e;
case 0x451f63:goto L451f63;
case 0x451f65:c.instructions+=1;goto B451f65;
case 0x451f67:goto L451f67;
case 0x451f6c:c.instructions+=5;goto B451f6c;
case 0x451f6d:c.instructions+=4;goto B451f6d;
case 0x451f74:c.instructions+=3;goto B451f74;
case 0x451f75:c.instructions+=2;goto B451f75;
case 0x451f7c:c.instructions+=1;goto B451f7c;
case 0x451f81:goto L451f81;
case 0x451f84:goto L451f84;
case 0x451f87:c.instructions+=3;goto B451f87;
case 0x451f89:c.instructions+=2;goto B451f89;
case 0x451f8c:c.instructions+=1;goto B451f8c;
case 0x451f8e:goto L451f8e;
case 0x451f91:c.instructions+=1;goto B451f91;
case 0x451f93:goto L451f93;
case 0x451f94:c.instructions+=1;goto B451f94;
case 0x451f96:goto L451f96;
case 0x451f98:c.instructions+=1;goto B451f98;
case 0x451f9a:goto L451f9a;
case 0x451f9c:c.instructions+=1;goto B451f9c;
case 0x451f9e:goto L451f9e;
case 0x451fa5:c.instructions+=1;goto B451fa5;
case 0x451fa7:goto L451fa7;
case 0x451fae:goto L451fae;
case 0x451fb1:c.instructions+=2;goto B451fb1;
case 0x451fb4:c.instructions+=1;goto B451fb4;
case 0x451fb6:goto L451fb6;
case 0x451fb9:c.instructions+=1;goto B451fb9;
case 0x451fbb:goto L451fbb;
case 0x451fbc:c.instructions+=1;goto B451fbc;
case 0x451fbe:goto L451fbe;
case 0x451fc0:c.instructions+=1;goto B451fc0;
case 0x451fc2:goto L451fc2;
case 0x451fc9:c.instructions+=1;goto B451fc9;
case 0x451fcb:goto L451fcb;
case 0x451fd2:goto L451fd2;
case 0x451fd4:c.instructions+=1;goto B451fd4;
case 0x451fd6:goto L451fd6;
case 0x451fd9:c.instructions+=2;goto B451fd9;
case 0x451fdc:c.instructions+=1;goto B451fdc;
case 0x451fde:goto L451fde;
case 0x451fe0:goto L451fe0;
case 0x451fe1:c.instructions+=5;goto B451fe1;
case 0x451fe2:c.instructions+=4;goto B451fe2;
case 0x451fe9:c.instructions+=3;goto B451fe9;
case 0x451fea:c.instructions+=2;goto B451fea;
case 0x451fec:c.instructions+=1;goto B451fec;
case 0x451ff1:goto L451ff1;
case 0x451ff4:c.instructions+=2;goto B451ff4;
case 0x451ff6:c.instructions+=1;goto B451ff6;
case 0x451ff8:goto L451ff8;
case 0x451ffb:c.instructions+=2;goto B451ffb;
case 0x451ffe:c.instructions+=1;goto B451ffe;
default:missing_instruction(c.pc);}
B451000:L451000:{c.instructions+=1;NFSU2_TR(0x451000);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4510aa;}}
}
B451006:L451006:{c.instructions+=12;NFSU2_TR(0x451006);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1c78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45100c:{NFSU2_TR(0x45100c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45100e:{NFSU2_TR(0x45100e);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B451012:{NFSU2_TR(0x451012);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451013:{NFSU2_TR(0x451013);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B451017:{NFSU2_TR(0x451017);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451018:{NFSU2_TR(0x451018);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45101a:{NFSU2_TR(0x45101a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45101b:{NFSU2_TR(0x45101b);
__builtin_memmove((R+4),(R+28),4);
}
B45101d:{NFSU2_TR(0x45101d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B451025:{NFSU2_TR(0x451025);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45102d:{NFSU2_TR(0x45102d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x451032ull));
TAIL_STATIC(0x44fe80u,44f);
}
B451032:L451032:{c.instructions+=9;NFSU2_TR(0x451032);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B451036:{NFSU2_TR(0x451036);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B45103a:{NFSU2_TR(0x45103a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45103b:{NFSU2_TR(0x45103b);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45103f:{NFSU2_TR(0x45103f);
__builtin_memmove((R+4),(R+24),4);
}
B451041:{NFSU2_TR(0x451041);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B451045:{NFSU2_TR(0x451045);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B451047:{NFSU2_TR(0x451047);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B45104a:{NFSU2_TR(0x45104a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45104full));
TAIL_STATIC(0x4462a0u,446);
}
B45104f:L45104f:{c.instructions+=2;NFSU2_TR(0x45104f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451050:{NFSU2_TR(0x451050);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x451055ull));
TAIL_STATIC(0x443d50u,443);
}
B451055:L451055:{c.instructions+=4;NFSU2_TR(0x451055);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B451057:{NFSU2_TR(0x451057);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45105a:{NFSU2_TR(0x45105a);
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
B45105d:{NFSU2_TR(0x45105d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x451062ull));
TAIL_STATIC(0x5748b0u,574);
}
B451062:L451062:{c.instructions+=3;NFSU2_TR(0x451062);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B451064:{NFSU2_TR(0x451064);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B451067:{NFSU2_TR(0x451067);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45106cull));
TAIL_STATIC(0x5748b0u,574);
}
B45106c:L45106c:{c.instructions+=3;NFSU2_TR(0x45106c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B45106e:{NFSU2_TR(0x45106e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B451071:{NFSU2_TR(0x451071);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x451076ull));
TAIL_STATIC(0x5748b0u,574);
}
B451076:L451076:{c.instructions+=3;NFSU2_TR(0x451076);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B451078:{NFSU2_TR(0x451078);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45107b:{NFSU2_TR(0x45107b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x451080ull));
TAIL_STATIC(0x5748b0u,574);
}
B451080:L451080:{c.instructions+=3;NFSU2_TR(0x451080);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B451082:{NFSU2_TR(0x451082);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B451085:{NFSU2_TR(0x451085);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45108aull));
TAIL_STATIC(0x5748b0u,574);
}
B45108a:L45108a:{c.instructions+=3;NFSU2_TR(0x45108a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B45108c:{NFSU2_TR(0x45108c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45108f:{NFSU2_TR(0x45108f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x451094ull));
TAIL_STATIC(0x5748b0u,574);
}
B451094:L451094:{c.instructions+=3;NFSU2_TR(0x451094);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B451096:{NFSU2_TR(0x451096);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B451099:{NFSU2_TR(0x451099);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45109eull));
TAIL_STATIC(0x5748b0u,574);
}
B45109e:L45109e:{c.instructions+=3;NFSU2_TR(0x45109e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4510a0:{NFSU2_TR(0x4510a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4510a3:{NFSU2_TR(0x4510a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4510a8ull));
TAIL_STATIC(0x5748b0u,574);
}
B4510a8:L4510a8:{c.instructions+=1;NFSU2_TR(0x4510a8);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4510aa:L4510aa:{c.instructions+=4;NFSU2_TR(0x4510aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4510ab:{NFSU2_TR(0x4510ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4510ac:{NFSU2_TR(0x4510ac);
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
B4510af:{NFSU2_TR(0x4510af);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4510c0:L4510c0:{c.instructions+=3;NFSU2_TR(0x4510c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4510c1:{NFSU2_TR(0x4510c1);
__builtin_memmove((R+24),(R+4),4);
}
B4510c3:{NFSU2_TR(0x4510c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4510c8ull));
TAIL_STATIC(0x44cdb0u,44c);
}
B4510c8:L4510c8:{c.instructions+=2;NFSU2_TR(0x4510c8);
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
B4510cd:{NFSU2_TR(0x4510cd);
if(r1(R+518)){{goto L4510d8;}}
}
B4510cf:L4510cf:{c.instructions+=2;NFSU2_TR(0x4510cf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4510d0:{NFSU2_TR(0x4510d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4510d5ull));
TAIL_STATIC(0x575630u,575);
}
B4510d5:L4510d5:{c.instructions+=1;NFSU2_TR(0x4510d5);
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
B4510d8:L4510d8:{c.instructions+=3;NFSU2_TR(0x4510d8);
__builtin_memmove((R+0),(R+24),4);
}
B4510da:{NFSU2_TR(0x4510da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4510db:{NFSU2_TR(0x4510db);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4510e0:L4510e0:{c.instructions+=3;NFSU2_TR(0x4510e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4510e1:{NFSU2_TR(0x4510e1);
__builtin_memmove((R+24),(R+4),4);
}
B4510e3:{NFSU2_TR(0x4510e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4510e8ull));
TAIL_STATIC(0x44b170u,44b);
}
B4510e8:L4510e8:{c.instructions+=2;NFSU2_TR(0x4510e8);
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
B4510ed:{NFSU2_TR(0x4510ed);
if(r1(R+518)){{goto L4510f8;}}
}
B4510ef:L4510ef:{c.instructions+=2;NFSU2_TR(0x4510ef);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4510f0:{NFSU2_TR(0x4510f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4510f5ull));
TAIL_STATIC(0x575630u,575);
}
B4510f5:L4510f5:{c.instructions+=1;NFSU2_TR(0x4510f5);
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
B4510f8:L4510f8:{c.instructions+=3;NFSU2_TR(0x4510f8);
__builtin_memmove((R+0),(R+24),4);
}
B4510fa:{NFSU2_TR(0x4510fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4510fb:{NFSU2_TR(0x4510fb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B451100:L451100:{c.instructions+=5;NFSU2_TR(0x451100);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451101:{NFSU2_TR(0x451101);
__builtin_memmove((R+24),(R+4),4);
}
B451103:{NFSU2_TR(0x451103);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B451109:{NFSU2_TR(0x451109);
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
B45110b:{NFSU2_TR(0x45110b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4511d8;}}
}
B451111:L451111:{c.instructions+=6;NFSU2_TR(0x451111);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B451117:{NFSU2_TR(0x451117);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451118:{NFSU2_TR(0x451118);
u8 U[4];
w4(U+0,u32(0x44b8d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45111d:{NFSU2_TR(0x45111d);
u8 U[4];
w4(U+0,u32(0x4dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45111f:{NFSU2_TR(0x45111f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451120:{NFSU2_TR(0x451120);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x451125ull));
TAIL_STATIC(0x579410u,579);
}
B451125:L451125:{c.instructions+=6;NFSU2_TR(0x451125);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45112b:{NFSU2_TR(0x45112b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45112c:{NFSU2_TR(0x45112c);
u8 U[4];
w4(U+0,u32(0x44b8d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451131:{NFSU2_TR(0x451131);
u8 U[4];
w4(U+0,u32(0x4eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451133:{NFSU2_TR(0x451133);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451134:{NFSU2_TR(0x451134);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x451139ull));
TAIL_STATIC(0x579410u,579);
}
B451139:L451139:{c.instructions+=6;NFSU2_TR(0x451139);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45113f:{NFSU2_TR(0x45113f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451140:{NFSU2_TR(0x451140);
u8 U[4];
w4(U+0,u32(0x44b8d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451145:{NFSU2_TR(0x451145);
u8 U[4];
w4(U+0,u32(0x4full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451147:{NFSU2_TR(0x451147);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451148:{NFSU2_TR(0x451148);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45114dull));
TAIL_STATIC(0x579410u,579);
}
B45114d:L45114d:{c.instructions+=6;NFSU2_TR(0x45114d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B451153:{NFSU2_TR(0x451153);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451154:{NFSU2_TR(0x451154);
u8 U[4];
w4(U+0,u32(0x44b8d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451159:{NFSU2_TR(0x451159);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45115b:{NFSU2_TR(0x45115b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45115c:{NFSU2_TR(0x45115c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x451161ull));
TAIL_STATIC(0x579410u,579);
}
B451161:L451161:{c.instructions+=7;NFSU2_TR(0x451161);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B451167:{NFSU2_TR(0x451167);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B45116a:{NFSU2_TR(0x45116a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45116b:{NFSU2_TR(0x45116b);
u8 U[4];
w4(U+0,u32(0x44b8d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451170:{NFSU2_TR(0x451170);
u8 U[4];
w4(U+0,u32(0x51ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451172:{NFSU2_TR(0x451172);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451173:{NFSU2_TR(0x451173);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x451178ull));
TAIL_STATIC(0x579410u,579);
}
B451178:L451178:{c.instructions+=6;NFSU2_TR(0x451178);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45117e:{NFSU2_TR(0x45117e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45117f:{NFSU2_TR(0x45117f);
u8 U[4];
w4(U+0,u32(0x44b8d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451184:{NFSU2_TR(0x451184);
u8 U[4];
w4(U+0,u32(0x52ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451186:{NFSU2_TR(0x451186);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451187:{NFSU2_TR(0x451187);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45118cull));
TAIL_STATIC(0x579410u,579);
}
B45118c:L45118c:{c.instructions+=6;NFSU2_TR(0x45118c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B451192:{NFSU2_TR(0x451192);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451193:{NFSU2_TR(0x451193);
u8 U[4];
w4(U+0,u32(0x44b8d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451198:{NFSU2_TR(0x451198);
u8 U[4];
w4(U+0,u32(0x53ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45119a:{NFSU2_TR(0x45119a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45119b:{NFSU2_TR(0x45119b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4511a0ull));
TAIL_STATIC(0x579410u,579);
}
B4511a0:L4511a0:{c.instructions+=6;NFSU2_TR(0x4511a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4511a6:{NFSU2_TR(0x4511a6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4511a7:{NFSU2_TR(0x4511a7);
u8 U[4];
w4(U+0,u32(0x44b8d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4511ac:{NFSU2_TR(0x4511ac);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4511ae:{NFSU2_TR(0x4511ae);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4511af:{NFSU2_TR(0x4511af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4511b4ull));
TAIL_STATIC(0x579410u,579);
}
B4511b4:L4511b4:{c.instructions+=7;NFSU2_TR(0x4511b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4511ba:{NFSU2_TR(0x4511ba);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B4511bd:{NFSU2_TR(0x4511bd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4511be:{NFSU2_TR(0x4511be);
u8 U[4];
w4(U+0,u32(0x44b8d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4511c3:{NFSU2_TR(0x4511c3);
u8 U[4];
w4(U+0,u32(0x55ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4511c5:{NFSU2_TR(0x4511c5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4511c6:{NFSU2_TR(0x4511c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4511cbull));
TAIL_STATIC(0x579410u,579);
}
B4511cb:L4511cb:{c.instructions+=2;NFSU2_TR(0x4511cb);
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
B4511ce:{NFSU2_TR(0x4511ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4511d8:L4511d8:{c.instructions+=2;NFSU2_TR(0x4511d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4511d9:{NFSU2_TR(0x4511d9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4511e0:L4511e0:{c.instructions+=3;NFSU2_TR(0x4511e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4511e1:{NFSU2_TR(0x4511e1);
__builtin_memmove((R+24),(R+4),4);
}
B4511e3:{NFSU2_TR(0x4511e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4511e8ull));
TAIL_STATIC(0x44c250u,44c);
}
B4511e8:L4511e8:{c.instructions+=2;NFSU2_TR(0x4511e8);
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
B4511ed:{NFSU2_TR(0x4511ed);
if(r1(R+518)){{goto L4511f8;}}
}
B4511ef:L4511ef:{c.instructions+=2;NFSU2_TR(0x4511ef);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4511f0:{NFSU2_TR(0x4511f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4511f5ull));
TAIL_STATIC(0x575630u,575);
}
B4511f5:L4511f5:{c.instructions+=1;NFSU2_TR(0x4511f5);
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
B4511f8:L4511f8:{c.instructions+=3;NFSU2_TR(0x4511f8);
__builtin_memmove((R+0),(R+24),4);
}
B4511fa:{NFSU2_TR(0x4511fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4511fb:{NFSU2_TR(0x4511fb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B451200:L451200:{c.instructions+=46;NFSU2_TR(0x451200);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B451207:{NFSU2_TR(0x451207);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45120d:{NFSU2_TR(0x45120d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B451213:{NFSU2_TR(0x451213);
{u32 ea_=u32(r4(R+4)+u32(148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B451219:{NFSU2_TR(0x451219);
{u32 ea_=u32(r4(R+4)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45121f:{NFSU2_TR(0x45121f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B451225:{NFSU2_TR(0x451225);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45122b:{NFSU2_TR(0x45122b);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B45122d:{NFSU2_TR(0x45122d);
{u32 ea_=u32(r4(R+4)+u32(212u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B451233:{NFSU2_TR(0x451233);
{u32 ea_=u32(r4(R+4)+u32(216u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B451239:{NFSU2_TR(0x451239);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45123f:{NFSU2_TR(0x45123f);
{u32 ea_=u32(r4(R+4)+u32(164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B451245:{NFSU2_TR(0x451245);
{u32 ea_=u32(r4(R+4)+u32(168u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45124b:{NFSU2_TR(0x45124b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B451251:{NFSU2_TR(0x451251);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B451253:{NFSU2_TR(0x451253);
{u32 ea_=u32(r4(R+4)+u32(228u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B451259:{NFSU2_TR(0x451259);
{u32 ea_=u32(r4(R+4)+u32(232u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B45125f:{NFSU2_TR(0x45125f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B451265:{NFSU2_TR(0x451265);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45126b:{NFSU2_TR(0x45126b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B451271:{NFSU2_TR(0x451271);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B451277:{NFSU2_TR(0x451277);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45127d:{NFSU2_TR(0x45127d);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B451281:{NFSU2_TR(0x451281);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B451287:{NFSU2_TR(0x451287);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45128b:{NFSU2_TR(0x45128b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B451291:{NFSU2_TR(0x451291);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B451295:{NFSU2_TR(0x451295);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x110ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45129b:{NFSU2_TR(0x45129b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45129f:{NFSU2_TR(0x45129f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x114ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4512a5:{NFSU2_TR(0x4512a5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4512a9:{NFSU2_TR(0x4512a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x118ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4512af:{NFSU2_TR(0x4512af);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4512b3:{NFSU2_TR(0x4512b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x120ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4512b9:{NFSU2_TR(0x4512b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4512bd:{NFSU2_TR(0x4512bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x124ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4512c3:{NFSU2_TR(0x4512c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4512c7:{NFSU2_TR(0x4512c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x128ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4512cd:{NFSU2_TR(0x4512cd);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4512d1:{NFSU2_TR(0x4512d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x130ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4512d7:{NFSU2_TR(0x4512d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4512db:{NFSU2_TR(0x4512db);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x134ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4512e1:{NFSU2_TR(0x4512e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4512e5:{NFSU2_TR(0x4512e5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4512e6:{NFSU2_TR(0x4512e6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4512e7:{NFSU2_TR(0x4512e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4512ecull));
TAIL_STATIC(0x44d190u,44d);
}
B4512ec:L4512ec:{c.instructions+=1;NFSU2_TR(0x4512ec);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x2cull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4512f0:L4512f0:{c.instructions+=3;NFSU2_TR(0x4512f0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4512f1:{NFSU2_TR(0x4512f1);
__builtin_memmove((R+24),(R+4),4);
}
B4512f3:{NFSU2_TR(0x4512f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4512f8ull));
TAIL_STATIC(0x44d390u,44d);
}
B4512f8:L4512f8:{c.instructions+=2;NFSU2_TR(0x4512f8);
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
B4512fd:{NFSU2_TR(0x4512fd);
if(r1(R+518)){{goto L451308;}}
}
B4512ff:L4512ff:{c.instructions+=2;NFSU2_TR(0x4512ff);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451300:{NFSU2_TR(0x451300);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x451305ull));
TAIL_STATIC(0x575630u,575);
}
B451305:L451305:{c.instructions+=1;NFSU2_TR(0x451305);
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
B451308:L451308:{c.instructions+=3;NFSU2_TR(0x451308);
__builtin_memmove((R+0),(R+24),4);
}
B45130a:{NFSU2_TR(0x45130a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45130b:{NFSU2_TR(0x45130b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B451310:L451310:{c.instructions+=17;NFSU2_TR(0x451310);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451311:{NFSU2_TR(0x451311);
__builtin_memmove((R+20),(R+16),4);
}
B451313:{NFSU2_TR(0x451313);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B451316:{NFSU2_TR(0x451316);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x28ull))));
}
B451319:{NFSU2_TR(0x451319);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45131a:{NFSU2_TR(0x45131a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B45131d:{NFSU2_TR(0x45131d);
w4(R+0,u32(r1(R+12)));
}
B451320:{NFSU2_TR(0x451320);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B451324:{NFSU2_TR(0x451324);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451325:{NFSU2_TR(0x451325);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B451329:{NFSU2_TR(0x451329);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45132a:{NFSU2_TR(0x45132a);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B45132e:{NFSU2_TR(0x45132e);
{u32 ea_=u32(u32(7882048u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B451334:{NFSU2_TR(0x451334);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B451337:{NFSU2_TR(0x451337);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451338:{NFSU2_TR(0x451338);
w4(R+4,u32(0x7ec510ull));
}
B45133d:{NFSU2_TR(0x45133d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x451342ull));
TAIL_STATIC(0x40c840u,40c);
}
B451342:L451342:{c.instructions+=4;NFSU2_TR(0x451342);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B451345:{NFSU2_TR(0x451345);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xffffffaaull))));
}
B451348:{NFSU2_TR(0x451348);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x13ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x13ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x13ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B45134b:{NFSU2_TR(0x45134b);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4515de;}}
}
B451351:L451351:{c.instructions+=1;NFSU2_TR(0x451351);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4515e4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B451358:L451358:{c.instructions+=10;NFSU2_TR(0x451358);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45135b:{NFSU2_TR(0x45135b);
w1(R+512,u8((r1(R+12))!=(u8(0x0ull))));
w1(R+12,u8(0-u32(r1(R+12))));
}
B45135d:{NFSU2_TR(0x45135d);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(R+12))));
w4(R+12,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B45135f:{NFSU2_TR(0x45135f);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+12,u32(u32(r4(R+12))&u32(u32(0x2af8ull))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B451365:{NFSU2_TR(0x451365);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B451369:{NFSU2_TR(0x451369);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45136a:{NFSU2_TR(0x45136a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B45136b:{NFSU2_TR(0x45136b);
__builtin_memmove((R+16),(R+20),4);
}
B45136d:{NFSU2_TR(0x45136d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B45136e:{NFSU2_TR(0x45136e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45136f:L45136f:{c.instructions+=10;NFSU2_TR(0x45136f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B451372:{NFSU2_TR(0x451372);
w1(R+512,u8((r1(R+12))!=(u8(0x0ull))));
w1(R+12,u8(0-u32(r1(R+12))));
}
B451374:{NFSU2_TR(0x451374);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(R+12))));
w4(R+12,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B451376:{NFSU2_TR(0x451376);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xffffd508ull))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B45137c:{NFSU2_TR(0x45137c);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B451380:{NFSU2_TR(0x451380);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B451381:{NFSU2_TR(0x451381);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B451382:{NFSU2_TR(0x451382);
__builtin_memmove((R+16),(R+20),4);
}
B451384:{NFSU2_TR(0x451384);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B451385:{NFSU2_TR(0x451385);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B451386:L451386:{c.instructions+=4;NFSU2_TR(0x451386);
{u32 ea_=u32(u32(7893316u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45138c:{NFSU2_TR(0x45138c);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B45138e:{NFSU2_TR(0x45138e);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B451392:{NFSU2_TR(0x451392);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x451397ull));
TAIL_STATIC(0x75bed4u,75b);
}
B451397:L451397:{c.instructions+=7;NFSU2_TR(0x451397);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45139a:{NFSU2_TR(0x45139a);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B45139e:{NFSU2_TR(0x45139e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45139f:{NFSU2_TR(0x45139f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4513a0:{NFSU2_TR(0x4513a0);
__builtin_memmove((R+16),(R+20),4);
}
B4513a2:{NFSU2_TR(0x4513a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4513a3:{NFSU2_TR(0x4513a3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4513a4:L4513a4:{c.instructions+=10;NFSU2_TR(0x4513a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4513a7:{NFSU2_TR(0x4513a7);
w1(R+512,u8((r1(R+12))!=(u8(0x0ull))));
w1(R+12,u8(0-u32(r1(R+12))));
}
B4513a9:{NFSU2_TR(0x4513a9);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(R+12))));
w4(R+12,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B4513ab:{NFSU2_TR(0x4513ab);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xffffd508ull))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4513b1:{NFSU2_TR(0x4513b1);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3eull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B4513b5:{NFSU2_TR(0x4513b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4513b6:{NFSU2_TR(0x4513b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4513b7:{NFSU2_TR(0x4513b7);
__builtin_memmove((R+16),(R+20),4);
}
B4513b9:{NFSU2_TR(0x4513b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4513ba:{NFSU2_TR(0x4513ba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4513bb:L4513bb:{c.instructions+=10;NFSU2_TR(0x4513bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4513be:{NFSU2_TR(0x4513be);
w1(R+512,u8((r1(R+12))!=(u8(0x0ull))));
w1(R+12,u8(0-u32(r1(R+12))));
}
B4513c0:{NFSU2_TR(0x4513c0);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(R+12))));
w4(R+12,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B4513c2:{NFSU2_TR(0x4513c2);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+12,u32(u32(r4(R+12))&u32(u32(0x2af8ull))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4513c8:{NFSU2_TR(0x4513c8);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3eull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B4513cc:{NFSU2_TR(0x4513cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4513cd:{NFSU2_TR(0x4513cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4513ce:{NFSU2_TR(0x4513ce);
__builtin_memmove((R+16),(R+20),4);
}
B4513d0:{NFSU2_TR(0x4513d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4513d1:{NFSU2_TR(0x4513d1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4513d2:L4513d2:{c.instructions+=3;NFSU2_TR(0x4513d2);
{u32 ea_=u32(u32(7893316u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4513d8:{NFSU2_TR(0x4513d8);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4513dc:{NFSU2_TR(0x4513dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4513e1ull));
TAIL_STATIC(0x75bed4u,75b);
}
B4513e1:L4513e1:{c.instructions+=7;NFSU2_TR(0x4513e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4513e4:{NFSU2_TR(0x4513e4);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3eull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B4513e8:{NFSU2_TR(0x4513e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4513e9:{NFSU2_TR(0x4513e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4513ea:{NFSU2_TR(0x4513ea);
__builtin_memmove((R+16),(R+20),4);
}
B4513ec:{NFSU2_TR(0x4513ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4513ed:{NFSU2_TR(0x4513ed);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4513ee:L4513ee:{c.instructions+=2;NFSU2_TR(0x4513ee);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4513f0:{NFSU2_TR(0x4513f0);
if(r1(R+518)){{goto L45140a;}}
}
B4513f2:L4513f2:{c.instructions+=9;NFSU2_TR(0x4513f2);
{u32 ea_=u32(u32(7893320u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4513f8:{NFSU2_TR(0x4513f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4513fb:{NFSU2_TR(0x4513fb);
{u32 ea_=u32(u32(7887724u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B451401:{NFSU2_TR(0x451401);
{u32 ea_=u32(r4(R+8)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B451404:{NFSU2_TR(0x451404);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B451405:{NFSU2_TR(0x451405);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B451406:{NFSU2_TR(0x451406);
__builtin_memmove((R+16),(R+20),4);
}
B451408:{NFSU2_TR(0x451408);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B451409:{NFSU2_TR(0x451409);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45140a:L45140a:{c.instructions+=7;NFSU2_TR(0x45140a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45140d:{NFSU2_TR(0x45140d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B451414:{NFSU2_TR(0x451414);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B451415:{NFSU2_TR(0x451415);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B451416:{NFSU2_TR(0x451416);
__builtin_memmove((R+16),(R+20),4);
}
B451418:{NFSU2_TR(0x451418);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B451419:{NFSU2_TR(0x451419);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45141a:L45141a:{c.instructions+=2;NFSU2_TR(0x45141a);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B45141c:{NFSU2_TR(0x45141c);
if(r1(R+518)){{goto L451436;}}
}
B45141e:L45141e:{c.instructions+=9;NFSU2_TR(0x45141e);
{u32 ea_=u32(u32(7893320u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B451424:{NFSU2_TR(0x451424);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B451427:{NFSU2_TR(0x451427);
{u32 ea_=u32(u32(7884072u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45142d:{NFSU2_TR(0x45142d);
{u32 ea_=u32(r4(R+4)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B451430:{NFSU2_TR(0x451430);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B451431:{NFSU2_TR(0x451431);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B451432:{NFSU2_TR(0x451432);
__builtin_memmove((R+16),(R+20),4);
}
B451434:{NFSU2_TR(0x451434);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B451435:{NFSU2_TR(0x451435);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B451436:L451436:{c.instructions+=7;NFSU2_TR(0x451436);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B451439:{NFSU2_TR(0x451439);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B451440:{NFSU2_TR(0x451440);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B451441:{NFSU2_TR(0x451441);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B451442:{NFSU2_TR(0x451442);
__builtin_memmove((R+16),(R+20),4);
}
B451444:{NFSU2_TR(0x451444);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B451445:{NFSU2_TR(0x451445);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B451446:L451446:{c.instructions+=3;NFSU2_TR(0x451446);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B451448:{NFSU2_TR(0x451448);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45144b:{NFSU2_TR(0x45144b);
if(r1(R+518)){{goto L451482;}}
}
B45144d:L45144d:{c.instructions+=8;NFSU2_TR(0x45144d);
{u32 ea_=u32(u32(7893320u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B451453:{NFSU2_TR(0x451453);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45145a:{NFSU2_TR(0x45145a);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B45145d:{NFSU2_TR(0x45145d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45145e:{NFSU2_TR(0x45145e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B45145f:{NFSU2_TR(0x45145f);
__builtin_memmove((R+16),(R+20),4);
}
B451461:{NFSU2_TR(0x451461);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B451462:{NFSU2_TR(0x451462);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B451463:L451463:{c.instructions+=3;NFSU2_TR(0x451463);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B451465:{NFSU2_TR(0x451465);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B451468:{NFSU2_TR(0x451468);
if(r1(R+518)){{goto L451482;}}
}
B45146a:L45146a:{c.instructions+=9;NFSU2_TR(0x45146a);
{u32 ea_=u32(u32(7893320u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B451470:{NFSU2_TR(0x451470);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B451477:{NFSU2_TR(0x451477);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B451479:{NFSU2_TR(0x451479);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B45147c:{NFSU2_TR(0x45147c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45147d:{NFSU2_TR(0x45147d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B45147e:{NFSU2_TR(0x45147e);
__builtin_memmove((R+16),(R+20),4);
}
B451480:{NFSU2_TR(0x451480);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B451481:{NFSU2_TR(0x451481);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B451482:L451482:{c.instructions+=8;NFSU2_TR(0x451482);
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
B451484:{NFSU2_TR(0x451484);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B451487:{NFSU2_TR(0x451487);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45148a:{NFSU2_TR(0x45148a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45148b:{NFSU2_TR(0x45148b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B45148c:{NFSU2_TR(0x45148c);
__builtin_memmove((R+16),(R+20),4);
}
B45148e:{NFSU2_TR(0x45148e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B45148f:{NFSU2_TR(0x45148f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B451490:L451490:{c.instructions+=10;NFSU2_TR(0x451490);
{u32 ea_=u32(u32(7893312u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B451496:{NFSU2_TR(0x451496);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B451499:{NFSU2_TR(0x451499);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B45149b:{NFSU2_TR(0x45149b);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45149f:{NFSU2_TR(0x45149f);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4514a2:{NFSU2_TR(0x4514a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4514a3:{NFSU2_TR(0x4514a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4514a4:{NFSU2_TR(0x4514a4);
__builtin_memmove((R+16),(R+20),4);
}
B4514a6:{NFSU2_TR(0x4514a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4514a7:{NFSU2_TR(0x4514a7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4514a8:L4514a8:{c.instructions+=2;NFSU2_TR(0x4514a8);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4514aa:{NFSU2_TR(0x4514aa);
if(r1(R+518)){{goto L4514be;}}
}
B4514ac:L4514ac:{c.instructions+=8;NFSU2_TR(0x4514ac);
{u32 ea_=u32(u32(7893320u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4514b2:{NFSU2_TR(0x4514b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4514b5:{NFSU2_TR(0x4514b5);
{u32 ea_=u32(r4(R+4)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4514b8:{NFSU2_TR(0x4514b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4514b9:{NFSU2_TR(0x4514b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4514ba:{NFSU2_TR(0x4514ba);
__builtin_memmove((R+16),(R+20),4);
}
B4514bc:{NFSU2_TR(0x4514bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4514bd:{NFSU2_TR(0x4514bd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4514be:L4514be:{c.instructions+=7;NFSU2_TR(0x4514be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4514c1:{NFSU2_TR(0x4514c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4514c8:{NFSU2_TR(0x4514c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4514c9:{NFSU2_TR(0x4514c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4514ca:{NFSU2_TR(0x4514ca);
__builtin_memmove((R+16),(R+20),4);
}
B4514cc:{NFSU2_TR(0x4514cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4514cd:{NFSU2_TR(0x4514cd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4514ce:L4514ce:{c.instructions+=2;NFSU2_TR(0x4514ce);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4514d0:{NFSU2_TR(0x4514d0);
if(r1(R+518)){{goto L4514e6;}}
}
B4514d2:L4514d2:{c.instructions+=9;NFSU2_TR(0x4514d2);
{u32 ea_=u32(u32(7893320u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4514d8:{NFSU2_TR(0x4514d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4514db:{NFSU2_TR(0x4514db);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B4514dd:{NFSU2_TR(0x4514dd);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4514e0:{NFSU2_TR(0x4514e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4514e1:{NFSU2_TR(0x4514e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4514e2:{NFSU2_TR(0x4514e2);
__builtin_memmove((R+16),(R+20),4);
}
B4514e4:{NFSU2_TR(0x4514e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4514e5:{NFSU2_TR(0x4514e5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4514e6:L4514e6:{c.instructions+=7;NFSU2_TR(0x4514e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4514e9:{NFSU2_TR(0x4514e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4514f0:{NFSU2_TR(0x4514f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4514f1:{NFSU2_TR(0x4514f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4514f2:{NFSU2_TR(0x4514f2);
__builtin_memmove((R+16),(R+20),4);
}
B4514f4:{NFSU2_TR(0x4514f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4514f5:{NFSU2_TR(0x4514f5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4514f6:L4514f6:{c.instructions+=10;NFSU2_TR(0x4514f6);
{u32 ea_=u32(u32(7893312u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4514fc:{NFSU2_TR(0x4514fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4514ff:{NFSU2_TR(0x4514ff);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B451501:{NFSU2_TR(0x451501);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B451505:{NFSU2_TR(0x451505);
{u32 ea_=u32(r4(R+8)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B451508:{NFSU2_TR(0x451508);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B451509:{NFSU2_TR(0x451509);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B45150a:{NFSU2_TR(0x45150a);
__builtin_memmove((R+16),(R+20),4);
}
B45150c:{NFSU2_TR(0x45150c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B45150d:{NFSU2_TR(0x45150d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45150e:L45150e:{c.instructions+=9;NFSU2_TR(0x45150e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B451510:{NFSU2_TR(0x451510);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B451512:{NFSU2_TR(0x451512);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B451515:{NFSU2_TR(0x451515);
__builtin_memmove(gp(0x828668),(R+0),4);
}
B45151a:{NFSU2_TR(0x45151a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45151b:{NFSU2_TR(0x45151b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B45151c:{NFSU2_TR(0x45151c);
__builtin_memmove((R+16),(R+20),4);
}
B45151e:{NFSU2_TR(0x45151e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B45151f:{NFSU2_TR(0x45151f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B451520:L451520:{c.instructions+=9;NFSU2_TR(0x451520);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B451522:{NFSU2_TR(0x451522);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B451524:{NFSU2_TR(0x451524);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B451527:{NFSU2_TR(0x451527);
__builtin_memmove(gp(0x82866c),(R+4),4);
}
B45152d:{NFSU2_TR(0x45152d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45152e:{NFSU2_TR(0x45152e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B45152f:{NFSU2_TR(0x45152f);
__builtin_memmove((R+16),(R+20),4);
}
B451531:{NFSU2_TR(0x451531);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B451532:{NFSU2_TR(0x451532);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B451533:L451533:{c.instructions+=9;NFSU2_TR(0x451533);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B451535:{NFSU2_TR(0x451535);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B451537:{NFSU2_TR(0x451537);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B45153a:{NFSU2_TR(0x45153a);
__builtin_memmove(gp(0x828670),(R+8),4);
}
B451540:{NFSU2_TR(0x451540);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B451541:{NFSU2_TR(0x451541);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B451542:{NFSU2_TR(0x451542);
__builtin_memmove((R+16),(R+20),4);
}
B451544:{NFSU2_TR(0x451544);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B451545:{NFSU2_TR(0x451545);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B451546:L451546:{c.instructions+=2;NFSU2_TR(0x451546);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451548:{NFSU2_TR(0x451548);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45154dull));
TAIL_STATIC(0x4022c0u,402);
}
B45154d:L45154d:{c.instructions+=6;NFSU2_TR(0x45154d);
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
B451550:{NFSU2_TR(0x451550);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B451551:{NFSU2_TR(0x451551);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B451552:{NFSU2_TR(0x451552);
__builtin_memmove((R+16),(R+20),4);
}
B451554:{NFSU2_TR(0x451554);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B451555:{NFSU2_TR(0x451555);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B451556:L451556:{c.instructions+=2;NFSU2_TR(0x451556);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451558:{NFSU2_TR(0x451558);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45155dull));
TAIL_STATIC(0x4022c0u,402);
}
B45155d:L45155d:{c.instructions+=6;NFSU2_TR(0x45155d);
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
B451560:{NFSU2_TR(0x451560);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B451561:{NFSU2_TR(0x451561);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B451562:{NFSU2_TR(0x451562);
__builtin_memmove((R+16),(R+20),4);
}
B451564:{NFSU2_TR(0x451564);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B451565:{NFSU2_TR(0x451565);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B451566:L451566:{c.instructions+=3;NFSU2_TR(0x451566);
__builtin_memmove((R+24),gp(0x8900ac),4);
}
B45156c:{NFSU2_TR(0x45156c);
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
B45156e:{NFSU2_TR(0x45156e);
if(r1(R+518)){{goto L4515de;}}
}
B451570:L451570:{c.instructions+=14;NFSU2_TR(0x451570);
{u32 ea_=u32(u32(8554144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B451576:{NFSU2_TR(0x451576);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B45157a:{NFSU2_TR(0x45157a);
{u32 ea_=u32(u32(8307920u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B451580:{NFSU2_TR(0x451580);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451581:{NFSU2_TR(0x451581);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B451585:{NFSU2_TR(0x451585);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451586:{NFSU2_TR(0x451586);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B45158a:{NFSU2_TR(0x45158a);
{u32 ea_=u32(u32(8554148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B451590:{NFSU2_TR(0x451590);
{u32 ea_=u32(u32(8307924u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B451596:{NFSU2_TR(0x451596);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B45159a:{NFSU2_TR(0x45159a);
{u32 ea_=u32(u32(8554152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4515a0:{NFSU2_TR(0x4515a0);
{u32 ea_=u32(u32(8307928u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4515a6:{NFSU2_TR(0x4515a6);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4515aa:{NFSU2_TR(0x4515aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4515afull));
TAIL_STATIC(0x43cf10u,43c);
}
B4515af:L4515af:{c.instructions+=7;NFSU2_TR(0x4515af);
u8 U[4];
w4(U+0,u32(0x41200000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4515b4:{NFSU2_TR(0x4515b4);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4515b8:{NFSU2_TR(0x4515b8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4515b9:{NFSU2_TR(0x4515b9);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4515bd:{NFSU2_TR(0x4515bd);
u8 U[4];
w4(U+0,u32(0x7ec4d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4515c2:{NFSU2_TR(0x4515c2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4515c3:{NFSU2_TR(0x4515c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4515c8ull));
TAIL_STATIC(0x43d0c0u,43d);
}
B4515c8:L4515c8:{c.instructions+=8;NFSU2_TR(0x4515c8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4515cb:{NFSU2_TR(0x4515cb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4515cd:{NFSU2_TR(0x4515cd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4515cf:{NFSU2_TR(0x4515cf);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4515d1:{NFSU2_TR(0x4515d1);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4515d5:{NFSU2_TR(0x4515d5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4515d6:{NFSU2_TR(0x4515d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4515d9:{NFSU2_TR(0x4515d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4515deull));
TAIL_STATIC(0x5fbd60u,5fb);
}
B4515de:L4515de:{c.instructions+=5;NFSU2_TR(0x4515de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4515df:{NFSU2_TR(0x4515df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4515e0:{NFSU2_TR(0x4515e0);
__builtin_memmove((R+16),(R+20),4);
}
B4515e2:{NFSU2_TR(0x4515e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4515e3:{NFSU2_TR(0x4515e3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B451640:L451640:{c.instructions+=3;NFSU2_TR(0x451640);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451641:{NFSU2_TR(0x451641);
__builtin_memmove((R+24),(R+4),4);
}
B451643:{NFSU2_TR(0x451643);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x451648ull));
TAIL_STATIC(0x44dc50u,44d);
}
B451648:L451648:{c.instructions+=2;NFSU2_TR(0x451648);
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
B45164d:{NFSU2_TR(0x45164d);
if(r1(R+518)){{goto L451658;}}
}
B45164f:L45164f:{c.instructions+=2;NFSU2_TR(0x45164f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451650:{NFSU2_TR(0x451650);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x451655ull));
TAIL_STATIC(0x575630u,575);
}
B451655:L451655:{c.instructions+=1;NFSU2_TR(0x451655);
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
B451658:L451658:{c.instructions+=3;NFSU2_TR(0x451658);
__builtin_memmove((R+0),(R+24),4);
}
B45165a:{NFSU2_TR(0x45165a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45165b:{NFSU2_TR(0x45165b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B451660:L451660:{c.instructions+=18;NFSU2_TR(0x451660);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451661:{NFSU2_TR(0x451661);
__builtin_memmove((R+20),(R+16),4);
}
B451663:{NFSU2_TR(0x451663);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B451666:{NFSU2_TR(0x451666);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451668:{NFSU2_TR(0x451668);
u8 U[4];
w4(U+0,u32(0x772152ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45166d:{NFSU2_TR(0x45166d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B451673:{NFSU2_TR(0x451673);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451674:{NFSU2_TR(0x451674);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45167b:{NFSU2_TR(0x45167b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x158ull))));
}
B451681:{NFSU2_TR(0x451681);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B451684:{NFSU2_TR(0x451684);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451685:{NFSU2_TR(0x451685);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451686:{NFSU2_TR(0x451686);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451687:{NFSU2_TR(0x451687);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451689:{NFSU2_TR(0x451689);
__builtin_memmove((R+24),(R+4),4);
}
B45168b:{NFSU2_TR(0x45168b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45168c:{NFSU2_TR(0x45168c);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B451690:{NFSU2_TR(0x451690);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x451695ull));
TAIL_STATIC(0x44ab90u,44a);
}
B451695:L451695:{c.instructions+=28;NFSU2_TR(0x451695);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B451698:{NFSU2_TR(0x451698);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45169b:{NFSU2_TR(0x45169b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45169e:{NFSU2_TR(0x45169e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4516a1:{NFSU2_TR(0x4516a1);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4516a3:{NFSU2_TR(0x4516a3);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4516a5:{NFSU2_TR(0x4516a5);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4516a8:{NFSU2_TR(0x4516a8);
__builtin_memmove((R+8),(R+518),1);
}
B4516ab:{NFSU2_TR(0x4516ab);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4516ae:{NFSU2_TR(0x4516ae);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B4516b1:{NFSU2_TR(0x4516b1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x51ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4516b4:{NFSU2_TR(0x4516b4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x53ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4516b7:{NFSU2_TR(0x4516b7);
__builtin_memmove((R+8),gp(0x787154),4);
}
B4516bd:{NFSU2_TR(0x4516bd);
u8 U[4];
w4(U+0,u32(0x787f28ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4516c3:{NFSU2_TR(0x4516c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4516c6:{NFSU2_TR(0x4516c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4516c9:{NFSU2_TR(0x4516c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4516cc:{NFSU2_TR(0x4516cc);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x52ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4516cf:{NFSU2_TR(0x4516cf);
__builtin_memmove((R+4),gp(0x86518c),4);
}
B4516d5:{NFSU2_TR(0x4516d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4516d8:{NFSU2_TR(0x4516d8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4516d9:{NFSU2_TR(0x4516d9);
u8 U[4];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4516dd:{NFSU2_TR(0x4516dd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4516de:{NFSU2_TR(0x4516de);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B4516e1:{NFSU2_TR(0x4516e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7ec610ull))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B4516e8:{NFSU2_TR(0x4516e8);
u8 U[8];
w4(U+0,u32(u32(u32(0x174ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4516ef:{NFSU2_TR(0x4516ef);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4516f3:{NFSU2_TR(0x4516f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4516f8ull));
TAIL_STATIC(0x446dc0u,446);
}
B4516f8:L4516f8:{c.instructions+=2;NFSU2_TR(0x4516f8);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4516fa:{NFSU2_TR(0x4516fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4516ffull));
TAIL_STATIC(0x575620u,575);
}
B4516ff:L4516ff:{c.instructions+=3;NFSU2_TR(0x4516ff);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B451702:{NFSU2_TR(0x451702);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B451704:{NFSU2_TR(0x451704);
if(r1(R+518)){{goto L45172d;}}
}
B451706:L451706:{c.instructions+=11;NFSU2_TR(0x451706);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45170a:{NFSU2_TR(0x45170a);
__builtin_memmove((R+8),gp(0x787150),4);
}
B451710:{NFSU2_TR(0x451710);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B451713:{NFSU2_TR(0x451713);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B451715:{NFSU2_TR(0x451715);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B451718:{NFSU2_TR(0x451718);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45171b:{NFSU2_TR(0x45171b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45171e:{NFSU2_TR(0x45171e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B451721:{NFSU2_TR(0x451721);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B451725:{NFSU2_TR(0x451725);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2eull))));
w2(U+4,u16(0x1ull));
s2(u32(r4(U+0)),r2(U+4));
}
B45172b:{NFSU2_TR(0x45172b);
{goto L45172f;}
}
B45172d:L45172d:{c.instructions+=1;NFSU2_TR(0x45172d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B45172f:L45172f:{c.instructions+=3;NFSU2_TR(0x45172f);
u8 U[4];
w4(U+0,u32(0x90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451734:{NFSU2_TR(0x451734);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B451737:{NFSU2_TR(0x451737);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45173cull));
TAIL_STATIC(0x575620u,575);
}
B45173c:L45173c:{c.instructions+=3;NFSU2_TR(0x45173c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B45173f:{NFSU2_TR(0x45173f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B451741:{NFSU2_TR(0x451741);
if(r1(R+518)){{goto L45175a;}}
}
B451743:L451743:{c.instructions+=7;NFSU2_TR(0x451743);
__builtin_memmove((R+4),gp(0x787150),4);
}
B451749:{NFSU2_TR(0x451749);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45174d:{NFSU2_TR(0x45174d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45174e:{NFSU2_TR(0x45174e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45174f:{NFSU2_TR(0x45174f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451751:{NFSU2_TR(0x451751);
__builtin_memmove((R+4),(R+0),4);
}
B451753:{NFSU2_TR(0x451753);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x451758ull));
TAIL_STATIC(0x4419a0u,441);
}
B451758:L451758:{c.instructions+=1;NFSU2_TR(0x451758);
{goto L45175c;}
}
B45175a:L45175a:{c.instructions+=1;NFSU2_TR(0x45175a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B45175c:L45175c:{c.instructions+=3;NFSU2_TR(0x45175c);
u8 U[4];
w4(U+0,u32(0x90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451761:{NFSU2_TR(0x451761);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B451764:{NFSU2_TR(0x451764);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x451769ull));
TAIL_STATIC(0x575620u,575);
}
B451769:L451769:{c.instructions+=3;NFSU2_TR(0x451769);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B45176c:{NFSU2_TR(0x45176c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45176e:{NFSU2_TR(0x45176e);
if(r1(R+518)){{goto L451787;}}
}
B451770:L451770:{c.instructions+=7;NFSU2_TR(0x451770);
__builtin_memmove((R+4),gp(0x787150),4);
}
B451776:{NFSU2_TR(0x451776);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45177a:{NFSU2_TR(0x45177a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45177b:{NFSU2_TR(0x45177b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45177c:{NFSU2_TR(0x45177c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45177e:{NFSU2_TR(0x45177e);
__builtin_memmove((R+4),(R+0),4);
}
B451780:{NFSU2_TR(0x451780);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x451785ull));
TAIL_STATIC(0x4419a0u,441);
}
B451785:L451785:{c.instructions+=1;NFSU2_TR(0x451785);
{goto L451789;}
}
B451787:L451787:{c.instructions+=1;NFSU2_TR(0x451787);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B451789:L451789:{c.instructions+=3;NFSU2_TR(0x451789);
u8 U[4];
w4(U+0,u32(0x90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45178e:{NFSU2_TR(0x45178e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B451791:{NFSU2_TR(0x451791);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x451796ull));
TAIL_STATIC(0x575620u,575);
}
B451796:L451796:{c.instructions+=3;NFSU2_TR(0x451796);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B451799:{NFSU2_TR(0x451799);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45179b:{NFSU2_TR(0x45179b);
if(r1(R+518)){{goto L4517b7;}}
}
B45179d:L45179d:{c.instructions+=7;NFSU2_TR(0x45179d);
__builtin_memmove((R+4),gp(0x787150),4);
}
B4517a3:{NFSU2_TR(0x4517a3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4517a4:{NFSU2_TR(0x4517a4);
u8 U[4];
w4(U+0,u32(u32(u32(0x114ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4517ab:{NFSU2_TR(0x4517ab);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4517ac:{NFSU2_TR(0x4517ac);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4517ae:{NFSU2_TR(0x4517ae);
__builtin_memmove((R+4),(R+0),4);
}
B4517b0:{NFSU2_TR(0x4517b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4517b5ull));
TAIL_STATIC(0x441a20u,441);
}
B4517b5:L4517b5:{c.instructions+=1;NFSU2_TR(0x4517b5);
{goto L4517b9;}
}
B4517b7:L4517b7:{c.instructions+=1;NFSU2_TR(0x4517b7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4517b9:L4517b9:{c.instructions+=3;NFSU2_TR(0x4517b9);
u8 U[4];
w4(U+0,u32(0x90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4517be:{NFSU2_TR(0x4517be);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4517c1:{NFSU2_TR(0x4517c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4517c6ull));
TAIL_STATIC(0x575620u,575);
}
B4517c6:L4517c6:{c.instructions+=3;NFSU2_TR(0x4517c6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4517c9:{NFSU2_TR(0x4517c9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4517cb:{NFSU2_TR(0x4517cb);
if(r1(R+518)){{goto L4517e7;}}
}
B4517cd:L4517cd:{c.instructions+=7;NFSU2_TR(0x4517cd);
__builtin_memmove((R+4),gp(0x787150),4);
}
B4517d3:{NFSU2_TR(0x4517d3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4517d4:{NFSU2_TR(0x4517d4);
u8 U[4];
w4(U+0,u32(u32(u32(0x114ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4517db:{NFSU2_TR(0x4517db);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4517dc:{NFSU2_TR(0x4517dc);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4517de:{NFSU2_TR(0x4517de);
__builtin_memmove((R+4),(R+0),4);
}
B4517e0:{NFSU2_TR(0x4517e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4517e5ull));
TAIL_STATIC(0x441a20u,441);
}
B4517e5:L4517e5:{c.instructions+=1;NFSU2_TR(0x4517e5);
{goto L4517e9;}
}
B4517e7:L4517e7:{c.instructions+=1;NFSU2_TR(0x4517e7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4517e9:L4517e9:{c.instructions+=3;NFSU2_TR(0x4517e9);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4517eb:{NFSU2_TR(0x4517eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4517ee:{NFSU2_TR(0x4517ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4517f3ull));
TAIL_STATIC(0x575620u,575);
}
B4517f3:L4517f3:{c.instructions+=5;NFSU2_TR(0x4517f3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4517f6:{NFSU2_TR(0x4517f6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4517fa:{NFSU2_TR(0x4517fa);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4517fc:{NFSU2_TR(0x4517fc);
u8 U[5];
w4(U+0,u32(u32(u32(0x16cull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B451804:{NFSU2_TR(0x451804);
if(r1(R+518)){{goto L451811;}}
}
B451806:L451806:{c.instructions+=3;NFSU2_TR(0x451806);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451808:{NFSU2_TR(0x451808);
__builtin_memmove((R+4),(R+0),4);
}
B45180a:{NFSU2_TR(0x45180a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45180full));
TAIL_STATIC(0x446e70u,446);
}
B45180f:L45180f:{c.instructions+=1;NFSU2_TR(0x45180f);
{goto L451813;}
}
B451811:L451811:{c.instructions+=1;NFSU2_TR(0x451811);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B451813:L451813:{c.instructions+=6;NFSU2_TR(0x451813);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B451816:{NFSU2_TR(0x451816);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B451819:{NFSU2_TR(0x451819);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45181c:{NFSU2_TR(0x45181c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45181d:{NFSU2_TR(0x45181d);
u8 U[5];
w4(U+0,u32(u32(u32(0x170ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B451824:{NFSU2_TR(0x451824);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x451829ull));
TAIL_STATIC(0x5ecca0u,5ec);
}
B451829:L451829:{c.instructions+=8;NFSU2_TR(0x451829);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45182b:{NFSU2_TR(0x45182b);
u8 U[4];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B45182f:{NFSU2_TR(0x45182f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451830:{NFSU2_TR(0x451830);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451831:{NFSU2_TR(0x451831);
u8 U[4];
w4(U+0,u32(u32(u32(0x12cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B451838:{NFSU2_TR(0x451838);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451839:{NFSU2_TR(0x451839);
__builtin_memmove((R+4),(R+24),4);
}
B45183b:{NFSU2_TR(0x45183b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x451840ull));
TAIL_STATIC(0x44de90u,44d);
}
B451840:L451840:{c.instructions+=5;NFSU2_TR(0x451840);
u8 U[4];
w4(U+0,u32(u32(u32(0x120ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B451847:{NFSU2_TR(0x451847);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451848:{NFSU2_TR(0x451848);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B45184c:{NFSU2_TR(0x45184c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45184d:{NFSU2_TR(0x45184d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x451852ull));
TAIL_STATIC(0x5baf90u,5ba);
}
B451852:L451852:{c.instructions+=4;NFSU2_TR(0x451852);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x51ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B451855:{NFSU2_TR(0x451855);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B451858:{NFSU2_TR(0x451858);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B45185a:{NFSU2_TR(0x45185a);
if(r1(R+518)){{goto L4518ac;}}
}
B45185c:L45185c:{c.instructions+=24;NFSU2_TR(0x45185c);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B451860:{NFSU2_TR(0x451860);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B451862:{NFSU2_TR(0x451862);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B451866:{NFSU2_TR(0x451866);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45186a:{NFSU2_TR(0x45186a);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B45186c:{NFSU2_TR(0x45186c);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B451870:{NFSU2_TR(0x451870);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B451874:{NFSU2_TR(0x451874);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B451876:{NFSU2_TR(0x451876);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B45187a:{NFSU2_TR(0x45187a);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45187e:{NFSU2_TR(0x45187e);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B451880:{NFSU2_TR(0x451880);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B451884:{NFSU2_TR(0x451884);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B451888:{NFSU2_TR(0x451888);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B45188a:{NFSU2_TR(0x45188a);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B45188e:{NFSU2_TR(0x45188e);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B451892:{NFSU2_TR(0x451892);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B451894:{NFSU2_TR(0x451894);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B451898:{NFSU2_TR(0x451898);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45189c:{NFSU2_TR(0x45189c);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B45189e:{NFSU2_TR(0x45189e);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4518a2:{NFSU2_TR(0x4518a2);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4518a6:{NFSU2_TR(0x4518a6);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B4518a8:{NFSU2_TR(0x4518a8);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4518ac:L4518ac:{c.instructions+=10;NFSU2_TR(0x4518ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4518af:{NFSU2_TR(0x4518af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4518b2:{NFSU2_TR(0x4518b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4518b5:{NFSU2_TR(0x4518b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4518b8:{NFSU2_TR(0x4518b8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4518b9:{NFSU2_TR(0x4518b9);
__builtin_memmove((R+4),(R+24),4);
}
B4518bb:{NFSU2_TR(0x4518bb);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x70ull))));
}
B4518be:{NFSU2_TR(0x4518be);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4518c2:{NFSU2_TR(0x4518c2);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4518c6:{NFSU2_TR(0x4518c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4518cbull));
TAIL_STATIC(0x444910u,444);
}
B4518cb:L4518cb:{c.instructions+=7;NFSU2_TR(0x4518cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4518cf:{NFSU2_TR(0x4518cf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4518d0:{NFSU2_TR(0x4518d0);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4518d4:{NFSU2_TR(0x4518d4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4518d5:{NFSU2_TR(0x4518d5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4518d6:{NFSU2_TR(0x4518d6);
__builtin_memmove((R+4),(R+24),4);
}
B4518d8:{NFSU2_TR(0x4518d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4518ddull));
TAIL_STATIC(0x444980u,444);
}
B4518dd:L4518dd:{c.instructions+=7;NFSU2_TR(0x4518dd);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4518e1:{NFSU2_TR(0x4518e1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4518e2:{NFSU2_TR(0x4518e2);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4518e6:{NFSU2_TR(0x4518e6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4518e7:{NFSU2_TR(0x4518e7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4518e8:{NFSU2_TR(0x4518e8);
__builtin_memmove((R+4),(R+24),4);
}
B4518ea:{NFSU2_TR(0x4518ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4518efull));
TAIL_STATIC(0x444a70u,444);
}
B4518ef:L4518ef:{c.instructions+=23;NFSU2_TR(0x4518ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4518f2:{NFSU2_TR(0x4518f2);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4518f4:{NFSU2_TR(0x4518f4);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4518f7:{NFSU2_TR(0x4518f7);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4518fa:{NFSU2_TR(0x4518fa);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4518fd:{NFSU2_TR(0x4518fd);
{u32 ea_=u32(r4(R+0)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B451900:{NFSU2_TR(0x451900);
{u32 ea_=u32(r4(R+0)+u32(104u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B451903:{NFSU2_TR(0x451903);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B451905:{NFSU2_TR(0x451905);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B451907:{NFSU2_TR(0x451907);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B451909:{NFSU2_TR(0x451909);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B45190b:{NFSU2_TR(0x45190b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B45190d:{NFSU2_TR(0x45190d);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B45190f:{NFSU2_TR(0x45190f);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B451911:{NFSU2_TR(0x451911);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B451913:{NFSU2_TR(0x451913);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B451915:{NFSU2_TR(0x451915);
__asm__ volatile(".byte 0xdd,0xdb":::"memory");
}
B451917:{NFSU2_TR(0x451917);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B451919:{NFSU2_TR(0x451919);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B45191b:{NFSU2_TR(0x45191b);
{u32 ea_=u32(u32(7893324u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B451921:{NFSU2_TR(0x451921);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B451923:{NFSU2_TR(0x451923);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B451926:{NFSU2_TR(0x451926);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4519a4;}}
}
B451928:L451928:{c.instructions+=38;NFSU2_TR(0x451928);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45192b:{NFSU2_TR(0x45192b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45192e:{NFSU2_TR(0x45192e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B451931:{NFSU2_TR(0x451931);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B451933:{NFSU2_TR(0x451933);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B451936:{NFSU2_TR(0x451936);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B45193a:{NFSU2_TR(0x45193a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45193d:{NFSU2_TR(0x45193d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B451940:{NFSU2_TR(0x451940);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B451943:{NFSU2_TR(0x451943);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B451945:{NFSU2_TR(0x451945);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B451948:{NFSU2_TR(0x451948);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B45194c:{NFSU2_TR(0x45194c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45194f:{NFSU2_TR(0x45194f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B451952:{NFSU2_TR(0x451952);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B451955:{NFSU2_TR(0x451955);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B451958:{NFSU2_TR(0x451958);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B45195c:{NFSU2_TR(0x45195c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45195f:{NFSU2_TR(0x45195f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B451962:{NFSU2_TR(0x451962);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B451965:{NFSU2_TR(0x451965);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B451968:{NFSU2_TR(0x451968);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B45196f:{NFSU2_TR(0x45196f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B451972:{NFSU2_TR(0x451972);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B451975:{NFSU2_TR(0x451975);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B451978:{NFSU2_TR(0x451978);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B45197a:{NFSU2_TR(0x45197a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45197d:{NFSU2_TR(0x45197d);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B451981:{NFSU2_TR(0x451981);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B451984:{NFSU2_TR(0x451984);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B451987:{NFSU2_TR(0x451987);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45198a:{NFSU2_TR(0x45198a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45198d:{NFSU2_TR(0x45198d);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B451991:{NFSU2_TR(0x451991);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B451994:{NFSU2_TR(0x451994);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B451997:{NFSU2_TR(0x451997);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45199a:{NFSU2_TR(0x45199a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45199d:{NFSU2_TR(0x45199d);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B4519a4:L4519a4:{c.instructions+=9;NFSU2_TR(0x4519a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x164ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4519ab:{NFSU2_TR(0x4519ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4519ac:{NFSU2_TR(0x4519ac);
__builtin_memmove((R+0),(R+24),4);
}
B4519ae:{NFSU2_TR(0x4519ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4519af:{NFSU2_TR(0x4519af);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4519b6:{NFSU2_TR(0x4519b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4519b7:{NFSU2_TR(0x4519b7);
__builtin_memmove((R+16),(R+20),4);
}
B4519b9:{NFSU2_TR(0x4519b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4519ba:{NFSU2_TR(0x4519ba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4519c0:L4519c0:{c.instructions+=3;NFSU2_TR(0x4519c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4519c1:{NFSU2_TR(0x4519c1);
__builtin_memmove((R+24),(R+4),4);
}
B4519c3:{NFSU2_TR(0x4519c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4519c8ull));
TAIL_STATIC(0x44dda0u,44d);
}
B4519c8:L4519c8:{c.instructions+=2;NFSU2_TR(0x4519c8);
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
B4519cd:{NFSU2_TR(0x4519cd);
if(r1(R+518)){{goto L4519d8;}}
}
B4519cf:L4519cf:{c.instructions+=2;NFSU2_TR(0x4519cf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4519d0:{NFSU2_TR(0x4519d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4519d5ull));
TAIL_STATIC(0x575630u,575);
}
B4519d5:L4519d5:{c.instructions+=1;NFSU2_TR(0x4519d5);
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
B4519d8:L4519d8:{c.instructions+=3;NFSU2_TR(0x4519d8);
__builtin_memmove((R+0),(R+24),4);
}
B4519da:{NFSU2_TR(0x4519da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4519db:{NFSU2_TR(0x4519db);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4519e0:L4519e0:{c.instructions+=17;NFSU2_TR(0x4519e0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4519e1:{NFSU2_TR(0x4519e1);
__builtin_memmove((R+20),(R+16),4);
}
B4519e3:{NFSU2_TR(0x4519e3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B4519e6:{NFSU2_TR(0x4519e6);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4519e8:{NFSU2_TR(0x4519e8);
u8 U[4];
w4(U+0,u32(0x77216bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4519ed:{NFSU2_TR(0x4519ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4519f3:{NFSU2_TR(0x4519f3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4519f4:{NFSU2_TR(0x4519f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4519fb:{NFSU2_TR(0x4519fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8cull))));
}
B451a01:{NFSU2_TR(0x451a01);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B451a04:{NFSU2_TR(0x451a04);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451a05:{NFSU2_TR(0x451a05);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451a06:{NFSU2_TR(0x451a06);
u8 U[4];
w4(U+0,u32(0x13ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451a08:{NFSU2_TR(0x451a08);
__builtin_memmove((R+24),(R+4),4);
}
B451a0a:{NFSU2_TR(0x451a0a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451a0b:{NFSU2_TR(0x451a0b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B451a0f:{NFSU2_TR(0x451a0f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x451a14ull));
TAIL_STATIC(0x44ab90u,44a);
}
B451a14:L451a14:{c.instructions+=9;NFSU2_TR(0x451a14);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B451a17:{NFSU2_TR(0x451a17);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B451a1a:{NFSU2_TR(0x451a1a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B451a1c:{NFSU2_TR(0x451a1c);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451a1e:{NFSU2_TR(0x451a1e);
u8 U[8];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B451a25:{NFSU2_TR(0x451a25);
u8 U[4];
w4(U+0,u32(0x787f78ull));
s4(u32(r4(R+24)),r4(U+0));
}
B451a2b:{NFSU2_TR(0x451a2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B451a2e:{NFSU2_TR(0x451a2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B451a31:{NFSU2_TR(0x451a31);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x451a36ull));
TAIL_STATIC(0x575620u,575);
}
B451a36:L451a36:{c.instructions+=3;NFSU2_TR(0x451a36);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B451a39:{NFSU2_TR(0x451a39);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B451a3b:{NFSU2_TR(0x451a3b);
if(r1(R+518)){{goto L451a64;}}
}
B451a3d:L451a3d:{c.instructions+=10;NFSU2_TR(0x451a3d);
__builtin_memmove((R+4),gp(0x787220),4);
}
B451a43:{NFSU2_TR(0x451a43);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B451a45:{NFSU2_TR(0x451a45);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B451a48:{NFSU2_TR(0x451a48);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B451a4b:{NFSU2_TR(0x451a4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B451a4e:{NFSU2_TR(0x451a4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B451a51:{NFSU2_TR(0x451a51);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B451a58:{NFSU2_TR(0x451a58);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+28),2);
s2(u32(r4(U+0)),r2(U+4));
}
B451a5c:{NFSU2_TR(0x451a5c);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2eull))));
w2(U+4,u16(0x1ull));
s2(u32(r4(U+0)),r2(U+4));
}
B451a62:{NFSU2_TR(0x451a62);
{goto L451a66;}
}
B451a64:L451a64:{c.instructions+=1;NFSU2_TR(0x451a64);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B451a66:L451a66:{c.instructions+=3;NFSU2_TR(0x451a66);
u8 U[4];
w4(U+0,u32(0x90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451a6b:{NFSU2_TR(0x451a6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B451a6e:{NFSU2_TR(0x451a6e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x451a73ull));
TAIL_STATIC(0x575620u,575);
}
B451a73:L451a73:{c.instructions+=3;NFSU2_TR(0x451a73);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B451a76:{NFSU2_TR(0x451a76);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B451a78:{NFSU2_TR(0x451a78);
if(r1(R+518)){{goto L451a91;}}
}
B451a7a:L451a7a:{c.instructions+=6;NFSU2_TR(0x451a7a);
__builtin_memmove((R+8),gp(0x787224),4);
}
B451a80:{NFSU2_TR(0x451a80);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451a85:{NFSU2_TR(0x451a85);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451a86:{NFSU2_TR(0x451a86);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451a88:{NFSU2_TR(0x451a88);
__builtin_memmove((R+4),(R+0),4);
}
B451a8a:{NFSU2_TR(0x451a8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x451a8full));
TAIL_STATIC(0x4419a0u,441);
}
B451a8f:L451a8f:{c.instructions+=1;NFSU2_TR(0x451a8f);
{goto L451a93;}
}
B451a91:L451a91:{c.instructions+=1;NFSU2_TR(0x451a91);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B451a93:L451a93:{c.instructions+=3;NFSU2_TR(0x451a93);
u8 U[4];
w4(U+0,u32(0x90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451a98:{NFSU2_TR(0x451a98);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B451a9b:{NFSU2_TR(0x451a9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x451aa0ull));
TAIL_STATIC(0x575620u,575);
}
B451aa0:L451aa0:{c.instructions+=3;NFSU2_TR(0x451aa0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B451aa3:{NFSU2_TR(0x451aa3);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B451aa5:{NFSU2_TR(0x451aa5);
if(r1(R+518)){{goto L451abe;}}
}
B451aa7:L451aa7:{c.instructions+=6;NFSU2_TR(0x451aa7);
__builtin_memmove((R+4),gp(0x787228),4);
}
B451aad:{NFSU2_TR(0x451aad);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451ab2:{NFSU2_TR(0x451ab2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451ab3:{NFSU2_TR(0x451ab3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451ab5:{NFSU2_TR(0x451ab5);
__builtin_memmove((R+4),(R+0),4);
}
B451ab7:{NFSU2_TR(0x451ab7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x451abcull));
TAIL_STATIC(0x4419a0u,441);
}
B451abc:L451abc:{c.instructions+=1;NFSU2_TR(0x451abc);
{goto L451ac0;}
}
B451abe:L451abe:{c.instructions+=1;NFSU2_TR(0x451abe);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B451ac0:L451ac0:{c.instructions+=9;NFSU2_TR(0x451ac0);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B451ac4:{NFSU2_TR(0x451ac4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451ac5:{NFSU2_TR(0x451ac5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B451ac8:{NFSU2_TR(0x451ac8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451ac9:{NFSU2_TR(0x451ac9);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B451acd:{NFSU2_TR(0x451acd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451ace:{NFSU2_TR(0x451ace);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451acf:{NFSU2_TR(0x451acf);
__builtin_memmove((R+4),(R+24),4);
}
B451ad1:{NFSU2_TR(0x451ad1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x451ad6ull));
TAIL_STATIC(0x44e320u,44e);
}
B451ad6:L451ad6:{c.instructions+=4;NFSU2_TR(0x451ad6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B451ad9:{NFSU2_TR(0x451ad9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451ada:{NFSU2_TR(0x451ada);
__builtin_memmove((R+4),(R+24),4);
}
B451adc:{NFSU2_TR(0x451adc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x451ae1ull));
TAIL_STATIC(0x444910u,444);
}
B451ae1:L451ae1:{c.instructions+=9;NFSU2_TR(0x451ae1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B451ae4:{NFSU2_TR(0x451ae4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B451ae7:{NFSU2_TR(0x451ae7);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x70ull))));
}
B451aea:{NFSU2_TR(0x451aea);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451aeb:{NFSU2_TR(0x451aeb);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B451aef:{NFSU2_TR(0x451aef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451af0:{NFSU2_TR(0x451af0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451af1:{NFSU2_TR(0x451af1);
__builtin_memmove((R+4),(R+24),4);
}
B451af3:{NFSU2_TR(0x451af3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x451af8ull));
TAIL_STATIC(0x444980u,444);
}
B451af8:L451af8:{c.instructions+=9;NFSU2_TR(0x451af8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B451afb:{NFSU2_TR(0x451afb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B451afe:{NFSU2_TR(0x451afe);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x70ull))));
}
B451b01:{NFSU2_TR(0x451b01);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451b02:{NFSU2_TR(0x451b02);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B451b06:{NFSU2_TR(0x451b06);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451b07:{NFSU2_TR(0x451b07);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451b08:{NFSU2_TR(0x451b08);
__builtin_memmove((R+4),(R+24),4);
}
B451b0a:{NFSU2_TR(0x451b0a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x451b0full));
TAIL_STATIC(0x444a70u,444);
}
B451b0f:L451b0f:{c.instructions+=8;NFSU2_TR(0x451b0f);
u8 U[8];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B451b16:{NFSU2_TR(0x451b16);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B451b17:{NFSU2_TR(0x451b17);
__builtin_memmove((R+0),(R+24),4);
}
B451b19:{NFSU2_TR(0x451b19);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B451b20:{NFSU2_TR(0x451b20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B451b21:{NFSU2_TR(0x451b21);
__builtin_memmove((R+16),(R+20),4);
}
B451b23:{NFSU2_TR(0x451b23);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B451b24:{NFSU2_TR(0x451b24);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B451b30:L451b30:{c.instructions+=3;NFSU2_TR(0x451b30);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451b31:{NFSU2_TR(0x451b31);
__builtin_memmove((R+24),(R+4),4);
}
B451b33:{NFSU2_TR(0x451b33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x451b38ull));
TAIL_STATIC(0x44e280u,44e);
}
B451b38:L451b38:{c.instructions+=2;NFSU2_TR(0x451b38);
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
B451b3d:{NFSU2_TR(0x451b3d);
if(r1(R+518)){{goto L451b48;}}
}
B451b3f:L451b3f:{c.instructions+=2;NFSU2_TR(0x451b3f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451b40:{NFSU2_TR(0x451b40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x451b45ull));
TAIL_STATIC(0x575630u,575);
}
B451b45:L451b45:{c.instructions+=1;NFSU2_TR(0x451b45);
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
B451b48:L451b48:{c.instructions+=3;NFSU2_TR(0x451b48);
__builtin_memmove((R+0),(R+24),4);
}
B451b4a:{NFSU2_TR(0x451b4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B451b4b:{NFSU2_TR(0x451b4b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B451b50:L451b50:{c.instructions+=3;NFSU2_TR(0x451b50);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451b51:{NFSU2_TR(0x451b51);
__builtin_memmove((R+24),(R+4),4);
}
B451b53:{NFSU2_TR(0x451b53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x451b58ull));
TAIL_STATIC(0x44ede0u,44e);
}
B451b58:L451b58:{c.instructions+=2;NFSU2_TR(0x451b58);
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
B451b5d:{NFSU2_TR(0x451b5d);
if(r1(R+518)){{goto L451b68;}}
}
B451b5f:L451b5f:{c.instructions+=2;NFSU2_TR(0x451b5f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451b60:{NFSU2_TR(0x451b60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x451b65ull));
TAIL_STATIC(0x575630u,575);
}
B451b65:L451b65:{c.instructions+=1;NFSU2_TR(0x451b65);
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
B451b68:L451b68:{c.instructions+=3;NFSU2_TR(0x451b68);
__builtin_memmove((R+0),(R+24),4);
}
B451b6a:{NFSU2_TR(0x451b6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B451b6b:{NFSU2_TR(0x451b6b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B451b70:L451b70:{c.instructions+=12;NFSU2_TR(0x451b70);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451b71:{NFSU2_TR(0x451b71);
__builtin_memmove((R+20),(R+16),4);
}
B451b73:{NFSU2_TR(0x451b73);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B451b76:{NFSU2_TR(0x451b76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x354ull))));
}
B451b7c:{NFSU2_TR(0x451b7c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451b7d:{NFSU2_TR(0x451b7d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451b7e:{NFSU2_TR(0x451b7e);
__builtin_memmove((R+24),(R+4),4);
}
B451b80:{NFSU2_TR(0x451b80);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B451b86:{NFSU2_TR(0x451b86);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B451b88:{NFSU2_TR(0x451b88);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451b89:{NFSU2_TR(0x451b89);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B451b8d:{NFSU2_TR(0x451b8d);
if(r1(R+518)){{goto L451bad;}}
}
B451b8f:L451b8f:{c.instructions+=3;NFSU2_TR(0x451b8f);
__builtin_memmove((R+0),gp(0x82a3a4),4);
}
B451b94:{NFSU2_TR(0x451b94);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B451b96:{NFSU2_TR(0x451b96);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L451bad;}}
}
B451b98:L451b98:{c.instructions+=8;NFSU2_TR(0x451b98);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451b9a:{NFSU2_TR(0x451b9a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((R+0),(U+0),4);
}
B451b9d:{NFSU2_TR(0x451b9d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451b9e:{NFSU2_TR(0x451b9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B451ba1:{NFSU2_TR(0x451ba1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((R+8),(U+0),4);
}
B451ba4:{NFSU2_TR(0x451ba4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451ba5:{NFSU2_TR(0x451ba5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451ba6:{NFSU2_TR(0x451ba6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x451babull));
TAIL_STATIC(0x442de0u,442);
}
B451bab:L451bab:{c.instructions+=1;NFSU2_TR(0x451bab);
{goto L451bca;}
}
B451bad:L451bad:{c.instructions+=11;NFSU2_TR(0x451bad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B451bb0:{NFSU2_TR(0x451bb0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451bb2:{NFSU2_TR(0x451bb2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((R+0),(U+0),4);
}
B451bb5:{NFSU2_TR(0x451bb5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451bb6:{NFSU2_TR(0x451bb6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((R+4),(U+0),4);
}
B451bb9:{NFSU2_TR(0x451bb9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451bba:{NFSU2_TR(0x451bba);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B451bbe:{NFSU2_TR(0x451bbe);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451bbf:{NFSU2_TR(0x451bbf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451bc0:{NFSU2_TR(0x451bc0);
w4(R+4,u32(0x828770ull));
}
B451bc5:{NFSU2_TR(0x451bc5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x451bcaull));
TAIL_STATIC(0x44fe80u,44f);
}
B451bca:L451bca:{c.instructions+=8;NFSU2_TR(0x451bca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B451bcd:{NFSU2_TR(0x451bcd);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B451bd0:{NFSU2_TR(0x451bd0);
__builtin_memmove((R+28),(R+0),4);
}
B451bd2:{NFSU2_TR(0x451bd2);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B451bd4:{NFSU2_TR(0x451bd4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B451bd7:{NFSU2_TR(0x451bd7);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B451bd9:{NFSU2_TR(0x451bd9);
u8 U[5];
w4(U+0,u32(u32(u32(0x1full))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B451bdd:{NFSU2_TR(0x451bdd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L451be9;}}
}
B451bdf:L451bdf:{c.instructions+=2;NFSU2_TR(0x451bdf);
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
B451be1:{NFSU2_TR(0x451be1);
if(r1(R+518)){TAIL_STATIC(0x45250au,452);}
}
B451be7:L451be7:{c.instructions+=1;NFSU2_TR(0x451be7);
{goto L451bed;}
}
B451be9:L451be9:{c.instructions+=2;NFSU2_TR(0x451be9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B451beb:{NFSU2_TR(0x451beb);
if(r1(R+518)){{goto L451c0d;}}
}
B451bed:L451bed:{c.instructions+=2;NFSU2_TR(0x451bed);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B451bef:{NFSU2_TR(0x451bef);
if(r1(R+518)){{goto L451c0d;}}
}
B451bf1:L451bf1:{c.instructions+=2;NFSU2_TR(0x451bf1);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B451bf3:{NFSU2_TR(0x451bf3);
if(r1(R+518)){{goto L451c0d;}}
}
B451bf5:L451bf5:{c.instructions+=6;NFSU2_TR(0x451bf5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451bf7:{NFSU2_TR(0x451bf7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451bf8:{NFSU2_TR(0x451bf8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451bfa:{NFSU2_TR(0x451bfa);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451bfb:{NFSU2_TR(0x451bfb);
w4(R+4,u32(0x828770ull));
}
B451c00:{NFSU2_TR(0x451c00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x451c05ull));
TAIL_STATIC(0x44a160u,44a);
}
B451c05:L451c05:{c.instructions+=2;NFSU2_TR(0x451c05);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B451c07:{NFSU2_TR(0x451c07);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L451c0d;}}
}
B451c09:L451c09:{c.instructions+=2;NFSU2_TR(0x451c09);
w1(R+4,u8(0x1ull));
}
B451c0b:{NFSU2_TR(0x451c0b);
{goto L451c16;}
}
B451c0d:L451c0d:{c.instructions+=2;NFSU2_TR(0x451c0d);
u8 U[5];
w4(U+0,u32(u32(u32(0x1eull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B451c12:{NFSU2_TR(0x451c12);
u8 U[5];
w4(U+0,u32(u32(u32(0x1eull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B451c16:L451c16:{c.instructions+=2;NFSU2_TR(0x451c16);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B451c18:{NFSU2_TR(0x451c18);
if(r1(R+518)){{goto L451c2c;}}
}
B451c1a:L451c1a:{c.instructions+=2;NFSU2_TR(0x451c1a);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B451c1c:{NFSU2_TR(0x451c1c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L451c2c;}}
}
B451c1e:L451c1e:{c.instructions+=3;NFSU2_TR(0x451c1e);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B451c21:{NFSU2_TR(0x451c21);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B451c23:{NFSU2_TR(0x451c23);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L451c2c;}}
}
B451c25:L451c25:{c.instructions+=2;NFSU2_TR(0x451c25);
w4(R+0,u32(0x1ull));
}
B451c2a:{NFSU2_TR(0x451c2a);
{goto L451c2e;}
}
B451c2c:L451c2c:{c.instructions+=1;NFSU2_TR(0x451c2c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B451c2e:L451c2e:{c.instructions+=3;NFSU2_TR(0x451c2e);
w1(R+4,u8(u32(r1(R+4))|u32(r1(R+0))));
}
B451c30:{NFSU2_TR(0x451c30);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B451c32:{NFSU2_TR(0x451c32);
if(r1(R+518)){{goto L451c46;}}
}
B451c34:L451c34:{c.instructions+=2;NFSU2_TR(0x451c34);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B451c36:{NFSU2_TR(0x451c36);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L451c46;}}
}
B451c38:L451c38:{c.instructions+=3;NFSU2_TR(0x451c38);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B451c3b:{NFSU2_TR(0x451c3b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B451c3d:{NFSU2_TR(0x451c3d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L451c46;}}
}
B451c3f:L451c3f:{c.instructions+=2;NFSU2_TR(0x451c3f);
w4(R+0,u32(0x1ull));
}
B451c44:{NFSU2_TR(0x451c44);
{goto L451c48;}
}
B451c46:L451c46:{c.instructions+=1;NFSU2_TR(0x451c46);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B451c48:L451c48:{c.instructions+=3;NFSU2_TR(0x451c48);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+4,u8(u32(r1(R+4))|u32(r1(R+0))));
w1(R+519,u8(s8(r1(R+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B451c4a:{NFSU2_TR(0x451c4a);
u8 U[5];
w4(U+0,u32(u32(u32(0x1eull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B451c4e:{NFSU2_TR(0x451c4e);
if(r1(R+518)){{goto L451c55;}}
}
B451c50:L451c50:{c.instructions+=1;NFSU2_TR(0x451c50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x451c55ull));
TAIL_STATIC(0x5d7ae0u,5d7);
}
B451c55:L451c55:{c.instructions+=3;NFSU2_TR(0x451c55);
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
B451c57:{NFSU2_TR(0x451c57);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B451c5a:{NFSU2_TR(0x451c5a);
if(r1(R+518)){TAIL_STATIC(0x45250au,452);}
}
B451c60:L451c60:{c.instructions+=9;NFSU2_TR(0x451c60);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B451c64:{NFSU2_TR(0x451c64);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B451c67:{NFSU2_TR(0x451c67);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B451c6b:{NFSU2_TR(0x451c6b);
u8 U[4];
w4(U+0,u32(u32(u32(0xe0ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B451c72:{NFSU2_TR(0x451c72);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451c73:{NFSU2_TR(0x451c73);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B451c76:{NFSU2_TR(0x451c76);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451c78:{NFSU2_TR(0x451c78);
__builtin_memmove((R+4),(R+28),4);
}
B451c7a:{NFSU2_TR(0x451c7a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x451c7full));
TAIL_STATIC(0x447a30u,447);
}
B451c7f:L451c7f:{c.instructions+=5;NFSU2_TR(0x451c7f);
u8 U[4];
w4(U+0,u32(u32(u32(0xf0ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B451c86:{NFSU2_TR(0x451c86);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451c87:{NFSU2_TR(0x451c87);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451c89:{NFSU2_TR(0x451c89);
__builtin_memmove((R+4),(R+28),4);
}
B451c8b:{NFSU2_TR(0x451c8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x451c90ull));
TAIL_STATIC(0x447a30u,447);
}
B451c90:L451c90:{c.instructions+=5;NFSU2_TR(0x451c90);
u8 U[4];
w4(U+0,u32(u32(u32(0x100ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B451c97:{NFSU2_TR(0x451c97);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451c98:{NFSU2_TR(0x451c98);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451c9a:{NFSU2_TR(0x451c9a);
__builtin_memmove((R+4),(R+28),4);
}
B451c9c:{NFSU2_TR(0x451c9c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x451ca1ull));
TAIL_STATIC(0x447a80u,447);
}
B451ca1:L451ca1:{c.instructions+=5;NFSU2_TR(0x451ca1);
u8 U[4];
w4(U+0,u32(u32(u32(0x110ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B451ca8:{NFSU2_TR(0x451ca8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451ca9:{NFSU2_TR(0x451ca9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451cab:{NFSU2_TR(0x451cab);
__builtin_memmove((R+4),(R+28),4);
}
B451cad:{NFSU2_TR(0x451cad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x451cb2ull));
TAIL_STATIC(0x447a80u,447);
}
B451cb2:L451cb2:{c.instructions+=12;NFSU2_TR(0x451cb2);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B451cb6:{NFSU2_TR(0x451cb6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451cb7:{NFSU2_TR(0x451cb7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451cb9:{NFSU2_TR(0x451cb9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451cba:{NFSU2_TR(0x451cba);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B451cbe:{NFSU2_TR(0x451cbe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451cbf:{NFSU2_TR(0x451cbf);
u8 U[4];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B451cc6:{NFSU2_TR(0x451cc6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451cc7:{NFSU2_TR(0x451cc7);
u8 U[4];
w4(U+0,u32(u32(u32(0x134ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B451cce:{NFSU2_TR(0x451cce);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451ccf:{NFSU2_TR(0x451ccf);
w4(R+4,u32(0x828770ull));
}
B451cd4:{NFSU2_TR(0x451cd4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x451cd9ull));
TAIL_STATIC(0x450040u,450);
}
B451cd9:L451cd9:{c.instructions+=11;NFSU2_TR(0x451cd9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451cda:{NFSU2_TR(0x451cda);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451cdc:{NFSU2_TR(0x451cdc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451cdd:{NFSU2_TR(0x451cdd);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B451ce1:{NFSU2_TR(0x451ce1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451ce2:{NFSU2_TR(0x451ce2);
u8 U[4];
w4(U+0,u32(u32(u32(0xe0ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B451ce9:{NFSU2_TR(0x451ce9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451cea:{NFSU2_TR(0x451cea);
u8 U[4];
w4(U+0,u32(u32(u32(0x144ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B451cf1:{NFSU2_TR(0x451cf1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451cf2:{NFSU2_TR(0x451cf2);
w4(R+4,u32(0x828770ull));
}
B451cf7:{NFSU2_TR(0x451cf7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x451cfcull));
TAIL_STATIC(0x450040u,450);
}
B451cfc:L451cfc:{c.instructions+=4;NFSU2_TR(0x451cfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B451cff:{NFSU2_TR(0x451cff);
u8 U[4];
w4(U+0,u32(u32(u32(0xe0ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B451d06:{NFSU2_TR(0x451d06);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451d07:{NFSU2_TR(0x451d07);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x451d0cull));
TAIL_STATIC(0x574c90u,574);
}
B451d0c:L451d0c:{c.instructions+=4;NFSU2_TR(0x451d0c);
u8 U[4];
w4(U+0,u32(u32(u32(0x120ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B451d13:{NFSU2_TR(0x451d13);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451d14:{NFSU2_TR(0x451d14);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B451d17:{NFSU2_TR(0x451d17);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x451d1cull));
TAIL_STATIC(0x574cb0u,574);
}
B451d1c:L451d1c:{c.instructions+=4;NFSU2_TR(0x451d1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B451d1f:{NFSU2_TR(0x451d1f);
u8 U[4];
w4(U+0,u32(u32(u32(0xf0ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B451d26:{NFSU2_TR(0x451d26);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451d27:{NFSU2_TR(0x451d27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x451d2cull));
TAIL_STATIC(0x574cd0u,574);
}
B451d2c:L451d2c:{c.instructions+=4;NFSU2_TR(0x451d2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B451d2f:{NFSU2_TR(0x451d2f);
u8 U[4];
w4(U+0,u32(u32(u32(0x130ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B451d36:{NFSU2_TR(0x451d36);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451d37:{NFSU2_TR(0x451d37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x451d3cull));
TAIL_STATIC(0x574cf0u,574);
}
B451d3c:L451d3c:{c.instructions+=4;NFSU2_TR(0x451d3c);
u8 U[4];
w4(U+0,u32(u32(u32(0x100ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B451d43:{NFSU2_TR(0x451d43);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451d44:{NFSU2_TR(0x451d44);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B451d47:{NFSU2_TR(0x451d47);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x451d4cull));
TAIL_STATIC(0x574c90u,574);
}
B451d4c:L451d4c:{c.instructions+=4;NFSU2_TR(0x451d4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B451d4f:{NFSU2_TR(0x451d4f);
u8 U[4];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B451d56:{NFSU2_TR(0x451d56);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451d57:{NFSU2_TR(0x451d57);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x451d5cull));
TAIL_STATIC(0x574cb0u,574);
}
B451d5c:L451d5c:{c.instructions+=4;NFSU2_TR(0x451d5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B451d5f:{NFSU2_TR(0x451d5f);
u8 U[4];
w4(U+0,u32(u32(u32(0x110ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B451d66:{NFSU2_TR(0x451d66);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451d67:{NFSU2_TR(0x451d67);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x451d6cull));
TAIL_STATIC(0x574cd0u,574);
}
B451d6c:L451d6c:{c.instructions+=4;NFSU2_TR(0x451d6c);
u8 U[4];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B451d73:{NFSU2_TR(0x451d73);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451d74:{NFSU2_TR(0x451d74);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B451d77:{NFSU2_TR(0x451d77);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x451d7cull));
TAIL_STATIC(0x574cf0u,574);
}
B451d7c:L451d7c:{c.instructions+=9;NFSU2_TR(0x451d7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B451d7f:{NFSU2_TR(0x451d7f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B451d83:{NFSU2_TR(0x451d83);
{u32 ea_=u32(u32(7893160u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B451d89:{NFSU2_TR(0x451d89);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451d8a:{NFSU2_TR(0x451d8a);
{u32 ea_=u32(u32(7893164u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B451d90:{NFSU2_TR(0x451d90);
__builtin_memmove((R+0),(R+8),4);
}
B451d92:{NFSU2_TR(0x451d92);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B451d95:{NFSU2_TR(0x451d95);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451d96:{NFSU2_TR(0x451d96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x451d9bull));
TAIL_STATIC(0x43e6d0u,43e);
}
B451d9b:L451d9b:{c.instructions+=11;NFSU2_TR(0x451d9b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B451d9e:{NFSU2_TR(0x451d9e);
w4(R+0,shl<u32>(r4(R+0),u64(u32(0x1ull))));
}
B451da0:{NFSU2_TR(0x451da0);
w4(R+4,u32(r2(R+0)));
}
B451da3:{NFSU2_TR(0x451da3);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B451da7:{NFSU2_TR(0x451da7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B451daa:{NFSU2_TR(0x451daa);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B451dae:{NFSU2_TR(0x451dae);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B451db0:{NFSU2_TR(0x451db0);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B451db3:{NFSU2_TR(0x451db3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B451db5:{NFSU2_TR(0x451db5);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B451db8:{NFSU2_TR(0x451db8);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L451dc0;}}
}
B451dba:L451dba:{c.instructions+=1;NFSU2_TR(0x451dba);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
w2(U+4,u16(0x2ull));
s2(u32(r4(U+0)),r2(U+4));
}
B451dc0:L451dc0:{c.instructions+=5;NFSU2_TR(0x451dc0);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B451dc4:{NFSU2_TR(0x451dc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B451dc7:{NFSU2_TR(0x451dc7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451dc8:{NFSU2_TR(0x451dc8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451dc9:{NFSU2_TR(0x451dc9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x451dceull));
TAIL_STATIC(0x443d80u,443);
}
B451dce:L451dce:{c.instructions+=7;NFSU2_TR(0x451dce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B451dd1:{NFSU2_TR(0x451dd1);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B451dd4:{NFSU2_TR(0x451dd4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B451dd7:{NFSU2_TR(0x451dd7);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B451dda:{NFSU2_TR(0x451dda);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B451ddc:{NFSU2_TR(0x451ddc);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B451ddf:{NFSU2_TR(0x451ddf);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L451de7;}}
}
B451de1:L451de1:{c.instructions+=1;NFSU2_TR(0x451de1);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
w2(U+4,u16(0x2ull));
s2(u32(r4(U+0)),r2(U+4));
}
B451de7:L451de7:{c.instructions+=9;NFSU2_TR(0x451de7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B451dea:{NFSU2_TR(0x451dea);
{u32 ea_=u32(u32(7893160u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B451df0:{NFSU2_TR(0x451df0);
{u32 ea_=u32(u32(7893164u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B451df6:{NFSU2_TR(0x451df6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451df7:{NFSU2_TR(0x451df7);
__builtin_memmove((R+8),(R+4),4);
}
B451df9:{NFSU2_TR(0x451df9);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B451dfd:{NFSU2_TR(0x451dfd);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B451e00:{NFSU2_TR(0x451e00);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451e01:{NFSU2_TR(0x451e01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x451e06ull));
TAIL_STATIC(0x43e6d0u,43e);
}
B451e06:L451e06:{c.instructions+=11;NFSU2_TR(0x451e06);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B451e09:{NFSU2_TR(0x451e09);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B451e0c:{NFSU2_TR(0x451e0c);
w4(R+0,shl<u32>(r4(R+0),u64(u32(0x1ull))));
}
B451e0e:{NFSU2_TR(0x451e0e);
w4(R+0,u32(r2(R+0)));
}
B451e11:{NFSU2_TR(0x451e11);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B451e15:{NFSU2_TR(0x451e15);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B451e19:{NFSU2_TR(0x451e19);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B451e1c:{NFSU2_TR(0x451e1c);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B451e1e:{NFSU2_TR(0x451e1e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B451e20:{NFSU2_TR(0x451e20);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B451e23:{NFSU2_TR(0x451e23);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L451e2b;}}
}
B451e25:L451e25:{c.instructions+=1;NFSU2_TR(0x451e25);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
w2(U+4,u16(0x2ull));
s2(u32(r4(U+0)),r2(U+4));
}
B451e2b:L451e2b:{c.instructions+=5;NFSU2_TR(0x451e2b);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B451e2f:{NFSU2_TR(0x451e2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B451e32:{NFSU2_TR(0x451e32);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451e33:{NFSU2_TR(0x451e33);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451e34:{NFSU2_TR(0x451e34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x451e39ull));
TAIL_STATIC(0x443d80u,443);
}
B451e39:L451e39:{c.instructions+=6;NFSU2_TR(0x451e39);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B451e3c:{NFSU2_TR(0x451e3c);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B451e3f:{NFSU2_TR(0x451e3f);
u8 U[5];
w4(U+0,u32(u32(u32(0x26ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B451e43:{NFSU2_TR(0x451e43);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B451e46:{NFSU2_TR(0x451e46);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B451e48:{NFSU2_TR(0x451e48);
if(r1(R+518)){{goto L451e6c;}}
}
B451e4a:L451e4a:{c.instructions+=3;NFSU2_TR(0x451e4a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((R+12),(U+0),4);
}
B451e50:{NFSU2_TR(0x451e50);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451e51:{NFSU2_TR(0x451e51);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x451e56ull));
TAIL_STATIC(0x43c780u,43c);
}
B451e56:L451e56:{c.instructions+=7;NFSU2_TR(0x451e56);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B451e59:{NFSU2_TR(0x451e59);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((R+4),(U+0),4);
}
B451e5c:{NFSU2_TR(0x451e5c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451e5d:{NFSU2_TR(0x451e5d);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x90ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x90ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x90ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B451e62:{NFSU2_TR(0x451e62);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451e63:{NFSU2_TR(0x451e63);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451e64:{NFSU2_TR(0x451e64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x451e69ull));
TAIL_STATIC(0x401340u,401);
}
B451e69:L451e69:{c.instructions+=1;NFSU2_TR(0x451e69);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B451e6c:L451e6c:{c.instructions+=3;NFSU2_TR(0x451e6c);
u8 U[5];
w4(U+0,u32(u32(u32(0x1full))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B451e70:{NFSU2_TR(0x451e70);
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
B451e72:{NFSU2_TR(0x451e72);
if(r1(R+518)){TAIL_STATIC(0x45218au,452);}
}
B451e78:L451e78:{c.instructions+=3;NFSU2_TR(0x451e78);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B451e7b:{NFSU2_TR(0x451e7b);
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
B451e7d:{NFSU2_TR(0x451e7d);
if(r1(R+518)){TAIL_STATIC(0x45218au,452);}
}
B451e83:L451e83:{c.instructions+=8;NFSU2_TR(0x451e83);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B451e86:{NFSU2_TR(0x451e86);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((R+8),(U+0),4);
}
B451e89:{NFSU2_TR(0x451e89);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451e8a:{NFSU2_TR(0x451e8a);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x90ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x90ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x90ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B451e8f:{NFSU2_TR(0x451e8f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451e90:{NFSU2_TR(0x451e90);
u8 U[4];
w4(U+0,u32(u32(u32(0x328ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B451e97:{NFSU2_TR(0x451e97);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451e98:{NFSU2_TR(0x451e98);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x451e9dull));
TAIL_STATIC(0x401340u,401);
}
B451e9d:L451e9d:{c.instructions+=5;NFSU2_TR(0x451e9d);
u8 U[4];
w4(U+0,u32(u32(u32(0x32cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B451ea4:{NFSU2_TR(0x451ea4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451ea5:{NFSU2_TR(0x451ea5);
u8 U[4];
w4(U+0,u32(u32(u32(0x150ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B451eac:{NFSU2_TR(0x451eac);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451ead:{NFSU2_TR(0x451ead);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x451eb2ull));
TAIL_STATIC(0x5baf90u,5ba);
}
B451eb2:L451eb2:{c.instructions+=5;NFSU2_TR(0x451eb2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((R+0),(U+0),4);
}
B451eb8:{NFSU2_TR(0x451eb8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451eb9:{NFSU2_TR(0x451eb9);
u8 U[4];
w4(U+0,u32(u32(u32(0x198ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B451ec0:{NFSU2_TR(0x451ec0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451ec1:{NFSU2_TR(0x451ec1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x451ec6ull));
TAIL_STATIC(0x5baf90u,5ba);
}
B451ec6:L451ec6:{c.instructions+=6;NFSU2_TR(0x451ec6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B451ec9:{NFSU2_TR(0x451ec9);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451ece:{NFSU2_TR(0x451ece);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451ed3:{NFSU2_TR(0x451ed3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451ed5:{NFSU2_TR(0x451ed5);
u8 U[4];
w4(U+0,u32(u32(u32(0x25cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B451edc:{NFSU2_TR(0x451edc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x451ee1ull));
TAIL_STATIC(0x4419a0u,441);
}
B451ee1:L451ee1:{c.instructions+=5;NFSU2_TR(0x451ee1);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451ee6:{NFSU2_TR(0x451ee6);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451eeb:{NFSU2_TR(0x451eeb);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451eed:{NFSU2_TR(0x451eed);
u8 U[4];
w4(U+0,u32(u32(u32(0x1ccull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B451ef4:{NFSU2_TR(0x451ef4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x451ef9ull));
TAIL_STATIC(0x4419a0u,441);
}
B451ef9:L451ef9:{c.instructions+=13;NFSU2_TR(0x451ef9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B451efc:{NFSU2_TR(0x451efc);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B451efe:{NFSU2_TR(0x451efe);
w4(R+0,u32(0x3ull));
}
B451f03:{NFSU2_TR(0x451f03);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B451f05:{NFSU2_TR(0x451f05);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B451f0d:{NFSU2_TR(0x451f0d);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B451f15:{NFSU2_TR(0x451f15);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B451f1d:{NFSU2_TR(0x451f1d);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B451f25:{NFSU2_TR(0x451f25);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B451f2d:{NFSU2_TR(0x451f2d);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B451f35:{NFSU2_TR(0x451f35);
u8 U[6];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B451f3a:{NFSU2_TR(0x451f3a);
u8 U[6];
w4(U+0,u32(u32(u32(0x6eull))+u32(r4(R+16))));
w2(U+4,u16(0x1ull));
s2(u32(r4(U+0)),r2(U+4));
}
B451f41:{NFSU2_TR(0x451f41);
if(r1(R+518)){{goto L451f48;}}
}
B451f43:L451f43:{c.instructions+=2;NFSU2_TR(0x451f43);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B451f46:{NFSU2_TR(0x451f46);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L451f84;}}
}
B451f48:L451f48:{c.instructions+=3;NFSU2_TR(0x451f48);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451f4a:{NFSU2_TR(0x451f4a);
w4(R+4,u32(0x827b88ull));
}
B451f4f:{NFSU2_TR(0x451f4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x451f54ull));
TAIL_STATIC(0x4324d0u,432);
}
B451f54:L451f54:{c.instructions+=2;NFSU2_TR(0x451f54);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B451f56:{NFSU2_TR(0x451f56);
if(r1(R+518)){{goto L451f84;}}
}
B451f58:L451f58:{c.instructions+=3;NFSU2_TR(0x451f58);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451f59:{NFSU2_TR(0x451f59);
w4(R+4,u32(0x827b88ull));
}
B451f5e:{NFSU2_TR(0x451f5e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x451f63ull));
TAIL_STATIC(0x432490u,432);
}
B451f63:L451f63:{c.instructions+=2;NFSU2_TR(0x451f63);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B451f65:{NFSU2_TR(0x451f65);
if(r1(R+518)){{goto L451f84;}}
}
B451f67:L451f67:{c.instructions+=6;NFSU2_TR(0x451f67);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xe0ull))));
}
B451f6c:{NFSU2_TR(0x451f6c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451f6d:{NFSU2_TR(0x451f6d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2e4ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B451f74:{NFSU2_TR(0x451f74);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451f75:{NFSU2_TR(0x451f75);
u8 U[4];
w4(U+0,u32(u32(u32(0x2e8ull))+u32(r4(R+16))));
__builtin_memmove((R+12),(U+0),4);
}
B451f7c:{NFSU2_TR(0x451f7c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x451f81ull));
TAIL_STATIC(0x5baf90u,5ba);
}
B451f81:L451f81:{c.instructions+=1;NFSU2_TR(0x451f81);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B451f84:L451f84:{c.instructions+=4;NFSU2_TR(0x451f84);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B451f87:{NFSU2_TR(0x451f87);
__builtin_memmove((R+0),(R+4),4);
}
B451f89:{NFSU2_TR(0x451f89);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B451f8c:{NFSU2_TR(0x451f8c);
if(r1(R+518)){{goto L451fa7;}}
}
B451f8e:L451f8e:{c.instructions+=2;NFSU2_TR(0x451f8e);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B451f91:{NFSU2_TR(0x451f91);
if(r1(R+518)){{goto L451f9e;}}
}
B451f93:L451f93:{c.instructions+=2;NFSU2_TR(0x451f93);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B451f94:{NFSU2_TR(0x451f94);
if(r1(R+518)){{goto L451f9a;}}
}
B451f96:L451f96:{c.instructions+=2;NFSU2_TR(0x451f96);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B451f98:{NFSU2_TR(0x451f98);
{goto L451fae;}
}
B451f9a:L451f9a:{c.instructions+=2;NFSU2_TR(0x451f9a);
__builtin_memmove((R+8),(R+12),4);
}
B451f9c:{NFSU2_TR(0x451f9c);
{goto L451fae;}
}
B451f9e:L451f9e:{c.instructions+=2;NFSU2_TR(0x451f9e);
u8 U[4];
w4(U+0,u32(u32(u32(0x180ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B451fa5:{NFSU2_TR(0x451fa5);
{goto L451fae;}
}
B451fa7:L451fa7:{c.instructions+=1;NFSU2_TR(0x451fa7);
u8 U[4];
w4(U+0,u32(u32(u32(0x140ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B451fae:L451fae:{c.instructions+=3;NFSU2_TR(0x451fae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B451fb1:{NFSU2_TR(0x451fb1);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B451fb4:{NFSU2_TR(0x451fb4);
if(r1(R+518)){{goto L451fcb;}}
}
B451fb6:L451fb6:{c.instructions+=2;NFSU2_TR(0x451fb6);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B451fb9:{NFSU2_TR(0x451fb9);
if(r1(R+518)){{goto L451fc2;}}
}
B451fbb:L451fbb:{c.instructions+=2;NFSU2_TR(0x451fbb);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B451fbc:{NFSU2_TR(0x451fbc);
if(r1(R+518)){{goto L451fd2;}}
}
B451fbe:L451fbe:{c.instructions+=2;NFSU2_TR(0x451fbe);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B451fc0:{NFSU2_TR(0x451fc0);
{goto L451fd2;}
}
B451fc2:L451fc2:{c.instructions+=2;NFSU2_TR(0x451fc2);
u8 U[4];
w4(U+0,u32(u32(u32(0x180ull))+u32(r4(R+16))));
__builtin_memmove((R+12),(U+0),4);
}
B451fc9:{NFSU2_TR(0x451fc9);
{goto L451fd2;}
}
B451fcb:L451fcb:{c.instructions+=1;NFSU2_TR(0x451fcb);
u8 U[4];
w4(U+0,u32(u32(u32(0x140ull))+u32(r4(R+16))));
__builtin_memmove((R+12),(U+0),4);
}
B451fd2:L451fd2:{c.instructions+=2;NFSU2_TR(0x451fd2);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B451fd4:{NFSU2_TR(0x451fd4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L451fde;}}
}
B451fd6:L451fd6:{c.instructions+=3;NFSU2_TR(0x451fd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B451fd9:{NFSU2_TR(0x451fd9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
}
B451fdc:{NFSU2_TR(0x451fdc);
{goto L451fe0;}
}
B451fde:L451fde:{c.instructions+=1;NFSU2_TR(0x451fde);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B451fe0:L451fe0:{c.instructions+=6;NFSU2_TR(0x451fe0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451fe1:{NFSU2_TR(0x451fe1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451fe2:{NFSU2_TR(0x451fe2);
u8 U[4];
w4(U+0,u32(u32(u32(0x258ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B451fe9:{NFSU2_TR(0x451fe9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B451fea:{NFSU2_TR(0x451fea);
__builtin_memmove((R+4),(R+24),4);
}
B451fec:{NFSU2_TR(0x451fec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x451ff1ull));
TAIL_STATIC(0x444980u,444);
}
B451ff1:L451ff1:{c.instructions+=3;NFSU2_TR(0x451ff1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B451ff4:{NFSU2_TR(0x451ff4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B451ff6:{NFSU2_TR(0x451ff6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x452000u,452);}
}
B451ff8:L451ff8:{c.instructions+=3;NFSU2_TR(0x451ff8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B451ffb:{NFSU2_TR(0x451ffb);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
}
B451ffe:{NFSU2_TR(0x451ffe);
TAIL_STATIC(0x452002u,452);
}
XIT:NFSU2_TR_EXIT(0x451,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
