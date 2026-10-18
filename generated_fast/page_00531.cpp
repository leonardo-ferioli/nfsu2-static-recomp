#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_408(u8* __restrict R,Cpu& c);
u32 body_435(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_458(u8* __restrict R,Cpu& c);
u32 body_495(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_510(u8* __restrict R,Cpu& c);
u32 body_511(u8* __restrict R,Cpu& c);
u32 body_517(u8* __restrict R,Cpu& c);
u32 body_51a(u8* __restrict R,Cpu& c);
u32 body_51b(u8* __restrict R,Cpu& c);
u32 body_51c(u8* __restrict R,Cpu& c);
u32 body_51d(u8* __restrict R,Cpu& c);
u32 body_51f(u8* __restrict R,Cpu& c);
u32 body_525(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_52d(u8* __restrict R,Cpu& c);
u32 body_532(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_5bf(u8* __restrict R,Cpu& c);
u32 body_5ce(u8* __restrict R,Cpu& c);
u32 body_6f4(u8* __restrict R,Cpu& c);
u32 body_6f5(u8* __restrict R,Cpu& c);
u32 body_6f9(u8* __restrict R,Cpu& c);
u32 body_6fe(u8* __restrict R,Cpu& c);
u32 body_700(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x531,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x531,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_531(u8* __restrict R,Cpu& c);
u32 page_531(Cpu& c){return body_531(c.regs.data(),c);}
__attribute__((noinline)) u32 body_531(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x531001:goto L531001;
case 0x531004:c.instructions+=1;goto B531004;
case 0x531010:goto L531010;
case 0x531011:c.instructions+=2;goto B531011;
case 0x531013:c.instructions+=1;goto B531013;
case 0x531018:goto L531018;
case 0x53101d:c.instructions+=1;goto B53101d;
case 0x53101f:goto L53101f;
case 0x531020:c.instructions+=1;goto B531020;
case 0x531025:goto L531025;
case 0x531028:goto L531028;
case 0x53102a:c.instructions+=2;goto B53102a;
case 0x53102b:c.instructions+=1;goto B53102b;
case 0x531030:goto L531030;
case 0x531037:c.instructions+=2;goto B531037;
case 0x53103d:c.instructions+=1;goto B53103d;
case 0x531040:goto L531040;
case 0x531041:c.instructions+=7;goto B531041;
case 0x531043:c.instructions+=6;goto B531043;
case 0x531046:c.instructions+=5;goto B531046;
case 0x531049:c.instructions+=4;goto B531049;
case 0x53104a:c.instructions+=3;goto B53104a;
case 0x53104b:c.instructions+=2;goto B53104b;
case 0x53104c:c.instructions+=1;goto B53104c;
case 0x531051:goto L531051;
case 0x531054:c.instructions+=4;goto B531054;
case 0x531057:c.instructions+=3;goto B531057;
case 0x531058:c.instructions+=2;goto B531058;
case 0x531059:c.instructions+=1;goto B531059;
case 0x53105e:goto L53105e;
case 0x531061:c.instructions+=4;goto B531061;
case 0x531064:c.instructions+=3;goto B531064;
case 0x531065:c.instructions+=2;goto B531065;
case 0x531066:c.instructions+=1;goto B531066;
case 0x53106b:goto L53106b;
case 0x53106f:c.instructions+=6;goto B53106f;
case 0x531073:c.instructions+=5;goto B531073;
case 0x531076:c.instructions+=4;goto B531076;
case 0x53107c:c.instructions+=3;goto B53107c;
case 0x53107e:c.instructions+=2;goto B53107e;
case 0x531081:c.instructions+=1;goto B531081;
case 0x531083:goto L531083;
case 0x531085:c.instructions+=1;goto B531085;
case 0x53108b:goto L53108b;
case 0x531091:c.instructions+=12;goto B531091;
case 0x531094:c.instructions+=11;goto B531094;
case 0x531096:c.instructions+=10;goto B531096;
case 0x531097:c.instructions+=9;goto B531097;
case 0x53109b:c.instructions+=8;goto B53109b;
case 0x53109d:c.instructions+=7;goto B53109d;
case 0x5310a1:c.instructions+=6;goto B5310a1;
case 0x5310a5:c.instructions+=5;goto B5310a5;
case 0x5310a9:c.instructions+=4;goto B5310a9;
case 0x5310ac:c.instructions+=3;goto B5310ac;
case 0x5310af:c.instructions+=2;goto B5310af;
case 0x5310b0:c.instructions+=1;goto B5310b0;
case 0x5310b5:goto L5310b5;
case 0x5310b9:c.instructions+=8;goto B5310b9;
case 0x5310bd:c.instructions+=7;goto B5310bd;
case 0x5310c0:c.instructions+=6;goto B5310c0;
case 0x5310c3:c.instructions+=5;goto B5310c3;
case 0x5310c7:c.instructions+=4;goto B5310c7;
case 0x5310ca:c.instructions+=3;goto B5310ca;
case 0x5310cd:c.instructions+=2;goto B5310cd;
case 0x5310ce:c.instructions+=1;goto B5310ce;
case 0x5310d3:goto L5310d3;
case 0x5310d7:c.instructions+=8;goto B5310d7;
case 0x5310db:c.instructions+=7;goto B5310db;
case 0x5310de:c.instructions+=6;goto B5310de;
case 0x5310e1:c.instructions+=5;goto B5310e1;
case 0x5310e5:c.instructions+=4;goto B5310e5;
case 0x5310e8:c.instructions+=3;goto B5310e8;
case 0x5310eb:c.instructions+=2;goto B5310eb;
case 0x5310ec:c.instructions+=1;goto B5310ec;
case 0x5310f1:goto L5310f1;
case 0x5310f4:c.instructions+=8;goto B5310f4;
case 0x5310f7:c.instructions+=7;goto B5310f7;
case 0x5310fb:c.instructions+=6;goto B5310fb;
case 0x5310fc:c.instructions+=5;goto B5310fc;
case 0x531100:c.instructions+=4;goto B531100;
case 0x531101:c.instructions+=3;goto B531101;
case 0x531102:c.instructions+=2;goto B531102;
case 0x531106:c.instructions+=1;goto B531106;
case 0x53110b:goto L53110b;
case 0x53110f:c.instructions+=5;goto B53110f;
case 0x531113:c.instructions+=4;goto B531113;
case 0x531114:c.instructions+=3;goto B531114;
case 0x531115:c.instructions+=2;goto B531115;
case 0x531116:c.instructions+=1;goto B531116;
case 0x53111b:goto L53111b;
case 0x53111e:c.instructions+=8;goto B53111e;
case 0x531121:c.instructions+=7;goto B531121;
case 0x531125:c.instructions+=6;goto B531125;
case 0x531126:c.instructions+=5;goto B531126;
case 0x53112a:c.instructions+=4;goto B53112a;
case 0x53112b:c.instructions+=3;goto B53112b;
case 0x53112c:c.instructions+=2;goto B53112c;
case 0x531130:c.instructions+=1;goto B531130;
case 0x531135:goto L531135;
case 0x531139:c.instructions+=5;goto B531139;
case 0x53113d:c.instructions+=4;goto B53113d;
case 0x53113e:c.instructions+=3;goto B53113e;
case 0x53113f:c.instructions+=2;goto B53113f;
case 0x531140:c.instructions+=1;goto B531140;
case 0x531145:goto L531145;
case 0x531148:c.instructions+=8;goto B531148;
case 0x53114b:c.instructions+=7;goto B53114b;
case 0x53114f:c.instructions+=6;goto B53114f;
case 0x531150:c.instructions+=5;goto B531150;
case 0x531154:c.instructions+=4;goto B531154;
case 0x531155:c.instructions+=3;goto B531155;
case 0x531156:c.instructions+=2;goto B531156;
case 0x53115a:c.instructions+=1;goto B53115a;
case 0x53115f:goto L53115f;
case 0x531163:c.instructions+=6;goto B531163;
case 0x531167:c.instructions+=5;goto B531167;
case 0x53116a:c.instructions+=4;goto B53116a;
case 0x53116b:c.instructions+=3;goto B53116b;
case 0x53116c:c.instructions+=2;goto B53116c;
case 0x53116d:c.instructions+=1;goto B53116d;
case 0x531172:goto L531172;
case 0x531175:c.instructions+=8;goto B531175;
case 0x531178:c.instructions+=7;goto B531178;
case 0x53117c:c.instructions+=6;goto B53117c;
case 0x53117d:c.instructions+=5;goto B53117d;
case 0x531181:c.instructions+=4;goto B531181;
case 0x531182:c.instructions+=3;goto B531182;
case 0x531183:c.instructions+=2;goto B531183;
case 0x531187:c.instructions+=1;goto B531187;
case 0x53118c:goto L53118c;
case 0x531190:c.instructions+=5;goto B531190;
case 0x531194:c.instructions+=4;goto B531194;
case 0x531195:c.instructions+=3;goto B531195;
case 0x531196:c.instructions+=2;goto B531196;
case 0x531197:c.instructions+=1;goto B531197;
case 0x53119c:goto L53119c;
case 0x53119f:c.instructions+=8;goto B53119f;
case 0x5311a2:c.instructions+=7;goto B5311a2;
case 0x5311a6:c.instructions+=6;goto B5311a6;
case 0x5311a7:c.instructions+=5;goto B5311a7;
case 0x5311ab:c.instructions+=4;goto B5311ab;
case 0x5311ac:c.instructions+=3;goto B5311ac;
case 0x5311ad:c.instructions+=2;goto B5311ad;
case 0x5311b1:c.instructions+=1;goto B5311b1;
case 0x5311b6:goto L5311b6;
case 0x5311ba:c.instructions+=5;goto B5311ba;
case 0x5311be:c.instructions+=4;goto B5311be;
case 0x5311bf:c.instructions+=3;goto B5311bf;
case 0x5311c0:c.instructions+=2;goto B5311c0;
case 0x5311c1:c.instructions+=1;goto B5311c1;
case 0x5311c6:goto L5311c6;
case 0x5311c9:c.instructions+=8;goto B5311c9;
case 0x5311cc:c.instructions+=7;goto B5311cc;
case 0x5311d0:c.instructions+=6;goto B5311d0;
case 0x5311d1:c.instructions+=5;goto B5311d1;
case 0x5311d5:c.instructions+=4;goto B5311d5;
case 0x5311d6:c.instructions+=3;goto B5311d6;
case 0x5311d7:c.instructions+=2;goto B5311d7;
case 0x5311db:c.instructions+=1;goto B5311db;
case 0x5311e0:goto L5311e0;
case 0x5311e4:c.instructions+=6;goto B5311e4;
case 0x5311e8:c.instructions+=5;goto B5311e8;
case 0x5311eb:c.instructions+=4;goto B5311eb;
case 0x5311ec:c.instructions+=3;goto B5311ec;
case 0x5311ed:c.instructions+=2;goto B5311ed;
case 0x5311ee:c.instructions+=1;goto B5311ee;
case 0x5311f3:goto L5311f3;
case 0x5311f6:c.instructions+=6;goto B5311f6;
case 0x5311fa:c.instructions+=5;goto B5311fa;
case 0x5311fb:c.instructions+=4;goto B5311fb;
case 0x5311ff:c.instructions+=3;goto B5311ff;
case 0x531200:c.instructions+=2;goto B531200;
case 0x531201:c.instructions+=1;goto B531201;
case 0x531206:goto L531206;
case 0x531209:c.instructions+=6;goto B531209;
case 0x53120d:c.instructions+=5;goto B53120d;
case 0x53120e:c.instructions+=4;goto B53120e;
case 0x531212:c.instructions+=3;goto B531212;
case 0x531213:c.instructions+=2;goto B531213;
case 0x531214:c.instructions+=1;goto B531214;
case 0x531219:goto L531219;
case 0x53121c:c.instructions+=6;goto B53121c;
case 0x531220:c.instructions+=5;goto B531220;
case 0x531221:c.instructions+=4;goto B531221;
case 0x531225:c.instructions+=3;goto B531225;
case 0x531226:c.instructions+=2;goto B531226;
case 0x531227:c.instructions+=1;goto B531227;
case 0x53122c:goto L53122c;
case 0x531230:c.instructions+=14;goto B531230;
case 0x531236:c.instructions+=13;goto B531236;
case 0x531239:c.instructions+=12;goto B531239;
case 0x53123d:c.instructions+=11;goto B53123d;
case 0x531241:c.instructions+=10;goto B531241;
case 0x531244:c.instructions+=9;goto B531244;
case 0x53124a:c.instructions+=8;goto B53124a;
case 0x53124e:c.instructions+=7;goto B53124e;
case 0x531252:c.instructions+=6;goto B531252;
case 0x531258:c.instructions+=5;goto B531258;
case 0x53125a:c.instructions+=4;goto B53125a;
case 0x53125d:c.instructions+=3;goto B53125d;
case 0x531260:c.instructions+=2;goto B531260;
case 0x531261:c.instructions+=1;goto B531261;
case 0x531266:goto L531266;
case 0x531269:c.instructions+=3;goto B531269;
case 0x53126a:c.instructions+=2;goto B53126a;
case 0x53126b:c.instructions+=1;goto B53126b;
case 0x531270:goto L531270;
case 0x531273:c.instructions+=4;goto B531273;
case 0x531274:c.instructions+=3;goto B531274;
case 0x531277:c.instructions+=2;goto B531277;
case 0x531279:c.instructions+=1;goto B531279;
case 0x53127b:goto L53127b;
case 0x53127c:c.instructions+=3;goto B53127c;
case 0x53127e:c.instructions+=2;goto B53127e;
case 0x531280:c.instructions+=1;goto B531280;
case 0x531282:goto L531282;
case 0x531285:c.instructions+=12;goto B531285;
case 0x531288:c.instructions+=11;goto B531288;
case 0x53128c:c.instructions+=10;goto B53128c;
case 0x53128f:c.instructions+=9;goto B53128f;
case 0x531292:c.instructions+=8;goto B531292;
case 0x531296:c.instructions+=7;goto B531296;
case 0x531299:c.instructions+=6;goto B531299;
case 0x53129d:c.instructions+=5;goto B53129d;
case 0x5312a0:c.instructions+=4;goto B5312a0;
case 0x5312a4:c.instructions+=3;goto B5312a4;
case 0x5312a7:c.instructions+=2;goto B5312a7;
case 0x5312aa:c.instructions+=1;goto B5312aa;
case 0x5312af:goto L5312af;
case 0x5312b1:c.instructions+=2;goto B5312b1;
case 0x5312b3:c.instructions+=1;goto B5312b3;
case 0x5312b5:goto L5312b5;
case 0x5312b6:goto L5312b6;
case 0x5312b7:c.instructions+=1;goto B5312b7;
case 0x5312c0:goto L5312c0;
case 0x5312c3:c.instructions+=6;goto B5312c3;
case 0x5312c4:c.instructions+=5;goto B5312c4;
case 0x5312c6:c.instructions+=4;goto B5312c6;
case 0x5312c9:c.instructions+=3;goto B5312c9;
case 0x5312cc:c.instructions+=2;goto B5312cc;
case 0x5312cd:c.instructions+=1;goto B5312cd;
case 0x5312d0:goto L5312d0;
case 0x5312d3:c.instructions+=15;goto B5312d3;
case 0x5312d9:c.instructions+=14;goto B5312d9;
case 0x5312dc:c.instructions+=13;goto B5312dc;
case 0x5312df:c.instructions+=12;goto B5312df;
case 0x5312e3:c.instructions+=11;goto B5312e3;
case 0x5312e9:c.instructions+=10;goto B5312e9;
case 0x5312ef:c.instructions+=9;goto B5312ef;
case 0x5312f5:c.instructions+=8;goto B5312f5;
case 0x5312f9:c.instructions+=7;goto B5312f9;
case 0x5312fd:c.instructions+=6;goto B5312fd;
case 0x531300:c.instructions+=5;goto B531300;
case 0x531304:c.instructions+=4;goto B531304;
case 0x531308:c.instructions+=3;goto B531308;
case 0x53130b:c.instructions+=2;goto B53130b;
case 0x53130e:c.instructions+=1;goto B53130e;
case 0x531313:goto L531313;
case 0x531317:c.instructions+=17;goto B531317;
case 0x53131d:c.instructions+=16;goto B53131d;
case 0x531320:c.instructions+=15;goto B531320;
case 0x531323:c.instructions+=14;goto B531323;
case 0x531327:c.instructions+=13;goto B531327;
case 0x53132a:c.instructions+=12;goto B53132a;
case 0x53132c:c.instructions+=11;goto B53132c;
case 0x53132e:c.instructions+=10;goto B53132e;
case 0x531330:c.instructions+=9;goto B531330;
case 0x531332:c.instructions+=8;goto B531332;
case 0x531334:c.instructions+=7;goto B531334;
case 0x531336:c.instructions+=6;goto B531336;
case 0x531338:c.instructions+=5;goto B531338;
case 0x53133a:c.instructions+=4;goto B53133a;
case 0x53133c:c.instructions+=3;goto B53133c;
case 0x53133f:c.instructions+=2;goto B53133f;
case 0x531340:c.instructions+=1;goto B531340;
case 0x531345:goto L531345;
case 0x53134b:c.instructions+=8;goto B53134b;
case 0x53134e:c.instructions+=7;goto B53134e;
case 0x531352:c.instructions+=6;goto B531352;
case 0x531355:c.instructions+=5;goto B531355;
case 0x531359:c.instructions+=4;goto B531359;
case 0x53135f:c.instructions+=3;goto B53135f;
case 0x531362:c.instructions+=2;goto B531362;
case 0x531363:c.instructions+=1;goto B531363;
case 0x531368:goto L531368;
case 0x53136e:c.instructions+=27;goto B53136e;
case 0x531371:c.instructions+=26;goto B531371;
case 0x531377:c.instructions+=25;goto B531377;
case 0x53137d:c.instructions+=24;goto B53137d;
case 0x53137f:c.instructions+=23;goto B53137f;
case 0x531383:c.instructions+=22;goto B531383;
case 0x531386:c.instructions+=21;goto B531386;
case 0x531389:c.instructions+=20;goto B531389;
case 0x53138b:c.instructions+=19;goto B53138b;
case 0x53138e:c.instructions+=18;goto B53138e;
case 0x531391:c.instructions+=17;goto B531391;
case 0x531393:c.instructions+=16;goto B531393;
case 0x531395:c.instructions+=15;goto B531395;
case 0x53139b:c.instructions+=14;goto B53139b;
case 0x53139f:c.instructions+=13;goto B53139f;
case 0x5313a3:c.instructions+=12;goto B5313a3;
case 0x5313a5:c.instructions+=11;goto B5313a5;
case 0x5313a8:c.instructions+=10;goto B5313a8;
case 0x5313ab:c.instructions+=9;goto B5313ab;
case 0x5313b1:c.instructions+=8;goto B5313b1;
case 0x5313b3:c.instructions+=7;goto B5313b3;
case 0x5313b6:c.instructions+=6;goto B5313b6;
case 0x5313b9:c.instructions+=5;goto B5313b9;
case 0x5313bb:c.instructions+=4;goto B5313bb;
case 0x5313c1:c.instructions+=3;goto B5313c1;
case 0x5313c4:c.instructions+=2;goto B5313c4;
case 0x5313c5:c.instructions+=1;goto B5313c5;
case 0x5313ca:goto L5313ca;
case 0x5313cd:c.instructions+=14;goto B5313cd;
case 0x5313d3:c.instructions+=13;goto B5313d3;
case 0x5313d6:c.instructions+=12;goto B5313d6;
case 0x5313dc:c.instructions+=11;goto B5313dc;
case 0x5313dd:c.instructions+=10;goto B5313dd;
case 0x5313de:c.instructions+=9;goto B5313de;
case 0x5313e1:c.instructions+=8;goto B5313e1;
case 0x5313e4:c.instructions+=7;goto B5313e4;
case 0x5313e8:c.instructions+=6;goto B5313e8;
case 0x5313eb:c.instructions+=5;goto B5313eb;
case 0x5313ee:c.instructions+=4;goto B5313ee;
case 0x5313f1:c.instructions+=3;goto B5313f1;
case 0x5313f4:c.instructions+=2;goto B5313f4;
case 0x5313f8:c.instructions+=1;goto B5313f8;
case 0x5313fd:goto L5313fd;
case 0x531403:c.instructions+=6;goto B531403;
case 0x531407:c.instructions+=5;goto B531407;
case 0x531408:c.instructions+=4;goto B531408;
case 0x53140c:c.instructions+=3;goto B53140c;
case 0x53140d:c.instructions+=2;goto B53140d;
case 0x53140e:c.instructions+=1;goto B53140e;
case 0x531413:goto L531413;
case 0x531417:c.instructions+=8;goto B531417;
case 0x53141b:c.instructions+=7;goto B53141b;
case 0x531421:c.instructions+=6;goto B531421;
case 0x531424:c.instructions+=5;goto B531424;
case 0x531425:c.instructions+=4;goto B531425;
case 0x531426:c.instructions+=3;goto B531426;
case 0x531429:c.instructions+=2;goto B531429;
case 0x53142a:c.instructions+=1;goto B53142a;
case 0x53142f:goto L53142f;
case 0x531435:c.instructions+=8;goto B531435;
case 0x531438:c.instructions+=7;goto B531438;
case 0x53143c:c.instructions+=6;goto B53143c;
case 0x53143d:c.instructions+=5;goto B53143d;
case 0x531441:c.instructions+=4;goto B531441;
case 0x531442:c.instructions+=3;goto B531442;
case 0x531443:c.instructions+=2;goto B531443;
case 0x531447:c.instructions+=1;goto B531447;
case 0x53144c:goto L53144c;
case 0x531450:c.instructions+=5;goto B531450;
case 0x531454:c.instructions+=4;goto B531454;
case 0x531455:c.instructions+=3;goto B531455;
case 0x531456:c.instructions+=2;goto B531456;
case 0x531457:c.instructions+=1;goto B531457;
case 0x53145c:goto L53145c;
case 0x53145f:c.instructions+=4;goto B53145f;
case 0x531465:c.instructions+=3;goto B531465;
case 0x531466:c.instructions+=2;goto B531466;
case 0x531467:c.instructions+=1;goto B531467;
case 0x53146c:goto L53146c;
case 0x531472:c.instructions+=8;goto B531472;
case 0x531475:c.instructions+=7;goto B531475;
case 0x531479:c.instructions+=6;goto B531479;
case 0x53147a:c.instructions+=5;goto B53147a;
case 0x53147e:c.instructions+=4;goto B53147e;
case 0x53147f:c.instructions+=3;goto B53147f;
case 0x531480:c.instructions+=2;goto B531480;
case 0x531484:c.instructions+=1;goto B531484;
case 0x531489:goto L531489;
case 0x53148d:c.instructions+=5;goto B53148d;
case 0x531491:c.instructions+=4;goto B531491;
case 0x531492:c.instructions+=3;goto B531492;
case 0x531493:c.instructions+=2;goto B531493;
case 0x531494:c.instructions+=1;goto B531494;
case 0x531499:goto L531499;
case 0x53149f:c.instructions+=7;goto B53149f;
case 0x5314a2:c.instructions+=6;goto B5314a2;
case 0x5314a6:c.instructions+=5;goto B5314a6;
case 0x5314a7:c.instructions+=4;goto B5314a7;
case 0x5314ab:c.instructions+=3;goto B5314ab;
case 0x5314ac:c.instructions+=2;goto B5314ac;
case 0x5314ad:c.instructions+=1;goto B5314ad;
case 0x5314b2:goto L5314b2;
case 0x5314b6:c.instructions+=7;goto B5314b6;
case 0x5314bc:c.instructions+=6;goto B5314bc;
case 0x5314c0:c.instructions+=5;goto B5314c0;
case 0x5314c3:c.instructions+=4;goto B5314c3;
case 0x5314c6:c.instructions+=3;goto B5314c6;
case 0x5314c7:c.instructions+=2;goto B5314c7;
case 0x5314c8:c.instructions+=1;goto B5314c8;
case 0x5314cd:goto L5314cd;
case 0x5314d1:c.instructions+=6;goto B5314d1;
case 0x5314d5:c.instructions+=5;goto B5314d5;
case 0x5314db:c.instructions+=4;goto B5314db;
case 0x5314dc:c.instructions+=3;goto B5314dc;
case 0x5314dd:c.instructions+=2;goto B5314dd;
case 0x5314de:c.instructions+=1;goto B5314de;
case 0x5314e3:goto L5314e3;
case 0x5314e6:c.instructions+=4;goto B5314e6;
case 0x5314e7:c.instructions+=3;goto B5314e7;
case 0x5314e8:c.instructions+=2;goto B5314e8;
case 0x5314eb:c.instructions+=1;goto B5314eb;
case 0x5314f0:goto L5314f0;
case 0x5314f1:c.instructions+=7;goto B5314f1;
case 0x5314f7:c.instructions+=6;goto B5314f7;
case 0x5314f8:c.instructions+=5;goto B5314f8;
case 0x5314fa:c.instructions+=4;goto B5314fa;
case 0x531500:c.instructions+=3;goto B531500;
case 0x531504:c.instructions+=2;goto B531504;
case 0x531505:c.instructions+=1;goto B531505;
case 0x53150a:goto L53150a;
case 0x53150d:c.instructions+=2;goto B53150d;
case 0x53150f:c.instructions+=1;goto B53150f;
case 0x531511:goto L531511;
case 0x531513:c.instructions+=3;goto B531513;
case 0x531515:c.instructions+=2;goto B531515;
case 0x531517:c.instructions+=1;goto B531517;
case 0x53151a:goto L53151a;
case 0x531521:c.instructions+=1;goto B531521;
case 0x531523:goto L531523;
case 0x531529:c.instructions+=2;goto B531529;
case 0x53152a:c.instructions+=1;goto B53152a;
case 0x53152f:goto L53152f;
case 0x531532:c.instructions+=2;goto B531532;
case 0x531534:c.instructions+=1;goto B531534;
case 0x531536:goto L531536;
case 0x531538:c.instructions+=3;goto B531538;
case 0x53153a:c.instructions+=2;goto B53153a;
case 0x53153c:c.instructions+=1;goto B53153c;
case 0x53153f:goto L53153f;
case 0x531546:goto L531546;
case 0x531549:c.instructions+=1;goto B531549;
case 0x53154b:goto L53154b;
case 0x531551:c.instructions+=2;goto B531551;
case 0x531552:c.instructions+=1;goto B531552;
case 0x531557:goto L531557;
case 0x53155b:c.instructions+=4;goto B53155b;
case 0x531561:c.instructions+=3;goto B531561;
case 0x531563:c.instructions+=2;goto B531563;
case 0x531566:c.instructions+=1;goto B531566;
case 0x531568:goto L531568;
case 0x53156a:c.instructions+=3;goto B53156a;
case 0x53156c:c.instructions+=2;goto B53156c;
case 0x53156e:c.instructions+=1;goto B53156e;
case 0x531571:goto L531571;
case 0x531578:c.instructions+=1;goto B531578;
case 0x53157a:goto L53157a;
case 0x53157e:c.instructions+=4;goto B53157e;
case 0x531584:c.instructions+=3;goto B531584;
case 0x531586:c.instructions+=2;goto B531586;
case 0x531589:c.instructions+=1;goto B531589;
case 0x53158b:goto L53158b;
case 0x53158d:c.instructions+=3;goto B53158d;
case 0x53158f:c.instructions+=2;goto B53158f;
case 0x531591:c.instructions+=1;goto B531591;
case 0x531594:goto L531594;
case 0x53159b:goto L53159b;
case 0x53159e:c.instructions+=1;goto B53159e;
case 0x5315a0:goto L5315a0;
case 0x5315a6:c.instructions+=2;goto B5315a6;
case 0x5315a7:c.instructions+=1;goto B5315a7;
case 0x5315ac:goto L5315ac;
case 0x5315ad:c.instructions+=2;goto B5315ad;
case 0x5315ae:c.instructions+=1;goto B5315ae;
case 0x5315b0:goto L5315b0;
case 0x5315b2:c.instructions+=10;goto B5315b2;
case 0x5315b7:c.instructions+=9;goto B5315b7;
case 0x5315bd:c.instructions+=8;goto B5315bd;
case 0x5315be:c.instructions+=7;goto B5315be;
case 0x5315c5:c.instructions+=6;goto B5315c5;
case 0x5315c6:c.instructions+=5;goto B5315c6;
case 0x5315c7:c.instructions+=4;goto B5315c7;
case 0x5315c9:c.instructions+=3;goto B5315c9;
case 0x5315ca:c.instructions+=2;goto B5315ca;
case 0x5315ce:c.instructions+=1;goto B5315ce;
case 0x5315d3:goto L5315d3;
case 0x5315d9:c.instructions+=3;goto B5315d9;
case 0x5315db:c.instructions+=2;goto B5315db;
case 0x5315e3:c.instructions+=1;goto B5315e3;
case 0x5315e8:goto L5315e8;
case 0x5315ec:c.instructions+=7;goto B5315ec;
case 0x5315f2:c.instructions+=6;goto B5315f2;
case 0x5315f3:c.instructions+=5;goto B5315f3;
case 0x5315f5:c.instructions+=4;goto B5315f5;
case 0x5315f6:c.instructions+=3;goto B5315f6;
case 0x5315fd:c.instructions+=2;goto B5315fd;
case 0x531600:c.instructions+=1;goto B531600;
case 0x531610:goto L531610;
case 0x531616:c.instructions+=2;goto B531616;
case 0x531619:c.instructions+=1;goto B531619;
case 0x531620:goto L531620;
case 0x531626:c.instructions+=2;goto B531626;
case 0x531629:c.instructions+=1;goto B531629;
case 0x531630:goto L531630;
case 0x531631:c.instructions+=6;goto B531631;
case 0x531633:c.instructions+=5;goto B531633;
case 0x531636:c.instructions+=4;goto B531636;
case 0x531639:c.instructions+=3;goto B531639;
case 0x53163a:c.instructions+=2;goto B53163a;
case 0x53163b:c.instructions+=1;goto B53163b;
case 0x531640:goto L531640;
case 0x531647:c.instructions+=2;goto B531647;
case 0x531649:c.instructions+=1;goto B531649;
case 0x53164b:goto L53164b;
case 0x53164c:c.instructions+=3;goto B53164c;
case 0x53164f:c.instructions+=2;goto B53164f;
case 0x531651:c.instructions+=1;goto B531651;
case 0x531653:goto L531653;
case 0x531658:c.instructions+=1;goto B531658;
case 0x53165d:goto L53165d;
case 0x531660:c.instructions+=3;goto B531660;
case 0x531663:c.instructions+=2;goto B531663;
case 0x531665:c.instructions+=1;goto B531665;
case 0x531667:goto L531667;
case 0x53166a:c.instructions+=2;goto B53166a;
case 0x53166c:c.instructions+=1;goto B53166c;
case 0x53166e:goto L53166e;
case 0x53166f:c.instructions+=4;goto B53166f;
case 0x531670:c.instructions+=3;goto B531670;
case 0x531677:c.instructions+=2;goto B531677;
case 0x531678:c.instructions+=1;goto B531678;
case 0x531679:goto L531679;
case 0x53167b:c.instructions+=1;goto B53167b;
case 0x53167d:goto L53167d;
case 0x531680:c.instructions+=1;goto B531680;
case 0x531682:goto L531682;
case 0x531684:c.instructions+=2;goto B531684;
case 0x531687:c.instructions+=1;goto B531687;
case 0x53168c:goto L53168c;
case 0x53168f:c.instructions+=1;goto B53168f;
case 0x531696:goto L531696;
case 0x53169d:goto L53169d;
case 0x53169e:goto L53169e;
case 0x53169f:c.instructions+=3;goto B53169f;
case 0x5316a6:c.instructions+=2;goto B5316a6;
case 0x5316a7:c.instructions+=1;goto B5316a7;
case 0x5316b0:goto L5316b0;
case 0x5316b4:c.instructions+=4;goto B5316b4;
case 0x5316b6:c.instructions+=3;goto B5316b6;
case 0x5316b7:c.instructions+=2;goto B5316b7;
case 0x5316b9:c.instructions+=1;goto B5316b9;
case 0x5316bb:goto L5316bb;
case 0x5316be:c.instructions+=5;goto B5316be;
case 0x5316c0:c.instructions+=4;goto B5316c0;
case 0x5316c3:c.instructions+=3;goto B5316c3;
case 0x5316c8:c.instructions+=2;goto B5316c8;
case 0x5316c9:c.instructions+=1;goto B5316c9;
case 0x5316ce:goto L5316ce;
case 0x5316d5:c.instructions+=2;goto B5316d5;
case 0x5316d6:c.instructions+=1;goto B5316d6;
case 0x5316db:goto L5316db;
case 0x5316de:c.instructions+=1;goto B5316de;
case 0x5316e5:goto L5316e5;
case 0x5316e8:c.instructions+=2;goto B5316e8;
case 0x5316ea:c.instructions+=1;goto B5316ea;
case 0x5316ec:goto L5316ec;
case 0x5316ef:c.instructions+=1;goto B5316ef;
case 0x5316f1:goto L5316f1;
case 0x5316f3:goto L5316f3;
case 0x5316f8:c.instructions+=2;goto B5316f8;
case 0x5316f9:c.instructions+=1;goto B5316f9;
case 0x531700:goto L531700;
case 0x531703:c.instructions+=6;goto B531703;
case 0x531706:c.instructions+=5;goto B531706;
case 0x531709:c.instructions+=4;goto B531709;
case 0x53170c:c.instructions+=3;goto B53170c;
case 0x53170f:c.instructions+=2;goto B53170f;
case 0x531711:c.instructions+=1;goto B531711;
case 0x531713:goto L531713;
case 0x531716:c.instructions+=1;goto B531716;
case 0x531718:goto L531718;
case 0x53171a:goto L53171a;
case 0x53171d:c.instructions+=6;goto B53171d;
case 0x53171f:c.instructions+=5;goto B53171f;
case 0x531722:c.instructions+=4;goto B531722;
case 0x531725:c.instructions+=3;goto B531725;
case 0x531728:c.instructions+=2;goto B531728;
case 0x53172a:c.instructions+=1;goto B53172a;
case 0x53172c:goto L53172c;
case 0x53172f:c.instructions+=1;goto B53172f;
case 0x531731:goto L531731;
case 0x531733:goto L531733;
case 0x531736:c.instructions+=6;goto B531736;
case 0x531739:c.instructions+=5;goto B531739;
case 0x53173c:c.instructions+=4;goto B53173c;
case 0x53173f:c.instructions+=3;goto B53173f;
case 0x531742:c.instructions+=2;goto B531742;
case 0x531744:c.instructions+=1;goto B531744;
case 0x531746:goto L531746;
case 0x531749:c.instructions+=1;goto B531749;
case 0x53174b:goto L53174b;
case 0x53174d:goto L53174d;
case 0x531750:c.instructions+=6;goto B531750;
case 0x531753:c.instructions+=5;goto B531753;
case 0x531756:c.instructions+=4;goto B531756;
case 0x531759:c.instructions+=3;goto B531759;
case 0x53175c:c.instructions+=2;goto B53175c;
case 0x53175e:c.instructions+=1;goto B53175e;
case 0x531760:goto L531760;
case 0x531763:c.instructions+=1;goto B531763;
case 0x531765:goto L531765;
case 0x531767:goto L531767;
case 0x53176a:c.instructions+=6;goto B53176a;
case 0x53176d:c.instructions+=5;goto B53176d;
case 0x531770:c.instructions+=4;goto B531770;
case 0x531773:c.instructions+=3;goto B531773;
case 0x531776:c.instructions+=2;goto B531776;
case 0x531778:c.instructions+=1;goto B531778;
case 0x53177a:goto L53177a;
case 0x53177d:c.instructions+=1;goto B53177d;
case 0x53177f:goto L53177f;
case 0x531781:goto L531781;
case 0x531784:c.instructions+=6;goto B531784;
case 0x531787:c.instructions+=5;goto B531787;
case 0x53178a:c.instructions+=4;goto B53178a;
case 0x53178d:c.instructions+=3;goto B53178d;
case 0x531790:c.instructions+=2;goto B531790;
case 0x531792:c.instructions+=1;goto B531792;
case 0x531794:goto L531794;
case 0x531797:c.instructions+=1;goto B531797;
case 0x531799:goto L531799;
case 0x53179b:goto L53179b;
case 0x53179e:c.instructions+=6;goto B53179e;
case 0x5317a1:c.instructions+=5;goto B5317a1;
case 0x5317a4:c.instructions+=4;goto B5317a4;
case 0x5317a7:c.instructions+=3;goto B5317a7;
case 0x5317aa:c.instructions+=2;goto B5317aa;
case 0x5317ac:c.instructions+=1;goto B5317ac;
case 0x5317ae:goto L5317ae;
case 0x5317b1:c.instructions+=1;goto B5317b1;
case 0x5317b3:goto L5317b3;
case 0x5317b5:goto L5317b5;
case 0x5317b8:c.instructions+=6;goto B5317b8;
case 0x5317bb:c.instructions+=5;goto B5317bb;
case 0x5317be:c.instructions+=4;goto B5317be;
case 0x5317c1:c.instructions+=3;goto B5317c1;
case 0x5317c4:c.instructions+=2;goto B5317c4;
case 0x5317c6:c.instructions+=1;goto B5317c6;
case 0x5317c8:goto L5317c8;
case 0x5317cb:c.instructions+=1;goto B5317cb;
case 0x5317cd:goto L5317cd;
case 0x5317cf:goto L5317cf;
case 0x5317d2:c.instructions+=6;goto B5317d2;
case 0x5317d5:c.instructions+=5;goto B5317d5;
case 0x5317d8:c.instructions+=4;goto B5317d8;
case 0x5317db:c.instructions+=3;goto B5317db;
case 0x5317de:c.instructions+=2;goto B5317de;
case 0x5317e0:c.instructions+=1;goto B5317e0;
case 0x5317e2:goto L5317e2;
case 0x5317e5:c.instructions+=1;goto B5317e5;
case 0x5317e7:goto L5317e7;
case 0x5317e9:goto L5317e9;
case 0x5317ec:c.instructions+=2;goto B5317ec;
case 0x5317f1:c.instructions+=1;goto B5317f1;
case 0x5317f7:goto L5317f7;
case 0x531800:goto L531800;
case 0x531802:c.instructions+=29;goto B531802;
case 0x531803:c.instructions+=28;goto B531803;
case 0x531805:c.instructions+=27;goto B531805;
case 0x531807:c.instructions+=26;goto B531807;
case 0x53180a:c.instructions+=25;goto B53180a;
case 0x53180d:c.instructions+=24;goto B53180d;
case 0x531810:c.instructions+=23;goto B531810;
case 0x531813:c.instructions+=22;goto B531813;
case 0x531816:c.instructions+=21;goto B531816;
case 0x531819:c.instructions+=20;goto B531819;
case 0x53181c:c.instructions+=19;goto B53181c;
case 0x53181e:c.instructions+=18;goto B53181e;
case 0x531821:c.instructions+=17;goto B531821;
case 0x531823:c.instructions+=16;goto B531823;
case 0x531826:c.instructions+=15;goto B531826;
case 0x53182a:c.instructions+=14;goto B53182a;
case 0x53182d:c.instructions+=13;goto B53182d;
case 0x53182e:c.instructions+=12;goto B53182e;
case 0x531833:c.instructions+=11;goto B531833;
case 0x531836:c.instructions+=10;goto B531836;
case 0x531839:c.instructions+=9;goto B531839;
case 0x53183c:c.instructions+=8;goto B53183c;
case 0x53183f:c.instructions+=7;goto B53183f;
case 0x531842:c.instructions+=6;goto B531842;
case 0x531845:c.instructions+=5;goto B531845;
case 0x531848:c.instructions+=4;goto B531848;
case 0x53184b:c.instructions+=3;goto B53184b;
case 0x53184e:c.instructions+=2;goto B53184e;
case 0x531851:c.instructions+=1;goto B531851;
case 0x531857:goto L531857;
case 0x531859:goto L531859;
case 0x53185f:c.instructions+=10;goto B53185f;
case 0x531865:c.instructions+=9;goto B531865;
case 0x53186b:c.instructions+=8;goto B53186b;
case 0x531871:c.instructions+=7;goto B531871;
case 0x531877:c.instructions+=6;goto B531877;
case 0x53187d:c.instructions+=5;goto B53187d;
case 0x531883:c.instructions+=4;goto B531883;
case 0x531889:c.instructions+=3;goto B531889;
case 0x53188c:c.instructions+=2;goto B53188c;
case 0x531892:c.instructions+=1;goto B531892;
case 0x531897:goto L531897;
case 0x53189a:c.instructions+=5;goto B53189a;
case 0x53189d:c.instructions+=4;goto B53189d;
case 0x53189f:c.instructions+=3;goto B53189f;
case 0x5318a2:c.instructions+=2;goto B5318a2;
case 0x5318a3:c.instructions+=1;goto B5318a3;
case 0x5318a5:goto L5318a5;
case 0x5318ab:c.instructions+=2;goto B5318ab;
case 0x5318b0:c.instructions+=1;goto B5318b0;
case 0x5318b2:goto L5318b2;
case 0x5318b4:goto L5318b4;
case 0x5318b5:c.instructions+=2;goto B5318b5;
case 0x5318b6:c.instructions+=1;goto B5318b6;
case 0x5318c0:goto L5318c0;
case 0x5318c1:c.instructions+=4;goto B5318c1;
case 0x5318c3:c.instructions+=3;goto B5318c3;
case 0x5318c5:c.instructions+=2;goto B5318c5;
case 0x5318c7:c.instructions+=1;goto B5318c7;
case 0x5318c9:goto L5318c9;
case 0x5318d0:goto L5318d0;
case 0x5318d2:c.instructions+=7;goto B5318d2;
case 0x5318d5:c.instructions+=6;goto B5318d5;
case 0x5318d7:c.instructions+=5;goto B5318d7;
case 0x5318d8:c.instructions+=4;goto B5318d8;
case 0x5318db:c.instructions+=3;goto B5318db;
case 0x5318e0:c.instructions+=2;goto B5318e0;
case 0x5318e1:c.instructions+=1;goto B5318e1;
case 0x5318e6:goto L5318e6;
case 0x5318e8:c.instructions+=3;goto B5318e8;
case 0x5318eb:c.instructions+=2;goto B5318eb;
case 0x5318ed:c.instructions+=1;goto B5318ed;
case 0x5318ef:goto L5318ef;
case 0x5318f0:c.instructions+=1;goto B5318f0;
case 0x531900:goto L531900;
case 0x531901:c.instructions+=5;goto B531901;
case 0x531902:c.instructions+=4;goto B531902;
case 0x531904:c.instructions+=3;goto B531904;
case 0x531906:c.instructions+=2;goto B531906;
case 0x531908:c.instructions+=1;goto B531908;
case 0x53190a:goto L53190a;
case 0x531910:goto L531910;
case 0x531913:c.instructions+=5;goto B531913;
case 0x531915:c.instructions+=4;goto B531915;
case 0x531917:c.instructions+=3;goto B531917;
case 0x53191a:c.instructions+=2;goto B53191a;
case 0x53191c:c.instructions+=1;goto B53191c;
case 0x531921:goto L531921;
case 0x531926:c.instructions+=3;goto B531926;
case 0x531927:c.instructions+=2;goto B531927;
case 0x531928:c.instructions+=1;goto B531928;
case 0x53192d:goto L53192d;
case 0x53192f:c.instructions+=3;goto B53192f;
case 0x531932:c.instructions+=2;goto B531932;
case 0x531934:c.instructions+=1;goto B531934;
case 0x531936:goto L531936;
case 0x531937:c.instructions+=2;goto B531937;
case 0x531938:c.instructions+=1;goto B531938;
case 0x531940:goto L531940;
case 0x531941:c.instructions+=5;goto B531941;
case 0x531942:c.instructions+=4;goto B531942;
case 0x531944:c.instructions+=3;goto B531944;
case 0x531946:c.instructions+=2;goto B531946;
case 0x531948:c.instructions+=1;goto B531948;
case 0x53194a:goto L53194a;
case 0x531950:goto L531950;
case 0x531953:c.instructions+=5;goto B531953;
case 0x531955:c.instructions+=4;goto B531955;
case 0x531957:c.instructions+=3;goto B531957;
case 0x53195a:c.instructions+=2;goto B53195a;
case 0x53195c:c.instructions+=1;goto B53195c;
case 0x531961:goto L531961;
case 0x531962:c.instructions+=1;goto B531962;
case 0x531967:goto L531967;
case 0x531969:c.instructions+=3;goto B531969;
case 0x53196c:c.instructions+=2;goto B53196c;
case 0x53196e:c.instructions+=1;goto B53196e;
case 0x531970:goto L531970;
case 0x531971:c.instructions+=2;goto B531971;
case 0x531972:c.instructions+=1;goto B531972;
case 0x531980:goto L531980;
case 0x531981:c.instructions+=5;goto B531981;
case 0x531982:c.instructions+=4;goto B531982;
case 0x531984:c.instructions+=3;goto B531984;
case 0x531986:c.instructions+=2;goto B531986;
case 0x531988:c.instructions+=1;goto B531988;
case 0x53198a:goto L53198a;
case 0x531990:goto L531990;
case 0x531993:c.instructions+=5;goto B531993;
case 0x531995:c.instructions+=4;goto B531995;
case 0x531997:c.instructions+=3;goto B531997;
case 0x53199a:c.instructions+=2;goto B53199a;
case 0x53199c:c.instructions+=1;goto B53199c;
case 0x5319a1:goto L5319a1;
case 0x5319a2:c.instructions+=1;goto B5319a2;
case 0x5319a7:goto L5319a7;
case 0x5319a9:c.instructions+=3;goto B5319a9;
case 0x5319ac:c.instructions+=2;goto B5319ac;
case 0x5319ae:c.instructions+=1;goto B5319ae;
case 0x5319b0:goto L5319b0;
case 0x5319b1:c.instructions+=2;goto B5319b1;
case 0x5319b2:c.instructions+=1;goto B5319b2;
case 0x5319c0:goto L5319c0;
case 0x5319c2:c.instructions+=24;goto B5319c2;
case 0x5319c7:c.instructions+=23;goto B5319c7;
case 0x5319cd:c.instructions+=22;goto B5319cd;
case 0x5319ce:c.instructions+=21;goto B5319ce;
case 0x5319d5:c.instructions+=20;goto B5319d5;
case 0x5319d6:c.instructions+=19;goto B5319d6;
case 0x5319d7:c.instructions+=18;goto B5319d7;
case 0x5319d8:c.instructions+=17;goto B5319d8;
case 0x5319d9:c.instructions+=16;goto B5319d9;
case 0x5319db:c.instructions+=15;goto B5319db;
case 0x5319e0:c.instructions+=14;goto B5319e0;
case 0x5319e1:c.instructions+=13;goto B5319e1;
case 0x5319e5:c.instructions+=12;goto B5319e5;
case 0x5319e8:c.instructions+=11;goto B5319e8;
case 0x5319eb:c.instructions+=10;goto B5319eb;
case 0x5319f0:c.instructions+=9;goto B5319f0;
case 0x5319f5:c.instructions+=8;goto B5319f5;
case 0x5319fa:c.instructions+=7;goto B5319fa;
case 0x5319fc:c.instructions+=6;goto B5319fc;
case 0x5319ff:c.instructions+=5;goto B5319ff;
case 0x531a01:c.instructions+=4;goto B531a01;
case 0x531a02:c.instructions+=3;goto B531a02;
case 0x531a06:c.instructions+=2;goto B531a06;
case 0x531a0c:c.instructions+=1;goto B531a0c;
case 0x531a11:goto L531a11;
case 0x531a1b:c.instructions+=7;goto B531a1b;
case 0x531a21:c.instructions+=6;goto B531a21;
case 0x531a27:c.instructions+=5;goto B531a27;
case 0x531a2d:c.instructions+=4;goto B531a2d;
case 0x531a33:c.instructions+=3;goto B531a33;
case 0x531a36:c.instructions+=2;goto B531a36;
case 0x531a3b:c.instructions+=1;goto B531a3b;
case 0x531a40:goto L531a40;
case 0x531a46:c.instructions+=3;goto B531a46;
case 0x531a49:c.instructions+=2;goto B531a49;
case 0x531a4b:c.instructions+=1;goto B531a4b;
case 0x531a4d:goto L531a4d;
case 0x531a4f:c.instructions+=1;goto B531a4f;
case 0x531a51:goto L531a51;
case 0x531a54:c.instructions+=3;goto B531a54;
case 0x531a56:c.instructions+=2;goto B531a56;
case 0x531a59:c.instructions+=1;goto B531a59;
case 0x531a5b:goto L531a5b;
case 0x531a5e:c.instructions+=1;goto B531a5e;
case 0x531a61:goto L531a61;
case 0x531a64:c.instructions+=3;goto B531a64;
case 0x531a66:c.instructions+=2;goto B531a66;
case 0x531a69:c.instructions+=1;goto B531a69;
case 0x531a6b:goto L531a6b;
case 0x531a71:c.instructions+=3;goto B531a71;
case 0x531a73:c.instructions+=2;goto B531a73;
case 0x531a76:c.instructions+=1;goto B531a76;
case 0x531a78:goto L531a78;
case 0x531a7b:c.instructions+=1;goto B531a7b;
case 0x531a7e:goto L531a7e;
case 0x531a81:c.instructions+=2;goto B531a81;
case 0x531a83:c.instructions+=1;goto B531a83;
case 0x531a89:goto L531a89;
case 0x531a8f:c.instructions+=1;goto B531a8f;
case 0x531a91:goto L531a91;
case 0x531a97:goto L531a97;
case 0x531a9d:goto L531a9d;
case 0x531aa3:c.instructions+=3;goto B531aa3;
case 0x531aa6:c.instructions+=2;goto B531aa6;
case 0x531aa8:c.instructions+=1;goto B531aa8;
case 0x531aaa:goto L531aaa;
case 0x531aac:c.instructions+=1;goto B531aac;
case 0x531aae:goto L531aae;
case 0x531ab1:c.instructions+=3;goto B531ab1;
case 0x531ab3:c.instructions+=2;goto B531ab3;
case 0x531ab6:c.instructions+=1;goto B531ab6;
case 0x531ab8:goto L531ab8;
case 0x531abb:goto L531abb;
case 0x531abe:c.instructions+=2;goto B531abe;
case 0x531ac1:c.instructions+=1;goto B531ac1;
case 0x531ac3:goto L531ac3;
case 0x531ac9:c.instructions+=3;goto B531ac9;
case 0x531acb:c.instructions+=2;goto B531acb;
case 0x531ace:c.instructions+=1;goto B531ace;
case 0x531ad0:goto L531ad0;
case 0x531ad3:goto L531ad3;
case 0x531ad6:c.instructions+=1;goto B531ad6;
case 0x531adc:goto L531adc;
case 0x531ae2:c.instructions+=1;goto B531ae2;
case 0x531ae4:goto L531ae4;
case 0x531aea:goto L531aea;
case 0x531af0:goto L531af0;
case 0x531af6:c.instructions+=3;goto B531af6;
case 0x531af9:c.instructions+=2;goto B531af9;
case 0x531afb:c.instructions+=1;goto B531afb;
case 0x531afd:goto L531afd;
case 0x531aff:c.instructions+=1;goto B531aff;
case 0x531b01:goto L531b01;
case 0x531b04:c.instructions+=3;goto B531b04;
case 0x531b06:c.instructions+=2;goto B531b06;
case 0x531b09:c.instructions+=1;goto B531b09;
case 0x531b0b:goto L531b0b;
case 0x531b0e:goto L531b0e;
case 0x531b11:c.instructions+=2;goto B531b11;
case 0x531b14:c.instructions+=1;goto B531b14;
case 0x531b16:goto L531b16;
case 0x531b1c:c.instructions+=3;goto B531b1c;
case 0x531b1e:c.instructions+=2;goto B531b1e;
case 0x531b21:c.instructions+=1;goto B531b21;
case 0x531b23:goto L531b23;
case 0x531b26:goto L531b26;
case 0x531b29:c.instructions+=1;goto B531b29;
case 0x531b2f:goto L531b2f;
case 0x531b35:c.instructions+=1;goto B531b35;
case 0x531b37:goto L531b37;
case 0x531b3d:goto L531b3d;
case 0x531b43:goto L531b43;
case 0x531b49:c.instructions+=3;goto B531b49;
case 0x531b4c:c.instructions+=2;goto B531b4c;
case 0x531b4e:c.instructions+=1;goto B531b4e;
case 0x531b50:goto L531b50;
case 0x531b52:c.instructions+=1;goto B531b52;
case 0x531b54:goto L531b54;
case 0x531b57:c.instructions+=3;goto B531b57;
case 0x531b59:c.instructions+=2;goto B531b59;
case 0x531b5c:c.instructions+=1;goto B531b5c;
case 0x531b5e:goto L531b5e;
case 0x531b61:goto L531b61;
case 0x531b64:c.instructions+=2;goto B531b64;
case 0x531b67:c.instructions+=1;goto B531b67;
case 0x531b69:goto L531b69;
case 0x531b6f:c.instructions+=3;goto B531b6f;
case 0x531b71:c.instructions+=2;goto B531b71;
case 0x531b74:c.instructions+=1;goto B531b74;
case 0x531b76:goto L531b76;
case 0x531b79:goto L531b79;
case 0x531b7c:c.instructions+=1;goto B531b7c;
case 0x531b82:goto L531b82;
case 0x531b88:c.instructions+=1;goto B531b88;
case 0x531b8a:goto L531b8a;
case 0x531b90:goto L531b90;
case 0x531b96:goto L531b96;
case 0x531b9b:c.instructions+=2;goto B531b9b;
case 0x531b9c:c.instructions+=1;goto B531b9c;
case 0x531ba2:goto L531ba2;
case 0x531ba6:c.instructions+=8;goto B531ba6;
case 0x531ba7:c.instructions+=7;goto B531ba7;
case 0x531ba9:c.instructions+=6;goto B531ba9;
case 0x531baa:c.instructions+=5;goto B531baa;
case 0x531bab:c.instructions+=4;goto B531bab;
case 0x531bac:c.instructions+=3;goto B531bac;
case 0x531bb3:c.instructions+=2;goto B531bb3;
case 0x531bb6:c.instructions+=1;goto B531bb6;
case 0x531bc0:goto L531bc0;
case 0x531bc1:c.instructions+=2;goto B531bc1;
case 0x531bc3:c.instructions+=1;goto B531bc3;
case 0x531bc8:goto L531bc8;
case 0x531bcd:c.instructions+=1;goto B531bcd;
case 0x531bcf:goto L531bcf;
case 0x531bd0:c.instructions+=1;goto B531bd0;
case 0x531bd5:goto L531bd5;
case 0x531bd8:goto L531bd8;
case 0x531bda:c.instructions+=2;goto B531bda;
case 0x531bdb:c.instructions+=1;goto B531bdb;
case 0x531be0:goto L531be0;
case 0x531be2:c.instructions+=13;goto B531be2;
case 0x531be7:c.instructions+=12;goto B531be7;
case 0x531bed:c.instructions+=11;goto B531bed;
case 0x531bee:c.instructions+=10;goto B531bee;
case 0x531bf5:c.instructions+=9;goto B531bf5;
case 0x531bf6:c.instructions+=8;goto B531bf6;
case 0x531bf7:c.instructions+=7;goto B531bf7;
case 0x531bf9:c.instructions+=6;goto B531bf9;
case 0x531bfd:c.instructions+=5;goto B531bfd;
case 0x531c03:c.instructions+=4;goto B531c03;
case 0x531c09:c.instructions+=3;goto B531c09;
case 0x531c0b:c.instructions+=2;goto B531c0b;
case 0x531c13:c.instructions+=1;goto B531c13;
case 0x531c15:goto L531c15;
case 0x531c1a:c.instructions+=2;goto B531c1a;
case 0x531c1b:c.instructions+=1;goto B531c1b;
case 0x531c20:goto L531c20;
case 0x531c26:c.instructions+=2;goto B531c26;
case 0x531c28:c.instructions+=1;goto B531c28;
case 0x531c2a:goto L531c2a;
case 0x531c2d:c.instructions+=3;goto B531c2d;
case 0x531c33:c.instructions+=2;goto B531c33;
case 0x531c39:c.instructions+=1;goto B531c39;
case 0x531c3b:goto L531c3b;
case 0x531c3e:c.instructions+=1;goto B531c3e;
case 0x531c44:goto L531c44;
case 0x531c47:c.instructions+=2;goto B531c47;
case 0x531c49:c.instructions+=1;goto B531c49;
case 0x531c4b:goto L531c4b;
case 0x531c4e:c.instructions+=1;goto B531c4e;
case 0x531c51:goto L531c51;
case 0x531c54:c.instructions+=2;goto B531c54;
case 0x531c56:c.instructions+=1;goto B531c56;
case 0x531c58:goto L531c58;
case 0x531c5b:c.instructions+=1;goto B531c5b;
case 0x531c5e:goto L531c5e;
case 0x531c61:c.instructions+=2;goto B531c61;
case 0x531c64:c.instructions+=1;goto B531c64;
case 0x531c6a:goto L531c6a;
case 0x531c70:c.instructions+=2;goto B531c70;
case 0x531c72:c.instructions+=1;goto B531c72;
case 0x531c74:goto L531c74;
case 0x531c75:goto L531c75;
case 0x531c7b:c.instructions+=2;goto B531c7b;
case 0x531c81:c.instructions+=1;goto B531c81;
case 0x531c86:goto L531c86;
case 0x531c8b:c.instructions+=6;goto B531c8b;
case 0x531c90:c.instructions+=5;goto B531c90;
case 0x531c92:c.instructions+=4;goto B531c92;
case 0x531c95:c.instructions+=3;goto B531c95;
case 0x531c96:c.instructions+=2;goto B531c96;
case 0x531c9b:c.instructions+=1;goto B531c9b;
case 0x531ca0:goto L531ca0;
case 0x531ca4:c.instructions+=5;goto B531ca4;
case 0x531caa:c.instructions+=4;goto B531caa;
case 0x531cab:c.instructions+=3;goto B531cab;
case 0x531cb2:c.instructions+=2;goto B531cb2;
case 0x531cb5:c.instructions+=1;goto B531cb5;
case 0x531cc0:goto L531cc0;
case 0x531cc2:c.instructions+=11;goto B531cc2;
case 0x531cc7:c.instructions+=10;goto B531cc7;
case 0x531ccd:c.instructions+=9;goto B531ccd;
case 0x531cce:c.instructions+=8;goto B531cce;
case 0x531cd5:c.instructions+=7;goto B531cd5;
case 0x531cd6:c.instructions+=6;goto B531cd6;
case 0x531cd7:c.instructions+=5;goto B531cd7;
case 0x531cd9:c.instructions+=4;goto B531cd9;
case 0x531cdd:c.instructions+=3;goto B531cdd;
case 0x531ce3:c.instructions+=2;goto B531ce3;
case 0x531ceb:c.instructions+=1;goto B531ceb;
case 0x531cf0:goto L531cf0;
case 0x531cf5:c.instructions+=6;goto B531cf5;
case 0x531cf7:c.instructions+=5;goto B531cf7;
case 0x531cfc:c.instructions+=4;goto B531cfc;
case 0x531cff:c.instructions+=3;goto B531cff;
case 0x531d00:c.instructions+=2;goto B531d00;
case 0x531d08:c.instructions+=1;goto B531d08;
case 0x531d0d:goto L531d0d;
case 0x531d11:c.instructions+=4;goto B531d11;
case 0x531d12:c.instructions+=3;goto B531d12;
case 0x531d19:c.instructions+=2;goto B531d19;
case 0x531d1c:c.instructions+=1;goto B531d1c;
case 0x531d20:goto L531d20;
case 0x531d22:c.instructions+=14;goto B531d22;
case 0x531d27:c.instructions+=13;goto B531d27;
case 0x531d2d:c.instructions+=12;goto B531d2d;
case 0x531d2e:c.instructions+=11;goto B531d2e;
case 0x531d35:c.instructions+=10;goto B531d35;
case 0x531d36:c.instructions+=9;goto B531d36;
case 0x531d37:c.instructions+=8;goto B531d37;
case 0x531d3c:c.instructions+=7;goto B531d3c;
case 0x531d41:c.instructions+=6;goto B531d41;
case 0x531d43:c.instructions+=5;goto B531d43;
case 0x531d45:c.instructions+=4;goto B531d45;
case 0x531d47:c.instructions+=3;goto B531d47;
case 0x531d48:c.instructions+=2;goto B531d48;
case 0x531d4c:c.instructions+=1;goto B531d4c;
case 0x531d51:goto L531d51;
case 0x531d56:c.instructions+=7;goto B531d56;
case 0x531d5b:c.instructions+=6;goto B531d5b;
case 0x531d5d:c.instructions+=5;goto B531d5d;
case 0x531d62:c.instructions+=4;goto B531d62;
case 0x531d68:c.instructions+=3;goto B531d68;
case 0x531d69:c.instructions+=2;goto B531d69;
case 0x531d71:c.instructions+=1;goto B531d71;
case 0x531d76:goto L531d76;
case 0x531d7b:c.instructions+=7;goto B531d7b;
case 0x531d80:c.instructions+=6;goto B531d80;
case 0x531d82:c.instructions+=5;goto B531d82;
case 0x531d87:c.instructions+=4;goto B531d87;
case 0x531d8d:c.instructions+=3;goto B531d8d;
case 0x531d8e:c.instructions+=2;goto B531d8e;
case 0x531d93:c.instructions+=1;goto B531d93;
case 0x531d98:goto L531d98;
case 0x531d9d:c.instructions+=7;goto B531d9d;
case 0x531da2:c.instructions+=6;goto B531da2;
case 0x531da4:c.instructions+=5;goto B531da4;
case 0x531da9:c.instructions+=4;goto B531da9;
case 0x531daf:c.instructions+=3;goto B531daf;
case 0x531db0:c.instructions+=2;goto B531db0;
case 0x531db5:c.instructions+=1;goto B531db5;
case 0x531dba:goto L531dba;
case 0x531dbf:c.instructions+=7;goto B531dbf;
case 0x531dc4:c.instructions+=6;goto B531dc4;
case 0x531dc6:c.instructions+=5;goto B531dc6;
case 0x531dc8:c.instructions+=4;goto B531dc8;
case 0x531dce:c.instructions+=3;goto B531dce;
case 0x531dcf:c.instructions+=2;goto B531dcf;
case 0x531dd4:c.instructions+=1;goto B531dd4;
case 0x531dd9:goto L531dd9;
case 0x531ddd:c.instructions+=5;goto B531ddd;
case 0x531ddf:c.instructions+=4;goto B531ddf;
case 0x531de0:c.instructions+=3;goto B531de0;
case 0x531de7:c.instructions+=2;goto B531de7;
case 0x531dea:c.instructions+=1;goto B531dea;
case 0x531df0:goto L531df0;
case 0x531df6:c.instructions+=4;goto B531df6;
case 0x531dfb:c.instructions+=3;goto B531dfb;
case 0x531dfd:c.instructions+=2;goto B531dfd;
case 0x531e01:c.instructions+=1;goto B531e01;
case 0x531e07:goto L531e07;
case 0x531e0c:c.instructions+=2;goto B531e0c;
case 0x531e0e:c.instructions+=1;goto B531e0e;
case 0x531e10:goto L531e10;
case 0x531e15:c.instructions+=2;goto B531e15;
case 0x531e17:c.instructions+=1;goto B531e17;
case 0x531e19:goto L531e19;
case 0x531e1c:c.instructions+=1;goto B531e1c;
case 0x531e1e:goto L531e1e;
case 0x531e24:goto L531e24;
case 0x531e25:c.instructions+=5;goto B531e25;
case 0x531e26:c.instructions+=4;goto B531e26;
case 0x531e30:c.instructions+=3;goto B531e30;
case 0x531e35:c.instructions+=2;goto B531e35;
case 0x531e37:c.instructions+=1;goto B531e37;
case 0x531e3c:goto L531e3c;
case 0x531e3e:c.instructions+=1;goto B531e3e;
case 0x531e43:goto L531e43;
case 0x531e45:c.instructions+=1;goto B531e45;
case 0x531e4a:goto L531e4a;
case 0x531e4e:c.instructions+=4;goto B531e4e;
case 0x531e51:c.instructions+=3;goto B531e51;
case 0x531e54:c.instructions+=2;goto B531e54;
case 0x531e56:c.instructions+=1;goto B531e56;
case 0x531e58:goto L531e58;
case 0x531e5d:goto L531e5d;
case 0x531e5f:c.instructions+=1;goto B531e5f;
case 0x531e64:goto L531e64;
case 0x531e65:c.instructions+=4;goto B531e65;
case 0x531e69:c.instructions+=3;goto B531e69;
case 0x531e6c:c.instructions+=2;goto B531e6c;
case 0x531e6d:c.instructions+=1;goto B531e6d;
case 0x531e72:goto L531e72;
case 0x531e76:c.instructions+=7;goto B531e76;
case 0x531e79:c.instructions+=6;goto B531e79;
case 0x531e7d:c.instructions+=5;goto B531e7d;
case 0x531e80:c.instructions+=4;goto B531e80;
case 0x531e85:c.instructions+=3;goto B531e85;
case 0x531e87:c.instructions+=2;goto B531e87;
case 0x531e8b:c.instructions+=1;goto B531e8b;
case 0x531e8d:goto L531e8d;
case 0x531e90:c.instructions+=2;goto B531e90;
case 0x531e92:c.instructions+=1;goto B531e92;
case 0x531e94:goto L531e94;
case 0x531e99:c.instructions+=2;goto B531e99;
case 0x531e9b:c.instructions+=1;goto B531e9b;
case 0x531e9d:goto L531e9d;
case 0x531e9f:c.instructions+=1;goto B531e9f;
case 0x531ea4:goto L531ea4;
case 0x531ea7:c.instructions+=2;goto B531ea7;
case 0x531ea8:c.instructions+=1;goto B531ea8;
case 0x531ead:goto L531ead;
case 0x531eb1:goto L531eb1;
case 0x531eb4:c.instructions+=7;goto B531eb4;
case 0x531eb7:c.instructions+=6;goto B531eb7;
case 0x531eb9:c.instructions+=5;goto B531eb9;
case 0x531ebc:c.instructions+=4;goto B531ebc;
case 0x531ebd:c.instructions+=3;goto B531ebd;
case 0x531ebe:c.instructions+=2;goto B531ebe;
case 0x531ec3:c.instructions+=1;goto B531ec3;
case 0x531ec8:goto L531ec8;
case 0x531ecb:c.instructions+=1;goto B531ecb;
case 0x531ed0:goto L531ed0;
case 0x531ed2:goto L531ed2;
case 0x531ed5:c.instructions+=2;goto B531ed5;
case 0x531ed7:c.instructions+=1;goto B531ed7;
case 0x531ed9:goto L531ed9;
case 0x531edc:c.instructions+=1;goto B531edc;
case 0x531ee1:goto L531ee1;
case 0x531ee3:c.instructions+=1;goto B531ee3;
case 0x531ee5:goto L531ee5;
case 0x531ee9:c.instructions+=5;goto B531ee9;
case 0x531eec:c.instructions+=4;goto B531eec;
case 0x531eef:c.instructions+=3;goto B531eef;
case 0x531ef0:c.instructions+=2;goto B531ef0;
case 0x531ef3:c.instructions+=1;goto B531ef3;
case 0x531ef8:goto L531ef8;
case 0x531efc:c.instructions+=6;goto B531efc;
case 0x531eff:c.instructions+=5;goto B531eff;
case 0x531f02:c.instructions+=4;goto B531f02;
case 0x531f04:c.instructions+=3;goto B531f04;
case 0x531f05:c.instructions+=2;goto B531f05;
case 0x531f09:c.instructions+=1;goto B531f09;
case 0x531f0e:goto L531f0e;
case 0x531f12:c.instructions+=3;goto B531f12;
case 0x531f15:c.instructions+=2;goto B531f15;
case 0x531f17:c.instructions+=1;goto B531f17;
case 0x531f19:goto L531f19;
case 0x531f1b:goto L531f1b;
case 0x531f1f:c.instructions+=3;goto B531f1f;
case 0x531f22:c.instructions+=2;goto B531f22;
case 0x531f24:c.instructions+=1;goto B531f24;
case 0x531f26:goto L531f26;
case 0x531f29:c.instructions+=2;goto B531f29;
case 0x531f2b:c.instructions+=1;goto B531f2b;
case 0x531f30:goto L531f30;
case 0x531f34:c.instructions+=1;goto B531f34;
case 0x531f36:goto L531f36;
case 0x531f39:c.instructions+=2;goto B531f39;
case 0x531f3b:c.instructions+=1;goto B531f3b;
case 0x531f3d:goto L531f3d;
case 0x531f42:c.instructions+=7;goto B531f42;
case 0x531f43:c.instructions+=6;goto B531f43;
case 0x531f44:c.instructions+=5;goto B531f44;
case 0x531f48:c.instructions+=4;goto B531f48;
case 0x531f4d:c.instructions+=3;goto B531f4d;
case 0x531f4e:c.instructions+=2;goto B531f4e;
case 0x531f53:c.instructions+=1;goto B531f53;
case 0x531f58:goto L531f58;
case 0x531f5c:c.instructions+=5;goto B531f5c;
case 0x531f5f:c.instructions+=4;goto B531f5f;
case 0x531f62:c.instructions+=3;goto B531f62;
case 0x531f65:c.instructions+=2;goto B531f65;
case 0x531f67:c.instructions+=1;goto B531f67;
case 0x531f6c:goto L531f6c;
case 0x531f6d:c.instructions+=4;goto B531f6d;
case 0x531f71:c.instructions+=3;goto B531f71;
case 0x531f72:c.instructions+=2;goto B531f72;
case 0x531f73:c.instructions+=1;goto B531f73;
case 0x531f78:goto L531f78;
case 0x531f7b:goto L531f7b;
case 0x531f7f:goto L531f7f;
case 0x531f82:c.instructions+=2;goto B531f82;
case 0x531f84:c.instructions+=1;goto B531f84;
case 0x531f86:goto L531f86;
case 0x531f88:c.instructions+=1;goto B531f88;
case 0x531f8a:goto L531f8a;
case 0x531f8d:c.instructions+=5;goto B531f8d;
case 0x531f93:c.instructions+=4;goto B531f93;
case 0x531f94:c.instructions+=3;goto B531f94;
case 0x531f99:c.instructions+=2;goto B531f99;
case 0x531f9a:c.instructions+=1;goto B531f9a;
case 0x531f9f:goto L531f9f;
case 0x531fa3:c.instructions+=4;goto B531fa3;
case 0x531fa5:c.instructions+=3;goto B531fa5;
case 0x531fa6:c.instructions+=2;goto B531fa6;
case 0x531fa7:c.instructions+=1;goto B531fa7;
case 0x531fa9:goto L531fa9;
case 0x531fae:goto L531fae;
case 0x531fb8:c.instructions+=3;goto B531fb8;
case 0x531fba:c.instructions+=2;goto B531fba;
case 0x531fc0:c.instructions+=1;goto B531fc0;
case 0x531fc1:goto L531fc1;
case 0x531fcb:goto L531fcb;
case 0x531fcd:c.instructions+=2;goto B531fcd;
case 0x531fd3:c.instructions+=1;goto B531fd3;
case 0x531fe0:goto L531fe0;
case 0x531fe1:c.instructions+=2;goto B531fe1;
case 0x531fe3:c.instructions+=1;goto B531fe3;
case 0x531fe8:goto L531fe8;
case 0x531fed:c.instructions+=1;goto B531fed;
case 0x531fef:goto L531fef;
case 0x531ff1:c.instructions+=3;goto B531ff1;
case 0x531ff3:c.instructions+=2;goto B531ff3;
case 0x531ff5:c.instructions+=1;goto B531ff5;
case 0x531ff7:goto L531ff7;
case 0x531ff8:c.instructions+=2;goto B531ff8;
case 0x531ffd:c.instructions+=1;goto B531ffd;
default:missing_instruction(c.pc);}
B531001:L531001:{c.instructions+=2;NFSU2_TR(0x531001);
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
B531004:{NFSU2_TR(0x531004);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B531010:L531010:{c.instructions+=3;NFSU2_TR(0x531010);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531011:{NFSU2_TR(0x531011);
__builtin_memmove((R+24),(R+4),4);
}
B531013:{NFSU2_TR(0x531013);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x531018ull));
{goto L531030;}
}
B531018:L531018:{c.instructions+=2;NFSU2_TR(0x531018);
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
B53101d:{NFSU2_TR(0x53101d);
if(r1(R+518)){{goto L531028;}}
}
B53101f:L53101f:{c.instructions+=2;NFSU2_TR(0x53101f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531020:{NFSU2_TR(0x531020);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x531025ull));
TAIL_STATIC(0x575630u,575);
}
B531025:L531025:{c.instructions+=1;NFSU2_TR(0x531025);
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
B531028:L531028:{c.instructions+=3;NFSU2_TR(0x531028);
__builtin_memmove((R+0),(R+24),4);
}
B53102a:{NFSU2_TR(0x53102a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53102b:{NFSU2_TR(0x53102b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B531030:L531030:{c.instructions+=3;NFSU2_TR(0x531030);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
w4(U+4,u32(0x78f544ull));
s4(u32(r4(U+0)),r4(U+4));
}
B531037:{NFSU2_TR(0x531037);
u8 U[4];
w4(U+0,u32(0x790b98ull));
s4(u32(r4(R+4)),r4(U+0));
}
B53103d:{NFSU2_TR(0x53103d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B531040:L531040:{c.instructions+=8;NFSU2_TR(0x531040);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531041:{NFSU2_TR(0x531041);
__builtin_memmove((R+24),(R+4),4);
}
B531043:{NFSU2_TR(0x531043);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B531046:{NFSU2_TR(0x531046);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B531049:{NFSU2_TR(0x531049);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53104a:{NFSU2_TR(0x53104a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53104b:{NFSU2_TR(0x53104b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53104c:{NFSU2_TR(0x53104c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x531051ull));
TAIL_STATIC(0x495590u,495);
}
B531051:L531051:{c.instructions+=5;NFSU2_TR(0x531051);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B531054:{NFSU2_TR(0x531054);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B531057:{NFSU2_TR(0x531057);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531058:{NFSU2_TR(0x531058);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531059:{NFSU2_TR(0x531059);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53105eull));
TAIL_STATIC(0x495590u,495);
}
B53105e:L53105e:{c.instructions+=5;NFSU2_TR(0x53105e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B531061:{NFSU2_TR(0x531061);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B531064:{NFSU2_TR(0x531064);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531065:{NFSU2_TR(0x531065);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531066:{NFSU2_TR(0x531066);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53106bull));
TAIL_STATIC(0x495590u,495);
}
B53106b:L53106b:{c.instructions+=7;NFSU2_TR(0x53106b);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B53106f:{NFSU2_TR(0x53106f);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B531073:{NFSU2_TR(0x531073);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B531076:{NFSU2_TR(0x531076);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B53107c:{NFSU2_TR(0x53107c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B53107e:{NFSU2_TR(0x53107e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B531081:{NFSU2_TR(0x531081);
if(r1(R+514)){{goto L53108b;}}
}
B531083:L531083:{c.instructions+=2;NFSU2_TR(0x531083);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B531085:{NFSU2_TR(0x531085);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B53108b:L53108b:{c.instructions+=13;NFSU2_TR(0x53108b);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B531091:{NFSU2_TR(0x531091);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B531094:{NFSU2_TR(0x531094);
__asm__ volatile(".byte 0xd8,0xf1":::"memory");
}
B531096:{NFSU2_TR(0x531096);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531097:{NFSU2_TR(0x531097);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B53109b:{NFSU2_TR(0x53109b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B53109d:{NFSU2_TR(0x53109d);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5310a1:{NFSU2_TR(0x5310a1);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5310a5:{NFSU2_TR(0x5310a5);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5310a9:{NFSU2_TR(0x5310a9);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5310ac:{NFSU2_TR(0x5310ac);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5310af:{NFSU2_TR(0x5310af);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5310b0:{NFSU2_TR(0x5310b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5310b5ull));
TAIL_STATIC(0x525db0u,525);
}
B5310b5:L5310b5:{c.instructions+=9;NFSU2_TR(0x5310b5);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5310b9:{NFSU2_TR(0x5310b9);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5310bd:{NFSU2_TR(0x5310bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5310c0:{NFSU2_TR(0x5310c0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5310c3:{NFSU2_TR(0x5310c3);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5310c7:{NFSU2_TR(0x5310c7);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5310ca:{NFSU2_TR(0x5310ca);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5310cd:{NFSU2_TR(0x5310cd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5310ce:{NFSU2_TR(0x5310ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5310d3ull));
TAIL_STATIC(0x525db0u,525);
}
B5310d3:L5310d3:{c.instructions+=9;NFSU2_TR(0x5310d3);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5310d7:{NFSU2_TR(0x5310d7);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5310db:{NFSU2_TR(0x5310db);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5310de:{NFSU2_TR(0x5310de);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5310e1:{NFSU2_TR(0x5310e1);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5310e5:{NFSU2_TR(0x5310e5);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5310e8:{NFSU2_TR(0x5310e8);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5310eb:{NFSU2_TR(0x5310eb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5310ec:{NFSU2_TR(0x5310ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5310f1ull));
TAIL_STATIC(0x525db0u,525);
}
B5310f1:L5310f1:{c.instructions+=9;NFSU2_TR(0x5310f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5310f4:{NFSU2_TR(0x5310f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5310f7:{NFSU2_TR(0x5310f7);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5310fb:{NFSU2_TR(0x5310fb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5310fc:{NFSU2_TR(0x5310fc);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B531100:{NFSU2_TR(0x531100);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531101:{NFSU2_TR(0x531101);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531102:{NFSU2_TR(0x531102);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B531106:{NFSU2_TR(0x531106);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53110bull));
TAIL_STATIC(0x51d070u,51d);
}
B53110b:L53110b:{c.instructions+=6;NFSU2_TR(0x53110b);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53110f:{NFSU2_TR(0x53110f);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B531113:{NFSU2_TR(0x531113);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531114:{NFSU2_TR(0x531114);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531115:{NFSU2_TR(0x531115);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531116:{NFSU2_TR(0x531116);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53111bull));
TAIL_STATIC(0x51d380u,51d);
}
B53111b:L53111b:{c.instructions+=9;NFSU2_TR(0x53111b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B53111e:{NFSU2_TR(0x53111e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B531121:{NFSU2_TR(0x531121);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B531125:{NFSU2_TR(0x531125);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531126:{NFSU2_TR(0x531126);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B53112a:{NFSU2_TR(0x53112a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53112b:{NFSU2_TR(0x53112b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53112c:{NFSU2_TR(0x53112c);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B531130:{NFSU2_TR(0x531130);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x531135ull));
TAIL_STATIC(0x51d170u,51d);
}
B531135:L531135:{c.instructions+=6;NFSU2_TR(0x531135);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B531139:{NFSU2_TR(0x531139);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53113d:{NFSU2_TR(0x53113d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53113e:{NFSU2_TR(0x53113e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53113f:{NFSU2_TR(0x53113f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531140:{NFSU2_TR(0x531140);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x531145ull));
TAIL_STATIC(0x51d2d0u,51d);
}
B531145:L531145:{c.instructions+=9;NFSU2_TR(0x531145);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B531148:{NFSU2_TR(0x531148);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53114b:{NFSU2_TR(0x53114b);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B53114f:{NFSU2_TR(0x53114f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531150:{NFSU2_TR(0x531150);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B531154:{NFSU2_TR(0x531154);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531155:{NFSU2_TR(0x531155);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531156:{NFSU2_TR(0x531156);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53115a:{NFSU2_TR(0x53115a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53115full));
TAIL_STATIC(0x51d070u,51d);
}
B53115f:L53115f:{c.instructions+=7;NFSU2_TR(0x53115f);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B531163:{NFSU2_TR(0x531163);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B531167:{NFSU2_TR(0x531167);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x44ull))));
}
B53116a:{NFSU2_TR(0x53116a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53116b:{NFSU2_TR(0x53116b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53116c:{NFSU2_TR(0x53116c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53116d:{NFSU2_TR(0x53116d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x531172ull));
TAIL_STATIC(0x51d380u,51d);
}
B531172:L531172:{c.instructions+=9;NFSU2_TR(0x531172);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B531175:{NFSU2_TR(0x531175);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B531178:{NFSU2_TR(0x531178);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B53117c:{NFSU2_TR(0x53117c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53117d:{NFSU2_TR(0x53117d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B531181:{NFSU2_TR(0x531181);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531182:{NFSU2_TR(0x531182);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531183:{NFSU2_TR(0x531183);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B531187:{NFSU2_TR(0x531187);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53118cull));
TAIL_STATIC(0x51d170u,51d);
}
B53118c:L53118c:{c.instructions+=6;NFSU2_TR(0x53118c);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B531190:{NFSU2_TR(0x531190);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B531194:{NFSU2_TR(0x531194);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531195:{NFSU2_TR(0x531195);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531196:{NFSU2_TR(0x531196);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531197:{NFSU2_TR(0x531197);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53119cull));
TAIL_STATIC(0x51d2d0u,51d);
}
B53119c:L53119c:{c.instructions+=9;NFSU2_TR(0x53119c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B53119f:{NFSU2_TR(0x53119f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5311a2:{NFSU2_TR(0x5311a2);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5311a6:{NFSU2_TR(0x5311a6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5311a7:{NFSU2_TR(0x5311a7);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5311ab:{NFSU2_TR(0x5311ab);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5311ac:{NFSU2_TR(0x5311ac);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5311ad:{NFSU2_TR(0x5311ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5311b1:{NFSU2_TR(0x5311b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5311b6ull));
TAIL_STATIC(0x51d070u,51d);
}
B5311b6:L5311b6:{c.instructions+=6;NFSU2_TR(0x5311b6);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5311ba:{NFSU2_TR(0x5311ba);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5311be:{NFSU2_TR(0x5311be);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5311bf:{NFSU2_TR(0x5311bf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5311c0:{NFSU2_TR(0x5311c0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5311c1:{NFSU2_TR(0x5311c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5311c6ull));
TAIL_STATIC(0x51d380u,51d);
}
B5311c6:L5311c6:{c.instructions+=9;NFSU2_TR(0x5311c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5311c9:{NFSU2_TR(0x5311c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5311cc:{NFSU2_TR(0x5311cc);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5311d0:{NFSU2_TR(0x5311d0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5311d1:{NFSU2_TR(0x5311d1);
u8 U[4];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5311d5:{NFSU2_TR(0x5311d5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5311d6:{NFSU2_TR(0x5311d6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5311d7:{NFSU2_TR(0x5311d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5311db:{NFSU2_TR(0x5311db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5311e0ull));
TAIL_STATIC(0x51d170u,51d);
}
B5311e0:L5311e0:{c.instructions+=7;NFSU2_TR(0x5311e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5311e4:{NFSU2_TR(0x5311e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5311e8:{NFSU2_TR(0x5311e8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x48ull))));
}
B5311eb:{NFSU2_TR(0x5311eb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5311ec:{NFSU2_TR(0x5311ec);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5311ed:{NFSU2_TR(0x5311ed);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5311ee:{NFSU2_TR(0x5311ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5311f3ull));
TAIL_STATIC(0x51d2d0u,51d);
}
B5311f3:L5311f3:{c.instructions+=7;NFSU2_TR(0x5311f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5311f6:{NFSU2_TR(0x5311f6);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5311fa:{NFSU2_TR(0x5311fa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5311fb:{NFSU2_TR(0x5311fb);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5311ff:{NFSU2_TR(0x5311ff);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531200:{NFSU2_TR(0x531200);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531201:{NFSU2_TR(0x531201);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x531206ull));
TAIL_STATIC(0x51d730u,51d);
}
B531206:L531206:{c.instructions+=7;NFSU2_TR(0x531206);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B531209:{NFSU2_TR(0x531209);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B53120d:{NFSU2_TR(0x53120d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53120e:{NFSU2_TR(0x53120e);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B531212:{NFSU2_TR(0x531212);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531213:{NFSU2_TR(0x531213);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531214:{NFSU2_TR(0x531214);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x531219ull));
TAIL_STATIC(0x51d730u,51d);
}
B531219:L531219:{c.instructions+=7;NFSU2_TR(0x531219);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53121c:{NFSU2_TR(0x53121c);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B531220:{NFSU2_TR(0x531220);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531221:{NFSU2_TR(0x531221);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B531225:{NFSU2_TR(0x531225);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531226:{NFSU2_TR(0x531226);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531227:{NFSU2_TR(0x531227);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53122cull));
TAIL_STATIC(0x51d070u,51d);
}
B53122c:L53122c:{c.instructions+=15;NFSU2_TR(0x53122c);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B531230:{NFSU2_TR(0x531230);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B531236:{NFSU2_TR(0x531236);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
}
B531239:{NFSU2_TR(0x531239);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B53123d:{NFSU2_TR(0x53123d);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B531241:{NFSU2_TR(0x531241);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B531244:{NFSU2_TR(0x531244);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B53124a:{NFSU2_TR(0x53124a);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B53124e:{NFSU2_TR(0x53124e);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B531252:{NFSU2_TR(0x531252);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B531258:{NFSU2_TR(0x531258);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B53125a:{NFSU2_TR(0x53125a);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B53125d:{NFSU2_TR(0x53125d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B531260:{NFSU2_TR(0x531260);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531261:{NFSU2_TR(0x531261);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x531266ull));
TAIL_STATIC(0x51d380u,51d);
}
B531266:L531266:{c.instructions+=4;NFSU2_TR(0x531266);
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
B531269:{NFSU2_TR(0x531269);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53126a:{NFSU2_TR(0x53126a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53126b:{NFSU2_TR(0x53126b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B531270:L531270:{c.instructions+=5;NFSU2_TR(0x531270);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B531273:{NFSU2_TR(0x531273);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531274:{NFSU2_TR(0x531274);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((R+28),(U+0),4);
}
B531277:{NFSU2_TR(0x531277);
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
B531279:{NFSU2_TR(0x531279);
if(r1(R+518)){{goto L5312b6;}}
}
B53127b:L53127b:{c.instructions+=4;NFSU2_TR(0x53127b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53127c:{NFSU2_TR(0x53127c);
__builtin_memmove((R+24),(R+0),4);
}
B53127e:{NFSU2_TR(0x53127e);
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
B531280:{NFSU2_TR(0x531280);
if(r1(R+518)){{goto L5312b5;}}
}
B531282:L531282:{c.instructions+=13;NFSU2_TR(0x531282);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B531285:{NFSU2_TR(0x531285);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B531288:{NFSU2_TR(0x531288);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B53128c:{NFSU2_TR(0x53128c);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B53128f:{NFSU2_TR(0x53128f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((R+4),(U+0),4);
}
B531292:{NFSU2_TR(0x531292);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B531296:{NFSU2_TR(0x531296);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B531299:{NFSU2_TR(0x531299);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B53129d:{NFSU2_TR(0x53129d);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5312a0:{NFSU2_TR(0x5312a0);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5312a4:{NFSU2_TR(0x5312a4);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5312a7:{NFSU2_TR(0x5312a7);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5312aa:{NFSU2_TR(0x5312aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5312afull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x531040u);}goto L531040;}
}
B5312af:L5312af:{c.instructions+=3;NFSU2_TR(0x5312af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5312b1:{NFSU2_TR(0x5312b1);
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
B5312b3:{NFSU2_TR(0x5312b3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x531282u);}goto L531282;}}
}
B5312b5:L5312b5:{c.instructions+=1;NFSU2_TR(0x5312b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5312b6:L5312b6:{c.instructions+=2;NFSU2_TR(0x5312b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5312b7:{NFSU2_TR(0x5312b7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5312c0:L5312c0:{c.instructions+=7;NFSU2_TR(0x5312c0);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x14ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x14ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5312c3:{NFSU2_TR(0x5312c3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5312c4:{NFSU2_TR(0x5312c4);
__builtin_memmove((R+24),(R+4),4);
}
B5312c6:{NFSU2_TR(0x5312c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5312c9:{NFSU2_TR(0x5312c9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5312cc:{NFSU2_TR(0x5312cc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5312cd:{NFSU2_TR(0x5312cd);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5312d0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5312d0:L5312d0:{c.instructions+=16;NFSU2_TR(0x5312d0);
{u32 ea_=u32(r4(R+24)+u32(124u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5312d3:{NFSU2_TR(0x5312d3);
{u32 ea_=u32(r4(R+24)+u32(128u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5312d9:{NFSU2_TR(0x5312d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B5312dc:{NFSU2_TR(0x5312dc);
{u32 ea_=u32(r4(R+24)+u32(120u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5312df:{NFSU2_TR(0x5312df);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5312e3:{NFSU2_TR(0x5312e3);
{u32 ea_=u32(r4(R+24)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5312e9:{NFSU2_TR(0x5312e9);
{u32 ea_=u32(r4(R+24)+u32(140u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5312ef:{NFSU2_TR(0x5312ef);
{u32 ea_=u32(r4(R+24)+u32(132u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5312f5:{NFSU2_TR(0x5312f5);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5312f9:{NFSU2_TR(0x5312f9);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5312fd:{NFSU2_TR(0x5312fd);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B531300:{NFSU2_TR(0x531300);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B531304:{NFSU2_TR(0x531304);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B531308:{NFSU2_TR(0x531308);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B53130b:{NFSU2_TR(0x53130b);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B53130e:{NFSU2_TR(0x53130e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x531313ull));
TAIL_STATIC(0x43e6d0u,43e);
}
B531313:L531313:{c.instructions+=18;NFSU2_TR(0x531313);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B531317:{NFSU2_TR(0x531317);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53131d:{NFSU2_TR(0x53131d);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B531320:{NFSU2_TR(0x531320);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B531323:{NFSU2_TR(0x531323);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B531327:{NFSU2_TR(0x531327);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B53132a:{NFSU2_TR(0x53132a);
__builtin_memmove((R+28),(R+0),4);
}
B53132c:{NFSU2_TR(0x53132c);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B53132e:{NFSU2_TR(0x53132e);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B531330:{NFSU2_TR(0x531330);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B531332:{NFSU2_TR(0x531332);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B531334:{NFSU2_TR(0x531334);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B531336:{NFSU2_TR(0x531336);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B531338:{NFSU2_TR(0x531338);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B53133a:{NFSU2_TR(0x53133a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B53133c:{NFSU2_TR(0x53133c);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B53133f:{NFSU2_TR(0x53133f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531340:{NFSU2_TR(0x531340);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x531345ull));
TAIL_STATIC(0x495590u,495);
}
B531345:L531345:{c.instructions+=9;NFSU2_TR(0x531345);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53134b:{NFSU2_TR(0x53134b);
w4(R+8,u32(r2(R+28)));
}
B53134e:{NFSU2_TR(0x53134e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B531352:{NFSU2_TR(0x531352);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B531355:{NFSU2_TR(0x531355);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B531359:{NFSU2_TR(0x531359);
{u32 ea_=u32(u32(7881288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B53135f:{NFSU2_TR(0x53135f);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B531362:{NFSU2_TR(0x531362);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531363:{NFSU2_TR(0x531363);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x531368ull));
TAIL_STATIC(0x51ced0u,51c);
}
B531368:L531368:{c.instructions+=28;NFSU2_TR(0x531368);
{u32 ea_=u32(r4(R+24)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B53136e:{NFSU2_TR(0x53136e);
{u32 ea_=u32(r4(R+24)+u32(120u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B531371:{NFSU2_TR(0x531371);
{u32 ea_=u32(r4(R+24)+u32(140u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B531377:{NFSU2_TR(0x531377);
{u32 ea_=u32(r4(R+24)+u32(132u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B53137d:{NFSU2_TR(0x53137d);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B53137f:{NFSU2_TR(0x53137f);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B531383:{NFSU2_TR(0x531383);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B531386:{NFSU2_TR(0x531386);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B531389:{NFSU2_TR(0x531389);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B53138b:{NFSU2_TR(0x53138b);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B53138e:{NFSU2_TR(0x53138e);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B531391:{NFSU2_TR(0x531391);
__asm__ volatile(".byte 0xde,0xc2":::"memory");
}
B531393:{NFSU2_TR(0x531393);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B531395:{NFSU2_TR(0x531395);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B53139b:{NFSU2_TR(0x53139b);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B53139f:{NFSU2_TR(0x53139f);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5313a3:{NFSU2_TR(0x5313a3);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B5313a5:{NFSU2_TR(0x5313a5);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5313a8:{NFSU2_TR(0x5313a8);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5313ab:{NFSU2_TR(0x5313ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5313b1:{NFSU2_TR(0x5313b1);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5313b3:{NFSU2_TR(0x5313b3);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5313b6:{NFSU2_TR(0x5313b6);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5313b9:{NFSU2_TR(0x5313b9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5313bb:{NFSU2_TR(0x5313bb);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5313c1:{NFSU2_TR(0x5313c1);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5313c4:{NFSU2_TR(0x5313c4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5313c5:{NFSU2_TR(0x5313c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5313caull));
TAIL_STATIC(0x51d4d0u,51d);
}
B5313ca:L5313ca:{c.instructions+=15;NFSU2_TR(0x5313ca);
{u32 ea_=u32(r4(R+24)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5313cd:{NFSU2_TR(0x5313cd);
{u32 ea_=u32(r4(R+24)+u32(132u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5313d3:{NFSU2_TR(0x5313d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5313d6:{NFSU2_TR(0x5313d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5313dc:{NFSU2_TR(0x5313dc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5313dd:{NFSU2_TR(0x5313dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5313de:{NFSU2_TR(0x5313de);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5313e1:{NFSU2_TR(0x5313e1);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5313e4:{NFSU2_TR(0x5313e4);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5313e8:{NFSU2_TR(0x5313e8);
{u32 ea_=u32(r4(R+24)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5313eb:{NFSU2_TR(0x5313eb);
{u32 ea_=u32(r4(R+24)+u32(120u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5313ee:{NFSU2_TR(0x5313ee);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5313f1:{NFSU2_TR(0x5313f1);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5313f4:{NFSU2_TR(0x5313f4);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5313f8:{NFSU2_TR(0x5313f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5313fdull));
TAIL_STATIC(0x525db0u,525);
}
B5313fd:L5313fd:{c.instructions+=7;NFSU2_TR(0x5313fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B531403:{NFSU2_TR(0x531403);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B531407:{NFSU2_TR(0x531407);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531408:{NFSU2_TR(0x531408);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B53140c:{NFSU2_TR(0x53140c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53140d:{NFSU2_TR(0x53140d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53140e:{NFSU2_TR(0x53140e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x531413ull));
TAIL_STATIC(0x51d620u,51d);
}
B531413:L531413:{c.instructions+=9;NFSU2_TR(0x531413);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B531417:{NFSU2_TR(0x531417);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53141b:{NFSU2_TR(0x53141b);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B531421:{NFSU2_TR(0x531421);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B531424:{NFSU2_TR(0x531424);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531425:{NFSU2_TR(0x531425);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531426:{NFSU2_TR(0x531426);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B531429:{NFSU2_TR(0x531429);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53142a:{NFSU2_TR(0x53142a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53142full));
TAIL_STATIC(0x51d4d0u,51d);
}
B53142f:L53142f:{c.instructions+=9;NFSU2_TR(0x53142f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B531435:{NFSU2_TR(0x531435);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B531438:{NFSU2_TR(0x531438);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B53143c:{NFSU2_TR(0x53143c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53143d:{NFSU2_TR(0x53143d);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B531441:{NFSU2_TR(0x531441);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531442:{NFSU2_TR(0x531442);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531443:{NFSU2_TR(0x531443);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B531447:{NFSU2_TR(0x531447);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53144cull));
TAIL_STATIC(0x51d170u,51d);
}
B53144c:L53144c:{c.instructions+=6;NFSU2_TR(0x53144c);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B531450:{NFSU2_TR(0x531450);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B531454:{NFSU2_TR(0x531454);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531455:{NFSU2_TR(0x531455);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531456:{NFSU2_TR(0x531456);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531457:{NFSU2_TR(0x531457);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53145cull));
TAIL_STATIC(0x51d2d0u,51d);
}
B53145c:L53145c:{c.instructions+=5;NFSU2_TR(0x53145c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53145f:{NFSU2_TR(0x53145f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B531465:{NFSU2_TR(0x531465);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531466:{NFSU2_TR(0x531466);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531467:{NFSU2_TR(0x531467);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53146cull));
TAIL_STATIC(0x495590u,495);
}
B53146c:L53146c:{c.instructions+=9;NFSU2_TR(0x53146c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B531472:{NFSU2_TR(0x531472);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B531475:{NFSU2_TR(0x531475);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B531479:{NFSU2_TR(0x531479);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53147a:{NFSU2_TR(0x53147a);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B53147e:{NFSU2_TR(0x53147e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53147f:{NFSU2_TR(0x53147f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531480:{NFSU2_TR(0x531480);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B531484:{NFSU2_TR(0x531484);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x531489ull));
TAIL_STATIC(0x51d070u,51d);
}
B531489:L531489:{c.instructions+=6;NFSU2_TR(0x531489);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53148d:{NFSU2_TR(0x53148d);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B531491:{NFSU2_TR(0x531491);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531492:{NFSU2_TR(0x531492);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531493:{NFSU2_TR(0x531493);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531494:{NFSU2_TR(0x531494);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x531499ull));
TAIL_STATIC(0x51d380u,51d);
}
B531499:L531499:{c.instructions+=8;NFSU2_TR(0x531499);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B53149f:{NFSU2_TR(0x53149f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x44ull))));
}
B5314a2:{NFSU2_TR(0x5314a2);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5314a6:{NFSU2_TR(0x5314a6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5314a7:{NFSU2_TR(0x5314a7);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5314ab:{NFSU2_TR(0x5314ab);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5314ac:{NFSU2_TR(0x5314ac);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5314ad:{NFSU2_TR(0x5314ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5314b2ull));
TAIL_STATIC(0x51d620u,51d);
}
B5314b2:L5314b2:{c.instructions+=8;NFSU2_TR(0x5314b2);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5314b6:{NFSU2_TR(0x5314b6);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5314bc:{NFSU2_TR(0x5314bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5314c0:{NFSU2_TR(0x5314c0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5314c3:{NFSU2_TR(0x5314c3);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5314c6:{NFSU2_TR(0x5314c6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5314c7:{NFSU2_TR(0x5314c7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5314c8:{NFSU2_TR(0x5314c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5314cdull));
TAIL_STATIC(0x51d4d0u,51d);
}
B5314cd:L5314cd:{c.instructions+=7;NFSU2_TR(0x5314cd);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5314d1:{NFSU2_TR(0x5314d1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5314d5:{NFSU2_TR(0x5314d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5314db:{NFSU2_TR(0x5314db);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5314dc:{NFSU2_TR(0x5314dc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5314dd:{NFSU2_TR(0x5314dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5314de:{NFSU2_TR(0x5314de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5314e3ull));
TAIL_STATIC(0x51d4d0u,51d);
}
B5314e3:L5314e3:{c.instructions+=5;NFSU2_TR(0x5314e3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B5314e6:{NFSU2_TR(0x5314e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5314e7:{NFSU2_TR(0x5314e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5314e8:{NFSU2_TR(0x5314e8);
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
B5314eb:{NFSU2_TR(0x5314eb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5314f0:L5314f0:{c.instructions+=8;NFSU2_TR(0x5314f0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5314f1:{NFSU2_TR(0x5314f1);
{u32 ea_=u32(u32(8872940u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5314f7:{NFSU2_TR(0x5314f7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5314f8:{NFSU2_TR(0x5314f8);
__builtin_memmove((R+24),(R+4),4);
}
B5314fa:{NFSU2_TR(0x5314fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B531500:{NFSU2_TR(0x531500);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B531504:{NFSU2_TR(0x531504);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531505:{NFSU2_TR(0x531505);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53150aull));
TAIL_STATIC(0x52d100u,52d);
}
B53150a:L53150a:{c.instructions+=3;NFSU2_TR(0x53150a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53150d:{NFSU2_TR(0x53150d);
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
B53150f:{NFSU2_TR(0x53150f);
if(r1(R+518)){{goto L531523;}}
}
B531511:L531511:{c.instructions+=4;NFSU2_TR(0x531511);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B531513:{NFSU2_TR(0x531513);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531515:{NFSU2_TR(0x531515);
__builtin_memmove((R+4),(R+24),4);
}
B531517:{NFSU2_TR(0x531517);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53151aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B53151a:L53151a:{c.instructions+=2;NFSU2_TR(0x53151a);
w4(R+0,u32(s32(s8(m1(0x83804c)))));
}
B531521:{NFSU2_TR(0x531521);
{goto L531546;}
}
B531523:L531523:{c.instructions+=3;NFSU2_TR(0x531523);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B531529:{NFSU2_TR(0x531529);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53152a:{NFSU2_TR(0x53152a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53152full));
TAIL_STATIC(0x52d100u,52d);
}
B53152f:L53152f:{c.instructions+=3;NFSU2_TR(0x53152f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B531532:{NFSU2_TR(0x531532);
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
B531534:{NFSU2_TR(0x531534);
if(r1(R+518)){{goto L531557;}}
}
B531536:L531536:{c.instructions+=4;NFSU2_TR(0x531536);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B531538:{NFSU2_TR(0x531538);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53153a:{NFSU2_TR(0x53153a);
__builtin_memmove((R+4),(R+24),4);
}
B53153c:{NFSU2_TR(0x53153c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53153full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B53153f:L53153f:{c.instructions+=1;NFSU2_TR(0x53153f);
w4(R+0,u32(s32(s8(m1(0x838067)))));
}
B531546:L531546:{c.instructions+=2;NFSU2_TR(0x531546);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B531549:{NFSU2_TR(0x531549);
if(r1(R+518)){{goto L531557;}}
}
B53154b:L53154b:{c.instructions+=3;NFSU2_TR(0x53154b);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B531551:{NFSU2_TR(0x531551);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531552:{NFSU2_TR(0x531552);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x531557ull));
TAIL_STATIC(0x458520u,458);
}
B531557:L531557:{c.instructions+=5;NFSU2_TR(0x531557);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B53155b:{NFSU2_TR(0x53155b);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B531561:{NFSU2_TR(0x531561);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B531563:{NFSU2_TR(0x531563);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B531566:{NFSU2_TR(0x531566);
if(r1(R+514)){{goto L53157a;}}
}
B531568:L531568:{c.instructions+=4;NFSU2_TR(0x531568);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B53156a:{NFSU2_TR(0x53156a);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53156c:{NFSU2_TR(0x53156c);
__builtin_memmove((R+4),(R+24),4);
}
B53156e:{NFSU2_TR(0x53156e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x531571ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B531571:L531571:{c.instructions+=2;NFSU2_TR(0x531571);
w4(R+0,u32(s32(s8(m1(0x83804c)))));
}
B531578:{NFSU2_TR(0x531578);
{goto L53159b;}
}
B53157a:L53157a:{c.instructions+=5;NFSU2_TR(0x53157a);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B53157e:{NFSU2_TR(0x53157e);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B531584:{NFSU2_TR(0x531584);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B531586:{NFSU2_TR(0x531586);
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
B531589:{NFSU2_TR(0x531589);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5315ac;}}
}
B53158b:L53158b:{c.instructions+=4;NFSU2_TR(0x53158b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B53158d:{NFSU2_TR(0x53158d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53158f:{NFSU2_TR(0x53158f);
__builtin_memmove((R+4),(R+24),4);
}
B531591:{NFSU2_TR(0x531591);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x531594ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B531594:L531594:{c.instructions+=1;NFSU2_TR(0x531594);
w4(R+0,u32(s32(s8(m1(0x838067)))));
}
B53159b:L53159b:{c.instructions+=2;NFSU2_TR(0x53159b);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xffffffffull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B53159e:{NFSU2_TR(0x53159e);
if(r1(R+518)){{goto L5315ac;}}
}
B5315a0:L5315a0:{c.instructions+=3;NFSU2_TR(0x5315a0);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B5315a6:{NFSU2_TR(0x5315a6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5315a7:{NFSU2_TR(0x5315a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5315acull));
TAIL_STATIC(0x458520u,458);
}
B5315ac:L5315ac:{c.instructions+=3;NFSU2_TR(0x5315ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5315ad:{NFSU2_TR(0x5315ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5315ae:{NFSU2_TR(0x5315ae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5315b0:L5315b0:{c.instructions+=11;NFSU2_TR(0x5315b0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5315b2:{NFSU2_TR(0x5315b2);
u8 U[4];
w4(U+0,u32(0x777538ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5315b7:{NFSU2_TR(0x5315b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5315bd:{NFSU2_TR(0x5315bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5315be:{NFSU2_TR(0x5315be);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5315c5:{NFSU2_TR(0x5315c5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5315c6:{NFSU2_TR(0x5315c6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5315c7:{NFSU2_TR(0x5315c7);
__builtin_memmove((R+24),(R+4),4);
}
B5315c9:{NFSU2_TR(0x5315c9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5315ca:{NFSU2_TR(0x5315ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5315ce:{NFSU2_TR(0x5315ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5315d3ull));
TAIL_STATIC(0x5104d0u,510);
}
B5315d3:L5315d3:{c.instructions+=4;NFSU2_TR(0x5315d3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((R+28),(U+0),4);
}
B5315d9:{NFSU2_TR(0x5315d9);
__builtin_memmove((R+4),(R+28),4);
}
B5315db:{NFSU2_TR(0x5315db);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5315e3:{NFSU2_TR(0x5315e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5315e8ull));
TAIL_STATIC(0x5104d0u,510);
}
B5315e8:L5315e8:{c.instructions+=8;NFSU2_TR(0x5315e8);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5315ec:{NFSU2_TR(0x5315ec);
u8 U[4];
w4(U+0,u32(0x79b81cull));
s4(u32(r4(R+28)),r4(U+0));
}
B5315f2:{NFSU2_TR(0x5315f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5315f3:{NFSU2_TR(0x5315f3);
__builtin_memmove((R+0),(R+24),4);
}
B5315f5:{NFSU2_TR(0x5315f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5315f6:{NFSU2_TR(0x5315f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5315fd:{NFSU2_TR(0x5315fd);
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
B531600:{NFSU2_TR(0x531600);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B531610:L531610:{c.instructions+=3;NFSU2_TR(0x531610);
u8 U[4];
w4(U+0,u32(0x795cb0ull));
s4(u32(r4(R+4)),r4(U+0));
}
B531616:{NFSU2_TR(0x531616);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xcull))));
}
B531619:{NFSU2_TR(0x531619);
TAIL_STATIC(0x4358e0u,435);
}
B531620:L531620:{c.instructions+=3;NFSU2_TR(0x531620);
u8 U[4];
w4(U+0,u32(0x79b9d4ull));
s4(u32(r4(R+4)),r4(U+0));
}
B531626:{NFSU2_TR(0x531626);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xcull))));
}
B531629:{NFSU2_TR(0x531629);
TAIL_STATIC(0x4358e0u,435);
}
B531630:L531630:{c.instructions+=7;NFSU2_TR(0x531630);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531631:{NFSU2_TR(0x531631);
__builtin_memmove((R+12),(R+4),4);
}
B531633:{NFSU2_TR(0x531633);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B531636:{NFSU2_TR(0x531636);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B531639:{NFSU2_TR(0x531639);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53163a:{NFSU2_TR(0x53163a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53163b:{NFSU2_TR(0x53163b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x531640ull));
TAIL_STATIC(0x51f490u,51f);
}
B531640:L531640:{c.instructions+=3;NFSU2_TR(0x531640);
u8 U[16];
w4(U+0,u32(u32(u32(0x110ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B531647:{NFSU2_TR(0x531647);
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
B531649:{NFSU2_TR(0x531649);
if(r1(R+518)){{goto L53169e;}}
}
B53164b:L53164b:{c.instructions+=4;NFSU2_TR(0x53164b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53164c:{NFSU2_TR(0x53164c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B53164f:{NFSU2_TR(0x53164f);
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
B531651:{NFSU2_TR(0x531651);
if(r1(R+518)){{goto L53169d;}}
}
B531653:L531653:{c.instructions+=2;NFSU2_TR(0x531653);
u8 U[4];
w4(U+0,u32(0x79b9dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531658:{NFSU2_TR(0x531658);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53165dull));
TAIL_STATIC(0x505450u,505);
}
B53165d:L53165d:{c.instructions+=4;NFSU2_TR(0x53165d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B531660:{NFSU2_TR(0x531660);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B531663:{NFSU2_TR(0x531663);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B531665:{NFSU2_TR(0x531665);
if(r1(R+518)){{goto L531679;}}
}
B531667:L531667:{c.instructions+=3;NFSU2_TR(0x531667);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B53166a:{NFSU2_TR(0x53166a);
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
B53166c:{NFSU2_TR(0x53166c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x531653u);}goto L531653;}}
}
B53166e:L53166e:{c.instructions+=5;NFSU2_TR(0x53166e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53166f:{NFSU2_TR(0x53166f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B531670:{NFSU2_TR(0x531670);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x108ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B531677:{NFSU2_TR(0x531677);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B531678:{NFSU2_TR(0x531678);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B531679:L531679:{c.instructions+=2;NFSU2_TR(0x531679);
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
B53167b:{NFSU2_TR(0x53167b);
if(r1(R+518)){{goto L53169d;}}
}
B53167d:L53167d:{c.instructions+=2;NFSU2_TR(0x53167d);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
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
B531680:{NFSU2_TR(0x531680);
if(r1(R+518)){{goto L531696;}}
}
B531682:L531682:{c.instructions+=3;NFSU2_TR(0x531682);
__builtin_memmove((R+4),(R+28),4);
}
B531684:{NFSU2_TR(0x531684);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B531687:{NFSU2_TR(0x531687);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53168cull));
TAIL_STATIC(0x517720u,517);
}
B53168c:L53168c:{c.instructions+=2;NFSU2_TR(0x53168c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53168f:{NFSU2_TR(0x53168f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B531696:L531696:{c.instructions+=1;NFSU2_TR(0x531696);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53169d:L53169d:{c.instructions+=1;NFSU2_TR(0x53169d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53169e:L53169e:{c.instructions+=4;NFSU2_TR(0x53169e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53169f:{NFSU2_TR(0x53169f);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x108ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5316a6:{NFSU2_TR(0x5316a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5316a7:{NFSU2_TR(0x5316a7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5316b0:L5316b0:{c.instructions+=5;NFSU2_TR(0x5316b0);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5316b4:{NFSU2_TR(0x5316b4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5316b6:{NFSU2_TR(0x5316b6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5316b7:{NFSU2_TR(0x5316b7);
__builtin_memmove((R+24),(R+4),4);
}
B5316b9:{NFSU2_TR(0x5316b9);
if(r1(R+518)){{goto L5316e5;}}
}
B5316bb:L5316bb:{c.instructions+=6;NFSU2_TR(0x5316bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5316be:{NFSU2_TR(0x5316be);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5316c0:{NFSU2_TR(0x5316c0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B5316c3:{NFSU2_TR(0x5316c3);
u8 U[4];
w4(U+0,u32(0x79b9e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5316c8:{NFSU2_TR(0x5316c8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5316c9:{NFSU2_TR(0x5316c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5316ceull));
TAIL_STATIC(0x51f490u,51f);
}
B5316ce:L5316ce:{c.instructions+=3;NFSU2_TR(0x5316ce);
u8 U[16];
w4(U+0,u32(u32(u32(0x110ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B5316d5:{NFSU2_TR(0x5316d5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5316d6:{NFSU2_TR(0x5316d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5316dbull));
TAIL_STATIC(0x51cf70u,51c);
}
B5316db:L5316db:{c.instructions+=2;NFSU2_TR(0x5316db);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5316de:{NFSU2_TR(0x5316de);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5316e5:L5316e5:{c.instructions+=3;NFSU2_TR(0x5316e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5316e8:{NFSU2_TR(0x5316e8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5316ea:{NFSU2_TR(0x5316ea);
if(r1(R+518)){{goto L5316f1;}}
}
B5316ec:L5316ec:{c.instructions+=2;NFSU2_TR(0x5316ec);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B5316ef:{NFSU2_TR(0x5316ef);
{goto L5316f3;}
}
B5316f1:L5316f1:{c.instructions+=1;NFSU2_TR(0x5316f1);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5316f3:L5316f3:{c.instructions+=3;NFSU2_TR(0x5316f3);
w4(R+0,u32(0x83acc0ull));
}
B5316f8:{NFSU2_TR(0x5316f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5316f9:{NFSU2_TR(0x5316f9);
__builtin_memmove((R+16),(R+16),4);
}
B531700:L531700:{c.instructions+=7;NFSU2_TR(0x531700);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B531703:{NFSU2_TR(0x531703);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B531706:{NFSU2_TR(0x531706);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B531709:{NFSU2_TR(0x531709);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53170c:{NFSU2_TR(0x53170c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53170f:{NFSU2_TR(0x53170f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B531711:{NFSU2_TR(0x531711);
if(r1(R+518)){{goto L531718;}}
}
B531713:L531713:{c.instructions+=2;NFSU2_TR(0x531713);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
}
B531716:{NFSU2_TR(0x531716);
{goto L53171a;}
}
B531718:L531718:{c.instructions+=1;NFSU2_TR(0x531718);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B53171a:L53171a:{c.instructions+=7;NFSU2_TR(0x53171a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53171d:{NFSU2_TR(0x53171d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B53171f:{NFSU2_TR(0x53171f);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B531722:{NFSU2_TR(0x531722);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B531725:{NFSU2_TR(0x531725);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B531728:{NFSU2_TR(0x531728);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53172a:{NFSU2_TR(0x53172a);
if(r1(R+518)){{goto L531731;}}
}
B53172c:L53172c:{c.instructions+=2;NFSU2_TR(0x53172c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
}
B53172f:{NFSU2_TR(0x53172f);
{goto L531733;}
}
B531731:L531731:{c.instructions+=1;NFSU2_TR(0x531731);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B531733:L531733:{c.instructions+=7;NFSU2_TR(0x531733);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B531736:{NFSU2_TR(0x531736);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B531739:{NFSU2_TR(0x531739);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B53173c:{NFSU2_TR(0x53173c);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53173f:{NFSU2_TR(0x53173f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B531742:{NFSU2_TR(0x531742);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B531744:{NFSU2_TR(0x531744);
if(r1(R+518)){{goto L53174b;}}
}
B531746:L531746:{c.instructions+=2;NFSU2_TR(0x531746);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
}
B531749:{NFSU2_TR(0x531749);
{goto L53174d;}
}
B53174b:L53174b:{c.instructions+=1;NFSU2_TR(0x53174b);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B53174d:L53174d:{c.instructions+=7;NFSU2_TR(0x53174d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B531750:{NFSU2_TR(0x531750);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B531753:{NFSU2_TR(0x531753);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B531756:{NFSU2_TR(0x531756);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B531759:{NFSU2_TR(0x531759);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53175c:{NFSU2_TR(0x53175c);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53175e:{NFSU2_TR(0x53175e);
if(r1(R+518)){{goto L531765;}}
}
B531760:L531760:{c.instructions+=2;NFSU2_TR(0x531760);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
}
B531763:{NFSU2_TR(0x531763);
{goto L531767;}
}
B531765:L531765:{c.instructions+=1;NFSU2_TR(0x531765);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B531767:L531767:{c.instructions+=7;NFSU2_TR(0x531767);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53176a:{NFSU2_TR(0x53176a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53176d:{NFSU2_TR(0x53176d);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B531770:{NFSU2_TR(0x531770);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B531773:{NFSU2_TR(0x531773);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B531776:{NFSU2_TR(0x531776);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B531778:{NFSU2_TR(0x531778);
if(r1(R+518)){{goto L53177f;}}
}
B53177a:L53177a:{c.instructions+=2;NFSU2_TR(0x53177a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
}
B53177d:{NFSU2_TR(0x53177d);
{goto L531781;}
}
B53177f:L53177f:{c.instructions+=1;NFSU2_TR(0x53177f);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B531781:L531781:{c.instructions+=7;NFSU2_TR(0x531781);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B531784:{NFSU2_TR(0x531784);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B531787:{NFSU2_TR(0x531787);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B53178a:{NFSU2_TR(0x53178a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53178d:{NFSU2_TR(0x53178d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B531790:{NFSU2_TR(0x531790);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B531792:{NFSU2_TR(0x531792);
if(r1(R+518)){{goto L531799;}}
}
B531794:L531794:{c.instructions+=2;NFSU2_TR(0x531794);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
}
B531797:{NFSU2_TR(0x531797);
{goto L53179b;}
}
B531799:L531799:{c.instructions+=1;NFSU2_TR(0x531799);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B53179b:L53179b:{c.instructions+=7;NFSU2_TR(0x53179b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53179e:{NFSU2_TR(0x53179e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5317a1:{NFSU2_TR(0x5317a1);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5317a4:{NFSU2_TR(0x5317a4);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5317a7:{NFSU2_TR(0x5317a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5317aa:{NFSU2_TR(0x5317aa);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5317ac:{NFSU2_TR(0x5317ac);
if(r1(R+518)){{goto L5317b3;}}
}
B5317ae:L5317ae:{c.instructions+=2;NFSU2_TR(0x5317ae);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
}
B5317b1:{NFSU2_TR(0x5317b1);
{goto L5317b5;}
}
B5317b3:L5317b3:{c.instructions+=1;NFSU2_TR(0x5317b3);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5317b5:L5317b5:{c.instructions+=7;NFSU2_TR(0x5317b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5317b8:{NFSU2_TR(0x5317b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5317bb:{NFSU2_TR(0x5317bb);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5317be:{NFSU2_TR(0x5317be);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5317c1:{NFSU2_TR(0x5317c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5317c4:{NFSU2_TR(0x5317c4);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5317c6:{NFSU2_TR(0x5317c6);
if(r1(R+518)){{goto L5317cd;}}
}
B5317c8:L5317c8:{c.instructions+=2;NFSU2_TR(0x5317c8);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
}
B5317cb:{NFSU2_TR(0x5317cb);
{goto L5317cf;}
}
B5317cd:L5317cd:{c.instructions+=1;NFSU2_TR(0x5317cd);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5317cf:L5317cf:{c.instructions+=7;NFSU2_TR(0x5317cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5317d2:{NFSU2_TR(0x5317d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5317d5:{NFSU2_TR(0x5317d5);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5317d8:{NFSU2_TR(0x5317d8);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5317db:{NFSU2_TR(0x5317db);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5317de:{NFSU2_TR(0x5317de);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5317e0:{NFSU2_TR(0x5317e0);
if(r1(R+518)){{goto L5317e7;}}
}
B5317e2:L5317e2:{c.instructions+=2;NFSU2_TR(0x5317e2);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
}
B5317e5:{NFSU2_TR(0x5317e5);
{goto L5317e9;}
}
B5317e7:L5317e7:{c.instructions+=1;NFSU2_TR(0x5317e7);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5317e9:L5317e9:{c.instructions+=3;NFSU2_TR(0x5317e9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
}
B5317ec:{NFSU2_TR(0x5317ec);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x83ad98ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x83ad98ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x83ad98ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5317f1:{NFSU2_TR(0x5317f1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x531700u);}goto L531700;}}
}
B5317f7:L5317f7:{c.instructions+=1;NFSU2_TR(0x5317f7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B531800:L531800:{c.instructions+=30;NFSU2_TR(0x531800);
__builtin_memmove((R+8),(R+4),4);
}
B531802:{NFSU2_TR(0x531802);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531803:{NFSU2_TR(0x531803);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B531805:{NFSU2_TR(0x531805);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
s1(u32(r4(R+8)),r1(U+0));
}
B531807:{NFSU2_TR(0x531807);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53180a:{NFSU2_TR(0x53180a);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53180d:{NFSU2_TR(0x53180d);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x9ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B531810:{NFSU2_TR(0x531810);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xaull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B531813:{NFSU2_TR(0x531813);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B531816:{NFSU2_TR(0x531816);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xbull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B531819:{NFSU2_TR(0x531819);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x27ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53181c:{NFSU2_TR(0x53181c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B53181e:{NFSU2_TR(0x53181e);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xdull))));
__builtin_memmove((R+4),(U+0),4);
}
B531821:{NFSU2_TR(0x531821);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B531823:{NFSU2_TR(0x531823);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B531826:{NFSU2_TR(0x531826);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B53182a:{NFSU2_TR(0x53182a);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xaull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53182d:{NFSU2_TR(0x53182d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53182e:{NFSU2_TR(0x53182e);
w4(R+4,u32(0x1eull));
}
B531833:{NFSU2_TR(0x531833);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((R+28),(U+0),4);
}
B531836:{NFSU2_TR(0x531836);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x19ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B531839:{NFSU2_TR(0x531839);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1aull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53183c:{NFSU2_TR(0x53183c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53183f:{NFSU2_TR(0x53183f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B531842:{NFSU2_TR(0x531842);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B531845:{NFSU2_TR(0x531845);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x25ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B531848:{NFSU2_TR(0x531848);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x26ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53184b:{NFSU2_TR(0x53184b);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53184e:{NFSU2_TR(0x53184e);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B531851:{NFSU2_TR(0x531851);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B531857:L531857:{c.instructions+=1;NFSU2_TR(0x531857);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L531859;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x531857u);}goto L531857;}
}
B531859:L531859:{c.instructions+=11;NFSU2_TR(0x531859);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xa5ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53185f:{NFSU2_TR(0x53185f);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xa6ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B531865:{NFSU2_TR(0x531865);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x108ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53186b:{NFSU2_TR(0x53186b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x110ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B531871:{NFSU2_TR(0x531871);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x118ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B531877:{NFSU2_TR(0x531877);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53187d:{NFSU2_TR(0x53187d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x114ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B531883:{NFSU2_TR(0x531883);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x11cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B531889:{NFSU2_TR(0x531889);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53188c:{NFSU2_TR(0x53188c);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xb0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B531892:{NFSU2_TR(0x531892);
w4(R+4,u32(0x8ull));
}
B531897:L531897:{c.instructions+=6;NFSU2_TR(0x531897);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53189a:{NFSU2_TR(0x53189a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53189d:{NFSU2_TR(0x53189d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B53189f:{NFSU2_TR(0x53189f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
}
B5318a2:{NFSU2_TR(0x5318a2);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B5318a3:{NFSU2_TR(0x5318a3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x531897u);}goto L531897;}}
}
B5318a5:L5318a5:{c.instructions+=3;NFSU2_TR(0x5318a5);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x120ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5318ab:{NFSU2_TR(0x5318ab);
w4(R+4,u32(0x1cull));
}
B5318b0:{NFSU2_TR(0x5318b0);
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
B5318b2:L5318b2:{c.instructions+=1;NFSU2_TR(0x5318b2);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5318b4;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5318b2u);}goto L5318b2;}
}
B5318b4:L5318b4:{c.instructions+=3;NFSU2_TR(0x5318b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5318b5:{NFSU2_TR(0x5318b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5318b6:{NFSU2_TR(0x5318b6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5318c0:L5318c0:{c.instructions+=5;NFSU2_TR(0x5318c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5318c1:{NFSU2_TR(0x5318c1);
__builtin_memmove((R+24),(R+4),4);
}
B5318c3:{NFSU2_TR(0x5318c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5318c5:{NFSU2_TR(0x5318c5);
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
B5318c7:{NFSU2_TR(0x5318c7);
if(r1(R+518)){{goto L5318ef;}}
}
B5318c9:L5318c9:{c.instructions+=1;NFSU2_TR(0x5318c9);
__builtin_memmove((R+16),(R+16),4);
}
B5318d0:L5318d0:{c.instructions+=8;NFSU2_TR(0x5318d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5318d2:{NFSU2_TR(0x5318d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5318d5:{NFSU2_TR(0x5318d5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5318d7:{NFSU2_TR(0x5318d7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5318d8:{NFSU2_TR(0x5318d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5318db:{NFSU2_TR(0x5318db);
__builtin_memmove((R+0),gp(0x8384b0),4);
}
B5318e0:{NFSU2_TR(0x5318e0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5318e1:{NFSU2_TR(0x5318e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5318e6ull));
TAIL_STATIC(0x43f920u,43f);
}
B5318e6:L5318e6:{c.instructions+=4;NFSU2_TR(0x5318e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5318e8:{NFSU2_TR(0x5318e8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5318eb:{NFSU2_TR(0x5318eb);
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
B5318ed:{NFSU2_TR(0x5318ed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5318d0u);}goto L5318d0;}}
}
B5318ef:L5318ef:{c.instructions+=2;NFSU2_TR(0x5318ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5318f0:{NFSU2_TR(0x5318f0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B531900:L531900:{c.instructions+=6;NFSU2_TR(0x531900);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531901:{NFSU2_TR(0x531901);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531902:{NFSU2_TR(0x531902);
__builtin_memmove((R+28),(R+4),4);
}
B531904:{NFSU2_TR(0x531904);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B531906:{NFSU2_TR(0x531906);
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
B531908:{NFSU2_TR(0x531908);
if(r1(R+518)){{goto L531936;}}
}
B53190a:L53190a:{c.instructions+=1;NFSU2_TR(0x53190a);
__builtin_memmove((R+12),(R+12),4);
}
B531910:L531910:{c.instructions+=6;NFSU2_TR(0x531910);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B531913:{NFSU2_TR(0x531913);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B531915:{NFSU2_TR(0x531915);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B531917:{NFSU2_TR(0x531917);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53191a:{NFSU2_TR(0x53191a);
__builtin_memmove((R+4),(R+24),4);
}
B53191c:{NFSU2_TR(0x53191c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x531921ull));
TAIL_STATIC(0x52c390u,52c);
}
B531921:L531921:{c.instructions+=4;NFSU2_TR(0x531921);
__builtin_memmove((R+0),gp(0x83847c),4);
}
B531926:{NFSU2_TR(0x531926);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531927:{NFSU2_TR(0x531927);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531928:{NFSU2_TR(0x531928);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53192dull));
TAIL_STATIC(0x43f920u,43f);
}
B53192d:L53192d:{c.instructions+=4;NFSU2_TR(0x53192d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B53192f:{NFSU2_TR(0x53192f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B531932:{NFSU2_TR(0x531932);
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
B531934:{NFSU2_TR(0x531934);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x531910u);}goto L531910;}}
}
B531936:L531936:{c.instructions+=3;NFSU2_TR(0x531936);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B531937:{NFSU2_TR(0x531937);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B531938:{NFSU2_TR(0x531938);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B531940:L531940:{c.instructions+=6;NFSU2_TR(0x531940);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531941:{NFSU2_TR(0x531941);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531942:{NFSU2_TR(0x531942);
__builtin_memmove((R+28),(R+4),4);
}
B531944:{NFSU2_TR(0x531944);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B531946:{NFSU2_TR(0x531946);
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
B531948:{NFSU2_TR(0x531948);
if(r1(R+518)){{goto L531970;}}
}
B53194a:L53194a:{c.instructions+=1;NFSU2_TR(0x53194a);
__builtin_memmove((R+12),(R+12),4);
}
B531950:L531950:{c.instructions+=6;NFSU2_TR(0x531950);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B531953:{NFSU2_TR(0x531953);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B531955:{NFSU2_TR(0x531955);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B531957:{NFSU2_TR(0x531957);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53195a:{NFSU2_TR(0x53195a);
__builtin_memmove((R+4),(R+24),4);
}
B53195c:{NFSU2_TR(0x53195c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x531961ull));
TAIL_STATIC(0x51bf60u,51b);
}
B531961:L531961:{c.instructions+=2;NFSU2_TR(0x531961);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531962:{NFSU2_TR(0x531962);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x531967ull));
TAIL_STATIC(0x575630u,575);
}
B531967:L531967:{c.instructions+=4;NFSU2_TR(0x531967);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B531969:{NFSU2_TR(0x531969);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53196c:{NFSU2_TR(0x53196c);
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
B53196e:{NFSU2_TR(0x53196e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x531950u);}goto L531950;}}
}
B531970:L531970:{c.instructions+=3;NFSU2_TR(0x531970);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B531971:{NFSU2_TR(0x531971);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B531972:{NFSU2_TR(0x531972);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B531980:L531980:{c.instructions+=6;NFSU2_TR(0x531980);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531981:{NFSU2_TR(0x531981);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531982:{NFSU2_TR(0x531982);
__builtin_memmove((R+28),(R+4),4);
}
B531984:{NFSU2_TR(0x531984);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B531986:{NFSU2_TR(0x531986);
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
B531988:{NFSU2_TR(0x531988);
if(r1(R+518)){{goto L5319b0;}}
}
B53198a:L53198a:{c.instructions+=1;NFSU2_TR(0x53198a);
__builtin_memmove((R+12),(R+12),4);
}
B531990:L531990:{c.instructions+=6;NFSU2_TR(0x531990);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B531993:{NFSU2_TR(0x531993);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B531995:{NFSU2_TR(0x531995);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B531997:{NFSU2_TR(0x531997);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53199a:{NFSU2_TR(0x53199a);
__builtin_memmove((R+4),(R+24),4);
}
B53199c:{NFSU2_TR(0x53199c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5319a1ull));
TAIL_STATIC(0x5114e0u,511);
}
B5319a1:L5319a1:{c.instructions+=2;NFSU2_TR(0x5319a1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5319a2:{NFSU2_TR(0x5319a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5319a7ull));
TAIL_STATIC(0x575630u,575);
}
B5319a7:L5319a7:{c.instructions+=4;NFSU2_TR(0x5319a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5319a9:{NFSU2_TR(0x5319a9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5319ac:{NFSU2_TR(0x5319ac);
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
B5319ae:{NFSU2_TR(0x5319ae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x531990u);}goto L531990;}}
}
B5319b0:L5319b0:{c.instructions+=3;NFSU2_TR(0x5319b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5319b1:{NFSU2_TR(0x5319b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5319b2:{NFSU2_TR(0x5319b2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5319c0:L5319c0:{c.instructions+=25;NFSU2_TR(0x5319c0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5319c2:{NFSU2_TR(0x5319c2);
u8 U[4];
w4(U+0,u32(0x776f68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5319c7:{NFSU2_TR(0x5319c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5319cd:{NFSU2_TR(0x5319cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5319ce:{NFSU2_TR(0x5319ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5319d5:{NFSU2_TR(0x5319d5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5319d6:{NFSU2_TR(0x5319d6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5319d7:{NFSU2_TR(0x5319d7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5319d8:{NFSU2_TR(0x5319d8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5319d9:{NFSU2_TR(0x5319d9);
__builtin_memmove((R+24),(R+4),4);
}
B5319db:{NFSU2_TR(0x5319db);
w4(R+0,u32(0xabadcafeull));
}
B5319e0:{NFSU2_TR(0x5319e0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5319e1:{NFSU2_TR(0x5319e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5319e5:{NFSU2_TR(0x5319e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5319e8:{NFSU2_TR(0x5319e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5319eb:{NFSU2_TR(0x5319eb);
u8 U[4];
w4(U+0,u32(0x51ab10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5319f0:{NFSU2_TR(0x5319f0);
u8 U[4];
w4(U+0,u32(0x4fe8b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5319f5:{NFSU2_TR(0x5319f5);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5319fa:{NFSU2_TR(0x5319fa);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5319fc:{NFSU2_TR(0x5319fc);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B5319ff:{NFSU2_TR(0x5319ff);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B531a01:{NFSU2_TR(0x531a01);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531a02:{NFSU2_TR(0x531a02);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B531a06:{NFSU2_TR(0x531a06);
u8 U[4];
w4(U+0,u32(0x79b9ecull));
s4(u32(r4(R+24)),r4(U+0));
}
B531a0c:{NFSU2_TR(0x531a0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x531a11ull));
TAIL_STATIC(0x75c461u,75c);
}
B531a11:L531a11:{c.instructions+=8;NFSU2_TR(0x531a11);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x200cull))));
w4(U+4,u32(0x79a9ecull));
s4(u32(r4(U+0)),r4(U+4));
}
B531a1b:{NFSU2_TR(0x531a1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2014ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B531a21:{NFSU2_TR(0x531a21);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2018ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B531a27:{NFSU2_TR(0x531a27);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2010ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B531a2d:{NFSU2_TR(0x531a2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x201cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B531a33:{NFSU2_TR(0x531a33);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((R+0),(U+0),4);
}
B531a36:{NFSU2_TR(0x531a36);
w4(R+20,u32(0x40ull));
}
B531a3b:{NFSU2_TR(0x531a3b);
{goto L531a40;}
}
B531a40:L531a40:{c.instructions+=4;NFSU2_TR(0x531a40);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2018ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B531a46:{NFSU2_TR(0x531a46);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B531a49:{NFSU2_TR(0x531a49);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B531a4b:{NFSU2_TR(0x531a4b);
if(r1(R+518)){{goto L531a9d;}}
}
B531a4d:L531a4d:{c.instructions+=2;NFSU2_TR(0x531a4d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B531a4f:{NFSU2_TR(0x531a4f);
if(r1(R+518)){{goto L531a6b;}}
}
B531a51:L531a51:{c.instructions+=4;NFSU2_TR(0x531a51);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B531a54:{NFSU2_TR(0x531a54);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B531a56:{NFSU2_TR(0x531a56);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B531a59:{NFSU2_TR(0x531a59);
if(r1(R+518)){{goto L531a61;}}
}
B531a5b:L531a5b:{c.instructions+=2;NFSU2_TR(0x531a5b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B531a5e:{NFSU2_TR(0x531a5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B531a61:L531a61:{c.instructions+=4;NFSU2_TR(0x531a61);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B531a64:{NFSU2_TR(0x531a64);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B531a66:{NFSU2_TR(0x531a66);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B531a69:{NFSU2_TR(0x531a69);
{goto L531a89;}
}
B531a6b:L531a6b:{c.instructions+=4;NFSU2_TR(0x531a6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2014ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B531a71:{NFSU2_TR(0x531a71);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B531a73:{NFSU2_TR(0x531a73);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B531a76:{NFSU2_TR(0x531a76);
if(r1(R+518)){{goto L531a7e;}}
}
B531a78:L531a78:{c.instructions+=2;NFSU2_TR(0x531a78);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B531a7b:{NFSU2_TR(0x531a7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B531a7e:L531a7e:{c.instructions+=3;NFSU2_TR(0x531a7e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B531a81:{NFSU2_TR(0x531a81);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B531a83:{NFSU2_TR(0x531a83);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2014ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B531a89:L531a89:{c.instructions+=2;NFSU2_TR(0x531a89);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2018ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B531a8f:{NFSU2_TR(0x531a8f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L531a97;}}
}
B531a91:L531a91:{c.instructions+=1;NFSU2_TR(0x531a91);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2018ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B531a97:L531a97:{c.instructions+=1;NFSU2_TR(0x531a97);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2010ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B531a9d:L531a9d:{c.instructions+=4;NFSU2_TR(0x531a9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2018ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B531aa3:{NFSU2_TR(0x531aa3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((R+4),(U+0),4);
}
B531aa6:{NFSU2_TR(0x531aa6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B531aa8:{NFSU2_TR(0x531aa8);
if(r1(R+518)){{goto L531af0;}}
}
B531aaa:L531aaa:{c.instructions+=2;NFSU2_TR(0x531aaa);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B531aac:{NFSU2_TR(0x531aac);
if(r1(R+518)){{goto L531ac3;}}
}
B531aae:L531aae:{c.instructions+=4;NFSU2_TR(0x531aae);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B531ab1:{NFSU2_TR(0x531ab1);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B531ab3:{NFSU2_TR(0x531ab3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B531ab6:{NFSU2_TR(0x531ab6);
if(r1(R+518)){{goto L531abb;}}
}
B531ab8:L531ab8:{c.instructions+=1;NFSU2_TR(0x531ab8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B531abb:L531abb:{c.instructions+=3;NFSU2_TR(0x531abb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B531abe:{NFSU2_TR(0x531abe);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B531ac1:{NFSU2_TR(0x531ac1);
{goto L531adc;}
}
B531ac3:L531ac3:{c.instructions+=4;NFSU2_TR(0x531ac3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2014ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B531ac9:{NFSU2_TR(0x531ac9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B531acb:{NFSU2_TR(0x531acb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B531ace:{NFSU2_TR(0x531ace);
if(r1(R+518)){{goto L531ad3;}}
}
B531ad0:L531ad0:{c.instructions+=1;NFSU2_TR(0x531ad0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B531ad3:L531ad3:{c.instructions+=2;NFSU2_TR(0x531ad3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B531ad6:{NFSU2_TR(0x531ad6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2014ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B531adc:L531adc:{c.instructions+=2;NFSU2_TR(0x531adc);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2018ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B531ae2:{NFSU2_TR(0x531ae2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L531aea;}}
}
B531ae4:L531ae4:{c.instructions+=1;NFSU2_TR(0x531ae4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2018ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B531aea:L531aea:{c.instructions+=1;NFSU2_TR(0x531aea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2010ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B531af0:L531af0:{c.instructions+=4;NFSU2_TR(0x531af0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2018ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B531af6:{NFSU2_TR(0x531af6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((R+4),(U+0),4);
}
B531af9:{NFSU2_TR(0x531af9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B531afb:{NFSU2_TR(0x531afb);
if(r1(R+518)){{goto L531b43;}}
}
B531afd:L531afd:{c.instructions+=2;NFSU2_TR(0x531afd);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B531aff:{NFSU2_TR(0x531aff);
if(r1(R+518)){{goto L531b16;}}
}
B531b01:L531b01:{c.instructions+=4;NFSU2_TR(0x531b01);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B531b04:{NFSU2_TR(0x531b04);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B531b06:{NFSU2_TR(0x531b06);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B531b09:{NFSU2_TR(0x531b09);
if(r1(R+518)){{goto L531b0e;}}
}
B531b0b:L531b0b:{c.instructions+=1;NFSU2_TR(0x531b0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B531b0e:L531b0e:{c.instructions+=3;NFSU2_TR(0x531b0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B531b11:{NFSU2_TR(0x531b11);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B531b14:{NFSU2_TR(0x531b14);
{goto L531b2f;}
}
B531b16:L531b16:{c.instructions+=4;NFSU2_TR(0x531b16);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2014ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B531b1c:{NFSU2_TR(0x531b1c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B531b1e:{NFSU2_TR(0x531b1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B531b21:{NFSU2_TR(0x531b21);
if(r1(R+518)){{goto L531b26;}}
}
B531b23:L531b23:{c.instructions+=1;NFSU2_TR(0x531b23);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B531b26:L531b26:{c.instructions+=2;NFSU2_TR(0x531b26);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B531b29:{NFSU2_TR(0x531b29);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2014ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B531b2f:L531b2f:{c.instructions+=2;NFSU2_TR(0x531b2f);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2018ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B531b35:{NFSU2_TR(0x531b35);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L531b3d;}}
}
B531b37:L531b37:{c.instructions+=1;NFSU2_TR(0x531b37);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2018ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B531b3d:L531b3d:{c.instructions+=1;NFSU2_TR(0x531b3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2010ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B531b43:L531b43:{c.instructions+=4;NFSU2_TR(0x531b43);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2018ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B531b49:{NFSU2_TR(0x531b49);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((R+4),(U+0),4);
}
B531b4c:{NFSU2_TR(0x531b4c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B531b4e:{NFSU2_TR(0x531b4e);
if(r1(R+518)){{goto L531b96;}}
}
B531b50:L531b50:{c.instructions+=2;NFSU2_TR(0x531b50);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B531b52:{NFSU2_TR(0x531b52);
if(r1(R+518)){{goto L531b69;}}
}
B531b54:L531b54:{c.instructions+=4;NFSU2_TR(0x531b54);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B531b57:{NFSU2_TR(0x531b57);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B531b59:{NFSU2_TR(0x531b59);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B531b5c:{NFSU2_TR(0x531b5c);
if(r1(R+518)){{goto L531b61;}}
}
B531b5e:L531b5e:{c.instructions+=1;NFSU2_TR(0x531b5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B531b61:L531b61:{c.instructions+=3;NFSU2_TR(0x531b61);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B531b64:{NFSU2_TR(0x531b64);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B531b67:{NFSU2_TR(0x531b67);
{goto L531b82;}
}
B531b69:L531b69:{c.instructions+=4;NFSU2_TR(0x531b69);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2014ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B531b6f:{NFSU2_TR(0x531b6f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B531b71:{NFSU2_TR(0x531b71);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B531b74:{NFSU2_TR(0x531b74);
if(r1(R+518)){{goto L531b79;}}
}
B531b76:L531b76:{c.instructions+=1;NFSU2_TR(0x531b76);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B531b79:L531b79:{c.instructions+=2;NFSU2_TR(0x531b79);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B531b7c:{NFSU2_TR(0x531b7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2014ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B531b82:L531b82:{c.instructions+=2;NFSU2_TR(0x531b82);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2018ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B531b88:{NFSU2_TR(0x531b88);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L531b90;}}
}
B531b8a:L531b8a:{c.instructions+=1;NFSU2_TR(0x531b8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2018ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B531b90:L531b90:{c.instructions+=1;NFSU2_TR(0x531b90);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2010ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B531b96:L531b96:{c.instructions+=3;NFSU2_TR(0x531b96);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
}
B531b9b:{NFSU2_TR(0x531b9b);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
}
B531b9c:{NFSU2_TR(0x531b9c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x531a40u);}goto L531a40;}}
}
B531ba2:L531ba2:{c.instructions+=9;NFSU2_TR(0x531ba2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B531ba6:{NFSU2_TR(0x531ba6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B531ba7:{NFSU2_TR(0x531ba7);
__builtin_memmove((R+0),(R+24),4);
}
B531ba9:{NFSU2_TR(0x531ba9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B531baa:{NFSU2_TR(0x531baa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B531bab:{NFSU2_TR(0x531bab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B531bac:{NFSU2_TR(0x531bac);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B531bb3:{NFSU2_TR(0x531bb3);
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
B531bb6:{NFSU2_TR(0x531bb6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B531bc0:L531bc0:{c.instructions+=3;NFSU2_TR(0x531bc0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531bc1:{NFSU2_TR(0x531bc1);
__builtin_memmove((R+24),(R+4),4);
}
B531bc3:{NFSU2_TR(0x531bc3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x531bc8ull));
{goto L531be0;}
}
B531bc8:L531bc8:{c.instructions+=2;NFSU2_TR(0x531bc8);
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
B531bcd:{NFSU2_TR(0x531bcd);
if(r1(R+518)){{goto L531bd8;}}
}
B531bcf:L531bcf:{c.instructions+=2;NFSU2_TR(0x531bcf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531bd0:{NFSU2_TR(0x531bd0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x531bd5ull));
TAIL_STATIC(0x575630u,575);
}
B531bd5:L531bd5:{c.instructions+=1;NFSU2_TR(0x531bd5);
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
B531bd8:L531bd8:{c.instructions+=3;NFSU2_TR(0x531bd8);
__builtin_memmove((R+0),(R+24),4);
}
B531bda:{NFSU2_TR(0x531bda);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B531bdb:{NFSU2_TR(0x531bdb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B531be0:L531be0:{c.instructions+=14;NFSU2_TR(0x531be0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531be2:{NFSU2_TR(0x531be2);
u8 U[4];
w4(U+0,u32(0x777571ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531be7:{NFSU2_TR(0x531be7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B531bed:{NFSU2_TR(0x531bed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531bee:{NFSU2_TR(0x531bee);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B531bf5:{NFSU2_TR(0x531bf5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531bf6:{NFSU2_TR(0x531bf6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531bf7:{NFSU2_TR(0x531bf7);
__builtin_memmove((R+24),(R+4),4);
}
B531bf9:{NFSU2_TR(0x531bf9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B531bfd:{NFSU2_TR(0x531bfd);
u8 U[4];
w4(U+0,u32(0x79b9ecull));
s4(u32(r4(R+24)),r4(U+0));
}
B531c03:{NFSU2_TR(0x531c03);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2010ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B531c09:{NFSU2_TR(0x531c09);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B531c0b:{NFSU2_TR(0x531c0b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B531c13:{NFSU2_TR(0x531c13);
if(r1(R+518)){{goto L531c75;}}
}
B531c15:L531c15:{c.instructions+=3;NFSU2_TR(0x531c15);
w4(R+8,u32(0xabadcafeull));
}
B531c1a:{NFSU2_TR(0x531c1a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531c1b:{NFSU2_TR(0x531c1b);
{goto L531c20;}
}
B531c20:L531c20:{c.instructions+=3;NFSU2_TR(0x531c20);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2014ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B531c26:{NFSU2_TR(0x531c26);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B531c28:{NFSU2_TR(0x531c28);
if(r1(R+518)){{goto L531c6a;}}
}
B531c2a:L531c2a:{c.instructions+=4;NFSU2_TR(0x531c2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B531c2d:{NFSU2_TR(0x531c2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2014ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B531c33:{NFSU2_TR(0x531c33);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2018ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B531c39:{NFSU2_TR(0x531c39);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L531c44;}}
}
B531c3b:L531c3b:{c.instructions+=2;NFSU2_TR(0x531c3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B531c3e:{NFSU2_TR(0x531c3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2018ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B531c44:L531c44:{c.instructions+=3;NFSU2_TR(0x531c44);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B531c47:{NFSU2_TR(0x531c47);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B531c49:{NFSU2_TR(0x531c49);
if(r1(R+518)){{goto L531c51;}}
}
B531c4b:L531c4b:{c.instructions+=2;NFSU2_TR(0x531c4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B531c4e:{NFSU2_TR(0x531c4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B531c51:L531c51:{c.instructions+=3;NFSU2_TR(0x531c51);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B531c54:{NFSU2_TR(0x531c54);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B531c56:{NFSU2_TR(0x531c56);
if(r1(R+518)){{goto L531c5e;}}
}
B531c58:L531c58:{c.instructions+=2;NFSU2_TR(0x531c58);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B531c5b:{NFSU2_TR(0x531c5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B531c5e:L531c5e:{c.instructions+=3;NFSU2_TR(0x531c5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B531c61:{NFSU2_TR(0x531c61);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B531c64:{NFSU2_TR(0x531c64);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2010ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B531c6a:L531c6a:{c.instructions+=3;NFSU2_TR(0x531c6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2010ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B531c70:{NFSU2_TR(0x531c70);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B531c72:{NFSU2_TR(0x531c72);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x531c20u);}goto L531c20;}}
}
B531c74:L531c74:{c.instructions+=1;NFSU2_TR(0x531c74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B531c75:L531c75:{c.instructions+=3;NFSU2_TR(0x531c75);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x200cull))));
__builtin_memmove((R+4),(U+0),4);
}
B531c7b:{NFSU2_TR(0x531c7b);
u8 U[4];
w4(U+0,u32(0x79a9ecull));
s4(u32(r4(R+4)),r4(U+0));
}
B531c81:{NFSU2_TR(0x531c81);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x531c86ull));
TAIL_STATIC(0x511670u,511);
}
B531c86:L531c86:{c.instructions+=7;NFSU2_TR(0x531c86);
u8 U[4];
w4(U+0,u32(0x51ab10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531c8b:{NFSU2_TR(0x531c8b);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531c90:{NFSU2_TR(0x531c90);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531c92:{NFSU2_TR(0x531c92);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+8),(U+0),4);
}
B531c95:{NFSU2_TR(0x531c95);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531c96:{NFSU2_TR(0x531c96);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B531c9b:{NFSU2_TR(0x531c9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x531ca0ull));
TAIL_STATIC(0x75c401u,75c);
}
B531ca0:L531ca0:{c.instructions+=6;NFSU2_TR(0x531ca0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B531ca4:{NFSU2_TR(0x531ca4);
u8 U[4];
w4(U+0,u32(0x79a9e8ull));
s4(u32(r4(R+24)),r4(U+0));
}
B531caa:{NFSU2_TR(0x531caa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B531cab:{NFSU2_TR(0x531cab);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B531cb2:{NFSU2_TR(0x531cb2);
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
B531cb5:{NFSU2_TR(0x531cb5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B531cc0:L531cc0:{c.instructions+=12;NFSU2_TR(0x531cc0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531cc2:{NFSU2_TR(0x531cc2);
u8 U[4];
w4(U+0,u32(0x777929ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531cc7:{NFSU2_TR(0x531cc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B531ccd:{NFSU2_TR(0x531ccd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531cce:{NFSU2_TR(0x531cce);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B531cd5:{NFSU2_TR(0x531cd5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531cd6:{NFSU2_TR(0x531cd6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531cd7:{NFSU2_TR(0x531cd7);
__builtin_memmove((R+24),(R+4),4);
}
B531cd9:{NFSU2_TR(0x531cd9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B531cdd:{NFSU2_TR(0x531cdd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1677cull))));
__builtin_memmove((R+4),(U+0),4);
}
B531ce3:{NFSU2_TR(0x531ce3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B531ceb:{NFSU2_TR(0x531ceb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x531cf0ull));
TAIL_STATIC(0x511820u,511);
}
B531cf0:L531cf0:{c.instructions+=7;NFSU2_TR(0x531cf0);
u8 U[4];
w4(U+0,u32(0x525ce0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531cf5:{NFSU2_TR(0x531cf5);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531cf7:{NFSU2_TR(0x531cf7);
u8 U[4];
w4(U+0,u32(0xab4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531cfc:{NFSU2_TR(0x531cfc);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B531cff:{NFSU2_TR(0x531cff);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531d00:{NFSU2_TR(0x531d00);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B531d08:{NFSU2_TR(0x531d08);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x531d0dull));
TAIL_STATIC(0x75c401u,75c);
}
B531d0d:L531d0d:{c.instructions+=5;NFSU2_TR(0x531d0d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B531d11:{NFSU2_TR(0x531d11);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B531d12:{NFSU2_TR(0x531d12);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B531d19:{NFSU2_TR(0x531d19);
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
B531d1c:{NFSU2_TR(0x531d1c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B531d20:L531d20:{c.instructions+=15;NFSU2_TR(0x531d20);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531d22:{NFSU2_TR(0x531d22);
u8 U[4];
w4(U+0,u32(0x777404ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531d27:{NFSU2_TR(0x531d27);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B531d2d:{NFSU2_TR(0x531d2d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531d2e:{NFSU2_TR(0x531d2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B531d35:{NFSU2_TR(0x531d35);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531d36:{NFSU2_TR(0x531d36);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531d37:{NFSU2_TR(0x531d37);
u8 U[4];
w4(U+0,u32(0x4fe140ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531d3c:{NFSU2_TR(0x531d3c);
u8 U[4];
w4(U+0,u32(0x503a00ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531d41:{NFSU2_TR(0x531d41);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531d43:{NFSU2_TR(0x531d43);
__builtin_memmove((R+24),(R+4),4);
}
B531d45:{NFSU2_TR(0x531d45);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531d47:{NFSU2_TR(0x531d47);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531d48:{NFSU2_TR(0x531d48);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B531d4c:{NFSU2_TR(0x531d4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x531d51ull));
TAIL_STATIC(0x75c461u,75c);
}
B531d51:L531d51:{c.instructions+=8;NFSU2_TR(0x531d51);
u8 U[4];
w4(U+0,u32(0x4fe140ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531d56:{NFSU2_TR(0x531d56);
u8 U[4];
w4(U+0,u32(0x516b30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531d5b:{NFSU2_TR(0x531d5b);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531d5d:{NFSU2_TR(0x531d5d);
u8 U[4];
w4(U+0,u32(0x434ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531d62:{NFSU2_TR(0x531d62);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x544ull))));
__builtin_memmove((R+0),(U+0),4);
}
B531d68:{NFSU2_TR(0x531d68);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531d69:{NFSU2_TR(0x531d69);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B531d71:{NFSU2_TR(0x531d71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x531d76ull));
TAIL_STATIC(0x75c461u,75c);
}
B531d76:L531d76:{c.instructions+=8;NFSU2_TR(0x531d76);
u8 U[4];
w4(U+0,u32(0x4fe140ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531d7b:{NFSU2_TR(0x531d7b);
u8 U[4];
w4(U+0,u32(0x525cf0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531d80:{NFSU2_TR(0x531d80);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531d82:{NFSU2_TR(0x531d82);
u8 U[4];
w4(U+0,u32(0x7f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531d87:{NFSU2_TR(0x531d87);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5954ull))));
__builtin_memmove((R+4),(U+0),4);
}
B531d8d:{NFSU2_TR(0x531d8d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531d8e:{NFSU2_TR(0x531d8e);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B531d93:{NFSU2_TR(0x531d93);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x531d98ull));
TAIL_STATIC(0x75c461u,75c);
}
B531d98:L531d98:{c.instructions+=8;NFSU2_TR(0x531d98);
u8 U[4];
w4(U+0,u32(0x4fe140ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531d9d:{NFSU2_TR(0x531d9d);
u8 U[4];
w4(U+0,u32(0x525cf0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531da2:{NFSU2_TR(0x531da2);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531da4:{NFSU2_TR(0x531da4);
u8 U[4];
w4(U+0,u32(0x438ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531da9:{NFSU2_TR(0x531da9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8130ull))));
__builtin_memmove((R+8),(U+0),4);
}
B531daf:{NFSU2_TR(0x531daf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531db0:{NFSU2_TR(0x531db0);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B531db5:{NFSU2_TR(0x531db5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x531dbaull));
TAIL_STATIC(0x75c461u,75c);
}
B531dba:L531dba:{c.instructions+=8;NFSU2_TR(0x531dba);
u8 U[4];
w4(U+0,u32(0x4fe140ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531dbf:{NFSU2_TR(0x531dbf);
u8 U[4];
w4(U+0,u32(0x5118e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531dc4:{NFSU2_TR(0x531dc4);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531dc6:{NFSU2_TR(0x531dc6);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531dc8:{NFSU2_TR(0x531dc8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9a84ull))));
__builtin_memmove((R+0),(U+0),4);
}
B531dce:{NFSU2_TR(0x531dce);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531dcf:{NFSU2_TR(0x531dcf);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w1(U+4,u8(0x3ull));
s1(u32(r4(U+0)),r1(U+4));
}
B531dd4:{NFSU2_TR(0x531dd4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x531dd9ull));
TAIL_STATIC(0x75c461u,75c);
}
B531dd9:L531dd9:{c.instructions+=6;NFSU2_TR(0x531dd9);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B531ddd:{NFSU2_TR(0x531ddd);
__builtin_memmove((R+0),(R+24),4);
}
B531ddf:{NFSU2_TR(0x531ddf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B531de0:{NFSU2_TR(0x531de0);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B531de7:{NFSU2_TR(0x531de7);
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
B531dea:{NFSU2_TR(0x531dea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B531df0:L531df0:{c.instructions+=5;NFSU2_TR(0x531df0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10cull))));
}
B531df6:{NFSU2_TR(0x531df6);
__builtin_memmove((R+0),gp(0x864208),4);
}
B531dfb:{NFSU2_TR(0x531dfb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B531dfd:{NFSU2_TR(0x531dfd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+16)),r4(U+0));
}
B531e01:{NFSU2_TR(0x531e01);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L531fcb;}}
}
B531e07:L531e07:{c.instructions+=3;NFSU2_TR(0x531e07);
__builtin_memmove((R+0),gp(0x8383ac),4);
}
B531e0c:{NFSU2_TR(0x531e0c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B531e0e:{NFSU2_TR(0x531e0e);
if(r1(R+518)){{goto L531e24;}}
}
B531e10:L531e10:{c.instructions+=3;NFSU2_TR(0x531e10);
__builtin_memmove((R+0),gp(0x8900d8),4);
}
B531e15:{NFSU2_TR(0x531e15);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B531e17:{NFSU2_TR(0x531e17);
if(r1(R+518)){{goto L531e24;}}
}
B531e19:L531e19:{c.instructions+=2;NFSU2_TR(0x531e19);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B531e1c:{NFSU2_TR(0x531e1c);
if(r1(R+518)){{goto L531e24;}}
}
B531e1e:L531e1e:{c.instructions+=1;NFSU2_TR(0x531e1e);
s4(0x864204,u32(u32(m4(0x864204))+u32(u32(0x1ull))));
}
B531e24:L531e24:{c.instructions+=6;NFSU2_TR(0x531e24);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531e25:{NFSU2_TR(0x531e25);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531e26:{NFSU2_TR(0x531e26);
s4(0x864208,u32(0x1ull));
}
B531e30:{NFSU2_TR(0x531e30);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B531e35:{NFSU2_TR(0x531e35);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
w1(R+519,u8(s8(r1(R+12))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+12))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+12))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B531e37:{NFSU2_TR(0x531e37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x531e3cull));
TAIL_STATIC(0x6f5722u,6f5);
}
B531e3c:L531e3c:{c.instructions+=2;NFSU2_TR(0x531e3c);
u8 U[8];
{SPILL();c.pc=0x531e3cu;V r_=user_op(c,524364,{});SPILL();wv<8>((U+0),r_);}
w4(R+8,u32(u64(r8(U+0))>>32));
w4(R+0,u32(r8(U+0)));
}
B531e3e:{NFSU2_TR(0x531e3e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x531e43ull));
TAIL_STATIC(0x6f56bdu,6f5);
}
B531e43:L531e43:{c.instructions+=2;NFSU2_TR(0x531e43);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531e45:{NFSU2_TR(0x531e45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x531e4aull));
TAIL_STATIC(0x6f5889u,6f5);
}
B531e4a:L531e4a:{c.instructions+=5;NFSU2_TR(0x531e4a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B531e4e:{NFSU2_TR(0x531e4e);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B531e51:{NFSU2_TR(0x531e51);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B531e54:{NFSU2_TR(0x531e54);
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
B531e56:{NFSU2_TR(0x531e56);
if(r1(R+518)){{goto L531ed2;}}
}
B531e58:L531e58:{c.instructions+=1;NFSU2_TR(0x531e58);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x531e5dull));
TAIL_STATIC(0x408cd0u,408);
}
B531e5d:L531e5d:{c.instructions+=2;NFSU2_TR(0x531e5d);
__builtin_memmove((R+24),(R+0),4);
}
B531e5f:{NFSU2_TR(0x531e5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x531e64ull));
TAIL_STATIC(0x5bfa40u,5bf);
}
B531e64:L531e64:{c.instructions+=5;NFSU2_TR(0x531e64);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531e65:{NFSU2_TR(0x531e65);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B531e69:{NFSU2_TR(0x531e69);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B531e6c:{NFSU2_TR(0x531e6c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531e6d:{NFSU2_TR(0x531e6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x531e72ull));
TAIL_STATIC(0x6febf5u,6fe);
}
B531e72:L531e72:{c.instructions+=8;NFSU2_TR(0x531e72);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B531e76:{NFSU2_TR(0x531e76);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B531e79:{NFSU2_TR(0x531e79);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B531e7d:{NFSU2_TR(0x531e7d);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B531e80:{NFSU2_TR(0x531e80);
__builtin_memmove((R+0),gp(0x7faaa8),4);
}
B531e85:{NFSU2_TR(0x531e85);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B531e87:{NFSU2_TR(0x531e87);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B531e8b:{NFSU2_TR(0x531e8b);
if(r1(R+518)){{goto L531eb1;}}
}
B531e8d:L531e8d:{c.instructions+=3;NFSU2_TR(0x531e8d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B531e90:{NFSU2_TR(0x531e90);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B531e92:{NFSU2_TR(0x531e92);
if(r1(R+518)){{goto L531eb1;}}
}
B531e94:L531e94:{c.instructions+=3;NFSU2_TR(0x531e94);
__builtin_memmove((R+0),gp(0x82b884),4);
}
B531e99:{NFSU2_TR(0x531e99);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B531e9b:{NFSU2_TR(0x531e9b);
if(r1(R+518)){{goto L531eb1;}}
}
B531e9d:L531e9d:{c.instructions+=2;NFSU2_TR(0x531e9d);
__builtin_memmove((R+4),(R+24),4);
}
B531e9f:{NFSU2_TR(0x531e9f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x531ea4ull));
TAIL_STATIC(0x525e10u,525);
}
B531ea4:L531ea4:{c.instructions+=3;NFSU2_TR(0x531ea4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B531ea7:{NFSU2_TR(0x531ea7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531ea8:{NFSU2_TR(0x531ea8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x531eadull));
TAIL_STATIC(0x6fe891u,6fe);
}
B531ead:L531ead:{c.instructions+=1;NFSU2_TR(0x531ead);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B531eb1:L531eb1:{c.instructions+=8;NFSU2_TR(0x531eb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B531eb4:{NFSU2_TR(0x531eb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B531eb7:{NFSU2_TR(0x531eb7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B531eb9:{NFSU2_TR(0x531eb9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B531ebc:{NFSU2_TR(0x531ebc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531ebd:{NFSU2_TR(0x531ebd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531ebe:{NFSU2_TR(0x531ebe);
u8 U[4];
w4(U+0,u32(0x8385c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531ec3:{NFSU2_TR(0x531ec3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x531ec8ull));
TAIL_STATIC(0x5cede0u,5ce);
}
B531ec8:L531ec8:{c.instructions+=2;NFSU2_TR(0x531ec8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B531ecb:{NFSU2_TR(0x531ecb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x531ed0ull));
TAIL_STATIC(0x5764b0u,576);
}
B531ed0:L531ed0:{c.instructions+=1;NFSU2_TR(0x531ed0);
{goto L531f1b;}
}
B531ed2:L531ed2:{c.instructions+=3;NFSU2_TR(0x531ed2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B531ed5:{NFSU2_TR(0x531ed5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B531ed7:{NFSU2_TR(0x531ed7);
if(r1(R+518)){{goto L531f26;}}
}
B531ed9:L531ed9:{c.instructions+=2;NFSU2_TR(0x531ed9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B531edc:{NFSU2_TR(0x531edc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x531ee1ull));
TAIL_STATIC(0x6fee07u,6fe);
}
B531ee1:L531ee1:{c.instructions+=2;NFSU2_TR(0x531ee1);
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
B531ee3:{NFSU2_TR(0x531ee3);
if(r1(R+518)){{goto L531f19;}}
}
B531ee5:L531ee5:{c.instructions+=6;NFSU2_TR(0x531ee5);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B531ee9:{NFSU2_TR(0x531ee9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B531eec:{NFSU2_TR(0x531eec);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B531eef:{NFSU2_TR(0x531eef);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531ef0:{NFSU2_TR(0x531ef0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B531ef3:{NFSU2_TR(0x531ef3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x531ef8ull));
TAIL_STATIC(0x70068bu,700);
}
B531ef8:L531ef8:{c.instructions+=7;NFSU2_TR(0x531ef8);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B531efc:{NFSU2_TR(0x531efc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B531eff:{NFSU2_TR(0x531eff);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B531f02:{NFSU2_TR(0x531f02);
__builtin_memmove((R+0),(R+8),4);
}
B531f04:{NFSU2_TR(0x531f04);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531f05:{NFSU2_TR(0x531f05);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B531f09:{NFSU2_TR(0x531f09);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x531f0eull));
TAIL_STATIC(0x6fe7e2u,6fe);
}
B531f0e:L531f0e:{c.instructions+=4;NFSU2_TR(0x531f0e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B531f12:{NFSU2_TR(0x531f12);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B531f15:{NFSU2_TR(0x531f15);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B531f17:{NFSU2_TR(0x531f17);
{goto L531f1b;}
}
B531f19:L531f19:{c.instructions+=1;NFSU2_TR(0x531f19);
w1(R+12,u8(0x1ull));
}
B531f1b:L531f1b:{c.instructions+=4;NFSU2_TR(0x531f1b);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B531f1f:{NFSU2_TR(0x531f1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B531f22:{NFSU2_TR(0x531f22);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B531f24:{NFSU2_TR(0x531f24);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L531f36;}}
}
B531f26:L531f26:{c.instructions+=3;NFSU2_TR(0x531f26);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B531f29:{NFSU2_TR(0x531f29);
w1(R+12,u8(0x1ull));
}
B531f2b:{NFSU2_TR(0x531f2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x531f30ull));
TAIL_STATIC(0x6fe83eu,6fe);
}
B531f30:L531f30:{c.instructions+=2;NFSU2_TR(0x531f30);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B531f34:{NFSU2_TR(0x531f34);
{goto L531f7b;}
}
B531f36:L531f36:{c.instructions+=3;NFSU2_TR(0x531f36);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x15ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B531f39:{NFSU2_TR(0x531f39);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B531f3b:{NFSU2_TR(0x531f3b);
if(r1(R+518)){{goto L531f7f;}}
}
B531f3d:L531f3d:{c.instructions+=8;NFSU2_TR(0x531f3d);
__builtin_memmove((R+0),gp(0x864200),4);
}
B531f42:{NFSU2_TR(0x531f42);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B531f43:{NFSU2_TR(0x531f43);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531f44:{NFSU2_TR(0x531f44);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B531f48:{NFSU2_TR(0x531f48);
u8 U[4];
w4(U+0,u32(0x79b9f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531f4d:{NFSU2_TR(0x531f4d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531f4e:{NFSU2_TR(0x531f4e);
__builtin_memmove(gp(0x864200),(R+0),4);
}
B531f53:{NFSU2_TR(0x531f53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x531f58ull));
TAIL_STATIC(0x4400d0u,440);
}
B531f58:L531f58:{c.instructions+=6;NFSU2_TR(0x531f58);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B531f5c:{NFSU2_TR(0x531f5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B531f5f:{NFSU2_TR(0x531f5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B531f62:{NFSU2_TR(0x531f62);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B531f65:{NFSU2_TR(0x531f65);
__builtin_memmove((R+4),(R+24),4);
}
B531f67:{NFSU2_TR(0x531f67);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x531f6cull));
TAIL_STATIC(0x6f4830u,6f4);
}
B531f6c:L531f6c:{c.instructions+=5;NFSU2_TR(0x531f6c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531f6d:{NFSU2_TR(0x531f6d);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B531f71:{NFSU2_TR(0x531f71);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531f72:{NFSU2_TR(0x531f72);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531f73:{NFSU2_TR(0x531f73);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x531f78ull));
TAIL_STATIC(0x6f96b3u,6f9);
}
B531f78:L531f78:{c.instructions+=1;NFSU2_TR(0x531f78);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B531f7b:L531f7b:{c.instructions+=1;NFSU2_TR(0x531f7b);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B531f7f:L531f7f:{c.instructions+=3;NFSU2_TR(0x531f7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B531f82:{NFSU2_TR(0x531f82);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B531f84:{NFSU2_TR(0x531f84);
if(r1(R+518)){{goto L531f9f;}}
}
B531f86:L531f86:{c.instructions+=2;NFSU2_TR(0x531f86);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B531f88:{NFSU2_TR(0x531f88);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L531f9f;}}
}
B531f8a:L531f8a:{c.instructions+=6;NFSU2_TR(0x531f8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B531f8d:{NFSU2_TR(0x531f8d);
__builtin_memmove((R+8),gp(0x8383a0),4);
}
B531f93:{NFSU2_TR(0x531f93);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531f94:{NFSU2_TR(0x531f94);
u8 U[4];
w4(U+0,u32(0x8385c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531f99:{NFSU2_TR(0x531f99);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531f9a:{NFSU2_TR(0x531f9a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x531f9full));
TAIL_STATIC(0x5bf9b0u,5bf);
}
B531f9f:L531f9f:{c.instructions+=5;NFSU2_TR(0x531f9f);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B531fa3:{NFSU2_TR(0x531fa3);
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
B531fa5:{NFSU2_TR(0x531fa5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B531fa6:{NFSU2_TR(0x531fa6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B531fa7:{NFSU2_TR(0x531fa7);
if(r1(R+518)){{goto L531fc1;}}
}
B531fa9:L531fa9:{c.instructions+=1;NFSU2_TR(0x531fa9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x531faeull));
TAIL_STATIC(0x4022c0u,402);
}
B531fae:L531fae:{c.instructions+=4;NFSU2_TR(0x531fae);
s4(0x864208,u32(0x0ull));
}
B531fb8:{NFSU2_TR(0x531fb8);
w1(R+0,u8(0x1ull));
}
B531fba:{NFSU2_TR(0x531fba);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x10cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x10cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B531fc0:{NFSU2_TR(0x531fc0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B531fc1:L531fc1:{c.instructions+=1;NFSU2_TR(0x531fc1);
s4(0x864208,u32(0x0ull));
}
B531fcb:L531fcb:{c.instructions+=3;NFSU2_TR(0x531fcb);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B531fcd:{NFSU2_TR(0x531fcd);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x10cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x10cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B531fd3:{NFSU2_TR(0x531fd3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B531fe0:L531fe0:{c.instructions+=3;NFSU2_TR(0x531fe0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531fe1:{NFSU2_TR(0x531fe1);
__builtin_memmove((R+24),(R+4),4);
}
B531fe3:{NFSU2_TR(0x531fe3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x531fe8ull));
TAIL_STATIC(0x51ab10u,51a);
}
B531fe8:L531fe8:{c.instructions+=2;NFSU2_TR(0x531fe8);
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
B531fed:{NFSU2_TR(0x531fed);
if(r1(R+518)){TAIL_STATIC(0x532002u,532);}
}
B531fef:L531fef:{c.instructions+=4;NFSU2_TR(0x531fef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B531ff1:{NFSU2_TR(0x531ff1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531ff3:{NFSU2_TR(0x531ff3);
__builtin_memmove((R+4),(R+24),4);
}
B531ff5:{NFSU2_TR(0x531ff5);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x531ff7ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B531ff7:L531ff7:{c.instructions+=3;NFSU2_TR(0x531ff7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B531ff8:{NFSU2_TR(0x531ff8);
w4(R+4,u32(0x839bd0ull));
}
B531ffd:{NFSU2_TR(0x531ffd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x532002ull));
TAIL_STATIC(0x525bf0u,525);
}
XIT:NFSU2_TR_EXIT(0x531,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
