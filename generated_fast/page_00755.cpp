#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_583(u8* __restrict R,Cpu& c);
u32 body_598(u8* __restrict R,Cpu& c);
u32 body_754(u8* __restrict R,Cpu& c);
u32 body_756(u8* __restrict R,Cpu& c);
u32 body_759(u8* __restrict R,Cpu& c);
u32 body_75a(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_75f(u8* __restrict R,Cpu& c);
u32 body_761(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x755,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x755,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_755(u8* __restrict R,Cpu& c);
u32 page_755(Cpu& c){return body_755(c.regs.data(),c);}
__attribute__((noinline)) u32 body_755(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x755000:goto L755000;
case 0x755002:c.instructions+=2;goto B755002;
case 0x755003:c.instructions+=1;goto B755003;
case 0x755004:goto L755004;
case 0x755006:c.instructions+=13;goto B755006;
case 0x755008:c.instructions+=12;goto B755008;
case 0x75500b:c.instructions+=11;goto B75500b;
case 0x75500d:c.instructions+=10;goto B75500d;
case 0x75500f:c.instructions+=9;goto B75500f;
case 0x755010:c.instructions+=8;goto B755010;
case 0x755013:c.instructions+=7;goto B755013;
case 0x755015:c.instructions+=6;goto B755015;
case 0x755018:c.instructions+=5;goto B755018;
case 0x755019:c.instructions+=4;goto B755019;
case 0x75501a:c.instructions+=3;goto B75501a;
case 0x75501b:c.instructions+=2;goto B75501b;
case 0x75501c:c.instructions+=1;goto B75501c;
case 0x755020:goto L755020;
case 0x755021:c.instructions+=6;goto B755021;
case 0x755025:c.instructions+=5;goto B755025;
case 0x755027:c.instructions+=4;goto B755027;
case 0x755028:c.instructions+=3;goto B755028;
case 0x755029:c.instructions+=2;goto B755029;
case 0x75502b:c.instructions+=1;goto B75502b;
case 0x75502d:goto L75502d;
case 0x75502f:goto L75502f;
case 0x755033:c.instructions+=6;goto B755033;
case 0x755034:c.instructions+=5;goto B755034;
case 0x755037:c.instructions+=4;goto B755037;
case 0x75503a:c.instructions+=3;goto B75503a;
case 0x75503c:c.instructions+=2;goto B75503c;
case 0x75503e:c.instructions+=1;goto B75503e;
case 0x755040:goto L755040;
case 0x755042:c.instructions+=7;goto B755042;
case 0x755046:c.instructions+=6;goto B755046;
case 0x755047:c.instructions+=5;goto B755047;
case 0x755049:c.instructions+=4;goto B755049;
case 0x75504b:c.instructions+=3;goto B75504b;
case 0x75504c:c.instructions+=2;goto B75504c;
case 0x75504d:c.instructions+=1;goto B75504d;
case 0x755052:goto L755052;
case 0x755055:c.instructions+=2;goto B755055;
case 0x755057:c.instructions+=1;goto B755057;
case 0x755059:goto L755059;
case 0x75505a:c.instructions+=4;goto B75505a;
case 0x75505b:c.instructions+=3;goto B75505b;
case 0x75505e:c.instructions+=2;goto B75505e;
case 0x75505f:c.instructions+=1;goto B75505f;
case 0x755060:goto L755060;
case 0x755063:c.instructions+=18;goto B755063;
case 0x755065:c.instructions+=17;goto B755065;
case 0x755069:c.instructions+=16;goto B755069;
case 0x75506c:c.instructions+=15;goto B75506c;
case 0x75506f:c.instructions+=14;goto B75506f;
case 0x755072:c.instructions+=13;goto B755072;
case 0x755075:c.instructions+=12;goto B755075;
case 0x755078:c.instructions+=11;goto B755078;
case 0x75507a:c.instructions+=10;goto B75507a;
case 0x75507d:c.instructions+=9;goto B75507d;
case 0x755080:c.instructions+=8;goto B755080;
case 0x755082:c.instructions+=7;goto B755082;
case 0x755083:c.instructions+=6;goto B755083;
case 0x755084:c.instructions+=5;goto B755084;
case 0x755086:c.instructions+=4;goto B755086;
case 0x755087:c.instructions+=3;goto B755087;
case 0x75508c:c.instructions+=2;goto B75508c;
case 0x75508d:c.instructions+=1;goto B75508d;
case 0x755090:goto L755090;
case 0x755091:c.instructions+=4;goto B755091;
case 0x755095:c.instructions+=3;goto B755095;
case 0x755097:c.instructions+=2;goto B755097;
case 0x755099:c.instructions+=1;goto B755099;
case 0x75509b:goto L75509b;
case 0x75509d:goto L75509d;
case 0x7550a1:c.instructions+=6;goto B7550a1;
case 0x7550a2:c.instructions+=5;goto B7550a2;
case 0x7550a5:c.instructions+=4;goto B7550a5;
case 0x7550a8:c.instructions+=3;goto B7550a8;
case 0x7550ab:c.instructions+=2;goto B7550ab;
case 0x7550ad:c.instructions+=1;goto B7550ad;
case 0x7550af:goto L7550af;
case 0x7550b0:goto L7550b0;
case 0x7550b3:c.instructions+=1;goto B7550b3;
case 0x7550b5:goto L7550b5;
case 0x7550b7:c.instructions+=2;goto B7550b7;
case 0x7550b9:c.instructions+=1;goto B7550b9;
case 0x7550bb:goto L7550bb;
case 0x7550bd:c.instructions+=2;goto B7550bd;
case 0x7550be:c.instructions+=1;goto B7550be;
case 0x7550bf:goto L7550bf;
case 0x7550c2:c.instructions+=2;goto B7550c2;
case 0x7550c3:c.instructions+=1;goto B7550c3;
case 0x7550d0:goto L7550d0;
case 0x7550d1:c.instructions+=5;goto B7550d1;
case 0x7550d2:c.instructions+=4;goto B7550d2;
case 0x7550d6:c.instructions+=3;goto B7550d6;
case 0x7550d8:c.instructions+=2;goto B7550d8;
case 0x7550da:c.instructions+=1;goto B7550da;
case 0x7550dc:goto L7550dc;
case 0x7550de:goto L7550de;
case 0x7550e2:c.instructions+=7;goto B7550e2;
case 0x7550e3:c.instructions+=6;goto B7550e3;
case 0x7550e6:c.instructions+=5;goto B7550e6;
case 0x7550e9:c.instructions+=4;goto B7550e9;
case 0x7550ec:c.instructions+=3;goto B7550ec;
case 0x7550ee:c.instructions+=2;goto B7550ee;
case 0x7550f1:c.instructions+=1;goto B7550f1;
case 0x7550f3:goto L7550f3;
case 0x7550f5:c.instructions+=2;goto B7550f5;
case 0x7550f8:c.instructions+=1;goto B7550f8;
case 0x7550fa:goto L7550fa;
case 0x7550fc:c.instructions+=3;goto B7550fc;
case 0x7550fe:c.instructions+=2;goto B7550fe;
case 0x755100:c.instructions+=1;goto B755100;
case 0x755102:goto L755102;
case 0x755103:c.instructions+=3;goto B755103;
case 0x755104:c.instructions+=2;goto B755104;
case 0x755106:c.instructions+=1;goto B755106;
case 0x755107:goto L755107;
case 0x755109:c.instructions+=11;goto B755109;
case 0x75510b:c.instructions+=10;goto B75510b;
case 0x75510e:c.instructions+=9;goto B75510e;
case 0x755110:c.instructions+=8;goto B755110;
case 0x755112:c.instructions+=7;goto B755112;
case 0x755113:c.instructions+=6;goto B755113;
case 0x755114:c.instructions+=5;goto B755114;
case 0x755117:c.instructions+=4;goto B755117;
case 0x755119:c.instructions+=3;goto B755119;
case 0x75511c:c.instructions+=2;goto B75511c;
case 0x75511d:c.instructions+=1;goto B75511d;
case 0x755120:goto L755120;
case 0x755124:c.instructions+=4;goto B755124;
case 0x755126:c.instructions+=3;goto B755126;
case 0x755129:c.instructions+=2;goto B755129;
case 0x75512c:c.instructions+=1;goto B75512c;
case 0x755130:goto L755130;
case 0x755134:c.instructions+=3;goto B755134;
case 0x755137:c.instructions+=2;goto B755137;
case 0x755139:c.instructions+=1;goto B755139;
case 0x75513b:goto L75513b;
case 0x75513e:c.instructions+=4;goto B75513e;
case 0x75513f:c.instructions+=3;goto B75513f;
case 0x755142:c.instructions+=2;goto B755142;
case 0x755144:c.instructions+=1;goto B755144;
case 0x755146:goto L755146;
case 0x755149:c.instructions+=1;goto B755149;
case 0x755150:goto L755150;
case 0x755153:c.instructions+=2;goto B755153;
case 0x755157:c.instructions+=1;goto B755157;
case 0x755159:goto L755159;
case 0x75515a:c.instructions+=3;goto B75515a;
case 0x75515d:c.instructions+=2;goto B75515d;
case 0x755160:c.instructions+=1;goto B755160;
case 0x755162:goto L755162;
case 0x755165:c.instructions+=3;goto B755165;
case 0x755167:c.instructions+=2;goto B755167;
case 0x755168:c.instructions+=1;goto B755168;
case 0x75516a:goto L75516a;
case 0x75516c:c.instructions+=1;goto B75516c;
case 0x75516d:goto L75516d;
case 0x755170:c.instructions+=4;goto B755170;
case 0x755173:c.instructions+=3;goto B755173;
case 0x755174:c.instructions+=2;goto B755174;
case 0x755177:c.instructions+=1;goto B755177;
case 0x75517a:goto L75517a;
case 0x75517d:c.instructions+=5;goto B75517d;
case 0x75517f:c.instructions+=4;goto B75517f;
case 0x755182:c.instructions+=3;goto B755182;
case 0x755186:c.instructions+=2;goto B755186;
case 0x755188:c.instructions+=1;goto B755188;
case 0x75518a:goto L75518a;
case 0x75518d:c.instructions+=1;goto B75518d;
case 0x75518f:goto L75518f;
case 0x755192:c.instructions+=1;goto B755192;
case 0x7551a0:goto L7551a0;
case 0x7551a1:c.instructions+=4;goto B7551a1;
case 0x7551a5:c.instructions+=3;goto B7551a5;
case 0x7551a8:c.instructions+=2;goto B7551a8;
case 0x7551a9:c.instructions+=1;goto B7551a9;
case 0x7551ab:goto L7551ab;
case 0x7551b0:goto L7551b0;
case 0x7551b1:c.instructions+=3;goto B7551b1;
case 0x7551b5:c.instructions+=2;goto B7551b5;
case 0x7551b8:c.instructions+=1;goto B7551b8;
case 0x7551ba:goto L7551ba;
case 0x7551bf:goto L7551bf;
case 0x7551c1:c.instructions+=1;goto B7551c1;
case 0x7551c6:goto L7551c6;
case 0x7551c8:c.instructions+=15;goto B7551c8;
case 0x7551ca:c.instructions+=14;goto B7551ca;
case 0x7551cc:c.instructions+=13;goto B7551cc;
case 0x7551ce:c.instructions+=12;goto B7551ce;
case 0x7551d1:c.instructions+=11;goto B7551d1;
case 0x7551d4:c.instructions+=10;goto B7551d4;
case 0x7551d7:c.instructions+=9;goto B7551d7;
case 0x7551da:c.instructions+=8;goto B7551da;
case 0x7551dd:c.instructions+=7;goto B7551dd;
case 0x7551e0:c.instructions+=6;goto B7551e0;
case 0x7551e3:c.instructions+=5;goto B7551e3;
case 0x7551ea:c.instructions+=4;goto B7551ea;
case 0x7551ed:c.instructions+=3;goto B7551ed;
case 0x7551ee:c.instructions+=2;goto B7551ee;
case 0x7551f1:c.instructions+=1;goto B7551f1;
case 0x7551f6:goto L7551f6;
case 0x7551f9:c.instructions+=6;goto B7551f9;
case 0x7551fc:c.instructions+=5;goto B7551fc;
case 0x7551fe:c.instructions+=4;goto B7551fe;
case 0x755201:c.instructions+=3;goto B755201;
case 0x755203:c.instructions+=2;goto B755203;
case 0x755206:c.instructions+=1;goto B755206;
case 0x755208:goto L755208;
case 0x75520a:goto L75520a;
case 0x75520c:c.instructions+=3;goto B75520c;
case 0x75520f:c.instructions+=2;goto B75520f;
case 0x755212:c.instructions+=1;goto B755212;
case 0x755214:goto L755214;
case 0x755216:goto L755216;
case 0x75521d:c.instructions+=2;goto B75521d;
case 0x75521e:c.instructions+=1;goto B75521e;
case 0x755220:goto L755220;
case 0x755221:c.instructions+=2;goto B755221;
case 0x755222:c.instructions+=1;goto B755222;
case 0x755227:goto L755227;
case 0x75522a:goto L75522a;
case 0x75522c:c.instructions+=3;goto B75522c;
case 0x75522d:c.instructions+=2;goto B75522d;
case 0x75522e:c.instructions+=1;goto B75522e;
case 0x755230:goto L755230;
case 0x755235:c.instructions+=5;goto B755235;
case 0x755236:c.instructions+=4;goto B755236;
case 0x755238:c.instructions+=3;goto B755238;
case 0x75523a:c.instructions+=2;goto B75523a;
case 0x75523b:c.instructions+=1;goto B75523b;
case 0x75523d:goto L75523d;
case 0x75523f:c.instructions+=5;goto B75523f;
case 0x755241:c.instructions+=4;goto B755241;
case 0x755246:c.instructions+=3;goto B755246;
case 0x75524b:c.instructions+=2;goto B75524b;
case 0x755255:c.instructions+=1;goto B755255;
case 0x75525a:goto L75525a;
case 0x75525d:goto L75525d;
case 0x755261:c.instructions+=3;goto B755261;
case 0x755263:c.instructions+=2;goto B755263;
case 0x755267:c.instructions+=1;goto B755267;
case 0x755269:goto L755269;
case 0x75526b:c.instructions+=1;goto B75526b;
case 0x75526d:goto L75526d;
case 0x75526f:c.instructions+=1;goto B75526f;
case 0x755270:goto L755270;
case 0x755273:c.instructions+=3;goto B755273;
case 0x755274:c.instructions+=2;goto B755274;
case 0x755279:c.instructions+=1;goto B755279;
case 0x75527b:goto L75527b;
case 0x755281:c.instructions+=1;goto B755281;
case 0x755287:goto L755287;
case 0x75528b:c.instructions+=1;goto B75528b;
case 0x75528d:goto L75528d;
case 0x755291:c.instructions+=3;goto B755291;
case 0x755293:c.instructions+=2;goto B755293;
case 0x755295:c.instructions+=1;goto B755295;
case 0x75529b:goto L75529b;
case 0x7552a0:goto L7552a0;
case 0x7552a1:c.instructions+=2;goto B7552a1;
case 0x7552a4:c.instructions+=1;goto B7552a4;
case 0x7552a6:goto L7552a6;
case 0x7552aa:c.instructions+=1;goto B7552aa;
case 0x7552ac:goto L7552ac;
case 0x7552ae:goto L7552ae;
case 0x7552af:c.instructions+=8;goto B7552af;
case 0x7552b2:c.instructions+=7;goto B7552b2;
case 0x7552b4:c.instructions+=6;goto B7552b4;
case 0x7552b5:c.instructions+=5;goto B7552b5;
case 0x7552b7:c.instructions+=4;goto B7552b7;
case 0x7552b9:c.instructions+=3;goto B7552b9;
case 0x7552bb:c.instructions+=2;goto B7552bb;
case 0x7552bf:c.instructions+=1;goto B7552bf;
case 0x7552c1:goto L7552c1;
case 0x7552c3:goto L7552c3;
case 0x7552c5:c.instructions+=30;goto B7552c5;
case 0x7552c6:c.instructions+=29;goto B7552c6;
case 0x7552ca:c.instructions+=28;goto B7552ca;
case 0x7552ce:c.instructions+=27;goto B7552ce;
case 0x7552d2:c.instructions+=26;goto B7552d2;
case 0x7552d4:c.instructions+=25;goto B7552d4;
case 0x7552db:c.instructions+=24;goto B7552db;
case 0x7552dd:c.instructions+=23;goto B7552dd;
case 0x7552e0:c.instructions+=22;goto B7552e0;
case 0x7552e2:c.instructions+=21;goto B7552e2;
case 0x7552e4:c.instructions+=20;goto B7552e4;
case 0x7552ea:c.instructions+=19;goto B7552ea;
case 0x7552ed:c.instructions+=18;goto B7552ed;
case 0x7552f0:c.instructions+=17;goto B7552f0;
case 0x7552f2:c.instructions+=16;goto B7552f2;
case 0x7552f8:c.instructions+=15;goto B7552f8;
case 0x7552fb:c.instructions+=14;goto B7552fb;
case 0x7552fd:c.instructions+=13;goto B7552fd;
case 0x755304:c.instructions+=12;goto B755304;
case 0x755307:c.instructions+=11;goto B755307;
case 0x755309:c.instructions+=10;goto B755309;
case 0x75530b:c.instructions+=9;goto B75530b;
case 0x75530d:c.instructions+=8;goto B75530d;
case 0x755313:c.instructions+=7;goto B755313;
case 0x755316:c.instructions+=6;goto B755316;
case 0x755318:c.instructions+=5;goto B755318;
case 0x75531c:c.instructions+=4;goto B75531c;
case 0x75531d:c.instructions+=3;goto B75531d;
case 0x75531f:c.instructions+=2;goto B75531f;
case 0x755322:c.instructions+=1;goto B755322;
case 0x755324:goto L755324;
case 0x755325:c.instructions+=1;goto B755325;
case 0x755326:goto L755326;
case 0x755327:c.instructions+=2;goto B755327;
case 0x755328:c.instructions+=1;goto B755328;
case 0x755330:goto L755330;
case 0x755334:c.instructions+=7;goto B755334;
case 0x755336:c.instructions+=6;goto B755336;
case 0x755337:c.instructions+=5;goto B755337;
case 0x755338:c.instructions+=4;goto B755338;
case 0x75533c:c.instructions+=3;goto B75533c;
case 0x755342:c.instructions+=2;goto B755342;
case 0x755348:c.instructions+=1;goto B755348;
case 0x75534a:goto L75534a;
case 0x75534d:c.instructions+=7;goto B75534d;
case 0x75534e:c.instructions+=6;goto B75534e;
case 0x755352:c.instructions+=5;goto B755352;
case 0x755353:c.instructions+=4;goto B755353;
case 0x755356:c.instructions+=3;goto B755356;
case 0x755358:c.instructions+=2;goto B755358;
case 0x75535e:c.instructions+=1;goto B75535e;
case 0x755362:goto L755362;
case 0x755365:c.instructions+=26;goto B755365;
case 0x755367:c.instructions+=25;goto B755367;
case 0x75536e:c.instructions+=24;goto B75536e;
case 0x755371:c.instructions+=23;goto B755371;
case 0x755373:c.instructions+=22;goto B755373;
case 0x755375:c.instructions+=21;goto B755375;
case 0x755379:c.instructions+=20;goto B755379;
case 0x75537c:c.instructions+=19;goto B75537c;
case 0x75537f:c.instructions+=18;goto B75537f;
case 0x755381:c.instructions+=17;goto B755381;
case 0x755383:c.instructions+=16;goto B755383;
case 0x755385:c.instructions+=15;goto B755385;
case 0x755387:c.instructions+=14;goto B755387;
case 0x75538d:c.instructions+=13;goto B75538d;
case 0x755390:c.instructions+=12;goto B755390;
case 0x755392:c.instructions+=11;goto B755392;
case 0x755395:c.instructions+=10;goto B755395;
case 0x755397:c.instructions+=9;goto B755397;
case 0x75539c:c.instructions+=8;goto B75539c;
case 0x75539f:c.instructions+=7;goto B75539f;
case 0x7553a1:c.instructions+=6;goto B7553a1;
case 0x7553a5:c.instructions+=5;goto B7553a5;
case 0x7553a6:c.instructions+=4;goto B7553a6;
case 0x7553a7:c.instructions+=3;goto B7553a7;
case 0x7553ab:c.instructions+=2;goto B7553ab;
case 0x7553af:c.instructions+=1;goto B7553af;
case 0x7553b1:goto L7553b1;
case 0x7553b2:c.instructions+=1;goto B7553b2;
case 0x7553b3:goto L7553b3;
case 0x7553b9:c.instructions+=4;goto B7553b9;
case 0x7553bf:c.instructions+=3;goto B7553bf;
case 0x7553c0:c.instructions+=2;goto B7553c0;
case 0x7553c1:c.instructions+=1;goto B7553c1;
case 0x7553d0:goto L7553d0;
case 0x7553d6:c.instructions+=15;goto B7553d6;
case 0x7553db:c.instructions+=14;goto B7553db;
case 0x7553dc:c.instructions+=13;goto B7553dc;
case 0x7553e3:c.instructions+=12;goto B7553e3;
case 0x7553e4:c.instructions+=11;goto B7553e4;
case 0x7553eb:c.instructions+=10;goto B7553eb;
case 0x7553ec:c.instructions+=9;goto B7553ec;
case 0x7553f3:c.instructions+=8;goto B7553f3;
case 0x7553f4:c.instructions+=7;goto B7553f4;
case 0x7553f5:c.instructions+=6;goto B7553f5;
case 0x7553fc:c.instructions+=5;goto B7553fc;
case 0x755400:c.instructions+=4;goto B755400;
case 0x755401:c.instructions+=3;goto B755401;
case 0x755402:c.instructions+=2;goto B755402;
case 0x755407:c.instructions+=1;goto B755407;
case 0x75540c:goto L75540c;
case 0x75540e:c.instructions+=5;goto B75540e;
case 0x75540f:c.instructions+=4;goto B75540f;
case 0x755410:c.instructions+=3;goto B755410;
case 0x755411:c.instructions+=2;goto B755411;
case 0x755416:c.instructions+=1;goto B755416;
case 0x75541b:goto L75541b;
case 0x75541d:c.instructions+=4;goto B75541d;
case 0x75541f:c.instructions+=3;goto B75541f;
case 0x755424:c.instructions+=2;goto B755424;
case 0x755429:c.instructions+=1;goto B755429;
case 0x75542e:goto L75542e;
case 0x755435:c.instructions+=4;goto B755435;
case 0x75543c:c.instructions+=3;goto B75543c;
case 0x75543f:c.instructions+=2;goto B75543f;
case 0x755442:c.instructions+=1;goto B755442;
case 0x755448:goto L755448;
case 0x75544f:c.instructions+=5;goto B75544f;
case 0x755450:c.instructions+=4;goto B755450;
case 0x755453:c.instructions+=3;goto B755453;
case 0x755455:c.instructions+=2;goto B755455;
case 0x75545c:c.instructions+=1;goto B75545c;
case 0x755460:goto L755460;
case 0x755462:c.instructions+=1;goto B755462;
case 0x755464:goto L755464;
case 0x755466:c.instructions+=4;goto B755466;
case 0x75546a:c.instructions+=3;goto B75546a;
case 0x75546b:c.instructions+=2;goto B75546b;
case 0x755470:c.instructions+=1;goto B755470;
case 0x755475:goto L755475;
case 0x755479:c.instructions+=5;goto B755479;
case 0x75547c:c.instructions+=4;goto B75547c;
case 0x75547f:c.instructions+=3;goto B75547f;
case 0x755482:c.instructions+=2;goto B755482;
case 0x755486:c.instructions+=1;goto B755486;
case 0x755488:goto L755488;
case 0x75548a:c.instructions+=4;goto B75548a;
case 0x75548b:c.instructions+=3;goto B75548b;
case 0x75548d:c.instructions+=2;goto B75548d;
case 0x755491:c.instructions+=1;goto B755491;
case 0x755493:goto L755493;
case 0x755495:goto L755495;
case 0x755498:c.instructions+=1;goto B755498;
case 0x75549a:goto L75549a;
case 0x75549d:c.instructions+=1;goto B75549d;
case 0x75549f:goto L75549f;
case 0x7554a1:c.instructions+=1;goto B7554a1;
case 0x7554a5:goto L7554a5;
case 0x7554a7:c.instructions+=5;goto B7554a7;
case 0x7554ab:c.instructions+=4;goto B7554ab;
case 0x7554ac:c.instructions+=3;goto B7554ac;
case 0x7554b0:c.instructions+=2;goto B7554b0;
case 0x7554b1:c.instructions+=1;goto B7554b1;
case 0x7554b6:goto L7554b6;
case 0x7554bb:c.instructions+=13;goto B7554bb;
case 0x7554bc:c.instructions+=12;goto B7554bc;
case 0x7554c1:c.instructions+=11;goto B7554c1;
case 0x7554c3:c.instructions+=10;goto B7554c3;
case 0x7554c6:c.instructions+=9;goto B7554c6;
case 0x7554c9:c.instructions+=8;goto B7554c9;
case 0x7554cd:c.instructions+=7;goto B7554cd;
case 0x7554ce:c.instructions+=6;goto B7554ce;
case 0x7554d0:c.instructions+=5;goto B7554d0;
case 0x7554d3:c.instructions+=4;goto B7554d3;
case 0x7554d5:c.instructions+=3;goto B7554d5;
case 0x7554d6:c.instructions+=2;goto B7554d6;
case 0x7554d7:c.instructions+=1;goto B7554d7;
case 0x7554d9:goto L7554d9;
case 0x7554e0:c.instructions+=1;goto B7554e0;
case 0x7554e1:goto L7554e1;
case 0x7554e3:c.instructions+=1;goto B7554e3;
case 0x7554e5:goto L7554e5;
case 0x7554e8:goto L7554e8;
case 0x7554ef:c.instructions+=5;goto B7554ef;
case 0x7554f0:c.instructions+=4;goto B7554f0;
case 0x7554f1:c.instructions+=3;goto B7554f1;
case 0x7554f3:c.instructions+=2;goto B7554f3;
case 0x7554f4:c.instructions+=1;goto B7554f4;
case 0x7554f9:goto L7554f9;
case 0x7554ff:c.instructions+=1;goto B7554ff;
case 0x755500:goto L755500;
case 0x755504:c.instructions+=3;goto B755504;
case 0x755509:c.instructions+=2;goto B755509;
case 0x75550b:c.instructions+=1;goto B75550b;
case 0x75550d:goto L75550d;
case 0x755511:goto L755511;
case 0x755512:c.instructions+=3;goto B755512;
case 0x755513:c.instructions+=2;goto B755513;
case 0x755514:c.instructions+=1;goto B755514;
case 0x755519:goto L755519;
case 0x75551b:c.instructions+=3;goto B75551b;
case 0x75551f:c.instructions+=2;goto B75551f;
case 0x755520:c.instructions+=1;goto B755520;
case 0x755525:goto L755525;
case 0x75552a:c.instructions+=2;goto B75552a;
case 0x75552c:c.instructions+=1;goto B75552c;
case 0x755531:goto L755531;
case 0x755534:c.instructions+=3;goto B755534;
case 0x755536:c.instructions+=2;goto B755536;
case 0x755538:c.instructions+=1;goto B755538;
case 0x75553a:goto L75553a;
case 0x75553c:c.instructions+=1;goto B75553c;
case 0x75553e:goto L75553e;
case 0x755540:c.instructions+=1;goto B755540;
case 0x755542:goto L755542;
case 0x755543:c.instructions+=3;goto B755543;
case 0x755545:c.instructions+=2;goto B755545;
case 0x755547:c.instructions+=1;goto B755547;
case 0x75554c:goto L75554c;
case 0x75554e:goto L75554e;
case 0x755552:c.instructions+=10;goto B755552;
case 0x755553:c.instructions+=9;goto B755553;
case 0x755559:c.instructions+=8;goto B755559;
case 0x75555b:c.instructions+=7;goto B75555b;
case 0x755561:c.instructions+=6;goto B755561;
case 0x755567:c.instructions+=5;goto B755567;
case 0x755569:c.instructions+=4;goto B755569;
case 0x75556a:c.instructions+=3;goto B75556a;
case 0x75556b:c.instructions+=2;goto B75556b;
case 0x75556c:c.instructions+=1;goto B75556c;
case 0x75556d:goto L75556d;
case 0x75556e:c.instructions+=1;goto B75556e;
case 0x755573:goto L755573;
case 0x755576:goto L755576;
case 0x755578:c.instructions+=1;goto B755578;
case 0x75557a:goto L75557a;
case 0x75557b:c.instructions+=1;goto B75557b;
case 0x755580:goto L755580;
case 0x755583:goto L755583;
case 0x755585:c.instructions+=4;goto B755585;
case 0x755586:c.instructions+=3;goto B755586;
case 0x755587:c.instructions+=2;goto B755587;
case 0x755588:c.instructions+=1;goto B755588;
case 0x755590:goto L755590;
case 0x755591:c.instructions+=4;goto B755591;
case 0x755595:c.instructions+=3;goto B755595;
case 0x755597:c.instructions+=2;goto B755597;
case 0x755598:c.instructions+=1;goto B755598;
case 0x75559d:goto L75559d;
case 0x7555a3:c.instructions+=2;goto B7555a3;
case 0x7555a4:c.instructions+=1;goto B7555a4;
case 0x7555a9:goto L7555a9;
case 0x7555aa:c.instructions+=1;goto B7555aa;
case 0x7555af:goto L7555af;
case 0x7555b2:c.instructions+=2;goto B7555b2;
case 0x7555b3:c.instructions+=1;goto B7555b3;
case 0x7555c0:goto L7555c0;
case 0x7555c6:c.instructions+=10;goto B7555c6;
case 0x7555cb:c.instructions+=9;goto B7555cb;
case 0x7555cc:c.instructions+=8;goto B7555cc;
case 0x7555cd:c.instructions+=7;goto B7555cd;
case 0x7555ce:c.instructions+=6;goto B7555ce;
case 0x7555d5:c.instructions+=5;goto B7555d5;
case 0x7555dc:c.instructions+=4;goto B7555dc;
case 0x7555de:c.instructions+=3;goto B7555de;
case 0x7555df:c.instructions+=2;goto B7555df;
case 0x7555e0:c.instructions+=1;goto B7555e0;
case 0x7555e5:goto L7555e5;
case 0x7555eb:c.instructions+=4;goto B7555eb;
case 0x7555ee:c.instructions+=3;goto B7555ee;
case 0x7555f1:c.instructions+=2;goto B7555f1;
case 0x7555f6:c.instructions+=1;goto B7555f6;
case 0x7555f8:goto L7555f8;
case 0x7555fa:c.instructions+=5;goto B7555fa;
case 0x7555fc:c.instructions+=4;goto B7555fc;
case 0x7555fe:c.instructions+=3;goto B7555fe;
case 0x755603:c.instructions+=2;goto B755603;
case 0x755604:c.instructions+=1;goto B755604;
case 0x755609:goto L755609;
case 0x75560c:c.instructions+=2;goto B75560c;
case 0x75560e:c.instructions+=1;goto B75560e;
case 0x755610:goto L755610;
case 0x755616:goto L755616;
case 0x755618:goto L755618;
case 0x755622:goto L755622;
case 0x755628:c.instructions+=2;goto B755628;
case 0x75562d:c.instructions+=1;goto B75562d;
case 0x75562f:goto L75562f;
case 0x755635:c.instructions+=3;goto B755635;
case 0x755637:c.instructions+=2;goto B755637;
case 0x75563a:c.instructions+=1;goto B75563a;
case 0x755640:goto L755640;
case 0x755642:c.instructions+=3;goto B755642;
case 0x755643:c.instructions+=2;goto B755643;
case 0x755645:c.instructions+=1;goto B755645;
case 0x755647:goto L755647;
case 0x755649:c.instructions+=5;goto B755649;
case 0x75564a:c.instructions+=4;goto B75564a;
case 0x75564b:c.instructions+=3;goto B75564b;
case 0x75564d:c.instructions+=2;goto B75564d;
case 0x75564e:c.instructions+=1;goto B75564e;
case 0x755653:goto L755653;
case 0x755656:c.instructions+=1;goto B755656;
case 0x75565c:goto L75565c;
case 0x755662:c.instructions+=1;goto B755662;
case 0x755664:goto L755664;
case 0x755666:c.instructions+=5;goto B755666;
case 0x755668:c.instructions+=4;goto B755668;
case 0x75566c:c.instructions+=3;goto B75566c;
case 0x75566d:c.instructions+=2;goto B75566d;
case 0x75566e:c.instructions+=1;goto B75566e;
case 0x755673:goto L755673;
case 0x755676:c.instructions+=2;goto B755676;
case 0x755678:c.instructions+=1;goto B755678;
case 0x75567a:goto L75567a;
case 0x755680:c.instructions+=4;goto B755680;
case 0x755684:c.instructions+=3;goto B755684;
case 0x755686:c.instructions+=2;goto B755686;
case 0x755690:c.instructions+=1;goto B755690;
case 0x75569a:goto L75569a;
case 0x75569c:goto L75569c;
case 0x7556a6:goto L7556a6;
case 0x7556ac:c.instructions+=3;goto B7556ac;
case 0x7556b1:c.instructions+=2;goto B7556b1;
case 0x7556b3:c.instructions+=1;goto B7556b3;
case 0x7556b9:goto L7556b9;
case 0x7556bf:c.instructions+=9;goto B7556bf;
case 0x7556c5:c.instructions+=8;goto B7556c5;
case 0x7556cb:c.instructions+=7;goto B7556cb;
case 0x7556cd:c.instructions+=6;goto B7556cd;
case 0x7556ce:c.instructions+=5;goto B7556ce;
case 0x7556d0:c.instructions+=4;goto B7556d0;
case 0x7556d2:c.instructions+=3;goto B7556d2;
case 0x7556d3:c.instructions+=2;goto B7556d3;
case 0x7556d4:c.instructions+=1;goto B7556d4;
case 0x7556d9:goto L7556d9;
case 0x7556dc:c.instructions+=2;goto B7556dc;
case 0x7556de:c.instructions+=1;goto B7556de;
case 0x7556e0:goto L7556e0;
case 0x7556e6:c.instructions+=1;goto B7556e6;
case 0x7556e8:goto L7556e8;
case 0x7556ea:goto L7556ea;
case 0x7556f4:goto L7556f4;
case 0x7556fa:c.instructions+=1;goto B7556fa;
case 0x755700:goto L755700;
case 0x755706:c.instructions+=2;goto B755706;
case 0x755708:c.instructions+=1;goto B755708;
case 0x75570e:goto L75570e;
case 0x755714:c.instructions+=4;goto B755714;
case 0x755716:c.instructions+=3;goto B755716;
case 0x75571a:c.instructions+=2;goto B75571a;
case 0x75571c:c.instructions+=1;goto B75571c;
case 0x755722:goto L755722;
case 0x755725:c.instructions+=1;goto B755725;
case 0x755727:goto L755727;
case 0x75572b:c.instructions+=1;goto B75572b;
case 0x75572d:goto L75572d;
case 0x755731:c.instructions+=1;goto B755731;
case 0x755733:goto L755733;
case 0x755737:c.instructions+=1;goto B755737;
case 0x755739:goto L755739;
case 0x75573a:c.instructions+=2;goto B75573a;
case 0x75573c:c.instructions+=1;goto B75573c;
case 0x75573e:goto L75573e;
case 0x75573f:c.instructions+=5;goto B75573f;
case 0x755740:c.instructions+=4;goto B755740;
case 0x755741:c.instructions+=3;goto B755741;
case 0x755742:c.instructions+=2;goto B755742;
case 0x755749:c.instructions+=1;goto B755749;
case 0x75574e:goto L75574e;
case 0x755754:c.instructions+=1;goto B755754;
case 0x755755:goto L755755;
case 0x755757:c.instructions+=1;goto B755757;
case 0x75575d:goto L75575d;
case 0x75575f:c.instructions+=7;goto B75575f;
case 0x755761:c.instructions+=6;goto B755761;
case 0x755763:c.instructions+=5;goto B755763;
case 0x755769:c.instructions+=4;goto B755769;
case 0x75576d:c.instructions+=3;goto B75576d;
case 0x755771:c.instructions+=2;goto B755771;
case 0x755777:c.instructions+=1;goto B755777;
case 0x755779:goto L755779;
case 0x75577f:c.instructions+=4;goto B75577f;
case 0x755785:c.instructions+=3;goto B755785;
case 0x755787:c.instructions+=2;goto B755787;
case 0x75578d:c.instructions+=1;goto B75578d;
case 0x755793:goto L755793;
case 0x755799:c.instructions+=4;goto B755799;
case 0x75579b:c.instructions+=3;goto B75579b;
case 0x75579d:c.instructions+=2;goto B75579d;
case 0x7557a0:c.instructions+=1;goto B7557a0;
case 0x7557a6:goto L7557a6;
case 0x7557a9:c.instructions+=3;goto B7557a9;
case 0x7557ab:c.instructions+=2;goto B7557ab;
case 0x7557ad:c.instructions+=1;goto B7557ad;
case 0x7557b3:goto L7557b3;
case 0x7557b6:c.instructions+=1;goto B7557b6;
case 0x7557bc:goto L7557bc;
case 0x7557c0:c.instructions+=1;goto B7557c0;
case 0x7557c6:goto L7557c6;
case 0x7557c9:c.instructions+=1;goto B7557c9;
case 0x7557cb:goto L7557cb;
case 0x7557ce:c.instructions+=3;goto B7557ce;
case 0x7557cf:c.instructions+=2;goto B7557cf;
case 0x7557d1:c.instructions+=1;goto B7557d1;
case 0x7557d3:goto L7557d3;
case 0x7557d5:goto L7557d5;
case 0x7557d7:c.instructions+=2;goto B7557d7;
case 0x7557d9:c.instructions+=1;goto B7557d9;
case 0x7557db:goto L7557db;
case 0x7557e0:goto L7557e0;
case 0x7557e3:c.instructions+=1;goto B7557e3;
case 0x7557e5:goto L7557e5;
case 0x7557e8:c.instructions+=3;goto B7557e8;
case 0x7557e9:c.instructions+=2;goto B7557e9;
case 0x7557eb:c.instructions+=1;goto B7557eb;
case 0x7557ed:goto L7557ed;
case 0x7557ef:c.instructions+=4;goto B7557ef;
case 0x7557f5:c.instructions+=3;goto B7557f5;
case 0x7557f7:c.instructions+=2;goto B7557f7;
case 0x7557fa:c.instructions+=1;goto B7557fa;
case 0x7557fc:goto L7557fc;
case 0x755800:goto L755800;
case 0x755803:c.instructions+=1;goto B755803;
case 0x755805:goto L755805;
case 0x755807:c.instructions+=10;goto B755807;
case 0x755809:c.instructions+=9;goto B755809;
case 0x75580f:c.instructions+=8;goto B75580f;
case 0x755812:c.instructions+=7;goto B755812;
case 0x755815:c.instructions+=6;goto B755815;
case 0x755818:c.instructions+=5;goto B755818;
case 0x755819:c.instructions+=4;goto B755819;
case 0x75581f:c.instructions+=3;goto B75581f;
case 0x755821:c.instructions+=2;goto B755821;
case 0x755824:c.instructions+=1;goto B755824;
case 0x755826:goto L755826;
case 0x75582b:c.instructions+=3;goto B75582b;
case 0x75582c:c.instructions+=2;goto B75582c;
case 0x755836:c.instructions+=1;goto B755836;
case 0x75583b:goto L75583b;
case 0x75583e:c.instructions+=2;goto B75583e;
case 0x755840:c.instructions+=1;goto B755840;
case 0x755842:goto L755842;
case 0x755845:c.instructions+=3;goto B755845;
case 0x755846:c.instructions+=2;goto B755846;
case 0x755849:c.instructions+=1;goto B755849;
case 0x75584b:goto L75584b;
case 0x755850:goto L755850;
case 0x755853:c.instructions+=1;goto B755853;
case 0x755855:goto L755855;
case 0x755858:c.instructions+=1;goto B755858;
case 0x75585a:goto L75585a;
case 0x75585d:c.instructions+=3;goto B75585d;
case 0x75585e:c.instructions+=2;goto B75585e;
case 0x755861:c.instructions+=1;goto B755861;
case 0x755863:goto L755863;
case 0x755869:c.instructions+=3;goto B755869;
case 0x75586b:c.instructions+=2;goto B75586b;
case 0x75586e:c.instructions+=1;goto B75586e;
case 0x755870:goto L755870;
case 0x755873:c.instructions+=1;goto B755873;
case 0x755875:goto L755875;
case 0x755877:c.instructions+=10;goto B755877;
case 0x755879:c.instructions+=9;goto B755879;
case 0x75587f:c.instructions+=8;goto B75587f;
case 0x755882:c.instructions+=7;goto B755882;
case 0x755885:c.instructions+=6;goto B755885;
case 0x755888:c.instructions+=5;goto B755888;
case 0x755889:c.instructions+=4;goto B755889;
case 0x75588f:c.instructions+=3;goto B75588f;
case 0x755891:c.instructions+=2;goto B755891;
case 0x755894:c.instructions+=1;goto B755894;
case 0x755896:goto L755896;
case 0x75589c:c.instructions+=4;goto B75589c;
case 0x7558a1:c.instructions+=3;goto B7558a1;
case 0x7558a2:c.instructions+=2;goto B7558a2;
case 0x7558a8:c.instructions+=1;goto B7558a8;
case 0x7558ad:goto L7558ad;
case 0x7558b3:c.instructions+=12;goto B7558b3;
case 0x7558b9:c.instructions+=11;goto B7558b9;
case 0x7558bc:c.instructions+=10;goto B7558bc;
case 0x7558be:c.instructions+=9;goto B7558be;
case 0x7558c0:c.instructions+=8;goto B7558c0;
case 0x7558c2:c.instructions+=7;goto B7558c2;
case 0x7558c8:c.instructions+=6;goto B7558c8;
case 0x7558cd:c.instructions+=5;goto B7558cd;
case 0x7558d3:c.instructions+=4;goto B7558d3;
case 0x7558d9:c.instructions+=3;goto B7558d9;
case 0x7558de:c.instructions+=2;goto B7558de;
case 0x7558e5:c.instructions+=1;goto B7558e5;
case 0x7558e7:goto L7558e7;
case 0x7558ed:c.instructions+=2;goto B7558ed;
case 0x7558ef:c.instructions+=1;goto B7558ef;
case 0x7558f1:goto L7558f1;
case 0x7558f7:c.instructions+=1;goto B7558f7;
case 0x7558f9:goto L7558f9;
case 0x755903:c.instructions+=1;goto B755903;
case 0x755905:goto L755905;
case 0x755906:c.instructions+=6;goto B755906;
case 0x755910:c.instructions+=5;goto B755910;
case 0x755911:c.instructions+=4;goto B755911;
case 0x755912:c.instructions+=3;goto B755912;
case 0x755913:c.instructions+=2;goto B755913;
case 0x75591a:c.instructions+=1;goto B75591a;
case 0x75591f:goto L75591f;
case 0x755925:c.instructions+=1;goto B755925;
case 0x755926:goto L755926;
case 0x755930:goto L755930;
case 0x755936:c.instructions+=4;goto B755936;
case 0x75593b:c.instructions+=3;goto B75593b;
case 0x75593d:c.instructions+=2;goto B75593d;
case 0x75593f:c.instructions+=1;goto B75593f;
case 0x755945:goto L755945;
case 0x75594b:c.instructions+=2;goto B75594b;
case 0x75594d:c.instructions+=1;goto B75594d;
case 0x75594f:goto L75594f;
case 0x755955:c.instructions+=1;goto B755955;
case 0x755957:goto L755957;
case 0x75595d:c.instructions+=1;goto B75595d;
case 0x755963:goto L755963;
case 0x755969:c.instructions+=4;goto B755969;
case 0x75596f:c.instructions+=3;goto B75596f;
case 0x755971:c.instructions+=2;goto B755971;
case 0x755973:c.instructions+=1;goto B755973;
case 0x755975:goto L755975;
case 0x75597b:c.instructions+=6;goto B75597b;
case 0x75597c:c.instructions+=5;goto B75597c;
case 0x75597e:c.instructions+=4;goto B75597e;
case 0x755980:c.instructions+=3;goto B755980;
case 0x755981:c.instructions+=2;goto B755981;
case 0x755982:c.instructions+=1;goto B755982;
case 0x755987:goto L755987;
case 0x75598a:c.instructions+=2;goto B75598a;
case 0x75598c:c.instructions+=1;goto B75598c;
case 0x755992:goto L755992;
case 0x755995:c.instructions+=1;goto B755995;
case 0x755997:goto L755997;
case 0x755999:c.instructions+=1;goto B755999;
case 0x75599f:goto L75599f;
case 0x7559a5:c.instructions+=9;goto B7559a5;
case 0x7559ab:c.instructions+=8;goto B7559ab;
case 0x7559ad:c.instructions+=7;goto B7559ad;
case 0x7559af:c.instructions+=6;goto B7559af;
case 0x7559b5:c.instructions+=5;goto B7559b5;
case 0x7559b7:c.instructions+=4;goto B7559b7;
case 0x7559bd:c.instructions+=3;goto B7559bd;
case 0x7559c3:c.instructions+=2;goto B7559c3;
case 0x7559c5:c.instructions+=1;goto B7559c5;
case 0x7559c7:goto L7559c7;
case 0x7559c9:c.instructions+=1;goto B7559c9;
case 0x7559cb:goto L7559cb;
case 0x7559d1:c.instructions+=1;goto B7559d1;
case 0x7559d7:goto L7559d7;
case 0x7559d9:goto L7559d9;
case 0x7559e0:c.instructions+=1;goto B7559e0;
case 0x7559e2:goto L7559e2;
case 0x7559e4:c.instructions+=5;goto B7559e4;
case 0x7559e9:c.instructions+=4;goto B7559e9;
case 0x7559ed:c.instructions+=3;goto B7559ed;
case 0x7559ee:c.instructions+=2;goto B7559ee;
case 0x7559ef:c.instructions+=1;goto B7559ef;
case 0x7559f4:goto L7559f4;
case 0x7559f7:c.instructions+=2;goto B7559f7;
case 0x7559f9:c.instructions+=1;goto B7559f9;
case 0x7559fb:goto L7559fb;
case 0x7559fd:goto L7559fd;
case 0x755a03:c.instructions+=2;goto B755a03;
case 0x755a06:c.instructions+=1;goto B755a06;
case 0x755a08:goto L755a08;
case 0x755a0e:c.instructions+=1;goto B755a0e;
case 0x755a10:goto L755a10;
case 0x755a12:c.instructions+=4;goto B755a12;
case 0x755a18:c.instructions+=3;goto B755a18;
case 0x755a19:c.instructions+=2;goto B755a19;
case 0x755a1f:c.instructions+=1;goto B755a1f;
case 0x755a24:goto L755a24;
case 0x755a27:goto L755a27;
case 0x755a31:goto L755a31;
case 0x755a38:c.instructions+=1;goto B755a38;
case 0x755a3a:goto L755a3a;
case 0x755a3c:c.instructions+=5;goto B755a3c;
case 0x755a3d:c.instructions+=4;goto B755a3d;
case 0x755a3e:c.instructions+=3;goto B755a3e;
case 0x755a43:c.instructions+=2;goto B755a43;
case 0x755a44:c.instructions+=1;goto B755a44;
case 0x755a49:goto L755a49;
case 0x755a4c:c.instructions+=2;goto B755a4c;
case 0x755a4e:c.instructions+=1;goto B755a4e;
case 0x755a50:goto L755a50;
case 0x755a52:c.instructions+=2;goto B755a52;
case 0x755a53:c.instructions+=1;goto B755a53;
case 0x755a58:goto L755a58;
case 0x755a5b:goto L755a5b;
case 0x755a62:c.instructions+=5;goto B755a62;
case 0x755a63:c.instructions+=4;goto B755a63;
case 0x755a64:c.instructions+=3;goto B755a64;
case 0x755a65:c.instructions+=2;goto B755a65;
case 0x755a66:c.instructions+=1;goto B755a66;
case 0x755a6b:goto L755a6b;
case 0x755a71:c.instructions+=1;goto B755a71;
case 0x755a72:goto L755a72;
case 0x755a7c:c.instructions+=1;goto B755a7c;
case 0x755a80:goto L755a80;
case 0x755a86:c.instructions+=11;goto B755a86;
case 0x755a8b:c.instructions+=10;goto B755a8b;
case 0x755a8c:c.instructions+=9;goto B755a8c;
case 0x755a93:c.instructions+=8;goto B755a93;
case 0x755a94:c.instructions+=7;goto B755a94;
case 0x755a9b:c.instructions+=6;goto B755a9b;
case 0x755a9c:c.instructions+=5;goto B755a9c;
case 0x755a9e:c.instructions+=4;goto B755a9e;
case 0x755aa0:c.instructions+=3;goto B755aa0;
case 0x755aa4:c.instructions+=2;goto B755aa4;
case 0x755aa9:c.instructions+=1;goto B755aa9;
case 0x755aad:goto L755aad;
case 0x755aaf:goto L755aaf;
case 0x755ab1:c.instructions+=4;goto B755ab1;
case 0x755ab2:c.instructions+=3;goto B755ab2;
case 0x755ab4:c.instructions+=2;goto B755ab4;
case 0x755ab6:c.instructions+=1;goto B755ab6;
case 0x755ab8:goto L755ab8;
case 0x755aba:c.instructions+=1;goto B755aba;
case 0x755abc:goto L755abc;
case 0x755abf:c.instructions+=3;goto B755abf;
case 0x755ac0:c.instructions+=2;goto B755ac0;
case 0x755ac2:c.instructions+=1;goto B755ac2;
case 0x755ac4:goto L755ac4;
case 0x755ac6:c.instructions+=3;goto B755ac6;
case 0x755ac9:c.instructions+=2;goto B755ac9;
case 0x755acb:c.instructions+=1;goto B755acb;
case 0x755acd:goto L755acd;
case 0x755acf:c.instructions+=1;goto B755acf;
case 0x755ad0:goto L755ad0;
case 0x755ad3:c.instructions+=1;goto B755ad3;
case 0x755ad5:goto L755ad5;
case 0x755ad8:c.instructions+=3;goto B755ad8;
case 0x755ad9:c.instructions+=2;goto B755ad9;
case 0x755adc:c.instructions+=1;goto B755adc;
case 0x755ade:goto L755ade;
case 0x755ae1:c.instructions+=1;goto B755ae1;
case 0x755ae3:goto L755ae3;
case 0x755ae5:c.instructions+=2;goto B755ae5;
case 0x755ae8:c.instructions+=1;goto B755ae8;
case 0x755aea:goto L755aea;
case 0x755aec:c.instructions+=2;goto B755aec;
case 0x755aef:c.instructions+=1;goto B755aef;
case 0x755af1:goto L755af1;
case 0x755af5:c.instructions+=3;goto B755af5;
case 0x755af7:c.instructions+=2;goto B755af7;
case 0x755af9:c.instructions+=1;goto B755af9;
case 0x755b00:goto L755b00;
case 0x755b03:c.instructions+=5;goto B755b03;
case 0x755b06:c.instructions+=4;goto B755b06;
case 0x755b07:c.instructions+=3;goto B755b07;
case 0x755b08:c.instructions+=2;goto B755b08;
case 0x755b0b:c.instructions+=1;goto B755b0b;
case 0x755b0d:goto L755b0d;
case 0x755b11:c.instructions+=1;goto B755b11;
case 0x755b15:goto L755b15;
case 0x755b17:c.instructions+=2;goto B755b17;
case 0x755b19:c.instructions+=1;goto B755b19;
case 0x755b1b:goto L755b1b;
case 0x755b20:goto L755b20;
case 0x755b22:c.instructions+=1;goto B755b22;
case 0x755b24:goto L755b24;
case 0x755b27:c.instructions+=3;goto B755b27;
case 0x755b28:c.instructions+=2;goto B755b28;
case 0x755b2a:c.instructions+=1;goto B755b2a;
case 0x755b2c:goto L755b2c;
case 0x755b2f:c.instructions+=1;goto B755b2f;
case 0x755b31:goto L755b31;
case 0x755b35:c.instructions+=1;goto B755b35;
case 0x755b37:goto L755b37;
case 0x755b3a:goto L755b3a;
case 0x755b3c:c.instructions+=1;goto B755b3c;
case 0x755b40:goto L755b40;
case 0x755b42:c.instructions+=2;goto B755b42;
case 0x755b45:c.instructions+=1;goto B755b45;
case 0x755b4b:goto L755b4b;
case 0x755b4e:c.instructions+=1;goto B755b4e;
case 0x755b50:goto L755b50;
case 0x755b53:c.instructions+=1;goto B755b53;
case 0x755b55:goto L755b55;
case 0x755b56:c.instructions+=4;goto B755b56;
case 0x755b5a:c.instructions+=3;goto B755b5a;
case 0x755b5c:c.instructions+=2;goto B755b5c;
case 0x755b5f:c.instructions+=1;goto B755b5f;
case 0x755b61:goto L755b61;
case 0x755b64:c.instructions+=1;goto B755b64;
case 0x755b66:goto L755b66;
case 0x755b69:c.instructions+=1;goto B755b69;
case 0x755b6b:goto L755b6b;
case 0x755b6c:c.instructions+=4;goto B755b6c;
case 0x755b70:c.instructions+=3;goto B755b70;
case 0x755b72:c.instructions+=2;goto B755b72;
case 0x755b75:c.instructions+=1;goto B755b75;
case 0x755b77:goto L755b77;
case 0x755b7a:c.instructions+=1;goto B755b7a;
case 0x755b7c:goto L755b7c;
case 0x755b7f:c.instructions+=1;goto B755b7f;
case 0x755b81:goto L755b81;
case 0x755b82:c.instructions+=4;goto B755b82;
case 0x755b86:c.instructions+=3;goto B755b86;
case 0x755b88:c.instructions+=2;goto B755b88;
case 0x755b8b:c.instructions+=1;goto B755b8b;
case 0x755b8d:goto L755b8d;
case 0x755b90:c.instructions+=1;goto B755b90;
case 0x755b92:goto L755b92;
case 0x755b95:c.instructions+=1;goto B755b95;
case 0x755b97:goto L755b97;
case 0x755b98:c.instructions+=4;goto B755b98;
case 0x755b9c:c.instructions+=3;goto B755b9c;
case 0x755b9e:c.instructions+=2;goto B755b9e;
case 0x755ba1:c.instructions+=1;goto B755ba1;
case 0x755ba3:goto L755ba3;
case 0x755ba6:c.instructions+=1;goto B755ba6;
case 0x755ba8:goto L755ba8;
case 0x755bab:c.instructions+=1;goto B755bab;
case 0x755bad:goto L755bad;
case 0x755bb1:c.instructions+=4;goto B755bb1;
case 0x755bb4:c.instructions+=3;goto B755bb4;
case 0x755bb5:c.instructions+=2;goto B755bb5;
case 0x755bba:c.instructions+=1;goto B755bba;
case 0x755bbc:goto L755bbc;
case 0x755bbe:goto L755bbe;
case 0x755bbf:c.instructions+=1;goto B755bbf;
case 0x755bc1:goto L755bc1;
case 0x755bc4:c.instructions+=1;goto B755bc4;
case 0x755bc6:goto L755bc6;
case 0x755bc9:c.instructions+=1;goto B755bc9;
case 0x755bcb:goto L755bcb;
case 0x755bce:goto L755bce;
case 0x755bd2:c.instructions+=3;goto B755bd2;
case 0x755bd4:c.instructions+=2;goto B755bd4;
case 0x755bd6:c.instructions+=1;goto B755bd6;
case 0x755bd8:goto L755bd8;
case 0x755bda:c.instructions+=1;goto B755bda;
case 0x755bdc:goto L755bdc;
case 0x755bdf:c.instructions+=3;goto B755bdf;
case 0x755be0:c.instructions+=2;goto B755be0;
case 0x755be2:c.instructions+=1;goto B755be2;
case 0x755be4:goto L755be4;
case 0x755be8:c.instructions+=1;goto B755be8;
case 0x755bea:goto L755bea;
case 0x755bf1:c.instructions+=7;goto B755bf1;
case 0x755bf2:c.instructions+=6;goto B755bf2;
case 0x755bf3:c.instructions+=5;goto B755bf3;
case 0x755bfd:c.instructions+=4;goto B755bfd;
case 0x755c00:c.instructions+=3;goto B755c00;
case 0x755c01:c.instructions+=2;goto B755c01;
case 0x755c08:c.instructions+=1;goto B755c08;
case 0x755c0d:goto L755c0d;
case 0x755c13:c.instructions+=1;goto B755c13;
case 0x755c14:goto L755c14;
case 0x755c15:c.instructions+=3;goto B755c15;
case 0x755c1c:c.instructions+=2;goto B755c1c;
case 0x755c1f:c.instructions+=1;goto B755c1f;
case 0x755c23:goto L755c23;
case 0x755c25:c.instructions+=3;goto B755c25;
case 0x755c26:c.instructions+=2;goto B755c26;
case 0x755c29:c.instructions+=1;goto B755c29;
case 0x755c2b:goto L755c2b;
case 0x755c2e:c.instructions+=1;goto B755c2e;
case 0x755c30:goto L755c30;
case 0x755c33:goto L755c33;
case 0x755c35:c.instructions+=3;goto B755c35;
case 0x755c36:c.instructions+=2;goto B755c36;
case 0x755c38:c.instructions+=1;goto B755c38;
case 0x755c3a:goto L755c3a;
case 0x755c3c:c.instructions+=1;goto B755c3c;
case 0x755c3e:goto L755c3e;
case 0x755c40:goto L755c40;
case 0x755c43:c.instructions+=4;goto B755c43;
case 0x755c46:c.instructions+=3;goto B755c46;
case 0x755c48:c.instructions+=2;goto B755c48;
case 0x755c4a:c.instructions+=1;goto B755c4a;
case 0x755c4c:goto L755c4c;
case 0x755c4e:c.instructions+=1;goto B755c4e;
case 0x755c50:goto L755c50;
case 0x755c52:goto L755c52;
case 0x755c54:c.instructions+=1;goto B755c54;
case 0x755c56:goto L755c56;
case 0x755c59:c.instructions+=2;goto B755c59;
case 0x755c5a:c.instructions+=1;goto B755c5a;
case 0x755c5f:goto L755c5f;
case 0x755c62:c.instructions+=1;goto B755c62;
case 0x755c6c:goto L755c6c;
case 0x755c72:c.instructions+=3;goto B755c72;
case 0x755c77:c.instructions+=2;goto B755c77;
case 0x755c79:c.instructions+=1;goto B755c79;
case 0x755c7b:goto L755c7b;
case 0x755c81:c.instructions+=2;goto B755c81;
case 0x755c83:c.instructions+=1;goto B755c83;
case 0x755c85:goto L755c85;
case 0x755c89:c.instructions+=1;goto B755c89;
case 0x755c8b:goto L755c8b;
case 0x755c8e:c.instructions+=2;goto B755c8e;
case 0x755c8f:c.instructions+=1;goto B755c8f;
case 0x755c94:goto L755c94;
case 0x755c97:c.instructions+=1;goto B755c97;
case 0x755ca1:goto L755ca1;
case 0x755ca8:c.instructions+=2;goto B755ca8;
case 0x755cad:c.instructions+=1;goto B755cad;
case 0x755caf:goto L755caf;
case 0x755cb4:goto L755cb4;
case 0x755cb5:c.instructions+=4;goto B755cb5;
case 0x755cbc:c.instructions+=3;goto B755cbc;
case 0x755cc1:c.instructions+=2;goto B755cc1;
case 0x755cc2:c.instructions+=1;goto B755cc2;
case 0x755cc7:goto L755cc7;
case 0x755cc9:c.instructions+=3;goto B755cc9;
case 0x755ccc:c.instructions+=2;goto B755ccc;
case 0x755ccf:c.instructions+=1;goto B755ccf;
case 0x755cd0:goto L755cd0;
case 0x755cd2:c.instructions+=3;goto B755cd2;
case 0x755cd3:c.instructions+=2;goto B755cd3;
case 0x755cd5:c.instructions+=1;goto B755cd5;
case 0x755cd7:goto L755cd7;
case 0x755cd9:c.instructions+=3;goto B755cd9;
case 0x755cdb:c.instructions+=2;goto B755cdb;
case 0x755ce2:c.instructions+=1;goto B755ce2;
case 0x755ce5:goto L755ce5;
case 0x755ce7:c.instructions+=3;goto B755ce7;
case 0x755ce8:c.instructions+=2;goto B755ce8;
case 0x755cea:c.instructions+=1;goto B755cea;
case 0x755cec:goto L755cec;
case 0x755cee:c.instructions+=3;goto B755cee;
case 0x755cf2:c.instructions+=2;goto B755cf2;
case 0x755cf8:c.instructions+=1;goto B755cf8;
case 0x755cfa:goto L755cfa;
case 0x755cfb:c.instructions+=6;goto B755cfb;
case 0x755cfc:c.instructions+=5;goto B755cfc;
case 0x755cfd:c.instructions+=4;goto B755cfd;
case 0x755d02:c.instructions+=3;goto B755d02;
case 0x755d03:c.instructions+=2;goto B755d03;
case 0x755d0a:c.instructions+=1;goto B755d0a;
case 0x755d0f:goto L755d0f;
case 0x755d15:c.instructions+=1;goto B755d15;
case 0x755d16:goto L755d16;
case 0x755d1d:c.instructions+=2;goto B755d1d;
case 0x755d22:c.instructions+=1;goto B755d22;
case 0x755d24:goto L755d24;
case 0x755d29:goto L755d29;
case 0x755d2f:c.instructions+=1;goto B755d2f;
case 0x755d30:goto L755d30;
case 0x755d32:c.instructions+=5;goto B755d32;
case 0x755d33:c.instructions+=4;goto B755d33;
case 0x755d35:c.instructions+=3;goto B755d35;
case 0x755d36:c.instructions+=2;goto B755d36;
case 0x755d38:c.instructions+=1;goto B755d38;
case 0x755d3a:goto L755d3a;
case 0x755d3c:c.instructions+=2;goto B755d3c;
case 0x755d3e:c.instructions+=1;goto B755d3e;
case 0x755d40:goto L755d40;
case 0x755d42:c.instructions+=3;goto B755d42;
case 0x755d43:c.instructions+=2;goto B755d43;
case 0x755d45:c.instructions+=1;goto B755d45;
case 0x755d47:goto L755d47;
case 0x755d4d:c.instructions+=2;goto B755d4d;
case 0x755d4f:c.instructions+=1;goto B755d4f;
case 0x755d50:goto L755d50;
case 0x755d53:c.instructions+=3;goto B755d53;
case 0x755d54:c.instructions+=2;goto B755d54;
case 0x755d56:c.instructions+=1;goto B755d56;
case 0x755d58:goto L755d58;
case 0x755d5a:c.instructions+=2;goto B755d5a;
case 0x755d5d:c.instructions+=1;goto B755d5d;
case 0x755d5f:goto L755d5f;
case 0x755d61:goto L755d61;
case 0x755d63:c.instructions+=2;goto B755d63;
case 0x755d66:c.instructions+=1;goto B755d66;
case 0x755d6d:goto L755d6d;
case 0x755d6f:goto L755d6f;
case 0x755d71:goto L755d71;
case 0x755d73:c.instructions+=3;goto B755d73;
case 0x755d74:c.instructions+=2;goto B755d74;
case 0x755d76:c.instructions+=1;goto B755d76;
case 0x755d78:goto L755d78;
case 0x755d7e:c.instructions+=3;goto B755d7e;
case 0x755d80:c.instructions+=2;goto B755d80;
case 0x755d82:c.instructions+=1;goto B755d82;
case 0x755d83:goto L755d83;
case 0x755d86:c.instructions+=3;goto B755d86;
case 0x755d87:c.instructions+=2;goto B755d87;
case 0x755d89:c.instructions+=1;goto B755d89;
case 0x755d8b:goto L755d8b;
case 0x755d92:c.instructions+=2;goto B755d92;
case 0x755d94:c.instructions+=1;goto B755d94;
case 0x755d97:goto L755d97;
case 0x755d99:goto L755d99;
case 0x755d9b:c.instructions+=1;goto B755d9b;
case 0x755d9e:goto L755d9e;
case 0x755da0:goto L755da0;
case 0x755da6:c.instructions+=7;goto B755da6;
case 0x755da7:c.instructions+=6;goto B755da7;
case 0x755da9:c.instructions+=5;goto B755da9;
case 0x755daf:c.instructions+=4;goto B755daf;
case 0x755db5:c.instructions+=3;goto B755db5;
case 0x755dba:c.instructions+=2;goto B755dba;
case 0x755dbe:c.instructions+=1;goto B755dbe;
case 0x755dc0:goto L755dc0;
case 0x755dc2:goto L755dc2;
case 0x755dc4:c.instructions+=5;goto B755dc4;
case 0x755dca:c.instructions+=4;goto B755dca;
case 0x755dcd:c.instructions+=3;goto B755dcd;
case 0x755dcf:c.instructions+=2;goto B755dcf;
case 0x755dd1:c.instructions+=1;goto B755dd1;
case 0x755dd3:goto L755dd3;
case 0x755dd6:c.instructions+=2;goto B755dd6;
case 0x755dda:c.instructions+=1;goto B755dda;
case 0x755de0:goto L755de0;
case 0x755de2:c.instructions+=3;goto B755de2;
case 0x755de3:c.instructions+=2;goto B755de3;
case 0x755de6:c.instructions+=1;goto B755de6;
case 0x755de8:goto L755de8;
case 0x755deb:c.instructions+=1;goto B755deb;
case 0x755ded:goto L755ded;
case 0x755df0:goto L755df0;
case 0x755df2:c.instructions+=3;goto B755df2;
case 0x755df3:c.instructions+=2;goto B755df3;
case 0x755df5:c.instructions+=1;goto B755df5;
case 0x755df7:goto L755df7;
case 0x755df9:c.instructions+=1;goto B755df9;
case 0x755dfb:goto L755dfb;
case 0x755dfd:goto L755dfd;
case 0x755e00:c.instructions+=4;goto B755e00;
case 0x755e03:c.instructions+=3;goto B755e03;
case 0x755e05:c.instructions+=2;goto B755e05;
case 0x755e07:c.instructions+=1;goto B755e07;
case 0x755e09:goto L755e09;
case 0x755e0b:c.instructions+=1;goto B755e0b;
case 0x755e0d:goto L755e0d;
case 0x755e11:c.instructions+=3;goto B755e11;
case 0x755e14:c.instructions+=2;goto B755e14;
case 0x755e16:c.instructions+=1;goto B755e16;
case 0x755e18:goto L755e18;
case 0x755e1a:c.instructions+=4;goto B755e1a;
case 0x755e1d:c.instructions+=3;goto B755e1d;
case 0x755e1e:c.instructions+=2;goto B755e1e;
case 0x755e20:c.instructions+=1;goto B755e20;
case 0x755e22:goto L755e22;
case 0x755e25:c.instructions+=7;goto B755e25;
case 0x755e27:c.instructions+=6;goto B755e27;
case 0x755e29:c.instructions+=5;goto B755e29;
case 0x755e2d:c.instructions+=4;goto B755e2d;
case 0x755e2e:c.instructions+=3;goto B755e2e;
case 0x755e2f:c.instructions+=2;goto B755e2f;
case 0x755e30:c.instructions+=1;goto B755e30;
case 0x755e35:goto L755e35;
case 0x755e38:c.instructions+=1;goto B755e38;
case 0x755e42:goto L755e42;
case 0x755e43:c.instructions+=1;goto B755e43;
case 0x755e48:goto L755e48;
case 0x755e4f:c.instructions+=7;goto B755e4f;
case 0x755e52:c.instructions+=6;goto B755e52;
case 0x755e53:c.instructions+=5;goto B755e53;
case 0x755e54:c.instructions+=4;goto B755e54;
case 0x755e55:c.instructions+=3;goto B755e55;
case 0x755e57:c.instructions+=2;goto B755e57;
case 0x755e58:c.instructions+=1;goto B755e58;
case 0x755e5d:goto L755e5d;
case 0x755e63:c.instructions+=1;goto B755e63;
case 0x755e64:goto L755e64;
case 0x755e66:c.instructions+=1;goto B755e66;
case 0x755e68:goto L755e68;
case 0x755e6e:c.instructions+=1;goto B755e6e;
case 0x755e70:goto L755e70;
case 0x755e7a:c.instructions+=1;goto B755e7a;
case 0x755e80:goto L755e80;
case 0x755e84:c.instructions+=2;goto B755e84;
case 0x755e8a:c.instructions+=1;goto B755e8a;
case 0x755e8c:goto L755e8c;
case 0x755e90:c.instructions+=3;goto B755e90;
case 0x755e96:c.instructions+=2;goto B755e96;
case 0x755e99:c.instructions+=1;goto B755e99;
case 0x755e9b:goto L755e9b;
case 0x755e9d:c.instructions+=4;goto B755e9d;
case 0x755ea0:c.instructions+=3;goto B755ea0;
case 0x755ea3:c.instructions+=2;goto B755ea3;
case 0x755ea5:c.instructions+=1;goto B755ea5;
case 0x755ea6:goto L755ea6;
case 0x755eac:c.instructions+=1;goto B755eac;
case 0x755eae:goto L755eae;
case 0x755eb2:c.instructions+=3;goto B755eb2;
case 0x755eb8:c.instructions+=2;goto B755eb8;
case 0x755ebb:c.instructions+=1;goto B755ebb;
case 0x755ebd:goto L755ebd;
case 0x755ec0:c.instructions+=1;goto B755ec0;
case 0x755ec2:goto L755ec2;
case 0x755ec5:c.instructions+=1;goto B755ec5;
case 0x755ec7:goto L755ec7;
case 0x755ecc:c.instructions+=1;goto B755ecc;
case 0x755ecd:goto L755ecd;
case 0x755ed3:c.instructions+=1;goto B755ed3;
case 0x755ed5:goto L755ed5;
case 0x755ed9:c.instructions+=2;goto B755ed9;
case 0x755edf:c.instructions+=1;goto B755edf;
case 0x755ee0:goto L755ee0;
case 0x755ee4:c.instructions+=3;goto B755ee4;
case 0x755eea:c.instructions+=2;goto B755eea;
case 0x755eed:c.instructions+=1;goto B755eed;
case 0x755eef:goto L755eef;
case 0x755ef2:c.instructions+=1;goto B755ef2;
case 0x755ef3:goto L755ef3;
case 0x755ef6:c.instructions+=1;goto B755ef6;
case 0x755ef8:goto L755ef8;
case 0x755efb:c.instructions+=1;goto B755efb;
case 0x755efd:goto L755efd;
case 0x755f02:c.instructions+=1;goto B755f02;
case 0x755f03:goto L755f03;
case 0x755f09:c.instructions+=1;goto B755f09;
case 0x755f0b:goto L755f0b;
case 0x755f11:c.instructions+=1;goto B755f11;
case 0x755f12:goto L755f12;
case 0x755f18:c.instructions+=1;goto B755f18;
case 0x755f1a:goto L755f1a;
case 0x755f20:c.instructions+=1;goto B755f20;
case 0x755f21:goto L755f21;
case 0x755f27:c.instructions+=1;goto B755f27;
case 0x755f29:goto L755f29;
case 0x755f2f:c.instructions+=1;goto B755f2f;
case 0x755f30:goto L755f30;
case 0x755f36:c.instructions+=1;goto B755f36;
case 0x755f38:goto L755f38;
case 0x755f3e:c.instructions+=1;goto B755f3e;
case 0x755f3f:goto L755f3f;
case 0x755f41:c.instructions+=1;goto B755f41;
case 0x755f50:goto L755f50;
case 0x755f51:c.instructions+=4;goto B755f51;
case 0x755f55:c.instructions+=3;goto B755f55;
case 0x755f5b:c.instructions+=2;goto B755f5b;
case 0x755f5e:c.instructions+=1;goto B755f5e;
case 0x755f60:goto L755f60;
case 0x755f65:c.instructions+=2;goto B755f65;
case 0x755f66:c.instructions+=1;goto B755f66;
case 0x755f67:goto L755f67;
case 0x755f6a:c.instructions+=1;goto B755f6a;
case 0x755f6c:goto L755f6c;
case 0x755f6f:c.instructions+=1;goto B755f6f;
case 0x755f71:goto L755f71;
case 0x755f76:c.instructions+=2;goto B755f76;
case 0x755f77:c.instructions+=1;goto B755f77;
case 0x755f78:goto L755f78;
case 0x755f7f:c.instructions+=1;goto B755f7f;
case 0x755f81:goto L755f81;
case 0x755f86:c.instructions+=2;goto B755f86;
case 0x755f87:c.instructions+=1;goto B755f87;
case 0x755f88:goto L755f88;
case 0x755f8c:c.instructions+=2;goto B755f8c;
case 0x755f8f:c.instructions+=1;goto B755f8f;
case 0x755f91:goto L755f91;
case 0x755f93:c.instructions+=2;goto B755f93;
case 0x755f94:c.instructions+=1;goto B755f94;
case 0x755f95:goto L755f95;
case 0x755f96:c.instructions+=3;goto B755f96;
case 0x755f9a:c.instructions+=2;goto B755f9a;
case 0x755f9d:c.instructions+=1;goto B755f9d;
case 0x755f9f:goto L755f9f;
case 0x755fa4:goto L755fa4;
case 0x755fa6:c.instructions+=1;goto B755fa6;
case 0x755fa8:goto L755fa8;
case 0x755fac:c.instructions+=1;goto B755fac;
case 0x755fae:goto L755fae;
case 0x755fb4:c.instructions+=2;goto B755fb4;
case 0x755fb6:c.instructions+=1;goto B755fb6;
case 0x755fb8:goto L755fb8;
case 0x755fba:goto L755fba;
case 0x755fbc:c.instructions+=1;goto B755fbc;
case 0x755fbe:goto L755fbe;
case 0x755fc2:c.instructions+=1;goto B755fc2;
case 0x755fc4:goto L755fc4;
case 0x755fca:c.instructions+=5;goto B755fca;
case 0x755fcc:c.instructions+=4;goto B755fcc;
case 0x755fce:c.instructions+=3;goto B755fce;
case 0x755fcf:c.instructions+=2;goto B755fcf;
case 0x755fd0:c.instructions+=1;goto B755fd0;
case 0x755fd2:goto L755fd2;
case 0x755fd8:c.instructions+=5;goto B755fd8;
case 0x755fde:c.instructions+=4;goto B755fde;
case 0x755fe0:c.instructions+=3;goto B755fe0;
case 0x755fe2:c.instructions+=2;goto B755fe2;
case 0x755fe5:c.instructions+=1;goto B755fe5;
case 0x755fe8:goto L755fe8;
case 0x755fea:goto L755fea;
case 0x755fec:c.instructions+=1;goto B755fec;
case 0x755fef:goto L755fef;
case 0x755ff1:goto L755ff1;
case 0x755ff7:c.instructions+=3;goto B755ff7;
case 0x755ffd:c.instructions+=2;goto B755ffd;
case 0x755fff:c.instructions+=1;goto B755fff;
default:missing_instruction(c.pc);}
B755000:L755000:{c.instructions+=3;NFSU2_TR(0x755000);
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
B755002:{NFSU2_TR(0x755002);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B755003:{NFSU2_TR(0x755003);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B755004:L755004:{c.instructions+=14;NFSU2_TR(0x755004);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B755006:{NFSU2_TR(0x755006);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B755008:{NFSU2_TR(0x755008);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B75500b:{NFSU2_TR(0x75500b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+28)),r4(U+0));
}
B75500d:{NFSU2_TR(0x75500d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B75500f:{NFSU2_TR(0x75500f);
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
B755010:{NFSU2_TR(0x755010);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B755013:{NFSU2_TR(0x755013);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B755015:{NFSU2_TR(0x755015);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B755018:{NFSU2_TR(0x755018);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B755019:{NFSU2_TR(0x755019);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75501a:{NFSU2_TR(0x75501a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B75501b:{NFSU2_TR(0x75501b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B75501c:{NFSU2_TR(0x75501c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B755020:L755020:{c.instructions+=7;NFSU2_TR(0x755020);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B755021:{NFSU2_TR(0x755021);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B755025:{NFSU2_TR(0x755025);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B755027:{NFSU2_TR(0x755027);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B755028:{NFSU2_TR(0x755028);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B755029:{NFSU2_TR(0x755029);
__builtin_memmove((R+0),(R+12),4);
}
B75502b:{NFSU2_TR(0x75502b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L75502f;}}
}
B75502d:L75502d:{c.instructions+=1;NFSU2_TR(0x75502d);
w4(R+0,u32(0-u32(r4(R+0))));
}
B75502f:L75502f:{c.instructions+=7;NFSU2_TR(0x75502f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B755033:{NFSU2_TR(0x755033);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B755034:{NFSU2_TR(0x755034);
u8 U[64];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(s64(s32(r4(U+4)))));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x755034);w8(U+48,u64(x_/y_));}
w4(R+0,u32(r8(U+48)));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x755034);w8(U+56,u64(x_%y_));}
w4(R+8,u32(r8(U+56)));
}
B755037:{NFSU2_TR(0x755037);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75503a:{NFSU2_TR(0x75503a);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75503c:{NFSU2_TR(0x75503c);
__builtin_memmove((R+28),(R+8),4);
}
B75503e:{NFSU2_TR(0x75503e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L755060;}}
}
B755040:L755040:{c.instructions+=8;NFSU2_TR(0x755040);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B755042:{NFSU2_TR(0x755042);
u8 U[12];
w4(U+0,u32(u32(u32(0xaull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B755046:{NFSU2_TR(0x755046);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B755047:{NFSU2_TR(0x755047);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B755049:{NFSU2_TR(0x755049);
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
}
B75504b:{NFSU2_TR(0x75504b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75504c:{NFSU2_TR(0x75504c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75504d:{NFSU2_TR(0x75504d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x755052ull));
TAIL_STATIC(0x754db0u,754);
}
B755052:L755052:{c.instructions+=3;NFSU2_TR(0x755052);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B755055:{NFSU2_TR(0x755055);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B755057:{NFSU2_TR(0x755057);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L755060;}}
}
B755059:L755059:{c.instructions+=5;NFSU2_TR(0x755059);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75505a:{NFSU2_TR(0x75505a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75505b:{NFSU2_TR(0x75505b);
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
B75505e:{NFSU2_TR(0x75505e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B75505f:{NFSU2_TR(0x75505f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B755060:L755060:{c.instructions+=19;NFSU2_TR(0x755060);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B755063:{NFSU2_TR(0x755063);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B755065:{NFSU2_TR(0x755065);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B755069:{NFSU2_TR(0x755069);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75506c:{NFSU2_TR(0x75506c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75506f:{NFSU2_TR(0x75506f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B755072:{NFSU2_TR(0x755072);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B755075:{NFSU2_TR(0x755075);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B755078:{NFSU2_TR(0x755078);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B75507a:{NFSU2_TR(0x75507a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75507d:{NFSU2_TR(0x75507d);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B755080:{NFSU2_TR(0x755080);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B755082:{NFSU2_TR(0x755082);
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
B755083:{NFSU2_TR(0x755083);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B755084:{NFSU2_TR(0x755084);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B755086:{NFSU2_TR(0x755086);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B755087:{NFSU2_TR(0x755087);
w4(R+0,u32(0x1ull));
}
B75508c:{NFSU2_TR(0x75508c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B75508d:{NFSU2_TR(0x75508d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B755090:L755090:{c.instructions+=5;NFSU2_TR(0x755090);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B755091:{NFSU2_TR(0x755091);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B755095:{NFSU2_TR(0x755095);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B755097:{NFSU2_TR(0x755097);
__builtin_memmove((R+0),(R+24),4);
}
B755099:{NFSU2_TR(0x755099);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L75509d;}}
}
B75509b:L75509b:{c.instructions+=1;NFSU2_TR(0x75509b);
w4(R+0,u32(0-u32(r4(R+0))));
}
B75509d:L75509d:{c.instructions+=7;NFSU2_TR(0x75509d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7550a1:{NFSU2_TR(0x7550a1);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B7550a2:{NFSU2_TR(0x7550a2);
u8 U[64];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(s64(s32(r4(U+4)))));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x7550a2);w8(U+48,u64(x_/y_));}
w4(R+0,u32(r8(U+48)));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x7550a2);w8(U+56,u64(x_%y_));}
w4(R+8,u32(r8(U+56)));
}
B7550a5:{NFSU2_TR(0x7550a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7550a8:{NFSU2_TR(0x7550a8);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B7550ab:{NFSU2_TR(0x7550ab);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7550ad:{NFSU2_TR(0x7550ad);
if(r1(R+518)){{goto L7550bb;}}
}
B7550af:L7550af:{c.instructions+=1;NFSU2_TR(0x7550af);
}
B7550b0:L7550b0:{c.instructions+=2;NFSU2_TR(0x7550b0);
u8 U[22];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
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
B7550b3:{NFSU2_TR(0x7550b3);
if(r1(R+518)){{goto L7550bf;}}
}
B7550b5:L7550b5:{c.instructions+=3;NFSU2_TR(0x7550b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B7550b7:{NFSU2_TR(0x7550b7);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7550b9:{NFSU2_TR(0x7550b9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7550b0u);}goto L7550b0;}}
}
B7550bb:L7550bb:{c.instructions+=3;NFSU2_TR(0x7550bb);
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
B7550bd:{NFSU2_TR(0x7550bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7550be:{NFSU2_TR(0x7550be);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7550bf:L7550bf:{c.instructions+=3;NFSU2_TR(0x7550bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7550c2:{NFSU2_TR(0x7550c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7550c3:{NFSU2_TR(0x7550c3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7550d0:L7550d0:{c.instructions+=6;NFSU2_TR(0x7550d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7550d1:{NFSU2_TR(0x7550d1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7550d2:{NFSU2_TR(0x7550d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7550d6:{NFSU2_TR(0x7550d6);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B7550d8:{NFSU2_TR(0x7550d8);
__builtin_memmove((R+0),(R+28),4);
}
B7550da:{NFSU2_TR(0x7550da);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L7550de;}}
}
B7550dc:L7550dc:{c.instructions+=1;NFSU2_TR(0x7550dc);
w4(R+0,u32(0-u32(r4(R+0))));
}
B7550de:L7550de:{c.instructions+=8;NFSU2_TR(0x7550de);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7550e2:{NFSU2_TR(0x7550e2);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B7550e3:{NFSU2_TR(0x7550e3);
u8 U[64];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(s64(s32(r4(U+4)))));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x7550e3);w8(U+48,u64(x_/y_));}
w4(R+0,u32(r8(U+48)));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x7550e3);w8(U+56,u64(x_%y_));}
w4(R+8,u32(r8(U+56)));
}
B7550e6:{NFSU2_TR(0x7550e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7550e9:{NFSU2_TR(0x7550e9);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B7550ec:{NFSU2_TR(0x7550ec);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7550ee:{NFSU2_TR(0x7550ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B7550f1:{NFSU2_TR(0x7550f1);
if(r1(R+518)){{goto L755102;}}
}
B7550f3:L7550f3:{c.instructions+=3;NFSU2_TR(0x7550f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B7550f5:{NFSU2_TR(0x7550f5);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7550f8:{NFSU2_TR(0x7550f8);
if(r1(R+518)){{goto L755107;}}
}
B7550fa:L7550fa:{c.instructions+=4;NFSU2_TR(0x7550fa);
__builtin_memmove((R+0),(R+8),4);
}
B7550fc:{NFSU2_TR(0x7550fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B7550fe:{NFSU2_TR(0x7550fe);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B755100:{NFSU2_TR(0x755100);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7550f3u);}goto L7550f3;}}
}
B755102:L755102:{c.instructions+=4;NFSU2_TR(0x755102);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B755103:{NFSU2_TR(0x755103);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B755104:{NFSU2_TR(0x755104);
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
B755106:{NFSU2_TR(0x755106);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B755107:L755107:{c.instructions+=12;NFSU2_TR(0x755107);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B755109:{NFSU2_TR(0x755109);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B75510b:{NFSU2_TR(0x75510b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75510e:{NFSU2_TR(0x75510e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B755110:{NFSU2_TR(0x755110);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B755112:{NFSU2_TR(0x755112);
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
B755113:{NFSU2_TR(0x755113);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B755114:{NFSU2_TR(0x755114);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B755117:{NFSU2_TR(0x755117);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B755119:{NFSU2_TR(0x755119);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75511c:{NFSU2_TR(0x75511c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75511d:{NFSU2_TR(0x75511d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B755120:L755120:{c.instructions+=5;NFSU2_TR(0x755120);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B755124:{NFSU2_TR(0x755124);
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
B755126:{NFSU2_TR(0x755126);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B755129:{NFSU2_TR(0x755129);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75512c:{NFSU2_TR(0x75512c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B755130:L755130:{c.instructions+=4;NFSU2_TR(0x755130);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B755134:{NFSU2_TR(0x755134);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B755137:{NFSU2_TR(0x755137);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B755139:{NFSU2_TR(0x755139);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75517a;}}
}
B75513b:L75513b:{c.instructions+=5;NFSU2_TR(0x75513b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75513e:{NFSU2_TR(0x75513e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75513f:{NFSU2_TR(0x75513f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B755142:{NFSU2_TR(0x755142);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B755144:{NFSU2_TR(0x755144);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L755162;}}
}
B755146:L755146:{c.instructions+=2;NFSU2_TR(0x755146);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B755149:{NFSU2_TR(0x755149);
__builtin_memmove((R+16),(R+16),4);
}
B755150:L755150:{c.instructions+=3;NFSU2_TR(0x755150);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B755153:{NFSU2_TR(0x755153);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B755157:{NFSU2_TR(0x755157);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L755162;}}
}
B755159:L755159:{c.instructions+=4;NFSU2_TR(0x755159);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B75515a:{NFSU2_TR(0x75515a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75515d:{NFSU2_TR(0x75515d);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+8)));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B755160:{NFSU2_TR(0x755160);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x755150u);}goto L755150;}}
}
B755162:L755162:{c.instructions+=4;NFSU2_TR(0x755162);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B755165:{NFSU2_TR(0x755165);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B755167:{NFSU2_TR(0x755167);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B755168:{NFSU2_TR(0x755168);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L75516d;}}
}
B75516a:L75516a:{c.instructions+=2;NFSU2_TR(0x75516a);
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
B75516c:{NFSU2_TR(0x75516c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75516d:L75516d:{c.instructions+=5;NFSU2_TR(0x75516d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B755170:{NFSU2_TR(0x755170);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B755173:{NFSU2_TR(0x755173);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B755174:{NFSU2_TR(0x755174);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B755177:{NFSU2_TR(0x755177);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75517a:L75517a:{c.instructions+=6;NFSU2_TR(0x75517a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75517d:{NFSU2_TR(0x75517d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B75517f:{NFSU2_TR(0x75517f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B755182:{NFSU2_TR(0x755182);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B755186:{NFSU2_TR(0x755186);
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
B755188:{NFSU2_TR(0x755188);
if(r1(R+518)){{goto L75518f;}}
}
B75518a:L75518a:{c.instructions+=2;NFSU2_TR(0x75518a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B75518d:{NFSU2_TR(0x75518d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B75518f:L75518f:{c.instructions+=2;NFSU2_TR(0x75518f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B755192:{NFSU2_TR(0x755192);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7551a0:L7551a0:{c.instructions+=5;NFSU2_TR(0x7551a0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7551a1:{NFSU2_TR(0x7551a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7551a5:{NFSU2_TR(0x7551a5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B7551a8:{NFSU2_TR(0x7551a8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7551a9:{NFSU2_TR(0x7551a9);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L7551b0;}}
}
B7551ab:L7551ab:{c.instructions+=1;NFSU2_TR(0x7551ab);
w4(R+12,u32(0x1ull));
}
B7551b0:L7551b0:{c.instructions+=4;NFSU2_TR(0x7551b0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7551b1:{NFSU2_TR(0x7551b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7551b5:{NFSU2_TR(0x7551b5);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x10ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B7551b8:{NFSU2_TR(0x7551b8);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L7551bf;}}
}
B7551ba:L7551ba:{c.instructions+=1;NFSU2_TR(0x7551ba);
w4(R+28,u32(0x10ull));
}
B7551bf:L7551bf:{c.instructions+=2;NFSU2_TR(0x7551bf);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7551c1:{NFSU2_TR(0x7551c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7551c6ull));
TAIL_STATIC(0x5836d0u,583);
}
B7551c6:L7551c6:{c.instructions+=16;NFSU2_TR(0x7551c6);
__builtin_memmove((R+24),(R+0),4);
}
B7551c8:{NFSU2_TR(0x7551c8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7551ca:{NFSU2_TR(0x7551ca);
__builtin_memmove((R+4),(R+24),4);
}
B7551cc:{NFSU2_TR(0x7551cc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B7551ce:{NFSU2_TR(0x7551ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7551d1:{NFSU2_TR(0x7551d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7551d4:{NFSU2_TR(0x7551d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7551d7:{NFSU2_TR(0x7551d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7551da:{NFSU2_TR(0x7551da);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7551dd:{NFSU2_TR(0x7551dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7551e0:{NFSU2_TR(0x7551e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7551e3:{NFSU2_TR(0x7551e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B7551ea:{NFSU2_TR(0x7551ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7551ed:{NFSU2_TR(0x7551ed);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7551ee:{NFSU2_TR(0x7551ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7551f1:{NFSU2_TR(0x7551f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7551f6ull));
TAIL_STATIC(0x5836d0u,583);
}
B7551f6:L7551f6:{c.instructions+=7;NFSU2_TR(0x7551f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7551f9:{NFSU2_TR(0x7551f9);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B7551fc:{NFSU2_TR(0x7551fc);
__builtin_memmove((R+8),(R+4),4);
}
B7551fe:{NFSU2_TR(0x7551fe);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B755201:{NFSU2_TR(0x755201);
__builtin_memmove((R+28),(R+0),4);
}
B755203:{NFSU2_TR(0x755203);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B755206:{NFSU2_TR(0x755206);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B755208:L755208:{c.instructions+=1;NFSU2_TR(0x755208);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L75520a;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x755208u);}goto L755208;}
}
B75520a:L75520a:{c.instructions+=4;NFSU2_TR(0x75520a);
__builtin_memmove((R+4),(R+8),4);
}
B75520c:{NFSU2_TR(0x75520c);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B75520f:{NFSU2_TR(0x75520f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B755212:{NFSU2_TR(0x755212);
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
B755214:L755214:{c.instructions+=1;NFSU2_TR(0x755214);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L755216;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x755214u);}goto L755214;}
}
B755216:L755216:{c.instructions+=3;NFSU2_TR(0x755216);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
w4(U+4,u32(0x754eb0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B75521d:{NFSU2_TR(0x75521d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75521e:{NFSU2_TR(0x75521e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L75522a;}}
}
B755220:L755220:{c.instructions+=3;NFSU2_TR(0x755220);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B755221:{NFSU2_TR(0x755221);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B755222:{NFSU2_TR(0x755222);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x755227ull));
TAIL_STATIC(0x754db0u,754);
}
B755227:L755227:{c.instructions+=1;NFSU2_TR(0x755227);
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
B75522a:L75522a:{c.instructions+=4;NFSU2_TR(0x75522a);
__builtin_memmove((R+0),(R+24),4);
}
B75522c:{NFSU2_TR(0x75522c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75522d:{NFSU2_TR(0x75522d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B75522e:{NFSU2_TR(0x75522e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B755230:L755230:{c.instructions+=6;NFSU2_TR(0x755230);
__builtin_memmove((R+0),gp(0x8b83c0),4);
}
B755235:{NFSU2_TR(0x755235);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B755236:{NFSU2_TR(0x755236);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B755238:{NFSU2_TR(0x755238);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75523a:{NFSU2_TR(0x75523a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75523b:{NFSU2_TR(0x75523b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75525d;}}
}
B75523d:L75523d:{c.instructions+=6;NFSU2_TR(0x75523d);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75523f:{NFSU2_TR(0x75523f);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B755241:{NFSU2_TR(0x755241);
u8 U[4];
w4(U+0,u32(0x7d34e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B755246:{NFSU2_TR(0x755246);
u8 U[4];
w4(U+0,u32(0x8b82b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75524b:{NFSU2_TR(0x75524b);
s4(0x8b83c0,u32(0x1ull));
}
B755255:{NFSU2_TR(0x755255);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75525aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x755230u);}goto L755230;}
}
B75525a:L75525a:{c.instructions+=1;NFSU2_TR(0x75525a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B75525d:L75525d:{c.instructions+=4;NFSU2_TR(0x75525d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B755261:{NFSU2_TR(0x755261);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B755263:{NFSU2_TR(0x755263);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B755267:{NFSU2_TR(0x755267);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L75526d;}}
}
B755269:L755269:{c.instructions+=2;NFSU2_TR(0x755269);
w4(R+8,u32(0-u32(r4(R+8))));
}
B75526b:{NFSU2_TR(0x75526b);
{goto L755287;}
}
B75526d:L75526d:{c.instructions+=2;NFSU2_TR(0x75526d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B75526f:{NFSU2_TR(0x75526f);
}
B755270:L755270:{c.instructions+=4;NFSU2_TR(0x755270);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),1);
s1(u32(r4(U+4)),r1(U+8));
}
B755273:{NFSU2_TR(0x755273);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B755274:{NFSU2_TR(0x755274);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x100ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x100ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B755279:{NFSU2_TR(0x755279);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x755270u);}goto L755270;}}
}
B75527b:L75527b:{c.instructions+=2;NFSU2_TR(0x75527b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B755281:{NFSU2_TR(0x755281);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x104ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B755287:L755287:{c.instructions+=2;NFSU2_TR(0x755287);
u8 U[22];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
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
B75528b:{NFSU2_TR(0x75528b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L7552ac;}}
}
B75528d:L75528d:{c.instructions+=4;NFSU2_TR(0x75528d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B755291:{NFSU2_TR(0x755291);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B755293:{NFSU2_TR(0x755293);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((U+4),(U+0),1);
w1(R+512,u8((r1(U+4))<(r1(R+12))));
w1(R+523,sborrow<u8>(r1(U+4),r1(R+12)));
w1(U+5,u8(u32(r1(U+4))-u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+5))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
w1(U+1,u8(u32(r1(U+5))&u32(u8(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r1(U+1)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B755295:{NFSU2_TR(0x755295);
if(r1(R+518)){{goto L755326;}}
}
B75529b:L75529b:{c.instructions+=1;NFSU2_TR(0x75529b);
{goto L7552a0;}
}
B7552a0:L7552a0:{c.instructions+=3;NFSU2_TR(0x7552a0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7552a1:{NFSU2_TR(0x7552a1);
u8 U[11];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((U+9),(U+8),1);
w1(U+10,u8(u32(r1(U+9))-u32(r1(R+12))));
w1(R+518,u8((r1(U+10))==(u8(0x0ull))));
}
B7552a4:{NFSU2_TR(0x7552a4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7552a0u);}goto L7552a0;}}
}
B7552a6:L7552a6:{c.instructions+=2;NFSU2_TR(0x7552a6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7552aa:{NFSU2_TR(0x7552aa);
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
B7552ac:L7552ac:{c.instructions+=1;NFSU2_TR(0x7552ac);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L755326;}}
}
B7552ae:L7552ae:{c.instructions+=9;NFSU2_TR(0x7552ae);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7552af:{NFSU2_TR(0x7552af);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B7552b2:{NFSU2_TR(0x7552b2);
__builtin_memmove((R+0),(R+8),4);
}
B7552b4:{NFSU2_TR(0x7552b4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7552b5:{NFSU2_TR(0x7552b5);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B7552b7:{NFSU2_TR(0x7552b7);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B7552b9:{NFSU2_TR(0x7552b9);
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
B7552bb:{NFSU2_TR(0x7552bb);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7552bf:{NFSU2_TR(0x7552bf);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L755324;}}
}
B7552c1:L7552c1:{c.instructions+=1;NFSU2_TR(0x7552c1);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B7552c3:L7552c3:{c.instructions+=31;NFSU2_TR(0x7552c3);
__builtin_memmove((R+0),(R+24),4);
}
B7552c5:{NFSU2_TR(0x7552c5);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B7552c6:{NFSU2_TR(0x7552c6);
u8 U[64];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(s64(s32(r4(U+4)))));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x7552c6);w8(U+48,u64(x_/y_));}
w4(R+0,u32(r8(U+48)));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x7552c6);w8(U+56,u64(x_%y_));}
w4(R+8,u32(r8(U+56)));
}
B7552ca:{NFSU2_TR(0x7552ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7552ce:{NFSU2_TR(0x7552ce);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+8,u32(r1(U+8)));
}
B7552d2:{NFSU2_TR(0x7552d2);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+4))));
}
B7552d4:{NFSU2_TR(0x7552d4);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7d30e0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B7552db:{NFSU2_TR(0x7552db);
__builtin_memmove((R+0),(R+28),4);
}
B7552dd:{NFSU2_TR(0x7552dd);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B7552e0:{NFSU2_TR(0x7552e0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+4))));
}
B7552e2:{NFSU2_TR(0x7552e2);
__builtin_memmove((R+4),(R+24),4);
}
B7552e4:{NFSU2_TR(0x7552e4);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffull))));
}
B7552ea:{NFSU2_TR(0x7552ea);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+12),(U+8),1);
}
B7552ed:{NFSU2_TR(0x7552ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B7552f0:{NFSU2_TR(0x7552f0);
__builtin_memmove((R+4),(R+0),4);
}
B7552f2:{NFSU2_TR(0x7552f2);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffull))));
}
B7552f8:{NFSU2_TR(0x7552f8);
w4(R+28,u32(r1(R+12)));
}
B7552fb:{NFSU2_TR(0x7552fb);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+28))));
}
B7552fd:{NFSU2_TR(0x7552fd);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7d30e0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B755304:{NFSU2_TR(0x755304);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B755307:{NFSU2_TR(0x755307);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+28))));
}
B755309:{NFSU2_TR(0x755309);
__builtin_memmove((R+28),(R+0),4);
}
B75530b:{NFSU2_TR(0x75530b);
__builtin_memmove((R+4),(R+28),4);
}
B75530d:{NFSU2_TR(0x75530d);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffull))));
}
B755313:{NFSU2_TR(0x755313);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+0),(U+8),1);
}
B755316:{NFSU2_TR(0x755316);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+8)),r1(U+0));
}
B755318:{NFSU2_TR(0x755318);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75531c:{NFSU2_TR(0x75531c);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B75531d:{NFSU2_TR(0x75531d);
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
B75531f:{NFSU2_TR(0x75531f);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),1);
s1(u32(r4(U+4)),r1(U+8));
}
B755322:{NFSU2_TR(0x755322);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7552c3u);}goto L7552c3;}}
}
B755324:L755324:{c.instructions+=2;NFSU2_TR(0x755324);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B755325:{NFSU2_TR(0x755325);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B755326:L755326:{c.instructions+=3;NFSU2_TR(0x755326);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B755327:{NFSU2_TR(0x755327);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B755328:{NFSU2_TR(0x755328);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B755330:L755330:{c.instructions+=8;NFSU2_TR(0x755330);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B755334:{NFSU2_TR(0x755334);
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
B755336:{NFSU2_TR(0x755336);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B755337:{NFSU2_TR(0x755337);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B755338:{NFSU2_TR(0x755338);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75533c:{NFSU2_TR(0x75533c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B755342:{NFSU2_TR(0x755342);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x104ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B755348:{NFSU2_TR(0x755348);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7553b3;}}
}
B75534a:L75534a:{c.instructions+=8;NFSU2_TR(0x75534a);
w4(R+4,u32(r1(R+0)));
}
B75534d:{NFSU2_TR(0x75534d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75534e:{NFSU2_TR(0x75534e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B755352:{NFSU2_TR(0x755352);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B755353:{NFSU2_TR(0x755353);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B755356:{NFSU2_TR(0x755356);
__builtin_memmove((R+4),(R+20),4);
}
B755358:{NFSU2_TR(0x755358);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffull))));
}
B75535e:{NFSU2_TR(0x75535e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B755362:L755362:{c.instructions+=27;NFSU2_TR(0x755362);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+8,u32(r1(U+0)));
}
B755365:{NFSU2_TR(0x755365);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+4))));
}
B755367:{NFSU2_TR(0x755367);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7d30e0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B75536e:{NFSU2_TR(0x75536e);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+20,shr<u32>(r4(R+20),u64(r4(U+0))));
}
B755371:{NFSU2_TR(0x755371);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+4))));
}
B755373:{NFSU2_TR(0x755373);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x1ull))));
}
B755375:{NFSU2_TR(0x755375);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B755379:{NFSU2_TR(0x755379);
w4(R+0,u32(r1(R+0)));
}
B75537c:{NFSU2_TR(0x75537c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B75537f:{NFSU2_TR(0x75537f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B755381:{NFSU2_TR(0x755381);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+0),(U+0),1);
}
B755383:{NFSU2_TR(0x755383);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B755385:{NFSU2_TR(0x755385);
__builtin_memmove((R+4),(R+20),4);
}
B755387:{NFSU2_TR(0x755387);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffull))));
}
B75538d:{NFSU2_TR(0x75538d);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+8),(U+8),1);
}
B755390:{NFSU2_TR(0x755390);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+28)),r1(U+0));
}
B755392:{NFSU2_TR(0x755392);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),1);
s1(u32(r4(U+4)),r1(U+8));
}
B755395:{NFSU2_TR(0x755395);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B755397:{NFSU2_TR(0x755397);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B75539c:{NFSU2_TR(0x75539c);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+8),(U+8),1);
}
B75539f:{NFSU2_TR(0x75539f);
u8 U[1];
w1(R+512,u8(0x0ull));
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
w1(U+0,u8(u32(r1(U+0))^u32(r1(R+8))));
s1(u32(r4(R+12)),r1(U+0));
}
B7553a1:{NFSU2_TR(0x7553a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7553a5:{NFSU2_TR(0x7553a5);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B7553a6:{NFSU2_TR(0x7553a6);
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
B7553a7:{NFSU2_TR(0x7553a7);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7553ab:{NFSU2_TR(0x7553ab);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B7553af:{NFSU2_TR(0x7553af);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x755362u);}goto L755362;}}
}
B7553b1:L7553b1:{c.instructions+=2;NFSU2_TR(0x7553b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7553b2:{NFSU2_TR(0x7553b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7553b3:L7553b3:{c.instructions+=5;NFSU2_TR(0x7553b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x104ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7553b9:{NFSU2_TR(0x7553b9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7553bf:{NFSU2_TR(0x7553bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7553c0:{NFSU2_TR(0x7553c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7553c1:{NFSU2_TR(0x7553c1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7553d0:L7553d0:{c.instructions+=16;NFSU2_TR(0x7553d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x110ull))));
}
B7553d6:{NFSU2_TR(0x7553d6);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B7553db:{NFSU2_TR(0x7553db);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7553dc:{NFSU2_TR(0x7553dc);
u8 U[8];
w4(U+0,u32(u32(u32(0x124ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7553e3:{NFSU2_TR(0x7553e3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7553e4:{NFSU2_TR(0x7553e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x130ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7553eb:{NFSU2_TR(0x7553eb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7553ec:{NFSU2_TR(0x7553ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x130ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7553f3:{NFSU2_TR(0x7553f3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7553f4:{NFSU2_TR(0x7553f4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7553f5:{NFSU2_TR(0x7553f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x120ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7553fc:{NFSU2_TR(0x7553fc);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B755400:{NFSU2_TR(0x755400);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B755401:{NFSU2_TR(0x755401);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B755402:{NFSU2_TR(0x755402);
u8 U[5];
w4(U+0,u32(u32(u32(0x1full))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B755407:{NFSU2_TR(0x755407);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75540cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x755230u);}goto L755230;}
}
B75540c:L75540c:{c.instructions+=6;NFSU2_TR(0x75540c);
w4(R+24,u32(0-u32(r4(R+24))));
}
B75540e:{NFSU2_TR(0x75540e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75540f:{NFSU2_TR(0x75540f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B755410:{NFSU2_TR(0x755410);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B755411:{NFSU2_TR(0x755411);
u8 U[4];
w4(U+0,u32(0x8b82b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B755416:{NFSU2_TR(0x755416);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75541bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x755230u);}goto L755230;}
}
B75541b:L75541b:{c.instructions+=5;NFSU2_TR(0x75541b);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75541d:{NFSU2_TR(0x75541d);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75541f:{NFSU2_TR(0x75541f);
u8 U[4];
w4(U+0,u32(0x7d34ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B755424:{NFSU2_TR(0x755424);
u8 U[4];
w4(U+0,u32(0x8b82b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B755429:{NFSU2_TR(0x755429);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75542eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x755230u);}goto L755230;}
}
B75542e:L75542e:{c.instructions+=5;NFSU2_TR(0x75542e);
u8 U[8];
w4(U+0,u32(u32(u32(0x154ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B755435:{NFSU2_TR(0x755435);
u8 U[8];
w4(U+0,u32(u32(u32(0x150ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75543c:{NFSU2_TR(0x75543c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
}
B75543f:{NFSU2_TR(0x75543f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B755442:{NFSU2_TR(0x755442);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7554e1;}}
}
B755448:L755448:{c.instructions+=6;NFSU2_TR(0x755448);
u8 U[8];
w4(U+0,u32(u32(u32(0x128ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B75544f:{NFSU2_TR(0x75544f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B755450:{NFSU2_TR(0x755450);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((R+20),(U+0),4);
}
B755453:{NFSU2_TR(0x755453);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+20))));
}
B755455:{NFSU2_TR(0x755455);
u8 U[8];
w4(U+0,u32(u32(u32(0x128ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75545c:{NFSU2_TR(0x75545c);
__builtin_memmove((R+16),(R+16),4);
}
B755460:L755460:{c.instructions+=2;NFSU2_TR(0x755460);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B755462:{NFSU2_TR(0x755462);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L755488;}}
}
B755464:L755464:{c.instructions+=5;NFSU2_TR(0x755464);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B755466:{NFSU2_TR(0x755466);
u8 U[4];
w4(U+0,u32(u32(u32(0x16ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B75546a:{NFSU2_TR(0x75546a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75546b:{NFSU2_TR(0x75546b);
u8 U[4];
w4(U+0,u32(0x8b82b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B755470:{NFSU2_TR(0x755470);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x755475ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x755330u);}goto L755330;}
}
B755475:L755475:{c.instructions+=6;NFSU2_TR(0x755475);
u8 U[5];
w4(U+0,u32(u32(u32(0x1eull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B755479:{NFSU2_TR(0x755479);
w1(R+12,u8(u32(r1(R+12))&u32(u8(0x3full))));
}
B75547c:{NFSU2_TR(0x75547c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B75547f:{NFSU2_TR(0x75547f);
w1(R+12,u8(u32(r1(R+12))+u32(u8(0x20ull))));
}
B755482:{NFSU2_TR(0x755482);
u8 U[5];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B755486:{NFSU2_TR(0x755486);
{goto L755495;}
}
B755488:L755488:{c.instructions+=5;NFSU2_TR(0x755488);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+12),(U+0),1);
}
B75548a:{NFSU2_TR(0x75548a);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B75548b:{NFSU2_TR(0x75548b);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B75548d:{NFSU2_TR(0x75548d);
u8 U[5];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B755491:{NFSU2_TR(0x755491);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L755495;}}
}
B755493:L755493:{c.instructions+=1;NFSU2_TR(0x755493);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B755495:L755495:{c.instructions+=2;NFSU2_TR(0x755495);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
w1(R+512,u8((r1(U+0))<(u8(0x20ull))));
}
B755498:{NFSU2_TR(0x755498);
if(r1(R+512)){{goto L75549f;}}
}
B75549a:L75549a:{c.instructions+=2;NFSU2_TR(0x75549a);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
w1(R+512,u8((r1(U+0))<(u8(0x7full))));
}
B75549d:{NFSU2_TR(0x75549d);
if(r1(R+512)){{goto L7554a5;}}
}
B75549f:L75549f:{c.instructions+=2;NFSU2_TR(0x75549f);
w1(R+12,u8(0x7full));
}
B7554a1:{NFSU2_TR(0x7554a1);
u8 U[5];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7554a5:L7554a5:{c.instructions+=6;NFSU2_TR(0x7554a5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7554a7:{NFSU2_TR(0x7554a7);
u8 U[4];
w4(U+0,u32(u32(u32(0x17ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B7554ab:{NFSU2_TR(0x7554ab);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7554ac:{NFSU2_TR(0x7554ac);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B7554b0:{NFSU2_TR(0x7554b0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7554b1:{NFSU2_TR(0x7554b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7554b6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x755330u);}goto L755330;}
}
B7554b6:L7554b6:{c.instructions+=14;NFSU2_TR(0x7554b6);
u8 U[5];
w4(U+0,u32(u32(u32(0x1full))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B7554bb:{NFSU2_TR(0x7554bb);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B7554bc:{NFSU2_TR(0x7554bc);
w4(R+4,u32(0x60ull));
}
B7554c1:{NFSU2_TR(0x7554c1);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x7554c1);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x7554c1);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B7554c3:{NFSU2_TR(0x7554c3);
w4(R+0,u32(r1(R+12)));
}
B7554c6:{NFSU2_TR(0x7554c6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B7554c9:{NFSU2_TR(0x7554c9);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B7554cd:{NFSU2_TR(0x7554cd);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B7554ce:{NFSU2_TR(0x7554ce);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x7554ce);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x7554ce);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B7554d0:{NFSU2_TR(0x7554d0);
w1(R+8,u8(u32(r1(R+8))+u32(u8(0x20ull))));
}
B7554d3:{NFSU2_TR(0x7554d3);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+24)),r1(U+0));
}
B7554d5:{NFSU2_TR(0x7554d5);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B7554d6:{NFSU2_TR(0x7554d6);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
}
B7554d7:{NFSU2_TR(0x7554d7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x755460u);}goto L755460;}}
}
B7554d9:L7554d9:{c.instructions+=2;NFSU2_TR(0x7554d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x128ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7554e0:{NFSU2_TR(0x7554e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7554e1:L7554e1:{c.instructions+=2;NFSU2_TR(0x7554e1);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7554e3:{NFSU2_TR(0x7554e3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7554e8;}}
}
B7554e5:L7554e5:{c.instructions+=1;NFSU2_TR(0x7554e5);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+24)),r1(U+0));
}
B7554e8:L7554e8:{c.instructions+=6;NFSU2_TR(0x7554e8);
u8 U[8];
w4(U+0,u32(u32(u32(0x118ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7554ef:{NFSU2_TR(0x7554ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7554f0:{NFSU2_TR(0x7554f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7554f1:{NFSU2_TR(0x7554f1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7554f3:{NFSU2_TR(0x7554f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7554f4:{NFSU2_TR(0x7554f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7554f9ull));
TAIL_STATIC(0x76115eu,761);
}
B7554f9:L7554f9:{c.instructions+=2;NFSU2_TR(0x7554f9);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x110ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x110ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x110ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7554ff:{NFSU2_TR(0x7554ff);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B755500:L755500:{c.instructions+=4;NFSU2_TR(0x755500);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B755504:{NFSU2_TR(0x755504);
w4(R+0,u32(0x800ull));
}
B755509:{NFSU2_TR(0x755509);
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
B75550b:{NFSU2_TR(0x75550b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L755511;}}
}
B75550d:L75550d:{c.instructions+=1;NFSU2_TR(0x75550d);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B755511:L755511:{c.instructions+=4;NFSU2_TR(0x755511);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B755512:{NFSU2_TR(0x755512);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B755513:{NFSU2_TR(0x755513);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B755514:{NFSU2_TR(0x755514);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x755519ull));
TAIL_STATIC(0x759670u,759);
}
B755519:L755519:{c.instructions+=4;NFSU2_TR(0x755519);
__builtin_memmove((R+20),(R+0),4);
}
B75551b:{NFSU2_TR(0x75551b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75551f:{NFSU2_TR(0x75551f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B755520:{NFSU2_TR(0x755520);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x755525ull));
TAIL_STATIC(0x5832f0u,583);
}
B755525:L755525:{c.instructions+=3;NFSU2_TR(0x755525);
u8 U[4];
w4(U+0,u32(0x140ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75552a:{NFSU2_TR(0x75552a);
__builtin_memmove((R+12),(R+0),4);
}
B75552c:{NFSU2_TR(0x75552c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x755531ull));
TAIL_STATIC(0x5832f0u,583);
}
B755531:L755531:{c.instructions+=4;NFSU2_TR(0x755531);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B755534:{NFSU2_TR(0x755534);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B755536:{NFSU2_TR(0x755536);
__builtin_memmove((R+24),(R+0),4);
}
B755538:{NFSU2_TR(0x755538);
if(r1(R+518)){{goto L755576;}}
}
B75553a:L75553a:{c.instructions+=2;NFSU2_TR(0x75553a);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75553c:{NFSU2_TR(0x75553c);
if(r1(R+518)){{goto L75556d;}}
}
B75553e:L75553e:{c.instructions+=2;NFSU2_TR(0x75553e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B755540:{NFSU2_TR(0x755540);
if(r1(R+518)){{goto L75556d;}}
}
B755542:L755542:{c.instructions+=4;NFSU2_TR(0x755542);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B755543:{NFSU2_TR(0x755543);
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
B755545:{NFSU2_TR(0x755545);
__builtin_memmove((R+28),(R+24),4);
}
B755547:{NFSU2_TR(0x755547);
w4(R+4,u32(0x50ull));
}
B75554c:L75554c:{c.instructions+=1;NFSU2_TR(0x75554c);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L75554e;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75554cu);}goto L75554c;}
}
B75554e:L75554e:{c.instructions+=11;NFSU2_TR(0x75554e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B755552:{NFSU2_TR(0x755552);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B755553:{NFSU2_TR(0x755553);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B755559:{NFSU2_TR(0x755559);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
s4(u32(r4(R+24)),r4(U+0));
}
B75555b:{NFSU2_TR(0x75555b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B755561:{NFSU2_TR(0x755561);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x128ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B755567:{NFSU2_TR(0x755567);
__builtin_memmove((R+0),(R+24),4);
}
B755569:{NFSU2_TR(0x755569);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75556a:{NFSU2_TR(0x75556a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B75556b:{NFSU2_TR(0x75556b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B75556c:{NFSU2_TR(0x75556c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75556d:L75556d:{c.instructions+=2;NFSU2_TR(0x75556d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75556e:{NFSU2_TR(0x75556e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x755573ull));
TAIL_STATIC(0x7596a0u,759);
}
B755573:L755573:{c.instructions+=1;NFSU2_TR(0x755573);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B755576:L755576:{c.instructions+=2;NFSU2_TR(0x755576);
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
B755578:{NFSU2_TR(0x755578);
if(r1(R+518)){{goto L755583;}}
}
B75557a:L75557a:{c.instructions+=2;NFSU2_TR(0x75557a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75557b:{NFSU2_TR(0x75557b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x755580ull));
TAIL_STATIC(0x598ec0u,598);
}
B755580:L755580:{c.instructions+=1;NFSU2_TR(0x755580);
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
B755583:L755583:{c.instructions+=5;NFSU2_TR(0x755583);
__builtin_memmove((R+0),(R+24),4);
}
B755585:{NFSU2_TR(0x755585);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B755586:{NFSU2_TR(0x755586);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B755587:{NFSU2_TR(0x755587);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B755588:{NFSU2_TR(0x755588);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B755590:L755590:{c.instructions+=5;NFSU2_TR(0x755590);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B755591:{NFSU2_TR(0x755591);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B755595:{NFSU2_TR(0x755595);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B755597:{NFSU2_TR(0x755597);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B755598:{NFSU2_TR(0x755598);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75559dull));
TAIL_STATIC(0x7596a0u,759);
}
B75559d:L75559d:{c.instructions+=3;NFSU2_TR(0x75559d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7555a3:{NFSU2_TR(0x7555a3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7555a4:{NFSU2_TR(0x7555a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7555a9ull));
TAIL_STATIC(0x598ec0u,598);
}
B7555a9:L7555a9:{c.instructions+=2;NFSU2_TR(0x7555a9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7555aa:{NFSU2_TR(0x7555aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7555afull));
TAIL_STATIC(0x598ec0u,598);
}
B7555af:L7555af:{c.instructions+=3;NFSU2_TR(0x7555af);
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
B7555b2:{NFSU2_TR(0x7555b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7555b3:{NFSU2_TR(0x7555b3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7555c0:L7555c0:{c.instructions+=11;NFSU2_TR(0x7555c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x104ull))));
}
B7555c6:{NFSU2_TR(0x7555c6);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B7555cb:{NFSU2_TR(0x7555cb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7555cc:{NFSU2_TR(0x7555cc);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7555cd:{NFSU2_TR(0x7555cd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7555ce:{NFSU2_TR(0x7555ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x114ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7555d5:{NFSU2_TR(0x7555d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7555dc:{NFSU2_TR(0x7555dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B7555de:{NFSU2_TR(0x7555de);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7555df:{NFSU2_TR(0x7555df);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7555e0:{NFSU2_TR(0x7555e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7555e5ull));
TAIL_STATIC(0x759910u,759);
}
B7555e5:L7555e5:{c.instructions+=5;NFSU2_TR(0x7555e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7555eb:{NFSU2_TR(0x7555eb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7555ee:{NFSU2_TR(0x7555ee);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7555f1:{NFSU2_TR(0x7555f1);
w4(R+12,u32(0x2ull));
}
B7555f6:{NFSU2_TR(0x7555f6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L755622;}}
}
B7555f8:L7555f8:{c.instructions+=6;NFSU2_TR(0x7555f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B7555fa:{NFSU2_TR(0x7555fa);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7555fc:{NFSU2_TR(0x7555fc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7555fe:{NFSU2_TR(0x7555fe);
u8 U[4];
w4(U+0,u32(0x73746174ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B755603:{NFSU2_TR(0x755603);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B755604:{NFSU2_TR(0x755604);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x755609ull));
TAIL_STATIC(0x75a180u,75a);
}
B755609:L755609:{c.instructions+=3;NFSU2_TR(0x755609);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B75560c:{NFSU2_TR(0x75560c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75560e:{NFSU2_TR(0x75560e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L755616;}}
}
B755610:L755610:{c.instructions+=1;NFSU2_TR(0x755610);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B755616:L755616:{c.instructions+=1;NFSU2_TR(0x755616);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L755622;}}
}
B755618:L755618:{c.instructions+=1;NFSU2_TR(0x755618);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
w4(U+4,u32(0x7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B755622:L755622:{c.instructions+=3;NFSU2_TR(0x755622);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B755628:{NFSU2_TR(0x755628);
w4(R+20,u32(0x3ull));
}
B75562d:{NFSU2_TR(0x75562d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75565c;}}
}
B75562f:L75562f:{c.instructions+=4;NFSU2_TR(0x75562f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B755635:{NFSU2_TR(0x755635);
__builtin_memmove((R+0),(R+8),4);
}
B755637:{NFSU2_TR(0x755637);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75563a:{NFSU2_TR(0x75563a);
__builtin_memmove((R+12),(R+12),4);
}
B755640:L755640:{c.instructions+=4;NFSU2_TR(0x755640);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B755642:{NFSU2_TR(0x755642);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B755643:{NFSU2_TR(0x755643);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B755645:{NFSU2_TR(0x755645);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x755640u);}goto L755640;}}
}
B755647:L755647:{c.instructions+=6;NFSU2_TR(0x755647);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B755649:{NFSU2_TR(0x755649);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75564a:{NFSU2_TR(0x75564a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75564b:{NFSU2_TR(0x75564b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B75564d:{NFSU2_TR(0x75564d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75564e:{NFSU2_TR(0x75564e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x755653ull));
TAIL_STATIC(0x759fe0u,759);
}
B755653:L755653:{c.instructions+=2;NFSU2_TR(0x755653);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B755656:{NFSU2_TR(0x755656);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75565c:L75565c:{c.instructions+=2;NFSU2_TR(0x75565c);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+20))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B755662:{NFSU2_TR(0x755662);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7556a6;}}
}
B755664:L755664:{c.instructions+=6;NFSU2_TR(0x755664);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B755666:{NFSU2_TR(0x755666);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B755668:{NFSU2_TR(0x755668);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B75566c:{NFSU2_TR(0x75566c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75566d:{NFSU2_TR(0x75566d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75566e:{NFSU2_TR(0x75566e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x755673ull));
TAIL_STATIC(0x75a060u,75a);
}
B755673:L755673:{c.instructions+=3;NFSU2_TR(0x755673);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B755676:{NFSU2_TR(0x755676);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B755678:{NFSU2_TR(0x755678);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L75569a;}}
}
B75567a:L75567a:{c.instructions+=5;NFSU2_TR(0x75567a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B755680:{NFSU2_TR(0x755680);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B755684:{NFSU2_TR(0x755684);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+8)),r1(U+0));
}
B755686:{NFSU2_TR(0x755686);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B755690:{NFSU2_TR(0x755690);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B75569a:L75569a:{c.instructions+=1;NFSU2_TR(0x75569a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L7556a6;}}
}
B75569c:L75569c:{c.instructions+=1;NFSU2_TR(0x75569c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
w4(U+4,u32(0x7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7556a6:L7556a6:{c.instructions+=4;NFSU2_TR(0x7556a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7556ac:{NFSU2_TR(0x7556ac);
w4(R+28,u32(0x4ull));
}
B7556b1:{NFSU2_TR(0x7556b1);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7556b3:{NFSU2_TR(0x7556b3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L755930;}}
}
B7556b9:L7556b9:{c.instructions+=10;NFSU2_TR(0x7556b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7556bf:{NFSU2_TR(0x7556bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x128ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7556c5:{NFSU2_TR(0x7556c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7556cb:{NFSU2_TR(0x7556cb);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B7556cd:{NFSU2_TR(0x7556cd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7556ce:{NFSU2_TR(0x7556ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B7556d0:{NFSU2_TR(0x7556d0);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B7556d2:{NFSU2_TR(0x7556d2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7556d3:{NFSU2_TR(0x7556d3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7556d4:{NFSU2_TR(0x7556d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7556d9ull));
TAIL_STATIC(0x75a060u,75a);
}
B7556d9:L7556d9:{c.instructions+=3;NFSU2_TR(0x7556d9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B7556dc:{NFSU2_TR(0x7556dc);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7556de:{NFSU2_TR(0x7556de);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7556e8;}}
}
B7556e0:L7556e0:{c.instructions+=2;NFSU2_TR(0x7556e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B7556e6:{NFSU2_TR(0x7556e6);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B7556e8:L7556e8:{c.instructions+=1;NFSU2_TR(0x7556e8);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L7556f4;}}
}
B7556ea:L7556ea:{c.instructions+=1;NFSU2_TR(0x7556ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
w4(U+4,u32(0x7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7556f4:L7556f4:{c.instructions+=2;NFSU2_TR(0x7556f4);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7556fa:{NFSU2_TR(0x7556fa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L755930;}}
}
B755700:L755700:{c.instructions+=3;NFSU2_TR(0x755700);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B755706:{NFSU2_TR(0x755706);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B755708:{NFSU2_TR(0x755708);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L755930;}}
}
B75570e:L75570e:{c.instructions+=5;NFSU2_TR(0x75570e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B755714:{NFSU2_TR(0x755714);
__builtin_memmove((R+0),(R+8),4);
}
B755716:{NFSU2_TR(0x755716);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffffdull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B75571a:{NFSU2_TR(0x75571a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75571c:{NFSU2_TR(0x75571c);
if(r1(R+518)){{goto L755a5b;}}
}
B755722:L755722:{c.instructions+=2;NFSU2_TR(0x755722);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0xdull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B755725:{NFSU2_TR(0x755725);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L755739;}}
}
B755727:L755727:{c.instructions+=2;NFSU2_TR(0x755727);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0xaull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B75572b:{NFSU2_TR(0x75572b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L755739;}}
}
B75572d:L75572d:{c.instructions+=2;NFSU2_TR(0x75572d);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0xdull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B755731:{NFSU2_TR(0x755731);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L755739;}}
}
B755733:L755733:{c.instructions+=2;NFSU2_TR(0x755733);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0xaull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B755737:{NFSU2_TR(0x755737);
if(r1(R+518)){{goto L755755;}}
}
B755739:L755739:{c.instructions+=3;NFSU2_TR(0x755739);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B75573a:{NFSU2_TR(0x75573a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75573c:{NFSU2_TR(0x75573c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x755722u);}goto L755722;}}
}
B75573e:L75573e:{c.instructions+=6;NFSU2_TR(0x75573e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75573f:{NFSU2_TR(0x75573f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B755740:{NFSU2_TR(0x755740);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B755741:{NFSU2_TR(0x755741);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B755742:{NFSU2_TR(0x755742);
u8 U[8];
w4(U+0,u32(u32(u32(0x100ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B755749:{NFSU2_TR(0x755749);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75574eull));
TAIL_STATIC(0x76115eu,761);
}
B75574e:L75574e:{c.instructions+=2;NFSU2_TR(0x75574e);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x104ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x104ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x104ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B755754:{NFSU2_TR(0x755754);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B755755:L755755:{c.instructions+=2;NFSU2_TR(0x755755);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B755757:{NFSU2_TR(0x755757);
if(r1(R+518)){{goto L755a5b;}}
}
B75575d:L75575d:{c.instructions+=8;NFSU2_TR(0x75575d);
__builtin_memmove((R+4),(R+0),4);
}
B75575f:{NFSU2_TR(0x75575f);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B755761:{NFSU2_TR(0x755761);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B755763:{NFSU2_TR(0x755763);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B755769:{NFSU2_TR(0x755769);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B75576d:{NFSU2_TR(0x75576d);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B755771:{NFSU2_TR(0x755771);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B755777:{NFSU2_TR(0x755777);
if(r1(R+518)){{goto L755793;}}
}
B755779:L755779:{c.instructions+=5;NFSU2_TR(0x755779);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75577f:{NFSU2_TR(0x75577f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B755785:{NFSU2_TR(0x755785);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B755787:{NFSU2_TR(0x755787);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75578d:{NFSU2_TR(0x75578d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x134ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B755793:L755793:{c.instructions+=5;NFSU2_TR(0x755793);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B755799:{NFSU2_TR(0x755799);
__builtin_memmove((R+0),(R+28),4);
}
B75579b:{NFSU2_TR(0x75579b);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B75579d:{NFSU2_TR(0x75579d);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x48ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B7557a0:{NFSU2_TR(0x7557a0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L755905;}}
}
B7557a6:L7557a6:{c.instructions+=4;NFSU2_TR(0x7557a6);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B7557a9:{NFSU2_TR(0x7557a9);
w1(R+8,u8(0x54ull));
}
B7557ab:{NFSU2_TR(0x7557ab);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(R+12))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B7557ad:{NFSU2_TR(0x7557ad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L755905;}}
}
B7557b3:L7557b3:{c.instructions+=2;NFSU2_TR(0x7557b3);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+8))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B7557b6:{NFSU2_TR(0x7557b6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L755905;}}
}
B7557bc:L7557bc:{c.instructions+=2;NFSU2_TR(0x7557bc);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x50ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B7557c0:{NFSU2_TR(0x7557c0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L755905;}}
}
B7557c6:L7557c6:{c.instructions+=2;NFSU2_TR(0x7557c6);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x20ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x20ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B7557c9:{NFSU2_TR(0x7557c9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7557d5;}}
}
B7557cb:L7557cb:{c.instructions+=4;NFSU2_TR(0x7557cb);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B7557ce:{NFSU2_TR(0x7557ce);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7557cf:{NFSU2_TR(0x7557cf);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7557d1:{NFSU2_TR(0x7557d1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7557c6u);}goto L7557c6;}}
}
B7557d3:L7557d3:{c.instructions+=1;NFSU2_TR(0x7557d3);
{goto L7557ed;}
}
B7557d5:L7557d5:{c.instructions+=3;NFSU2_TR(0x7557d5);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B7557d7:{NFSU2_TR(0x7557d7);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7557d9:{NFSU2_TR(0x7557d9);
if(r1(R+518)){{goto L7557ed;}}
}
B7557db:L7557db:{c.instructions+=1;NFSU2_TR(0x7557db);
{goto L7557e0;}
}
B7557e0:L7557e0:{c.instructions+=2;NFSU2_TR(0x7557e0);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x20ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x20ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B7557e3:{NFSU2_TR(0x7557e3);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L7557ed;}}
}
B7557e5:L7557e5:{c.instructions+=4;NFSU2_TR(0x7557e5);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B7557e8:{NFSU2_TR(0x7557e8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7557e9:{NFSU2_TR(0x7557e9);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7557eb:{NFSU2_TR(0x7557eb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7557e0u);}goto L7557e0;}}
}
B7557ed:L7557ed:{c.instructions+=5;NFSU2_TR(0x7557ed);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B7557ef:{NFSU2_TR(0x7557ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7557f5:{NFSU2_TR(0x7557f5);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B7557f7:{NFSU2_TR(0x7557f7);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x30ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B7557fa:{NFSU2_TR(0x7557fa);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L755826;}}
}
B7557fc:L7557fc:{c.instructions+=1;NFSU2_TR(0x7557fc);
__builtin_memmove((R+16),(R+16),4);
}
B755800:L755800:{c.instructions+=2;NFSU2_TR(0x755800);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x39ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x39ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B755803:{NFSU2_TR(0x755803);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L755826;}}
}
B755805:L755805:{c.instructions+=11;NFSU2_TR(0x755805);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B755807:{NFSU2_TR(0x755807);
__builtin_memmove((R+8),(R+4),1);
}
B755809:{NFSU2_TR(0x755809);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75580f:{NFSU2_TR(0x75580f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B755812:{NFSU2_TR(0x755812);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfull))));
}
B755815:{NFSU2_TR(0x755815);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B755818:{NFSU2_TR(0x755818);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B755819:{NFSU2_TR(0x755819);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75581f:{NFSU2_TR(0x75581f);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B755821:{NFSU2_TR(0x755821);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x30ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B755824:{NFSU2_TR(0x755824);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x755800u);}goto L755800;}}
}
B755826:L755826:{c.instructions+=4;NFSU2_TR(0x755826);
u8 U[4];
w4(U+0,u32(0x7d2af0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75582b:{NFSU2_TR(0x75582b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75582c:{NFSU2_TR(0x75582c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B755836:{NFSU2_TR(0x755836);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75583bull));
TAIL_STATIC(0x75f140u,75f);
}
B75583b:L75583b:{c.instructions+=3;NFSU2_TR(0x75583b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B75583e:{NFSU2_TR(0x75583e);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B755840:{NFSU2_TR(0x755840);
if(r1(R+518)){{goto L755896;}}
}
B755842:L755842:{c.instructions+=4;NFSU2_TR(0x755842);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B755845:{NFSU2_TR(0x755845);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B755846:{NFSU2_TR(0x755846);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x20ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x20ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B755849:{NFSU2_TR(0x755849);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L755863;}}
}
B75584b:L75584b:{c.instructions+=1;NFSU2_TR(0x75584b);
{goto L755850;}
}
B755850:L755850:{c.instructions+=2;NFSU2_TR(0x755850);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x30ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B755853:{NFSU2_TR(0x755853);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L75585a;}}
}
B755855:L755855:{c.instructions+=2;NFSU2_TR(0x755855);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x39ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x39ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B755858:{NFSU2_TR(0x755858);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L755863;}}
}
B75585a:L75585a:{c.instructions+=4;NFSU2_TR(0x75585a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B75585d:{NFSU2_TR(0x75585d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B75585e:{NFSU2_TR(0x75585e);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x20ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x20ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B755861:{NFSU2_TR(0x755861);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x755850u);}goto L755850;}}
}
B755863:L755863:{c.instructions+=4;NFSU2_TR(0x755863);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B755869:{NFSU2_TR(0x755869);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B75586b:{NFSU2_TR(0x75586b);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x30ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B75586e:{NFSU2_TR(0x75586e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L755896;}}
}
B755870:L755870:{c.instructions+=2;NFSU2_TR(0x755870);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x39ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x39ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B755873:{NFSU2_TR(0x755873);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L755896;}}
}
B755875:L755875:{c.instructions+=11;NFSU2_TR(0x755875);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B755877:{NFSU2_TR(0x755877);
__builtin_memmove((R+8),(R+4),1);
}
B755879:{NFSU2_TR(0x755879);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75587f:{NFSU2_TR(0x75587f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B755882:{NFSU2_TR(0x755882);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfull))));
}
B755885:{NFSU2_TR(0x755885);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B755888:{NFSU2_TR(0x755888);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B755889:{NFSU2_TR(0x755889);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75588f:{NFSU2_TR(0x75588f);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B755891:{NFSU2_TR(0x755891);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x30ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B755894:{NFSU2_TR(0x755894);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x755870u);}goto L755870;}}
}
B755896:L755896:{c.instructions+=5;NFSU2_TR(0x755896);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75589c:{NFSU2_TR(0x75589c);
u8 U[4];
w4(U+0,u32(0x7d2accull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7558a1:{NFSU2_TR(0x7558a1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7558a2:{NFSU2_TR(0x7558a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7558a8:{NFSU2_TR(0x7558a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7558adull));
TAIL_STATIC(0x75f140u,75f);
}
B7558ad:L7558ad:{c.instructions+=13;NFSU2_TR(0x7558ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7558b3:{NFSU2_TR(0x7558b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7558b9:{NFSU2_TR(0x7558b9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B7558bc:{NFSU2_TR(0x7558bc);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B7558be:{NFSU2_TR(0x7558be);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B7558c0:{NFSU2_TR(0x7558c0);
w4(R+0,u32(0-u32(r4(R+0))));
}
B7558c2:{NFSU2_TR(0x7558c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7558c8:{NFSU2_TR(0x7558c8);
u8 U[13];
w4(U+0,u32(u32(u32(0xfffffffeull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0xdull));
s1(u32(r4(U+8)),r1(U+12));
}
B7558cd:{NFSU2_TR(0x7558cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7558d3:{NFSU2_TR(0x7558d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7558d9:{NFSU2_TR(0x7558d9);
u8 U[13];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0xaull));
s1(u32(r4(U+8)),r1(U+12));
}
B7558de:{NFSU2_TR(0x7558de);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7558e5:{NFSU2_TR(0x7558e5);
if(r1(R+518)){{goto L755926;}}
}
B7558e7:L7558e7:{c.instructions+=3;NFSU2_TR(0x7558e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7558ed:{NFSU2_TR(0x7558ed);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B7558ef:{NFSU2_TR(0x7558ef);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L7558f9;}}
}
B7558f1:L7558f1:{c.instructions+=2;NFSU2_TR(0x7558f1);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x134ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+0)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B7558f7:{NFSU2_TR(0x7558f7);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L755926;}}
}
B7558f9:L7558f9:{c.instructions+=2;NFSU2_TR(0x7558f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B755903:{NFSU2_TR(0x755903);
{goto L755930;}
}
B755905:L755905:{c.instructions+=7;NFSU2_TR(0x755905);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B755906:{NFSU2_TR(0x755906);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
w4(U+4,u32(0x7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B755910:{NFSU2_TR(0x755910);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B755911:{NFSU2_TR(0x755911);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B755912:{NFSU2_TR(0x755912);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B755913:{NFSU2_TR(0x755913);
u8 U[8];
w4(U+0,u32(u32(u32(0x100ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75591a:{NFSU2_TR(0x75591a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75591full));
TAIL_STATIC(0x76115eu,761);
}
B75591f:L75591f:{c.instructions+=2;NFSU2_TR(0x75591f);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x104ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x104ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x104ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B755925:{NFSU2_TR(0x755925);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B755926:L755926:{c.instructions+=1;NFSU2_TR(0x755926);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B755930:L755930:{c.instructions+=5;NFSU2_TR(0x755930);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B755936:{NFSU2_TR(0x755936);
w4(R+12,u32(0x5ull));
}
B75593b:{NFSU2_TR(0x75593b);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B75593d:{NFSU2_TR(0x75593d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75593f:{NFSU2_TR(0x75593f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L755a31;}}
}
B755945:L755945:{c.instructions+=3;NFSU2_TR(0x755945);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75594b:{NFSU2_TR(0x75594b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75594d:{NFSU2_TR(0x75594d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L755963;}}
}
B75594f:L75594f:{c.instructions+=2;NFSU2_TR(0x75594f);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B755955:{NFSU2_TR(0x755955);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L755963;}}
}
B755957:L755957:{c.instructions+=2;NFSU2_TR(0x755957);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75595d:{NFSU2_TR(0x75595d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B755963:L755963:{c.instructions+=5;NFSU2_TR(0x755963);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B755969:{NFSU2_TR(0x755969);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x128ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75596f:{NFSU2_TR(0x75596f);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B755971:{NFSU2_TR(0x755971);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B755973:{NFSU2_TR(0x755973);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7559d9;}}
}
B755975:L755975:{c.instructions+=7;NFSU2_TR(0x755975);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B75597b:{NFSU2_TR(0x75597b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75597c:{NFSU2_TR(0x75597c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B75597e:{NFSU2_TR(0x75597e);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B755980:{NFSU2_TR(0x755980);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B755981:{NFSU2_TR(0x755981);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B755982:{NFSU2_TR(0x755982);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x755987ull));
TAIL_STATIC(0x75a060u,75a);
}
B755987:L755987:{c.instructions+=3;NFSU2_TR(0x755987);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B75598a:{NFSU2_TR(0x75598a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75598c:{NFSU2_TR(0x75598c);
if(r1(R+518)){{goto L755a31;}}
}
B755992:L755992:{c.instructions+=2;NFSU2_TR(0x755992);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B755995:{NFSU2_TR(0x755995);
if(r1(R+518)){{goto L7559fd;}}
}
B755997:L755997:{c.instructions+=2;NFSU2_TR(0x755997);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B755999:{NFSU2_TR(0x755999);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L755a72;}}
}
B75599f:L75599f:{c.instructions+=10;NFSU2_TR(0x75599f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7559a5:{NFSU2_TR(0x7559a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x134ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B7559ab:{NFSU2_TR(0x7559ab);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B7559ad:{NFSU2_TR(0x7559ad);
w4(R+20,u32(u32(r4(R+20))+u32(r4(R+0))));
}
B7559af:{NFSU2_TR(0x7559af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7559b5:{NFSU2_TR(0x7559b5);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B7559b7:{NFSU2_TR(0x7559b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7559bd:{NFSU2_TR(0x7559bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x134ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7559c3:{NFSU2_TR(0x7559c3);
__builtin_memmove((R+4),(R+20),4);
}
B7559c5:{NFSU2_TR(0x7559c5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L7559cb;}}
}
B7559c7:L7559c7:{c.instructions+=2;NFSU2_TR(0x7559c7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B7559c9:{NFSU2_TR(0x7559c9);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L755a27;}}
}
B7559cb:L7559cb:{c.instructions+=2;NFSU2_TR(0x7559cb);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7559d1:{NFSU2_TR(0x7559d1);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x755945u);}goto L755945;}}
}
B7559d7:L7559d7:{c.instructions+=1;NFSU2_TR(0x7559d7);
{goto L755a31;}
}
B7559d9:L7559d9:{c.instructions+=2;NFSU2_TR(0x7559d9);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7559e0:{NFSU2_TR(0x7559e0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L755a31;}}
}
B7559e2:L7559e2:{c.instructions+=6;NFSU2_TR(0x7559e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B7559e4:{NFSU2_TR(0x7559e4);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7559e9:{NFSU2_TR(0x7559e9);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B7559ed:{NFSU2_TR(0x7559ed);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7559ee:{NFSU2_TR(0x7559ee);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7559ef:{NFSU2_TR(0x7559ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7559f4ull));
TAIL_STATIC(0x75a060u,75a);
}
B7559f4:L7559f4:{c.instructions+=3;NFSU2_TR(0x7559f4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B7559f7:{NFSU2_TR(0x7559f7);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7559f9:{NFSU2_TR(0x7559f9);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7559e2u);}goto L7559e2;}}
}
B7559fb:L7559fb:{c.instructions+=1;NFSU2_TR(0x7559fb);
{goto L755a31;}
}
B7559fd:L7559fd:{c.instructions+=3;NFSU2_TR(0x7559fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B755a03:{NFSU2_TR(0x755a03);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B755a06:{NFSU2_TR(0x755a06);
if(r1(R+518)){{goto L755a10;}}
}
B755a08:L755a08:{c.instructions+=2;NFSU2_TR(0x755a08);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x134ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B755a0e:{NFSU2_TR(0x755a0e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L755a72;}}
}
B755a10:L755a10:{c.instructions+=5;NFSU2_TR(0x755a10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B755a12:{NFSU2_TR(0x755a12);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x134ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B755a18:{NFSU2_TR(0x755a18);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B755a19:{NFSU2_TR(0x755a19);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B755a1f:{NFSU2_TR(0x755a1f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x755a24ull));
TAIL_STATIC(0x7598f0u,759);
}
B755a24:L755a24:{c.instructions+=1;NFSU2_TR(0x755a24);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B755a27:L755a27:{c.instructions+=1;NFSU2_TR(0x755a27);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B755a31:L755a31:{c.instructions+=2;NFSU2_TR(0x755a31);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B755a38:{NFSU2_TR(0x755a38);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L755a5b;}}
}
B755a3a:L755a3a:{c.instructions+=6;NFSU2_TR(0x755a3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B755a3c:{NFSU2_TR(0x755a3c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B755a3d:{NFSU2_TR(0x755a3d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B755a3e:{NFSU2_TR(0x755a3e);
u8 U[4];
w4(U+0,u32(0x73746174ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B755a43:{NFSU2_TR(0x755a43);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B755a44:{NFSU2_TR(0x755a44);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x755a49ull));
TAIL_STATIC(0x75a180u,75a);
}
B755a49:L755a49:{c.instructions+=3;NFSU2_TR(0x755a49);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B755a4c:{NFSU2_TR(0x755a4c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B755a4e:{NFSU2_TR(0x755a4e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L755a5b;}}
}
B755a50:L755a50:{c.instructions+=3;NFSU2_TR(0x755a50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B755a52:{NFSU2_TR(0x755a52);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B755a53:{NFSU2_TR(0x755a53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x755a58ull));
TAIL_STATIC(0x7598f0u,759);
}
B755a58:L755a58:{c.instructions+=1;NFSU2_TR(0x755a58);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B755a5b:L755a5b:{c.instructions+=6;NFSU2_TR(0x755a5b);
u8 U[8];
w4(U+0,u32(u32(u32(0x110ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B755a62:{NFSU2_TR(0x755a62);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B755a63:{NFSU2_TR(0x755a63);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B755a64:{NFSU2_TR(0x755a64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B755a65:{NFSU2_TR(0x755a65);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B755a66:{NFSU2_TR(0x755a66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x755a6bull));
TAIL_STATIC(0x76115eu,761);
}
B755a6b:L755a6b:{c.instructions+=2;NFSU2_TR(0x755a6b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x104ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x104ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x104ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B755a71:{NFSU2_TR(0x755a71);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B755a72:L755a72:{c.instructions+=2;NFSU2_TR(0x755a72);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
w4(U+4,u32(0x7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B755a7c:{NFSU2_TR(0x755a7c);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x755a31u);}goto L755a31;}
}
B755a80:L755a80:{c.instructions+=12;NFSU2_TR(0x755a80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x244ull))));
}
B755a86:{NFSU2_TR(0x755a86);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B755a8b:{NFSU2_TR(0x755a8b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B755a8c:{NFSU2_TR(0x755a8c);
u8 U[8];
w4(U+0,u32(u32(u32(0x244ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B755a93:{NFSU2_TR(0x755a93);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B755a94:{NFSU2_TR(0x755a94);
u8 U[8];
w4(U+0,u32(u32(u32(0x254ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B755a9b:{NFSU2_TR(0x755a9b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B755a9c:{NFSU2_TR(0x755a9c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B755a9e:{NFSU2_TR(0x755a9e);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B755aa0:{NFSU2_TR(0x755aa0);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B755aa4:{NFSU2_TR(0x755aa4);
w4(R+4,u32(0xfull));
}
B755aa9:{NFSU2_TR(0x755aa9);
u8 U[4];
w4(U+0,u32(u32(u32(0xdull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B755aad:L755aad:{c.instructions+=1;NFSU2_TR(0x755aad);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L755aaf;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x755aadu);}goto L755aad;}
}
B755aaf:L755aaf:{c.instructions+=5;NFSU2_TR(0x755aaf);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B755ab1:{NFSU2_TR(0x755ab1);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B755ab2:{NFSU2_TR(0x755ab2);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B755ab4:{NFSU2_TR(0x755ab4);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B755ab6:{NFSU2_TR(0x755ab6);
if(r1(R+518)){{goto L755ac4;}}
}
B755ab8:L755ab8:{c.instructions+=2;NFSU2_TR(0x755ab8);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x20ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x20ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B755aba:{NFSU2_TR(0x755aba);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L755ac4;}}
}
B755abc:L755abc:{c.instructions+=4;NFSU2_TR(0x755abc);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B755abf:{NFSU2_TR(0x755abf);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B755ac0:{NFSU2_TR(0x755ac0);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B755ac2:{NFSU2_TR(0x755ac2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x755ab8u);}goto L755ab8;}}
}
B755ac4:L755ac4:{c.instructions+=4;NFSU2_TR(0x755ac4);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+4),(U+0),1);
}
B755ac6:{NFSU2_TR(0x755ac6);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x61ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x61ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B755ac9:{NFSU2_TR(0x755ac9);
__builtin_memmove((R+0),(R+24),4);
}
B755acb:{NFSU2_TR(0x755acb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L755ade;}}
}
B755acd:L755acd:{c.instructions+=2;NFSU2_TR(0x755acd);
__builtin_memmove((R+8),(R+4),1);
}
B755acf:{NFSU2_TR(0x755acf);
}
B755ad0:L755ad0:{c.instructions+=2;NFSU2_TR(0x755ad0);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x7aull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x7aull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B755ad3:{NFSU2_TR(0x755ad3);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L755ade;}}
}
B755ad5:L755ad5:{c.instructions+=4;NFSU2_TR(0x755ad5);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B755ad8:{NFSU2_TR(0x755ad8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B755ad9:{NFSU2_TR(0x755ad9);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x61ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x61ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B755adc:{NFSU2_TR(0x755adc);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x755ad0u);}goto L755ad0;}}
}
B755ade:L755ade:{c.instructions+=2;NFSU2_TR(0x755ade);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x3aull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B755ae1:{NFSU2_TR(0x755ae1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L755b15;}}
}
B755ae3:L755ae3:{c.instructions+=3;NFSU2_TR(0x755ae3);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B755ae5:{NFSU2_TR(0x755ae5);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x40ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B755ae8:{NFSU2_TR(0x755ae8);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L755b15;}}
}
B755aea:L755aea:{c.instructions+=3;NFSU2_TR(0x755aea);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B755aec:{NFSU2_TR(0x755aec);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3aull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B755aef:{NFSU2_TR(0x755aef);
if(r1(R+518)){{goto L755b0d;}}
}
B755af1:L755af1:{c.instructions+=4;NFSU2_TR(0x755af1);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B755af5:{NFSU2_TR(0x755af5);
__builtin_memmove((R+0),(R+24),4);
}
B755af7:{NFSU2_TR(0x755af7);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+24))));
}
B755af9:{NFSU2_TR(0x755af9);
__builtin_memmove((R+16),(R+16),4);
}
B755b00:L755b00:{c.instructions+=6;NFSU2_TR(0x755b00);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B755b03:{NFSU2_TR(0x755b03);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B755b06:{NFSU2_TR(0x755b06);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B755b07:{NFSU2_TR(0x755b07);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B755b08:{NFSU2_TR(0x755b08);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3aull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B755b0b:{NFSU2_TR(0x755b0b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x755b00u);}goto L755b00;}}
}
B755b0d:L755b0d:{c.instructions+=2;NFSU2_TR(0x755b0d);
u8 U[13];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),1);
s1(u32(r4(U+8)),r1(U+12));
}
B755b11:{NFSU2_TR(0x755b11);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B755b15:L755b15:{c.instructions+=3;NFSU2_TR(0x755b15);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B755b17:{NFSU2_TR(0x755b17);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B755b19:{NFSU2_TR(0x755b19);
if(r1(R+518)){{goto L755b2c;}}
}
B755b1b:L755b1b:{c.instructions+=1;NFSU2_TR(0x755b1b);
{goto L755b20;}
}
B755b20:L755b20:{c.instructions+=2;NFSU2_TR(0x755b20);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x20ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x20ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B755b22:{NFSU2_TR(0x755b22);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L755b2c;}}
}
B755b24:L755b24:{c.instructions+=4;NFSU2_TR(0x755b24);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B755b27:{NFSU2_TR(0x755b27);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B755b28:{NFSU2_TR(0x755b28);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B755b2a:{NFSU2_TR(0x755b2a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x755b20u);}goto L755b20;}}
}
B755b2c:L755b2c:{c.instructions+=2;NFSU2_TR(0x755b2c);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x2full))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B755b2f:{NFSU2_TR(0x755b2f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L755b3a;}}
}
B755b31:L755b31:{c.instructions+=2;NFSU2_TR(0x755b31);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x2full))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B755b35:{NFSU2_TR(0x755b35);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L755b3a;}}
}
B755b37:L755b37:{c.instructions+=1;NFSU2_TR(0x755b37);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2ull))));
}
B755b3a:L755b3a:{c.instructions+=2;NFSU2_TR(0x755b3a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B755b3c:{NFSU2_TR(0x755b3c);
__builtin_memmove((R+16),(R+16),4);
}
B755b40:L755b40:{c.instructions+=3;NFSU2_TR(0x755b40);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+4),(U+0),1);
}
B755b42:{NFSU2_TR(0x755b42);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x20ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x20ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B755b45:{NFSU2_TR(0x755b45);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L755bce;}}
}
B755b4b:L755b4b:{c.instructions+=2;NFSU2_TR(0x755b4b);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2full))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B755b4e:{NFSU2_TR(0x755b4e);
if(r1(R+518)){{goto L755bce;}}
}
B755b50:L755b50:{c.instructions+=2;NFSU2_TR(0x755b50);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3full))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B755b53:{NFSU2_TR(0x755b53);
if(r1(R+518)){{goto L755bce;}}
}
B755b55:L755b55:{c.instructions+=5;NFSU2_TR(0x755b55);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B755b56:{NFSU2_TR(0x755b56);
u8 U[13];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),1);
s1(u32(r4(U+8)),r1(U+12));
}
B755b5a:{NFSU2_TR(0x755b5a);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+4),(U+0),1);
}
B755b5c:{NFSU2_TR(0x755b5c);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x20ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x20ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B755b5f:{NFSU2_TR(0x755b5f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L755bbe;}}
}
B755b61:L755b61:{c.instructions+=2;NFSU2_TR(0x755b61);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2full))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B755b64:{NFSU2_TR(0x755b64);
if(r1(R+518)){{goto L755bbe;}}
}
B755b66:L755b66:{c.instructions+=2;NFSU2_TR(0x755b66);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3full))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B755b69:{NFSU2_TR(0x755b69);
if(r1(R+518)){{goto L755bbe;}}
}
B755b6b:L755b6b:{c.instructions+=5;NFSU2_TR(0x755b6b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B755b6c:{NFSU2_TR(0x755b6c);
u8 U[13];
w4(U+0,u32(u32(u32(0x4dull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),1);
s1(u32(r4(U+8)),r1(U+12));
}
B755b70:{NFSU2_TR(0x755b70);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+4),(U+0),1);
}
B755b72:{NFSU2_TR(0x755b72);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x20ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x20ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B755b75:{NFSU2_TR(0x755b75);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L755bc1;}}
}
B755b77:L755b77:{c.instructions+=2;NFSU2_TR(0x755b77);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2full))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B755b7a:{NFSU2_TR(0x755b7a);
if(r1(R+518)){{goto L755bc1;}}
}
B755b7c:L755b7c:{c.instructions+=2;NFSU2_TR(0x755b7c);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3full))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B755b7f:{NFSU2_TR(0x755b7f);
if(r1(R+518)){{goto L755bc1;}}
}
B755b81:L755b81:{c.instructions+=5;NFSU2_TR(0x755b81);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B755b82:{NFSU2_TR(0x755b82);
u8 U[13];
w4(U+0,u32(u32(u32(0x4eull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),1);
s1(u32(r4(U+8)),r1(U+12));
}
B755b86:{NFSU2_TR(0x755b86);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+4),(U+0),1);
}
B755b88:{NFSU2_TR(0x755b88);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x20ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x20ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B755b8b:{NFSU2_TR(0x755b8b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L755bc6;}}
}
B755b8d:L755b8d:{c.instructions+=2;NFSU2_TR(0x755b8d);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2full))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B755b90:{NFSU2_TR(0x755b90);
if(r1(R+518)){{goto L755bc6;}}
}
B755b92:L755b92:{c.instructions+=2;NFSU2_TR(0x755b92);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3full))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B755b95:{NFSU2_TR(0x755b95);
if(r1(R+518)){{goto L755bc6;}}
}
B755b97:L755b97:{c.instructions+=5;NFSU2_TR(0x755b97);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B755b98:{NFSU2_TR(0x755b98);
u8 U[13];
w4(U+0,u32(u32(u32(0x4full))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),1);
s1(u32(r4(U+8)),r1(U+12));
}
B755b9c:{NFSU2_TR(0x755b9c);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+4),(U+0),1);
}
B755b9e:{NFSU2_TR(0x755b9e);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x20ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x20ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B755ba1:{NFSU2_TR(0x755ba1);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L755bcb;}}
}
B755ba3:L755ba3:{c.instructions+=2;NFSU2_TR(0x755ba3);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2full))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B755ba6:{NFSU2_TR(0x755ba6);
if(r1(R+518)){{goto L755bcb;}}
}
B755ba8:L755ba8:{c.instructions+=2;NFSU2_TR(0x755ba8);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3full))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B755bab:{NFSU2_TR(0x755bab);
if(r1(R+518)){{goto L755bcb;}}
}
B755bad:L755bad:{c.instructions+=5;NFSU2_TR(0x755bad);
u8 U[13];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),1);
s1(u32(r4(U+8)),r1(U+12));
}
B755bb1:{NFSU2_TR(0x755bb1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
}
B755bb4:{NFSU2_TR(0x755bb4);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B755bb5:{NFSU2_TR(0x755bb5);
w1(R+512,u8((r4(R+0))<(u32(0xffull))));
}
B755bba:{NFSU2_TR(0x755bba);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x755b40u);}goto L755b40;}}
}
B755bbc:L755bbc:{c.instructions+=1;NFSU2_TR(0x755bbc);
{goto L755bce;}
}
B755bbe:L755bbe:{c.instructions+=2;NFSU2_TR(0x755bbe);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B755bbf:{NFSU2_TR(0x755bbf);
{goto L755bce;}
}
B755bc1:L755bc1:{c.instructions+=2;NFSU2_TR(0x755bc1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B755bc4:{NFSU2_TR(0x755bc4);
{goto L755bce;}
}
B755bc6:L755bc6:{c.instructions+=2;NFSU2_TR(0x755bc6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
}
B755bc9:{NFSU2_TR(0x755bc9);
{goto L755bce;}
}
B755bcb:L755bcb:{c.instructions+=1;NFSU2_TR(0x755bcb);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B755bce:L755bce:{c.instructions+=4;NFSU2_TR(0x755bce);
u8 U[13];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),1);
s1(u32(r4(U+8)),r1(U+12));
}
B755bd2:{NFSU2_TR(0x755bd2);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B755bd4:{NFSU2_TR(0x755bd4);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B755bd6:{NFSU2_TR(0x755bd6);
if(r1(R+518)){{goto L755be4;}}
}
B755bd8:L755bd8:{c.instructions+=2;NFSU2_TR(0x755bd8);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x20ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x20ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B755bda:{NFSU2_TR(0x755bda);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L755be4;}}
}
B755bdc:L755bdc:{c.instructions+=4;NFSU2_TR(0x755bdc);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B755bdf:{NFSU2_TR(0x755bdf);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B755be0:{NFSU2_TR(0x755be0);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B755be2:{NFSU2_TR(0x755be2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x755bd8u);}goto L755bd8;}}
}
B755be4:L755be4:{c.instructions+=2;NFSU2_TR(0x755be4);
u8 U[7];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B755be8:{NFSU2_TR(0x755be8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L755c14;}}
}
B755bea:L755bea:{c.instructions+=8;NFSU2_TR(0x755bea);
u8 U[8];
w4(U+0,u32(u32(u32(0x254ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B755bf1:{NFSU2_TR(0x755bf1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B755bf2:{NFSU2_TR(0x755bf2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B755bf3:{NFSU2_TR(0x755bf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x108ull))));
w4(U+4,u32(0x7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B755bfd:{NFSU2_TR(0x755bfd);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B755c00:{NFSU2_TR(0x755c00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B755c01:{NFSU2_TR(0x755c01);
u8 U[8];
w4(U+0,u32(u32(u32(0x240ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B755c08:{NFSU2_TR(0x755c08);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x755c0dull));
TAIL_STATIC(0x76115eu,761);
}
B755c0d:L755c0d:{c.instructions+=2;NFSU2_TR(0x755c0d);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x244ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x244ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x244ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B755c13:{NFSU2_TR(0x755c13);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B755c14:L755c14:{c.instructions+=4;NFSU2_TR(0x755c14);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B755c15:{NFSU2_TR(0x755c15);
u8 U[8];
w4(U+0,u32(u32(u32(0x258ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B755c1c:{NFSU2_TR(0x755c1c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B755c1f:{NFSU2_TR(0x755c1f);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B755c23:L755c23:{c.instructions+=4;NFSU2_TR(0x755c23);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+4),(U+0),1);
}
B755c25:{NFSU2_TR(0x755c25);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B755c26:{NFSU2_TR(0x755c26);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x41ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x41ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B755c29:{NFSU2_TR(0x755c29);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L755c33;}}
}
B755c2b:L755c2b:{c.instructions+=2;NFSU2_TR(0x755c2b);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x5aull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x5aull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B755c2e:{NFSU2_TR(0x755c2e);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L755c33;}}
}
B755c30:L755c30:{c.instructions+=1;NFSU2_TR(0x755c30);
w1(R+4,u8(u32(r1(R+4))^u32(u8(0x20ull))));
}
B755c33:L755c33:{c.instructions+=4;NFSU2_TR(0x755c33);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+0),(U+0),1);
}
B755c35:{NFSU2_TR(0x755c35);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B755c36:{NFSU2_TR(0x755c36);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x41ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x41ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B755c38:{NFSU2_TR(0x755c38);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L755c40;}}
}
B755c3a:L755c3a:{c.instructions+=2;NFSU2_TR(0x755c3a);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x5aull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x5aull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B755c3c:{NFSU2_TR(0x755c3c);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L755c40;}}
}
B755c3e:L755c3e:{c.instructions+=1;NFSU2_TR(0x755c3e);
w1(R+0,u8(u32(r1(R+0))^u32(u8(0x20ull))));
}
B755c40:L755c40:{c.instructions+=5;NFSU2_TR(0x755c40);
w4(R+12,u32(s32(s8(r1(R+0)))));
}
B755c43:{NFSU2_TR(0x755c43);
w4(R+0,u32(s32(s8(r1(R+4)))));
}
B755c46:{NFSU2_TR(0x755c46);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B755c48:{NFSU2_TR(0x755c48);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B755c4a:{NFSU2_TR(0x755c4a);
if(r1(R+518)){{goto L755c52;}}
}
B755c4c:L755c4c:{c.instructions+=2;NFSU2_TR(0x755c4c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B755c4e:{NFSU2_TR(0x755c4e);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x755c23u);}goto L755c23;}}
}
B755c50:L755c50:{c.instructions+=1;NFSU2_TR(0x755c50);
{goto L755c56;}
}
B755c52:L755c52:{c.instructions+=2;NFSU2_TR(0x755c52);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B755c54:{NFSU2_TR(0x755c54);
if(r1(R+518)){{goto L755c6c;}}
}
B755c56:L755c56:{c.instructions+=3;NFSU2_TR(0x755c56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+4),(U+0),4);
}
B755c59:{NFSU2_TR(0x755c59);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B755c5a:{NFSU2_TR(0x755c5a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x755c5full));
TAIL_STATIC(0x7598f0u,759);
}
B755c5f:L755c5f:{c.instructions+=2;NFSU2_TR(0x755c5f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B755c62:{NFSU2_TR(0x755c62);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x108ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B755c6c:L755c6c:{c.instructions+=4;NFSU2_TR(0x755c6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B755c72:{NFSU2_TR(0x755c72);
w4(R+12,u32(0x6ull));
}
B755c77:{NFSU2_TR(0x755c77);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B755c79:{NFSU2_TR(0x755c79);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L755c8b;}}
}
B755c7b:L755c7b:{c.instructions+=3;NFSU2_TR(0x755c7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B755c81:{NFSU2_TR(0x755c81);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B755c83:{NFSU2_TR(0x755c83);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L755c8b;}}
}
B755c85:L755c85:{c.instructions+=2;NFSU2_TR(0x755c85);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B755c89:{NFSU2_TR(0x755c89);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L755ca1;}}
}
B755c8b:L755c8b:{c.instructions+=3;NFSU2_TR(0x755c8b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+8),(U+0),4);
}
B755c8e:{NFSU2_TR(0x755c8e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B755c8f:{NFSU2_TR(0x755c8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x755c94ull));
TAIL_STATIC(0x7598f0u,759);
}
B755c94:L755c94:{c.instructions+=2;NFSU2_TR(0x755c94);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B755c97:{NFSU2_TR(0x755c97);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x108ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B755ca1:L755ca1:{c.instructions+=3;NFSU2_TR(0x755ca1);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x13cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x1ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B755ca8:{NFSU2_TR(0x755ca8);
w4(R+0,u32(0x7d2b60ull));
}
B755cad:{NFSU2_TR(0x755cad);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L755cb4;}}
}
B755caf:L755caf:{c.instructions+=1;NFSU2_TR(0x755caf);
w4(R+0,u32(0x783fe5ull));
}
B755cb4:L755cb4:{c.instructions+=5;NFSU2_TR(0x755cb4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B755cb5:{NFSU2_TR(0x755cb5);
u8 U[4];
w4(U+0,u32(u32(u32(0x154ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B755cbc:{NFSU2_TR(0x755cbc);
u8 U[4];
w4(U+0,u32(0x7d2b18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B755cc1:{NFSU2_TR(0x755cc1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B755cc2:{NFSU2_TR(0x755cc2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x755cc7ull));
TAIL_STATIC(0x75c784u,75c);
}
B755cc7:L755cc7:{c.instructions+=4;NFSU2_TR(0x755cc7);
__builtin_memmove((R+0),(R+24),4);
}
B755cc9:{NFSU2_TR(0x755cc9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B755ccc:{NFSU2_TR(0x755ccc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B755ccf:{NFSU2_TR(0x755ccf);
}
B755cd0:L755cd0:{c.instructions+=4;NFSU2_TR(0x755cd0);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B755cd2:{NFSU2_TR(0x755cd2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B755cd3:{NFSU2_TR(0x755cd3);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B755cd5:{NFSU2_TR(0x755cd5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x755cd0u);}goto L755cd0;}}
}
B755cd7:L755cd7:{c.instructions+=4;NFSU2_TR(0x755cd7);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B755cd9:{NFSU2_TR(0x755cd9);
__builtin_memmove((R+8),(R+0),4);
}
B755cdb:{NFSU2_TR(0x755cdb);
u8 U[4];
w4(U+0,u32(u32(u32(0x150ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B755ce2:{NFSU2_TR(0x755ce2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+28),(U+0),4);
}
B755ce5:L755ce5:{c.instructions+=4;NFSU2_TR(0x755ce5);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B755ce7:{NFSU2_TR(0x755ce7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B755ce8:{NFSU2_TR(0x755ce8);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B755cea:{NFSU2_TR(0x755cea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x755ce5u);}goto L755ce5;}}
}
B755cec:L755cec:{c.instructions+=4;NFSU2_TR(0x755cec);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B755cee:{NFSU2_TR(0x755cee);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B755cf2:{NFSU2_TR(0x755cf2);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x128ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B755cf8:{NFSU2_TR(0x755cf8);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L755d16;}}
}
B755cfa:L755cfa:{c.instructions+=7;NFSU2_TR(0x755cfa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B755cfb:{NFSU2_TR(0x755cfb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B755cfc:{NFSU2_TR(0x755cfc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B755cfd:{NFSU2_TR(0x755cfd);
w4(R+0,u32(0xfffffffeull));
}
B755d02:{NFSU2_TR(0x755d02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B755d03:{NFSU2_TR(0x755d03);
u8 U[8];
w4(U+0,u32(u32(u32(0x240ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B755d0a:{NFSU2_TR(0x755d0a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x755d0full));
TAIL_STATIC(0x76115eu,761);
}
B755d0f:L755d0f:{c.instructions+=2;NFSU2_TR(0x755d0f);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x244ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x244ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x244ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B755d15:{NFSU2_TR(0x755d15);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B755d16:L755d16:{c.instructions+=3;NFSU2_TR(0x755d16);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B755d1d:{NFSU2_TR(0x755d1d);
w4(R+8,u32(0x7d2b0cull));
}
B755d22:{NFSU2_TR(0x755d22);
if(r1(R+518)){{goto L755d29;}}
}
B755d24:L755d24:{c.instructions+=1;NFSU2_TR(0x755d24);
w4(R+8,u32(0x7d2b04ull));
}
B755d29:L755d29:{c.instructions+=2;NFSU2_TR(0x755d29);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B755d2f:{NFSU2_TR(0x755d2f);
}
B755d30:L755d30:{c.instructions+=6;NFSU2_TR(0x755d30);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+0),(U+0),1);
}
B755d32:{NFSU2_TR(0x755d32);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B755d33:{NFSU2_TR(0x755d33);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+4)),r1(U+0));
}
B755d35:{NFSU2_TR(0x755d35);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B755d36:{NFSU2_TR(0x755d36);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B755d38:{NFSU2_TR(0x755d38);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x755d30u);}goto L755d30;}}
}
B755d3a:L755d3a:{c.instructions+=3;NFSU2_TR(0x755d3a);
__builtin_memmove((R+0),(R+24),4);
}
B755d3c:{NFSU2_TR(0x755d3c);
__builtin_memmove((R+8),(R+24),4);
}
B755d3e:{NFSU2_TR(0x755d3e);
__builtin_memmove((R+28),(R+28),4);
}
B755d40:L755d40:{c.instructions+=4;NFSU2_TR(0x755d40);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B755d42:{NFSU2_TR(0x755d42);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B755d43:{NFSU2_TR(0x755d43);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B755d45:{NFSU2_TR(0x755d45);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x755d40u);}goto L755d40;}}
}
B755d47:L755d47:{c.instructions+=3;NFSU2_TR(0x755d47);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B755d4d:{NFSU2_TR(0x755d4d);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B755d4f:{NFSU2_TR(0x755d4f);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B755d50:L755d50:{c.instructions+=4;NFSU2_TR(0x755d50);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B755d53:{NFSU2_TR(0x755d53);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B755d54:{NFSU2_TR(0x755d54);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B755d56:{NFSU2_TR(0x755d56);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x755d50u);}goto L755d50;}}
}
B755d58:L755d58:{c.instructions+=3;NFSU2_TR(0x755d58);
__builtin_memmove((R+4),(R+0),4);
}
B755d5a:{NFSU2_TR(0x755d5a);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B755d5d:{NFSU2_TR(0x755d5d);
__builtin_memmove((R+24),(R+8),4);
}
B755d5f:L755d5f:{c.instructions+=1;NFSU2_TR(0x755d5f);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L755d61;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x755d5fu);}goto L755d5f;}
}
B755d61:L755d61:{c.instructions+=3;NFSU2_TR(0x755d61);
__builtin_memmove((R+4),(R+0),4);
}
B755d63:{NFSU2_TR(0x755d63);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B755d66:{NFSU2_TR(0x755d66);
u8 U[4];
w4(U+0,u32(u32(u32(0x150ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B755d6d:L755d6d:{c.instructions+=1;NFSU2_TR(0x755d6d);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L755d6f;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x755d6du);}goto L755d6d;}
}
B755d6f:L755d6f:{c.instructions+=1;NFSU2_TR(0x755d6f);
__builtin_memmove((R+4),(R+0),4);
}
B755d71:L755d71:{c.instructions+=4;NFSU2_TR(0x755d71);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+8),(U+0),1);
}
B755d73:{NFSU2_TR(0x755d73);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B755d74:{NFSU2_TR(0x755d74);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B755d76:{NFSU2_TR(0x755d76);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x755d71u);}goto L755d71;}}
}
B755d78:L755d78:{c.instructions+=4;NFSU2_TR(0x755d78);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B755d7e:{NFSU2_TR(0x755d7e);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B755d80:{NFSU2_TR(0x755d80);
__builtin_memmove((R+24),(R+4),4);
}
B755d82:{NFSU2_TR(0x755d82);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B755d83:L755d83:{c.instructions+=4;NFSU2_TR(0x755d83);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B755d86:{NFSU2_TR(0x755d86);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B755d87:{NFSU2_TR(0x755d87);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B755d89:{NFSU2_TR(0x755d89);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x755d83u);}goto L755d83;}}
}
B755d8b:L755d8b:{c.instructions+=3;NFSU2_TR(0x755d8b);
u8 U[8];
w4(U+0,u32(u32(u32(0x260ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B755d92:{NFSU2_TR(0x755d92);
__builtin_memmove((R+4),(R+0),4);
}
B755d94:{NFSU2_TR(0x755d94);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B755d97:L755d97:{c.instructions+=1;NFSU2_TR(0x755d97);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L755d99;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x755d97u);}goto L755d97;}
}
B755d99:L755d99:{c.instructions+=2;NFSU2_TR(0x755d99);
__builtin_memmove((R+4),(R+0),4);
}
B755d9b:{NFSU2_TR(0x755d9b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B755d9e:L755d9e:{c.instructions+=1;NFSU2_TR(0x755d9e);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L755da0;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x755d9eu);}goto L755d9e;}
}
B755da0:L755da0:{c.instructions+=8;NFSU2_TR(0x755da0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x13cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B755da6:{NFSU2_TR(0x755da6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B755da7:{NFSU2_TR(0x755da7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B755da9:{NFSU2_TR(0x755da9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x13cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B755daf:{NFSU2_TR(0x755daf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B755db5:{NFSU2_TR(0x755db5);
w4(R+28,u32(0x7d34fcull));
}
B755dba:{NFSU2_TR(0x755dba);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B755dbe:{NFSU2_TR(0x755dbe);
__builtin_memmove((R+4),(R+12),4);
}
B755dc0:L755dc0:{c.instructions+=1;NFSU2_TR(0x755dc0);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L755dc2;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x755dc0u);}goto L755dc0;}}
}
B755dc2:L755dc2:{c.instructions+=6;NFSU2_TR(0x755dc2);
__builtin_memmove((R+8),(R+0),4);
}
B755dc4:{NFSU2_TR(0x755dc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B755dca:{NFSU2_TR(0x755dca);
__builtin_memmove((R+8),(R+518),1);
}
B755dcd:{NFSU2_TR(0x755dcd);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B755dcf:{NFSU2_TR(0x755dcf);
__builtin_memmove((R+28),(R+8),4);
}
B755dd1:{NFSU2_TR(0x755dd1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L755e0d;}}
}
B755dd3:L755dd3:{c.instructions+=3;NFSU2_TR(0x755dd3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B755dd6:{NFSU2_TR(0x755dd6);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B755dda:{NFSU2_TR(0x755dda);
__builtin_memmove((R+12),(R+12),4);
}
B755de0:L755de0:{c.instructions+=4;NFSU2_TR(0x755de0);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+4),(U+0),1);
}
B755de2:{NFSU2_TR(0x755de2);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B755de3:{NFSU2_TR(0x755de3);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x41ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x41ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B755de6:{NFSU2_TR(0x755de6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L755df0;}}
}
B755de8:L755de8:{c.instructions+=2;NFSU2_TR(0x755de8);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x5aull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x5aull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B755deb:{NFSU2_TR(0x755deb);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L755df0;}}
}
B755ded:L755ded:{c.instructions+=1;NFSU2_TR(0x755ded);
w1(R+4,u8(u32(r1(R+4))^u32(u8(0x20ull))));
}
B755df0:L755df0:{c.instructions+=4;NFSU2_TR(0x755df0);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+0),(U+0),1);
}
B755df2:{NFSU2_TR(0x755df2);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B755df3:{NFSU2_TR(0x755df3);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x41ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x41ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B755df5:{NFSU2_TR(0x755df5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L755dfd;}}
}
B755df7:L755df7:{c.instructions+=2;NFSU2_TR(0x755df7);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x5aull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x5aull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B755df9:{NFSU2_TR(0x755df9);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L755dfd;}}
}
B755dfb:L755dfb:{c.instructions+=1;NFSU2_TR(0x755dfb);
w1(R+0,u8(u32(r1(R+0))^u32(u8(0x20ull))));
}
B755dfd:L755dfd:{c.instructions+=5;NFSU2_TR(0x755dfd);
w4(R+12,u32(s32(s8(r1(R+0)))));
}
B755e00:{NFSU2_TR(0x755e00);
w4(R+0,u32(s32(s8(r1(R+4)))));
}
B755e03:{NFSU2_TR(0x755e03);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B755e05:{NFSU2_TR(0x755e05);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B755e07:{NFSU2_TR(0x755e07);
if(r1(R+518)){{goto L755e64;}}
}
B755e09:L755e09:{c.instructions+=2;NFSU2_TR(0x755e09);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B755e0b:{NFSU2_TR(0x755e0b);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x755de0u);}goto L755de0;}}
}
B755e0d:L755e0d:{c.instructions+=4;NFSU2_TR(0x755e0d);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B755e11:{NFSU2_TR(0x755e11);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B755e14:{NFSU2_TR(0x755e14);
__builtin_memmove((R+4),(R+0),4);
}
B755e16:{NFSU2_TR(0x755e16);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B755e18:L755e18:{c.instructions+=5;NFSU2_TR(0x755e18);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B755e1a:{NFSU2_TR(0x755e1a);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B755e1d:{NFSU2_TR(0x755e1d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B755e1e:{NFSU2_TR(0x755e1e);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B755e20:{NFSU2_TR(0x755e20);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x755e18u);}goto L755e18;}}
}
B755e22:L755e22:{c.instructions+=8;NFSU2_TR(0x755e22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B755e25:{NFSU2_TR(0x755e25);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B755e27:{NFSU2_TR(0x755e27);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B755e29:{NFSU2_TR(0x755e29);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B755e2d:{NFSU2_TR(0x755e2d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B755e2e:{NFSU2_TR(0x755e2e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B755e2f:{NFSU2_TR(0x755e2f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B755e30:{NFSU2_TR(0x755e30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x755e35ull));
TAIL_STATIC(0x759750u,759);
}
B755e35:L755e35:{c.instructions+=2;NFSU2_TR(0x755e35);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B755e38:{NFSU2_TR(0x755e38);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x108ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B755e42:L755e42:{c.instructions+=2;NFSU2_TR(0x755e42);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B755e43:{NFSU2_TR(0x755e43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x755e48ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7555c0u);}goto L7555c0;}
}
B755e48:L755e48:{c.instructions+=8;NFSU2_TR(0x755e48);
u8 U[8];
w4(U+0,u32(u32(u32(0x254ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B755e4f:{NFSU2_TR(0x755e4f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B755e52:{NFSU2_TR(0x755e52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B755e53:{NFSU2_TR(0x755e53);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B755e54:{NFSU2_TR(0x755e54);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B755e55:{NFSU2_TR(0x755e55);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B755e57:{NFSU2_TR(0x755e57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B755e58:{NFSU2_TR(0x755e58);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x755e5dull));
TAIL_STATIC(0x76115eu,761);
}
B755e5d:L755e5d:{c.instructions+=2;NFSU2_TR(0x755e5d);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x244ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x244ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x244ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B755e63:{NFSU2_TR(0x755e63);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B755e64:L755e64:{c.instructions+=2;NFSU2_TR(0x755e64);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B755e66:{NFSU2_TR(0x755e66);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x755e0du);}goto L755e0d;}}
}
B755e68:L755e68:{c.instructions+=2;NFSU2_TR(0x755e68);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x104ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B755e6e:{NFSU2_TR(0x755e6e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x755e0du);}goto L755e0d;}}
}
B755e70:L755e70:{c.instructions+=2;NFSU2_TR(0x755e70);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x108ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B755e7a:{NFSU2_TR(0x755e7a);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x755e42u);}goto L755e42;}
}
B755e80:L755e80:{c.instructions+=3;NFSU2_TR(0x755e80);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B755e84:{NFSU2_TR(0x755e84);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x646f6e65ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B755e8a:{NFSU2_TR(0x755e8a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L755ea6;}}
}
B755e8c:L755e8c:{c.instructions+=4;NFSU2_TR(0x755e8c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B755e90:{NFSU2_TR(0x755e90);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B755e96:{NFSU2_TR(0x755e96);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B755e99:{NFSU2_TR(0x755e99);
if(r1(R+518)){{goto L755eef;}}
}
B755e9b:L755e9b:{c.instructions+=5;NFSU2_TR(0x755e9b);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B755e9d:{NFSU2_TR(0x755e9d);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B755ea0:{NFSU2_TR(0x755ea0);
__builtin_memmove((R+4),(R+518),1);
}
B755ea3:{NFSU2_TR(0x755ea3);
__builtin_memmove((R+0),(R+4),4);
}
B755ea5:{NFSU2_TR(0x755ea5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B755ea6:L755ea6:{c.instructions+=2;NFSU2_TR(0x755ea6);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x64617461ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B755eac:{NFSU2_TR(0x755eac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L755ecd;}}
}
B755eae:L755eae:{c.instructions+=4;NFSU2_TR(0x755eae);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B755eb2:{NFSU2_TR(0x755eb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B755eb8:{NFSU2_TR(0x755eb8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B755ebb:{NFSU2_TR(0x755ebb);
if(r1(R+518)){{goto L755eef;}}
}
B755ebd:L755ebd:{c.instructions+=2;NFSU2_TR(0x755ebd);
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
B755ec0:{NFSU2_TR(0x755ec0);
if(r1(R+518)){{goto L755ec7;}}
}
B755ec2:L755ec2:{c.instructions+=2;NFSU2_TR(0x755ec2);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B755ec5:{NFSU2_TR(0x755ec5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L755f3f;}}
}
B755ec7:L755ec7:{c.instructions+=2;NFSU2_TR(0x755ec7);
w4(R+0,u32(0x1ull));
}
B755ecc:{NFSU2_TR(0x755ecc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B755ecd:L755ecd:{c.instructions+=2;NFSU2_TR(0x755ecd);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x6d6f6465ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x6d6f6465ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x6d6f6465ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B755ed3:{NFSU2_TR(0x755ed3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L755ee0;}}
}
B755ed5:L755ed5:{c.instructions+=3;NFSU2_TR(0x755ed5);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B755ed9:{NFSU2_TR(0x755ed9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B755edf:{NFSU2_TR(0x755edf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B755ee0:L755ee0:{c.instructions+=4;NFSU2_TR(0x755ee0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B755ee4:{NFSU2_TR(0x755ee4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B755eea:{NFSU2_TR(0x755eea);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B755eed:{NFSU2_TR(0x755eed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L755ef3;}}
}
B755eef:L755eef:{c.instructions+=2;NFSU2_TR(0x755eef);
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
B755ef2:{NFSU2_TR(0x755ef2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B755ef3:L755ef3:{c.instructions+=2;NFSU2_TR(0x755ef3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B755ef6:{NFSU2_TR(0x755ef6);
if(r1(R+518)){{goto L755f03;}}
}
B755ef8:L755ef8:{c.instructions+=2;NFSU2_TR(0x755ef8);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B755efb:{NFSU2_TR(0x755efb);
if(r1(R+518)){{goto L755f03;}}
}
B755efd:L755efd:{c.instructions+=2;NFSU2_TR(0x755efd);
w4(R+0,u32(0xfffffffeull));
}
B755f02:{NFSU2_TR(0x755f02);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B755f03:L755f03:{c.instructions+=2;NFSU2_TR(0x755f03);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x68656164ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x68656164ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x68656164ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B755f09:{NFSU2_TR(0x755f09);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L755f12;}}
}
B755f0b:L755f0b:{c.instructions+=2;NFSU2_TR(0x755f0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x11cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B755f11:{NFSU2_TR(0x755f11);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B755f12:L755f12:{c.instructions+=2;NFSU2_TR(0x755f12);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x626f6479ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x626f6479ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x626f6479ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B755f18:{NFSU2_TR(0x755f18);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L755f21;}}
}
B755f1a:L755f1a:{c.instructions+=2;NFSU2_TR(0x755f1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x120ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B755f20:{NFSU2_TR(0x755f20);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B755f21:L755f21:{c.instructions+=2;NFSU2_TR(0x755f21);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x64617465ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x64617465ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x64617465ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B755f27:{NFSU2_TR(0x755f27);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L755f30;}}
}
B755f29:L755f29:{c.instructions+=2;NFSU2_TR(0x755f29);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B755f2f:{NFSU2_TR(0x755f2f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B755f30:L755f30:{c.instructions+=2;NFSU2_TR(0x755f30);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x636f6465ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x636f6465ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x636f6465ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B755f36:{NFSU2_TR(0x755f36);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L755f3f;}}
}
B755f38:L755f38:{c.instructions+=2;NFSU2_TR(0x755f38);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B755f3e:{NFSU2_TR(0x755f3e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B755f3f:L755f3f:{c.instructions+=2;NFSU2_TR(0x755f3f);
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
B755f41:{NFSU2_TR(0x755f41);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B755f50:L755f50:{c.instructions+=5;NFSU2_TR(0x755f50);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B755f51:{NFSU2_TR(0x755f51);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B755f55:{NFSU2_TR(0x755f55);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B755f5b:{NFSU2_TR(0x755f5b);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x7ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x7ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x7ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B755f5e:{NFSU2_TR(0x755f5e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L755f67;}}
}
B755f60:L755f60:{c.instructions+=3;NFSU2_TR(0x755f60);
w4(R+0,u32(0xfffffffeull));
}
B755f65:{NFSU2_TR(0x755f65);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B755f66:{NFSU2_TR(0x755f66);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B755f67:L755f67:{c.instructions+=2;NFSU2_TR(0x755f67);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B755f6a:{NFSU2_TR(0x755f6a);
if(r1(R+518)){{goto L755f78;}}
}
B755f6c:L755f6c:{c.instructions+=2;NFSU2_TR(0x755f6c);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B755f6f:{NFSU2_TR(0x755f6f);
if(r1(R+518)){{goto L755f78;}}
}
B755f71:L755f71:{c.instructions+=3;NFSU2_TR(0x755f71);
w4(R+0,u32(0xfffffffdull));
}
B755f76:{NFSU2_TR(0x755f76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B755f77:{NFSU2_TR(0x755f77);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B755f78:L755f78:{c.instructions+=2;NFSU2_TR(0x755f78);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10cull))));
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
B755f7f:{NFSU2_TR(0x755f7f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L755f88;}}
}
B755f81:L755f81:{c.instructions+=3;NFSU2_TR(0x755f81);
w4(R+0,u32(0xfffffffcull));
}
B755f86:{NFSU2_TR(0x755f86);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B755f87:{NFSU2_TR(0x755f87);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B755f88:L755f88:{c.instructions+=3;NFSU2_TR(0x755f88);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B755f8c:{NFSU2_TR(0x755f8c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B755f8f:{NFSU2_TR(0x755f8f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L755f95;}}
}
B755f91:L755f91:{c.instructions+=3;NFSU2_TR(0x755f91);
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
B755f93:{NFSU2_TR(0x755f93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B755f94:{NFSU2_TR(0x755f94);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B755f95:L755f95:{c.instructions+=4;NFSU2_TR(0x755f95);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B755f96:{NFSU2_TR(0x755f96);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B755f9a:{NFSU2_TR(0x755f9a);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B755f9d:{NFSU2_TR(0x755f9d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L755fa4;}}
}
B755f9f:L755f9f:{c.instructions+=1;NFSU2_TR(0x755f9f);
w4(R+20,u32(0x1ull));
}
B755fa4:L755fa4:{c.instructions+=2;NFSU2_TR(0x755fa4);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B755fa6:{NFSU2_TR(0x755fa6);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L755fae;}}
}
B755fa8:L755fa8:{c.instructions+=2;NFSU2_TR(0x755fa8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B755fac:{NFSU2_TR(0x755fac);
__builtin_memmove((R+4),(R+20),4);
}
B755fae:L755fae:{c.instructions+=3;NFSU2_TR(0x755fae);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x128ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B755fb4:{NFSU2_TR(0x755fb4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B755fb6:{NFSU2_TR(0x755fb6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L755fba;}}
}
B755fb8:L755fb8:{c.instructions+=1;NFSU2_TR(0x755fb8);
__builtin_memmove((R+20),(R+0),4);
}
B755fba:L755fba:{c.instructions+=2;NFSU2_TR(0x755fba);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B755fbc:{NFSU2_TR(0x755fbc);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L755fc4;}}
}
B755fbe:L755fbe:{c.instructions+=2;NFSU2_TR(0x755fbe);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B755fc2:{NFSU2_TR(0x755fc2);
__builtin_memmove((R+4),(R+0),4);
}
B755fc4:L755fc4:{c.instructions+=6;NFSU2_TR(0x755fc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x12cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B755fca:{NFSU2_TR(0x755fca);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B755fcc:{NFSU2_TR(0x755fcc);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B755fce:{NFSU2_TR(0x755fce);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B755fcf:{NFSU2_TR(0x755fcf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B755fd0:{NFSU2_TR(0x755fd0);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x75601cu,756);}
}
B755fd2:L755fd2:{c.instructions+=6;NFSU2_TR(0x755fd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B755fd8:{NFSU2_TR(0x755fd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B755fde:{NFSU2_TR(0x755fde);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B755fe0:{NFSU2_TR(0x755fe0);
__builtin_memmove((R+0),(R+4),4);
}
B755fe2:{NFSU2_TR(0x755fe2);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B755fe5:{NFSU2_TR(0x755fe5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B755fe8:L755fe8:{c.instructions+=1;NFSU2_TR(0x755fe8);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L755fea;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x755fe8u);}goto L755fe8;}
}
B755fea:L755fea:{c.instructions+=2;NFSU2_TR(0x755fea);
__builtin_memmove((R+4),(R+0),4);
}
B755fec:{NFSU2_TR(0x755fec);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B755fef:L755fef:{c.instructions+=1;NFSU2_TR(0x755fef);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L755ff1;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x755fefu);}goto L755fef;}
}
B755ff1:L755ff1:{c.instructions+=4;NFSU2_TR(0x755ff1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x12cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B755ff7:{NFSU2_TR(0x755ff7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B755ffd:{NFSU2_TR(0x755ffd);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B755fff:{NFSU2_TR(0x755fff);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
TAIL_STATIC(0x756000u,756);
}
XIT:NFSU2_TR_EXIT(0x755,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
