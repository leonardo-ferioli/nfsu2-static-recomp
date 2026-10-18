#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_695(u8* __restrict R,Cpu& c);
u32 body_696(u8* __restrict R,Cpu& c);
u32 body_698(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x697,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x697,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_697(u8* __restrict R,Cpu& c);
u32 page_697(Cpu& c){return body_697(c.regs.data(),c);}
__attribute__((noinline)) u32 body_697(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x697000:goto L697000;
case 0x697003:c.instructions+=10;goto B697003;
case 0x697006:c.instructions+=9;goto B697006;
case 0x697009:c.instructions+=8;goto B697009;
case 0x69700c:c.instructions+=7;goto B69700c;
case 0x69700f:c.instructions+=6;goto B69700f;
case 0x697012:c.instructions+=5;goto B697012;
case 0x697014:c.instructions+=4;goto B697014;
case 0x697017:c.instructions+=3;goto B697017;
case 0x697018:c.instructions+=2;goto B697018;
case 0x69701b:c.instructions+=1;goto B69701b;
case 0x69701d:goto L69701d;
case 0x697020:c.instructions+=4;goto B697020;
case 0x697024:c.instructions+=3;goto B697024;
case 0x697028:c.instructions+=2;goto B697028;
case 0x69702b:c.instructions+=1;goto B69702b;
case 0x697031:goto L697031;
case 0x697033:c.instructions+=2;goto B697033;
case 0x697037:c.instructions+=1;goto B697037;
case 0x697039:goto L697039;
case 0x69703c:c.instructions+=8;goto B69703c;
case 0x69703f:c.instructions+=7;goto B69703f;
case 0x697042:c.instructions+=6;goto B697042;
case 0x697045:c.instructions+=5;goto B697045;
case 0x697048:c.instructions+=4;goto B697048;
case 0x69704b:c.instructions+=3;goto B69704b;
case 0x69704e:c.instructions+=2;goto B69704e;
case 0x69704f:c.instructions+=1;goto B69704f;
case 0x697054:goto L697054;
case 0x697056:c.instructions+=1;goto B697056;
case 0x69705c:goto L69705c;
case 0x69705f:c.instructions+=9;goto B69705f;
case 0x697062:c.instructions+=8;goto B697062;
case 0x697065:c.instructions+=7;goto B697065;
case 0x697068:c.instructions+=6;goto B697068;
case 0x69706b:c.instructions+=5;goto B69706b;
case 0x69706e:c.instructions+=4;goto B69706e;
case 0x697072:c.instructions+=3;goto B697072;
case 0x697073:c.instructions+=2;goto B697073;
case 0x697075:c.instructions+=1;goto B697075;
case 0x697077:goto L697077;
case 0x69707a:c.instructions+=3;goto B69707a;
case 0x69707d:c.instructions+=2;goto B69707d;
case 0x697080:c.instructions+=1;goto B697080;
case 0x697082:goto L697082;
case 0x697087:goto L697087;
case 0x69708b:c.instructions+=4;goto B69708b;
case 0x69708e:c.instructions+=3;goto B69708e;
case 0x697090:c.instructions+=2;goto B697090;
case 0x697093:c.instructions+=1;goto B697093;
case 0x697095:goto L697095;
case 0x697098:goto L697098;
case 0x69709b:c.instructions+=3;goto B69709b;
case 0x69709d:c.instructions+=2;goto B69709d;
case 0x6970a0:c.instructions+=1;goto B6970a0;
case 0x6970a6:goto L6970a6;
case 0x6970aa:c.instructions+=2;goto B6970aa;
case 0x6970af:c.instructions+=1;goto B6970af;
case 0x6970b1:goto L6970b1;
case 0x6970b5:goto L6970b5;
case 0x6970b7:c.instructions+=2;goto B6970b7;
case 0x6970b9:c.instructions+=1;goto B6970b9;
case 0x6970bb:goto L6970bb;
case 0x6970be:c.instructions+=1;goto B6970be;
case 0x6970c1:goto L6970c1;
case 0x6970c4:c.instructions+=1;goto B6970c4;
case 0x6970c6:goto L6970c6;
case 0x6970ca:c.instructions+=1;goto B6970ca;
case 0x6970cc:goto L6970cc;
case 0x6970cf:c.instructions+=3;goto B6970cf;
case 0x6970d2:c.instructions+=2;goto B6970d2;
case 0x6970d5:c.instructions+=1;goto B6970d5;
case 0x6970d7:goto L6970d7;
case 0x6970d9:goto L6970d9;
case 0x6970db:c.instructions+=6;goto B6970db;
case 0x6970df:c.instructions+=5;goto B6970df;
case 0x6970e2:c.instructions+=4;goto B6970e2;
case 0x6970e3:c.instructions+=3;goto B6970e3;
case 0x6970e6:c.instructions+=2;goto B6970e6;
case 0x6970e8:c.instructions+=1;goto B6970e8;
case 0x6970ea:goto L6970ea;
case 0x6970ee:c.instructions+=3;goto B6970ee;
case 0x6970f1:c.instructions+=2;goto B6970f1;
case 0x6970f4:c.instructions+=1;goto B6970f4;
case 0x6970f6:goto L6970f6;
case 0x6970f7:c.instructions+=2;goto B6970f7;
case 0x6970fa:c.instructions+=1;goto B6970fa;
case 0x6970fc:goto L6970fc;
case 0x697101:goto L697101;
case 0x697105:c.instructions+=4;goto B697105;
case 0x697108:c.instructions+=3;goto B697108;
case 0x69710a:c.instructions+=2;goto B69710a;
case 0x69710d:c.instructions+=1;goto B69710d;
case 0x69710f:goto L69710f;
case 0x697112:goto L697112;
case 0x697114:c.instructions+=3;goto B697114;
case 0x697117:c.instructions+=2;goto B697117;
case 0x69711a:c.instructions+=1;goto B69711a;
case 0x697120:goto L697120;
case 0x697122:c.instructions+=2;goto B697122;
case 0x697126:c.instructions+=1;goto B697126;
case 0x697128:goto L697128;
case 0x69712c:goto L69712c;
case 0x69712e:c.instructions+=2;goto B69712e;
case 0x697130:c.instructions+=1;goto B697130;
case 0x697132:goto L697132;
case 0x697135:c.instructions+=1;goto B697135;
case 0x697137:goto L697137;
case 0x69713a:c.instructions+=1;goto B69713a;
case 0x69713c:goto L69713c;
case 0x69713f:c.instructions+=4;goto B69713f;
case 0x697142:c.instructions+=3;goto B697142;
case 0x697145:c.instructions+=2;goto B697145;
case 0x697148:c.instructions+=1;goto B697148;
case 0x69714a:goto L69714a;
case 0x69714c:goto L69714c;
case 0x69714f:c.instructions+=6;goto B69714f;
case 0x697153:c.instructions+=5;goto B697153;
case 0x697155:c.instructions+=4;goto B697155;
case 0x697159:c.instructions+=3;goto B697159;
case 0x69715a:c.instructions+=2;goto B69715a;
case 0x69715c:c.instructions+=1;goto B69715c;
case 0x69715e:goto L69715e;
case 0x697162:c.instructions+=3;goto B697162;
case 0x697163:c.instructions+=2;goto B697163;
case 0x697165:c.instructions+=1;goto B697165;
case 0x697167:goto L697167;
case 0x697168:c.instructions+=2;goto B697168;
case 0x69716b:c.instructions+=1;goto B69716b;
case 0x69716d:goto L69716d;
case 0x697172:goto L697172;
case 0x697175:c.instructions+=5;goto B697175;
case 0x697179:c.instructions+=4;goto B697179;
case 0x69717c:c.instructions+=3;goto B69717c;
case 0x69717e:c.instructions+=2;goto B69717e;
case 0x697181:c.instructions+=1;goto B697181;
case 0x697183:goto L697183;
case 0x697186:goto L697186;
case 0x69718a:c.instructions+=3;goto B69718a;
case 0x69718e:c.instructions+=2;goto B69718e;
case 0x697190:c.instructions+=1;goto B697190;
case 0x697196:goto L697196;
case 0x69719a:goto L69719a;
case 0x69719c:c.instructions+=2;goto B69719c;
case 0x69719e:c.instructions+=1;goto B69719e;
case 0x6971a0:goto L6971a0;
case 0x6971a3:c.instructions+=1;goto B6971a3;
case 0x6971a5:goto L6971a5;
case 0x6971a7:c.instructions+=1;goto B6971a7;
case 0x6971a9:goto L6971a9;
case 0x6971ac:c.instructions+=7;goto B6971ac;
case 0x6971af:c.instructions+=6;goto B6971af;
case 0x6971b2:c.instructions+=5;goto B6971b2;
case 0x6971b5:c.instructions+=4;goto B6971b5;
case 0x6971b8:c.instructions+=3;goto B6971b8;
case 0x6971bb:c.instructions+=2;goto B6971bb;
case 0x6971be:c.instructions+=1;goto B6971be;
case 0x6971c1:goto L6971c1;
case 0x6971c3:c.instructions+=5;goto B6971c3;
case 0x6971c7:c.instructions+=4;goto B6971c7;
case 0x6971ca:c.instructions+=3;goto B6971ca;
case 0x6971cb:c.instructions+=2;goto B6971cb;
case 0x6971cd:c.instructions+=1;goto B6971cd;
case 0x6971cf:goto L6971cf;
case 0x6971d2:c.instructions+=3;goto B6971d2;
case 0x6971d5:c.instructions+=2;goto B6971d5;
case 0x6971d8:c.instructions+=1;goto B6971d8;
case 0x6971da:goto L6971da;
case 0x6971dc:goto L6971dc;
case 0x6971df:c.instructions+=5;goto B6971df;
case 0x6971e3:c.instructions+=4;goto B6971e3;
case 0x6971e6:c.instructions+=3;goto B6971e6;
case 0x6971e8:c.instructions+=2;goto B6971e8;
case 0x6971eb:c.instructions+=1;goto B6971eb;
case 0x6971ed:goto L6971ed;
case 0x6971ef:c.instructions+=1;goto B6971ef;
case 0x6971f2:goto L6971f2;
case 0x6971f4:c.instructions+=2;goto B6971f4;
case 0x6971f6:c.instructions+=1;goto B6971f6;
case 0x6971f8:goto L6971f8;
case 0x6971fa:c.instructions+=15;goto B6971fa;
case 0x6971fd:c.instructions+=14;goto B6971fd;
case 0x6971ff:c.instructions+=13;goto B6971ff;
case 0x697201:c.instructions+=12;goto B697201;
case 0x697204:c.instructions+=11;goto B697204;
case 0x697207:c.instructions+=10;goto B697207;
case 0x69720a:c.instructions+=9;goto B69720a;
case 0x69720d:c.instructions+=8;goto B69720d;
case 0x697210:c.instructions+=7;goto B697210;
case 0x697213:c.instructions+=6;goto B697213;
case 0x697216:c.instructions+=5;goto B697216;
case 0x697218:c.instructions+=4;goto B697218;
case 0x69721b:c.instructions+=3;goto B69721b;
case 0x69721c:c.instructions+=2;goto B69721c;
case 0x69721f:c.instructions+=1;goto B69721f;
case 0x697221:goto L697221;
case 0x697225:c.instructions+=2;goto B697225;
case 0x697229:c.instructions+=1;goto B697229;
case 0x69722b:goto L69722b;
case 0x69722e:c.instructions+=5;goto B69722e;
case 0x697231:c.instructions+=4;goto B697231;
case 0x697235:c.instructions+=3;goto B697235;
case 0x697238:c.instructions+=2;goto B697238;
case 0x697239:c.instructions+=1;goto B697239;
case 0x69723b:goto L69723b;
case 0x69723c:c.instructions+=1;goto B69723c;
case 0x69723e:goto L69723e;
case 0x697241:c.instructions+=9;goto B697241;
case 0x697244:c.instructions+=8;goto B697244;
case 0x697249:c.instructions+=7;goto B697249;
case 0x69724c:c.instructions+=6;goto B69724c;
case 0x69724f:c.instructions+=5;goto B69724f;
case 0x697252:c.instructions+=4;goto B697252;
case 0x697255:c.instructions+=3;goto B697255;
case 0x697257:c.instructions+=2;goto B697257;
case 0x697259:c.instructions+=1;goto B697259;
case 0x69725b:goto L69725b;
case 0x69725e:c.instructions+=10;goto B69725e;
case 0x697261:c.instructions+=9;goto B697261;
case 0x697263:c.instructions+=8;goto B697263;
case 0x697266:c.instructions+=7;goto B697266;
case 0x697269:c.instructions+=6;goto B697269;
case 0x69726c:c.instructions+=5;goto B69726c;
case 0x69726f:c.instructions+=4;goto B69726f;
case 0x697270:c.instructions+=3;goto B697270;
case 0x697272:c.instructions+=2;goto B697272;
case 0x697274:c.instructions+=1;goto B697274;
case 0x697276:goto L697276;
case 0x697279:c.instructions+=1;goto B697279;
case 0x69727b:goto L69727b;
case 0x69727d:c.instructions+=2;goto B69727d;
case 0x69727f:c.instructions+=1;goto B69727f;
case 0x697281:goto L697281;
case 0x697284:c.instructions+=7;goto B697284;
case 0x69728a:c.instructions+=6;goto B69728a;
case 0x69728d:c.instructions+=5;goto B69728d;
case 0x69728f:c.instructions+=4;goto B69728f;
case 0x697291:c.instructions+=3;goto B697291;
case 0x697293:c.instructions+=2;goto B697293;
case 0x697296:c.instructions+=1;goto B697296;
case 0x697298:goto L697298;
case 0x69729a:c.instructions+=2;goto B69729a;
case 0x69729b:c.instructions+=1;goto B69729b;
case 0x69729d:goto L69729d;
case 0x69729f:goto L69729f;
case 0x6972a0:c.instructions+=3;goto B6972a0;
case 0x6972a2:c.instructions+=2;goto B6972a2;
case 0x6972a4:c.instructions+=1;goto B6972a4;
case 0x6972a6:goto L6972a6;
case 0x6972a9:c.instructions+=3;goto B6972a9;
case 0x6972ad:c.instructions+=2;goto B6972ad;
case 0x6972b0:c.instructions+=1;goto B6972b0;
case 0x6972b6:goto L6972b6;
case 0x6972ba:c.instructions+=1;goto B6972ba;
case 0x6972bc:goto L6972bc;
case 0x6972c0:c.instructions+=2;goto B6972c0;
case 0x6972c4:c.instructions+=1;goto B6972c4;
case 0x6972c6:goto L6972c6;
case 0x6972ca:c.instructions+=1;goto B6972ca;
case 0x6972ce:goto L6972ce;
case 0x6972d1:c.instructions+=1;goto B6972d1;
case 0x6972d7:goto L6972d7;
case 0x6972db:c.instructions+=2;goto B6972db;
case 0x6972e2:c.instructions+=1;goto B6972e2;
case 0x6972e4:goto L6972e4;
case 0x6972eb:goto L6972eb;
case 0x6972ef:c.instructions+=5;goto B6972ef;
case 0x6972f2:c.instructions+=4;goto B6972f2;
case 0x6972f5:c.instructions+=3;goto B6972f5;
case 0x6972f7:c.instructions+=2;goto B6972f7;
case 0x6972fa:c.instructions+=1;goto B6972fa;
case 0x697300:goto L697300;
case 0x697303:c.instructions+=12;goto B697303;
case 0x69730a:c.instructions+=11;goto B69730a;
case 0x69730d:c.instructions+=10;goto B69730d;
case 0x69730f:c.instructions+=9;goto B69730f;
case 0x697312:c.instructions+=8;goto B697312;
case 0x697315:c.instructions+=7;goto B697315;
case 0x697317:c.instructions+=6;goto B697317;
case 0x697319:c.instructions+=5;goto B697319;
case 0x69731c:c.instructions+=4;goto B69731c;
case 0x69731f:c.instructions+=3;goto B69731f;
case 0x697322:c.instructions+=2;goto B697322;
case 0x697325:c.instructions+=1;goto B697325;
case 0x697328:goto L697328;
case 0x69732a:c.instructions+=9;goto B69732a;
case 0x69732d:c.instructions+=8;goto B69732d;
case 0x697330:c.instructions+=7;goto B697330;
case 0x697332:c.instructions+=6;goto B697332;
case 0x697335:c.instructions+=5;goto B697335;
case 0x697337:c.instructions+=4;goto B697337;
case 0x697339:c.instructions+=3;goto B697339;
case 0x69733b:c.instructions+=2;goto B69733b;
case 0x69733e:c.instructions+=1;goto B69733e;
case 0x697340:goto L697340;
case 0x697343:goto L697343;
case 0x697346:c.instructions+=10;goto B697346;
case 0x697349:c.instructions+=9;goto B697349;
case 0x69734c:c.instructions+=8;goto B69734c;
case 0x69734f:c.instructions+=7;goto B69734f;
case 0x697352:c.instructions+=6;goto B697352;
case 0x697355:c.instructions+=5;goto B697355;
case 0x697358:c.instructions+=4;goto B697358;
case 0x69735b:c.instructions+=3;goto B69735b;
case 0x69735e:c.instructions+=2;goto B69735e;
case 0x697360:c.instructions+=1;goto B697360;
case 0x697362:goto L697362;
case 0x697364:c.instructions+=1;goto B697364;
case 0x697366:goto L697366;
case 0x697368:c.instructions+=2;goto B697368;
case 0x69736b:c.instructions+=1;goto B69736b;
case 0x69736e:goto L69736e;
case 0x697372:c.instructions+=6;goto B697372;
case 0x697375:c.instructions+=5;goto B697375;
case 0x697377:c.instructions+=4;goto B697377;
case 0x69737a:c.instructions+=3;goto B69737a;
case 0x69737d:c.instructions+=2;goto B69737d;
case 0x69737f:c.instructions+=1;goto B69737f;
case 0x697381:goto L697381;
case 0x697384:c.instructions+=1;goto B697384;
case 0x697386:goto L697386;
case 0x697389:c.instructions+=5;goto B697389;
case 0x69738c:c.instructions+=4;goto B69738c;
case 0x697390:c.instructions+=3;goto B697390;
case 0x697394:c.instructions+=2;goto B697394;
case 0x697396:c.instructions+=1;goto B697396;
case 0x697398:goto L697398;
case 0x69739a:goto L69739a;
case 0x69739b:c.instructions+=7;goto B69739b;
case 0x69739e:c.instructions+=6;goto B69739e;
case 0x6973a2:c.instructions+=5;goto B6973a2;
case 0x6973a5:c.instructions+=4;goto B6973a5;
case 0x6973a8:c.instructions+=3;goto B6973a8;
case 0x6973a9:c.instructions+=2;goto B6973a9;
case 0x6973ac:c.instructions+=1;goto B6973ac;
case 0x6973af:goto L6973af;
case 0x6973b1:c.instructions+=1;goto B6973b1;
case 0x6973b3:goto L6973b3;
case 0x6973b5:goto L6973b5;
case 0x6973b6:c.instructions+=4;goto B6973b6;
case 0x6973b7:c.instructions+=3;goto B6973b7;
case 0x6973b8:c.instructions+=2;goto B6973b8;
case 0x6973b9:c.instructions+=1;goto B6973b9;
case 0x6973bc:goto L6973bc;
case 0x6973be:c.instructions+=15;goto B6973be;
case 0x6973bf:c.instructions+=14;goto B6973bf;
case 0x6973c1:c.instructions+=13;goto B6973c1;
case 0x6973c4:c.instructions+=12;goto B6973c4;
case 0x6973c7:c.instructions+=11;goto B6973c7;
case 0x6973ca:c.instructions+=10;goto B6973ca;
case 0x6973cb:c.instructions+=9;goto B6973cb;
case 0x6973ce:c.instructions+=8;goto B6973ce;
case 0x6973cf:c.instructions+=7;goto B6973cf;
case 0x6973d2:c.instructions+=6;goto B6973d2;
case 0x6973d5:c.instructions+=5;goto B6973d5;
case 0x6973d8:c.instructions+=4;goto B6973d8;
case 0x6973db:c.instructions+=3;goto B6973db;
case 0x6973dc:c.instructions+=2;goto B6973dc;
case 0x6973df:c.instructions+=1;goto B6973df;
case 0x6973e5:goto L6973e5;
case 0x6973e6:c.instructions+=1;goto B6973e6;
case 0x6973ec:goto L6973ec;
case 0x6973ed:c.instructions+=1;goto B6973ed;
case 0x6973f3:goto L6973f3;
case 0x6973f4:c.instructions+=1;goto B6973f4;
case 0x6973fa:goto L6973fa;
case 0x6973fb:c.instructions+=2;goto B6973fb;
case 0x6973fc:c.instructions+=1;goto B6973fc;
case 0x6973fe:goto L6973fe;
case 0x697403:c.instructions+=1;goto B697403;
case 0x697408:goto L697408;
case 0x69740b:c.instructions+=8;goto B69740b;
case 0x69740e:c.instructions+=7;goto B69740e;
case 0x697411:c.instructions+=6;goto B697411;
case 0x697413:c.instructions+=5;goto B697413;
case 0x697415:c.instructions+=4;goto B697415;
case 0x697418:c.instructions+=3;goto B697418;
case 0x69741c:c.instructions+=2;goto B69741c;
case 0x69741f:c.instructions+=1;goto B69741f;
case 0x697421:goto L697421;
case 0x697424:goto L697424;
case 0x697428:c.instructions+=5;goto B697428;
case 0x69742b:c.instructions+=4;goto B69742b;
case 0x69742d:c.instructions+=3;goto B69742d;
case 0x69742f:c.instructions+=2;goto B69742f;
case 0x697432:c.instructions+=1;goto B697432;
case 0x697434:goto L697434;
case 0x697436:c.instructions+=15;goto B697436;
case 0x697439:c.instructions+=14;goto B697439;
case 0x69743b:c.instructions+=13;goto B69743b;
case 0x69743e:c.instructions+=12;goto B69743e;
case 0x697440:c.instructions+=11;goto B697440;
case 0x697443:c.instructions+=10;goto B697443;
case 0x697446:c.instructions+=9;goto B697446;
case 0x697449:c.instructions+=8;goto B697449;
case 0x69744c:c.instructions+=7;goto B69744c;
case 0x69744f:c.instructions+=6;goto B69744f;
case 0x697452:c.instructions+=5;goto B697452;
case 0x697454:c.instructions+=4;goto B697454;
case 0x697457:c.instructions+=3;goto B697457;
case 0x697458:c.instructions+=2;goto B697458;
case 0x69745b:c.instructions+=1;goto B69745b;
case 0x69745d:goto L69745d;
case 0x697460:c.instructions+=4;goto B697460;
case 0x697464:c.instructions+=3;goto B697464;
case 0x697468:c.instructions+=2;goto B697468;
case 0x69746b:c.instructions+=1;goto B69746b;
case 0x697471:goto L697471;
case 0x697473:c.instructions+=2;goto B697473;
case 0x697477:c.instructions+=1;goto B697477;
case 0x697479:goto L697479;
case 0x69747c:c.instructions+=8;goto B69747c;
case 0x69747f:c.instructions+=7;goto B69747f;
case 0x697482:c.instructions+=6;goto B697482;
case 0x697485:c.instructions+=5;goto B697485;
case 0x697488:c.instructions+=4;goto B697488;
case 0x69748b:c.instructions+=3;goto B69748b;
case 0x69748e:c.instructions+=2;goto B69748e;
case 0x69748f:c.instructions+=1;goto B69748f;
case 0x697494:goto L697494;
case 0x697496:c.instructions+=1;goto B697496;
case 0x69749c:goto L69749c;
case 0x69749f:c.instructions+=9;goto B69749f;
case 0x6974a2:c.instructions+=8;goto B6974a2;
case 0x6974a5:c.instructions+=7;goto B6974a5;
case 0x6974a8:c.instructions+=6;goto B6974a8;
case 0x6974ab:c.instructions+=5;goto B6974ab;
case 0x6974ae:c.instructions+=4;goto B6974ae;
case 0x6974b2:c.instructions+=3;goto B6974b2;
case 0x6974b3:c.instructions+=2;goto B6974b3;
case 0x6974b5:c.instructions+=1;goto B6974b5;
case 0x6974b7:goto L6974b7;
case 0x6974ba:c.instructions+=3;goto B6974ba;
case 0x6974bd:c.instructions+=2;goto B6974bd;
case 0x6974c0:c.instructions+=1;goto B6974c0;
case 0x6974c2:goto L6974c2;
case 0x6974c7:goto L6974c7;
case 0x6974cb:c.instructions+=4;goto B6974cb;
case 0x6974ce:c.instructions+=3;goto B6974ce;
case 0x6974d0:c.instructions+=2;goto B6974d0;
case 0x6974d3:c.instructions+=1;goto B6974d3;
case 0x6974d5:goto L6974d5;
case 0x6974d8:goto L6974d8;
case 0x6974dc:c.instructions+=2;goto B6974dc;
case 0x6974e0:c.instructions+=1;goto B6974e0;
case 0x6974e2:goto L6974e2;
case 0x6974e6:c.instructions+=1;goto B6974e6;
case 0x6974ec:goto L6974ec;
case 0x6974ef:c.instructions+=3;goto B6974ef;
case 0x6974f1:c.instructions+=2;goto B6974f1;
case 0x6974f4:c.instructions+=1;goto B6974f4;
case 0x6974fa:goto L6974fa;
case 0x6974fe:c.instructions+=2;goto B6974fe;
case 0x697503:c.instructions+=1;goto B697503;
case 0x697505:goto L697505;
case 0x697508:goto L697508;
case 0x69750a:c.instructions+=2;goto B69750a;
case 0x69750c:c.instructions+=1;goto B69750c;
case 0x69750e:goto L69750e;
case 0x697511:c.instructions+=1;goto B697511;
case 0x697513:goto L697513;
case 0x697516:c.instructions+=2;goto B697516;
case 0x697519:c.instructions+=1;goto B697519;
case 0x69751b:goto L69751b;
case 0x69751e:c.instructions+=4;goto B69751e;
case 0x697521:c.instructions+=3;goto B697521;
case 0x697524:c.instructions+=2;goto B697524;
case 0x697527:c.instructions+=1;goto B697527;
case 0x697529:goto L697529;
case 0x69752b:goto L69752b;
case 0x69752d:c.instructions+=6;goto B69752d;
case 0x697531:c.instructions+=5;goto B697531;
case 0x697534:c.instructions+=4;goto B697534;
case 0x697537:c.instructions+=3;goto B697537;
case 0x697538:c.instructions+=2;goto B697538;
case 0x69753a:c.instructions+=1;goto B69753a;
case 0x69753c:goto L69753c;
case 0x697540:c.instructions+=3;goto B697540;
case 0x697543:c.instructions+=2;goto B697543;
case 0x697546:c.instructions+=1;goto B697546;
case 0x697548:goto L697548;
case 0x697549:c.instructions+=2;goto B697549;
case 0x69754c:c.instructions+=1;goto B69754c;
case 0x69754e:goto L69754e;
case 0x697553:goto L697553;
case 0x697557:c.instructions+=4;goto B697557;
case 0x69755a:c.instructions+=3;goto B69755a;
case 0x69755c:c.instructions+=2;goto B69755c;
case 0x69755f:c.instructions+=1;goto B69755f;
case 0x697561:goto L697561;
case 0x697564:goto L697564;
case 0x697568:c.instructions+=2;goto B697568;
case 0x69756c:c.instructions+=1;goto B69756c;
case 0x697572:goto L697572;
case 0x697576:c.instructions+=1;goto B697576;
case 0x69757c:goto L69757c;
case 0x697580:c.instructions+=1;goto B697580;
case 0x697586:goto L697586;
case 0x697589:c.instructions+=5;goto B697589;
case 0x69758c:c.instructions+=4;goto B69758c;
case 0x69758f:c.instructions+=3;goto B69758f;
case 0x697592:c.instructions+=2;goto B697592;
case 0x697594:c.instructions+=1;goto B697594;
case 0x697597:goto L697597;
case 0x69759a:c.instructions+=35;goto B69759a;
case 0x69759d:c.instructions+=34;goto B69759d;
case 0x6975a0:c.instructions+=33;goto B6975a0;
case 0x6975a3:c.instructions+=32;goto B6975a3;
case 0x6975a5:c.instructions+=31;goto B6975a5;
case 0x6975a7:c.instructions+=30;goto B6975a7;
case 0x6975aa:c.instructions+=29;goto B6975aa;
case 0x6975ad:c.instructions+=28;goto B6975ad;
case 0x6975b0:c.instructions+=27;goto B6975b0;
case 0x6975b3:c.instructions+=26;goto B6975b3;
case 0x6975b6:c.instructions+=25;goto B6975b6;
case 0x6975b9:c.instructions+=24;goto B6975b9;
case 0x6975bc:c.instructions+=23;goto B6975bc;
case 0x6975bf:c.instructions+=22;goto B6975bf;
case 0x6975c2:c.instructions+=21;goto B6975c2;
case 0x6975c5:c.instructions+=20;goto B6975c5;
case 0x6975c8:c.instructions+=19;goto B6975c8;
case 0x6975cb:c.instructions+=18;goto B6975cb;
case 0x6975ce:c.instructions+=17;goto B6975ce;
case 0x6975d1:c.instructions+=16;goto B6975d1;
case 0x6975d4:c.instructions+=15;goto B6975d4;
case 0x6975d7:c.instructions+=14;goto B6975d7;
case 0x6975da:c.instructions+=13;goto B6975da;
case 0x6975dd:c.instructions+=12;goto B6975dd;
case 0x6975e0:c.instructions+=11;goto B6975e0;
case 0x6975e3:c.instructions+=10;goto B6975e3;
case 0x6975e6:c.instructions+=9;goto B6975e6;
case 0x6975e9:c.instructions+=8;goto B6975e9;
case 0x6975ec:c.instructions+=7;goto B6975ec;
case 0x6975ef:c.instructions+=6;goto B6975ef;
case 0x6975f2:c.instructions+=5;goto B6975f2;
case 0x6975f5:c.instructions+=4;goto B6975f5;
case 0x6975f8:c.instructions+=3;goto B6975f8;
case 0x6975fb:c.instructions+=2;goto B6975fb;
case 0x6975fc:c.instructions+=1;goto B6975fc;
case 0x6975fe:goto L6975fe;
case 0x697603:goto L697603;
case 0x697607:c.instructions+=3;goto B697607;
case 0x69760b:c.instructions+=2;goto B69760b;
case 0x69760e:c.instructions+=1;goto B69760e;
case 0x697614:goto L697614;
case 0x697616:c.instructions+=2;goto B697616;
case 0x697619:c.instructions+=1;goto B697619;
case 0x69761b:goto L69761b;
case 0x69761f:goto L69761f;
case 0x697621:c.instructions+=2;goto B697621;
case 0x697623:c.instructions+=1;goto B697623;
case 0x697625:goto L697625;
case 0x697628:c.instructions+=1;goto B697628;
case 0x69762a:goto L69762a;
case 0x69762d:c.instructions+=1;goto B69762d;
case 0x69762f:goto L69762f;
case 0x697632:c.instructions+=5;goto B697632;
case 0x697635:c.instructions+=4;goto B697635;
case 0x697638:c.instructions+=3;goto B697638;
case 0x69763b:c.instructions+=2;goto B69763b;
case 0x69763e:c.instructions+=1;goto B69763e;
case 0x697640:goto L697640;
case 0x697642:goto L697642;
case 0x697644:c.instructions+=5;goto B697644;
case 0x697648:c.instructions+=4;goto B697648;
case 0x69764b:c.instructions+=3;goto B69764b;
case 0x69764c:c.instructions+=2;goto B69764c;
case 0x69764e:c.instructions+=1;goto B69764e;
case 0x697650:goto L697650;
case 0x697654:c.instructions+=4;goto B697654;
case 0x697657:c.instructions+=3;goto B697657;
case 0x697658:c.instructions+=2;goto B697658;
case 0x69765a:c.instructions+=1;goto B69765a;
case 0x69765c:goto L69765c;
case 0x69765f:c.instructions+=3;goto B69765f;
case 0x697662:c.instructions+=2;goto B697662;
case 0x697665:c.instructions+=1;goto B697665;
case 0x697667:goto L697667;
case 0x69766c:goto L69766c;
case 0x69766f:c.instructions+=5;goto B69766f;
case 0x697673:c.instructions+=4;goto B697673;
case 0x697676:c.instructions+=3;goto B697676;
case 0x697678:c.instructions+=2;goto B697678;
case 0x69767b:c.instructions+=1;goto B69767b;
case 0x69767d:goto L69767d;
case 0x697680:goto L697680;
case 0x697683:c.instructions+=3;goto B697683;
case 0x697685:c.instructions+=2;goto B697685;
case 0x697688:c.instructions+=1;goto B697688;
case 0x69768e:goto L69768e;
case 0x697692:goto L697692;
case 0x697694:c.instructions+=2;goto B697694;
case 0x697696:c.instructions+=1;goto B697696;
case 0x697698:goto L697698;
case 0x69769b:c.instructions+=1;goto B69769b;
case 0x69769d:goto L69769d;
case 0x69769f:c.instructions+=1;goto B69769f;
case 0x6976a1:goto L6976a1;
case 0x6976a3:c.instructions+=7;goto B6976a3;
case 0x6976a6:c.instructions+=6;goto B6976a6;
case 0x6976a8:c.instructions+=5;goto B6976a8;
case 0x6976ab:c.instructions+=4;goto B6976ab;
case 0x6976ae:c.instructions+=3;goto B6976ae;
case 0x6976b1:c.instructions+=2;goto B6976b1;
case 0x6976b4:c.instructions+=1;goto B6976b4;
case 0x6976b7:goto L6976b7;
case 0x6976b9:c.instructions+=5;goto B6976b9;
case 0x6976bd:c.instructions+=4;goto B6976bd;
case 0x6976c0:c.instructions+=3;goto B6976c0;
case 0x6976c1:c.instructions+=2;goto B6976c1;
case 0x6976c3:c.instructions+=1;goto B6976c3;
case 0x6976c5:goto L6976c5;
case 0x6976c6:c.instructions+=2;goto B6976c6;
case 0x6976c9:c.instructions+=1;goto B6976c9;
case 0x6976cb:goto L6976cb;
case 0x6976cd:goto L6976cd;
case 0x6976d0:c.instructions+=5;goto B6976d0;
case 0x6976d4:c.instructions+=4;goto B6976d4;
case 0x6976d7:c.instructions+=3;goto B6976d7;
case 0x6976d9:c.instructions+=2;goto B6976d9;
case 0x6976dc:c.instructions+=1;goto B6976dc;
case 0x6976de:goto L6976de;
case 0x6976e0:c.instructions+=1;goto B6976e0;
case 0x6976e3:goto L6976e3;
case 0x6976e6:c.instructions+=3;goto B6976e6;
case 0x6976e8:c.instructions+=2;goto B6976e8;
case 0x6976ea:c.instructions+=1;goto B6976ea;
case 0x6976ec:goto L6976ec;
case 0x6976ee:c.instructions+=15;goto B6976ee;
case 0x6976f1:c.instructions+=14;goto B6976f1;
case 0x6976f3:c.instructions+=13;goto B6976f3;
case 0x6976f6:c.instructions+=12;goto B6976f6;
case 0x6976f8:c.instructions+=11;goto B6976f8;
case 0x6976fb:c.instructions+=10;goto B6976fb;
case 0x6976fe:c.instructions+=9;goto B6976fe;
case 0x697701:c.instructions+=8;goto B697701;
case 0x697704:c.instructions+=7;goto B697704;
case 0x697707:c.instructions+=6;goto B697707;
case 0x69770a:c.instructions+=5;goto B69770a;
case 0x69770c:c.instructions+=4;goto B69770c;
case 0x69770f:c.instructions+=3;goto B69770f;
case 0x697710:c.instructions+=2;goto B697710;
case 0x697713:c.instructions+=1;goto B697713;
case 0x697715:goto L697715;
case 0x697718:c.instructions+=1;goto B697718;
case 0x69771b:goto L69771b;
case 0x69771f:c.instructions+=2;goto B69771f;
case 0x697723:c.instructions+=1;goto B697723;
case 0x697729:goto L697729;
case 0x69772c:c.instructions+=5;goto B69772c;
case 0x69772f:c.instructions+=4;goto B69772f;
case 0x697733:c.instructions+=3;goto B697733;
case 0x697736:c.instructions+=2;goto B697736;
case 0x697737:c.instructions+=1;goto B697737;
case 0x697739:goto L697739;
case 0x69773a:c.instructions+=1;goto B69773a;
case 0x69773c:goto L69773c;
case 0x69773f:c.instructions+=8;goto B69773f;
case 0x697742:c.instructions+=7;goto B697742;
case 0x697747:c.instructions+=6;goto B697747;
case 0x69774a:c.instructions+=5;goto B69774a;
case 0x69774d:c.instructions+=4;goto B69774d;
case 0x69774f:c.instructions+=3;goto B69774f;
case 0x697752:c.instructions+=2;goto B697752;
case 0x697755:c.instructions+=1;goto B697755;
case 0x697757:goto L697757;
case 0x69775a:c.instructions+=2;goto B69775a;
case 0x69775c:c.instructions+=1;goto B69775c;
case 0x69775e:goto L69775e;
case 0x697761:c.instructions+=8;goto B697761;
case 0x697764:c.instructions+=7;goto B697764;
case 0x697767:c.instructions+=6;goto B697767;
case 0x69776a:c.instructions+=5;goto B69776a;
case 0x69776d:c.instructions+=4;goto B69776d;
case 0x69776f:c.instructions+=3;goto B69776f;
case 0x697772:c.instructions+=2;goto B697772;
case 0x697773:c.instructions+=1;goto B697773;
case 0x697775:goto L697775;
case 0x697778:c.instructions+=1;goto B697778;
case 0x69777a:goto L69777a;
case 0x69777c:c.instructions+=1;goto B69777c;
case 0x69777e:goto L69777e;
case 0x697781:c.instructions+=2;goto B697781;
case 0x697783:c.instructions+=1;goto B697783;
case 0x697785:goto L697785;
case 0x69778b:c.instructions+=5;goto B69778b;
case 0x69778e:c.instructions+=4;goto B69778e;
case 0x697790:c.instructions+=3;goto B697790;
case 0x697792:c.instructions+=2;goto B697792;
case 0x697795:c.instructions+=1;goto B697795;
case 0x697797:goto L697797;
case 0x697799:c.instructions+=2;goto B697799;
case 0x69779a:c.instructions+=1;goto B69779a;
case 0x69779c:goto L69779c;
case 0x69779e:goto L69779e;
case 0x6977a0:c.instructions+=3;goto B6977a0;
case 0x6977a3:c.instructions+=2;goto B6977a3;
case 0x6977a4:c.instructions+=1;goto B6977a4;
case 0x6977a6:goto L6977a6;
case 0x6977a9:c.instructions+=1;goto B6977a9;
case 0x6977ac:goto L6977ac;
case 0x6977af:c.instructions+=3;goto B6977af;
case 0x6977b3:c.instructions+=2;goto B6977b3;
case 0x6977b6:c.instructions+=1;goto B6977b6;
case 0x6977bc:goto L6977bc;
case 0x6977c0:c.instructions+=1;goto B6977c0;
case 0x6977c2:goto L6977c2;
case 0x6977c6:c.instructions+=2;goto B6977c6;
case 0x6977ca:c.instructions+=1;goto B6977ca;
case 0x6977cc:goto L6977cc;
case 0x6977d0:c.instructions+=1;goto B6977d0;
case 0x6977d4:goto L6977d4;
case 0x6977d7:c.instructions+=1;goto B6977d7;
case 0x6977dd:goto L6977dd;
case 0x6977e1:c.instructions+=2;goto B6977e1;
case 0x6977e8:c.instructions+=1;goto B6977e8;
case 0x6977ea:goto L6977ea;
case 0x6977f1:goto L6977f1;
case 0x6977f5:c.instructions+=5;goto B6977f5;
case 0x6977f8:c.instructions+=4;goto B6977f8;
case 0x6977fb:c.instructions+=3;goto B6977fb;
case 0x6977fd:c.instructions+=2;goto B6977fd;
case 0x697800:c.instructions+=1;goto B697800;
case 0x697806:goto L697806;
case 0x697809:c.instructions+=12;goto B697809;
case 0x697810:c.instructions+=11;goto B697810;
case 0x697813:c.instructions+=10;goto B697813;
case 0x697815:c.instructions+=9;goto B697815;
case 0x697818:c.instructions+=8;goto B697818;
case 0x69781b:c.instructions+=7;goto B69781b;
case 0x69781e:c.instructions+=6;goto B69781e;
case 0x697820:c.instructions+=5;goto B697820;
case 0x697823:c.instructions+=4;goto B697823;
case 0x697826:c.instructions+=3;goto B697826;
case 0x697829:c.instructions+=2;goto B697829;
case 0x69782c:c.instructions+=1;goto B69782c;
case 0x69782f:goto L69782f;
case 0x697831:c.instructions+=9;goto B697831;
case 0x697834:c.instructions+=8;goto B697834;
case 0x697837:c.instructions+=7;goto B697837;
case 0x697839:c.instructions+=6;goto B697839;
case 0x69783c:c.instructions+=5;goto B69783c;
case 0x69783e:c.instructions+=4;goto B69783e;
case 0x697840:c.instructions+=3;goto B697840;
case 0x697842:c.instructions+=2;goto B697842;
case 0x697845:c.instructions+=1;goto B697845;
case 0x697847:goto L697847;
case 0x69784a:goto L69784a;
case 0x69784d:c.instructions+=10;goto B69784d;
case 0x697850:c.instructions+=9;goto B697850;
case 0x697853:c.instructions+=8;goto B697853;
case 0x697856:c.instructions+=7;goto B697856;
case 0x697859:c.instructions+=6;goto B697859;
case 0x69785c:c.instructions+=5;goto B69785c;
case 0x69785f:c.instructions+=4;goto B69785f;
case 0x697862:c.instructions+=3;goto B697862;
case 0x697865:c.instructions+=2;goto B697865;
case 0x697867:c.instructions+=1;goto B697867;
case 0x697869:goto L697869;
case 0x69786b:c.instructions+=1;goto B69786b;
case 0x69786d:goto L69786d;
case 0x69786f:c.instructions+=2;goto B69786f;
case 0x697872:c.instructions+=1;goto B697872;
case 0x697875:goto L697875;
case 0x697879:c.instructions+=6;goto B697879;
case 0x69787c:c.instructions+=5;goto B69787c;
case 0x69787e:c.instructions+=4;goto B69787e;
case 0x697881:c.instructions+=3;goto B697881;
case 0x697884:c.instructions+=2;goto B697884;
case 0x697886:c.instructions+=1;goto B697886;
case 0x697888:goto L697888;
case 0x69788b:c.instructions+=1;goto B69788b;
case 0x69788d:goto L69788d;
case 0x697890:goto L697890;
case 0x697893:c.instructions+=5;goto B697893;
case 0x697896:c.instructions+=4;goto B697896;
case 0x69789a:c.instructions+=3;goto B69789a;
case 0x69789e:c.instructions+=2;goto B69789e;
case 0x6978a0:c.instructions+=1;goto B6978a0;
case 0x6978a2:goto L6978a2;
case 0x6978a4:goto L6978a4;
case 0x6978a5:c.instructions+=7;goto B6978a5;
case 0x6978a8:c.instructions+=6;goto B6978a8;
case 0x6978ac:c.instructions+=5;goto B6978ac;
case 0x6978af:c.instructions+=4;goto B6978af;
case 0x6978b0:c.instructions+=3;goto B6978b0;
case 0x6978b1:c.instructions+=2;goto B6978b1;
case 0x6978b4:c.instructions+=1;goto B6978b4;
case 0x6978b7:goto L6978b7;
case 0x6978b9:c.instructions+=1;goto B6978b9;
case 0x6978bb:goto L6978bb;
case 0x6978bd:goto L6978bd;
case 0x6978be:c.instructions+=4;goto B6978be;
case 0x6978bf:c.instructions+=3;goto B6978bf;
case 0x6978c0:c.instructions+=2;goto B6978c0;
case 0x6978c1:c.instructions+=1;goto B6978c1;
case 0x6978c4:goto L6978c4;
case 0x6978c6:c.instructions+=14;goto B6978c6;
case 0x6978c7:c.instructions+=13;goto B6978c7;
case 0x6978c9:c.instructions+=12;goto B6978c9;
case 0x6978cc:c.instructions+=11;goto B6978cc;
case 0x6978cf:c.instructions+=10;goto B6978cf;
case 0x6978d0:c.instructions+=9;goto B6978d0;
case 0x6978d3:c.instructions+=8;goto B6978d3;
case 0x6978d4:c.instructions+=7;goto B6978d4;
case 0x6978d7:c.instructions+=6;goto B6978d7;
case 0x6978da:c.instructions+=5;goto B6978da;
case 0x6978dc:c.instructions+=4;goto B6978dc;
case 0x6978de:c.instructions+=3;goto B6978de;
case 0x6978df:c.instructions+=2;goto B6978df;
case 0x6978e2:c.instructions+=1;goto B6978e2;
case 0x6978e8:goto L6978e8;
case 0x6978e9:c.instructions+=1;goto B6978e9;
case 0x6978ef:goto L6978ef;
case 0x6978f0:c.instructions+=1;goto B6978f0;
case 0x6978f6:goto L6978f6;
case 0x6978f7:c.instructions+=1;goto B6978f7;
case 0x6978fd:goto L6978fd;
case 0x6978fe:c.instructions+=2;goto B6978fe;
case 0x6978ff:c.instructions+=1;goto B6978ff;
case 0x697901:goto L697901;
case 0x697906:c.instructions+=1;goto B697906;
case 0x69790b:goto L69790b;
case 0x69790e:c.instructions+=8;goto B69790e;
case 0x697911:c.instructions+=7;goto B697911;
case 0x697914:c.instructions+=6;goto B697914;
case 0x697916:c.instructions+=5;goto B697916;
case 0x697918:c.instructions+=4;goto B697918;
case 0x69791b:c.instructions+=3;goto B69791b;
case 0x69791f:c.instructions+=2;goto B69791f;
case 0x697922:c.instructions+=1;goto B697922;
case 0x697924:goto L697924;
case 0x697927:goto L697927;
case 0x69792b:c.instructions+=5;goto B69792b;
case 0x69792d:c.instructions+=4;goto B69792d;
case 0x69792f:c.instructions+=3;goto B69792f;
case 0x697932:c.instructions+=2;goto B697932;
case 0x697934:c.instructions+=1;goto B697934;
case 0x697936:goto L697936;
case 0x697938:c.instructions+=15;goto B697938;
case 0x69793b:c.instructions+=14;goto B69793b;
case 0x69793d:c.instructions+=13;goto B69793d;
case 0x69793f:c.instructions+=12;goto B69793f;
case 0x697942:c.instructions+=11;goto B697942;
case 0x697945:c.instructions+=10;goto B697945;
case 0x697948:c.instructions+=9;goto B697948;
case 0x69794b:c.instructions+=8;goto B69794b;
case 0x69794e:c.instructions+=7;goto B69794e;
case 0x697951:c.instructions+=6;goto B697951;
case 0x697954:c.instructions+=5;goto B697954;
case 0x697956:c.instructions+=4;goto B697956;
case 0x697959:c.instructions+=3;goto B697959;
case 0x69795a:c.instructions+=2;goto B69795a;
case 0x69795d:c.instructions+=1;goto B69795d;
case 0x69795f:goto L69795f;
case 0x697962:c.instructions+=4;goto B697962;
case 0x697966:c.instructions+=3;goto B697966;
case 0x69796a:c.instructions+=2;goto B69796a;
case 0x69796d:c.instructions+=1;goto B69796d;
case 0x697973:goto L697973;
case 0x697975:c.instructions+=2;goto B697975;
case 0x697979:c.instructions+=1;goto B697979;
case 0x69797b:goto L69797b;
case 0x69797e:c.instructions+=8;goto B69797e;
case 0x697981:c.instructions+=7;goto B697981;
case 0x697984:c.instructions+=6;goto B697984;
case 0x697987:c.instructions+=5;goto B697987;
case 0x69798a:c.instructions+=4;goto B69798a;
case 0x69798d:c.instructions+=3;goto B69798d;
case 0x697990:c.instructions+=2;goto B697990;
case 0x697991:c.instructions+=1;goto B697991;
case 0x697996:goto L697996;
case 0x697998:c.instructions+=1;goto B697998;
case 0x69799e:goto L69799e;
case 0x6979a1:c.instructions+=9;goto B6979a1;
case 0x6979a4:c.instructions+=8;goto B6979a4;
case 0x6979a7:c.instructions+=7;goto B6979a7;
case 0x6979aa:c.instructions+=6;goto B6979aa;
case 0x6979ad:c.instructions+=5;goto B6979ad;
case 0x6979b0:c.instructions+=4;goto B6979b0;
case 0x6979b4:c.instructions+=3;goto B6979b4;
case 0x6979b5:c.instructions+=2;goto B6979b5;
case 0x6979b7:c.instructions+=1;goto B6979b7;
case 0x6979b9:goto L6979b9;
case 0x6979bc:c.instructions+=3;goto B6979bc;
case 0x6979bf:c.instructions+=2;goto B6979bf;
case 0x6979c2:c.instructions+=1;goto B6979c2;
case 0x6979c4:goto L6979c4;
case 0x6979c9:goto L6979c9;
case 0x6979cd:c.instructions+=4;goto B6979cd;
case 0x6979d0:c.instructions+=3;goto B6979d0;
case 0x6979d2:c.instructions+=2;goto B6979d2;
case 0x6979d5:c.instructions+=1;goto B6979d5;
case 0x6979d7:goto L6979d7;
case 0x6979da:goto L6979da;
case 0x6979dc:c.instructions+=3;goto B6979dc;
case 0x6979df:c.instructions+=2;goto B6979df;
case 0x6979e2:c.instructions+=1;goto B6979e2;
case 0x6979e8:goto L6979e8;
case 0x6979ea:c.instructions+=2;goto B6979ea;
case 0x6979ee:c.instructions+=1;goto B6979ee;
case 0x6979f0:goto L6979f0;
case 0x6979f4:goto L6979f4;
case 0x6979f6:c.instructions+=2;goto B6979f6;
case 0x6979f8:c.instructions+=1;goto B6979f8;
case 0x6979fa:goto L6979fa;
case 0x6979fd:c.instructions+=1;goto B6979fd;
case 0x6979ff:goto L6979ff;
case 0x697a02:c.instructions+=1;goto B697a02;
case 0x697a04:goto L697a04;
case 0x697a07:c.instructions+=4;goto B697a07;
case 0x697a0a:c.instructions+=3;goto B697a0a;
case 0x697a0d:c.instructions+=2;goto B697a0d;
case 0x697a10:c.instructions+=1;goto B697a10;
case 0x697a12:goto L697a12;
case 0x697a14:goto L697a14;
case 0x697a17:c.instructions+=6;goto B697a17;
case 0x697a1b:c.instructions+=5;goto B697a1b;
case 0x697a1d:c.instructions+=4;goto B697a1d;
case 0x697a21:c.instructions+=3;goto B697a21;
case 0x697a22:c.instructions+=2;goto B697a22;
case 0x697a24:c.instructions+=1;goto B697a24;
case 0x697a26:goto L697a26;
case 0x697a2a:c.instructions+=3;goto B697a2a;
case 0x697a2b:c.instructions+=2;goto B697a2b;
case 0x697a2d:c.instructions+=1;goto B697a2d;
case 0x697a2f:goto L697a2f;
case 0x697a30:c.instructions+=2;goto B697a30;
case 0x697a33:c.instructions+=1;goto B697a33;
case 0x697a35:goto L697a35;
case 0x697a3a:goto L697a3a;
case 0x697a3e:c.instructions+=4;goto B697a3e;
case 0x697a41:c.instructions+=3;goto B697a41;
case 0x697a43:c.instructions+=2;goto B697a43;
case 0x697a46:c.instructions+=1;goto B697a46;
case 0x697a48:goto L697a48;
case 0x697a4b:goto L697a4b;
case 0x697a4e:c.instructions+=3;goto B697a4e;
case 0x697a50:c.instructions+=2;goto B697a50;
case 0x697a53:c.instructions+=1;goto B697a53;
case 0x697a59:goto L697a59;
case 0x697a5d:c.instructions+=2;goto B697a5d;
case 0x697a62:c.instructions+=1;goto B697a62;
case 0x697a64:goto L697a64;
case 0x697a68:goto L697a68;
case 0x697a6a:c.instructions+=2;goto B697a6a;
case 0x697a6c:c.instructions+=1;goto B697a6c;
case 0x697a6e:goto L697a6e;
case 0x697a71:c.instructions+=1;goto B697a71;
case 0x697a74:goto L697a74;
case 0x697a78:c.instructions+=1;goto B697a78;
case 0x697a7a:goto L697a7a;
case 0x697a7d:c.instructions+=1;goto B697a7d;
case 0x697a7f:goto L697a7f;
case 0x697a82:c.instructions+=3;goto B697a82;
case 0x697a85:c.instructions+=2;goto B697a85;
case 0x697a88:c.instructions+=1;goto B697a88;
case 0x697a8a:goto L697a8a;
case 0x697a8c:goto L697a8c;
case 0x697a8e:c.instructions+=6;goto B697a8e;
case 0x697a92:c.instructions+=5;goto B697a92;
case 0x697a95:c.instructions+=4;goto B697a95;
case 0x697a96:c.instructions+=3;goto B697a96;
case 0x697a99:c.instructions+=2;goto B697a99;
case 0x697a9b:c.instructions+=1;goto B697a9b;
case 0x697a9d:goto L697a9d;
case 0x697aa1:c.instructions+=3;goto B697aa1;
case 0x697aa4:c.instructions+=2;goto B697aa4;
case 0x697aa7:c.instructions+=1;goto B697aa7;
case 0x697aa9:goto L697aa9;
case 0x697aaa:c.instructions+=2;goto B697aaa;
case 0x697aad:c.instructions+=1;goto B697aad;
case 0x697aaf:goto L697aaf;
case 0x697ab4:goto L697ab4;
case 0x697ab7:c.instructions+=5;goto B697ab7;
case 0x697abb:c.instructions+=4;goto B697abb;
case 0x697abe:c.instructions+=3;goto B697abe;
case 0x697ac0:c.instructions+=2;goto B697ac0;
case 0x697ac3:c.instructions+=1;goto B697ac3;
case 0x697ac5:goto L697ac5;
case 0x697ac8:goto L697ac8;
case 0x697acc:c.instructions+=3;goto B697acc;
case 0x697ad0:c.instructions+=2;goto B697ad0;
case 0x697ad2:c.instructions+=1;goto B697ad2;
case 0x697ad8:goto L697ad8;
case 0x697adc:goto L697adc;
case 0x697ade:c.instructions+=2;goto B697ade;
case 0x697ae0:c.instructions+=1;goto B697ae0;
case 0x697ae2:goto L697ae2;
case 0x697ae5:c.instructions+=1;goto B697ae5;
case 0x697ae7:goto L697ae7;
case 0x697ae9:c.instructions+=1;goto B697ae9;
case 0x697aeb:goto L697aeb;
case 0x697aee:c.instructions+=7;goto B697aee;
case 0x697af1:c.instructions+=6;goto B697af1;
case 0x697af4:c.instructions+=5;goto B697af4;
case 0x697af7:c.instructions+=4;goto B697af7;
case 0x697afa:c.instructions+=3;goto B697afa;
case 0x697afd:c.instructions+=2;goto B697afd;
case 0x697b00:c.instructions+=1;goto B697b00;
case 0x697b03:goto L697b03;
case 0x697b05:c.instructions+=5;goto B697b05;
case 0x697b09:c.instructions+=4;goto B697b09;
case 0x697b0c:c.instructions+=3;goto B697b0c;
case 0x697b0d:c.instructions+=2;goto B697b0d;
case 0x697b0f:c.instructions+=1;goto B697b0f;
case 0x697b11:goto L697b11;
case 0x697b14:c.instructions+=3;goto B697b14;
case 0x697b17:c.instructions+=2;goto B697b17;
case 0x697b1a:c.instructions+=1;goto B697b1a;
case 0x697b1c:goto L697b1c;
case 0x697b1e:goto L697b1e;
case 0x697b21:c.instructions+=5;goto B697b21;
case 0x697b25:c.instructions+=4;goto B697b25;
case 0x697b28:c.instructions+=3;goto B697b28;
case 0x697b2a:c.instructions+=2;goto B697b2a;
case 0x697b2d:c.instructions+=1;goto B697b2d;
case 0x697b2f:goto L697b2f;
case 0x697b31:c.instructions+=1;goto B697b31;
case 0x697b34:goto L697b34;
case 0x697b36:c.instructions+=2;goto B697b36;
case 0x697b38:c.instructions+=1;goto B697b38;
case 0x697b3a:goto L697b3a;
case 0x697b3c:c.instructions+=15;goto B697b3c;
case 0x697b3f:c.instructions+=14;goto B697b3f;
case 0x697b41:c.instructions+=13;goto B697b41;
case 0x697b43:c.instructions+=12;goto B697b43;
case 0x697b46:c.instructions+=11;goto B697b46;
case 0x697b49:c.instructions+=10;goto B697b49;
case 0x697b4c:c.instructions+=9;goto B697b4c;
case 0x697b4f:c.instructions+=8;goto B697b4f;
case 0x697b52:c.instructions+=7;goto B697b52;
case 0x697b55:c.instructions+=6;goto B697b55;
case 0x697b58:c.instructions+=5;goto B697b58;
case 0x697b5a:c.instructions+=4;goto B697b5a;
case 0x697b5d:c.instructions+=3;goto B697b5d;
case 0x697b5e:c.instructions+=2;goto B697b5e;
case 0x697b61:c.instructions+=1;goto B697b61;
case 0x697b63:goto L697b63;
case 0x697b67:c.instructions+=2;goto B697b67;
case 0x697b6b:c.instructions+=1;goto B697b6b;
case 0x697b6d:goto L697b6d;
case 0x697b70:c.instructions+=5;goto B697b70;
case 0x697b73:c.instructions+=4;goto B697b73;
case 0x697b77:c.instructions+=3;goto B697b77;
case 0x697b7a:c.instructions+=2;goto B697b7a;
case 0x697b7b:c.instructions+=1;goto B697b7b;
case 0x697b7d:goto L697b7d;
case 0x697b7e:c.instructions+=1;goto B697b7e;
case 0x697b80:goto L697b80;
case 0x697b83:c.instructions+=9;goto B697b83;
case 0x697b86:c.instructions+=8;goto B697b86;
case 0x697b8b:c.instructions+=7;goto B697b8b;
case 0x697b8e:c.instructions+=6;goto B697b8e;
case 0x697b91:c.instructions+=5;goto B697b91;
case 0x697b94:c.instructions+=4;goto B697b94;
case 0x697b97:c.instructions+=3;goto B697b97;
case 0x697b99:c.instructions+=2;goto B697b99;
case 0x697b9b:c.instructions+=1;goto B697b9b;
case 0x697b9d:goto L697b9d;
case 0x697ba0:c.instructions+=10;goto B697ba0;
case 0x697ba3:c.instructions+=9;goto B697ba3;
case 0x697ba5:c.instructions+=8;goto B697ba5;
case 0x697ba8:c.instructions+=7;goto B697ba8;
case 0x697bab:c.instructions+=6;goto B697bab;
case 0x697bae:c.instructions+=5;goto B697bae;
case 0x697bb1:c.instructions+=4;goto B697bb1;
case 0x697bb2:c.instructions+=3;goto B697bb2;
case 0x697bb4:c.instructions+=2;goto B697bb4;
case 0x697bb6:c.instructions+=1;goto B697bb6;
case 0x697bb8:goto L697bb8;
case 0x697bbb:c.instructions+=1;goto B697bbb;
case 0x697bbd:goto L697bbd;
case 0x697bbf:c.instructions+=2;goto B697bbf;
case 0x697bc1:c.instructions+=1;goto B697bc1;
case 0x697bc3:goto L697bc3;
case 0x697bc6:c.instructions+=7;goto B697bc6;
case 0x697bcc:c.instructions+=6;goto B697bcc;
case 0x697bcf:c.instructions+=5;goto B697bcf;
case 0x697bd1:c.instructions+=4;goto B697bd1;
case 0x697bd3:c.instructions+=3;goto B697bd3;
case 0x697bd5:c.instructions+=2;goto B697bd5;
case 0x697bd8:c.instructions+=1;goto B697bd8;
case 0x697bda:goto L697bda;
case 0x697bdc:c.instructions+=2;goto B697bdc;
case 0x697bdd:c.instructions+=1;goto B697bdd;
case 0x697bdf:goto L697bdf;
case 0x697be1:goto L697be1;
case 0x697be2:c.instructions+=3;goto B697be2;
case 0x697be4:c.instructions+=2;goto B697be4;
case 0x697be6:c.instructions+=1;goto B697be6;
case 0x697be8:goto L697be8;
case 0x697beb:c.instructions+=3;goto B697beb;
case 0x697bef:c.instructions+=2;goto B697bef;
case 0x697bf2:c.instructions+=1;goto B697bf2;
case 0x697bf8:goto L697bf8;
case 0x697bfc:c.instructions+=1;goto B697bfc;
case 0x697bfe:goto L697bfe;
case 0x697c02:c.instructions+=2;goto B697c02;
case 0x697c06:c.instructions+=1;goto B697c06;
case 0x697c08:goto L697c08;
case 0x697c0c:c.instructions+=1;goto B697c0c;
case 0x697c10:goto L697c10;
case 0x697c13:c.instructions+=1;goto B697c13;
case 0x697c19:goto L697c19;
case 0x697c1d:c.instructions+=2;goto B697c1d;
case 0x697c24:c.instructions+=1;goto B697c24;
case 0x697c26:goto L697c26;
case 0x697c2d:goto L697c2d;
case 0x697c31:c.instructions+=5;goto B697c31;
case 0x697c34:c.instructions+=4;goto B697c34;
case 0x697c37:c.instructions+=3;goto B697c37;
case 0x697c39:c.instructions+=2;goto B697c39;
case 0x697c3c:c.instructions+=1;goto B697c3c;
case 0x697c42:goto L697c42;
case 0x697c45:c.instructions+=12;goto B697c45;
case 0x697c4c:c.instructions+=11;goto B697c4c;
case 0x697c4f:c.instructions+=10;goto B697c4f;
case 0x697c51:c.instructions+=9;goto B697c51;
case 0x697c54:c.instructions+=8;goto B697c54;
case 0x697c57:c.instructions+=7;goto B697c57;
case 0x697c59:c.instructions+=6;goto B697c59;
case 0x697c5b:c.instructions+=5;goto B697c5b;
case 0x697c5e:c.instructions+=4;goto B697c5e;
case 0x697c61:c.instructions+=3;goto B697c61;
case 0x697c64:c.instructions+=2;goto B697c64;
case 0x697c67:c.instructions+=1;goto B697c67;
case 0x697c6a:goto L697c6a;
case 0x697c6c:c.instructions+=9;goto B697c6c;
case 0x697c6f:c.instructions+=8;goto B697c6f;
case 0x697c72:c.instructions+=7;goto B697c72;
case 0x697c74:c.instructions+=6;goto B697c74;
case 0x697c77:c.instructions+=5;goto B697c77;
case 0x697c79:c.instructions+=4;goto B697c79;
case 0x697c7b:c.instructions+=3;goto B697c7b;
case 0x697c7d:c.instructions+=2;goto B697c7d;
case 0x697c80:c.instructions+=1;goto B697c80;
case 0x697c82:goto L697c82;
case 0x697c85:goto L697c85;
case 0x697c88:c.instructions+=10;goto B697c88;
case 0x697c8b:c.instructions+=9;goto B697c8b;
case 0x697c8e:c.instructions+=8;goto B697c8e;
case 0x697c91:c.instructions+=7;goto B697c91;
case 0x697c94:c.instructions+=6;goto B697c94;
case 0x697c97:c.instructions+=5;goto B697c97;
case 0x697c9a:c.instructions+=4;goto B697c9a;
case 0x697c9d:c.instructions+=3;goto B697c9d;
case 0x697ca0:c.instructions+=2;goto B697ca0;
case 0x697ca2:c.instructions+=1;goto B697ca2;
case 0x697ca4:goto L697ca4;
case 0x697ca6:c.instructions+=1;goto B697ca6;
case 0x697ca8:goto L697ca8;
case 0x697caa:c.instructions+=2;goto B697caa;
case 0x697cad:c.instructions+=1;goto B697cad;
case 0x697cb0:goto L697cb0;
case 0x697cb4:c.instructions+=6;goto B697cb4;
case 0x697cb7:c.instructions+=5;goto B697cb7;
case 0x697cb9:c.instructions+=4;goto B697cb9;
case 0x697cbc:c.instructions+=3;goto B697cbc;
case 0x697cbf:c.instructions+=2;goto B697cbf;
case 0x697cc1:c.instructions+=1;goto B697cc1;
case 0x697cc3:goto L697cc3;
case 0x697cc6:c.instructions+=1;goto B697cc6;
case 0x697cc8:goto L697cc8;
case 0x697ccb:c.instructions+=5;goto B697ccb;
case 0x697cce:c.instructions+=4;goto B697cce;
case 0x697cd2:c.instructions+=3;goto B697cd2;
case 0x697cd6:c.instructions+=2;goto B697cd6;
case 0x697cd8:c.instructions+=1;goto B697cd8;
case 0x697cda:goto L697cda;
case 0x697cdc:goto L697cdc;
case 0x697cdd:c.instructions+=7;goto B697cdd;
case 0x697ce0:c.instructions+=6;goto B697ce0;
case 0x697ce4:c.instructions+=5;goto B697ce4;
case 0x697ce7:c.instructions+=4;goto B697ce7;
case 0x697cea:c.instructions+=3;goto B697cea;
case 0x697ceb:c.instructions+=2;goto B697ceb;
case 0x697cee:c.instructions+=1;goto B697cee;
case 0x697cf1:goto L697cf1;
case 0x697cf3:c.instructions+=1;goto B697cf3;
case 0x697cf5:goto L697cf5;
case 0x697cf7:goto L697cf7;
case 0x697cf8:c.instructions+=4;goto B697cf8;
case 0x697cf9:c.instructions+=3;goto B697cf9;
case 0x697cfa:c.instructions+=2;goto B697cfa;
case 0x697cfb:c.instructions+=1;goto B697cfb;
case 0x697cfe:goto L697cfe;
case 0x697d00:c.instructions+=15;goto B697d00;
case 0x697d01:c.instructions+=14;goto B697d01;
case 0x697d03:c.instructions+=13;goto B697d03;
case 0x697d06:c.instructions+=12;goto B697d06;
case 0x697d09:c.instructions+=11;goto B697d09;
case 0x697d0c:c.instructions+=10;goto B697d0c;
case 0x697d0d:c.instructions+=9;goto B697d0d;
case 0x697d0e:c.instructions+=8;goto B697d0e;
case 0x697d11:c.instructions+=7;goto B697d11;
case 0x697d16:c.instructions+=6;goto B697d16;
case 0x697d17:c.instructions+=5;goto B697d17;
case 0x697d19:c.instructions+=4;goto B697d19;
case 0x697d1b:c.instructions+=3;goto B697d1b;
case 0x697d1d:c.instructions+=2;goto B697d1d;
case 0x697d21:c.instructions+=1;goto B697d21;
case 0x697d27:goto L697d27;
case 0x697d2d:c.instructions+=1;goto B697d2d;
case 0x697d33:goto L697d33;
case 0x697d39:c.instructions+=1;goto B697d39;
case 0x697d3f:goto L697d3f;
case 0x697d41:c.instructions+=1;goto B697d41;
case 0x697d47:goto L697d47;
case 0x697d4a:c.instructions+=3;goto B697d4a;
case 0x697d4e:c.instructions+=2;goto B697d4e;
case 0x697d50:c.instructions+=1;goto B697d50;
case 0x697d52:goto L697d52;
case 0x697d53:c.instructions+=1;goto B697d53;
case 0x697d55:goto L697d55;
case 0x697d56:c.instructions+=1;goto B697d56;
case 0x697d5c:goto L697d5c;
case 0x697d60:c.instructions+=2;goto B697d60;
case 0x697d62:c.instructions+=1;goto B697d62;
case 0x697d64:goto L697d64;
case 0x697d65:c.instructions+=1;goto B697d65;
case 0x697d67:goto L697d67;
case 0x697d68:c.instructions+=1;goto B697d68;
case 0x697d6e:goto L697d6e;
case 0x697d73:c.instructions+=1;goto B697d73;
case 0x697d78:goto L697d78;
case 0x697d7d:c.instructions+=1;goto B697d7d;
case 0x697d82:goto L697d82;
case 0x697d87:c.instructions+=1;goto B697d87;
case 0x697d8c:goto L697d8c;
case 0x697d90:c.instructions+=2;goto B697d90;
case 0x697d92:c.instructions+=1;goto B697d92;
case 0x697d94:goto L697d94;
case 0x697d95:c.instructions+=1;goto B697d95;
case 0x697d97:goto L697d97;
case 0x697d98:c.instructions+=1;goto B697d98;
case 0x697d9e:goto L697d9e;
case 0x697d9f:c.instructions+=1;goto B697d9f;
case 0x697da5:goto L697da5;
case 0x697daa:c.instructions+=1;goto B697daa;
case 0x697daf:goto L697daf;
case 0x697db4:c.instructions+=1;goto B697db4;
case 0x697db9:goto L697db9;
case 0x697dbe:c.instructions+=1;goto B697dbe;
case 0x697dc3:goto L697dc3;
case 0x697dc7:c.instructions+=2;goto B697dc7;
case 0x697dc9:c.instructions+=1;goto B697dc9;
case 0x697dcb:goto L697dcb;
case 0x697dcc:c.instructions+=1;goto B697dcc;
case 0x697dce:goto L697dce;
case 0x697dcf:c.instructions+=1;goto B697dcf;
case 0x697dd1:goto L697dd1;
case 0x697dd2:c.instructions+=1;goto B697dd2;
case 0x697dd8:goto L697dd8;
case 0x697ddd:c.instructions+=1;goto B697ddd;
case 0x697de2:goto L697de2;
case 0x697de7:c.instructions+=1;goto B697de7;
case 0x697dec:goto L697dec;
case 0x697df1:c.instructions+=1;goto B697df1;
case 0x697df6:goto L697df6;
case 0x697dfb:c.instructions+=1;goto B697dfb;
case 0x697e00:goto L697e00;
case 0x697e03:c.instructions+=3;goto B697e03;
case 0x697e07:c.instructions+=2;goto B697e07;
case 0x697e09:c.instructions+=1;goto B697e09;
case 0x697e0f:goto L697e0f;
case 0x697e10:c.instructions+=1;goto B697e10;
case 0x697e12:goto L697e12;
case 0x697e13:c.instructions+=1;goto B697e13;
case 0x697e19:goto L697e19;
case 0x697e1d:c.instructions+=2;goto B697e1d;
case 0x697e1f:c.instructions+=1;goto B697e1f;
case 0x697e21:goto L697e21;
case 0x697e22:c.instructions+=1;goto B697e22;
case 0x697e24:goto L697e24;
case 0x697e25:c.instructions+=1;goto B697e25;
case 0x697e27:goto L697e27;
case 0x697e28:c.instructions+=1;goto B697e28;
case 0x697e2e:goto L697e2e;
case 0x697e33:c.instructions+=1;goto B697e33;
case 0x697e38:goto L697e38;
case 0x697e3d:c.instructions+=1;goto B697e3d;
case 0x697e42:goto L697e42;
case 0x697e47:c.instructions+=1;goto B697e47;
case 0x697e4c:goto L697e4c;
case 0x697e51:c.instructions+=1;goto B697e51;
case 0x697e56:goto L697e56;
case 0x697e5a:c.instructions+=2;goto B697e5a;
case 0x697e5c:c.instructions+=1;goto B697e5c;
case 0x697e5e:goto L697e5e;
case 0x697e5f:c.instructions+=1;goto B697e5f;
case 0x697e61:goto L697e61;
case 0x697e62:c.instructions+=1;goto B697e62;
case 0x697e64:goto L697e64;
case 0x697e65:c.instructions+=1;goto B697e65;
case 0x697e6b:goto L697e6b;
case 0x697e70:c.instructions+=1;goto B697e70;
case 0x697e75:goto L697e75;
case 0x697e7a:c.instructions+=1;goto B697e7a;
case 0x697e7f:goto L697e7f;
case 0x697e84:c.instructions+=1;goto B697e84;
case 0x697e89:goto L697e89;
case 0x697e8e:c.instructions+=1;goto B697e8e;
case 0x697e93:goto L697e93;
case 0x697e97:c.instructions+=2;goto B697e97;
case 0x697e99:c.instructions+=1;goto B697e99;
case 0x697e9b:goto L697e9b;
case 0x697e9c:c.instructions+=1;goto B697e9c;
case 0x697ea2:goto L697ea2;
case 0x697ea3:c.instructions+=1;goto B697ea3;
case 0x697ea5:goto L697ea5;
case 0x697ea6:c.instructions+=1;goto B697ea6;
case 0x697eac:goto L697eac;
case 0x697eb1:c.instructions+=1;goto B697eb1;
case 0x697eb6:goto L697eb6;
case 0x697ebb:c.instructions+=1;goto B697ebb;
case 0x697ec0:goto L697ec0;
case 0x697ec5:c.instructions+=1;goto B697ec5;
case 0x697eca:goto L697eca;
case 0x697ecd:c.instructions+=4;goto B697ecd;
case 0x697ed1:c.instructions+=3;goto B697ed1;
case 0x697ed2:c.instructions+=2;goto B697ed2;
case 0x697ed3:c.instructions+=1;goto B697ed3;
case 0x697ed5:goto L697ed5;
case 0x697ed9:c.instructions+=2;goto B697ed9;
case 0x697edb:c.instructions+=1;goto B697edb;
case 0x697edd:goto L697edd;
case 0x697ede:c.instructions+=1;goto B697ede;
case 0x697ee0:goto L697ee0;
case 0x697ee1:c.instructions+=1;goto B697ee1;
case 0x697ee3:goto L697ee3;
case 0x697ee4:c.instructions+=1;goto B697ee4;
case 0x697ee6:goto L697ee6;
case 0x697eeb:c.instructions+=1;goto B697eeb;
case 0x697eed:goto L697eed;
case 0x697ef2:c.instructions+=1;goto B697ef2;
case 0x697ef4:goto L697ef4;
case 0x697ef9:c.instructions+=1;goto B697ef9;
case 0x697efb:goto L697efb;
case 0x697f00:c.instructions+=1;goto B697f00;
case 0x697f02:goto L697f02;
case 0x697f08:c.instructions+=1;goto B697f08;
case 0x697f0a:goto L697f0a;
case 0x697f0c:c.instructions+=1;goto B697f0c;
case 0x697f0e:goto L697f0e;
case 0x697f11:c.instructions+=3;goto B697f11;
case 0x697f15:c.instructions+=2;goto B697f15;
case 0x697f17:c.instructions+=1;goto B697f17;
case 0x697f1d:goto L697f1d;
case 0x697f1e:c.instructions+=1;goto B697f1e;
case 0x697f20:goto L697f20;
case 0x697f21:c.instructions+=1;goto B697f21;
case 0x697f23:goto L697f23;
case 0x697f28:c.instructions+=1;goto B697f28;
case 0x697f2a:goto L697f2a;
case 0x697f2f:c.instructions+=1;goto B697f2f;
case 0x697f31:goto L697f31;
case 0x697f34:c.instructions+=3;goto B697f34;
case 0x697f38:c.instructions+=2;goto B697f38;
case 0x697f3a:c.instructions+=1;goto B697f3a;
case 0x697f3c:goto L697f3c;
case 0x697f3d:c.instructions+=1;goto B697f3d;
case 0x697f43:goto L697f43;
case 0x697f48:goto L697f48;
case 0x697f4d:goto L697f4d;
case 0x697f4f:c.instructions+=1;goto B697f4f;
case 0x697f54:goto L697f54;
case 0x697f56:c.instructions+=2;goto B697f56;
case 0x697f57:c.instructions+=1;goto B697f57;
case 0x697f59:goto L697f59;
case 0x697f5c:c.instructions+=6;goto B697f5c;
case 0x697f5e:c.instructions+=5;goto B697f5e;
case 0x697f5f:c.instructions+=4;goto B697f5f;
case 0x697f60:c.instructions+=3;goto B697f60;
case 0x697f63:c.instructions+=2;goto B697f63;
case 0x697f66:c.instructions+=1;goto B697f66;
case 0x697f6b:goto L697f6b;
case 0x697f6d:c.instructions+=1;goto B697f6d;
case 0x697f6f:goto L697f6f;
case 0x697f71:goto L697f71;
case 0x697f73:c.instructions+=1;goto B697f73;
case 0x697f75:goto L697f75;
case 0x697f77:c.instructions+=1;goto B697f77;
case 0x697f7c:goto L697f7c;
case 0x697f7e:c.instructions+=1;goto B697f7e;
case 0x697f80:goto L697f80;
case 0x697f82:c.instructions+=2;goto B697f82;
case 0x697f84:c.instructions+=1;goto B697f84;
case 0x697f89:goto L697f89;
case 0x697f8b:c.instructions+=1;goto B697f8b;
case 0x697f8d:goto L697f8d;
case 0x697f8f:goto L697f8f;
case 0x697f90:c.instructions+=4;goto B697f90;
case 0x697f91:c.instructions+=3;goto B697f91;
case 0x697f92:c.instructions+=2;goto B697f92;
case 0x697f93:c.instructions+=1;goto B697f93;
case 0x697f96:goto L697f96;
case 0x697f98:c.instructions+=10;goto B697f98;
case 0x697f99:c.instructions+=9;goto B697f99;
case 0x697f9b:c.instructions+=8;goto B697f9b;
case 0x697f9e:c.instructions+=7;goto B697f9e;
case 0x697f9f:c.instructions+=6;goto B697f9f;
case 0x697fa1:c.instructions+=5;goto B697fa1;
case 0x697fa4:c.instructions+=4;goto B697fa4;
case 0x697fa9:c.instructions+=3;goto B697fa9;
case 0x697faa:c.instructions+=2;goto B697faa;
case 0x697fab:c.instructions+=1;goto B697fab;
case 0x697fb1:goto L697fb1;
case 0x697fb5:c.instructions+=3;goto B697fb5;
case 0x697fb8:c.instructions+=2;goto B697fb8;
case 0x697fb9:c.instructions+=1;goto B697fb9;
case 0x697fbe:goto L697fbe;
case 0x697fc0:c.instructions+=4;goto B697fc0;
case 0x697fc2:c.instructions+=3;goto B697fc2;
case 0x697fc3:c.instructions+=2;goto B697fc3;
case 0x697fc6:c.instructions+=1;goto B697fc6;
case 0x697fcc:goto L697fcc;
case 0x697fcf:c.instructions+=5;goto B697fcf;
case 0x697fd3:c.instructions+=4;goto B697fd3;
case 0x697fd6:c.instructions+=3;goto B697fd6;
case 0x697fd8:c.instructions+=2;goto B697fd8;
case 0x697fdb:c.instructions+=1;goto B697fdb;
case 0x697fdd:goto L697fdd;
case 0x697fdf:goto L697fdf;
case 0x697fe1:c.instructions+=1;goto B697fe1;
case 0x697fe4:goto L697fe4;
case 0x697fe6:goto L697fe6;
case 0x697fe9:c.instructions+=6;goto B697fe9;
case 0x697feb:c.instructions+=5;goto B697feb;
case 0x697fee:c.instructions+=4;goto B697fee;
case 0x697ff1:c.instructions+=3;goto B697ff1;
case 0x697ff4:c.instructions+=2;goto B697ff4;
case 0x697ff5:c.instructions+=1;goto B697ff5;
case 0x697ff8:goto L697ff8;
case 0x697ffa:goto L697ffa;
case 0x697ffe:c.instructions+=1;goto B697ffe;
default:missing_instruction(c.pc);}
B697000:L697000:{c.instructions+=11;NFSU2_TR(0x697000);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B697003:{NFSU2_TR(0x697003);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B697006:{NFSU2_TR(0x697006);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B697009:{NFSU2_TR(0x697009);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69700c:{NFSU2_TR(0x69700c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69700f:{NFSU2_TR(0x69700f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B697012:{NFSU2_TR(0x697012);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B697014:{NFSU2_TR(0x697014);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B697017:{NFSU2_TR(0x697017);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B697018:{NFSU2_TR(0x697018);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B69701b:{NFSU2_TR(0x69701b);
if(r1(R+512)){TAIL_STATIC(0x696ff4u,696);}
}
B69701d:L69701d:{c.instructions+=5;NFSU2_TR(0x69701d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B697020:{NFSU2_TR(0x697020);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B697024:{NFSU2_TR(0x697024);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B697028:{NFSU2_TR(0x697028);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69702b:{NFSU2_TR(0x69702b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6973b3;}}
}
B697031:L697031:{c.instructions+=3;NFSU2_TR(0x697031);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B697033:{NFSU2_TR(0x697033);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(U+6))<(r2(R+12))));
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+12))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B697037:{NFSU2_TR(0x697037);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L697077;}}
}
B697039:L697039:{c.instructions+=9;NFSU2_TR(0x697039);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69703c:{NFSU2_TR(0x69703c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69703f:{NFSU2_TR(0x69703f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B697042:{NFSU2_TR(0x697042);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B697045:{NFSU2_TR(0x697045);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B697048:{NFSU2_TR(0x697048);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69704b:{NFSU2_TR(0x69704b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69704e:{NFSU2_TR(0x69704e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69704f:{NFSU2_TR(0x69704f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x697054ull));
TAIL_STATIC(0x6963cfu,696);
}
B697054:L697054:{c.instructions+=2;NFSU2_TR(0x697054);
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
B697056:{NFSU2_TR(0x697056);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6973b5;}}
}
B69705c:L69705c:{c.instructions+=10;NFSU2_TR(0x69705c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69705f:{NFSU2_TR(0x69705f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B697062:{NFSU2_TR(0x697062);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B697065:{NFSU2_TR(0x697065);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B697068:{NFSU2_TR(0x697068);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69706b:{NFSU2_TR(0x69706b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B69706e:{NFSU2_TR(0x69706e);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B697072:{NFSU2_TR(0x697072);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B697073:{NFSU2_TR(0x697073);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
}
B697075:{NFSU2_TR(0x697075);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x697039u);}goto L697039;}}
}
B697077:L697077:{c.instructions+=4;NFSU2_TR(0x697077);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69707a:{NFSU2_TR(0x69707a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69707d:{NFSU2_TR(0x69707d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B697080:{NFSU2_TR(0x697080);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x697031u);}goto L697031;}}
}
B697082:L697082:{c.instructions+=1;NFSU2_TR(0x697082);
{goto L6973b3;}
}
B697087:L697087:{c.instructions+=5;NFSU2_TR(0x697087);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B69708b:{NFSU2_TR(0x69708b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69708e:{NFSU2_TR(0x69708e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B697090:{NFSU2_TR(0x697090);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B697093:{NFSU2_TR(0x697093);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L697098;}}
}
B697095:L697095:{c.instructions+=1;NFSU2_TR(0x697095);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B697098:L697098:{c.instructions+=4;NFSU2_TR(0x697098);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69709b:{NFSU2_TR(0x69709b);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B69709d:{NFSU2_TR(0x69709d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6970a0:{NFSU2_TR(0x6970a0);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L697221;}}
}
B6970a6:L6970a6:{c.instructions+=3;NFSU2_TR(0x6970a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6970aa:{NFSU2_TR(0x6970aa);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(U+6))<(u16(0x0ull))));
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B6970af:{NFSU2_TR(0x6970af);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6970f6;}}
}
B6970b1:L6970b1:{c.instructions+=1;NFSU2_TR(0x6970b1);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6970b5:L6970b5:{c.instructions+=3;NFSU2_TR(0x6970b5);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6970b7:{NFSU2_TR(0x6970b7);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6970b9:{NFSU2_TR(0x6970b9);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6970ea;}}
}
B6970bb:L6970bb:{c.instructions+=2;NFSU2_TR(0x6970bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6970be:{NFSU2_TR(0x6970be);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6970c1:L6970c1:{c.instructions+=2;NFSU2_TR(0x6970c1);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6970c4:{NFSU2_TR(0x6970c4);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6970d7;}}
}
B6970c6:L6970c6:{c.instructions+=2;NFSU2_TR(0x6970c6);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x4ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6970ca:{NFSU2_TR(0x6970ca);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6970d7;}}
}
B6970cc:L6970cc:{c.instructions+=4;NFSU2_TR(0x6970cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6970cf:{NFSU2_TR(0x6970cf);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6970d2:{NFSU2_TR(0x6970d2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6970d5:{NFSU2_TR(0x6970d5);
{goto L6970d9;}
}
B6970d7:L6970d7:{c.instructions+=1;NFSU2_TR(0x6970d7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6970d9:L6970d9:{c.instructions+=7;NFSU2_TR(0x6970d9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B6970db:{NFSU2_TR(0x6970db);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6970df:{NFSU2_TR(0x6970df);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B6970e2:{NFSU2_TR(0x6970e2);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6970e3:{NFSU2_TR(0x6970e3);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B6970e6:{NFSU2_TR(0x6970e6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B6970e8:{NFSU2_TR(0x6970e8);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6970c1u);}goto L6970c1;}}
}
B6970ea:L6970ea:{c.instructions+=4;NFSU2_TR(0x6970ea);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6970ee:{NFSU2_TR(0x6970ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6970f1:{NFSU2_TR(0x6970f1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
}
B6970f4:{NFSU2_TR(0x6970f4);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6970b5u);}goto L6970b5;}}
}
B6970f6:L6970f6:{c.instructions+=3;NFSU2_TR(0x6970f6);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6970f7:{NFSU2_TR(0x6970f7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B6970fa:{NFSU2_TR(0x6970fa);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6970a6u);}goto L6970a6;}}
}
B6970fc:L6970fc:{c.instructions+=1;NFSU2_TR(0x6970fc);
{goto L697221;}
}
B697101:L697101:{c.instructions+=5;NFSU2_TR(0x697101);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B697105:{NFSU2_TR(0x697105);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B697108:{NFSU2_TR(0x697108);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69710a:{NFSU2_TR(0x69710a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69710d:{NFSU2_TR(0x69710d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L697112;}}
}
B69710f:L69710f:{c.instructions+=1;NFSU2_TR(0x69710f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B697112:L697112:{c.instructions+=4;NFSU2_TR(0x697112);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B697114:{NFSU2_TR(0x697114);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B697117:{NFSU2_TR(0x697117);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69711a:{NFSU2_TR(0x69711a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L697221;}}
}
B697120:L697120:{c.instructions+=3;NFSU2_TR(0x697120);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B697122:{NFSU2_TR(0x697122);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(U+6))<(r2(R+8))));
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+8))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B697126:{NFSU2_TR(0x697126);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L697167;}}
}
B697128:L697128:{c.instructions+=1;NFSU2_TR(0x697128);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B69712c:L69712c:{c.instructions+=3;NFSU2_TR(0x69712c);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B69712e:{NFSU2_TR(0x69712e);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B697130:{NFSU2_TR(0x697130);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69715e;}}
}
B697132:L697132:{c.instructions+=2;NFSU2_TR(0x697132);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B697135:{NFSU2_TR(0x697135);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L69714a;}}
}
B697137:L697137:{c.instructions+=2;NFSU2_TR(0x697137);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69713a:{NFSU2_TR(0x69713a);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L69714a;}}
}
B69713c:L69713c:{c.instructions+=5;NFSU2_TR(0x69713c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69713f:{NFSU2_TR(0x69713f);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B697142:{NFSU2_TR(0x697142);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B697145:{NFSU2_TR(0x697145);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B697148:{NFSU2_TR(0x697148);
{goto L69714c;}
}
B69714a:L69714a:{c.instructions+=1;NFSU2_TR(0x69714a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B69714c:L69714c:{c.instructions+=7;NFSU2_TR(0x69714c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69714f:{NFSU2_TR(0x69714f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B697153:{NFSU2_TR(0x697153);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B697155:{NFSU2_TR(0x697155);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B697159:{NFSU2_TR(0x697159);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B69715a:{NFSU2_TR(0x69715a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B69715c:{NFSU2_TR(0x69715c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x697132u);}goto L697132;}}
}
B69715e:L69715e:{c.instructions+=4;NFSU2_TR(0x69715e);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B697162:{NFSU2_TR(0x697162);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B697163:{NFSU2_TR(0x697163);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B697165:{NFSU2_TR(0x697165);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69712cu);}goto L69712c;}}
}
B697167:L697167:{c.instructions+=3;NFSU2_TR(0x697167);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B697168:{NFSU2_TR(0x697168);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B69716b:{NFSU2_TR(0x69716b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x697120u);}goto L697120;}}
}
B69716d:L69716d:{c.instructions+=1;NFSU2_TR(0x69716d);
{goto L697221;}
}
B697172:L697172:{c.instructions+=6;NFSU2_TR(0x697172);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B697175:{NFSU2_TR(0x697175);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B697179:{NFSU2_TR(0x697179);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B69717c:{NFSU2_TR(0x69717c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69717e:{NFSU2_TR(0x69717e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B697181:{NFSU2_TR(0x697181);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L697186;}}
}
B697183:L697183:{c.instructions+=1;NFSU2_TR(0x697183);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B697186:L697186:{c.instructions+=4;NFSU2_TR(0x697186);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69718a:{NFSU2_TR(0x69718a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69718e:{NFSU2_TR(0x69718e);
__builtin_memmove((R+8),(R+12),4);
}
B697190:{NFSU2_TR(0x697190);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L697221;}}
}
B697196:L697196:{c.instructions+=1;NFSU2_TR(0x697196);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B69719a:L69719a:{c.instructions+=3;NFSU2_TR(0x69719a);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B69719c:{NFSU2_TR(0x69719c);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69719e:{NFSU2_TR(0x69719e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6971cf;}}
}
B6971a0:L6971a0:{c.instructions+=2;NFSU2_TR(0x6971a0);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6971a3:{NFSU2_TR(0x6971a3);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6971a9;}}
}
B6971a5:L6971a5:{c.instructions+=2;NFSU2_TR(0x6971a5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6971a7:{NFSU2_TR(0x6971a7);
{goto L6971c1;}
}
B6971a9:L6971a9:{c.instructions+=8;NFSU2_TR(0x6971a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6971ac:{NFSU2_TR(0x6971ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6971af:{NFSU2_TR(0x6971af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6971b2:{NFSU2_TR(0x6971b2);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x3ull))));
}
B6971b5:{NFSU2_TR(0x6971b5);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B6971b8:{NFSU2_TR(0x6971b8);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6971bb:{NFSU2_TR(0x6971bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6971be:{NFSU2_TR(0x6971be);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6971c1:L6971c1:{c.instructions+=6;NFSU2_TR(0x6971c1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6971c3:{NFSU2_TR(0x6971c3);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6971c7:{NFSU2_TR(0x6971c7);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6971ca:{NFSU2_TR(0x6971ca);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6971cb:{NFSU2_TR(0x6971cb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B6971cd:{NFSU2_TR(0x6971cd);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6971a0u);}goto L6971a0;}}
}
B6971cf:L6971cf:{c.instructions+=4;NFSU2_TR(0x6971cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6971d2:{NFSU2_TR(0x6971d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6971d5:{NFSU2_TR(0x6971d5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6971d8:{NFSU2_TR(0x6971d8);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69719au);}goto L69719a;}}
}
B6971da:L6971da:{c.instructions+=1;NFSU2_TR(0x6971da);
{goto L697221;}
}
B6971dc:L6971dc:{c.instructions+=6;NFSU2_TR(0x6971dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6971df:{NFSU2_TR(0x6971df);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6971e3:{NFSU2_TR(0x6971e3);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6971e6:{NFSU2_TR(0x6971e6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6971e8:{NFSU2_TR(0x6971e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6971eb:{NFSU2_TR(0x6971eb);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6971f2;}}
}
B6971ed:L6971ed:{c.instructions+=2;NFSU2_TR(0x6971ed);
__builtin_memmove((R+28),(R+0),4);
}
B6971ef:{NFSU2_TR(0x6971ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6971f2:L6971f2:{c.instructions+=3;NFSU2_TR(0x6971f2);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6971f4:{NFSU2_TR(0x6971f4);
__builtin_memmove((R+4),(R+12),4);
}
B6971f6:{NFSU2_TR(0x6971f6);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L697221;}}
}
B6971f8:L6971f8:{c.instructions+=16;NFSU2_TR(0x6971f8);
__builtin_memmove((R+0),(R+8),4);
}
B6971fa:{NFSU2_TR(0x6971fa);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B6971fd:{NFSU2_TR(0x6971fd);
__builtin_memmove((R+28),(R+0),4);
}
B6971ff:{NFSU2_TR(0x6971ff);
__builtin_memmove((R+12),(R+8),4);
}
B697201:{NFSU2_TR(0x697201);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0x3ull))));
}
B697204:{NFSU2_TR(0x697204);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0x3ull))));
}
B697207:{NFSU2_TR(0x697207);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B69720a:{NFSU2_TR(0x69720a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B69720d:{NFSU2_TR(0x69720d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B697210:{NFSU2_TR(0x697210);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B697213:{NFSU2_TR(0x697213);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B697216:{NFSU2_TR(0x697216);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B697218:{NFSU2_TR(0x697218);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B69721b:{NFSU2_TR(0x69721b);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B69721c:{NFSU2_TR(0x69721c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B69721f:{NFSU2_TR(0x69721f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6971f8u);}goto L6971f8;}}
}
B697221:L697221:{c.instructions+=3;NFSU2_TR(0x697221);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B697225:{NFSU2_TR(0x697225);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0x3ull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B697229:{NFSU2_TR(0x697229);
if(r1(R+518)){{goto L6972a6;}}
}
B69722b:L69722b:{c.instructions+=6;NFSU2_TR(0x69722b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69722e:{NFSU2_TR(0x69722e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B697231:{NFSU2_TR(0x697231);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
w8(U+8,u64(s64(s32(r4(R+4)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
}
B697235:{NFSU2_TR(0x697235);
w4(R+0,u32(r2(R+0)));
}
B697238:{NFSU2_TR(0x697238);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B697239:{NFSU2_TR(0x697239);
if(r1(R+518)){{goto L69727b;}}
}
B69723b:L69723b:{c.instructions+=2;NFSU2_TR(0x69723b);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B69723c:{NFSU2_TR(0x69723c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6972a6;}}
}
B69723e:L69723e:{c.instructions+=10;NFSU2_TR(0x69723e);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd9,0x38"::"a"(ea_):"memory");}
}
B697241:{NFSU2_TR(0x697241);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B697244:{NFSU2_TR(0x697244);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xc00ull))));
}
B697249:{NFSU2_TR(0x697249);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69724c:{NFSU2_TR(0x69724c);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x28"::"a"(ea_):"memory");}
}
B69724f:{NFSU2_TR(0x69724f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B697252:{NFSU2_TR(0x697252);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B697255:{NFSU2_TR(0x697255);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B697257:{NFSU2_TR(0x697257);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B697259:{NFSU2_TR(0x697259);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L697276;}}
}
B69725b:L69725b:{c.instructions+=11;NFSU2_TR(0x69725b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69725e:{NFSU2_TR(0x69725e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B697261:{NFSU2_TR(0x697261);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+28),(U+0),4);
}
B697263:{NFSU2_TR(0x697263);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B697266:{NFSU2_TR(0x697266);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B697269:{NFSU2_TR(0x697269);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B69726c:{NFSU2_TR(0x69726c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69726f:{NFSU2_TR(0x69726f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B697270:{NFSU2_TR(0x697270);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B697272:{NFSU2_TR(0x697272);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+8)),r4(U+0));
}
B697274:{NFSU2_TR(0x697274);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69725bu);}goto L69725b;}}
}
B697276:L697276:{c.instructions+=2;NFSU2_TR(0x697276);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x28"::"a"(ea_):"memory");}
}
B697279:{NFSU2_TR(0x697279);
{goto L6972a6;}
}
B69727b:L69727b:{c.instructions+=3;NFSU2_TR(0x69727b);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B69727d:{NFSU2_TR(0x69727d);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69727f:{NFSU2_TR(0x69727f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6972a6;}}
}
B697281:L697281:{c.instructions+=8;NFSU2_TR(0x697281);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B697284:{NFSU2_TR(0x697284);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B69728a:{NFSU2_TR(0x69728a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B69728d:{NFSU2_TR(0x69728d);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B69728f:{NFSU2_TR(0x69728f);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B697291:{NFSU2_TR(0x697291);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B697293:{NFSU2_TR(0x697293);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B697296:{NFSU2_TR(0x697296);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L69729d;}}
}
B697298:L697298:{c.instructions+=3;NFSU2_TR(0x697298);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B69729a:{NFSU2_TR(0x69729a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B69729b:{NFSU2_TR(0x69729b);
{goto L69729f;}
}
B69729d:L69729d:{c.instructions+=1;NFSU2_TR(0x69729d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B69729f:L69729f:{c.instructions+=4;NFSU2_TR(0x69729f);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6972a0:{NFSU2_TR(0x6972a0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B6972a2:{NFSU2_TR(0x6972a2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B6972a4:{NFSU2_TR(0x6972a4);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x697281u);}goto L697281;}}
}
B6972a6:L6972a6:{c.instructions+=4;NFSU2_TR(0x6972a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6972a9:{NFSU2_TR(0x6972a9);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B6972ad:{NFSU2_TR(0x6972ad);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))&u32(r2(R+0))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B6972b0:{NFSU2_TR(0x6972b0);
if(r1(R+518)){{goto L697386;}}
}
B6972b6:L6972b6:{c.instructions+=2;NFSU2_TR(0x6972b6);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(U+2))-u32(u16(0x3ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B6972ba:{NFSU2_TR(0x6972ba);
if(r1(R+518)){{goto L6972c6;}}
}
B6972bc:L6972bc:{c.instructions+=3;NFSU2_TR(0x6972bc);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B6972c0:{NFSU2_TR(0x6972c0);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B6972c4:{NFSU2_TR(0x6972c4);
{goto L6972ce;}
}
B6972c6:L6972c6:{c.instructions+=2;NFSU2_TR(0x6972c6);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B6972ca:{NFSU2_TR(0x6972ca);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B6972ce:L6972ce:{c.instructions+=2;NFSU2_TR(0x6972ce);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x3ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6972d1:{NFSU2_TR(0x6972d1);
if(r1(R+518)){{goto L697386;}}
}
B6972d7:L6972d7:{c.instructions+=3;NFSU2_TR(0x6972d7);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0x1ull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B6972db:{NFSU2_TR(0x6972db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x7babd4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6972e2:{NFSU2_TR(0x6972e2);
if(r1(R+518)){{goto L6972eb;}}
}
B6972e4:L6972e4:{c.instructions+=1;NFSU2_TR(0x6972e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x7babc4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6972eb:L6972eb:{c.instructions+=6;NFSU2_TR(0x6972eb);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
w8(U+8,u64(s64(s32(r4(R+28)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+28,u32(r8(U+24)));
}
B6972ef:{NFSU2_TR(0x6972ef);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6972f2:{NFSU2_TR(0x6972f2);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfffffffcull))));
}
B6972f5:{NFSU2_TR(0x6972f5);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6972f7:{NFSU2_TR(0x6972f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6972fa:{NFSU2_TR(0x6972fa);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L697386;}}
}
B697300:L697300:{c.instructions+=13;NFSU2_TR(0x697300);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B697303:{NFSU2_TR(0x697303);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4ull))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B69730a:{NFSU2_TR(0x69730a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B69730d:{NFSU2_TR(0x69730d);
__builtin_memmove((R+0),(R+4),4);
}
B69730f:{NFSU2_TR(0x69730f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B697312:{NFSU2_TR(0x697312);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B697315:{NFSU2_TR(0x697315);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B697317:{NFSU2_TR(0x697317);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B697319:{NFSU2_TR(0x697319);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B69731c:{NFSU2_TR(0x69731c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B69731f:{NFSU2_TR(0x69731f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B697322:{NFSU2_TR(0x697322);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B697325:{NFSU2_TR(0x697325);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B697328:L697328:{c.instructions+=10;NFSU2_TR(0x697328);
__builtin_memmove((R+28),(R+24),4);
}
B69732a:{NFSU2_TR(0x69732a);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B69732d:{NFSU2_TR(0x69732d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B697330:{NFSU2_TR(0x697330);
__builtin_memmove((R+4),(R+8),4);
}
B697332:{NFSU2_TR(0x697332);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B697335:{NFSU2_TR(0x697335);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+28))));
}
B697337:{NFSU2_TR(0x697337);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B697339:{NFSU2_TR(0x697339);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69733b:{NFSU2_TR(0x69733b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69733e:{NFSU2_TR(0x69733e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L697362;}}
}
B697340:L697340:{c.instructions+=1;NFSU2_TR(0x697340);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B697343:L697343:{c.instructions+=11;NFSU2_TR(0x697343);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B697346:{NFSU2_TR(0x697346);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B697349:{NFSU2_TR(0x697349);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x4ull))));
}
B69734c:{NFSU2_TR(0x69734c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69734f:{NFSU2_TR(0x69734f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B697352:{NFSU2_TR(0x697352);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B697355:{NFSU2_TR(0x697355);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B697358:{NFSU2_TR(0x697358);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B69735b:{NFSU2_TR(0x69735b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69735e:{NFSU2_TR(0x69735e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+4)),r4(U+0));
}
B697360:{NFSU2_TR(0x697360);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x697343u);}goto L697343;}}
}
B697362:L697362:{c.instructions+=2;NFSU2_TR(0x697362);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B697364:{NFSU2_TR(0x697364);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L697381;}}
}
B697366:L697366:{c.instructions+=3;NFSU2_TR(0x697366);
__builtin_memmove((R+4),(R+12),4);
}
B697368:{NFSU2_TR(0x697368);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69736b:{NFSU2_TR(0x69736b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69736e:L69736e:{c.instructions+=7;NFSU2_TR(0x69736e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B697372:{NFSU2_TR(0x697372);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B697375:{NFSU2_TR(0x697375);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B697377:{NFSU2_TR(0x697377);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x4ull))));
}
B69737a:{NFSU2_TR(0x69737a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69737d:{NFSU2_TR(0x69737d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+4)),r4(U+0));
}
B69737f:{NFSU2_TR(0x69737f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69736eu);}goto L69736e;}}
}
B697381:L697381:{c.instructions+=2;NFSU2_TR(0x697381);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B697384:{NFSU2_TR(0x697384);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x697328u);}goto L697328;}}
}
B697386:L697386:{c.instructions+=6;NFSU2_TR(0x697386);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B697389:{NFSU2_TR(0x697389);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69738c:{NFSU2_TR(0x69738c);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B697390:{NFSU2_TR(0x697390);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B697394:{NFSU2_TR(0x697394);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B697396:{NFSU2_TR(0x697396);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69739a;}}
}
B697398:L697398:{c.instructions+=1;NFSU2_TR(0x697398);
__builtin_memmove((R+0),(R+8),4);
}
B69739a:L69739a:{c.instructions+=8;NFSU2_TR(0x69739a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69739b:{NFSU2_TR(0x69739b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69739e:{NFSU2_TR(0x69739e);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6973a2:{NFSU2_TR(0x6973a2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6973a5:{NFSU2_TR(0x6973a5);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6973a8:{NFSU2_TR(0x6973a8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6973a9:{NFSU2_TR(0x6973a9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6973ac:{NFSU2_TR(0x6973ac);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6973afull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6973af:L6973af:{c.instructions+=2;NFSU2_TR(0x6973af);
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
B6973b1:{NFSU2_TR(0x6973b1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6973b5;}}
}
B6973b3:L6973b3:{c.instructions+=1;NFSU2_TR(0x6973b3);
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
B6973b5:L6973b5:{c.instructions+=5;NFSU2_TR(0x6973b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6973b6:{NFSU2_TR(0x6973b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6973b7:{NFSU2_TR(0x6973b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6973b8:{NFSU2_TR(0x6973b8);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6973b9:{NFSU2_TR(0x6973b9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6973bc:L6973bc:{c.instructions+=16;NFSU2_TR(0x6973bc);
__builtin_memmove((R+28),(R+28),4);
}
B6973be:{NFSU2_TR(0x6973be);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6973bf:{NFSU2_TR(0x6973bf);
__builtin_memmove((R+20),(R+16),4);
}
B6973c1:{NFSU2_TR(0x6973c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B6973c4:{NFSU2_TR(0x6973c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6973c7:{NFSU2_TR(0x6973c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6973ca:{NFSU2_TR(0x6973ca);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6973cb:{NFSU2_TR(0x6973cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6973ce:{NFSU2_TR(0x6973ce);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6973cf:{NFSU2_TR(0x6973cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6973d2:{NFSU2_TR(0x6973d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6973d5:{NFSU2_TR(0x6973d5);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(R+0,u32(r2(U+0)));
}
B6973d8:{NFSU2_TR(0x6973d8);
w1(R+512,u8((r4(R+0))<(u32(0x0ull))));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6973db:{NFSU2_TR(0x6973db);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6973dc:{NFSU2_TR(0x6973dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6973df:{NFSU2_TR(0x6973df);
if(r1(R+518)){{goto L6976cd;}}
}
B6973e5:L6973e5:{c.instructions+=2;NFSU2_TR(0x6973e5);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6973e6:{NFSU2_TR(0x6973e6);
if(r1(R+518)){{goto L69766c;}}
}
B6973ec:L6973ec:{c.instructions+=2;NFSU2_TR(0x6973ec);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6973ed:{NFSU2_TR(0x6973ed);
if(r1(R+518)){{goto L697553;}}
}
B6973f3:L6973f3:{c.instructions+=2;NFSU2_TR(0x6973f3);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6973f4:{NFSU2_TR(0x6973f4);
if(r1(R+518)){{goto L6974c7;}}
}
B6973fa:L6973fa:{c.instructions+=3;NFSU2_TR(0x6973fa);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B6973fb:{NFSU2_TR(0x6973fb);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6973fc:{NFSU2_TR(0x6973fc);
if(r1(R+518)){{goto L697408;}}
}
B6973fe:L6973fe:{c.instructions+=2;NFSU2_TR(0x6973fe);
w4(R+0,u32(0x80004001ull));
}
B697403:{NFSU2_TR(0x697403);
{goto L6978bd;}
}
B697408:L697408:{c.instructions+=9;NFSU2_TR(0x697408);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69740b:{NFSU2_TR(0x69740b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69740e:{NFSU2_TR(0x69740e);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B697411:{NFSU2_TR(0x697411);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B697413:{NFSU2_TR(0x697413);
u8 U[56];
w8(U+0,u64(r4(R+4)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x697413);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x697413);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B697415:{NFSU2_TR(0x697415);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B697418:{NFSU2_TR(0x697418);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B69741c:{NFSU2_TR(0x69741c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69741f:{NFSU2_TR(0x69741f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L697424;}}
}
B697421:L697421:{c.instructions+=1;NFSU2_TR(0x697421);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B697424:L697424:{c.instructions+=6;NFSU2_TR(0x697424);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
w8(U+8,u64(s64(s32(r4(R+4)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
}
B697428:{NFSU2_TR(0x697428);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69742b:{NFSU2_TR(0x69742b);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B69742d:{NFSU2_TR(0x69742d);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69742f:{NFSU2_TR(0x69742f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B697432:{NFSU2_TR(0x697432);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69745d;}}
}
B697434:L697434:{c.instructions+=16;NFSU2_TR(0x697434);
__builtin_memmove((R+0),(R+28),4);
}
B697436:{NFSU2_TR(0x697436);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B697439:{NFSU2_TR(0x697439);
__builtin_memmove((R+4),(R+0),4);
}
B69743b:{NFSU2_TR(0x69743b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B69743e:{NFSU2_TR(0x69743e);
__builtin_memmove((R+12),(R+28),4);
}
B697440:{NFSU2_TR(0x697440);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0x3ull))));
}
B697443:{NFSU2_TR(0x697443);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x3ull))));
}
B697446:{NFSU2_TR(0x697446);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B697449:{NFSU2_TR(0x697449);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B69744c:{NFSU2_TR(0x69744c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69744f:{NFSU2_TR(0x69744f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B697452:{NFSU2_TR(0x697452);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B697454:{NFSU2_TR(0x697454);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B697457:{NFSU2_TR(0x697457);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B697458:{NFSU2_TR(0x697458);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B69745b:{NFSU2_TR(0x69745b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x697434u);}goto L697434;}}
}
B69745d:L69745d:{c.instructions+=5;NFSU2_TR(0x69745d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B697460:{NFSU2_TR(0x697460);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B697464:{NFSU2_TR(0x697464);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B697468:{NFSU2_TR(0x697468);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69746b:{NFSU2_TR(0x69746b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6978bb;}}
}
B697471:L697471:{c.instructions+=3;NFSU2_TR(0x697471);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B697473:{NFSU2_TR(0x697473);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(U+6))<(r2(R+12))));
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+12))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B697477:{NFSU2_TR(0x697477);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6974b7;}}
}
B697479:L697479:{c.instructions+=9;NFSU2_TR(0x697479);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69747c:{NFSU2_TR(0x69747c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69747f:{NFSU2_TR(0x69747f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B697482:{NFSU2_TR(0x697482);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B697485:{NFSU2_TR(0x697485);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B697488:{NFSU2_TR(0x697488);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69748b:{NFSU2_TR(0x69748b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69748e:{NFSU2_TR(0x69748e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69748f:{NFSU2_TR(0x69748f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x697494ull));
TAIL_STATIC(0x6963cfu,696);
}
B697494:L697494:{c.instructions+=2;NFSU2_TR(0x697494);
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
B697496:{NFSU2_TR(0x697496);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6978bd;}}
}
B69749c:L69749c:{c.instructions+=10;NFSU2_TR(0x69749c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69749f:{NFSU2_TR(0x69749f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6974a2:{NFSU2_TR(0x6974a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6974a5:{NFSU2_TR(0x6974a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6974a8:{NFSU2_TR(0x6974a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6974ab:{NFSU2_TR(0x6974ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6974ae:{NFSU2_TR(0x6974ae);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6974b2:{NFSU2_TR(0x6974b2);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6974b3:{NFSU2_TR(0x6974b3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
}
B6974b5:{NFSU2_TR(0x6974b5);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x697479u);}goto L697479;}}
}
B6974b7:L6974b7:{c.instructions+=4;NFSU2_TR(0x6974b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6974ba:{NFSU2_TR(0x6974ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6974bd:{NFSU2_TR(0x6974bd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6974c0:{NFSU2_TR(0x6974c0);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x697471u);}goto L697471;}}
}
B6974c2:L6974c2:{c.instructions+=1;NFSU2_TR(0x6974c2);
{goto L6978bb;}
}
B6974c7:L6974c7:{c.instructions+=5;NFSU2_TR(0x6974c7);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6974cb:{NFSU2_TR(0x6974cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6974ce:{NFSU2_TR(0x6974ce);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6974d0:{NFSU2_TR(0x6974d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6974d3:{NFSU2_TR(0x6974d3);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6974d8;}}
}
B6974d5:L6974d5:{c.instructions+=1;NFSU2_TR(0x6974d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6974d8:L6974d8:{c.instructions+=3;NFSU2_TR(0x6974d8);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B6974dc:{NFSU2_TR(0x6974dc);
u8 U[4];
__builtin_memmove((U+0),(R+8),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0x4ull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B6974e0:{NFSU2_TR(0x6974e0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6974ec;}}
}
B6974e2:L6974e2:{c.instructions+=2;NFSU2_TR(0x6974e2);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+8))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B6974e6:{NFSU2_TR(0x6974e6);
if(r1(R+518)){{goto L69771b;}}
}
B6974ec:L6974ec:{c.instructions+=4;NFSU2_TR(0x6974ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6974ef:{NFSU2_TR(0x6974ef);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6974f1:{NFSU2_TR(0x6974f1);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6974f4:{NFSU2_TR(0x6974f4);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L697715;}}
}
B6974fa:L6974fa:{c.instructions+=3;NFSU2_TR(0x6974fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6974fe:{NFSU2_TR(0x6974fe);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(U+6))<(u16(0x0ull))));
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B697503:{NFSU2_TR(0x697503);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L697548;}}
}
B697505:L697505:{c.instructions+=1;NFSU2_TR(0x697505);
w4(R+0,u32(r2(R+8)));
}
B697508:L697508:{c.instructions+=3;NFSU2_TR(0x697508);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B69750a:{NFSU2_TR(0x69750a);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69750c:{NFSU2_TR(0x69750c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69753c;}}
}
B69750e:L69750e:{c.instructions+=2;NFSU2_TR(0x69750e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B697511:{NFSU2_TR(0x697511);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L697529;}}
}
B697513:L697513:{c.instructions+=3;NFSU2_TR(0x697513);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B697516:{NFSU2_TR(0x697516);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B697519:{NFSU2_TR(0x697519);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L697529;}}
}
B69751b:L69751b:{c.instructions+=5;NFSU2_TR(0x69751b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69751e:{NFSU2_TR(0x69751e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B697521:{NFSU2_TR(0x697521);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B697524:{NFSU2_TR(0x697524);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B697527:{NFSU2_TR(0x697527);
{goto L69752b;}
}
B697529:L697529:{c.instructions+=1;NFSU2_TR(0x697529);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B69752b:L69752b:{c.instructions+=7;NFSU2_TR(0x69752b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B69752d:{NFSU2_TR(0x69752d);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B697531:{NFSU2_TR(0x697531);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B697534:{NFSU2_TR(0x697534);
w4(R+0,u32(r2(R+8)));
}
B697537:{NFSU2_TR(0x697537);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B697538:{NFSU2_TR(0x697538);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B69753a:{NFSU2_TR(0x69753a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69750eu);}goto L69750e;}}
}
B69753c:L69753c:{c.instructions+=4;NFSU2_TR(0x69753c);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B697540:{NFSU2_TR(0x697540);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B697543:{NFSU2_TR(0x697543);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
}
B697546:{NFSU2_TR(0x697546);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x697508u);}goto L697508;}}
}
B697548:L697548:{c.instructions+=3;NFSU2_TR(0x697548);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B697549:{NFSU2_TR(0x697549);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B69754c:{NFSU2_TR(0x69754c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6974fau);}goto L6974fa;}}
}
B69754e:L69754e:{c.instructions+=1;NFSU2_TR(0x69754e);
{goto L697715;}
}
B697553:L697553:{c.instructions+=5;NFSU2_TR(0x697553);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B697557:{NFSU2_TR(0x697557);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69755a:{NFSU2_TR(0x69755a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69755c:{NFSU2_TR(0x69755c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69755f:{NFSU2_TR(0x69755f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L697564;}}
}
B697561:L697561:{c.instructions+=1;NFSU2_TR(0x697561);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B697564:L697564:{c.instructions+=3;NFSU2_TR(0x697564);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B697568:{NFSU2_TR(0x697568);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0x4ull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B69756c:{NFSU2_TR(0x69756c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L697603;}}
}
B697572:L697572:{c.instructions+=2;NFSU2_TR(0x697572);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+4))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B697576:{NFSU2_TR(0x697576);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L697603;}}
}
B69757c:L69757c:{c.instructions+=2;NFSU2_TR(0x69757c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B697580:{NFSU2_TR(0x697580);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L697715;}}
}
B697586:L697586:{c.instructions+=6;NFSU2_TR(0x697586);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B697589:{NFSU2_TR(0x697589);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69758c:{NFSU2_TR(0x69758c);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B69758f:{NFSU2_TR(0x69758f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((R+0),(U+0),4);
}
B697592:{NFSU2_TR(0x697592);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+28))));
}
B697594:{NFSU2_TR(0x697594);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B697597:L697597:{c.instructions+=36;NFSU2_TR(0x697597);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69759a:{NFSU2_TR(0x69759a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69759d:{NFSU2_TR(0x69759d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6975a0:{NFSU2_TR(0x6975a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6975a3:{NFSU2_TR(0x6975a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6975a5:{NFSU2_TR(0x6975a5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6975a7:{NFSU2_TR(0x6975a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6975aa:{NFSU2_TR(0x6975aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6975ad:{NFSU2_TR(0x6975ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6975b0:{NFSU2_TR(0x6975b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6975b3:{NFSU2_TR(0x6975b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6975b6:{NFSU2_TR(0x6975b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6975b9:{NFSU2_TR(0x6975b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6975bc:{NFSU2_TR(0x6975bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6975bf:{NFSU2_TR(0x6975bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6975c2:{NFSU2_TR(0x6975c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6975c5:{NFSU2_TR(0x6975c5);
{u32 ea_=u32(r4(R+0)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6975c8:{NFSU2_TR(0x6975c8);
{u32 ea_=u32(r4(R+0)+r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6975cb:{NFSU2_TR(0x6975cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6975ce:{NFSU2_TR(0x6975ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6975d1:{NFSU2_TR(0x6975d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6975d4:{NFSU2_TR(0x6975d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6975d7:{NFSU2_TR(0x6975d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6975da:{NFSU2_TR(0x6975da);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6975dd:{NFSU2_TR(0x6975dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6975e0:{NFSU2_TR(0x6975e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6975e3:{NFSU2_TR(0x6975e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6975e6:{NFSU2_TR(0x6975e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6975e9:{NFSU2_TR(0x6975e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6975ec:{NFSU2_TR(0x6975ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6975ef:{NFSU2_TR(0x6975ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6975f2:{NFSU2_TR(0x6975f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6975f5:{NFSU2_TR(0x6975f5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
}
B6975f8:{NFSU2_TR(0x6975f8);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x40ull))));
}
B6975fb:{NFSU2_TR(0x6975fb);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B6975fc:{NFSU2_TR(0x6975fc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x697597u);}goto L697597;}}
}
B6975fe:L6975fe:{c.instructions+=1;NFSU2_TR(0x6975fe);
{goto L697715;}
}
B697603:L697603:{c.instructions+=4;NFSU2_TR(0x697603);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B697607:{NFSU2_TR(0x697607);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69760b:{NFSU2_TR(0x69760b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69760e:{NFSU2_TR(0x69760e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L697715;}}
}
B697614:L697614:{c.instructions+=3;NFSU2_TR(0x697614);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B697616:{NFSU2_TR(0x697616);
u8 U[2];
w1(R+512,u8(0x0ull));
w2(U+0,u16(u32(r2(R+4))&u32(r2(R+4))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B697619:{NFSU2_TR(0x697619);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69765c;}}
}
B69761b:L69761b:{c.instructions+=1;NFSU2_TR(0x69761b);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B69761f:L69761f:{c.instructions+=3;NFSU2_TR(0x69761f);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B697621:{NFSU2_TR(0x697621);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B697623:{NFSU2_TR(0x697623);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L697650;}}
}
B697625:L697625:{c.instructions+=2;NFSU2_TR(0x697625);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B697628:{NFSU2_TR(0x697628);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L697640;}}
}
B69762a:L69762a:{c.instructions+=2;NFSU2_TR(0x69762a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69762d:{NFSU2_TR(0x69762d);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L697640;}}
}
B69762f:L69762f:{c.instructions+=6;NFSU2_TR(0x69762f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B697632:{NFSU2_TR(0x697632);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B697635:{NFSU2_TR(0x697635);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B697638:{NFSU2_TR(0x697638);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B69763b:{NFSU2_TR(0x69763b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69763e:{NFSU2_TR(0x69763e);
{goto L697642;}
}
B697640:L697640:{c.instructions+=1;NFSU2_TR(0x697640);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B697642:L697642:{c.instructions+=6;NFSU2_TR(0x697642);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B697644:{NFSU2_TR(0x697644);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B697648:{NFSU2_TR(0x697648);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B69764b:{NFSU2_TR(0x69764b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B69764c:{NFSU2_TR(0x69764c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B69764e:{NFSU2_TR(0x69764e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x697625u);}goto L697625;}}
}
B697650:L697650:{c.instructions+=5;NFSU2_TR(0x697650);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B697654:{NFSU2_TR(0x697654);
w4(R+12,u32(r2(R+4)));
}
B697657:{NFSU2_TR(0x697657);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B697658:{NFSU2_TR(0x697658);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B69765a:{NFSU2_TR(0x69765a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69761fu);}goto L69761f;}}
}
B69765c:L69765c:{c.instructions+=4;NFSU2_TR(0x69765c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69765f:{NFSU2_TR(0x69765f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B697662:{NFSU2_TR(0x697662);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B697665:{NFSU2_TR(0x697665);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x697614u);}goto L697614;}}
}
B697667:L697667:{c.instructions+=1;NFSU2_TR(0x697667);
{goto L697715;}
}
B69766c:L69766c:{c.instructions+=6;NFSU2_TR(0x69766c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69766f:{NFSU2_TR(0x69766f);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B697673:{NFSU2_TR(0x697673);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B697676:{NFSU2_TR(0x697676);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B697678:{NFSU2_TR(0x697678);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69767b:{NFSU2_TR(0x69767b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L697680;}}
}
B69767d:L69767d:{c.instructions+=1;NFSU2_TR(0x69767d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B697680:L697680:{c.instructions+=4;NFSU2_TR(0x697680);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B697683:{NFSU2_TR(0x697683);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B697685:{NFSU2_TR(0x697685);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B697688:{NFSU2_TR(0x697688);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L697715;}}
}
B69768e:L69768e:{c.instructions+=1;NFSU2_TR(0x69768e);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B697692:L697692:{c.instructions+=3;NFSU2_TR(0x697692);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B697694:{NFSU2_TR(0x697694);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B697696:{NFSU2_TR(0x697696);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6976c5;}}
}
B697698:L697698:{c.instructions+=2;NFSU2_TR(0x697698);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69769b:{NFSU2_TR(0x69769b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6976a1;}}
}
B69769d:L69769d:{c.instructions+=2;NFSU2_TR(0x69769d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B69769f:{NFSU2_TR(0x69769f);
{goto L6976b7;}
}
B6976a1:L6976a1:{c.instructions+=8;NFSU2_TR(0x6976a1);
__builtin_memmove((R+0),(R+28),4);
}
B6976a3:{NFSU2_TR(0x6976a3);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B6976a6:{NFSU2_TR(0x6976a6);
__builtin_memmove((R+12),(R+28),4);
}
B6976a8:{NFSU2_TR(0x6976a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6976ab:{NFSU2_TR(0x6976ab);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0x3ull))));
}
B6976ae:{NFSU2_TR(0x6976ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6976b1:{NFSU2_TR(0x6976b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6976b4:{NFSU2_TR(0x6976b4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6976b7:L6976b7:{c.instructions+=6;NFSU2_TR(0x6976b7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6976b9:{NFSU2_TR(0x6976b9);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6976bd:{NFSU2_TR(0x6976bd);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6976c0:{NFSU2_TR(0x6976c0);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6976c1:{NFSU2_TR(0x6976c1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B6976c3:{NFSU2_TR(0x6976c3);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x697698u);}goto L697698;}}
}
B6976c5:L6976c5:{c.instructions+=3;NFSU2_TR(0x6976c5);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6976c6:{NFSU2_TR(0x6976c6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6976c9:{NFSU2_TR(0x6976c9);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x697692u);}goto L697692;}}
}
B6976cb:L6976cb:{c.instructions+=1;NFSU2_TR(0x6976cb);
{goto L697715;}
}
B6976cd:L6976cd:{c.instructions+=6;NFSU2_TR(0x6976cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6976d0:{NFSU2_TR(0x6976d0);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6976d4:{NFSU2_TR(0x6976d4);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6976d7:{NFSU2_TR(0x6976d7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6976d9:{NFSU2_TR(0x6976d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6976dc:{NFSU2_TR(0x6976dc);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6976e3;}}
}
B6976de:L6976de:{c.instructions+=2;NFSU2_TR(0x6976de);
__builtin_memmove((R+28),(R+0),4);
}
B6976e0:{NFSU2_TR(0x6976e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6976e3:L6976e3:{c.instructions+=4;NFSU2_TR(0x6976e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6976e6:{NFSU2_TR(0x6976e6);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6976e8:{NFSU2_TR(0x6976e8);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6976ea:{NFSU2_TR(0x6976ea);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L697715;}}
}
B6976ec:L6976ec:{c.instructions+=16;NFSU2_TR(0x6976ec);
__builtin_memmove((R+0),(R+8),4);
}
B6976ee:{NFSU2_TR(0x6976ee);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B6976f1:{NFSU2_TR(0x6976f1);
__builtin_memmove((R+28),(R+0),4);
}
B6976f3:{NFSU2_TR(0x6976f3);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B6976f6:{NFSU2_TR(0x6976f6);
__builtin_memmove((R+12),(R+8),4);
}
B6976f8:{NFSU2_TR(0x6976f8);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0x3ull))));
}
B6976fb:{NFSU2_TR(0x6976fb);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x3ull))));
}
B6976fe:{NFSU2_TR(0x6976fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B697701:{NFSU2_TR(0x697701);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B697704:{NFSU2_TR(0x697704);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B697707:{NFSU2_TR(0x697707);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69770a:{NFSU2_TR(0x69770a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B69770c:{NFSU2_TR(0x69770c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B69770f:{NFSU2_TR(0x69770f);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B697710:{NFSU2_TR(0x697710);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B697713:{NFSU2_TR(0x697713);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6976ecu);}goto L6976ec;}}
}
B697715:L697715:{c.instructions+=2;NFSU2_TR(0x697715);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B697718:{NFSU2_TR(0x697718);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69771b:L69771b:{c.instructions+=3;NFSU2_TR(0x69771b);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B69771f:{NFSU2_TR(0x69771f);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0x3ull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B697723:{NFSU2_TR(0x697723);
if(r1(R+518)){{goto L6977ac;}}
}
B697729:L697729:{c.instructions+=6;NFSU2_TR(0x697729);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69772c:{NFSU2_TR(0x69772c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69772f:{NFSU2_TR(0x69772f);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
w8(U+8,u64(s64(s32(r4(R+4)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
}
B697733:{NFSU2_TR(0x697733);
w4(R+0,u32(r2(R+0)));
}
B697736:{NFSU2_TR(0x697736);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B697737:{NFSU2_TR(0x697737);
if(r1(R+518)){{goto L69777a;}}
}
B697739:L697739:{c.instructions+=2;NFSU2_TR(0x697739);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B69773a:{NFSU2_TR(0x69773a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6977a6;}}
}
B69773c:L69773c:{c.instructions+=9;NFSU2_TR(0x69773c);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd9,0x38"::"a"(ea_):"memory");}
}
B69773f:{NFSU2_TR(0x69773f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B697742:{NFSU2_TR(0x697742);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xc00ull))));
}
B697747:{NFSU2_TR(0x697747);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69774a:{NFSU2_TR(0x69774a);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x28"::"a"(ea_):"memory");}
}
B69774d:{NFSU2_TR(0x69774d);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69774f:{NFSU2_TR(0x69774f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B697752:{NFSU2_TR(0x697752);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B697755:{NFSU2_TR(0x697755);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L697775;}}
}
B697757:L697757:{c.instructions+=3;NFSU2_TR(0x697757);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69775a:{NFSU2_TR(0x69775a);
__builtin_memmove((R+8),(R+12),4);
}
B69775c:{NFSU2_TR(0x69775c);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B69775e:L69775e:{c.instructions+=9;NFSU2_TR(0x69775e);
{u32 ea_=u32(r4(R+0)+r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B697761:{NFSU2_TR(0x697761);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B697764:{NFSU2_TR(0x697764);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B697767:{NFSU2_TR(0x697767);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B69776a:{NFSU2_TR(0x69776a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69776d:{NFSU2_TR(0x69776d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B69776f:{NFSU2_TR(0x69776f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B697772:{NFSU2_TR(0x697772);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B697773:{NFSU2_TR(0x697773);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69775eu);}goto L69775e;}}
}
B697775:L697775:{c.instructions+=2;NFSU2_TR(0x697775);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x28"::"a"(ea_):"memory");}
}
B697778:{NFSU2_TR(0x697778);
{goto L6977a6;}
}
B69777a:L69777a:{c.instructions+=2;NFSU2_TR(0x69777a);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69777c:{NFSU2_TR(0x69777c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6977a6;}}
}
B69777e:L69777e:{c.instructions+=3;NFSU2_TR(0x69777e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B697781:{NFSU2_TR(0x697781);
__builtin_memmove((R+28),(R+12),4);
}
B697783:{NFSU2_TR(0x697783);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+8))));
}
B697785:L697785:{c.instructions+=6;NFSU2_TR(0x697785);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B69778b:{NFSU2_TR(0x69778b);
{u32 ea_=u32(r4(R+28)+r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B69778e:{NFSU2_TR(0x69778e);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B697790:{NFSU2_TR(0x697790);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B697792:{NFSU2_TR(0x697792);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B697795:{NFSU2_TR(0x697795);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L69779c;}}
}
B697797:L697797:{c.instructions+=3;NFSU2_TR(0x697797);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B697799:{NFSU2_TR(0x697799);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B69779a:{NFSU2_TR(0x69779a);
{goto L69779e;}
}
B69779c:L69779c:{c.instructions+=1;NFSU2_TR(0x69779c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B69779e:L69779e:{c.instructions+=4;NFSU2_TR(0x69779e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6977a0:{NFSU2_TR(0x6977a0);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6977a3:{NFSU2_TR(0x6977a3);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6977a4:{NFSU2_TR(0x6977a4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x697785u);}goto L697785;}}
}
B6977a6:L6977a6:{c.instructions+=2;NFSU2_TR(0x6977a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6977a9:{NFSU2_TR(0x6977a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6977ac:L6977ac:{c.instructions+=4;NFSU2_TR(0x6977ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6977af:{NFSU2_TR(0x6977af);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B6977b3:{NFSU2_TR(0x6977b3);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))&u32(r2(R+0))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B6977b6:{NFSU2_TR(0x6977b6);
if(r1(R+518)){{goto L697890;}}
}
B6977bc:L6977bc:{c.instructions+=2;NFSU2_TR(0x6977bc);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(U+2))-u32(u16(0x3ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B6977c0:{NFSU2_TR(0x6977c0);
if(r1(R+518)){{goto L6977cc;}}
}
B6977c2:L6977c2:{c.instructions+=3;NFSU2_TR(0x6977c2);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B6977c6:{NFSU2_TR(0x6977c6);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B6977ca:{NFSU2_TR(0x6977ca);
{goto L6977d4;}
}
B6977cc:L6977cc:{c.instructions+=2;NFSU2_TR(0x6977cc);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B6977d0:{NFSU2_TR(0x6977d0);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B6977d4:L6977d4:{c.instructions+=2;NFSU2_TR(0x6977d4);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x3ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6977d7:{NFSU2_TR(0x6977d7);
if(r1(R+518)){{goto L697890;}}
}
B6977dd:L6977dd:{c.instructions+=3;NFSU2_TR(0x6977dd);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0x1ull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B6977e1:{NFSU2_TR(0x6977e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x7babd4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6977e8:{NFSU2_TR(0x6977e8);
if(r1(R+518)){{goto L6977f1;}}
}
B6977ea:L6977ea:{c.instructions+=1;NFSU2_TR(0x6977ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x7babc4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6977f1:L6977f1:{c.instructions+=6;NFSU2_TR(0x6977f1);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
w8(U+8,u64(s64(s32(r4(R+28)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+28,u32(r8(U+24)));
}
B6977f5:{NFSU2_TR(0x6977f5);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6977f8:{NFSU2_TR(0x6977f8);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfffffffcull))));
}
B6977fb:{NFSU2_TR(0x6977fb);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6977fd:{NFSU2_TR(0x6977fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B697800:{NFSU2_TR(0x697800);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69788d;}}
}
B697806:L697806:{c.instructions+=13;NFSU2_TR(0x697806);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B697809:{NFSU2_TR(0x697809);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4ull))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B697810:{NFSU2_TR(0x697810);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B697813:{NFSU2_TR(0x697813);
__builtin_memmove((R+0),(R+4),4);
}
B697815:{NFSU2_TR(0x697815);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B697818:{NFSU2_TR(0x697818);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B69781b:{NFSU2_TR(0x69781b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B69781e:{NFSU2_TR(0x69781e);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B697820:{NFSU2_TR(0x697820);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B697823:{NFSU2_TR(0x697823);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B697826:{NFSU2_TR(0x697826);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B697829:{NFSU2_TR(0x697829);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69782c:{NFSU2_TR(0x69782c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69782f:L69782f:{c.instructions+=10;NFSU2_TR(0x69782f);
__builtin_memmove((R+28),(R+24),4);
}
B697831:{NFSU2_TR(0x697831);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B697834:{NFSU2_TR(0x697834);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B697837:{NFSU2_TR(0x697837);
__builtin_memmove((R+4),(R+8),4);
}
B697839:{NFSU2_TR(0x697839);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B69783c:{NFSU2_TR(0x69783c);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+28))));
}
B69783e:{NFSU2_TR(0x69783e);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B697840:{NFSU2_TR(0x697840);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B697842:{NFSU2_TR(0x697842);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B697845:{NFSU2_TR(0x697845);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L697869;}}
}
B697847:L697847:{c.instructions+=1;NFSU2_TR(0x697847);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69784a:L69784a:{c.instructions+=11;NFSU2_TR(0x69784a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69784d:{NFSU2_TR(0x69784d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B697850:{NFSU2_TR(0x697850);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x4ull))));
}
B697853:{NFSU2_TR(0x697853);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B697856:{NFSU2_TR(0x697856);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B697859:{NFSU2_TR(0x697859);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B69785c:{NFSU2_TR(0x69785c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69785f:{NFSU2_TR(0x69785f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B697862:{NFSU2_TR(0x697862);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B697865:{NFSU2_TR(0x697865);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+4)),r4(U+0));
}
B697867:{NFSU2_TR(0x697867);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69784au);}goto L69784a;}}
}
B697869:L697869:{c.instructions+=2;NFSU2_TR(0x697869);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69786b:{NFSU2_TR(0x69786b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L697888;}}
}
B69786d:L69786d:{c.instructions+=3;NFSU2_TR(0x69786d);
__builtin_memmove((R+4),(R+12),4);
}
B69786f:{NFSU2_TR(0x69786f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B697872:{NFSU2_TR(0x697872);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B697875:L697875:{c.instructions+=7;NFSU2_TR(0x697875);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B697879:{NFSU2_TR(0x697879);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69787c:{NFSU2_TR(0x69787c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B69787e:{NFSU2_TR(0x69787e);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x4ull))));
}
B697881:{NFSU2_TR(0x697881);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B697884:{NFSU2_TR(0x697884);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+4)),r4(U+0));
}
B697886:{NFSU2_TR(0x697886);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x697875u);}goto L697875;}}
}
B697888:L697888:{c.instructions+=2;NFSU2_TR(0x697888);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69788b:{NFSU2_TR(0x69788b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69782fu);}goto L69782f;}}
}
B69788d:L69788d:{c.instructions+=1;NFSU2_TR(0x69788d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B697890:L697890:{c.instructions+=6;NFSU2_TR(0x697890);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B697893:{NFSU2_TR(0x697893);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B697896:{NFSU2_TR(0x697896);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B69789a:{NFSU2_TR(0x69789a);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B69789e:{NFSU2_TR(0x69789e);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6978a0:{NFSU2_TR(0x6978a0);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6978a4;}}
}
B6978a2:L6978a2:{c.instructions+=1;NFSU2_TR(0x6978a2);
__builtin_memmove((R+0),(R+8),4);
}
B6978a4:L6978a4:{c.instructions+=8;NFSU2_TR(0x6978a4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6978a5:{NFSU2_TR(0x6978a5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6978a8:{NFSU2_TR(0x6978a8);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6978ac:{NFSU2_TR(0x6978ac);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6978af:{NFSU2_TR(0x6978af);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6978b0:{NFSU2_TR(0x6978b0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6978b1:{NFSU2_TR(0x6978b1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6978b4:{NFSU2_TR(0x6978b4);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6978b7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6978b7:L6978b7:{c.instructions+=2;NFSU2_TR(0x6978b7);
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
B6978b9:{NFSU2_TR(0x6978b9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6978bd;}}
}
B6978bb:L6978bb:{c.instructions+=1;NFSU2_TR(0x6978bb);
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
B6978bd:L6978bd:{c.instructions+=5;NFSU2_TR(0x6978bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6978be:{NFSU2_TR(0x6978be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6978bf:{NFSU2_TR(0x6978bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6978c0:{NFSU2_TR(0x6978c0);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6978c1:{NFSU2_TR(0x6978c1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6978c4:L6978c4:{c.instructions+=15;NFSU2_TR(0x6978c4);
__builtin_memmove((R+28),(R+28),4);
}
B6978c6:{NFSU2_TR(0x6978c6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6978c7:{NFSU2_TR(0x6978c7);
__builtin_memmove((R+20),(R+16),4);
}
B6978c9:{NFSU2_TR(0x6978c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B6978cc:{NFSU2_TR(0x6978cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6978cf:{NFSU2_TR(0x6978cf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6978d0:{NFSU2_TR(0x6978d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6978d3:{NFSU2_TR(0x6978d3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6978d4:{NFSU2_TR(0x6978d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6978d7:{NFSU2_TR(0x6978d7);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(R+0,u32(r2(U+0)));
}
B6978da:{NFSU2_TR(0x6978da);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6978dc:{NFSU2_TR(0x6978dc);
w1(R+512,u8((r4(R+0))<(r4(R+8))));
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6978de:{NFSU2_TR(0x6978de);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6978df:{NFSU2_TR(0x6978df);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6978e2:{NFSU2_TR(0x6978e2);
if(r1(R+518)){{goto L697b1e;}}
}
B6978e8:L6978e8:{c.instructions+=2;NFSU2_TR(0x6978e8);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6978e9:{NFSU2_TR(0x6978e9);
if(r1(R+518)){{goto L697ab4;}}
}
B6978ef:L6978ef:{c.instructions+=2;NFSU2_TR(0x6978ef);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6978f0:{NFSU2_TR(0x6978f0);
if(r1(R+518)){{goto L697a3a;}}
}
B6978f6:L6978f6:{c.instructions+=2;NFSU2_TR(0x6978f6);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6978f7:{NFSU2_TR(0x6978f7);
if(r1(R+518)){{goto L6979c9;}}
}
B6978fd:L6978fd:{c.instructions+=3;NFSU2_TR(0x6978fd);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B6978fe:{NFSU2_TR(0x6978fe);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6978ff:{NFSU2_TR(0x6978ff);
if(r1(R+518)){{goto L69790b;}}
}
B697901:L697901:{c.instructions+=2;NFSU2_TR(0x697901);
w4(R+0,u32(0x80004001ull));
}
B697906:{NFSU2_TR(0x697906);
{goto L697cf7;}
}
B69790b:L69790b:{c.instructions+=9;NFSU2_TR(0x69790b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69790e:{NFSU2_TR(0x69790e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B697911:{NFSU2_TR(0x697911);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B697914:{NFSU2_TR(0x697914);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B697916:{NFSU2_TR(0x697916);
u8 U[56];
w8(U+0,u64(r4(R+4)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x697916);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x697916);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B697918:{NFSU2_TR(0x697918);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69791b:{NFSU2_TR(0x69791b);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B69791f:{NFSU2_TR(0x69791f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B697922:{NFSU2_TR(0x697922);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L697927;}}
}
B697924:L697924:{c.instructions+=1;NFSU2_TR(0x697924);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B697927:L697927:{c.instructions+=6;NFSU2_TR(0x697927);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
w8(U+8,u64(s64(s32(r4(R+4)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
}
B69792b:{NFSU2_TR(0x69792b);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B69792d:{NFSU2_TR(0x69792d);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69792f:{NFSU2_TR(0x69792f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B697932:{NFSU2_TR(0x697932);
__builtin_memmove((R+8),(R+12),4);
}
B697934:{NFSU2_TR(0x697934);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69795f;}}
}
B697936:L697936:{c.instructions+=16;NFSU2_TR(0x697936);
__builtin_memmove((R+0),(R+28),4);
}
B697938:{NFSU2_TR(0x697938);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B69793b:{NFSU2_TR(0x69793b);
__builtin_memmove((R+12),(R+0),4);
}
B69793d:{NFSU2_TR(0x69793d);
__builtin_memmove((R+4),(R+28),4);
}
B69793f:{NFSU2_TR(0x69793f);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0x3ull))));
}
B697942:{NFSU2_TR(0x697942);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B697945:{NFSU2_TR(0x697945);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B697948:{NFSU2_TR(0x697948);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B69794b:{NFSU2_TR(0x69794b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69794e:{NFSU2_TR(0x69794e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B697951:{NFSU2_TR(0x697951);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B697954:{NFSU2_TR(0x697954);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B697956:{NFSU2_TR(0x697956);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B697959:{NFSU2_TR(0x697959);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B69795a:{NFSU2_TR(0x69795a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B69795d:{NFSU2_TR(0x69795d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x697936u);}goto L697936;}}
}
B69795f:L69795f:{c.instructions+=5;NFSU2_TR(0x69795f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B697962:{NFSU2_TR(0x697962);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B697966:{NFSU2_TR(0x697966);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69796a:{NFSU2_TR(0x69796a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69796d:{NFSU2_TR(0x69796d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L697cf5;}}
}
B697973:L697973:{c.instructions+=3;NFSU2_TR(0x697973);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B697975:{NFSU2_TR(0x697975);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(U+6))<(r2(R+12))));
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+12))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B697979:{NFSU2_TR(0x697979);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6979b9;}}
}
B69797b:L69797b:{c.instructions+=9;NFSU2_TR(0x69797b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69797e:{NFSU2_TR(0x69797e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B697981:{NFSU2_TR(0x697981);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B697984:{NFSU2_TR(0x697984);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B697987:{NFSU2_TR(0x697987);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69798a:{NFSU2_TR(0x69798a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69798d:{NFSU2_TR(0x69798d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B697990:{NFSU2_TR(0x697990);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B697991:{NFSU2_TR(0x697991);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x697996ull));
TAIL_STATIC(0x6963cfu,696);
}
B697996:L697996:{c.instructions+=2;NFSU2_TR(0x697996);
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
B697998:{NFSU2_TR(0x697998);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L697cf7;}}
}
B69799e:L69799e:{c.instructions+=10;NFSU2_TR(0x69799e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6979a1:{NFSU2_TR(0x6979a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6979a4:{NFSU2_TR(0x6979a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6979a7:{NFSU2_TR(0x6979a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6979aa:{NFSU2_TR(0x6979aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6979ad:{NFSU2_TR(0x6979ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6979b0:{NFSU2_TR(0x6979b0);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6979b4:{NFSU2_TR(0x6979b4);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6979b5:{NFSU2_TR(0x6979b5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
}
B6979b7:{NFSU2_TR(0x6979b7);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69797bu);}goto L69797b;}}
}
B6979b9:L6979b9:{c.instructions+=4;NFSU2_TR(0x6979b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6979bc:{NFSU2_TR(0x6979bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6979bf:{NFSU2_TR(0x6979bf);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6979c2:{NFSU2_TR(0x6979c2);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x697973u);}goto L697973;}}
}
B6979c4:L6979c4:{c.instructions+=1;NFSU2_TR(0x6979c4);
{goto L697cf5;}
}
B6979c9:L6979c9:{c.instructions+=5;NFSU2_TR(0x6979c9);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6979cd:{NFSU2_TR(0x6979cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6979d0:{NFSU2_TR(0x6979d0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6979d2:{NFSU2_TR(0x6979d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6979d5:{NFSU2_TR(0x6979d5);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6979da;}}
}
B6979d7:L6979d7:{c.instructions+=1;NFSU2_TR(0x6979d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6979da:L6979da:{c.instructions+=4;NFSU2_TR(0x6979da);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6979dc:{NFSU2_TR(0x6979dc);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6979df:{NFSU2_TR(0x6979df);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6979e2:{NFSU2_TR(0x6979e2);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L697b63;}}
}
B6979e8:L6979e8:{c.instructions+=3;NFSU2_TR(0x6979e8);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6979ea:{NFSU2_TR(0x6979ea);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(U+6))<(r2(R+8))));
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+8))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B6979ee:{NFSU2_TR(0x6979ee);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L697a2f;}}
}
B6979f0:L6979f0:{c.instructions+=1;NFSU2_TR(0x6979f0);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6979f4:L6979f4:{c.instructions+=3;NFSU2_TR(0x6979f4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6979f6:{NFSU2_TR(0x6979f6);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6979f8:{NFSU2_TR(0x6979f8);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L697a26;}}
}
B6979fa:L6979fa:{c.instructions+=2;NFSU2_TR(0x6979fa);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6979fd:{NFSU2_TR(0x6979fd);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L697a12;}}
}
B6979ff:L6979ff:{c.instructions+=2;NFSU2_TR(0x6979ff);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B697a02:{NFSU2_TR(0x697a02);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L697a12;}}
}
B697a04:L697a04:{c.instructions+=5;NFSU2_TR(0x697a04);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B697a07:{NFSU2_TR(0x697a07);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B697a0a:{NFSU2_TR(0x697a0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B697a0d:{NFSU2_TR(0x697a0d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B697a10:{NFSU2_TR(0x697a10);
{goto L697a14;}
}
B697a12:L697a12:{c.instructions+=1;NFSU2_TR(0x697a12);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B697a14:L697a14:{c.instructions+=7;NFSU2_TR(0x697a14);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B697a17:{NFSU2_TR(0x697a17);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B697a1b:{NFSU2_TR(0x697a1b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B697a1d:{NFSU2_TR(0x697a1d);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B697a21:{NFSU2_TR(0x697a21);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B697a22:{NFSU2_TR(0x697a22);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B697a24:{NFSU2_TR(0x697a24);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6979fau);}goto L6979fa;}}
}
B697a26:L697a26:{c.instructions+=4;NFSU2_TR(0x697a26);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B697a2a:{NFSU2_TR(0x697a2a);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B697a2b:{NFSU2_TR(0x697a2b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B697a2d:{NFSU2_TR(0x697a2d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6979f4u);}goto L6979f4;}}
}
B697a2f:L697a2f:{c.instructions+=3;NFSU2_TR(0x697a2f);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B697a30:{NFSU2_TR(0x697a30);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B697a33:{NFSU2_TR(0x697a33);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6979e8u);}goto L6979e8;}}
}
B697a35:L697a35:{c.instructions+=1;NFSU2_TR(0x697a35);
{goto L697b63;}
}
B697a3a:L697a3a:{c.instructions+=5;NFSU2_TR(0x697a3a);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B697a3e:{NFSU2_TR(0x697a3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B697a41:{NFSU2_TR(0x697a41);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B697a43:{NFSU2_TR(0x697a43);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B697a46:{NFSU2_TR(0x697a46);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L697a4b;}}
}
B697a48:L697a48:{c.instructions+=1;NFSU2_TR(0x697a48);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B697a4b:L697a4b:{c.instructions+=4;NFSU2_TR(0x697a4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B697a4e:{NFSU2_TR(0x697a4e);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B697a50:{NFSU2_TR(0x697a50);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B697a53:{NFSU2_TR(0x697a53);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L697b63;}}
}
B697a59:L697a59:{c.instructions+=3;NFSU2_TR(0x697a59);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B697a5d:{NFSU2_TR(0x697a5d);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(U+6))<(u16(0x0ull))));
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B697a62:{NFSU2_TR(0x697a62);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L697aa9;}}
}
B697a64:L697a64:{c.instructions+=1;NFSU2_TR(0x697a64);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B697a68:L697a68:{c.instructions+=3;NFSU2_TR(0x697a68);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B697a6a:{NFSU2_TR(0x697a6a);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B697a6c:{NFSU2_TR(0x697a6c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L697a9d;}}
}
B697a6e:L697a6e:{c.instructions+=2;NFSU2_TR(0x697a6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B697a71:{NFSU2_TR(0x697a71);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B697a74:L697a74:{c.instructions+=2;NFSU2_TR(0x697a74);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x4ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B697a78:{NFSU2_TR(0x697a78);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L697a8a;}}
}
B697a7a:L697a7a:{c.instructions+=2;NFSU2_TR(0x697a7a);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B697a7d:{NFSU2_TR(0x697a7d);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L697a8a;}}
}
B697a7f:L697a7f:{c.instructions+=4;NFSU2_TR(0x697a7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B697a82:{NFSU2_TR(0x697a82);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B697a85:{NFSU2_TR(0x697a85);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B697a88:{NFSU2_TR(0x697a88);
{goto L697a8c;}
}
B697a8a:L697a8a:{c.instructions+=1;NFSU2_TR(0x697a8a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B697a8c:L697a8c:{c.instructions+=7;NFSU2_TR(0x697a8c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B697a8e:{NFSU2_TR(0x697a8e);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B697a92:{NFSU2_TR(0x697a92);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B697a95:{NFSU2_TR(0x697a95);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B697a96:{NFSU2_TR(0x697a96);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B697a99:{NFSU2_TR(0x697a99);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B697a9b:{NFSU2_TR(0x697a9b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x697a74u);}goto L697a74;}}
}
B697a9d:L697a9d:{c.instructions+=4;NFSU2_TR(0x697a9d);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B697aa1:{NFSU2_TR(0x697aa1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B697aa4:{NFSU2_TR(0x697aa4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
}
B697aa7:{NFSU2_TR(0x697aa7);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x697a68u);}goto L697a68;}}
}
B697aa9:L697aa9:{c.instructions+=3;NFSU2_TR(0x697aa9);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B697aaa:{NFSU2_TR(0x697aaa);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B697aad:{NFSU2_TR(0x697aad);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x697a59u);}goto L697a59;}}
}
B697aaf:L697aaf:{c.instructions+=1;NFSU2_TR(0x697aaf);
{goto L697b63;}
}
B697ab4:L697ab4:{c.instructions+=6;NFSU2_TR(0x697ab4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B697ab7:{NFSU2_TR(0x697ab7);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B697abb:{NFSU2_TR(0x697abb);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B697abe:{NFSU2_TR(0x697abe);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B697ac0:{NFSU2_TR(0x697ac0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B697ac3:{NFSU2_TR(0x697ac3);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L697ac8;}}
}
B697ac5:L697ac5:{c.instructions+=1;NFSU2_TR(0x697ac5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B697ac8:L697ac8:{c.instructions+=4;NFSU2_TR(0x697ac8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B697acc:{NFSU2_TR(0x697acc);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B697ad0:{NFSU2_TR(0x697ad0);
__builtin_memmove((R+8),(R+12),4);
}
B697ad2:{NFSU2_TR(0x697ad2);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L697b63;}}
}
B697ad8:L697ad8:{c.instructions+=1;NFSU2_TR(0x697ad8);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B697adc:L697adc:{c.instructions+=3;NFSU2_TR(0x697adc);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B697ade:{NFSU2_TR(0x697ade);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B697ae0:{NFSU2_TR(0x697ae0);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L697b11;}}
}
B697ae2:L697ae2:{c.instructions+=2;NFSU2_TR(0x697ae2);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B697ae5:{NFSU2_TR(0x697ae5);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L697aeb;}}
}
B697ae7:L697ae7:{c.instructions+=2;NFSU2_TR(0x697ae7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B697ae9:{NFSU2_TR(0x697ae9);
{goto L697b03;}
}
B697aeb:L697aeb:{c.instructions+=8;NFSU2_TR(0x697aeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B697aee:{NFSU2_TR(0x697aee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B697af1:{NFSU2_TR(0x697af1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B697af4:{NFSU2_TR(0x697af4);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x3ull))));
}
B697af7:{NFSU2_TR(0x697af7);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B697afa:{NFSU2_TR(0x697afa);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B697afd:{NFSU2_TR(0x697afd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B697b00:{NFSU2_TR(0x697b00);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B697b03:L697b03:{c.instructions+=6;NFSU2_TR(0x697b03);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B697b05:{NFSU2_TR(0x697b05);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B697b09:{NFSU2_TR(0x697b09);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B697b0c:{NFSU2_TR(0x697b0c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B697b0d:{NFSU2_TR(0x697b0d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B697b0f:{NFSU2_TR(0x697b0f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x697ae2u);}goto L697ae2;}}
}
B697b11:L697b11:{c.instructions+=4;NFSU2_TR(0x697b11);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B697b14:{NFSU2_TR(0x697b14);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B697b17:{NFSU2_TR(0x697b17);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B697b1a:{NFSU2_TR(0x697b1a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x697adcu);}goto L697adc;}}
}
B697b1c:L697b1c:{c.instructions+=1;NFSU2_TR(0x697b1c);
{goto L697b63;}
}
B697b1e:L697b1e:{c.instructions+=6;NFSU2_TR(0x697b1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B697b21:{NFSU2_TR(0x697b21);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B697b25:{NFSU2_TR(0x697b25);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B697b28:{NFSU2_TR(0x697b28);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B697b2a:{NFSU2_TR(0x697b2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B697b2d:{NFSU2_TR(0x697b2d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L697b34;}}
}
B697b2f:L697b2f:{c.instructions+=2;NFSU2_TR(0x697b2f);
__builtin_memmove((R+28),(R+0),4);
}
B697b31:{NFSU2_TR(0x697b31);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B697b34:L697b34:{c.instructions+=3;NFSU2_TR(0x697b34);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B697b36:{NFSU2_TR(0x697b36);
__builtin_memmove((R+4),(R+12),4);
}
B697b38:{NFSU2_TR(0x697b38);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L697b63;}}
}
B697b3a:L697b3a:{c.instructions+=16;NFSU2_TR(0x697b3a);
__builtin_memmove((R+0),(R+8),4);
}
B697b3c:{NFSU2_TR(0x697b3c);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B697b3f:{NFSU2_TR(0x697b3f);
__builtin_memmove((R+12),(R+0),4);
}
B697b41:{NFSU2_TR(0x697b41);
__builtin_memmove((R+28),(R+8),4);
}
B697b43:{NFSU2_TR(0x697b43);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0x3ull))));
}
B697b46:{NFSU2_TR(0x697b46);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0x3ull))));
}
B697b49:{NFSU2_TR(0x697b49);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B697b4c:{NFSU2_TR(0x697b4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B697b4f:{NFSU2_TR(0x697b4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B697b52:{NFSU2_TR(0x697b52);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B697b55:{NFSU2_TR(0x697b55);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B697b58:{NFSU2_TR(0x697b58);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B697b5a:{NFSU2_TR(0x697b5a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B697b5d:{NFSU2_TR(0x697b5d);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B697b5e:{NFSU2_TR(0x697b5e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B697b61:{NFSU2_TR(0x697b61);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x697b3au);}goto L697b3a;}}
}
B697b63:L697b63:{c.instructions+=3;NFSU2_TR(0x697b63);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B697b67:{NFSU2_TR(0x697b67);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0x3ull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B697b6b:{NFSU2_TR(0x697b6b);
if(r1(R+518)){{goto L697be8;}}
}
B697b6d:L697b6d:{c.instructions+=6;NFSU2_TR(0x697b6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B697b70:{NFSU2_TR(0x697b70);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B697b73:{NFSU2_TR(0x697b73);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
w8(U+8,u64(s64(s32(r4(R+4)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
}
B697b77:{NFSU2_TR(0x697b77);
w4(R+0,u32(r2(R+0)));
}
B697b7a:{NFSU2_TR(0x697b7a);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B697b7b:{NFSU2_TR(0x697b7b);
if(r1(R+518)){{goto L697bbd;}}
}
B697b7d:L697b7d:{c.instructions+=2;NFSU2_TR(0x697b7d);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B697b7e:{NFSU2_TR(0x697b7e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L697be8;}}
}
B697b80:L697b80:{c.instructions+=10;NFSU2_TR(0x697b80);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd9,0x38"::"a"(ea_):"memory");}
}
B697b83:{NFSU2_TR(0x697b83);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B697b86:{NFSU2_TR(0x697b86);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xc00ull))));
}
B697b8b:{NFSU2_TR(0x697b8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B697b8e:{NFSU2_TR(0x697b8e);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x28"::"a"(ea_):"memory");}
}
B697b91:{NFSU2_TR(0x697b91);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B697b94:{NFSU2_TR(0x697b94);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B697b97:{NFSU2_TR(0x697b97);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B697b99:{NFSU2_TR(0x697b99);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B697b9b:{NFSU2_TR(0x697b9b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L697bb8;}}
}
B697b9d:L697b9d:{c.instructions+=11;NFSU2_TR(0x697b9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B697ba0:{NFSU2_TR(0x697ba0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B697ba3:{NFSU2_TR(0x697ba3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+28),(U+0),4);
}
B697ba5:{NFSU2_TR(0x697ba5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B697ba8:{NFSU2_TR(0x697ba8);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B697bab:{NFSU2_TR(0x697bab);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B697bae:{NFSU2_TR(0x697bae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B697bb1:{NFSU2_TR(0x697bb1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B697bb2:{NFSU2_TR(0x697bb2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B697bb4:{NFSU2_TR(0x697bb4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+8)),r4(U+0));
}
B697bb6:{NFSU2_TR(0x697bb6);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x697b9du);}goto L697b9d;}}
}
B697bb8:L697bb8:{c.instructions+=2;NFSU2_TR(0x697bb8);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x28"::"a"(ea_):"memory");}
}
B697bbb:{NFSU2_TR(0x697bbb);
{goto L697be8;}
}
B697bbd:L697bbd:{c.instructions+=3;NFSU2_TR(0x697bbd);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B697bbf:{NFSU2_TR(0x697bbf);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B697bc1:{NFSU2_TR(0x697bc1);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L697be8;}}
}
B697bc3:L697bc3:{c.instructions+=8;NFSU2_TR(0x697bc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B697bc6:{NFSU2_TR(0x697bc6);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B697bcc:{NFSU2_TR(0x697bcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B697bcf:{NFSU2_TR(0x697bcf);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B697bd1:{NFSU2_TR(0x697bd1);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B697bd3:{NFSU2_TR(0x697bd3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B697bd5:{NFSU2_TR(0x697bd5);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B697bd8:{NFSU2_TR(0x697bd8);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L697bdf;}}
}
B697bda:L697bda:{c.instructions+=3;NFSU2_TR(0x697bda);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B697bdc:{NFSU2_TR(0x697bdc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B697bdd:{NFSU2_TR(0x697bdd);
{goto L697be1;}
}
B697bdf:L697bdf:{c.instructions+=1;NFSU2_TR(0x697bdf);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B697be1:L697be1:{c.instructions+=4;NFSU2_TR(0x697be1);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B697be2:{NFSU2_TR(0x697be2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B697be4:{NFSU2_TR(0x697be4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B697be6:{NFSU2_TR(0x697be6);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x697bc3u);}goto L697bc3;}}
}
B697be8:L697be8:{c.instructions+=4;NFSU2_TR(0x697be8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B697beb:{NFSU2_TR(0x697beb);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B697bef:{NFSU2_TR(0x697bef);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))&u32(r2(R+0))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B697bf2:{NFSU2_TR(0x697bf2);
if(r1(R+518)){{goto L697cc8;}}
}
B697bf8:L697bf8:{c.instructions+=2;NFSU2_TR(0x697bf8);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(U+2))-u32(u16(0x3ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B697bfc:{NFSU2_TR(0x697bfc);
if(r1(R+518)){{goto L697c08;}}
}
B697bfe:L697bfe:{c.instructions+=3;NFSU2_TR(0x697bfe);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B697c02:{NFSU2_TR(0x697c02);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B697c06:{NFSU2_TR(0x697c06);
{goto L697c10;}
}
B697c08:L697c08:{c.instructions+=2;NFSU2_TR(0x697c08);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B697c0c:{NFSU2_TR(0x697c0c);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B697c10:L697c10:{c.instructions+=2;NFSU2_TR(0x697c10);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x3ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B697c13:{NFSU2_TR(0x697c13);
if(r1(R+518)){{goto L697cc8;}}
}
B697c19:L697c19:{c.instructions+=3;NFSU2_TR(0x697c19);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0x1ull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B697c1d:{NFSU2_TR(0x697c1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x7babd4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B697c24:{NFSU2_TR(0x697c24);
if(r1(R+518)){{goto L697c2d;}}
}
B697c26:L697c26:{c.instructions+=1;NFSU2_TR(0x697c26);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x7babc4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B697c2d:L697c2d:{c.instructions+=6;NFSU2_TR(0x697c2d);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
w8(U+8,u64(s64(s32(r4(R+28)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+28,u32(r8(U+24)));
}
B697c31:{NFSU2_TR(0x697c31);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3ull))));
__builtin_memmove((R+24),(U+0),4);
}
B697c34:{NFSU2_TR(0x697c34);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfffffffcull))));
}
B697c37:{NFSU2_TR(0x697c37);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B697c39:{NFSU2_TR(0x697c39);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B697c3c:{NFSU2_TR(0x697c3c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L697cc8;}}
}
B697c42:L697c42:{c.instructions+=13;NFSU2_TR(0x697c42);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B697c45:{NFSU2_TR(0x697c45);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4ull))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B697c4c:{NFSU2_TR(0x697c4c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B697c4f:{NFSU2_TR(0x697c4f);
__builtin_memmove((R+0),(R+4),4);
}
B697c51:{NFSU2_TR(0x697c51);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B697c54:{NFSU2_TR(0x697c54);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B697c57:{NFSU2_TR(0x697c57);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B697c59:{NFSU2_TR(0x697c59);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B697c5b:{NFSU2_TR(0x697c5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B697c5e:{NFSU2_TR(0x697c5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B697c61:{NFSU2_TR(0x697c61);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B697c64:{NFSU2_TR(0x697c64);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B697c67:{NFSU2_TR(0x697c67);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B697c6a:L697c6a:{c.instructions+=10;NFSU2_TR(0x697c6a);
__builtin_memmove((R+28),(R+24),4);
}
B697c6c:{NFSU2_TR(0x697c6c);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B697c6f:{NFSU2_TR(0x697c6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B697c72:{NFSU2_TR(0x697c72);
__builtin_memmove((R+4),(R+8),4);
}
B697c74:{NFSU2_TR(0x697c74);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B697c77:{NFSU2_TR(0x697c77);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+28))));
}
B697c79:{NFSU2_TR(0x697c79);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B697c7b:{NFSU2_TR(0x697c7b);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B697c7d:{NFSU2_TR(0x697c7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B697c80:{NFSU2_TR(0x697c80);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L697ca4;}}
}
B697c82:L697c82:{c.instructions+=1;NFSU2_TR(0x697c82);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B697c85:L697c85:{c.instructions+=11;NFSU2_TR(0x697c85);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B697c88:{NFSU2_TR(0x697c88);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B697c8b:{NFSU2_TR(0x697c8b);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x4ull))));
}
B697c8e:{NFSU2_TR(0x697c8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B697c91:{NFSU2_TR(0x697c91);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B697c94:{NFSU2_TR(0x697c94);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B697c97:{NFSU2_TR(0x697c97);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B697c9a:{NFSU2_TR(0x697c9a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B697c9d:{NFSU2_TR(0x697c9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B697ca0:{NFSU2_TR(0x697ca0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+4)),r4(U+0));
}
B697ca2:{NFSU2_TR(0x697ca2);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x697c85u);}goto L697c85;}}
}
B697ca4:L697ca4:{c.instructions+=2;NFSU2_TR(0x697ca4);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B697ca6:{NFSU2_TR(0x697ca6);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L697cc3;}}
}
B697ca8:L697ca8:{c.instructions+=3;NFSU2_TR(0x697ca8);
__builtin_memmove((R+4),(R+12),4);
}
B697caa:{NFSU2_TR(0x697caa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B697cad:{NFSU2_TR(0x697cad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B697cb0:L697cb0:{c.instructions+=7;NFSU2_TR(0x697cb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B697cb4:{NFSU2_TR(0x697cb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B697cb7:{NFSU2_TR(0x697cb7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B697cb9:{NFSU2_TR(0x697cb9);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x4ull))));
}
B697cbc:{NFSU2_TR(0x697cbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B697cbf:{NFSU2_TR(0x697cbf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+4)),r4(U+0));
}
B697cc1:{NFSU2_TR(0x697cc1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x697cb0u);}goto L697cb0;}}
}
B697cc3:L697cc3:{c.instructions+=2;NFSU2_TR(0x697cc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B697cc6:{NFSU2_TR(0x697cc6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x697c6au);}goto L697c6a;}}
}
B697cc8:L697cc8:{c.instructions+=6;NFSU2_TR(0x697cc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B697ccb:{NFSU2_TR(0x697ccb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B697cce:{NFSU2_TR(0x697cce);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B697cd2:{NFSU2_TR(0x697cd2);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B697cd6:{NFSU2_TR(0x697cd6);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B697cd8:{NFSU2_TR(0x697cd8);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L697cdc;}}
}
B697cda:L697cda:{c.instructions+=1;NFSU2_TR(0x697cda);
__builtin_memmove((R+0),(R+8),4);
}
B697cdc:L697cdc:{c.instructions+=8;NFSU2_TR(0x697cdc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B697cdd:{NFSU2_TR(0x697cdd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B697ce0:{NFSU2_TR(0x697ce0);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B697ce4:{NFSU2_TR(0x697ce4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B697ce7:{NFSU2_TR(0x697ce7);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B697cea:{NFSU2_TR(0x697cea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B697ceb:{NFSU2_TR(0x697ceb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B697cee:{NFSU2_TR(0x697cee);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x697cf1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B697cf1:L697cf1:{c.instructions+=2;NFSU2_TR(0x697cf1);
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
B697cf3:{NFSU2_TR(0x697cf3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L697cf7;}}
}
B697cf5:L697cf5:{c.instructions+=1;NFSU2_TR(0x697cf5);
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
B697cf7:L697cf7:{c.instructions+=5;NFSU2_TR(0x697cf7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B697cf8:{NFSU2_TR(0x697cf8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B697cf9:{NFSU2_TR(0x697cf9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B697cfa:{NFSU2_TR(0x697cfa);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B697cfb:{NFSU2_TR(0x697cfb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B697cfe:L697cfe:{c.instructions+=16;NFSU2_TR(0x697cfe);
__builtin_memmove((R+28),(R+28),4);
}
B697d00:{NFSU2_TR(0x697d00);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B697d01:{NFSU2_TR(0x697d01);
__builtin_memmove((R+20),(R+16),4);
}
B697d03:{NFSU2_TR(0x697d03);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B697d06:{NFSU2_TR(0x697d06);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B697d09:{NFSU2_TR(0x697d09);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B697d0c:{NFSU2_TR(0x697d0c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B697d0d:{NFSU2_TR(0x697d0d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B697d0e:{NFSU2_TR(0x697d0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B697d11:{NFSU2_TR(0x697d11);
w4(R+0,u32(0xffff0000ull));
}
B697d16:{NFSU2_TR(0x697d16);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B697d17:{NFSU2_TR(0x697d17);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B697d19:{NFSU2_TR(0x697d19);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B697d1b:{NFSU2_TR(0x697d1b);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+0))));
}
B697d1d:{NFSU2_TR(0x697d1d);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+12))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B697d21:{NFSU2_TR(0x697d21);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L697f02;}}
}
B697d27:L697d27:{c.instructions+=2;NFSU2_TR(0x697d27);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x54580000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B697d2d:{NFSU2_TR(0x697d2d);
if(r1(R+518)){{goto L697eca;}}
}
B697d33:L697d33:{c.instructions+=2;NFSU2_TR(0x697d33);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfffe0000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B697d39:{NFSU2_TR(0x697d39);
if(r1(R+518)){{goto L697e00;}}
}
B697d3f:L697d3f:{c.instructions+=2;NFSU2_TR(0x697d3f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B697d41:{NFSU2_TR(0x697d41);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L697f4d;}}
}
B697d47:L697d47:{c.instructions+=4;NFSU2_TR(0x697d47);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B697d4a:{NFSU2_TR(0x697d4a);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B697d4e:{NFSU2_TR(0x697d4e);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B697d50:{NFSU2_TR(0x697d50);
if(r1(R+518)){{goto L697dc3;}}
}
B697d52:L697d52:{c.instructions+=2;NFSU2_TR(0x697d52);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B697d53:{NFSU2_TR(0x697d53);
if(r1(R+518)){{goto L697d8c;}}
}
B697d55:L697d55:{c.instructions+=2;NFSU2_TR(0x697d55);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B697d56:{NFSU2_TR(0x697d56);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L697f4d;}}
}
B697d5c:L697d5c:{c.instructions+=3;NFSU2_TR(0x697d5c);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B697d60:{NFSU2_TR(0x697d60);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B697d62:{NFSU2_TR(0x697d62);
if(r1(R+518)){{goto L697d82;}}
}
B697d64:L697d64:{c.instructions+=2;NFSU2_TR(0x697d64);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B697d65:{NFSU2_TR(0x697d65);
if(r1(R+518)){{goto L697d78;}}
}
B697d67:L697d67:{c.instructions+=2;NFSU2_TR(0x697d67);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B697d68:{NFSU2_TR(0x697d68);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L697f20;}}
}
B697d6e:L697d6e:{c.instructions+=2;NFSU2_TR(0x697d6e);
w4(R+28,u32(0x6956caull));
}
B697d73:{NFSU2_TR(0x697d73);
{goto L697f4d;}
}
B697d78:L697d78:{c.instructions+=2;NFSU2_TR(0x697d78);
w4(R+28,u32(0x695680ull));
}
B697d7d:{NFSU2_TR(0x697d7d);
{goto L697f4d;}
}
B697d82:L697d82:{c.instructions+=2;NFSU2_TR(0x697d82);
w4(R+28,u32(0x695662ull));
}
B697d87:{NFSU2_TR(0x697d87);
{goto L697f4d;}
}
B697d8c:L697d8c:{c.instructions+=3;NFSU2_TR(0x697d8c);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B697d90:{NFSU2_TR(0x697d90);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B697d92:{NFSU2_TR(0x697d92);
if(r1(R+518)){{goto L697db9;}}
}
B697d94:L697d94:{c.instructions+=2;NFSU2_TR(0x697d94);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B697d95:{NFSU2_TR(0x697d95);
if(r1(R+518)){{goto L697daf;}}
}
B697d97:L697d97:{c.instructions+=2;NFSU2_TR(0x697d97);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B697d98:{NFSU2_TR(0x697d98);
if(r1(R+518)){{goto L697f2a;}}
}
B697d9e:L697d9e:{c.instructions+=2;NFSU2_TR(0x697d9e);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B697d9f:{NFSU2_TR(0x697d9f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L697f4d;}}
}
B697da5:L697da5:{c.instructions+=2;NFSU2_TR(0x697da5);
w4(R+28,u32(0x6955fcull));
}
B697daa:{NFSU2_TR(0x697daa);
{goto L697f4d;}
}
B697daf:L697daf:{c.instructions+=2;NFSU2_TR(0x697daf);
w4(R+28,u32(0x6955b8ull));
}
B697db4:{NFSU2_TR(0x697db4);
{goto L697f4d;}
}
B697db9:L697db9:{c.instructions+=2;NFSU2_TR(0x697db9);
w4(R+28,u32(0x69559aull));
}
B697dbe:{NFSU2_TR(0x697dbe);
{goto L697f4d;}
}
B697dc3:L697dc3:{c.instructions+=3;NFSU2_TR(0x697dc3);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B697dc7:{NFSU2_TR(0x697dc7);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B697dc9:{NFSU2_TR(0x697dc9);
if(r1(R+518)){{goto L697df6;}}
}
B697dcb:L697dcb:{c.instructions+=2;NFSU2_TR(0x697dcb);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B697dcc:{NFSU2_TR(0x697dcc);
if(r1(R+518)){{goto L697dec;}}
}
B697dce:L697dce:{c.instructions+=2;NFSU2_TR(0x697dce);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B697dcf:{NFSU2_TR(0x697dcf);
if(r1(R+518)){{goto L697de2;}}
}
B697dd1:L697dd1:{c.instructions+=2;NFSU2_TR(0x697dd1);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B697dd2:{NFSU2_TR(0x697dd2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L697f4d;}}
}
B697dd8:L697dd8:{c.instructions+=2;NFSU2_TR(0x697dd8);
w4(R+28,u32(0x695ae6ull));
}
B697ddd:{NFSU2_TR(0x697ddd);
{goto L697f4d;}
}
B697de2:L697de2:{c.instructions+=2;NFSU2_TR(0x697de2);
w4(R+28,u32(0x695aa5ull));
}
B697de7:{NFSU2_TR(0x697de7);
{goto L697f4d;}
}
B697dec:L697dec:{c.instructions+=2;NFSU2_TR(0x697dec);
w4(R+28,u32(0x695a87ull));
}
B697df1:{NFSU2_TR(0x697df1);
{goto L697f4d;}
}
B697df6:L697df6:{c.instructions+=2;NFSU2_TR(0x697df6);
w4(R+28,u32(0x695a87ull));
}
B697dfb:{NFSU2_TR(0x697dfb);
{goto L697f4d;}
}
B697e00:L697e00:{c.instructions+=4;NFSU2_TR(0x697e00);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B697e03:{NFSU2_TR(0x697e03);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B697e07:{NFSU2_TR(0x697e07);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B697e09:{NFSU2_TR(0x697e09);
if(r1(R+518)){{goto L697e93;}}
}
B697e0f:L697e0f:{c.instructions+=2;NFSU2_TR(0x697e0f);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B697e10:{NFSU2_TR(0x697e10);
if(r1(R+518)){{goto L697e56;}}
}
B697e12:L697e12:{c.instructions+=2;NFSU2_TR(0x697e12);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B697e13:{NFSU2_TR(0x697e13);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L697f4d;}}
}
B697e19:L697e19:{c.instructions+=3;NFSU2_TR(0x697e19);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B697e1d:{NFSU2_TR(0x697e1d);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B697e1f:{NFSU2_TR(0x697e1f);
if(r1(R+518)){{goto L697e4c;}}
}
B697e21:L697e21:{c.instructions+=2;NFSU2_TR(0x697e21);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B697e22:{NFSU2_TR(0x697e22);
if(r1(R+518)){{goto L697e42;}}
}
B697e24:L697e24:{c.instructions+=2;NFSU2_TR(0x697e24);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B697e25:{NFSU2_TR(0x697e25);
if(r1(R+518)){{goto L697e38;}}
}
B697e27:L697e27:{c.instructions+=2;NFSU2_TR(0x697e27);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B697e28:{NFSU2_TR(0x697e28);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L697f4d;}}
}
B697e2e:L697e2e:{c.instructions+=2;NFSU2_TR(0x697e2e);
w4(R+28,u32(0x6959e4ull));
}
B697e33:{NFSU2_TR(0x697e33);
{goto L697f4d;}
}
B697e38:L697e38:{c.instructions+=2;NFSU2_TR(0x697e38);
w4(R+28,u32(0x695a4cull));
}
B697e3d:{NFSU2_TR(0x697e3d);
{goto L697f4d;}
}
B697e42:L697e42:{c.instructions+=2;NFSU2_TR(0x697e42);
w4(R+28,u32(0x695a02ull));
}
B697e47:{NFSU2_TR(0x697e47);
{goto L697f4d;}
}
B697e4c:L697e4c:{c.instructions+=2;NFSU2_TR(0x697e4c);
w4(R+28,u32(0x6959e4ull));
}
B697e51:{NFSU2_TR(0x697e51);
{goto L697f4d;}
}
B697e56:L697e56:{c.instructions+=3;NFSU2_TR(0x697e56);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B697e5a:{NFSU2_TR(0x697e5a);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B697e5c:{NFSU2_TR(0x697e5c);
if(r1(R+518)){{goto L697e89;}}
}
B697e5e:L697e5e:{c.instructions+=2;NFSU2_TR(0x697e5e);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B697e5f:{NFSU2_TR(0x697e5f);
if(r1(R+518)){{goto L697e7f;}}
}
B697e61:L697e61:{c.instructions+=2;NFSU2_TR(0x697e61);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B697e62:{NFSU2_TR(0x697e62);
if(r1(R+518)){{goto L697e75;}}
}
B697e64:L697e64:{c.instructions+=2;NFSU2_TR(0x697e64);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B697e65:{NFSU2_TR(0x697e65);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L697f4d;}}
}
B697e6b:L697e6b:{c.instructions+=2;NFSU2_TR(0x697e6b);
w4(R+28,u32(0x69597eull));
}
B697e70:{NFSU2_TR(0x697e70);
{goto L697f4d;}
}
B697e75:L697e75:{c.instructions+=2;NFSU2_TR(0x697e75);
w4(R+28,u32(0x69591cull));
}
B697e7a:{NFSU2_TR(0x697e7a);
{goto L697f4d;}
}
B697e7f:L697e7f:{c.instructions+=2;NFSU2_TR(0x697e7f);
w4(R+28,u32(0x69593aull));
}
B697e84:{NFSU2_TR(0x697e84);
{goto L697f4d;}
}
B697e89:L697e89:{c.instructions+=2;NFSU2_TR(0x697e89);
w4(R+28,u32(0x69591cull));
}
B697e8e:{NFSU2_TR(0x697e8e);
{goto L697f4d;}
}
B697e93:L697e93:{c.instructions+=3;NFSU2_TR(0x697e93);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B697e97:{NFSU2_TR(0x697e97);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B697e99:{NFSU2_TR(0x697e99);
if(r1(R+518)){{goto L697ec0;}}
}
B697e9b:L697e9b:{c.instructions+=2;NFSU2_TR(0x697e9b);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B697e9c:{NFSU2_TR(0x697e9c);
if(r1(R+518)){{goto L697f48;}}
}
B697ea2:L697ea2:{c.instructions+=2;NFSU2_TR(0x697ea2);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B697ea3:{NFSU2_TR(0x697ea3);
if(r1(R+518)){{goto L697eb6;}}
}
B697ea5:L697ea5:{c.instructions+=2;NFSU2_TR(0x697ea5);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B697ea6:{NFSU2_TR(0x697ea6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L697f4d;}}
}
B697eac:L697eac:{c.instructions+=2;NFSU2_TR(0x697eac);
w4(R+28,u32(0x6958caull));
}
B697eb1:{NFSU2_TR(0x697eb1);
{goto L697f4d;}
}
B697eb6:L697eb6:{c.instructions+=2;NFSU2_TR(0x697eb6);
w4(R+28,u32(0x695889ull));
}
B697ebb:{NFSU2_TR(0x697ebb);
{goto L697f4d;}
}
B697ec0:L697ec0:{c.instructions+=2;NFSU2_TR(0x697ec0);
w4(R+28,u32(0x69586bull));
}
B697ec5:{NFSU2_TR(0x697ec5);
{goto L697f4d;}
}
B697eca:L697eca:{c.instructions+=5;NFSU2_TR(0x697eca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B697ecd:{NFSU2_TR(0x697ecd);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B697ed1:{NFSU2_TR(0x697ed1);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B697ed2:{NFSU2_TR(0x697ed2);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B697ed3:{NFSU2_TR(0x697ed3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L697f4d;}}
}
B697ed5:L697ed5:{c.instructions+=3;NFSU2_TR(0x697ed5);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B697ed9:{NFSU2_TR(0x697ed9);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B697edb:{NFSU2_TR(0x697edb);
if(r1(R+518)){{goto L697efb;}}
}
B697edd:L697edd:{c.instructions+=2;NFSU2_TR(0x697edd);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B697ede:{NFSU2_TR(0x697ede);
if(r1(R+518)){{goto L697ef4;}}
}
B697ee0:L697ee0:{c.instructions+=2;NFSU2_TR(0x697ee0);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B697ee1:{NFSU2_TR(0x697ee1);
if(r1(R+518)){{goto L697eed;}}
}
B697ee3:L697ee3:{c.instructions+=2;NFSU2_TR(0x697ee3);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B697ee4:{NFSU2_TR(0x697ee4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L697f4d;}}
}
B697ee6:L697ee6:{c.instructions+=2;NFSU2_TR(0x697ee6);
w4(R+28,u32(0x695705ull));
}
B697eeb:{NFSU2_TR(0x697eeb);
{goto L697f4d;}
}
B697eed:L697eed:{c.instructions+=2;NFSU2_TR(0x697eed);
w4(R+28,u32(0x6957a6ull));
}
B697ef2:{NFSU2_TR(0x697ef2);
{goto L697f4d;}
}
B697ef4:L697ef4:{c.instructions+=2;NFSU2_TR(0x697ef4);
w4(R+28,u32(0x695742ull));
}
B697ef9:{NFSU2_TR(0x697ef9);
{goto L697f4d;}
}
B697efb:L697efb:{c.instructions+=2;NFSU2_TR(0x697efb);
w4(R+28,u32(0x695705ull));
}
B697f00:{NFSU2_TR(0x697f00);
{goto L697f4d;}
}
B697f02:L697f02:{c.instructions+=2;NFSU2_TR(0x697f02);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfffe0000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B697f08:{NFSU2_TR(0x697f08);
if(r1(R+518)){{goto L697f31;}}
}
B697f0a:L697f0a:{c.instructions+=2;NFSU2_TR(0x697f0a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B697f0c:{NFSU2_TR(0x697f0c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L697f4d;}}
}
B697f0e:L697f0e:{c.instructions+=4;NFSU2_TR(0x697f0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B697f11:{NFSU2_TR(0x697f11);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B697f15:{NFSU2_TR(0x697f15);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B697f17:{NFSU2_TR(0x697f17);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x697decu);}goto L697dec;}}
}
B697f1d:L697f1d:{c.instructions+=2;NFSU2_TR(0x697f1d);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B697f1e:{NFSU2_TR(0x697f1e);
if(r1(R+518)){{goto L697f2a;}}
}
B697f20:L697f20:{c.instructions+=2;NFSU2_TR(0x697f20);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B697f21:{NFSU2_TR(0x697f21);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L697f4d;}}
}
B697f23:L697f23:{c.instructions+=2;NFSU2_TR(0x697f23);
w4(R+28,u32(0x695662ull));
}
B697f28:{NFSU2_TR(0x697f28);
{goto L697f4d;}
}
B697f2a:L697f2a:{c.instructions+=2;NFSU2_TR(0x697f2a);
w4(R+28,u32(0x69559aull));
}
B697f2f:{NFSU2_TR(0x697f2f);
{goto L697f4d;}
}
B697f31:L697f31:{c.instructions+=4;NFSU2_TR(0x697f31);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B697f34:{NFSU2_TR(0x697f34);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B697f38:{NFSU2_TR(0x697f38);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B697f3a:{NFSU2_TR(0x697f3a);
if(r1(R+518)){{goto L697f48;}}
}
B697f3c:L697f3c:{c.instructions+=2;NFSU2_TR(0x697f3c);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B697f3d:{NFSU2_TR(0x697f3d);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x697e75u);}goto L697e75;}}
}
B697f43:L697f43:{c.instructions+=1;NFSU2_TR(0x697f43);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x697e27u);}goto L697e27;}
}
B697f48:L697f48:{c.instructions+=1;NFSU2_TR(0x697f48);
w4(R+28,u32(0x69586bull));
}
B697f4d:L697f4d:{c.instructions+=2;NFSU2_TR(0x697f4d);
u8 U[4];
w4(U+0,u32(0x44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B697f4f:{NFSU2_TR(0x697f4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x697f54ull));
TAIL_STATIC(0x575620u,575);
}
B697f54:L697f54:{c.instructions+=3;NFSU2_TR(0x697f54);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B697f56:{NFSU2_TR(0x697f56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B697f57:{NFSU2_TR(0x697f57);
if(r1(R+518)){{goto L697f6f;}}
}
B697f59:L697f59:{c.instructions+=7;NFSU2_TR(0x697f59);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B697f5c:{NFSU2_TR(0x697f5c);
__builtin_memmove((R+4),(R+0),4);
}
B697f5e:{NFSU2_TR(0x697f5e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B697f5f:{NFSU2_TR(0x697f5f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B697f60:{NFSU2_TR(0x697f60);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B697f63:{NFSU2_TR(0x697f63);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B697f66:{NFSU2_TR(0x697f66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x697f6bull));
TAIL_STATIC(0x695233u,695);
}
B697f6b:L697f6b:{c.instructions+=2;NFSU2_TR(0x697f6b);
__builtin_memmove((R+24),(R+0),4);
}
B697f6d:{NFSU2_TR(0x697f6d);
{goto L697f71;}
}
B697f6f:L697f6f:{c.instructions+=1;NFSU2_TR(0x697f6f);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B697f71:L697f71:{c.instructions+=2;NFSU2_TR(0x697f71);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B697f73:{NFSU2_TR(0x697f73);
if(r1(R+518)){{goto L697f89;}}
}
B697f75:L697f75:{c.instructions+=2;NFSU2_TR(0x697f75);
__builtin_memmove((R+4),(R+24),4);
}
B697f77:{NFSU2_TR(0x697f77);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x697f7cull));
{goto L697f96;}
}
B697f7c:L697f7c:{c.instructions+=2;NFSU2_TR(0x697f7c);
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
B697f7e:{NFSU2_TR(0x697f7e);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L697f8d;}}
}
B697f80:L697f80:{c.instructions+=3;NFSU2_TR(0x697f80);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B697f82:{NFSU2_TR(0x697f82);
__builtin_memmove((R+4),(R+24),4);
}
B697f84:{NFSU2_TR(0x697f84);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x697f89ull));
TAIL_STATIC(0x6957fcu,695);
}
B697f89:L697f89:{c.instructions+=2;NFSU2_TR(0x697f89);
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
B697f8b:{NFSU2_TR(0x697f8b);
{goto L697f8f;}
}
B697f8d:L697f8d:{c.instructions+=1;NFSU2_TR(0x697f8d);
__builtin_memmove((R+0),(R+24),4);
}
B697f8f:L697f8f:{c.instructions+=5;NFSU2_TR(0x697f8f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B697f90:{NFSU2_TR(0x697f90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B697f91:{NFSU2_TR(0x697f91);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B697f92:{NFSU2_TR(0x697f92);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B697f93:{NFSU2_TR(0x697f93);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B697f96:L697f96:{c.instructions+=11;NFSU2_TR(0x697f96);
__builtin_memmove((R+28),(R+28),4);
}
B697f98:{NFSU2_TR(0x697f98);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B697f99:{NFSU2_TR(0x697f99);
__builtin_memmove((R+20),(R+16),4);
}
B697f9b:{NFSU2_TR(0x697f9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x28ull))));
}
B697f9e:{NFSU2_TR(0x697f9e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B697f9f:{NFSU2_TR(0x697f9f);
__builtin_memmove((R+12),(R+4),4);
}
B697fa1:{NFSU2_TR(0x697fa1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B697fa4:{NFSU2_TR(0x697fa4);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B697fa9:{NFSU2_TR(0x697fa9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B697faa:{NFSU2_TR(0x697faa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B697fab:{NFSU2_TR(0x697fab);
if(r1(R+518)){TAIL_STATIC(0x698105u,698);}
}
B697fb1:L697fb1:{c.instructions+=4;NFSU2_TR(0x697fb1);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B697fb5:{NFSU2_TR(0x697fb5);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B697fb8:{NFSU2_TR(0x697fb8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B697fb9:{NFSU2_TR(0x697fb9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x697fbeull));
TAIL_STATIC(0x575620u,575);
}
B697fbe:L697fbe:{c.instructions+=5;NFSU2_TR(0x697fbe);
__builtin_memmove((R+28),(R+0),4);
}
B697fc0:{NFSU2_TR(0x697fc0);
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
B697fc2:{NFSU2_TR(0x697fc2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B697fc3:{NFSU2_TR(0x697fc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B697fc6:{NFSU2_TR(0x697fc6);
if(r1(R+518)){TAIL_STATIC(0x698113u,698);}
}
B697fcc:L697fcc:{c.instructions+=6;NFSU2_TR(0x697fcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B697fcf:{NFSU2_TR(0x697fcf);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B697fd3:{NFSU2_TR(0x697fd3);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B697fd6:{NFSU2_TR(0x697fd6);
__builtin_memmove((R+8),(R+4),4);
}
B697fd8:{NFSU2_TR(0x697fd8);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B697fdb:{NFSU2_TR(0x697fdb);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B697fdd:L697fdd:{c.instructions+=1;NFSU2_TR(0x697fdd);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L697fdf;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x697fddu);}goto L697fdd;}
}
B697fdf:L697fdf:{c.instructions+=2;NFSU2_TR(0x697fdf);
__builtin_memmove((R+4),(R+8),4);
}
B697fe1:{NFSU2_TR(0x697fe1);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B697fe4:L697fe4:{c.instructions+=1;NFSU2_TR(0x697fe4);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L697fe6;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x697fe4u);}goto L697fe4;}
}
B697fe6:L697fe6:{c.instructions+=7;NFSU2_TR(0x697fe6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B697fe9:{NFSU2_TR(0x697fe9);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B697feb:{NFSU2_TR(0x697feb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B697fee:{NFSU2_TR(0x697fee);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B697ff1:{NFSU2_TR(0x697ff1);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B697ff4:{NFSU2_TR(0x697ff4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B697ff5:{NFSU2_TR(0x697ff5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B697ff8:L697ff8:{c.instructions+=1;NFSU2_TR(0x697ff8);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L697ffa;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x697ff8u);}goto L697ff8;}
}
B697ffa:L697ffa:{c.instructions+=2;NFSU2_TR(0x697ffa);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B697ffe:{NFSU2_TR(0x697ffe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
TAIL_STATIC(0x698001u,698);
}
XIT:NFSU2_TR_EXIT(0x697,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
