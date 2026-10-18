#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_645(u8* __restrict R,Cpu& c);
u32 body_671(u8* __restrict R,Cpu& c);
u32 body_672(u8* __restrict R,Cpu& c);
u32 body_674(u8* __restrict R,Cpu& c);
u32 body_675(u8* __restrict R,Cpu& c);
u32 body_699(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x673,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x673,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_673(u8* __restrict R,Cpu& c);
u32 page_673(Cpu& c){return body_673(c.regs.data(),c);}
__attribute__((noinline)) u32 body_673(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x673001:goto L673001;
case 0x673003:c.instructions+=2;goto B673003;
case 0x673004:c.instructions+=1;goto B673004;
case 0x673007:goto L673007;
case 0x673009:c.instructions+=8;goto B673009;
case 0x67300a:c.instructions+=7;goto B67300a;
case 0x67300c:c.instructions+=6;goto B67300c;
case 0x67300d:c.instructions+=5;goto B67300d;
case 0x67300e:c.instructions+=4;goto B67300e;
case 0x673011:c.instructions+=3;goto B673011;
case 0x673012:c.instructions+=2;goto B673012;
case 0x673014:c.instructions+=1;goto B673014;
case 0x673019:goto L673019;
case 0x67301b:c.instructions+=1;goto B67301b;
case 0x67301d:goto L67301d;
case 0x673020:c.instructions+=2;goto B673020;
case 0x673023:c.instructions+=1;goto B673023;
case 0x673028:goto L673028;
case 0x67302a:c.instructions+=1;goto B67302a;
case 0x67302c:goto L67302c;
case 0x67302f:c.instructions+=2;goto B67302f;
case 0x673032:c.instructions+=1;goto B673032;
case 0x673037:goto L673037;
case 0x673039:c.instructions+=1;goto B673039;
case 0x67303b:goto L67303b;
case 0x67303e:c.instructions+=2;goto B67303e;
case 0x673041:c.instructions+=1;goto B673041;
case 0x673046:goto L673046;
case 0x673048:c.instructions+=1;goto B673048;
case 0x67304a:goto L67304a;
case 0x67304c:c.instructions+=2;goto B67304c;
case 0x67304d:c.instructions+=1;goto B67304d;
case 0x67304f:goto L67304f;
case 0x673051:goto L673051;
case 0x673052:c.instructions+=3;goto B673052;
case 0x673053:c.instructions+=2;goto B673053;
case 0x673054:c.instructions+=1;goto B673054;
case 0x673057:goto L673057;
case 0x673059:c.instructions+=2;goto B673059;
case 0x67305b:c.instructions+=1;goto B67305b;
case 0x673060:goto L673060;
case 0x673064:c.instructions+=4;goto B673064;
case 0x673068:c.instructions+=3;goto B673068;
case 0x67306e:c.instructions+=2;goto B67306e;
case 0x673070:c.instructions+=1;goto B673070;
case 0x673071:goto L673071;
case 0x673073:c.instructions+=7;goto B673073;
case 0x673074:c.instructions+=6;goto B673074;
case 0x673076:c.instructions+=5;goto B673076;
case 0x673077:c.instructions+=4;goto B673077;
case 0x673078:c.instructions+=3;goto B673078;
case 0x67307a:c.instructions+=2;goto B67307a;
case 0x67307c:c.instructions+=1;goto B67307c;
case 0x673081:goto L673081;
case 0x673084:c.instructions+=5;goto B673084;
case 0x673087:c.instructions+=4;goto B673087;
case 0x673089:c.instructions+=3;goto B673089;
case 0x67308a:c.instructions+=2;goto B67308a;
case 0x67308d:c.instructions+=1;goto B67308d;
case 0x673093:goto L673093;
case 0x673095:goto L673095;
case 0x673098:c.instructions+=7;goto B673098;
case 0x67309b:c.instructions+=6;goto B67309b;
case 0x67309c:c.instructions+=5;goto B67309c;
case 0x67309f:c.instructions+=4;goto B67309f;
case 0x6730a1:c.instructions+=3;goto B6730a1;
case 0x6730a2:c.instructions+=2;goto B6730a2;
case 0x6730a3:c.instructions+=1;goto B6730a3;
case 0x6730a6:goto L6730a6;
case 0x6730a8:c.instructions+=8;goto B6730a8;
case 0x6730a9:c.instructions+=7;goto B6730a9;
case 0x6730ab:c.instructions+=6;goto B6730ab;
case 0x6730ac:c.instructions+=5;goto B6730ac;
case 0x6730ad:c.instructions+=4;goto B6730ad;
case 0x6730b0:c.instructions+=3;goto B6730b0;
case 0x6730b1:c.instructions+=2;goto B6730b1;
case 0x6730b3:c.instructions+=1;goto B6730b3;
case 0x6730b8:goto L6730b8;
case 0x6730ba:c.instructions+=1;goto B6730ba;
case 0x6730bc:goto L6730bc;
case 0x6730be:c.instructions+=1;goto B6730be;
case 0x6730c0:goto L6730c0;
case 0x6730c3:c.instructions+=2;goto B6730c3;
case 0x6730c6:c.instructions+=1;goto B6730c6;
case 0x6730cb:goto L6730cb;
case 0x6730cd:c.instructions+=1;goto B6730cd;
case 0x6730cf:goto L6730cf;
case 0x6730d2:c.instructions+=2;goto B6730d2;
case 0x6730d5:c.instructions+=1;goto B6730d5;
case 0x6730d7:goto L6730d7;
case 0x6730da:c.instructions+=4;goto B6730da;
case 0x6730dd:c.instructions+=3;goto B6730dd;
case 0x6730df:c.instructions+=2;goto B6730df;
case 0x6730e1:c.instructions+=1;goto B6730e1;
case 0x6730e2:goto L6730e2;
case 0x6730e3:c.instructions+=3;goto B6730e3;
case 0x6730e4:c.instructions+=2;goto B6730e4;
case 0x6730e5:c.instructions+=1;goto B6730e5;
case 0x6730e8:goto L6730e8;
case 0x6730ea:c.instructions+=2;goto B6730ea;
case 0x6730ec:c.instructions+=1;goto B6730ec;
case 0x6730f1:goto L6730f1;
case 0x6730f5:c.instructions+=4;goto B6730f5;
case 0x6730f9:c.instructions+=3;goto B6730f9;
case 0x6730ff:c.instructions+=2;goto B6730ff;
case 0x673101:c.instructions+=1;goto B673101;
case 0x673102:goto L673102;
case 0x673104:c.instructions+=5;goto B673104;
case 0x673105:c.instructions+=4;goto B673105;
case 0x673107:c.instructions+=3;goto B673107;
case 0x673109:c.instructions+=2;goto B673109;
case 0x67310b:c.instructions+=1;goto B67310b;
case 0x673110:goto L673110;
case 0x673113:c.instructions+=7;goto B673113;
case 0x673116:c.instructions+=6;goto B673116;
case 0x673119:c.instructions+=5;goto B673119;
case 0x67311c:c.instructions+=4;goto B67311c;
case 0x673122:c.instructions+=3;goto B673122;
case 0x673124:c.instructions+=2;goto B673124;
case 0x673125:c.instructions+=1;goto B673125;
case 0x673128:goto L673128;
case 0x67312a:c.instructions+=8;goto B67312a;
case 0x67312b:c.instructions+=7;goto B67312b;
case 0x67312d:c.instructions+=6;goto B67312d;
case 0x67312e:c.instructions+=5;goto B67312e;
case 0x67312f:c.instructions+=4;goto B67312f;
case 0x673132:c.instructions+=3;goto B673132;
case 0x673133:c.instructions+=2;goto B673133;
case 0x673135:c.instructions+=1;goto B673135;
case 0x67313a:goto L67313a;
case 0x67313c:c.instructions+=1;goto B67313c;
case 0x67313e:goto L67313e;
case 0x673141:c.instructions+=2;goto B673141;
case 0x673144:c.instructions+=1;goto B673144;
case 0x673149:goto L673149;
case 0x67314b:c.instructions+=1;goto B67314b;
case 0x67314d:goto L67314d;
case 0x673150:c.instructions+=2;goto B673150;
case 0x673153:c.instructions+=1;goto B673153;
case 0x673158:goto L673158;
case 0x67315a:c.instructions+=1;goto B67315a;
case 0x67315c:goto L67315c;
case 0x67315e:c.instructions+=2;goto B67315e;
case 0x67315f:c.instructions+=1;goto B67315f;
case 0x673161:goto L673161;
case 0x673163:goto L673163;
case 0x673164:c.instructions+=3;goto B673164;
case 0x673165:c.instructions+=2;goto B673165;
case 0x673166:c.instructions+=1;goto B673166;
case 0x673169:goto L673169;
case 0x67316b:c.instructions+=4;goto B67316b;
case 0x67316c:c.instructions+=3;goto B67316c;
case 0x67316e:c.instructions+=2;goto B67316e;
case 0x673170:c.instructions+=1;goto B673170;
case 0x673175:goto L673175;
case 0x673177:c.instructions+=1;goto B673177;
case 0x673179:goto L673179;
case 0x67317c:c.instructions+=2;goto B67317c;
case 0x67317e:c.instructions+=1;goto B67317e;
case 0x673183:goto L673183;
case 0x673184:c.instructions+=1;goto B673184;
case 0x673185:goto L673185;
case 0x673187:c.instructions+=2;goto B673187;
case 0x673188:c.instructions+=1;goto B673188;
case 0x673189:goto L673189;
case 0x67318b:c.instructions+=9;goto B67318b;
case 0x67318c:c.instructions+=8;goto B67318c;
case 0x67318e:c.instructions+=7;goto B67318e;
case 0x67318f:c.instructions+=6;goto B67318f;
case 0x673193:c.instructions+=5;goto B673193;
case 0x673194:c.instructions+=4;goto B673194;
case 0x673195:c.instructions+=3;goto B673195;
case 0x673197:c.instructions+=2;goto B673197;
case 0x67319a:c.instructions+=1;goto B67319a;
case 0x67319c:goto L67319c;
case 0x6731a0:c.instructions+=1;goto B6731a0;
case 0x6731a2:goto L6731a2;
case 0x6731a4:c.instructions+=1;goto B6731a4;
case 0x6731a9:goto L6731a9;
case 0x6731ab:c.instructions+=1;goto B6731ab;
case 0x6731ad:goto L6731ad;
case 0x6731af:c.instructions+=1;goto B6731af;
case 0x6731b4:goto L6731b4;
case 0x6731b6:goto L6731b6;
case 0x6731b8:goto L6731b8;
case 0x6731ba:c.instructions+=2;goto B6731ba;
case 0x6731bc:c.instructions+=1;goto B6731bc;
case 0x6731be:goto L6731be;
case 0x6731c1:c.instructions+=3;goto B6731c1;
case 0x6731c4:c.instructions+=2;goto B6731c4;
case 0x6731c8:c.instructions+=1;goto B6731c8;
case 0x6731ca:goto L6731ca;
case 0x6731cd:c.instructions+=2;goto B6731cd;
case 0x6731cf:c.instructions+=1;goto B6731cf;
case 0x6731d2:goto L6731d2;
case 0x6731d4:c.instructions+=4;goto B6731d4;
case 0x6731d7:c.instructions+=3;goto B6731d7;
case 0x6731d9:c.instructions+=2;goto B6731d9;
case 0x6731dd:c.instructions+=1;goto B6731dd;
case 0x6731df:goto L6731df;
case 0x6731e1:c.instructions+=2;goto B6731e1;
case 0x6731e4:c.instructions+=1;goto B6731e4;
case 0x6731e7:goto L6731e7;
case 0x6731e9:c.instructions+=1;goto B6731e9;
case 0x6731eb:goto L6731eb;
case 0x6731ed:goto L6731ed;
case 0x6731f0:c.instructions+=1;goto B6731f0;
case 0x6731f2:goto L6731f2;
case 0x6731f4:c.instructions+=2;goto B6731f4;
case 0x6731f6:c.instructions+=1;goto B6731f6;
case 0x6731f9:goto L6731f9;
case 0x6731fb:goto L6731fb;
case 0x6731fe:c.instructions+=4;goto B6731fe;
case 0x6731ff:c.instructions+=3;goto B6731ff;
case 0x673200:c.instructions+=2;goto B673200;
case 0x673201:c.instructions+=1;goto B673201;
case 0x673202:goto L673202;
case 0x673204:c.instructions+=5;goto B673204;
case 0x673205:c.instructions+=4;goto B673205;
case 0x673206:c.instructions+=3;goto B673206;
case 0x673208:c.instructions+=2;goto B673208;
case 0x67320a:c.instructions+=1;goto B67320a;
case 0x67320f:goto L67320f;
case 0x673211:c.instructions+=1;goto B673211;
case 0x673213:goto L673213;
case 0x673215:c.instructions+=1;goto B673215;
case 0x67321a:goto L67321a;
case 0x67321c:c.instructions+=1;goto B67321c;
case 0x67321e:goto L67321e;
case 0x673220:goto L673220;
case 0x673222:c.instructions+=1;goto B673222;
case 0x673224:goto L673224;
case 0x673227:c.instructions+=3;goto B673227;
case 0x67322a:c.instructions+=2;goto B67322a;
case 0x67322e:c.instructions+=1;goto B67322e;
case 0x673230:goto L673230;
case 0x673233:c.instructions+=2;goto B673233;
case 0x673235:c.instructions+=1;goto B673235;
case 0x673238:goto L673238;
case 0x67323a:c.instructions+=2;goto B67323a;
case 0x67323d:c.instructions+=1;goto B67323d;
case 0x67323f:goto L67323f;
case 0x673243:c.instructions+=1;goto B673243;
case 0x673245:goto L673245;
case 0x673248:c.instructions+=2;goto B673248;
case 0x67324a:c.instructions+=1;goto B67324a;
case 0x67324d:goto L67324d;
case 0x67324f:c.instructions+=2;goto B67324f;
case 0x673252:c.instructions+=1;goto B673252;
case 0x673254:goto L673254;
case 0x673256:c.instructions+=1;goto B673256;
case 0x673258:goto L673258;
case 0x67325a:goto L67325a;
case 0x67325b:c.instructions+=2;goto B67325b;
case 0x67325c:c.instructions+=1;goto B67325c;
case 0x67325d:goto L67325d;
case 0x67325f:c.instructions+=4;goto B67325f;
case 0x673260:c.instructions+=3;goto B673260;
case 0x673262:c.instructions+=2;goto B673262;
case 0x673264:c.instructions+=1;goto B673264;
case 0x673269:goto L673269;
case 0x67326b:c.instructions+=1;goto B67326b;
case 0x67326d:goto L67326d;
case 0x67326f:c.instructions+=1;goto B67326f;
case 0x673274:goto L673274;
case 0x673276:goto L673276;
case 0x673278:goto L673278;
case 0x67327a:c.instructions+=1;goto B67327a;
case 0x67327c:goto L67327c;
case 0x67327d:c.instructions+=1;goto B67327d;
case 0x67327e:goto L67327e;
case 0x67327f:c.instructions+=4;goto B67327f;
case 0x673281:c.instructions+=3;goto B673281;
case 0x673282:c.instructions+=2;goto B673282;
case 0x673285:c.instructions+=1;goto B673285;
case 0x673288:goto L673288;
case 0x67328a:goto L67328a;
case 0x67328b:c.instructions+=2;goto B67328b;
case 0x67328c:c.instructions+=1;goto B67328c;
case 0x67328d:goto L67328d;
case 0x67328f:c.instructions+=5;goto B67328f;
case 0x673290:c.instructions+=4;goto B673290;
case 0x673291:c.instructions+=3;goto B673291;
case 0x673293:c.instructions+=2;goto B673293;
case 0x673295:c.instructions+=1;goto B673295;
case 0x67329a:goto L67329a;
case 0x67329c:c.instructions+=1;goto B67329c;
case 0x67329e:goto L67329e;
case 0x6732a0:c.instructions+=1;goto B6732a0;
case 0x6732a5:goto L6732a5;
case 0x6732a7:c.instructions+=1;goto B6732a7;
case 0x6732a9:goto L6732a9;
case 0x6732ab:goto L6732ab;
case 0x6732ad:c.instructions+=1;goto B6732ad;
case 0x6732af:goto L6732af;
case 0x6732b2:c.instructions+=7;goto B6732b2;
case 0x6732b5:c.instructions+=6;goto B6732b5;
case 0x6732b8:c.instructions+=5;goto B6732b8;
case 0x6732bb:c.instructions+=4;goto B6732bb;
case 0x6732be:c.instructions+=3;goto B6732be;
case 0x6732c1:c.instructions+=2;goto B6732c1;
case 0x6732c5:c.instructions+=1;goto B6732c5;
case 0x6732c7:goto L6732c7;
case 0x6732ca:c.instructions+=2;goto B6732ca;
case 0x6732cc:c.instructions+=1;goto B6732cc;
case 0x6732cf:goto L6732cf;
case 0x6732d1:c.instructions+=2;goto B6732d1;
case 0x6732d4:c.instructions+=1;goto B6732d4;
case 0x6732d6:goto L6732d6;
case 0x6732d8:c.instructions+=1;goto B6732d8;
case 0x6732da:goto L6732da;
case 0x6732dc:goto L6732dc;
case 0x6732dd:c.instructions+=2;goto B6732dd;
case 0x6732de:c.instructions+=1;goto B6732de;
case 0x6732df:goto L6732df;
case 0x6732e1:c.instructions+=5;goto B6732e1;
case 0x6732e2:c.instructions+=4;goto B6732e2;
case 0x6732e3:c.instructions+=3;goto B6732e3;
case 0x6732e5:c.instructions+=2;goto B6732e5;
case 0x6732e7:c.instructions+=1;goto B6732e7;
case 0x6732ec:goto L6732ec;
case 0x6732ee:c.instructions+=1;goto B6732ee;
case 0x6732f0:goto L6732f0;
case 0x6732f2:c.instructions+=1;goto B6732f2;
case 0x6732f7:goto L6732f7;
case 0x6732f9:c.instructions+=1;goto B6732f9;
case 0x6732fb:goto L6732fb;
case 0x6732fd:goto L6732fd;
case 0x6732ff:c.instructions+=1;goto B6732ff;
case 0x673301:goto L673301;
case 0x673304:c.instructions+=5;goto B673304;
case 0x673307:c.instructions+=4;goto B673307;
case 0x67330a:c.instructions+=3;goto B67330a;
case 0x67330d:c.instructions+=2;goto B67330d;
case 0x673311:c.instructions+=1;goto B673311;
case 0x673313:goto L673313;
case 0x673316:c.instructions+=2;goto B673316;
case 0x673318:c.instructions+=1;goto B673318;
case 0x67331b:goto L67331b;
case 0x67331d:c.instructions+=2;goto B67331d;
case 0x673320:c.instructions+=1;goto B673320;
case 0x673322:goto L673322;
case 0x673326:c.instructions+=1;goto B673326;
case 0x673328:goto L673328;
case 0x67332b:c.instructions+=2;goto B67332b;
case 0x67332d:c.instructions+=1;goto B67332d;
case 0x673330:goto L673330;
case 0x673332:c.instructions+=2;goto B673332;
case 0x673335:c.instructions+=1;goto B673335;
case 0x673337:goto L673337;
case 0x67333b:c.instructions+=1;goto B67333b;
case 0x67333d:goto L67333d;
case 0x673340:c.instructions+=2;goto B673340;
case 0x673342:c.instructions+=1;goto B673342;
case 0x673345:goto L673345;
case 0x673347:c.instructions+=2;goto B673347;
case 0x67334a:c.instructions+=1;goto B67334a;
case 0x67334c:goto L67334c;
case 0x67334e:c.instructions+=1;goto B67334e;
case 0x673350:goto L673350;
case 0x673352:goto L673352;
case 0x673353:c.instructions+=2;goto B673353;
case 0x673354:c.instructions+=1;goto B673354;
case 0x673355:goto L673355;
case 0x673357:c.instructions+=5;goto B673357;
case 0x673358:c.instructions+=4;goto B673358;
case 0x673359:c.instructions+=3;goto B673359;
case 0x67335b:c.instructions+=2;goto B67335b;
case 0x67335d:c.instructions+=1;goto B67335d;
case 0x673362:goto L673362;
case 0x673364:c.instructions+=1;goto B673364;
case 0x673366:goto L673366;
case 0x673368:c.instructions+=1;goto B673368;
case 0x67336d:goto L67336d;
case 0x67336f:c.instructions+=1;goto B67336f;
case 0x673371:goto L673371;
case 0x673373:goto L673373;
case 0x673375:c.instructions+=1;goto B673375;
case 0x673377:goto L673377;
case 0x67337a:c.instructions+=11;goto B67337a;
case 0x67337d:c.instructions+=10;goto B67337d;
case 0x673380:c.instructions+=9;goto B673380;
case 0x673383:c.instructions+=8;goto B673383;
case 0x673386:c.instructions+=7;goto B673386;
case 0x673389:c.instructions+=6;goto B673389;
case 0x67338c:c.instructions+=5;goto B67338c;
case 0x67338f:c.instructions+=4;goto B67338f;
case 0x673392:c.instructions+=3;goto B673392;
case 0x673395:c.instructions+=2;goto B673395;
case 0x673399:c.instructions+=1;goto B673399;
case 0x67339b:goto L67339b;
case 0x67339e:c.instructions+=2;goto B67339e;
case 0x6733a0:c.instructions+=1;goto B6733a0;
case 0x6733a3:goto L6733a3;
case 0x6733a5:c.instructions+=2;goto B6733a5;
case 0x6733a8:c.instructions+=1;goto B6733a8;
case 0x6733aa:goto L6733aa;
case 0x6733ae:c.instructions+=1;goto B6733ae;
case 0x6733b0:goto L6733b0;
case 0x6733b3:c.instructions+=2;goto B6733b3;
case 0x6733b5:c.instructions+=1;goto B6733b5;
case 0x6733b8:goto L6733b8;
case 0x6733ba:c.instructions+=2;goto B6733ba;
case 0x6733bd:c.instructions+=1;goto B6733bd;
case 0x6733bf:goto L6733bf;
case 0x6733c3:c.instructions+=1;goto B6733c3;
case 0x6733c5:goto L6733c5;
case 0x6733c8:c.instructions+=2;goto B6733c8;
case 0x6733ca:c.instructions+=1;goto B6733ca;
case 0x6733cd:goto L6733cd;
case 0x6733cf:c.instructions+=2;goto B6733cf;
case 0x6733d2:c.instructions+=1;goto B6733d2;
case 0x6733d4:goto L6733d4;
case 0x6733d6:c.instructions+=1;goto B6733d6;
case 0x6733d8:goto L6733d8;
case 0x6733da:goto L6733da;
case 0x6733db:c.instructions+=2;goto B6733db;
case 0x6733dc:c.instructions+=1;goto B6733dc;
case 0x6733dd:goto L6733dd;
case 0x6733df:c.instructions+=5;goto B6733df;
case 0x6733e0:c.instructions+=4;goto B6733e0;
case 0x6733e1:c.instructions+=3;goto B6733e1;
case 0x6733e3:c.instructions+=2;goto B6733e3;
case 0x6733e5:c.instructions+=1;goto B6733e5;
case 0x6733ea:goto L6733ea;
case 0x6733ec:c.instructions+=1;goto B6733ec;
case 0x6733ee:goto L6733ee;
case 0x6733f0:c.instructions+=1;goto B6733f0;
case 0x6733f5:goto L6733f5;
case 0x6733f7:c.instructions+=1;goto B6733f7;
case 0x6733f9:goto L6733f9;
case 0x6733fb:goto L6733fb;
case 0x6733fd:c.instructions+=1;goto B6733fd;
case 0x6733ff:goto L6733ff;
case 0x673402:c.instructions+=3;goto B673402;
case 0x673405:c.instructions+=2;goto B673405;
case 0x673409:c.instructions+=1;goto B673409;
case 0x67340b:goto L67340b;
case 0x67340e:c.instructions+=2;goto B67340e;
case 0x673410:c.instructions+=1;goto B673410;
case 0x673413:goto L673413;
case 0x673415:c.instructions+=2;goto B673415;
case 0x673418:c.instructions+=1;goto B673418;
case 0x67341a:goto L67341a;
case 0x67341e:c.instructions+=1;goto B67341e;
case 0x673420:goto L673420;
case 0x673423:c.instructions+=2;goto B673423;
case 0x673425:c.instructions+=1;goto B673425;
case 0x673428:goto L673428;
case 0x67342a:c.instructions+=2;goto B67342a;
case 0x67342d:c.instructions+=1;goto B67342d;
case 0x67342f:goto L67342f;
case 0x673431:c.instructions+=1;goto B673431;
case 0x673433:goto L673433;
case 0x673435:goto L673435;
case 0x673436:c.instructions+=2;goto B673436;
case 0x673437:c.instructions+=1;goto B673437;
case 0x673438:goto L673438;
case 0x67343a:c.instructions+=5;goto B67343a;
case 0x67343b:c.instructions+=4;goto B67343b;
case 0x67343c:c.instructions+=3;goto B67343c;
case 0x67343e:c.instructions+=2;goto B67343e;
case 0x673440:c.instructions+=1;goto B673440;
case 0x673445:goto L673445;
case 0x673447:c.instructions+=1;goto B673447;
case 0x673449:goto L673449;
case 0x67344b:c.instructions+=1;goto B67344b;
case 0x673450:goto L673450;
case 0x673452:c.instructions+=1;goto B673452;
case 0x673454:goto L673454;
case 0x673456:goto L673456;
case 0x673458:c.instructions+=1;goto B673458;
case 0x67345a:goto L67345a;
case 0x67345d:c.instructions+=3;goto B67345d;
case 0x673460:c.instructions+=2;goto B673460;
case 0x673464:c.instructions+=1;goto B673464;
case 0x673466:goto L673466;
case 0x673469:c.instructions+=2;goto B673469;
case 0x67346b:c.instructions+=1;goto B67346b;
case 0x67346e:goto L67346e;
case 0x673470:c.instructions+=2;goto B673470;
case 0x673473:c.instructions+=1;goto B673473;
case 0x673475:goto L673475;
case 0x673477:c.instructions+=1;goto B673477;
case 0x673479:goto L673479;
case 0x67347b:goto L67347b;
case 0x67347c:c.instructions+=2;goto B67347c;
case 0x67347d:c.instructions+=1;goto B67347d;
case 0x67347e:goto L67347e;
case 0x673480:c.instructions+=4;goto B673480;
case 0x673481:c.instructions+=3;goto B673481;
case 0x673483:c.instructions+=2;goto B673483;
case 0x673485:c.instructions+=1;goto B673485;
case 0x67348a:goto L67348a;
case 0x67348c:c.instructions+=1;goto B67348c;
case 0x67348e:goto L67348e;
case 0x673490:c.instructions+=1;goto B673490;
case 0x673495:goto L673495;
case 0x673497:goto L673497;
case 0x673499:goto L673499;
case 0x67349b:c.instructions+=1;goto B67349b;
case 0x67349d:goto L67349d;
case 0x67349e:c.instructions+=1;goto B67349e;
case 0x67349f:goto L67349f;
case 0x6734a2:c.instructions+=11;goto B6734a2;
case 0x6734a5:c.instructions+=10;goto B6734a5;
case 0x6734a8:c.instructions+=9;goto B6734a8;
case 0x6734ab:c.instructions+=8;goto B6734ab;
case 0x6734ae:c.instructions+=7;goto B6734ae;
case 0x6734b1:c.instructions+=6;goto B6734b1;
case 0x6734b4:c.instructions+=5;goto B6734b4;
case 0x6734b7:c.instructions+=4;goto B6734b7;
case 0x6734ba:c.instructions+=3;goto B6734ba;
case 0x6734bd:c.instructions+=2;goto B6734bd;
case 0x6734be:c.instructions+=1;goto B6734be;
case 0x6734bf:goto L6734bf;
case 0x6734c1:c.instructions+=6;goto B6734c1;
case 0x6734c2:c.instructions+=5;goto B6734c2;
case 0x6734c3:c.instructions+=4;goto B6734c3;
case 0x6734c4:c.instructions+=3;goto B6734c4;
case 0x6734c6:c.instructions+=2;goto B6734c6;
case 0x6734c8:c.instructions+=1;goto B6734c8;
case 0x6734cd:goto L6734cd;
case 0x6734cf:c.instructions+=2;goto B6734cf;
case 0x6734d1:c.instructions+=1;goto B6734d1;
case 0x6734d3:goto L6734d3;
case 0x6734d5:c.instructions+=1;goto B6734d5;
case 0x6734da:goto L6734da;
case 0x6734dc:c.instructions+=1;goto B6734dc;
case 0x6734de:goto L6734de;
case 0x6734e0:goto L6734e0;
case 0x6734e2:c.instructions+=1;goto B6734e2;
case 0x6734e8:goto L6734e8;
case 0x6734eb:c.instructions+=11;goto B6734eb;
case 0x6734ee:c.instructions+=10;goto B6734ee;
case 0x6734f1:c.instructions+=9;goto B6734f1;
case 0x6734f4:c.instructions+=8;goto B6734f4;
case 0x6734f7:c.instructions+=7;goto B6734f7;
case 0x6734fa:c.instructions+=6;goto B6734fa;
case 0x6734fd:c.instructions+=5;goto B6734fd;
case 0x673500:c.instructions+=4;goto B673500;
case 0x673503:c.instructions+=3;goto B673503;
case 0x673506:c.instructions+=2;goto B673506;
case 0x673509:c.instructions+=1;goto B673509;
case 0x67350b:goto L67350b;
case 0x67350e:c.instructions+=2;goto B67350e;
case 0x673510:c.instructions+=1;goto B673510;
case 0x673513:goto L673513;
case 0x673515:c.instructions+=2;goto B673515;
case 0x673518:c.instructions+=1;goto B673518;
case 0x67351a:goto L67351a;
case 0x67351d:c.instructions+=1;goto B67351d;
case 0x67351f:goto L67351f;
case 0x673522:c.instructions+=2;goto B673522;
case 0x673524:c.instructions+=1;goto B673524;
case 0x673527:goto L673527;
case 0x673529:c.instructions+=2;goto B673529;
case 0x67352c:c.instructions+=1;goto B67352c;
case 0x67352e:goto L67352e;
case 0x673531:c.instructions+=1;goto B673531;
case 0x673533:goto L673533;
case 0x673536:c.instructions+=2;goto B673536;
case 0x673538:c.instructions+=1;goto B673538;
case 0x67353b:goto L67353b;
case 0x67353d:c.instructions+=2;goto B67353d;
case 0x673540:c.instructions+=1;goto B673540;
case 0x673542:goto L673542;
case 0x673545:c.instructions+=1;goto B673545;
case 0x673547:goto L673547;
case 0x67354a:c.instructions+=2;goto B67354a;
case 0x67354c:c.instructions+=1;goto B67354c;
case 0x67354f:goto L67354f;
case 0x673551:c.instructions+=2;goto B673551;
case 0x673554:c.instructions+=1;goto B673554;
case 0x673556:goto L673556;
case 0x673559:c.instructions+=1;goto B673559;
case 0x67355b:goto L67355b;
case 0x67355e:c.instructions+=2;goto B67355e;
case 0x673560:c.instructions+=1;goto B673560;
case 0x673563:goto L673563;
case 0x673565:c.instructions+=2;goto B673565;
case 0x673568:c.instructions+=1;goto B673568;
case 0x67356a:goto L67356a;
case 0x67356d:c.instructions+=1;goto B67356d;
case 0x67356f:goto L67356f;
case 0x673572:c.instructions+=2;goto B673572;
case 0x673574:c.instructions+=1;goto B673574;
case 0x673577:goto L673577;
case 0x673579:c.instructions+=2;goto B673579;
case 0x67357c:c.instructions+=1;goto B67357c;
case 0x67357e:goto L67357e;
case 0x673581:c.instructions+=1;goto B673581;
case 0x673583:goto L673583;
case 0x673586:c.instructions+=2;goto B673586;
case 0x673588:c.instructions+=1;goto B673588;
case 0x67358b:goto L67358b;
case 0x67358d:c.instructions+=2;goto B67358d;
case 0x673590:c.instructions+=1;goto B673590;
case 0x673592:goto L673592;
case 0x673594:c.instructions+=1;goto B673594;
case 0x673596:goto L673596;
case 0x673598:goto L673598;
case 0x673599:c.instructions+=3;goto B673599;
case 0x67359a:c.instructions+=2;goto B67359a;
case 0x67359b:c.instructions+=1;goto B67359b;
case 0x67359c:goto L67359c;
case 0x67359e:c.instructions+=9;goto B67359e;
case 0x67359f:c.instructions+=8;goto B67359f;
case 0x6735a1:c.instructions+=7;goto B6735a1;
case 0x6735a2:c.instructions+=6;goto B6735a2;
case 0x6735a3:c.instructions+=5;goto B6735a3;
case 0x6735a4:c.instructions+=4;goto B6735a4;
case 0x6735a5:c.instructions+=3;goto B6735a5;
case 0x6735a7:c.instructions+=2;goto B6735a7;
case 0x6735a9:c.instructions+=1;goto B6735a9;
case 0x6735ae:goto L6735ae;
case 0x6735b0:c.instructions+=2;goto B6735b0;
case 0x6735b2:c.instructions+=1;goto B6735b2;
case 0x6735b4:goto L6735b4;
case 0x6735b6:c.instructions+=1;goto B6735b6;
case 0x6735bb:goto L6735bb;
case 0x6735bd:c.instructions+=2;goto B6735bd;
case 0x6735c0:c.instructions+=1;goto B6735c0;
case 0x6735c2:goto L6735c2;
case 0x6735c5:c.instructions+=1;goto B6735c5;
case 0x6735c7:goto L6735c7;
case 0x6735c9:c.instructions+=1;goto B6735c9;
case 0x6735cf:goto L6735cf;
case 0x6735d2:c.instructions+=11;goto B6735d2;
case 0x6735d5:c.instructions+=10;goto B6735d5;
case 0x6735d8:c.instructions+=9;goto B6735d8;
case 0x6735db:c.instructions+=8;goto B6735db;
case 0x6735de:c.instructions+=7;goto B6735de;
case 0x6735e1:c.instructions+=6;goto B6735e1;
case 0x6735e4:c.instructions+=5;goto B6735e4;
case 0x6735e7:c.instructions+=4;goto B6735e7;
case 0x6735ea:c.instructions+=3;goto B6735ea;
case 0x6735ed:c.instructions+=2;goto B6735ed;
case 0x6735f0:c.instructions+=1;goto B6735f0;
case 0x6735f2:goto L6735f2;
case 0x6735f5:c.instructions+=2;goto B6735f5;
case 0x6735f7:c.instructions+=1;goto B6735f7;
case 0x6735fa:goto L6735fa;
case 0x6735fc:c.instructions+=2;goto B6735fc;
case 0x6735ff:c.instructions+=1;goto B6735ff;
case 0x673605:goto L673605;
case 0x673608:c.instructions+=1;goto B673608;
case 0x67360a:goto L67360a;
case 0x67360d:c.instructions+=2;goto B67360d;
case 0x67360f:c.instructions+=1;goto B67360f;
case 0x673612:goto L673612;
case 0x673614:c.instructions+=2;goto B673614;
case 0x673617:c.instructions+=1;goto B673617;
case 0x67361d:goto L67361d;
case 0x673620:c.instructions+=1;goto B673620;
case 0x673622:goto L673622;
case 0x673625:c.instructions+=2;goto B673625;
case 0x673627:c.instructions+=1;goto B673627;
case 0x67362a:goto L67362a;
case 0x67362c:c.instructions+=2;goto B67362c;
case 0x67362f:c.instructions+=1;goto B67362f;
case 0x673635:goto L673635;
case 0x673638:c.instructions+=1;goto B673638;
case 0x67363a:goto L67363a;
case 0x67363d:c.instructions+=2;goto B67363d;
case 0x67363f:c.instructions+=1;goto B67363f;
case 0x673642:goto L673642;
case 0x673644:c.instructions+=2;goto B673644;
case 0x673647:c.instructions+=1;goto B673647;
case 0x67364d:goto L67364d;
case 0x673650:c.instructions+=1;goto B673650;
case 0x673652:goto L673652;
case 0x673655:c.instructions+=2;goto B673655;
case 0x673657:c.instructions+=1;goto B673657;
case 0x67365a:goto L67365a;
case 0x67365c:c.instructions+=2;goto B67365c;
case 0x67365f:c.instructions+=1;goto B67365f;
case 0x673661:goto L673661;
case 0x673664:c.instructions+=2;goto B673664;
case 0x673666:c.instructions+=1;goto B673666;
case 0x673668:goto L673668;
case 0x67366e:c.instructions+=4;goto B67366e;
case 0x673671:c.instructions+=3;goto B673671;
case 0x673673:c.instructions+=2;goto B673673;
case 0x673674:c.instructions+=1;goto B673674;
case 0x673679:goto L673679;
case 0x67367b:c.instructions+=2;goto B67367b;
case 0x67367e:c.instructions+=1;goto B67367e;
case 0x673680:goto L673680;
case 0x673683:c.instructions+=5;goto B673683;
case 0x673689:c.instructions+=4;goto B673689;
case 0x67368c:c.instructions+=3;goto B67368c;
case 0x67368e:c.instructions+=2;goto B67368e;
case 0x67368f:c.instructions+=1;goto B67368f;
case 0x673694:goto L673694;
case 0x673696:c.instructions+=2;goto B673696;
case 0x673699:c.instructions+=1;goto B673699;
case 0x67369b:goto L67369b;
case 0x67369e:c.instructions+=5;goto B67369e;
case 0x6736a1:c.instructions+=4;goto B6736a1;
case 0x6736a4:c.instructions+=3;goto B6736a4;
case 0x6736a7:c.instructions+=2;goto B6736a7;
case 0x6736a9:c.instructions+=1;goto B6736a9;
case 0x6736ac:goto L6736ac;
case 0x6736ae:goto L6736ae;
case 0x6736b0:c.instructions+=2;goto B6736b0;
case 0x6736b3:c.instructions+=1;goto B6736b3;
case 0x6736b6:goto L6736b6;
case 0x6736b8:goto L6736b8;
case 0x6736bb:c.instructions+=5;goto B6736bb;
case 0x6736be:c.instructions+=4;goto B6736be;
case 0x6736c1:c.instructions+=3;goto B6736c1;
case 0x6736c4:c.instructions+=2;goto B6736c4;
case 0x6736c6:c.instructions+=1;goto B6736c6;
case 0x6736c9:goto L6736c9;
case 0x6736cb:goto L6736cb;
case 0x6736cd:c.instructions+=1;goto B6736cd;
case 0x6736d0:goto L6736d0;
case 0x6736d2:goto L6736d2;
case 0x6736d5:goto L6736d5;
case 0x6736d7:goto L6736d7;
case 0x6736d8:c.instructions+=4;goto B6736d8;
case 0x6736d9:c.instructions+=3;goto B6736d9;
case 0x6736da:c.instructions+=2;goto B6736da;
case 0x6736db:c.instructions+=1;goto B6736db;
case 0x6736dc:goto L6736dc;
case 0x6736de:c.instructions+=1;goto B6736de;
case 0x6736e0:goto L6736e0;
case 0x6736e2:c.instructions+=5;goto B6736e2;
case 0x6736e3:c.instructions+=4;goto B6736e3;
case 0x6736e4:c.instructions+=3;goto B6736e4;
case 0x6736e6:c.instructions+=2;goto B6736e6;
case 0x6736e8:c.instructions+=1;goto B6736e8;
case 0x6736ed:goto L6736ed;
case 0x6736ef:c.instructions+=1;goto B6736ef;
case 0x6736f1:goto L6736f1;
case 0x6736f3:c.instructions+=1;goto B6736f3;
case 0x6736f8:goto L6736f8;
case 0x6736fa:c.instructions+=1;goto B6736fa;
case 0x6736fc:goto L6736fc;
case 0x6736fe:goto L6736fe;
case 0x673700:c.instructions+=1;goto B673700;
case 0x673702:goto L673702;
case 0x673705:c.instructions+=3;goto B673705;
case 0x673708:c.instructions+=2;goto B673708;
case 0x67370c:c.instructions+=1;goto B67370c;
case 0x67370e:goto L67370e;
case 0x673711:c.instructions+=2;goto B673711;
case 0x673713:c.instructions+=1;goto B673713;
case 0x673716:goto L673716;
case 0x673718:c.instructions+=2;goto B673718;
case 0x67371b:c.instructions+=1;goto B67371b;
case 0x67371d:goto L67371d;
case 0x673721:c.instructions+=1;goto B673721;
case 0x673723:goto L673723;
case 0x673726:c.instructions+=2;goto B673726;
case 0x673728:c.instructions+=1;goto B673728;
case 0x67372b:goto L67372b;
case 0x67372d:c.instructions+=2;goto B67372d;
case 0x673730:c.instructions+=1;goto B673730;
case 0x673732:goto L673732;
case 0x673736:c.instructions+=1;goto B673736;
case 0x673738:goto L673738;
case 0x67373b:c.instructions+=2;goto B67373b;
case 0x67373d:c.instructions+=1;goto B67373d;
case 0x673740:goto L673740;
case 0x673742:c.instructions+=2;goto B673742;
case 0x673745:c.instructions+=1;goto B673745;
case 0x673747:goto L673747;
case 0x67374b:c.instructions+=1;goto B67374b;
case 0x67374d:goto L67374d;
case 0x673750:c.instructions+=2;goto B673750;
case 0x673752:c.instructions+=1;goto B673752;
case 0x673755:goto L673755;
case 0x673757:c.instructions+=2;goto B673757;
case 0x67375a:c.instructions+=1;goto B67375a;
case 0x67375c:goto L67375c;
case 0x67375e:c.instructions+=1;goto B67375e;
case 0x673760:goto L673760;
case 0x673762:goto L673762;
case 0x673763:c.instructions+=2;goto B673763;
case 0x673764:c.instructions+=1;goto B673764;
case 0x673765:goto L673765;
case 0x673767:c.instructions+=7;goto B673767;
case 0x673768:c.instructions+=6;goto B673768;
case 0x67376a:c.instructions+=5;goto B67376a;
case 0x67376b:c.instructions+=4;goto B67376b;
case 0x67376c:c.instructions+=3;goto B67376c;
case 0x67376e:c.instructions+=2;goto B67376e;
case 0x673770:c.instructions+=1;goto B673770;
case 0x673775:goto L673775;
case 0x673777:c.instructions+=1;goto B673777;
case 0x673779:goto L673779;
case 0x67377b:c.instructions+=1;goto B67377b;
case 0x673780:goto L673780;
case 0x673783:c.instructions+=1;goto B673783;
case 0x673785:goto L673785;
case 0x673789:c.instructions+=1;goto B673789;
case 0x67378c:goto L67378c;
case 0x67378e:c.instructions+=1;goto B67378e;
case 0x673790:goto L673790;
case 0x673793:c.instructions+=13;goto B673793;
case 0x673796:c.instructions+=12;goto B673796;
case 0x673799:c.instructions+=11;goto B673799;
case 0x67379a:c.instructions+=10;goto B67379a;
case 0x67379d:c.instructions+=9;goto B67379d;
case 0x6737a0:c.instructions+=8;goto B6737a0;
case 0x6737a1:c.instructions+=7;goto B6737a1;
case 0x6737a4:c.instructions+=6;goto B6737a4;
case 0x6737a7:c.instructions+=5;goto B6737a7;
case 0x6737aa:c.instructions+=4;goto B6737aa;
case 0x6737ac:c.instructions+=3;goto B6737ac;
case 0x6737af:c.instructions+=2;goto B6737af;
case 0x6737b2:c.instructions+=1;goto B6737b2;
case 0x6737b3:goto L6737b3;
case 0x6737b5:goto L6737b5;
case 0x6737b7:c.instructions+=2;goto B6737b7;
case 0x6737ba:c.instructions+=1;goto B6737ba;
case 0x6737bc:goto L6737bc;
case 0x6737bf:c.instructions+=2;goto B6737bf;
case 0x6737c1:c.instructions+=1;goto B6737c1;
case 0x6737c4:goto L6737c4;
case 0x6737c6:c.instructions+=3;goto B6737c6;
case 0x6737c9:c.instructions+=2;goto B6737c9;
case 0x6737cc:c.instructions+=1;goto B6737cc;
case 0x6737ce:goto L6737ce;
case 0x6737d0:goto L6737d0;
case 0x6737d3:c.instructions+=1;goto B6737d3;
case 0x6737d5:goto L6737d5;
case 0x6737d8:c.instructions+=2;goto B6737d8;
case 0x6737da:c.instructions+=1;goto B6737da;
case 0x6737dd:goto L6737dd;
case 0x6737df:c.instructions+=3;goto B6737df;
case 0x6737e2:c.instructions+=2;goto B6737e2;
case 0x6737e5:c.instructions+=1;goto B6737e5;
case 0x6737e7:goto L6737e7;
case 0x6737e9:goto L6737e9;
case 0x6737ec:c.instructions+=1;goto B6737ec;
case 0x6737ee:goto L6737ee;
case 0x6737f1:c.instructions+=3;goto B6737f1;
case 0x6737f3:c.instructions+=2;goto B6737f3;
case 0x6737f5:c.instructions+=1;goto B6737f5;
case 0x6737f8:goto L6737f8;
case 0x6737fa:c.instructions+=3;goto B6737fa;
case 0x6737fd:c.instructions+=2;goto B6737fd;
case 0x673800:c.instructions+=1;goto B673800;
case 0x673802:goto L673802;
case 0x673804:c.instructions+=1;goto B673804;
case 0x673806:goto L673806;
case 0x673809:goto L673809;
case 0x67380a:c.instructions+=1;goto B67380a;
case 0x67380b:goto L67380b;
case 0x67380c:c.instructions+=2;goto B67380c;
case 0x67380d:c.instructions+=1;goto B67380d;
case 0x67380e:goto L67380e;
case 0x673810:c.instructions+=7;goto B673810;
case 0x673811:c.instructions+=6;goto B673811;
case 0x673813:c.instructions+=5;goto B673813;
case 0x673814:c.instructions+=4;goto B673814;
case 0x673815:c.instructions+=3;goto B673815;
case 0x673817:c.instructions+=2;goto B673817;
case 0x673819:c.instructions+=1;goto B673819;
case 0x67381e:goto L67381e;
case 0x673820:c.instructions+=1;goto B673820;
case 0x673822:goto L673822;
case 0x673824:c.instructions+=1;goto B673824;
case 0x673829:goto L673829;
case 0x67382c:c.instructions+=1;goto B67382c;
case 0x67382e:goto L67382e;
case 0x673832:goto L673832;
case 0x673835:c.instructions+=2;goto B673835;
case 0x673837:c.instructions+=1;goto B673837;
case 0x673839:goto L673839;
case 0x67383a:c.instructions+=12;goto B67383a;
case 0x67383b:c.instructions+=11;goto B67383b;
case 0x67383e:c.instructions+=10;goto B67383e;
case 0x673841:c.instructions+=9;goto B673841;
case 0x673843:c.instructions+=8;goto B673843;
case 0x673844:c.instructions+=7;goto B673844;
case 0x673845:c.instructions+=6;goto B673845;
case 0x673846:c.instructions+=5;goto B673846;
case 0x673847:c.instructions+=4;goto B673847;
case 0x673849:c.instructions+=3;goto B673849;
case 0x67384c:c.instructions+=2;goto B67384c;
case 0x67384d:c.instructions+=1;goto B67384d;
case 0x673850:goto L673850;
case 0x673852:goto L673852;
case 0x673855:c.instructions+=3;goto B673855;
case 0x673856:c.instructions+=2;goto B673856;
case 0x673857:c.instructions+=1;goto B673857;
case 0x673859:goto L673859;
case 0x67385c:c.instructions+=2;goto B67385c;
case 0x67385e:c.instructions+=1;goto B67385e;
case 0x673860:goto L673860;
case 0x673861:c.instructions+=1;goto B673861;
case 0x673866:goto L673866;
case 0x673868:c.instructions+=2;goto B673868;
case 0x67386b:c.instructions+=1;goto B67386b;
case 0x67386d:goto L67386d;
case 0x67386f:c.instructions+=1;goto B67386f;
case 0x673871:goto L673871;
case 0x673874:goto L673874;
case 0x673875:c.instructions+=2;goto B673875;
case 0x673876:c.instructions+=1;goto B673876;
case 0x673877:goto L673877;
case 0x673879:c.instructions+=5;goto B673879;
case 0x67387a:c.instructions+=4;goto B67387a;
case 0x67387b:c.instructions+=3;goto B67387b;
case 0x67387d:c.instructions+=2;goto B67387d;
case 0x67387f:c.instructions+=1;goto B67387f;
case 0x673884:goto L673884;
case 0x673886:c.instructions+=1;goto B673886;
case 0x673888:goto L673888;
case 0x67388a:c.instructions+=1;goto B67388a;
case 0x67388f:goto L67388f;
case 0x673891:c.instructions+=1;goto B673891;
case 0x673893:goto L673893;
case 0x673895:goto L673895;
case 0x673897:c.instructions+=1;goto B673897;
case 0x673899:goto L673899;
case 0x67389d:c.instructions+=1;goto B67389d;
case 0x67389f:goto L67389f;
case 0x6738a2:c.instructions+=2;goto B6738a2;
case 0x6738a4:c.instructions+=1;goto B6738a4;
case 0x6738a7:goto L6738a7;
case 0x6738a9:c.instructions+=2;goto B6738a9;
case 0x6738ac:c.instructions+=1;goto B6738ac;
case 0x6738ae:goto L6738ae;
case 0x6738b2:c.instructions+=1;goto B6738b2;
case 0x6738b4:goto L6738b4;
case 0x6738b7:c.instructions+=2;goto B6738b7;
case 0x6738b9:c.instructions+=1;goto B6738b9;
case 0x6738bc:goto L6738bc;
case 0x6738be:c.instructions+=2;goto B6738be;
case 0x6738c1:c.instructions+=1;goto B6738c1;
case 0x6738c3:goto L6738c3;
case 0x6738c7:c.instructions+=1;goto B6738c7;
case 0x6738c9:goto L6738c9;
case 0x6738cc:c.instructions+=2;goto B6738cc;
case 0x6738ce:c.instructions+=1;goto B6738ce;
case 0x6738d1:goto L6738d1;
case 0x6738d3:c.instructions+=2;goto B6738d3;
case 0x6738d6:c.instructions+=1;goto B6738d6;
case 0x6738d8:goto L6738d8;
case 0x6738da:c.instructions+=1;goto B6738da;
case 0x6738dc:goto L6738dc;
case 0x6738de:goto L6738de;
case 0x6738df:c.instructions+=2;goto B6738df;
case 0x6738e0:c.instructions+=1;goto B6738e0;
case 0x6738e1:goto L6738e1;
case 0x6738e3:c.instructions+=4;goto B6738e3;
case 0x6738e4:c.instructions+=3;goto B6738e4;
case 0x6738e6:c.instructions+=2;goto B6738e6;
case 0x6738e8:c.instructions+=1;goto B6738e8;
case 0x6738ed:goto L6738ed;
case 0x6738ef:c.instructions+=1;goto B6738ef;
case 0x6738f1:goto L6738f1;
case 0x6738f3:c.instructions+=1;goto B6738f3;
case 0x6738f8:goto L6738f8;
case 0x6738fa:goto L6738fa;
case 0x6738fc:goto L6738fc;
case 0x6738fe:c.instructions+=1;goto B6738fe;
case 0x673900:goto L673900;
case 0x673901:c.instructions+=1;goto B673901;
case 0x673902:goto L673902;
case 0x673903:c.instructions+=5;goto B673903;
case 0x673904:c.instructions+=4;goto B673904;
case 0x673906:c.instructions+=3;goto B673906;
case 0x673907:c.instructions+=2;goto B673907;
case 0x67390a:c.instructions+=1;goto B67390a;
case 0x67390d:goto L67390d;
case 0x67390f:goto L67390f;
case 0x673912:c.instructions+=7;goto B673912;
case 0x673913:c.instructions+=6;goto B673913;
case 0x673916:c.instructions+=5;goto B673916;
case 0x673919:c.instructions+=4;goto B673919;
case 0x67391a:c.instructions+=3;goto B67391a;
case 0x67391d:c.instructions+=2;goto B67391d;
case 0x67391e:c.instructions+=1;goto B67391e;
case 0x67391f:goto L67391f;
case 0x673921:c.instructions+=5;goto B673921;
case 0x673922:c.instructions+=4;goto B673922;
case 0x673923:c.instructions+=3;goto B673923;
case 0x673925:c.instructions+=2;goto B673925;
case 0x673927:c.instructions+=1;goto B673927;
case 0x67392c:goto L67392c;
case 0x67392e:c.instructions+=1;goto B67392e;
case 0x673930:goto L673930;
case 0x673932:c.instructions+=1;goto B673932;
case 0x673937:goto L673937;
case 0x673939:c.instructions+=1;goto B673939;
case 0x67393b:goto L67393b;
case 0x67393d:goto L67393d;
case 0x67393f:c.instructions+=1;goto B67393f;
case 0x673941:goto L673941;
case 0x673945:c.instructions+=1;goto B673945;
case 0x673947:goto L673947;
case 0x67394a:c.instructions+=2;goto B67394a;
case 0x67394c:c.instructions+=1;goto B67394c;
case 0x67394f:goto L67394f;
case 0x673951:c.instructions+=2;goto B673951;
case 0x673954:c.instructions+=1;goto B673954;
case 0x673956:goto L673956;
case 0x67395a:c.instructions+=1;goto B67395a;
case 0x67395c:goto L67395c;
case 0x67395f:c.instructions+=2;goto B67395f;
case 0x673961:c.instructions+=1;goto B673961;
case 0x673964:goto L673964;
case 0x673966:c.instructions+=2;goto B673966;
case 0x673969:c.instructions+=1;goto B673969;
case 0x67396b:goto L67396b;
case 0x67396d:c.instructions+=1;goto B67396d;
case 0x67396f:goto L67396f;
case 0x673971:goto L673971;
case 0x673972:c.instructions+=2;goto B673972;
case 0x673973:c.instructions+=1;goto B673973;
case 0x673974:goto L673974;
case 0x67397a:c.instructions+=26;goto B67397a;
case 0x67397c:c.instructions+=25;goto B67397c;
case 0x67397e:c.instructions+=24;goto B67397e;
case 0x673984:c.instructions+=23;goto B673984;
case 0x673986:c.instructions+=22;goto B673986;
case 0x673989:c.instructions+=21;goto B673989;
case 0x67398c:c.instructions+=20;goto B67398c;
case 0x67398f:c.instructions+=19;goto B67398f;
case 0x673992:c.instructions+=18;goto B673992;
case 0x673995:c.instructions+=17;goto B673995;
case 0x673998:c.instructions+=16;goto B673998;
case 0x67399b:c.instructions+=15;goto B67399b;
case 0x67399e:c.instructions+=14;goto B67399e;
case 0x6739a1:c.instructions+=13;goto B6739a1;
case 0x6739a4:c.instructions+=12;goto B6739a4;
case 0x6739aa:c.instructions+=11;goto B6739aa;
case 0x6739b0:c.instructions+=10;goto B6739b0;
case 0x6739b6:c.instructions+=9;goto B6739b6;
case 0x6739bc:c.instructions+=8;goto B6739bc;
case 0x6739c2:c.instructions+=7;goto B6739c2;
case 0x6739c8:c.instructions+=6;goto B6739c8;
case 0x6739ce:c.instructions+=5;goto B6739ce;
case 0x6739d4:c.instructions+=4;goto B6739d4;
case 0x6739de:c.instructions+=3;goto B6739de;
case 0x6739e4:c.instructions+=2;goto B6739e4;
case 0x6739ee:c.instructions+=1;goto B6739ee;
case 0x6739ef:goto L6739ef;
case 0x6739f1:c.instructions+=5;goto B6739f1;
case 0x6739f2:c.instructions+=4;goto B6739f2;
case 0x6739f4:c.instructions+=3;goto B6739f4;
case 0x6739f5:c.instructions+=2;goto B6739f5;
case 0x6739f7:c.instructions+=1;goto B6739f7;
case 0x6739fc:goto L6739fc;
case 0x673a00:c.instructions+=1;goto B673a00;
case 0x673a02:goto L673a02;
case 0x673a03:c.instructions+=1;goto B673a03;
case 0x673a08:goto L673a08;
case 0x673a0a:c.instructions+=3;goto B673a0a;
case 0x673a0b:c.instructions+=2;goto B673a0b;
case 0x673a0c:c.instructions+=1;goto B673a0c;
case 0x673a0f:goto L673a0f;
case 0x673a11:c.instructions+=8;goto B673a11;
case 0x673a12:c.instructions+=7;goto B673a12;
case 0x673a14:c.instructions+=6;goto B673a14;
case 0x673a15:c.instructions+=5;goto B673a15;
case 0x673a17:c.instructions+=4;goto B673a17;
case 0x673a1d:c.instructions+=3;goto B673a1d;
case 0x673a20:c.instructions+=2;goto B673a20;
case 0x673a21:c.instructions+=1;goto B673a21;
case 0x673a23:goto L673a23;
case 0x673a25:c.instructions+=1;goto B673a25;
case 0x673a27:goto L673a27;
case 0x673a2a:c.instructions+=1;goto B673a2a;
case 0x673a2c:goto L673a2c;
case 0x673a2e:c.instructions+=2;goto B673a2e;
case 0x673a2f:c.instructions+=1;goto B673a2f;
case 0x673a31:goto L673a31;
case 0x673a33:goto L673a33;
case 0x673a36:c.instructions+=1;goto B673a36;
case 0x673a38:goto L673a38;
case 0x673a3a:c.instructions+=3;goto B673a3a;
case 0x673a3d:c.instructions+=2;goto B673a3d;
case 0x673a3e:c.instructions+=1;goto B673a3e;
case 0x673a43:goto L673a43;
case 0x673a45:c.instructions+=3;goto B673a45;
case 0x673a46:c.instructions+=2;goto B673a46;
case 0x673a49:c.instructions+=1;goto B673a49;
case 0x673a4b:goto L673a4b;
case 0x673a4c:c.instructions+=3;goto B673a4c;
case 0x673a52:c.instructions+=2;goto B673a52;
case 0x673a54:c.instructions+=1;goto B673a54;
case 0x673a59:goto L673a59;
case 0x673a5c:c.instructions+=4;goto B673a5c;
case 0x673a5d:c.instructions+=3;goto B673a5d;
case 0x673a5f:c.instructions+=2;goto B673a5f;
case 0x673a65:c.instructions+=1;goto B673a65;
case 0x673a66:goto L673a66;
case 0x673a6c:goto L673a6c;
case 0x673a6d:c.instructions+=3;goto B673a6d;
case 0x673a6e:c.instructions+=2;goto B673a6e;
case 0x673a6f:c.instructions+=1;goto B673a6f;
case 0x673a72:goto L673a72;
case 0x673a74:c.instructions+=11;goto B673a74;
case 0x673a75:c.instructions+=10;goto B673a75;
case 0x673a77:c.instructions+=9;goto B673a77;
case 0x673a78:c.instructions+=8;goto B673a78;
case 0x673a7b:c.instructions+=7;goto B673a7b;
case 0x673a7c:c.instructions+=6;goto B673a7c;
case 0x673a7d:c.instructions+=5;goto B673a7d;
case 0x673a7f:c.instructions+=4;goto B673a7f;
case 0x673a80:c.instructions+=3;goto B673a80;
case 0x673a86:c.instructions+=2;goto B673a86;
case 0x673a87:c.instructions+=1;goto B673a87;
case 0x673a89:goto L673a89;
case 0x673a8e:c.instructions+=3;goto B673a8e;
case 0x673a90:c.instructions+=2;goto B673a90;
case 0x673a92:c.instructions+=1;goto B673a92;
case 0x673a94:goto L673a94;
case 0x673a96:goto L673a96;
case 0x673a98:c.instructions+=3;goto B673a98;
case 0x673a9b:c.instructions+=2;goto B673a9b;
case 0x673a9c:c.instructions+=1;goto B673a9c;
case 0x673aa1:goto L673aa1;
case 0x673aa3:c.instructions+=2;goto B673aa3;
case 0x673aa4:c.instructions+=1;goto B673aa4;
case 0x673aa6:goto L673aa6;
case 0x673aac:c.instructions+=7;goto B673aac;
case 0x673aae:c.instructions+=6;goto B673aae;
case 0x673ab4:c.instructions+=5;goto B673ab4;
case 0x673ab6:c.instructions+=4;goto B673ab6;
case 0x673ab9:c.instructions+=3;goto B673ab9;
case 0x673abf:c.instructions+=2;goto B673abf;
case 0x673ac5:c.instructions+=1;goto B673ac5;
case 0x673ac7:goto L673ac7;
case 0x673acd:c.instructions+=3;goto B673acd;
case 0x673acf:c.instructions+=2;goto B673acf;
case 0x673ad5:c.instructions+=1;goto B673ad5;
case 0x673ad8:goto L673ad8;
case 0x673ade:c.instructions+=4;goto B673ade;
case 0x673ae0:c.instructions+=3;goto B673ae0;
case 0x673ae3:c.instructions+=2;goto B673ae3;
case 0x673ae9:c.instructions+=1;goto B673ae9;
case 0x673aec:goto L673aec;
case 0x673aed:c.instructions+=4;goto B673aed;
case 0x673aee:c.instructions+=3;goto B673aee;
case 0x673aef:c.instructions+=2;goto B673aef;
case 0x673af0:c.instructions+=1;goto B673af0;
case 0x673af3:goto L673af3;
case 0x673af5:c.instructions+=5;goto B673af5;
case 0x673af6:c.instructions+=4;goto B673af6;
case 0x673af8:c.instructions+=3;goto B673af8;
case 0x673afb:c.instructions+=2;goto B673afb;
case 0x673afd:c.instructions+=1;goto B673afd;
case 0x673aff:goto L673aff;
case 0x673b02:c.instructions+=5;goto B673b02;
case 0x673b04:c.instructions+=4;goto B673b04;
case 0x673b0a:c.instructions+=3;goto B673b0a;
case 0x673b0d:c.instructions+=2;goto B673b0d;
case 0x673b0f:c.instructions+=1;goto B673b0f;
case 0x673b11:goto L673b11;
case 0x673b17:c.instructions+=1;goto B673b17;
case 0x673b19:goto L673b19;
case 0x673b1b:c.instructions+=3;goto B673b1b;
case 0x673b1c:c.instructions+=2;goto B673b1c;
case 0x673b22:c.instructions+=1;goto B673b22;
case 0x673b27:goto L673b27;
case 0x673b28:goto L673b28;
case 0x673b29:c.instructions+=1;goto B673b29;
case 0x673b2c:goto L673b2c;
case 0x673b2e:c.instructions+=5;goto B673b2e;
case 0x673b2f:c.instructions+=4;goto B673b2f;
case 0x673b31:c.instructions+=3;goto B673b31;
case 0x673b34:c.instructions+=2;goto B673b34;
case 0x673b36:c.instructions+=1;goto B673b36;
case 0x673b38:goto L673b38;
case 0x673b39:c.instructions+=2;goto B673b39;
case 0x673b3c:c.instructions+=1;goto B673b3c;
case 0x673b3f:goto L673b3f;
case 0x673b41:goto L673b41;
case 0x673b42:goto L673b42;
case 0x673b44:c.instructions+=2;goto B673b44;
case 0x673b45:c.instructions+=1;goto B673b45;
case 0x673b48:goto L673b48;
case 0x673b4a:c.instructions+=13;goto B673b4a;
case 0x673b4b:c.instructions+=12;goto B673b4b;
case 0x673b4d:c.instructions+=11;goto B673b4d;
case 0x673b50:c.instructions+=10;goto B673b50;
case 0x673b53:c.instructions+=9;goto B673b53;
case 0x673b54:c.instructions+=8;goto B673b54;
case 0x673b57:c.instructions+=7;goto B673b57;
case 0x673b59:c.instructions+=6;goto B673b59;
case 0x673b5c:c.instructions+=5;goto B673b5c;
case 0x673b5e:c.instructions+=4;goto B673b5e;
case 0x673b5f:c.instructions+=3;goto B673b5f;
case 0x673b62:c.instructions+=2;goto B673b62;
case 0x673b65:c.instructions+=1;goto B673b65;
case 0x673b6b:goto L673b6b;
case 0x673b6f:c.instructions+=1;goto B673b6f;
case 0x673b71:goto L673b71;
case 0x673b75:c.instructions+=1;goto B673b75;
case 0x673b77:goto L673b77;
case 0x673b7a:c.instructions+=3;goto B673b7a;
case 0x673b81:c.instructions+=2;goto B673b81;
case 0x673b84:c.instructions+=1;goto B673b84;
case 0x673b86:goto L673b86;
case 0x673b89:c.instructions+=8;goto B673b89;
case 0x673b8c:c.instructions+=7;goto B673b8c;
case 0x673b8f:c.instructions+=6;goto B673b8f;
case 0x673b92:c.instructions+=5;goto B673b92;
case 0x673b94:c.instructions+=4;goto B673b94;
case 0x673b98:c.instructions+=3;goto B673b98;
case 0x673b9b:c.instructions+=2;goto B673b9b;
case 0x673b9e:c.instructions+=1;goto B673b9e;
case 0x673ba0:goto L673ba0;
case 0x673ba3:c.instructions+=2;goto B673ba3;
case 0x673ba6:c.instructions+=1;goto B673ba6;
case 0x673ba8:goto L673ba8;
case 0x673bac:c.instructions+=1;goto B673bac;
case 0x673bae:goto L673bae;
case 0x673bb0:goto L673bb0;
case 0x673bb2:c.instructions+=1;goto B673bb2;
case 0x673bb4:goto L673bb4;
case 0x673bb9:c.instructions+=1;goto B673bb9;
case 0x673bbe:goto L673bbe;
case 0x673bc2:c.instructions+=6;goto B673bc2;
case 0x673bc3:c.instructions+=5;goto B673bc3;
case 0x673bc6:c.instructions+=4;goto B673bc6;
case 0x673bc9:c.instructions+=3;goto B673bc9;
case 0x673bcc:c.instructions+=2;goto B673bcc;
case 0x673bcf:c.instructions+=1;goto B673bcf;
case 0x673bd1:goto L673bd1;
case 0x673bd4:goto L673bd4;
case 0x673bd7:c.instructions+=2;goto B673bd7;
case 0x673bd9:c.instructions+=1;goto B673bd9;
case 0x673bdf:goto L673bdf;
case 0x673be2:c.instructions+=4;goto B673be2;
case 0x673be6:c.instructions+=3;goto B673be6;
case 0x673bea:c.instructions+=2;goto B673bea;
case 0x673bed:c.instructions+=1;goto B673bed;
case 0x673bf0:goto L673bf0;
case 0x673bf2:c.instructions+=2;goto B673bf2;
case 0x673bf5:c.instructions+=1;goto B673bf5;
case 0x673bf7:goto L673bf7;
case 0x673bfa:c.instructions+=1;goto B673bfa;
case 0x673bfd:goto L673bfd;
case 0x673c01:c.instructions+=1;goto B673c01;
case 0x673c03:goto L673c03;
case 0x673c06:c.instructions+=2;goto B673c06;
case 0x673c08:c.instructions+=1;goto B673c08;
case 0x673c0a:goto L673c0a;
case 0x673c0d:c.instructions+=3;goto B673c0d;
case 0x673c10:c.instructions+=2;goto B673c10;
case 0x673c12:c.instructions+=1;goto B673c12;
case 0x673c15:goto L673c15;
case 0x673c18:c.instructions+=3;goto B673c18;
case 0x673c1b:c.instructions+=2;goto B673c1b;
case 0x673c1e:c.instructions+=1;goto B673c1e;
case 0x673c20:goto L673c20;
case 0x673c23:c.instructions+=2;goto B673c23;
case 0x673c26:c.instructions+=1;goto B673c26;
case 0x673c28:goto L673c28;
case 0x673c2a:goto L673c2a;
case 0x673c2c:c.instructions+=1;goto B673c2c;
case 0x673c2e:goto L673c2e;
case 0x673c31:c.instructions+=18;goto B673c31;
case 0x673c33:c.instructions+=17;goto B673c33;
case 0x673c36:c.instructions+=16;goto B673c36;
case 0x673c39:c.instructions+=15;goto B673c39;
case 0x673c3c:c.instructions+=14;goto B673c3c;
case 0x673c3f:c.instructions+=13;goto B673c3f;
case 0x673c42:c.instructions+=12;goto B673c42;
case 0x673c45:c.instructions+=11;goto B673c45;
case 0x673c47:c.instructions+=10;goto B673c47;
case 0x673c4a:c.instructions+=9;goto B673c4a;
case 0x673c4d:c.instructions+=8;goto B673c4d;
case 0x673c50:c.instructions+=7;goto B673c50;
case 0x673c53:c.instructions+=6;goto B673c53;
case 0x673c55:c.instructions+=5;goto B673c55;
case 0x673c58:c.instructions+=4;goto B673c58;
case 0x673c5a:c.instructions+=3;goto B673c5a;
case 0x673c5d:c.instructions+=2;goto B673c5d;
case 0x673c60:c.instructions+=1;goto B673c60;
case 0x673c63:goto L673c63;
case 0x673c66:c.instructions+=5;goto B673c66;
case 0x673c69:c.instructions+=4;goto B673c69;
case 0x673c6c:c.instructions+=3;goto B673c6c;
case 0x673c6d:c.instructions+=2;goto B673c6d;
case 0x673c70:c.instructions+=1;goto B673c70;
case 0x673c72:goto L673c72;
case 0x673c75:c.instructions+=5;goto B673c75;
case 0x673c79:c.instructions+=4;goto B673c79;
case 0x673c7c:c.instructions+=3;goto B673c7c;
case 0x673c7f:c.instructions+=2;goto B673c7f;
case 0x673c82:c.instructions+=1;goto B673c82;
case 0x673c88:goto L673c88;
case 0x673c8b:goto L673c8b;
case 0x673c8e:c.instructions+=5;goto B673c8e;
case 0x673c91:c.instructions+=4;goto B673c91;
case 0x673c93:c.instructions+=3;goto B673c93;
case 0x673c96:c.instructions+=2;goto B673c96;
case 0x673c98:c.instructions+=1;goto B673c98;
case 0x673c99:goto L673c99;
case 0x673c9c:c.instructions+=2;goto B673c9c;
case 0x673c9e:c.instructions+=1;goto B673c9e;
case 0x673ca0:goto L673ca0;
case 0x673ca2:goto L673ca2;
case 0x673ca4:goto L673ca4;
case 0x673ca5:c.instructions+=3;goto B673ca5;
case 0x673ca6:c.instructions+=2;goto B673ca6;
case 0x673ca7:c.instructions+=1;goto B673ca7;
case 0x673caa:goto L673caa;
case 0x673cac:c.instructions+=13;goto B673cac;
case 0x673cad:c.instructions+=12;goto B673cad;
case 0x673caf:c.instructions+=11;goto B673caf;
case 0x673cb0:c.instructions+=10;goto B673cb0;
case 0x673cb1:c.instructions+=9;goto B673cb1;
case 0x673cb2:c.instructions+=8;goto B673cb2;
case 0x673cb5:c.instructions+=7;goto B673cb5;
case 0x673cb8:c.instructions+=6;goto B673cb8;
case 0x673cba:c.instructions+=5;goto B673cba;
case 0x673cbc:c.instructions+=4;goto B673cbc;
case 0x673cbe:c.instructions+=3;goto B673cbe;
case 0x673cbf:c.instructions+=2;goto B673cbf;
case 0x673cc2:c.instructions+=1;goto B673cc2;
case 0x673cc8:goto L673cc8;
case 0x673ccb:c.instructions+=1;goto B673ccb;
case 0x673cd1:goto L673cd1;
case 0x673cd4:c.instructions+=1;goto B673cd4;
case 0x673cda:goto L673cda;
case 0x673cdc:c.instructions+=2;goto B673cdc;
case 0x673cdf:c.instructions+=1;goto B673cdf;
case 0x673ce1:goto L673ce1;
case 0x673ce4:c.instructions+=1;goto B673ce4;
case 0x673ce7:goto L673ce7;
case 0x673cea:c.instructions+=8;goto B673cea;
case 0x673ced:c.instructions+=7;goto B673ced;
case 0x673cf0:c.instructions+=6;goto B673cf0;
case 0x673cf3:c.instructions+=5;goto B673cf3;
case 0x673cf6:c.instructions+=4;goto B673cf6;
case 0x673cf9:c.instructions+=3;goto B673cf9;
case 0x673cfa:c.instructions+=2;goto B673cfa;
case 0x673cfd:c.instructions+=1;goto B673cfd;
case 0x673cff:goto L673cff;
case 0x673d02:goto L673d02;
case 0x673d03:c.instructions+=3;goto B673d03;
case 0x673d06:c.instructions+=2;goto B673d06;
case 0x673d09:c.instructions+=1;goto B673d09;
case 0x673d0b:goto L673d0b;
case 0x673d0e:c.instructions+=5;goto B673d0e;
case 0x673d14:c.instructions+=4;goto B673d14;
case 0x673d17:c.instructions+=3;goto B673d17;
case 0x673d19:c.instructions+=2;goto B673d19;
case 0x673d1a:c.instructions+=1;goto B673d1a;
case 0x673d1f:goto L673d1f;
case 0x673d21:c.instructions+=2;goto B673d21;
case 0x673d24:c.instructions+=1;goto B673d24;
case 0x673d26:goto L673d26;
case 0x673d29:c.instructions+=5;goto B673d29;
case 0x673d2f:c.instructions+=4;goto B673d2f;
case 0x673d32:c.instructions+=3;goto B673d32;
case 0x673d34:c.instructions+=2;goto B673d34;
case 0x673d35:c.instructions+=1;goto B673d35;
case 0x673d3a:goto L673d3a;
case 0x673d3c:c.instructions+=2;goto B673d3c;
case 0x673d3f:c.instructions+=1;goto B673d3f;
case 0x673d41:goto L673d41;
case 0x673d46:c.instructions+=1;goto B673d46;
case 0x673d4b:goto L673d4b;
case 0x673d4e:c.instructions+=6;goto B673d4e;
case 0x673d51:c.instructions+=5;goto B673d51;
case 0x673d54:c.instructions+=4;goto B673d54;
case 0x673d56:c.instructions+=3;goto B673d56;
case 0x673d59:c.instructions+=2;goto B673d59;
case 0x673d5d:c.instructions+=1;goto B673d5d;
case 0x673d5f:goto L673d5f;
case 0x673d61:goto L673d61;
case 0x673d63:c.instructions+=1;goto B673d63;
case 0x673d66:goto L673d66;
case 0x673d68:goto L673d68;
case 0x673d6b:c.instructions+=5;goto B673d6b;
case 0x673d6e:c.instructions+=4;goto B673d6e;
case 0x673d71:c.instructions+=3;goto B673d71;
case 0x673d73:c.instructions+=2;goto B673d73;
case 0x673d76:c.instructions+=1;goto B673d76;
case 0x673d78:goto L673d78;
case 0x673d7a:goto L673d7a;
case 0x673d7c:c.instructions+=1;goto B673d7c;
case 0x673d7f:goto L673d7f;
case 0x673d81:goto L673d81;
case 0x673d85:c.instructions+=3;goto B673d85;
case 0x673d88:c.instructions+=2;goto B673d88;
case 0x673d8b:c.instructions+=1;goto B673d8b;
case 0x673d8d:goto L673d8d;
case 0x673d8f:c.instructions+=1;goto B673d8f;
case 0x673d91:goto L673d91;
case 0x673d94:c.instructions+=11;goto B673d94;
case 0x673d97:c.instructions+=10;goto B673d97;
case 0x673d9a:c.instructions+=9;goto B673d9a;
case 0x673d9d:c.instructions+=8;goto B673d9d;
case 0x673da0:c.instructions+=7;goto B673da0;
case 0x673da3:c.instructions+=6;goto B673da3;
case 0x673da6:c.instructions+=5;goto B673da6;
case 0x673da9:c.instructions+=4;goto B673da9;
case 0x673dac:c.instructions+=3;goto B673dac;
case 0x673daf:c.instructions+=2;goto B673daf;
case 0x673db3:c.instructions+=1;goto B673db3;
case 0x673db5:goto L673db5;
case 0x673db8:c.instructions+=10;goto B673db8;
case 0x673dbb:c.instructions+=9;goto B673dbb;
case 0x673dbe:c.instructions+=8;goto B673dbe;
case 0x673dc1:c.instructions+=7;goto B673dc1;
case 0x673dc4:c.instructions+=6;goto B673dc4;
case 0x673dc7:c.instructions+=5;goto B673dc7;
case 0x673dca:c.instructions+=4;goto B673dca;
case 0x673dcd:c.instructions+=3;goto B673dcd;
case 0x673dd0:c.instructions+=2;goto B673dd0;
case 0x673dd3:c.instructions+=1;goto B673dd3;
case 0x673dd6:goto L673dd6;
case 0x673dd9:c.instructions+=4;goto B673dd9;
case 0x673ddc:c.instructions+=3;goto B673ddc;
case 0x673ddf:c.instructions+=2;goto B673ddf;
case 0x673de2:c.instructions+=1;goto B673de2;
case 0x673de4:goto L673de4;
case 0x673de6:goto L673de6;
case 0x673de7:c.instructions+=4;goto B673de7;
case 0x673de8:c.instructions+=3;goto B673de8;
case 0x673de9:c.instructions+=2;goto B673de9;
case 0x673dea:c.instructions+=1;goto B673dea;
case 0x673ded:goto L673ded;
case 0x673def:c.instructions+=26;goto B673def;
case 0x673df0:c.instructions+=25;goto B673df0;
case 0x673df2:c.instructions+=24;goto B673df2;
case 0x673df5:c.instructions+=23;goto B673df5;
case 0x673df8:c.instructions+=22;goto B673df8;
case 0x673dfb:c.instructions+=21;goto B673dfb;
case 0x673dfd:c.instructions+=20;goto B673dfd;
case 0x673dff:c.instructions+=19;goto B673dff;
case 0x673e00:c.instructions+=18;goto B673e00;
case 0x673e01:c.instructions+=17;goto B673e01;
case 0x673e04:c.instructions+=16;goto B673e04;
case 0x673e07:c.instructions+=15;goto B673e07;
case 0x673e08:c.instructions+=14;goto B673e08;
case 0x673e0a:c.instructions+=13;goto B673e0a;
case 0x673e0c:c.instructions+=12;goto B673e0c;
case 0x673e0f:c.instructions+=11;goto B673e0f;
case 0x673e12:c.instructions+=10;goto B673e12;
case 0x673e14:c.instructions+=9;goto B673e14;
case 0x673e17:c.instructions+=8;goto B673e17;
case 0x673e1a:c.instructions+=7;goto B673e1a;
case 0x673e1d:c.instructions+=6;goto B673e1d;
case 0x673e20:c.instructions+=5;goto B673e20;
case 0x673e23:c.instructions+=4;goto B673e23;
case 0x673e29:c.instructions+=3;goto B673e29;
case 0x673e2b:c.instructions+=2;goto B673e2b;
case 0x673e31:c.instructions+=1;goto B673e31;
case 0x673e34:goto L673e34;
case 0x673e35:c.instructions+=5;goto B673e35;
case 0x673e39:c.instructions+=4;goto B673e39;
case 0x673e3b:c.instructions+=3;goto B673e3b;
case 0x673e3c:c.instructions+=2;goto B673e3c;
case 0x673e3f:c.instructions+=1;goto B673e3f;
case 0x673e44:goto L673e44;
case 0x673e46:c.instructions+=3;goto B673e46;
case 0x673e47:c.instructions+=2;goto B673e47;
case 0x673e48:c.instructions+=1;goto B673e48;
case 0x673e4a:goto L673e4a;
case 0x673e4e:c.instructions+=1;goto B673e4e;
case 0x673e50:goto L673e50;
case 0x673e52:c.instructions+=1;goto B673e52;
case 0x673e54:goto L673e54;
case 0x673e56:c.instructions+=4;goto B673e56;
case 0x673e58:c.instructions+=3;goto B673e58;
case 0x673e5a:c.instructions+=2;goto B673e5a;
case 0x673e5d:c.instructions+=1;goto B673e5d;
case 0x673e5f:goto L673e5f;
case 0x673e61:c.instructions+=1;goto B673e61;
case 0x673e63:goto L673e63;
case 0x673e66:c.instructions+=4;goto B673e66;
case 0x673e68:c.instructions+=3;goto B673e68;
case 0x673e6a:c.instructions+=2;goto B673e6a;
case 0x673e6d:c.instructions+=1;goto B673e6d;
case 0x673e6f:goto L673e6f;
case 0x673e71:c.instructions+=1;goto B673e71;
case 0x673e74:goto L673e74;
case 0x673e75:c.instructions+=2;goto B673e75;
case 0x673e78:c.instructions+=1;goto B673e78;
case 0x673e7a:goto L673e7a;
case 0x673e7c:goto L673e7c;
case 0x673e80:c.instructions+=4;goto B673e80;
case 0x673e82:c.instructions+=3;goto B673e82;
case 0x673e84:c.instructions+=2;goto B673e84;
case 0x673e86:c.instructions+=1;goto B673e86;
case 0x673e89:goto L673e89;
case 0x673e8a:c.instructions+=4;goto B673e8a;
case 0x673e8b:c.instructions+=3;goto B673e8b;
case 0x673e8c:c.instructions+=2;goto B673e8c;
case 0x673e8d:c.instructions+=1;goto B673e8d;
case 0x673e90:goto L673e90;
case 0x673e92:c.instructions+=14;goto B673e92;
case 0x673e93:c.instructions+=13;goto B673e93;
case 0x673e95:c.instructions+=12;goto B673e95;
case 0x673e98:c.instructions+=11;goto B673e98;
case 0x673e9b:c.instructions+=10;goto B673e9b;
case 0x673e9c:c.instructions+=9;goto B673e9c;
case 0x673e9e:c.instructions+=8;goto B673e9e;
case 0x673ea1:c.instructions+=7;goto B673ea1;
case 0x673ea4:c.instructions+=6;goto B673ea4;
case 0x673ea5:c.instructions+=5;goto B673ea5;
case 0x673ea8:c.instructions+=4;goto B673ea8;
case 0x673eaa:c.instructions+=3;goto B673eaa;
case 0x673ead:c.instructions+=2;goto B673ead;
case 0x673eb0:c.instructions+=1;goto B673eb0;
case 0x673eb2:goto L673eb2;
case 0x673eb5:c.instructions+=2;goto B673eb5;
case 0x673eb7:c.instructions+=1;goto B673eb7;
case 0x673eb9:goto L673eb9;
case 0x673ebc:c.instructions+=3;goto B673ebc;
case 0x673ebe:c.instructions+=2;goto B673ebe;
case 0x673ec1:c.instructions+=1;goto B673ec1;
case 0x673ec3:goto L673ec3;
case 0x673ec5:c.instructions+=1;goto B673ec5;
case 0x673ec7:goto L673ec7;
case 0x673eca:c.instructions+=2;goto B673eca;
case 0x673ecc:c.instructions+=1;goto B673ecc;
case 0x673ece:goto L673ece;
case 0x673ed1:c.instructions+=2;goto B673ed1;
case 0x673ed3:c.instructions+=1;goto B673ed3;
case 0x673ed6:goto L673ed6;
case 0x673ed9:goto L673ed9;
case 0x673edb:c.instructions+=1;goto B673edb;
case 0x673ee0:goto L673ee0;
case 0x673ee6:c.instructions+=7;goto B673ee6;
case 0x673ee7:c.instructions+=6;goto B673ee7;
case 0x673eea:c.instructions+=5;goto B673eea;
case 0x673ef0:c.instructions+=4;goto B673ef0;
case 0x673ef3:c.instructions+=3;goto B673ef3;
case 0x673ef6:c.instructions+=2;goto B673ef6;
case 0x673ef9:c.instructions+=1;goto B673ef9;
case 0x673eff:goto L673eff;
case 0x673f02:c.instructions+=4;goto B673f02;
case 0x673f03:c.instructions+=3;goto B673f03;
case 0x673f04:c.instructions+=2;goto B673f04;
case 0x673f06:c.instructions+=1;goto B673f06;
case 0x673f0b:goto L673f0b;
case 0x673f0d:c.instructions+=1;goto B673f0d;
case 0x673f13:goto L673f13;
case 0x673f16:c.instructions+=1;goto B673f16;
case 0x673f1b:goto L673f1b;
case 0x673f1e:c.instructions+=6;goto B673f1e;
case 0x673f21:c.instructions+=5;goto B673f21;
case 0x673f24:c.instructions+=4;goto B673f24;
case 0x673f28:c.instructions+=3;goto B673f28;
case 0x673f2a:c.instructions+=2;goto B673f2a;
case 0x673f2d:c.instructions+=1;goto B673f2d;
case 0x673f33:goto L673f33;
case 0x673f36:goto L673f36;
case 0x673f38:c.instructions+=3;goto B673f38;
case 0x673f3b:c.instructions+=2;goto B673f3b;
case 0x673f3e:c.instructions+=1;goto B673f3e;
case 0x673f40:goto L673f40;
case 0x673f44:c.instructions+=1;goto B673f44;
case 0x673f46:goto L673f46;
case 0x673f49:c.instructions+=1;goto B673f49;
case 0x673f4b:goto L673f4b;
case 0x673f4e:c.instructions+=2;goto B673f4e;
case 0x673f51:c.instructions+=1;goto B673f51;
case 0x673f53:goto L673f53;
case 0x673f56:c.instructions+=4;goto B673f56;
case 0x673f59:c.instructions+=3;goto B673f59;
case 0x673f5c:c.instructions+=2;goto B673f5c;
case 0x673f5f:c.instructions+=1;goto B673f5f;
case 0x673f61:goto L673f61;
case 0x673f66:goto L673f66;
case 0x673f69:c.instructions+=4;goto B673f69;
case 0x673f6a:c.instructions+=3;goto B673f6a;
case 0x673f6d:c.instructions+=2;goto B673f6d;
case 0x673f6f:c.instructions+=1;goto B673f6f;
case 0x673f74:goto L673f74;
case 0x673f76:c.instructions+=1;goto B673f76;
case 0x673f7c:goto L673f7c;
case 0x673f81:goto L673f81;
case 0x673f84:c.instructions+=4;goto B673f84;
case 0x673f87:c.instructions+=3;goto B673f87;
case 0x673f8a:c.instructions+=2;goto B673f8a;
case 0x673f8e:c.instructions+=1;goto B673f8e;
case 0x673f94:goto L673f94;
case 0x673f97:c.instructions+=2;goto B673f97;
case 0x673f9a:c.instructions+=1;goto B673f9a;
case 0x673fa0:goto L673fa0;
case 0x673fa3:c.instructions+=7;goto B673fa3;
case 0x673fa6:c.instructions+=6;goto B673fa6;
case 0x673fa8:c.instructions+=5;goto B673fa8;
case 0x673fab:c.instructions+=4;goto B673fab;
case 0x673fad:c.instructions+=3;goto B673fad;
case 0x673fb3:c.instructions+=2;goto B673fb3;
case 0x673fb9:c.instructions+=1;goto B673fb9;
case 0x673fbf:goto L673fbf;
case 0x673fc4:c.instructions+=2;goto B673fc4;
case 0x673fc9:c.instructions+=1;goto B673fc9;
case 0x673fcf:goto L673fcf;
case 0x673fd4:c.instructions+=1;goto B673fd4;
case 0x673fda:goto L673fda;
case 0x673fdf:c.instructions+=1;goto B673fdf;
case 0x673fe5:goto L673fe5;
case 0x673fea:c.instructions+=1;goto B673fea;
case 0x673ff0:goto L673ff0;
case 0x673ff5:c.instructions+=1;goto B673ff5;
case 0x673ffb:goto L673ffb;
default:missing_instruction(c.pc);}
B673001:L673001:{c.instructions+=3;NFSU2_TR(0x673001);
__builtin_memmove((R+0),(R+8),4);
}
B673003:{NFSU2_TR(0x673003);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B673004:{NFSU2_TR(0x673004);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B673007:L673007:{c.instructions+=9;NFSU2_TR(0x673007);
__builtin_memmove((R+28),(R+28),4);
}
B673009:{NFSU2_TR(0x673009);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67300a:{NFSU2_TR(0x67300a);
__builtin_memmove((R+20),(R+16),4);
}
B67300c:{NFSU2_TR(0x67300c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67300d:{NFSU2_TR(0x67300d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67300e:{NFSU2_TR(0x67300e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B673011:{NFSU2_TR(0x673011);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B673012:{NFSU2_TR(0x673012);
__builtin_memmove((R+24),(R+4),4);
}
B673014:{NFSU2_TR(0x673014);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x673019ull));
TAIL_STATIC(0x672404u,672);
}
B673019:L673019:{c.instructions+=2;NFSU2_TR(0x673019);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B67301b:{NFSU2_TR(0x67301b);
if(r1(R+518)){{goto L67304f;}}
}
B67301d:L67301d:{c.instructions+=3;NFSU2_TR(0x67301d);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B673020:{NFSU2_TR(0x673020);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B673023:{NFSU2_TR(0x673023);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x673028ull));
TAIL_STATIC(0x67241fu,672);
}
B673028:L673028:{c.instructions+=2;NFSU2_TR(0x673028);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B67302a:{NFSU2_TR(0x67302a);
if(r1(R+518)){{goto L67304f;}}
}
B67302c:L67302c:{c.instructions+=3;NFSU2_TR(0x67302c);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67302f:{NFSU2_TR(0x67302f);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B673032:{NFSU2_TR(0x673032);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x673037ull));
TAIL_STATIC(0x67241fu,672);
}
B673037:L673037:{c.instructions+=2;NFSU2_TR(0x673037);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B673039:{NFSU2_TR(0x673039);
if(r1(R+518)){{goto L67304f;}}
}
B67303b:L67303b:{c.instructions+=3;NFSU2_TR(0x67303b);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67303e:{NFSU2_TR(0x67303e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B673041:{NFSU2_TR(0x673041);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x673046ull));
TAIL_STATIC(0x67241fu,672);
}
B673046:L673046:{c.instructions+=2;NFSU2_TR(0x673046);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B673048:{NFSU2_TR(0x673048);
if(r1(R+518)){{goto L67304f;}}
}
B67304a:L67304a:{c.instructions+=3;NFSU2_TR(0x67304a);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B67304c:{NFSU2_TR(0x67304c);
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
B67304d:{NFSU2_TR(0x67304d);
{goto L673051;}
}
B67304f:L67304f:{c.instructions+=1;NFSU2_TR(0x67304f);
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
B673051:L673051:{c.instructions+=4;NFSU2_TR(0x673051);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B673052:{NFSU2_TR(0x673052);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B673053:{NFSU2_TR(0x673053);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B673054:{NFSU2_TR(0x673054);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B673057:L673057:{c.instructions+=3;NFSU2_TR(0x673057);
u8 U[4];
w4(U+0,u32(0xfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B673059:{NFSU2_TR(0x673059);
__builtin_memmove((R+8),(R+4),4);
}
B67305b:{NFSU2_TR(0x67305b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x673060ull));
TAIL_STATIC(0x6723e5u,672);
}
B673060:L673060:{c.instructions+=5;NFSU2_TR(0x673060);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B673064:{NFSU2_TR(0x673064);
u8 U[14];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
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
B673068:{NFSU2_TR(0x673068);
u8 U[4];
w4(U+0,u32(0x7b7864ull));
s4(u32(r4(R+8)),r4(U+0));
}
B67306e:{NFSU2_TR(0x67306e);
__builtin_memmove((R+0),(R+8),4);
}
B673070:{NFSU2_TR(0x673070);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B673071:L673071:{c.instructions+=8;NFSU2_TR(0x673071);
__builtin_memmove((R+28),(R+28),4);
}
B673073:{NFSU2_TR(0x673073);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B673074:{NFSU2_TR(0x673074);
__builtin_memmove((R+20),(R+16),4);
}
B673076:{NFSU2_TR(0x673076);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B673077:{NFSU2_TR(0x673077);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B673078:{NFSU2_TR(0x673078);
u8 U[4];
w4(U+0,u32(0xfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67307a:{NFSU2_TR(0x67307a);
__builtin_memmove((R+8),(R+4),4);
}
B67307c:{NFSU2_TR(0x67307c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x673081ull));
TAIL_STATIC(0x6723e5u,672);
}
B673081:L673081:{c.instructions+=6;NFSU2_TR(0x673081);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B673084:{NFSU2_TR(0x673084);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B673087:{NFSU2_TR(0x673087);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B673089:{NFSU2_TR(0x673089);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B67308a:{NFSU2_TR(0x67308a);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((R+28),(U+0),4);
}
B67308d:{NFSU2_TR(0x67308d);
u8 U[4];
w4(U+0,u32(0x7b7864ull));
s4(u32(r4(R+8)),r4(U+0));
}
B673093:L673093:{c.instructions+=1;NFSU2_TR(0x673093);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L673095;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x673093u);}goto L673093;}
}
B673095:L673095:{c.instructions+=8;NFSU2_TR(0x673095);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B673098:{NFSU2_TR(0x673098);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67309b:{NFSU2_TR(0x67309b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B67309c:{NFSU2_TR(0x67309c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67309f:{NFSU2_TR(0x67309f);
__builtin_memmove((R+0),(R+8),4);
}
B6730a1:{NFSU2_TR(0x6730a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6730a2:{NFSU2_TR(0x6730a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6730a3:{NFSU2_TR(0x6730a3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6730a6:L6730a6:{c.instructions+=9;NFSU2_TR(0x6730a6);
__builtin_memmove((R+28),(R+28),4);
}
B6730a8:{NFSU2_TR(0x6730a8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6730a9:{NFSU2_TR(0x6730a9);
__builtin_memmove((R+20),(R+16),4);
}
B6730ab:{NFSU2_TR(0x6730ab);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6730ac:{NFSU2_TR(0x6730ac);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6730ad:{NFSU2_TR(0x6730ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6730b0:{NFSU2_TR(0x6730b0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6730b1:{NFSU2_TR(0x6730b1);
__builtin_memmove((R+24),(R+4),4);
}
B6730b3:{NFSU2_TR(0x6730b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6730b8ull));
TAIL_STATIC(0x672404u,672);
}
B6730b8:L6730b8:{c.instructions+=2;NFSU2_TR(0x6730b8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6730ba:{NFSU2_TR(0x6730ba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6730c0;}}
}
B6730bc:L6730bc:{c.instructions+=2;NFSU2_TR(0x6730bc);
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
B6730be:{NFSU2_TR(0x6730be);
{goto L6730e2;}
}
B6730c0:L6730c0:{c.instructions+=3;NFSU2_TR(0x6730c0);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6730c3:{NFSU2_TR(0x6730c3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6730c6:{NFSU2_TR(0x6730c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6730cbull));
TAIL_STATIC(0x6725bdu,672);
}
B6730cb:L6730cb:{c.instructions+=2;NFSU2_TR(0x6730cb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6730cd:{NFSU2_TR(0x6730cd);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6730bcu);}goto L6730bc;}}
}
B6730cf:L6730cf:{c.instructions+=3;NFSU2_TR(0x6730cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6730d2:{NFSU2_TR(0x6730d2);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6730d5:{NFSU2_TR(0x6730d5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6730bcu);}goto L6730bc;}}
}
B6730d7:L6730d7:{c.instructions+=5;NFSU2_TR(0x6730d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6730da:{NFSU2_TR(0x6730da);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B6730dd:{NFSU2_TR(0x6730dd);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B6730df:{NFSU2_TR(0x6730df);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+0))<(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6730e1:{NFSU2_TR(0x6730e1);
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
B6730e2:L6730e2:{c.instructions+=4;NFSU2_TR(0x6730e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6730e3:{NFSU2_TR(0x6730e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6730e4:{NFSU2_TR(0x6730e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6730e5:{NFSU2_TR(0x6730e5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6730e8:L6730e8:{c.instructions+=3;NFSU2_TR(0x6730e8);
u8 U[4];
w4(U+0,u32(0x11ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6730ea:{NFSU2_TR(0x6730ea);
__builtin_memmove((R+8),(R+4),4);
}
B6730ec:{NFSU2_TR(0x6730ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6730f1ull));
TAIL_STATIC(0x6723e5u,672);
}
B6730f1:L6730f1:{c.instructions+=5;NFSU2_TR(0x6730f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6730f5:{NFSU2_TR(0x6730f5);
u8 U[14];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
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
B6730f9:{NFSU2_TR(0x6730f9);
u8 U[4];
w4(U+0,u32(0x7b7870ull));
s4(u32(r4(R+8)),r4(U+0));
}
B6730ff:{NFSU2_TR(0x6730ff);
__builtin_memmove((R+0),(R+8),4);
}
B673101:{NFSU2_TR(0x673101);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B673102:L673102:{c.instructions+=6;NFSU2_TR(0x673102);
__builtin_memmove((R+28),(R+28),4);
}
B673104:{NFSU2_TR(0x673104);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B673105:{NFSU2_TR(0x673105);
__builtin_memmove((R+20),(R+16),4);
}
B673107:{NFSU2_TR(0x673107);
u8 U[4];
w4(U+0,u32(0x11ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B673109:{NFSU2_TR(0x673109);
__builtin_memmove((R+8),(R+4),4);
}
B67310b:{NFSU2_TR(0x67310b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x673110ull));
TAIL_STATIC(0x6723e5u,672);
}
B673110:L673110:{c.instructions+=8;NFSU2_TR(0x673110);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B673113:{NFSU2_TR(0x673113);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B673116:{NFSU2_TR(0x673116);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B673119:{NFSU2_TR(0x673119);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67311c:{NFSU2_TR(0x67311c);
u8 U[4];
w4(U+0,u32(0x7b7870ull));
s4(u32(r4(R+8)),r4(U+0));
}
B673122:{NFSU2_TR(0x673122);
__builtin_memmove((R+0),(R+8),4);
}
B673124:{NFSU2_TR(0x673124);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B673125:{NFSU2_TR(0x673125);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B673128:L673128:{c.instructions+=9;NFSU2_TR(0x673128);
__builtin_memmove((R+28),(R+28),4);
}
B67312a:{NFSU2_TR(0x67312a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67312b:{NFSU2_TR(0x67312b);
__builtin_memmove((R+20),(R+16),4);
}
B67312d:{NFSU2_TR(0x67312d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67312e:{NFSU2_TR(0x67312e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67312f:{NFSU2_TR(0x67312f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B673132:{NFSU2_TR(0x673132);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B673133:{NFSU2_TR(0x673133);
__builtin_memmove((R+24),(R+4),4);
}
B673135:{NFSU2_TR(0x673135);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67313aull));
TAIL_STATIC(0x672404u,672);
}
B67313a:L67313a:{c.instructions+=2;NFSU2_TR(0x67313a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B67313c:{NFSU2_TR(0x67313c);
if(r1(R+518)){{goto L673161;}}
}
B67313e:L67313e:{c.instructions+=3;NFSU2_TR(0x67313e);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B673141:{NFSU2_TR(0x673141);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B673144:{NFSU2_TR(0x673144);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x673149ull));
TAIL_STATIC(0x67241fu,672);
}
B673149:L673149:{c.instructions+=2;NFSU2_TR(0x673149);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B67314b:{NFSU2_TR(0x67314b);
if(r1(R+518)){{goto L673161;}}
}
B67314d:L67314d:{c.instructions+=3;NFSU2_TR(0x67314d);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B673150:{NFSU2_TR(0x673150);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B673153:{NFSU2_TR(0x673153);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x673158ull));
TAIL_STATIC(0x67241fu,672);
}
B673158:L673158:{c.instructions+=2;NFSU2_TR(0x673158);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B67315a:{NFSU2_TR(0x67315a);
if(r1(R+518)){{goto L673161;}}
}
B67315c:L67315c:{c.instructions+=3;NFSU2_TR(0x67315c);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B67315e:{NFSU2_TR(0x67315e);
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
B67315f:{NFSU2_TR(0x67315f);
{goto L673163;}
}
B673161:L673161:{c.instructions+=1;NFSU2_TR(0x673161);
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
B673163:L673163:{c.instructions+=4;NFSU2_TR(0x673163);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B673164:{NFSU2_TR(0x673164);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B673165:{NFSU2_TR(0x673165);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B673166:{NFSU2_TR(0x673166);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B673169:L673169:{c.instructions+=5;NFSU2_TR(0x673169);
__builtin_memmove((R+28),(R+28),4);
}
B67316b:{NFSU2_TR(0x67316b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67316c:{NFSU2_TR(0x67316c);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67316e:{NFSU2_TR(0x67316e);
__builtin_memmove((R+24),(R+4),4);
}
B673170:{NFSU2_TR(0x673170);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x673175ull));
TAIL_STATIC(0x645362u,645);
}
B673175:L673175:{c.instructions+=2;NFSU2_TR(0x673175);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B673177:{NFSU2_TR(0x673177);
if(r1(R+518)){{goto L673185;}}
}
B673179:L673179:{c.instructions+=3;NFSU2_TR(0x673179);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67317c:{NFSU2_TR(0x67317c);
__builtin_memmove((R+4),(R+0),4);
}
B67317e:{NFSU2_TR(0x67317e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x673183ull));
TAIL_STATIC(0x6723e5u,672);
}
B673183:L673183:{c.instructions+=2;NFSU2_TR(0x673183);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B673184:{NFSU2_TR(0x673184);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B673185:L673185:{c.instructions+=3;NFSU2_TR(0x673185);
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
B673187:{NFSU2_TR(0x673187);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B673188:{NFSU2_TR(0x673188);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B673189:L673189:{c.instructions+=10;NFSU2_TR(0x673189);
__builtin_memmove((R+28),(R+28),4);
}
B67318b:{NFSU2_TR(0x67318b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67318c:{NFSU2_TR(0x67318c);
__builtin_memmove((R+20),(R+16),4);
}
B67318e:{NFSU2_TR(0x67318e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67318f:{NFSU2_TR(0x67318f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B673193:{NFSU2_TR(0x673193);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B673194:{NFSU2_TR(0x673194);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B673195:{NFSU2_TR(0x673195);
__builtin_memmove((R+24),(R+4),4);
}
B673197:{NFSU2_TR(0x673197);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+28),(U+0),4);
}
B67319a:{NFSU2_TR(0x67319a);
{goto L6731e7;}
}
B67319c:L67319c:{c.instructions+=2;NFSU2_TR(0x67319c);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
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
B6731a0:{NFSU2_TR(0x6731a0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6731f2;}}
}
B6731a2:L6731a2:{c.instructions+=2;NFSU2_TR(0x6731a2);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6731a4:{NFSU2_TR(0x6731a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6731a9ull));
TAIL_STATIC(0x645362u,645);
}
B6731a9:L6731a9:{c.instructions+=2;NFSU2_TR(0x6731a9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6731ab:{NFSU2_TR(0x6731ab);
if(r1(R+518)){{goto L6731b6;}}
}
B6731ad:L6731ad:{c.instructions+=2;NFSU2_TR(0x6731ad);
__builtin_memmove((R+4),(R+0),4);
}
B6731af:{NFSU2_TR(0x6731af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6731b4ull));
TAIL_STATIC(0x672482u,672);
}
B6731b4:L6731b4:{c.instructions+=1;NFSU2_TR(0x6731b4);
{goto L6731b8;}
}
B6731b6:L6731b6:{c.instructions+=1;NFSU2_TR(0x6731b6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6731b8:L6731b8:{c.instructions+=3;NFSU2_TR(0x6731b8);
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
B6731ba:{NFSU2_TR(0x6731ba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B6731bc:{NFSU2_TR(0x6731bc);
if(r1(R+518)){{goto L6731fb;}}
}
B6731be:L6731be:{c.instructions+=4;NFSU2_TR(0x6731be);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6731c1:{NFSU2_TR(0x6731c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6731c4:{NFSU2_TR(0x6731c4);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6731c8:{NFSU2_TR(0x6731c8);
if(r1(R+518)){{goto L6731df;}}
}
B6731ca:L6731ca:{c.instructions+=3;NFSU2_TR(0x6731ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6731cd:{NFSU2_TR(0x6731cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6731cf:{NFSU2_TR(0x6731cf);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6731d2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6731d2:L6731d2:{c.instructions+=5;NFSU2_TR(0x6731d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6731d4:{NFSU2_TR(0x6731d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6731d7:{NFSU2_TR(0x6731d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6731d9:{NFSU2_TR(0x6731d9);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6731dd:{NFSU2_TR(0x6731dd);
if(r1(R+518)){{goto L6731ed;}}
}
B6731df:L6731df:{c.instructions+=3;NFSU2_TR(0x6731df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6731e1:{NFSU2_TR(0x6731e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6731e4:{NFSU2_TR(0x6731e4);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0xcull))));
}
B6731e7:L6731e7:{c.instructions+=2;NFSU2_TR(0x6731e7);
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
B6731e9:{NFSU2_TR(0x6731e9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67319cu);}goto L67319c;}}
}
B6731eb:L6731eb:{c.instructions+=1;NFSU2_TR(0x6731eb);
{goto L6731fb;}
}
B6731ed:L6731ed:{c.instructions+=2;NFSU2_TR(0x6731ed);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+28)),r4(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+4,u32(u32(r4(U+0))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B6731f0:{NFSU2_TR(0x6731f0);
{goto L6731fb;}
}
B6731f2:L6731f2:{c.instructions+=3;NFSU2_TR(0x6731f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6731f4:{NFSU2_TR(0x6731f4);
__builtin_memmove((R+4),(R+24),4);
}
B6731f6:{NFSU2_TR(0x6731f6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6731f9ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6731f9:L6731f9:{c.instructions+=1;NFSU2_TR(0x6731f9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B6731fb:L6731fb:{c.instructions+=5;NFSU2_TR(0x6731fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6731fe:{NFSU2_TR(0x6731fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6731ff:{NFSU2_TR(0x6731ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B673200:{NFSU2_TR(0x673200);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B673201:{NFSU2_TR(0x673201);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B673202:L673202:{c.instructions+=6;NFSU2_TR(0x673202);
__builtin_memmove((R+28),(R+28),4);
}
B673204:{NFSU2_TR(0x673204);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B673205:{NFSU2_TR(0x673205);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B673206:{NFSU2_TR(0x673206);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B673208:{NFSU2_TR(0x673208);
__builtin_memmove((R+24),(R+4),4);
}
B67320a:{NFSU2_TR(0x67320a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67320full));
TAIL_STATIC(0x645362u,645);
}
B67320f:L67320f:{c.instructions+=2;NFSU2_TR(0x67320f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B673211:{NFSU2_TR(0x673211);
if(r1(R+518)){{goto L67321e;}}
}
B673213:L673213:{c.instructions+=2;NFSU2_TR(0x673213);
__builtin_memmove((R+4),(R+0),4);
}
B673215:{NFSU2_TR(0x673215);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67321aull));
TAIL_STATIC(0x672521u,672);
}
B67321a:L67321a:{c.instructions+=2;NFSU2_TR(0x67321a);
__builtin_memmove((R+28),(R+0),4);
}
B67321c:{NFSU2_TR(0x67321c);
{goto L673220;}
}
B67321e:L67321e:{c.instructions+=1;NFSU2_TR(0x67321e);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B673220:L673220:{c.instructions+=2;NFSU2_TR(0x673220);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B673222:{NFSU2_TR(0x673222);
if(r1(R+518)){{goto L673254;}}
}
B673224:L673224:{c.instructions+=4;NFSU2_TR(0x673224);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B673227:{NFSU2_TR(0x673227);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67322a:{NFSU2_TR(0x67322a);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B67322e:{NFSU2_TR(0x67322e);
if(r1(R+518)){{goto L67323f;}}
}
B673230:L673230:{c.instructions+=3;NFSU2_TR(0x673230);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B673233:{NFSU2_TR(0x673233);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B673235:{NFSU2_TR(0x673235);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x673238ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B673238:L673238:{c.instructions+=3;NFSU2_TR(0x673238);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B67323a:{NFSU2_TR(0x67323a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67323d:{NFSU2_TR(0x67323d);
if(r1(R+518)){{goto L673254;}}
}
B67323f:L67323f:{c.instructions+=2;NFSU2_TR(0x67323f);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B673243:{NFSU2_TR(0x673243);
if(r1(R+518)){{goto L673258;}}
}
B673245:L673245:{c.instructions+=3;NFSU2_TR(0x673245);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B673248:{NFSU2_TR(0x673248);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B67324a:{NFSU2_TR(0x67324a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67324dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B67324d:L67324d:{c.instructions+=3;NFSU2_TR(0x67324d);
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
B67324f:{NFSU2_TR(0x67324f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B673252:{NFSU2_TR(0x673252);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L673258;}}
}
B673254:L673254:{c.instructions+=2;NFSU2_TR(0x673254);
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
B673256:{NFSU2_TR(0x673256);
{goto L67325a;}
}
B673258:L673258:{c.instructions+=1;NFSU2_TR(0x673258);
__builtin_memmove((R+0),(R+28),4);
}
B67325a:L67325a:{c.instructions+=3;NFSU2_TR(0x67325a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B67325b:{NFSU2_TR(0x67325b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B67325c:{NFSU2_TR(0x67325c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B67325d:L67325d:{c.instructions+=5;NFSU2_TR(0x67325d);
__builtin_memmove((R+28),(R+28),4);
}
B67325f:{NFSU2_TR(0x67325f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B673260:{NFSU2_TR(0x673260);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B673262:{NFSU2_TR(0x673262);
__builtin_memmove((R+24),(R+4),4);
}
B673264:{NFSU2_TR(0x673264);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x673269ull));
TAIL_STATIC(0x645362u,645);
}
B673269:L673269:{c.instructions+=2;NFSU2_TR(0x673269);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B67326b:{NFSU2_TR(0x67326b);
if(r1(R+518)){{goto L673276;}}
}
B67326d:L67326d:{c.instructions+=2;NFSU2_TR(0x67326d);
__builtin_memmove((R+4),(R+0),4);
}
B67326f:{NFSU2_TR(0x67326f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x673274ull));
TAIL_STATIC(0x67268du,672);
}
B673274:L673274:{c.instructions+=1;NFSU2_TR(0x673274);
{goto L673278;}
}
B673276:L673276:{c.instructions+=1;NFSU2_TR(0x673276);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B673278:L673278:{c.instructions+=2;NFSU2_TR(0x673278);
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
B67327a:{NFSU2_TR(0x67327a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L67327e;}}
}
B67327c:L67327c:{c.instructions+=2;NFSU2_TR(0x67327c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B67327d:{NFSU2_TR(0x67327d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B67327e:L67327e:{c.instructions+=5;NFSU2_TR(0x67327e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67327f:{NFSU2_TR(0x67327f);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B673281:{NFSU2_TR(0x673281);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B673282:{NFSU2_TR(0x673282);
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x10ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B673285:{NFSU2_TR(0x673285);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+28),(U+0),4);
}
B673288:L673288:{c.instructions+=1;NFSU2_TR(0x673288);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L67328a;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x673288u);}goto L673288;}
}
B67328a:L67328a:{c.instructions+=3;NFSU2_TR(0x67328a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B67328b:{NFSU2_TR(0x67328b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B67328c:{NFSU2_TR(0x67328c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B67328d:L67328d:{c.instructions+=6;NFSU2_TR(0x67328d);
__builtin_memmove((R+28),(R+28),4);
}
B67328f:{NFSU2_TR(0x67328f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B673290:{NFSU2_TR(0x673290);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B673291:{NFSU2_TR(0x673291);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B673293:{NFSU2_TR(0x673293);
__builtin_memmove((R+28),(R+4),4);
}
B673295:{NFSU2_TR(0x673295);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67329aull));
TAIL_STATIC(0x645362u,645);
}
B67329a:L67329a:{c.instructions+=2;NFSU2_TR(0x67329a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B67329c:{NFSU2_TR(0x67329c);
if(r1(R+518)){{goto L6732a9;}}
}
B67329e:L67329e:{c.instructions+=2;NFSU2_TR(0x67329e);
__builtin_memmove((R+4),(R+0),4);
}
B6732a0:{NFSU2_TR(0x6732a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6732a5ull));
TAIL_STATIC(0x6726efu,672);
}
B6732a5:L6732a5:{c.instructions+=2;NFSU2_TR(0x6732a5);
__builtin_memmove((R+24),(R+0),4);
}
B6732a7:{NFSU2_TR(0x6732a7);
{goto L6732ab;}
}
B6732a9:L6732a9:{c.instructions+=1;NFSU2_TR(0x6732a9);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6732ab:L6732ab:{c.instructions+=2;NFSU2_TR(0x6732ab);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6732ad:{NFSU2_TR(0x6732ad);
if(r1(R+518)){{goto L6732d6;}}
}
B6732af:L6732af:{c.instructions+=8;NFSU2_TR(0x6732af);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6732b2:{NFSU2_TR(0x6732b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6732b5:{NFSU2_TR(0x6732b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6732b8:{NFSU2_TR(0x6732b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6732bb:{NFSU2_TR(0x6732bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6732be:{NFSU2_TR(0x6732be);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6732c1:{NFSU2_TR(0x6732c1);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6732c5:{NFSU2_TR(0x6732c5);
if(r1(R+518)){{goto L6732da;}}
}
B6732c7:L6732c7:{c.instructions+=3;NFSU2_TR(0x6732c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6732ca:{NFSU2_TR(0x6732ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6732cc:{NFSU2_TR(0x6732cc);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6732cfull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6732cf:L6732cf:{c.instructions+=3;NFSU2_TR(0x6732cf);
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
B6732d1:{NFSU2_TR(0x6732d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6732d4:{NFSU2_TR(0x6732d4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6732da;}}
}
B6732d6:L6732d6:{c.instructions+=2;NFSU2_TR(0x6732d6);
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
B6732d8:{NFSU2_TR(0x6732d8);
{goto L6732dc;}
}
B6732da:L6732da:{c.instructions+=1;NFSU2_TR(0x6732da);
__builtin_memmove((R+0),(R+24),4);
}
B6732dc:L6732dc:{c.instructions+=3;NFSU2_TR(0x6732dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6732dd:{NFSU2_TR(0x6732dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6732de:{NFSU2_TR(0x6732de);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6732df:L6732df:{c.instructions+=6;NFSU2_TR(0x6732df);
__builtin_memmove((R+28),(R+28),4);
}
B6732e1:{NFSU2_TR(0x6732e1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6732e2:{NFSU2_TR(0x6732e2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6732e3:{NFSU2_TR(0x6732e3);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6732e5:{NFSU2_TR(0x6732e5);
__builtin_memmove((R+24),(R+4),4);
}
B6732e7:{NFSU2_TR(0x6732e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6732ecull));
TAIL_STATIC(0x645362u,645);
}
B6732ec:L6732ec:{c.instructions+=2;NFSU2_TR(0x6732ec);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6732ee:{NFSU2_TR(0x6732ee);
if(r1(R+518)){{goto L6732fb;}}
}
B6732f0:L6732f0:{c.instructions+=2;NFSU2_TR(0x6732f0);
__builtin_memmove((R+4),(R+0),4);
}
B6732f2:{NFSU2_TR(0x6732f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6732f7ull));
TAIL_STATIC(0x672784u,672);
}
B6732f7:L6732f7:{c.instructions+=2;NFSU2_TR(0x6732f7);
__builtin_memmove((R+28),(R+0),4);
}
B6732f9:{NFSU2_TR(0x6732f9);
{goto L6732fd;}
}
B6732fb:L6732fb:{c.instructions+=1;NFSU2_TR(0x6732fb);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6732fd:L6732fd:{c.instructions+=2;NFSU2_TR(0x6732fd);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6732ff:{NFSU2_TR(0x6732ff);
if(r1(R+518)){{goto L67334c;}}
}
B673301:L673301:{c.instructions+=6;NFSU2_TR(0x673301);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B673304:{NFSU2_TR(0x673304);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B673307:{NFSU2_TR(0x673307);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67330a:{NFSU2_TR(0x67330a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67330d:{NFSU2_TR(0x67330d);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B673311:{NFSU2_TR(0x673311);
if(r1(R+518)){{goto L673322;}}
}
B673313:L673313:{c.instructions+=3;NFSU2_TR(0x673313);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B673316:{NFSU2_TR(0x673316);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B673318:{NFSU2_TR(0x673318);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67331bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B67331b:L67331b:{c.instructions+=3;NFSU2_TR(0x67331b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B67331d:{NFSU2_TR(0x67331d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B673320:{NFSU2_TR(0x673320);
if(r1(R+518)){{goto L67334c;}}
}
B673322:L673322:{c.instructions+=2;NFSU2_TR(0x673322);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B673326:{NFSU2_TR(0x673326);
if(r1(R+518)){{goto L673337;}}
}
B673328:L673328:{c.instructions+=3;NFSU2_TR(0x673328);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67332b:{NFSU2_TR(0x67332b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B67332d:{NFSU2_TR(0x67332d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x673330ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B673330:L673330:{c.instructions+=3;NFSU2_TR(0x673330);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B673332:{NFSU2_TR(0x673332);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B673335:{NFSU2_TR(0x673335);
if(r1(R+518)){{goto L67334c;}}
}
B673337:L673337:{c.instructions+=2;NFSU2_TR(0x673337);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B67333b:{NFSU2_TR(0x67333b);
if(r1(R+518)){{goto L673350;}}
}
B67333d:L67333d:{c.instructions+=3;NFSU2_TR(0x67333d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B673340:{NFSU2_TR(0x673340);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B673342:{NFSU2_TR(0x673342);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x673345ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B673345:L673345:{c.instructions+=3;NFSU2_TR(0x673345);
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
B673347:{NFSU2_TR(0x673347);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67334a:{NFSU2_TR(0x67334a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L673350;}}
}
B67334c:L67334c:{c.instructions+=2;NFSU2_TR(0x67334c);
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
B67334e:{NFSU2_TR(0x67334e);
{goto L673352;}
}
B673350:L673350:{c.instructions+=1;NFSU2_TR(0x673350);
__builtin_memmove((R+0),(R+28),4);
}
B673352:L673352:{c.instructions+=3;NFSU2_TR(0x673352);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B673353:{NFSU2_TR(0x673353);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B673354:{NFSU2_TR(0x673354);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B673355:L673355:{c.instructions+=6;NFSU2_TR(0x673355);
__builtin_memmove((R+28),(R+28),4);
}
B673357:{NFSU2_TR(0x673357);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B673358:{NFSU2_TR(0x673358);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B673359:{NFSU2_TR(0x673359);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67335b:{NFSU2_TR(0x67335b);
__builtin_memmove((R+24),(R+4),4);
}
B67335d:{NFSU2_TR(0x67335d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x673362ull));
TAIL_STATIC(0x645362u,645);
}
B673362:L673362:{c.instructions+=2;NFSU2_TR(0x673362);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B673364:{NFSU2_TR(0x673364);
if(r1(R+518)){{goto L673371;}}
}
B673366:L673366:{c.instructions+=2;NFSU2_TR(0x673366);
__builtin_memmove((R+4),(R+0),4);
}
B673368:{NFSU2_TR(0x673368);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67336dull));
TAIL_STATIC(0x67283fu,672);
}
B67336d:L67336d:{c.instructions+=2;NFSU2_TR(0x67336d);
__builtin_memmove((R+28),(R+0),4);
}
B67336f:{NFSU2_TR(0x67336f);
{goto L673373;}
}
B673371:L673371:{c.instructions+=1;NFSU2_TR(0x673371);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B673373:L673373:{c.instructions+=2;NFSU2_TR(0x673373);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B673375:{NFSU2_TR(0x673375);
if(r1(R+518)){{goto L6733d4;}}
}
B673377:L673377:{c.instructions+=12;NFSU2_TR(0x673377);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67337a:{NFSU2_TR(0x67337a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67337d:{NFSU2_TR(0x67337d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B673380:{NFSU2_TR(0x673380);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B673383:{NFSU2_TR(0x673383);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B673386:{NFSU2_TR(0x673386);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B673389:{NFSU2_TR(0x673389);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67338c:{NFSU2_TR(0x67338c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67338f:{NFSU2_TR(0x67338f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B673392:{NFSU2_TR(0x673392);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B673395:{NFSU2_TR(0x673395);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B673399:{NFSU2_TR(0x673399);
if(r1(R+518)){{goto L6733aa;}}
}
B67339b:L67339b:{c.instructions+=3;NFSU2_TR(0x67339b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67339e:{NFSU2_TR(0x67339e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6733a0:{NFSU2_TR(0x6733a0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6733a3ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6733a3:L6733a3:{c.instructions+=3;NFSU2_TR(0x6733a3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6733a5:{NFSU2_TR(0x6733a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6733a8:{NFSU2_TR(0x6733a8);
if(r1(R+518)){{goto L6733d4;}}
}
B6733aa:L6733aa:{c.instructions+=2;NFSU2_TR(0x6733aa);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6733ae:{NFSU2_TR(0x6733ae);
if(r1(R+518)){{goto L6733bf;}}
}
B6733b0:L6733b0:{c.instructions+=3;NFSU2_TR(0x6733b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6733b3:{NFSU2_TR(0x6733b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6733b5:{NFSU2_TR(0x6733b5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6733b8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6733b8:L6733b8:{c.instructions+=3;NFSU2_TR(0x6733b8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6733ba:{NFSU2_TR(0x6733ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6733bd:{NFSU2_TR(0x6733bd);
if(r1(R+518)){{goto L6733d4;}}
}
B6733bf:L6733bf:{c.instructions+=2;NFSU2_TR(0x6733bf);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6733c3:{NFSU2_TR(0x6733c3);
if(r1(R+518)){{goto L6733d8;}}
}
B6733c5:L6733c5:{c.instructions+=3;NFSU2_TR(0x6733c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6733c8:{NFSU2_TR(0x6733c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6733ca:{NFSU2_TR(0x6733ca);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6733cdull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6733cd:L6733cd:{c.instructions+=3;NFSU2_TR(0x6733cd);
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
B6733cf:{NFSU2_TR(0x6733cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6733d2:{NFSU2_TR(0x6733d2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6733d8;}}
}
B6733d4:L6733d4:{c.instructions+=2;NFSU2_TR(0x6733d4);
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
B6733d6:{NFSU2_TR(0x6733d6);
{goto L6733da;}
}
B6733d8:L6733d8:{c.instructions+=1;NFSU2_TR(0x6733d8);
__builtin_memmove((R+0),(R+28),4);
}
B6733da:L6733da:{c.instructions+=3;NFSU2_TR(0x6733da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6733db:{NFSU2_TR(0x6733db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6733dc:{NFSU2_TR(0x6733dc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6733dd:L6733dd:{c.instructions+=6;NFSU2_TR(0x6733dd);
__builtin_memmove((R+28),(R+28),4);
}
B6733df:{NFSU2_TR(0x6733df);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6733e0:{NFSU2_TR(0x6733e0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6733e1:{NFSU2_TR(0x6733e1);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6733e3:{NFSU2_TR(0x6733e3);
__builtin_memmove((R+24),(R+4),4);
}
B6733e5:{NFSU2_TR(0x6733e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6733eaull));
TAIL_STATIC(0x645362u,645);
}
B6733ea:L6733ea:{c.instructions+=2;NFSU2_TR(0x6733ea);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6733ec:{NFSU2_TR(0x6733ec);
if(r1(R+518)){{goto L6733f9;}}
}
B6733ee:L6733ee:{c.instructions+=2;NFSU2_TR(0x6733ee);
__builtin_memmove((R+4),(R+0),4);
}
B6733f0:{NFSU2_TR(0x6733f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6733f5ull));
TAIL_STATIC(0x672925u,672);
}
B6733f5:L6733f5:{c.instructions+=2;NFSU2_TR(0x6733f5);
__builtin_memmove((R+28),(R+0),4);
}
B6733f7:{NFSU2_TR(0x6733f7);
{goto L6733fb;}
}
B6733f9:L6733f9:{c.instructions+=1;NFSU2_TR(0x6733f9);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6733fb:L6733fb:{c.instructions+=2;NFSU2_TR(0x6733fb);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6733fd:{NFSU2_TR(0x6733fd);
if(r1(R+518)){{goto L67342f;}}
}
B6733ff:L6733ff:{c.instructions+=4;NFSU2_TR(0x6733ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B673402:{NFSU2_TR(0x673402);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B673405:{NFSU2_TR(0x673405);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B673409:{NFSU2_TR(0x673409);
if(r1(R+518)){{goto L67341a;}}
}
B67340b:L67340b:{c.instructions+=3;NFSU2_TR(0x67340b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67340e:{NFSU2_TR(0x67340e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B673410:{NFSU2_TR(0x673410);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x673413ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B673413:L673413:{c.instructions+=3;NFSU2_TR(0x673413);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B673415:{NFSU2_TR(0x673415);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B673418:{NFSU2_TR(0x673418);
if(r1(R+518)){{goto L67342f;}}
}
B67341a:L67341a:{c.instructions+=2;NFSU2_TR(0x67341a);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B67341e:{NFSU2_TR(0x67341e);
if(r1(R+518)){{goto L673433;}}
}
B673420:L673420:{c.instructions+=3;NFSU2_TR(0x673420);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B673423:{NFSU2_TR(0x673423);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B673425:{NFSU2_TR(0x673425);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x673428ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B673428:L673428:{c.instructions+=3;NFSU2_TR(0x673428);
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
B67342a:{NFSU2_TR(0x67342a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67342d:{NFSU2_TR(0x67342d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L673433;}}
}
B67342f:L67342f:{c.instructions+=2;NFSU2_TR(0x67342f);
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
B673431:{NFSU2_TR(0x673431);
{goto L673435;}
}
B673433:L673433:{c.instructions+=1;NFSU2_TR(0x673433);
__builtin_memmove((R+0),(R+28),4);
}
B673435:L673435:{c.instructions+=3;NFSU2_TR(0x673435);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B673436:{NFSU2_TR(0x673436);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B673437:{NFSU2_TR(0x673437);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B673438:L673438:{c.instructions+=6;NFSU2_TR(0x673438);
__builtin_memmove((R+28),(R+28),4);
}
B67343a:{NFSU2_TR(0x67343a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67343b:{NFSU2_TR(0x67343b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67343c:{NFSU2_TR(0x67343c);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67343e:{NFSU2_TR(0x67343e);
__builtin_memmove((R+28),(R+4),4);
}
B673440:{NFSU2_TR(0x673440);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x673445ull));
TAIL_STATIC(0x645362u,645);
}
B673445:L673445:{c.instructions+=2;NFSU2_TR(0x673445);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B673447:{NFSU2_TR(0x673447);
if(r1(R+518)){{goto L673454;}}
}
B673449:L673449:{c.instructions+=2;NFSU2_TR(0x673449);
__builtin_memmove((R+4),(R+0),4);
}
B67344b:{NFSU2_TR(0x67344b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x673450ull));
TAIL_STATIC(0x6729b7u,672);
}
B673450:L673450:{c.instructions+=2;NFSU2_TR(0x673450);
__builtin_memmove((R+24),(R+0),4);
}
B673452:{NFSU2_TR(0x673452);
{goto L673456;}
}
B673454:L673454:{c.instructions+=1;NFSU2_TR(0x673454);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B673456:L673456:{c.instructions+=2;NFSU2_TR(0x673456);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B673458:{NFSU2_TR(0x673458);
if(r1(R+518)){{goto L673475;}}
}
B67345a:L67345a:{c.instructions+=4;NFSU2_TR(0x67345a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67345d:{NFSU2_TR(0x67345d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B673460:{NFSU2_TR(0x673460);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B673464:{NFSU2_TR(0x673464);
if(r1(R+518)){{goto L673479;}}
}
B673466:L673466:{c.instructions+=3;NFSU2_TR(0x673466);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B673469:{NFSU2_TR(0x673469);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B67346b:{NFSU2_TR(0x67346b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67346eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B67346e:L67346e:{c.instructions+=3;NFSU2_TR(0x67346e);
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
B673470:{NFSU2_TR(0x673470);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B673473:{NFSU2_TR(0x673473);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L673479;}}
}
B673475:L673475:{c.instructions+=2;NFSU2_TR(0x673475);
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
B673477:{NFSU2_TR(0x673477);
{goto L67347b;}
}
B673479:L673479:{c.instructions+=1;NFSU2_TR(0x673479);
__builtin_memmove((R+0),(R+24),4);
}
B67347b:L67347b:{c.instructions+=3;NFSU2_TR(0x67347b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B67347c:{NFSU2_TR(0x67347c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B67347d:{NFSU2_TR(0x67347d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B67347e:L67347e:{c.instructions+=5;NFSU2_TR(0x67347e);
__builtin_memmove((R+28),(R+28),4);
}
B673480:{NFSU2_TR(0x673480);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B673481:{NFSU2_TR(0x673481);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B673483:{NFSU2_TR(0x673483);
__builtin_memmove((R+24),(R+4),4);
}
B673485:{NFSU2_TR(0x673485);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67348aull));
TAIL_STATIC(0x645362u,645);
}
B67348a:L67348a:{c.instructions+=2;NFSU2_TR(0x67348a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B67348c:{NFSU2_TR(0x67348c);
if(r1(R+518)){{goto L673497;}}
}
B67348e:L67348e:{c.instructions+=2;NFSU2_TR(0x67348e);
__builtin_memmove((R+4),(R+0),4);
}
B673490:{NFSU2_TR(0x673490);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x673495ull));
TAIL_STATIC(0x672a2au,672);
}
B673495:L673495:{c.instructions+=1;NFSU2_TR(0x673495);
{goto L673499;}
}
B673497:L673497:{c.instructions+=1;NFSU2_TR(0x673497);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B673499:L673499:{c.instructions+=2;NFSU2_TR(0x673499);
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
B67349b:{NFSU2_TR(0x67349b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L67349f;}}
}
B67349d:L67349d:{c.instructions+=2;NFSU2_TR(0x67349d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B67349e:{NFSU2_TR(0x67349e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B67349f:L67349f:{c.instructions+=12;NFSU2_TR(0x67349f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6734a2:{NFSU2_TR(0x6734a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6734a5:{NFSU2_TR(0x6734a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6734a8:{NFSU2_TR(0x6734a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6734ab:{NFSU2_TR(0x6734ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6734ae:{NFSU2_TR(0x6734ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6734b1:{NFSU2_TR(0x6734b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6734b4:{NFSU2_TR(0x6734b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6734b7:{NFSU2_TR(0x6734b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6734ba:{NFSU2_TR(0x6734ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6734bd:{NFSU2_TR(0x6734bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6734be:{NFSU2_TR(0x6734be);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6734bf:L6734bf:{c.instructions+=7;NFSU2_TR(0x6734bf);
__builtin_memmove((R+28),(R+28),4);
}
B6734c1:{NFSU2_TR(0x6734c1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6734c2:{NFSU2_TR(0x6734c2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6734c3:{NFSU2_TR(0x6734c3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6734c4:{NFSU2_TR(0x6734c4);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6734c6:{NFSU2_TR(0x6734c6);
__builtin_memmove((R+24),(R+4),4);
}
B6734c8:{NFSU2_TR(0x6734c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6734cdull));
TAIL_STATIC(0x645362u,645);
}
B6734cd:L6734cd:{c.instructions+=3;NFSU2_TR(0x6734cd);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6734cf:{NFSU2_TR(0x6734cf);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6734d1:{NFSU2_TR(0x6734d1);
if(r1(R+518)){{goto L6734de;}}
}
B6734d3:L6734d3:{c.instructions+=2;NFSU2_TR(0x6734d3);
__builtin_memmove((R+4),(R+0),4);
}
B6734d5:{NFSU2_TR(0x6734d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6734daull));
TAIL_STATIC(0x672aceu,672);
}
B6734da:L6734da:{c.instructions+=2;NFSU2_TR(0x6734da);
__builtin_memmove((R+28),(R+0),4);
}
B6734dc:{NFSU2_TR(0x6734dc);
{goto L6734e0;}
}
B6734de:L6734de:{c.instructions+=1;NFSU2_TR(0x6734de);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6734e0:L6734e0:{c.instructions+=2;NFSU2_TR(0x6734e0);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6734e2:{NFSU2_TR(0x6734e2);
if(r1(R+518)){{goto L673592;}}
}
B6734e8:L6734e8:{c.instructions+=12;NFSU2_TR(0x6734e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6734eb:{NFSU2_TR(0x6734eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6734ee:{NFSU2_TR(0x6734ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6734f1:{NFSU2_TR(0x6734f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6734f4:{NFSU2_TR(0x6734f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6734f7:{NFSU2_TR(0x6734f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6734fa:{NFSU2_TR(0x6734fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6734fd:{NFSU2_TR(0x6734fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B673500:{NFSU2_TR(0x673500);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B673503:{NFSU2_TR(0x673503);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B673506:{NFSU2_TR(0x673506);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+12)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B673509:{NFSU2_TR(0x673509);
if(r1(R+518)){{goto L67351a;}}
}
B67350b:L67350b:{c.instructions+=3;NFSU2_TR(0x67350b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67350e:{NFSU2_TR(0x67350e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B673510:{NFSU2_TR(0x673510);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x673513ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B673513:L673513:{c.instructions+=3;NFSU2_TR(0x673513);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B673515:{NFSU2_TR(0x673515);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B673518:{NFSU2_TR(0x673518);
if(r1(R+518)){{goto L673592;}}
}
B67351a:L67351a:{c.instructions+=2;NFSU2_TR(0x67351a);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+12)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B67351d:{NFSU2_TR(0x67351d);
if(r1(R+518)){{goto L67352e;}}
}
B67351f:L67351f:{c.instructions+=3;NFSU2_TR(0x67351f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B673522:{NFSU2_TR(0x673522);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B673524:{NFSU2_TR(0x673524);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x673527ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B673527:L673527:{c.instructions+=3;NFSU2_TR(0x673527);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B673529:{NFSU2_TR(0x673529);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67352c:{NFSU2_TR(0x67352c);
if(r1(R+518)){{goto L673592;}}
}
B67352e:L67352e:{c.instructions+=2;NFSU2_TR(0x67352e);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+12)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B673531:{NFSU2_TR(0x673531);
if(r1(R+518)){{goto L673542;}}
}
B673533:L673533:{c.instructions+=3;NFSU2_TR(0x673533);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B673536:{NFSU2_TR(0x673536);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B673538:{NFSU2_TR(0x673538);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67353bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B67353b:L67353b:{c.instructions+=3;NFSU2_TR(0x67353b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67353d:{NFSU2_TR(0x67353d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B673540:{NFSU2_TR(0x673540);
if(r1(R+518)){{goto L673592;}}
}
B673542:L673542:{c.instructions+=2;NFSU2_TR(0x673542);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+12)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B673545:{NFSU2_TR(0x673545);
if(r1(R+518)){{goto L673556;}}
}
B673547:L673547:{c.instructions+=3;NFSU2_TR(0x673547);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67354a:{NFSU2_TR(0x67354a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B67354c:{NFSU2_TR(0x67354c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67354full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B67354f:L67354f:{c.instructions+=3;NFSU2_TR(0x67354f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B673551:{NFSU2_TR(0x673551);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B673554:{NFSU2_TR(0x673554);
if(r1(R+518)){{goto L673592;}}
}
B673556:L673556:{c.instructions+=2;NFSU2_TR(0x673556);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+12)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B673559:{NFSU2_TR(0x673559);
if(r1(R+518)){{goto L67356a;}}
}
B67355b:L67355b:{c.instructions+=3;NFSU2_TR(0x67355b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67355e:{NFSU2_TR(0x67355e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B673560:{NFSU2_TR(0x673560);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x673563ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B673563:L673563:{c.instructions+=3;NFSU2_TR(0x673563);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B673565:{NFSU2_TR(0x673565);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B673568:{NFSU2_TR(0x673568);
if(r1(R+518)){{goto L673592;}}
}
B67356a:L67356a:{c.instructions+=2;NFSU2_TR(0x67356a);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+12)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B67356d:{NFSU2_TR(0x67356d);
if(r1(R+518)){{goto L67357e;}}
}
B67356f:L67356f:{c.instructions+=3;NFSU2_TR(0x67356f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B673572:{NFSU2_TR(0x673572);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B673574:{NFSU2_TR(0x673574);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x673577ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B673577:L673577:{c.instructions+=3;NFSU2_TR(0x673577);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B673579:{NFSU2_TR(0x673579);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67357c:{NFSU2_TR(0x67357c);
if(r1(R+518)){{goto L673592;}}
}
B67357e:L67357e:{c.instructions+=2;NFSU2_TR(0x67357e);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+12)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B673581:{NFSU2_TR(0x673581);
if(r1(R+518)){{goto L673596;}}
}
B673583:L673583:{c.instructions+=3;NFSU2_TR(0x673583);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B673586:{NFSU2_TR(0x673586);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B673588:{NFSU2_TR(0x673588);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67358bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B67358b:L67358b:{c.instructions+=3;NFSU2_TR(0x67358b);
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
B67358d:{NFSU2_TR(0x67358d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B673590:{NFSU2_TR(0x673590);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L673596;}}
}
B673592:L673592:{c.instructions+=2;NFSU2_TR(0x673592);
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
B673594:{NFSU2_TR(0x673594);
{goto L673598;}
}
B673596:L673596:{c.instructions+=1;NFSU2_TR(0x673596);
__builtin_memmove((R+0),(R+28),4);
}
B673598:L673598:{c.instructions+=4;NFSU2_TR(0x673598);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B673599:{NFSU2_TR(0x673599);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B67359a:{NFSU2_TR(0x67359a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B67359b:{NFSU2_TR(0x67359b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B67359c:L67359c:{c.instructions+=10;NFSU2_TR(0x67359c);
__builtin_memmove((R+28),(R+28),4);
}
B67359e:{NFSU2_TR(0x67359e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67359f:{NFSU2_TR(0x67359f);
__builtin_memmove((R+20),(R+16),4);
}
B6735a1:{NFSU2_TR(0x6735a1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6735a2:{NFSU2_TR(0x6735a2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6735a3:{NFSU2_TR(0x6735a3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6735a4:{NFSU2_TR(0x6735a4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6735a5:{NFSU2_TR(0x6735a5);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6735a7:{NFSU2_TR(0x6735a7);
__builtin_memmove((R+12),(R+4),4);
}
B6735a9:{NFSU2_TR(0x6735a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6735aeull));
TAIL_STATIC(0x645362u,645);
}
B6735ae:L6735ae:{c.instructions+=3;NFSU2_TR(0x6735ae);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6735b0:{NFSU2_TR(0x6735b0);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6735b2:{NFSU2_TR(0x6735b2);
if(r1(R+518)){{goto L6735c2;}}
}
B6735b4:L6735b4:{c.instructions+=2;NFSU2_TR(0x6735b4);
__builtin_memmove((R+4),(R+0),4);
}
B6735b6:{NFSU2_TR(0x6735b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6735bbull));
TAIL_STATIC(0x672bc6u,672);
}
B6735bb:L6735bb:{c.instructions+=3;NFSU2_TR(0x6735bb);
__builtin_memmove((R+28),(R+0),4);
}
B6735bd:{NFSU2_TR(0x6735bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6735c0:{NFSU2_TR(0x6735c0);
{goto L6735c7;}
}
B6735c2:L6735c2:{c.instructions+=2;NFSU2_TR(0x6735c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6735c5:{NFSU2_TR(0x6735c5);
__builtin_memmove((R+28),(R+24),4);
}
B6735c7:L6735c7:{c.instructions+=2;NFSU2_TR(0x6735c7);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6735c9:{NFSU2_TR(0x6735c9);
if(r1(R+518)){{goto L6736dc;}}
}
B6735cf:L6735cf:{c.instructions+=12;NFSU2_TR(0x6735cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6735d2:{NFSU2_TR(0x6735d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6735d5:{NFSU2_TR(0x6735d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6735d8:{NFSU2_TR(0x6735d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6735db:{NFSU2_TR(0x6735db);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6735de:{NFSU2_TR(0x6735de);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6735e1:{NFSU2_TR(0x6735e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6735e4:{NFSU2_TR(0x6735e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6735e7:{NFSU2_TR(0x6735e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6735ea:{NFSU2_TR(0x6735ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6735ed:{NFSU2_TR(0x6735ed);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+24))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+24)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6735f0:{NFSU2_TR(0x6735f0);
if(r1(R+518)){{goto L673605;}}
}
B6735f2:L6735f2:{c.instructions+=3;NFSU2_TR(0x6735f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6735f5:{NFSU2_TR(0x6735f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6735f7:{NFSU2_TR(0x6735f7);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6735faull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6735fa:L6735fa:{c.instructions+=3;NFSU2_TR(0x6735fa);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6735fc:{NFSU2_TR(0x6735fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6735ff:{NFSU2_TR(0x6735ff);
if(r1(R+518)){{goto L6736dc;}}
}
B673605:L673605:{c.instructions+=2;NFSU2_TR(0x673605);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+24))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+24)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B673608:{NFSU2_TR(0x673608);
if(r1(R+518)){{goto L67361d;}}
}
B67360a:L67360a:{c.instructions+=3;NFSU2_TR(0x67360a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67360d:{NFSU2_TR(0x67360d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B67360f:{NFSU2_TR(0x67360f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x673612ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B673612:L673612:{c.instructions+=3;NFSU2_TR(0x673612);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B673614:{NFSU2_TR(0x673614);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B673617:{NFSU2_TR(0x673617);
if(r1(R+518)){{goto L6736dc;}}
}
B67361d:L67361d:{c.instructions+=2;NFSU2_TR(0x67361d);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+24))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+24)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B673620:{NFSU2_TR(0x673620);
if(r1(R+518)){{goto L673635;}}
}
B673622:L673622:{c.instructions+=3;NFSU2_TR(0x673622);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B673625:{NFSU2_TR(0x673625);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B673627:{NFSU2_TR(0x673627);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67362aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B67362a:L67362a:{c.instructions+=3;NFSU2_TR(0x67362a);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67362c:{NFSU2_TR(0x67362c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67362f:{NFSU2_TR(0x67362f);
if(r1(R+518)){{goto L6736dc;}}
}
B673635:L673635:{c.instructions+=2;NFSU2_TR(0x673635);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+24))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+24)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B673638:{NFSU2_TR(0x673638);
if(r1(R+518)){{goto L67364d;}}
}
B67363a:L67363a:{c.instructions+=3;NFSU2_TR(0x67363a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67363d:{NFSU2_TR(0x67363d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B67363f:{NFSU2_TR(0x67363f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x673642ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B673642:L673642:{c.instructions+=3;NFSU2_TR(0x673642);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B673644:{NFSU2_TR(0x673644);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B673647:{NFSU2_TR(0x673647);
if(r1(R+518)){{goto L6736dc;}}
}
B67364d:L67364d:{c.instructions+=2;NFSU2_TR(0x67364d);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+24))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+24)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B673650:{NFSU2_TR(0x673650);
if(r1(R+518)){{goto L673661;}}
}
B673652:L673652:{c.instructions+=3;NFSU2_TR(0x673652);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B673655:{NFSU2_TR(0x673655);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B673657:{NFSU2_TR(0x673657);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67365aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B67365a:L67365a:{c.instructions+=3;NFSU2_TR(0x67365a);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67365c:{NFSU2_TR(0x67365c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67365f:{NFSU2_TR(0x67365f);
if(r1(R+518)){{goto L6736dc;}}
}
B673661:L673661:{c.instructions+=3;NFSU2_TR(0x673661);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B673664:{NFSU2_TR(0x673664);
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
B673666:{NFSU2_TR(0x673666);
if(r1(R+518)){{goto L6736d5;}}
}
B673668:L673668:{c.instructions+=5;NFSU2_TR(0x673668);
__builtin_memmove((R+4),gp(0x8a5d00),4);
}
B67366e:{NFSU2_TR(0x67366e);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B673671:{NFSU2_TR(0x673671);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B673673:{NFSU2_TR(0x673673);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B673674:{NFSU2_TR(0x673674);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x673679ull));
TAIL_STATIC(0x671ccbu,671);
}
B673679:L673679:{c.instructions+=3;NFSU2_TR(0x673679);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67367b:{NFSU2_TR(0x67367b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67367e:{NFSU2_TR(0x67367e);
if(r1(R+518)){{goto L6736dc;}}
}
B673680:L673680:{c.instructions+=6;NFSU2_TR(0x673680);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B673683:{NFSU2_TR(0x673683);
__builtin_memmove((R+4),gp(0x8a5d00),4);
}
B673689:{NFSU2_TR(0x673689);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B67368c:{NFSU2_TR(0x67368c);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67368e:{NFSU2_TR(0x67368e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67368f:{NFSU2_TR(0x67368f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x673694ull));
TAIL_STATIC(0x671ccbu,671);
}
B673694:L673694:{c.instructions+=3;NFSU2_TR(0x673694);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B673696:{NFSU2_TR(0x673696);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B673699:{NFSU2_TR(0x673699);
if(r1(R+518)){{goto L6736dc;}}
}
B67369b:L67369b:{c.instructions+=6;NFSU2_TR(0x67369b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67369e:{NFSU2_TR(0x67369e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6736a1:{NFSU2_TR(0x6736a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6736a4:{NFSU2_TR(0x6736a4);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6736a7:{NFSU2_TR(0x6736a7);
__builtin_memmove((R+0),(R+4),4);
}
B6736a9:{NFSU2_TR(0x6736a9);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6736ac:L6736ac:{c.instructions+=1;NFSU2_TR(0x6736ac);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6736ae;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6736acu);}goto L6736ac;}
}
B6736ae:L6736ae:{c.instructions+=3;NFSU2_TR(0x6736ae);
__builtin_memmove((R+4),(R+0),4);
}
B6736b0:{NFSU2_TR(0x6736b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6736b3:{NFSU2_TR(0x6736b3);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6736b6:L6736b6:{c.instructions+=1;NFSU2_TR(0x6736b6);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6736b8;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6736b6u);}goto L6736b6;}
}
B6736b8:L6736b8:{c.instructions+=6;NFSU2_TR(0x6736b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6736bb:{NFSU2_TR(0x6736bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6736be:{NFSU2_TR(0x6736be);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6736c1:{NFSU2_TR(0x6736c1);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6736c4:{NFSU2_TR(0x6736c4);
__builtin_memmove((R+0),(R+4),4);
}
B6736c6:{NFSU2_TR(0x6736c6);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6736c9:L6736c9:{c.instructions+=1;NFSU2_TR(0x6736c9);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6736cb;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6736c9u);}goto L6736c9;}
}
B6736cb:L6736cb:{c.instructions+=2;NFSU2_TR(0x6736cb);
__builtin_memmove((R+4),(R+0),4);
}
B6736cd:{NFSU2_TR(0x6736cd);
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
B6736d0:L6736d0:{c.instructions+=1;NFSU2_TR(0x6736d0);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6736d2;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6736d0u);}goto L6736d0;}
}
B6736d2:L6736d2:{c.instructions+=1;NFSU2_TR(0x6736d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6736d5:L6736d5:{c.instructions+=1;NFSU2_TR(0x6736d5);
__builtin_memmove((R+0),(R+28),4);
}
B6736d7:L6736d7:{c.instructions+=5;NFSU2_TR(0x6736d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6736d8:{NFSU2_TR(0x6736d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6736d9:{NFSU2_TR(0x6736d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6736da:{NFSU2_TR(0x6736da);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6736db:{NFSU2_TR(0x6736db);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6736dc:L6736dc:{c.instructions+=2;NFSU2_TR(0x6736dc);
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
B6736de:{NFSU2_TR(0x6736de);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6736d7u);}goto L6736d7;}
}
B6736e0:L6736e0:{c.instructions+=6;NFSU2_TR(0x6736e0);
__builtin_memmove((R+28),(R+28),4);
}
B6736e2:{NFSU2_TR(0x6736e2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6736e3:{NFSU2_TR(0x6736e3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6736e4:{NFSU2_TR(0x6736e4);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6736e6:{NFSU2_TR(0x6736e6);
__builtin_memmove((R+24),(R+4),4);
}
B6736e8:{NFSU2_TR(0x6736e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6736edull));
TAIL_STATIC(0x645362u,645);
}
B6736ed:L6736ed:{c.instructions+=2;NFSU2_TR(0x6736ed);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6736ef:{NFSU2_TR(0x6736ef);
if(r1(R+518)){{goto L6736fc;}}
}
B6736f1:L6736f1:{c.instructions+=2;NFSU2_TR(0x6736f1);
__builtin_memmove((R+4),(R+0),4);
}
B6736f3:{NFSU2_TR(0x6736f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6736f8ull));
TAIL_STATIC(0x672cb8u,672);
}
B6736f8:L6736f8:{c.instructions+=2;NFSU2_TR(0x6736f8);
__builtin_memmove((R+28),(R+0),4);
}
B6736fa:{NFSU2_TR(0x6736fa);
{goto L6736fe;}
}
B6736fc:L6736fc:{c.instructions+=1;NFSU2_TR(0x6736fc);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6736fe:L6736fe:{c.instructions+=2;NFSU2_TR(0x6736fe);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B673700:{NFSU2_TR(0x673700);
if(r1(R+518)){{goto L67375c;}}
}
B673702:L673702:{c.instructions+=4;NFSU2_TR(0x673702);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B673705:{NFSU2_TR(0x673705);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B673708:{NFSU2_TR(0x673708);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B67370c:{NFSU2_TR(0x67370c);
if(r1(R+518)){{goto L67371d;}}
}
B67370e:L67370e:{c.instructions+=3;NFSU2_TR(0x67370e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B673711:{NFSU2_TR(0x673711);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B673713:{NFSU2_TR(0x673713);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x673716ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B673716:L673716:{c.instructions+=3;NFSU2_TR(0x673716);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B673718:{NFSU2_TR(0x673718);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67371b:{NFSU2_TR(0x67371b);
if(r1(R+518)){{goto L67375c;}}
}
B67371d:L67371d:{c.instructions+=2;NFSU2_TR(0x67371d);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B673721:{NFSU2_TR(0x673721);
if(r1(R+518)){{goto L673732;}}
}
B673723:L673723:{c.instructions+=3;NFSU2_TR(0x673723);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B673726:{NFSU2_TR(0x673726);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B673728:{NFSU2_TR(0x673728);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67372bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B67372b:L67372b:{c.instructions+=3;NFSU2_TR(0x67372b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B67372d:{NFSU2_TR(0x67372d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B673730:{NFSU2_TR(0x673730);
if(r1(R+518)){{goto L67375c;}}
}
B673732:L673732:{c.instructions+=2;NFSU2_TR(0x673732);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B673736:{NFSU2_TR(0x673736);
if(r1(R+518)){{goto L673747;}}
}
B673738:L673738:{c.instructions+=3;NFSU2_TR(0x673738);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67373b:{NFSU2_TR(0x67373b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B67373d:{NFSU2_TR(0x67373d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x673740ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B673740:L673740:{c.instructions+=3;NFSU2_TR(0x673740);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B673742:{NFSU2_TR(0x673742);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B673745:{NFSU2_TR(0x673745);
if(r1(R+518)){{goto L67375c;}}
}
B673747:L673747:{c.instructions+=2;NFSU2_TR(0x673747);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B67374b:{NFSU2_TR(0x67374b);
if(r1(R+518)){{goto L673760;}}
}
B67374d:L67374d:{c.instructions+=3;NFSU2_TR(0x67374d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B673750:{NFSU2_TR(0x673750);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B673752:{NFSU2_TR(0x673752);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x673755ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B673755:L673755:{c.instructions+=3;NFSU2_TR(0x673755);
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
B673757:{NFSU2_TR(0x673757);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67375a:{NFSU2_TR(0x67375a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L673760;}}
}
B67375c:L67375c:{c.instructions+=2;NFSU2_TR(0x67375c);
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
B67375e:{NFSU2_TR(0x67375e);
{goto L673762;}
}
B673760:L673760:{c.instructions+=1;NFSU2_TR(0x673760);
__builtin_memmove((R+0),(R+28),4);
}
B673762:L673762:{c.instructions+=3;NFSU2_TR(0x673762);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B673763:{NFSU2_TR(0x673763);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B673764:{NFSU2_TR(0x673764);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B673765:L673765:{c.instructions+=8;NFSU2_TR(0x673765);
__builtin_memmove((R+28),(R+28),4);
}
B673767:{NFSU2_TR(0x673767);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B673768:{NFSU2_TR(0x673768);
__builtin_memmove((R+20),(R+16),4);
}
B67376a:{NFSU2_TR(0x67376a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67376b:{NFSU2_TR(0x67376b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67376c:{NFSU2_TR(0x67376c);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67376e:{NFSU2_TR(0x67376e);
__builtin_memmove((R+12),(R+4),4);
}
B673770:{NFSU2_TR(0x673770);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x673775ull));
TAIL_STATIC(0x645362u,645);
}
B673775:L673775:{c.instructions+=2;NFSU2_TR(0x673775);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B673777:{NFSU2_TR(0x673777);
if(r1(R+518)){{goto L673785;}}
}
B673779:L673779:{c.instructions+=2;NFSU2_TR(0x673779);
__builtin_memmove((R+4),(R+0),4);
}
B67377b:{NFSU2_TR(0x67377b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x673780ull));
TAIL_STATIC(0x672d42u,672);
}
B673780:L673780:{c.instructions+=2;NFSU2_TR(0x673780);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B673783:{NFSU2_TR(0x673783);
{goto L67378c;}
}
B673785:L673785:{c.instructions+=2;NFSU2_TR(0x673785);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B673789:{NFSU2_TR(0x673789);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67378c:L67378c:{c.instructions+=2;NFSU2_TR(0x67378c);
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
B67378e:{NFSU2_TR(0x67378e);
if(r1(R+518)){{goto L67380b;}}
}
B673790:L673790:{c.instructions+=14;NFSU2_TR(0x673790);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B673793:{NFSU2_TR(0x673793);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B673796:{NFSU2_TR(0x673796);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B673799:{NFSU2_TR(0x673799);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67379a:{NFSU2_TR(0x67379a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67379d:{NFSU2_TR(0x67379d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6737a0:{NFSU2_TR(0x6737a0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6737a1:{NFSU2_TR(0x6737a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6737a4:{NFSU2_TR(0x6737a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6737a7:{NFSU2_TR(0x6737a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6737aa:{NFSU2_TR(0x6737aa);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6737ac:{NFSU2_TR(0x6737ac);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6737af:{NFSU2_TR(0x6737af);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6737b2:{NFSU2_TR(0x6737b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6737b3:L6737b3:{c.instructions+=1;NFSU2_TR(0x6737b3);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6737b5;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6737b3u);}goto L6737b3;}
}
B6737b5:L6737b5:{c.instructions+=3;NFSU2_TR(0x6737b5);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6737b7:{NFSU2_TR(0x6737b7);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+24))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+24)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6737ba:{NFSU2_TR(0x6737ba);
if(r1(R+518)){{goto L6737d0;}}
}
B6737bc:L6737bc:{c.instructions+=3;NFSU2_TR(0x6737bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6737bf:{NFSU2_TR(0x6737bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6737c1:{NFSU2_TR(0x6737c1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6737c4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6737c4:L6737c4:{c.instructions+=4;NFSU2_TR(0x6737c4);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6737c6:{NFSU2_TR(0x6737c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6737c9:{NFSU2_TR(0x6737c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6737cc:{NFSU2_TR(0x6737cc);
if(r1(R+518)){{goto L673802;}}
}
B6737ce:L6737ce:{c.instructions+=1;NFSU2_TR(0x6737ce);
__builtin_memmove((R+0),(R+4),4);
}
B6737d0:L6737d0:{c.instructions+=2;NFSU2_TR(0x6737d0);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+24))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+24)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6737d3:{NFSU2_TR(0x6737d3);
if(r1(R+518)){{goto L6737e9;}}
}
B6737d5:L6737d5:{c.instructions+=3;NFSU2_TR(0x6737d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6737d8:{NFSU2_TR(0x6737d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6737da:{NFSU2_TR(0x6737da);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6737ddull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6737dd:L6737dd:{c.instructions+=4;NFSU2_TR(0x6737dd);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6737df:{NFSU2_TR(0x6737df);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6737e2:{NFSU2_TR(0x6737e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6737e5:{NFSU2_TR(0x6737e5);
if(r1(R+518)){{goto L673802;}}
}
B6737e7:L6737e7:{c.instructions+=1;NFSU2_TR(0x6737e7);
__builtin_memmove((R+0),(R+4),4);
}
B6737e9:L6737e9:{c.instructions+=2;NFSU2_TR(0x6737e9);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+24))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+24)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6737ec:{NFSU2_TR(0x6737ec);
if(r1(R+518)){{goto L673809;}}
}
B6737ee:L6737ee:{c.instructions+=4;NFSU2_TR(0x6737ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6737f1:{NFSU2_TR(0x6737f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6737f3:{NFSU2_TR(0x6737f3);
__builtin_memmove((R+4),(R+12),4);
}
B6737f5:{NFSU2_TR(0x6737f5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6737f8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6737f8:L6737f8:{c.instructions+=4;NFSU2_TR(0x6737f8);
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
B6737fa:{NFSU2_TR(0x6737fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6737fd:{NFSU2_TR(0x6737fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B673800:{NFSU2_TR(0x673800);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L673806;}}
}
B673802:L673802:{c.instructions+=2;NFSU2_TR(0x673802);
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
B673804:{NFSU2_TR(0x673804);
{goto L673809;}
}
B673806:L673806:{c.instructions+=1;NFSU2_TR(0x673806);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B673809:L673809:{c.instructions+=2;NFSU2_TR(0x673809);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B67380a:{NFSU2_TR(0x67380a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B67380b:L67380b:{c.instructions+=3;NFSU2_TR(0x67380b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B67380c:{NFSU2_TR(0x67380c);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B67380d:{NFSU2_TR(0x67380d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B67380e:L67380e:{c.instructions+=8;NFSU2_TR(0x67380e);
__builtin_memmove((R+28),(R+28),4);
}
B673810:{NFSU2_TR(0x673810);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B673811:{NFSU2_TR(0x673811);
__builtin_memmove((R+20),(R+16),4);
}
B673813:{NFSU2_TR(0x673813);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B673814:{NFSU2_TR(0x673814);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B673815:{NFSU2_TR(0x673815);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B673817:{NFSU2_TR(0x673817);
__builtin_memmove((R+12),(R+4),4);
}
B673819:{NFSU2_TR(0x673819);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67381eull));
TAIL_STATIC(0x645362u,645);
}
B67381e:L67381e:{c.instructions+=2;NFSU2_TR(0x67381e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B673820:{NFSU2_TR(0x673820);
if(r1(R+518)){{goto L67382e;}}
}
B673822:L673822:{c.instructions+=2;NFSU2_TR(0x673822);
__builtin_memmove((R+4),(R+0),4);
}
B673824:{NFSU2_TR(0x673824);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x673829ull));
TAIL_STATIC(0x672e49u,672);
}
B673829:L673829:{c.instructions+=2;NFSU2_TR(0x673829);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67382c:{NFSU2_TR(0x67382c);
{goto L673832;}
}
B67382e:L67382e:{c.instructions+=1;NFSU2_TR(0x67382e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B673832:L673832:{c.instructions+=3;NFSU2_TR(0x673832);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B673835:{NFSU2_TR(0x673835);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B673837:{NFSU2_TR(0x673837);
if(r1(R+518)){{goto L67386d;}}
}
B673839:L673839:{c.instructions+=13;NFSU2_TR(0x673839);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67383a:{NFSU2_TR(0x67383a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67383b:{NFSU2_TR(0x67383b);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67383e:{NFSU2_TR(0x67383e);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((R+28),(U+0),4);
}
B673841:{NFSU2_TR(0x673841);
__builtin_memmove((R+24),(R+0),4);
}
B673843:{NFSU2_TR(0x673843);
u8 U[40];
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
}
B673844:{NFSU2_TR(0x673844);
u8 U[40];
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
}
B673845:{NFSU2_TR(0x673845);
u8 U[40];
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
}
B673846:{NFSU2_TR(0x673846);
u8 U[40];
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
}
B673847:{NFSU2_TR(0x673847);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B673849:{NFSU2_TR(0x673849);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((R+28),(U+0),4);
}
B67384c:{NFSU2_TR(0x67384c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B67384d:{NFSU2_TR(0x67384d);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((R+24),(U+0),4);
}
B673850:L673850:{c.instructions+=1;NFSU2_TR(0x673850);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L673852;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x673850u);}goto L673850;}
}
B673852:L673852:{c.instructions+=4;NFSU2_TR(0x673852);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x4ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B673855:{NFSU2_TR(0x673855);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B673856:{NFSU2_TR(0x673856);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B673857:{NFSU2_TR(0x673857);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L673871;}}
}
B673859:L673859:{c.instructions+=3;NFSU2_TR(0x673859);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67385c:{NFSU2_TR(0x67385c);
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
B67385e:{NFSU2_TR(0x67385e);
if(r1(R+518)){{goto L673871;}}
}
B673860:L673860:{c.instructions+=2;NFSU2_TR(0x673860);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B673861:{NFSU2_TR(0x673861);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x673866ull));
TAIL_STATIC(0x672440u,672);
}
B673866:L673866:{c.instructions+=3;NFSU2_TR(0x673866);
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
B673868:{NFSU2_TR(0x673868);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67386b:{NFSU2_TR(0x67386b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L673871;}}
}
B67386d:L67386d:{c.instructions+=2;NFSU2_TR(0x67386d);
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
B67386f:{NFSU2_TR(0x67386f);
{goto L673874;}
}
B673871:L673871:{c.instructions+=1;NFSU2_TR(0x673871);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B673874:L673874:{c.instructions+=3;NFSU2_TR(0x673874);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B673875:{NFSU2_TR(0x673875);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B673876:{NFSU2_TR(0x673876);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B673877:L673877:{c.instructions+=6;NFSU2_TR(0x673877);
__builtin_memmove((R+28),(R+28),4);
}
B673879:{NFSU2_TR(0x673879);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67387a:{NFSU2_TR(0x67387a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67387b:{NFSU2_TR(0x67387b);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67387d:{NFSU2_TR(0x67387d);
__builtin_memmove((R+24),(R+4),4);
}
B67387f:{NFSU2_TR(0x67387f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x673884ull));
TAIL_STATIC(0x645362u,645);
}
B673884:L673884:{c.instructions+=2;NFSU2_TR(0x673884);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B673886:{NFSU2_TR(0x673886);
if(r1(R+518)){{goto L673893;}}
}
B673888:L673888:{c.instructions+=2;NFSU2_TR(0x673888);
__builtin_memmove((R+4),(R+0),4);
}
B67388a:{NFSU2_TR(0x67388a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67388full));
TAIL_STATIC(0x672fbeu,672);
}
B67388f:L67388f:{c.instructions+=2;NFSU2_TR(0x67388f);
__builtin_memmove((R+28),(R+0),4);
}
B673891:{NFSU2_TR(0x673891);
{goto L673895;}
}
B673893:L673893:{c.instructions+=1;NFSU2_TR(0x673893);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B673895:L673895:{c.instructions+=2;NFSU2_TR(0x673895);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B673897:{NFSU2_TR(0x673897);
if(r1(R+518)){{goto L6738d8;}}
}
B673899:L673899:{c.instructions+=2;NFSU2_TR(0x673899);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B67389d:{NFSU2_TR(0x67389d);
if(r1(R+518)){{goto L6738ae;}}
}
B67389f:L67389f:{c.instructions+=3;NFSU2_TR(0x67389f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6738a2:{NFSU2_TR(0x6738a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6738a4:{NFSU2_TR(0x6738a4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6738a7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6738a7:L6738a7:{c.instructions+=3;NFSU2_TR(0x6738a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6738a9:{NFSU2_TR(0x6738a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6738ac:{NFSU2_TR(0x6738ac);
if(r1(R+518)){{goto L6738d8;}}
}
B6738ae:L6738ae:{c.instructions+=2;NFSU2_TR(0x6738ae);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6738b2:{NFSU2_TR(0x6738b2);
if(r1(R+518)){{goto L6738c3;}}
}
B6738b4:L6738b4:{c.instructions+=3;NFSU2_TR(0x6738b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6738b7:{NFSU2_TR(0x6738b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6738b9:{NFSU2_TR(0x6738b9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6738bcull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6738bc:L6738bc:{c.instructions+=3;NFSU2_TR(0x6738bc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6738be:{NFSU2_TR(0x6738be);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6738c1:{NFSU2_TR(0x6738c1);
if(r1(R+518)){{goto L6738d8;}}
}
B6738c3:L6738c3:{c.instructions+=2;NFSU2_TR(0x6738c3);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6738c7:{NFSU2_TR(0x6738c7);
if(r1(R+518)){{goto L6738dc;}}
}
B6738c9:L6738c9:{c.instructions+=3;NFSU2_TR(0x6738c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6738cc:{NFSU2_TR(0x6738cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6738ce:{NFSU2_TR(0x6738ce);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6738d1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6738d1:L6738d1:{c.instructions+=3;NFSU2_TR(0x6738d1);
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
B6738d3:{NFSU2_TR(0x6738d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6738d6:{NFSU2_TR(0x6738d6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6738dc;}}
}
B6738d8:L6738d8:{c.instructions+=2;NFSU2_TR(0x6738d8);
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
B6738da:{NFSU2_TR(0x6738da);
{goto L6738de;}
}
B6738dc:L6738dc:{c.instructions+=1;NFSU2_TR(0x6738dc);
__builtin_memmove((R+0),(R+28),4);
}
B6738de:L6738de:{c.instructions+=3;NFSU2_TR(0x6738de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6738df:{NFSU2_TR(0x6738df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6738e0:{NFSU2_TR(0x6738e0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6738e1:L6738e1:{c.instructions+=5;NFSU2_TR(0x6738e1);
__builtin_memmove((R+28),(R+28),4);
}
B6738e3:{NFSU2_TR(0x6738e3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6738e4:{NFSU2_TR(0x6738e4);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6738e6:{NFSU2_TR(0x6738e6);
__builtin_memmove((R+12),(R+4),4);
}
B6738e8:{NFSU2_TR(0x6738e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6738edull));
TAIL_STATIC(0x645362u,645);
}
B6738ed:L6738ed:{c.instructions+=2;NFSU2_TR(0x6738ed);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6738ef:{NFSU2_TR(0x6738ef);
if(r1(R+518)){{goto L6738fa;}}
}
B6738f1:L6738f1:{c.instructions+=2;NFSU2_TR(0x6738f1);
__builtin_memmove((R+4),(R+0),4);
}
B6738f3:{NFSU2_TR(0x6738f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6738f8ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x673057u);}goto L673057;}
}
B6738f8:L6738f8:{c.instructions+=1;NFSU2_TR(0x6738f8);
{goto L6738fc;}
}
B6738fa:L6738fa:{c.instructions+=1;NFSU2_TR(0x6738fa);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6738fc:L6738fc:{c.instructions+=2;NFSU2_TR(0x6738fc);
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
B6738fe:{NFSU2_TR(0x6738fe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L673902;}}
}
B673900:L673900:{c.instructions+=2;NFSU2_TR(0x673900);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B673901:{NFSU2_TR(0x673901);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B673902:L673902:{c.instructions+=6;NFSU2_TR(0x673902);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B673903:{NFSU2_TR(0x673903);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B673904:{NFSU2_TR(0x673904);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B673906:{NFSU2_TR(0x673906);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B673907:{NFSU2_TR(0x673907);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((R+24),(U+0),4);
}
B67390a:{NFSU2_TR(0x67390a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+28),(U+0),4);
}
B67390d:L67390d:{c.instructions+=1;NFSU2_TR(0x67390d);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L67390f;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67390du);}goto L67390d;}
}
B67390f:L67390f:{c.instructions+=8;NFSU2_TR(0x67390f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B673912:{NFSU2_TR(0x673912);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B673913:{NFSU2_TR(0x673913);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B673916:{NFSU2_TR(0x673916);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B673919:{NFSU2_TR(0x673919);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B67391a:{NFSU2_TR(0x67391a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67391d:{NFSU2_TR(0x67391d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B67391e:{NFSU2_TR(0x67391e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B67391f:L67391f:{c.instructions+=6;NFSU2_TR(0x67391f);
__builtin_memmove((R+28),(R+28),4);
}
B673921:{NFSU2_TR(0x673921);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B673922:{NFSU2_TR(0x673922);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B673923:{NFSU2_TR(0x673923);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B673925:{NFSU2_TR(0x673925);
__builtin_memmove((R+24),(R+4),4);
}
B673927:{NFSU2_TR(0x673927);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67392cull));
TAIL_STATIC(0x645362u,645);
}
B67392c:L67392c:{c.instructions+=2;NFSU2_TR(0x67392c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B67392e:{NFSU2_TR(0x67392e);
if(r1(R+518)){{goto L67393b;}}
}
B673930:L673930:{c.instructions+=2;NFSU2_TR(0x673930);
__builtin_memmove((R+4),(R+0),4);
}
B673932:{NFSU2_TR(0x673932);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x673937ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6730e8u);}goto L6730e8;}
}
B673937:L673937:{c.instructions+=2;NFSU2_TR(0x673937);
__builtin_memmove((R+28),(R+0),4);
}
B673939:{NFSU2_TR(0x673939);
{goto L67393d;}
}
B67393b:L67393b:{c.instructions+=1;NFSU2_TR(0x67393b);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B67393d:L67393d:{c.instructions+=2;NFSU2_TR(0x67393d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B67393f:{NFSU2_TR(0x67393f);
if(r1(R+518)){{goto L67396b;}}
}
B673941:L673941:{c.instructions+=2;NFSU2_TR(0x673941);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B673945:{NFSU2_TR(0x673945);
if(r1(R+518)){{goto L673956;}}
}
B673947:L673947:{c.instructions+=3;NFSU2_TR(0x673947);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67394a:{NFSU2_TR(0x67394a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B67394c:{NFSU2_TR(0x67394c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67394full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B67394f:L67394f:{c.instructions+=3;NFSU2_TR(0x67394f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B673951:{NFSU2_TR(0x673951);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B673954:{NFSU2_TR(0x673954);
if(r1(R+518)){{goto L67396b;}}
}
B673956:L673956:{c.instructions+=2;NFSU2_TR(0x673956);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B67395a:{NFSU2_TR(0x67395a);
if(r1(R+518)){{goto L67396f;}}
}
B67395c:L67395c:{c.instructions+=3;NFSU2_TR(0x67395c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67395f:{NFSU2_TR(0x67395f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B673961:{NFSU2_TR(0x673961);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x673964ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B673964:L673964:{c.instructions+=3;NFSU2_TR(0x673964);
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
B673966:{NFSU2_TR(0x673966);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B673969:{NFSU2_TR(0x673969);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L67396f;}}
}
B67396b:L67396b:{c.instructions+=2;NFSU2_TR(0x67396b);
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
B67396d:{NFSU2_TR(0x67396d);
{goto L673971;}
}
B67396f:L67396f:{c.instructions+=1;NFSU2_TR(0x67396f);
__builtin_memmove((R+0),(R+28),4);
}
B673971:L673971:{c.instructions+=3;NFSU2_TR(0x673971);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B673972:{NFSU2_TR(0x673972);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B673973:{NFSU2_TR(0x673973);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B673974:L673974:{c.instructions+=27;NFSU2_TR(0x673974);
{u32 ea_=u32(u32(7889632u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67397a:{NFSU2_TR(0x67397a);
__builtin_memmove((R+0),(R+4),4);
}
B67397c:{NFSU2_TR(0x67397c);
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
B67397e:{NFSU2_TR(0x67397e);
{u32 ea_=u32(r4(R+0)+u32(176u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B673984:{NFSU2_TR(0x673984);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B673986:{NFSU2_TR(0x673986);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B673989:{NFSU2_TR(0x673989);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67398c:{NFSU2_TR(0x67398c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67398f:{NFSU2_TR(0x67398f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B673992:{NFSU2_TR(0x673992);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B673995:{NFSU2_TR(0x673995);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B673998:{NFSU2_TR(0x673998);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67399b:{NFSU2_TR(0x67399b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67399e:{NFSU2_TR(0x67399e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6739a1:{NFSU2_TR(0x6739a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6739a4:{NFSU2_TR(0x6739a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6739aa:{NFSU2_TR(0x6739aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6739b0:{NFSU2_TR(0x6739b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6739b6:{NFSU2_TR(0x6739b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6739bc:{NFSU2_TR(0x6739bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x94ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6739c2:{NFSU2_TR(0x6739c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6739c8:{NFSU2_TR(0x6739c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6739ce:{NFSU2_TR(0x6739ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6739d4:{NFSU2_TR(0x6739d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa4ull))));
w4(U+4,u32(0x7ff00000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6739de:{NFSU2_TR(0x6739de);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6739e4:{NFSU2_TR(0x6739e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xacull))));
w4(U+4,u32(0xfff00000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6739ee:{NFSU2_TR(0x6739ee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6739ef:L6739ef:{c.instructions+=6;NFSU2_TR(0x6739ef);
__builtin_memmove((R+28),(R+28),4);
}
B6739f1:{NFSU2_TR(0x6739f1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6739f2:{NFSU2_TR(0x6739f2);
__builtin_memmove((R+20),(R+16),4);
}
B6739f4:{NFSU2_TR(0x6739f4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6739f5:{NFSU2_TR(0x6739f5);
__builtin_memmove((R+24),(R+4),4);
}
B6739f7:{NFSU2_TR(0x6739f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6739fcull));
TAIL_STATIC(0x6996f4u,699);
}
B6739fc:L6739fc:{c.instructions+=2;NFSU2_TR(0x6739fc);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B673a00:{NFSU2_TR(0x673a00);
if(r1(R+518)){{goto L673a08;}}
}
B673a02:L673a02:{c.instructions+=2;NFSU2_TR(0x673a02);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B673a03:{NFSU2_TR(0x673a03);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x673a08ull));
TAIL_STATIC(0x699344u,699);
}
B673a08:L673a08:{c.instructions+=4;NFSU2_TR(0x673a08);
__builtin_memmove((R+0),(R+24),4);
}
B673a0a:{NFSU2_TR(0x673a0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B673a0b:{NFSU2_TR(0x673a0b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B673a0c:{NFSU2_TR(0x673a0c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B673a0f:L673a0f:{c.instructions+=9;NFSU2_TR(0x673a0f);
__builtin_memmove((R+28),(R+28),4);
}
B673a11:{NFSU2_TR(0x673a11);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B673a12:{NFSU2_TR(0x673a12);
__builtin_memmove((R+20),(R+16),4);
}
B673a14:{NFSU2_TR(0x673a14);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B673a15:{NFSU2_TR(0x673a15);
__builtin_memmove((R+12),(R+4),4);
}
B673a17:{NFSU2_TR(0x673a17);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B673a1d:{NFSU2_TR(0x673a1d);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B673a20:{NFSU2_TR(0x673a20);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B673a21:{NFSU2_TR(0x673a21);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L673a66;}}
}
B673a23:L673a23:{c.instructions+=2;NFSU2_TR(0x673a23);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B673a25:{NFSU2_TR(0x673a25);
if(r1(R+518)){{goto L673a2c;}}
}
B673a27:L673a27:{c.instructions+=2;NFSU2_TR(0x673a27);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B673a2a:{NFSU2_TR(0x673a2a);
{goto L673a33;}
}
B673a2c:L673a2c:{c.instructions+=3;NFSU2_TR(0x673a2c);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B673a2e:{NFSU2_TR(0x673a2e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B673a2f:{NFSU2_TR(0x673a2f);
{goto L673a33;}
}
B673a31:L673a31:{c.instructions+=1;NFSU2_TR(0x673a31);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+24))));
}
B673a33:L673a33:{c.instructions+=2;NFSU2_TR(0x673a33);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B673a36:{NFSU2_TR(0x673a36);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x673a31u);}goto L673a31;}}
}
B673a38:L673a38:{c.instructions+=4;NFSU2_TR(0x673a38);
__builtin_memmove((R+0),(R+24),4);
}
B673a3a:{NFSU2_TR(0x673a3a);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B673a3d:{NFSU2_TR(0x673a3d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B673a3e:{NFSU2_TR(0x673a3e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x673a43ull));
TAIL_STATIC(0x575620u,575);
}
B673a43:L673a43:{c.instructions+=4;NFSU2_TR(0x673a43);
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
B673a45:{NFSU2_TR(0x673a45);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B673a46:{NFSU2_TR(0x673a46);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B673a49:{NFSU2_TR(0x673a49);
if(r1(R+518)){{goto L673a6c;}}
}
B673a4b:L673a4b:{c.instructions+=4;NFSU2_TR(0x673a4b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B673a4c:{NFSU2_TR(0x673a4c);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x90ull))));
__builtin_memmove((R+28),(U+0),4);
}
B673a52:{NFSU2_TR(0x673a52);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B673a54:{NFSU2_TR(0x673a54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x673a59ull));
TAIL_STATIC(0x575630u,575);
}
B673a59:L673a59:{c.instructions+=5;NFSU2_TR(0x673a59);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B673a5c:{NFSU2_TR(0x673a5c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B673a5d:{NFSU2_TR(0x673a5d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B673a5f:{NFSU2_TR(0x673a5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x94ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B673a65:{NFSU2_TR(0x673a65);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B673a66:L673a66:{c.instructions+=1;NFSU2_TR(0x673a66);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B673a6c:L673a6c:{c.instructions+=4;NFSU2_TR(0x673a6c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B673a6d:{NFSU2_TR(0x673a6d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B673a6e:{NFSU2_TR(0x673a6e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B673a6f:{NFSU2_TR(0x673a6f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B673a72:L673a72:{c.instructions+=12;NFSU2_TR(0x673a72);
__builtin_memmove((R+28),(R+28),4);
}
B673a74:{NFSU2_TR(0x673a74);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B673a75:{NFSU2_TR(0x673a75);
__builtin_memmove((R+20),(R+16),4);
}
B673a77:{NFSU2_TR(0x673a77);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B673a78:{NFSU2_TR(0x673a78);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B673a7b:{NFSU2_TR(0x673a7b);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B673a7c:{NFSU2_TR(0x673a7c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B673a7d:{NFSU2_TR(0x673a7d);
__builtin_memmove((R+24),(R+4),4);
}
B673a7f:{NFSU2_TR(0x673a7f);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B673a80:{NFSU2_TR(0x673a80);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
}
B673a86:{NFSU2_TR(0x673a86);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B673a87:{NFSU2_TR(0x673a87);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L673ac7;}}
}
B673a89:L673a89:{c.instructions+=4;NFSU2_TR(0x673a89);
w4(R+0,u32(0x2000ull));
}
B673a8e:{NFSU2_TR(0x673a8e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
}
B673a90:{NFSU2_TR(0x673a90);
__builtin_memmove((R+28),(R+12),4);
}
B673a92:{NFSU2_TR(0x673a92);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L673a96;}}
}
B673a94:L673a94:{c.instructions+=1;NFSU2_TR(0x673a94);
__builtin_memmove((R+28),(R+0),4);
}
B673a96:L673a96:{c.instructions+=4;NFSU2_TR(0x673a96);
__builtin_memmove((R+0),(R+28),4);
}
B673a98:{NFSU2_TR(0x673a98);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B673a9b:{NFSU2_TR(0x673a9b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B673a9c:{NFSU2_TR(0x673a9c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x673aa1ull));
TAIL_STATIC(0x575620u,575);
}
B673aa1:L673aa1:{c.instructions+=3;NFSU2_TR(0x673aa1);
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
B673aa3:{NFSU2_TR(0x673aa3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B673aa4:{NFSU2_TR(0x673aa4);
if(r1(R+518)){{goto L673aec;}}
}
B673aa6:L673aa6:{c.instructions+=8;NFSU2_TR(0x673aa6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B673aac:{NFSU2_TR(0x673aac);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B673aae:{NFSU2_TR(0x673aae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B673ab4:{NFSU2_TR(0x673ab4);
w4(R+4,u32(0-u32(r4(R+4))));
}
B673ab6:{NFSU2_TR(0x673ab6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B673ab9:{NFSU2_TR(0x673ab9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B673abf:{NFSU2_TR(0x673abf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B673ac5:{NFSU2_TR(0x673ac5);
{goto L673ad8;}
}
B673ac7:L673ac7:{c.instructions+=4;NFSU2_TR(0x673ac7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B673acd:{NFSU2_TR(0x673acd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+0)),r4(U+0));
}
B673acf:{NFSU2_TR(0x673acf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B673ad5:{NFSU2_TR(0x673ad5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B673ad8:L673ad8:{c.instructions+=5;NFSU2_TR(0x673ad8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+12))));
s4(u32(r4(U+0)),r4(U+4));
}
B673ade:{NFSU2_TR(0x673ade);
__builtin_memmove((R+4),(R+12),4);
}
B673ae0:{NFSU2_TR(0x673ae0);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B673ae3:{NFSU2_TR(0x673ae3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B673ae9:{NFSU2_TR(0x673ae9);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x8ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B673aec:L673aec:{c.instructions+=5;NFSU2_TR(0x673aec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B673aed:{NFSU2_TR(0x673aed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B673aee:{NFSU2_TR(0x673aee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B673aef:{NFSU2_TR(0x673aef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B673af0:{NFSU2_TR(0x673af0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B673af3:L673af3:{c.instructions+=6;NFSU2_TR(0x673af3);
__builtin_memmove((R+28),(R+28),4);
}
B673af5:{NFSU2_TR(0x673af5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B673af6:{NFSU2_TR(0x673af6);
__builtin_memmove((R+20),(R+16),4);
}
B673af8:{NFSU2_TR(0x673af8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B673afb:{NFSU2_TR(0x673afb);
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
B673afd:{NFSU2_TR(0x673afd);
if(r1(R+518)){{goto L673b28;}}
}
B673aff:L673aff:{c.instructions+=6;NFSU2_TR(0x673aff);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B673b02:{NFSU2_TR(0x673b02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B673b04:{NFSU2_TR(0x673b04);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B673b0a:{NFSU2_TR(0x673b0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B673b0d:{NFSU2_TR(0x673b0d);
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
B673b0f:{NFSU2_TR(0x673b0f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L673b19;}}
}
B673b11:L673b11:{c.instructions+=2;NFSU2_TR(0x673b11);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B673b17:{NFSU2_TR(0x673b17);
{goto L673b28;}
}
B673b19:L673b19:{c.instructions+=4;NFSU2_TR(0x673b19);
w4(R+0,u32(0-u32(r4(R+0))));
}
B673b1b:{NFSU2_TR(0x673b1b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B673b1c:{NFSU2_TR(0x673b1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B673b22:{NFSU2_TR(0x673b22);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x673b27ull));
TAIL_STATIC(0x575630u,575);
}
B673b27:L673b27:{c.instructions+=1;NFSU2_TR(0x673b27);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B673b28:L673b28:{c.instructions+=2;NFSU2_TR(0x673b28);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B673b29:{NFSU2_TR(0x673b29);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B673b2c:L673b2c:{c.instructions+=6;NFSU2_TR(0x673b2c);
__builtin_memmove((R+28),(R+28),4);
}
B673b2e:{NFSU2_TR(0x673b2e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B673b2f:{NFSU2_TR(0x673b2f);
__builtin_memmove((R+20),(R+16),4);
}
B673b31:{NFSU2_TR(0x673b31);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B673b34:{NFSU2_TR(0x673b34);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B673b36:{NFSU2_TR(0x673b36);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L673b42;}}
}
B673b38:L673b38:{c.instructions+=3;NFSU2_TR(0x673b38);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B673b39:{NFSU2_TR(0x673b39);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B673b3c:{NFSU2_TR(0x673b3c);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B673b3f:L673b3f:{c.instructions+=1;NFSU2_TR(0x673b3f);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L673b41;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x673b3fu);}goto L673b3f;}
}
B673b41:L673b41:{c.instructions+=1;NFSU2_TR(0x673b41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B673b42:L673b42:{c.instructions+=3;NFSU2_TR(0x673b42);
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
B673b44:{NFSU2_TR(0x673b44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B673b45:{NFSU2_TR(0x673b45);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B673b48:L673b48:{c.instructions+=14;NFSU2_TR(0x673b48);
__builtin_memmove((R+28),(R+28),4);
}
B673b4a:{NFSU2_TR(0x673b4a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B673b4b:{NFSU2_TR(0x673b4b);
__builtin_memmove((R+20),(R+16),4);
}
B673b4d:{NFSU2_TR(0x673b4d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B673b50:{NFSU2_TR(0x673b50);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B673b53:{NFSU2_TR(0x673b53);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B673b54:{NFSU2_TR(0x673b54);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B673b57:{NFSU2_TR(0x673b57);
__builtin_memmove((R+8),(R+0),4);
}
B673b59:{NFSU2_TR(0x673b59);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B673b5c:{NFSU2_TR(0x673b5c);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B673b5e:{NFSU2_TR(0x673b5e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B673b5f:{NFSU2_TR(0x673b5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B673b62:{NFSU2_TR(0x673b62);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B673b65:{NFSU2_TR(0x673b65);
if(r1(R+518)){{goto L673c99;}}
}
B673b6b:L673b6b:{c.instructions+=2;NFSU2_TR(0x673b6b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B673b6f:{NFSU2_TR(0x673b6f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L673ba8;}}
}
B673b71:L673b71:{c.instructions+=2;NFSU2_TR(0x673b71);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x15ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B673b75:{NFSU2_TR(0x673b75);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L673ba8;}}
}
B673b77:L673b77:{c.instructions+=4;NFSU2_TR(0x673b77);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B673b7a:{NFSU2_TR(0x673b7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B673b81:{NFSU2_TR(0x673b81);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B673b84:{NFSU2_TR(0x673b84);
__builtin_memmove((R+12),(R+0),4);
}
B673b86:L673b86:{c.instructions+=9;NFSU2_TR(0x673b86);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B673b89:{NFSU2_TR(0x673b89);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B673b8c:{NFSU2_TR(0x673b8c);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x3ull))));
}
B673b8f:{NFSU2_TR(0x673b8f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r4(U+0))));
}
B673b92:{NFSU2_TR(0x673b92);
__builtin_memmove((R+28),(R+12),4);
}
B673b94:{NFSU2_TR(0x673b94);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
w8(U+8,u64(s64(s32(r4(R+28)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+28,u32(r8(U+24)));
}
B673b98:{NFSU2_TR(0x673b98);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B673b9b:{NFSU2_TR(0x673b9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B673b9e:{NFSU2_TR(0x673b9e);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L673bae;}}
}
B673ba0:L673ba0:{c.instructions+=3;NFSU2_TR(0x673ba0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B673ba3:{NFSU2_TR(0x673ba3);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B673ba6:{NFSU2_TR(0x673ba6);
{goto L673bb0;}
}
B673ba8:L673ba8:{c.instructions+=2;NFSU2_TR(0x673ba8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B673bac:{NFSU2_TR(0x673bac);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x673b86u);}goto L673b86;}
}
B673bae:L673bae:{c.instructions+=1;NFSU2_TR(0x673bae);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B673bb0:L673bb0:{c.instructions+=2;NFSU2_TR(0x673bb0);
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
B673bb2:{NFSU2_TR(0x673bb2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L673bbe;}}
}
B673bb4:L673bb4:{c.instructions+=2;NFSU2_TR(0x673bb4);
w4(R+0,u32(0x80004005ull));
}
B673bb9:{NFSU2_TR(0x673bb9);
{goto L673ca4;}
}
B673bbe:L673bbe:{c.instructions+=7;NFSU2_TR(0x673bbe);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B673bc2:{NFSU2_TR(0x673bc2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B673bc3:{NFSU2_TR(0x673bc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B673bc6:{NFSU2_TR(0x673bc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B673bc9:{NFSU2_TR(0x673bc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B673bcc:{NFSU2_TR(0x673bcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B673bcf:{NFSU2_TR(0x673bcf);
if(r1(R+518)){{goto L673bd4;}}
}
B673bd1:L673bd1:{c.instructions+=1;NFSU2_TR(0x673bd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B673bd4:L673bd4:{c.instructions+=3;NFSU2_TR(0x673bd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B673bd7:{NFSU2_TR(0x673bd7);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B673bd9:{NFSU2_TR(0x673bd9);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L673c8b;}}
}
B673bdf:L673bdf:{c.instructions+=5;NFSU2_TR(0x673bdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B673be2:{NFSU2_TR(0x673be2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B673be6:{NFSU2_TR(0x673be6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B673bea:{NFSU2_TR(0x673bea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B673bed:{NFSU2_TR(0x673bed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B673bf0:L673bf0:{c.instructions+=3;NFSU2_TR(0x673bf0);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B673bf2:{NFSU2_TR(0x673bf2);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B673bf5:{NFSU2_TR(0x673bf5);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L673c72;}}
}
B673bf7:L673bf7:{c.instructions+=2;NFSU2_TR(0x673bf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B673bfa:{NFSU2_TR(0x673bfa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B673bfd:L673bfd:{c.instructions+=2;NFSU2_TR(0x673bfd);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B673c01:{NFSU2_TR(0x673c01);
if(r1(R+518)){{goto L673c0a;}}
}
B673c03:L673c03:{c.instructions+=3;NFSU2_TR(0x673c03);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B673c06:{NFSU2_TR(0x673c06);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B673c08:{NFSU2_TR(0x673c08);
{goto L673c15;}
}
B673c0a:L673c0a:{c.instructions+=4;NFSU2_TR(0x673c0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B673c0d:{NFSU2_TR(0x673c0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B673c10:{NFSU2_TR(0x673c10);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B673c12:{NFSU2_TR(0x673c12);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B673c15:L673c15:{c.instructions+=4;NFSU2_TR(0x673c15);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B673c18:{NFSU2_TR(0x673c18);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B673c1b:{NFSU2_TR(0x673c1b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B673c1e:{NFSU2_TR(0x673c1e);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L673c28;}}
}
B673c20:L673c20:{c.instructions+=3;NFSU2_TR(0x673c20);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B673c23:{NFSU2_TR(0x673c23);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B673c26:{NFSU2_TR(0x673c26);
{goto L673c2a;}
}
B673c28:L673c28:{c.instructions+=1;NFSU2_TR(0x673c28);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B673c2a:L673c2a:{c.instructions+=2;NFSU2_TR(0x673c2a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B673c2c:{NFSU2_TR(0x673c2c);
if(r1(R+518)){{goto L673c63;}}
}
B673c2e:L673c2e:{c.instructions+=19;NFSU2_TR(0x673c2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B673c31:{NFSU2_TR(0x673c31);
__builtin_memmove((R+4),(R+28),4);
}
B673c33:{NFSU2_TR(0x673c33);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B673c36:{NFSU2_TR(0x673c36);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B673c39:{NFSU2_TR(0x673c39);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B673c3c:{NFSU2_TR(0x673c3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B673c3f:{NFSU2_TR(0x673c3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B673c42:{NFSU2_TR(0x673c42);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B673c45:{NFSU2_TR(0x673c45);
__builtin_memmove((R+24),(R+28),4);
}
B673c47:{NFSU2_TR(0x673c47);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x3ull))));
}
B673c4a:{NFSU2_TR(0x673c4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B673c4d:{NFSU2_TR(0x673c4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B673c50:{NFSU2_TR(0x673c50);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B673c53:{NFSU2_TR(0x673c53);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B673c55:{NFSU2_TR(0x673c55);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B673c58:{NFSU2_TR(0x673c58);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B673c5a:{NFSU2_TR(0x673c5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B673c5d:{NFSU2_TR(0x673c5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B673c60:{NFSU2_TR(0x673c60);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B673c63:L673c63:{c.instructions+=6;NFSU2_TR(0x673c63);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B673c66:{NFSU2_TR(0x673c66);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B673c69:{NFSU2_TR(0x673c69);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B673c6c:{NFSU2_TR(0x673c6c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B673c6d:{NFSU2_TR(0x673c6d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B673c70:{NFSU2_TR(0x673c70);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x673bfdu);}goto L673bfd;}}
}
B673c72:L673c72:{c.instructions+=6;NFSU2_TR(0x673c72);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B673c75:{NFSU2_TR(0x673c75);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B673c79:{NFSU2_TR(0x673c79);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B673c7c:{NFSU2_TR(0x673c7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+12))));
s4(u32(r4(U+0)),r4(U+4));
}
B673c7f:{NFSU2_TR(0x673c7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B673c82:{NFSU2_TR(0x673c82);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x673bf0u);}goto L673bf0;}}
}
B673c88:L673c88:{c.instructions+=1;NFSU2_TR(0x673c88);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B673c8b:L673c8b:{c.instructions+=6;NFSU2_TR(0x673c8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B673c8e:{NFSU2_TR(0x673c8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B673c91:{NFSU2_TR(0x673c91);
__builtin_memmove((R+4),(R+28),4);
}
B673c93:{NFSU2_TR(0x673c93);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B673c96:{NFSU2_TR(0x673c96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+4))));
s4(u32(r4(R+0)),r4(U+0));
}
B673c98:{NFSU2_TR(0x673c98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B673c99:L673c99:{c.instructions+=3;NFSU2_TR(0x673c99);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B673c9c:{NFSU2_TR(0x673c9c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B673c9e:{NFSU2_TR(0x673c9e);
if(r1(R+518)){{goto L673ca2;}}
}
B673ca0:L673ca0:{c.instructions+=1;NFSU2_TR(0x673ca0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B673ca2:L673ca2:{c.instructions+=1;NFSU2_TR(0x673ca2);
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
B673ca4:L673ca4:{c.instructions+=4;NFSU2_TR(0x673ca4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B673ca5:{NFSU2_TR(0x673ca5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B673ca6:{NFSU2_TR(0x673ca6);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B673ca7:{NFSU2_TR(0x673ca7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B673caa:L673caa:{c.instructions+=14;NFSU2_TR(0x673caa);
__builtin_memmove((R+28),(R+28),4);
}
B673cac:{NFSU2_TR(0x673cac);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B673cad:{NFSU2_TR(0x673cad);
__builtin_memmove((R+20),(R+16),4);
}
B673caf:{NFSU2_TR(0x673caf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B673cb0:{NFSU2_TR(0x673cb0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B673cb1:{NFSU2_TR(0x673cb1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B673cb2:{NFSU2_TR(0x673cb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B673cb5:{NFSU2_TR(0x673cb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B673cb8:{NFSU2_TR(0x673cb8);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B673cba:{NFSU2_TR(0x673cba);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B673cbc:{NFSU2_TR(0x673cbc);
__builtin_memmove((R+12),(R+4),4);
}
B673cbe:{NFSU2_TR(0x673cbe);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B673cbf:{NFSU2_TR(0x673cbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B673cc2:{NFSU2_TR(0x673cc2);
if(r1(R+518)){{goto L673de4;}}
}
B673cc8:L673cc8:{c.instructions+=2;NFSU2_TR(0x673cc8);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B673ccb:{NFSU2_TR(0x673ccb);
if(r1(R+518)){{goto L673de4;}}
}
B673cd1:L673cd1:{c.instructions+=2;NFSU2_TR(0x673cd1);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B673cd4:{NFSU2_TR(0x673cd4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L673de4;}}
}
B673cda:L673cda:{c.instructions+=3;NFSU2_TR(0x673cda);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B673cdc:{NFSU2_TR(0x673cdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B673cdf:{NFSU2_TR(0x673cdf);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L673d0b;}}
}
B673ce1:L673ce1:{c.instructions+=2;NFSU2_TR(0x673ce1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B673ce4:{NFSU2_TR(0x673ce4);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B673ce7:L673ce7:{c.instructions+=9;NFSU2_TR(0x673ce7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B673cea:{NFSU2_TR(0x673cea);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B673ced:{NFSU2_TR(0x673ced);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B673cf0:{NFSU2_TR(0x673cf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B673cf3:{NFSU2_TR(0x673cf3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B673cf6:{NFSU2_TR(0x673cf6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B673cf9:{NFSU2_TR(0x673cf9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B673cfa:{NFSU2_TR(0x673cfa);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B673cfd:{NFSU2_TR(0x673cfd);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L673d02;}}
}
B673cff:L673cff:{c.instructions+=1;NFSU2_TR(0x673cff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B673d02:L673d02:{c.instructions+=4;NFSU2_TR(0x673d02);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B673d03:{NFSU2_TR(0x673d03);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B673d06:{NFSU2_TR(0x673d06);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B673d09:{NFSU2_TR(0x673d09);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x673ce7u);}goto L673ce7;}}
}
B673d0b:L673d0b:{c.instructions+=6;NFSU2_TR(0x673d0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B673d0e:{NFSU2_TR(0x673d0e);
__builtin_memmove((R+4),gp(0x8a5d00),4);
}
B673d14:{NFSU2_TR(0x673d14);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B673d17:{NFSU2_TR(0x673d17);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B673d19:{NFSU2_TR(0x673d19);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B673d1a:{NFSU2_TR(0x673d1a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x673d1full));
TAIL_STATIC(0x671ccbu,671);
}
B673d1f:L673d1f:{c.instructions+=3;NFSU2_TR(0x673d1f);
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
B673d21:{NFSU2_TR(0x673d21);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B673d24:{NFSU2_TR(0x673d24);
if(r1(R+518)){{goto L673d41;}}
}
B673d26:L673d26:{c.instructions+=6;NFSU2_TR(0x673d26);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B673d29:{NFSU2_TR(0x673d29);
__builtin_memmove((R+4),gp(0x8a5d00),4);
}
B673d2f:{NFSU2_TR(0x673d2f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B673d32:{NFSU2_TR(0x673d32);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B673d34:{NFSU2_TR(0x673d34);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B673d35:{NFSU2_TR(0x673d35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x673d3aull));
TAIL_STATIC(0x671ccbu,671);
}
B673d3a:L673d3a:{c.instructions+=3;NFSU2_TR(0x673d3a);
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
B673d3c:{NFSU2_TR(0x673d3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B673d3f:{NFSU2_TR(0x673d3f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L673d4b;}}
}
B673d41:L673d41:{c.instructions+=2;NFSU2_TR(0x673d41);
w4(R+0,u32(0x8007000eull));
}
B673d46:{NFSU2_TR(0x673d46);
{goto L673de6;}
}
B673d4b:L673d4b:{c.instructions+=7;NFSU2_TR(0x673d4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B673d4e:{NFSU2_TR(0x673d4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B673d51:{NFSU2_TR(0x673d51);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B673d54:{NFSU2_TR(0x673d54);
__builtin_memmove((R+8),(R+4),4);
}
B673d56:{NFSU2_TR(0x673d56);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B673d59:{NFSU2_TR(0x673d59);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B673d5d:{NFSU2_TR(0x673d5d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B673d5f:L673d5f:{c.instructions+=1;NFSU2_TR(0x673d5f);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L673d61;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x673d5fu);}goto L673d5f;}
}
B673d61:L673d61:{c.instructions+=2;NFSU2_TR(0x673d61);
__builtin_memmove((R+4),(R+8),4);
}
B673d63:{NFSU2_TR(0x673d63);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B673d66:L673d66:{c.instructions+=1;NFSU2_TR(0x673d66);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L673d68;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x673d66u);}goto L673d66;}
}
B673d68:L673d68:{c.instructions+=6;NFSU2_TR(0x673d68);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B673d6b:{NFSU2_TR(0x673d6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B673d6e:{NFSU2_TR(0x673d6e);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B673d71:{NFSU2_TR(0x673d71);
__builtin_memmove((R+8),(R+4),4);
}
B673d73:{NFSU2_TR(0x673d73);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B673d76:{NFSU2_TR(0x673d76);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B673d78:L673d78:{c.instructions+=1;NFSU2_TR(0x673d78);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L673d7a;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x673d78u);}goto L673d78;}
}
B673d7a:L673d7a:{c.instructions+=2;NFSU2_TR(0x673d7a);
__builtin_memmove((R+4),(R+8),4);
}
B673d7c:{NFSU2_TR(0x673d7c);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B673d7f:L673d7f:{c.instructions+=1;NFSU2_TR(0x673d7f);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L673d81;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x673d7fu);}goto L673d7f;}
}
B673d81:L673d81:{c.instructions+=4;NFSU2_TR(0x673d81);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B673d85:{NFSU2_TR(0x673d85);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B673d88:{NFSU2_TR(0x673d88);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B673d8b:{NFSU2_TR(0x673d8b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L673de4;}}
}
B673d8d:L673d8d:{c.instructions+=2;NFSU2_TR(0x673d8d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B673d8f:{NFSU2_TR(0x673d8f);
if(r1(R+518)){{goto L673de4;}}
}
B673d91:L673d91:{c.instructions+=12;NFSU2_TR(0x673d91);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B673d94:{NFSU2_TR(0x673d94);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B673d97:{NFSU2_TR(0x673d97);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B673d9a:{NFSU2_TR(0x673d9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B673d9d:{NFSU2_TR(0x673d9d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B673da0:{NFSU2_TR(0x673da0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B673da3:{NFSU2_TR(0x673da3);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B673da6:{NFSU2_TR(0x673da6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B673da9:{NFSU2_TR(0x673da9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B673dac:{NFSU2_TR(0x673dac);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B673daf:{NFSU2_TR(0x673daf);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x80ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B673db3:{NFSU2_TR(0x673db3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L673dd6;}}
}
B673db5:L673db5:{c.instructions+=11;NFSU2_TR(0x673db5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B673db8:{NFSU2_TR(0x673db8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B673dbb:{NFSU2_TR(0x673dbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B673dbe:{NFSU2_TR(0x673dbe);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x10ull))));
}
B673dc1:{NFSU2_TR(0x673dc1);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B673dc4:{NFSU2_TR(0x673dc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B673dc7:{NFSU2_TR(0x673dc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B673dca:{NFSU2_TR(0x673dca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B673dcd:{NFSU2_TR(0x673dcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B673dd0:{NFSU2_TR(0x673dd0);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x10ull))));
}
B673dd3:{NFSU2_TR(0x673dd3);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B673dd6:L673dd6:{c.instructions+=5;NFSU2_TR(0x673dd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B673dd9:{NFSU2_TR(0x673dd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B673ddc:{NFSU2_TR(0x673ddc);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B673ddf:{NFSU2_TR(0x673ddf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B673de2:{NFSU2_TR(0x673de2);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x673d8du);}goto L673d8d;}}
}
B673de4:L673de4:{c.instructions+=1;NFSU2_TR(0x673de4);
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
B673de6:L673de6:{c.instructions+=5;NFSU2_TR(0x673de6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B673de7:{NFSU2_TR(0x673de7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B673de8:{NFSU2_TR(0x673de8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B673de9:{NFSU2_TR(0x673de9);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B673dea:{NFSU2_TR(0x673dea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B673ded:L673ded:{c.instructions+=27;NFSU2_TR(0x673ded);
__builtin_memmove((R+28),(R+28),4);
}
B673def:{NFSU2_TR(0x673def);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B673df0:{NFSU2_TR(0x673df0);
__builtin_memmove((R+20),(R+16),4);
}
B673df2:{NFSU2_TR(0x673df2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B673df5:{NFSU2_TR(0x673df5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B673df8:{NFSU2_TR(0x673df8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B673dfb:{NFSU2_TR(0x673dfb);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B673dfd:{NFSU2_TR(0x673dfd);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B673dff:{NFSU2_TR(0x673dff);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B673e00:{NFSU2_TR(0x673e00);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B673e01:{NFSU2_TR(0x673e01);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B673e04:{NFSU2_TR(0x673e04);
{u32 ea_=u32(r4(R+20)+u32(4294967264u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B673e07:{NFSU2_TR(0x673e07);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B673e08:{NFSU2_TR(0x673e08);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B673e0a:{NFSU2_TR(0x673e0a);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B673e0c:{NFSU2_TR(0x673e0c);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B673e0f:{NFSU2_TR(0x673e0f);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B673e12:{NFSU2_TR(0x673e12);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B673e14:{NFSU2_TR(0x673e14);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B673e17:{NFSU2_TR(0x673e17);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B673e1a:{NFSU2_TR(0x673e1a);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B673e1d:{NFSU2_TR(0x673e1d);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B673e20:{NFSU2_TR(0x673e20);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B673e23:{NFSU2_TR(0x673e23);
{u32 ea_=u32(r4(R+4)+u32(160u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B673e29:{NFSU2_TR(0x673e29);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B673e2b:{NFSU2_TR(0x673e2b);
{u32 ea_=u32(r4(R+4)+u32(168u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B673e31:{NFSU2_TR(0x673e31);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B673e34:L673e34:{c.instructions+=6;NFSU2_TR(0x673e34);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B673e35:{NFSU2_TR(0x673e35);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffe0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B673e39:{NFSU2_TR(0x673e39);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B673e3b:{NFSU2_TR(0x673e3b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B673e3c:{NFSU2_TR(0x673e3c);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B673e3f:{NFSU2_TR(0x673e3f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x673e44ull));
TAIL_STATIC(0x75dc60u,75d);
}
B673e44:L673e44:{c.instructions+=4;NFSU2_TR(0x673e44);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B673e46:{NFSU2_TR(0x673e46);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B673e47:{NFSU2_TR(0x673e47);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B673e48:{NFSU2_TR(0x673e48);
if(r1(R+518)){{goto L673e54;}}
}
B673e4a:L673e4a:{c.instructions+=2;NFSU2_TR(0x673e4a);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(u8(0x40ull))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B673e4e:{NFSU2_TR(0x673e4e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L673e7c;}}
}
B673e50:L673e50:{c.instructions+=2;NFSU2_TR(0x673e50);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B673e52:{NFSU2_TR(0x673e52);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B673e54:L673e54:{c.instructions+=5;NFSU2_TR(0x673e54);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B673e56:{NFSU2_TR(0x673e56);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B673e58:{NFSU2_TR(0x673e58);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B673e5a:{NFSU2_TR(0x673e5a);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B673e5d:{NFSU2_TR(0x673e5d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L673e63;}}
}
B673e5f:L673e5f:{c.instructions+=2;NFSU2_TR(0x673e5f);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B673e61:{NFSU2_TR(0x673e61);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B673e63:L673e63:{c.instructions+=5;NFSU2_TR(0x673e63);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B673e66:{NFSU2_TR(0x673e66);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B673e68:{NFSU2_TR(0x673e68);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B673e6a:{NFSU2_TR(0x673e6a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B673e6d:{NFSU2_TR(0x673e6d);
if(r1(R+514)){{goto L673e74;}}
}
B673e6f:L673e6f:{c.instructions+=2;NFSU2_TR(0x673e6f);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B673e71:{NFSU2_TR(0x673e71);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B673e74:L673e74:{c.instructions+=3;NFSU2_TR(0x673e74);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B673e75:{NFSU2_TR(0x673e75);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B673e78:{NFSU2_TR(0x673e78);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x673e34u);}goto L673e34;}}
}
B673e7a:L673e7a:{c.instructions+=1;NFSU2_TR(0x673e7a);
{goto L673e89;}
}
B673e7c:L673e7c:{c.instructions+=5;NFSU2_TR(0x673e7c);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffe0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B673e80:{NFSU2_TR(0x673e80);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B673e82:{NFSU2_TR(0x673e82);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B673e84:{NFSU2_TR(0x673e84);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B673e86:{NFSU2_TR(0x673e86);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B673e89:L673e89:{c.instructions+=5;NFSU2_TR(0x673e89);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B673e8a:{NFSU2_TR(0x673e8a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B673e8b:{NFSU2_TR(0x673e8b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B673e8c:{NFSU2_TR(0x673e8c);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B673e8d:{NFSU2_TR(0x673e8d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B673e90:L673e90:{c.instructions+=15;NFSU2_TR(0x673e90);
__builtin_memmove((R+28),(R+28),4);
}
B673e92:{NFSU2_TR(0x673e92);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B673e93:{NFSU2_TR(0x673e93);
__builtin_memmove((R+20),(R+16),4);
}
B673e95:{NFSU2_TR(0x673e95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x54ull))));
}
B673e98:{NFSU2_TR(0x673e98);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B673e9b:{NFSU2_TR(0x673e9b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B673e9c:{NFSU2_TR(0x673e9c);
__builtin_memmove((R+24),(R+4),4);
}
B673e9e:{NFSU2_TR(0x673e9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B673ea1:{NFSU2_TR(0x673ea1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B673ea4:{NFSU2_TR(0x673ea4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B673ea5:{NFSU2_TR(0x673ea5);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B673ea8:{NFSU2_TR(0x673ea8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B673eaa:{NFSU2_TR(0x673eaa);
u8 U[1];
w1(U+0,u8(u32(r1(R+5))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B673ead:{NFSU2_TR(0x673ead);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B673eb0:{NFSU2_TR(0x673eb0);
if(r1(R+518)){{goto L673ec3;}}
}
B673eb2:L673eb2:{c.instructions+=3;NFSU2_TR(0x673eb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B673eb5:{NFSU2_TR(0x673eb5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B673eb7:{NFSU2_TR(0x673eb7);
if(r1(R+518)){{goto L673ed9;}}
}
B673eb9:L673eb9:{c.instructions+=4;NFSU2_TR(0x673eb9);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B673ebc:{NFSU2_TR(0x673ebc);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B673ebe:{NFSU2_TR(0x673ebe);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B673ec1:{NFSU2_TR(0x673ec1);
{goto L673ed6;}
}
B673ec3:L673ec3:{c.instructions+=2;NFSU2_TR(0x673ec3);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B673ec5:{NFSU2_TR(0x673ec5);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L673ee0;}}
}
B673ec7:L673ec7:{c.instructions+=3;NFSU2_TR(0x673ec7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B673eca:{NFSU2_TR(0x673eca);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B673ecc:{NFSU2_TR(0x673ecc);
if(r1(R+518)){{goto L673ed9;}}
}
B673ece:L673ece:{c.instructions+=3;NFSU2_TR(0x673ece);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B673ed1:{NFSU2_TR(0x673ed1);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B673ed3:{NFSU2_TR(0x673ed3);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B673ed6:L673ed6:{c.instructions+=1;NFSU2_TR(0x673ed6);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B673ed9:L673ed9:{c.instructions+=2;NFSU2_TR(0x673ed9);
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
B673edb:{NFSU2_TR(0x673edb);
TAIL_STATIC(0x674b54u,674);
}
B673ee0:L673ee0:{c.instructions+=8;NFSU2_TR(0x673ee0);
{u32 ea_=u32(r4(R+24)+u32(168u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B673ee6:{NFSU2_TR(0x673ee6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B673ee7:{NFSU2_TR(0x673ee7);
{u32 ea_=u32(r4(R+20)+u32(4294967244u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B673eea:{NFSU2_TR(0x673eea);
{u32 ea_=u32(r4(R+24)+u32(160u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B673ef0:{NFSU2_TR(0x673ef0);
{u32 ea_=u32(r4(R+20)+u32(4294967252u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B673ef3:{NFSU2_TR(0x673ef3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B673ef6:{NFSU2_TR(0x673ef6);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B673ef9:{NFSU2_TR(0x673ef9);
if(r1(R+518)){{goto L673f81;}}
}
B673eff:L673eff:{c.instructions+=5;NFSU2_TR(0x673eff);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B673f02:{NFSU2_TR(0x673f02);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B673f03:{NFSU2_TR(0x673f03);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B673f04:{NFSU2_TR(0x673f04);
__builtin_memmove((R+4),(R+24),4);
}
B673f06:{NFSU2_TR(0x673f06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x673f0bull));
TAIL_STATIC(0x675732u,675);
}
B673f0b:L673f0b:{c.instructions+=2;NFSU2_TR(0x673f0b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B673f0d:{NFSU2_TR(0x673f0d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6749b6u,674);}
}
B673f13:L673f13:{c.instructions+=2;NFSU2_TR(0x673f13);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B673f16:{NFSU2_TR(0x673f16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x673f1bull));
TAIL_STATIC(0x75dd28u,75d);
}
B673f1b:L673f1b:{c.instructions+=7;NFSU2_TR(0x673f1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B673f1e:{NFSU2_TR(0x673f1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B673f21:{NFSU2_TR(0x673f21);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B673f24:{NFSU2_TR(0x673f24);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B673f28:{NFSU2_TR(0x673f28);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B673f2a:{NFSU2_TR(0x673f2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B673f2d:{NFSU2_TR(0x673f2d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6749b6u,674);}
}
B673f33:L673f33:{c.instructions+=1;NFSU2_TR(0x673f33);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B673f36:L673f36:{c.instructions+=4;NFSU2_TR(0x673f36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B673f38:{NFSU2_TR(0x673f38);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B673f3b:{NFSU2_TR(0x673f3b);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B673f3e:{NFSU2_TR(0x673f3e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L673f53;}}
}
B673f40:L673f40:{c.instructions+=2;NFSU2_TR(0x673f40);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B673f44:{NFSU2_TR(0x673f44);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L673f53;}}
}
B673f46:L673f46:{c.instructions+=2;NFSU2_TR(0x673f46);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B673f49:{NFSU2_TR(0x673f49);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L673f53;}}
}
B673f4b:L673f4b:{c.instructions+=3;NFSU2_TR(0x673f4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B673f4e:{NFSU2_TR(0x673f4e);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B673f51:{NFSU2_TR(0x673f51);
if(r1(R+518)){{goto L673f66;}}
}
B673f53:L673f53:{c.instructions+=5;NFSU2_TR(0x673f53);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B673f56:{NFSU2_TR(0x673f56);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B673f59:{NFSU2_TR(0x673f59);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B673f5c:{NFSU2_TR(0x673f5c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B673f5f:{NFSU2_TR(0x673f5f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x673f36u);}goto L673f36;}}
}
B673f61:L673f61:{c.instructions+=1;NFSU2_TR(0x673f61);
TAIL_STATIC(0x6749b6u,674);
}
B673f66:L673f66:{c.instructions+=5;NFSU2_TR(0x673f66);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((R+0),(U+0),4);
}
B673f69:{NFSU2_TR(0x673f69);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B673f6a:{NFSU2_TR(0x673f6a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B673f6d:{NFSU2_TR(0x673f6d);
__builtin_memmove((R+4),(R+24),4);
}
B673f6f:{NFSU2_TR(0x673f6f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x673f74ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x673e90u);}goto L673e90;}
}
B673f74:L673f74:{c.instructions+=2;NFSU2_TR(0x673f74);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B673f76:{NFSU2_TR(0x673f76);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x67494eu,674);}
}
B673f7c:L673f7c:{c.instructions+=1;NFSU2_TR(0x673f7c);
TAIL_STATIC(0x6749b6u,674);
}
B673f81:L673f81:{c.instructions+=5;NFSU2_TR(0x673f81);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B673f84:{NFSU2_TR(0x673f84);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B673f87:{NFSU2_TR(0x673f87);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B673f8a:{NFSU2_TR(0x673f8a);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B673f8e:{NFSU2_TR(0x673f8e);
if(r1(R+518)){TAIL_STATIC(0x6749b6u,674);}
}
B673f94:L673f94:{c.instructions+=3;NFSU2_TR(0x673f94);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B673f97:{NFSU2_TR(0x673f97);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B673f9a:{NFSU2_TR(0x673f9a);
if(r1(R+518)){TAIL_STATIC(0x6749b6u,674);}
}
B673fa0:L673fa0:{c.instructions+=8;NFSU2_TR(0x673fa0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B673fa3:{NFSU2_TR(0x673fa3);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B673fa6:{NFSU2_TR(0x673fa6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B673fa8:{NFSU2_TR(0x673fa8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B673fab:{NFSU2_TR(0x673fab);
__builtin_memmove((R+4),(R+0),4);
}
B673fad:{NFSU2_TR(0x673fad);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xf0000000ull))));
}
B673fb3:{NFSU2_TR(0x673fb3);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B673fb9:{NFSU2_TR(0x673fb9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x674403u,674);}
}
B673fbf:L673fbf:{c.instructions+=3;NFSU2_TR(0x673fbf);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B673fc4:{NFSU2_TR(0x673fc4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10f00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B673fc9:{NFSU2_TR(0x673fc9);
if(r1(R+518)){TAIL_STATIC(0x6749b6u,674);}
}
B673fcf:L673fcf:{c.instructions+=2;NFSU2_TR(0x673fcf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x11000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B673fd4:{NFSU2_TR(0x673fd4);
if(r1(R+518)){TAIL_STATIC(0x6749b6u,674);}
}
B673fda:L673fda:{c.instructions+=2;NFSU2_TR(0x673fda);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x11100000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B673fdf:{NFSU2_TR(0x673fdf);
if(r1(R+518)){TAIL_STATIC(0x6749b6u,674);}
}
B673fe5:L673fe5:{c.instructions+=2;NFSU2_TR(0x673fe5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x11200000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B673fea:{NFSU2_TR(0x673fea);
if(r1(R+518)){TAIL_STATIC(0x6749b6u,674);}
}
B673ff0:L673ff0:{c.instructions+=2;NFSU2_TR(0x673ff0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x11300000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B673ff5:{NFSU2_TR(0x673ff5);
if(r1(R+518)){TAIL_STATIC(0x6749b6u,674);}
}
B673ffb:L673ffb:{c.instructions+=1;NFSU2_TR(0x673ffb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x11400000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
TAIL_STATIC(0x674000u,674);
}
XIT:NFSU2_TR_EXIT(0x673,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
