#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_583(u8* __restrict R,Cpu& c);
u32 body_598(u8* __restrict R,Cpu& c);
u32 body_741(u8* __restrict R,Cpu& c);
u32 body_742(u8* __restrict R,Cpu& c);
u32 body_743(u8* __restrict R,Cpu& c);
u32 body_747(u8* __restrict R,Cpu& c);
u32 body_749(u8* __restrict R,Cpu& c);
u32 body_74b(u8* __restrict R,Cpu& c);
u32 body_755(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_75f(u8* __restrict R,Cpu& c);
u32 body_761(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x748,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x748,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_748(u8* __restrict R,Cpu& c);
u32 page_748(Cpu& c){return body_748(c.regs.data(),c);}
__attribute__((noinline)) u32 body_748(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x748002:goto L748002;
case 0x748006:c.instructions+=17;goto B748006;
case 0x748009:c.instructions+=16;goto B748009;
case 0x74800d:c.instructions+=15;goto B74800d;
case 0x748010:c.instructions+=14;goto B748010;
case 0x748012:c.instructions+=13;goto B748012;
case 0x748015:c.instructions+=12;goto B748015;
case 0x748018:c.instructions+=11;goto B748018;
case 0x74801a:c.instructions+=10;goto B74801a;
case 0x74801d:c.instructions+=9;goto B74801d;
case 0x74801f:c.instructions+=8;goto B74801f;
case 0x748020:c.instructions+=7;goto B748020;
case 0x748021:c.instructions+=6;goto B748021;
case 0x748025:c.instructions+=5;goto B748025;
case 0x748026:c.instructions+=4;goto B748026;
case 0x748027:c.instructions+=3;goto B748027;
case 0x748028:c.instructions+=2;goto B748028;
case 0x748029:c.instructions+=1;goto B748029;
case 0x74802c:goto L74802c;
case 0x74802e:c.instructions+=3;goto B74802e;
case 0x748031:c.instructions+=2;goto B748031;
case 0x748033:c.instructions+=1;goto B748033;
case 0x748035:goto L748035;
case 0x748038:c.instructions+=3;goto B748038;
case 0x74803e:c.instructions+=2;goto B74803e;
case 0x748041:c.instructions+=1;goto B748041;
case 0x748044:goto L748044;
case 0x748046:c.instructions+=1;goto B748046;
case 0x748048:goto L748048;
case 0x74804a:c.instructions+=2;goto B74804a;
case 0x74804d:c.instructions+=1;goto B74804d;
case 0x74804f:goto L74804f;
case 0x748052:goto L748052;
case 0x748056:c.instructions+=14;goto B748056;
case 0x74805c:c.instructions+=13;goto B74805c;
case 0x74805d:c.instructions+=12;goto B74805d;
case 0x74805f:c.instructions+=11;goto B74805f;
case 0x748065:c.instructions+=10;goto B748065;
case 0x74806b:c.instructions+=9;goto B74806b;
case 0x74806f:c.instructions+=8;goto B74806f;
case 0x748072:c.instructions+=7;goto B748072;
case 0x748073:c.instructions+=6;goto B748073;
case 0x748075:c.instructions+=5;goto B748075;
case 0x748078:c.instructions+=4;goto B748078;
case 0x74807a:c.instructions+=3;goto B74807a;
case 0x74807d:c.instructions+=2;goto B74807d;
case 0x748080:c.instructions+=1;goto B748080;
case 0x748082:goto L748082;
case 0x748084:c.instructions+=3;goto B748084;
case 0x748086:c.instructions+=2;goto B748086;
case 0x748089:c.instructions+=1;goto B748089;
case 0x74808b:goto L74808b;
case 0x74808e:c.instructions+=1;goto B74808e;
case 0x748091:goto L748091;
case 0x748094:c.instructions+=2;goto B748094;
case 0x748096:c.instructions+=1;goto B748096;
case 0x748098:goto L748098;
case 0x74809a:c.instructions+=3;goto B74809a;
case 0x74809c:c.instructions+=2;goto B74809c;
case 0x74809f:c.instructions+=1;goto B74809f;
case 0x7480a1:goto L7480a1;
case 0x7480a4:c.instructions+=1;goto B7480a4;
case 0x7480a7:goto L7480a7;
case 0x7480a8:c.instructions+=4;goto B7480a8;
case 0x7480a9:c.instructions+=3;goto B7480a9;
case 0x7480aa:c.instructions+=2;goto B7480aa;
case 0x7480ad:c.instructions+=1;goto B7480ad;
case 0x7480b0:goto L7480b0;
case 0x7480b3:c.instructions+=7;goto B7480b3;
case 0x7480b4:c.instructions+=6;goto B7480b4;
case 0x7480b6:c.instructions+=5;goto B7480b6;
case 0x7480bc:c.instructions+=4;goto B7480bc;
case 0x7480c2:c.instructions+=3;goto B7480c2;
case 0x7480c4:c.instructions+=2;goto B7480c4;
case 0x7480ca:c.instructions+=1;goto B7480ca;
case 0x7480cc:goto L7480cc;
case 0x7480ce:c.instructions+=3;goto B7480ce;
case 0x7480cf:c.instructions+=2;goto B7480cf;
case 0x7480d2:c.instructions+=1;goto B7480d2;
case 0x7480d3:goto L7480d3;
case 0x7480d4:c.instructions+=11;goto B7480d4;
case 0x7480d5:c.instructions+=10;goto B7480d5;
case 0x7480db:c.instructions+=9;goto B7480db;
case 0x7480df:c.instructions+=8;goto B7480df;
case 0x7480e0:c.instructions+=7;goto B7480e0;
case 0x7480e2:c.instructions+=6;goto B7480e2;
case 0x7480e4:c.instructions+=5;goto B7480e4;
case 0x7480e7:c.instructions+=4;goto B7480e7;
case 0x7480ec:c.instructions+=3;goto B7480ec;
case 0x7480ed:c.instructions+=2;goto B7480ed;
case 0x7480ee:c.instructions+=1;goto B7480ee;
case 0x7480f1:goto L7480f1;
case 0x7480f3:c.instructions+=3;goto B7480f3;
case 0x7480f6:c.instructions+=2;goto B7480f6;
case 0x7480f8:c.instructions+=1;goto B7480f8;
case 0x7480fe:goto L7480fe;
case 0x748103:c.instructions+=1;goto B748103;
case 0x748109:goto L748109;
case 0x74810d:c.instructions+=4;goto B74810d;
case 0x74810f:c.instructions+=3;goto B74810f;
case 0x748110:c.instructions+=2;goto B748110;
case 0x748111:c.instructions+=1;goto B748111;
case 0x748114:goto L748114;
case 0x748117:c.instructions+=12;goto B748117;
case 0x74811a:c.instructions+=11;goto B74811a;
case 0x74811d:c.instructions+=10;goto B74811d;
case 0x748120:c.instructions+=9;goto B748120;
case 0x748121:c.instructions+=8;goto B748121;
case 0x748124:c.instructions+=7;goto B748124;
case 0x748127:c.instructions+=6;goto B748127;
case 0x74812a:c.instructions+=5;goto B74812a;
case 0x74812e:c.instructions+=4;goto B74812e;
case 0x748130:c.instructions+=3;goto B748130;
case 0x748132:c.instructions+=2;goto B748132;
case 0x748135:c.instructions+=1;goto B748135;
case 0x748137:goto L748137;
case 0x748139:c.instructions+=3;goto B748139;
case 0x74813b:c.instructions+=2;goto B74813b;
case 0x74813e:c.instructions+=1;goto B74813e;
case 0x748140:goto L748140;
case 0x748143:c.instructions+=1;goto B748143;
case 0x748146:goto L748146;
case 0x748149:c.instructions+=2;goto B748149;
case 0x74814b:c.instructions+=1;goto B74814b;
case 0x74814d:goto L74814d;
case 0x74814f:c.instructions+=3;goto B74814f;
case 0x748151:c.instructions+=2;goto B748151;
case 0x748154:c.instructions+=1;goto B748154;
case 0x748156:goto L748156;
case 0x748159:c.instructions+=1;goto B748159;
case 0x74815c:goto L74815c;
case 0x748160:c.instructions+=7;goto B748160;
case 0x748162:c.instructions+=6;goto B748162;
case 0x748166:c.instructions+=5;goto B748166;
case 0x748169:c.instructions+=4;goto B748169;
case 0x74816d:c.instructions+=3;goto B74816d;
case 0x748170:c.instructions+=2;goto B748170;
case 0x748173:c.instructions+=1;goto B748173;
case 0x748179:goto L748179;
case 0x74817c:c.instructions+=15;goto B74817c;
case 0x748180:c.instructions+=14;goto B748180;
case 0x748183:c.instructions+=13;goto B748183;
case 0x748187:c.instructions+=12;goto B748187;
case 0x748189:c.instructions+=11;goto B748189;
case 0x74818b:c.instructions+=10;goto B74818b;
case 0x74818e:c.instructions+=9;goto B74818e;
case 0x748191:c.instructions+=8;goto B748191;
case 0x748195:c.instructions+=7;goto B748195;
case 0x748199:c.instructions+=6;goto B748199;
case 0x74819d:c.instructions+=5;goto B74819d;
case 0x7481a0:c.instructions+=4;goto B7481a0;
case 0x7481a2:c.instructions+=3;goto B7481a2;
case 0x7481a4:c.instructions+=2;goto B7481a4;
case 0x7481a7:c.instructions+=1;goto B7481a7;
case 0x7481a9:goto L7481a9;
case 0x7481ae:goto L7481ae;
case 0x7481af:c.instructions+=2;goto B7481af;
case 0x7481b2:c.instructions+=1;goto B7481b2;
case 0x7481b7:goto L7481b7;
case 0x7481ba:c.instructions+=3;goto B7481ba;
case 0x7481be:c.instructions+=2;goto B7481be;
case 0x7481bf:c.instructions+=1;goto B7481bf;
case 0x7481c4:goto L7481c4;
case 0x7481c7:c.instructions+=3;goto B7481c7;
case 0x7481c8:c.instructions+=2;goto B7481c8;
case 0x7481cb:c.instructions+=1;goto B7481cb;
case 0x7481d0:goto L7481d0;
case 0x7481d4:c.instructions+=4;goto B7481d4;
case 0x7481d7:c.instructions+=3;goto B7481d7;
case 0x7481da:c.instructions+=2;goto B7481da;
case 0x7481dd:c.instructions+=1;goto B7481dd;
case 0x7481e3:goto L7481e3;
case 0x7481e8:c.instructions+=1;goto B7481e8;
case 0x7481ee:goto L7481ee;
case 0x7481f4:c.instructions+=2;goto B7481f4;
case 0x7481f7:c.instructions+=1;goto B7481f7;
case 0x7481f9:goto L7481f9;
case 0x7481fe:c.instructions+=6;goto B7481fe;
case 0x748200:c.instructions+=5;goto B748200;
case 0x748204:c.instructions+=4;goto B748204;
case 0x748207:c.instructions+=3;goto B748207;
case 0x748209:c.instructions+=2;goto B748209;
case 0x74820b:c.instructions+=1;goto B74820b;
case 0x74820d:goto L74820d;
case 0x74820f:goto L74820f;
case 0x748212:c.instructions+=19;goto B748212;
case 0x748215:c.instructions+=18;goto B748215;
case 0x74821a:c.instructions+=17;goto B74821a;
case 0x74821c:c.instructions+=16;goto B74821c;
case 0x74821d:c.instructions+=15;goto B74821d;
case 0x748223:c.instructions+=14;goto B748223;
case 0x748225:c.instructions+=13;goto B748225;
case 0x748228:c.instructions+=12;goto B748228;
case 0x74822b:c.instructions+=11;goto B74822b;
case 0x74822e:c.instructions+=10;goto B74822e;
case 0x748233:c.instructions+=9;goto B748233;
case 0x748235:c.instructions+=8;goto B748235;
case 0x748238:c.instructions+=7;goto B748238;
case 0x74823a:c.instructions+=6;goto B74823a;
case 0x74823b:c.instructions+=5;goto B74823b;
case 0x748241:c.instructions+=4;goto B748241;
case 0x748243:c.instructions+=3;goto B748243;
case 0x748246:c.instructions+=2;goto B748246;
case 0x748249:c.instructions+=1;goto B748249;
case 0x74824b:goto L74824b;
case 0x74824e:c.instructions+=1;goto B74824e;
case 0x748255:goto L748255;
case 0x748258:c.instructions+=9;goto B748258;
case 0x74825b:c.instructions+=8;goto B74825b;
case 0x74825e:c.instructions+=7;goto B74825e;
case 0x748260:c.instructions+=6;goto B748260;
case 0x748263:c.instructions+=5;goto B748263;
case 0x748267:c.instructions+=4;goto B748267;
case 0x748269:c.instructions+=3;goto B748269;
case 0x74826b:c.instructions+=2;goto B74826b;
case 0x748271:c.instructions+=1;goto B748271;
case 0x748273:goto L748273;
case 0x748276:c.instructions+=9;goto B748276;
case 0x748279:c.instructions+=8;goto B748279;
case 0x74827a:c.instructions+=7;goto B74827a;
case 0x74827d:c.instructions+=6;goto B74827d;
case 0x748280:c.instructions+=5;goto B748280;
case 0x748285:c.instructions+=4;goto B748285;
case 0x74828a:c.instructions+=3;goto B74828a;
case 0x74828f:c.instructions+=2;goto B74828f;
case 0x748296:c.instructions+=1;goto B748296;
case 0x748298:goto L748298;
case 0x74829b:c.instructions+=4;goto B74829b;
case 0x7482a0:c.instructions+=3;goto B7482a0;
case 0x7482a2:c.instructions+=2;goto B7482a2;
case 0x7482a6:c.instructions+=1;goto B7482a6;
case 0x7482a8:goto L7482a8;
case 0x7482ac:goto L7482ac;
case 0x7482b0:c.instructions+=2;goto B7482b0;
case 0x7482b2:c.instructions+=1;goto B7482b2;
case 0x7482b4:goto L7482b4;
case 0x7482b8:goto L7482b8;
case 0x7482bc:c.instructions+=10;goto B7482bc;
case 0x7482c0:c.instructions+=9;goto B7482c0;
case 0x7482c3:c.instructions+=8;goto B7482c3;
case 0x7482c6:c.instructions+=7;goto B7482c6;
case 0x7482c8:c.instructions+=6;goto B7482c8;
case 0x7482cb:c.instructions+=5;goto B7482cb;
case 0x7482cc:c.instructions+=4;goto B7482cc;
case 0x7482ce:c.instructions+=3;goto B7482ce;
case 0x7482cf:c.instructions+=2;goto B7482cf;
case 0x7482d3:c.instructions+=1;goto B7482d3;
case 0x7482d7:goto L7482d7;
case 0x7482db:c.instructions+=1;goto B7482db;
case 0x7482de:goto L7482de;
case 0x7482e1:c.instructions+=3;goto B7482e1;
case 0x7482e3:c.instructions+=2;goto B7482e3;
case 0x7482e4:c.instructions+=1;goto B7482e4;
case 0x7482e6:goto L7482e6;
case 0x7482e8:c.instructions+=3;goto B7482e8;
case 0x7482ec:c.instructions+=2;goto B7482ec;
case 0x7482ef:c.instructions+=1;goto B7482ef;
case 0x7482f1:goto L7482f1;
case 0x7482f2:c.instructions+=3;goto B7482f2;
case 0x7482f6:c.instructions+=2;goto B7482f6;
case 0x7482f8:c.instructions+=1;goto B7482f8;
case 0x7482fd:goto L7482fd;
case 0x7482fe:c.instructions+=5;goto B7482fe;
case 0x7482ff:c.instructions+=4;goto B7482ff;
case 0x748304:c.instructions+=3;goto B748304;
case 0x748305:c.instructions+=2;goto B748305;
case 0x748308:c.instructions+=1;goto B748308;
case 0x748309:goto L748309;
case 0x74830b:c.instructions+=1;goto B74830b;
case 0x74830d:goto L74830d;
case 0x74830f:c.instructions+=2;goto B74830f;
case 0x748310:c.instructions+=1;goto B748310;
case 0x748313:goto L748313;
case 0x748316:c.instructions+=6;goto B748316;
case 0x748317:c.instructions+=5;goto B748317;
case 0x748318:c.instructions+=4;goto B748318;
case 0x74831d:c.instructions+=3;goto B74831d;
case 0x74831e:c.instructions+=2;goto B74831e;
case 0x748321:c.instructions+=1;goto B748321;
case 0x748322:goto L748322;
case 0x748324:c.instructions+=1;goto B748324;
case 0x748326:goto L748326;
case 0x748328:c.instructions+=5;goto B748328;
case 0x74832c:c.instructions+=4;goto B74832c;
case 0x74832f:c.instructions+=3;goto B74832f;
case 0x748334:c.instructions+=2;goto B748334;
case 0x748336:c.instructions+=1;goto B748336;
case 0x74833c:goto L74833c;
case 0x74833d:c.instructions+=5;goto B74833d;
case 0x74833e:c.instructions+=4;goto B74833e;
case 0x748343:c.instructions+=3;goto B748343;
case 0x748344:c.instructions+=2;goto B748344;
case 0x748347:c.instructions+=1;goto B748347;
case 0x748348:goto L748348;
case 0x748349:c.instructions+=5;goto B748349;
case 0x74834a:c.instructions+=4;goto B74834a;
case 0x74834c:c.instructions+=3;goto B74834c;
case 0x74834d:c.instructions+=2;goto B74834d;
case 0x748350:c.instructions+=1;goto B748350;
case 0x748360:goto L748360;
case 0x748366:c.instructions+=9;goto B748366;
case 0x74836b:c.instructions+=8;goto B74836b;
case 0x74836c:c.instructions+=7;goto B74836c;
case 0x74836d:c.instructions+=6;goto B74836d;
case 0x74836e:c.instructions+=5;goto B74836e;
case 0x748375:c.instructions+=4;goto B748375;
case 0x748377:c.instructions+=3;goto B748377;
case 0x748379:c.instructions+=2;goto B748379;
case 0x74837e:c.instructions+=1;goto B74837e;
case 0x748380:goto L748380;
case 0x748386:c.instructions+=1;goto B748386;
case 0x748388:goto L748388;
case 0x74838a:c.instructions+=2;goto B74838a;
case 0x748390:c.instructions+=1;goto B748390;
case 0x748395:goto L748395;
case 0x748397:c.instructions+=2;goto B748397;
case 0x74839d:c.instructions+=1;goto B74839d;
case 0x74839f:goto L74839f;
case 0x7483a5:c.instructions+=1;goto B7483a5;
case 0x7483a7:goto L7483a7;
case 0x7483a9:c.instructions+=3;goto B7483a9;
case 0x7483aa:c.instructions+=2;goto B7483aa;
case 0x7483b0:c.instructions+=1;goto B7483b0;
case 0x7483b3:goto L7483b3;
case 0x7483b6:c.instructions+=10;goto B7483b6;
case 0x7483b8:c.instructions+=9;goto B7483b8;
case 0x7483bb:c.instructions+=8;goto B7483bb;
case 0x7483be:c.instructions+=7;goto B7483be;
case 0x7483c0:c.instructions+=6;goto B7483c0;
case 0x7483c3:c.instructions+=5;goto B7483c3;
case 0x7483c4:c.instructions+=4;goto B7483c4;
case 0x7483c6:c.instructions+=3;goto B7483c6;
case 0x7483cc:c.instructions+=2;goto B7483cc;
case 0x7483cf:c.instructions+=1;goto B7483cf;
case 0x7483d1:goto L7483d1;
case 0x7483d7:c.instructions+=30;goto B7483d7;
case 0x7483dd:c.instructions+=29;goto B7483dd;
case 0x7483df:c.instructions+=28;goto B7483df;
case 0x7483e1:c.instructions+=27;goto B7483e1;
case 0x7483e3:c.instructions+=26;goto B7483e3;
case 0x7483e4:c.instructions+=25;goto B7483e4;
case 0x7483e6:c.instructions+=24;goto B7483e6;
case 0x7483ec:c.instructions+=23;goto B7483ec;
case 0x7483ef:c.instructions+=22;goto B7483ef;
case 0x7483f5:c.instructions+=21;goto B7483f5;
case 0x7483fb:c.instructions+=20;goto B7483fb;
case 0x7483fd:c.instructions+=19;goto B7483fd;
case 0x748403:c.instructions+=18;goto B748403;
case 0x748409:c.instructions+=17;goto B748409;
case 0x74840c:c.instructions+=16;goto B74840c;
case 0x74840f:c.instructions+=15;goto B74840f;
case 0x748411:c.instructions+=14;goto B748411;
case 0x748417:c.instructions+=13;goto B748417;
case 0x74841a:c.instructions+=12;goto B74841a;
case 0x74841c:c.instructions+=11;goto B74841c;
case 0x74841f:c.instructions+=10;goto B74841f;
case 0x748425:c.instructions+=9;goto B748425;
case 0x748427:c.instructions+=8;goto B748427;
case 0x748429:c.instructions+=7;goto B748429;
case 0x74842c:c.instructions+=6;goto B74842c;
case 0x74842f:c.instructions+=5;goto B74842f;
case 0x748435:c.instructions+=4;goto B748435;
case 0x748438:c.instructions+=3;goto B748438;
case 0x74843e:c.instructions+=2;goto B74843e;
case 0x748441:c.instructions+=1;goto B748441;
case 0x748442:goto L748442;
case 0x748445:c.instructions+=2;goto B748445;
case 0x748447:c.instructions+=1;goto B748447;
case 0x748449:goto L748449;
case 0x74844b:c.instructions+=3;goto B74844b;
case 0x74844d:c.instructions+=2;goto B74844d;
case 0x748450:c.instructions+=1;goto B748450;
case 0x748452:goto L748452;
case 0x748455:c.instructions+=1;goto B748455;
case 0x748458:goto L748458;
case 0x74845b:c.instructions+=2;goto B74845b;
case 0x74845d:c.instructions+=1;goto B74845d;
case 0x74845f:goto L74845f;
case 0x748461:c.instructions+=3;goto B748461;
case 0x748463:c.instructions+=2;goto B748463;
case 0x748466:c.instructions+=1;goto B748466;
case 0x748468:goto L748468;
case 0x74846b:c.instructions+=4;goto B74846b;
case 0x74846d:c.instructions+=3;goto B74846d;
case 0x74846f:c.instructions+=2;goto B74846f;
case 0x748472:c.instructions+=1;goto B748472;
case 0x748474:goto L748474;
case 0x748477:c.instructions+=1;goto B748477;
case 0x74847a:goto L74847a;
case 0x74847d:c.instructions+=2;goto B74847d;
case 0x74847f:c.instructions+=1;goto B74847f;
case 0x748481:goto L748481;
case 0x748483:c.instructions+=3;goto B748483;
case 0x748485:c.instructions+=2;goto B748485;
case 0x748488:c.instructions+=1;goto B748488;
case 0x74848a:goto L74848a;
case 0x74848d:c.instructions+=1;goto B74848d;
case 0x748490:goto L748490;
case 0x748493:c.instructions+=2;goto B748493;
case 0x748495:c.instructions+=1;goto B748495;
case 0x748497:goto L748497;
case 0x748499:c.instructions+=3;goto B748499;
case 0x74849b:c.instructions+=2;goto B74849b;
case 0x74849e:c.instructions+=1;goto B74849e;
case 0x7484a0:goto L7484a0;
case 0x7484a3:c.instructions+=4;goto B7484a3;
case 0x7484a5:c.instructions+=3;goto B7484a5;
case 0x7484a7:c.instructions+=2;goto B7484a7;
case 0x7484aa:c.instructions+=1;goto B7484aa;
case 0x7484ac:goto L7484ac;
case 0x7484af:c.instructions+=1;goto B7484af;
case 0x7484b2:goto L7484b2;
case 0x7484b5:c.instructions+=2;goto B7484b5;
case 0x7484bb:c.instructions+=1;goto B7484bb;
case 0x7484bd:goto L7484bd;
case 0x7484bf:c.instructions+=5;goto B7484bf;
case 0x7484c0:c.instructions+=4;goto B7484c0;
case 0x7484c1:c.instructions+=3;goto B7484c1;
case 0x7484c2:c.instructions+=2;goto B7484c2;
case 0x7484c3:c.instructions+=1;goto B7484c3;
case 0x7484c6:goto L7484c6;
case 0x7484c9:c.instructions+=2;goto B7484c9;
case 0x7484cb:c.instructions+=1;goto B7484cb;
case 0x7484cd:goto L7484cd;
case 0x7484d0:c.instructions+=1;goto B7484d0;
case 0x7484d2:goto L7484d2;
case 0x7484d6:c.instructions+=3;goto B7484d6;
case 0x7484db:c.instructions+=2;goto B7484db;
case 0x7484e0:c.instructions+=1;goto B7484e0;
case 0x7484e5:goto L7484e5;
case 0x7484ec:c.instructions+=4;goto B7484ec;
case 0x7484ed:c.instructions+=3;goto B7484ed;
case 0x7484ee:c.instructions+=2;goto B7484ee;
case 0x7484ef:c.instructions+=1;goto B7484ef;
case 0x7484f4:goto L7484f4;
case 0x7484fa:c.instructions+=1;goto B7484fa;
case 0x748500:goto L748500;
case 0x748504:c.instructions+=6;goto B748504;
case 0x748505:c.instructions+=5;goto B748505;
case 0x748508:c.instructions+=4;goto B748508;
case 0x748509:c.instructions+=3;goto B748509;
case 0x74850f:c.instructions+=2;goto B74850f;
case 0x748510:c.instructions+=1;goto B748510;
case 0x748515:goto L748515;
case 0x748518:c.instructions+=2;goto B748518;
case 0x74851a:c.instructions+=1;goto B74851a;
case 0x74851c:goto L74851c;
case 0x74851e:c.instructions+=1;goto B74851e;
case 0x748523:goto L748523;
case 0x748529:c.instructions+=2;goto B748529;
case 0x74852b:c.instructions+=1;goto B74852b;
case 0x74852d:goto L74852d;
case 0x748533:c.instructions+=2;goto B748533;
case 0x748535:c.instructions+=1;goto B748535;
case 0x748537:goto L748537;
case 0x74853d:c.instructions+=2;goto B74853d;
case 0x74853f:c.instructions+=1;goto B74853f;
case 0x748541:goto L748541;
case 0x748547:c.instructions+=4;goto B748547;
case 0x748549:c.instructions+=3;goto B748549;
case 0x74854a:c.instructions+=2;goto B74854a;
case 0x748554:c.instructions+=1;goto B748554;
case 0x748556:goto L748556;
case 0x748559:goto L748559;
case 0x74855a:c.instructions+=1;goto B74855a;
case 0x74855f:goto L74855f;
case 0x748562:c.instructions+=3;goto B748562;
case 0x748563:c.instructions+=2;goto B748563;
case 0x748564:c.instructions+=1;goto B748564;
case 0x748565:goto L748565;
case 0x74856b:c.instructions+=5;goto B74856b;
case 0x74856c:c.instructions+=4;goto B74856c;
case 0x74856d:c.instructions+=3;goto B74856d;
case 0x748573:c.instructions+=2;goto B748573;
case 0x748574:c.instructions+=1;goto B748574;
case 0x748580:goto L748580;
case 0x748581:c.instructions+=4;goto B748581;
case 0x748582:c.instructions+=3;goto B748582;
case 0x748583:c.instructions+=2;goto B748583;
case 0x748588:c.instructions+=1;goto B748588;
case 0x74858d:goto L74858d;
case 0x748591:c.instructions+=4;goto B748591;
case 0x748593:c.instructions+=3;goto B748593;
case 0x748595:c.instructions+=2;goto B748595;
case 0x74859a:c.instructions+=1;goto B74859a;
case 0x74859c:goto L74859c;
case 0x74859e:goto L74859e;
case 0x7485a2:c.instructions+=6;goto B7485a2;
case 0x7485a6:c.instructions+=5;goto B7485a6;
case 0x7485a9:c.instructions+=4;goto B7485a9;
case 0x7485af:c.instructions+=3;goto B7485af;
case 0x7485b1:c.instructions+=2;goto B7485b1;
case 0x7485b4:c.instructions+=1;goto B7485b4;
case 0x7485b6:goto L7485b6;
case 0x7485bb:goto L7485bb;
case 0x7485bc:c.instructions+=2;goto B7485bc;
case 0x7485bd:c.instructions+=1;goto B7485bd;
case 0x7485c2:goto L7485c2;
case 0x7485c4:c.instructions+=6;goto B7485c4;
case 0x7485c5:c.instructions+=5;goto B7485c5;
case 0x7485cb:c.instructions+=4;goto B7485cb;
case 0x7485d1:c.instructions+=3;goto B7485d1;
case 0x7485d4:c.instructions+=2;goto B7485d4;
case 0x7485d7:c.instructions+=1;goto B7485d7;
case 0x7485da:goto L7485da;
case 0x7485dd:c.instructions+=14;goto B7485dd;
case 0x7485e0:c.instructions+=13;goto B7485e0;
case 0x7485e3:c.instructions+=12;goto B7485e3;
case 0x7485e6:c.instructions+=11;goto B7485e6;
case 0x7485e9:c.instructions+=10;goto B7485e9;
case 0x7485ec:c.instructions+=9;goto B7485ec;
case 0x7485ef:c.instructions+=8;goto B7485ef;
case 0x7485f2:c.instructions+=7;goto B7485f2;
case 0x7485f5:c.instructions+=6;goto B7485f5;
case 0x7485f8:c.instructions+=5;goto B7485f8;
case 0x7485fd:c.instructions+=4;goto B7485fd;
case 0x748602:c.instructions+=3;goto B748602;
case 0x748607:c.instructions+=2;goto B748607;
case 0x748608:c.instructions+=1;goto B748608;
case 0x748610:goto L748610;
case 0x748614:c.instructions+=6;goto B748614;
case 0x748617:c.instructions+=5;goto B748617;
case 0x74861b:c.instructions+=4;goto B74861b;
case 0x74861f:c.instructions+=3;goto B74861f;
case 0x748622:c.instructions+=2;goto B748622;
case 0x748623:c.instructions+=1;goto B748623;
case 0x748625:goto L748625;
case 0x74862b:c.instructions+=2;goto B74862b;
case 0x74862c:c.instructions+=1;goto B74862c;
case 0x748631:goto L748631;
case 0x748636:c.instructions+=3;goto B748636;
case 0x748637:c.instructions+=2;goto B748637;
case 0x74863a:c.instructions+=1;goto B74863a;
case 0x74863d:goto L74863d;
case 0x748640:c.instructions+=6;goto B748640;
case 0x748646:c.instructions+=5;goto B748646;
case 0x748647:c.instructions+=4;goto B748647;
case 0x748649:c.instructions+=3;goto B748649;
case 0x74864a:c.instructions+=2;goto B74864a;
case 0x74864b:c.instructions+=1;goto B74864b;
case 0x748650:goto L748650;
case 0x748651:c.instructions+=5;goto B748651;
case 0x748655:c.instructions+=4;goto B748655;
case 0x748657:c.instructions+=3;goto B748657;
case 0x748659:c.instructions+=2;goto B748659;
case 0x74865a:c.instructions+=1;goto B74865a;
case 0x74865d:goto L74865d;
case 0x748660:c.instructions+=3;goto B748660;
case 0x748663:c.instructions+=2;goto B748663;
case 0x748665:c.instructions+=1;goto B748665;
case 0x748667:goto L748667;
case 0x748669:c.instructions+=2;goto B748669;
case 0x74866a:c.instructions+=1;goto B74866a;
case 0x74866d:goto L74866d;
case 0x748670:goto L748670;
case 0x748676:c.instructions+=2;goto B748676;
case 0x748677:c.instructions+=1;goto B748677;
case 0x74867c:goto L74867c;
case 0x748682:c.instructions+=2;goto B748682;
case 0x748683:c.instructions+=1;goto B748683;
case 0x748688:goto L748688;
case 0x748689:c.instructions+=1;goto B748689;
case 0x74868e:goto L74868e;
case 0x748691:c.instructions+=2;goto B748691;
case 0x748692:c.instructions+=1;goto B748692;
case 0x7486a0:goto L7486a0;
case 0x7486a1:c.instructions+=4;goto B7486a1;
case 0x7486a5:c.instructions+=3;goto B7486a5;
case 0x7486a6:c.instructions+=2;goto B7486a6;
case 0x7486a9:c.instructions+=1;goto B7486a9;
case 0x7486b0:goto L7486b0;
case 0x7486b3:c.instructions+=4;goto B7486b3;
case 0x7486b7:c.instructions+=3;goto B7486b7;
case 0x7486b9:c.instructions+=2;goto B7486b9;
case 0x7486ba:c.instructions+=1;goto B7486ba;
case 0x7486bd:goto L7486bd;
case 0x7486bf:c.instructions+=5;goto B7486bf;
case 0x7486c2:c.instructions+=4;goto B7486c2;
case 0x7486c6:c.instructions+=3;goto B7486c6;
case 0x7486c9:c.instructions+=2;goto B7486c9;
case 0x7486cb:c.instructions+=1;goto B7486cb;
case 0x7486cd:goto L7486cd;
case 0x7486cf:c.instructions+=2;goto B7486cf;
case 0x7486d0:c.instructions+=1;goto B7486d0;
case 0x7486d3:goto L7486d3;
case 0x7486d6:c.instructions+=5;goto B7486d6;
case 0x7486d9:c.instructions+=4;goto B7486d9;
case 0x7486dc:c.instructions+=3;goto B7486dc;
case 0x7486df:c.instructions+=2;goto B7486df;
case 0x7486e2:c.instructions+=1;goto B7486e2;
case 0x7486e4:goto L7486e4;
case 0x7486e7:c.instructions+=1;goto B7486e7;
case 0x7486e9:goto L7486e9;
case 0x7486eb:c.instructions+=5;goto B7486eb;
case 0x7486ee:c.instructions+=4;goto B7486ee;
case 0x7486f0:c.instructions+=3;goto B7486f0;
case 0x7486f1:c.instructions+=2;goto B7486f1;
case 0x7486f2:c.instructions+=1;goto B7486f2;
case 0x7486f3:goto L7486f3;
case 0x7486f8:c.instructions+=5;goto B7486f8;
case 0x7486fb:c.instructions+=4;goto B7486fb;
case 0x7486fd:c.instructions+=3;goto B7486fd;
case 0x7486fe:c.instructions+=2;goto B7486fe;
case 0x7486ff:c.instructions+=1;goto B7486ff;
case 0x748700:goto L748700;
case 0x748701:c.instructions+=8;goto B748701;
case 0x748702:c.instructions+=7;goto B748702;
case 0x748703:c.instructions+=6;goto B748703;
case 0x748707:c.instructions+=5;goto B748707;
case 0x74870d:c.instructions+=4;goto B74870d;
case 0x74870e:c.instructions+=3;goto B74870e;
case 0x748710:c.instructions+=2;goto B748710;
case 0x748714:c.instructions+=1;goto B748714;
case 0x748719:goto L748719;
case 0x74871d:c.instructions+=3;goto B74871d;
case 0x748720:c.instructions+=2;goto B748720;
case 0x748722:c.instructions+=1;goto B748722;
case 0x748724:goto L748724;
case 0x748725:c.instructions+=2;goto B748725;
case 0x748729:c.instructions+=1;goto B748729;
case 0x748730:goto L748730;
case 0x748734:c.instructions+=1;goto B748734;
case 0x748736:goto L748736;
case 0x748738:c.instructions+=2;goto B748738;
case 0x748739:c.instructions+=1;goto B748739;
case 0x74873c:goto L74873c;
case 0x74873f:c.instructions+=1;goto B74873f;
case 0x748741:goto L748741;
case 0x748743:c.instructions+=1;goto B748743;
case 0x748748:goto L748748;
case 0x74874a:c.instructions+=1;goto B74874a;
case 0x74874c:goto L74874c;
case 0x74874e:c.instructions+=7;goto B74874e;
case 0x748752:c.instructions+=6;goto B748752;
case 0x748755:c.instructions+=5;goto B748755;
case 0x74875a:c.instructions+=4;goto B74875a;
case 0x74875c:c.instructions+=3;goto B74875c;
case 0x74875f:c.instructions+=2;goto B74875f;
case 0x748761:c.instructions+=1;goto B748761;
case 0x748763:goto L748763;
case 0x748765:c.instructions+=3;goto B748765;
case 0x748767:c.instructions+=2;goto B748767;
case 0x748769:c.instructions+=1;goto B748769;
case 0x74876b:goto L74876b;
case 0x74876c:goto L74876c;
case 0x748772:c.instructions+=2;goto B748772;
case 0x748774:c.instructions+=1;goto B748774;
case 0x748776:goto L748776;
case 0x748778:c.instructions+=1;goto B748778;
case 0x74877d:goto L74877d;
case 0x748781:c.instructions+=2;goto B748781;
case 0x748782:c.instructions+=1;goto B748782;
case 0x748787:goto L748787;
case 0x74878a:c.instructions+=5;goto B74878a;
case 0x74878b:c.instructions+=4;goto B74878b;
case 0x74878c:c.instructions+=3;goto B74878c;
case 0x74878e:c.instructions+=2;goto B74878e;
case 0x74878f:c.instructions+=1;goto B74878f;
case 0x748790:goto L748790;
case 0x748791:c.instructions+=7;goto B748791;
case 0x748795:c.instructions+=6;goto B748795;
case 0x748796:c.instructions+=5;goto B748796;
case 0x74879c:c.instructions+=4;goto B74879c;
case 0x74879d:c.instructions+=3;goto B74879d;
case 0x74879e:c.instructions+=2;goto B74879e;
case 0x7487a2:c.instructions+=1;goto B7487a2;
case 0x7487a7:goto L7487a7;
case 0x7487ad:c.instructions+=5;goto B7487ad;
case 0x7487af:c.instructions+=4;goto B7487af;
case 0x7487b2:c.instructions+=3;goto B7487b2;
case 0x7487b4:c.instructions+=2;goto B7487b4;
case 0x7487b9:c.instructions+=1;goto B7487b9;
case 0x7487bb:goto L7487bb;
case 0x7487c0:goto L7487c0;
case 0x7487c6:c.instructions+=1;goto B7487c6;
case 0x7487c8:goto L7487c8;
case 0x7487ca:c.instructions+=2;goto B7487ca;
case 0x7487d0:c.instructions+=1;goto B7487d0;
case 0x7487d5:goto L7487d5;
case 0x7487d7:c.instructions+=2;goto B7487d7;
case 0x7487dd:c.instructions+=1;goto B7487dd;
case 0x7487df:goto L7487df;
case 0x7487e5:c.instructions+=2;goto B7487e5;
case 0x7487e7:c.instructions+=1;goto B7487e7;
case 0x7487e9:goto L7487e9;
case 0x7487ed:c.instructions+=3;goto B7487ed;
case 0x7487ee:c.instructions+=2;goto B7487ee;
case 0x7487f0:c.instructions+=1;goto B7487f0;
case 0x7487f5:goto L7487f5;
case 0x7487f8:c.instructions+=5;goto B7487f8;
case 0x7487fa:c.instructions+=4;goto B7487fa;
case 0x7487fb:c.instructions+=3;goto B7487fb;
case 0x7487fc:c.instructions+=2;goto B7487fc;
case 0x7487fd:c.instructions+=1;goto B7487fd;
case 0x7487fe:goto L7487fe;
case 0x748802:c.instructions+=2;goto B748802;
case 0x748804:c.instructions+=1;goto B748804;
case 0x748806:goto L748806;
case 0x74880c:c.instructions+=1;goto B74880c;
case 0x74880e:goto L74880e;
case 0x748810:c.instructions+=2;goto B748810;
case 0x748811:c.instructions+=1;goto B748811;
case 0x748813:goto L748813;
case 0x748817:c.instructions+=2;goto B748817;
case 0x748819:c.instructions+=1;goto B748819;
case 0x74881b:goto L74881b;
case 0x748821:c.instructions+=2;goto B748821;
case 0x748823:c.instructions+=1;goto B748823;
case 0x748826:goto L748826;
case 0x748828:goto L748828;
case 0x74882a:c.instructions+=1;goto B74882a;
case 0x74882d:goto L74882d;
case 0x74882f:goto L74882f;
case 0x748833:c.instructions+=5;goto B748833;
case 0x748839:c.instructions+=4;goto B748839;
case 0x74883a:c.instructions+=3;goto B74883a;
case 0x74883b:c.instructions+=2;goto B74883b;
case 0x748841:c.instructions+=1;goto B748841;
case 0x748846:goto L748846;
case 0x748849:c.instructions+=5;goto B748849;
case 0x74884b:c.instructions+=4;goto B74884b;
case 0x74884c:c.instructions+=3;goto B74884c;
case 0x74884d:c.instructions+=2;goto B74884d;
case 0x74884e:c.instructions+=1;goto B74884e;
case 0x74884f:goto L74884f;
case 0x748855:c.instructions+=4;goto B748855;
case 0x748857:c.instructions+=3;goto B748857;
case 0x748859:c.instructions+=2;goto B748859;
case 0x74885b:c.instructions+=1;goto B74885b;
case 0x74885d:goto L74885d;
case 0x74885f:c.instructions+=1;goto B74885f;
case 0x748860:goto L748860;
case 0x748862:c.instructions+=4;goto B748862;
case 0x748865:c.instructions+=3;goto B748865;
case 0x748868:c.instructions+=2;goto B748868;
case 0x74886a:c.instructions+=1;goto B74886a;
case 0x74886c:goto L74886c;
case 0x74886e:c.instructions+=1;goto B74886e;
case 0x748870:goto L748870;
case 0x748874:c.instructions+=2;goto B748874;
case 0x748876:c.instructions+=1;goto B748876;
case 0x748878:goto L748878;
case 0x74887a:c.instructions+=2;goto B74887a;
case 0x74887c:c.instructions+=1;goto B74887c;
case 0x74887f:goto L74887f;
case 0x748881:goto L748881;
case 0x748883:c.instructions+=1;goto B748883;
case 0x748886:goto L748886;
case 0x748888:goto L748888;
case 0x74888e:c.instructions+=5;goto B74888e;
case 0x748894:c.instructions+=4;goto B748894;
case 0x748896:c.instructions+=3;goto B748896;
case 0x748898:c.instructions+=2;goto B748898;
case 0x74889b:c.instructions+=1;goto B74889b;
case 0x74889e:goto L74889e;
case 0x7488a0:goto L7488a0;
case 0x7488a2:c.instructions+=1;goto B7488a2;
case 0x7488a5:goto L7488a5;
case 0x7488a7:goto L7488a7;
case 0x7488ad:goto L7488ad;
case 0x7488af:c.instructions+=4;goto B7488af;
case 0x7488b3:c.instructions+=3;goto B7488b3;
case 0x7488b4:c.instructions+=2;goto B7488b4;
case 0x7488b5:c.instructions+=1;goto B7488b5;
case 0x7488ba:goto L7488ba;
case 0x7488bd:c.instructions+=5;goto B7488bd;
case 0x7488bf:c.instructions+=4;goto B7488bf;
case 0x7488c0:c.instructions+=3;goto B7488c0;
case 0x7488c1:c.instructions+=2;goto B7488c1;
case 0x7488c2:c.instructions+=1;goto B7488c2;
case 0x7488d0:goto L7488d0;
case 0x7488d3:c.instructions+=8;goto B7488d3;
case 0x7488d8:c.instructions+=7;goto B7488d8;
case 0x7488dc:c.instructions+=6;goto B7488dc;
case 0x7488e0:c.instructions+=5;goto B7488e0;
case 0x7488e1:c.instructions+=4;goto B7488e1;
case 0x7488e5:c.instructions+=3;goto B7488e5;
case 0x7488ea:c.instructions+=2;goto B7488ea;
case 0x7488eb:c.instructions+=1;goto B7488eb;
case 0x7488f0:goto L7488f0;
case 0x7488f4:c.instructions+=10;goto B7488f4;
case 0x7488f7:c.instructions+=9;goto B7488f7;
case 0x7488fc:c.instructions+=8;goto B7488fc;
case 0x7488fe:c.instructions+=7;goto B7488fe;
case 0x748902:c.instructions+=6;goto B748902;
case 0x748903:c.instructions+=5;goto B748903;
case 0x748907:c.instructions+=4;goto B748907;
case 0x748908:c.instructions+=3;goto B748908;
case 0x74890e:c.instructions+=2;goto B74890e;
case 0x74890f:c.instructions+=1;goto B74890f;
case 0x748914:goto L748914;
case 0x748917:c.instructions+=2;goto B748917;
case 0x748918:c.instructions+=1;goto B748918;
case 0x74891d:goto L74891d;
case 0x748921:c.instructions+=3;goto B748921;
case 0x748924:c.instructions+=2;goto B748924;
case 0x748926:c.instructions+=1;goto B748926;
case 0x748928:goto L748928;
case 0x74892a:c.instructions+=1;goto B74892a;
case 0x74892c:goto L74892c;
case 0x748930:c.instructions+=8;goto B748930;
case 0x748934:c.instructions+=7;goto B748934;
case 0x748936:c.instructions+=6;goto B748936;
case 0x74893a:c.instructions+=5;goto B74893a;
case 0x74893e:c.instructions+=4;goto B74893e;
case 0x74893f:c.instructions+=3;goto B74893f;
case 0x748940:c.instructions+=2;goto B748940;
case 0x748941:c.instructions+=1;goto B748941;
case 0x748946:goto L748946;
case 0x748949:c.instructions+=2;goto B748949;
case 0x74894d:c.instructions+=1;goto B74894d;
case 0x748952:goto L748952;
case 0x748955:c.instructions+=1;goto B748955;
case 0x748956:goto L748956;
case 0x74895a:c.instructions+=8;goto B74895a;
case 0x74895e:c.instructions+=7;goto B74895e;
case 0x748962:c.instructions+=6;goto B748962;
case 0x748963:c.instructions+=5;goto B748963;
case 0x748966:c.instructions+=4;goto B748966;
case 0x74896a:c.instructions+=3;goto B74896a;
case 0x74896b:c.instructions+=2;goto B74896b;
case 0x74896c:c.instructions+=1;goto B74896c;
case 0x748971:goto L748971;
case 0x748974:goto L748974;
case 0x748978:c.instructions+=1;goto B748978;
case 0x74897d:goto L74897d;
case 0x748980:c.instructions+=1;goto B748980;
case 0x748990:goto L748990;
case 0x748993:c.instructions+=17;goto B748993;
case 0x748998:c.instructions+=16;goto B748998;
case 0x74899c:c.instructions+=15;goto B74899c;
case 0x74899d:c.instructions+=14;goto B74899d;
case 0x7489a1:c.instructions+=13;goto B7489a1;
case 0x7489a2:c.instructions+=12;goto B7489a2;
case 0x7489a3:c.instructions+=11;goto B7489a3;
case 0x7489a8:c.instructions+=10;goto B7489a8;
case 0x7489ac:c.instructions+=9;goto B7489ac;
case 0x7489ae:c.instructions+=8;goto B7489ae;
case 0x7489b2:c.instructions+=7;goto B7489b2;
case 0x7489b3:c.instructions+=6;goto B7489b3;
case 0x7489b4:c.instructions+=5;goto B7489b4;
case 0x7489ba:c.instructions+=4;goto B7489ba;
case 0x7489bb:c.instructions+=3;goto B7489bb;
case 0x7489c0:c.instructions+=2;goto B7489c0;
case 0x7489c5:c.instructions+=1;goto B7489c5;
case 0x7489ca:goto L7489ca;
case 0x7489cd:c.instructions+=2;goto B7489cd;
case 0x7489ce:c.instructions+=1;goto B7489ce;
case 0x7489d3:goto L7489d3;
case 0x7489d7:c.instructions+=9;goto B7489d7;
case 0x7489da:c.instructions+=8;goto B7489da;
case 0x7489de:c.instructions+=7;goto B7489de;
case 0x7489df:c.instructions+=6;goto B7489df;
case 0x7489e1:c.instructions+=5;goto B7489e1;
case 0x7489e3:c.instructions+=4;goto B7489e3;
case 0x7489e4:c.instructions+=3;goto B7489e4;
case 0x7489e5:c.instructions+=2;goto B7489e5;
case 0x7489e6:c.instructions+=1;goto B7489e6;
case 0x7489eb:goto L7489eb;
case 0x7489ee:c.instructions+=2;goto B7489ee;
case 0x7489ef:c.instructions+=1;goto B7489ef;
case 0x7489f4:goto L7489f4;
case 0x7489f8:c.instructions+=9;goto B7489f8;
case 0x7489fb:c.instructions+=8;goto B7489fb;
case 0x7489ff:c.instructions+=7;goto B7489ff;
case 0x748a00:c.instructions+=6;goto B748a00;
case 0x748a02:c.instructions+=5;goto B748a02;
case 0x748a04:c.instructions+=4;goto B748a04;
case 0x748a05:c.instructions+=3;goto B748a05;
case 0x748a06:c.instructions+=2;goto B748a06;
case 0x748a07:c.instructions+=1;goto B748a07;
case 0x748a0c:goto L748a0c;
case 0x748a0f:c.instructions+=2;goto B748a0f;
case 0x748a10:c.instructions+=1;goto B748a10;
case 0x748a15:goto L748a15;
case 0x748a19:c.instructions+=3;goto B748a19;
case 0x748a1c:c.instructions+=2;goto B748a1c;
case 0x748a1e:c.instructions+=1;goto B748a1e;
case 0x748a20:goto L748a20;
case 0x748a24:c.instructions+=12;goto B748a24;
case 0x748a28:c.instructions+=11;goto B748a28;
case 0x748a2a:c.instructions+=10;goto B748a2a;
case 0x748a2c:c.instructions+=9;goto B748a2c;
case 0x748a2e:c.instructions+=8;goto B748a2e;
case 0x748a32:c.instructions+=7;goto B748a32;
case 0x748a36:c.instructions+=6;goto B748a36;
case 0x748a3a:c.instructions+=5;goto B748a3a;
case 0x748a3e:c.instructions+=4;goto B748a3e;
case 0x748a40:c.instructions+=3;goto B748a40;
case 0x748a42:c.instructions+=2;goto B748a42;
case 0x748a46:c.instructions+=1;goto B748a46;
case 0x748a4a:goto L748a4a;
case 0x748a4f:c.instructions+=3;goto B748a4f;
case 0x748a53:c.instructions+=2;goto B748a53;
case 0x748a58:c.instructions+=1;goto B748a58;
case 0x748a5a:goto L748a5a;
case 0x748a5c:goto L748a5c;
case 0x748a5e:goto L748a5e;
case 0x748a64:c.instructions+=1;goto B748a64;
case 0x748a69:goto L748a69;
case 0x748a6e:c.instructions+=3;goto B748a6e;
case 0x748a72:c.instructions+=2;goto B748a72;
case 0x748a77:c.instructions+=1;goto B748a77;
case 0x748a79:goto L748a79;
case 0x748a7b:goto L748a7b;
case 0x748a7d:goto L748a7d;
case 0x748a83:c.instructions+=2;goto B748a83;
case 0x748a85:c.instructions+=1;goto B748a85;
case 0x748a87:goto L748a87;
case 0x748a89:c.instructions+=1;goto B748a89;
case 0x748a90:goto L748a90;
case 0x748a92:c.instructions+=5;goto B748a92;
case 0x748a93:c.instructions+=4;goto B748a93;
case 0x748a95:c.instructions+=3;goto B748a95;
case 0x748a96:c.instructions+=2;goto B748a96;
case 0x748a98:c.instructions+=1;goto B748a98;
case 0x748a9a:goto L748a9a;
case 0x748a9c:c.instructions+=2;goto B748a9c;
case 0x748aa6:c.instructions+=1;goto B748aa6;
case 0x748aab:goto L748aab;
case 0x748ab0:c.instructions+=3;goto B748ab0;
case 0x748ab4:c.instructions+=2;goto B748ab4;
case 0x748ab9:c.instructions+=1;goto B748ab9;
case 0x748abb:goto L748abb;
case 0x748abd:goto L748abd;
case 0x748abf:goto L748abf;
case 0x748ac0:c.instructions+=5;goto B748ac0;
case 0x748ac1:c.instructions+=4;goto B748ac1;
case 0x748ac7:c.instructions+=3;goto B748ac7;
case 0x748ac8:c.instructions+=2;goto B748ac8;
case 0x748acc:c.instructions+=1;goto B748acc;
case 0x748ad1:goto L748ad1;
case 0x748ad4:c.instructions+=1;goto B748ad4;
case 0x748ad5:goto L748ad5;
case 0x748ad7:c.instructions+=4;goto B748ad7;
case 0x748adb:c.instructions+=3;goto B748adb;
case 0x748ae0:c.instructions+=2;goto B748ae0;
case 0x748ae1:c.instructions+=1;goto B748ae1;
case 0x748ae6:goto L748ae6;
case 0x748ae9:c.instructions+=2;goto B748ae9;
case 0x748aeb:c.instructions+=1;goto B748aeb;
case 0x748aed:goto L748aed;
case 0x748af1:c.instructions+=3;goto B748af1;
case 0x748af2:c.instructions+=2;goto B748af2;
case 0x748af8:c.instructions+=1;goto B748af8;
case 0x748afd:goto L748afd;
case 0x748b00:c.instructions+=6;goto B748b00;
case 0x748b01:c.instructions+=5;goto B748b01;
case 0x748b02:c.instructions+=4;goto B748b02;
case 0x748b05:c.instructions+=3;goto B748b05;
case 0x748b06:c.instructions+=2;goto B748b06;
case 0x748b0a:c.instructions+=1;goto B748b0a;
case 0x748b0f:goto L748b0f;
case 0x748b12:c.instructions+=1;goto B748b12;
case 0x748b13:goto L748b13;
case 0x748b18:c.instructions+=3;goto B748b18;
case 0x748b1c:c.instructions+=2;goto B748b1c;
case 0x748b21:c.instructions+=1;goto B748b21;
case 0x748b23:goto L748b23;
case 0x748b25:goto L748b25;
case 0x748b27:goto L748b27;
case 0x748b2b:c.instructions+=2;goto B748b2b;
case 0x748b2d:c.instructions+=1;goto B748b2d;
case 0x748b2f:goto L748b2f;
case 0x748b31:c.instructions+=4;goto B748b31;
case 0x748b35:c.instructions+=3;goto B748b35;
case 0x748b36:c.instructions+=2;goto B748b36;
case 0x748b37:c.instructions+=1;goto B748b37;
case 0x748b3c:goto L748b3c;
case 0x748b3f:goto L748b3f;
case 0x748b45:goto L748b45;
case 0x748b49:c.instructions+=4;goto B748b49;
case 0x748b4a:c.instructions+=3;goto B748b4a;
case 0x748b4b:c.instructions+=2;goto B748b4b;
case 0x748b4c:c.instructions+=1;goto B748b4c;
case 0x748b51:goto L748b51;
case 0x748b54:c.instructions+=1;goto B748b54;
case 0x748b60:goto L748b60;
case 0x748b61:c.instructions+=3;goto B748b61;
case 0x748b65:c.instructions+=2;goto B748b65;
case 0x748b67:c.instructions+=1;goto B748b67;
case 0x748b69:goto L748b69;
case 0x748b6f:c.instructions+=2;goto B748b6f;
case 0x748b71:c.instructions+=1;goto B748b71;
case 0x748b73:goto L748b73;
case 0x748b74:c.instructions+=1;goto B748b74;
case 0x748b79:goto L748b79;
case 0x748b7c:goto L748b7c;
case 0x748b7e:c.instructions+=2;goto B748b7e;
case 0x748b80:c.instructions+=1;goto B748b80;
case 0x748b82:goto L748b82;
case 0x748b83:c.instructions+=1;goto B748b83;
case 0x748b88:goto L748b88;
case 0x748b8b:goto L748b8b;
case 0x748b8c:c.instructions+=1;goto B748b8c;
case 0x748b91:goto L748b91;
case 0x748b94:goto L748b94;
case 0x748b96:c.instructions+=2;goto B748b96;
case 0x748b97:c.instructions+=1;goto B748b97;
case 0x748ba0:goto L748ba0;
case 0x748ba1:c.instructions+=10;goto B748ba1;
case 0x748ba5:c.instructions+=9;goto B748ba5;
case 0x748ba6:c.instructions+=8;goto B748ba6;
case 0x748baa:c.instructions+=7;goto B748baa;
case 0x748bab:c.instructions+=6;goto B748bab;
case 0x748bb0:c.instructions+=5;goto B748bb0;
case 0x748bb3:c.instructions+=4;goto B748bb3;
case 0x748bb8:c.instructions+=3;goto B748bb8;
case 0x748bb9:c.instructions+=2;goto B748bb9;
case 0x748bbc:c.instructions+=1;goto B748bbc;
case 0x748bc1:goto L748bc1;
case 0x748bc4:c.instructions+=5;goto B748bc4;
case 0x748bc5:c.instructions+=4;goto B748bc5;
case 0x748bca:c.instructions+=3;goto B748bca;
case 0x748bcf:c.instructions+=2;goto B748bcf;
case 0x748bd0:c.instructions+=1;goto B748bd0;
case 0x748bd5:goto L748bd5;
case 0x748bd8:c.instructions+=5;goto B748bd8;
case 0x748bd9:c.instructions+=4;goto B748bd9;
case 0x748bde:c.instructions+=3;goto B748bde;
case 0x748be3:c.instructions+=2;goto B748be3;
case 0x748be4:c.instructions+=1;goto B748be4;
case 0x748be9:goto L748be9;
case 0x748bec:c.instructions+=5;goto B748bec;
case 0x748bed:c.instructions+=4;goto B748bed;
case 0x748bf2:c.instructions+=3;goto B748bf2;
case 0x748bf7:c.instructions+=2;goto B748bf7;
case 0x748bf8:c.instructions+=1;goto B748bf8;
case 0x748bfd:goto L748bfd;
case 0x748c00:c.instructions+=6;goto B748c00;
case 0x748c03:c.instructions+=5;goto B748c03;
case 0x748c04:c.instructions+=4;goto B748c04;
case 0x748c09:c.instructions+=3;goto B748c09;
case 0x748c0e:c.instructions+=2;goto B748c0e;
case 0x748c0f:c.instructions+=1;goto B748c0f;
case 0x748c14:goto L748c14;
case 0x748c17:c.instructions+=5;goto B748c17;
case 0x748c18:c.instructions+=4;goto B748c18;
case 0x748c1d:c.instructions+=3;goto B748c1d;
case 0x748c22:c.instructions+=2;goto B748c22;
case 0x748c23:c.instructions+=1;goto B748c23;
case 0x748c28:goto L748c28;
case 0x748c2b:c.instructions+=5;goto B748c2b;
case 0x748c2c:c.instructions+=4;goto B748c2c;
case 0x748c31:c.instructions+=3;goto B748c31;
case 0x748c36:c.instructions+=2;goto B748c36;
case 0x748c37:c.instructions+=1;goto B748c37;
case 0x748c3c:goto L748c3c;
case 0x748c42:c.instructions+=5;goto B748c42;
case 0x748c43:c.instructions+=4;goto B748c43;
case 0x748c48:c.instructions+=3;goto B748c48;
case 0x748c4d:c.instructions+=2;goto B748c4d;
case 0x748c4e:c.instructions+=1;goto B748c4e;
case 0x748c53:goto L748c53;
case 0x748c56:c.instructions+=3;goto B748c56;
case 0x748c57:c.instructions+=2;goto B748c57;
case 0x748c58:c.instructions+=1;goto B748c58;
case 0x748c60:goto L748c60;
case 0x748c61:c.instructions+=10;goto B748c61;
case 0x748c65:c.instructions+=9;goto B748c65;
case 0x748c67:c.instructions+=8;goto B748c67;
case 0x748c68:c.instructions+=7;goto B748c68;
case 0x748c6c:c.instructions+=6;goto B748c6c;
case 0x748c6e:c.instructions+=5;goto B748c6e;
case 0x748c73:c.instructions+=4;goto B748c73;
case 0x748c76:c.instructions+=3;goto B748c76;
case 0x748c77:c.instructions+=2;goto B748c77;
case 0x748c81:c.instructions+=1;goto B748c81;
case 0x748c86:goto L748c86;
case 0x748c89:c.instructions+=2;goto B748c89;
case 0x748c8b:c.instructions+=1;goto B748c8b;
case 0x748c8d:goto L748c8d;
case 0x748c8f:c.instructions+=3;goto B748c8f;
case 0x748c94:c.instructions+=2;goto B748c94;
case 0x748c95:c.instructions+=1;goto B748c95;
case 0x748c9a:goto L748c9a;
case 0x748c9d:c.instructions+=2;goto B748c9d;
case 0x748c9f:c.instructions+=1;goto B748c9f;
case 0x748ca1:goto L748ca1;
case 0x748ca3:c.instructions+=4;goto B748ca3;
case 0x748ca4:c.instructions+=3;goto B748ca4;
case 0x748ca9:c.instructions+=2;goto B748ca9;
case 0x748caa:c.instructions+=1;goto B748caa;
case 0x748caf:goto L748caf;
case 0x748cb1:c.instructions+=1;goto B748cb1;
case 0x748cb4:goto L748cb4;
case 0x748cb6:c.instructions+=2;goto B748cb6;
case 0x748cb9:c.instructions+=1;goto B748cb9;
case 0x748cc0:goto L748cc0;
case 0x748cc2:c.instructions+=3;goto B748cc2;
case 0x748cc3:c.instructions+=2;goto B748cc3;
case 0x748cc5:c.instructions+=1;goto B748cc5;
case 0x748cc7:goto L748cc7;
case 0x748cca:c.instructions+=3;goto B748cca;
case 0x748ccc:c.instructions+=2;goto B748ccc;
case 0x748cce:c.instructions+=1;goto B748cce;
case 0x748cd0:goto L748cd0;
case 0x748cd2:c.instructions+=1;goto B748cd2;
case 0x748cd4:goto L748cd4;
case 0x748cd6:c.instructions+=5;goto B748cd6;
case 0x748cd7:c.instructions+=4;goto B748cd7;
case 0x748cd9:c.instructions+=3;goto B748cd9;
case 0x748cda:c.instructions+=2;goto B748cda;
case 0x748cdc:c.instructions+=1;goto B748cdc;
case 0x748cde:goto L748cde;
case 0x748ce0:c.instructions+=1;goto B748ce0;
case 0x748ce6:goto L748ce6;
case 0x748ce7:c.instructions+=3;goto B748ce7;
case 0x748cee:c.instructions+=2;goto B748cee;
case 0x748cef:c.instructions+=1;goto B748cef;
case 0x748cf0:goto L748cf0;
case 0x748cf4:c.instructions+=2;goto B748cf4;
case 0x748cf7:c.instructions+=1;goto B748cf7;
case 0x748d00:goto L748d00;
case 0x748d01:c.instructions+=6;goto B748d01;
case 0x748d05:c.instructions+=5;goto B748d05;
case 0x748d07:c.instructions+=4;goto B748d07;
case 0x748d08:c.instructions+=3;goto B748d08;
case 0x748d0e:c.instructions+=2;goto B748d0e;
case 0x748d12:c.instructions+=1;goto B748d12;
case 0x748d14:goto L748d14;
case 0x748d1a:c.instructions+=2;goto B748d1a;
case 0x748d1c:c.instructions+=1;goto B748d1c;
case 0x748d1e:goto L748d1e;
case 0x748d23:c.instructions+=2;goto B748d23;
case 0x748d24:c.instructions+=1;goto B748d24;
case 0x748d29:goto L748d29;
case 0x748d2c:c.instructions+=3;goto B748d2c;
case 0x748d2e:c.instructions+=2;goto B748d2e;
case 0x748d34:c.instructions+=1;goto B748d34;
case 0x748d36:goto L748d36;
case 0x748d3b:c.instructions+=2;goto B748d3b;
case 0x748d3c:c.instructions+=1;goto B748d3c;
case 0x748d41:goto L748d41;
case 0x748d44:c.instructions+=3;goto B748d44;
case 0x748d46:c.instructions+=2;goto B748d46;
case 0x748d4c:c.instructions+=1;goto B748d4c;
case 0x748d4e:goto L748d4e;
case 0x748d4f:c.instructions+=3;goto B748d4f;
case 0x748d51:c.instructions+=2;goto B748d51;
case 0x748d52:c.instructions+=1;goto B748d52;
case 0x748d53:goto L748d53;
case 0x748d54:c.instructions+=6;goto B748d54;
case 0x748d5a:c.instructions+=5;goto B748d5a;
case 0x748d5d:c.instructions+=4;goto B748d5d;
case 0x748d5f:c.instructions+=3;goto B748d5f;
case 0x748d64:c.instructions+=2;goto B748d64;
case 0x748d6a:c.instructions+=1;goto B748d6a;
case 0x748d6c:goto L748d6c;
case 0x748d6d:c.instructions+=4;goto B748d6d;
case 0x748d6e:c.instructions+=3;goto B748d6e;
case 0x748d70:c.instructions+=2;goto B748d70;
case 0x748d71:c.instructions+=1;goto B748d71;
case 0x748d72:goto L748d72;
case 0x748d73:c.instructions+=5;goto B748d73;
case 0x748d76:c.instructions+=4;goto B748d76;
case 0x748d78:c.instructions+=3;goto B748d78;
case 0x748d7a:c.instructions+=2;goto B748d7a;
case 0x748d7d:c.instructions+=1;goto B748d7d;
case 0x748d7f:goto L748d7f;
case 0x748d81:goto L748d81;
case 0x748d83:c.instructions+=2;goto B748d83;
case 0x748d86:c.instructions+=1;goto B748d86;
case 0x748d88:goto L748d88;
case 0x748d8a:goto L748d8a;
case 0x748d8e:c.instructions+=4;goto B748d8e;
case 0x748d93:c.instructions+=3;goto B748d93;
case 0x748d94:c.instructions+=2;goto B748d94;
case 0x748d99:c.instructions+=1;goto B748d99;
case 0x748d9e:goto L748d9e;
case 0x748da1:c.instructions+=2;goto B748da1;
case 0x748da2:c.instructions+=1;goto B748da2;
case 0x748da7:goto L748da7;
case 0x748daa:c.instructions+=4;goto B748daa;
case 0x748dac:c.instructions+=3;goto B748dac;
case 0x748dae:c.instructions+=2;goto B748dae;
case 0x748daf:c.instructions+=1;goto B748daf;
case 0x748db1:goto L748db1;
case 0x748db7:c.instructions+=5;goto B748db7;
case 0x748dbd:c.instructions+=4;goto B748dbd;
case 0x748dc0:c.instructions+=3;goto B748dc0;
case 0x748dc3:c.instructions+=2;goto B748dc3;
case 0x748dc5:c.instructions+=1;goto B748dc5;
case 0x748dc7:goto L748dc7;
case 0x748dca:c.instructions+=1;goto B748dca;
case 0x748dcc:goto L748dcc;
case 0x748dcf:c.instructions+=3;goto B748dcf;
case 0x748dd0:c.instructions+=2;goto B748dd0;
case 0x748dd2:c.instructions+=1;goto B748dd2;
case 0x748dd4:goto L748dd4;
case 0x748dd9:c.instructions+=3;goto B748dd9;
case 0x748dda:c.instructions+=2;goto B748dda;
case 0x748de0:c.instructions+=1;goto B748de0;
case 0x748de5:goto L748de5;
case 0x748de8:c.instructions+=2;goto B748de8;
case 0x748dea:c.instructions+=1;goto B748dea;
case 0x748dec:goto L748dec;
case 0x748df2:goto L748df2;
case 0x748df8:c.instructions+=2;goto B748df8;
case 0x748dfe:c.instructions+=1;goto B748dfe;
case 0x748e00:goto L748e00;
case 0x748e03:goto L748e03;
case 0x748e05:c.instructions+=4;goto B748e05;
case 0x748e06:c.instructions+=3;goto B748e06;
case 0x748e07:c.instructions+=2;goto B748e07;
case 0x748e08:c.instructions+=1;goto B748e08;
case 0x748e10:goto L748e10;
case 0x748e14:c.instructions+=4;goto B748e14;
case 0x748e15:c.instructions+=3;goto B748e15;
case 0x748e17:c.instructions+=2;goto B748e17;
case 0x748e19:c.instructions+=1;goto B748e19;
case 0x748e1f:goto L748e1f;
case 0x748e22:c.instructions+=1;goto B748e22;
case 0x748e28:goto L748e28;
case 0x748e29:c.instructions+=8;goto B748e29;
case 0x748e2d:c.instructions+=7;goto B748e2d;
case 0x748e2e:c.instructions+=6;goto B748e2e;
case 0x748e2f:c.instructions+=5;goto B748e2f;
case 0x748e34:c.instructions+=4;goto B748e34;
case 0x748e3a:c.instructions+=3;goto B748e3a;
case 0x748e3f:c.instructions+=2;goto B748e3f;
case 0x748e40:c.instructions+=1;goto B748e40;
case 0x748e45:goto L748e45;
case 0x748e4b:c.instructions+=4;goto B748e4b;
case 0x748e51:c.instructions+=3;goto B748e51;
case 0x748e54:c.instructions+=2;goto B748e54;
case 0x748e56:c.instructions+=1;goto B748e56;
case 0x748e58:goto L748e58;
case 0x748e5b:c.instructions+=2;goto B748e5b;
case 0x748e61:c.instructions+=1;goto B748e61;
case 0x748e67:goto L748e67;
case 0x748e69:c.instructions+=2;goto B748e69;
case 0x748e6c:c.instructions+=1;goto B748e6c;
case 0x748e70:goto L748e70;
case 0x748e72:c.instructions+=3;goto B748e72;
case 0x748e73:c.instructions+=2;goto B748e73;
case 0x748e75:c.instructions+=1;goto B748e75;
case 0x748e77:goto L748e77;
case 0x748e7a:c.instructions+=5;goto B748e7a;
case 0x748e7c:c.instructions+=4;goto B748e7c;
case 0x748e7d:c.instructions+=3;goto B748e7d;
case 0x748e7f:c.instructions+=2;goto B748e7f;
case 0x748e81:c.instructions+=1;goto B748e81;
case 0x748e84:goto L748e84;
case 0x748e86:c.instructions+=3;goto B748e86;
case 0x748e87:c.instructions+=2;goto B748e87;
case 0x748e89:c.instructions+=1;goto B748e89;
case 0x748e8b:goto L748e8b;
case 0x748e8d:c.instructions+=9;goto B748e8d;
case 0x748e93:c.instructions+=8;goto B748e93;
case 0x748e96:c.instructions+=7;goto B748e96;
case 0x748e9c:c.instructions+=6;goto B748e9c;
case 0x748e9e:c.instructions+=5;goto B748e9e;
case 0x748ea0:c.instructions+=4;goto B748ea0;
case 0x748ea2:c.instructions+=3;goto B748ea2;
case 0x748ea4:c.instructions+=2;goto B748ea4;
case 0x748ea7:c.instructions+=1;goto B748ea7;
case 0x748ea9:goto L748ea9;
case 0x748eaa:c.instructions+=6;goto B748eaa;
case 0x748eab:c.instructions+=5;goto B748eab;
case 0x748eae:c.instructions+=4;goto B748eae;
case 0x748eb8:c.instructions+=3;goto B748eb8;
case 0x748eb9:c.instructions+=2;goto B748eb9;
case 0x748eba:c.instructions+=1;goto B748eba;
case 0x748ebb:goto L748ebb;
case 0x748ebd:c.instructions+=6;goto B748ebd;
case 0x748ebf:c.instructions+=5;goto B748ebf;
case 0x748ec0:c.instructions+=4;goto B748ec0;
case 0x748ec1:c.instructions+=3;goto B748ec1;
case 0x748ec3:c.instructions+=2;goto B748ec3;
case 0x748ec4:c.instructions+=1;goto B748ec4;
case 0x748ec9:goto L748ec9;
case 0x748ecb:c.instructions+=4;goto B748ecb;
case 0x748ed1:c.instructions+=3;goto B748ed1;
case 0x748ed3:c.instructions+=2;goto B748ed3;
case 0x748ed6:c.instructions+=1;goto B748ed6;
case 0x748edc:goto L748edc;
case 0x748ede:goto L748ede;
case 0x748ee0:c.instructions+=1;goto B748ee0;
case 0x748ee3:goto L748ee3;
case 0x748ee5:goto L748ee5;
case 0x748ee9:c.instructions+=6;goto B748ee9;
case 0x748ef0:c.instructions+=5;goto B748ef0;
case 0x748ef5:c.instructions+=4;goto B748ef5;
case 0x748efa:c.instructions+=3;goto B748efa;
case 0x748efb:c.instructions+=2;goto B748efb;
case 0x748efc:c.instructions+=1;goto B748efc;
case 0x748f01:goto L748f01;
case 0x748f04:c.instructions+=5;goto B748f04;
case 0x748f05:c.instructions+=4;goto B748f05;
case 0x748f06:c.instructions+=3;goto B748f06;
case 0x748f07:c.instructions+=2;goto B748f07;
case 0x748f08:c.instructions+=1;goto B748f08;
case 0x748f09:goto L748f09;
case 0x748f0d:c.instructions+=5;goto B748f0d;
case 0x748f0f:c.instructions+=4;goto B748f0f;
case 0x748f11:c.instructions+=3;goto B748f11;
case 0x748f17:c.instructions+=2;goto B748f17;
case 0x748f18:c.instructions+=1;goto B748f18;
case 0x748f20:goto L748f20;
case 0x748f26:c.instructions+=6;goto B748f26;
case 0x748f2b:c.instructions+=5;goto B748f2b;
case 0x748f2c:c.instructions+=4;goto B748f2c;
case 0x748f33:c.instructions+=3;goto B748f33;
case 0x748f3a:c.instructions+=2;goto B748f3a;
case 0x748f44:c.instructions+=1;goto B748f44;
case 0x748f46:goto L748f46;
case 0x748f48:c.instructions+=5;goto B748f48;
case 0x748f4b:c.instructions+=4;goto B748f4b;
case 0x748f55:c.instructions+=3;goto B748f55;
case 0x748f56:c.instructions+=2;goto B748f56;
case 0x748f5d:c.instructions+=1;goto B748f5d;
case 0x748f62:goto L748f62;
case 0x748f68:c.instructions+=1;goto B748f68;
case 0x748f69:goto L748f69;
case 0x748f6b:c.instructions+=3;goto B748f6b;
case 0x748f6d:c.instructions+=2;goto B748f6d;
case 0x748f6e:c.instructions+=1;goto B748f6e;
case 0x748f71:goto L748f71;
case 0x748f73:c.instructions+=3;goto B748f73;
case 0x748f74:c.instructions+=2;goto B748f74;
case 0x748f76:c.instructions+=1;goto B748f76;
case 0x748f78:goto L748f78;
case 0x748f7a:c.instructions+=9;goto B748f7a;
case 0x748f7d:c.instructions+=8;goto B748f7d;
case 0x748f7e:c.instructions+=7;goto B748f7e;
case 0x748f80:c.instructions+=6;goto B748f80;
case 0x748f83:c.instructions+=5;goto B748f83;
case 0x748f86:c.instructions+=4;goto B748f86;
case 0x748f8b:c.instructions+=3;goto B748f8b;
case 0x748f91:c.instructions+=2;goto B748f91;
case 0x748f97:c.instructions+=1;goto B748f97;
case 0x748f99:goto L748f99;
case 0x748f9c:c.instructions+=5;goto B748f9c;
case 0x748f9d:c.instructions+=4;goto B748f9d;
case 0x748fa7:c.instructions+=3;goto B748fa7;
case 0x748fa8:c.instructions+=2;goto B748fa8;
case 0x748faf:c.instructions+=1;goto B748faf;
case 0x748fb4:goto L748fb4;
case 0x748fba:c.instructions+=1;goto B748fba;
case 0x748fbb:goto L748fbb;
case 0x748fbc:c.instructions+=8;goto B748fbc;
case 0x748fbd:c.instructions+=7;goto B748fbd;
case 0x748fc0:c.instructions+=6;goto B748fc0;
case 0x748fc3:c.instructions+=5;goto B748fc3;
case 0x748fc4:c.instructions+=4;goto B748fc4;
case 0x748fca:c.instructions+=3;goto B748fca;
case 0x748fcf:c.instructions+=2;goto B748fcf;
case 0x748fd0:c.instructions+=1;goto B748fd0;
case 0x748fd5:goto L748fd5;
case 0x748fdb:c.instructions+=5;goto B748fdb;
case 0x748fdc:c.instructions+=4;goto B748fdc;
case 0x748fe1:c.instructions+=3;goto B748fe1;
case 0x748fe6:c.instructions+=2;goto B748fe6;
case 0x748fe7:c.instructions+=1;goto B748fe7;
case 0x748fec:goto L748fec;
case 0x748fef:c.instructions+=5;goto B748fef;
case 0x748ff4:c.instructions+=4;goto B748ff4;
case 0x748ff6:c.instructions+=3;goto B748ff6;
case 0x748ffa:c.instructions+=2;goto B748ffa;
case 0x748ffb:c.instructions+=1;goto B748ffb;
default:missing_instruction(c.pc);}
B748002:L748002:{c.instructions+=18;NFSU2_TR(0x748002);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B748006:{NFSU2_TR(0x748006);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B748009:{NFSU2_TR(0x748009);
u8 U[13];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),1);
s1(u32(r4(U+8)),r1(U+12));
}
B74800d:{NFSU2_TR(0x74800d);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B748010:{NFSU2_TR(0x748010);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B748012:{NFSU2_TR(0x748012);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0xbfull))));
}
B748015:{NFSU2_TR(0x748015);
w1(R+4,u8(u32(r1(R+4))-u32(u8(0x6ull))));
}
B748018:{NFSU2_TR(0x748018);
w1(R+512,u8((r1(R+4))!=(u8(0x0ull))));
w1(R+4,u8(0-u32(r1(R+4))));
}
B74801a:{NFSU2_TR(0x74801a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B74801d:{NFSU2_TR(0x74801d);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+4))<(r4(R+4))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(R+4))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B74801f:{NFSU2_TR(0x74801f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B748020:{NFSU2_TR(0x748020);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748021:{NFSU2_TR(0x748021);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B748025:{NFSU2_TR(0x748025);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B748026:{NFSU2_TR(0x748026);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748027:{NFSU2_TR(0x748027);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748028:{NFSU2_TR(0x748028);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748029:{NFSU2_TR(0x748029);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74802cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B74802c:L74802c:{c.instructions+=4;NFSU2_TR(0x74802c);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B74802e:{NFSU2_TR(0x74802e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B748031:{NFSU2_TR(0x748031);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B748033:{NFSU2_TR(0x748033);
if(r1(R+518)){{goto L748044;}}
}
B748035:L748035:{c.instructions+=4;NFSU2_TR(0x748035);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B748038:{NFSU2_TR(0x748038);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))+u32(u16(0xfff4ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B74803e:{NFSU2_TR(0x74803e);
w1(R+4,u8(u32(r1(R+4))^u32(u8(0x40ull))));
}
B748041:{NFSU2_TR(0x748041);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B748044:L748044:{c.instructions+=2;NFSU2_TR(0x748044);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B748046:{NFSU2_TR(0x748046);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7480a7;}}
}
B748048:L748048:{c.instructions+=3;NFSU2_TR(0x748048);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74804a:{NFSU2_TR(0x74804a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74804d:{NFSU2_TR(0x74804d);
if(r1(R+518)){{goto L748052;}}
}
B74804f:L74804f:{c.instructions+=1;NFSU2_TR(0x74804f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B748052:L748052:{c.instructions+=15;NFSU2_TR(0x748052);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B748056:{NFSU2_TR(0x748056);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x174ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B74805c:{NFSU2_TR(0x74805c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B74805d:{NFSU2_TR(0x74805d);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+4))));
}
B74805f:{NFSU2_TR(0x74805f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x174ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B748065:{NFSU2_TR(0x748065);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x178ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B74806b:{NFSU2_TR(0x74806b);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B74806f:{NFSU2_TR(0x74806f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B748072:{NFSU2_TR(0x748072);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B748073:{NFSU2_TR(0x748073);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+4))));
}
B748075:{NFSU2_TR(0x748075);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B748078:{NFSU2_TR(0x748078);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74807a:{NFSU2_TR(0x74807a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74807d:{NFSU2_TR(0x74807d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B748080:{NFSU2_TR(0x748080);
if(r1(R+518)){{goto L748091;}}
}
B748082:L748082:{c.instructions+=4;NFSU2_TR(0x748082);
__builtin_memmove((R+28),(R+20),4);
}
B748084:{NFSU2_TR(0x748084);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+4))));
}
B748086:{NFSU2_TR(0x748086);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x64ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x64ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B748089:{NFSU2_TR(0x748089);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L748091;}}
}
B74808b:L74808b:{c.instructions+=2;NFSU2_TR(0x74808b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74808e:{NFSU2_TR(0x74808e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B748091:L748091:{c.instructions+=3;NFSU2_TR(0x748091);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B748094:{NFSU2_TR(0x748094);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B748096:{NFSU2_TR(0x748096);
if(r1(R+518)){{goto L7480a7;}}
}
B748098:L748098:{c.instructions+=4;NFSU2_TR(0x748098);
__builtin_memmove((R+28),(R+20),4);
}
B74809a:{NFSU2_TR(0x74809a);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+4))));
}
B74809c:{NFSU2_TR(0x74809c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x64ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x64ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74809f:{NFSU2_TR(0x74809f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L7480a7;}}
}
B7480a1:L7480a1:{c.instructions+=2;NFSU2_TR(0x7480a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7480a4:{NFSU2_TR(0x7480a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7480a7:L7480a7:{c.instructions+=5;NFSU2_TR(0x7480a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7480a8:{NFSU2_TR(0x7480a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7480a9:{NFSU2_TR(0x7480a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7480aa:{NFSU2_TR(0x7480aa);
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
B7480ad:{NFSU2_TR(0x7480ad);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7480b0:L7480b0:{c.instructions+=8;NFSU2_TR(0x7480b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B7480b3:{NFSU2_TR(0x7480b3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7480b4:{NFSU2_TR(0x7480b4);
__builtin_memmove((R+24),(R+0),4);
}
B7480b6:{NFSU2_TR(0x7480b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x188ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7480bc:{NFSU2_TR(0x7480bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7480c2:{NFSU2_TR(0x7480c2);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B7480c4:{NFSU2_TR(0x7480c4);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x21bull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x21bull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B7480ca:{NFSU2_TR(0x7480ca);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L7480d3;}}
}
B7480cc:L7480cc:{c.instructions+=4;NFSU2_TR(0x7480cc);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7480ce:{NFSU2_TR(0x7480ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7480cf:{NFSU2_TR(0x7480cf);
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
B7480d2:{NFSU2_TR(0x7480d2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7480d3:L7480d3:{c.instructions+=12;NFSU2_TR(0x7480d3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7480d4:{NFSU2_TR(0x7480d4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7480d5:{NFSU2_TR(0x7480d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x184ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7480db:{NFSU2_TR(0x7480db);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B7480df:{NFSU2_TR(0x7480df);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7480e0:{NFSU2_TR(0x7480e0);
u8 U[6];
w1(R+512,carry<u32>(r4(R+28),r4(R+0)));
w1(R+523,scarry<u32>(r4(R+28),r4(R+0)));
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7480e2:{NFSU2_TR(0x7480e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B7480e4:{NFSU2_TR(0x7480e4);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7480e7:{NFSU2_TR(0x7480e7);
u8 U[4];
w4(U+0,u32(0x210ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7480ec:{NFSU2_TR(0x7480ec);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7480ed:{NFSU2_TR(0x7480ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7480ee:{NFSU2_TR(0x7480ee);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7480f1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B7480f1:L7480f1:{c.instructions+=4;NFSU2_TR(0x7480f1);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B7480f3:{NFSU2_TR(0x7480f3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B7480f6:{NFSU2_TR(0x7480f6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7480f8:{NFSU2_TR(0x7480f8);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L748348;}}
}
B7480fe:L7480fe:{c.instructions+=2;NFSU2_TR(0x7480fe);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x20full))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x20full)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x20full))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B748103:{NFSU2_TR(0x748103);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L748348;}}
}
B748109:L748109:{c.instructions+=5;NFSU2_TR(0x748109);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B74810d:{NFSU2_TR(0x74810d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B74810f:{NFSU2_TR(0x74810f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748110:{NFSU2_TR(0x748110);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748111:{NFSU2_TR(0x748111);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x748114ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B748114:L748114:{c.instructions+=13;NFSU2_TR(0x748114);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B748117:{NFSU2_TR(0x748117);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74811a:{NFSU2_TR(0x74811a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74811d:{NFSU2_TR(0x74811d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B748120:{NFSU2_TR(0x748120);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B748121:{NFSU2_TR(0x748121);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B748124:{NFSU2_TR(0x748124);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B748127:{NFSU2_TR(0x748127);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74812a:{NFSU2_TR(0x74812a);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B74812e:{NFSU2_TR(0x74812e);
w4(R+20,u32(u32(r4(R+20))+u32(r4(R+8))));
}
B748130:{NFSU2_TR(0x748130);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B748132:{NFSU2_TR(0x748132);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B748135:{NFSU2_TR(0x748135);
if(r1(R+518)){{goto L748146;}}
}
B748137:L748137:{c.instructions+=4;NFSU2_TR(0x748137);
__builtin_memmove((R+8),(R+0),4);
}
B748139:{NFSU2_TR(0x748139);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B74813b:{NFSU2_TR(0x74813b);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(U+0))<(u32(0x64ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x64ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74813e:{NFSU2_TR(0x74813e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L748146;}}
}
B748140:L748140:{c.instructions+=2;NFSU2_TR(0x748140);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B748143:{NFSU2_TR(0x748143);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B748146:L748146:{c.instructions+=3;NFSU2_TR(0x748146);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B748149:{NFSU2_TR(0x748149);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74814b:{NFSU2_TR(0x74814b);
if(r1(R+518)){{goto L74815c;}}
}
B74814d:L74814d:{c.instructions+=4;NFSU2_TR(0x74814d);
__builtin_memmove((R+8),(R+0),4);
}
B74814f:{NFSU2_TR(0x74814f);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B748151:{NFSU2_TR(0x748151);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(U+0))<(u32(0x64ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x64ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B748154:{NFSU2_TR(0x748154);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L74815c;}}
}
B748156:L748156:{c.instructions+=2;NFSU2_TR(0x748156);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B748159:{NFSU2_TR(0x748159);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74815c:L74815c:{c.instructions+=8;NFSU2_TR(0x74815c);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))-u32(u16(0x1ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B748160:{NFSU2_TR(0x748160);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B748162:{NFSU2_TR(0x748162);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B748166:{NFSU2_TR(0x748166);
w4(R+4,u32(r2(R+0)));
}
B748169:{NFSU2_TR(0x748169);
u8 U[13];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+4),(U+12),1);
}
B74816d:{NFSU2_TR(0x74816d);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B748170:{NFSU2_TR(0x748170);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B748173:{NFSU2_TR(0x748173);
if(r1(R+518)){{goto L7482de;}}
}
B748179:L748179:{c.instructions+=16;NFSU2_TR(0x748179);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffff4ull))));
}
B74817c:{NFSU2_TR(0x74817c);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B748180:{NFSU2_TR(0x748180);
w4(R+8,u32(r2(R+0)));
}
B748183:{NFSU2_TR(0x748183);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B748187:{NFSU2_TR(0x748187);
__builtin_memmove((R+4),(R+0),4);
}
B748189:{NFSU2_TR(0x748189);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+12),(U+0),4);
}
B74818b:{NFSU2_TR(0x74818b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74818e:{NFSU2_TR(0x74818e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B748191:{NFSU2_TR(0x748191);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))^u32(u8(0x40ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B748195:{NFSU2_TR(0x748195);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B748199:{NFSU2_TR(0x748199);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74819d:{NFSU2_TR(0x74819d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7481a0:{NFSU2_TR(0x7481a0);
__builtin_memmove((R+20),(R+4),4);
}
B7481a2:{NFSU2_TR(0x7481a2);
w4(R+20,u32(u32(r4(R+20))-u32(r4(R+8))));
}
B7481a4:{NFSU2_TR(0x7481a4);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
w1(R+512,u8((r4(U+6))<(u32(0xaull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xaull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7481a7:{NFSU2_TR(0x7481a7);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L7481ae;}}
}
B7481a9:L7481a9:{c.instructions+=1;NFSU2_TR(0x7481a9);
w4(R+20,u32(0xaull));
}
B7481ae:L7481ae:{c.instructions+=3;NFSU2_TR(0x7481ae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7481af:{NFSU2_TR(0x7481af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7481b2:{NFSU2_TR(0x7481b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7481b7ull));
TAIL_STATIC(0x743110u,743);
}
B7481b7:L7481b7:{c.instructions+=4;NFSU2_TR(0x7481b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7481ba:{NFSU2_TR(0x7481ba);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7481be:{NFSU2_TR(0x7481be);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7481bf:{NFSU2_TR(0x7481bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7481c4ull));
TAIL_STATIC(0x7430f0u,743);
}
B7481c4:L7481c4:{c.instructions+=4;NFSU2_TR(0x7481c4);
w4(R+4,u32(r2(R+0)));
}
B7481c7:{NFSU2_TR(0x7481c7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7481c8:{NFSU2_TR(0x7481c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7481cb:{NFSU2_TR(0x7481cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7481d0ull));
TAIL_STATIC(0x743110u,743);
}
B7481d0:L7481d0:{c.instructions+=5;NFSU2_TR(0x7481d0);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B7481d4:{NFSU2_TR(0x7481d4);
w2(R+4,u16(u32(r2(R+4))-u32(r2(R+0))));
}
B7481d7:{NFSU2_TR(0x7481d7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B7481da:{NFSU2_TR(0x7481da);
u8 U[2];
w1(R+523,u8(0x0ull));
w2(U+0,u16(u32(r2(R+4))&u32(r2(R+4))));
w1(R+519,u8(s16(r2(U+0))<s16(u16(0x0ull))));
}
B7481dd:{NFSU2_TR(0x7481dd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L7482de;}}
}
B7481e3:L7481e3:{c.instructions+=2;NFSU2_TR(0x7481e3);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w1(R+523,sborrow<u16>(r2(U+0),u16(0x9c4ull)));
w2(U+2,u16(u32(r2(U+0))-u32(u16(0x9c4ull))));
w1(R+519,u8(s16(r2(U+2))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B7481e8:{NFSU2_TR(0x7481e8);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L7482de;}}
}
B7481ee:L7481ee:{c.instructions+=3;NFSU2_TR(0x7481ee);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x400ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x400ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B7481f4:{NFSU2_TR(0x7481f4);
w4(R+12,u32(s32(s16(r2(R+4)))));
}
B7481f7:{NFSU2_TR(0x7481f7);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L74824b;}}
}
B7481f9:L7481f9:{c.instructions+=7;NFSU2_TR(0x7481f9);
w4(R+0,u32(0x400ull));
}
B7481fe:{NFSU2_TR(0x7481fe);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+20))));
}
B748200:{NFSU2_TR(0x748200);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B748204:{NFSU2_TR(0x748204);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B748207:{NFSU2_TR(0x748207);
__builtin_memmove((R+8),(R+12),4);
}
B748209:{NFSU2_TR(0x748209);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
}
B74820b:{NFSU2_TR(0x74820b);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L74820f;}}
}
B74820d:L74820d:{c.instructions+=1;NFSU2_TR(0x74820d);
w4(R+8,u32(0-u32(r4(R+8))));
}
B74820f:L74820f:{c.instructions+=20;NFSU2_TR(0x74820f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B748212:{NFSU2_TR(0x748212);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(r4(R+20)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B748215:{NFSU2_TR(0x748215);
u8 U[32];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B74821a:{NFSU2_TR(0x74821a);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B74821c:{NFSU2_TR(0x74821c);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B74821d:{NFSU2_TR(0x74821d);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x3ffull))));
}
B748223:{NFSU2_TR(0x748223);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B748225:{NFSU2_TR(0x748225);
u8 U[4];
w4(U+0,u32(u32(u32(0xaull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B748228:{NFSU2_TR(0x748228);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74822b:{NFSU2_TR(0x74822b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74822e:{NFSU2_TR(0x74822e);
u8 U[32];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B748233:{NFSU2_TR(0x748233);
__builtin_memmove((R+8),(R+12),4);
}
B748235:{NFSU2_TR(0x748235);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(r4(R+20)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B748238:{NFSU2_TR(0x748238);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B74823a:{NFSU2_TR(0x74823a);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B74823b:{NFSU2_TR(0x74823b);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x3ffull))));
}
B748241:{NFSU2_TR(0x748241);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B748243:{NFSU2_TR(0x748243);
u8 U[4];
w4(U+0,u32(u32(u32(0xaull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B748246:{NFSU2_TR(0x748246);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B748249:{NFSU2_TR(0x748249);
{goto L748255;}
}
B74824b:L74824b:{c.instructions+=2;NFSU2_TR(0x74824b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74824e:{NFSU2_TR(0x74824e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B748255:L748255:{c.instructions+=10;NFSU2_TR(0x748255);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B748258:{NFSU2_TR(0x748258);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74825b:{NFSU2_TR(0x74825b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B74825e:{NFSU2_TR(0x74825e);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B748260:{NFSU2_TR(0x748260);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B748263:{NFSU2_TR(0x748263);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B748267:{NFSU2_TR(0x748267);
__builtin_memmove((R+8),(R+0),4);
}
B748269:{NFSU2_TR(0x748269);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+20))));
}
B74826b:{NFSU2_TR(0x74826b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(U+0))<(u32(0xfaull))));
}
B748271:{NFSU2_TR(0x748271);
if(r1(R+512)){{goto L748298;}}
}
B748273:L748273:{c.instructions+=10;NFSU2_TR(0x748273);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B748276:{NFSU2_TR(0x748276);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B748279:{NFSU2_TR(0x748279);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B74827a:{NFSU2_TR(0x74827a);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1full))));
}
B74827d:{NFSU2_TR(0x74827d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B748280:{NFSU2_TR(0x748280);
u8 U[14];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),2);
s2(u32(r4(U+8)),r2(U+12));
}
B748285:{NFSU2_TR(0x748285);
u8 U[14];
w4(U+0,u32(u32(u32(0x76ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),2);
s2(u32(r4(U+8)),r2(U+12));
}
B74828a:{NFSU2_TR(0x74828a);
u8 U[14];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),2);
s2(u32(r4(U+8)),r2(U+12));
}
B74828f:{NFSU2_TR(0x74828f);
u8 U[14];
w4(U+0,u32(u32(u32(0x7aull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w2(U+12,u16(0x1ull));
s2(u32(r4(U+8)),r2(U+12));
}
B748296:{NFSU2_TR(0x748296);
{goto L7482d7;}
}
B748298:L748298:{c.instructions+=5;NFSU2_TR(0x748298);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74829b:{NFSU2_TR(0x74829b);
u8 U[14];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+8,u32(r2(U+12)));
}
B7482a0:{NFSU2_TR(0x7482a0);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B7482a2:{NFSU2_TR(0x7482a2);
u8 U[12];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+20),(U+8),4);
}
B7482a6:{NFSU2_TR(0x7482a6);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L7482ac;}}
}
B7482a8:L7482a8:{c.instructions+=1;NFSU2_TR(0x7482a8);
u8 U[2];
__builtin_memmove((U+0),(R+4),2);
s2(u32(r4(R+20)),r2(U+0));
}
B7482ac:L7482ac:{c.instructions+=3;NFSU2_TR(0x7482ac);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B7482b0:{NFSU2_TR(0x7482b0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7482b2:{NFSU2_TR(0x7482b2);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7482b8;}}
}
B7482b4:L7482b4:{c.instructions+=1;NFSU2_TR(0x7482b4);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7482b8:L7482b8:{c.instructions+=11;NFSU2_TR(0x7482b8);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B7482bc:{NFSU2_TR(0x7482bc);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B7482c0:{NFSU2_TR(0x7482c0);
w4(R+8,u32(r2(R+4)));
}
B7482c3:{NFSU2_TR(0x7482c3);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B7482c6:{NFSU2_TR(0x7482c6);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B7482c8:{NFSU2_TR(0x7482c8);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7482cb:{NFSU2_TR(0x7482cb);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B7482cc:{NFSU2_TR(0x7482cc);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x7482cc);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x7482cc);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B7482ce:{NFSU2_TR(0x7482ce);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B7482cf:{NFSU2_TR(0x7482cf);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x6ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7482d3:{NFSU2_TR(0x7482d3);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7482d7:L7482d7:{c.instructions+=2;NFSU2_TR(0x7482d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7482db:{NFSU2_TR(0x7482db);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7482de:L7482de:{c.instructions+=4;NFSU2_TR(0x7482de);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B7482e1:{NFSU2_TR(0x7482e1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7482e3:{NFSU2_TR(0x7482e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7482e4:{NFSU2_TR(0x7482e4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L748309;}}
}
B7482e6:L7482e6:{c.instructions+=4;NFSU2_TR(0x7482e6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7482e8:{NFSU2_TR(0x7482e8);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B7482ec:{NFSU2_TR(0x7482ec);
u8 U[2];
w1(R+523,u8(0x0ull));
w2(U+0,u16(u32(r2(R+0))&u32(r2(R+0))));
w1(R+519,u8(s16(r2(U+0))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B7482ef:{NFSU2_TR(0x7482ef);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7482fd;}}
}
B7482f1:L7482f1:{c.instructions+=4;NFSU2_TR(0x7482f1);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B7482f2:{NFSU2_TR(0x7482f2);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7482f6:{NFSU2_TR(0x7482f6);
__builtin_memmove((R+0),(R+28),4);
}
B7482f8:{NFSU2_TR(0x7482f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7482fdull));
TAIL_STATIC(0x747f50u,747);
}
B7482fd:L7482fd:{c.instructions+=6;NFSU2_TR(0x7482fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7482fe:{NFSU2_TR(0x7482fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7482ff:{NFSU2_TR(0x7482ff);
w4(R+0,u32(0x1ull));
}
B748304:{NFSU2_TR(0x748304);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B748305:{NFSU2_TR(0x748305);
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
B748308:{NFSU2_TR(0x748308);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B748309:L748309:{c.instructions+=2;NFSU2_TR(0x748309);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0x3ull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0x3ull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0x3ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B74830b:{NFSU2_TR(0x74830b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L748322;}}
}
B74830d:L74830d:{c.instructions+=3;NFSU2_TR(0x74830d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B74830f:{NFSU2_TR(0x74830f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748310:{NFSU2_TR(0x748310);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x748313ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B748313:L748313:{c.instructions+=7;NFSU2_TR(0x748313);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B748316:{NFSU2_TR(0x748316);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B748317:{NFSU2_TR(0x748317);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B748318:{NFSU2_TR(0x748318);
w4(R+0,u32(0x1ull));
}
B74831d:{NFSU2_TR(0x74831d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74831e:{NFSU2_TR(0x74831e);
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
B748321:{NFSU2_TR(0x748321);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B748322:L748322:{c.instructions+=2;NFSU2_TR(0x748322);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B748324:{NFSU2_TR(0x748324);
if(r1(R+518)){{goto L74833c;}}
}
B748326:L748326:{c.instructions+=6;NFSU2_TR(0x748326);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B748328:{NFSU2_TR(0x748328);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B74832c:{NFSU2_TR(0x74832c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xbull))));
}
B74832f:{NFSU2_TR(0x74832f);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ffcull))));
}
B748334:{NFSU2_TR(0x748334);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B748336:{NFSU2_TR(0x748336);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x188ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B74833c:L74833c:{c.instructions+=6;NFSU2_TR(0x74833c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74833d:{NFSU2_TR(0x74833d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B74833e:{NFSU2_TR(0x74833e);
w4(R+0,u32(0x1ull));
}
B748343:{NFSU2_TR(0x748343);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B748344:{NFSU2_TR(0x748344);
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
B748347:{NFSU2_TR(0x748347);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B748348:L748348:{c.instructions+=6;NFSU2_TR(0x748348);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B748349:{NFSU2_TR(0x748349);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B74834a:{NFSU2_TR(0x74834a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B74834c:{NFSU2_TR(0x74834c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74834d:{NFSU2_TR(0x74834d);
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
B748350:{NFSU2_TR(0x748350);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B748360:L748360:{c.instructions+=10;NFSU2_TR(0x748360);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x21cull))));
}
B748366:{NFSU2_TR(0x748366);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B74836b:{NFSU2_TR(0x74836b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74836c:{NFSU2_TR(0x74836c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74836d:{NFSU2_TR(0x74836d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74836e:{NFSU2_TR(0x74836e);
u8 U[8];
w4(U+0,u32(u32(u32(0x224ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B748375:{NFSU2_TR(0x748375);
__builtin_memmove((R+24),(R+4),4);
}
B748377:{NFSU2_TR(0x748377);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B748379:{NFSU2_TR(0x748379);
w4(R+28,u32(0x1ull));
}
B74837e:{NFSU2_TR(0x74837e);
__builtin_memmove((R+28),(R+28),4);
}
B748380:L748380:{c.instructions+=2;NFSU2_TR(0x748380);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+20))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+20)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B748386:{NFSU2_TR(0x748386);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L7483a7;}}
}
B748388:L748388:{c.instructions+=3;NFSU2_TR(0x748388);
__builtin_memmove((R+0),(R+24),4);
}
B74838a:{NFSU2_TR(0x74838a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B748390:{NFSU2_TR(0x748390);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x748395ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7480b0u);}goto L7480b0;}
}
B748395:L748395:{c.instructions+=3;NFSU2_TR(0x748395);
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
B748397:{NFSU2_TR(0x748397);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c4ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74839d:{NFSU2_TR(0x74839d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7483a7;}}
}
B74839f:L74839f:{c.instructions+=2;NFSU2_TR(0x74839f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7483a5:{NFSU2_TR(0x7483a5);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x748380u);}goto L748380;}
}
B7483a7:L7483a7:{c.instructions+=4;NFSU2_TR(0x7483a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B7483a9:{NFSU2_TR(0x7483a9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7483aa:{NFSU2_TR(0x7483aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b4ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7483b0:{NFSU2_TR(0x7483b0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7483b3ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B7483b3:L7483b3:{c.instructions+=11;NFSU2_TR(0x7483b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7483b6:{NFSU2_TR(0x7483b6);
__builtin_memmove((R+4),(R+0),4);
}
B7483b8:{NFSU2_TR(0x7483b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7483bb:{NFSU2_TR(0x7483bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7483be:{NFSU2_TR(0x7483be);
__builtin_memmove((R+28),(R+4),4);
}
B7483c0:{NFSU2_TR(0x7483c0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7483c3:{NFSU2_TR(0x7483c3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7483c4:{NFSU2_TR(0x7483c4);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+8))));
}
B7483c6:{NFSU2_TR(0x7483c6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x3e8ull))));
}
B7483cc:{NFSU2_TR(0x7483cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7483cf:{NFSU2_TR(0x7483cf);
if(r1(R+512)){{goto L748442;}}
}
B7483d1:L7483d1:{c.instructions+=31;NFSU2_TR(0x7483d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x174ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7483d7:{NFSU2_TR(0x7483d7);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x3e8ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B7483dd:{NFSU2_TR(0x7483dd);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B7483df:{NFSU2_TR(0x7483df);
u8 U[56];
w8(U+0,u64(r4(R+28)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x7483df);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x7483df);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B7483e1:{NFSU2_TR(0x7483e1);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B7483e3:{NFSU2_TR(0x7483e3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7483e4:{NFSU2_TR(0x7483e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+12),(U+0),4);
}
B7483e6:{NFSU2_TR(0x7483e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x174ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7483ec:{NFSU2_TR(0x7483ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7483ef:{NFSU2_TR(0x7483ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x178ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7483f5:{NFSU2_TR(0x7483f5);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x3e8ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B7483fb:{NFSU2_TR(0x7483fb);
u8 U[56];
w8(U+0,u64(r4(R+28)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x7483fb);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x7483fb);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B7483fd:{NFSU2_TR(0x7483fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x180ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B748403:{NFSU2_TR(0x748403);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x178ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B748409:{NFSU2_TR(0x748409);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74840c:{NFSU2_TR(0x74840c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74840f:{NFSU2_TR(0x74840f);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B748411:{NFSU2_TR(0x748411);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B748417:{NFSU2_TR(0x748417);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x29ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B74841a:{NFSU2_TR(0x74841a);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B74841c:{NFSU2_TR(0x74841c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B74841f:{NFSU2_TR(0x74841f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x3e8ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B748425:{NFSU2_TR(0x748425);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B748427:{NFSU2_TR(0x748427);
u8 U[56];
w8(U+0,u64(r4(R+28)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x748427);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x748427);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B748429:{NFSU2_TR(0x748429);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74842c:{NFSU2_TR(0x74842c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74842f:{NFSU2_TR(0x74842f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B748435:{NFSU2_TR(0x748435);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B748438:{NFSU2_TR(0x748438);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x180ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74843e:{NFSU2_TR(0x74843e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B748441:{NFSU2_TR(0x748441);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B748442:L748442:{c.instructions+=3;NFSU2_TR(0x748442);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B748445:{NFSU2_TR(0x748445);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B748447:{NFSU2_TR(0x748447);
if(r1(R+518)){{goto L748458;}}
}
B748449:L748449:{c.instructions+=4;NFSU2_TR(0x748449);
__builtin_memmove((R+8),(R+4),4);
}
B74844b:{NFSU2_TR(0x74844b);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B74844d:{NFSU2_TR(0x74844d);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(U+0))<(u32(0x64ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x64ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B748450:{NFSU2_TR(0x748450);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L748458;}}
}
B748452:L748452:{c.instructions+=2;NFSU2_TR(0x748452);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B748455:{NFSU2_TR(0x748455);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B748458:L748458:{c.instructions+=3;NFSU2_TR(0x748458);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74845b:{NFSU2_TR(0x74845b);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74845d:{NFSU2_TR(0x74845d);
if(r1(R+518)){{goto L74847a;}}
}
B74845f:L74845f:{c.instructions+=4;NFSU2_TR(0x74845f);
__builtin_memmove((R+8),(R+4),4);
}
B748461:{NFSU2_TR(0x748461);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B748463:{NFSU2_TR(0x748463);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(U+0))<(u32(0x64ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x64ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B748466:{NFSU2_TR(0x748466);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L74847a;}}
}
B748468:L748468:{c.instructions+=5;NFSU2_TR(0x748468);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B74846b:{NFSU2_TR(0x74846b);
__builtin_memmove((R+0),(R+4),4);
}
B74846d:{NFSU2_TR(0x74846d);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B74846f:{NFSU2_TR(0x74846f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x32ull))));
}
B748472:{NFSU2_TR(0x748472);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L74847a;}}
}
B748474:L748474:{c.instructions+=2;NFSU2_TR(0x748474);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B748477:{NFSU2_TR(0x748477);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74847a:L74847a:{c.instructions+=3;NFSU2_TR(0x74847a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74847d:{NFSU2_TR(0x74847d);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74847f:{NFSU2_TR(0x74847f);
if(r1(R+518)){{goto L748490;}}
}
B748481:L748481:{c.instructions+=4;NFSU2_TR(0x748481);
__builtin_memmove((R+8),(R+4),4);
}
B748483:{NFSU2_TR(0x748483);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B748485:{NFSU2_TR(0x748485);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(U+0))<(u32(0x64ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x64ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B748488:{NFSU2_TR(0x748488);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L748490;}}
}
B74848a:L74848a:{c.instructions+=2;NFSU2_TR(0x74848a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74848d:{NFSU2_TR(0x74848d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B748490:L748490:{c.instructions+=3;NFSU2_TR(0x748490);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B748493:{NFSU2_TR(0x748493);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B748495:{NFSU2_TR(0x748495);
if(r1(R+518)){{goto L7484b2;}}
}
B748497:L748497:{c.instructions+=4;NFSU2_TR(0x748497);
__builtin_memmove((R+8),(R+4),4);
}
B748499:{NFSU2_TR(0x748499);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B74849b:{NFSU2_TR(0x74849b);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(U+0))<(u32(0x64ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x64ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74849e:{NFSU2_TR(0x74849e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L7484b2;}}
}
B7484a0:L7484a0:{c.instructions+=5;NFSU2_TR(0x7484a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7484a3:{NFSU2_TR(0x7484a3);
__builtin_memmove((R+0),(R+4),4);
}
B7484a5:{NFSU2_TR(0x7484a5);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B7484a7:{NFSU2_TR(0x7484a7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x32ull))));
}
B7484aa:{NFSU2_TR(0x7484aa);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L7484b2;}}
}
B7484ac:L7484ac:{c.instructions+=2;NFSU2_TR(0x7484ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7484af:{NFSU2_TR(0x7484af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7484b2:L7484b2:{c.instructions+=3;NFSU2_TR(0x7484b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B7484b5:{NFSU2_TR(0x7484b5);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x1f4ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1f4ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1f4ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7484bb:{NFSU2_TR(0x7484bb);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L7484e5;}}
}
B7484bd:L7484bd:{c.instructions+=6;NFSU2_TR(0x7484bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B7484bf:{NFSU2_TR(0x7484bf);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7484c0:{NFSU2_TR(0x7484c0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7484c1:{NFSU2_TR(0x7484c1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7484c2:{NFSU2_TR(0x7484c2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7484c3:{NFSU2_TR(0x7484c3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7484c6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B7484c6:L7484c6:{c.instructions+=3;NFSU2_TR(0x7484c6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B7484c9:{NFSU2_TR(0x7484c9);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7484cb:{NFSU2_TR(0x7484cb);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7484e5;}}
}
B7484cd:L7484cd:{c.instructions+=2;NFSU2_TR(0x7484cd);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B7484d0:{NFSU2_TR(0x7484d0);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L7484e5;}}
}
B7484d2:L7484d2:{c.instructions+=4;NFSU2_TR(0x7484d2);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B7484d6:{NFSU2_TR(0x7484d6);
u8 U[5];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
w1(U+4,u8(0x40ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7484db:{NFSU2_TR(0x7484db);
u8 U[6];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7484e0:{NFSU2_TR(0x7484e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7484e5ull));
TAIL_STATIC(0x747f50u,747);
}
B7484e5:L7484e5:{c.instructions+=5;NFSU2_TR(0x7484e5);
u8 U[8];
w4(U+0,u32(u32(u32(0x224ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7484ec:{NFSU2_TR(0x7484ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7484ed:{NFSU2_TR(0x7484ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7484ee:{NFSU2_TR(0x7484ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7484ef:{NFSU2_TR(0x7484ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7484f4ull));
TAIL_STATIC(0x76115eu,761);
}
B7484f4:L7484f4:{c.instructions+=2;NFSU2_TR(0x7484f4);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x21cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x21cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x21cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7484fa:{NFSU2_TR(0x7484fa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B748500:L748500:{c.instructions+=7;NFSU2_TR(0x748500);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B748504:{NFSU2_TR(0x748504);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748505:{NFSU2_TR(0x748505);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B748508:{NFSU2_TR(0x748508);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748509:{NFSU2_TR(0x748509);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x190ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74850f:{NFSU2_TR(0x74850f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748510:{NFSU2_TR(0x748510);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x748515ull));
TAIL_STATIC(0x74b790u,74b);
}
B748515:L748515:{c.instructions+=3;NFSU2_TR(0x748515);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B748518:{NFSU2_TR(0x748518);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74851a:{NFSU2_TR(0x74851a);
if(r1(R+518)){{goto L748565;}}
}
B74851c:L74851c:{c.instructions+=2;NFSU2_TR(0x74851c);
__builtin_memmove((R+4),(R+24),4);
}
B74851e:{NFSU2_TR(0x74851e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x748523ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x748360u);}goto L748360;}
}
B748523:L748523:{c.instructions+=3;NFSU2_TR(0x748523);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x188ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B748529:{NFSU2_TR(0x748529);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74852b:{NFSU2_TR(0x74852b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L748559;}}
}
B74852d:L74852d:{c.instructions+=3;NFSU2_TR(0x74852d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B748533:{NFSU2_TR(0x748533);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B748535:{NFSU2_TR(0x748535);
if(r1(R+518)){{goto L748559;}}
}
B748537:L748537:{c.instructions+=3;NFSU2_TR(0x748537);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74853d:{NFSU2_TR(0x74853d);
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
B74853f:{NFSU2_TR(0x74853f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L748559;}}
}
B748541:L748541:{c.instructions+=5;NFSU2_TR(0x748541);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B748547:{NFSU2_TR(0x748547);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748549:{NFSU2_TR(0x748549);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74854a:{NFSU2_TR(0x74854a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c0ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B748554:{NFSU2_TR(0x748554);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x748556ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B748556:L748556:{c.instructions+=1;NFSU2_TR(0x748556);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B748559:L748559:{c.instructions+=2;NFSU2_TR(0x748559);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74855a:{NFSU2_TR(0x74855a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74855full));
TAIL_STATIC(0x74b870u,74b);
}
B74855f:L74855f:{c.instructions+=4;NFSU2_TR(0x74855f);
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
B748562:{NFSU2_TR(0x748562);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B748563:{NFSU2_TR(0x748563);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B748564:{NFSU2_TR(0x748564);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B748565:L748565:{c.instructions+=6;NFSU2_TR(0x748565);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74856b:{NFSU2_TR(0x74856b);
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
B74856c:{NFSU2_TR(0x74856c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74856d:{NFSU2_TR(0x74856d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B748573:{NFSU2_TR(0x748573);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B748574:{NFSU2_TR(0x748574);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B748580:L748580:{c.instructions+=5;NFSU2_TR(0x748580);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748581:{NFSU2_TR(0x748581);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748582:{NFSU2_TR(0x748582);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748583:{NFSU2_TR(0x748583);
u8 U[4];
w4(U+0,u32(0x1ccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748588:{NFSU2_TR(0x748588);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74858dull));
TAIL_STATIC(0x5832f0u,583);
}
B74858d:L74858d:{c.instructions+=5;NFSU2_TR(0x74858d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B748591:{NFSU2_TR(0x748591);
__builtin_memmove((R+24),(R+0),4);
}
B748593:{NFSU2_TR(0x748593);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B748595:{NFSU2_TR(0x748595);
w4(R+4,u32(0x73ull));
}
B74859a:{NFSU2_TR(0x74859a);
__builtin_memmove((R+28),(R+24),4);
}
B74859c:L74859c:{c.instructions+=1;NFSU2_TR(0x74859c);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L74859e;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74859cu);}goto L74859c;}
}
B74859e:L74859e:{c.instructions+=7;NFSU2_TR(0x74859e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7485a2:{NFSU2_TR(0x7485a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7485a6:{NFSU2_TR(0x7485a6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7485a9:{NFSU2_TR(0x7485a9);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x1000ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1000ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1000ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7485af:{NFSU2_TR(0x7485af);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
s4(u32(r4(R+24)),r4(U+0));
}
B7485b1:{NFSU2_TR(0x7485b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7485b4:{NFSU2_TR(0x7485b4);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L7485bb;}}
}
B7485b6:L7485b6:{c.instructions+=1;NFSU2_TR(0x7485b6);
w4(R+28,u32(0x1000ull));
}
B7485bb:L7485bb:{c.instructions+=3;NFSU2_TR(0x7485bb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7485bc:{NFSU2_TR(0x7485bc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7485bd:{NFSU2_TR(0x7485bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7485c2ull));
TAIL_STATIC(0x5832f0u,583);
}
B7485c2:L7485c2:{c.instructions+=7;NFSU2_TR(0x7485c2);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7485c4:{NFSU2_TR(0x7485c4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7485c5:{NFSU2_TR(0x7485c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x184ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7485cb:{NFSU2_TR(0x7485cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7485d1:{NFSU2_TR(0x7485d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7485d4:{NFSU2_TR(0x7485d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7485d7:{NFSU2_TR(0x7485d7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7485daull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B7485da:L7485da:{c.instructions+=15;NFSU2_TR(0x7485da);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B7485dd:{NFSU2_TR(0x7485dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7485e0:{NFSU2_TR(0x7485e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7485e3:{NFSU2_TR(0x7485e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7485e6:{NFSU2_TR(0x7485e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7485e9:{NFSU2_TR(0x7485e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7485ec:{NFSU2_TR(0x7485ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7485ef:{NFSU2_TR(0x7485ef);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7485f2:{NFSU2_TR(0x7485f2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x69ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7485f5:{NFSU2_TR(0x7485f5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x76ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7485f8:{NFSU2_TR(0x7485f8);
w4(R+4,u32(0x20ull));
}
B7485fd:{NFSU2_TR(0x7485fd);
w4(R+8,u32(0xc8ull));
}
B748602:{NFSU2_TR(0x748602);
w4(R+28,u32(0x1ull));
}
B748607:{NFSU2_TR(0x748607);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B748608:{NFSU2_TR(0x748608);
{goto L748610;}
}
B748610:L748610:{c.instructions+=7;NFSU2_TR(0x748610);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B748614:{NFSU2_TR(0x748614);
u8 U[2];
__builtin_memmove((U+0),(R+8),2);
s2(u32(r4(R+0)),r2(U+0));
}
B748617:{NFSU2_TR(0x748617);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B74861b:{NFSU2_TR(0x74861b);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),2);
s2(u32(r4(U+0)),r2(U+4));
}
B74861f:{NFSU2_TR(0x74861f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B748622:{NFSU2_TR(0x748622);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B748623:{NFSU2_TR(0x748623);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x748610u);}goto L748610;}}
}
B748625:L748625:{c.instructions+=3;NFSU2_TR(0x748625);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x190ull))));
__builtin_memmove((R+4),(U+0),4);
}
B74862b:{NFSU2_TR(0x74862b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74862c:{NFSU2_TR(0x74862c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x748631ull));
TAIL_STATIC(0x74b740u,74b);
}
B748631:L748631:{c.instructions+=4;NFSU2_TR(0x748631);
u8 U[4];
w4(U+0,u32(0x748500ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748636:{NFSU2_TR(0x748636);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748637:{NFSU2_TR(0x748637);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74863a:{NFSU2_TR(0x74863a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74863dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B74863d:L74863d:{c.instructions+=7;NFSU2_TR(0x74863d);
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
B748640:{NFSU2_TR(0x748640);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B748646:{NFSU2_TR(0x748646);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B748647:{NFSU2_TR(0x748647);
__builtin_memmove((R+0),(R+24),4);
}
B748649:{NFSU2_TR(0x748649);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74864a:{NFSU2_TR(0x74864a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B74864b:{NFSU2_TR(0x74864b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B748650:L748650:{c.instructions+=6;NFSU2_TR(0x748650);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748651:{NFSU2_TR(0x748651);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B748655:{NFSU2_TR(0x748655);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B748657:{NFSU2_TR(0x748657);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748659:{NFSU2_TR(0x748659);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74865a:{NFSU2_TR(0x74865a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74865dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B74865d:L74865d:{c.instructions+=4;NFSU2_TR(0x74865d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B748660:{NFSU2_TR(0x748660);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B748663:{NFSU2_TR(0x748663);
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
B748665:{NFSU2_TR(0x748665);
if(r1(R+518)){{goto L748670;}}
}
B748667:L748667:{c.instructions+=3;NFSU2_TR(0x748667);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B748669:{NFSU2_TR(0x748669);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74866a:{NFSU2_TR(0x74866a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74866dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B74866d:L74866d:{c.instructions+=1;NFSU2_TR(0x74866d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B748670:L748670:{c.instructions+=3;NFSU2_TR(0x748670);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x184ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B748676:{NFSU2_TR(0x748676);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748677:{NFSU2_TR(0x748677);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74867cull));
TAIL_STATIC(0x598ec0u,598);
}
B74867c:L74867c:{c.instructions+=3;NFSU2_TR(0x74867c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x190ull))));
__builtin_memmove((R+4),(U+0),4);
}
B748682:{NFSU2_TR(0x748682);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748683:{NFSU2_TR(0x748683);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x748688ull));
TAIL_STATIC(0x74b770u,74b);
}
B748688:L748688:{c.instructions+=2;NFSU2_TR(0x748688);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748689:{NFSU2_TR(0x748689);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74868eull));
TAIL_STATIC(0x598ec0u,598);
}
B74868e:L74868e:{c.instructions+=3;NFSU2_TR(0x74868e);
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
B748691:{NFSU2_TR(0x748691);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B748692:{NFSU2_TR(0x748692);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7486a0:L7486a0:{c.instructions+=5;NFSU2_TR(0x7486a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7486a1:{NFSU2_TR(0x7486a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7486a5:{NFSU2_TR(0x7486a5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7486a6:{NFSU2_TR(0x7486a6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7486a9:{NFSU2_TR(0x7486a9);
__builtin_memmove((R+16),(R+16),4);
}
B7486b0:L7486b0:{c.instructions+=5;NFSU2_TR(0x7486b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7486b3:{NFSU2_TR(0x7486b3);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7486b7:{NFSU2_TR(0x7486b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B7486b9:{NFSU2_TR(0x7486b9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7486ba:{NFSU2_TR(0x7486ba);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7486bdull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B7486bd:L7486bd:{c.instructions+=6;NFSU2_TR(0x7486bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B7486bf:{NFSU2_TR(0x7486bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7486c2:{NFSU2_TR(0x7486c2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7486c6:{NFSU2_TR(0x7486c6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7486c9:{NFSU2_TR(0x7486c9);
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
B7486cb:{NFSU2_TR(0x7486cb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7486b0u);}goto L7486b0;}}
}
B7486cd:L7486cd:{c.instructions+=3;NFSU2_TR(0x7486cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B7486cf:{NFSU2_TR(0x7486cf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7486d0:{NFSU2_TR(0x7486d0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7486d3ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B7486d3:L7486d3:{c.instructions+=6;NFSU2_TR(0x7486d3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7486d6:{NFSU2_TR(0x7486d6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7486d9:{NFSU2_TR(0x7486d9);
__builtin_memmove((R+8),(R+518),1);
}
B7486dc:{NFSU2_TR(0x7486dc);
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
B7486df:{NFSU2_TR(0x7486df);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7486e2:{NFSU2_TR(0x7486e2);
if(r1(R+518)){{goto L7486f3;}}
}
B7486e4:L7486e4:{c.instructions+=2;NFSU2_TR(0x7486e4);
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
B7486e7:{NFSU2_TR(0x7486e7);
if(r1(R+518)){{goto L7486f3;}}
}
B7486e9:L7486e9:{c.instructions+=6;NFSU2_TR(0x7486e9);
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
B7486eb:{NFSU2_TR(0x7486eb);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x69ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7486ee:{NFSU2_TR(0x7486ee);
__builtin_memmove((R+0),(R+28),4);
}
B7486f0:{NFSU2_TR(0x7486f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7486f1:{NFSU2_TR(0x7486f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7486f2:{NFSU2_TR(0x7486f2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7486f3:L7486f3:{c.instructions+=6;NFSU2_TR(0x7486f3);
w4(R+0,u32(0x1ull));
}
B7486f8:{NFSU2_TR(0x7486f8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x69ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7486fb:{NFSU2_TR(0x7486fb);
__builtin_memmove((R+0),(R+28),4);
}
B7486fd:{NFSU2_TR(0x7486fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7486fe:{NFSU2_TR(0x7486fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7486ff:{NFSU2_TR(0x7486ff);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B748700:L748700:{c.instructions+=9;NFSU2_TR(0x748700);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748701:{NFSU2_TR(0x748701);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748702:{NFSU2_TR(0x748702);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748703:{NFSU2_TR(0x748703);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B748707:{NFSU2_TR(0x748707);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x190ull))));
__builtin_memmove((R+0),(U+0),4);
}
B74870d:{NFSU2_TR(0x74870d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74870e:{NFSU2_TR(0x74870e);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B748710:{NFSU2_TR(0x748710);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B748714:{NFSU2_TR(0x748714);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x748719ull));
TAIL_STATIC(0x74b7e0u,74b);
}
B748719:L748719:{c.instructions+=4;NFSU2_TR(0x748719);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B74871d:{NFSU2_TR(0x74871d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B748720:{NFSU2_TR(0x748720);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B748722:{NFSU2_TR(0x748722);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L74876c;}}
}
B748724:L748724:{c.instructions+=3;NFSU2_TR(0x748724);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748725:{NFSU2_TR(0x748725);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B748729:{NFSU2_TR(0x748729);
__builtin_memmove((R+16),(R+16),4);
}
B748730:L748730:{c.instructions+=2;NFSU2_TR(0x748730);
u8 U[10];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(u8(0x3ull))));
w1(R+523,sborrow<u8>(r1(U+8),u8(0x3ull)));
w1(U+9,u8(u32(r1(U+8))-u32(u8(0x3ull))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B748734:{NFSU2_TR(0x748734);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L748741;}}
}
B748736:L748736:{c.instructions+=3;NFSU2_TR(0x748736);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B748738:{NFSU2_TR(0x748738);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748739:{NFSU2_TR(0x748739);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74873cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B74873c:L74873c:{c.instructions+=2;NFSU2_TR(0x74873c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B74873f:{NFSU2_TR(0x74873f);
{goto L74874c;}
}
B748741:L748741:{c.instructions+=2;NFSU2_TR(0x748741);
__builtin_memmove((R+0),(R+28),4);
}
B748743:{NFSU2_TR(0x748743);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x748748ull));
TAIL_STATIC(0x747f50u,747);
}
B748748:L748748:{c.instructions+=2;NFSU2_TR(0x748748);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74874a:{NFSU2_TR(0x74874a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L74876b;}}
}
B74874c:L74874c:{c.instructions+=8;NFSU2_TR(0x74874c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B74874e:{NFSU2_TR(0x74874e);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B748752:{NFSU2_TR(0x748752);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1bull))));
}
B748755:{NFSU2_TR(0x748755);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ffcull))));
}
B74875a:{NFSU2_TR(0x74875a);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B74875c:{NFSU2_TR(0x74875c);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74875f:{NFSU2_TR(0x74875f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B748761:{NFSU2_TR(0x748761);
if(r1(R+518)){{goto L74876b;}}
}
B748763:L748763:{c.instructions+=4;NFSU2_TR(0x748763);
w4(R+20,u32(u32(r4(R+20))-u32(r4(R+0))));
}
B748765:{NFSU2_TR(0x748765);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B748767:{NFSU2_TR(0x748767);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B748769:{NFSU2_TR(0x748769);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x748730u);}goto L748730;}}
}
B74876b:L74876b:{c.instructions+=1;NFSU2_TR(0x74876b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74876c:L74876c:{c.instructions+=3;NFSU2_TR(0x74876c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B748772:{NFSU2_TR(0x748772);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B748774:{NFSU2_TR(0x748774);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L74877d;}}
}
B748776:L748776:{c.instructions+=2;NFSU2_TR(0x748776);
__builtin_memmove((R+4),(R+24),4);
}
B748778:{NFSU2_TR(0x748778);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74877dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x748360u);}goto L748360;}
}
B74877d:L74877d:{c.instructions+=3;NFSU2_TR(0x74877d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B748781:{NFSU2_TR(0x748781);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748782:{NFSU2_TR(0x748782);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x748787ull));
TAIL_STATIC(0x74b870u,74b);
}
B748787:L748787:{c.instructions+=6;NFSU2_TR(0x748787);
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
B74878a:{NFSU2_TR(0x74878a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74878b:{NFSU2_TR(0x74878b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B74878c:{NFSU2_TR(0x74878c);
__builtin_memmove((R+0),(R+12),4);
}
B74878e:{NFSU2_TR(0x74878e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B74878f:{NFSU2_TR(0x74878f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B748790:L748790:{c.instructions+=8;NFSU2_TR(0x748790);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748791:{NFSU2_TR(0x748791);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B748795:{NFSU2_TR(0x748795);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748796:{NFSU2_TR(0x748796);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x190ull))));
__builtin_memmove((R+0),(U+0),4);
}
B74879c:{NFSU2_TR(0x74879c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74879d:{NFSU2_TR(0x74879d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74879e:{NFSU2_TR(0x74879e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7487a2:{NFSU2_TR(0x7487a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7487a7ull));
TAIL_STATIC(0x74b7e0u,74b);
}
B7487a7:L7487a7:{c.instructions+=6;NFSU2_TR(0x7487a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x188ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7487ad:{NFSU2_TR(0x7487ad);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B7487af:{NFSU2_TR(0x7487af);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7487b2:{NFSU2_TR(0x7487b2);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7487b4:{NFSU2_TR(0x7487b4);
w4(R+24,u32(0x1ull));
}
B7487b9:{NFSU2_TR(0x7487b9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7487df;}}
}
B7487bb:L7487bb:{c.instructions+=1;NFSU2_TR(0x7487bb);
{goto L7487c0;}
}
B7487c0:L7487c0:{c.instructions+=2;NFSU2_TR(0x7487c0);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+20)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7487c6:{NFSU2_TR(0x7487c6);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L7487df;}}
}
B7487c8:L7487c8:{c.instructions+=3;NFSU2_TR(0x7487c8);
__builtin_memmove((R+0),(R+12),4);
}
B7487ca:{NFSU2_TR(0x7487ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7487d0:{NFSU2_TR(0x7487d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7487d5ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7480b0u);}goto L7480b0;}
}
B7487d5:L7487d5:{c.instructions+=3;NFSU2_TR(0x7487d5);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7487d7:{NFSU2_TR(0x7487d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c4ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7487dd:{NFSU2_TR(0x7487dd);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7487c0u);}goto L7487c0;}}
}
B7487df:L7487df:{c.instructions+=3;NFSU2_TR(0x7487df);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x188ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7487e5:{NFSU2_TR(0x7487e5);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7487e7:{NFSU2_TR(0x7487e7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7487fe;}}
}
B7487e9:L7487e9:{c.instructions+=4;NFSU2_TR(0x7487e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7487ed:{NFSU2_TR(0x7487ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7487ee:{NFSU2_TR(0x7487ee);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B7487f0:{NFSU2_TR(0x7487f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7487f5ull));
TAIL_STATIC(0x74b870u,74b);
}
B7487f5:L7487f5:{c.instructions+=6;NFSU2_TR(0x7487f5);
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
B7487f8:{NFSU2_TR(0x7487f8);
__builtin_memmove((R+0),(R+24),4);
}
B7487fa:{NFSU2_TR(0x7487fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7487fb:{NFSU2_TR(0x7487fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7487fc:{NFSU2_TR(0x7487fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7487fd:{NFSU2_TR(0x7487fd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7487fe:L7487fe:{c.instructions+=3;NFSU2_TR(0x7487fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B748802:{NFSU2_TR(0x748802);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B748804:{NFSU2_TR(0x748804);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74880e;}}
}
B748806:L748806:{c.instructions+=2;NFSU2_TR(0x748806);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x184ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74880c:{NFSU2_TR(0x74880c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B74880e:L74880e:{c.instructions+=3;NFSU2_TR(0x74880e);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B748810:{NFSU2_TR(0x748810);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748811:{NFSU2_TR(0x748811);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L74884f;}}
}
B748813:L748813:{c.instructions+=3;NFSU2_TR(0x748813);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B748817:{NFSU2_TR(0x748817);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B748819:{NFSU2_TR(0x748819);
if(r1(R+518)){{goto L74882f;}}
}
B74881b:L74881b:{c.instructions+=3;NFSU2_TR(0x74881b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x184ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B748821:{NFSU2_TR(0x748821);
__builtin_memmove((R+8),(R+4),4);
}
B748823:{NFSU2_TR(0x748823);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B748826:L748826:{c.instructions+=1;NFSU2_TR(0x748826);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L748828;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x748826u);}goto L748826;}
}
B748828:L748828:{c.instructions+=2;NFSU2_TR(0x748828);
__builtin_memmove((R+4),(R+8),4);
}
B74882a:{NFSU2_TR(0x74882a);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B74882d:L74882d:{c.instructions+=1;NFSU2_TR(0x74882d);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L74882f;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74882du);}goto L74882d;}
}
B74882f:L74882f:{c.instructions+=6;NFSU2_TR(0x74882f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B748833:{NFSU2_TR(0x748833);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x188ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B748839:{NFSU2_TR(0x748839);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74883a:{NFSU2_TR(0x74883a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74883b:{NFSU2_TR(0x74883b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x188ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B748841:{NFSU2_TR(0x748841);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x748846ull));
TAIL_STATIC(0x74b870u,74b);
}
B748846:L748846:{c.instructions+=6;NFSU2_TR(0x748846);
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
B748849:{NFSU2_TR(0x748849);
__builtin_memmove((R+0),(R+24),4);
}
B74884b:{NFSU2_TR(0x74884b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74884c:{NFSU2_TR(0x74884c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B74884d:{NFSU2_TR(0x74884d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B74884e:{NFSU2_TR(0x74884e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74884f:L74884f:{c.instructions+=5;NFSU2_TR(0x74884f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x184ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B748855:{NFSU2_TR(0x748855);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B748857:{NFSU2_TR(0x748857);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B748859:{NFSU2_TR(0x748859);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74885b:{NFSU2_TR(0x74885b);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L7488ad;}}
}
B74885d:L74885d:{c.instructions+=2;NFSU2_TR(0x74885d);
__builtin_memmove((R+28),(R+24),4);
}
B74885f:{NFSU2_TR(0x74885f);
}
B748860:L748860:{c.instructions+=5;NFSU2_TR(0x748860);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B748862:{NFSU2_TR(0x748862);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B748865:{NFSU2_TR(0x748865);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+20),(U+4),4);
}
B748868:{NFSU2_TR(0x748868);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74886a:{NFSU2_TR(0x74886a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x748860u);}goto L748860;}}
}
B74886c:L74886c:{c.instructions+=2;NFSU2_TR(0x74886c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74886e:{NFSU2_TR(0x74886e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7488ad;}}
}
B748870:L748870:{c.instructions+=3;NFSU2_TR(0x748870);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B748874:{NFSU2_TR(0x748874);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B748876:{NFSU2_TR(0x748876);
if(r1(R+518)){{goto L748888;}}
}
B748878:L748878:{c.instructions+=3;NFSU2_TR(0x748878);
__builtin_memmove((R+4),(R+0),4);
}
B74887a:{NFSU2_TR(0x74887a);
__builtin_memmove((R+8),(R+4),4);
}
B74887c:{NFSU2_TR(0x74887c);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B74887f:L74887f:{c.instructions+=1;NFSU2_TR(0x74887f);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L748881;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74887fu);}goto L74887f;}
}
B748881:L748881:{c.instructions+=2;NFSU2_TR(0x748881);
__builtin_memmove((R+4),(R+8),4);
}
B748883:{NFSU2_TR(0x748883);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B748886:L748886:{c.instructions+=1;NFSU2_TR(0x748886);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L748888;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x748886u);}goto L748886;}
}
B748888:L748888:{c.instructions+=6;NFSU2_TR(0x748888);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x188ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74888e:{NFSU2_TR(0x74888e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x184ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B748894:{NFSU2_TR(0x748894);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B748896:{NFSU2_TR(0x748896);
__builtin_memmove((R+8),(R+4),4);
}
B748898:{NFSU2_TR(0x748898);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B74889b:{NFSU2_TR(0x74889b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B74889e:L74889e:{c.instructions+=1;NFSU2_TR(0x74889e);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L7488a0;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74889eu);}goto L74889e;}
}
B7488a0:L7488a0:{c.instructions+=2;NFSU2_TR(0x7488a0);
__builtin_memmove((R+4),(R+8),4);
}
B7488a2:{NFSU2_TR(0x7488a2);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B7488a5:L7488a5:{c.instructions+=1;NFSU2_TR(0x7488a5);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L7488a7;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7488a5u);}goto L7488a5;}
}
B7488a7:L7488a7:{c.instructions+=1;NFSU2_TR(0x7488a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x188ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B7488ad:L7488ad:{c.instructions+=5;NFSU2_TR(0x7488ad);
__builtin_memmove((R+24),(R+0),4);
}
B7488af:{NFSU2_TR(0x7488af);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7488b3:{NFSU2_TR(0x7488b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7488b4:{NFSU2_TR(0x7488b4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7488b5:{NFSU2_TR(0x7488b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7488baull));
TAIL_STATIC(0x74b870u,74b);
}
B7488ba:L7488ba:{c.instructions+=6;NFSU2_TR(0x7488ba);
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
B7488bd:{NFSU2_TR(0x7488bd);
__builtin_memmove((R+0),(R+24),4);
}
B7488bf:{NFSU2_TR(0x7488bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7488c0:{NFSU2_TR(0x7488c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7488c1:{NFSU2_TR(0x7488c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7488c2:{NFSU2_TR(0x7488c2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7488d0:L7488d0:{c.instructions+=9;NFSU2_TR(0x7488d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x64ull))));
}
B7488d3:{NFSU2_TR(0x7488d3);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B7488d8:{NFSU2_TR(0x7488d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7488dc:{NFSU2_TR(0x7488dc);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7488e0:{NFSU2_TR(0x7488e0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7488e1:{NFSU2_TR(0x7488e1);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B7488e5:{NFSU2_TR(0x7488e5);
u8 U[4];
w4(U+0,u32(0x7d2bacull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7488ea:{NFSU2_TR(0x7488ea);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7488eb:{NFSU2_TR(0x7488eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7488f0ull));
TAIL_STATIC(0x75c784u,75c);
}
B7488f0:L7488f0:{c.instructions+=11;NFSU2_TR(0x7488f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7488f4:{NFSU2_TR(0x7488f4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B7488f7:{NFSU2_TR(0x7488f7);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7488fc:{NFSU2_TR(0x7488fc);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7488fe:{NFSU2_TR(0x7488fe);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B748902:{NFSU2_TR(0x748902);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748903:{NFSU2_TR(0x748903);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B748907:{NFSU2_TR(0x748907);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748908:{NFSU2_TR(0x748908);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x110ull))));
}
B74890e:{NFSU2_TR(0x74890e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74890f:{NFSU2_TR(0x74890f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x748914ull));
TAIL_STATIC(0x7414a0u,741);
}
B748914:L748914:{c.instructions+=3;NFSU2_TR(0x748914);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B748917:{NFSU2_TR(0x748917);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748918:{NFSU2_TR(0x748918);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74891dull));
TAIL_STATIC(0x742360u,742);
}
B74891d:L74891d:{c.instructions+=4;NFSU2_TR(0x74891d);
u8 U[5];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B748921:{NFSU2_TR(0x748921);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B748924:{NFSU2_TR(0x748924);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B748926:{NFSU2_TR(0x748926);
if(r1(R+518)){{goto L748974;}}
}
B748928:L748928:{c.instructions+=2;NFSU2_TR(0x748928);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x5eull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B74892a:{NFSU2_TR(0x74892a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L748956;}}
}
B74892c:L74892c:{c.instructions+=9;NFSU2_TR(0x74892c);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B748930:{NFSU2_TR(0x748930);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B748934:{NFSU2_TR(0x748934);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+8)),r1(U+0));
}
B748936:{NFSU2_TR(0x748936);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74893a:{NFSU2_TR(0x74893a);
u8 U[4];
w4(U+0,u32(u32(u32(0x21ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B74893e:{NFSU2_TR(0x74893e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74893f:{NFSU2_TR(0x74893f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748940:{NFSU2_TR(0x748940);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748941:{NFSU2_TR(0x748941);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x748946ull));
TAIL_STATIC(0x741650u,741);
}
B748946:L748946:{c.instructions+=3;NFSU2_TR(0x748946);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B748949:{NFSU2_TR(0x748949);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74894d:{NFSU2_TR(0x74894d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x748952ull));
TAIL_STATIC(0x76115eu,761);
}
B748952:L748952:{c.instructions+=2;NFSU2_TR(0x748952);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x64ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x64ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x64ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B748955:{NFSU2_TR(0x748955);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B748956:L748956:{c.instructions+=9;NFSU2_TR(0x748956);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74895a:{NFSU2_TR(0x74895a);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74895e:{NFSU2_TR(0x74895e);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B748962:{NFSU2_TR(0x748962);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748963:{NFSU2_TR(0x748963);
u8 U[1];
w1(U+0,u8(0x20ull));
s1(u32(r4(R+0)),r1(U+0));
}
B748966:{NFSU2_TR(0x748966);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74896a:{NFSU2_TR(0x74896a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74896b:{NFSU2_TR(0x74896b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74896c:{NFSU2_TR(0x74896c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x748971ull));
TAIL_STATIC(0x741650u,741);
}
B748971:L748971:{c.instructions+=1;NFSU2_TR(0x748971);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B748974:L748974:{c.instructions+=2;NFSU2_TR(0x748974);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B748978:{NFSU2_TR(0x748978);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74897dull));
TAIL_STATIC(0x76115eu,761);
}
B74897d:L74897d:{c.instructions+=2;NFSU2_TR(0x74897d);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x64ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x64ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x64ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B748980:{NFSU2_TR(0x748980);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B748990:L748990:{c.instructions+=18;NFSU2_TR(0x748990);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x44ull))));
}
B748993:{NFSU2_TR(0x748993);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B748998:{NFSU2_TR(0x748998);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74899c:{NFSU2_TR(0x74899c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74899d:{NFSU2_TR(0x74899d);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7489a1:{NFSU2_TR(0x7489a1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7489a2:{NFSU2_TR(0x7489a2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7489a3:{NFSU2_TR(0x7489a3);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7489a8:{NFSU2_TR(0x7489a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7489ac:{NFSU2_TR(0x7489ac);
u8 U[4];
w4(U+0,u32(0x3eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7489ae:{NFSU2_TR(0x7489ae);
u8 U[4];
w4(U+0,u32(u32(u32(0x16ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B7489b2:{NFSU2_TR(0x7489b2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7489b3:{NFSU2_TR(0x7489b3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7489b4:{NFSU2_TR(0x7489b4);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x110ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7489ba:{NFSU2_TR(0x7489ba);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7489bb:{NFSU2_TR(0x7489bb);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w1(U+4,u8(0x25ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7489c0:{NFSU2_TR(0x7489c0);
u8 U[5];
w4(U+0,u32(u32(u32(0x21ull))+u32(r4(R+16))));
w1(U+4,u8(0x7bull));
s1(u32(r4(U+0)),r1(U+4));
}
B7489c5:{NFSU2_TR(0x7489c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7489caull));
TAIL_STATIC(0x7414a0u,741);
}
B7489ca:L7489ca:{c.instructions+=3;NFSU2_TR(0x7489ca);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B7489cd:{NFSU2_TR(0x7489cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7489ce:{NFSU2_TR(0x7489ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7489d3ull));
TAIL_STATIC(0x742360u,742);
}
B7489d3:L7489d3:{c.instructions+=10;NFSU2_TR(0x7489d3);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7489d7:{NFSU2_TR(0x7489d7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B7489da:{NFSU2_TR(0x7489da);
u8 U[4];
w4(U+0,u32(u32(u32(0xeull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B7489de:{NFSU2_TR(0x7489de);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7489df:{NFSU2_TR(0x7489df);
u8 U[4];
w4(U+0,u32(0x3eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7489e1:{NFSU2_TR(0x7489e1);
__builtin_memmove((R+0),(R+8),4);
}
B7489e3:{NFSU2_TR(0x7489e3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7489e4:{NFSU2_TR(0x7489e4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7489e5:{NFSU2_TR(0x7489e5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7489e6:{NFSU2_TR(0x7489e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7489ebull));
TAIL_STATIC(0x7414a0u,741);
}
B7489eb:L7489eb:{c.instructions+=3;NFSU2_TR(0x7489eb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B7489ee:{NFSU2_TR(0x7489ee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7489ef:{NFSU2_TR(0x7489ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7489f4ull));
TAIL_STATIC(0x742360u,742);
}
B7489f4:L7489f4:{c.instructions+=10;NFSU2_TR(0x7489f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7489f8:{NFSU2_TR(0x7489f8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B7489fb:{NFSU2_TR(0x7489fb);
u8 U[4];
w4(U+0,u32(u32(u32(0xeull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B7489ff:{NFSU2_TR(0x7489ff);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748a00:{NFSU2_TR(0x748a00);
u8 U[4];
w4(U+0,u32(0x3eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748a02:{NFSU2_TR(0x748a02);
__builtin_memmove((R+0),(R+8),4);
}
B748a04:{NFSU2_TR(0x748a04);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748a05:{NFSU2_TR(0x748a05);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748a06:{NFSU2_TR(0x748a06);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748a07:{NFSU2_TR(0x748a07);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x748a0cull));
TAIL_STATIC(0x7414a0u,741);
}
B748a0c:L748a0c:{c.instructions+=3;NFSU2_TR(0x748a0c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B748a0f:{NFSU2_TR(0x748a0f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748a10:{NFSU2_TR(0x748a10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x748a15ull));
TAIL_STATIC(0x742360u,742);
}
B748a15:L748a15:{c.instructions+=4;NFSU2_TR(0x748a15);
u8 U[5];
w4(U+0,u32(u32(u32(0x1eull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B748a19:{NFSU2_TR(0x748a19);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B748a1c:{NFSU2_TR(0x748a1c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x24ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B748a1e:{NFSU2_TR(0x748a1e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L748a4a;}}
}
B748a20:L748a20:{c.instructions+=13;NFSU2_TR(0x748a20);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B748a24:{NFSU2_TR(0x748a24);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B748a28:{NFSU2_TR(0x748a28);
w1(R+0,u8(0x20ull));
}
B748a2a:{NFSU2_TR(0x748a2a);
w1(R+8,u8(u32(r1(R+8))|u32(r1(R+0))));
}
B748a2c:{NFSU2_TR(0x748a2c);
w1(R+4,u8(u32(r1(R+4))|u32(r1(R+0))));
}
B748a2e:{NFSU2_TR(0x748a2e);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B748a32:{NFSU2_TR(0x748a32);
u8 U[5];
w4(U+0,u32(u32(u32(0x11ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B748a36:{NFSU2_TR(0x748a36);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B748a3a:{NFSU2_TR(0x748a3a);
u8 U[5];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B748a3e:{NFSU2_TR(0x748a3e);
w1(R+8,u8(u32(r1(R+8))|u32(r1(R+0))));
}
B748a40:{NFSU2_TR(0x748a40);
w1(R+4,u8(u32(r1(R+4))|u32(r1(R+0))));
}
B748a42:{NFSU2_TR(0x748a42);
u8 U[5];
w4(U+0,u32(u32(u32(0x11ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B748a46:{NFSU2_TR(0x748a46);
u8 U[5];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B748a4a:L748a4a:{c.instructions+=4;NFSU2_TR(0x748a4a);
w4(R+28,u32(0x7d2bd4ull));
}
B748a4f:{NFSU2_TR(0x748a4f);
u8 U[4];
w4(U+0,u32(u32(u32(0xeull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B748a53:{NFSU2_TR(0x748a53);
w4(R+4,u32(0x6ull));
}
B748a58:{NFSU2_TR(0x748a58);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B748a5a:L748a5a:{c.instructions+=1;NFSU2_TR(0x748a5a);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L748a5c;}}
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
__builtin_memmove((U+33),gp(u32(r4(U+17))),1);
__builtin_memmove((U+38),(U+33),1);
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+39),(U+16),1);
w1(R+512,u8((r1(U+39))<(r1(U+38))));
w1(R+523,sborrow<u8>(r1(U+39),r1(U+38)));
w1(U+40,u8(u32(r1(U+39))-u32(r1(U+38))));
w1(R+519,u8(s8(r1(U+40))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+40))==(u8(0x0ull))));
w1(U+35,u8(u32(r1(U+40))&u32(u8(0xffull))));
w1(U+36,u8(__builtin_popcountll(u64(r1(U+35)))));
w1(U+37,u8(u32(r1(U+36))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+37))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x748a5au);}goto L748a5a;}}
}
B748a5c:L748a5c:{c.instructions+=1;NFSU2_TR(0x748a5c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L748a69;}}
}
B748a5e:L748a5e:{c.instructions+=2;NFSU2_TR(0x748a5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x528ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B748a64:{NFSU2_TR(0x748a64);
{goto L748b3f;}
}
B748a69:L748a69:{c.instructions+=4;NFSU2_TR(0x748a69);
w4(R+28,u32(0x7d2bccull));
}
B748a6e:{NFSU2_TR(0x748a6e);
u8 U[4];
w4(U+0,u32(u32(u32(0xeull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B748a72:{NFSU2_TR(0x748a72);
w4(R+4,u32(0x6ull));
}
B748a77:{NFSU2_TR(0x748a77);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B748a79:L748a79:{c.instructions+=1;NFSU2_TR(0x748a79);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L748a7b;}}
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
__builtin_memmove((U+33),gp(u32(r4(U+17))),1);
__builtin_memmove((U+38),(U+33),1);
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+39),(U+16),1);
w1(R+512,u8((r1(U+39))<(r1(U+38))));
w1(R+523,sborrow<u8>(r1(U+39),r1(U+38)));
w1(U+40,u8(u32(r1(U+39))-u32(r1(U+38))));
w1(R+519,u8(s8(r1(U+40))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+40))==(u8(0x0ull))));
w1(U+35,u8(u32(r1(U+40))&u32(u8(0xffull))));
w1(U+36,u8(__builtin_popcountll(u64(r1(U+35)))));
w1(U+37,u8(u32(r1(U+36))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+37))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x748a79u);}goto L748a79;}}
}
B748a7b:L748a7b:{c.instructions+=1;NFSU2_TR(0x748a7b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L748aab;}}
}
B748a7d:L748a7d:{c.instructions+=3;NFSU2_TR(0x748a7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x528ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B748a83:{NFSU2_TR(0x748a83);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B748a85:{NFSU2_TR(0x748a85);
if(r1(R+518)){{goto L748a9a;}}
}
B748a87:L748a87:{c.instructions+=2;NFSU2_TR(0x748a87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B748a89:{NFSU2_TR(0x748a89);
__builtin_memmove((R+16),(R+16),4);
}
B748a90:L748a90:{c.instructions+=6;NFSU2_TR(0x748a90);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+0),(U+0),1);
}
B748a92:{NFSU2_TR(0x748a92);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B748a93:{NFSU2_TR(0x748a93);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+8)),r1(U+0));
}
B748a95:{NFSU2_TR(0x748a95);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B748a96:{NFSU2_TR(0x748a96);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B748a98:{NFSU2_TR(0x748a98);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x748a90u);}goto L748a90;}}
}
B748a9a:L748a9a:{c.instructions+=3;NFSU2_TR(0x748a9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B748a9c:{NFSU2_TR(0x748a9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x528ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B748aa6:{NFSU2_TR(0x748aa6);
{goto L748b3f;}
}
B748aab:L748aab:{c.instructions+=4;NFSU2_TR(0x748aab);
w4(R+28,u32(0x7d2bc4ull));
}
B748ab0:{NFSU2_TR(0x748ab0);
u8 U[4];
w4(U+0,u32(u32(u32(0xeull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B748ab4:{NFSU2_TR(0x748ab4);
w4(R+4,u32(0x6ull));
}
B748ab9:{NFSU2_TR(0x748ab9);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B748abb:L748abb:{c.instructions+=1;NFSU2_TR(0x748abb);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L748abd;}}
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
__builtin_memmove((U+33),gp(u32(r4(U+17))),1);
__builtin_memmove((U+38),(U+33),1);
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+39),(U+16),1);
w1(R+512,u8((r1(U+39))<(r1(U+38))));
w1(R+523,sborrow<u8>(r1(U+39),r1(U+38)));
w1(U+40,u8(u32(r1(U+39))-u32(r1(U+38))));
w1(R+519,u8(s8(r1(U+40))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+40))==(u8(0x0ull))));
w1(U+35,u8(u32(r1(U+40))&u32(u8(0xffull))));
w1(U+36,u8(__builtin_popcountll(u64(r1(U+35)))));
w1(U+37,u8(u32(r1(U+36))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+37))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x748abbu);}goto L748abb;}}
}
B748abd:L748abd:{c.instructions+=1;NFSU2_TR(0x748abd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L748ad5;}}
}
B748abf:L748abf:{c.instructions+=6;NFSU2_TR(0x748abf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B748ac0:{NFSU2_TR(0x748ac0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B748ac1:{NFSU2_TR(0x748ac1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x510ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B748ac7:{NFSU2_TR(0x748ac7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B748ac8:{NFSU2_TR(0x748ac8);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B748acc:{NFSU2_TR(0x748acc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x748ad1ull));
TAIL_STATIC(0x76115eu,761);
}
B748ad1:L748ad1:{c.instructions+=2;NFSU2_TR(0x748ad1);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x44ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x44ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x44ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B748ad4:{NFSU2_TR(0x748ad4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B748ad5:L748ad5:{c.instructions+=5;NFSU2_TR(0x748ad5);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748ad7:{NFSU2_TR(0x748ad7);
u8 U[4];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B748adb:{NFSU2_TR(0x748adb);
u8 U[4];
w4(U+0,u32(0x7d2bbcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748ae0:{NFSU2_TR(0x748ae0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748ae1:{NFSU2_TR(0x748ae1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x748ae6ull));
TAIL_STATIC(0x75f1d0u,75f);
}
B748ae6:L748ae6:{c.instructions+=3;NFSU2_TR(0x748ae6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B748ae9:{NFSU2_TR(0x748ae9);
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
B748aeb:{NFSU2_TR(0x748aeb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L748b13;}}
}
B748aed:L748aed:{c.instructions+=4;NFSU2_TR(0x748aed);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B748af1:{NFSU2_TR(0x748af1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748af2:{NFSU2_TR(0x748af2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x510ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B748af8:{NFSU2_TR(0x748af8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x748afdull));
TAIL_STATIC(0x75d65bu,75d);
}
B748afd:L748afd:{c.instructions+=7;NFSU2_TR(0x748afd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B748b00:{NFSU2_TR(0x748b00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B748b01:{NFSU2_TR(0x748b01);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B748b02:{NFSU2_TR(0x748b02);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B748b05:{NFSU2_TR(0x748b05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B748b06:{NFSU2_TR(0x748b06);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B748b0a:{NFSU2_TR(0x748b0a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x748b0full));
TAIL_STATIC(0x76115eu,761);
}
B748b0f:L748b0f:{c.instructions+=2;NFSU2_TR(0x748b0f);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x44ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x44ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x44ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B748b12:{NFSU2_TR(0x748b12);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B748b13:L748b13:{c.instructions+=4;NFSU2_TR(0x748b13);
w4(R+28,u32(0x7d2bb4ull));
}
B748b18:{NFSU2_TR(0x748b18);
u8 U[4];
w4(U+0,u32(u32(u32(0xeull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B748b1c:{NFSU2_TR(0x748b1c);
w4(R+4,u32(0x6ull));
}
B748b21:{NFSU2_TR(0x748b21);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B748b23:L748b23:{c.instructions+=1;NFSU2_TR(0x748b23);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L748b25;}}
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
__builtin_memmove((U+33),gp(u32(r4(U+17))),1);
__builtin_memmove((U+38),(U+33),1);
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+39),(U+16),1);
w1(R+512,u8((r1(U+39))<(r1(U+38))));
w1(R+523,sborrow<u8>(r1(U+39),r1(U+38)));
w1(U+40,u8(u32(r1(U+39))-u32(r1(U+38))));
w1(R+519,u8(s8(r1(U+40))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+40))==(u8(0x0ull))));
w1(U+35,u8(u32(r1(U+40))&u32(u8(0xffull))));
w1(U+36,u8(__builtin_popcountll(u64(r1(U+35)))));
w1(U+37,u8(u32(r1(U+36))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+37))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x748b23u);}goto L748b23;}}
}
B748b25:L748b25:{c.instructions+=1;NFSU2_TR(0x748b25);
if(r1(R+518)){{goto L748b45;}}
}
B748b27:L748b27:{c.instructions+=3;NFSU2_TR(0x748b27);
u8 U[5];
w4(U+0,u32(u32(u32(0xeull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B748b2b:{NFSU2_TR(0x748b2b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B748b2d:{NFSU2_TR(0x748b2d);
if(r1(R+518)){{goto L748b45;}}
}
B748b2f:L748b2f:{c.instructions+=5;NFSU2_TR(0x748b2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B748b31:{NFSU2_TR(0x748b31);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B748b35:{NFSU2_TR(0x748b35);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748b36:{NFSU2_TR(0x748b36);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748b37:{NFSU2_TR(0x748b37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x748b3cull));
TAIL_STATIC(0x75f140u,75f);
}
B748b3c:L748b3c:{c.instructions+=1;NFSU2_TR(0x748b3c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B748b3f:L748b3f:{c.instructions+=1;NFSU2_TR(0x748b3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x510ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B748b45:L748b45:{c.instructions+=5;NFSU2_TR(0x748b45);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B748b49:{NFSU2_TR(0x748b49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B748b4a:{NFSU2_TR(0x748b4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B748b4b:{NFSU2_TR(0x748b4b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B748b4c:{NFSU2_TR(0x748b4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x748b51ull));
TAIL_STATIC(0x76115eu,761);
}
B748b51:L748b51:{c.instructions+=2;NFSU2_TR(0x748b51);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x44ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x44ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x44ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B748b54:{NFSU2_TR(0x748b54);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B748b60:L748b60:{c.instructions+=4;NFSU2_TR(0x748b60);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748b61:{NFSU2_TR(0x748b61);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B748b65:{NFSU2_TR(0x748b65);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B748b67:{NFSU2_TR(0x748b67);
if(r1(R+518)){{goto L748b94;}}
}
B748b69:L748b69:{c.instructions+=3;NFSU2_TR(0x748b69);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x524ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B748b6f:{NFSU2_TR(0x748b6f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B748b71:{NFSU2_TR(0x748b71);
if(r1(R+518)){{goto L748b7c;}}
}
B748b73:L748b73:{c.instructions+=2;NFSU2_TR(0x748b73);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748b74:{NFSU2_TR(0x748b74);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x748b79ull));
TAIL_STATIC(0x755590u,755);
}
B748b79:L748b79:{c.instructions+=1;NFSU2_TR(0x748b79);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B748b7c:L748b7c:{c.instructions+=3;NFSU2_TR(0x748b7c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B748b7e:{NFSU2_TR(0x748b7e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B748b80:{NFSU2_TR(0x748b80);
if(r1(R+518)){{goto L748b8b;}}
}
B748b82:L748b82:{c.instructions+=2;NFSU2_TR(0x748b82);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748b83:{NFSU2_TR(0x748b83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x748b88ull));
TAIL_STATIC(0x598ec0u,598);
}
B748b88:L748b88:{c.instructions+=1;NFSU2_TR(0x748b88);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B748b8b:L748b8b:{c.instructions+=2;NFSU2_TR(0x748b8b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748b8c:{NFSU2_TR(0x748b8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x748b91ull));
TAIL_STATIC(0x598ec0u,598);
}
B748b91:L748b91:{c.instructions+=1;NFSU2_TR(0x748b91);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B748b94:L748b94:{c.instructions+=3;NFSU2_TR(0x748b94);
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
B748b96:{NFSU2_TR(0x748b96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B748b97:{NFSU2_TR(0x748b97);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B748ba0:L748ba0:{c.instructions+=11;NFSU2_TR(0x748ba0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748ba1:{NFSU2_TR(0x748ba1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B748ba5:{NFSU2_TR(0x748ba5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748ba6:{NFSU2_TR(0x748ba6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B748baa:{NFSU2_TR(0x748baa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748bab:{NFSU2_TR(0x748bab);
u8 U[4];
w4(U+0,u32(0x7a13e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748bb0:{NFSU2_TR(0x748bb0);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
}
B748bb3:{NFSU2_TR(0x748bb3);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748bb8:{NFSU2_TR(0x748bb8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748bb9:{NFSU2_TR(0x748bb9);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+24)),r1(U+0));
}
B748bbc:{NFSU2_TR(0x748bbc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x748bc1ull));
TAIL_STATIC(0x741a50u,741);
}
B748bc1:L748bc1:{c.instructions+=6;NFSU2_TR(0x748bc1);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((R+0),(U+0),4);
}
B748bc4:{NFSU2_TR(0x748bc4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748bc5:{NFSU2_TR(0x748bc5);
u8 U[4];
w4(U+0,u32(0x7d2be4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748bca:{NFSU2_TR(0x748bca);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748bcf:{NFSU2_TR(0x748bcf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748bd0:{NFSU2_TR(0x748bd0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x748bd5ull));
TAIL_STATIC(0x741a50u,741);
}
B748bd5:L748bd5:{c.instructions+=6;NFSU2_TR(0x748bd5);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((R+4),(U+0),4);
}
B748bd8:{NFSU2_TR(0x748bd8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748bd9:{NFSU2_TR(0x748bd9);
u8 U[4];
w4(U+0,u32(0x7a14b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748bde:{NFSU2_TR(0x748bde);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748be3:{NFSU2_TR(0x748be3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748be4:{NFSU2_TR(0x748be4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x748be9ull));
TAIL_STATIC(0x741a50u,741);
}
B748be9:L748be9:{c.instructions+=6;NFSU2_TR(0x748be9);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((R+8),(U+0),4);
}
B748bec:{NFSU2_TR(0x748bec);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748bed:{NFSU2_TR(0x748bed);
u8 U[4];
w4(U+0,u32(0x7d2bdcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748bf2:{NFSU2_TR(0x748bf2);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748bf7:{NFSU2_TR(0x748bf7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748bf8:{NFSU2_TR(0x748bf8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x748bfdull));
TAIL_STATIC(0x741a50u,741);
}
B748bfd:L748bfd:{c.instructions+=7;NFSU2_TR(0x748bfd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B748c00:{NFSU2_TR(0x748c00);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x74ull))));
__builtin_memmove((R+0),(U+0),4);
}
B748c03:{NFSU2_TR(0x748c03);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748c04:{NFSU2_TR(0x748c04);
u8 U[4];
w4(U+0,u32(0x7a1398ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748c09:{NFSU2_TR(0x748c09);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748c0e:{NFSU2_TR(0x748c0e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748c0f:{NFSU2_TR(0x748c0f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x748c14ull));
TAIL_STATIC(0x741a50u,741);
}
B748c14:L748c14:{c.instructions+=6;NFSU2_TR(0x748c14);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x78ull))));
__builtin_memmove((R+4),(U+0),4);
}
B748c17:{NFSU2_TR(0x748c17);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748c18:{NFSU2_TR(0x748c18);
u8 U[4];
w4(U+0,u32(0x7a13a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748c1d:{NFSU2_TR(0x748c1d);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748c22:{NFSU2_TR(0x748c22);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748c23:{NFSU2_TR(0x748c23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x748c28ull));
TAIL_STATIC(0x741a50u,741);
}
B748c28:L748c28:{c.instructions+=6;NFSU2_TR(0x748c28);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7cull))));
__builtin_memmove((R+8),(U+0),4);
}
B748c2b:{NFSU2_TR(0x748c2b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748c2c:{NFSU2_TR(0x748c2c);
u8 U[4];
w4(U+0,u32(0x7a1490ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748c31:{NFSU2_TR(0x748c31);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748c36:{NFSU2_TR(0x748c36);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748c37:{NFSU2_TR(0x748c37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x748c3cull));
TAIL_STATIC(0x741a50u,741);
}
B748c3c:L748c3c:{c.instructions+=6;NFSU2_TR(0x748c3c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x9cull))));
}
B748c42:{NFSU2_TR(0x748c42);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748c43:{NFSU2_TR(0x748c43);
u8 U[4];
w4(U+0,u32(0x7a1300ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748c48:{NFSU2_TR(0x748c48);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748c4d:{NFSU2_TR(0x748c4d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748c4e:{NFSU2_TR(0x748c4e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x748c53ull));
TAIL_STATIC(0x741a50u,741);
}
B748c53:L748c53:{c.instructions+=4;NFSU2_TR(0x748c53);
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
B748c56:{NFSU2_TR(0x748c56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B748c57:{NFSU2_TR(0x748c57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B748c58:{NFSU2_TR(0x748c58);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B748c60:L748c60:{c.instructions+=11;NFSU2_TR(0x748c60);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748c61:{NFSU2_TR(0x748c61);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B748c65:{NFSU2_TR(0x748c65);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B748c67:{NFSU2_TR(0x748c67);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748c68:{NFSU2_TR(0x748c68);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B748c6c:{NFSU2_TR(0x748c6c);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748c6e:{NFSU2_TR(0x748c6e);
u8 U[4];
w4(U+0,u32(0x7d2c14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748c73:{NFSU2_TR(0x748c73);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+0)),r1(U+0));
}
B748c76:{NFSU2_TR(0x748c76);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748c77:{NFSU2_TR(0x748c77);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x510ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B748c81:{NFSU2_TR(0x748c81);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x748c86ull));
TAIL_STATIC(0x75f1d0u,75f);
}
B748c86:L748c86:{c.instructions+=3;NFSU2_TR(0x748c86);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B748c89:{NFSU2_TR(0x748c89);
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
B748c8b:{NFSU2_TR(0x748c8b);
if(r1(R+518)){{goto L748ca1;}}
}
B748c8d:L748c8d:{c.instructions+=4;NFSU2_TR(0x748c8d);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748c8f:{NFSU2_TR(0x748c8f);
u8 U[4];
w4(U+0,u32(0x7d2c08ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748c94:{NFSU2_TR(0x748c94);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748c95:{NFSU2_TR(0x748c95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x748c9aull));
TAIL_STATIC(0x75f1d0u,75f);
}
B748c9a:L748c9a:{c.instructions+=3;NFSU2_TR(0x748c9a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B748c9d:{NFSU2_TR(0x748c9d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B748c9f:{NFSU2_TR(0x748c9f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L748cb4;}}
}
B748ca1:L748ca1:{c.instructions+=5;NFSU2_TR(0x748ca1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B748ca3:{NFSU2_TR(0x748ca3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748ca4:{NFSU2_TR(0x748ca4);
u8 U[4];
w4(U+0,u32(0x7d2becull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748ca9:{NFSU2_TR(0x748ca9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748caa:{NFSU2_TR(0x748caa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x748cafull));
TAIL_STATIC(0x75c784u,75c);
}
B748caf:L748caf:{c.instructions+=2;NFSU2_TR(0x748caf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B748cb1:{NFSU2_TR(0x748cb1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B748cb4:L748cb4:{c.instructions+=3;NFSU2_TR(0x748cb4);
__builtin_memmove((R+0),(R+28),4);
}
B748cb6:{NFSU2_TR(0x748cb6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B748cb9:{NFSU2_TR(0x748cb9);
__builtin_memmove((R+16),(R+16),4);
}
B748cc0:L748cc0:{c.instructions+=4;NFSU2_TR(0x748cc0);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B748cc2:{NFSU2_TR(0x748cc2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B748cc3:{NFSU2_TR(0x748cc3);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B748cc5:{NFSU2_TR(0x748cc5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x748cc0u);}goto L748cc0;}}
}
B748cc7:L748cc7:{c.instructions+=4;NFSU2_TR(0x748cc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B748cca:{NFSU2_TR(0x748cca);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B748ccc:{NFSU2_TR(0x748ccc);
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
B748cce:{NFSU2_TR(0x748cce);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L748ce6;}}
}
B748cd0:L748cd0:{c.instructions+=2;NFSU2_TR(0x748cd0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B748cd2:{NFSU2_TR(0x748cd2);
__builtin_memmove((R+4),(R+28),4);
}
B748cd4:L748cd4:{c.instructions+=6;NFSU2_TR(0x748cd4);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+0),(U+0),1);
}
B748cd6:{NFSU2_TR(0x748cd6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B748cd7:{NFSU2_TR(0x748cd7);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+8)),r1(U+0));
}
B748cd9:{NFSU2_TR(0x748cd9);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B748cda:{NFSU2_TR(0x748cda);
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
B748cdc:{NFSU2_TR(0x748cdc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x748cd4u);}goto L748cd4;}}
}
B748cde:L748cde:{c.instructions+=2;NFSU2_TR(0x748cde);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B748ce0:{NFSU2_TR(0x748ce0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x510ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B748ce6:L748ce6:{c.instructions+=4;NFSU2_TR(0x748ce6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B748ce7:{NFSU2_TR(0x748ce7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B748cee:{NFSU2_TR(0x748cee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B748cef:{NFSU2_TR(0x748cef);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B748cf0:L748cf0:{c.instructions+=3;NFSU2_TR(0x748cf0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B748cf4:{NFSU2_TR(0x748cf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B748cf7:{NFSU2_TR(0x748cf7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B748d00:L748d00:{c.instructions+=7;NFSU2_TR(0x748d00);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748d01:{NFSU2_TR(0x748d01);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B748d05:{NFSU2_TR(0x748d05);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B748d07:{NFSU2_TR(0x748d07);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748d08:{NFSU2_TR(0x748d08);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10cull))));
__builtin_memmove((R+28),(U+0),4);
}
B748d0e:{NFSU2_TR(0x748d0e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B748d12:{NFSU2_TR(0x748d12);
if(r1(R+518)){{goto L748d4e;}}
}
B748d14:L748d14:{c.instructions+=3;NFSU2_TR(0x748d14);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x510ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B748d1a:{NFSU2_TR(0x748d1a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B748d1c:{NFSU2_TR(0x748d1c);
if(r1(R+518)){{goto L748d4e;}}
}
B748d1e:L748d1e:{c.instructions+=3;NFSU2_TR(0x748d1e);
u8 U[4];
w4(U+0,u32(0x7d2c24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748d23:{NFSU2_TR(0x748d23);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748d24:{NFSU2_TR(0x748d24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x748d29ull));
TAIL_STATIC(0x75f140u,75f);
}
B748d29:L748d29:{c.instructions+=4;NFSU2_TR(0x748d29);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B748d2c:{NFSU2_TR(0x748d2c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B748d2e:{NFSU2_TR(0x748d2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x514ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B748d34:{NFSU2_TR(0x748d34);
if(r1(R+518)){{goto L748d4e;}}
}
B748d36:L748d36:{c.instructions+=3;NFSU2_TR(0x748d36);
u8 U[4];
w4(U+0,u32(0x7d2c20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748d3b:{NFSU2_TR(0x748d3b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748d3c:{NFSU2_TR(0x748d3c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x748d41ull));
TAIL_STATIC(0x75f140u,75f);
}
B748d41:L748d41:{c.instructions+=4;NFSU2_TR(0x748d41);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B748d44:{NFSU2_TR(0x748d44);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B748d46:{NFSU2_TR(0x748d46);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x518ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B748d4c:{NFSU2_TR(0x748d4c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L748d53;}}
}
B748d4e:L748d4e:{c.instructions+=4;NFSU2_TR(0x748d4e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B748d4f:{NFSU2_TR(0x748d4f);
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
B748d51:{NFSU2_TR(0x748d51);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B748d52:{NFSU2_TR(0x748d52);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B748d53:L748d53:{c.instructions+=7;NFSU2_TR(0x748d53);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748d54:{NFSU2_TR(0x748d54);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x514ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B748d5a:{NFSU2_TR(0x748d5a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2ull))));
}
B748d5d:{NFSU2_TR(0x748d5d);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B748d5f:{NFSU2_TR(0x748d5f);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x400ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x400ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B748d64:{NFSU2_TR(0x748d64);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x514ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B748d6a:{NFSU2_TR(0x748d6a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L748d72;}}
}
B748d6c:L748d6c:{c.instructions+=5;NFSU2_TR(0x748d6c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B748d6d:{NFSU2_TR(0x748d6d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B748d6e:{NFSU2_TR(0x748d6e);
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
B748d70:{NFSU2_TR(0x748d70);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B748d71:{NFSU2_TR(0x748d71);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B748d72:L748d72:{c.instructions+=6;NFSU2_TR(0x748d72);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748d73:{NFSU2_TR(0x748d73);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B748d76:{NFSU2_TR(0x748d76);
__builtin_memmove((R+4),(R+0),4);
}
B748d78:{NFSU2_TR(0x748d78);
__builtin_memmove((R+20),(R+4),4);
}
B748d7a:{NFSU2_TR(0x748d7a);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B748d7d:{NFSU2_TR(0x748d7d);
__builtin_memmove((R+28),(R+8),4);
}
B748d7f:L748d7f:{c.instructions+=1;NFSU2_TR(0x748d7f);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L748d81;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x748d7fu);}goto L748d7f;}
}
B748d81:L748d81:{c.instructions+=3;NFSU2_TR(0x748d81);
__builtin_memmove((R+4),(R+20),4);
}
B748d83:{NFSU2_TR(0x748d83);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B748d86:{NFSU2_TR(0x748d86);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748d88:L748d88:{c.instructions+=1;NFSU2_TR(0x748d88);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L748d8a;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x748d88u);}goto L748d88;}
}
B748d8a:L748d8a:{c.instructions+=5;NFSU2_TR(0x748d8a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B748d8e:{NFSU2_TR(0x748d8e);
u8 U[4];
w4(U+0,u32(0x7d2c1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748d93:{NFSU2_TR(0x748d93);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748d94:{NFSU2_TR(0x748d94);
u8 U[13];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0x0ull));
s1(u32(r4(U+8)),r1(U+12));
}
B748d99:{NFSU2_TR(0x748d99);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x748d9eull));
TAIL_STATIC(0x7414a0u,741);
}
B748d9e:L748d9e:{c.instructions+=3;NFSU2_TR(0x748d9e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B748da1:{NFSU2_TR(0x748da1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748da2:{NFSU2_TR(0x748da2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x748da7ull));
TAIL_STATIC(0x742190u,742);
}
B748da7:L748da7:{c.instructions+=5;NFSU2_TR(0x748da7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B748daa:{NFSU2_TR(0x748daa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B748dac:{NFSU2_TR(0x748dac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B748dae:{NFSU2_TR(0x748dae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B748daf:{NFSU2_TR(0x748daf);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x748d6cu);}goto L748d6c;}}
}
B748db1:L748db1:{c.instructions+=6;NFSU2_TR(0x748db1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x518ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B748db7:{NFSU2_TR(0x748db7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x510ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B748dbd:{NFSU2_TR(0x748dbd);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B748dc0:{NFSU2_TR(0x748dc0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B748dc3:{NFSU2_TR(0x748dc3);
u8 U[1];
w1(R+523,u8(0x0ull));
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B748dc5:{NFSU2_TR(0x748dc5);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L748dd4;}}
}
B748dc7:L748dc7:{c.instructions+=2;NFSU2_TR(0x748dc7);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x20ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x20ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B748dca:{NFSU2_TR(0x748dca);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L748dd4;}}
}
B748dcc:L748dcc:{c.instructions+=4;NFSU2_TR(0x748dcc);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B748dcf:{NFSU2_TR(0x748dcf);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B748dd0:{NFSU2_TR(0x748dd0);
u8 U[1];
w1(R+523,u8(0x0ull));
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B748dd2:{NFSU2_TR(0x748dd2);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x748dc7u);}goto L748dc7;}}
}
B748dd4:L748dd4:{c.instructions+=4;NFSU2_TR(0x748dd4);
u8 U[4];
w4(U+0,u32(0x7d2c24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748dd9:{NFSU2_TR(0x748dd9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748dda:{NFSU2_TR(0x748dda);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x51cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B748de0:{NFSU2_TR(0x748de0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x748de5ull));
TAIL_STATIC(0x75f140u,75f);
}
B748de5:L748de5:{c.instructions+=3;NFSU2_TR(0x748de5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B748de8:{NFSU2_TR(0x748de8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B748dea:{NFSU2_TR(0x748dea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L748df2;}}
}
B748dec:L748dec:{c.instructions+=1;NFSU2_TR(0x748dec);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x51cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B748df2:L748df2:{c.instructions+=3;NFSU2_TR(0x748df2);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x51cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+0)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B748df8:{NFSU2_TR(0x748df8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x520ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B748dfe:{NFSU2_TR(0x748dfe);
if(r1(R+518)){{goto L748e03;}}
}
B748e00:L748e00:{c.instructions+=1;NFSU2_TR(0x748e00);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+0)),r1(U+0));
}
B748e03:L748e03:{c.instructions+=5;NFSU2_TR(0x748e03);
__builtin_memmove((R+0),(R+24),4);
}
B748e05:{NFSU2_TR(0x748e05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B748e06:{NFSU2_TR(0x748e06);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B748e07:{NFSU2_TR(0x748e07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B748e08:{NFSU2_TR(0x748e08);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B748e10:L748e10:{c.instructions+=5;NFSU2_TR(0x748e10);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B748e14:{NFSU2_TR(0x748e14);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748e15:{NFSU2_TR(0x748e15);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B748e17:{NFSU2_TR(0x748e17);
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
B748e19:{NFSU2_TR(0x748e19);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L748f09;}}
}
B748e1f:L748e1f:{c.instructions+=2;NFSU2_TR(0x748e1f);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x5ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x5ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B748e22:{NFSU2_TR(0x748e22);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L748f09;}}
}
B748e28:L748e28:{c.instructions+=9;NFSU2_TR(0x748e28);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748e29:{NFSU2_TR(0x748e29);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B748e2d:{NFSU2_TR(0x748e2d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748e2e:{NFSU2_TR(0x748e2e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748e2f:{NFSU2_TR(0x748e2f);
u8 U[4];
w4(U+0,u32(0x7d2c38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748e34:{NFSU2_TR(0x748e34);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x110ull))));
__builtin_memmove((R+24),(U+0),4);
}
B748e3a:{NFSU2_TR(0x748e3a);
u8 U[4];
w4(U+0,u32(0x400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748e3f:{NFSU2_TR(0x748e3f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748e40:{NFSU2_TR(0x748e40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x748e45ull));
TAIL_STATIC(0x741690u,741);
}
B748e45:L748e45:{c.instructions+=5;NFSU2_TR(0x748e45);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x520ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B748e4b:{NFSU2_TR(0x748e4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x51cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B748e51:{NFSU2_TR(0x748e51);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B748e54:{NFSU2_TR(0x748e54);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B748e56:{NFSU2_TR(0x748e56);
if(r1(R+518)){{goto L748e67;}}
}
B748e58:L748e58:{c.instructions+=3;NFSU2_TR(0x748e58);
u8 U[1];
w1(U+0,u8(0x25ull));
s1(u32(r4(R+0)),r1(U+0));
}
B748e5b:{NFSU2_TR(0x748e5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x51cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B748e61:{NFSU2_TR(0x748e61);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x520ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B748e67:L748e67:{c.instructions+=3;NFSU2_TR(0x748e67);
__builtin_memmove((R+0),(R+24),4);
}
B748e69:{NFSU2_TR(0x748e69);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B748e6c:{NFSU2_TR(0x748e6c);
__builtin_memmove((R+16),(R+16),4);
}
B748e70:L748e70:{c.instructions+=4;NFSU2_TR(0x748e70);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B748e72:{NFSU2_TR(0x748e72);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B748e73:{NFSU2_TR(0x748e73);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B748e75:{NFSU2_TR(0x748e75);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x748e70u);}goto L748e70;}}
}
B748e77:L748e77:{c.instructions+=6;NFSU2_TR(0x748e77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+4),(U+0),4);
}
B748e7a:{NFSU2_TR(0x748e7a);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B748e7c:{NFSU2_TR(0x748e7c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748e7d:{NFSU2_TR(0x748e7d);
__builtin_memmove((R+28),(R+0),4);
}
B748e7f:{NFSU2_TR(0x748e7f);
__builtin_memmove((R+0),(R+4),4);
}
B748e81:{NFSU2_TR(0x748e81);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B748e84:L748e84:{c.instructions+=4;NFSU2_TR(0x748e84);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+8),(U+0),1);
}
B748e86:{NFSU2_TR(0x748e86);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B748e87:{NFSU2_TR(0x748e87);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+8))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B748e89:{NFSU2_TR(0x748e89);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x748e84u);}goto L748e84;}}
}
B748e8b:L748e8b:{c.instructions+=10;NFSU2_TR(0x748e8b);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B748e8d:{NFSU2_TR(0x748e8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x514ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B748e93:{NFSU2_TR(0x748e93);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B748e96:{NFSU2_TR(0x748e96);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x518ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B748e9c:{NFSU2_TR(0x748e9c);
__builtin_memmove((R+12),(R+24),4);
}
B748e9e:{NFSU2_TR(0x748e9e);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+0))));
}
B748ea0:{NFSU2_TR(0x748ea0);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+8))));
}
B748ea2:{NFSU2_TR(0x748ea2);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+28))));
}
B748ea4:{NFSU2_TR(0x748ea4);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+12),r4(U+14)));
w4(U+18,u32(u32(r4(R+12))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B748ea7:{NFSU2_TR(0x748ea7);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L748ebb;}}
}
B748ea9:L748ea9:{c.instructions+=7;NFSU2_TR(0x748ea9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B748eaa:{NFSU2_TR(0x748eaa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B748eab:{NFSU2_TR(0x748eab);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+4)),r1(U+0));
}
B748eae:{NFSU2_TR(0x748eae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x510ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B748eb8:{NFSU2_TR(0x748eb8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B748eb9:{NFSU2_TR(0x748eb9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B748eba:{NFSU2_TR(0x748eba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B748ebb:L748ebb:{c.instructions+=7;NFSU2_TR(0x748ebb);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B748ebd:{NFSU2_TR(0x748ebd);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B748ebf:{NFSU2_TR(0x748ebf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748ec0:{NFSU2_TR(0x748ec0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748ec1:{NFSU2_TR(0x748ec1);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B748ec3:{NFSU2_TR(0x748ec3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748ec4:{NFSU2_TR(0x748ec4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x748ec9ull));
TAIL_STATIC(0x75cfd0u,75c);
}
B748ec9:L748ec9:{c.instructions+=5;NFSU2_TR(0x748ec9);
__builtin_memmove((R+4),(R+28),4);
}
B748ecb:{NFSU2_TR(0x748ecb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x514ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B748ed1:{NFSU2_TR(0x748ed1);
__builtin_memmove((R+0),(R+4),4);
}
B748ed3:{NFSU2_TR(0x748ed3);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B748ed6:{NFSU2_TR(0x748ed6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x110ull))));
__builtin_memmove((R+24),(U+0),4);
}
B748edc:L748edc:{c.instructions+=1;NFSU2_TR(0x748edc);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L748ede;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x748edcu);}goto L748edc;}
}
B748ede:L748ede:{c.instructions+=2;NFSU2_TR(0x748ede);
__builtin_memmove((R+4),(R+0),4);
}
B748ee0:{NFSU2_TR(0x748ee0);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B748ee3:L748ee3:{c.instructions+=1;NFSU2_TR(0x748ee3);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L748ee5;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x748ee3u);}goto L748ee3;}
}
B748ee5:L748ee5:{c.instructions+=7;NFSU2_TR(0x748ee5);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B748ee9:{NFSU2_TR(0x748ee9);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x819bbcull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B748ef0:{NFSU2_TR(0x748ef0);
u8 U[4];
w4(U+0,u32(0x7d2c28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748ef5:{NFSU2_TR(0x748ef5);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748efa:{NFSU2_TR(0x748efa);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748efb:{NFSU2_TR(0x748efb);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748efc:{NFSU2_TR(0x748efc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x748f01ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x748990u);}goto L748990;}
}
B748f01:L748f01:{c.instructions+=6;NFSU2_TR(0x748f01);
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
B748f04:{NFSU2_TR(0x748f04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B748f05:{NFSU2_TR(0x748f05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B748f06:{NFSU2_TR(0x748f06);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B748f07:{NFSU2_TR(0x748f07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B748f08:{NFSU2_TR(0x748f08);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B748f09:L748f09:{c.instructions+=6;NFSU2_TR(0x748f09);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B748f0d:{NFSU2_TR(0x748f0d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B748f0f:{NFSU2_TR(0x748f0f);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
s1(u32(r4(R+4)),r1(U+0));
}
B748f11:{NFSU2_TR(0x748f11);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x510ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B748f17:{NFSU2_TR(0x748f17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B748f18:{NFSU2_TR(0x748f18);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B748f20:L748f20:{c.instructions+=7;NFSU2_TR(0x748f20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x248ull))));
}
B748f26:{NFSU2_TR(0x748f26);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B748f2b:{NFSU2_TR(0x748f2b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748f2c:{NFSU2_TR(0x748f2c);
u8 U[8];
w4(U+0,u32(u32(u32(0x250ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B748f33:{NFSU2_TR(0x748f33);
u8 U[8];
w4(U+0,u32(u32(u32(0x248ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B748f3a:{NFSU2_TR(0x748f3a);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x68747470ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B748f44:{NFSU2_TR(0x748f44);
if(r1(R+518)){{goto L748f69;}}
}
B748f46:L748f46:{c.instructions+=6;NFSU2_TR(0x748f46);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B748f48:{NFSU2_TR(0x748f48);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+0)),r1(U+0));
}
B748f4b:{NFSU2_TR(0x748f4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x510ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B748f55:{NFSU2_TR(0x748f55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B748f56:{NFSU2_TR(0x748f56);
u8 U[8];
w4(U+0,u32(u32(u32(0x244ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B748f5d:{NFSU2_TR(0x748f5d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x748f62ull));
TAIL_STATIC(0x76115eu,761);
}
B748f62:L748f62:{c.instructions+=2;NFSU2_TR(0x748f62);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x248ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x248ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x248ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B748f68:{NFSU2_TR(0x748f68);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B748f69:L748f69:{c.instructions+=4;NFSU2_TR(0x748f69);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B748f6b:{NFSU2_TR(0x748f6b);
__builtin_memmove((R+0),(R+8),4);
}
B748f6d:{NFSU2_TR(0x748f6d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748f6e:{NFSU2_TR(0x748f6e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B748f71:L748f71:{c.instructions+=4;NFSU2_TR(0x748f71);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B748f73:{NFSU2_TR(0x748f73);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B748f74:{NFSU2_TR(0x748f74);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B748f76:{NFSU2_TR(0x748f76);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x748f71u);}goto L748f71;}}
}
B748f78:L748f78:{c.instructions+=10;NFSU2_TR(0x748f78);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B748f7a:{NFSU2_TR(0x748f7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B748f7d:{NFSU2_TR(0x748f7d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B748f7e:{NFSU2_TR(0x748f7e);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+0))));
}
B748f80:{NFSU2_TR(0x748f80);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B748f83:{NFSU2_TR(0x748f83);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B748f86:{NFSU2_TR(0x748f86);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x100ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x100ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B748f8b:{NFSU2_TR(0x748f8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x528ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B748f91:{NFSU2_TR(0x748f91);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x52cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B748f97:{NFSU2_TR(0x748f97);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L748fbb;}}
}
B748f99:L748f99:{c.instructions+=6;NFSU2_TR(0x748f99);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+8)),r1(U+0));
}
B748f9c:{NFSU2_TR(0x748f9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B748f9d:{NFSU2_TR(0x748f9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x510ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B748fa7:{NFSU2_TR(0x748fa7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B748fa8:{NFSU2_TR(0x748fa8);
u8 U[8];
w4(U+0,u32(u32(u32(0x244ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B748faf:{NFSU2_TR(0x748faf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x748fb4ull));
TAIL_STATIC(0x76115eu,761);
}
B748fb4:L748fb4:{c.instructions+=2;NFSU2_TR(0x748fb4);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x248ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x248ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x248ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B748fba:{NFSU2_TR(0x748fba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B748fbb:L748fbb:{c.instructions+=9;NFSU2_TR(0x748fbb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748fbc:{NFSU2_TR(0x748fbc);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748fbd:{NFSU2_TR(0x748fbd);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+4)),r1(U+0));
}
B748fc0:{NFSU2_TR(0x748fc0);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B748fc3:{NFSU2_TR(0x748fc3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748fc4:{NFSU2_TR(0x748fc4);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x110ull))));
__builtin_memmove((R+20),(U+0),4);
}
B748fca:{NFSU2_TR(0x748fca);
u8 U[4];
w4(U+0,u32(0x400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748fcf:{NFSU2_TR(0x748fcf);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748fd0:{NFSU2_TR(0x748fd0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x748fd5ull));
TAIL_STATIC(0x741ec0u,741);
}
B748fd5:L748fd5:{c.instructions+=6;NFSU2_TR(0x748fd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x52cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B748fdb:{NFSU2_TR(0x748fdb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748fdc:{NFSU2_TR(0x748fdc);
u8 U[4];
w4(U+0,u32(0x7d2c68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748fe1:{NFSU2_TR(0x748fe1);
u8 U[4];
w4(U+0,u32(0x400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748fe6:{NFSU2_TR(0x748fe6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748fe7:{NFSU2_TR(0x748fe7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x748fecull));
TAIL_STATIC(0x741690u,741);
}
B748fec:L748fec:{c.instructions+=6;NFSU2_TR(0x748fec);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B748fef:{NFSU2_TR(0x748fef);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748ff4:{NFSU2_TR(0x748ff4);
u8 U[4];
w4(U+0,u32(0x3eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748ff6:{NFSU2_TR(0x748ff6);
u8 U[4];
w4(U+0,u32(u32(u32(0x1eull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B748ffa:{NFSU2_TR(0x748ffa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B748ffb:{NFSU2_TR(0x748ffb);
u8 U[4];
w4(U+0,u32(0x7d2c60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
TAIL_STATIC(0x749000u,749);
}
XIT:NFSU2_TR_EXIT(0x748,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
