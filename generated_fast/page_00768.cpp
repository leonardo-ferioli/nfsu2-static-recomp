#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_761(u8* __restrict R,Cpu& c);
u32 body_766(u8* __restrict R,Cpu& c);
u32 body_767(u8* __restrict R,Cpu& c);
u32 body_769(u8* __restrict R,Cpu& c);
u32 body_76a(u8* __restrict R,Cpu& c);
u32 body_76d(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x768,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x768,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_768(u8* __restrict R,Cpu& c);
u32 page_768(Cpu& c){return body_768(c.regs.data(),c);}
__attribute__((noinline)) u32 body_768(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x768003:goto L768003;
case 0x768006:c.instructions+=1;goto B768006;
case 0x76800b:goto L76800b;
case 0x76800e:c.instructions+=1;goto B76800e;
case 0x768013:goto L768013;
case 0x768016:c.instructions+=1;goto B768016;
case 0x76801b:goto L76801b;
case 0x76801e:c.instructions+=1;goto B76801e;
case 0x768023:goto L768023;
case 0x768026:c.instructions+=1;goto B768026;
case 0x76802b:goto L76802b;
case 0x76802e:c.instructions+=1;goto B76802e;
case 0x768033:goto L768033;
case 0x768036:c.instructions+=1;goto B768036;
case 0x76803b:goto L76803b;
case 0x76803e:c.instructions+=1;goto B76803e;
case 0x768043:goto L768043;
case 0x768046:c.instructions+=1;goto B768046;
case 0x76804b:goto L76804b;
case 0x76804e:c.instructions+=2;goto B76804e;
case 0x768054:c.instructions+=1;goto B768054;
case 0x768059:goto L768059;
case 0x76805f:c.instructions+=1;goto B76805f;
case 0x768064:goto L768064;
case 0x76806a:c.instructions+=1;goto B76806a;
case 0x76806f:goto L76806f;
case 0x768075:c.instructions+=1;goto B768075;
case 0x76807a:goto L76807a;
case 0x768080:c.instructions+=1;goto B768080;
case 0x768085:goto L768085;
case 0x76808b:c.instructions+=1;goto B76808b;
case 0x768090:goto L768090;
case 0x768096:c.instructions+=1;goto B768096;
case 0x76809b:goto L76809b;
case 0x7680a1:c.instructions+=1;goto B7680a1;
case 0x7680a6:goto L7680a6;
case 0x7680ac:c.instructions+=1;goto B7680ac;
case 0x7680b1:goto L7680b1;
case 0x7680b7:c.instructions+=1;goto B7680b7;
case 0x7680bc:goto L7680bc;
case 0x7680c2:c.instructions+=1;goto B7680c2;
case 0x7680c7:goto L7680c7;
case 0x7680ca:c.instructions+=2;goto B7680ca;
case 0x7680cb:c.instructions+=1;goto B7680cb;
case 0x7680cc:goto L7680cc;
case 0x7680d3:c.instructions+=2;goto B7680d3;
case 0x7680d4:c.instructions+=1;goto B7680d4;
case 0x7680d6:goto L7680d6;
case 0x7680db:c.instructions+=2;goto B7680db;
case 0x7680dd:c.instructions+=1;goto B7680dd;
case 0x7680e2:goto L7680e2;
case 0x7680e4:c.instructions+=4;goto B7680e4;
case 0x7680e6:c.instructions+=3;goto B7680e6;
case 0x7680e7:c.instructions+=2;goto B7680e7;
case 0x7680e8:c.instructions+=1;goto B7680e8;
case 0x7680ea:goto L7680ea;
case 0x7680ec:c.instructions+=3;goto B7680ec;
case 0x7680ed:c.instructions+=2;goto B7680ed;
case 0x7680ee:c.instructions+=1;goto B7680ee;
case 0x7680ef:goto L7680ef;
case 0x7680f4:goto L7680f4;
case 0x7680f6:c.instructions+=1;goto B7680f6;
case 0x7680f8:goto L7680f8;
case 0x7680f9:c.instructions+=1;goto B7680f9;
case 0x7680fe:goto L7680fe;
case 0x7680ff:c.instructions+=1;goto B7680ff;
case 0x768104:goto L768104;
case 0x768105:c.instructions+=2;goto B768105;
case 0x768106:c.instructions+=1;goto B768106;
case 0x768108:goto L768108;
case 0x76810e:c.instructions+=2;goto B76810e;
case 0x768114:c.instructions+=1;goto B768114;
case 0x768116:goto L768116;
case 0x76811d:c.instructions+=1;goto B76811d;
case 0x768127:goto L768127;
case 0x768129:c.instructions+=2;goto B768129;
case 0x76812a:c.instructions+=1;goto B76812a;
case 0x76812b:goto L76812b;
case 0x76812c:c.instructions+=3;goto B76812c;
case 0x768130:c.instructions+=2;goto B768130;
case 0x768132:c.instructions+=1;goto B768132;
case 0x768134:goto L768134;
case 0x768136:c.instructions+=3;goto B768136;
case 0x76813c:c.instructions+=2;goto B76813c;
case 0x76813e:c.instructions+=1;goto B76813e;
case 0x768140:goto L768140;
case 0x768146:c.instructions+=1;goto B768146;
case 0x768148:goto L768148;
case 0x768149:c.instructions+=1;goto B768149;
case 0x76814e:goto L76814e;
case 0x76814f:goto L76814f;
case 0x768152:c.instructions+=3;goto B768152;
case 0x768158:c.instructions+=2;goto B768158;
case 0x76815b:c.instructions+=1;goto B76815b;
case 0x76815d:goto L76815d;
case 0x768163:c.instructions+=1;goto B768163;
case 0x768165:goto L768165;
case 0x768166:c.instructions+=1;goto B768166;
case 0x76816b:goto L76816b;
case 0x76816c:goto L76816c;
case 0x76816f:c.instructions+=3;goto B76816f;
case 0x768174:c.instructions+=2;goto B768174;
case 0x768177:c.instructions+=1;goto B768177;
case 0x768179:goto L768179;
case 0x76817f:c.instructions+=1;goto B76817f;
case 0x768181:goto L768181;
case 0x768182:c.instructions+=1;goto B768182;
case 0x768187:goto L768187;
case 0x768188:goto L768188;
case 0x768189:c.instructions+=1;goto B768189;
case 0x76818a:goto L76818a;
case 0x76818b:c.instructions+=9;goto B76818b;
case 0x76818d:c.instructions+=8;goto B76818d;
case 0x76818e:c.instructions+=7;goto B76818e;
case 0x76818f:c.instructions+=6;goto B76818f;
case 0x768190:c.instructions+=5;goto B768190;
case 0x768191:c.instructions+=4;goto B768191;
case 0x768193:c.instructions+=3;goto B768193;
case 0x768199:c.instructions+=2;goto B768199;
case 0x76819a:c.instructions+=1;goto B76819a;
case 0x76819c:goto L76819c;
case 0x7681a2:c.instructions+=1;goto B7681a2;
case 0x7681a4:goto L7681a4;
case 0x7681a9:c.instructions+=2;goto B7681a9;
case 0x7681ab:c.instructions+=1;goto B7681ab;
case 0x7681ad:goto L7681ad;
case 0x7681af:c.instructions+=1;goto B7681af;
case 0x7681b1:goto L7681b1;
case 0x7681b7:c.instructions+=2;goto B7681b7;
case 0x7681ba:c.instructions+=1;goto B7681ba;
case 0x7681bc:goto L7681bc;
case 0x7681bd:c.instructions+=1;goto B7681bd;
case 0x7681c2:goto L7681c2;
case 0x7681c8:c.instructions+=1;goto B7681c8;
case 0x7681cd:goto L7681cd;
case 0x7681ce:c.instructions+=1;goto B7681ce;
case 0x7681cf:goto L7681cf;
case 0x7681d5:c.instructions+=4;goto B7681d5;
case 0x7681db:c.instructions+=3;goto B7681db;
case 0x7681e0:c.instructions+=2;goto B7681e0;
case 0x7681e6:c.instructions+=1;goto B7681e6;
case 0x7681eb:goto L7681eb;
case 0x7681ed:c.instructions+=2;goto B7681ed;
case 0x7681ef:c.instructions+=1;goto B7681ef;
case 0x7681f4:goto L7681f4;
case 0x7681f6:c.instructions+=4;goto B7681f6;
case 0x7681f8:c.instructions+=3;goto B7681f8;
case 0x7681f9:c.instructions+=2;goto B7681f9;
case 0x7681fa:c.instructions+=1;goto B7681fa;
case 0x7681fc:goto L7681fc;
case 0x768202:c.instructions+=4;goto B768202;
case 0x768204:c.instructions+=3;goto B768204;
case 0x768205:c.instructions+=2;goto B768205;
case 0x768207:c.instructions+=1;goto B768207;
case 0x768209:goto L768209;
case 0x76820b:goto L76820b;
case 0x768210:goto L768210;
case 0x768212:c.instructions+=4;goto B768212;
case 0x768214:c.instructions+=3;goto B768214;
case 0x768215:c.instructions+=2;goto B768215;
case 0x768218:c.instructions+=1;goto B768218;
case 0x76821a:goto L76821a;
case 0x76821b:c.instructions+=1;goto B76821b;
case 0x768220:goto L768220;
case 0x768221:goto L768221;
case 0x768223:c.instructions+=2;goto B768223;
case 0x768224:c.instructions+=1;goto B768224;
case 0x768229:goto L768229;
case 0x76822b:c.instructions+=2;goto B76822b;
case 0x768231:c.instructions+=1;goto B768231;
case 0x768237:goto L768237;
case 0x768239:c.instructions+=1;goto B768239;
case 0x76823e:goto L76823e;
case 0x768240:c.instructions+=3;goto B768240;
case 0x768241:c.instructions+=2;goto B768241;
case 0x768246:c.instructions+=1;goto B768246;
case 0x768248:goto L768248;
case 0x76824a:c.instructions+=2;goto B76824a;
case 0x76824b:c.instructions+=1;goto B76824b;
case 0x76824d:goto L76824d;
case 0x76824f:c.instructions+=6;goto B76824f;
case 0x768256:c.instructions+=5;goto B768256;
case 0x768257:c.instructions+=4;goto B768257;
case 0x768259:c.instructions+=3;goto B768259;
case 0x76825a:c.instructions+=2;goto B76825a;
case 0x76825c:c.instructions+=1;goto B76825c;
case 0x768261:goto L768261;
case 0x768264:c.instructions+=6;goto B768264;
case 0x768267:c.instructions+=5;goto B768267;
case 0x768268:c.instructions+=4;goto B768268;
case 0x76826a:c.instructions+=3;goto B76826a;
case 0x76826b:c.instructions+=2;goto B76826b;
case 0x76826d:c.instructions+=1;goto B76826d;
case 0x768272:goto L768272;
case 0x768275:c.instructions+=6;goto B768275;
case 0x768278:c.instructions+=5;goto B768278;
case 0x768279:c.instructions+=4;goto B768279;
case 0x76827b:c.instructions+=3;goto B76827b;
case 0x76827c:c.instructions+=2;goto B76827c;
case 0x76827e:c.instructions+=1;goto B76827e;
case 0x768283:goto L768283;
case 0x768286:c.instructions+=2;goto B768286;
case 0x768289:c.instructions+=1;goto B768289;
case 0x76828b:goto L76828b;
case 0x76828c:c.instructions+=1;goto B76828c;
case 0x768291:goto L768291;
case 0x768292:c.instructions+=1;goto B768292;
case 0x768295:goto L768295;
case 0x768296:c.instructions+=1;goto B768296;
case 0x76829b:goto L76829b;
case 0x76829e:c.instructions+=1;goto B76829e;
case 0x7682a3:goto L7682a3;
case 0x7682a4:c.instructions+=3;goto B7682a4;
case 0x7682a5:c.instructions+=2;goto B7682a5;
case 0x7682a7:c.instructions+=1;goto B7682a7;
case 0x7682ac:goto L7682ac;
case 0x7682ae:c.instructions+=1;goto B7682ae;
case 0x7682b0:goto L7682b0;
case 0x7682b2:c.instructions+=2;goto B7682b2;
case 0x7682b5:c.instructions+=1;goto B7682b5;
case 0x7682b7:goto L7682b7;
case 0x7682ba:c.instructions+=1;goto B7682ba;
case 0x7682bc:goto L7682bc;
case 0x7682bf:c.instructions+=1;goto B7682bf;
case 0x7682c1:goto L7682c1;
case 0x7682c2:goto L7682c2;
case 0x7682c5:c.instructions+=1;goto B7682c5;
case 0x7682c7:goto L7682c7;
case 0x7682c9:goto L7682c9;
case 0x7682cc:c.instructions+=1;goto B7682cc;
case 0x7682ce:goto L7682ce;
case 0x7682d0:goto L7682d0;
case 0x7682d3:c.instructions+=5;goto B7682d3;
case 0x7682d5:c.instructions+=4;goto B7682d5;
case 0x7682d7:c.instructions+=3;goto B7682d7;
case 0x7682d9:c.instructions+=2;goto B7682d9;
case 0x7682dc:c.instructions+=1;goto B7682dc;
case 0x7682de:goto L7682de;
case 0x7682e0:goto L7682e0;
case 0x7682e5:c.instructions+=6;goto B7682e5;
case 0x7682eb:c.instructions+=5;goto B7682eb;
case 0x7682ed:c.instructions+=4;goto B7682ed;
case 0x7682f2:c.instructions+=3;goto B7682f2;
case 0x7682f5:c.instructions+=2;goto B7682f5;
case 0x7682fa:c.instructions+=1;goto B7682fa;
case 0x7682fd:goto L7682fd;
case 0x768302:c.instructions+=2;goto B768302;
case 0x768304:c.instructions+=1;goto B768304;
case 0x768306:goto L768306;
case 0x768309:c.instructions+=1;goto B768309;
case 0x76830b:goto L76830b;
case 0x768311:c.instructions+=2;goto B768311;
case 0x768314:c.instructions+=1;goto B768314;
case 0x768316:goto L768316;
case 0x768317:c.instructions+=1;goto B768317;
case 0x76831c:goto L76831c;
case 0x768322:c.instructions+=1;goto B768322;
case 0x768327:goto L768327;
case 0x768328:c.instructions+=1;goto B768328;
case 0x768329:goto L768329;
case 0x76832c:c.instructions+=2;goto B76832c;
case 0x768331:c.instructions+=1;goto B768331;
case 0x768337:goto L768337;
case 0x76833d:c.instructions+=5;goto B76833d;
case 0x76833f:c.instructions+=4;goto B76833f;
case 0x768341:c.instructions+=3;goto B768341;
case 0x768346:c.instructions+=2;goto B768346;
case 0x768350:c.instructions+=1;goto B768350;
case 0x768352:goto L768352;
case 0x768353:c.instructions+=4;goto B768353;
case 0x768354:c.instructions+=3;goto B768354;
case 0x768355:c.instructions+=2;goto B768355;
case 0x768356:c.instructions+=1;goto B768356;
case 0x768357:goto L768357;
case 0x768358:c.instructions+=3;goto B768358;
case 0x76835c:c.instructions+=2;goto B76835c;
case 0x76835e:c.instructions+=1;goto B76835e;
case 0x768364:goto L768364;
case 0x768367:c.instructions+=3;goto B768367;
case 0x76836d:c.instructions+=2;goto B76836d;
case 0x768370:c.instructions+=1;goto B768370;
case 0x768372:goto L768372;
case 0x768378:c.instructions+=1;goto B768378;
case 0x76837a:goto L76837a;
case 0x76837b:c.instructions+=1;goto B76837b;
case 0x768380:goto L768380;
case 0x768381:goto L768381;
case 0x768384:c.instructions+=3;goto B768384;
case 0x76838a:c.instructions+=2;goto B76838a;
case 0x76838d:c.instructions+=1;goto B76838d;
case 0x76838f:goto L76838f;
case 0x768395:c.instructions+=1;goto B768395;
case 0x768397:goto L768397;
case 0x768398:c.instructions+=1;goto B768398;
case 0x76839d:goto L76839d;
case 0x76839e:goto L76839e;
case 0x7683a1:c.instructions+=3;goto B7683a1;
case 0x7683a7:c.instructions+=2;goto B7683a7;
case 0x7683aa:c.instructions+=1;goto B7683aa;
case 0x7683ac:goto L7683ac;
case 0x7683b2:c.instructions+=1;goto B7683b2;
case 0x7683b4:goto L7683b4;
case 0x7683b5:c.instructions+=1;goto B7683b5;
case 0x7683ba:goto L7683ba;
case 0x7683bb:goto L7683bb;
case 0x7683be:c.instructions+=3;goto B7683be;
case 0x7683c4:c.instructions+=2;goto B7683c4;
case 0x7683c7:c.instructions+=1;goto B7683c7;
case 0x7683c9:goto L7683c9;
case 0x7683cf:c.instructions+=1;goto B7683cf;
case 0x7683d1:goto L7683d1;
case 0x7683d2:c.instructions+=1;goto B7683d2;
case 0x7683d7:goto L7683d7;
case 0x7683d8:goto L7683d8;
case 0x7683db:c.instructions+=3;goto B7683db;
case 0x7683e1:c.instructions+=2;goto B7683e1;
case 0x7683e4:c.instructions+=1;goto B7683e4;
case 0x7683e6:goto L7683e6;
case 0x7683ec:c.instructions+=1;goto B7683ec;
case 0x7683ee:goto L7683ee;
case 0x7683ef:c.instructions+=1;goto B7683ef;
case 0x7683f4:goto L7683f4;
case 0x7683f5:goto L7683f5;
case 0x7683f8:c.instructions+=3;goto B7683f8;
case 0x7683fe:c.instructions+=2;goto B7683fe;
case 0x768401:c.instructions+=1;goto B768401;
case 0x768403:goto L768403;
case 0x768409:c.instructions+=1;goto B768409;
case 0x76840b:goto L76840b;
case 0x76840c:c.instructions+=1;goto B76840c;
case 0x768411:goto L768411;
case 0x768412:goto L768412;
case 0x768415:c.instructions+=3;goto B768415;
case 0x76841a:c.instructions+=2;goto B76841a;
case 0x76841d:c.instructions+=1;goto B76841d;
case 0x76841f:goto L76841f;
case 0x768425:c.instructions+=1;goto B768425;
case 0x768427:goto L768427;
case 0x768428:c.instructions+=1;goto B768428;
case 0x76842d:goto L76842d;
case 0x76842e:goto L76842e;
case 0x76842f:c.instructions+=1;goto B76842f;
case 0x768430:goto L768430;
case 0x768431:c.instructions+=8;goto B768431;
case 0x768433:c.instructions+=7;goto B768433;
case 0x768434:c.instructions+=6;goto B768434;
case 0x768435:c.instructions+=5;goto B768435;
case 0x768436:c.instructions+=4;goto B768436;
case 0x768438:c.instructions+=3;goto B768438;
case 0x76843e:c.instructions+=2;goto B76843e;
case 0x76843f:c.instructions+=1;goto B76843f;
case 0x768441:goto L768441;
case 0x768447:c.instructions+=1;goto B768447;
case 0x768449:goto L768449;
case 0x76844f:c.instructions+=4;goto B76844f;
case 0x768455:c.instructions+=3;goto B768455;
case 0x76845f:c.instructions+=2;goto B76845f;
case 0x768465:c.instructions+=1;goto B768465;
case 0x76846a:goto L76846a;
case 0x76846c:c.instructions+=2;goto B76846c;
case 0x76846e:c.instructions+=1;goto B76846e;
case 0x768473:goto L768473;
case 0x768475:c.instructions+=4;goto B768475;
case 0x768477:c.instructions+=3;goto B768477;
case 0x768478:c.instructions+=2;goto B768478;
case 0x768479:c.instructions+=1;goto B768479;
case 0x76847f:goto L76847f;
case 0x768481:c.instructions+=1;goto B768481;
case 0x768486:goto L768486;
case 0x768488:c.instructions+=4;goto B768488;
case 0x76848a:c.instructions+=3;goto B76848a;
case 0x76848b:c.instructions+=2;goto B76848b;
case 0x76848e:c.instructions+=1;goto B76848e;
case 0x768490:goto L768490;
case 0x768491:c.instructions+=1;goto B768491;
case 0x768496:goto L768496;
case 0x768497:c.instructions+=1;goto B768497;
case 0x76849c:goto L76849c;
case 0x76849e:c.instructions+=2;goto B76849e;
case 0x7684a4:c.instructions+=1;goto B7684a4;
case 0x7684aa:goto L7684aa;
case 0x7684ac:c.instructions+=1;goto B7684ac;
case 0x7684b1:goto L7684b1;
case 0x7684b3:c.instructions+=3;goto B7684b3;
case 0x7684b4:c.instructions+=2;goto B7684b4;
case 0x7684b9:c.instructions+=1;goto B7684b9;
case 0x7684bb:goto L7684bb;
case 0x7684bc:c.instructions+=1;goto B7684bc;
case 0x7684c1:goto L7684c1;
case 0x7684c2:c.instructions+=1;goto B7684c2;
case 0x7684c7:goto L7684c7;
case 0x7684c8:c.instructions+=1;goto B7684c8;
case 0x7684ca:goto L7684ca;
case 0x7684cc:c.instructions+=7;goto B7684cc;
case 0x7684d3:c.instructions+=6;goto B7684d3;
case 0x7684d6:c.instructions+=5;goto B7684d6;
case 0x7684d7:c.instructions+=4;goto B7684d7;
case 0x7684d9:c.instructions+=3;goto B7684d9;
case 0x7684da:c.instructions+=2;goto B7684da;
case 0x7684dc:c.instructions+=1;goto B7684dc;
case 0x7684e1:goto L7684e1;
case 0x7684e3:c.instructions+=6;goto B7684e3;
case 0x7684e6:c.instructions+=5;goto B7684e6;
case 0x7684e7:c.instructions+=4;goto B7684e7;
case 0x7684e9:c.instructions+=3;goto B7684e9;
case 0x7684ea:c.instructions+=2;goto B7684ea;
case 0x7684ec:c.instructions+=1;goto B7684ec;
case 0x7684f1:goto L7684f1;
case 0x7684f3:c.instructions+=6;goto B7684f3;
case 0x7684f6:c.instructions+=5;goto B7684f6;
case 0x7684f7:c.instructions+=4;goto B7684f7;
case 0x7684f9:c.instructions+=3;goto B7684f9;
case 0x7684fa:c.instructions+=2;goto B7684fa;
case 0x7684fc:c.instructions+=1;goto B7684fc;
case 0x768501:goto L768501;
case 0x768503:c.instructions+=6;goto B768503;
case 0x768506:c.instructions+=5;goto B768506;
case 0x768507:c.instructions+=4;goto B768507;
case 0x768509:c.instructions+=3;goto B768509;
case 0x76850a:c.instructions+=2;goto B76850a;
case 0x76850c:c.instructions+=1;goto B76850c;
case 0x768511:goto L768511;
case 0x768514:c.instructions+=7;goto B768514;
case 0x768516:c.instructions+=6;goto B768516;
case 0x768519:c.instructions+=5;goto B768519;
case 0x76851a:c.instructions+=4;goto B76851a;
case 0x76851c:c.instructions+=3;goto B76851c;
case 0x76851d:c.instructions+=2;goto B76851d;
case 0x76851f:c.instructions+=1;goto B76851f;
case 0x768524:goto L768524;
case 0x768526:c.instructions+=6;goto B768526;
case 0x768529:c.instructions+=5;goto B768529;
case 0x76852a:c.instructions+=4;goto B76852a;
case 0x76852c:c.instructions+=3;goto B76852c;
case 0x76852d:c.instructions+=2;goto B76852d;
case 0x76852f:c.instructions+=1;goto B76852f;
case 0x768534:goto L768534;
case 0x768536:c.instructions+=6;goto B768536;
case 0x768539:c.instructions+=5;goto B768539;
case 0x76853a:c.instructions+=4;goto B76853a;
case 0x76853c:c.instructions+=3;goto B76853c;
case 0x76853d:c.instructions+=2;goto B76853d;
case 0x76853f:c.instructions+=1;goto B76853f;
case 0x768544:goto L768544;
case 0x768546:c.instructions+=6;goto B768546;
case 0x768549:c.instructions+=5;goto B768549;
case 0x76854a:c.instructions+=4;goto B76854a;
case 0x76854c:c.instructions+=3;goto B76854c;
case 0x76854d:c.instructions+=2;goto B76854d;
case 0x76854f:c.instructions+=1;goto B76854f;
case 0x768554:goto L768554;
case 0x768557:c.instructions+=7;goto B768557;
case 0x768559:c.instructions+=6;goto B768559;
case 0x76855c:c.instructions+=5;goto B76855c;
case 0x76855d:c.instructions+=4;goto B76855d;
case 0x76855f:c.instructions+=3;goto B76855f;
case 0x768560:c.instructions+=2;goto B768560;
case 0x768562:c.instructions+=1;goto B768562;
case 0x768567:goto L768567;
case 0x768569:c.instructions+=6;goto B768569;
case 0x76856c:c.instructions+=5;goto B76856c;
case 0x76856d:c.instructions+=4;goto B76856d;
case 0x76856f:c.instructions+=3;goto B76856f;
case 0x768570:c.instructions+=2;goto B768570;
case 0x768572:c.instructions+=1;goto B768572;
case 0x768577:goto L768577;
case 0x768579:c.instructions+=6;goto B768579;
case 0x76857c:c.instructions+=5;goto B76857c;
case 0x76857d:c.instructions+=4;goto B76857d;
case 0x76857f:c.instructions+=3;goto B76857f;
case 0x768580:c.instructions+=2;goto B768580;
case 0x768582:c.instructions+=1;goto B768582;
case 0x768587:goto L768587;
case 0x768589:c.instructions+=6;goto B768589;
case 0x76858c:c.instructions+=5;goto B76858c;
case 0x76858d:c.instructions+=4;goto B76858d;
case 0x76858f:c.instructions+=3;goto B76858f;
case 0x768590:c.instructions+=2;goto B768590;
case 0x768592:c.instructions+=1;goto B768592;
case 0x768597:goto L768597;
case 0x76859a:c.instructions+=7;goto B76859a;
case 0x76859c:c.instructions+=6;goto B76859c;
case 0x76859f:c.instructions+=5;goto B76859f;
case 0x7685a0:c.instructions+=4;goto B7685a0;
case 0x7685a2:c.instructions+=3;goto B7685a2;
case 0x7685a3:c.instructions+=2;goto B7685a3;
case 0x7685a5:c.instructions+=1;goto B7685a5;
case 0x7685aa:goto L7685aa;
case 0x7685ac:c.instructions+=6;goto B7685ac;
case 0x7685af:c.instructions+=5;goto B7685af;
case 0x7685b0:c.instructions+=4;goto B7685b0;
case 0x7685b2:c.instructions+=3;goto B7685b2;
case 0x7685b3:c.instructions+=2;goto B7685b3;
case 0x7685b5:c.instructions+=1;goto B7685b5;
case 0x7685ba:goto L7685ba;
case 0x7685bc:c.instructions+=6;goto B7685bc;
case 0x7685bf:c.instructions+=5;goto B7685bf;
case 0x7685c0:c.instructions+=4;goto B7685c0;
case 0x7685c2:c.instructions+=3;goto B7685c2;
case 0x7685c3:c.instructions+=2;goto B7685c3;
case 0x7685c5:c.instructions+=1;goto B7685c5;
case 0x7685ca:goto L7685ca;
case 0x7685cd:c.instructions+=2;goto B7685cd;
case 0x7685cf:c.instructions+=1;goto B7685cf;
case 0x7685d1:goto L7685d1;
case 0x7685d2:c.instructions+=1;goto B7685d2;
case 0x7685d7:goto L7685d7;
case 0x7685d8:c.instructions+=1;goto B7685d8;
case 0x7685dd:goto L7685dd;
case 0x7685e0:c.instructions+=1;goto B7685e0;
case 0x7685e5:goto L7685e5;
case 0x7685e8:goto L7685e8;
case 0x7685ea:c.instructions+=2;goto B7685ea;
case 0x7685eb:c.instructions+=1;goto B7685eb;
case 0x7685ed:goto L7685ed;
case 0x7685f0:c.instructions+=1;goto B7685f0;
case 0x7685f2:goto L7685f2;
case 0x7685f4:c.instructions+=2;goto B7685f4;
case 0x7685f7:c.instructions+=1;goto B7685f7;
case 0x7685f9:goto L7685f9;
case 0x7685fc:c.instructions+=1;goto B7685fc;
case 0x7685fe:goto L7685fe;
case 0x768601:c.instructions+=1;goto B768601;
case 0x768603:goto L768603;
case 0x768604:goto L768604;
case 0x768607:c.instructions+=1;goto B768607;
case 0x768609:goto L768609;
case 0x76860b:goto L76860b;
case 0x76860e:c.instructions+=1;goto B76860e;
case 0x768610:goto L768610;
case 0x768612:goto L768612;
case 0x768615:c.instructions+=5;goto B768615;
case 0x768617:c.instructions+=4;goto B768617;
case 0x768619:c.instructions+=3;goto B768619;
case 0x76861b:c.instructions+=2;goto B76861b;
case 0x76861e:c.instructions+=1;goto B76861e;
case 0x768620:goto L768620;
case 0x768622:goto L768622;
case 0x768624:c.instructions+=3;goto B768624;
case 0x768625:c.instructions+=2;goto B768625;
case 0x76862a:c.instructions+=1;goto B76862a;
case 0x76862c:goto L76862c;
case 0x76862e:goto L76862e;
case 0x768635:goto L768635;
case 0x76863a:c.instructions+=12;goto B76863a;
case 0x76863c:c.instructions+=11;goto B76863c;
case 0x76863e:c.instructions+=10;goto B76863e;
case 0x768643:c.instructions+=9;goto B768643;
case 0x768646:c.instructions+=8;goto B768646;
case 0x768649:c.instructions+=7;goto B768649;
case 0x76864e:c.instructions+=6;goto B76864e;
case 0x768651:c.instructions+=5;goto B768651;
case 0x768654:c.instructions+=4;goto B768654;
case 0x768657:c.instructions+=3;goto B768657;
case 0x76865d:c.instructions+=2;goto B76865d;
case 0x768662:c.instructions+=1;goto B768662;
case 0x768668:goto L768668;
case 0x76866a:goto L76866a;
case 0x76866b:c.instructions+=4;goto B76866b;
case 0x76866c:c.instructions+=3;goto B76866c;
case 0x76866d:c.instructions+=2;goto B76866d;
case 0x76866e:c.instructions+=1;goto B76866e;
case 0x76866f:goto L76866f;
case 0x768670:c.instructions+=10;goto B768670;
case 0x768672:c.instructions+=9;goto B768672;
case 0x768675:c.instructions+=8;goto B768675;
case 0x76867a:c.instructions+=7;goto B76867a;
case 0x76867d:c.instructions+=6;goto B76867d;
case 0x76867e:c.instructions+=5;goto B76867e;
case 0x768680:c.instructions+=4;goto B768680;
case 0x768686:c.instructions+=3;goto B768686;
case 0x768689:c.instructions+=2;goto B768689;
case 0x76868c:c.instructions+=1;goto B76868c;
case 0x768692:goto L768692;
case 0x768698:c.instructions+=3;goto B768698;
case 0x768699:c.instructions+=2;goto B768699;
case 0x76869a:c.instructions+=1;goto B76869a;
case 0x76869c:goto L76869c;
case 0x7686a3:c.instructions+=5;goto B7686a3;
case 0x7686a8:c.instructions+=4;goto B7686a8;
case 0x7686ad:c.instructions+=3;goto B7686ad;
case 0x7686ae:c.instructions+=2;goto B7686ae;
case 0x7686af:c.instructions+=1;goto B7686af;
case 0x7686b4:goto L7686b4;
case 0x7686b7:c.instructions+=2;goto B7686b7;
case 0x7686b9:c.instructions+=1;goto B7686b9;
case 0x7686bf:goto L7686bf;
case 0x7686c1:c.instructions+=1;goto B7686c1;
case 0x7686c6:goto L7686c6;
case 0x7686c8:c.instructions+=3;goto B7686c8;
case 0x7686cb:c.instructions+=2;goto B7686cb;
case 0x7686d2:c.instructions+=1;goto B7686d2;
case 0x7686d7:goto L7686d7;
case 0x7686d9:c.instructions+=3;goto B7686d9;
case 0x7686dc:c.instructions+=2;goto B7686dc;
case 0x7686e3:c.instructions+=1;goto B7686e3;
case 0x7686e8:goto L7686e8;
case 0x7686ea:c.instructions+=3;goto B7686ea;
case 0x7686eb:c.instructions+=2;goto B7686eb;
case 0x7686ee:c.instructions+=1;goto B7686ee;
case 0x7686f4:goto L7686f4;
case 0x7686f6:c.instructions+=1;goto B7686f6;
case 0x7686fc:goto L7686fc;
case 0x7686fe:c.instructions+=1;goto B7686fe;
case 0x768704:goto L768704;
case 0x768706:c.instructions+=1;goto B768706;
case 0x768708:goto L768708;
case 0x76870b:c.instructions+=4;goto B76870b;
case 0x76870e:c.instructions+=3;goto B76870e;
case 0x76870f:c.instructions+=2;goto B76870f;
case 0x768714:c.instructions+=1;goto B768714;
case 0x768716:goto L768716;
case 0x768719:c.instructions+=3;goto B768719;
case 0x76871a:c.instructions+=2;goto B76871a;
case 0x768720:c.instructions+=1;goto B768720;
case 0x768726:goto L768726;
case 0x768728:c.instructions+=1;goto B768728;
case 0x76872e:goto L76872e;
case 0x768732:c.instructions+=1;goto B768732;
case 0x768738:goto L768738;
case 0x76873c:c.instructions+=3;goto B76873c;
case 0x76873f:c.instructions+=2;goto B76873f;
case 0x768744:c.instructions+=1;goto B768744;
case 0x768746:goto L768746;
case 0x768749:c.instructions+=1;goto B768749;
case 0x76874b:goto L76874b;
case 0x76874e:goto L76874e;
case 0x768750:c.instructions+=2;goto B768750;
case 0x768752:c.instructions+=1;goto B768752;
case 0x768754:goto L768754;
case 0x768758:c.instructions+=2;goto B768758;
case 0x76875b:c.instructions+=1;goto B76875b;
case 0x76875d:goto L76875d;
case 0x768760:c.instructions+=3;goto B768760;
case 0x768763:c.instructions+=2;goto B768763;
case 0x768766:c.instructions+=1;goto B768766;
case 0x768767:goto L768767;
case 0x768769:c.instructions+=1;goto B768769;
case 0x76876b:goto L76876b;
case 0x76876c:c.instructions+=3;goto B76876c;
case 0x76876d:c.instructions+=2;goto B76876d;
case 0x768770:c.instructions+=1;goto B768770;
case 0x768772:goto L768772;
case 0x768773:c.instructions+=8;goto B768773;
case 0x768774:c.instructions+=7;goto B768774;
case 0x768775:c.instructions+=6;goto B768775;
case 0x768778:c.instructions+=5;goto B768778;
case 0x768779:c.instructions+=4;goto B768779;
case 0x76877e:c.instructions+=3;goto B76877e;
case 0x768781:c.instructions+=2;goto B768781;
case 0x768783:c.instructions+=1;goto B768783;
case 0x768788:goto L768788;
case 0x76878b:c.instructions+=2;goto B76878b;
case 0x76878d:c.instructions+=1;goto B76878d;
case 0x76878f:goto L76878f;
case 0x768792:c.instructions+=2;goto B768792;
case 0x768799:c.instructions+=1;goto B768799;
case 0x76879b:goto L76879b;
case 0x76879e:c.instructions+=1;goto B76879e;
case 0x7687a0:goto L7687a0;
case 0x7687a3:goto L7687a3;
case 0x7687a5:c.instructions+=2;goto B7687a5;
case 0x7687a7:c.instructions+=1;goto B7687a7;
case 0x7687a9:goto L7687a9;
case 0x7687ad:c.instructions+=3;goto B7687ad;
case 0x7687b0:c.instructions+=2;goto B7687b0;
case 0x7687b2:c.instructions+=1;goto B7687b2;
case 0x7687b4:goto L7687b4;
case 0x7687b8:goto L7687b8;
case 0x7687bd:c.instructions+=6;goto B7687bd;
case 0x7687c0:c.instructions+=5;goto B7687c0;
case 0x7687c1:c.instructions+=4;goto B7687c1;
case 0x7687c2:c.instructions+=3;goto B7687c2;
case 0x7687c3:c.instructions+=2;goto B7687c3;
case 0x7687c5:c.instructions+=1;goto B7687c5;
case 0x7687c7:goto L7687c7;
case 0x7687ca:goto L7687ca;
case 0x7687cb:c.instructions+=3;goto B7687cb;
case 0x7687cc:c.instructions+=2;goto B7687cc;
case 0x7687cf:c.instructions+=1;goto B7687cf;
case 0x7687d1:goto L7687d1;
case 0x7687d4:c.instructions+=3;goto B7687d4;
case 0x7687da:c.instructions+=2;goto B7687da;
case 0x7687df:c.instructions+=1;goto B7687df;
case 0x7687e5:goto L7687e5;
case 0x7687e8:c.instructions+=1;goto B7687e8;
case 0x7687ed:goto L7687ed;
case 0x7687ee:c.instructions+=4;goto B7687ee;
case 0x7687ef:c.instructions+=3;goto B7687ef;
case 0x7687f1:c.instructions+=2;goto B7687f1;
case 0x7687f2:c.instructions+=1;goto B7687f2;
case 0x7687f4:goto L7687f4;
case 0x7687f7:goto L7687f7;
case 0x7687fa:c.instructions+=1;goto B7687fa;
case 0x7687ff:goto L7687ff;
case 0x768800:c.instructions+=1;goto B768800;
case 0x768805:goto L768805;
case 0x768806:c.instructions+=4;goto B768806;
case 0x768808:c.instructions+=3;goto B768808;
case 0x768809:c.instructions+=2;goto B768809;
case 0x76880a:c.instructions+=1;goto B76880a;
case 0x76880c:goto L76880c;
case 0x768816:c.instructions+=3;goto B768816;
case 0x76881c:c.instructions+=2;goto B76881c;
case 0x768822:c.instructions+=1;goto B768822;
case 0x768824:goto L768824;
case 0x768827:c.instructions+=3;goto B768827;
case 0x76882a:c.instructions+=2;goto B76882a;
case 0x76882b:c.instructions+=1;goto B76882b;
case 0x768830:goto L768830;
case 0x768831:c.instructions+=1;goto B768831;
case 0x768840:goto L768840;
case 0x768841:c.instructions+=13;goto B768841;
case 0x768843:c.instructions+=12;goto B768843;
case 0x768844:c.instructions+=11;goto B768844;
case 0x768846:c.instructions+=10;goto B768846;
case 0x768847:c.instructions+=9;goto B768847;
case 0x768848:c.instructions+=8;goto B768848;
case 0x768849:c.instructions+=7;goto B768849;
case 0x76884a:c.instructions+=6;goto B76884a;
case 0x76884b:c.instructions+=5;goto B76884b;
case 0x76884c:c.instructions+=4;goto B76884c;
case 0x76884d:c.instructions+=3;goto B76884d;
case 0x76884e:c.instructions+=2;goto B76884e;
case 0x768851:c.instructions+=1;goto B768851;
case 0x768854:goto L768854;
case 0x768856:c.instructions+=2;goto B768856;
case 0x768858:c.instructions+=1;goto B768858;
case 0x76885a:goto L76885a;
case 0x76885d:c.instructions+=2;goto B76885d;
case 0x768861:c.instructions+=1;goto B768861;
case 0x768863:goto L768863;
case 0x768866:c.instructions+=2;goto B768866;
case 0x768869:c.instructions+=1;goto B768869;
case 0x76886c:goto L76886c;
case 0x76886f:c.instructions+=3;goto B76886f;
case 0x768871:c.instructions+=2;goto B768871;
case 0x768873:c.instructions+=1;goto B768873;
case 0x768875:goto L768875;
case 0x768878:c.instructions+=2;goto B768878;
case 0x76887c:c.instructions+=1;goto B76887c;
case 0x76887e:goto L76887e;
case 0x768880:c.instructions+=4;goto B768880;
case 0x768883:c.instructions+=3;goto B768883;
case 0x768884:c.instructions+=2;goto B768884;
case 0x768885:c.instructions+=1;goto B768885;
case 0x768890:goto L768890;
case 0x768894:c.instructions+=3;goto B768894;
case 0x768898:c.instructions+=2;goto B768898;
case 0x76889a:c.instructions+=1;goto B76889a;
case 0x76889c:goto L76889c;
case 0x76889e:c.instructions+=5;goto B76889e;
case 0x7688a2:c.instructions+=4;goto B7688a2;
case 0x7688a3:c.instructions+=3;goto B7688a3;
case 0x7688a5:c.instructions+=2;goto B7688a5;
case 0x7688a8:c.instructions+=1;goto B7688a8;
case 0x7688aa:goto L7688aa;
case 0x7688ac:c.instructions+=2;goto B7688ac;
case 0x7688af:c.instructions+=1;goto B7688af;
case 0x7688b1:goto L7688b1;
case 0x7688b3:goto L7688b3;
case 0x7688b5:c.instructions+=3;goto B7688b5;
case 0x7688b8:c.instructions+=2;goto B7688b8;
case 0x7688bb:c.instructions+=1;goto B7688bb;
case 0x7688bd:goto L7688bd;
case 0x7688bf:c.instructions+=9;goto B7688bf;
case 0x7688c2:c.instructions+=8;goto B7688c2;
case 0x7688c4:c.instructions+=7;goto B7688c4;
case 0x7688c6:c.instructions+=6;goto B7688c6;
case 0x7688c9:c.instructions+=5;goto B7688c9;
case 0x7688cb:c.instructions+=4;goto B7688cb;
case 0x7688cd:c.instructions+=3;goto B7688cd;
case 0x7688d0:c.instructions+=2;goto B7688d0;
case 0x7688d3:c.instructions+=1;goto B7688d3;
case 0x7688d5:goto L7688d5;
case 0x7688d7:goto L7688d7;
case 0x7688d9:c.instructions+=1;goto B7688d9;
case 0x7688db:goto L7688db;
case 0x7688dd:c.instructions+=3;goto B7688dd;
case 0x7688e0:c.instructions+=2;goto B7688e0;
case 0x7688e3:c.instructions+=1;goto B7688e3;
case 0x7688e5:goto L7688e5;
case 0x7688e9:c.instructions+=2;goto B7688e9;
case 0x7688ea:c.instructions+=1;goto B7688ea;
case 0x7688eb:goto L7688eb;
case 0x7688ef:c.instructions+=1;goto B7688ef;
case 0x7688f0:goto L7688f0;
case 0x7688f1:c.instructions+=7;goto B7688f1;
case 0x7688f3:c.instructions+=6;goto B7688f3;
case 0x7688f5:c.instructions+=5;goto B7688f5;
case 0x7688f6:c.instructions+=4;goto B7688f6;
case 0x7688f8:c.instructions+=3;goto B7688f8;
case 0x7688f9:c.instructions+=2;goto B7688f9;
case 0x7688fc:c.instructions+=1;goto B7688fc;
case 0x7688fe:goto L7688fe;
case 0x7688ff:c.instructions+=1;goto B7688ff;
case 0x768900:goto L768900;
case 0x768902:c.instructions+=1;goto B768902;
case 0x768904:goto L768904;
case 0x768907:c.instructions+=11;goto B768907;
case 0x768909:c.instructions+=10;goto B768909;
case 0x76890a:c.instructions+=9;goto B76890a;
case 0x76890c:c.instructions+=8;goto B76890c;
case 0x76890e:c.instructions+=7;goto B76890e;
case 0x768911:c.instructions+=6;goto B768911;
case 0x768913:c.instructions+=5;goto B768913;
case 0x768916:c.instructions+=4;goto B768916;
case 0x768918:c.instructions+=3;goto B768918;
case 0x76891b:c.instructions+=2;goto B76891b;
case 0x76891d:c.instructions+=1;goto B76891d;
case 0x768922:goto L768922;
case 0x768924:c.instructions+=3;goto B768924;
case 0x768925:c.instructions+=2;goto B768925;
case 0x768926:c.instructions+=1;goto B768926;
case 0x768928:goto L768928;
case 0x76892b:c.instructions+=3;goto B76892b;
case 0x76892e:c.instructions+=2;goto B76892e;
case 0x768930:c.instructions+=1;goto B768930;
case 0x768932:goto L768932;
case 0x768934:goto L768934;
case 0x768935:c.instructions+=2;goto B768935;
case 0x768938:c.instructions+=1;goto B768938;
case 0x76893a:goto L76893a;
case 0x76893d:goto L76893d;
case 0x768940:c.instructions+=1;goto B768940;
case 0x768942:goto L768942;
case 0x768943:c.instructions+=1;goto B768943;
case 0x768944:goto L768944;
case 0x768946:c.instructions+=6;goto B768946;
case 0x768948:c.instructions+=5;goto B768948;
case 0x76894b:c.instructions+=4;goto B76894b;
case 0x76894c:c.instructions+=3;goto B76894c;
case 0x76894e:c.instructions+=2;goto B76894e;
case 0x76894f:c.instructions+=1;goto B76894f;
case 0x768950:goto L768950;
case 0x768959:c.instructions+=1;goto B768959;
case 0x76895f:goto L76895f;
case 0x768964:c.instructions+=2;goto B768964;
case 0x768969:c.instructions+=1;goto B768969;
case 0x76896a:goto L76896a;
case 0x76896b:c.instructions+=9;goto B76896b;
case 0x76896d:c.instructions+=8;goto B76896d;
case 0x768970:c.instructions+=7;goto B768970;
case 0x768975:c.instructions+=6;goto B768975;
case 0x768978:c.instructions+=5;goto B768978;
case 0x768979:c.instructions+=4;goto B768979;
case 0x76897b:c.instructions+=3;goto B76897b;
case 0x76897d:c.instructions+=2;goto B76897d;
case 0x768980:c.instructions+=1;goto B768980;
case 0x768982:goto L768982;
case 0x768985:c.instructions+=1;goto B768985;
case 0x768987:goto L768987;
case 0x76898c:c.instructions+=2;goto B76898c;
case 0x76898d:c.instructions+=1;goto B76898d;
case 0x768992:goto L768992;
case 0x768994:c.instructions+=3;goto B768994;
case 0x768995:c.instructions+=2;goto B768995;
case 0x768996:c.instructions+=1;goto B768996;
case 0x768998:goto L768998;
case 0x76899d:c.instructions+=2;goto B76899d;
case 0x76899e:c.instructions+=1;goto B76899e;
case 0x7689a3:goto L7689a3;
case 0x7689a5:c.instructions+=3;goto B7689a5;
case 0x7689a6:c.instructions+=2;goto B7689a6;
case 0x7689a7:c.instructions+=1;goto B7689a7;
case 0x7689a9:goto L7689a9;
case 0x7689ab:c.instructions+=4;goto B7689ab;
case 0x7689ae:c.instructions+=3;goto B7689ae;
case 0x7689af:c.instructions+=2;goto B7689af;
case 0x7689b1:c.instructions+=1;goto B7689b1;
case 0x7689b3:goto L7689b3;
case 0x7689b5:c.instructions+=3;goto B7689b5;
case 0x7689b8:c.instructions+=2;goto B7689b8;
case 0x7689b9:c.instructions+=1;goto B7689b9;
case 0x7689be:goto L7689be;
case 0x7689c4:c.instructions+=1;goto B7689c4;
case 0x7689ca:goto L7689ca;
case 0x7689cc:c.instructions+=1;goto B7689cc;
case 0x7689ce:goto L7689ce;
case 0x7689d1:goto L7689d1;
case 0x7689d2:c.instructions+=1;goto B7689d2;
case 0x7689d7:goto L7689d7;
case 0x7689d8:goto L7689d8;
case 0x7689db:c.instructions+=3;goto B7689db;
case 0x7689de:c.instructions+=2;goto B7689de;
case 0x7689df:c.instructions+=1;goto B7689df;
case 0x7689e4:goto L7689e4;
case 0x7689e5:c.instructions+=1;goto B7689e5;
case 0x7689e6:goto L7689e6;
case 0x7689e8:goto L7689e8;
case 0x7689ed:c.instructions+=2;goto B7689ed;
case 0x7689f4:c.instructions+=1;goto B7689f4;
case 0x7689f6:goto L7689f6;
case 0x7689f7:c.instructions+=3;goto B7689f7;
case 0x7689f8:c.instructions+=2;goto B7689f8;
case 0x7689fb:c.instructions+=1;goto B7689fb;
case 0x7689fd:goto L7689fd;
case 0x7689ff:c.instructions+=2;goto B7689ff;
case 0x768a00:c.instructions+=1;goto B768a00;
case 0x768a01:goto L768a01;
case 0x768a03:c.instructions+=1;goto B768a03;
case 0x768a04:goto L768a04;
case 0x768a05:c.instructions+=7;goto B768a05;
case 0x768a07:c.instructions+=6;goto B768a07;
case 0x768a08:c.instructions+=5;goto B768a08;
case 0x768a09:c.instructions+=4;goto B768a09;
case 0x768a0a:c.instructions+=3;goto B768a0a;
case 0x768a0c:c.instructions+=2;goto B768a0c;
case 0x768a0e:c.instructions+=1;goto B768a0e;
case 0x768a0f:goto L768a0f;
case 0x768a12:c.instructions+=9;goto B768a12;
case 0x768a15:c.instructions+=8;goto B768a15;
case 0x768a16:c.instructions+=7;goto B768a16;
case 0x768a18:c.instructions+=6;goto B768a18;
case 0x768a1a:c.instructions+=5;goto B768a1a;
case 0x768a1c:c.instructions+=4;goto B768a1c;
case 0x768a1f:c.instructions+=3;goto B768a1f;
case 0x768a25:c.instructions+=2;goto B768a25;
case 0x768a28:c.instructions+=1;goto B768a28;
case 0x768a2a:goto L768a2a;
case 0x768a2c:goto L768a2c;
case 0x768a2f:c.instructions+=1;goto B768a2f;
case 0x768a31:goto L768a31;
case 0x768a34:goto L768a34;
case 0x768a36:c.instructions+=1;goto B768a36;
case 0x768a38:goto L768a38;
case 0x768a39:c.instructions+=4;goto B768a39;
case 0x768a3c:c.instructions+=3;goto B768a3c;
case 0x768a3f:c.instructions+=2;goto B768a3f;
case 0x768a42:c.instructions+=1;goto B768a42;
case 0x768a48:goto L768a48;
case 0x768a49:c.instructions+=4;goto B768a49;
case 0x768a4a:c.instructions+=3;goto B768a4a;
case 0x768a4b:c.instructions+=2;goto B768a4b;
case 0x768a4c:c.instructions+=1;goto B768a4c;
case 0x768a4f:goto L768a4f;
case 0x768a52:c.instructions+=2;goto B768a52;
case 0x768a53:c.instructions+=1;goto B768a53;
case 0x768a55:goto L768a55;
case 0x768a56:c.instructions+=2;goto B768a56;
case 0x768a57:c.instructions+=1;goto B768a57;
case 0x768a59:goto L768a59;
case 0x768a5c:c.instructions+=1;goto B768a5c;
case 0x768a5e:goto L768a5e;
case 0x768a61:c.instructions+=1;goto B768a61;
case 0x768a63:goto L768a63;
case 0x768a69:c.instructions+=1;goto B768a69;
case 0x768a6b:goto L768a6b;
case 0x768a6c:c.instructions+=1;goto B768a6c;
case 0x768a6e:goto L768a6e;
case 0x768a6f:c.instructions+=2;goto B768a6f;
case 0x768a70:c.instructions+=1;goto B768a70;
case 0x768a72:goto L768a72;
case 0x768a75:c.instructions+=2;goto B768a75;
case 0x768a7a:c.instructions+=1;goto B768a7a;
case 0x768a7c:goto L768a7c;
case 0x768a7f:c.instructions+=2;goto B768a7f;
case 0x768a85:c.instructions+=1;goto B768a85;
case 0x768a87:goto L768a87;
case 0x768a8a:c.instructions+=2;goto B768a8a;
case 0x768a90:c.instructions+=1;goto B768a90;
case 0x768a92:goto L768a92;
case 0x768a95:c.instructions+=2;goto B768a95;
case 0x768a9a:c.instructions+=1;goto B768a9a;
case 0x768a9c:goto L768a9c;
case 0x768a9f:c.instructions+=2;goto B768a9f;
case 0x768aa4:c.instructions+=1;goto B768aa4;
case 0x768aa6:goto L768aa6;
case 0x768aa9:c.instructions+=2;goto B768aa9;
case 0x768aae:c.instructions+=1;goto B768aae;
case 0x768ab0:goto L768ab0;
case 0x768ab3:c.instructions+=1;goto B768ab3;
case 0x768ab8:goto L768ab8;
case 0x768aba:c.instructions+=1;goto B768aba;
case 0x768ac0:goto L768ac0;
case 0x768ac3:c.instructions+=1;goto B768ac3;
case 0x768ac9:goto L768ac9;
case 0x768acc:c.instructions+=5;goto B768acc;
case 0x768acf:c.instructions+=4;goto B768acf;
case 0x768ad0:c.instructions+=3;goto B768ad0;
case 0x768ad1:c.instructions+=2;goto B768ad1;
case 0x768ad2:c.instructions+=1;goto B768ad2;
case 0x768ad7:goto L768ad7;
case 0x768adc:c.instructions+=4;goto B768adc;
case 0x768ade:c.instructions+=3;goto B768ade;
case 0x768ae1:c.instructions+=2;goto B768ae1;
case 0x768ae2:c.instructions+=1;goto B768ae2;
case 0x768ae7:goto L768ae7;
case 0x768ae9:c.instructions+=1;goto B768ae9;
case 0x768aeb:goto L768aeb;
case 0x768aec:c.instructions+=2;goto B768aec;
case 0x768aef:c.instructions+=1;goto B768aef;
case 0x768af1:goto L768af1;
case 0x768af4:c.instructions+=1;goto B768af4;
case 0x768af6:goto L768af6;
case 0x768af9:c.instructions+=1;goto B768af9;
case 0x768afb:goto L768afb;
case 0x768afe:c.instructions+=1;goto B768afe;
case 0x768b00:goto L768b00;
case 0x768b03:c.instructions+=1;goto B768b03;
case 0x768b05:goto L768b05;
case 0x768b08:goto L768b08;
case 0x768b0d:c.instructions+=3;goto B768b0d;
case 0x768b10:c.instructions+=2;goto B768b10;
case 0x768b13:c.instructions+=1;goto B768b13;
case 0x768b15:goto L768b15;
case 0x768b17:c.instructions+=2;goto B768b17;
case 0x768b19:c.instructions+=1;goto B768b19;
case 0x768b1b:goto L768b1b;
case 0x768b1c:goto L768b1c;
case 0x768b1e:goto L768b1e;
case 0x768b20:c.instructions+=3;goto B768b20;
case 0x768b21:c.instructions+=2;goto B768b21;
case 0x768b24:c.instructions+=1;goto B768b24;
case 0x768b26:goto L768b26;
case 0x768b29:c.instructions+=1;goto B768b29;
case 0x768b2b:goto L768b2b;
case 0x768b2e:c.instructions+=1;goto B768b2e;
case 0x768b30:goto L768b30;
case 0x768b33:c.instructions+=1;goto B768b33;
case 0x768b35:goto L768b35;
case 0x768b36:c.instructions+=1;goto B768b36;
case 0x768b38:goto L768b38;
case 0x768b39:goto L768b39;
case 0x768b3a:c.instructions+=8;goto B768b3a;
case 0x768b3c:c.instructions+=7;goto B768b3c;
case 0x768b3f:c.instructions+=6;goto B768b3f;
case 0x768b44:c.instructions+=5;goto B768b44;
case 0x768b47:c.instructions+=4;goto B768b47;
case 0x768b4a:c.instructions+=3;goto B768b4a;
case 0x768b4b:c.instructions+=2;goto B768b4b;
case 0x768b4e:c.instructions+=1;goto B768b4e;
case 0x768b53:goto L768b53;
case 0x768b55:c.instructions+=11;goto B768b55;
case 0x768b57:c.instructions+=10;goto B768b57;
case 0x768b5a:c.instructions+=9;goto B768b5a;
case 0x768b5b:c.instructions+=8;goto B768b5b;
case 0x768b60:c.instructions+=7;goto B768b60;
case 0x768b62:c.instructions+=6;goto B768b62;
case 0x768b64:c.instructions+=5;goto B768b64;
case 0x768b69:c.instructions+=4;goto B768b69;
case 0x768b6e:c.instructions+=3;goto B768b6e;
case 0x768b6f:c.instructions+=2;goto B768b6f;
case 0x768b70:c.instructions+=1;goto B768b70;
case 0x768b76:goto L768b76;
case 0x768b78:c.instructions+=1;goto B768b78;
case 0x768b7a:goto L768b7a;
case 0x768b80:c.instructions+=2;goto B768b80;
case 0x768b81:c.instructions+=1;goto B768b81;
case 0x768b83:goto L768b83;
case 0x768b86:c.instructions+=3;goto B768b86;
case 0x768b87:c.instructions+=2;goto B768b87;
case 0x768b8d:c.instructions+=1;goto B768b8d;
case 0x768b92:goto L768b92;
case 0x768b94:c.instructions+=3;goto B768b94;
case 0x768b95:c.instructions+=2;goto B768b95;
case 0x768b96:c.instructions+=1;goto B768b96;
case 0x768b98:goto L768b98;
case 0x768b99:c.instructions+=1;goto B768b99;
case 0x768b9e:goto L768b9e;
case 0x768ba0:c.instructions+=2;goto B768ba0;
case 0x768ba1:c.instructions+=1;goto B768ba1;
case 0x768ba3:goto L768ba3;
case 0x768baa:c.instructions+=2;goto B768baa;
case 0x768bb0:c.instructions+=1;goto B768bb0;
case 0x768bb6:goto L768bb6;
case 0x768bbb:c.instructions+=3;goto B768bbb;
case 0x768bbe:c.instructions+=2;goto B768bbe;
case 0x768bc0:c.instructions+=1;goto B768bc0;
case 0x768bc3:goto L768bc3;
case 0x768bc6:c.instructions+=3;goto B768bc6;
case 0x768bc9:c.instructions+=2;goto B768bc9;
case 0x768bca:c.instructions+=1;goto B768bca;
case 0x768bcf:goto L768bcf;
case 0x768bd0:c.instructions+=1;goto B768bd0;
case 0x768bd3:goto L768bd3;
case 0x768bd4:c.instructions+=14;goto B768bd4;
case 0x768bd6:c.instructions+=13;goto B768bd6;
case 0x768bd9:c.instructions+=12;goto B768bd9;
case 0x768bde:c.instructions+=11;goto B768bde;
case 0x768be1:c.instructions+=10;goto B768be1;
case 0x768be3:c.instructions+=9;goto B768be3;
case 0x768be6:c.instructions+=8;goto B768be6;
case 0x768be9:c.instructions+=7;goto B768be9;
case 0x768bea:c.instructions+=6;goto B768bea;
case 0x768bed:c.instructions+=5;goto B768bed;
case 0x768bf2:c.instructions+=4;goto B768bf2;
case 0x768bf4:c.instructions+=3;goto B768bf4;
case 0x768bf9:c.instructions+=2;goto B768bf9;
case 0x768bfa:c.instructions+=1;goto B768bfa;
case 0x768c00:goto L768c00;
case 0x768c02:c.instructions+=1;goto B768c02;
case 0x768c04:goto L768c04;
case 0x768c07:c.instructions+=1;goto B768c07;
case 0x768c0c:goto L768c0c;
case 0x768c0f:c.instructions+=1;goto B768c0f;
case 0x768c11:goto L768c11;
case 0x768c15:c.instructions+=1;goto B768c15;
case 0x768c17:goto L768c17;
case 0x768c18:c.instructions+=2;goto B768c18;
case 0x768c1e:c.instructions+=1;goto B768c1e;
case 0x768c23:goto L768c23;
case 0x768c29:c.instructions+=3;goto B768c29;
case 0x768c2a:c.instructions+=2;goto B768c2a;
case 0x768c2c:c.instructions+=1;goto B768c2c;
case 0x768c31:goto L768c31;
case 0x768c33:c.instructions+=2;goto B768c33;
case 0x768c34:c.instructions+=1;goto B768c34;
case 0x768c36:goto L768c36;
case 0x768c38:c.instructions+=1;goto B768c38;
case 0x768c3a:goto L768c3a;
case 0x768c3c:c.instructions+=1;goto B768c3c;
case 0x768c3d:goto L768c3d;
case 0x768c40:c.instructions+=2;goto B768c40;
case 0x768c43:c.instructions+=1;goto B768c43;
case 0x768c48:goto L768c48;
case 0x768c49:c.instructions+=1;goto B768c49;
case 0x768c4a:goto L768c4a;
case 0x768c4b:c.instructions+=8;goto B768c4b;
case 0x768c4d:c.instructions+=7;goto B768c4d;
case 0x768c50:c.instructions+=6;goto B768c50;
case 0x768c55:c.instructions+=5;goto B768c55;
case 0x768c58:c.instructions+=4;goto B768c58;
case 0x768c5b:c.instructions+=3;goto B768c5b;
case 0x768c5c:c.instructions+=2;goto B768c5c;
case 0x768c5f:c.instructions+=1;goto B768c5f;
case 0x768c64:goto L768c64;
case 0x768c66:c.instructions+=11;goto B768c66;
case 0x768c68:c.instructions+=10;goto B768c68;
case 0x768c6b:c.instructions+=9;goto B768c6b;
case 0x768c6c:c.instructions+=8;goto B768c6c;
case 0x768c71:c.instructions+=7;goto B768c71;
case 0x768c73:c.instructions+=6;goto B768c73;
case 0x768c75:c.instructions+=5;goto B768c75;
case 0x768c7a:c.instructions+=4;goto B768c7a;
case 0x768c7f:c.instructions+=3;goto B768c7f;
case 0x768c80:c.instructions+=2;goto B768c80;
case 0x768c81:c.instructions+=1;goto B768c81;
case 0x768c87:goto L768c87;
case 0x768c89:c.instructions+=1;goto B768c89;
case 0x768c8b:goto L768c8b;
case 0x768c91:c.instructions+=2;goto B768c91;
case 0x768c92:c.instructions+=1;goto B768c92;
case 0x768c97:goto L768c97;
case 0x768c98:c.instructions+=5;goto B768c98;
case 0x768c99:c.instructions+=4;goto B768c99;
case 0x768c9c:c.instructions+=3;goto B768c9c;
case 0x768c9d:c.instructions+=2;goto B768c9d;
case 0x768ca3:c.instructions+=1;goto B768ca3;
case 0x768ca8:goto L768ca8;
case 0x768caa:c.instructions+=5;goto B768caa;
case 0x768cab:c.instructions+=4;goto B768cab;
case 0x768cac:c.instructions+=3;goto B768cac;
case 0x768cb1:c.instructions+=2;goto B768cb1;
case 0x768cb6:c.instructions+=1;goto B768cb6;
case 0x768cbc:goto L768cbc;
case 0x768cbe:c.instructions+=10;goto B768cbe;
case 0x768cc1:c.instructions+=9;goto B768cc1;
case 0x768cc2:c.instructions+=8;goto B768cc2;
case 0x768cc7:c.instructions+=7;goto B768cc7;
case 0x768cc9:c.instructions+=6;goto B768cc9;
case 0x768ccb:c.instructions+=5;goto B768ccb;
case 0x768ccd:c.instructions+=4;goto B768ccd;
case 0x768ccf:c.instructions+=3;goto B768ccf;
case 0x768cd0:c.instructions+=2;goto B768cd0;
case 0x768cd1:c.instructions+=1;goto B768cd1;
case 0x768cd7:goto L768cd7;
case 0x768cd9:c.instructions+=1;goto B768cd9;
case 0x768cdb:goto L768cdb;
case 0x768ce2:c.instructions+=3;goto B768ce2;
case 0x768ce4:c.instructions+=2;goto B768ce4;
case 0x768ce5:c.instructions+=1;goto B768ce5;
case 0x768cea:goto L768cea;
case 0x768ced:c.instructions+=3;goto B768ced;
case 0x768cee:c.instructions+=2;goto B768cee;
case 0x768cf4:c.instructions+=1;goto B768cf4;
case 0x768cf9:goto L768cf9;
case 0x768cfb:c.instructions+=3;goto B768cfb;
case 0x768cfc:c.instructions+=2;goto B768cfc;
case 0x768cfd:c.instructions+=1;goto B768cfd;
case 0x768cff:goto L768cff;
case 0x768d08:c.instructions+=2;goto B768d08;
case 0x768d0e:c.instructions+=1;goto B768d0e;
case 0x768d10:goto L768d10;
case 0x768d17:c.instructions+=1;goto B768d17;
case 0x768d19:goto L768d19;
case 0x768d1e:c.instructions+=2;goto B768d1e;
case 0x768d20:c.instructions+=1;goto B768d20;
case 0x768d22:goto L768d22;
case 0x768d23:c.instructions+=4;goto B768d23;
case 0x768d26:c.instructions+=3;goto B768d26;
case 0x768d27:c.instructions+=2;goto B768d27;
case 0x768d2d:c.instructions+=1;goto B768d2d;
case 0x768d32:goto L768d32;
case 0x768d35:c.instructions+=2;goto B768d35;
case 0x768d37:c.instructions+=1;goto B768d37;
case 0x768d39:goto L768d39;
case 0x768d3f:c.instructions+=3;goto B768d3f;
case 0x768d46:c.instructions+=2;goto B768d46;
case 0x768d4c:c.instructions+=1;goto B768d4c;
case 0x768d51:goto L768d51;
case 0x768d57:c.instructions+=2;goto B768d57;
case 0x768d58:c.instructions+=1;goto B768d58;
case 0x768d5a:goto L768d5a;
case 0x768d60:c.instructions+=1;goto B768d60;
case 0x768d62:goto L768d62;
case 0x768d69:c.instructions+=1;goto B768d69;
case 0x768d6b:goto L768d6b;
case 0x768d6c:c.instructions+=1;goto B768d6c;
case 0x768d71:goto L768d71;
case 0x768d73:c.instructions+=2;goto B768d73;
case 0x768d74:c.instructions+=1;goto B768d74;
case 0x768d76:goto L768d76;
case 0x768d7d:goto L768d7d;
case 0x768d83:goto L768d83;
case 0x768d89:c.instructions+=4;goto B768d89;
case 0x768d8e:c.instructions+=3;goto B768d8e;
case 0x768d90:c.instructions+=2;goto B768d90;
case 0x768d92:c.instructions+=1;goto B768d92;
case 0x768d98:goto L768d98;
case 0x768d9a:c.instructions+=10;goto B768d9a;
case 0x768d9d:c.instructions+=9;goto B768d9d;
case 0x768d9e:c.instructions+=8;goto B768d9e;
case 0x768da3:c.instructions+=7;goto B768da3;
case 0x768da5:c.instructions+=6;goto B768da5;
case 0x768da7:c.instructions+=5;goto B768da7;
case 0x768da9:c.instructions+=4;goto B768da9;
case 0x768dab:c.instructions+=3;goto B768dab;
case 0x768dac:c.instructions+=2;goto B768dac;
case 0x768dad:c.instructions+=1;goto B768dad;
case 0x768db3:goto L768db3;
case 0x768db5:c.instructions+=1;goto B768db5;
case 0x768dbb:goto L768dbb;
case 0x768dbe:c.instructions+=3;goto B768dbe;
case 0x768dbf:c.instructions+=2;goto B768dbf;
case 0x768dc5:c.instructions+=1;goto B768dc5;
case 0x768dca:goto L768dca;
case 0x768dcb:c.instructions+=4;goto B768dcb;
case 0x768dcd:c.instructions+=3;goto B768dcd;
case 0x768dcf:c.instructions+=2;goto B768dcf;
case 0x768dd0:c.instructions+=1;goto B768dd0;
case 0x768dd2:goto L768dd2;
case 0x768dd9:c.instructions+=2;goto B768dd9;
case 0x768ddf:c.instructions+=1;goto B768ddf;
case 0x768de1:goto L768de1;
case 0x768de7:c.instructions+=1;goto B768de7;
case 0x768de9:goto L768de9;
case 0x768def:c.instructions+=1;goto B768def;
case 0x768df4:goto L768df4;
case 0x768dfa:c.instructions+=2;goto B768dfa;
case 0x768dfb:c.instructions+=1;goto B768dfb;
case 0x768dfd:goto L768dfd;
case 0x768dff:c.instructions+=1;goto B768dff;
case 0x768e01:goto L768e01;
case 0x768e07:c.instructions+=1;goto B768e07;
case 0x768e09:goto L768e09;
case 0x768e0e:c.instructions+=2;goto B768e0e;
case 0x768e10:c.instructions+=1;goto B768e10;
case 0x768e12:goto L768e12;
case 0x768e13:c.instructions+=4;goto B768e13;
case 0x768e16:c.instructions+=3;goto B768e16;
case 0x768e17:c.instructions+=2;goto B768e17;
case 0x768e1d:c.instructions+=1;goto B768e1d;
case 0x768e22:goto L768e22;
case 0x768e25:c.instructions+=2;goto B768e25;
case 0x768e27:c.instructions+=1;goto B768e27;
case 0x768e29:goto L768e29;
case 0x768e2a:goto L768e2a;
case 0x768e2b:c.instructions+=1;goto B768e2b;
case 0x768e30:goto L768e30;
case 0x768e32:c.instructions+=3;goto B768e32;
case 0x768e33:c.instructions+=2;goto B768e33;
case 0x768e34:c.instructions+=1;goto B768e34;
case 0x768e36:goto L768e36;
case 0x768e3d:c.instructions+=2;goto B768e3d;
case 0x768e43:c.instructions+=1;goto B768e43;
case 0x768e45:goto L768e45;
case 0x768e4b:goto L768e4b;
case 0x768e50:c.instructions+=3;goto B768e50;
case 0x768e53:c.instructions+=2;goto B768e53;
case 0x768e55:c.instructions+=1;goto B768e55;
case 0x768e58:goto L768e58;
case 0x768e59:c.instructions+=1;goto B768e59;
case 0x768e5a:goto L768e5a;
case 0x768e5d:c.instructions+=3;goto B768e5d;
case 0x768e60:c.instructions+=2;goto B768e60;
case 0x768e61:c.instructions+=1;goto B768e61;
case 0x768e66:goto L768e66;
case 0x768e67:c.instructions+=1;goto B768e67;
case 0x768e6a:goto L768e6a;
case 0x768e6b:c.instructions+=8;goto B768e6b;
case 0x768e6d:c.instructions+=7;goto B768e6d;
case 0x768e70:c.instructions+=6;goto B768e70;
case 0x768e75:c.instructions+=5;goto B768e75;
case 0x768e78:c.instructions+=4;goto B768e78;
case 0x768e7b:c.instructions+=3;goto B768e7b;
case 0x768e7c:c.instructions+=2;goto B768e7c;
case 0x768e7f:c.instructions+=1;goto B768e7f;
case 0x768e84:goto L768e84;
case 0x768e86:c.instructions+=11;goto B768e86;
case 0x768e88:c.instructions+=10;goto B768e88;
case 0x768e8b:c.instructions+=9;goto B768e8b;
case 0x768e8c:c.instructions+=8;goto B768e8c;
case 0x768e91:c.instructions+=7;goto B768e91;
case 0x768e93:c.instructions+=6;goto B768e93;
case 0x768e95:c.instructions+=5;goto B768e95;
case 0x768e9a:c.instructions+=4;goto B768e9a;
case 0x768e9f:c.instructions+=3;goto B768e9f;
case 0x768ea0:c.instructions+=2;goto B768ea0;
case 0x768ea1:c.instructions+=1;goto B768ea1;
case 0x768ea7:goto L768ea7;
case 0x768ea9:c.instructions+=1;goto B768ea9;
case 0x768eab:goto L768eab;
case 0x768eb1:c.instructions+=2;goto B768eb1;
case 0x768eb2:c.instructions+=1;goto B768eb2;
case 0x768eb4:goto L768eb4;
case 0x768eb7:c.instructions+=3;goto B768eb7;
case 0x768eb8:c.instructions+=2;goto B768eb8;
case 0x768ebe:c.instructions+=1;goto B768ebe;
case 0x768ec3:goto L768ec3;
case 0x768ec5:c.instructions+=3;goto B768ec5;
case 0x768ec6:c.instructions+=2;goto B768ec6;
case 0x768ec7:c.instructions+=1;goto B768ec7;
case 0x768ec9:goto L768ec9;
case 0x768ecf:c.instructions+=1;goto B768ecf;
case 0x768ed1:goto L768ed1;
case 0x768ed3:c.instructions+=1;goto B768ed3;
case 0x768ed5:goto L768ed5;
case 0x768edc:c.instructions+=1;goto B768edc;
case 0x768ede:goto L768ede;
case 0x768ee3:c.instructions+=2;goto B768ee3;
case 0x768ee5:c.instructions+=1;goto B768ee5;
case 0x768ee7:goto L768ee7;
case 0x768ee8:c.instructions+=4;goto B768ee8;
case 0x768eeb:c.instructions+=3;goto B768eeb;
case 0x768eec:c.instructions+=2;goto B768eec;
case 0x768ef2:c.instructions+=1;goto B768ef2;
case 0x768ef7:goto L768ef7;
case 0x768efa:c.instructions+=2;goto B768efa;
case 0x768efc:c.instructions+=1;goto B768efc;
case 0x768efe:goto L768efe;
case 0x768eff:goto L768eff;
case 0x768f00:c.instructions+=1;goto B768f00;
case 0x768f05:goto L768f05;
case 0x768f07:c.instructions+=3;goto B768f07;
case 0x768f08:c.instructions+=2;goto B768f08;
case 0x768f09:c.instructions+=1;goto B768f09;
case 0x768f0b:goto L768f0b;
case 0x768f12:c.instructions+=2;goto B768f12;
case 0x768f18:c.instructions+=1;goto B768f18;
case 0x768f1e:goto L768f1e;
case 0x768f23:c.instructions+=3;goto B768f23;
case 0x768f26:c.instructions+=2;goto B768f26;
case 0x768f28:c.instructions+=1;goto B768f28;
case 0x768f2b:goto L768f2b;
case 0x768f2e:c.instructions+=3;goto B768f2e;
case 0x768f31:c.instructions+=2;goto B768f31;
case 0x768f32:c.instructions+=1;goto B768f32;
case 0x768f37:goto L768f37;
case 0x768f38:c.instructions+=1;goto B768f38;
case 0x768f3b:goto L768f3b;
case 0x768f41:c.instructions+=1;goto B768f41;
case 0x768f46:goto L768f46;
case 0x768f49:c.instructions+=8;goto B768f49;
case 0x768f4b:c.instructions+=7;goto B768f4b;
case 0x768f4c:c.instructions+=6;goto B768f4c;
case 0x768f4e:c.instructions+=5;goto B768f4e;
case 0x768f50:c.instructions+=4;goto B768f50;
case 0x768f51:c.instructions+=3;goto B768f51;
case 0x768f56:c.instructions+=2;goto B768f56;
case 0x768f5b:c.instructions+=1;goto B768f5b;
case 0x768f61:goto L768f61;
case 0x768f68:c.instructions+=1;goto B768f68;
case 0x768f6a:goto L768f6a;
case 0x768f71:goto L768f71;
case 0x768f72:goto L768f72;
case 0x768f78:c.instructions+=1;goto B768f78;
case 0x768f7d:goto L768f7d;
case 0x768f83:c.instructions+=6;goto B768f83;
case 0x768f86:c.instructions+=5;goto B768f86;
case 0x768f88:c.instructions+=4;goto B768f88;
case 0x768f8a:c.instructions+=3;goto B768f8a;
case 0x768f8b:c.instructions+=2;goto B768f8b;
case 0x768f90:c.instructions+=1;goto B768f90;
case 0x768f95:goto L768f95;
case 0x768f98:c.instructions+=9;goto B768f98;
case 0x768f9a:c.instructions+=8;goto B768f9a;
case 0x768f9c:c.instructions+=7;goto B768f9c;
case 0x768fa3:c.instructions+=6;goto B768fa3;
case 0x768fa4:c.instructions+=5;goto B768fa4;
case 0x768fab:c.instructions+=4;goto B768fab;
case 0x768fac:c.instructions+=3;goto B768fac;
case 0x768fad:c.instructions+=2;goto B768fad;
case 0x768fb2:c.instructions+=1;goto B768fb2;
case 0x768fb4:goto L768fb4;
case 0x768fbe:c.instructions+=1;goto B768fbe;
case 0x768fc0:goto L768fc0;
case 0x768fc6:c.instructions+=1;goto B768fc6;
case 0x768fcb:goto L768fcb;
case 0x768fd0:goto L768fd0;
case 0x768fd2:c.instructions+=2;goto B768fd2;
case 0x768fd7:c.instructions+=1;goto B768fd7;
case 0x768fdd:goto L768fdd;
case 0x768fe2:c.instructions+=2;goto B768fe2;
case 0x768fe5:c.instructions+=1;goto B768fe5;
case 0x768fe7:goto L768fe7;
case 0x768fea:c.instructions+=1;goto B768fea;
case 0x768fec:goto L768fec;
case 0x768fee:c.instructions+=1;goto B768fee;
case 0x768ff0:goto L768ff0;
case 0x768ff7:goto L768ff7;
case 0x768ff8:goto L768ff8;
case 0x768ffe:c.instructions+=1;goto B768ffe;
default:missing_instruction(c.pc);}
B768003:L768003:{c.instructions+=2;NFSU2_TR(0x768003);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B768006:{NFSU2_TR(0x768006);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76800bull));
TAIL_STATIC(0x75c6dau,75c);
}
B76800b:L76800b:{c.instructions+=2;NFSU2_TR(0x76800b);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76800e:{NFSU2_TR(0x76800e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x768013ull));
TAIL_STATIC(0x75c6dau,75c);
}
B768013:L768013:{c.instructions+=2;NFSU2_TR(0x768013);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B768016:{NFSU2_TR(0x768016);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76801bull));
TAIL_STATIC(0x75c6dau,75c);
}
B76801b:L76801b:{c.instructions+=2;NFSU2_TR(0x76801b);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76801e:{NFSU2_TR(0x76801e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x768023ull));
TAIL_STATIC(0x75c6dau,75c);
}
B768023:L768023:{c.instructions+=2;NFSU2_TR(0x768023);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B768026:{NFSU2_TR(0x768026);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76802bull));
TAIL_STATIC(0x75c6dau,75c);
}
B76802b:L76802b:{c.instructions+=2;NFSU2_TR(0x76802b);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76802e:{NFSU2_TR(0x76802e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x768033ull));
TAIL_STATIC(0x75c6dau,75c);
}
B768033:L768033:{c.instructions+=2;NFSU2_TR(0x768033);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B768036:{NFSU2_TR(0x768036);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76803bull));
TAIL_STATIC(0x75c6dau,75c);
}
B76803b:L76803b:{c.instructions+=2;NFSU2_TR(0x76803b);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76803e:{NFSU2_TR(0x76803e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x768043ull));
TAIL_STATIC(0x75c6dau,75c);
}
B768043:L768043:{c.instructions+=2;NFSU2_TR(0x768043);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B768046:{NFSU2_TR(0x768046);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76804bull));
TAIL_STATIC(0x75c6dau,75c);
}
B76804b:L76804b:{c.instructions+=3;NFSU2_TR(0x76804b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B76804e:{NFSU2_TR(0x76804e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B768054:{NFSU2_TR(0x768054);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x768059ull));
TAIL_STATIC(0x75c6dau,75c);
}
B768059:L768059:{c.instructions+=2;NFSU2_TR(0x768059);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76805f:{NFSU2_TR(0x76805f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x768064ull));
TAIL_STATIC(0x75c6dau,75c);
}
B768064:L768064:{c.instructions+=2;NFSU2_TR(0x768064);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76806a:{NFSU2_TR(0x76806a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76806full));
TAIL_STATIC(0x75c6dau,75c);
}
B76806f:L76806f:{c.instructions+=2;NFSU2_TR(0x76806f);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B768075:{NFSU2_TR(0x768075);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76807aull));
TAIL_STATIC(0x75c6dau,75c);
}
B76807a:L76807a:{c.instructions+=2;NFSU2_TR(0x76807a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B768080:{NFSU2_TR(0x768080);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x768085ull));
TAIL_STATIC(0x75c6dau,75c);
}
B768085:L768085:{c.instructions+=2;NFSU2_TR(0x768085);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76808b:{NFSU2_TR(0x76808b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x768090ull));
TAIL_STATIC(0x75c6dau,75c);
}
B768090:L768090:{c.instructions+=2;NFSU2_TR(0x768090);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B768096:{NFSU2_TR(0x768096);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76809bull));
TAIL_STATIC(0x75c6dau,75c);
}
B76809b:L76809b:{c.instructions+=2;NFSU2_TR(0x76809b);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7680a1:{NFSU2_TR(0x7680a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7680a6ull));
TAIL_STATIC(0x75c6dau,75c);
}
B7680a6:L7680a6:{c.instructions+=2;NFSU2_TR(0x7680a6);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7680ac:{NFSU2_TR(0x7680ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7680b1ull));
TAIL_STATIC(0x75c6dau,75c);
}
B7680b1:L7680b1:{c.instructions+=2;NFSU2_TR(0x7680b1);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7680b7:{NFSU2_TR(0x7680b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7680bcull));
TAIL_STATIC(0x75c6dau,75c);
}
B7680bc:L7680bc:{c.instructions+=2;NFSU2_TR(0x7680bc);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7680c2:{NFSU2_TR(0x7680c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7680c7ull));
TAIL_STATIC(0x75c6dau,75c);
}
B7680c7:L7680c7:{c.instructions+=3;NFSU2_TR(0x7680c7);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x2cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x2cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x2cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7680ca:{NFSU2_TR(0x7680ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7680cb:{NFSU2_TR(0x7680cb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7680cc:L7680cc:{c.instructions+=3;NFSU2_TR(0x7680cc);
u8 U[8];
__builtin_memmove((U+0),gp(0x8b8840),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7680d3:{NFSU2_TR(0x7680d3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7680d4:{NFSU2_TR(0x7680d4);
if(r1(R+518)){{goto L768116;}}
}
B7680d6:L7680d6:{c.instructions+=3;NFSU2_TR(0x7680d6);
u8 U[4];
w4(U+0,u32(0xb8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7680db:{NFSU2_TR(0x7680db);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7680dd:{NFSU2_TR(0x7680dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7680e2ull));
TAIL_STATIC(0x76ace0u,76a);
}
B7680e2:L7680e2:{c.instructions+=5;NFSU2_TR(0x7680e2);
__builtin_memmove((R+24),(R+0),4);
}
B7680e4:{NFSU2_TR(0x7680e4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7680e6:{NFSU2_TR(0x7680e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7680e7:{NFSU2_TR(0x7680e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7680e8:{NFSU2_TR(0x7680e8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7680ef;}}
}
B7680ea:L7680ea:{c.instructions+=4;NFSU2_TR(0x7680ea);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7680ec:{NFSU2_TR(0x7680ec);
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
B7680ed:{NFSU2_TR(0x7680ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7680ee:{NFSU2_TR(0x7680ee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7680ef:L7680ef:{c.instructions+=1;NFSU2_TR(0x7680ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7680f4ull));
TAIL_STATIC(0x767bd5u,767);
}
B7680f4:L7680f4:{c.instructions+=2;NFSU2_TR(0x7680f4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7680f6:{NFSU2_TR(0x7680f6);
if(r1(R+518)){{goto L768108;}}
}
B7680f8:L7680f8:{c.instructions+=2;NFSU2_TR(0x7680f8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7680f9:{NFSU2_TR(0x7680f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7680feull));
TAIL_STATIC(0x767f3cu,767);
}
B7680fe:L7680fe:{c.instructions+=2;NFSU2_TR(0x7680fe);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7680ff:{NFSU2_TR(0x7680ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x768104ull));
TAIL_STATIC(0x75c6dau,75c);
}
B768104:L768104:{c.instructions+=3;NFSU2_TR(0x768104);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B768105:{NFSU2_TR(0x768105);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B768106:{NFSU2_TR(0x768106);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7680eau);}goto L7680ea;}
}
B768108:L768108:{c.instructions+=3;NFSU2_TR(0x768108);
__builtin_memmove(gp(0x81a940),(R+24),4);
}
B76810e:{NFSU2_TR(0x76810e);
__builtin_memmove(gp(0x8b8800),(R+24),4);
}
B768114:{NFSU2_TR(0x768114);
{goto L768127;}
}
B768116:L768116:{c.instructions+=2;NFSU2_TR(0x768116);
s4(0x8b8800,u32(u32(m4(0x8b8800))&u32(u32(0x0ull))));
}
B76811d:{NFSU2_TR(0x76811d);
s4(0x81a940,u32(0x81a948ull));
}
B768127:L768127:{c.instructions+=3;NFSU2_TR(0x768127);
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
B768129:{NFSU2_TR(0x768129);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76812a:{NFSU2_TR(0x76812a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76812b:L76812b:{c.instructions+=4;NFSU2_TR(0x76812b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76812c:{NFSU2_TR(0x76812c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B768130:{NFSU2_TR(0x768130);
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
B768132:{NFSU2_TR(0x768132);
if(r1(R+518)){{goto L768188;}}
}
B768134:L768134:{c.instructions+=4;NFSU2_TR(0x768134);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B768136:{NFSU2_TR(0x768136);
__builtin_memmove((R+4),gp(0x81aa3c),4);
}
B76813c:{NFSU2_TR(0x76813c);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+0))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B76813e:{NFSU2_TR(0x76813e);
if(r1(R+518)){{goto L76814f;}}
}
B768140:L768140:{c.instructions+=2;NFSU2_TR(0x768140);
u8 U[8];
__builtin_memmove((U+0),gp(0x81aa0c),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B768146:{NFSU2_TR(0x768146);
if(r1(R+518)){{goto L76814f;}}
}
B768148:L768148:{c.instructions+=2;NFSU2_TR(0x768148);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768149:{NFSU2_TR(0x768149);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76814eull));
TAIL_STATIC(0x75c6dau,75c);
}
B76814e:L76814e:{c.instructions+=1;NFSU2_TR(0x76814e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76814f:L76814f:{c.instructions+=4;NFSU2_TR(0x76814f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B768152:{NFSU2_TR(0x768152);
__builtin_memmove((R+4),gp(0x81aa3c),4);
}
B768158:{NFSU2_TR(0x768158);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76815b:{NFSU2_TR(0x76815b);
if(r1(R+518)){{goto L76816c;}}
}
B76815d:L76815d:{c.instructions+=2;NFSU2_TR(0x76815d);
u8 U[8];
__builtin_memmove((U+0),gp(0x81aa10),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B768163:{NFSU2_TR(0x768163);
if(r1(R+518)){{goto L76816c;}}
}
B768165:L768165:{c.instructions+=2;NFSU2_TR(0x768165);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768166:{NFSU2_TR(0x768166);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76816bull));
TAIL_STATIC(0x75c6dau,75c);
}
B76816b:L76816b:{c.instructions+=1;NFSU2_TR(0x76816b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76816c:L76816c:{c.instructions+=4;NFSU2_TR(0x76816c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B76816f:{NFSU2_TR(0x76816f);
__builtin_memmove((R+0),gp(0x81aa3c),4);
}
B768174:{NFSU2_TR(0x768174);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
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
B768177:{NFSU2_TR(0x768177);
if(r1(R+518)){{goto L768188;}}
}
B768179:L768179:{c.instructions+=2;NFSU2_TR(0x768179);
u8 U[14];
__builtin_memmove((U+6),gp(0x81aa14),4);
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
B76817f:{NFSU2_TR(0x76817f);
if(r1(R+518)){{goto L768188;}}
}
B768181:L768181:{c.instructions+=2;NFSU2_TR(0x768181);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768182:{NFSU2_TR(0x768182);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x768187ull));
TAIL_STATIC(0x75c6dau,75c);
}
B768187:L768187:{c.instructions+=1;NFSU2_TR(0x768187);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B768188:L768188:{c.instructions+=2;NFSU2_TR(0x768188);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B768189:{NFSU2_TR(0x768189);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76818a:L76818a:{c.instructions+=10;NFSU2_TR(0x76818a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76818b:{NFSU2_TR(0x76818b);
__builtin_memmove((R+20),(R+16),4);
}
B76818d:{NFSU2_TR(0x76818d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76818e:{NFSU2_TR(0x76818e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76818f:{NFSU2_TR(0x76818f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768190:{NFSU2_TR(0x768190);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768191:{NFSU2_TR(0x768191);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B768193:{NFSU2_TR(0x768193);
u8 U[8];
__builtin_memmove((U+0),gp(0x8b883c),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+24))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B768199:{NFSU2_TR(0x768199);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76819a:{NFSU2_TR(0x76819a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7681eb;}}
}
B76819c:L76819c:{c.instructions+=2;NFSU2_TR(0x76819c);
u8 U[8];
__builtin_memmove((U+0),gp(0x8b8838),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+24))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7681a2:{NFSU2_TR(0x7681a2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7681eb;}}
}
B7681a4:L7681a4:{c.instructions+=3;NFSU2_TR(0x7681a4);
__builtin_memmove((R+0),gp(0x8ba230),4);
}
B7681a9:{NFSU2_TR(0x7681a9);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7681ab:{NFSU2_TR(0x7681ab);
if(r1(R+518)){{goto L7681cf;}}
}
B7681ad:L7681ad:{c.instructions+=2;NFSU2_TR(0x7681ad);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+24))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B7681af:{NFSU2_TR(0x7681af);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7681cf;}}
}
B7681b1:L7681b1:{c.instructions+=3;NFSU2_TR(0x7681b1);
__builtin_memmove((R+4),gp(0x819d24),4);
}
B7681b7:{NFSU2_TR(0x7681b7);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7681ba:{NFSU2_TR(0x7681ba);
if(r1(R+518)){{goto L7681cf;}}
}
B7681bc:L7681bc:{c.instructions+=2;NFSU2_TR(0x7681bc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7681bd:{NFSU2_TR(0x7681bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7681c2ull));
TAIL_STATIC(0x75c6dau,75c);
}
B7681c2:L7681c2:{c.instructions+=2;NFSU2_TR(0x7681c2);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b8804),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7681c8:{NFSU2_TR(0x7681c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7681cdull));
TAIL_STATIC(0x75c6dau,75c);
}
B7681cd:L7681cd:{c.instructions+=2;NFSU2_TR(0x7681cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7681ce:{NFSU2_TR(0x7681ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7681cf:L7681cf:{c.instructions+=5;NFSU2_TR(0x7681cf);
__builtin_memmove(gp(0x8ba234),(R+24),4);
}
B7681d5:{NFSU2_TR(0x7681d5);
__builtin_memmove(gp(0x8ba230),(R+24),4);
}
B7681db:{NFSU2_TR(0x7681db);
w4(R+12,u32(0x81aa0cull));
}
B7681e0:{NFSU2_TR(0x7681e0);
__builtin_memmove(gp(0x8b8804),(R+24),4);
}
B7681e6:{NFSU2_TR(0x7681e6);
{goto L768337;}
}
B7681eb:L7681eb:{c.instructions+=3;NFSU2_TR(0x7681eb);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7681ed:{NFSU2_TR(0x7681ed);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7681ef:{NFSU2_TR(0x7681ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7681f4ull));
TAIL_STATIC(0x76ace0u,76a);
}
B7681f4:L7681f4:{c.instructions+=5;NFSU2_TR(0x7681f4);
__builtin_memmove((R+12),(R+0),4);
}
B7681f6:{NFSU2_TR(0x7681f6);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7681f8:{NFSU2_TR(0x7681f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7681f9:{NFSU2_TR(0x7681f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7681fa:{NFSU2_TR(0x7681fa);
if(r1(R+518)){{goto L768221;}}
}
B7681fc:L7681fc:{c.instructions+=5;NFSU2_TR(0x7681fc);
__builtin_memmove((R+24),gp(0x81aa3c),4);
}
B768202:{NFSU2_TR(0x768202);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768204:{NFSU2_TR(0x768204);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B768205:{NFSU2_TR(0x768205);
__builtin_memmove((R+28),(R+12),4);
}
B768207:{NFSU2_TR(0x768207);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768209:L768209:{c.instructions+=1;NFSU2_TR(0x768209);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L76820b;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x768209u);}goto L768209;}
}
B76820b:L76820b:{c.instructions+=1;NFSU2_TR(0x76820b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x768210ull));
TAIL_STATIC(0x75c6c8u,75c);
}
B768210:L768210:{c.instructions+=5;NFSU2_TR(0x768210);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B768212:{NFSU2_TR(0x768212);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B768214:{NFSU2_TR(0x768214);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B768215:{NFSU2_TR(0x768215);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B768218:{NFSU2_TR(0x768218);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L768229;}}
}
B76821a:L76821a:{c.instructions+=2;NFSU2_TR(0x76821a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76821b:{NFSU2_TR(0x76821b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x768220ull));
TAIL_STATIC(0x75c6dau,75c);
}
B768220:L768220:{c.instructions+=1;NFSU2_TR(0x768220);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B768221:L768221:{c.instructions+=3;NFSU2_TR(0x768221);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B768223:{NFSU2_TR(0x768223);
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
B768224:{NFSU2_TR(0x768224);
{goto L768352;}
}
B768229:L768229:{c.instructions+=3;NFSU2_TR(0x768229);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B76822b:{NFSU2_TR(0x76822b);
u8 U[8];
__builtin_memmove((U+0),gp(0x8b883c),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+24))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B768231:{NFSU2_TR(0x768231);
if(r1(R+518)){{goto L7682e0;}}
}
B768237:L768237:{c.instructions+=2;NFSU2_TR(0x768237);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768239:{NFSU2_TR(0x768239);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76823eull));
TAIL_STATIC(0x75c6c8u,75c);
}
B76823e:L76823e:{c.instructions+=4;NFSU2_TR(0x76823e);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B768240:{NFSU2_TR(0x768240);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B768241:{NFSU2_TR(0x768241);
__builtin_memmove(gp(0x8ba234),(R+0),4);
}
B768246:{NFSU2_TR(0x768246);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76824d;}}
}
B768248:L768248:{c.instructions+=3;NFSU2_TR(0x768248);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B76824a:{NFSU2_TR(0x76824a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B76824b:{NFSU2_TR(0x76824b);
{goto L768295;}
}
B76824d:L76824d:{c.instructions+=7;NFSU2_TR(0x76824d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B76824f:{NFSU2_TR(0x76824f);
w4(R+24,u32(m2(0x8b886a)));
}
B768256:{NFSU2_TR(0x768256);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768257:{NFSU2_TR(0x768257);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768259:{NFSU2_TR(0x768259);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76825a:{NFSU2_TR(0x76825a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76825c:{NFSU2_TR(0x76825c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x768261ull));
TAIL_STATIC(0x76d3a9u,76d);
}
B768261:L768261:{c.instructions+=7;NFSU2_TR(0x768261);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B768264:{NFSU2_TR(0x768264);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B768267:{NFSU2_TR(0x768267);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768268:{NFSU2_TR(0x768268);
u8 U[4];
w4(U+0,u32(0xfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76826a:{NFSU2_TR(0x76826a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76826b:{NFSU2_TR(0x76826b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76826d:{NFSU2_TR(0x76826d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x768272ull));
TAIL_STATIC(0x76d3a9u,76d);
}
B768272:L768272:{c.instructions+=7;NFSU2_TR(0x768272);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B768275:{NFSU2_TR(0x768275);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B768278:{NFSU2_TR(0x768278);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768279:{NFSU2_TR(0x768279);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76827b:{NFSU2_TR(0x76827b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76827c:{NFSU2_TR(0x76827c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76827e:{NFSU2_TR(0x76827e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x768283ull));
TAIL_STATIC(0x76d3a9u,76d);
}
B768283:L768283:{c.instructions+=3;NFSU2_TR(0x768283);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
}
B768286:{NFSU2_TR(0x768286);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))|u32(r4(U+4))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B768289:{NFSU2_TR(0x768289);
if(r1(R+518)){{goto L7682ac;}}
}
B76828b:L76828b:{c.instructions+=2;NFSU2_TR(0x76828b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76828c:{NFSU2_TR(0x76828c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x768291ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76812bu);}goto L76812b;}
}
B768291:L768291:{c.instructions+=2;NFSU2_TR(0x768291);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B768292:{NFSU2_TR(0x768292);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0xffffffffull))));
}
B768295:L768295:{c.instructions+=2;NFSU2_TR(0x768295);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768296:{NFSU2_TR(0x768296);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76829bull));
TAIL_STATIC(0x75c6dau,75c);
}
B76829b:L76829b:{c.instructions+=2;NFSU2_TR(0x76829b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76829e:{NFSU2_TR(0x76829e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7682a3ull));
TAIL_STATIC(0x75c6dau,75c);
}
B7682a3:L7682a3:{c.instructions+=4;NFSU2_TR(0x7682a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7682a4:{NFSU2_TR(0x7682a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7682a5:{NFSU2_TR(0x7682a5);
__builtin_memmove((R+0),(R+24),4);
}
B7682a7:{NFSU2_TR(0x7682a7);
{goto L768352;}
}
B7682ac:L7682ac:{c.instructions+=2;NFSU2_TR(0x7682ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B7682ae:{NFSU2_TR(0x7682ae);
{goto L7682c2;}
}
B7682b0:L7682b0:{c.instructions+=3;NFSU2_TR(0x7682b0);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B7682b2:{NFSU2_TR(0x7682b2);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x30ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B7682b5:{NFSU2_TR(0x7682b5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L7682c9;}}
}
B7682b7:L7682b7:{c.instructions+=2;NFSU2_TR(0x7682b7);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x39ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x39ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B7682ba:{NFSU2_TR(0x7682ba);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L7682c9;}}
}
B7682bc:L7682bc:{c.instructions+=2;NFSU2_TR(0x7682bc);
w1(R+4,u8(u32(r1(R+4))-u32(u8(0x30ull))));
}
B7682bf:{NFSU2_TR(0x7682bf);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+0)),r1(U+0));
}
B7682c1:L7682c1:{c.instructions+=1;NFSU2_TR(0x7682c1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7682c2:L7682c2:{c.instructions+=2;NFSU2_TR(0x7682c2);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B7682c5:{NFSU2_TR(0x7682c5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7682b0u);}goto L7682b0;}}
}
B7682c7:L7682c7:{c.instructions+=1;NFSU2_TR(0x7682c7);
{goto L7682fd;}
}
B7682c9:L7682c9:{c.instructions+=2;NFSU2_TR(0x7682c9);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3bull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B7682cc:{NFSU2_TR(0x7682cc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7682c1u);}goto L7682c1;}}
}
B7682ce:L7682ce:{c.instructions+=1;NFSU2_TR(0x7682ce);
__builtin_memmove((R+24),(R+0),4);
}
B7682d0:L7682d0:{c.instructions+=6;NFSU2_TR(0x7682d0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7682d3:{NFSU2_TR(0x7682d3);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+4),(U+0),1);
}
B7682d5:{NFSU2_TR(0x7682d5);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+24)),r1(U+0));
}
B7682d7:{NFSU2_TR(0x7682d7);
__builtin_memmove((R+24),(R+28),4);
}
B7682d9:{NFSU2_TR(0x7682d9);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B7682dc:{NFSU2_TR(0x7682dc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7682d0u);}goto L7682d0;}}
}
B7682de:L7682de:{c.instructions+=1;NFSU2_TR(0x7682de);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7682c2u);}goto L7682c2;}
}
B7682e0:L7682e0:{c.instructions+=7;NFSU2_TR(0x7682e0);
__builtin_memmove((R+0),gp(0x81aa0c),4);
}
B7682e5:{NFSU2_TR(0x7682e5);
__builtin_memmove(gp(0x8ba234),(R+24),4);
}
B7682eb:{NFSU2_TR(0x7682eb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B7682ed:{NFSU2_TR(0x7682ed);
__builtin_memmove((R+0),gp(0x81aa10),4);
}
B7682f2:{NFSU2_TR(0x7682f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7682f5:{NFSU2_TR(0x7682f5);
__builtin_memmove((R+0),gp(0x81aa14),4);
}
B7682fa:{NFSU2_TR(0x7682fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7682fd:L7682fd:{c.instructions+=3;NFSU2_TR(0x7682fd);
__builtin_memmove((R+0),gp(0x8ba230),4);
}
B768302:{NFSU2_TR(0x768302);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B768304:{NFSU2_TR(0x768304);
if(r1(R+518)){{goto L768329;}}
}
B768306:L768306:{c.instructions+=2;NFSU2_TR(0x768306);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B768309:{NFSU2_TR(0x768309);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L768329;}}
}
B76830b:L76830b:{c.instructions+=3;NFSU2_TR(0x76830b);
__builtin_memmove((R+4),gp(0x819d24),4);
}
B768311:{NFSU2_TR(0x768311);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B768314:{NFSU2_TR(0x768314);
if(r1(R+518)){{goto L768329;}}
}
B768316:L768316:{c.instructions+=2;NFSU2_TR(0x768316);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768317:{NFSU2_TR(0x768317);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76831cull));
TAIL_STATIC(0x75c6dau,75c);
}
B76831c:L76831c:{c.instructions+=2;NFSU2_TR(0x76831c);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b8804),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768322:{NFSU2_TR(0x768322);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x768327ull));
TAIL_STATIC(0x75c6dau,75c);
}
B768327:L768327:{c.instructions+=2;NFSU2_TR(0x768327);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B768328:{NFSU2_TR(0x768328);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B768329:L768329:{c.instructions+=3;NFSU2_TR(0x768329);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76832c:{NFSU2_TR(0x76832c);
__builtin_memmove(gp(0x8ba230),(R+0),4);
}
B768331:{NFSU2_TR(0x768331);
__builtin_memmove(gp(0x8b8804),(R+12),4);
}
B768337:L768337:{c.instructions+=6;NFSU2_TR(0x768337);
__builtin_memmove(gp(0x81aa3c),(R+12),4);
}
B76833d:{NFSU2_TR(0x76833d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B76833f:{NFSU2_TR(0x76833f);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+0),(U+0),1);
}
B768341:{NFSU2_TR(0x768341);
__builtin_memmove(gp(0x81aa54),(R+0),1);
}
B768346:{NFSU2_TR(0x768346);
s4(0x81aa58,u32(0x1ull));
}
B768350:{NFSU2_TR(0x768350);
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
B768352:L768352:{c.instructions+=5;NFSU2_TR(0x768352);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B768353:{NFSU2_TR(0x768353);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B768354:{NFSU2_TR(0x768354);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B768355:{NFSU2_TR(0x768355);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B768356:{NFSU2_TR(0x768356);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B768357:L768357:{c.instructions+=4;NFSU2_TR(0x768357);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768358:{NFSU2_TR(0x768358);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B76835c:{NFSU2_TR(0x76835c);
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
B76835e:{NFSU2_TR(0x76835e);
if(r1(R+518)){{goto L76842e;}}
}
B768364:L768364:{c.instructions+=4;NFSU2_TR(0x768364);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B768367:{NFSU2_TR(0x768367);
__builtin_memmove((R+4),gp(0x81aa3c),4);
}
B76836d:{NFSU2_TR(0x76836d);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B768370:{NFSU2_TR(0x768370);
if(r1(R+518)){{goto L768381;}}
}
B768372:L768372:{c.instructions+=2;NFSU2_TR(0x768372);
u8 U[8];
__builtin_memmove((U+0),gp(0x81aa18),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B768378:{NFSU2_TR(0x768378);
if(r1(R+518)){{goto L768381;}}
}
B76837a:L76837a:{c.instructions+=2;NFSU2_TR(0x76837a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76837b:{NFSU2_TR(0x76837b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x768380ull));
TAIL_STATIC(0x75c6dau,75c);
}
B768380:L768380:{c.instructions+=1;NFSU2_TR(0x768380);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B768381:L768381:{c.instructions+=4;NFSU2_TR(0x768381);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B768384:{NFSU2_TR(0x768384);
__builtin_memmove((R+4),gp(0x81aa3c),4);
}
B76838a:{NFSU2_TR(0x76838a);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76838d:{NFSU2_TR(0x76838d);
if(r1(R+518)){{goto L76839e;}}
}
B76838f:L76838f:{c.instructions+=2;NFSU2_TR(0x76838f);
u8 U[8];
__builtin_memmove((U+0),gp(0x81aa1c),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B768395:{NFSU2_TR(0x768395);
if(r1(R+518)){{goto L76839e;}}
}
B768397:L768397:{c.instructions+=2;NFSU2_TR(0x768397);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768398:{NFSU2_TR(0x768398);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76839dull));
TAIL_STATIC(0x75c6dau,75c);
}
B76839d:L76839d:{c.instructions+=1;NFSU2_TR(0x76839d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76839e:L76839e:{c.instructions+=4;NFSU2_TR(0x76839e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7683a1:{NFSU2_TR(0x7683a1);
__builtin_memmove((R+4),gp(0x81aa3c),4);
}
B7683a7:{NFSU2_TR(0x7683a7);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7683aa:{NFSU2_TR(0x7683aa);
if(r1(R+518)){{goto L7683bb;}}
}
B7683ac:L7683ac:{c.instructions+=2;NFSU2_TR(0x7683ac);
u8 U[8];
__builtin_memmove((U+0),gp(0x81aa20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7683b2:{NFSU2_TR(0x7683b2);
if(r1(R+518)){{goto L7683bb;}}
}
B7683b4:L7683b4:{c.instructions+=2;NFSU2_TR(0x7683b4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7683b5:{NFSU2_TR(0x7683b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7683baull));
TAIL_STATIC(0x75c6dau,75c);
}
B7683ba:L7683ba:{c.instructions+=1;NFSU2_TR(0x7683ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7683bb:L7683bb:{c.instructions+=4;NFSU2_TR(0x7683bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7683be:{NFSU2_TR(0x7683be);
__builtin_memmove((R+4),gp(0x81aa3c),4);
}
B7683c4:{NFSU2_TR(0x7683c4);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7683c7:{NFSU2_TR(0x7683c7);
if(r1(R+518)){{goto L7683d8;}}
}
B7683c9:L7683c9:{c.instructions+=2;NFSU2_TR(0x7683c9);
u8 U[8];
__builtin_memmove((U+0),gp(0x81aa24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7683cf:{NFSU2_TR(0x7683cf);
if(r1(R+518)){{goto L7683d8;}}
}
B7683d1:L7683d1:{c.instructions+=2;NFSU2_TR(0x7683d1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7683d2:{NFSU2_TR(0x7683d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7683d7ull));
TAIL_STATIC(0x75c6dau,75c);
}
B7683d7:L7683d7:{c.instructions+=1;NFSU2_TR(0x7683d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7683d8:L7683d8:{c.instructions+=4;NFSU2_TR(0x7683d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7683db:{NFSU2_TR(0x7683db);
__builtin_memmove((R+4),gp(0x81aa3c),4);
}
B7683e1:{NFSU2_TR(0x7683e1);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7683e4:{NFSU2_TR(0x7683e4);
if(r1(R+518)){{goto L7683f5;}}
}
B7683e6:L7683e6:{c.instructions+=2;NFSU2_TR(0x7683e6);
u8 U[8];
__builtin_memmove((U+0),gp(0x81aa28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7683ec:{NFSU2_TR(0x7683ec);
if(r1(R+518)){{goto L7683f5;}}
}
B7683ee:L7683ee:{c.instructions+=2;NFSU2_TR(0x7683ee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7683ef:{NFSU2_TR(0x7683ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7683f4ull));
TAIL_STATIC(0x75c6dau,75c);
}
B7683f4:L7683f4:{c.instructions+=1;NFSU2_TR(0x7683f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7683f5:L7683f5:{c.instructions+=4;NFSU2_TR(0x7683f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7683f8:{NFSU2_TR(0x7683f8);
__builtin_memmove((R+4),gp(0x81aa3c),4);
}
B7683fe:{NFSU2_TR(0x7683fe);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B768401:{NFSU2_TR(0x768401);
if(r1(R+518)){{goto L768412;}}
}
B768403:L768403:{c.instructions+=2;NFSU2_TR(0x768403);
u8 U[8];
__builtin_memmove((U+0),gp(0x81aa2c),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B768409:{NFSU2_TR(0x768409);
if(r1(R+518)){{goto L768412;}}
}
B76840b:L76840b:{c.instructions+=2;NFSU2_TR(0x76840b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76840c:{NFSU2_TR(0x76840c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x768411ull));
TAIL_STATIC(0x75c6dau,75c);
}
B768411:L768411:{c.instructions+=1;NFSU2_TR(0x768411);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B768412:L768412:{c.instructions+=4;NFSU2_TR(0x768412);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B768415:{NFSU2_TR(0x768415);
__builtin_memmove((R+0),gp(0x81aa3c),4);
}
B76841a:{NFSU2_TR(0x76841a);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
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
B76841d:{NFSU2_TR(0x76841d);
if(r1(R+518)){{goto L76842e;}}
}
B76841f:L76841f:{c.instructions+=2;NFSU2_TR(0x76841f);
u8 U[14];
__builtin_memmove((U+6),gp(0x81aa30),4);
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
B768425:{NFSU2_TR(0x768425);
if(r1(R+518)){{goto L76842e;}}
}
B768427:L768427:{c.instructions+=2;NFSU2_TR(0x768427);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768428:{NFSU2_TR(0x768428);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76842dull));
TAIL_STATIC(0x75c6dau,75c);
}
B76842d:L76842d:{c.instructions+=1;NFSU2_TR(0x76842d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76842e:L76842e:{c.instructions+=2;NFSU2_TR(0x76842e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76842f:{NFSU2_TR(0x76842f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B768430:L768430:{c.instructions+=9;NFSU2_TR(0x768430);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768431:{NFSU2_TR(0x768431);
__builtin_memmove((R+20),(R+16),4);
}
B768433:{NFSU2_TR(0x768433);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768434:{NFSU2_TR(0x768434);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768435:{NFSU2_TR(0x768435);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768436:{NFSU2_TR(0x768436);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B768438:{NFSU2_TR(0x768438);
u8 U[8];
__builtin_memmove((U+0),gp(0x8b8838),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+24))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76843e:{NFSU2_TR(0x76843e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76843f:{NFSU2_TR(0x76843f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76846a;}}
}
B768441:L768441:{c.instructions+=2;NFSU2_TR(0x768441);
u8 U[8];
__builtin_memmove((U+0),gp(0x8b883c),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+24))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B768447:{NFSU2_TR(0x768447);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76846a;}}
}
B768449:L768449:{c.instructions+=5;NFSU2_TR(0x768449);
__builtin_memmove(gp(0x8ba22c),(R+24),4);
}
B76844f:{NFSU2_TR(0x76844f);
__builtin_memmove(gp(0x8ba230),(R+24),4);
}
B768455:{NFSU2_TR(0x768455);
s4(0x81aa3c,u32(0x81aa0cull));
}
B76845f:{NFSU2_TR(0x76845f);
__builtin_memmove(gp(0x8b8804),(R+24),4);
}
B768465:{NFSU2_TR(0x768465);
{goto L768668;}
}
B76846a:L76846a:{c.instructions+=3;NFSU2_TR(0x76846a);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76846c:{NFSU2_TR(0x76846c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76846e:{NFSU2_TR(0x76846e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x768473ull));
TAIL_STATIC(0x76ace0u,76a);
}
B768473:L768473:{c.instructions+=5;NFSU2_TR(0x768473);
__builtin_memmove((R+12),(R+0),4);
}
B768475:{NFSU2_TR(0x768475);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B768477:{NFSU2_TR(0x768477);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B768478:{NFSU2_TR(0x768478);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B768479:{NFSU2_TR(0x768479);
if(r1(R+518)){{goto L7685e8;}}
}
B76847f:L76847f:{c.instructions+=2;NFSU2_TR(0x76847f);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768481:{NFSU2_TR(0x768481);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x768486ull));
TAIL_STATIC(0x75c6c8u,75c);
}
B768486:L768486:{c.instructions+=5;NFSU2_TR(0x768486);
__builtin_memmove((R+28),(R+0),4);
}
B768488:{NFSU2_TR(0x768488);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76848a:{NFSU2_TR(0x76848a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76848b:{NFSU2_TR(0x76848b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76848e:{NFSU2_TR(0x76848e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76849c;}}
}
B768490:L768490:{c.instructions+=2;NFSU2_TR(0x768490);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768491:{NFSU2_TR(0x768491);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x768496ull));
TAIL_STATIC(0x75c6dau,75c);
}
B768496:L768496:{c.instructions+=2;NFSU2_TR(0x768496);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B768497:{NFSU2_TR(0x768497);
{goto L7685e8;}
}
B76849c:L76849c:{c.instructions+=3;NFSU2_TR(0x76849c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+28)),r4(U+0));
}
B76849e:{NFSU2_TR(0x76849e);
u8 U[8];
__builtin_memmove((U+0),gp(0x8b8838),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+24))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7684a4:{NFSU2_TR(0x7684a4);
if(r1(R+518)){{goto L768622;}}
}
B7684aa:L7684aa:{c.instructions+=2;NFSU2_TR(0x7684aa);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7684ac:{NFSU2_TR(0x7684ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7684b1ull));
TAIL_STATIC(0x75c6c8u,75c);
}
B7684b1:L7684b1:{c.instructions+=4;NFSU2_TR(0x7684b1);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7684b3:{NFSU2_TR(0x7684b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7684b4:{NFSU2_TR(0x7684b4);
__builtin_memmove(gp(0x8ba22c),(R+0),4);
}
B7684b9:{NFSU2_TR(0x7684b9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7684ca;}}
}
B7684bb:L7684bb:{c.instructions+=2;NFSU2_TR(0x7684bb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7684bc:{NFSU2_TR(0x7684bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7684c1ull));
TAIL_STATIC(0x75c6dau,75c);
}
B7684c1:L7684c1:{c.instructions+=2;NFSU2_TR(0x7684c1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7684c2:{NFSU2_TR(0x7684c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7684c7ull));
TAIL_STATIC(0x75c6dau,75c);
}
B7684c7:L7684c7:{c.instructions+=2;NFSU2_TR(0x7684c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7684c8:{NFSU2_TR(0x7684c8);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x768496u);}goto L768496;}
}
B7684ca:L7684ca:{c.instructions+=8;NFSU2_TR(0x7684ca);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B7684cc:{NFSU2_TR(0x7684cc);
w4(R+24,u32(m2(0x8b8864)));
}
B7684d3:{NFSU2_TR(0x7684d3);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B7684d6:{NFSU2_TR(0x7684d6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7684d7:{NFSU2_TR(0x7684d7);
u8 U[4];
w4(U+0,u32(0x15ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7684d9:{NFSU2_TR(0x7684d9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7684da:{NFSU2_TR(0x7684da);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7684dc:{NFSU2_TR(0x7684dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7684e1ull));
TAIL_STATIC(0x76d3a9u,76d);
}
B7684e1:L7684e1:{c.instructions+=7;NFSU2_TR(0x7684e1);
__builtin_memmove((R+28),(R+0),4);
}
B7684e3:{NFSU2_TR(0x7684e3);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7684e6:{NFSU2_TR(0x7684e6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7684e7:{NFSU2_TR(0x7684e7);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7684e9:{NFSU2_TR(0x7684e9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7684ea:{NFSU2_TR(0x7684ea);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7684ec:{NFSU2_TR(0x7684ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7684f1ull));
TAIL_STATIC(0x76d3a9u,76d);
}
B7684f1:L7684f1:{c.instructions+=7;NFSU2_TR(0x7684f1);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
}
B7684f3:{NFSU2_TR(0x7684f3);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7684f6:{NFSU2_TR(0x7684f6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7684f7:{NFSU2_TR(0x7684f7);
u8 U[4];
w4(U+0,u32(0x16ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7684f9:{NFSU2_TR(0x7684f9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7684fa:{NFSU2_TR(0x7684fa);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7684fc:{NFSU2_TR(0x7684fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x768501ull));
TAIL_STATIC(0x76d3a9u,76d);
}
B768501:L768501:{c.instructions+=7;NFSU2_TR(0x768501);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
}
B768503:{NFSU2_TR(0x768503);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((R+0),(U+0),4);
}
B768506:{NFSU2_TR(0x768506);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768507:{NFSU2_TR(0x768507);
u8 U[4];
w4(U+0,u32(0x17ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768509:{NFSU2_TR(0x768509);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76850a:{NFSU2_TR(0x76850a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76850c:{NFSU2_TR(0x76850c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x768511ull));
TAIL_STATIC(0x76d3a9u,76d);
}
B768511:L768511:{c.instructions+=8;NFSU2_TR(0x768511);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B768514:{NFSU2_TR(0x768514);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
}
B768516:{NFSU2_TR(0x768516);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((R+0),(U+0),4);
}
B768519:{NFSU2_TR(0x768519);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76851a:{NFSU2_TR(0x76851a);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76851c:{NFSU2_TR(0x76851c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76851d:{NFSU2_TR(0x76851d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76851f:{NFSU2_TR(0x76851f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x768524ull));
TAIL_STATIC(0x76d3a9u,76d);
}
B768524:L768524:{c.instructions+=7;NFSU2_TR(0x768524);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
}
B768526:{NFSU2_TR(0x768526);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((R+0),(U+0),4);
}
B768529:{NFSU2_TR(0x768529);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76852a:{NFSU2_TR(0x76852a);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76852c:{NFSU2_TR(0x76852c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76852d:{NFSU2_TR(0x76852d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76852f:{NFSU2_TR(0x76852f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x768534ull));
TAIL_STATIC(0x76d3a9u,76d);
}
B768534:L768534:{c.instructions+=7;NFSU2_TR(0x768534);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
}
B768536:{NFSU2_TR(0x768536);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((R+0),(U+0),4);
}
B768539:{NFSU2_TR(0x768539);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76853a:{NFSU2_TR(0x76853a);
u8 U[4];
w4(U+0,u32(0x51ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76853c:{NFSU2_TR(0x76853c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76853d:{NFSU2_TR(0x76853d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76853f:{NFSU2_TR(0x76853f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x768544ull));
TAIL_STATIC(0x76d3a9u,76d);
}
B768544:L768544:{c.instructions+=7;NFSU2_TR(0x768544);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
}
B768546:{NFSU2_TR(0x768546);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((R+0),(U+0),4);
}
B768549:{NFSU2_TR(0x768549);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76854a:{NFSU2_TR(0x76854a);
u8 U[4];
w4(U+0,u32(0x1aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76854c:{NFSU2_TR(0x76854c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76854d:{NFSU2_TR(0x76854d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76854f:{NFSU2_TR(0x76854f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x768554ull));
TAIL_STATIC(0x76d3a9u,76d);
}
B768554:L768554:{c.instructions+=8;NFSU2_TR(0x768554);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B768557:{NFSU2_TR(0x768557);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
}
B768559:{NFSU2_TR(0x768559);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x29ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76855c:{NFSU2_TR(0x76855c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76855d:{NFSU2_TR(0x76855d);
u8 U[4];
w4(U+0,u32(0x19ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76855f:{NFSU2_TR(0x76855f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768560:{NFSU2_TR(0x768560);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768562:{NFSU2_TR(0x768562);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x768567ull));
TAIL_STATIC(0x76d3a9u,76d);
}
B768567:L768567:{c.instructions+=7;NFSU2_TR(0x768567);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
}
B768569:{NFSU2_TR(0x768569);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2aull))));
__builtin_memmove((R+0),(U+0),4);
}
B76856c:{NFSU2_TR(0x76856c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76856d:{NFSU2_TR(0x76856d);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76856f:{NFSU2_TR(0x76856f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768570:{NFSU2_TR(0x768570);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768572:{NFSU2_TR(0x768572);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x768577ull));
TAIL_STATIC(0x76d3a9u,76d);
}
B768577:L768577:{c.instructions+=7;NFSU2_TR(0x768577);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
}
B768579:{NFSU2_TR(0x768579);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2bull))));
__builtin_memmove((R+0),(U+0),4);
}
B76857c:{NFSU2_TR(0x76857c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76857d:{NFSU2_TR(0x76857d);
u8 U[4];
w4(U+0,u32(0x55ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76857f:{NFSU2_TR(0x76857f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768580:{NFSU2_TR(0x768580);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768582:{NFSU2_TR(0x768582);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x768587ull));
TAIL_STATIC(0x76d3a9u,76d);
}
B768587:L768587:{c.instructions+=7;NFSU2_TR(0x768587);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
}
B768589:{NFSU2_TR(0x768589);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((R+0),(U+0),4);
}
B76858c:{NFSU2_TR(0x76858c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76858d:{NFSU2_TR(0x76858d);
u8 U[4];
w4(U+0,u32(0x56ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76858f:{NFSU2_TR(0x76858f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768590:{NFSU2_TR(0x768590);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768592:{NFSU2_TR(0x768592);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x768597ull));
TAIL_STATIC(0x76d3a9u,76d);
}
B768597:L768597:{c.instructions+=8;NFSU2_TR(0x768597);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B76859a:{NFSU2_TR(0x76859a);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
}
B76859c:{NFSU2_TR(0x76859c);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2dull))));
__builtin_memmove((R+0),(U+0),4);
}
B76859f:{NFSU2_TR(0x76859f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7685a0:{NFSU2_TR(0x7685a0);
u8 U[4];
w4(U+0,u32(0x57ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7685a2:{NFSU2_TR(0x7685a2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7685a3:{NFSU2_TR(0x7685a3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7685a5:{NFSU2_TR(0x7685a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7685aaull));
TAIL_STATIC(0x76d3a9u,76d);
}
B7685aa:L7685aa:{c.instructions+=7;NFSU2_TR(0x7685aa);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
}
B7685ac:{NFSU2_TR(0x7685ac);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2eull))));
__builtin_memmove((R+0),(U+0),4);
}
B7685af:{NFSU2_TR(0x7685af);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7685b0:{NFSU2_TR(0x7685b0);
u8 U[4];
w4(U+0,u32(0x52ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7685b2:{NFSU2_TR(0x7685b2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7685b3:{NFSU2_TR(0x7685b3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7685b5:{NFSU2_TR(0x7685b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7685baull));
TAIL_STATIC(0x76d3a9u,76d);
}
B7685ba:L7685ba:{c.instructions+=7;NFSU2_TR(0x7685ba);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
}
B7685bc:{NFSU2_TR(0x7685bc);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2full))));
__builtin_memmove((R+0),(U+0),4);
}
B7685bf:{NFSU2_TR(0x7685bf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7685c0:{NFSU2_TR(0x7685c0);
u8 U[4];
w4(U+0,u32(0x53ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7685c2:{NFSU2_TR(0x7685c2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7685c3:{NFSU2_TR(0x7685c3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7685c5:{NFSU2_TR(0x7685c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7685caull));
TAIL_STATIC(0x76d3a9u,76d);
}
B7685ca:L7685ca:{c.instructions+=3;NFSU2_TR(0x7685ca);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
}
B7685cd:{NFSU2_TR(0x7685cd);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+28))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B7685cf:{NFSU2_TR(0x7685cf);
if(r1(R+518)){{goto L7685ed;}}
}
B7685d1:L7685d1:{c.instructions+=2;NFSU2_TR(0x7685d1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7685d2:{NFSU2_TR(0x7685d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7685d7ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x768357u);}goto L768357;}
}
B7685d7:L7685d7:{c.instructions+=2;NFSU2_TR(0x7685d7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7685d8:{NFSU2_TR(0x7685d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7685ddull));
TAIL_STATIC(0x75c6dau,75c);
}
B7685dd:L7685dd:{c.instructions+=2;NFSU2_TR(0x7685dd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7685e0:{NFSU2_TR(0x7685e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7685e5ull));
TAIL_STATIC(0x75c6dau,75c);
}
B7685e5:L7685e5:{c.instructions+=1;NFSU2_TR(0x7685e5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B7685e8:L7685e8:{c.instructions+=3;NFSU2_TR(0x7685e8);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7685ea:{NFSU2_TR(0x7685ea);
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
B7685eb:{NFSU2_TR(0x7685eb);
{goto L76866a;}
}
B7685ed:L7685ed:{c.instructions+=2;NFSU2_TR(0x7685ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7685f0:{NFSU2_TR(0x7685f0);
{goto L768604;}
}
B7685f2:L7685f2:{c.instructions+=3;NFSU2_TR(0x7685f2);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B7685f4:{NFSU2_TR(0x7685f4);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x30ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B7685f7:{NFSU2_TR(0x7685f7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L76860b;}}
}
B7685f9:L7685f9:{c.instructions+=2;NFSU2_TR(0x7685f9);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x39ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x39ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B7685fc:{NFSU2_TR(0x7685fc);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L76860b;}}
}
B7685fe:L7685fe:{c.instructions+=2;NFSU2_TR(0x7685fe);
w1(R+4,u8(u32(r1(R+4))-u32(u8(0x30ull))));
}
B768601:{NFSU2_TR(0x768601);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+0)),r1(U+0));
}
B768603:L768603:{c.instructions+=1;NFSU2_TR(0x768603);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B768604:L768604:{c.instructions+=2;NFSU2_TR(0x768604);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B768607:{NFSU2_TR(0x768607);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7685f2u);}goto L7685f2;}}
}
B768609:L768609:{c.instructions+=1;NFSU2_TR(0x768609);
{goto L768635;}
}
B76860b:L76860b:{c.instructions+=2;NFSU2_TR(0x76860b);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3bull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B76860e:{NFSU2_TR(0x76860e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x768603u);}goto L768603;}}
}
B768610:L768610:{c.instructions+=1;NFSU2_TR(0x768610);
__builtin_memmove((R+24),(R+0),4);
}
B768612:L768612:{c.instructions+=6;NFSU2_TR(0x768612);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((R+28),(U+0),4);
}
B768615:{NFSU2_TR(0x768615);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+4),(U+0),1);
}
B768617:{NFSU2_TR(0x768617);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+24)),r1(U+0));
}
B768619:{NFSU2_TR(0x768619);
__builtin_memmove((R+24),(R+28),4);
}
B76861b:{NFSU2_TR(0x76861b);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B76861e:{NFSU2_TR(0x76861e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x768612u);}goto L768612;}}
}
B768620:L768620:{c.instructions+=1;NFSU2_TR(0x768620);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x768604u);}goto L768604;}
}
B768622:L768622:{c.instructions+=4;NFSU2_TR(0x768622);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768624:{NFSU2_TR(0x768624);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B768625:{NFSU2_TR(0x768625);
w4(R+24,u32(0x81aa0cull));
}
B76862a:{NFSU2_TR(0x76862a);
__builtin_memmove((R+28),(R+12),4);
}
B76862c:L76862c:{c.instructions+=1;NFSU2_TR(0x76862c);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L76862e;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76862cu);}goto L76862c;}
}
B76862e:L76862e:{c.instructions+=1;NFSU2_TR(0x76862e);
s4(0x8ba22c,u32(u32(m4(0x8ba22c))&u32(u32(0x0ull))));
}
B768635:L768635:{c.instructions+=13;NFSU2_TR(0x768635);
__builtin_memmove((R+0),gp(0x81aa3c),4);
}
B76863a:{NFSU2_TR(0x76863a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B76863c:{NFSU2_TR(0x76863c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B76863e:{NFSU2_TR(0x76863e);
__builtin_memmove((R+0),gp(0x81aa3c),4);
}
B768643:{NFSU2_TR(0x768643);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B768646:{NFSU2_TR(0x768646);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B768649:{NFSU2_TR(0x768649);
__builtin_memmove((R+0),gp(0x81aa3c),4);
}
B76864e:{NFSU2_TR(0x76864e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B768651:{NFSU2_TR(0x768651);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B768654:{NFSU2_TR(0x768654);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B768657:{NFSU2_TR(0x768657);
__builtin_memmove(gp(0x81aa3c),(R+12),4);
}
B76865d:{NFSU2_TR(0x76865d);
__builtin_memmove(gp(0x8ba230),(R+0),4);
}
B768662:{NFSU2_TR(0x768662);
__builtin_memmove(gp(0x8b8804),(R+12),4);
}
B768668:L768668:{c.instructions+=1;NFSU2_TR(0x768668);
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
B76866a:L76866a:{c.instructions+=5;NFSU2_TR(0x76866a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B76866b:{NFSU2_TR(0x76866b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76866c:{NFSU2_TR(0x76866c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B76866d:{NFSU2_TR(0x76866d);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B76866e:{NFSU2_TR(0x76866e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76866f:L76866f:{c.instructions+=11;NFSU2_TR(0x76866f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768670:{NFSU2_TR(0x768670);
__builtin_memmove((R+20),(R+16),4);
}
B768672:{NFSU2_TR(0x768672);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B768675:{NFSU2_TR(0x768675);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B76867a:{NFSU2_TR(0x76867a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(U+4))));
}
B76867d:{NFSU2_TR(0x76867d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76867e:{NFSU2_TR(0x76867e);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B768680:{NFSU2_TR(0x768680);
u8 U[8];
__builtin_memmove((U+0),gp(0x8b8834),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B768686:{NFSU2_TR(0x768686);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B768689:{NFSU2_TR(0x768689);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76868c:{NFSU2_TR(0x76868c);
if(r1(R+518)){{goto L76880c;}}
}
B768692:L768692:{c.instructions+=4;NFSU2_TR(0x768692);
u8 U[8];
__builtin_memmove((U+0),gp(0x8b8844),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B768698:{NFSU2_TR(0x768698);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768699:{NFSU2_TR(0x768699);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76869a:{NFSU2_TR(0x76869a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7686bf;}}
}
B76869c:L76869c:{c.instructions+=6;NFSU2_TR(0x76869c);
w4(R+0,u32(m2(0x8b885c)));
}
B7686a3:{NFSU2_TR(0x7686a3);
u8 U[4];
w4(U+0,u32(0x8b8844ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7686a8:{NFSU2_TR(0x7686a8);
u8 U[4];
w4(U+0,u32(0x1004ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7686ad:{NFSU2_TR(0x7686ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7686ae:{NFSU2_TR(0x7686ae);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7686af:{NFSU2_TR(0x7686af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7686b4ull));
TAIL_STATIC(0x76d3a9u,76d);
}
B7686b4:L7686b4:{c.instructions+=3;NFSU2_TR(0x7686b4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B7686b7:{NFSU2_TR(0x7686b7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7686b9:{NFSU2_TR(0x7686b9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7687f4;}}
}
B7686bf:L7686bf:{c.instructions+=2;NFSU2_TR(0x7686bf);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7686c1:{NFSU2_TR(0x7686c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7686c6ull));
TAIL_STATIC(0x75c6c8u,75c);
}
B7686c6:L7686c6:{c.instructions+=4;NFSU2_TR(0x7686c6);
__builtin_memmove((R+24),(R+0),4);
}
B7686c8:{NFSU2_TR(0x7686c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7686cb:{NFSU2_TR(0x7686cb);
u8 U[4];
w4(U+0,u32(0x202ull));
s4(u32(r4(R+16)),r4(U+0));
}
B7686d2:{NFSU2_TR(0x7686d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7686d7ull));
TAIL_STATIC(0x75c6c8u,75c);
}
B7686d7:L7686d7:{c.instructions+=4;NFSU2_TR(0x7686d7);
__builtin_memmove((R+28),(R+0),4);
}
B7686d9:{NFSU2_TR(0x7686d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7686dc:{NFSU2_TR(0x7686dc);
u8 U[4];
w4(U+0,u32(0x101ull));
s4(u32(r4(R+16)),r4(U+0));
}
B7686e3:{NFSU2_TR(0x7686e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7686e8ull));
TAIL_STATIC(0x75c6c8u,75c);
}
B7686e8:L7686e8:{c.instructions+=4;NFSU2_TR(0x7686e8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7686ea:{NFSU2_TR(0x7686ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7686eb:{NFSU2_TR(0x7686eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7686ee:{NFSU2_TR(0x7686ee);
if(r1(R+518)){{goto L7687f7;}}
}
B7686f4:L7686f4:{c.instructions+=2;NFSU2_TR(0x7686f4);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7686f6:{NFSU2_TR(0x7686f6);
if(r1(R+518)){{goto L7687f7;}}
}
B7686fc:L7686fc:{c.instructions+=2;NFSU2_TR(0x7686fc);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7686fe:{NFSU2_TR(0x7686fe);
if(r1(R+518)){{goto L7687f7;}}
}
B768704:L768704:{c.instructions+=2;NFSU2_TR(0x768704);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+24)),r4(U+0));
}
B768706:{NFSU2_TR(0x768706);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B768708:L768708:{c.instructions+=5;NFSU2_TR(0x768708);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76870b:{NFSU2_TR(0x76870b);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),1);
s1(u32(r4(U+4)),r1(U+8));
}
B76870e:{NFSU2_TR(0x76870e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B76870f:{NFSU2_TR(0x76870f);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x100ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x100ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x100ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B768714:{NFSU2_TR(0x768714);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x768708u);}goto L768708;}}
}
B768716:L768716:{c.instructions+=4;NFSU2_TR(0x768716);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+0),(U+0),4);
}
B768719:{NFSU2_TR(0x768719);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76871a:{NFSU2_TR(0x76871a);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b8844),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768720:{NFSU2_TR(0x768720);
u8 U[4];
__builtin_memmove((U+0),gp(0x7830c4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x768726ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B768726:L768726:{c.instructions+=2;NFSU2_TR(0x768726);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B768728:{NFSU2_TR(0x768728);
if(r1(R+518)){{goto L7687f7;}}
}
B76872e:L76872e:{c.instructions+=2;NFSU2_TR(0x76872e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x5ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B768732:{NFSU2_TR(0x768732);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L7687f7;}}
}
B768738:L768738:{c.instructions+=4;NFSU2_TR(0x768738);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B76873c:{NFSU2_TR(0x76873c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76873f:{NFSU2_TR(0x76873f);
__builtin_memmove(gp(0x81aa50),(R+0),4);
}
B768744:{NFSU2_TR(0x768744);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L768772;}}
}
B768746:L768746:{c.instructions+=2;NFSU2_TR(0x768746);
u8 U[7];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B768749:{NFSU2_TR(0x768749);
if(r1(R+518)){{goto L768772;}}
}
B76874b:L76874b:{c.instructions+=1;NFSU2_TR(0x76874b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe3ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76874e:L76874e:{c.instructions+=3;NFSU2_TR(0x76874e);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+8),(U+0),1);
}
B768750:{NFSU2_TR(0x768750);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+8))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B768752:{NFSU2_TR(0x768752);
if(r1(R+518)){{goto L768772;}}
}
B768754:L768754:{c.instructions+=3;NFSU2_TR(0x768754);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B768758:{NFSU2_TR(0x768758);
w4(R+8,u32(r1(R+8)));
}
B76875b:{NFSU2_TR(0x76875b);
{goto L768767;}
}
B76875d:L76875d:{c.instructions+=4;NFSU2_TR(0x76875d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B768760:{NFSU2_TR(0x768760);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),1);
s1(u32(r4(U+4)),r1(U+8));
}
B768763:{NFSU2_TR(0x768763);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+8,u32(r1(U+0)));
}
B768766:{NFSU2_TR(0x768766);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B768767:L768767:{c.instructions+=2;NFSU2_TR(0x768767);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B768769:{NFSU2_TR(0x768769);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76875du);}goto L76875d;}}
}
B76876b:L76876b:{c.instructions+=4;NFSU2_TR(0x76876b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B76876c:{NFSU2_TR(0x76876c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B76876d:{NFSU2_TR(0x76876d);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B768770:{NFSU2_TR(0x768770);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76874eu);}goto L76874e;}}
}
B768772:L768772:{c.instructions+=9;NFSU2_TR(0x768772);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768773:{NFSU2_TR(0x768773);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768774:{NFSU2_TR(0x768774);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768775:{NFSU2_TR(0x768775);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((R+24),(U+0),4);
}
B768778:{NFSU2_TR(0x768778);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768779:{NFSU2_TR(0x768779);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76877e:{NFSU2_TR(0x76877e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B768781:{NFSU2_TR(0x768781);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768783:{NFSU2_TR(0x768783);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x768788ull));
TAIL_STATIC(0x7692c8u,769);
}
B768788:L768788:{c.instructions+=3;NFSU2_TR(0x768788);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B76878b:{NFSU2_TR(0x76878b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76878d:{NFSU2_TR(0x76878d);
if(r1(R+518)){{goto L7687f7;}}
}
B76878f:L76878f:{c.instructions+=3;NFSU2_TR(0x76878f);
u8 U[2];
__builtin_memmove((U+0),(R+12),2);
s2(u32(r4(R+28)),r2(U+0));
}
B768792:{NFSU2_TR(0x768792);
u8 U[8];
__builtin_memmove((U+0),gp(0x81aa50),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B768799:{NFSU2_TR(0x768799);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7687d1;}}
}
B76879b:L76879b:{c.instructions+=2;NFSU2_TR(0x76879b);
u8 U[7];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B76879e:{NFSU2_TR(0x76879e);
if(r1(R+518)){{goto L7687d1;}}
}
B7687a0:L7687a0:{c.instructions+=1;NFSU2_TR(0x7687a0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe3ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7687a3:L7687a3:{c.instructions+=3;NFSU2_TR(0x7687a3);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+8),(U+0),1);
}
B7687a5:{NFSU2_TR(0x7687a5);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+8))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B7687a7:{NFSU2_TR(0x7687a7);
if(r1(R+518)){{goto L7687d1;}}
}
B7687a9:L7687a9:{c.instructions+=4;NFSU2_TR(0x7687a9);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B7687ad:{NFSU2_TR(0x7687ad);
w4(R+8,u32(r1(R+8)));
}
B7687b0:{NFSU2_TR(0x7687b0);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7687b2:{NFSU2_TR(0x7687b2);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L7687ca;}}
}
B7687b4:L7687b4:{c.instructions+=1;NFSU2_TR(0x7687b4);
u8 U[12];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B7687b8:L7687b8:{c.instructions+=7;NFSU2_TR(0x7687b8);
u8 U[2];
w2(U+0,u16(0x8000ull));
s2(u32(r4(R+8)),r2(U+0));
}
B7687bd:{NFSU2_TR(0x7687bd);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+28,u32(r1(U+0)));
}
B7687c0:{NFSU2_TR(0x7687c0);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B7687c1:{NFSU2_TR(0x7687c1);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B7687c2:{NFSU2_TR(0x7687c2);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B7687c3:{NFSU2_TR(0x7687c3);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7687c5:{NFSU2_TR(0x7687c5);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7687b8u);}goto L7687b8;}}
}
B7687c7:L7687c7:{c.instructions+=1;NFSU2_TR(0x7687c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7687ca:L7687ca:{c.instructions+=4;NFSU2_TR(0x7687ca);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7687cb:{NFSU2_TR(0x7687cb);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7687cc:{NFSU2_TR(0x7687cc);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B7687cf:{NFSU2_TR(0x7687cf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7687a3u);}goto L7687a3;}}
}
B7687d1:L7687d1:{c.instructions+=4;NFSU2_TR(0x7687d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7687d4:{NFSU2_TR(0x7687d4);
__builtin_memmove(gp(0x81aa00),(R+24),4);
}
B7687da:{NFSU2_TR(0x7687da);
__builtin_memmove(gp(0x8ba228),(R+0),4);
}
B7687df:{NFSU2_TR(0x7687df);
__builtin_memmove(gp(0x8ba224),(R+28),4);
}
B7687e5:L7687e5:{c.instructions+=2;NFSU2_TR(0x7687e5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7687e8:{NFSU2_TR(0x7687e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7687edull));
TAIL_STATIC(0x75c6dau,75c);
}
B7687ed:L7687ed:{c.instructions+=5;NFSU2_TR(0x7687ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7687ee:{NFSU2_TR(0x7687ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7687ef:{NFSU2_TR(0x7687ef);
__builtin_memmove((R+0),(R+12),4);
}
B7687f1:{NFSU2_TR(0x7687f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7687f2:{NFSU2_TR(0x7687f2);
{goto L768824;}
}
B7687f4:L7687f4:{c.instructions+=1;NFSU2_TR(0x7687f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7687f7:L7687f7:{c.instructions+=2;NFSU2_TR(0x7687f7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7687fa:{NFSU2_TR(0x7687fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7687ffull));
TAIL_STATIC(0x75c6dau,75c);
}
B7687ff:L7687ff:{c.instructions+=2;NFSU2_TR(0x7687ff);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768800:{NFSU2_TR(0x768800);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x768805ull));
TAIL_STATIC(0x75c6dau,75c);
}
B768805:L768805:{c.instructions+=5;NFSU2_TR(0x768805);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B768806:{NFSU2_TR(0x768806);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B768808:{NFSU2_TR(0x768808);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B768809:{NFSU2_TR(0x768809);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B76880a:{NFSU2_TR(0x76880a);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7687e5u);}goto L7687e5;}
}
B76880c:L76880c:{c.instructions+=4;NFSU2_TR(0x76880c);
s4(0x81aa00,u32(0x7d7e4aull));
}
B768816:{NFSU2_TR(0x768816);
__builtin_memmove(gp(0x8ba228),(R+12),4);
}
B76881c:{NFSU2_TR(0x76881c);
__builtin_memmove(gp(0x8ba224),(R+12),4);
}
B768822:{NFSU2_TR(0x768822);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B768824:L768824:{c.instructions+=4;NFSU2_TR(0x768824);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B768827:{NFSU2_TR(0x768827);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(U+4))));
}
B76882a:{NFSU2_TR(0x76882a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B76882b:{NFSU2_TR(0x76882b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x768830ull));
TAIL_STATIC(0x76115eu,761);
}
B768830:L768830:{c.instructions+=2;NFSU2_TR(0x768830);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B768831:{NFSU2_TR(0x768831);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B768840:L768840:{c.instructions+=14;NFSU2_TR(0x768840);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768841:{NFSU2_TR(0x768841);
__builtin_memmove((R+20),(R+16),4);
}
B768843:{NFSU2_TR(0x768843);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768844:{NFSU2_TR(0x768844);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B768846:{NFSU2_TR(0x768846);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768847:{NFSU2_TR(0x768847);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768848:{NFSU2_TR(0x768848);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768849:{NFSU2_TR(0x768849);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76884a:{NFSU2_TR(0x76884a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76884b:{NFSU2_TR(0x76884b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76884c:{NFSU2_TR(0x76884c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76884d:{NFSU2_TR(0x76884d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76884e:{NFSU2_TR(0x76884e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B768851:{NFSU2_TR(0x768851);
__builtin_memmove((R+4),(R+4),4);
}
B768854:L768854:{c.instructions+=3;NFSU2_TR(0x768854);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+0),(U+0),1);
}
B768856:{NFSU2_TR(0x768856);
w1(R+0,u8(u32(r1(R+0))|u32(r1(R+0))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
}
B768858:{NFSU2_TR(0x768858);
if(r1(R+518)){{goto L768863;}}
}
B76885a:L76885a:{c.instructions+=3;NFSU2_TR(0x76885a);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B76885d:{NFSU2_TR(0x76885d);
u8 U[15];
w4(U+0,sar<u32>(r4(R+0),u64(u32(0x3ull))));
w4(U+4,u32(u32(r4(R+16))+u32(r4(U+0))));
w4(U+8,u32(u32(r4(R+0))&u32(u32(0x7ull))));
__builtin_memmove((U+12),gp(u32(r4(U+4))),1);
w1(U+13,shl<u8>(u8(0x1ull),u64(r4(U+8))));
w1(U+14,u8(u32(r1(U+12))|u32(r1(U+13))));
s1(u32(r4(U+4)),r1(U+14));
}
B768861:{NFSU2_TR(0x768861);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x768854u);}goto L768854;}
}
B768863:L768863:{c.instructions+=3;NFSU2_TR(0x768863);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B768866:{NFSU2_TR(0x768866);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xffffffffull))));
}
B768869:{NFSU2_TR(0x768869);
__builtin_memmove((R+4),(R+4),4);
}
B76886c:L76886c:{c.instructions+=4;NFSU2_TR(0x76886c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B76886f:{NFSU2_TR(0x76886f);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B768871:{NFSU2_TR(0x768871);
w1(R+0,u8(u32(r1(R+0))|u32(r1(R+0))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
}
B768873:{NFSU2_TR(0x768873);
if(r1(R+518)){{goto L76887e;}}
}
B768875:L768875:{c.instructions+=3;NFSU2_TR(0x768875);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B768878:{NFSU2_TR(0x768878);
u8 U[15];
w4(U+0,sar<u32>(r4(R+0),u64(u32(0x3ull))));
w4(U+4,u32(u32(r4(R+16))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(U+9,u32(u32(r4(R+0))&u32(u32(0x7ull))));
w1(U+13,shr<u8>(r1(U+8),u64(r4(U+9))));
w1(U+14,u8(u32(r1(U+13))&u32(u8(0x1ull))));
w1(R+512,u8((r1(U+14))!=(u8(0x0ull))));
}
B76887c:{NFSU2_TR(0x76887c);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76886cu);}goto L76886c;}}
}
B76887e:L76887e:{c.instructions+=5;NFSU2_TR(0x76887e);
__builtin_memmove((R+0),(R+4),4);
}
B768880:{NFSU2_TR(0x768880);
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
B768883:{NFSU2_TR(0x768883);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B768884:{NFSU2_TR(0x768884);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B768885:{NFSU2_TR(0x768885);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B768890:L768890:{c.instructions+=4;NFSU2_TR(0x768890);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B768894:{NFSU2_TR(0x768894);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B768898:{NFSU2_TR(0x768898);
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
B76889a:{NFSU2_TR(0x76889a);
if(r1(R+518)){{goto L7688eb;}}
}
B76889c:L76889c:{c.instructions+=6;NFSU2_TR(0x76889c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B76889e:{NFSU2_TR(0x76889e);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B7688a2:{NFSU2_TR(0x7688a2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7688a3:{NFSU2_TR(0x7688a3);
__builtin_memmove((R+28),(R+4),4);
}
B7688a5:{NFSU2_TR(0x7688a5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B7688a8:{NFSU2_TR(0x7688a8);
if(r1(R+512)){{goto L7688db;}}
}
B7688aa:L7688aa:{c.instructions+=3;NFSU2_TR(0x7688aa);
w4(R+4,u32(0-u32(r4(R+4))));
}
B7688ac:{NFSU2_TR(0x7688ac);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B7688af:{NFSU2_TR(0x7688af);
if(r1(R+518)){{goto L7688bd;}}
}
B7688b1:L7688b1:{c.instructions+=1;NFSU2_TR(0x7688b1);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B7688b3:L7688b3:{c.instructions+=4;NFSU2_TR(0x7688b3);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+28)),r1(U+0));
}
B7688b5:{NFSU2_TR(0x7688b5);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B7688b8:{NFSU2_TR(0x7688b8);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B7688bb:{NFSU2_TR(0x7688bb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7688b3u);}goto L7688b3;}}
}
B7688bd:L7688bd:{c.instructions+=10;NFSU2_TR(0x7688bd);
__builtin_memmove((R+4),(R+0),4);
}
B7688bf:{NFSU2_TR(0x7688bf);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B7688c2:{NFSU2_TR(0x7688c2);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B7688c4:{NFSU2_TR(0x7688c4);
__builtin_memmove((R+4),(R+0),4);
}
B7688c6:{NFSU2_TR(0x7688c6);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B7688c9:{NFSU2_TR(0x7688c9);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B7688cb:{NFSU2_TR(0x7688cb);
__builtin_memmove((R+4),(R+8),4);
}
B7688cd:{NFSU2_TR(0x7688cd);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x3ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B7688d0:{NFSU2_TR(0x7688d0);
u8 U[9];
w4(U+5,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+5))));
w1(U+0,u8((r4(U+5))!=(u32(0x0ull))));
w1(U+1,u8((r4(R+4))==(u32(0x0ull))));
w1(U+2,u8(!(r1(U+0))));
w1(U+3,u8(u32(r1(U+2))&u32(r1(R+518))));
w1(U+4,u8(u32(r1(U+0))&u32(r1(U+1))));
w1(R+518,u8(u32(r1(U+3))|u32(r1(U+4))));
}
B7688d3:{NFSU2_TR(0x7688d3);
if(r1(R+518)){{goto L7688db;}}
}
B7688d5:L7688d5:{c.instructions+=1;NFSU2_TR(0x7688d5);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L7688d7;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7688d5u);}goto L7688d5;}
}
B7688d7:L7688d7:{c.instructions+=2;NFSU2_TR(0x7688d7);
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
B7688d9:{NFSU2_TR(0x7688d9);
if(r1(R+518)){{goto L7688e5;}}
}
B7688db:L7688db:{c.instructions+=4;NFSU2_TR(0x7688db);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+28)),r1(U+0));
}
B7688dd:{NFSU2_TR(0x7688dd);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B7688e0:{NFSU2_TR(0x7688e0);
u8 U[6];
w1(R+512,u8((r4(R+8))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(R+8),u32(0x1ull)));
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7688e3:{NFSU2_TR(0x7688e3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7688dbu);}goto L7688db;}}
}
B7688e5:L7688e5:{c.instructions+=3;NFSU2_TR(0x7688e5);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7688e9:{NFSU2_TR(0x7688e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7688ea:{NFSU2_TR(0x7688ea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7688eb:L7688eb:{c.instructions+=2;NFSU2_TR(0x7688eb);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7688ef:{NFSU2_TR(0x7688ef);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7688f0:L7688f0:{c.instructions+=8;NFSU2_TR(0x7688f0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7688f1:{NFSU2_TR(0x7688f1);
__builtin_memmove((R+20),(R+16),4);
}
B7688f3:{NFSU2_TR(0x7688f3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7688f5:{NFSU2_TR(0x7688f5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7688f6:{NFSU2_TR(0x7688f6);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B7688f8:{NFSU2_TR(0x7688f8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7688f9:{NFSU2_TR(0x7688f9);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+12)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B7688fc:{NFSU2_TR(0x7688fc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L768944;}}
}
B7688fe:L7688fe:{c.instructions+=2;NFSU2_TR(0x7688fe);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7688ff:{NFSU2_TR(0x7688ff);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768900:L768900:{c.instructions+=2;NFSU2_TR(0x768900);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B768902:{NFSU2_TR(0x768902);
if(r1(R+518)){{goto L768942;}}
}
B768904:L768904:{c.instructions+=12;NFSU2_TR(0x768904);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B768907:{NFSU2_TR(0x768907);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B768909:{NFSU2_TR(0x768909);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B76890a:{NFSU2_TR(0x76890a);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B76890c:{NFSU2_TR(0x76890c);
__builtin_memmove((R+24),(R+0),4);
}
B76890e:{NFSU2_TR(0x76890e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B768911:{NFSU2_TR(0x768911);
u8 U[10];
w4(U+6,u32(u32(r4(R+24))&u32(u32(0x1ull))));
w1(R+512,u8((r4(U+6))!=(u32(0x0ull))));
w1(R+523,u8(0x0ull));
w4(R+24,sar<u32>(r4(R+24),u64(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B768913:{NFSU2_TR(0x768913);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B768916:{NFSU2_TR(0x768916);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B768918:{NFSU2_TR(0x768918);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76891b:{NFSU2_TR(0x76891b);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B76891d:{NFSU2_TR(0x76891d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x768922ull));
TAIL_STATIC(0x75dd6fu,75d);
}
B768922:L768922:{c.instructions+=4;NFSU2_TR(0x768922);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B768924:{NFSU2_TR(0x768924);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B768925:{NFSU2_TR(0x768925);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B768926:{NFSU2_TR(0x768926);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L768932;}}
}
B768928:L768928:{c.instructions+=4;NFSU2_TR(0x768928);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76892b:{NFSU2_TR(0x76892b);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B76892e:{NFSU2_TR(0x76892e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+4)),r4(U+0));
}
B768930:{NFSU2_TR(0x768930);
{goto L76893d;}
}
B768932:L768932:{c.instructions+=1;NFSU2_TR(0x768932);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L76893a;}}
}
B768934:L768934:{c.instructions+=3;NFSU2_TR(0x768934);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B768935:{NFSU2_TR(0x768935);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B768938:{NFSU2_TR(0x768938);
{goto L76893d;}
}
B76893a:L76893a:{c.instructions+=1;NFSU2_TR(0x76893a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((R+12),(U+0),4);
}
B76893d:L76893d:{c.instructions+=2;NFSU2_TR(0x76893d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+8)));
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B768940:{NFSU2_TR(0x768940);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x768900u);}goto L768900;}}
}
B768942:L768942:{c.instructions+=2;NFSU2_TR(0x768942);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B768943:{NFSU2_TR(0x768943);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B768944:L768944:{c.instructions+=7;NFSU2_TR(0x768944);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B768946:{NFSU2_TR(0x768946);
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
B768948:{NFSU2_TR(0x768948);
__builtin_memmove((R+4),(R+518),1);
}
B76894b:{NFSU2_TR(0x76894b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B76894c:{NFSU2_TR(0x76894c);
__builtin_memmove((R+0),(R+4),4);
}
B76894e:{NFSU2_TR(0x76894e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B76894f:{NFSU2_TR(0x76894f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B768950:L768950:{c.instructions+=2;NFSU2_TR(0x768950);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
s2(0x8b8808,u16(u32(m2(0x8b8808))|u32(u16(0x104ull))));
w1(R+519,u8(s16(m2(0x8b8808))<s16(u16(0x0ull))));
w1(R+518,u8((m2(0x8b8808))==(u16(0x0ull))));
w2(U+0,u16(u32(m2(0x8b8808))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B768959:{NFSU2_TR(0x768959);
u8 U[4];
__builtin_memmove((U+0),gp(0x7830b4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76895full));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76895f:L76895f:{c.instructions+=3;NFSU2_TR(0x76895f);
__builtin_memmove(gp(0x8b8810),(R+0),4);
}
B768964:{NFSU2_TR(0x768964);
__builtin_memmove(gp(0x8b880c),(R+0),4);
}
B768969:{NFSU2_TR(0x768969);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76896a:L76896a:{c.instructions+=10;NFSU2_TR(0x76896a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76896b:{NFSU2_TR(0x76896b);
__builtin_memmove((R+20),(R+16),4);
}
B76896d:{NFSU2_TR(0x76896d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B768970:{NFSU2_TR(0x768970);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B768975:{NFSU2_TR(0x768975);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(U+4))));
}
B768978:{NFSU2_TR(0x768978);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768979:{NFSU2_TR(0x768979);
__builtin_memmove((R+24),(R+4),4);
}
B76897b:{NFSU2_TR(0x76897b);
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
B76897d:{NFSU2_TR(0x76897d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B768980:{NFSU2_TR(0x768980);
if(r1(R+518)){{goto L7689b3;}}
}
B768982:L768982:{c.instructions+=2;NFSU2_TR(0x768982);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+4),(U+0),1);
w1(R+512,u8((r1(U+4))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+4),u8(0x0ull)));
w1(U+5,u8(u32(r1(U+4))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+5))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
w1(U+1,u8(u32(r1(U+5))&u32(u8(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r1(U+1)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B768985:{NFSU2_TR(0x768985);
if(r1(R+518)){{goto L7689b3;}}
}
B768987:L768987:{c.instructions+=3;NFSU2_TR(0x768987);
u8 U[4];
w4(U+0,u32(0x7d9030ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76898c:{NFSU2_TR(0x76898c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76898d:{NFSU2_TR(0x76898d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x768992ull));
TAIL_STATIC(0x766c50u,766);
}
B768992:L768992:{c.instructions+=4;NFSU2_TR(0x768992);
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
B768994:{NFSU2_TR(0x768994);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B768995:{NFSU2_TR(0x768995);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B768996:{NFSU2_TR(0x768996);
if(r1(R+518)){{goto L7689b3;}}
}
B768998:L768998:{c.instructions+=3;NFSU2_TR(0x768998);
u8 U[4];
w4(U+0,u32(0x7d902cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76899d:{NFSU2_TR(0x76899d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76899e:{NFSU2_TR(0x76899e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7689a3ull));
TAIL_STATIC(0x766c50u,766);
}
B7689a3:L7689a3:{c.instructions+=4;NFSU2_TR(0x7689a3);
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
B7689a5:{NFSU2_TR(0x7689a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7689a6:{NFSU2_TR(0x7689a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7689a7:{NFSU2_TR(0x7689a7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7689d1;}}
}
B7689a9:L7689a9:{c.instructions+=5;NFSU2_TR(0x7689a9);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7689ab:{NFSU2_TR(0x7689ab);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7689ae:{NFSU2_TR(0x7689ae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7689af:{NFSU2_TR(0x7689af);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7689b1:{NFSU2_TR(0x7689b1);
{goto L7689be;}
}
B7689b3:L7689b3:{c.instructions+=4;NFSU2_TR(0x7689b3);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7689b5:{NFSU2_TR(0x7689b5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7689b8:{NFSU2_TR(0x7689b8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7689b9:{NFSU2_TR(0x7689b9);
u8 U[4];
w4(U+0,u32(0x1004ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7689be:L7689be:{c.instructions+=2;NFSU2_TR(0x7689be);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b8810),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7689c4:{NFSU2_TR(0x7689c4);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b8828),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7689caull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7689ca:L7689ca:{c.instructions+=2;NFSU2_TR(0x7689ca);
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
B7689cc:{NFSU2_TR(0x7689cc);
if(r1(R+518)){{goto L7689d8;}}
}
B7689ce:L7689ce:{c.instructions+=1;NFSU2_TR(0x7689ce);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7689d1:L7689d1:{c.instructions+=2;NFSU2_TR(0x7689d1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7689d2:{NFSU2_TR(0x7689d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7689d7ull));
TAIL_STATIC(0x75d5d3u,75d);
}
B7689d7:L7689d7:{c.instructions+=1;NFSU2_TR(0x7689d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7689d8:L7689d8:{c.instructions+=4;NFSU2_TR(0x7689d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7689db:{NFSU2_TR(0x7689db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(U+4))));
}
B7689de:{NFSU2_TR(0x7689de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7689df:{NFSU2_TR(0x7689df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7689e4ull));
TAIL_STATIC(0x76115eu,761);
}
B7689e4:L7689e4:{c.instructions+=2;NFSU2_TR(0x7689e4);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7689e5:{NFSU2_TR(0x7689e5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7689e6:L7689e6:{c.instructions+=1;NFSU2_TR(0x7689e6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7689e8:L7689e8:{c.instructions+=3;NFSU2_TR(0x7689e8);
u8 U[6];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B7689ed:{NFSU2_TR(0x7689ed);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7d884cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(R+4))-u32(r2(U+6))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B7689f4:{NFSU2_TR(0x7689f4);
if(r1(R+518)){{goto L768a01;}}
}
B7689f6:L7689f6:{c.instructions+=4;NFSU2_TR(0x7689f6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7689f7:{NFSU2_TR(0x7689f7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7689f8:{NFSU2_TR(0x7689f8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x14ull))));
}
B7689fb:{NFSU2_TR(0x7689fb);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7689e8u);}goto L7689e8;}}
}
B7689fd:L7689fd:{c.instructions+=3;NFSU2_TR(0x7689fd);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7689ff:{NFSU2_TR(0x7689ff);
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
B768a00:{NFSU2_TR(0x768a00);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B768a01:L768a01:{c.instructions+=2;NFSU2_TR(0x768a01);
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
B768a03:{NFSU2_TR(0x768a03);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B768a04:L768a04:{c.instructions+=8;NFSU2_TR(0x768a04);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768a05:{NFSU2_TR(0x768a05);
__builtin_memmove((R+20),(R+16),4);
}
B768a07:{NFSU2_TR(0x768a07);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768a08:{NFSU2_TR(0x768a08);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768a09:{NFSU2_TR(0x768a09);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768a0a:{NFSU2_TR(0x768a0a);
u8 U[4];
w4(U+0,u32(0x1aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768a0c:{NFSU2_TR(0x768a0c);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B768a0e:{NFSU2_TR(0x768a0e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B768a0f:L768a0f:{c.instructions+=10;NFSU2_TR(0x768a0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B768a12:{NFSU2_TR(0x768a12);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B768a15:{NFSU2_TR(0x768a15);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B768a16:{NFSU2_TR(0x768a16);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B768a18:{NFSU2_TR(0x768a18);
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
}
B768a1a:{NFSU2_TR(0x768a1a);
__builtin_memmove((R+4),(R+0),4);
}
B768a1c:{NFSU2_TR(0x768a1c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B768a1f:{NFSU2_TR(0x768a1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7d8258ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B768a25:{NFSU2_TR(0x768a25);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B768a28:{NFSU2_TR(0x768a28);
if(r1(R+518)){{goto L768a4f;}}
}
B768a2a:L768a2a:{c.instructions+=1;NFSU2_TR(0x768a2a);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L768a31;}}
}
B768a2c:L768a2c:{c.instructions+=2;NFSU2_TR(0x768a2c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((R+28),(U+0),4);
}
B768a2f:{NFSU2_TR(0x768a2f);
{goto L768a34;}
}
B768a31:L768a31:{c.instructions+=1;NFSU2_TR(0x768a31);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B768a34:L768a34:{c.instructions+=2;NFSU2_TR(0x768a34);
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
B768a36:{NFSU2_TR(0x768a36);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x768a0fu);}goto L768a0f;}}
}
B768a38:L768a38:{c.instructions+=5;NFSU2_TR(0x768a38);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768a39:{NFSU2_TR(0x768a39);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B768a3c:{NFSU2_TR(0x768a3c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B768a3f:{NFSU2_TR(0x768a3f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B768a42:{NFSU2_TR(0x768a42);
u8 U[4];
__builtin_memmove((U+0),gp(0x7830b0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x768a48ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B768a48:L768a48:{c.instructions+=5;NFSU2_TR(0x768a48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B768a49:{NFSU2_TR(0x768a49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B768a4a:{NFSU2_TR(0x768a4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B768a4b:{NFSU2_TR(0x768a4b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B768a4c:{NFSU2_TR(0x768a4c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B768a4f:L768a4f:{c.instructions+=3;NFSU2_TR(0x768a4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B768a52:{NFSU2_TR(0x768a52);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B768a53:{NFSU2_TR(0x768a53);
if(r1(R+518)){{goto L768ab0;}}
}
B768a55:L768a55:{c.instructions+=3;NFSU2_TR(0x768a55);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B768a56:{NFSU2_TR(0x768a56);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B768a57:{NFSU2_TR(0x768a57);
if(r1(R+518)){{goto L768aa6;}}
}
B768a59:L768a59:{c.instructions+=2;NFSU2_TR(0x768a59);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x4ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B768a5c:{NFSU2_TR(0x768a5c);
if(r1(R+518)){{goto L768a9c;}}
}
B768a5e:L768a5e:{c.instructions+=2;NFSU2_TR(0x768a5e);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x4ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B768a61:{NFSU2_TR(0x768a61);
if(r1(R+518)){{goto L768a92;}}
}
B768a63:L768a63:{c.instructions+=2;NFSU2_TR(0x768a63);
w1(R+512,u8((r4(R+4))<(u32(0xff6ull))));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0xff6ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B768a69:{NFSU2_TR(0x768a69);
if(r1(R+518)){{goto L768a87;}}
}
B768a6b:L768a6b:{c.instructions+=2;NFSU2_TR(0x768a6b);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B768a6c:{NFSU2_TR(0x768a6c);
if(r1(R+518)){{goto L768a7c;}}
}
B768a6e:L768a6e:{c.instructions+=3;NFSU2_TR(0x768a6e);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B768a6f:{NFSU2_TR(0x768a6f);
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
B768a70:{NFSU2_TR(0x768a70);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x768a38u);}goto L768a38;}}
}
B768a72:L768a72:{c.instructions+=3;NFSU2_TR(0x768a72);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B768a75:{NFSU2_TR(0x768a75);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x7d827cull))));
}
B768a7a:{NFSU2_TR(0x768a7a);
{goto L768ab8;}
}
B768a7c:L768a7c:{c.instructions+=3;NFSU2_TR(0x768a7c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B768a7f:{NFSU2_TR(0x768a7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7d826cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B768a85:{NFSU2_TR(0x768a85);
{goto L768ab8;}
}
B768a87:L768a87:{c.instructions+=3;NFSU2_TR(0x768a87);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B768a8a:{NFSU2_TR(0x768a8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7d8264ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B768a90:{NFSU2_TR(0x768a90);
{goto L768ab8;}
}
B768a92:L768a92:{c.instructions+=3;NFSU2_TR(0x768a92);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B768a95:{NFSU2_TR(0x768a95);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x7d8274ull))));
}
B768a9a:{NFSU2_TR(0x768a9a);
{goto L768ab8;}
}
B768a9c:L768a9c:{c.instructions+=3;NFSU2_TR(0x768a9c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B768a9f:{NFSU2_TR(0x768a9f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x7d8270ull))));
}
B768aa4:{NFSU2_TR(0x768aa4);
{goto L768ab8;}
}
B768aa6:L768aa6:{c.instructions+=3;NFSU2_TR(0x768aa6);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B768aa9:{NFSU2_TR(0x768aa9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x7d8268ull))));
}
B768aae:{NFSU2_TR(0x768aae);
{goto L768ab8;}
}
B768ab0:L768ab0:{c.instructions+=2;NFSU2_TR(0x768ab0);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B768ab3:{NFSU2_TR(0x768ab3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x7d825cull))));
}
B768ab8:L768ab8:{c.instructions+=2;NFSU2_TR(0x768ab8);
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
B768aba:{NFSU2_TR(0x768aba);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x768a38u);}goto L768a38;}}
}
B768ac0:L768ac0:{c.instructions+=2;NFSU2_TR(0x768ac0);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B768ac3:{NFSU2_TR(0x768ac3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x768a38u);}goto L768a38;}}
}
B768ac9:L768ac9:{c.instructions+=6;NFSU2_TR(0x768ac9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B768acc:{NFSU2_TR(0x768acc);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xffffffffull))));
__builtin_memmove((R+4),(U+0),4);
}
B768acf:{NFSU2_TR(0x768acf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768ad0:{NFSU2_TR(0x768ad0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768ad1:{NFSU2_TR(0x768ad1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768ad2:{NFSU2_TR(0x768ad2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x768ad7ull));
TAIL_STATIC(0x75c840u,75c);
}
B768ad7:L768ad7:{c.instructions+=5;NFSU2_TR(0x768ad7);
u8 U[13];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w1(U+12,u8(u32(r1(U+12))&u32(u8(0x0ull))));
s1(u32(r4(U+8)),r1(U+12));
}
B768adc:{NFSU2_TR(0x768adc);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B768ade:{NFSU2_TR(0x768ade);
w1(R+512,carry<u32>(r4(R+16),u32(0xcull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B768ae1:{NFSU2_TR(0x768ae1);
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
B768ae2:{NFSU2_TR(0x768ae2);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x768a48u);}goto L768a48;}
}
B768ae7:L768ae7:{c.instructions+=2;NFSU2_TR(0x768ae7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B768ae9:{NFSU2_TR(0x768ae9);
{goto L768b15;}
}
B768aeb:L768aeb:{c.instructions+=3;NFSU2_TR(0x768aeb);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B768aec:{NFSU2_TR(0x768aec);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x61ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x61ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B768aef:{NFSU2_TR(0x768aef);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L768afb;}}
}
B768af1:L768af1:{c.instructions+=2;NFSU2_TR(0x768af1);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x66ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x66ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B768af4:{NFSU2_TR(0x768af4);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L768afb;}}
}
B768af6:L768af6:{c.instructions+=2;NFSU2_TR(0x768af6);
w1(R+4,u8(u32(r1(R+4))+u32(u8(0xd9ull))));
}
B768af9:{NFSU2_TR(0x768af9);
{goto L768b08;}
}
B768afb:L768afb:{c.instructions+=2;NFSU2_TR(0x768afb);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x41ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x41ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B768afe:{NFSU2_TR(0x768afe);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L768b08;}}
}
B768b00:L768b00:{c.instructions+=2;NFSU2_TR(0x768b00);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x46ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x46ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B768b03:{NFSU2_TR(0x768b03);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L768b08;}}
}
B768b05:L768b05:{c.instructions+=1;NFSU2_TR(0x768b05);
w1(R+4,u8(u32(r1(R+4))+u32(u8(0xf9ull))));
}
B768b08:L768b08:{c.instructions+=4;NFSU2_TR(0x768b08);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xffffffdull))));
}
B768b0d:{NFSU2_TR(0x768b0d);
w4(R+4,u32(s32(s8(r1(R+4)))));
}
B768b10:{NFSU2_TR(0x768b10);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B768b13:{NFSU2_TR(0x768b13);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B768b15:L768b15:{c.instructions+=3;NFSU2_TR(0x768b15);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+4),(U+0),1);
}
B768b17:{NFSU2_TR(0x768b17);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B768b19:{NFSU2_TR(0x768b19);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x768aebu);}goto L768aeb;}}
}
B768b1b:L768b1b:{c.instructions+=1;NFSU2_TR(0x768b1b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B768b1c:L768b1c:{c.instructions+=1;NFSU2_TR(0x768b1c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B768b1e:L768b1e:{c.instructions+=4;NFSU2_TR(0x768b1e);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+4),(U+0),1);
}
B768b20:{NFSU2_TR(0x768b20);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B768b21:{NFSU2_TR(0x768b21);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x41ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x41ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B768b24:{NFSU2_TR(0x768b24);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L768b2b;}}
}
B768b26:L768b26:{c.instructions+=2;NFSU2_TR(0x768b26);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x5aull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x5aull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B768b29:{NFSU2_TR(0x768b29);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L768b35;}}
}
B768b2b:L768b2b:{c.instructions+=2;NFSU2_TR(0x768b2b);
u8 U[5];
__builtin_memmove((U+3),(R+4),1);
w1(R+512,u8((r1(U+3))<(u8(0x61ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x61ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x61ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B768b2e:{NFSU2_TR(0x768b2e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L768b38;}}
}
B768b30:L768b30:{c.instructions+=2;NFSU2_TR(0x768b30);
u8 U[5];
__builtin_memmove((U+3),(R+4),1);
w1(R+512,u8((r1(U+3))<(u8(0x7aull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x7aull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x7aull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B768b33:{NFSU2_TR(0x768b33);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L768b38;}}
}
B768b35:L768b35:{c.instructions+=2;NFSU2_TR(0x768b35);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B768b36:{NFSU2_TR(0x768b36);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x768b1eu);}goto L768b1e;}
}
B768b38:L768b38:{c.instructions+=1;NFSU2_TR(0x768b38);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B768b39:L768b39:{c.instructions+=9;NFSU2_TR(0x768b39);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768b3a:{NFSU2_TR(0x768b3a);
__builtin_memmove((R+20),(R+16),4);
}
B768b3c:{NFSU2_TR(0x768b3c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x7cull))));
}
B768b3f:{NFSU2_TR(0x768b3f);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B768b44:{NFSU2_TR(0x768b44);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(U+4))));
}
B768b47:{NFSU2_TR(0x768b47);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B768b4a:{NFSU2_TR(0x768b4a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768b4b:{NFSU2_TR(0x768b4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B768b4e:{NFSU2_TR(0x768b4e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x768b53ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x768ae7u);}goto L768ae7;}
}
B768b53:L768b53:{c.instructions+=12;NFSU2_TR(0x768b53);
__builtin_memmove((R+24),(R+0),4);
}
B768b55:{NFSU2_TR(0x768b55);
u8 U[4];
w4(U+0,u32(0x78ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768b57:{NFSU2_TR(0x768b57);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff84ull))));
__builtin_memmove((R+0),(U+0),4);
}
B768b5a:{NFSU2_TR(0x768b5a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768b5b:{NFSU2_TR(0x768b5b);
__builtin_memmove((R+0),gp(0x8b8818),4);
}
B768b60:{NFSU2_TR(0x768b60);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B768b62:{NFSU2_TR(0x768b62);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B768b64:{NFSU2_TR(0x768b64);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffff005ull))));
}
B768b69:{NFSU2_TR(0x768b69);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x1002ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x1002ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1002ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B768b6e:{NFSU2_TR(0x768b6e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768b6f:{NFSU2_TR(0x768b6f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768b70:{NFSU2_TR(0x768b70);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b8828),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x768b76ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B768b76:L768b76:{c.instructions+=2;NFSU2_TR(0x768b76);
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
B768b78:{NFSU2_TR(0x768b78);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L768b83;}}
}
B768b7a:L768b7a:{c.instructions+=3;NFSU2_TR(0x768b7a);
s4(0x8b8808,u32(u32(m4(0x8b8808))&u32(r4(R+0))));
}
B768b80:{NFSU2_TR(0x768b80);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B768b81:{NFSU2_TR(0x768b81);
{goto L768bc3;}
}
B768b83:L768b83:{c.instructions+=4;NFSU2_TR(0x768b83);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff84ull))));
__builtin_memmove((R+0),(U+0),4);
}
B768b86:{NFSU2_TR(0x768b86);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768b87:{NFSU2_TR(0x768b87);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b881c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768b8d:{NFSU2_TR(0x768b8d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x768b92ull));
TAIL_STATIC(0x75dd6fu,75d);
}
B768b92:L768b92:{c.instructions+=4;NFSU2_TR(0x768b92);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B768b94:{NFSU2_TR(0x768b94);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B768b95:{NFSU2_TR(0x768b95);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B768b96:{NFSU2_TR(0x768b96);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L768bb6;}}
}
B768b98:L768b98:{c.instructions+=2;NFSU2_TR(0x768b98);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768b99:{NFSU2_TR(0x768b99);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x768b9eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7689e6u);}goto L7689e6;}
}
B768b9e:L768b9e:{c.instructions+=3;NFSU2_TR(0x768b9e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B768ba0:{NFSU2_TR(0x768ba0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B768ba1:{NFSU2_TR(0x768ba1);
if(r1(R+518)){{goto L768bb6;}}
}
B768ba3:L768ba3:{c.instructions+=3;NFSU2_TR(0x768ba3);
s4(0x8b8808,u32(u32(m4(0x8b8808))|u32(u32(0x4ull))));
}
B768baa:{NFSU2_TR(0x768baa);
__builtin_memmove(gp(0x8b8810),(R+24),4);
}
B768bb0:{NFSU2_TR(0x768bb0);
__builtin_memmove(gp(0x8b880c),(R+24),4);
}
B768bb6:L768bb6:{c.instructions+=4;NFSU2_TR(0x768bb6);
__builtin_memmove((R+0),gp(0x8b8808),4);
}
B768bbb:{NFSU2_TR(0x768bbb);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B768bbe:{NFSU2_TR(0x768bbe);
w4(R+0,u32(~u32(r4(R+0))));
}
B768bc0:{NFSU2_TR(0x768bc0);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1ull))));
}
B768bc3:L768bc3:{c.instructions+=4;NFSU2_TR(0x768bc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B768bc6:{NFSU2_TR(0x768bc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(U+4))));
}
B768bc9:{NFSU2_TR(0x768bc9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B768bca:{NFSU2_TR(0x768bca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x768bcfull));
TAIL_STATIC(0x76115eu,761);
}
B768bcf:L768bcf:{c.instructions+=2;NFSU2_TR(0x768bcf);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B768bd0:{NFSU2_TR(0x768bd0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B768bd3:L768bd3:{c.instructions+=15;NFSU2_TR(0x768bd3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768bd4:{NFSU2_TR(0x768bd4);
__builtin_memmove((R+20),(R+16),4);
}
B768bd6:{NFSU2_TR(0x768bd6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x7cull))));
}
B768bd9:{NFSU2_TR(0x768bd9);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B768bde:{NFSU2_TR(0x768bde);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(U+4))));
}
B768be1:{NFSU2_TR(0x768be1);
u8 U[4];
w4(U+0,u32(0x78ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768be3:{NFSU2_TR(0x768be3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B768be6:{NFSU2_TR(0x768be6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff84ull))));
__builtin_memmove((R+0),(U+0),4);
}
B768be9:{NFSU2_TR(0x768be9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768bea:{NFSU2_TR(0x768bea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B768bed:{NFSU2_TR(0x768bed);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x3ffull))));
}
B768bf2:{NFSU2_TR(0x768bf2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768bf4:{NFSU2_TR(0x768bf4);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x400ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B768bf9:{NFSU2_TR(0x768bf9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768bfa:{NFSU2_TR(0x768bfa);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b8828),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x768c00ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B768c00:L768c00:{c.instructions+=2;NFSU2_TR(0x768c00);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B768c02:{NFSU2_TR(0x768c02);
if(r1(R+518)){{goto L768c36;}}
}
B768c04:L768c04:{c.instructions+=2;NFSU2_TR(0x768c04);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff84ull))));
__builtin_memmove((R+8),(U+0),4);
}
B768c07:{NFSU2_TR(0x768c07);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x768c0cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x768ae7u);}goto L768ae7;}
}
B768c0c:L768c0c:{c.instructions+=2;NFSU2_TR(0x768c0c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B768c0f:{NFSU2_TR(0x768c0f);
if(r1(R+518)){{goto L768c3a;}}
}
B768c11:L768c11:{c.instructions+=2;NFSU2_TR(0x768c11);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B768c15:{NFSU2_TR(0x768c15);
if(r1(R+518)){{goto L768c3a;}}
}
B768c17:L768c17:{c.instructions+=3;NFSU2_TR(0x768c17);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768c18:{NFSU2_TR(0x768c18);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b8824),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768c1e:{NFSU2_TR(0x768c1e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x768c23ull));
TAIL_STATIC(0x766bc0u,766);
}
B768c23:L768c23:{c.instructions+=4;NFSU2_TR(0x768c23);
__builtin_memmove((R+8),gp(0x8b8824),4);
}
B768c29:{NFSU2_TR(0x768c29);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B768c2a:{NFSU2_TR(0x768c2a);
__builtin_memmove((R+24),(R+0),4);
}
B768c2c:{NFSU2_TR(0x768c2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x768c31ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x768b1cu);}goto L768b1c;}
}
B768c31:L768c31:{c.instructions+=3;NFSU2_TR(0x768c31);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B768c33:{NFSU2_TR(0x768c33);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B768c34:{NFSU2_TR(0x768c34);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L768c3a;}}
}
B768c36:L768c36:{c.instructions+=2;NFSU2_TR(0x768c36);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B768c38:{NFSU2_TR(0x768c38);
{goto L768c3d;}
}
B768c3a:L768c3a:{c.instructions+=2;NFSU2_TR(0x768c3a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B768c3c:{NFSU2_TR(0x768c3c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B768c3d:L768c3d:{c.instructions+=3;NFSU2_TR(0x768c3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B768c40:{NFSU2_TR(0x768c40);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(U+4))));
}
B768c43:{NFSU2_TR(0x768c43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x768c48ull));
TAIL_STATIC(0x76115eu,761);
}
B768c48:L768c48:{c.instructions+=2;NFSU2_TR(0x768c48);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B768c49:{NFSU2_TR(0x768c49);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B768c4a:L768c4a:{c.instructions+=9;NFSU2_TR(0x768c4a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768c4b:{NFSU2_TR(0x768c4b);
__builtin_memmove((R+20),(R+16),4);
}
B768c4d:{NFSU2_TR(0x768c4d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x7cull))));
}
B768c50:{NFSU2_TR(0x768c50);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B768c55:{NFSU2_TR(0x768c55);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(U+4))));
}
B768c58:{NFSU2_TR(0x768c58);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B768c5b:{NFSU2_TR(0x768c5b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768c5c:{NFSU2_TR(0x768c5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B768c5f:{NFSU2_TR(0x768c5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x768c64ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x768ae7u);}goto L768ae7;}
}
B768c64:L768c64:{c.instructions+=12;NFSU2_TR(0x768c64);
__builtin_memmove((R+24),(R+0),4);
}
B768c66:{NFSU2_TR(0x768c66);
u8 U[4];
w4(U+0,u32(0x78ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768c68:{NFSU2_TR(0x768c68);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff84ull))));
__builtin_memmove((R+0),(U+0),4);
}
B768c6b:{NFSU2_TR(0x768c6b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768c6c:{NFSU2_TR(0x768c6c);
__builtin_memmove((R+0),gp(0x8b8818),4);
}
B768c71:{NFSU2_TR(0x768c71);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B768c73:{NFSU2_TR(0x768c73);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B768c75:{NFSU2_TR(0x768c75);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffff005ull))));
}
B768c7a:{NFSU2_TR(0x768c7a);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x1002ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x1002ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1002ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B768c7f:{NFSU2_TR(0x768c7f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768c80:{NFSU2_TR(0x768c80);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768c81:{NFSU2_TR(0x768c81);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b8828),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x768c87ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B768c87:L768c87:{c.instructions+=2;NFSU2_TR(0x768c87);
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
B768c89:{NFSU2_TR(0x768c89);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L768c97;}}
}
B768c8b:L768c8b:{c.instructions+=3;NFSU2_TR(0x768c8b);
s4(0x8b8808,u32(u32(m4(0x8b8808))&u32(r4(R+0))));
}
B768c91:{NFSU2_TR(0x768c91);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B768c92:{NFSU2_TR(0x768c92);
{goto L768e5a;}
}
B768c97:L768c97:{c.instructions+=6;NFSU2_TR(0x768c97);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768c98:{NFSU2_TR(0x768c98);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768c99:{NFSU2_TR(0x768c99);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff84ull))));
__builtin_memmove((R+0),(U+0),4);
}
B768c9c:{NFSU2_TR(0x768c9c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768c9d:{NFSU2_TR(0x768c9d);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b881c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768ca3:{NFSU2_TR(0x768ca3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x768ca8ull));
TAIL_STATIC(0x75dd6fu,75d);
}
B768ca8:L768ca8:{c.instructions+=6;NFSU2_TR(0x768ca8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B768caa:{NFSU2_TR(0x768caa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B768cab:{NFSU2_TR(0x768cab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B768cac:{NFSU2_TR(0x768cac);
w4(R+12,u32(0xfffff002ull));
}
B768cb1:{NFSU2_TR(0x768cb1);
w4(R+28,u32(0x1001ull));
}
B768cb6:{NFSU2_TR(0x768cb6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L768d83;}}
}
B768cbc:L768cbc:{c.instructions+=11;NFSU2_TR(0x768cbc);
u8 U[4];
w4(U+0,u32(0x78ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768cbe:{NFSU2_TR(0x768cbe);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff84ull))));
__builtin_memmove((R+0),(U+0),4);
}
B768cc1:{NFSU2_TR(0x768cc1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768cc2:{NFSU2_TR(0x768cc2);
__builtin_memmove((R+0),gp(0x8b8814),4);
}
B768cc7:{NFSU2_TR(0x768cc7);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B768cc9:{NFSU2_TR(0x768cc9);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B768ccb:{NFSU2_TR(0x768ccb);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+12))));
}
B768ccd:{NFSU2_TR(0x768ccd);
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
B768ccf:{NFSU2_TR(0x768ccf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768cd0:{NFSU2_TR(0x768cd0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768cd1:{NFSU2_TR(0x768cd1);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b8828),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x768cd7ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B768cd7:L768cd7:{c.instructions+=2;NFSU2_TR(0x768cd7);
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
B768cd9:{NFSU2_TR(0x768cd9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L768cea;}}
}
B768cdb:L768cdb:{c.instructions+=4;NFSU2_TR(0x768cdb);
s4(0x8b8808,u32(u32(m4(0x8b8808))&u32(u32(0x0ull))));
}
B768ce2:{NFSU2_TR(0x768ce2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B768ce4:{NFSU2_TR(0x768ce4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B768ce5:{NFSU2_TR(0x768ce5);
{goto L768e58;}
}
B768cea:L768cea:{c.instructions+=4;NFSU2_TR(0x768cea);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff84ull))));
__builtin_memmove((R+0),(U+0),4);
}
B768ced:{NFSU2_TR(0x768ced);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768cee:{NFSU2_TR(0x768cee);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b8824),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768cf4:{NFSU2_TR(0x768cf4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x768cf9ull));
TAIL_STATIC(0x75dd6fu,75d);
}
B768cf9:L768cf9:{c.instructions+=4;NFSU2_TR(0x768cf9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B768cfb:{NFSU2_TR(0x768cfb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B768cfc:{NFSU2_TR(0x768cfc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B768cfd:{NFSU2_TR(0x768cfd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L768d10;}}
}
B768cff:L768cff:{c.instructions+=3;NFSU2_TR(0x768cff);
s2(0x8b8808,u16(u32(m2(0x8b8808))|u32(u16(0x304ull))));
}
B768d08:{NFSU2_TR(0x768d08);
__builtin_memmove(gp(0x8b880c),(R+24),4);
}
B768d0e:{NFSU2_TR(0x768d0e);
{goto L768d7d;}
}
B768d10:L768d10:{c.instructions+=2;NFSU2_TR(0x768d10);
u8 U[1];
w1(U+0,u8(u32(m1(0x8b8808))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B768d17:{NFSU2_TR(0x768d17);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L768d83;}}
}
B768d19:L768d19:{c.instructions+=3;NFSU2_TR(0x768d19);
__builtin_memmove((R+0),gp(0x8b8820),4);
}
B768d1e:{NFSU2_TR(0x768d1e);
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
B768d20:{NFSU2_TR(0x768d20);
if(r1(R+518)){{goto L768d62;}}
}
B768d22:L768d22:{c.instructions+=5;NFSU2_TR(0x768d22);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768d23:{NFSU2_TR(0x768d23);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff84ull))));
__builtin_memmove((R+0),(U+0),4);
}
B768d26:{NFSU2_TR(0x768d26);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768d27:{NFSU2_TR(0x768d27);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b8824),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768d2d:{NFSU2_TR(0x768d2d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x768d32ull));
TAIL_STATIC(0x76d4dau,76d);
}
B768d32:L768d32:{c.instructions+=3;NFSU2_TR(0x768d32);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B768d35:{NFSU2_TR(0x768d35);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B768d37:{NFSU2_TR(0x768d37);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L768d62;}}
}
B768d39:L768d39:{c.instructions+=4;NFSU2_TR(0x768d39);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b8824),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768d3f:{NFSU2_TR(0x768d3f);
s4(0x8b8808,u32(u32(m4(0x8b8808))|u32(u32(0x2ull))));
}
B768d46:{NFSU2_TR(0x768d46);
__builtin_memmove(gp(0x8b8810),(R+24),4);
}
B768d4c:{NFSU2_TR(0x768d4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x768d51ull));
TAIL_STATIC(0x766bc0u,766);
}
B768d51:L768d51:{c.instructions+=3;NFSU2_TR(0x768d51);
u8 U[8];
__builtin_memmove((U+0),gp(0x8b8820),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B768d57:{NFSU2_TR(0x768d57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B768d58:{NFSU2_TR(0x768d58);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L768d83;}}
}
B768d5a:L768d5a:{c.instructions+=2;NFSU2_TR(0x768d5a);
__builtin_memmove(gp(0x8b880c),(R+24),4);
}
B768d60:{NFSU2_TR(0x768d60);
{goto L768d83;}
}
B768d62:L768d62:{c.instructions+=2;NFSU2_TR(0x768d62);
u8 U[1];
w1(U+0,u8(u32(m1(0x8b8808))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B768d69:{NFSU2_TR(0x768d69);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L768d83;}}
}
B768d6b:L768d6b:{c.instructions+=2;NFSU2_TR(0x768d6b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768d6c:{NFSU2_TR(0x768d6c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x768d71ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7689e6u);}goto L7689e6;}
}
B768d71:L768d71:{c.instructions+=3;NFSU2_TR(0x768d71);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B768d73:{NFSU2_TR(0x768d73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B768d74:{NFSU2_TR(0x768d74);
if(r1(R+518)){{goto L768d83;}}
}
B768d76:L768d76:{c.instructions+=1;NFSU2_TR(0x768d76);
s4(0x8b8808,u32(u32(m4(0x8b8808))|u32(u32(0x1ull))));
}
B768d7d:L768d7d:{c.instructions+=1;NFSU2_TR(0x768d7d);
__builtin_memmove(gp(0x8b8810),(R+24),4);
}
B768d83:L768d83:{c.instructions+=5;NFSU2_TR(0x768d83);
__builtin_memmove((R+4),gp(0x8b8808),4);
}
B768d89:{NFSU2_TR(0x768d89);
w4(R+0,u32(0x300ull));
}
B768d8e:{NFSU2_TR(0x768d8e);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+0))));
}
B768d90:{NFSU2_TR(0x768d90);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B768d92:{NFSU2_TR(0x768d92);
if(r1(R+518)){{goto L768e4b;}}
}
B768d98:L768d98:{c.instructions+=11;NFSU2_TR(0x768d98);
u8 U[4];
w4(U+0,u32(0x78ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768d9a:{NFSU2_TR(0x768d9a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff84ull))));
__builtin_memmove((R+0),(U+0),4);
}
B768d9d:{NFSU2_TR(0x768d9d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768d9e:{NFSU2_TR(0x768d9e);
__builtin_memmove((R+0),gp(0x8b8814),4);
}
B768da3:{NFSU2_TR(0x768da3);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B768da5:{NFSU2_TR(0x768da5);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B768da7:{NFSU2_TR(0x768da7);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+12))));
}
B768da9:{NFSU2_TR(0x768da9);
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
B768dab:{NFSU2_TR(0x768dab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768dac:{NFSU2_TR(0x768dac);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768dad:{NFSU2_TR(0x768dad);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b8828),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x768db3ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B768db3:L768db3:{c.instructions+=2;NFSU2_TR(0x768db3);
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
B768db5:{NFSU2_TR(0x768db5);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x768cdbu);}goto L768cdb;}}
}
B768dbb:L768dbb:{c.instructions+=4;NFSU2_TR(0x768dbb);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff84ull))));
__builtin_memmove((R+0),(U+0),4);
}
B768dbe:{NFSU2_TR(0x768dbe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768dbf:{NFSU2_TR(0x768dbf);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b8824),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768dc5:{NFSU2_TR(0x768dc5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x768dcaull));
TAIL_STATIC(0x75dd6fu,75d);
}
B768dca:L768dca:{c.instructions+=5;NFSU2_TR(0x768dca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B768dcb:{NFSU2_TR(0x768dcb);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B768dcd:{NFSU2_TR(0x768dcd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B768dcf:{NFSU2_TR(0x768dcf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B768dd0:{NFSU2_TR(0x768dd0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L768e01;}}
}
B768dd2:L768dd2:{c.instructions+=3;NFSU2_TR(0x768dd2);
s1(0x8b8809,u8(u32(m1(0x8b8809))|u32(u8(0x2ull))));
}
B768dd9:{NFSU2_TR(0x768dd9);
u8 U[8];
__builtin_memmove((U+0),gp(0x8b8814),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+28))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B768ddf:{NFSU2_TR(0x768ddf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L768e36;}}
}
B768de1:L768de1:{c.instructions+=2;NFSU2_TR(0x768de1);
u8 U[8];
__builtin_memmove((U+0),gp(0x8b8820),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+28))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B768de7:{NFSU2_TR(0x768de7);
if(r1(R+518)){{goto L768e36;}}
}
B768de9:L768de9:{c.instructions+=2;NFSU2_TR(0x768de9);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b8824),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768def:{NFSU2_TR(0x768def);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x768df4ull));
TAIL_STATIC(0x766bc0u,766);
}
B768df4:L768df4:{c.instructions+=3;NFSU2_TR(0x768df4);
u8 U[8];
__builtin_memmove((U+0),gp(0x8b8820),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B768dfa:{NFSU2_TR(0x768dfa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B768dfb:{NFSU2_TR(0x768dfb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L768e36;}}
}
B768dfd:L768dfd:{c.instructions+=2;NFSU2_TR(0x768dfd);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768dff:{NFSU2_TR(0x768dff);
{goto L768e2a;}
}
B768e01:L768e01:{c.instructions+=2;NFSU2_TR(0x768e01);
u8 U[8];
__builtin_memmove((U+0),gp(0x8b8814),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+28))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B768e07:{NFSU2_TR(0x768e07);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L768e4b;}}
}
B768e09:L768e09:{c.instructions+=3;NFSU2_TR(0x768e09);
__builtin_memmove((R+0),gp(0x8b8820),4);
}
B768e0e:{NFSU2_TR(0x768e0e);
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
B768e10:{NFSU2_TR(0x768e10);
if(r1(R+518)){{goto L768e4b;}}
}
B768e12:L768e12:{c.instructions+=5;NFSU2_TR(0x768e12);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768e13:{NFSU2_TR(0x768e13);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff84ull))));
__builtin_memmove((R+0),(U+0),4);
}
B768e16:{NFSU2_TR(0x768e16);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768e17:{NFSU2_TR(0x768e17);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b8824),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768e1d:{NFSU2_TR(0x768e1d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x768e22ull));
TAIL_STATIC(0x76d4dau,76d);
}
B768e22:L768e22:{c.instructions+=3;NFSU2_TR(0x768e22);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B768e25:{NFSU2_TR(0x768e25);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B768e27:{NFSU2_TR(0x768e27);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L768e4b;}}
}
B768e29:L768e29:{c.instructions+=1;NFSU2_TR(0x768e29);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768e2a:L768e2a:{c.instructions+=2;NFSU2_TR(0x768e2a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768e2b:{NFSU2_TR(0x768e2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x768e30ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x768bd3u);}goto L768bd3;}
}
B768e30:L768e30:{c.instructions+=4;NFSU2_TR(0x768e30);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B768e32:{NFSU2_TR(0x768e32);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B768e33:{NFSU2_TR(0x768e33);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B768e34:{NFSU2_TR(0x768e34);
if(r1(R+518)){{goto L768e4b;}}
}
B768e36:L768e36:{c.instructions+=3;NFSU2_TR(0x768e36);
s1(0x8b8809,u8(u32(m1(0x8b8809))|u32(u8(0x1ull))));
}
B768e3d:{NFSU2_TR(0x768e3d);
u8 U[8];
__builtin_memmove((U+0),gp(0x8b880c),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+28))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B768e43:{NFSU2_TR(0x768e43);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L768e4b;}}
}
B768e45:L768e45:{c.instructions+=1;NFSU2_TR(0x768e45);
__builtin_memmove(gp(0x8b880c),(R+24),4);
}
B768e4b:L768e4b:{c.instructions+=4;NFSU2_TR(0x768e4b);
__builtin_memmove((R+0),gp(0x8b8808),4);
}
B768e50:{NFSU2_TR(0x768e50);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B768e53:{NFSU2_TR(0x768e53);
w4(R+0,u32(~u32(r4(R+0))));
}
B768e55:{NFSU2_TR(0x768e55);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1ull))));
}
B768e58:L768e58:{c.instructions+=2;NFSU2_TR(0x768e58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B768e59:{NFSU2_TR(0x768e59);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B768e5a:L768e5a:{c.instructions+=4;NFSU2_TR(0x768e5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B768e5d:{NFSU2_TR(0x768e5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(U+4))));
}
B768e60:{NFSU2_TR(0x768e60);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B768e61:{NFSU2_TR(0x768e61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x768e66ull));
TAIL_STATIC(0x76115eu,761);
}
B768e66:L768e66:{c.instructions+=2;NFSU2_TR(0x768e66);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B768e67:{NFSU2_TR(0x768e67);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B768e6a:L768e6a:{c.instructions+=9;NFSU2_TR(0x768e6a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768e6b:{NFSU2_TR(0x768e6b);
__builtin_memmove((R+20),(R+16),4);
}
B768e6d:{NFSU2_TR(0x768e6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x7cull))));
}
B768e70:{NFSU2_TR(0x768e70);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B768e75:{NFSU2_TR(0x768e75);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(U+4))));
}
B768e78:{NFSU2_TR(0x768e78);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B768e7b:{NFSU2_TR(0x768e7b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768e7c:{NFSU2_TR(0x768e7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B768e7f:{NFSU2_TR(0x768e7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x768e84ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x768ae7u);}goto L768ae7;}
}
B768e84:L768e84:{c.instructions+=12;NFSU2_TR(0x768e84);
__builtin_memmove((R+24),(R+0),4);
}
B768e86:{NFSU2_TR(0x768e86);
u8 U[4];
w4(U+0,u32(0x78ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768e88:{NFSU2_TR(0x768e88);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff84ull))));
__builtin_memmove((R+0),(U+0),4);
}
B768e8b:{NFSU2_TR(0x768e8b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768e8c:{NFSU2_TR(0x768e8c);
__builtin_memmove((R+0),gp(0x8b8814),4);
}
B768e91:{NFSU2_TR(0x768e91);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B768e93:{NFSU2_TR(0x768e93);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B768e95:{NFSU2_TR(0x768e95);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffff002ull))));
}
B768e9a:{NFSU2_TR(0x768e9a);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x1001ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x1001ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1001ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B768e9f:{NFSU2_TR(0x768e9f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768ea0:{NFSU2_TR(0x768ea0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768ea1:{NFSU2_TR(0x768ea1);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b8828),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x768ea7ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B768ea7:L768ea7:{c.instructions+=2;NFSU2_TR(0x768ea7);
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
B768ea9:{NFSU2_TR(0x768ea9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L768eb4;}}
}
B768eab:L768eab:{c.instructions+=3;NFSU2_TR(0x768eab);
s4(0x8b8808,u32(u32(m4(0x8b8808))&u32(r4(R+0))));
}
B768eb1:{NFSU2_TR(0x768eb1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B768eb2:{NFSU2_TR(0x768eb2);
{goto L768f2b;}
}
B768eb4:L768eb4:{c.instructions+=4;NFSU2_TR(0x768eb4);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff84ull))));
__builtin_memmove((R+0),(U+0),4);
}
B768eb7:{NFSU2_TR(0x768eb7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768eb8:{NFSU2_TR(0x768eb8);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b8824),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768ebe:{NFSU2_TR(0x768ebe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x768ec3ull));
TAIL_STATIC(0x75dd6fu,75d);
}
B768ec3:L768ec3:{c.instructions+=4;NFSU2_TR(0x768ec3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B768ec5:{NFSU2_TR(0x768ec5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B768ec6:{NFSU2_TR(0x768ec6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B768ec7:{NFSU2_TR(0x768ec7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L768ed5;}}
}
B768ec9:L768ec9:{c.instructions+=2;NFSU2_TR(0x768ec9);
u8 U[8];
__builtin_memmove((U+0),gp(0x8b8814),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B768ecf:{NFSU2_TR(0x768ecf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L768f0b;}}
}
B768ed1:L768ed1:{c.instructions+=2;NFSU2_TR(0x768ed1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768ed3:{NFSU2_TR(0x768ed3);
{goto L768eff;}
}
B768ed5:L768ed5:{c.instructions+=2;NFSU2_TR(0x768ed5);
u8 U[8];
__builtin_memmove((U+0),gp(0x8b8814),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B768edc:{NFSU2_TR(0x768edc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L768f1e;}}
}
B768ede:L768ede:{c.instructions+=3;NFSU2_TR(0x768ede);
__builtin_memmove((R+0),gp(0x8b8820),4);
}
B768ee3:{NFSU2_TR(0x768ee3);
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
B768ee5:{NFSU2_TR(0x768ee5);
if(r1(R+518)){{goto L768f1e;}}
}
B768ee7:L768ee7:{c.instructions+=5;NFSU2_TR(0x768ee7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768ee8:{NFSU2_TR(0x768ee8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff84ull))));
__builtin_memmove((R+0),(U+0),4);
}
B768eeb:{NFSU2_TR(0x768eeb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768eec:{NFSU2_TR(0x768eec);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b8824),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768ef2:{NFSU2_TR(0x768ef2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x768ef7ull));
TAIL_STATIC(0x76d4dau,76d);
}
B768ef7:L768ef7:{c.instructions+=3;NFSU2_TR(0x768ef7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B768efa:{NFSU2_TR(0x768efa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B768efc:{NFSU2_TR(0x768efc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L768f1e;}}
}
B768efe:L768efe:{c.instructions+=1;NFSU2_TR(0x768efe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768eff:L768eff:{c.instructions+=2;NFSU2_TR(0x768eff);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768f00:{NFSU2_TR(0x768f00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x768f05ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x768bd3u);}goto L768bd3;}
}
B768f05:L768f05:{c.instructions+=4;NFSU2_TR(0x768f05);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B768f07:{NFSU2_TR(0x768f07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B768f08:{NFSU2_TR(0x768f08);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B768f09:{NFSU2_TR(0x768f09);
if(r1(R+518)){{goto L768f1e;}}
}
B768f0b:L768f0b:{c.instructions+=3;NFSU2_TR(0x768f0b);
s4(0x8b8808,u32(u32(m4(0x8b8808))|u32(u32(0x4ull))));
}
B768f12:{NFSU2_TR(0x768f12);
__builtin_memmove(gp(0x8b8810),(R+24),4);
}
B768f18:{NFSU2_TR(0x768f18);
__builtin_memmove(gp(0x8b880c),(R+24),4);
}
B768f1e:L768f1e:{c.instructions+=4;NFSU2_TR(0x768f1e);
__builtin_memmove((R+0),gp(0x8b8808),4);
}
B768f23:{NFSU2_TR(0x768f23);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B768f26:{NFSU2_TR(0x768f26);
w4(R+0,u32(~u32(r4(R+0))));
}
B768f28:{NFSU2_TR(0x768f28);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1ull))));
}
B768f2b:L768f2b:{c.instructions+=4;NFSU2_TR(0x768f2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B768f2e:{NFSU2_TR(0x768f2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(U+4))));
}
B768f31:{NFSU2_TR(0x768f31);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B768f32:{NFSU2_TR(0x768f32);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x768f37ull));
TAIL_STATIC(0x76115eu,761);
}
B768f37:L768f37:{c.instructions+=2;NFSU2_TR(0x768f37);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B768f38:{NFSU2_TR(0x768f38);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B768f3b:L768f3b:{c.instructions+=2;NFSU2_TR(0x768f3b);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b881c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768f41:{NFSU2_TR(0x768f41);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x768f46ull));
TAIL_STATIC(0x766bc0u,766);
}
B768f46:L768f46:{c.instructions+=9;NFSU2_TR(0x768f46);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x3ull))));
}
B768f49:{NFSU2_TR(0x768f49);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B768f4b:{NFSU2_TR(0x768f4b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B768f4c:{NFSU2_TR(0x768f4c);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+0))<(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B768f4e:{NFSU2_TR(0x768f4e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768f50:{NFSU2_TR(0x768f50);
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
B768f51:{NFSU2_TR(0x768f51);
u8 U[4];
w4(U+0,u32(0x768b39ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768f56:{NFSU2_TR(0x768f56);
__builtin_memmove(gp(0x8b8818),(R+0),4);
}
B768f5b:{NFSU2_TR(0x768f5b);
u8 U[4];
__builtin_memmove((U+0),gp(0x783090),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x768f61ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B768f61:L768f61:{c.instructions+=2;NFSU2_TR(0x768f61);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(m1(0x8b8808))&u32(u8(0x4ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B768f68:{NFSU2_TR(0x768f68);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L768f71;}}
}
B768f6a:L768f6a:{c.instructions+=1;NFSU2_TR(0x768f6a);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
s4(0x8b8808,u32(u32(m4(0x8b8808))&u32(u32(0x0ull))));
w1(R+519,u8(s32(m4(0x8b8808))<s32(u32(0x0ull))));
w1(R+518,u8((m4(0x8b8808))==(u32(0x0ull))));
w4(U+0,u32(u32(m4(0x8b8808))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B768f71:L768f71:{c.instructions+=1;NFSU2_TR(0x768f71);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B768f72:L768f72:{c.instructions+=2;NFSU2_TR(0x768f72);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b8824),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768f78:{NFSU2_TR(0x768f78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x768f7dull));
TAIL_STATIC(0x766bc0u,766);
}
B768f7d:L768f7d:{c.instructions+=7;NFSU2_TR(0x768f7d);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b881c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768f83:{NFSU2_TR(0x768f83);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x3ull))));
}
B768f86:{NFSU2_TR(0x768f86);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B768f88:{NFSU2_TR(0x768f88);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B768f8a:{NFSU2_TR(0x768f8a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B768f8b:{NFSU2_TR(0x768f8b);
__builtin_memmove(gp(0x8b8814),(R+0),4);
}
B768f90:{NFSU2_TR(0x768f90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x768f95ull));
TAIL_STATIC(0x766bc0u,766);
}
B768f95:L768f95:{c.instructions+=10;NFSU2_TR(0x768f95);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x3ull))));
}
B768f98:{NFSU2_TR(0x768f98);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B768f9a:{NFSU2_TR(0x768f9a);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B768f9c:{NFSU2_TR(0x768f9c);
s4(0x8b880c,u32(u32(m4(0x8b880c))&u32(u32(0x0ull))));
}
B768fa3:{NFSU2_TR(0x768fa3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B768fa4:{NFSU2_TR(0x768fa4);
u8 U[14];
__builtin_memmove((U+6),gp(0x8b8814),4);
w1(R+512,u8((r4(U+6))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x0ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B768fab:{NFSU2_TR(0x768fab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B768fac:{NFSU2_TR(0x768fac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B768fad:{NFSU2_TR(0x768fad);
__builtin_memmove(gp(0x8b8818),(R+0),4);
}
B768fb2:{NFSU2_TR(0x768fb2);
if(r1(R+518)){{goto L768fc0;}}
}
B768fb4:L768fb4:{c.instructions+=2;NFSU2_TR(0x768fb4);
s4(0x8b8820,u32(0x2ull));
}
B768fbe:{NFSU2_TR(0x768fbe);
{goto L768fd0;}
}
B768fc0:L768fc0:{c.instructions+=2;NFSU2_TR(0x768fc0);
__builtin_memmove((R+8),gp(0x8b8824),4);
}
B768fc6:{NFSU2_TR(0x768fc6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x768fcbull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x768b1cu);}goto L768b1c;}
}
B768fcb:L768fcb:{c.instructions+=1;NFSU2_TR(0x768fcb);
__builtin_memmove(gp(0x8b8820),(R+0),4);
}
B768fd0:L768fd0:{c.instructions+=3;NFSU2_TR(0x768fd0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768fd2:{NFSU2_TR(0x768fd2);
u8 U[4];
w4(U+0,u32(0x768c4aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768fd7:{NFSU2_TR(0x768fd7);
u8 U[4];
__builtin_memmove((U+0),gp(0x783090),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x768fddull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B768fdd:L768fdd:{c.instructions+=3;NFSU2_TR(0x768fdd);
__builtin_memmove((R+0),gp(0x8b8808),4);
}
B768fe2:{NFSU2_TR(0x768fe2);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B768fe5:{NFSU2_TR(0x768fe5);
if(r1(R+518)){{goto L768ff0;}}
}
B768fe7:L768fe7:{c.instructions+=2;NFSU2_TR(0x768fe7);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B768fea:{NFSU2_TR(0x768fea);
if(r1(R+518)){{goto L768ff0;}}
}
B768fec:L768fec:{c.instructions+=2;NFSU2_TR(0x768fec);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(u8(0x7ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B768fee:{NFSU2_TR(0x768fee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L768ff7;}}
}
B768ff0:L768ff0:{c.instructions+=1;NFSU2_TR(0x768ff0);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
s4(0x8b8808,u32(u32(m4(0x8b8808))&u32(u32(0x0ull))));
w1(R+519,u8(s32(m4(0x8b8808))<s32(u32(0x0ull))));
w1(R+518,u8((m4(0x8b8808))==(u32(0x0ull))));
w4(U+0,u32(u32(m4(0x8b8808))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B768ff7:L768ff7:{c.instructions+=1;NFSU2_TR(0x768ff7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B768ff8:L768ff8:{c.instructions+=2;NFSU2_TR(0x768ff8);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b8824),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B768ffe:{NFSU2_TR(0x768ffe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x769003ull));
TAIL_STATIC(0x766bc0u,766);
}
XIT:NFSU2_TR_EXIT(0x768,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
