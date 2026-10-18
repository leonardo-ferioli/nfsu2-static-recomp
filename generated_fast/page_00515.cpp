#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_40c(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_479(u8* __restrict R,Cpu& c);
u32 body_4fe(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_500(u8* __restrict R,Cpu& c);
u32 body_501(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_503(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_511(u8* __restrict R,Cpu& c);
u32 body_513(u8* __restrict R,Cpu& c);
u32 body_514(u8* __restrict R,Cpu& c);
u32 body_516(u8* __restrict R,Cpu& c);
u32 body_56c(u8* __restrict R,Cpu& c);
u32 body_577(u8* __restrict R,Cpu& c);
u32 body_579(u8* __restrict R,Cpu& c);
u32 body_5d3(u8* __restrict R,Cpu& c);
u32 body_5ee(u8* __restrict R,Cpu& c);
u32 body_5ef(u8* __restrict R,Cpu& c);
u32 body_5f0(u8* __restrict R,Cpu& c);
u32 body_5f4(u8* __restrict R,Cpu& c);
u32 body_5fb(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x515,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x515,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_515(u8* __restrict R,Cpu& c);
u32 page_515(Cpu& c){return body_515(c.regs.data(),c);}
__attribute__((noinline)) u32 body_515(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x515000:goto L515000;
case 0x515005:c.instructions+=16;goto B515005;
case 0x51500b:c.instructions+=15;goto B51500b;
case 0x515011:c.instructions+=14;goto B515011;
case 0x515017:c.instructions+=13;goto B515017;
case 0x51501d:c.instructions+=12;goto B51501d;
case 0x515022:c.instructions+=11;goto B515022;
case 0x515027:c.instructions+=10;goto B515027;
case 0x51502d:c.instructions+=9;goto B51502d;
case 0x515033:c.instructions+=8;goto B515033;
case 0x515039:c.instructions+=7;goto B515039;
case 0x51503f:c.instructions+=6;goto B51503f;
case 0x515046:c.instructions+=5;goto B515046;
case 0x51504b:c.instructions+=4;goto B51504b;
case 0x51504e:c.instructions+=3;goto B51504e;
case 0x51504f:c.instructions+=2;goto B51504f;
case 0x515051:c.instructions+=1;goto B515051;
case 0x515056:goto L515056;
case 0x515057:c.instructions+=1;goto B515057;
case 0x515060:goto L515060;
case 0x515061:c.instructions+=11;goto B515061;
case 0x515063:c.instructions+=10;goto B515063;
case 0x515064:c.instructions+=9;goto B515064;
case 0x515068:c.instructions+=8;goto B515068;
case 0x51506a:c.instructions+=7;goto B51506a;
case 0x51506d:c.instructions+=6;goto B51506d;
case 0x515070:c.instructions+=5;goto B515070;
case 0x515073:c.instructions+=4;goto B515073;
case 0x515076:c.instructions+=3;goto B515076;
case 0x515079:c.instructions+=2;goto B515079;
case 0x51507b:c.instructions+=1;goto B51507b;
case 0x51507d:goto L51507d;
case 0x51507e:c.instructions+=3;goto B51507e;
case 0x515081:c.instructions+=2;goto B515081;
case 0x515082:c.instructions+=1;goto B515082;
case 0x515087:goto L515087;
case 0x51508a:c.instructions+=2;goto B51508a;
case 0x51508c:c.instructions+=1;goto B51508c;
case 0x51508e:goto L51508e;
case 0x515091:c.instructions+=3;goto B515091;
case 0x515094:c.instructions+=2;goto B515094;
case 0x515095:c.instructions+=1;goto B515095;
case 0x51509a:goto L51509a;
case 0x51509d:c.instructions+=5;goto B51509d;
case 0x51509e:c.instructions+=4;goto B51509e;
case 0x5150a0:c.instructions+=3;goto B5150a0;
case 0x5150a1:c.instructions+=2;goto B5150a1;
case 0x5150a2:c.instructions+=1;goto B5150a2;
case 0x5150a5:goto L5150a5;
case 0x5150a6:c.instructions+=1;goto B5150a6;
case 0x5150ab:goto L5150ab;
case 0x5150ae:c.instructions+=2;goto B5150ae;
case 0x5150b0:c.instructions+=1;goto B5150b0;
case 0x5150b2:goto L5150b2;
case 0x5150b5:c.instructions+=3;goto B5150b5;
case 0x5150b8:c.instructions+=2;goto B5150b8;
case 0x5150b9:c.instructions+=1;goto B5150b9;
case 0x5150be:goto L5150be;
case 0x5150c1:c.instructions+=1;goto B5150c1;
case 0x5150c3:goto L5150c3;
case 0x5150c4:goto L5150c4;
case 0x5150c5:c.instructions+=2;goto B5150c5;
case 0x5150c6:c.instructions+=1;goto B5150c6;
case 0x5150d0:goto L5150d0;
case 0x5150d1:c.instructions+=12;goto B5150d1;
case 0x5150d3:c.instructions+=11;goto B5150d3;
case 0x5150d6:c.instructions+=10;goto B5150d6;
case 0x5150d9:c.instructions+=9;goto B5150d9;
case 0x5150df:c.instructions+=8;goto B5150df;
case 0x5150e0:c.instructions+=7;goto B5150e0;
case 0x5150e2:c.instructions+=6;goto B5150e2;
case 0x5150e5:c.instructions+=5;goto B5150e5;
case 0x5150ef:c.instructions+=4;goto B5150ef;
case 0x5150f3:c.instructions+=3;goto B5150f3;
case 0x5150f5:c.instructions+=2;goto B5150f5;
case 0x5150f6:c.instructions+=1;goto B5150f6;
case 0x5150fb:goto L5150fb;
case 0x5150fc:c.instructions+=1;goto B5150fc;
case 0x515101:goto L515101;
case 0x515104:c.instructions+=2;goto B515104;
case 0x515106:c.instructions+=1;goto B515106;
case 0x515108:goto L515108;
case 0x51510b:c.instructions+=15;goto B51510b;
case 0x51510e:c.instructions+=14;goto B51510e;
case 0x515111:c.instructions+=13;goto B515111;
case 0x515113:c.instructions+=12;goto B515113;
case 0x51511a:c.instructions+=11;goto B51511a;
case 0x51511c:c.instructions+=10;goto B51511c;
case 0x515120:c.instructions+=9;goto B515120;
case 0x515124:c.instructions+=8;goto B515124;
case 0x51512a:c.instructions+=7;goto B51512a;
case 0x51512e:c.instructions+=6;goto B51512e;
case 0x515132:c.instructions+=5;goto B515132;
case 0x515133:c.instructions+=4;goto B515133;
case 0x515135:c.instructions+=3;goto B515135;
case 0x515136:c.instructions+=2;goto B515136;
case 0x515139:c.instructions+=1;goto B515139;
case 0x51513e:goto L51513e;
case 0x515144:c.instructions+=3;goto B515144;
case 0x515146:c.instructions+=2;goto B515146;
case 0x515148:c.instructions+=1;goto B515148;
case 0x51514d:goto L51514d;
case 0x51514e:c.instructions+=3;goto B51514e;
case 0x515150:c.instructions+=2;goto B515150;
case 0x515151:c.instructions+=1;goto B515151;
case 0x515160:goto L515160;
case 0x515161:c.instructions+=21;goto B515161;
case 0x515163:c.instructions+=20;goto B515163;
case 0x515166:c.instructions+=19;goto B515166;
case 0x51516b:c.instructions+=18;goto B51516b;
case 0x51516d:c.instructions+=17;goto B51516d;
case 0x51516f:c.instructions+=16;goto B51516f;
case 0x515171:c.instructions+=15;goto B515171;
case 0x515172:c.instructions+=14;goto B515172;
case 0x515173:c.instructions+=13;goto B515173;
case 0x515179:c.instructions+=12;goto B515179;
case 0x51517b:c.instructions+=11;goto B51517b;
case 0x51517e:c.instructions+=10;goto B51517e;
case 0x515180:c.instructions+=9;goto B515180;
case 0x515182:c.instructions+=8;goto B515182;
case 0x515184:c.instructions+=7;goto B515184;
case 0x515188:c.instructions+=6;goto B515188;
case 0x515189:c.instructions+=5;goto B515189;
case 0x51518c:c.instructions+=4;goto B51518c;
case 0x515191:c.instructions+=3;goto B515191;
case 0x515196:c.instructions+=2;goto B515196;
case 0x515199:c.instructions+=1;goto B515199;
case 0x51519b:goto L51519b;
case 0x5151a2:goto L5151a2;
case 0x5151a7:c.instructions+=1;goto B5151a7;
case 0x5151a9:goto L5151a9;
case 0x5151ae:c.instructions+=2;goto B5151ae;
case 0x5151b3:c.instructions+=1;goto B5151b3;
case 0x5151b5:goto L5151b5;
case 0x5151b7:c.instructions+=2;goto B5151b7;
case 0x5151bc:c.instructions+=1;goto B5151bc;
case 0x5151be:goto L5151be;
case 0x5151c3:goto L5151c3;
case 0x5151c8:goto L5151c8;
case 0x5151c9:c.instructions+=1;goto B5151c9;
case 0x5151ce:goto L5151ce;
case 0x5151cf:c.instructions+=3;goto B5151cf;
case 0x5151d0:c.instructions+=2;goto B5151d0;
case 0x5151d1:c.instructions+=1;goto B5151d1;
case 0x5151d6:goto L5151d6;
case 0x5151d9:c.instructions+=5;goto B5151d9;
case 0x5151dc:c.instructions+=4;goto B5151dc;
case 0x5151de:c.instructions+=3;goto B5151de;
case 0x5151e4:c.instructions+=2;goto B5151e4;
case 0x5151ea:c.instructions+=1;goto B5151ea;
case 0x5151ef:goto L5151ef;
case 0x5151f1:c.instructions+=5;goto B5151f1;
case 0x5151f4:c.instructions+=4;goto B5151f4;
case 0x5151f5:c.instructions+=3;goto B5151f5;
case 0x5151f8:c.instructions+=2;goto B5151f8;
case 0x5151fb:c.instructions+=1;goto B5151fb;
case 0x515200:goto L515200;
case 0x515202:c.instructions+=1;goto B515202;
case 0x515207:goto L515207;
case 0x515209:c.instructions+=3;goto B515209;
case 0x51520a:c.instructions+=2;goto B51520a;
case 0x51520b:c.instructions+=1;goto B51520b;
case 0x51520d:goto L51520d;
case 0x515212:c.instructions+=1;goto B515212;
case 0x515217:goto L515217;
case 0x51521a:c.instructions+=7;goto B51521a;
case 0x51521d:c.instructions+=6;goto B51521d;
case 0x51521e:c.instructions+=5;goto B51521e;
case 0x51521f:c.instructions+=4;goto B51521f;
case 0x515222:c.instructions+=3;goto B515222;
case 0x515223:c.instructions+=2;goto B515223;
case 0x515224:c.instructions+=1;goto B515224;
case 0x515229:goto L515229;
case 0x51522c:c.instructions+=3;goto B51522c;
case 0x51522e:c.instructions+=2;goto B51522e;
case 0x51522f:c.instructions+=1;goto B51522f;
case 0x515250:goto L515250;
case 0x515251:c.instructions+=10;goto B515251;
case 0x515253:c.instructions+=9;goto B515253;
case 0x515258:c.instructions+=8;goto B515258;
case 0x51525e:c.instructions+=7;goto B51525e;
case 0x515260:c.instructions+=6;goto B515260;
case 0x515262:c.instructions+=5;goto B515262;
case 0x515264:c.instructions+=4;goto B515264;
case 0x515268:c.instructions+=3;goto B515268;
case 0x515269:c.instructions+=2;goto B515269;
case 0x51526c:c.instructions+=1;goto B51526c;
case 0x515272:goto L515272;
case 0x515279:goto L515279;
case 0x51527e:c.instructions+=1;goto B51527e;
case 0x515280:goto L515280;
case 0x515285:c.instructions+=1;goto B515285;
case 0x51528a:goto L51528a;
case 0x51528c:c.instructions+=1;goto B51528c;
case 0x51528e:goto L51528e;
case 0x515293:c.instructions+=1;goto B515293;
case 0x515298:goto L515298;
case 0x51529b:c.instructions+=6;goto B51529b;
case 0x51529c:c.instructions+=5;goto B51529c;
case 0x51529f:c.instructions+=4;goto B51529f;
case 0x5152a4:c.instructions+=3;goto B5152a4;
case 0x5152a5:c.instructions+=2;goto B5152a5;
case 0x5152a6:c.instructions+=1;goto B5152a6;
case 0x5152ab:goto L5152ab;
case 0x5152ae:c.instructions+=2;goto B5152ae;
case 0x5152af:c.instructions+=1;goto B5152af;
case 0x5152b2:goto L5152b2;
case 0x5152b7:c.instructions+=1;goto B5152b7;
case 0x5152bc:goto L5152bc;
case 0x5152be:c.instructions+=1;goto B5152be;
case 0x5152c0:goto L5152c0;
case 0x5152c5:c.instructions+=1;goto B5152c5;
case 0x5152ca:goto L5152ca;
case 0x5152cd:c.instructions+=6;goto B5152cd;
case 0x5152d0:c.instructions+=5;goto B5152d0;
case 0x5152d1:c.instructions+=4;goto B5152d1;
case 0x5152d6:c.instructions+=3;goto B5152d6;
case 0x5152d7:c.instructions+=2;goto B5152d7;
case 0x5152d8:c.instructions+=1;goto B5152d8;
case 0x5152dd:goto L5152dd;
case 0x5152e0:c.instructions+=2;goto B5152e0;
case 0x5152e1:c.instructions+=1;goto B5152e1;
case 0x5152e4:goto L5152e4;
case 0x5152e9:goto L5152e9;
case 0x5152ee:goto L5152ee;
case 0x5152f0:c.instructions+=1;goto B5152f0;
case 0x5152f2:goto L5152f2;
case 0x5152f7:c.instructions+=1;goto B5152f7;
case 0x5152fc:goto L5152fc;
case 0x5152ff:c.instructions+=6;goto B5152ff;
case 0x515300:c.instructions+=5;goto B515300;
case 0x515303:c.instructions+=4;goto B515303;
case 0x515308:c.instructions+=3;goto B515308;
case 0x515309:c.instructions+=2;goto B515309;
case 0x51530a:c.instructions+=1;goto B51530a;
case 0x51530f:goto L51530f;
case 0x515312:goto L515312;
case 0x515313:c.instructions+=1;goto B515313;
case 0x515330:goto L515330;
case 0x515335:c.instructions+=1;goto B515335;
case 0x51533a:goto L51533a;
case 0x51533c:c.instructions+=1;goto B51533c;
case 0x51533e:goto L51533e;
case 0x515343:c.instructions+=1;goto B515343;
case 0x515348:goto L515348;
case 0x51534c:c.instructions+=5;goto B51534c;
case 0x51534d:c.instructions+=4;goto B51534d;
case 0x515351:c.instructions+=3;goto B515351;
case 0x515352:c.instructions+=2;goto B515352;
case 0x515353:c.instructions+=1;goto B515353;
case 0x515358:goto L515358;
case 0x51535b:c.instructions+=1;goto B51535b;
case 0x515360:goto L515360;
case 0x515363:c.instructions+=3;goto B515363;
case 0x515364:c.instructions+=2;goto B515364;
case 0x515366:c.instructions+=1;goto B515366;
case 0x515368:goto L515368;
case 0x51536a:c.instructions+=2;goto B51536a;
case 0x51536b:c.instructions+=1;goto B51536b;
case 0x51536c:goto L51536c;
case 0x51536e:c.instructions+=1;goto B51536e;
case 0x515370:goto L515370;
case 0x515373:c.instructions+=1;goto B515373;
case 0x515375:goto L515375;
case 0x51537a:c.instructions+=1;goto B51537a;
case 0x51537f:goto L51537f;
case 0x515381:c.instructions+=1;goto B515381;
case 0x515383:goto L515383;
case 0x515385:c.instructions+=2;goto B515385;
case 0x515386:c.instructions+=1;goto B515386;
case 0x515387:goto L515387;
case 0x515389:c.instructions+=1;goto B515389;
case 0x51538b:goto L51538b;
case 0x51538e:c.instructions+=1;goto B51538e;
case 0x515390:goto L515390;
case 0x515396:c.instructions+=4;goto B515396;
case 0x515399:c.instructions+=3;goto B515399;
case 0x51539d:c.instructions+=2;goto B51539d;
case 0x51539f:c.instructions+=1;goto B51539f;
case 0x5153a1:goto L5153a1;
case 0x5153a2:c.instructions+=1;goto B5153a2;
case 0x5153a7:goto L5153a7;
case 0x5153ab:c.instructions+=2;goto B5153ab;
case 0x5153ae:c.instructions+=1;goto B5153ae;
case 0x5153b0:goto L5153b0;
case 0x5153b7:goto L5153b7;
case 0x5153ba:c.instructions+=2;goto B5153ba;
case 0x5153bb:c.instructions+=1;goto B5153bb;
case 0x5153c0:goto L5153c0;
case 0x5153c3:c.instructions+=3;goto B5153c3;
case 0x5153c4:c.instructions+=2;goto B5153c4;
case 0x5153c9:c.instructions+=1;goto B5153c9;
case 0x5153ce:goto L5153ce;
case 0x5153cf:c.instructions+=1;goto B5153cf;
case 0x5153d0:goto L5153d0;
case 0x5153d3:c.instructions+=5;goto B5153d3;
case 0x5153d5:c.instructions+=4;goto B5153d5;
case 0x5153d8:c.instructions+=3;goto B5153d8;
case 0x5153de:c.instructions+=2;goto B5153de;
case 0x5153e4:c.instructions+=1;goto B5153e4;
case 0x5153e9:goto L5153e9;
case 0x5153ef:c.instructions+=6;goto B5153ef;
case 0x5153f1:c.instructions+=5;goto B5153f1;
case 0x5153f3:c.instructions+=4;goto B5153f3;
case 0x5153f6:c.instructions+=3;goto B5153f6;
case 0x5153f8:c.instructions+=2;goto B5153f8;
case 0x5153f9:c.instructions+=1;goto B5153f9;
case 0x5153fa:goto L5153fa;
case 0x5153fd:c.instructions+=5;goto B5153fd;
case 0x5153ff:c.instructions+=4;goto B5153ff;
case 0x515402:c.instructions+=3;goto B515402;
case 0x515408:c.instructions+=2;goto B515408;
case 0x51540e:c.instructions+=1;goto B51540e;
case 0x515413:goto L515413;
case 0x515419:c.instructions+=6;goto B515419;
case 0x51541b:c.instructions+=5;goto B51541b;
case 0x51541d:c.instructions+=4;goto B51541d;
case 0x515420:c.instructions+=3;goto B515420;
case 0x515422:c.instructions+=2;goto B515422;
case 0x515423:c.instructions+=1;goto B515423;
case 0x515424:goto L515424;
case 0x515427:c.instructions+=5;goto B515427;
case 0x515429:c.instructions+=4;goto B515429;
case 0x51542c:c.instructions+=3;goto B51542c;
case 0x515432:c.instructions+=2;goto B515432;
case 0x515438:c.instructions+=1;goto B515438;
case 0x51543d:goto L51543d;
case 0x515443:c.instructions+=6;goto B515443;
case 0x515445:c.instructions+=5;goto B515445;
case 0x515447:c.instructions+=4;goto B515447;
case 0x51544a:c.instructions+=3;goto B51544a;
case 0x51544c:c.instructions+=2;goto B51544c;
case 0x51544d:c.instructions+=1;goto B51544d;
case 0x515470:goto L515470;
case 0x515473:c.instructions+=6;goto B515473;
case 0x515479:c.instructions+=5;goto B515479;
case 0x51547b:c.instructions+=4;goto B51547b;
case 0x51547d:c.instructions+=3;goto B51547d;
case 0x515481:c.instructions+=2;goto B515481;
case 0x515485:c.instructions+=1;goto B515485;
case 0x515487:goto L515487;
case 0x515488:c.instructions+=5;goto B515488;
case 0x515489:c.instructions+=4;goto B515489;
case 0x51548a:c.instructions+=3;goto B51548a;
case 0x51548c:c.instructions+=2;goto B51548c;
case 0x51548d:c.instructions+=1;goto B51548d;
case 0x515491:goto L515491;
case 0x515496:c.instructions+=3;goto B515496;
case 0x515498:c.instructions+=2;goto B515498;
case 0x51549b:c.instructions+=1;goto B51549b;
case 0x5154a0:goto L5154a0;
case 0x5154a3:c.instructions+=2;goto B5154a3;
case 0x5154a5:c.instructions+=1;goto B5154a5;
case 0x5154a7:goto L5154a7;
case 0x5154a9:c.instructions+=1;goto B5154a9;
case 0x5154ab:goto L5154ab;
case 0x5154ad:c.instructions+=1;goto B5154ad;
case 0x5154af:goto L5154af;
case 0x5154b1:c.instructions+=1;goto B5154b1;
case 0x5154b3:goto L5154b3;
case 0x5154b6:c.instructions+=3;goto B5154b6;
case 0x5154b8:c.instructions+=2;goto B5154b8;
case 0x5154ba:c.instructions+=1;goto B5154ba;
case 0x5154bf:goto L5154bf;
case 0x5154c2:c.instructions+=2;goto B5154c2;
case 0x5154c4:c.instructions+=1;goto B5154c4;
case 0x5154c6:goto L5154c6;
case 0x5154ca:goto L5154ca;
case 0x5154cd:c.instructions+=2;goto B5154cd;
case 0x5154ce:c.instructions+=1;goto B5154ce;
case 0x5154d0:goto L5154d0;
case 0x5154d4:c.instructions+=8;goto B5154d4;
case 0x5154d8:c.instructions+=7;goto B5154d8;
case 0x5154de:c.instructions+=6;goto B5154de;
case 0x5154df:c.instructions+=5;goto B5154df;
case 0x5154e2:c.instructions+=4;goto B5154e2;
case 0x5154e4:c.instructions+=3;goto B5154e4;
case 0x5154e8:c.instructions+=2;goto B5154e8;
case 0x5154ec:c.instructions+=1;goto B5154ec;
case 0x5154ee:goto L5154ee;
case 0x5154f2:c.instructions+=4;goto B5154f2;
case 0x5154f3:c.instructions+=3;goto B5154f3;
case 0x5154f4:c.instructions+=2;goto B5154f4;
case 0x5154f5:c.instructions+=1;goto B5154f5;
case 0x5154f6:goto L5154f6;
case 0x5154f9:c.instructions+=1;goto B5154f9;
case 0x515500:goto L515500;
case 0x515501:c.instructions+=10;goto B515501;
case 0x515503:c.instructions+=9;goto B515503;
case 0x515506:c.instructions+=8;goto B515506;
case 0x515507:c.instructions+=7;goto B515507;
case 0x515508:c.instructions+=6;goto B515508;
case 0x51550b:c.instructions+=5;goto B51550b;
case 0x51550d:c.instructions+=4;goto B51550d;
case 0x51550f:c.instructions+=3;goto B51550f;
case 0x515510:c.instructions+=2;goto B515510;
case 0x515513:c.instructions+=1;goto B515513;
case 0x515515:goto L515515;
case 0x515518:c.instructions+=8;goto B515518;
case 0x51551d:c.instructions+=7;goto B51551d;
case 0x515520:c.instructions+=6;goto B515520;
case 0x515522:c.instructions+=5;goto B515522;
case 0x515524:c.instructions+=4;goto B515524;
case 0x515525:c.instructions+=3;goto B515525;
case 0x51552a:c.instructions+=2;goto B51552a;
case 0x51552c:c.instructions+=1;goto B51552c;
case 0x515531:goto L515531;
case 0x515533:c.instructions+=1;goto B515533;
case 0x515535:goto L515535;
case 0x515536:c.instructions+=3;goto B515536;
case 0x515537:c.instructions+=2;goto B515537;
case 0x51553d:c.instructions+=1;goto B51553d;
case 0x515542:goto L515542;
case 0x515544:goto L515544;
case 0x515548:c.instructions+=1;goto B515548;
case 0x51554a:goto L51554a;
case 0x51554b:c.instructions+=2;goto B51554b;
case 0x51554c:c.instructions+=1;goto B51554c;
case 0x515551:goto L515551;
case 0x515554:c.instructions+=2;goto B515554;
case 0x515557:c.instructions+=1;goto B515557;
case 0x515559:goto L515559;
case 0x51555d:c.instructions+=6;goto B51555d;
case 0x515560:c.instructions+=5;goto B515560;
case 0x515563:c.instructions+=4;goto B515563;
case 0x515565:c.instructions+=3;goto B515565;
case 0x515566:c.instructions+=2;goto B515566;
case 0x51556b:c.instructions+=1;goto B51556b;
case 0x515570:goto L515570;
case 0x515571:c.instructions+=6;goto B515571;
case 0x515573:c.instructions+=5;goto B515573;
case 0x515574:c.instructions+=4;goto B515574;
case 0x515576:c.instructions+=3;goto B515576;
case 0x515577:c.instructions+=2;goto B515577;
case 0x515578:c.instructions+=1;goto B515578;
case 0x515579:goto L515579;
case 0x51557c:c.instructions+=5;goto B51557c;
case 0x51557f:c.instructions+=4;goto B51557f;
case 0x515582:c.instructions+=3;goto B515582;
case 0x515585:c.instructions+=2;goto B515585;
case 0x515586:c.instructions+=1;goto B515586;
case 0x51558b:goto L51558b;
case 0x51558e:c.instructions+=1;goto B51558e;
case 0x515590:goto L515590;
case 0x515591:c.instructions+=5;goto B515591;
case 0x515592:c.instructions+=4;goto B515592;
case 0x515594:c.instructions+=3;goto B515594;
case 0x515595:c.instructions+=2;goto B515595;
case 0x515596:c.instructions+=1;goto B515596;
case 0x5155a0:goto L5155a0;
case 0x5155a1:c.instructions+=9;goto B5155a1;
case 0x5155a3:c.instructions+=8;goto B5155a3;
case 0x5155a6:c.instructions+=7;goto B5155a6;
case 0x5155a7:c.instructions+=6;goto B5155a7;
case 0x5155a8:c.instructions+=5;goto B5155a8;
case 0x5155ab:c.instructions+=4;goto B5155ab;
case 0x5155ad:c.instructions+=3;goto B5155ad;
case 0x5155af:c.instructions+=2;goto B5155af;
case 0x5155b0:c.instructions+=1;goto B5155b0;
case 0x5155b2:goto L5155b2;
case 0x5155b7:c.instructions+=3;goto B5155b7;
case 0x5155b8:c.instructions+=2;goto B5155b8;
case 0x5155bd:c.instructions+=1;goto B5155bd;
case 0x5155c2:goto L5155c2;
case 0x5155c4:c.instructions+=2;goto B5155c4;
case 0x5155c6:c.instructions+=1;goto B5155c6;
case 0x5155c8:goto L5155c8;
case 0x5155ca:c.instructions+=2;goto B5155ca;
case 0x5155d0:c.instructions+=1;goto B5155d0;
case 0x5155d2:goto L5155d2;
case 0x5155d3:c.instructions+=2;goto B5155d3;
case 0x5155d6:c.instructions+=1;goto B5155d6;
case 0x5155d7:goto L5155d7;
case 0x5155d9:c.instructions+=9;goto B5155d9;
case 0x5155da:c.instructions+=8;goto B5155da;
case 0x5155dd:c.instructions+=7;goto B5155dd;
case 0x5155df:c.instructions+=6;goto B5155df;
case 0x5155e4:c.instructions+=5;goto B5155e4;
case 0x5155e6:c.instructions+=4;goto B5155e6;
case 0x5155e9:c.instructions+=3;goto B5155e9;
case 0x5155f1:c.instructions+=2;goto B5155f1;
case 0x5155f3:c.instructions+=1;goto B5155f3;
case 0x5155f6:goto L5155f6;
case 0x5155fa:c.instructions+=1;goto B5155fa;
case 0x5155fc:goto L5155fc;
case 0x5155fd:c.instructions+=1;goto B5155fd;
case 0x515602:goto L515602;
case 0x515604:c.instructions+=3;goto B515604;
case 0x515606:c.instructions+=2;goto B515606;
case 0x515607:c.instructions+=1;goto B515607;
case 0x51560c:goto L51560c;
case 0x51560f:c.instructions+=4;goto B51560f;
case 0x515612:c.instructions+=3;goto B515612;
case 0x515613:c.instructions+=2;goto B515613;
case 0x515615:c.instructions+=1;goto B515615;
case 0x51561a:goto L51561a;
case 0x51561d:c.instructions+=1;goto B51561d;
case 0x51561f:goto L51561f;
case 0x515620:c.instructions+=5;goto B515620;
case 0x515621:c.instructions+=4;goto B515621;
case 0x515623:c.instructions+=3;goto B515623;
case 0x515624:c.instructions+=2;goto B515624;
case 0x515625:c.instructions+=1;goto B515625;
case 0x515630:goto L515630;
case 0x515631:c.instructions+=8;goto B515631;
case 0x515633:c.instructions+=7;goto B515633;
case 0x515636:c.instructions+=6;goto B515636;
case 0x515639:c.instructions+=5;goto B515639;
case 0x51563a:c.instructions+=4;goto B51563a;
case 0x51563c:c.instructions+=3;goto B51563c;
case 0x51563e:c.instructions+=2;goto B51563e;
case 0x51563f:c.instructions+=1;goto B51563f;
case 0x515645:goto L515645;
case 0x51564a:c.instructions+=3;goto B51564a;
case 0x51564b:c.instructions+=2;goto B51564b;
case 0x515650:c.instructions+=1;goto B515650;
case 0x515655:goto L515655;
case 0x515657:c.instructions+=2;goto B515657;
case 0x51565a:c.instructions+=1;goto B51565a;
case 0x51565c:goto L51565c;
case 0x51565f:c.instructions+=5;goto B51565f;
case 0x515662:c.instructions+=4;goto B515662;
case 0x515663:c.instructions+=3;goto B515663;
case 0x515664:c.instructions+=2;goto B515664;
case 0x515667:c.instructions+=1;goto B515667;
case 0x51566c:goto L51566c;
case 0x51566f:c.instructions+=4;goto B51566f;
case 0x515672:c.instructions+=3;goto B515672;
case 0x515674:c.instructions+=2;goto B515674;
case 0x515676:c.instructions+=1;goto B515676;
case 0x515678:goto L515678;
case 0x515679:c.instructions+=2;goto B515679;
case 0x51567c:c.instructions+=1;goto B51567c;
case 0x515680:goto L515680;
case 0x515682:c.instructions+=3;goto B515682;
case 0x515684:c.instructions+=2;goto B515684;
case 0x51568a:c.instructions+=1;goto B51568a;
case 0x51568c:goto L51568c;
case 0x51568d:c.instructions+=2;goto B51568d;
case 0x515690:c.instructions+=1;goto B515690;
case 0x515691:goto L515691;
case 0x515696:c.instructions+=11;goto B515696;
case 0x515698:c.instructions+=10;goto B515698;
case 0x51569b:c.instructions+=9;goto B51569b;
case 0x51569e:c.instructions+=8;goto B51569e;
case 0x51569f:c.instructions+=7;goto B51569f;
case 0x5156a2:c.instructions+=6;goto B5156a2;
case 0x5156a4:c.instructions+=5;goto B5156a4;
case 0x5156a7:c.instructions+=4;goto B5156a7;
case 0x5156af:c.instructions+=3;goto B5156af;
case 0x5156b2:c.instructions+=2;goto B5156b2;
case 0x5156b4:c.instructions+=1;goto B5156b4;
case 0x5156b6:goto L5156b6;
case 0x5156b7:c.instructions+=3;goto B5156b7;
case 0x5156ba:c.instructions+=2;goto B5156ba;
case 0x5156bc:c.instructions+=1;goto B5156bc;
case 0x5156be:goto L5156be;
case 0x5156c0:goto L5156c0;
case 0x5156c4:goto L5156c4;
case 0x5156c5:goto L5156c5;
case 0x5156c8:goto L5156c8;
case 0x5156cb:c.instructions+=2;goto B5156cb;
case 0x5156ce:c.instructions+=1;goto B5156ce;
case 0x5156d0:goto L5156d0;
case 0x5156d3:c.instructions+=2;goto B5156d3;
case 0x5156d4:c.instructions+=1;goto B5156d4;
case 0x5156d9:goto L5156d9;
case 0x5156dc:c.instructions+=2;goto B5156dc;
case 0x5156dd:c.instructions+=1;goto B5156dd;
case 0x5156e2:goto L5156e2;
case 0x5156e5:c.instructions+=1;goto B5156e5;
case 0x5156e7:goto L5156e7;
case 0x5156e8:c.instructions+=5;goto B5156e8;
case 0x5156ea:c.instructions+=4;goto B5156ea;
case 0x5156eb:c.instructions+=3;goto B5156eb;
case 0x5156ed:c.instructions+=2;goto B5156ed;
case 0x5156ee:c.instructions+=1;goto B5156ee;
case 0x5156f0:goto L5156f0;
case 0x5156f1:c.instructions+=4;goto B5156f1;
case 0x5156f3:c.instructions+=3;goto B5156f3;
case 0x5156f8:c.instructions+=2;goto B5156f8;
case 0x5156fa:c.instructions+=1;goto B5156fa;
case 0x5156fc:goto L5156fc;
case 0x5156fe:c.instructions+=2;goto B5156fe;
case 0x5156ff:c.instructions+=1;goto B5156ff;
case 0x515700:goto L515700;
case 0x515703:c.instructions+=8;goto B515703;
case 0x515704:c.instructions+=7;goto B515704;
case 0x515705:c.instructions+=6;goto B515705;
case 0x515708:c.instructions+=5;goto B515708;
case 0x51570a:c.instructions+=4;goto B51570a;
case 0x51570c:c.instructions+=3;goto B51570c;
case 0x51570d:c.instructions+=2;goto B51570d;
case 0x515710:c.instructions+=1;goto B515710;
case 0x515712:goto L515712;
case 0x515713:c.instructions+=3;goto B515713;
case 0x515714:c.instructions+=2;goto B515714;
case 0x515719:c.instructions+=1;goto B515719;
case 0x51571e:goto L51571e;
case 0x515720:c.instructions+=1;goto B515720;
case 0x515723:goto L515723;
case 0x515725:c.instructions+=1;goto B515725;
case 0x515727:goto L515727;
case 0x51572a:goto L51572a;
case 0x51572f:c.instructions+=1;goto B51572f;
case 0x515731:goto L515731;
case 0x515732:c.instructions+=3;goto B515732;
case 0x515733:c.instructions+=2;goto B515733;
case 0x515738:c.instructions+=1;goto B515738;
case 0x51573d:goto L51573d;
case 0x51573f:goto L51573f;
case 0x515740:c.instructions+=5;goto B515740;
case 0x515741:c.instructions+=4;goto B515741;
case 0x515743:c.instructions+=3;goto B515743;
case 0x515744:c.instructions+=2;goto B515744;
case 0x515745:c.instructions+=1;goto B515745;
case 0x515750:goto L515750;
case 0x515755:c.instructions+=52;goto B515755;
case 0x515758:c.instructions+=51;goto B515758;
case 0x51575b:c.instructions+=50;goto B51575b;
case 0x51575d:c.instructions+=49;goto B51575d;
case 0x51575f:c.instructions+=48;goto B51575f;
case 0x515762:c.instructions+=47;goto B515762;
case 0x515765:c.instructions+=46;goto B515765;
case 0x515768:c.instructions+=45;goto B515768;
case 0x51576b:c.instructions+=44;goto B51576b;
case 0x51576d:c.instructions+=43;goto B51576d;
case 0x515770:c.instructions+=42;goto B515770;
case 0x515773:c.instructions+=41;goto B515773;
case 0x515777:c.instructions+=40;goto B515777;
case 0x51577a:c.instructions+=39;goto B51577a;
case 0x51577e:c.instructions+=38;goto B51577e;
case 0x515781:c.instructions+=37;goto B515781;
case 0x515784:c.instructions+=36;goto B515784;
case 0x515788:c.instructions+=35;goto B515788;
case 0x51578b:c.instructions+=34;goto B51578b;
case 0x51578f:c.instructions+=33;goto B51578f;
case 0x515792:c.instructions+=32;goto B515792;
case 0x515795:c.instructions+=31;goto B515795;
case 0x515799:c.instructions+=30;goto B515799;
case 0x51579c:c.instructions+=29;goto B51579c;
case 0x5157a0:c.instructions+=28;goto B5157a0;
case 0x5157a3:c.instructions+=27;goto B5157a3;
case 0x5157a6:c.instructions+=26;goto B5157a6;
case 0x5157aa:c.instructions+=25;goto B5157aa;
case 0x5157ad:c.instructions+=24;goto B5157ad;
case 0x5157b1:c.instructions+=23;goto B5157b1;
case 0x5157b4:c.instructions+=22;goto B5157b4;
case 0x5157b7:c.instructions+=21;goto B5157b7;
case 0x5157bb:c.instructions+=20;goto B5157bb;
case 0x5157be:c.instructions+=19;goto B5157be;
case 0x5157c2:c.instructions+=18;goto B5157c2;
case 0x5157c5:c.instructions+=17;goto B5157c5;
case 0x5157c8:c.instructions+=16;goto B5157c8;
case 0x5157cc:c.instructions+=15;goto B5157cc;
case 0x5157cf:c.instructions+=14;goto B5157cf;
case 0x5157d3:c.instructions+=13;goto B5157d3;
case 0x5157d6:c.instructions+=12;goto B5157d6;
case 0x5157d9:c.instructions+=11;goto B5157d9;
case 0x5157dd:c.instructions+=10;goto B5157dd;
case 0x5157e0:c.instructions+=9;goto B5157e0;
case 0x5157e4:c.instructions+=8;goto B5157e4;
case 0x5157e7:c.instructions+=7;goto B5157e7;
case 0x5157ea:c.instructions+=6;goto B5157ea;
case 0x5157ee:c.instructions+=5;goto B5157ee;
case 0x5157f1:c.instructions+=4;goto B5157f1;
case 0x5157f5:c.instructions+=3;goto B5157f5;
case 0x5157f8:c.instructions+=2;goto B5157f8;
case 0x5157fb:c.instructions+=1;goto B5157fb;
case 0x515800:goto L515800;
case 0x515803:c.instructions+=10;goto B515803;
case 0x515804:c.instructions+=9;goto B515804;
case 0x515805:c.instructions+=8;goto B515805;
case 0x515807:c.instructions+=7;goto B515807;
case 0x515808:c.instructions+=6;goto B515808;
case 0x515809:c.instructions+=5;goto B515809;
case 0x515810:c.instructions+=4;goto B515810;
case 0x515813:c.instructions+=3;goto B515813;
case 0x515818:c.instructions+=2;goto B515818;
case 0x51581d:c.instructions+=1;goto B51581d;
case 0x515820:goto L515820;
case 0x515824:c.instructions+=9;goto B515824;
case 0x515827:c.instructions+=8;goto B515827;
case 0x51582a:c.instructions+=7;goto B51582a;
case 0x51582e:c.instructions+=6;goto B51582e;
case 0x515832:c.instructions+=5;goto B515832;
case 0x515836:c.instructions+=4;goto B515836;
case 0x51583a:c.instructions+=3;goto B51583a;
case 0x51583d:c.instructions+=2;goto B51583d;
case 0x51583e:c.instructions+=1;goto B51583e;
case 0x515840:goto L515840;
case 0x515845:c.instructions+=18;goto B515845;
case 0x515849:c.instructions+=17;goto B515849;
case 0x51584d:c.instructions+=16;goto B51584d;
case 0x515850:c.instructions+=15;goto B515850;
case 0x515852:c.instructions+=14;goto B515852;
case 0x515858:c.instructions+=13;goto B515858;
case 0x51585c:c.instructions+=12;goto B51585c;
case 0x515860:c.instructions+=11;goto B515860;
case 0x515869:c.instructions+=10;goto B515869;
case 0x515870:c.instructions+=9;goto B515870;
case 0x515874:c.instructions+=8;goto B515874;
case 0x51587b:c.instructions+=7;goto B51587b;
case 0x515884:c.instructions+=6;goto B515884;
case 0x51588b:c.instructions+=5;goto B51588b;
case 0x515894:c.instructions+=4;goto B515894;
case 0x515898:c.instructions+=3;goto B515898;
case 0x5158a2:c.instructions+=2;goto B5158a2;
case 0x5158ac:c.instructions+=1;goto B5158ac;
case 0x5158b0:goto L5158b0;
case 0x5158b2:c.instructions+=1;goto B5158b2;
case 0x5158b4:goto L5158b4;
case 0x5158b7:c.instructions+=1;goto B5158b7;
case 0x5158b9:goto L5158b9;
case 0x5158bb:c.instructions+=3;goto B5158bb;
case 0x5158c1:c.instructions+=2;goto B5158c1;
case 0x5158c7:c.instructions+=1;goto B5158c7;
case 0x5158c9:goto L5158c9;
case 0x5158cb:goto L5158cb;
case 0x5158d1:c.instructions+=5;goto B5158d1;
case 0x5158d5:c.instructions+=4;goto B5158d5;
case 0x5158db:c.instructions+=3;goto B5158db;
case 0x5158dd:c.instructions+=2;goto B5158dd;
case 0x5158df:c.instructions+=1;goto B5158df;
case 0x5158e1:goto L5158e1;
case 0x5158e3:goto L5158e3;
case 0x5158e5:c.instructions+=2;goto B5158e5;
case 0x5158e7:c.instructions+=1;goto B5158e7;
case 0x5158ea:goto L5158ea;
case 0x5158ee:c.instructions+=1;goto B5158ee;
case 0x5158f0:goto L5158f0;
case 0x5158f6:c.instructions+=4;goto B5158f6;
case 0x5158f7:c.instructions+=3;goto B5158f7;
case 0x5158fa:c.instructions+=2;goto B5158fa;
case 0x5158fc:c.instructions+=1;goto B5158fc;
case 0x5158fe:goto L5158fe;
case 0x515902:goto L515902;
case 0x515904:goto L515904;
case 0x515907:c.instructions+=1;goto B515907;
case 0x515909:goto L515909;
case 0x51590f:c.instructions+=4;goto B51590f;
case 0x515915:c.instructions+=3;goto B515915;
case 0x515917:c.instructions+=2;goto B515917;
case 0x515919:c.instructions+=1;goto B515919;
case 0x51591b:goto L51591b;
case 0x515920:goto L515920;
case 0x515922:c.instructions+=2;goto B515922;
case 0x515924:c.instructions+=1;goto B515924;
case 0x515927:goto L515927;
case 0x515929:c.instructions+=1;goto B515929;
case 0x51592b:goto L51592b;
case 0x515930:c.instructions+=4;goto B515930;
case 0x515931:c.instructions+=3;goto B515931;
case 0x515934:c.instructions+=2;goto B515934;
case 0x515936:c.instructions+=1;goto B515936;
case 0x515938:goto L515938;
case 0x51593c:goto L51593c;
case 0x515944:goto L515944;
case 0x515945:c.instructions+=3;goto B515945;
case 0x515948:c.instructions+=2;goto B515948;
case 0x51594c:c.instructions+=1;goto B51594c;
case 0x515952:goto L515952;
case 0x515953:c.instructions+=6;goto B515953;
case 0x515954:c.instructions+=5;goto B515954;
case 0x51595a:c.instructions+=4;goto B51595a;
case 0x51595b:c.instructions+=3;goto B51595b;
case 0x51595c:c.instructions+=2;goto B51595c;
case 0x51595f:c.instructions+=1;goto B51595f;
case 0x515964:goto L515964;
case 0x515968:c.instructions+=4;goto B515968;
case 0x51596b:c.instructions+=3;goto B51596b;
case 0x51596d:c.instructions+=2;goto B51596d;
case 0x51596f:c.instructions+=1;goto B51596f;
case 0x515971:goto L515971;
case 0x515975:c.instructions+=2;goto B515975;
case 0x515978:c.instructions+=1;goto B515978;
case 0x51597e:goto L51597e;
case 0x515980:c.instructions+=1;goto B515980;
case 0x515982:goto L515982;
case 0x515985:c.instructions+=2;goto B515985;
case 0x515989:c.instructions+=1;goto B515989;
case 0x515990:goto L515990;
case 0x515991:c.instructions+=18;goto B515991;
case 0x515992:c.instructions+=17;goto B515992;
case 0x515996:c.instructions+=16;goto B515996;
case 0x515998:c.instructions+=15;goto B515998;
case 0x515999:c.instructions+=14;goto B515999;
case 0x51599a:c.instructions+=13;goto B51599a;
case 0x51599c:c.instructions+=12;goto B51599c;
case 0x51599e:c.instructions+=11;goto B51599e;
case 0x5159a1:c.instructions+=10;goto B5159a1;
case 0x5159a4:c.instructions+=9;goto B5159a4;
case 0x5159a6:c.instructions+=8;goto B5159a6;
case 0x5159a9:c.instructions+=7;goto B5159a9;
case 0x5159ac:c.instructions+=6;goto B5159ac;
case 0x5159ad:c.instructions+=5;goto B5159ad;
case 0x5159b1:c.instructions+=4;goto B5159b1;
case 0x5159b4:c.instructions+=3;goto B5159b4;
case 0x5159b8:c.instructions+=2;goto B5159b8;
case 0x5159bc:c.instructions+=1;goto B5159bc;
case 0x5159be:goto L5159be;
case 0x5159c1:c.instructions+=3;goto B5159c1;
case 0x5159c3:c.instructions+=2;goto B5159c3;
case 0x5159ca:c.instructions+=1;goto B5159ca;
case 0x5159cf:goto L5159cf;
case 0x5159d4:goto L5159d4;
case 0x5159d7:c.instructions+=10;goto B5159d7;
case 0x5159d9:c.instructions+=9;goto B5159d9;
case 0x5159e0:c.instructions+=8;goto B5159e0;
case 0x5159e3:c.instructions+=7;goto B5159e3;
case 0x5159e5:c.instructions+=6;goto B5159e5;
case 0x5159e8:c.instructions+=5;goto B5159e8;
case 0x5159ec:c.instructions+=4;goto B5159ec;
case 0x5159ee:c.instructions+=3;goto B5159ee;
case 0x5159f1:c.instructions+=2;goto B5159f1;
case 0x5159f3:c.instructions+=1;goto B5159f3;
case 0x5159f5:goto L5159f5;
case 0x5159f9:c.instructions+=1;goto B5159f9;
case 0x5159fb:goto L5159fb;
case 0x515a01:goto L515a01;
case 0x515a05:c.instructions+=2;goto B515a05;
case 0x515a07:c.instructions+=1;goto B515a07;
case 0x515a09:goto L515a09;
case 0x515a0b:c.instructions+=1;goto B515a0b;
case 0x515a10:goto L515a10;
case 0x515a15:goto L515a15;
case 0x515a1b:c.instructions+=2;goto B515a1b;
case 0x515a1f:c.instructions+=1;goto B515a1f;
case 0x515a25:goto L515a25;
case 0x515a2b:c.instructions+=23;goto B515a2b;
case 0x515a31:c.instructions+=22;goto B515a31;
case 0x515a37:c.instructions+=21;goto B515a37;
case 0x515a3b:c.instructions+=20;goto B515a3b;
case 0x515a3d:c.instructions+=19;goto B515a3d;
case 0x515a3e:c.instructions+=18;goto B515a3e;
case 0x515a44:c.instructions+=17;goto B515a44;
case 0x515a46:c.instructions+=16;goto B515a46;
case 0x515a49:c.instructions+=15;goto B515a49;
case 0x515a4d:c.instructions+=14;goto B515a4d;
case 0x515a50:c.instructions+=13;goto B515a50;
case 0x515a51:c.instructions+=12;goto B515a51;
case 0x515a53:c.instructions+=11;goto B515a53;
case 0x515a59:c.instructions+=10;goto B515a59;
case 0x515a5f:c.instructions+=9;goto B515a5f;
case 0x515a63:c.instructions+=8;goto B515a63;
case 0x515a65:c.instructions+=7;goto B515a65;
case 0x515a6b:c.instructions+=6;goto B515a6b;
case 0x515a6f:c.instructions+=5;goto B515a6f;
case 0x515a70:c.instructions+=4;goto B515a70;
case 0x515a71:c.instructions+=3;goto B515a71;
case 0x515a72:c.instructions+=2;goto B515a72;
case 0x515a74:c.instructions+=1;goto B515a74;
case 0x515a79:goto L515a79;
case 0x515a7c:c.instructions+=3;goto B515a7c;
case 0x515a7d:c.instructions+=2;goto B515a7d;
case 0x515a83:c.instructions+=1;goto B515a83;
case 0x515a88:goto L515a88;
case 0x515a8b:c.instructions+=2;goto B515a8b;
case 0x515a8d:c.instructions+=1;goto B515a8d;
case 0x515a92:goto L515a92;
case 0x515a93:c.instructions+=5;goto B515a93;
case 0x515a94:c.instructions+=4;goto B515a94;
case 0x515a95:c.instructions+=3;goto B515a95;
case 0x515a96:c.instructions+=2;goto B515a96;
case 0x515a97:c.instructions+=1;goto B515a97;
case 0x515aa0:goto L515aa0;
case 0x515aa4:c.instructions+=11;goto B515aa4;
case 0x515aa5:c.instructions+=10;goto B515aa5;
case 0x515aa6:c.instructions+=9;goto B515aa6;
case 0x515aa7:c.instructions+=8;goto B515aa7;
case 0x515aa9:c.instructions+=7;goto B515aa9;
case 0x515aab:c.instructions+=6;goto B515aab;
case 0x515aad:c.instructions+=5;goto B515aad;
case 0x515aae:c.instructions+=4;goto B515aae;
case 0x515ab0:c.instructions+=3;goto B515ab0;
case 0x515ab5:c.instructions+=2;goto B515ab5;
case 0x515aba:c.instructions+=1;goto B515aba;
case 0x515abc:goto L515abc;
case 0x515ac1:goto L515ac1;
case 0x515ac3:goto L515ac3;
case 0x515ac5:goto L515ac5;
case 0x515aca:goto L515aca;
case 0x515acc:c.instructions+=2;goto B515acc;
case 0x515ace:c.instructions+=1;goto B515ace;
case 0x515ad0:goto L515ad0;
case 0x515ad5:c.instructions+=1;goto B515ad5;
case 0x515ada:goto L515ada;
case 0x515adc:goto L515adc;
case 0x515add:c.instructions+=4;goto B515add;
case 0x515adf:c.instructions+=3;goto B515adf;
case 0x515ae1:c.instructions+=2;goto B515ae1;
case 0x515ae6:c.instructions+=1;goto B515ae6;
case 0x515ae7:goto L515ae7;
case 0x515ae9:goto L515ae9;
case 0x515aee:goto L515aee;
case 0x515af1:c.instructions+=6;goto B515af1;
case 0x515af7:c.instructions+=5;goto B515af7;
case 0x515afb:c.instructions+=4;goto B515afb;
case 0x515b02:c.instructions+=3;goto B515b02;
case 0x515b09:c.instructions+=2;goto B515b09;
case 0x515b10:c.instructions+=1;goto B515b10;
case 0x515b15:goto L515b15;
case 0x515b1f:c.instructions+=3;goto B515b1f;
case 0x515b25:c.instructions+=2;goto B515b25;
case 0x515b27:c.instructions+=1;goto B515b27;
case 0x515b29:goto L515b29;
case 0x515b2e:goto L515b2e;
case 0x515b31:goto L515b31;
case 0x515b36:c.instructions+=3;goto B515b36;
case 0x515b38:c.instructions+=2;goto B515b38;
case 0x515b3e:c.instructions+=1;goto B515b3e;
case 0x515b44:goto L515b44;
case 0x515b46:goto L515b46;
case 0x515b4b:c.instructions+=1;goto B515b4b;
case 0x515b51:goto L515b51;
case 0x515b53:c.instructions+=4;goto B515b53;
case 0x515b56:c.instructions+=3;goto B515b56;
case 0x515b5b:c.instructions+=2;goto B515b5b;
case 0x515b5c:c.instructions+=1;goto B515b5c;
case 0x515b61:goto L515b61;
case 0x515b64:c.instructions+=2;goto B515b64;
case 0x515b66:c.instructions+=1;goto B515b66;
case 0x515b68:goto L515b68;
case 0x515b6d:c.instructions+=1;goto B515b6d;
case 0x515b6f:goto L515b6f;
case 0x515b71:c.instructions+=5;goto B515b71;
case 0x515b74:c.instructions+=4;goto B515b74;
case 0x515b7a:c.instructions+=3;goto B515b7a;
case 0x515b7f:c.instructions+=2;goto B515b7f;
case 0x515b80:c.instructions+=1;goto B515b80;
case 0x515b85:goto L515b85;
case 0x515b88:c.instructions+=2;goto B515b88;
case 0x515b8a:c.instructions+=1;goto B515b8a;
case 0x515b8c:goto L515b8c;
case 0x515b91:c.instructions+=1;goto B515b91;
case 0x515b93:goto L515b93;
case 0x515b95:c.instructions+=5;goto B515b95;
case 0x515b98:c.instructions+=4;goto B515b98;
case 0x515b9e:c.instructions+=3;goto B515b9e;
case 0x515ba3:c.instructions+=2;goto B515ba3;
case 0x515ba4:c.instructions+=1;goto B515ba4;
case 0x515ba9:goto L515ba9;
case 0x515bac:c.instructions+=4;goto B515bac;
case 0x515bae:c.instructions+=3;goto B515bae;
case 0x515bb0:c.instructions+=2;goto B515bb0;
case 0x515bb3:c.instructions+=1;goto B515bb3;
case 0x515bb6:goto L515bb6;
case 0x515bb9:c.instructions+=5;goto B515bb9;
case 0x515bbc:c.instructions+=4;goto B515bbc;
case 0x515bbd:c.instructions+=3;goto B515bbd;
case 0x515bc0:c.instructions+=2;goto B515bc0;
case 0x515bc6:c.instructions+=1;goto B515bc6;
case 0x515bc8:goto L515bc8;
case 0x515bce:c.instructions+=1;goto B515bce;
case 0x515bd3:goto L515bd3;
case 0x515bd5:c.instructions+=2;goto B515bd5;
case 0x515bdb:c.instructions+=1;goto B515bdb;
case 0x515be0:goto L515be0;
case 0x515be2:goto L515be2;
case 0x515be3:c.instructions+=5;goto B515be3;
case 0x515be9:c.instructions+=4;goto B515be9;
case 0x515bea:c.instructions+=3;goto B515bea;
case 0x515beb:c.instructions+=2;goto B515beb;
case 0x515bec:c.instructions+=1;goto B515bec;
case 0x515bf0:goto L515bf0;
case 0x515bf1:c.instructions+=10;goto B515bf1;
case 0x515bf2:c.instructions+=9;goto B515bf2;
case 0x515bf3:c.instructions+=8;goto B515bf3;
case 0x515bf7:c.instructions+=7;goto B515bf7;
case 0x515bf9:c.instructions+=6;goto B515bf9;
case 0x515bfc:c.instructions+=5;goto B515bfc;
case 0x515bff:c.instructions+=4;goto B515bff;
case 0x515c01:c.instructions+=3;goto B515c01;
case 0x515c03:c.instructions+=2;goto B515c03;
case 0x515c0b:c.instructions+=1;goto B515c0b;
case 0x515c0d:goto L515c0d;
case 0x515c0f:c.instructions+=1;goto B515c0f;
case 0x515c11:goto L515c11;
case 0x515c14:c.instructions+=2;goto B515c14;
case 0x515c16:c.instructions+=1;goto B515c16;
case 0x515c18:goto L515c18;
case 0x515c1c:c.instructions+=2;goto B515c1c;
case 0x515c1e:c.instructions+=1;goto B515c1e;
case 0x515c20:goto L515c20;
case 0x515c23:c.instructions+=2;goto B515c23;
case 0x515c25:c.instructions+=1;goto B515c25;
case 0x515c27:goto L515c27;
case 0x515c2a:c.instructions+=3;goto B515c2a;
case 0x515c2d:c.instructions+=2;goto B515c2d;
case 0x515c2f:c.instructions+=1;goto B515c2f;
case 0x515c31:goto L515c31;
case 0x515c34:c.instructions+=2;goto B515c34;
case 0x515c36:c.instructions+=1;goto B515c36;
case 0x515c38:goto L515c38;
case 0x515c3b:c.instructions+=3;goto B515c3b;
case 0x515c3e:c.instructions+=2;goto B515c3e;
case 0x515c40:c.instructions+=1;goto B515c40;
case 0x515c42:goto L515c42;
case 0x515c45:c.instructions+=2;goto B515c45;
case 0x515c47:c.instructions+=1;goto B515c47;
case 0x515c49:goto L515c49;
case 0x515c4c:c.instructions+=3;goto B515c4c;
case 0x515c4f:c.instructions+=2;goto B515c4f;
case 0x515c51:c.instructions+=1;goto B515c51;
case 0x515c53:goto L515c53;
case 0x515c56:c.instructions+=2;goto B515c56;
case 0x515c58:c.instructions+=1;goto B515c58;
case 0x515c5a:goto L515c5a;
case 0x515c5f:c.instructions+=1;goto B515c5f;
case 0x515c62:goto L515c62;
case 0x515c64:goto L515c64;
case 0x515c66:goto L515c66;
case 0x515c69:c.instructions+=2;goto B515c69;
case 0x515c6b:c.instructions+=1;goto B515c6b;
case 0x515c6d:goto L515c6d;
case 0x515c73:c.instructions+=1;goto B515c73;
case 0x515c78:goto L515c78;
case 0x515c7a:goto L515c7a;
case 0x515c7b:c.instructions+=3;goto B515c7b;
case 0x515c7c:c.instructions+=2;goto B515c7c;
case 0x515c7d:c.instructions+=1;goto B515c7d;
case 0x515c80:goto L515c80;
case 0x515c82:c.instructions+=4;goto B515c82;
case 0x515c83:c.instructions+=3;goto B515c83;
case 0x515c84:c.instructions+=2;goto B515c84;
case 0x515c85:c.instructions+=1;goto B515c85;
case 0x515c90:goto L515c90;
case 0x515c94:c.instructions+=9;goto B515c94;
case 0x515c95:c.instructions+=8;goto B515c95;
case 0x515c96:c.instructions+=7;goto B515c96;
case 0x515c99:c.instructions+=6;goto B515c99;
case 0x515c9c:c.instructions+=5;goto B515c9c;
case 0x515c9f:c.instructions+=4;goto B515c9f;
case 0x515ca1:c.instructions+=3;goto B515ca1;
case 0x515ca2:c.instructions+=2;goto B515ca2;
case 0x515ca4:c.instructions+=1;goto B515ca4;
case 0x515ca6:goto L515ca6;
case 0x515ca7:c.instructions+=4;goto B515ca7;
case 0x515ca9:c.instructions+=3;goto B515ca9;
case 0x515cac:c.instructions+=2;goto B515cac;
case 0x515cae:c.instructions+=1;goto B515cae;
case 0x515caf:goto L515caf;
case 0x515cb2:c.instructions+=2;goto B515cb2;
case 0x515cb4:c.instructions+=1;goto B515cb4;
case 0x515cb6:goto L515cb6;
case 0x515cb8:c.instructions+=2;goto B515cb8;
case 0x515cbb:c.instructions+=1;goto B515cbb;
case 0x515cbd:goto L515cbd;
case 0x515cbf:c.instructions+=3;goto B515cbf;
case 0x515cc2:c.instructions+=2;goto B515cc2;
case 0x515cc4:c.instructions+=1;goto B515cc4;
case 0x515cc6:goto L515cc6;
case 0x515cc8:c.instructions+=2;goto B515cc8;
case 0x515ccb:c.instructions+=1;goto B515ccb;
case 0x515ccd:goto L515ccd;
case 0x515cd0:c.instructions+=2;goto B515cd0;
case 0x515cd2:c.instructions+=1;goto B515cd2;
case 0x515cd4:goto L515cd4;
case 0x515cd9:c.instructions+=1;goto B515cd9;
case 0x515cdc:goto L515cdc;
case 0x515cde:goto L515cde;
case 0x515ce0:c.instructions+=3;goto B515ce0;
case 0x515ce3:c.instructions+=2;goto B515ce3;
case 0x515ce5:c.instructions+=1;goto B515ce5;
case 0x515ce7:goto L515ce7;
case 0x515cec:c.instructions+=1;goto B515cec;
case 0x515cf2:goto L515cf2;
case 0x515cf4:goto L515cf4;
case 0x515cf5:c.instructions+=3;goto B515cf5;
case 0x515cf6:c.instructions+=2;goto B515cf6;
case 0x515cf7:c.instructions+=1;goto B515cf7;
case 0x515d00:goto L515d00;
case 0x515d01:c.instructions+=7;goto B515d01;
case 0x515d03:c.instructions+=6;goto B515d03;
case 0x515d04:c.instructions+=5;goto B515d04;
case 0x515d05:c.instructions+=4;goto B515d05;
case 0x515d08:c.instructions+=3;goto B515d08;
case 0x515d0a:c.instructions+=2;goto B515d0a;
case 0x515d0c:c.instructions+=1;goto B515d0c;
case 0x515d0e:goto L515d0e;
case 0x515d11:c.instructions+=1;goto B515d11;
case 0x515d13:goto L515d13;
case 0x515d15:c.instructions+=3;goto B515d15;
case 0x515d1b:c.instructions+=2;goto B515d1b;
case 0x515d22:c.instructions+=1;goto B515d22;
case 0x515d24:goto L515d24;
case 0x515d26:goto L515d26;
case 0x515d2d:c.instructions+=1;goto B515d2d;
case 0x515d2f:goto L515d2f;
case 0x515d34:c.instructions+=1;goto B515d34;
case 0x515d36:goto L515d36;
case 0x515d3d:goto L515d3d;
case 0x515d3e:c.instructions+=1;goto B515d3e;
case 0x515d43:goto L515d43;
case 0x515d45:c.instructions+=2;goto B515d45;
case 0x515d47:c.instructions+=1;goto B515d47;
case 0x515d49:goto L515d49;
case 0x515d4b:c.instructions+=2;goto B515d4b;
case 0x515d4d:c.instructions+=1;goto B515d4d;
case 0x515d50:goto L515d50;
case 0x515d53:c.instructions+=7;goto B515d53;
case 0x515d56:c.instructions+=6;goto B515d56;
case 0x515d58:c.instructions+=5;goto B515d58;
case 0x515d59:c.instructions+=4;goto B515d59;
case 0x515d5a:c.instructions+=3;goto B515d5a;
case 0x515d5b:c.instructions+=2;goto B515d5b;
case 0x515d5d:c.instructions+=1;goto B515d5d;
case 0x515d60:goto L515d60;
case 0x515d61:c.instructions+=3;goto B515d61;
case 0x515d62:c.instructions+=2;goto B515d62;
case 0x515d63:c.instructions+=1;goto B515d63;
case 0x515d70:goto L515d70;
case 0x515d71:c.instructions+=9;goto B515d71;
case 0x515d73:c.instructions+=8;goto B515d73;
case 0x515d74:c.instructions+=7;goto B515d74;
case 0x515d75:c.instructions+=6;goto B515d75;
case 0x515d7b:c.instructions+=5;goto B515d7b;
case 0x515d7c:c.instructions+=4;goto B515d7c;
case 0x515d82:c.instructions+=3;goto B515d82;
case 0x515d84:c.instructions+=2;goto B515d84;
case 0x515d89:c.instructions+=1;goto B515d89;
case 0x515d8b:goto L515d8b;
case 0x515d8d:goto L515d8d;
case 0x515d8f:c.instructions+=1;goto B515d8f;
case 0x515d94:goto L515d94;
case 0x515d9a:c.instructions+=6;goto B515d9a;
case 0x515d9b:c.instructions+=5;goto B515d9b;
case 0x515d9c:c.instructions+=4;goto B515d9c;
case 0x515d9d:c.instructions+=3;goto B515d9d;
case 0x515da3:c.instructions+=2;goto B515da3;
case 0x515da4:c.instructions+=1;goto B515da4;
case 0x515db0:goto L515db0;
case 0x515db1:c.instructions+=7;goto B515db1;
case 0x515db2:c.instructions+=6;goto B515db2;
case 0x515db6:c.instructions+=5;goto B515db6;
case 0x515db7:c.instructions+=4;goto B515db7;
case 0x515db9:c.instructions+=3;goto B515db9;
case 0x515dba:c.instructions+=2;goto B515dba;
case 0x515dbc:c.instructions+=1;goto B515dbc;
case 0x515dc1:goto L515dc1;
case 0x515dc4:c.instructions+=5;goto B515dc4;
case 0x515dc8:c.instructions+=4;goto B515dc8;
case 0x515dcb:c.instructions+=3;goto B515dcb;
case 0x515dd1:c.instructions+=2;goto B515dd1;
case 0x515dd3:c.instructions+=1;goto B515dd3;
case 0x515dd5:goto L515dd5;
case 0x515dd9:c.instructions+=2;goto B515dd9;
case 0x515ddb:c.instructions+=1;goto B515ddb;
case 0x515ddd:goto L515ddd;
case 0x515de4:c.instructions+=1;goto B515de4;
case 0x515de6:goto L515de6;
case 0x515dea:c.instructions+=3;goto B515dea;
case 0x515deb:c.instructions+=2;goto B515deb;
case 0x515df0:c.instructions+=1;goto B515df0;
case 0x515df5:goto L515df5;
case 0x515df7:c.instructions+=2;goto B515df7;
case 0x515df9:c.instructions+=1;goto B515df9;
case 0x515dfb:goto L515dfb;
case 0x515dfd:c.instructions+=1;goto B515dfd;
case 0x515e02:goto L515e02;
case 0x515e04:c.instructions+=1;goto B515e04;
case 0x515e06:goto L515e06;
case 0x515e09:c.instructions+=3;goto B515e09;
case 0x515e0a:c.instructions+=2;goto B515e0a;
case 0x515e0c:c.instructions+=1;goto B515e0c;
case 0x515e11:goto L515e11;
case 0x515e12:c.instructions+=4;goto B515e12;
case 0x515e13:c.instructions+=3;goto B515e13;
case 0x515e14:c.instructions+=2;goto B515e14;
case 0x515e15:c.instructions+=1;goto B515e15;
case 0x515e18:goto L515e18;
case 0x515e1c:c.instructions+=10;goto B515e1c;
case 0x515e1e:c.instructions+=9;goto B515e1e;
case 0x515e21:c.instructions+=8;goto B515e21;
case 0x515e25:c.instructions+=7;goto B515e25;
case 0x515e28:c.instructions+=6;goto B515e28;
case 0x515e2c:c.instructions+=5;goto B515e2c;
case 0x515e2f:c.instructions+=4;goto B515e2f;
case 0x515e35:c.instructions+=3;goto B515e35;
case 0x515e37:c.instructions+=2;goto B515e37;
case 0x515e3a:c.instructions+=1;goto B515e3a;
case 0x515e3f:goto L515e3f;
case 0x515e44:goto L515e44;
case 0x515e4a:c.instructions+=38;goto B515e4a;
case 0x515e4e:c.instructions+=37;goto B515e4e;
case 0x515e54:c.instructions+=36;goto B515e54;
case 0x515e56:c.instructions+=35;goto B515e56;
case 0x515e59:c.instructions+=34;goto B515e59;
case 0x515e5f:c.instructions+=33;goto B515e5f;
case 0x515e62:c.instructions+=32;goto B515e62;
case 0x515e68:c.instructions+=31;goto B515e68;
case 0x515e6e:c.instructions+=30;goto B515e6e;
case 0x515e74:c.instructions+=29;goto B515e74;
case 0x515e7a:c.instructions+=28;goto B515e7a;
case 0x515e80:c.instructions+=27;goto B515e80;
case 0x515e86:c.instructions+=26;goto B515e86;
case 0x515e8c:c.instructions+=25;goto B515e8c;
case 0x515e92:c.instructions+=24;goto B515e92;
case 0x515e98:c.instructions+=23;goto B515e98;
case 0x515e9e:c.instructions+=22;goto B515e9e;
case 0x515ea4:c.instructions+=21;goto B515ea4;
case 0x515eaa:c.instructions+=20;goto B515eaa;
case 0x515eb0:c.instructions+=19;goto B515eb0;
case 0x515eb6:c.instructions+=18;goto B515eb6;
case 0x515ebc:c.instructions+=17;goto B515ebc;
case 0x515ec2:c.instructions+=16;goto B515ec2;
case 0x515ec8:c.instructions+=15;goto B515ec8;
case 0x515ece:c.instructions+=14;goto B515ece;
case 0x515ed4:c.instructions+=13;goto B515ed4;
case 0x515eda:c.instructions+=12;goto B515eda;
case 0x515ee0:c.instructions+=11;goto B515ee0;
case 0x515ee6:c.instructions+=10;goto B515ee6;
case 0x515eec:c.instructions+=9;goto B515eec;
case 0x515ef2:c.instructions+=8;goto B515ef2;
case 0x515ef8:c.instructions+=7;goto B515ef8;
case 0x515efe:c.instructions+=6;goto B515efe;
case 0x515f04:c.instructions+=5;goto B515f04;
case 0x515f0a:c.instructions+=4;goto B515f0a;
case 0x515f10:c.instructions+=3;goto B515f10;
case 0x515f16:c.instructions+=2;goto B515f16;
case 0x515f19:c.instructions+=1;goto B515f19;
case 0x515f1b:goto L515f1b;
case 0x515f1d:c.instructions+=1;goto B515f1d;
case 0x515f22:goto L515f22;
case 0x515f24:c.instructions+=2;goto B515f24;
case 0x515f27:c.instructions+=1;goto B515f27;
case 0x515f29:goto L515f29;
case 0x515f2f:c.instructions+=1;goto B515f2f;
case 0x515f32:goto L515f32;
case 0x515f36:c.instructions+=1;goto B515f36;
case 0x515f3c:goto L515f3c;
case 0x515f42:c.instructions+=2;goto B515f42;
case 0x515f44:c.instructions+=1;goto B515f44;
case 0x515f4a:goto L515f4a;
case 0x515f4c:c.instructions+=2;goto B515f4c;
case 0x515f4e:c.instructions+=1;goto B515f4e;
case 0x515f53:goto L515f53;
case 0x515f59:c.instructions+=6;goto B515f59;
case 0x515f5c:c.instructions+=5;goto B515f5c;
case 0x515f62:c.instructions+=4;goto B515f62;
case 0x515f68:c.instructions+=3;goto B515f68;
case 0x515f6a:c.instructions+=2;goto B515f6a;
case 0x515f6d:c.instructions+=1;goto B515f6d;
case 0x515f6f:goto L515f6f;
case 0x515f71:c.instructions+=1;goto B515f71;
case 0x515f77:goto L515f77;
case 0x515f7b:c.instructions+=6;goto B515f7b;
case 0x515f81:c.instructions+=5;goto B515f81;
case 0x515f85:c.instructions+=4;goto B515f85;
case 0x515f88:c.instructions+=3;goto B515f88;
case 0x515f8e:c.instructions+=2;goto B515f8e;
case 0x515f90:c.instructions+=1;goto B515f90;
case 0x515f92:goto L515f92;
case 0x515f95:c.instructions+=1;goto B515f95;
case 0x515f97:goto L515f97;
case 0x515f9d:goto L515f9d;
case 0x515fa3:c.instructions+=3;goto B515fa3;
case 0x515fa9:c.instructions+=2;goto B515fa9;
case 0x515fab:c.instructions+=1;goto B515fab;
case 0x515fad:goto L515fad;
case 0x515fb0:c.instructions+=3;goto B515fb0;
case 0x515fb2:c.instructions+=2;goto B515fb2;
case 0x515fb8:c.instructions+=1;goto B515fb8;
case 0x515fba:goto L515fba;
case 0x515fc0:c.instructions+=3;goto B515fc0;
case 0x515fc2:c.instructions+=2;goto B515fc2;
case 0x515fc8:c.instructions+=1;goto B515fc8;
case 0x515fca:goto L515fca;
case 0x515fcc:goto L515fcc;
case 0x515fd2:c.instructions+=4;goto B515fd2;
case 0x515fd8:c.instructions+=3;goto B515fd8;
case 0x515fde:c.instructions+=2;goto B515fde;
case 0x515fe4:c.instructions+=1;goto B515fe4;
case 0x515feb:goto L515feb;
case 0x515ff1:c.instructions+=4;goto B515ff1;
case 0x515ff7:c.instructions+=3;goto B515ff7;
case 0x515ffd:c.instructions+=2;goto B515ffd;
case 0x515fff:c.instructions+=1;goto B515fff;
default:missing_instruction(c.pc);}
B515000:L515000:{c.instructions+=17;NFSU2_TR(0x515000);
__builtin_memmove((R+0),gp(0x863440),4);
}
B515005:{NFSU2_TR(0x515005);
__builtin_memmove((R+4),gp(0x86345c),4);
}
B51500b:{NFSU2_TR(0x51500b);
__builtin_memmove((R+8),gp(0x863464),4);
}
B515011:{NFSU2_TR(0x515011);
__builtin_memmove(gp(0x863448),(R+4),4);
}
B515017:{NFSU2_TR(0x515017);
__builtin_memmove((R+4),gp(0x863460),4);
}
B51501d:{NFSU2_TR(0x51501d);
__builtin_memmove(gp(0x863444),(R+0),4);
}
B515022:{NFSU2_TR(0x515022);
__builtin_memmove((R+0),gp(0x863468),4);
}
B515027:{NFSU2_TR(0x515027);
__builtin_memmove(gp(0x86344c),(R+8),4);
}
B51502d:{NFSU2_TR(0x51502d);
__builtin_memmove((R+8),gp(0x8900ac),4);
}
B515033:{NFSU2_TR(0x515033);
__builtin_memmove(gp(0x863454),(R+4),4);
}
B515039:{NFSU2_TR(0x515039);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B51503f:{NFSU2_TR(0x51503f);
s1(0x861e78,u8(0x1ull));
}
B515046:{NFSU2_TR(0x515046);
__builtin_memmove(gp(0x863450),(R+0),4);
}
B51504b:{NFSU2_TR(0x51504b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51504e:{NFSU2_TR(0x51504e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51504f:{NFSU2_TR(0x51504f);
u8 U[4];
w4(U+0,u32(0x11ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515051:{NFSU2_TR(0x515051);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x515056ull));
TAIL_STATIC(0x5f41e0u,5f4);
}
B515056:L515056:{c.instructions+=2;NFSU2_TR(0x515056);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B515057:{NFSU2_TR(0x515057);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B515060:L515060:{c.instructions+=12;NFSU2_TR(0x515060);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515061:{NFSU2_TR(0x515061);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B515063:{NFSU2_TR(0x515063);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515064:{NFSU2_TR(0x515064);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B515068:{NFSU2_TR(0x515068);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+24)),r4(U+0));
}
B51506a:{NFSU2_TR(0x51506a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51506d:{NFSU2_TR(0x51506d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B515070:{NFSU2_TR(0x515070);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B515073:{NFSU2_TR(0x515073);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B515076:{NFSU2_TR(0x515076);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B515079:{NFSU2_TR(0x515079);
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
B51507b:{NFSU2_TR(0x51507b);
if(r1(R+518)){{goto L5150c4;}}
}
B51507d:L51507d:{c.instructions+=4;NFSU2_TR(0x51507d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51507e:{NFSU2_TR(0x51507e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B515081:{NFSU2_TR(0x515081);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515082:{NFSU2_TR(0x515082);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x515087ull));
TAIL_STATIC(0x4ffe20u,4ff);
}
B515087:L515087:{c.instructions+=3;NFSU2_TR(0x515087);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B51508a:{NFSU2_TR(0x51508a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51508c:{NFSU2_TR(0x51508c);
if(r1(R+518)){{goto L5150a5;}}
}
B51508e:L51508e:{c.instructions+=4;NFSU2_TR(0x51508e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B515091:{NFSU2_TR(0x515091);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B515094:{NFSU2_TR(0x515094);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515095:{NFSU2_TR(0x515095);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51509aull));
TAIL_STATIC(0x4ffc50u,4ff);
}
B51509a:L51509a:{c.instructions+=6;NFSU2_TR(0x51509a);
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
B51509d:{NFSU2_TR(0x51509d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51509e:{NFSU2_TR(0x51509e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5150a0:{NFSU2_TR(0x5150a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5150a1:{NFSU2_TR(0x5150a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5150a2:{NFSU2_TR(0x5150a2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5150a5:L5150a5:{c.instructions+=2;NFSU2_TR(0x5150a5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5150a6:{NFSU2_TR(0x5150a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5150abull));
TAIL_STATIC(0x4fff80u,4ff);
}
B5150ab:L5150ab:{c.instructions+=3;NFSU2_TR(0x5150ab);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5150ae:{NFSU2_TR(0x5150ae);
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
B5150b0:{NFSU2_TR(0x5150b0);
if(r1(R+518)){{goto L5150c3;}}
}
B5150b2:L5150b2:{c.instructions+=4;NFSU2_TR(0x5150b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5150b5:{NFSU2_TR(0x5150b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5150b8:{NFSU2_TR(0x5150b8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5150b9:{NFSU2_TR(0x5150b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5150beull));
TAIL_STATIC(0x4ffc50u,4ff);
}
B5150be:L5150be:{c.instructions+=2;NFSU2_TR(0x5150be);
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
B5150c1:{NFSU2_TR(0x5150c1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5150c3:L5150c3:{c.instructions+=1;NFSU2_TR(0x5150c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5150c4:L5150c4:{c.instructions+=3;NFSU2_TR(0x5150c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5150c5:{NFSU2_TR(0x5150c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5150c6:{NFSU2_TR(0x5150c6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5150d0:L5150d0:{c.instructions+=13;NFSU2_TR(0x5150d0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5150d1:{NFSU2_TR(0x5150d1);
__builtin_memmove((R+20),(R+16),4);
}
B5150d3:{NFSU2_TR(0x5150d3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5150d6:{NFSU2_TR(0x5150d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B5150d9:{NFSU2_TR(0x5150d9);
__builtin_memmove((R+8),gp(0x838428),4);
}
B5150df:{NFSU2_TR(0x5150df);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5150e0:{NFSU2_TR(0x5150e0);
__builtin_memmove((R+24),(R+4),4);
}
B5150e2:{NFSU2_TR(0x5150e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5150e5:{NFSU2_TR(0x5150e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5150ef:{NFSU2_TR(0x5150ef);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B5150f3:{NFSU2_TR(0x5150f3);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B5150f5:{NFSU2_TR(0x5150f5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5150f6:{NFSU2_TR(0x5150f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5150fbull));
TAIL_STATIC(0x43db50u,43d);
}
B5150fb:L5150fb:{c.instructions+=2;NFSU2_TR(0x5150fb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5150fc:{NFSU2_TR(0x5150fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x515101ull));
TAIL_STATIC(0x4ffc50u,4ff);
}
B515101:L515101:{c.instructions+=3;NFSU2_TR(0x515101);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B515104:{NFSU2_TR(0x515104);
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
B515106:{NFSU2_TR(0x515106);
if(r1(R+518)){{goto L51514d;}}
}
B515108:L515108:{c.instructions+=16;NFSU2_TR(0x515108);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51510b:{NFSU2_TR(0x51510b);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51510e:{NFSU2_TR(0x51510e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B515111:{NFSU2_TR(0x515111);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B515113:{NFSU2_TR(0x515113);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B51511a:{NFSU2_TR(0x51511a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51511c:{NFSU2_TR(0x51511c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B515120:{NFSU2_TR(0x515120);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B515124:{NFSU2_TR(0x515124);
__builtin_memmove((R+8),gp(0x8900ac),4);
}
B51512a:{NFSU2_TR(0x51512a);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B51512e:{NFSU2_TR(0x51512e);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B515132:{NFSU2_TR(0x515132);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515133:{NFSU2_TR(0x515133);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515135:{NFSU2_TR(0x515135);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515136:{NFSU2_TR(0x515136);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B515139:{NFSU2_TR(0x515139);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51513eull));
TAIL_STATIC(0x5fbd60u,5fb);
}
B51513e:L51513e:{c.instructions+=4;NFSU2_TR(0x51513e);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B515144:{NFSU2_TR(0x515144);
u8 U[4];
w4(U+0,u32(0xdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515146:{NFSU2_TR(0x515146);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515148:{NFSU2_TR(0x515148);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51514dull));
TAIL_STATIC(0x5f41e0u,5f4);
}
B51514d:L51514d:{c.instructions+=4;NFSU2_TR(0x51514d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51514e:{NFSU2_TR(0x51514e);
__builtin_memmove((R+16),(R+20),4);
}
B515150:{NFSU2_TR(0x515150);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B515151:{NFSU2_TR(0x515151);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B515160:L515160:{c.instructions+=22;NFSU2_TR(0x515160);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515161:{NFSU2_TR(0x515161);
__builtin_memmove((R+20),(R+16),4);
}
B515163:{NFSU2_TR(0x515163);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x28ull))));
}
B515166:{NFSU2_TR(0x515166);
__builtin_memmove((R+0),gp(0x863444),4);
}
B51516b:{NFSU2_TR(0x51516b);
__builtin_memmove((R+4),(R+0),4);
}
B51516d:{NFSU2_TR(0x51516d);
w1(R+512,u8((r4(R+4))!=(u32(0x0ull))));
w4(R+4,u32(0-u32(r4(R+4))));
}
B51516f:{NFSU2_TR(0x51516f);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(R+4))));
w4(R+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B515171:{NFSU2_TR(0x515171);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515172:{NFSU2_TR(0x515172);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515173:{NFSU2_TR(0x515173);
__builtin_memmove((R+28),gp(0x863454),4);
}
B515179:{NFSU2_TR(0x515179);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+28))));
}
B51517b:{NFSU2_TR(0x51517b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51517e:{NFSU2_TR(0x51517e);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B515180:{NFSU2_TR(0x515180);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B515182:{NFSU2_TR(0x515182);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+28))));
}
B515184:{NFSU2_TR(0x515184);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B515188:{NFSU2_TR(0x515188);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B515189:{NFSU2_TR(0x515189);
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
B51518c:{NFSU2_TR(0x51518c);
w4(R+8,u32(0x1ull));
}
B515191:{NFSU2_TR(0x515191);
w4(R+24,u32(0x783fe5ull));
}
B515196:{NFSU2_TR(0x515196);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B515199:{NFSU2_TR(0x515199);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5151c8;}}
}
B51519b:L51519b:{c.instructions+=1;NFSU2_TR(0x51519b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x515234ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5151a2:L5151a2:{c.instructions+=2;NFSU2_TR(0x5151a2);
w4(R+24,u32(0x79b0d4ull));
}
B5151a7:{NFSU2_TR(0x5151a7);
{goto L5151c3;}
}
B5151a9:L5151a9:{c.instructions+=3;NFSU2_TR(0x5151a9);
w4(R+8,u32(0x3ull));
}
B5151ae:{NFSU2_TR(0x5151ae);
w4(R+24,u32(0x79b0b8ull));
}
B5151b3:{NFSU2_TR(0x5151b3);
{goto L5151c8;}
}
B5151b5:L5151b5:{c.instructions+=3;NFSU2_TR(0x5151b5);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5151b7:{NFSU2_TR(0x5151b7);
w4(R+24,u32(0x783fe5ull));
}
B5151bc:{NFSU2_TR(0x5151bc);
{goto L5151c8;}
}
B5151be:L5151be:{c.instructions+=1;NFSU2_TR(0x5151be);
w4(R+24,u32(0x79b098ull));
}
B5151c3:L5151c3:{c.instructions+=1;NFSU2_TR(0x5151c3);
w4(R+8,u32(0x5ull));
}
B5151c8:L5151c8:{c.instructions+=2;NFSU2_TR(0x5151c8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5151c9:{NFSU2_TR(0x5151c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5151ceull));
TAIL_STATIC(0x43c1c0u,43c);
}
B5151ce:L5151ce:{c.instructions+=4;NFSU2_TR(0x5151ce);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5151cf:{NFSU2_TR(0x5151cf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5151d0:{NFSU2_TR(0x5151d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5151d1:{NFSU2_TR(0x5151d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5151d6ull));
TAIL_STATIC(0x50b990u,50b);
}
B5151d6:L5151d6:{c.instructions+=6;NFSU2_TR(0x5151d6);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5151d9:{NFSU2_TR(0x5151d9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5151dc:{NFSU2_TR(0x5151dc);
__builtin_memmove((R+24),(R+0),4);
}
B5151de:{NFSU2_TR(0x5151de);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5151e4:{NFSU2_TR(0x5151e4);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5151ea:{NFSU2_TR(0x5151ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5151efull));
TAIL_STATIC(0x75bed4u,75b);
}
B5151ef:L5151ef:{c.instructions+=6;NFSU2_TR(0x5151ef);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5151f1:{NFSU2_TR(0x5151f1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5151f4:{NFSU2_TR(0x5151f4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5151f5:{NFSU2_TR(0x5151f5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5151f8:{NFSU2_TR(0x5151f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5151fb:{NFSU2_TR(0x5151fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x515200ull));
TAIL_STATIC(0x577240u,577);
}
B515200:L515200:{c.instructions+=2;NFSU2_TR(0x515200);
__builtin_memmove((R+8),(R+24),4);
}
B515202:{NFSU2_TR(0x515202);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x515207ull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B515207:L515207:{c.instructions+=4;NFSU2_TR(0x515207);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B515209:{NFSU2_TR(0x515209);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51520a:{NFSU2_TR(0x51520a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51520b:{NFSU2_TR(0x51520b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L515217;}}
}
B51520d:L51520d:{c.instructions+=2;NFSU2_TR(0x51520d);
w4(R+8,u32(0xc01a6f63ull));
}
B515212:{NFSU2_TR(0x515212);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x515217ull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B515217:L515217:{c.instructions+=8;NFSU2_TR(0x515217);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51521a:{NFSU2_TR(0x51521a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B51521d:{NFSU2_TR(0x51521d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51521e:{NFSU2_TR(0x51521e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51521f:{NFSU2_TR(0x51521f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B515222:{NFSU2_TR(0x515222);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515223:{NFSU2_TR(0x515223);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515224:{NFSU2_TR(0x515224);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x515229ull));
TAIL_STATIC(0x50c960u,50c);
}
B515229:L515229:{c.instructions+=4;NFSU2_TR(0x515229);
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
B51522c:{NFSU2_TR(0x51522c);
__builtin_memmove((R+16),(R+20),4);
}
B51522e:{NFSU2_TR(0x51522e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B51522f:{NFSU2_TR(0x51522f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B515250:L515250:{c.instructions+=11;NFSU2_TR(0x515250);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515251:{NFSU2_TR(0x515251);
__builtin_memmove((R+20),(R+16),4);
}
B515253:{NFSU2_TR(0x515253);
__builtin_memmove((R+0),gp(0x863444),4);
}
B515258:{NFSU2_TR(0x515258);
__builtin_memmove((R+8),gp(0x863454),4);
}
B51525e:{NFSU2_TR(0x51525e);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B515260:{NFSU2_TR(0x515260);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B515262:{NFSU2_TR(0x515262);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+8))));
}
B515264:{NFSU2_TR(0x515264);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B515268:{NFSU2_TR(0x515268);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B515269:{NFSU2_TR(0x515269);
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
B51526c:{NFSU2_TR(0x51526c);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L515312;}}
}
B515272:L515272:{c.instructions+=1;NFSU2_TR(0x515272);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x515318ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B515279:L515279:{c.instructions+=2;NFSU2_TR(0x515279);
w4(R+8,u32(0x48157d57ull));
}
B51527e:{NFSU2_TR(0x51527e);
{goto L5152e9;}
}
B515280:L515280:{c.instructions+=2;NFSU2_TR(0x515280);
w4(R+8,u32(0xa517fd7aull));
}
B515285:{NFSU2_TR(0x515285);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51528aull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B51528a:L51528a:{c.instructions+=2;NFSU2_TR(0x51528a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51528c:{NFSU2_TR(0x51528c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L515298;}}
}
B51528e:L51528e:{c.instructions+=2;NFSU2_TR(0x51528e);
w4(R+8,u32(0xc01a6f63ull));
}
B515293:{NFSU2_TR(0x515293);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x515298ull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B515298:L515298:{c.instructions+=7;NFSU2_TR(0x515298);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51529b:{NFSU2_TR(0x51529b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51529c:{NFSU2_TR(0x51529c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51529f:{NFSU2_TR(0x51529f);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5152a4:{NFSU2_TR(0x5152a4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5152a5:{NFSU2_TR(0x5152a5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5152a6:{NFSU2_TR(0x5152a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5152abull));
TAIL_STATIC(0x50c960u,50c);
}
B5152ab:L5152ab:{c.instructions+=3;NFSU2_TR(0x5152ab);
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
B5152ae:{NFSU2_TR(0x5152ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5152af:{NFSU2_TR(0x5152af);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5152b2:L5152b2:{c.instructions+=2;NFSU2_TR(0x5152b2);
w4(R+8,u32(0xbf178f39ull));
}
B5152b7:{NFSU2_TR(0x5152b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5152bcull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B5152bc:L5152bc:{c.instructions+=2;NFSU2_TR(0x5152bc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5152be:{NFSU2_TR(0x5152be);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5152ca;}}
}
B5152c0:L5152c0:{c.instructions+=2;NFSU2_TR(0x5152c0);
w4(R+8,u32(0xc01a6f63ull));
}
B5152c5:{NFSU2_TR(0x5152c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5152caull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B5152ca:L5152ca:{c.instructions+=7;NFSU2_TR(0x5152ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5152cd:{NFSU2_TR(0x5152cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5152d0:{NFSU2_TR(0x5152d0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5152d1:{NFSU2_TR(0x5152d1);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5152d6:{NFSU2_TR(0x5152d6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5152d7:{NFSU2_TR(0x5152d7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5152d8:{NFSU2_TR(0x5152d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5152ddull));
TAIL_STATIC(0x50c960u,50c);
}
B5152dd:L5152dd:{c.instructions+=3;NFSU2_TR(0x5152dd);
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
B5152e0:{NFSU2_TR(0x5152e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5152e1:{NFSU2_TR(0x5152e1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5152e4:L5152e4:{c.instructions+=1;NFSU2_TR(0x5152e4);
w4(R+8,u32(0xe5b2c887ull));
}
B5152e9:L5152e9:{c.instructions+=1;NFSU2_TR(0x5152e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5152eeull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B5152ee:L5152ee:{c.instructions+=2;NFSU2_TR(0x5152ee);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5152f0:{NFSU2_TR(0x5152f0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5152fc;}}
}
B5152f2:L5152f2:{c.instructions+=2;NFSU2_TR(0x5152f2);
w4(R+8,u32(0xc01a6f63ull));
}
B5152f7:{NFSU2_TR(0x5152f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5152fcull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B5152fc:L5152fc:{c.instructions+=7;NFSU2_TR(0x5152fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5152ff:{NFSU2_TR(0x5152ff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515300:{NFSU2_TR(0x515300);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B515303:{NFSU2_TR(0x515303);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515308:{NFSU2_TR(0x515308);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515309:{NFSU2_TR(0x515309);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51530a:{NFSU2_TR(0x51530a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51530full));
TAIL_STATIC(0x50c960u,50c);
}
B51530f:L51530f:{c.instructions+=1;NFSU2_TR(0x51530f);
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
B515312:L515312:{c.instructions+=2;NFSU2_TR(0x515312);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B515313:{NFSU2_TR(0x515313);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B515330:L515330:{c.instructions+=2;NFSU2_TR(0x515330);
w4(R+8,u32(0xe514579dull));
}
B515335:{NFSU2_TR(0x515335);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51533aull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B51533a:L51533a:{c.instructions+=2;NFSU2_TR(0x51533a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51533c:{NFSU2_TR(0x51533c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L515348;}}
}
B51533e:L51533e:{c.instructions+=2;NFSU2_TR(0x51533e);
w4(R+8,u32(0xc01a6f63ull));
}
B515343:{NFSU2_TR(0x515343);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x515348ull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B515348:L515348:{c.instructions+=6;NFSU2_TR(0x515348);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51534c:{NFSU2_TR(0x51534c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51534d:{NFSU2_TR(0x51534d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B515351:{NFSU2_TR(0x515351);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515352:{NFSU2_TR(0x515352);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515353:{NFSU2_TR(0x515353);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x515358ull));
TAIL_STATIC(0x50c960u,50c);
}
B515358:L515358:{c.instructions+=2;NFSU2_TR(0x515358);
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
B51535b:{NFSU2_TR(0x51535b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B515360:L515360:{c.instructions+=4;NFSU2_TR(0x515360);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B515363:{NFSU2_TR(0x515363);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515364:{NFSU2_TR(0x515364);
__builtin_memmove((R+24),(R+0),4);
}
B515366:{NFSU2_TR(0x515366);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51536c;}}
}
B515368:L515368:{c.instructions+=3;NFSU2_TR(0x515368);
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
B51536a:{NFSU2_TR(0x51536a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51536b:{NFSU2_TR(0x51536b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51536c:L51536c:{c.instructions+=2;NFSU2_TR(0x51536c);
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
B51536e:{NFSU2_TR(0x51536e);
if(r1(R+518)){{goto L515383;}}
}
B515370:L515370:{c.instructions+=2;NFSU2_TR(0x515370);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x44ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B515373:{NFSU2_TR(0x515373);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L515387;}}
}
B515375:L515375:{c.instructions+=2;NFSU2_TR(0x515375);
w4(R+4,u32(0x865930ull));
}
B51537a:{NFSU2_TR(0x51537a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51537full));
TAIL_STATIC(0x579d60u,579);
}
B51537f:L51537f:{c.instructions+=2;NFSU2_TR(0x51537f);
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
B515381:{NFSU2_TR(0x515381);
if(r1(R+518)){{goto L515390;}}
}
B515383:L515383:{c.instructions+=3;NFSU2_TR(0x515383);
w1(R+0,u8(0x1ull));
}
B515385:{NFSU2_TR(0x515385);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B515386:{NFSU2_TR(0x515386);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B515387:L515387:{c.instructions+=2;NFSU2_TR(0x515387);
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
B515389:{NFSU2_TR(0x515389);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x515383u);}goto L515383;}}
}
B51538b:L51538b:{c.instructions+=2;NFSU2_TR(0x51538b);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x57ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x57ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x57ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B51538e:{NFSU2_TR(0x51538e);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x515383u);}goto L515383;}}
}
B515390:L515390:{c.instructions+=5;NFSU2_TR(0x515390);
__builtin_memmove((R+4),gp(0x83845c),4);
}
B515396:{NFSU2_TR(0x515396);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B515399:{NFSU2_TR(0x515399);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffd8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B51539d:{NFSU2_TR(0x51539d);
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
B51539f:{NFSU2_TR(0x51539f);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x515383u);}goto L515383;}}
}
B5153a1:L5153a1:{c.instructions+=2;NFSU2_TR(0x5153a1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5153a2:{NFSU2_TR(0x5153a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5153a7ull));
TAIL_STATIC(0x501750u,501);
}
B5153a7:L5153a7:{c.instructions+=3;NFSU2_TR(0x5153a7);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B5153ab:{NFSU2_TR(0x5153ab);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B5153ae:{NFSU2_TR(0x5153ae);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x515383u);}goto L515383;}}
}
B5153b0:L5153b0:{c.instructions+=1;NFSU2_TR(0x5153b0);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x515450ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5153b7:L5153b7:{c.instructions+=3;NFSU2_TR(0x5153b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5153ba:{NFSU2_TR(0x5153ba);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5153bb:{NFSU2_TR(0x5153bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5153c0ull));
TAIL_STATIC(0x4ffe20u,4ff);
}
B5153c0:L5153c0:{c.instructions+=4;NFSU2_TR(0x5153c0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5153c3:{NFSU2_TR(0x5153c3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5153c4:{NFSU2_TR(0x5153c4);
w4(R+4,u32(0x85ad40ull));
}
B5153c9:{NFSU2_TR(0x5153c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5153ceull));
TAIL_STATIC(0x513110u,513);
}
B5153ce:L5153ce:{c.instructions+=2;NFSU2_TR(0x5153ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5153cf:{NFSU2_TR(0x5153cf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5153d0:L5153d0:{c.instructions+=6;NFSU2_TR(0x5153d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5153d3:{NFSU2_TR(0x5153d3);
__builtin_memmove((R+4),(R+24),4);
}
B5153d5:{NFSU2_TR(0x5153d5);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B5153d8:{NFSU2_TR(0x5153d8);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x104ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B5153de:{NFSU2_TR(0x5153de);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x862018ull))));
}
B5153e4:{NFSU2_TR(0x5153e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5153e9ull));
TAIL_STATIC(0x5005a0u,500);
}
B5153e9:L5153e9:{c.instructions+=7;NFSU2_TR(0x5153e9);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xffffull))));
}
B5153ef:{NFSU2_TR(0x5153ef);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5153f1:{NFSU2_TR(0x5153f1);
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
B5153f3:{NFSU2_TR(0x5153f3);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
__builtin_memmove((R+4),(U+0),1);
}
B5153f6:{NFSU2_TR(0x5153f6);
__builtin_memmove((R+0),(R+4),1);
}
B5153f8:{NFSU2_TR(0x5153f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5153f9:{NFSU2_TR(0x5153f9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5153fa:L5153fa:{c.instructions+=6;NFSU2_TR(0x5153fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5153fd:{NFSU2_TR(0x5153fd);
__builtin_memmove((R+4),(R+24),4);
}
B5153ff:{NFSU2_TR(0x5153ff);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B515402:{NFSU2_TR(0x515402);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x104ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B515408:{NFSU2_TR(0x515408);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x862018ull))));
}
B51540e:{NFSU2_TR(0x51540e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x515413ull));
TAIL_STATIC(0x500520u,500);
}
B515413:L515413:{c.instructions+=7;NFSU2_TR(0x515413);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xffffull))));
}
B515419:{NFSU2_TR(0x515419);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B51541b:{NFSU2_TR(0x51541b);
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
B51541d:{NFSU2_TR(0x51541d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
__builtin_memmove((R+8),(U+0),1);
}
B515420:{NFSU2_TR(0x515420);
__builtin_memmove((R+0),(R+8),1);
}
B515422:{NFSU2_TR(0x515422);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B515423:{NFSU2_TR(0x515423);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B515424:L515424:{c.instructions+=6;NFSU2_TR(0x515424);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B515427:{NFSU2_TR(0x515427);
__builtin_memmove((R+4),(R+24),4);
}
B515429:{NFSU2_TR(0x515429);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B51542c:{NFSU2_TR(0x51542c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x104ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B515432:{NFSU2_TR(0x515432);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x862018ull))));
}
B515438:{NFSU2_TR(0x515438);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51543dull));
TAIL_STATIC(0x5004d0u,500);
}
B51543d:L51543d:{c.instructions+=7;NFSU2_TR(0x51543d);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xffffull))));
}
B515443:{NFSU2_TR(0x515443);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B515445:{NFSU2_TR(0x515445);
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
B515447:{NFSU2_TR(0x515447);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
__builtin_memmove((R+4),(U+0),1);
}
B51544a:{NFSU2_TR(0x51544a);
__builtin_memmove((R+0),(R+4),1);
}
B51544c:{NFSU2_TR(0x51544c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51544d:{NFSU2_TR(0x51544d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B515470:L515470:{c.instructions+=7;NFSU2_TR(0x515470);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B515473:{NFSU2_TR(0x515473);
__builtin_memmove((R+4),gp(0x838460),4);
}
B515479:{NFSU2_TR(0x515479);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B51547b:{NFSU2_TR(0x51547b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51547d:{NFSU2_TR(0x51547d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B515481:{NFSU2_TR(0x515481);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B515485:{NFSU2_TR(0x515485);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5154f6;}}
}
B515487:L515487:{c.instructions+=6;NFSU2_TR(0x515487);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515488:{NFSU2_TR(0x515488);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515489:{NFSU2_TR(0x515489);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51548a:{NFSU2_TR(0x51548a);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B51548c:{NFSU2_TR(0x51548c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51548d:{NFSU2_TR(0x51548d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B515491:L515491:{c.instructions+=4;NFSU2_TR(0x515491);
__builtin_memmove((R+0),gp(0x83845c),4);
}
B515496:{NFSU2_TR(0x515496);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B515498:{NFSU2_TR(0x515498);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x9ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51549b:{NFSU2_TR(0x51549b);
w4(R+20,u32(0x3ull));
}
B5154a0:L5154a0:{c.instructions+=3;NFSU2_TR(0x5154a0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5154a3:{NFSU2_TR(0x5154a3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5154a5:{NFSU2_TR(0x5154a5);
if(r1(R+518)){{goto L5154b3;}}
}
B5154a7:L5154a7:{c.instructions+=2;NFSU2_TR(0x5154a7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5154a9:{NFSU2_TR(0x5154a9);
if(r1(R+518)){{goto L5154b3;}}
}
B5154ab:L5154ab:{c.instructions+=2;NFSU2_TR(0x5154ab);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5154ad:{NFSU2_TR(0x5154ad);
if(r1(R+518)){{goto L5154b3;}}
}
B5154af:L5154af:{c.instructions+=2;NFSU2_TR(0x5154af);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5154b1:{NFSU2_TR(0x5154b1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5154ca;}}
}
B5154b3:L5154b3:{c.instructions+=4;NFSU2_TR(0x5154b3);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+28,u32(s32(s8(r1(U+0)))));
}
B5154b6:{NFSU2_TR(0x5154b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5154b8:{NFSU2_TR(0x5154b8);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5154ba:{NFSU2_TR(0x5154ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5154bfull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x515360u);}goto L515360;}
}
B5154bf:L5154bf:{c.instructions+=3;NFSU2_TR(0x5154bf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5154c2:{NFSU2_TR(0x5154c2);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5154c4:{NFSU2_TR(0x5154c4);
if(r1(R+518)){{goto L5154ca;}}
}
B5154c6:L5154c6:{c.instructions+=1;NFSU2_TR(0x5154c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B5154ca:L5154ca:{c.instructions+=3;NFSU2_TR(0x5154ca);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
}
B5154cd:{NFSU2_TR(0x5154cd);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
}
B5154ce:{NFSU2_TR(0x5154ce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5154a0u);}goto L5154a0;}}
}
B5154d0:L5154d0:{c.instructions+=9;NFSU2_TR(0x5154d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5154d4:{NFSU2_TR(0x5154d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5154d8:{NFSU2_TR(0x5154d8);
__builtin_memmove((R+4),gp(0x838460),4);
}
B5154de:{NFSU2_TR(0x5154de);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5154df:{NFSU2_TR(0x5154df);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x28ull))));
}
B5154e2:{NFSU2_TR(0x5154e2);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5154e4:{NFSU2_TR(0x5154e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5154e8:{NFSU2_TR(0x5154e8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5154ec:{NFSU2_TR(0x5154ec);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x515491u);}goto L515491;}}
}
B5154ee:L5154ee:{c.instructions+=5;NFSU2_TR(0x5154ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5154f2:{NFSU2_TR(0x5154f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5154f3:{NFSU2_TR(0x5154f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5154f4:{NFSU2_TR(0x5154f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5154f5:{NFSU2_TR(0x5154f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5154f6:L5154f6:{c.instructions+=2;NFSU2_TR(0x5154f6);
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
B5154f9:{NFSU2_TR(0x5154f9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B515500:L515500:{c.instructions+=11;NFSU2_TR(0x515500);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515501:{NFSU2_TR(0x515501);
__builtin_memmove((R+20),(R+16),4);
}
B515503:{NFSU2_TR(0x515503);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B515506:{NFSU2_TR(0x515506);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515507:{NFSU2_TR(0x515507);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515508:{NFSU2_TR(0x515508);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51550b:{NFSU2_TR(0x51550b);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B51550d:{NFSU2_TR(0x51550d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B51550f:{NFSU2_TR(0x51550f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515510:{NFSU2_TR(0x515510);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B515513:{NFSU2_TR(0x515513);
if(r1(R+518)){{goto L515544;}}
}
B515515:L515515:{c.instructions+=9;NFSU2_TR(0x515515);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B515518:{NFSU2_TR(0x515518);
__builtin_memmove((R+0),gp(0x863480),4);
}
B51551d:{NFSU2_TR(0x51551d);
w1(R+12,u8(u32(r1(R+12))&u32(u8(0xe0ull))));
}
B515520:{NFSU2_TR(0x515520);
w1(R+512,u8((r1(R+12))!=(u8(0x0ull))));
w1(R+12,u8(0-u32(r1(R+12))));
}
B515522:{NFSU2_TR(0x515522);
u8 U[2];
__builtin_memmove((U+0),(R+512),1);
w1(U+1,u8(u32(r1(R+12))-u32(r1(R+12))));
w1(R+12,u8(u32(r1(U+1))-u32(r1(U+0))));
}
B515524:{NFSU2_TR(0x515524);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515525:{NFSU2_TR(0x515525);
w4(R+4,u32(0x83ad90ull));
}
B51552a:{NFSU2_TR(0x51552a);
w1(R+12,u8(u32(r1(R+12))+u32(u8(0x1ull))));
}
B51552c:{NFSU2_TR(0x51552c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x515531ull));
TAIL_STATIC(0x503680u,503);
}
B515531:L515531:{c.instructions+=2;NFSU2_TR(0x515531);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B515533:{NFSU2_TR(0x515533);
if(r1(R+518)){{goto L515544;}}
}
B515535:L515535:{c.instructions+=4;NFSU2_TR(0x515535);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515536:{NFSU2_TR(0x515536);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515537:{NFSU2_TR(0x515537);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x434ull))));
__builtin_memmove((R+4),(U+0),4);
}
B51553d:{NFSU2_TR(0x51553d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x515542ull));
TAIL_STATIC(0x503db0u,503);
}
B515542:L515542:{c.instructions+=1;NFSU2_TR(0x515542);
w1(R+12,u8(u32(r1(R+12))|u32(r1(R+0))));
}
B515544:L515544:{c.instructions+=2;NFSU2_TR(0x515544);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(u8(0x4ull))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B515548:{NFSU2_TR(0x515548);
if(r1(R+518)){{goto L515590;}}
}
B51554a:L51554a:{c.instructions+=3;NFSU2_TR(0x51554a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51554b:{NFSU2_TR(0x51554b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51554c:{NFSU2_TR(0x51554c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x515551ull));
TAIL_STATIC(0x501d70u,501);
}
B515551:L515551:{c.instructions+=3;NFSU2_TR(0x515551);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B515554:{NFSU2_TR(0x515554);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3dull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B515557:{NFSU2_TR(0x515557);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L515579;}}
}
B515559:L515559:{c.instructions+=7;NFSU2_TR(0x515559);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B51555d:{NFSU2_TR(0x51555d);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(R+8,u32(r2(U+0)));
}
B515560:{NFSU2_TR(0x515560);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B515563:{NFSU2_TR(0x515563);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+8))));
}
B515565:{NFSU2_TR(0x515565);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515566:{NFSU2_TR(0x515566);
w4(R+4,u32(0x865930ull));
}
B51556b:{NFSU2_TR(0x51556b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x515570ull));
TAIL_STATIC(0x579da0u,579);
}
B515570:L515570:{c.instructions+=7;NFSU2_TR(0x515570);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B515571:{NFSU2_TR(0x515571);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+12,u8(u32(r1(R+12))|u32(r1(R+0))));
w1(R+519,u8(s8(r1(R+12))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+12))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+12))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B515573:{NFSU2_TR(0x515573);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B515574:{NFSU2_TR(0x515574);
__builtin_memmove((R+0),(R+12),1);
}
B515576:{NFSU2_TR(0x515576);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B515577:{NFSU2_TR(0x515577);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B515578:{NFSU2_TR(0x515578);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B515579:L515579:{c.instructions+=6;NFSU2_TR(0x515579);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B51557c:{NFSU2_TR(0x51557c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51557f:{NFSU2_TR(0x51557f);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w1(R+4,shr<u8>(r1(R+4),u64(r4(U+0))));
}
B515582:{NFSU2_TR(0x515582);
w4(R+28,u32(s32(s8(r1(R+4)))));
}
B515585:{NFSU2_TR(0x515585);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515586:{NFSU2_TR(0x515586);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51558bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x515360u);}goto L515360;}
}
B51558b:L51558b:{c.instructions+=2;NFSU2_TR(0x51558b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B51558e:{NFSU2_TR(0x51558e);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+12,u8(u32(r1(R+12))|u32(r1(R+0))));
w1(R+519,u8(s8(r1(R+12))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+12))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+12))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B515590:L515590:{c.instructions+=6;NFSU2_TR(0x515590);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B515591:{NFSU2_TR(0x515591);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B515592:{NFSU2_TR(0x515592);
__builtin_memmove((R+0),(R+12),1);
}
B515594:{NFSU2_TR(0x515594);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B515595:{NFSU2_TR(0x515595);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B515596:{NFSU2_TR(0x515596);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5155a0:L5155a0:{c.instructions+=10;NFSU2_TR(0x5155a0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5155a1:{NFSU2_TR(0x5155a1);
__builtin_memmove((R+20),(R+16),4);
}
B5155a3:{NFSU2_TR(0x5155a3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5155a6:{NFSU2_TR(0x5155a6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5155a7:{NFSU2_TR(0x5155a7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5155a8:{NFSU2_TR(0x5155a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5155ab:{NFSU2_TR(0x5155ab);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B5155ad:{NFSU2_TR(0x5155ad);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5155af:{NFSU2_TR(0x5155af);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5155b0:{NFSU2_TR(0x5155b0);
if(r1(R+518)){{goto L5155f6;}}
}
B5155b2:L5155b2:{c.instructions+=4;NFSU2_TR(0x5155b2);
__builtin_memmove((R+0),gp(0x863480),4);
}
B5155b7:{NFSU2_TR(0x5155b7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5155b8:{NFSU2_TR(0x5155b8);
w4(R+4,u32(0x83ad90ull));
}
B5155bd:{NFSU2_TR(0x5155bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5155c2ull));
TAIL_STATIC(0x503680u,503);
}
B5155c2:L5155c2:{c.instructions+=3;NFSU2_TR(0x5155c2);
__builtin_memmove((R+28),(R+0),4);
}
B5155c4:{NFSU2_TR(0x5155c4);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5155c6:{NFSU2_TR(0x5155c6);
if(r1(R+518)){{goto L5155f6;}}
}
B5155c8:L5155c8:{c.instructions+=3;NFSU2_TR(0x5155c8);
__builtin_memmove((R+4),(R+24),4);
}
B5155ca:{NFSU2_TR(0x5155ca);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x80000007ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
}
B5155d0:{NFSU2_TR(0x5155d0);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L5155d7;}}
}
B5155d2:L5155d2:{c.instructions+=3;NFSU2_TR(0x5155d2);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B5155d3:{NFSU2_TR(0x5155d3);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xfffffff8ull))));
}
B5155d6:{NFSU2_TR(0x5155d6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5155d7:L5155d7:{c.instructions+=10;NFSU2_TR(0x5155d7);
__builtin_memmove((R+0),(R+24),4);
}
B5155d9:{NFSU2_TR(0x5155d9);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B5155da:{NFSU2_TR(0x5155da);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7ull))));
}
B5155dd:{NFSU2_TR(0x5155dd);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B5155df:{NFSU2_TR(0x5155df);
w4(R+12,u32(0x1ull));
}
B5155e4:{NFSU2_TR(0x5155e4);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r1(U+0))));
}
B5155e6:{NFSU2_TR(0x5155e6);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B5155e9:{NFSU2_TR(0x5155e9);
u8 U[13];
w4(U+0,u32(u32(u32(0x590ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+4,u32(s32(s8(r1(U+12)))));
}
B5155f1:{NFSU2_TR(0x5155f1);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5155f3:{NFSU2_TR(0x5155f3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+12),(U+0),1);
}
B5155f6:L5155f6:{c.instructions+=2;NFSU2_TR(0x5155f6);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(u8(0x4ull))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B5155fa:{NFSU2_TR(0x5155fa);
if(r1(R+518)){{goto L51561f;}}
}
B5155fc:L5155fc:{c.instructions+=2;NFSU2_TR(0x5155fc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5155fd:{NFSU2_TR(0x5155fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x515602ull));
TAIL_STATIC(0x5000a0u,500);
}
B515602:L515602:{c.instructions+=4;NFSU2_TR(0x515602);
__builtin_memmove((R+4),(R+0),4);
}
B515604:{NFSU2_TR(0x515604);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B515606:{NFSU2_TR(0x515606);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515607:{NFSU2_TR(0x515607);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51560cull));
TAIL_STATIC(0x5021c0u,502);
}
B51560c:L51560c:{c.instructions+=5;NFSU2_TR(0x51560c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51560f:{NFSU2_TR(0x51560f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B515612:{NFSU2_TR(0x515612);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515613:{NFSU2_TR(0x515613);
__builtin_memmove((R+28),(R+4),4);
}
B515615:{NFSU2_TR(0x515615);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51561aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x515360u);}goto L515360;}
}
B51561a:L51561a:{c.instructions+=2;NFSU2_TR(0x51561a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B51561d:{NFSU2_TR(0x51561d);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+12,u8(u32(r1(R+12))|u32(r1(R+0))));
w1(R+519,u8(s8(r1(R+12))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+12))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+12))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B51561f:L51561f:{c.instructions+=6;NFSU2_TR(0x51561f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B515620:{NFSU2_TR(0x515620);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B515621:{NFSU2_TR(0x515621);
__builtin_memmove((R+0),(R+12),1);
}
B515623:{NFSU2_TR(0x515623);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B515624:{NFSU2_TR(0x515624);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B515625:{NFSU2_TR(0x515625);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B515630:L515630:{c.instructions+=9;NFSU2_TR(0x515630);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515631:{NFSU2_TR(0x515631);
__builtin_memmove((R+20),(R+16),4);
}
B515633:{NFSU2_TR(0x515633);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B515636:{NFSU2_TR(0x515636);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B515639:{NFSU2_TR(0x515639);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51563a:{NFSU2_TR(0x51563a);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B51563c:{NFSU2_TR(0x51563c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B51563e:{NFSU2_TR(0x51563e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51563f:{NFSU2_TR(0x51563f);
if(r1(R+518)){{goto L5156c8;}}
}
B515645:L515645:{c.instructions+=4;NFSU2_TR(0x515645);
__builtin_memmove((R+0),gp(0x863480),4);
}
B51564a:{NFSU2_TR(0x51564a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51564b:{NFSU2_TR(0x51564b);
w4(R+4,u32(0x83ad90ull));
}
B515650:{NFSU2_TR(0x515650);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x515655ull));
TAIL_STATIC(0x503680u,503);
}
B515655:L515655:{c.instructions+=3;NFSU2_TR(0x515655);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B515657:{NFSU2_TR(0x515657);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51565a:{NFSU2_TR(0x51565a);
if(r1(R+518)){{goto L5156c8;}}
}
B51565c:L51565c:{c.instructions+=6;NFSU2_TR(0x51565c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51565f:{NFSU2_TR(0x51565f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B515662:{NFSU2_TR(0x515662);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515663:{NFSU2_TR(0x515663);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515664:{NFSU2_TR(0x515664);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B515667:{NFSU2_TR(0x515667);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51566cull));
TAIL_STATIC(0x500100u,500);
}
B51566c:L51566c:{c.instructions+=5;NFSU2_TR(0x51566c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B51566f:{NFSU2_TR(0x51566f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B515672:{NFSU2_TR(0x515672);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B515674:{NFSU2_TR(0x515674);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B515676:{NFSU2_TR(0x515676);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5156c5;}}
}
B515678:L515678:{c.instructions+=3;NFSU2_TR(0x515678);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515679:{NFSU2_TR(0x515679);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((R+24),(U+0),4);
}
B51567c:{NFSU2_TR(0x51567c);
__builtin_memmove((R+16),(R+16),4);
}
B515680:L515680:{c.instructions+=4;NFSU2_TR(0x515680);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B515682:{NFSU2_TR(0x515682);
__builtin_memmove((R+4),(R+0),4);
}
B515684:{NFSU2_TR(0x515684);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x80000007ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
}
B51568a:{NFSU2_TR(0x51568a);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L515691;}}
}
B51568c:L51568c:{c.instructions+=3;NFSU2_TR(0x51568c);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B51568d:{NFSU2_TR(0x51568d);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xfffffff8ull))));
}
B515690:{NFSU2_TR(0x515690);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B515691:L515691:{c.instructions+=12;NFSU2_TR(0x515691);
w4(R+8,u32(0x1ull));
}
B515696:{NFSU2_TR(0x515696);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B515698:{NFSU2_TR(0x515698);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51569b:{NFSU2_TR(0x51569b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51569e:{NFSU2_TR(0x51569e);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B51569f:{NFSU2_TR(0x51569f);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7ull))));
}
B5156a2:{NFSU2_TR(0x5156a2);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B5156a4:{NFSU2_TR(0x5156a4);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B5156a7:{NFSU2_TR(0x5156a7);
u8 U[13];
w4(U+0,u32(u32(u32(0x590ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+8,u32(s32(s8(r1(U+12)))));
}
B5156af:{NFSU2_TR(0x5156af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5156b2:{NFSU2_TR(0x5156b2);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5156b4:{NFSU2_TR(0x5156b4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5156c0;}}
}
B5156b6:L5156b6:{c.instructions+=4;NFSU2_TR(0x5156b6);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5156b7:{NFSU2_TR(0x5156b7);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x5cull))));
}
B5156ba:{NFSU2_TR(0x5156ba);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
}
B5156bc:{NFSU2_TR(0x5156bc);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x515680u);}goto L515680;}}
}
B5156be:L5156be:{c.instructions+=1;NFSU2_TR(0x5156be);
{goto L5156c4;}
}
B5156c0:L5156c0:{c.instructions+=1;NFSU2_TR(0x5156c0);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5156c4:L5156c4:{c.instructions+=1;NFSU2_TR(0x5156c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5156c5:L5156c5:{c.instructions+=1;NFSU2_TR(0x5156c5);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B5156c8:L5156c8:{c.instructions+=3;NFSU2_TR(0x5156c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5156cb:{NFSU2_TR(0x5156cb);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+4))&u32(u8(0x4ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5156ce:{NFSU2_TR(0x5156ce);
if(r1(R+518)){{goto L5156e7;}}
}
B5156d0:L5156d0:{c.instructions+=3;NFSU2_TR(0x5156d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5156d3:{NFSU2_TR(0x5156d3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5156d4:{NFSU2_TR(0x5156d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5156d9ull));
TAIL_STATIC(0x5021c0u,502);
}
B5156d9:L5156d9:{c.instructions+=3;NFSU2_TR(0x5156d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5156dc:{NFSU2_TR(0x5156dc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5156dd:{NFSU2_TR(0x5156dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5156e2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x515360u);}goto L515360;}
}
B5156e2:L5156e2:{c.instructions+=2;NFSU2_TR(0x5156e2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5156e5:{NFSU2_TR(0x5156e5);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+12,u8(u32(r1(R+12))|u32(r1(R+0))));
w1(R+519,u8(s8(r1(R+12))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+12))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+12))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5156e7:L5156e7:{c.instructions+=6;NFSU2_TR(0x5156e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5156e8:{NFSU2_TR(0x5156e8);
__builtin_memmove((R+0),(R+12),1);
}
B5156ea:{NFSU2_TR(0x5156ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5156eb:{NFSU2_TR(0x5156eb);
__builtin_memmove((R+16),(R+20),4);
}
B5156ed:{NFSU2_TR(0x5156ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5156ee:{NFSU2_TR(0x5156ee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5156f0:L5156f0:{c.instructions+=5;NFSU2_TR(0x5156f0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5156f1:{NFSU2_TR(0x5156f1);
__builtin_memmove((R+20),(R+16),4);
}
B5156f3:{NFSU2_TR(0x5156f3);
__builtin_memmove((R+0),gp(0x838464),1);
}
B5156f8:{NFSU2_TR(0x5156f8);
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
B5156fa:{NFSU2_TR(0x5156fa);
if(r1(R+518)){{goto L515700;}}
}
B5156fc:L5156fc:{c.instructions+=3;NFSU2_TR(0x5156fc);
w1(R+0,u8(0x1ull));
}
B5156fe:{NFSU2_TR(0x5156fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5156ff:{NFSU2_TR(0x5156ff);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B515700:L515700:{c.instructions+=9;NFSU2_TR(0x515700);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B515703:{NFSU2_TR(0x515703);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515704:{NFSU2_TR(0x515704);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515705:{NFSU2_TR(0x515705);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B515708:{NFSU2_TR(0x515708);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B51570a:{NFSU2_TR(0x51570a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B51570c:{NFSU2_TR(0x51570c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51570d:{NFSU2_TR(0x51570d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B515710:{NFSU2_TR(0x515710);
if(r1(R+518)){{goto L515723;}}
}
B515712:L515712:{c.instructions+=4;NFSU2_TR(0x515712);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515713:{NFSU2_TR(0x515713);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515714:{NFSU2_TR(0x515714);
w4(R+4,u32(0x85ad40ull));
}
B515719:{NFSU2_TR(0x515719);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51571eull));
TAIL_STATIC(0x5143c0u,514);
}
B51571e:L51571e:{c.instructions+=2;NFSU2_TR(0x51571e);
__builtin_memmove((R+12),(R+0),1);
}
B515720:{NFSU2_TR(0x515720);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B515723:L515723:{c.instructions+=2;NFSU2_TR(0x515723);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x6ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B515725:{NFSU2_TR(0x515725);
if(r1(R+518)){{goto L51572a;}}
}
B515727:L515727:{c.instructions+=1;NFSU2_TR(0x515727);
w1(R+12,u8(u32(r1(R+12))|u32(u8(0x1ull))));
}
B51572a:L51572a:{c.instructions+=2;NFSU2_TR(0x51572a);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+0))&u32(u32(0x1f8ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B51572f:{NFSU2_TR(0x51572f);
if(r1(R+518)){{goto L51573f;}}
}
B515731:L515731:{c.instructions+=4;NFSU2_TR(0x515731);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515732:{NFSU2_TR(0x515732);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515733:{NFSU2_TR(0x515733);
w4(R+4,u32(0x85ad40ull));
}
B515738:{NFSU2_TR(0x515738);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51573dull));
TAIL_STATIC(0x5143c0u,514);
}
B51573d:L51573d:{c.instructions+=1;NFSU2_TR(0x51573d);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+12,u8(u32(r1(R+12))|u32(r1(R+0))));
w1(R+519,u8(s8(r1(R+12))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+12))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+12))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B51573f:L51573f:{c.instructions+=6;NFSU2_TR(0x51573f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B515740:{NFSU2_TR(0x515740);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B515741:{NFSU2_TR(0x515741);
__builtin_memmove((R+0),(R+12),1);
}
B515743:{NFSU2_TR(0x515743);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B515744:{NFSU2_TR(0x515744);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B515745:{NFSU2_TR(0x515745);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B515750:L515750:{c.instructions+=53;NFSU2_TR(0x515750);
w4(R+8,u32(0x3ull));
}
B515755:{NFSU2_TR(0x515755);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B515758:{NFSU2_TR(0x515758);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B51575b:{NFSU2_TR(0x51575b);
w1(R+0,u8(0x1ull));
}
B51575d:{NFSU2_TR(0x51575d);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+4)),r1(U+0));
}
B51575f:{NFSU2_TR(0x51575f);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B515762:{NFSU2_TR(0x515762);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B515765:{NFSU2_TR(0x515765);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B515768:{NFSU2_TR(0x515768);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x19ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B51576b:{NFSU2_TR(0x51576b);
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
B51576d:{NFSU2_TR(0x51576d);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1aull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B515770:{NFSU2_TR(0x515770);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B515773:{NFSU2_TR(0x515773);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B515777:{NFSU2_TR(0x515777);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51577a:{NFSU2_TR(0x51577a);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1eull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B51577e:{NFSU2_TR(0x51577e);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B515781:{NFSU2_TR(0x515781);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x25ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B515784:{NFSU2_TR(0x515784);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B515788:{NFSU2_TR(0x515788);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51578b:{NFSU2_TR(0x51578b);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2aull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B51578f:{NFSU2_TR(0x51578f);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B515792:{NFSU2_TR(0x515792);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x31ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B515795:{NFSU2_TR(0x515795);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B515799:{NFSU2_TR(0x515799);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51579c:{NFSU2_TR(0x51579c);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x36ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5157a0:{NFSU2_TR(0x5157a0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5157a3:{NFSU2_TR(0x5157a3);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3dull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5157a6:{NFSU2_TR(0x5157a6);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5157aa:{NFSU2_TR(0x5157aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5157ad:{NFSU2_TR(0x5157ad);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x42ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5157b1:{NFSU2_TR(0x5157b1);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5157b4:{NFSU2_TR(0x5157b4);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x49ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5157b7:{NFSU2_TR(0x5157b7);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5157bb:{NFSU2_TR(0x5157bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5157be:{NFSU2_TR(0x5157be);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4eull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5157c2:{NFSU2_TR(0x5157c2);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5157c5:{NFSU2_TR(0x5157c5);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x55ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5157c8:{NFSU2_TR(0x5157c8);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5157cc:{NFSU2_TR(0x5157cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5157cf:{NFSU2_TR(0x5157cf);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5aull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5157d3:{NFSU2_TR(0x5157d3);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5157d6:{NFSU2_TR(0x5157d6);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x61ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5157d9:{NFSU2_TR(0x5157d9);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5157dd:{NFSU2_TR(0x5157dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5157e0:{NFSU2_TR(0x5157e0);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x66ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5157e4:{NFSU2_TR(0x5157e4);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5157e7:{NFSU2_TR(0x5157e7);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6dull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5157ea:{NFSU2_TR(0x5157ea);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5157ee:{NFSU2_TR(0x5157ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5157f1:{NFSU2_TR(0x5157f1);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x72ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5157f5:{NFSU2_TR(0x5157f5);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5157f8:{NFSU2_TR(0x5157f8);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x79ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5157fb:{NFSU2_TR(0x5157fb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B515800:L515800:{c.instructions+=11;NFSU2_TR(0x515800);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B515803:{NFSU2_TR(0x515803);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515804:{NFSU2_TR(0x515804);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515805:{NFSU2_TR(0x515805);
__builtin_memmove((R+20),(R+4),4);
}
B515807:{NFSU2_TR(0x515807);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515808:{NFSU2_TR(0x515808);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515809:{NFSU2_TR(0x515809);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+20)),r4(U+0));
}
B515810:{NFSU2_TR(0x515810);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x12ull))));
__builtin_memmove((R+0),(U+0),4);
}
B515813:{NFSU2_TR(0x515813);
w4(R+4,u32(0xdull));
}
B515818:{NFSU2_TR(0x515818);
w4(R+8,u32(0x3ull));
}
B51581d:{NFSU2_TR(0x51581d);
__builtin_memmove((R+4),(R+4),4);
}
B515820:L515820:{c.instructions+=10;NFSU2_TR(0x515820);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffeull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B515824:{NFSU2_TR(0x515824);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B515827:{NFSU2_TR(0x515827);
u8 U[1];
w1(U+0,u8(0x1ull));
s1(u32(r4(R+0)),r1(U+0));
}
B51582a:{NFSU2_TR(0x51582a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B51582e:{NFSU2_TR(0x51582e);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B515832:{NFSU2_TR(0x515832);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B515836:{NFSU2_TR(0x515836);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B51583a:{NFSU2_TR(0x51583a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
}
B51583d:{NFSU2_TR(0x51583d);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B51583e:{NFSU2_TR(0x51583e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x515820u);}goto L515820;}}
}
B515840:L515840:{c.instructions+=19;NFSU2_TR(0x515840);
w4(R+0,u32(0x1ull));
}
B515845:{NFSU2_TR(0x515845);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2eull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B515849:{NFSU2_TR(0x515849);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x42ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B51584d:{NFSU2_TR(0x51584d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x75ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B515850:{NFSU2_TR(0x515850);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B515852:{NFSU2_TR(0x515852);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
w2(U+4,u16(0xfb5ull));
s2(u32(r4(U+0)),r2(U+4));
}
B515858:{NFSU2_TR(0x515858);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x56ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B51585c:{NFSU2_TR(0x51585c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x50ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B515860:{NFSU2_TR(0x515860);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xceull))));
w2(U+4,u16(0x0ull));
s2(u32(r4(U+0)),r2(U+4));
}
B515869:{NFSU2_TR(0x515869);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xc5ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B515870:{NFSU2_TR(0x515870);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x76ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B515874:{NFSU2_TR(0x515874);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xdaull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B51587b:{NFSU2_TR(0x51587b);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xe0ull))));
w2(U+4,u16(0x11f9ull));
s2(u32(r4(U+0)),r2(U+4));
}
B515884:{NFSU2_TR(0x515884);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xdcull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B51588b:{NFSU2_TR(0x51588b);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xe2ull))));
w2(U+4,u16(0xaull));
s2(u32(r4(U+0)),r2(U+4));
}
B515894:{NFSU2_TR(0x515894);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x61ull))));
w1(U+4,u8(0x5ull));
s1(u32(r4(U+0)),r1(U+4));
}
B515898:{NFSU2_TR(0x515898);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x108ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5158a2:{NFSU2_TR(0x5158a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5158ac:{NFSU2_TR(0x5158ac);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5158b0:L5158b0:{c.instructions+=2;NFSU2_TR(0x5158b0);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5158b2:{NFSU2_TR(0x5158b2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5158c9;}}
}
B5158b4:L5158b4:{c.instructions+=2;NFSU2_TR(0x5158b4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5158b7:{NFSU2_TR(0x5158b7);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5158c9;}}
}
B5158b9:L5158b9:{c.instructions+=4;NFSU2_TR(0x5158b9);
__builtin_memmove((R+24),(R+0),4);
}
B5158bb:{NFSU2_TR(0x5158bb);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0xab4cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B5158c1:{NFSU2_TR(0x5158c1);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x83ad90ull))));
}
B5158c7:{NFSU2_TR(0x5158c7);
{goto L5158cb;}
}
B5158c9:L5158c9:{c.instructions+=1;NFSU2_TR(0x5158c9);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5158cb:L5158cb:{c.instructions+=6;NFSU2_TR(0x5158cb);
__builtin_memmove((R+4),gp(0x7faa48),4);
}
B5158d1:{NFSU2_TR(0x5158d1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5158d5:{NFSU2_TR(0x5158d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x540ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5158db:{NFSU2_TR(0x5158db);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5158dd:{NFSU2_TR(0x5158dd);
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
B5158df:{NFSU2_TR(0x5158df);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L515902;}}
}
B5158e1:L5158e1:{c.instructions+=1;NFSU2_TR(0x5158e1);
__builtin_memmove((R+12),(R+24),4);
}
B5158e3:L5158e3:{c.instructions+=3;NFSU2_TR(0x5158e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5158e5:{NFSU2_TR(0x5158e5);
__builtin_memmove((R+4),(R+12),4);
}
B5158e7:{NFSU2_TR(0x5158e7);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5158eaull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5158ea:L5158ea:{c.instructions+=2;NFSU2_TR(0x5158ea);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5158ee:{NFSU2_TR(0x5158ee);
if(r1(R+518)){{goto L515964;}}
}
B5158f0:L5158f0:{c.instructions+=5;NFSU2_TR(0x5158f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x540ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5158f6:{NFSU2_TR(0x5158f6);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5158f7:{NFSU2_TR(0x5158f7);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1cull))));
}
B5158fa:{NFSU2_TR(0x5158fa);
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
B5158fc:{NFSU2_TR(0x5158fc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5158e3u);}goto L5158e3;}}
}
B5158fe:L5158fe:{c.instructions+=1;NFSU2_TR(0x5158fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B515902:L515902:{c.instructions+=1;NFSU2_TR(0x515902);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B515904:L515904:{c.instructions+=2;NFSU2_TR(0x515904);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B515907:{NFSU2_TR(0x515907);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51597e;}}
}
B515909:L515909:{c.instructions+=5;NFSU2_TR(0x515909);
__builtin_memmove((R+4),gp(0x845e1c),4);
}
B51590f:{NFSU2_TR(0x51590f);
__builtin_memmove((R+12),gp(0x7faa4c),4);
}
B515915:{NFSU2_TR(0x515915);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B515917:{NFSU2_TR(0x515917);
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
B515919:{NFSU2_TR(0x515919);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L51593c;}}
}
B51591b:L51591b:{c.instructions+=1;NFSU2_TR(0x51591b);
w4(R+28,u32(0x8458dcull));
}
B515920:L515920:{c.instructions+=3;NFSU2_TR(0x515920);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B515922:{NFSU2_TR(0x515922);
__builtin_memmove((R+4),(R+28),4);
}
B515924:{NFSU2_TR(0x515924);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x515927ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B515927:L515927:{c.instructions+=2;NFSU2_TR(0x515927);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B515929:{NFSU2_TR(0x515929);
if(r1(R+518)){{goto L515971;}}
}
B51592b:L51592b:{c.instructions+=5;NFSU2_TR(0x51592b);
__builtin_memmove((R+0),gp(0x845e1c),4);
}
B515930:{NFSU2_TR(0x515930);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B515931:{NFSU2_TR(0x515931);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1cull))));
}
B515934:{NFSU2_TR(0x515934);
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
B515936:{NFSU2_TR(0x515936);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x515920u);}goto L515920;}}
}
B515938:L515938:{c.instructions+=1;NFSU2_TR(0x515938);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51593c:L51593c:{c.instructions+=1;NFSU2_TR(0x51593c);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w4(U+12,u32(0x0ull));
s4(u32(r4(U+8)),r4(U+12));
}
B515944:L515944:{c.instructions+=4;NFSU2_TR(0x515944);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B515945:{NFSU2_TR(0x515945);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B515948:{NFSU2_TR(0x515948);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51594c:{NFSU2_TR(0x51594c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5158b0u);}goto L5158b0;}}
}
B515952:L515952:{c.instructions+=7;NFSU2_TR(0x515952);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B515953:{NFSU2_TR(0x515953);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B515954:{NFSU2_TR(0x515954);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x100ull))));
__builtin_memmove((R+4),(U+0),4);
}
B51595a:{NFSU2_TR(0x51595a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B51595b:{NFSU2_TR(0x51595b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B51595c:{NFSU2_TR(0x51595c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B51595f:{NFSU2_TR(0x51595f);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x515750u);}goto L515750;}
}
B515964:L515964:{c.instructions+=5;NFSU2_TR(0x515964);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B515968:{NFSU2_TR(0x515968);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(u32(0x1cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B51596b:{NFSU2_TR(0x51596b);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+24))));
}
B51596d:{NFSU2_TR(0x51596d);
__builtin_memmove((R+24),(R+28),4);
}
B51596f:{NFSU2_TR(0x51596f);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x515904u);}goto L515904;}
}
B515971:L515971:{c.instructions+=3;NFSU2_TR(0x515971);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B515975:{NFSU2_TR(0x515975);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x1cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B515978:{NFSU2_TR(0x515978);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8458dcull))));
}
B51597e:L51597e:{c.instructions+=2;NFSU2_TR(0x51597e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B515980:{NFSU2_TR(0x515980);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51593cu);}goto L51593c;}}
}
B515982:L515982:{c.instructions+=3;NFSU2_TR(0x515982);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B515985:{NFSU2_TR(0x515985);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B515989:{NFSU2_TR(0x515989);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x515944u);}goto L515944;}
}
B515990:L515990:{c.instructions+=19;NFSU2_TR(0x515990);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515991:{NFSU2_TR(0x515991);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515992:{NFSU2_TR(0x515992);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B515996:{NFSU2_TR(0x515996);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B515998:{NFSU2_TR(0x515998);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515999:{NFSU2_TR(0x515999);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51599a:{NFSU2_TR(0x51599a);
__builtin_memmove((R+24),(R+4),4);
}
B51599c:{NFSU2_TR(0x51599c);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B51599e:{NFSU2_TR(0x51599e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5159a1:{NFSU2_TR(0x5159a1);
__builtin_memmove((R+4),(R+518),1);
}
B5159a4:{NFSU2_TR(0x5159a4);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5159a6:{NFSU2_TR(0x5159a6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5159a9:{NFSU2_TR(0x5159a9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B5159ac:{NFSU2_TR(0x5159ac);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5159ad:{NFSU2_TR(0x5159ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5159b1:{NFSU2_TR(0x5159b1);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5159b4:{NFSU2_TR(0x5159b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5159b8:{NFSU2_TR(0x5159b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5159bc:{NFSU2_TR(0x5159bc);
if(r1(R+518)){{goto L515a01;}}
}
B5159be:L5159be:{c.instructions+=4;NFSU2_TR(0x5159be);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5159c1:{NFSU2_TR(0x5159c1);
__builtin_memmove((R+4),(R+12),4);
}
B5159c3:{NFSU2_TR(0x5159c3);
u8 U[12];
w4(U+0,u32(u32(u32(0xa18ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+20),(U+8),4);
}
B5159ca:{NFSU2_TR(0x5159ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5159cfull));
TAIL_STATIC(0x4fe170u,4fe);
}
B5159cf:L5159cf:{c.instructions+=1;NFSU2_TR(0x5159cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5159d4ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5159d4:L5159d4:{c.instructions+=11;NFSU2_TR(0x5159d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5159d7:{NFSU2_TR(0x5159d7);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B5159d9:{NFSU2_TR(0x5159d9);
u8 U[12];
w4(U+0,u32(u32(u32(0x285ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5159e0:{NFSU2_TR(0x5159e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5159e3:{NFSU2_TR(0x5159e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5159e5:{NFSU2_TR(0x5159e5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+20)),r4(U+0));
}
B5159e8:{NFSU2_TR(0x5159e8);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5159ec:{NFSU2_TR(0x5159ec);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B5159ee:{NFSU2_TR(0x5159ee);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5159f1:{NFSU2_TR(0x5159f1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5159f3:{NFSU2_TR(0x5159f3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L515a01;}}
}
B5159f5:L5159f5:{c.instructions+=2;NFSU2_TR(0x5159f5);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5159f9:{NFSU2_TR(0x5159f9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L515a01;}}
}
B5159fb:L5159fb:{c.instructions+=1;NFSU2_TR(0x5159fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B515a01:L515a01:{c.instructions+=3;NFSU2_TR(0x515a01);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B515a05:{NFSU2_TR(0x515a05);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B515a07:{NFSU2_TR(0x515a07);
if(r1(R+518)){{goto L515a25;}}
}
B515a09:L515a09:{c.instructions+=2;NFSU2_TR(0x515a09);
__builtin_memmove((R+4),(R+12),4);
}
B515a0b:{NFSU2_TR(0x515a0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x515a10ull));
TAIL_STATIC(0x4fe170u,4fe);
}
B515a10:L515a10:{c.instructions+=1;NFSU2_TR(0x515a10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x515a15ull));
TAIL_STATIC(0x75bed4u,75b);
}
B515a15:L515a15:{c.instructions+=3;NFSU2_TR(0x515a15);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa48ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B515a1b:{NFSU2_TR(0x515a1b);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B515a1f:{NFSU2_TR(0x515a1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa44ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B515a25:L515a25:{c.instructions+=24;NFSU2_TR(0x515a25);
{u32 ea_=u32(r4(R+12)+u32(248u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B515a2b:{NFSU2_TR(0x515a2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa08ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B515a31:{NFSU2_TR(0x515a31);
{u32 ea_=u32(r4(R+24)+u32(2560u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B515a37:{NFSU2_TR(0x515a37);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B515a3b:{NFSU2_TR(0x515a3b);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B515a3d:{NFSU2_TR(0x515a3d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515a3e:{NFSU2_TR(0x515a3e);
{u32 ea_=u32(r4(R+24)+u32(2560u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B515a44:{NFSU2_TR(0x515a44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+20),(U+0),4);
}
B515a46:{NFSU2_TR(0x515a46);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B515a49:{NFSU2_TR(0x515a49);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B515a4d:{NFSU2_TR(0x515a4d);
__builtin_memmove((R+4),(R+518),1);
}
B515a50:{NFSU2_TR(0x515a50);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515a51:{NFSU2_TR(0x515a51);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B515a53:{NFSU2_TR(0x515a53);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B515a59:{NFSU2_TR(0x515a59);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa08ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B515a5f:{NFSU2_TR(0x515a5f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B515a63:{NFSU2_TR(0x515a63);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B515a65:{NFSU2_TR(0x515a65);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B515a6b:{NFSU2_TR(0x515a6b);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B515a6f:{NFSU2_TR(0x515a6f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515a70:{NFSU2_TR(0x515a70);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515a71:{NFSU2_TR(0x515a71);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515a72:{NFSU2_TR(0x515a72);
__builtin_memmove((R+4),(R+24),4);
}
B515a74:{NFSU2_TR(0x515a74);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x515a79ull));
TAIL_STATIC(0x502df0u,502);
}
B515a79:L515a79:{c.instructions+=4;NFSU2_TR(0x515a79);
w4(R+8,u32(r1(R+0)));
}
B515a7c:{NFSU2_TR(0x515a7c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515a7d:{NFSU2_TR(0x515a7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x220ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B515a83:{NFSU2_TR(0x515a83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x515a88ull));
TAIL_STATIC(0x5d3e40u,5d3);
}
B515a88:L515a88:{c.instructions+=3;NFSU2_TR(0x515a88);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B515a8b:{NFSU2_TR(0x515a8b);
__builtin_memmove((R+4),(R+24),4);
}
B515a8d:{NFSU2_TR(0x515a8d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x515a92ull));
TAIL_STATIC(0x502f00u,502);
}
B515a92:L515a92:{c.instructions+=6;NFSU2_TR(0x515a92);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B515a93:{NFSU2_TR(0x515a93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B515a94:{NFSU2_TR(0x515a94);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B515a95:{NFSU2_TR(0x515a95);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B515a96:{NFSU2_TR(0x515a96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B515a97:{NFSU2_TR(0x515a97);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B515aa0:L515aa0:{c.instructions+=12;NFSU2_TR(0x515aa0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B515aa4:{NFSU2_TR(0x515aa4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515aa5:{NFSU2_TR(0x515aa5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515aa6:{NFSU2_TR(0x515aa6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515aa7:{NFSU2_TR(0x515aa7);
__builtin_memmove((R+24),(R+4),4);
}
B515aa9:{NFSU2_TR(0x515aa9);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B515aab:{NFSU2_TR(0x515aab);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B515aad:{NFSU2_TR(0x515aad);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515aae:{NFSU2_TR(0x515aae);
__builtin_memmove((R+28),(R+24),4);
}
B515ab0:{NFSU2_TR(0x515ab0);
w4(R+4,u32(0x8ull));
}
B515ab5:{NFSU2_TR(0x515ab5);
w4(R+8,u32(0xcf4f80c2ull));
}
B515aba:{NFSU2_TR(0x515aba);
if(r1(R+518)){{goto L515ac1;}}
}
B515abc:L515abc:{c.instructions+=1;NFSU2_TR(0x515abc);
w4(R+8,u32(0xd87133bdull));
}
B515ac1:L515ac1:{c.instructions+=1;NFSU2_TR(0x515ac1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B515ac3:L515ac3:{c.instructions+=1;NFSU2_TR(0x515ac3);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L515ac5;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x515ac3u);}goto L515ac3;}
}
B515ac5:L515ac5:{c.instructions+=1;NFSU2_TR(0x515ac5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x515acaull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B515aca:L515aca:{c.instructions+=3;NFSU2_TR(0x515aca);
__builtin_memmove((R+8),(R+0),4);
}
B515acc:{NFSU2_TR(0x515acc);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B515ace:{NFSU2_TR(0x515ace);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L515adc;}}
}
B515ad0:L515ad0:{c.instructions+=2;NFSU2_TR(0x515ad0);
w4(R+8,u32(0xc01a6f63ull));
}
B515ad5:{NFSU2_TR(0x515ad5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x515adaull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B515ada:L515ada:{c.instructions+=1;NFSU2_TR(0x515ada);
__builtin_memmove((R+8),(R+0),4);
}
B515adc:L515adc:{c.instructions+=5;NFSU2_TR(0x515adc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515add:{NFSU2_TR(0x515add);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B515adf:{NFSU2_TR(0x515adf);
__builtin_memmove((R+28),(R+24),4);
}
B515ae1:{NFSU2_TR(0x515ae1);
w4(R+4,u32(0x8ull));
}
B515ae6:{NFSU2_TR(0x515ae6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515ae7:L515ae7:{c.instructions+=1;NFSU2_TR(0x515ae7);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L515ae9;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x515ae7u);}goto L515ae7;}
}
B515ae9:L515ae9:{c.instructions+=1;NFSU2_TR(0x515ae9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x515aeeull));
TAIL_STATIC(0x43dbd0u,43d);
}
B515aee:L515aee:{c.instructions+=7;NFSU2_TR(0x515aee);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B515af1:{NFSU2_TR(0x515af1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B515af7:{NFSU2_TR(0x515af7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B515afb:{NFSU2_TR(0x515afb);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0f9ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B515b02:{NFSU2_TR(0x515b02);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0f8ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B515b09:{NFSU2_TR(0x515b09);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0faull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B515b10:{NFSU2_TR(0x515b10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x515b15ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x515800u);}goto L515800;}
}
B515b15:L515b15:{c.instructions+=4;NFSU2_TR(0x515b15);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x250ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B515b1f:{NFSU2_TR(0x515b1f);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B515b25:{NFSU2_TR(0x515b25);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B515b27:{NFSU2_TR(0x515b27);
if(r1(R+518)){{goto L515b31;}}
}
B515b29:L515b29:{c.instructions+=1;NFSU2_TR(0x515b29);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x515b2eull));
TAIL_STATIC(0x40cb20u,40c);
}
B515b2e:L515b2e:{c.instructions+=1;NFSU2_TR(0x515b2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B515b31:L515b31:{c.instructions+=4;NFSU2_TR(0x515b31);
w4(R+4,u32(0x20ull));
}
B515b36:{NFSU2_TR(0x515b36);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B515b38:{NFSU2_TR(0x515b38);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x258ull))));
__builtin_memmove((R+28),(U+0),4);
}
B515b3e:{NFSU2_TR(0x515b3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x254ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B515b44:L515b44:{c.instructions+=1;NFSU2_TR(0x515b44);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L515b46;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x515b44u);}goto L515b44;}
}
B515b46:L515b46:{c.instructions+=2;NFSU2_TR(0x515b46);
w4(R+20,u32(0x7ecd8cull));
}
B515b4b:{NFSU2_TR(0x515b4b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2d8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B515b51:L515b51:{c.instructions+=5;NFSU2_TR(0x515b51);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+28)),r4(U+0));
}
B515b53:{NFSU2_TR(0x515b53);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B515b56:{NFSU2_TR(0x515b56);
u8 U[4];
w4(U+0,u32(0x789bd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515b5b:{NFSU2_TR(0x515b5b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515b5c:{NFSU2_TR(0x515b5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x515b61ull));
TAIL_STATIC(0x43dc30u,43d);
}
B515b61:L515b61:{c.instructions+=3;NFSU2_TR(0x515b61);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B515b64:{NFSU2_TR(0x515b64);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B515b66:{NFSU2_TR(0x515b66);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L515b6f;}}
}
B515b68:L515b68:{c.instructions+=2;NFSU2_TR(0x515b68);
w4(R+0,u32(0x1ull));
}
B515b6d:{NFSU2_TR(0x515b6d);
{goto L515bb6;}
}
B515b6f:L515b6f:{c.instructions+=6;NFSU2_TR(0x515b6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B515b71:{NFSU2_TR(0x515b71);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B515b74:{NFSU2_TR(0x515b74);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7ecd8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B515b7a:{NFSU2_TR(0x515b7a);
u8 U[4];
w4(U+0,u32(0x789af4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515b7f:{NFSU2_TR(0x515b7f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515b80:{NFSU2_TR(0x515b80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x515b85ull));
TAIL_STATIC(0x43dc30u,43d);
}
B515b85:L515b85:{c.instructions+=3;NFSU2_TR(0x515b85);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B515b88:{NFSU2_TR(0x515b88);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B515b8a:{NFSU2_TR(0x515b8a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L515b93;}}
}
B515b8c:L515b8c:{c.instructions+=2;NFSU2_TR(0x515b8c);
w4(R+0,u32(0x2ull));
}
B515b91:{NFSU2_TR(0x515b91);
{goto L515bb6;}
}
B515b93:L515b93:{c.instructions+=6;NFSU2_TR(0x515b93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B515b95:{NFSU2_TR(0x515b95);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B515b98:{NFSU2_TR(0x515b98);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7ecd8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B515b9e:{NFSU2_TR(0x515b9e);
u8 U[4];
w4(U+0,u32(0x79b0f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515ba3:{NFSU2_TR(0x515ba3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515ba4:{NFSU2_TR(0x515ba4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x515ba9ull));
TAIL_STATIC(0x43dc30u,43d);
}
B515ba9:L515ba9:{c.instructions+=5;NFSU2_TR(0x515ba9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B515bac:{NFSU2_TR(0x515bac);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B515bae:{NFSU2_TR(0x515bae);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B515bb0:{NFSU2_TR(0x515bb0);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffffdull))));
}
B515bb3:{NFSU2_TR(0x515bb3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
}
B515bb6:L515bb6:{c.instructions+=6;NFSU2_TR(0x515bb6);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B515bb9:{NFSU2_TR(0x515bb9);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x10ull))));
}
B515bbc:{NFSU2_TR(0x515bbc);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B515bbd:{NFSU2_TR(0x515bbd);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x8ull))));
}
B515bc0:{NFSU2_TR(0x515bc0);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x7ecf3cull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ecf3cull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B515bc6:{NFSU2_TR(0x515bc6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x515b51u);}goto L515b51;}}
}
B515bc8:L515bc8:{c.instructions+=2;NFSU2_TR(0x515bc8);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B515bce:{NFSU2_TR(0x515bce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x515bd3ull));
TAIL_STATIC(0x479220u,479);
}
B515bd3:L515bd3:{c.instructions+=3;NFSU2_TR(0x515bd3);
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
B515bd5:{NFSU2_TR(0x515bd5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0fcull))));
__builtin_memmove((R+28),(U+0),4);
}
B515bdb:{NFSU2_TR(0x515bdb);
w4(R+4,u32(0x294ull));
}
B515be0:L515be0:{c.instructions+=1;NFSU2_TR(0x515be0);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L515be2;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x515be0u);}goto L515be0;}
}
B515be2:L515be2:{c.instructions+=6;NFSU2_TR(0x515be2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B515be3:{NFSU2_TR(0x515be3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0f4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B515be9:{NFSU2_TR(0x515be9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B515bea:{NFSU2_TR(0x515bea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B515beb:{NFSU2_TR(0x515beb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B515bec:{NFSU2_TR(0x515bec);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B515bf0:L515bf0:{c.instructions+=11;NFSU2_TR(0x515bf0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515bf1:{NFSU2_TR(0x515bf1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515bf2:{NFSU2_TR(0x515bf2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515bf3:{NFSU2_TR(0x515bf3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B515bf7:{NFSU2_TR(0x515bf7);
__builtin_memmove((R+12),(R+4),4);
}
B515bf9:{NFSU2_TR(0x515bf9);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x33ull))));
__builtin_memmove((R+8),(U+0),4);
}
B515bfc:{NFSU2_TR(0x515bfc);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B515bff:{NFSU2_TR(0x515bff);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B515c01:{NFSU2_TR(0x515c01);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B515c03:{NFSU2_TR(0x515c03);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B515c0b:{NFSU2_TR(0x515c0b);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L515c11;}}
}
B515c0d:L515c0d:{c.instructions+=2;NFSU2_TR(0x515c0d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+28)),r4(U+0));
}
B515c0f:{NFSU2_TR(0x515c0f);
__builtin_memmove((R+28),(R+0),4);
}
B515c11:L515c11:{c.instructions+=3;NFSU2_TR(0x515c11);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B515c14:{NFSU2_TR(0x515c14);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B515c16:{NFSU2_TR(0x515c16);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L515c20;}}
}
B515c18:L515c18:{c.instructions+=3;NFSU2_TR(0x515c18);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B515c1c:{NFSU2_TR(0x515c1c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+28)),r4(U+0));
}
B515c1e:{NFSU2_TR(0x515c1e);
__builtin_memmove((R+28),(R+0),4);
}
B515c20:L515c20:{c.instructions+=3;NFSU2_TR(0x515c20);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B515c23:{NFSU2_TR(0x515c23);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B515c25:{NFSU2_TR(0x515c25);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L515c31;}}
}
B515c27:L515c27:{c.instructions+=4;NFSU2_TR(0x515c27);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x49ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B515c2a:{NFSU2_TR(0x515c2a);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x49ull))));
__builtin_memmove((R+0),(U+0),4);
}
B515c2d:{NFSU2_TR(0x515c2d);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+28)),r1(U+0));
}
B515c2f:{NFSU2_TR(0x515c2f);
__builtin_memmove((R+28),(R+24),4);
}
B515c31:L515c31:{c.instructions+=3;NFSU2_TR(0x515c31);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B515c34:{NFSU2_TR(0x515c34);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B515c36:{NFSU2_TR(0x515c36);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L515c42;}}
}
B515c38:L515c38:{c.instructions+=4;NFSU2_TR(0x515c38);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B515c3b:{NFSU2_TR(0x515c3b);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4aull))));
__builtin_memmove((R+0),(U+0),4);
}
B515c3e:{NFSU2_TR(0x515c3e);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+28)),r1(U+0));
}
B515c40:{NFSU2_TR(0x515c40);
__builtin_memmove((R+28),(R+24),4);
}
B515c42:L515c42:{c.instructions+=3;NFSU2_TR(0x515c42);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B515c45:{NFSU2_TR(0x515c45);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B515c47:{NFSU2_TR(0x515c47);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L515c53;}}
}
B515c49:L515c49:{c.instructions+=4;NFSU2_TR(0x515c49);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4bull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B515c4c:{NFSU2_TR(0x515c4c);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4bull))));
__builtin_memmove((R+0),(U+0),4);
}
B515c4f:{NFSU2_TR(0x515c4f);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+28)),r1(U+0));
}
B515c51:{NFSU2_TR(0x515c51);
__builtin_memmove((R+28),(R+24),4);
}
B515c53:L515c53:{c.instructions+=3;NFSU2_TR(0x515c53);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((R+0),(U+0),4);
}
B515c56:{NFSU2_TR(0x515c56);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B515c58:{NFSU2_TR(0x515c58);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L515c66;}}
}
B515c5a:L515c5a:{c.instructions+=2;NFSU2_TR(0x515c5a);
w4(R+4,u32(0x5ull));
}
B515c5f:{NFSU2_TR(0x515c5f);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x58ull))));
__builtin_memmove((R+24),(U+0),4);
}
B515c62:L515c62:{c.instructions+=1;NFSU2_TR(0x515c62);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L515c64;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x515c62u);}goto L515c62;}
}
B515c64:L515c64:{c.instructions+=1;NFSU2_TR(0x515c64);
__builtin_memmove((R+28),(R+0),4);
}
B515c66:L515c66:{c.instructions+=3;NFSU2_TR(0x515c66);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((R+0),(U+0),4);
}
B515c69:{NFSU2_TR(0x515c69);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B515c6b:{NFSU2_TR(0x515c6b);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L515c80;}}
}
B515c6d:L515c6d:{c.instructions+=2;NFSU2_TR(0x515c6d);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x80ull))));
__builtin_memmove((R+24),(U+0),4);
}
B515c73:{NFSU2_TR(0x515c73);
w4(R+4,u32(0x5ull));
}
B515c78:L515c78:{c.instructions+=1;NFSU2_TR(0x515c78);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L515c7a;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x515c78u);}goto L515c78;}
}
B515c7a:L515c7a:{c.instructions+=4;NFSU2_TR(0x515c7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B515c7b:{NFSU2_TR(0x515c7b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B515c7c:{NFSU2_TR(0x515c7c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B515c7d:{NFSU2_TR(0x515c7d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B515c80:L515c80:{c.instructions+=5;NFSU2_TR(0x515c80);
__builtin_memmove((R+0),(R+28),4);
}
B515c82:{NFSU2_TR(0x515c82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B515c83:{NFSU2_TR(0x515c83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B515c84:{NFSU2_TR(0x515c84);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B515c85:{NFSU2_TR(0x515c85);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B515c90:L515c90:{c.instructions+=10;NFSU2_TR(0x515c90);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B515c94:{NFSU2_TR(0x515c94);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515c95:{NFSU2_TR(0x515c95);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515c96:{NFSU2_TR(0x515c96);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x33ull))));
__builtin_memmove((R+20),(U+0),4);
}
B515c99:{NFSU2_TR(0x515c99);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B515c9c:{NFSU2_TR(0x515c9c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B515c9f:{NFSU2_TR(0x515c9f);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B515ca1:{NFSU2_TR(0x515ca1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515ca2:{NFSU2_TR(0x515ca2);
__builtin_memmove((R+8),(R+4),4);
}
B515ca4:{NFSU2_TR(0x515ca4);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L515caf;}}
}
B515ca6:L515ca6:{c.instructions+=5;NFSU2_TR(0x515ca6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515ca7:{NFSU2_TR(0x515ca7);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+12),(U+0),1);
}
B515ca9:{NFSU2_TR(0x515ca9);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x49ull))));
__builtin_memmove((R+4),(U+0),4);
}
B515cac:{NFSU2_TR(0x515cac);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
s1(u32(r4(R+4)),r1(U+0));
}
B515cae:{NFSU2_TR(0x515cae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B515caf:L515caf:{c.instructions+=3;NFSU2_TR(0x515caf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B515cb2:{NFSU2_TR(0x515cb2);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B515cb4:{NFSU2_TR(0x515cb4);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L515cbd;}}
}
B515cb6:L515cb6:{c.instructions+=3;NFSU2_TR(0x515cb6);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+0),(U+0),1);
}
B515cb8:{NFSU2_TR(0x515cb8);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4aull))));
__builtin_memmove((R+24),(U+0),4);
}
B515cbb:{NFSU2_TR(0x515cbb);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+24)),r1(U+0));
}
B515cbd:L515cbd:{c.instructions+=4;NFSU2_TR(0x515cbd);
__builtin_memmove((R+0),(R+4),4);
}
B515cbf:{NFSU2_TR(0x515cbf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B515cc2:{NFSU2_TR(0x515cc2);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B515cc4:{NFSU2_TR(0x515cc4);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L515ccd;}}
}
B515cc6:L515cc6:{c.instructions+=3;NFSU2_TR(0x515cc6);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+0),(U+0),1);
}
B515cc8:{NFSU2_TR(0x515cc8);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4bull))));
__builtin_memmove((R+4),(U+0),4);
}
B515ccb:{NFSU2_TR(0x515ccb);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+4)),r1(U+0));
}
B515ccd:L515ccd:{c.instructions+=3;NFSU2_TR(0x515ccd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((R+0),(U+0),4);
}
B515cd0:{NFSU2_TR(0x515cd0);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B515cd2:{NFSU2_TR(0x515cd2);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L515cde;}}
}
B515cd4:L515cd4:{c.instructions+=2;NFSU2_TR(0x515cd4);
w4(R+4,u32(0x5ull));
}
B515cd9:{NFSU2_TR(0x515cd9);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x58ull))));
__builtin_memmove((R+28),(U+0),4);
}
B515cdc:L515cdc:{c.instructions+=1;NFSU2_TR(0x515cdc);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L515cde;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x515cdcu);}goto L515cdc;}
}
B515cde:L515cde:{c.instructions+=4;NFSU2_TR(0x515cde);
__builtin_memmove((R+24),(R+0),4);
}
B515ce0:{NFSU2_TR(0x515ce0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((R+0),(U+0),4);
}
B515ce3:{NFSU2_TR(0x515ce3);
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
B515ce5:{NFSU2_TR(0x515ce5);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L515cf4;}}
}
B515ce7:L515ce7:{c.instructions+=2;NFSU2_TR(0x515ce7);
w4(R+4,u32(0x5ull));
}
B515cec:{NFSU2_TR(0x515cec);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x80ull))));
__builtin_memmove((R+28),(U+0),4);
}
B515cf2:L515cf2:{c.instructions+=1;NFSU2_TR(0x515cf2);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L515cf4;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x515cf2u);}goto L515cf2;}
}
B515cf4:L515cf4:{c.instructions+=4;NFSU2_TR(0x515cf4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B515cf5:{NFSU2_TR(0x515cf5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B515cf6:{NFSU2_TR(0x515cf6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B515cf7:{NFSU2_TR(0x515cf7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B515d00:L515d00:{c.instructions+=8;NFSU2_TR(0x515d00);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515d01:{NFSU2_TR(0x515d01);
__builtin_memmove((R+20),(R+16),4);
}
B515d03:{NFSU2_TR(0x515d03);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515d04:{NFSU2_TR(0x515d04);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515d05:{NFSU2_TR(0x515d05);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B515d08:{NFSU2_TR(0x515d08);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B515d0a:{NFSU2_TR(0x515d0a);
__builtin_memmove((R+0),(R+4),4);
}
B515d0c:{NFSU2_TR(0x515d0c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L515d24;}}
}
B515d0e:L515d0e:{c.instructions+=2;NFSU2_TR(0x515d0e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B515d11:{NFSU2_TR(0x515d11);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L515d24;}}
}
B515d13:L515d13:{c.instructions+=4;NFSU2_TR(0x515d13);
__builtin_memmove((R+4),(R+28),4);
}
B515d15:{NFSU2_TR(0x515d15);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0xab4cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B515d1b:{NFSU2_TR(0x515d1b);
u8 U[12];
w4(U+0,u32(u32(u32(0x3c0ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B515d22:{NFSU2_TR(0x515d22);
{goto L515d26;}
}
B515d24:L515d24:{c.instructions+=1;NFSU2_TR(0x515d24);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B515d26:L515d26:{c.instructions+=2;NFSU2_TR(0x515d26);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B515d2d:{NFSU2_TR(0x515d2d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L515d36;}}
}
B515d2f:L515d2f:{c.instructions+=2;NFSU2_TR(0x515d2f);
__builtin_memmove((R+0),gp(0x863480),4);
}
B515d34:{NFSU2_TR(0x515d34);
{goto L515d3d;}
}
B515d36:L515d36:{c.instructions+=1;NFSU2_TR(0x515d36);
u8 U[16];
w4(U+0,u32(u32(u32(0xe8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B515d3d:L515d3d:{c.instructions+=2;NFSU2_TR(0x515d3d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515d3e:{NFSU2_TR(0x515d3e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x515d43ull));
TAIL_STATIC(0x503510u,503);
}
B515d43:L515d43:{c.instructions+=3;NFSU2_TR(0x515d43);
__builtin_memmove((R+24),(R+0),4);
}
B515d45:{NFSU2_TR(0x515d45);
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
B515d47:{NFSU2_TR(0x515d47);
if(r1(R+518)){{goto L515d60;}}
}
B515d49:L515d49:{c.instructions+=3;NFSU2_TR(0x515d49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B515d4b:{NFSU2_TR(0x515d4b);
__builtin_memmove((R+4),(R+24),4);
}
B515d4d:{NFSU2_TR(0x515d4d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x515d50ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B515d50:L515d50:{c.instructions+=8;NFSU2_TR(0x515d50);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B515d53:{NFSU2_TR(0x515d53);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B515d56:{NFSU2_TR(0x515d56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B515d58:{NFSU2_TR(0x515d58);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515d59:{NFSU2_TR(0x515d59);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515d5a:{NFSU2_TR(0x515d5a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515d5b:{NFSU2_TR(0x515d5b);
__builtin_memmove((R+4),(R+24),4);
}
B515d5d:{NFSU2_TR(0x515d5d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x515d60ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B515d60:L515d60:{c.instructions+=4;NFSU2_TR(0x515d60);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B515d61:{NFSU2_TR(0x515d61);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B515d62:{NFSU2_TR(0x515d62);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B515d63:{NFSU2_TR(0x515d63);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B515d70:L515d70:{c.instructions+=10;NFSU2_TR(0x515d70);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515d71:{NFSU2_TR(0x515d71);
__builtin_memmove((R+12),(R+4),4);
}
B515d73:{NFSU2_TR(0x515d73);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515d74:{NFSU2_TR(0x515d74);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515d75:{NFSU2_TR(0x515d75);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3c0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B515d7b:{NFSU2_TR(0x515d7b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515d7c:{NFSU2_TR(0x515d7c);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1677cull))));
__builtin_memmove((R+20),(U+0),4);
}
B515d82:{NFSU2_TR(0x515d82);
__builtin_memmove((R+28),(R+0),4);
}
B515d84:{NFSU2_TR(0x515d84);
w4(R+4,u32(0x26f6ull));
}
B515d89:{NFSU2_TR(0x515d89);
__builtin_memmove((R+24),(R+20),4);
}
B515d8b:L515d8b:{c.instructions+=1;NFSU2_TR(0x515d8b);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L515d8d;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x515d8bu);}goto L515d8b;}
}
B515d8d:L515d8d:{c.instructions+=2;NFSU2_TR(0x515d8d);
__builtin_memmove((R+4),(R+0),4);
}
B515d8f:{NFSU2_TR(0x515d8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x515d94ull));
TAIL_STATIC(0x5036f0u,503);
}
B515d94:L515d94:{c.instructions+=7;NFSU2_TR(0x515d94);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x9bd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B515d9a:{NFSU2_TR(0x515d9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B515d9b:{NFSU2_TR(0x515d9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B515d9c:{NFSU2_TR(0x515d9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B515d9d:{NFSU2_TR(0x515d9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B515da3:{NFSU2_TR(0x515da3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B515da4:{NFSU2_TR(0x515da4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B515db0:L515db0:{c.instructions+=8;NFSU2_TR(0x515db0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515db1:{NFSU2_TR(0x515db1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515db2:{NFSU2_TR(0x515db2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B515db6:{NFSU2_TR(0x515db6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515db7:{NFSU2_TR(0x515db7);
__builtin_memmove((R+24),(R+4),4);
}
B515db9:{NFSU2_TR(0x515db9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515dba:{NFSU2_TR(0x515dba);
__builtin_memmove((R+4),(R+20),4);
}
B515dbc:{NFSU2_TR(0x515dbc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x515dc1ull));
TAIL_STATIC(0x5ee3a0u,5ee);
}
B515dc1:L515dc1:{c.instructions+=6;NFSU2_TR(0x515dc1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+12),(U+0),4);
}
B515dc4:{NFSU2_TR(0x515dc4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B515dc8:{NFSU2_TR(0x515dc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B515dcb:{NFSU2_TR(0x515dcb);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B515dd1:{NFSU2_TR(0x515dd1);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B515dd3:{NFSU2_TR(0x515dd3);
if(r1(R+518)){{goto L515e18;}}
}
B515dd5:L515dd5:{c.instructions+=3;NFSU2_TR(0x515dd5);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B515dd9:{NFSU2_TR(0x515dd9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B515ddb:{NFSU2_TR(0x515ddb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L515e18;}}
}
B515ddd:L515ddd:{c.instructions+=2;NFSU2_TR(0x515ddd);
u8 U[14];
__builtin_memmove((U+6),gp(0x850088),4);
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
B515de4:{NFSU2_TR(0x515de4);
if(r1(R+518)){{goto L515e18;}}
}
B515de6:L515de6:{c.instructions+=4;NFSU2_TR(0x515de6);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B515dea:{NFSU2_TR(0x515dea);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515deb:{NFSU2_TR(0x515deb);
w4(R+4,u32(0x89cf48ull));
}
B515df0:{NFSU2_TR(0x515df0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x515df5ull));
TAIL_STATIC(0x5f0220u,5f0);
}
B515df5:L515df5:{c.instructions+=3;NFSU2_TR(0x515df5);
__builtin_memmove((R+28),(R+0),4);
}
B515df7:{NFSU2_TR(0x515df7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B515df9:{NFSU2_TR(0x515df9);
if(r1(R+518)){{goto L515e18;}}
}
B515dfb:L515dfb:{c.instructions+=2;NFSU2_TR(0x515dfb);
__builtin_memmove((R+4),(R+28),4);
}
B515dfd:{NFSU2_TR(0x515dfd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x515e02ull));
TAIL_STATIC(0x5efa00u,5ef);
}
B515e02:L515e02:{c.instructions+=2;NFSU2_TR(0x515e02);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B515e04:{NFSU2_TR(0x515e04);
if(r1(R+518)){{goto L515e18;}}
}
B515e06:L515e06:{c.instructions+=4;NFSU2_TR(0x515e06);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x24ull))));
}
B515e09:{NFSU2_TR(0x515e09);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515e0a:{NFSU2_TR(0x515e0a);
__builtin_memmove((R+4),(R+24),4);
}
B515e0c:{NFSU2_TR(0x515e0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x515e11ull));
TAIL_STATIC(0x511900u,511);
}
B515e11:L515e11:{c.instructions+=5;NFSU2_TR(0x515e11);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B515e12:{NFSU2_TR(0x515e12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B515e13:{NFSU2_TR(0x515e13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B515e14:{NFSU2_TR(0x515e14);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B515e15:{NFSU2_TR(0x515e15);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B515e18:L515e18:{c.instructions+=11;NFSU2_TR(0x515e18);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B515e1c:{NFSU2_TR(0x515e1c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+24)),r4(U+0));
}
B515e1e:{NFSU2_TR(0x515e1e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B515e21:{NFSU2_TR(0x515e21);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B515e25:{NFSU2_TR(0x515e25);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B515e28:{NFSU2_TR(0x515e28);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B515e2c:{NFSU2_TR(0x515e2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B515e2f:{NFSU2_TR(0x515e2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x198ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B515e35:{NFSU2_TR(0x515e35);
__builtin_memmove((R+4),(R+20),4);
}
B515e37:{NFSU2_TR(0x515e37);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B515e3a:{NFSU2_TR(0x515e3a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x515e3full));
TAIL_STATIC(0x5ee2d0u,5ee);
}
B515e3f:L515e3f:{c.instructions+=1;NFSU2_TR(0x515e3f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x515e44ull));
TAIL_STATIC(0x75bed4u,75b);
}
B515e44:L515e44:{c.instructions+=39;NFSU2_TR(0x515e44);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x140ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B515e4a:{NFSU2_TR(0x515e4a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B515e4e:{NFSU2_TR(0x515e4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B515e54:{NFSU2_TR(0x515e54);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B515e56:{NFSU2_TR(0x515e56);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B515e59:{NFSU2_TR(0x515e59);
{u32 ea_=u32(r4(R+24)+u32(200u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B515e5f:{NFSU2_TR(0x515e5f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+8),(U+0),4);
}
B515e62:{NFSU2_TR(0x515e62);
{u32 ea_=u32(r4(R+8)+u32(1040u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B515e68:{NFSU2_TR(0x515e68);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B515e6e:{NFSU2_TR(0x515e6e);
{u32 ea_=u32(r4(R+24)+u32(248u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B515e74:{NFSU2_TR(0x515e74);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1a0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B515e7a:{NFSU2_TR(0x515e7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B515e80:{NFSU2_TR(0x515e80);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1a4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B515e86:{NFSU2_TR(0x515e86);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B515e8c:{NFSU2_TR(0x515e8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B515e92:{NFSU2_TR(0x515e92);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B515e98:{NFSU2_TR(0x515e98);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B515e9e:{NFSU2_TR(0x515e9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B515ea4:{NFSU2_TR(0x515ea4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B515eaa:{NFSU2_TR(0x515eaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B515eb0:{NFSU2_TR(0x515eb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B515eb6:{NFSU2_TR(0x515eb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B515ebc:{NFSU2_TR(0x515ebc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1b8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B515ec2:{NFSU2_TR(0x515ec2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B515ec8:{NFSU2_TR(0x515ec8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B515ece:{NFSU2_TR(0x515ece);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x128ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B515ed4:{NFSU2_TR(0x515ed4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1c0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B515eda:{NFSU2_TR(0x515eda);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B515ee0:{NFSU2_TR(0x515ee0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1c4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B515ee6:{NFSU2_TR(0x515ee6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B515eec:{NFSU2_TR(0x515eec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B515ef2:{NFSU2_TR(0x515ef2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x134ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B515ef8:{NFSU2_TR(0x515ef8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B515efe:{NFSU2_TR(0x515efe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x138ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B515f04:{NFSU2_TR(0x515f04);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1d0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B515f0a:{NFSU2_TR(0x515f0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B515f10:{NFSU2_TR(0x515f10);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+28)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B515f16:{NFSU2_TR(0x515f16);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B515f19:{NFSU2_TR(0x515f19);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L515f29;}}
}
B515f1b:L515f1b:{c.instructions+=2;NFSU2_TR(0x515f1b);
__builtin_memmove((R+4),(R+20),4);
}
B515f1d:{NFSU2_TR(0x515f1d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x515f22ull));
TAIL_STATIC(0x5ee2b0u,5ee);
}
B515f22:L515f22:{c.instructions+=3;NFSU2_TR(0x515f22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B515f24:{NFSU2_TR(0x515f24);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B515f27:{NFSU2_TR(0x515f27);
{goto L515f32;}
}
B515f29:L515f29:{c.instructions+=2;NFSU2_TR(0x515f29);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x198ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B515f2f:{NFSU2_TR(0x515f2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B515f32:L515f32:{c.instructions+=2;NFSU2_TR(0x515f32);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B515f36:{NFSU2_TR(0x515f36);
if(r1(R+518)){{goto L515fcc;}}
}
B515f3c:L515f3c:{c.instructions+=3;NFSU2_TR(0x515f3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1d4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B515f42:{NFSU2_TR(0x515f42);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B515f44:{NFSU2_TR(0x515f44);
if(r1(R+518)){{goto L515fca;}}
}
B515f4a:L515f4a:{c.instructions+=3;NFSU2_TR(0x515f4a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B515f4c:{NFSU2_TR(0x515f4c);
__builtin_memmove((R+4),(R+28),4);
}
B515f4e:{NFSU2_TR(0x515f4e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x515f53ull));
TAIL_STATIC(0x56c7d0u,56c);
}
B515f53:L515f53:{c.instructions+=7;NFSU2_TR(0x515f53);
{u32 ea_=u32(r4(R+24)+u32(260u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B515f59:{NFSU2_TR(0x515f59);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B515f5c:{NFSU2_TR(0x515f5c);
{u32 ea_=u32(r4(R+0)+u32(2308u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B515f62:{NFSU2_TR(0x515f62);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B515f68:{NFSU2_TR(0x515f68);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B515f6a:{NFSU2_TR(0x515f6a);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B515f6d:{NFSU2_TR(0x515f6d);
if(r1(R+518)){{goto L515f77;}}
}
B515f6f:L515f6f:{c.instructions+=2;NFSU2_TR(0x515f6f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B515f71:{NFSU2_TR(0x515f71);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B515f77:L515f77:{c.instructions+=7;NFSU2_TR(0x515f77);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B515f7b:{NFSU2_TR(0x515f7b);
{u32 ea_=u32(r4(R+24)+u32(264u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B515f81:{NFSU2_TR(0x515f81);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x21ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B515f85:{NFSU2_TR(0x515f85);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B515f88:{NFSU2_TR(0x515f88);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B515f8e:{NFSU2_TR(0x515f8e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B515f90:{NFSU2_TR(0x515f90);
if(r1(R+518)){{goto L515f97;}}
}
B515f92:L515f92:{c.instructions+=2;NFSU2_TR(0x515f92);
{u32 ea_=u32(r4(R+0)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B515f95:{NFSU2_TR(0x515f95);
{goto L515f9d;}
}
B515f97:L515f97:{c.instructions+=1;NFSU2_TR(0x515f97);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B515f9d:L515f9d:{c.instructions+=4;NFSU2_TR(0x515f9d);
{u32 ea_=u32(r4(R+24)+u32(252u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B515fa3:{NFSU2_TR(0x515fa3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B515fa9:{NFSU2_TR(0x515fa9);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B515fab:{NFSU2_TR(0x515fab);
if(r1(R+518)){{goto L515fba;}}
}
B515fad:L515fad:{c.instructions+=4;NFSU2_TR(0x515fad);
{u32 ea_=u32(r4(R+28)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B515fb0:{NFSU2_TR(0x515fb0);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B515fb2:{NFSU2_TR(0x515fb2);
{u32 ea_=u32(r4(R+24)+u32(256u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B515fb8:{NFSU2_TR(0x515fb8);
{goto L515feb;}
}
B515fba:L515fba:{c.instructions+=4;NFSU2_TR(0x515fba);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B515fc0:{NFSU2_TR(0x515fc0);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B515fc2:{NFSU2_TR(0x515fc2);
{u32 ea_=u32(r4(R+24)+u32(256u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B515fc8:{NFSU2_TR(0x515fc8);
{goto L515feb;}
}
B515fca:L515fca:{c.instructions+=1;NFSU2_TR(0x515fca);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B515fcc:L515fcc:{c.instructions+=5;NFSU2_TR(0x515fcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B515fd2:{NFSU2_TR(0x515fd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B515fd8:{NFSU2_TR(0x515fd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x104ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B515fde:{NFSU2_TR(0x515fde);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B515fe4:{NFSU2_TR(0x515fe4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B515feb:L515feb:{c.instructions+=5;NFSU2_TR(0x515feb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x214ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B515ff1:{NFSU2_TR(0x515ff1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x218ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B515ff7:{NFSU2_TR(0x515ff7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x21cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B515ffd:{NFSU2_TR(0x515ffd);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B515fff:{NFSU2_TR(0x515fff);
w4(R+4,u32(0xaull));
TAIL_STATIC(0x516004u,516);
}
XIT:NFSU2_TR_EXIT(0x515,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
