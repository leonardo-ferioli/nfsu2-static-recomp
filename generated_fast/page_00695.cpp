#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_696(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x695,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x695,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_695(u8* __restrict R,Cpu& c);
u32 page_695(Cpu& c){return body_695(c.regs.data(),c);}
__attribute__((noinline)) u32 body_695(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x695002:goto L695002;
case 0x695005:c.instructions+=2;goto B695005;
case 0x695009:c.instructions+=1;goto B695009;
case 0x69500b:goto L69500b;
case 0x69500d:c.instructions+=2;goto B69500d;
case 0x69500f:c.instructions+=1;goto B69500f;
case 0x695012:goto L695012;
case 0x695016:c.instructions+=17;goto B695016;
case 0x69501a:c.instructions+=16;goto B69501a;
case 0x69501e:c.instructions+=15;goto B69501e;
case 0x695021:c.instructions+=14;goto B695021;
case 0x695025:c.instructions+=13;goto B695025;
case 0x695029:c.instructions+=12;goto B695029;
case 0x69502d:c.instructions+=11;goto B69502d;
case 0x695031:c.instructions+=10;goto B695031;
case 0x695035:c.instructions+=9;goto B695035;
case 0x695039:c.instructions+=8;goto B695039;
case 0x69503d:c.instructions+=7;goto B69503d;
case 0x695041:c.instructions+=6;goto B695041;
case 0x695045:c.instructions+=5;goto B695045;
case 0x695049:c.instructions+=4;goto B695049;
case 0x69504c:c.instructions+=3;goto B69504c;
case 0x695050:c.instructions+=2;goto B695050;
case 0x695052:c.instructions+=1;goto B695052;
case 0x695055:goto L695055;
case 0x695059:c.instructions+=25;goto B695059;
case 0x69505c:c.instructions+=24;goto B69505c;
case 0x695060:c.instructions+=23;goto B695060;
case 0x695063:c.instructions+=22;goto B695063;
case 0x695066:c.instructions+=21;goto B695066;
case 0x69506d:c.instructions+=20;goto B69506d;
case 0x695071:c.instructions+=19;goto B695071;
case 0x695075:c.instructions+=18;goto B695075;
case 0x695079:c.instructions+=17;goto B695079;
case 0x69507d:c.instructions+=16;goto B69507d;
case 0x695080:c.instructions+=15;goto B695080;
case 0x695084:c.instructions+=14;goto B695084;
case 0x69508c:c.instructions+=13;goto B69508c;
case 0x69508f:c.instructions+=12;goto B69508f;
case 0x695093:c.instructions+=11;goto B695093;
case 0x695097:c.instructions+=10;goto B695097;
case 0x69509b:c.instructions+=9;goto B69509b;
case 0x69509e:c.instructions+=8;goto B69509e;
case 0x6950a1:c.instructions+=7;goto B6950a1;
case 0x6950a5:c.instructions+=6;goto B6950a5;
case 0x6950a9:c.instructions+=5;goto B6950a9;
case 0x6950ad:c.instructions+=4;goto B6950ad;
case 0x6950b0:c.instructions+=3;goto B6950b0;
case 0x6950b4:c.instructions+=2;goto B6950b4;
case 0x6950b6:c.instructions+=1;goto B6950b6;
case 0x6950b9:goto L6950b9;
case 0x6950bb:c.instructions+=33;goto B6950bb;
case 0x6950bf:c.instructions+=32;goto B6950bf;
case 0x6950c3:c.instructions+=31;goto B6950c3;
case 0x6950c6:c.instructions+=30;goto B6950c6;
case 0x6950c9:c.instructions+=29;goto B6950c9;
case 0x6950cc:c.instructions+=28;goto B6950cc;
case 0x6950cf:c.instructions+=27;goto B6950cf;
case 0x6950d3:c.instructions+=26;goto B6950d3;
case 0x6950d6:c.instructions+=25;goto B6950d6;
case 0x6950d9:c.instructions+=24;goto B6950d9;
case 0x6950dc:c.instructions+=23;goto B6950dc;
case 0x6950df:c.instructions+=22;goto B6950df;
case 0x6950e3:c.instructions+=21;goto B6950e3;
case 0x6950e6:c.instructions+=20;goto B6950e6;
case 0x6950eb:c.instructions+=19;goto B6950eb;
case 0x6950ee:c.instructions+=18;goto B6950ee;
case 0x6950f3:c.instructions+=17;goto B6950f3;
case 0x6950f6:c.instructions+=16;goto B6950f6;
case 0x6950fb:c.instructions+=15;goto B6950fb;
case 0x6950ff:c.instructions+=14;goto B6950ff;
case 0x695104:c.instructions+=13;goto B695104;
case 0x695108:c.instructions+=12;goto B695108;
case 0x69510d:c.instructions+=11;goto B69510d;
case 0x695111:c.instructions+=10;goto B695111;
case 0x695116:c.instructions+=9;goto B695116;
case 0x69511b:c.instructions+=8;goto B69511b;
case 0x69511f:c.instructions+=7;goto B69511f;
case 0x695123:c.instructions+=6;goto B695123;
case 0x695127:c.instructions+=5;goto B695127;
case 0x69512b:c.instructions+=4;goto B69512b;
case 0x69512e:c.instructions+=3;goto B69512e;
case 0x695132:c.instructions+=2;goto B695132;
case 0x695134:c.instructions+=1;goto B695134;
case 0x695137:goto L695137;
case 0x695139:c.instructions+=8;goto B695139;
case 0x69513a:c.instructions+=7;goto B69513a;
case 0x69513c:c.instructions+=6;goto B69513c;
case 0x69513d:c.instructions+=5;goto B69513d;
case 0x695140:c.instructions+=4;goto B695140;
case 0x695144:c.instructions+=3;goto B695144;
case 0x695147:c.instructions+=2;goto B695147;
case 0x695148:c.instructions+=1;goto B695148;
case 0x69514a:goto L69514a;
case 0x69514d:c.instructions+=5;goto B69514d;
case 0x695150:c.instructions+=4;goto B695150;
case 0x695153:c.instructions+=3;goto B695153;
case 0x695157:c.instructions+=2;goto B695157;
case 0x69515a:c.instructions+=1;goto B69515a;
case 0x695160:goto L695160;
case 0x695161:c.instructions+=1;goto B695161;
case 0x695164:goto L695164;
case 0x695166:c.instructions+=2;goto B695166;
case 0x695168:c.instructions+=1;goto B695168;
case 0x69516a:goto L69516a;
case 0x69516d:c.instructions+=10;goto B69516d;
case 0x695170:c.instructions+=9;goto B695170;
case 0x695172:c.instructions+=8;goto B695172;
case 0x695176:c.instructions+=7;goto B695176;
case 0x69517a:c.instructions+=6;goto B69517a;
case 0x69517d:c.instructions+=5;goto B69517d;
case 0x69517e:c.instructions+=4;goto B69517e;
case 0x69517f:c.instructions+=3;goto B69517f;
case 0x695182:c.instructions+=2;goto B695182;
case 0x695183:c.instructions+=1;goto B695183;
case 0x695188:goto L695188;
case 0x69518c:c.instructions+=4;goto B69518c;
case 0x69518f:c.instructions+=3;goto B69518f;
case 0x695192:c.instructions+=2;goto B695192;
case 0x695195:c.instructions+=1;goto B695195;
case 0x695197:goto L695197;
case 0x695198:c.instructions+=1;goto B695198;
case 0x69519a:goto L69519a;
case 0x69519d:c.instructions+=2;goto B69519d;
case 0x6951a2:c.instructions+=1;goto B6951a2;
case 0x6951a4:goto L6951a4;
case 0x6951a8:c.instructions+=2;goto B6951a8;
case 0x6951ac:c.instructions+=1;goto B6951ac;
case 0x6951ae:goto L6951ae;
case 0x6951b2:c.instructions+=1;goto B6951b2;
case 0x6951b4:goto L6951b4;
case 0x6951b8:c.instructions+=2;goto B6951b8;
case 0x6951bc:c.instructions+=1;goto B6951bc;
case 0x6951be:goto L6951be;
case 0x6951c2:c.instructions+=1;goto B6951c2;
case 0x6951c6:goto L6951c6;
case 0x6951c9:c.instructions+=1;goto B6951c9;
case 0x6951cc:goto L6951cc;
case 0x6951cf:c.instructions+=9;goto B6951cf;
case 0x6951d3:c.instructions+=8;goto B6951d3;
case 0x6951d6:c.instructions+=7;goto B6951d6;
case 0x6951d8:c.instructions+=6;goto B6951d8;
case 0x6951dc:c.instructions+=5;goto B6951dc;
case 0x6951e0:c.instructions+=4;goto B6951e0;
case 0x6951e3:c.instructions+=3;goto B6951e3;
case 0x6951e7:c.instructions+=2;goto B6951e7;
case 0x6951ea:c.instructions+=1;goto B6951ea;
case 0x6951ec:goto L6951ec;
case 0x6951ed:c.instructions+=3;goto B6951ed;
case 0x6951ee:c.instructions+=2;goto B6951ee;
case 0x6951ef:c.instructions+=1;goto B6951ef;
case 0x6951f2:goto L6951f2;
case 0x6951f4:c.instructions+=7;goto B6951f4;
case 0x6951f5:c.instructions+=6;goto B6951f5;
case 0x6951f7:c.instructions+=5;goto B6951f7;
case 0x6951f8:c.instructions+=4;goto B6951f8;
case 0x6951f9:c.instructions+=3;goto B6951f9;
case 0x6951fb:c.instructions+=2;goto B6951fb;
case 0x6951fe:c.instructions+=1;goto B6951fe;
case 0x695200:goto L695200;
case 0x695202:c.instructions+=1;goto B695202;
case 0x695204:goto L695204;
case 0x695207:c.instructions+=3;goto B695207;
case 0x695209:c.instructions+=2;goto B695209;
case 0x69520b:c.instructions+=1;goto B69520b;
case 0x69520d:goto L69520d;
case 0x69520f:goto L69520f;
case 0x695210:c.instructions+=3;goto B695210;
case 0x695211:c.instructions+=2;goto B695211;
case 0x695214:c.instructions+=1;goto B695214;
case 0x695216:goto L695216;
case 0x695219:goto L695219;
case 0x69521b:goto L69521b;
case 0x69521f:c.instructions+=1;goto B69521f;
case 0x695221:goto L695221;
case 0x695223:c.instructions+=2;goto B695223;
case 0x695224:c.instructions+=1;goto B695224;
case 0x695226:goto L695226;
case 0x695229:c.instructions+=1;goto B695229;
case 0x69522b:goto L69522b;
case 0x69522d:goto L69522d;
case 0x69522e:c.instructions+=3;goto B69522e;
case 0x69522f:c.instructions+=2;goto B69522f;
case 0x695230:c.instructions+=1;goto B695230;
case 0x695233:goto L695233;
case 0x695235:c.instructions+=12;goto B695235;
case 0x695236:c.instructions+=11;goto B695236;
case 0x695238:c.instructions+=10;goto B695238;
case 0x69523b:c.instructions+=9;goto B69523b;
case 0x69523c:c.instructions+=8;goto B69523c;
case 0x69523d:c.instructions+=7;goto B69523d;
case 0x695240:c.instructions+=6;goto B695240;
case 0x695241:c.instructions+=5;goto B695241;
case 0x695243:c.instructions+=4;goto B695243;
case 0x695245:c.instructions+=3;goto B695245;
case 0x695246:c.instructions+=2;goto B695246;
case 0x695248:c.instructions+=1;goto B695248;
case 0x69524b:goto L69524b;
case 0x69524d:goto L69524d;
case 0x695250:c.instructions+=18;goto B695250;
case 0x695253:c.instructions+=17;goto B695253;
case 0x695256:c.instructions+=16;goto B695256;
case 0x695257:c.instructions+=15;goto B695257;
case 0x69525a:c.instructions+=14;goto B69525a;
case 0x69525b:c.instructions+=13;goto B69525b;
case 0x69525d:c.instructions+=12;goto B69525d;
case 0x695260:c.instructions+=11;goto B695260;
case 0x695263:c.instructions+=10;goto B695263;
case 0x695264:c.instructions+=9;goto B695264;
case 0x695267:c.instructions+=8;goto B695267;
case 0x69526a:c.instructions+=7;goto B69526a;
case 0x69526c:c.instructions+=6;goto B69526c;
case 0x69526d:c.instructions+=5;goto B69526d;
case 0x695270:c.instructions+=4;goto B695270;
case 0x695273:c.instructions+=3;goto B695273;
case 0x695275:c.instructions+=2;goto B695275;
case 0x695277:c.instructions+=1;goto B695277;
case 0x69527c:goto L69527c;
case 0x695280:c.instructions+=15;goto B695280;
case 0x695283:c.instructions+=14;goto B695283;
case 0x695286:c.instructions+=13;goto B695286;
case 0x69528a:c.instructions+=12;goto B69528a;
case 0x69528d:c.instructions+=11;goto B69528d;
case 0x695290:c.instructions+=10;goto B695290;
case 0x695292:c.instructions+=9;goto B695292;
case 0x695293:c.instructions+=8;goto B695293;
case 0x695294:c.instructions+=7;goto B695294;
case 0x695297:c.instructions+=6;goto B695297;
case 0x69529a:c.instructions+=5;goto B69529a;
case 0x69529d:c.instructions+=4;goto B69529d;
case 0x69529f:c.instructions+=3;goto B69529f;
case 0x6952a0:c.instructions+=2;goto B6952a0;
case 0x6952a1:c.instructions+=1;goto B6952a1;
case 0x6952a4:goto L6952a4;
case 0x6952a6:c.instructions+=7;goto B6952a6;
case 0x6952a7:c.instructions+=6;goto B6952a7;
case 0x6952a8:c.instructions+=5;goto B6952a8;
case 0x6952aa:c.instructions+=4;goto B6952aa;
case 0x6952ac:c.instructions+=3;goto B6952ac;
case 0x6952af:c.instructions+=2;goto B6952af;
case 0x6952b0:c.instructions+=1;goto B6952b0;
case 0x6952b2:goto L6952b2;
case 0x6952b5:c.instructions+=2;goto B6952b5;
case 0x6952b9:c.instructions+=1;goto B6952b9;
case 0x6952bb:goto L6952bb;
case 0x6952be:c.instructions+=3;goto B6952be;
case 0x6952c1:c.instructions+=2;goto B6952c1;
case 0x6952c3:c.instructions+=1;goto B6952c3;
case 0x6952c5:goto L6952c5;
case 0x6952c7:c.instructions+=1;goto B6952c7;
case 0x6952cc:goto L6952cc;
case 0x6952cd:c.instructions+=1;goto B6952cd;
case 0x6952d2:goto L6952d2;
case 0x6952d3:goto L6952d3;
case 0x6952d6:c.instructions+=4;goto B6952d6;
case 0x6952da:c.instructions+=3;goto B6952da;
case 0x6952db:c.instructions+=2;goto B6952db;
case 0x6952dd:c.instructions+=1;goto B6952dd;
case 0x6952df:goto L6952df;
case 0x6952e2:c.instructions+=1;goto B6952e2;
case 0x6952e7:goto L6952e7;
case 0x6952e8:goto L6952e8;
case 0x6952ea:c.instructions+=2;goto B6952ea;
case 0x6952ed:c.instructions+=1;goto B6952ed;
case 0x6952ef:goto L6952ef;
case 0x6952f2:c.instructions+=2;goto B6952f2;
case 0x6952f6:c.instructions+=1;goto B6952f6;
case 0x6952f8:goto L6952f8;
case 0x6952fb:c.instructions+=3;goto B6952fb;
case 0x6952fe:c.instructions+=2;goto B6952fe;
case 0x695300:c.instructions+=1;goto B695300;
case 0x695302:goto L695302;
case 0x695304:c.instructions+=1;goto B695304;
case 0x695309:goto L695309;
case 0x69530a:c.instructions+=1;goto B69530a;
case 0x69530f:goto L69530f;
case 0x695310:goto L695310;
case 0x695313:c.instructions+=4;goto B695313;
case 0x695317:c.instructions+=3;goto B695317;
case 0x695318:c.instructions+=2;goto B695318;
case 0x69531a:c.instructions+=1;goto B69531a;
case 0x69531c:goto L69531c;
case 0x69531f:c.instructions+=1;goto B69531f;
case 0x695324:goto L695324;
case 0x695325:goto L695325;
case 0x695328:c.instructions+=1;goto B695328;
case 0x69532d:goto L69532d;
case 0x69532e:c.instructions+=4;goto B69532e;
case 0x69532f:c.instructions+=3;goto B69532f;
case 0x695330:c.instructions+=2;goto B695330;
case 0x695331:c.instructions+=1;goto B695331;
case 0x695332:goto L695332;
case 0x695334:c.instructions+=11;goto B695334;
case 0x695335:c.instructions+=10;goto B695335;
case 0x695337:c.instructions+=9;goto B695337;
case 0x695338:c.instructions+=8;goto B695338;
case 0x69533a:c.instructions+=7;goto B69533a;
case 0x69533d:c.instructions+=6;goto B69533d;
case 0x69533e:c.instructions+=5;goto B69533e;
case 0x695341:c.instructions+=4;goto B695341;
case 0x695345:c.instructions+=3;goto B695345;
case 0x695348:c.instructions+=2;goto B695348;
case 0x69534d:c.instructions+=1;goto B69534d;
case 0x69534f:goto L69534f;
case 0x695352:c.instructions+=1;goto B695352;
case 0x695353:goto L695353;
case 0x695356:c.instructions+=4;goto B695356;
case 0x695359:c.instructions+=3;goto B695359;
case 0x69535c:c.instructions+=2;goto B69535c;
case 0x69535d:c.instructions+=1;goto B69535d;
case 0x695362:goto L695362;
case 0x695365:c.instructions+=16;goto B695365;
case 0x695368:c.instructions+=15;goto B695368;
case 0x69536c:c.instructions+=14;goto B69536c;
case 0x69536f:c.instructions+=13;goto B69536f;
case 0x695373:c.instructions+=12;goto B695373;
case 0x695376:c.instructions+=11;goto B695376;
case 0x695378:c.instructions+=10;goto B695378;
case 0x69537b:c.instructions+=9;goto B69537b;
case 0x69537c:c.instructions+=8;goto B69537c;
case 0x69537f:c.instructions+=7;goto B69537f;
case 0x695383:c.instructions+=6;goto B695383;
case 0x695386:c.instructions+=5;goto B695386;
case 0x69538a:c.instructions+=4;goto B69538a;
case 0x69538d:c.instructions+=3;goto B69538d;
case 0x695390:c.instructions+=2;goto B695390;
case 0x695393:c.instructions+=1;goto B695393;
case 0x695395:goto L695395;
case 0x695396:goto L695396;
case 0x695397:c.instructions+=4;goto B695397;
case 0x695399:c.instructions+=3;goto B695399;
case 0x69539a:c.instructions+=2;goto B69539a;
case 0x69539b:c.instructions+=1;goto B69539b;
case 0x69539e:goto L69539e;
case 0x6953a0:c.instructions+=13;goto B6953a0;
case 0x6953a1:c.instructions+=12;goto B6953a1;
case 0x6953a3:c.instructions+=11;goto B6953a3;
case 0x6953a6:c.instructions+=10;goto B6953a6;
case 0x6953a7:c.instructions+=9;goto B6953a7;
case 0x6953a8:c.instructions+=8;goto B6953a8;
case 0x6953aa:c.instructions+=7;goto B6953aa;
case 0x6953ac:c.instructions+=6;goto B6953ac;
case 0x6953ad:c.instructions+=5;goto B6953ad;
case 0x6953ae:c.instructions+=4;goto B6953ae;
case 0x6953af:c.instructions+=3;goto B6953af;
case 0x6953b2:c.instructions+=2;goto B6953b2;
case 0x6953b4:c.instructions+=1;goto B6953b4;
case 0x6953b6:goto L6953b6;
case 0x6953b8:c.instructions+=3;goto B6953b8;
case 0x6953bb:c.instructions+=2;goto B6953bb;
case 0x6953bd:c.instructions+=1;goto B6953bd;
case 0x6953bf:goto L6953bf;
case 0x6953c1:goto L6953c1;
case 0x6953c3:c.instructions+=32;goto B6953c3;
case 0x6953c7:c.instructions+=31;goto B6953c7;
case 0x6953ca:c.instructions+=30;goto B6953ca;
case 0x6953ce:c.instructions+=29;goto B6953ce;
case 0x6953d1:c.instructions+=28;goto B6953d1;
case 0x6953d5:c.instructions+=27;goto B6953d5;
case 0x6953d8:c.instructions+=26;goto B6953d8;
case 0x6953db:c.instructions+=25;goto B6953db;
case 0x6953de:c.instructions+=24;goto B6953de;
case 0x6953e1:c.instructions+=23;goto B6953e1;
case 0x6953e4:c.instructions+=22;goto B6953e4;
case 0x6953e8:c.instructions+=21;goto B6953e8;
case 0x6953eb:c.instructions+=20;goto B6953eb;
case 0x6953ee:c.instructions+=19;goto B6953ee;
case 0x6953f2:c.instructions+=18;goto B6953f2;
case 0x6953f5:c.instructions+=17;goto B6953f5;
case 0x6953f8:c.instructions+=16;goto B6953f8;
case 0x6953fc:c.instructions+=15;goto B6953fc;
case 0x6953ff:c.instructions+=14;goto B6953ff;
case 0x695402:c.instructions+=13;goto B695402;
case 0x695406:c.instructions+=12;goto B695406;
case 0x695409:c.instructions+=11;goto B695409;
case 0x69540c:c.instructions+=10;goto B69540c;
case 0x695410:c.instructions+=9;goto B695410;
case 0x695413:c.instructions+=8;goto B695413;
case 0x695416:c.instructions+=7;goto B695416;
case 0x69541a:c.instructions+=6;goto B69541a;
case 0x69541e:c.instructions+=5;goto B69541e;
case 0x695421:c.instructions+=4;goto B695421;
case 0x695424:c.instructions+=3;goto B695424;
case 0x695427:c.instructions+=2;goto B695427;
case 0x695429:c.instructions+=1;goto B695429;
case 0x69542b:goto L69542b;
case 0x69542d:c.instructions+=3;goto B69542d;
case 0x695430:c.instructions+=2;goto B695430;
case 0x695432:c.instructions+=1;goto B695432;
case 0x695434:goto L695434;
case 0x695436:goto L695436;
case 0x695437:c.instructions+=5;goto B695437;
case 0x69543a:c.instructions+=4;goto B69543a;
case 0x69543c:c.instructions+=3;goto B69543c;
case 0x69543d:c.instructions+=2;goto B69543d;
case 0x69543e:c.instructions+=1;goto B69543e;
case 0x695441:goto L695441;
case 0x695443:c.instructions+=7;goto B695443;
case 0x695444:c.instructions+=6;goto B695444;
case 0x695446:c.instructions+=5;goto B695446;
case 0x695449:c.instructions+=4;goto B695449;
case 0x69544d:c.instructions+=3;goto B69544d;
case 0x695450:c.instructions+=2;goto B695450;
case 0x695452:c.instructions+=1;goto B695452;
case 0x695454:goto L695454;
case 0x695456:c.instructions+=1;goto B695456;
case 0x695458:goto L695458;
case 0x69545b:c.instructions+=1;goto B69545b;
case 0x69545e:goto L69545e;
case 0x69545f:c.instructions+=1;goto B69545f;
case 0x695462:goto L695462;
case 0x695464:c.instructions+=5;goto B695464;
case 0x695465:c.instructions+=4;goto B695465;
case 0x695467:c.instructions+=3;goto B695467;
case 0x69546a:c.instructions+=2;goto B69546a;
case 0x69546c:c.instructions+=1;goto B69546c;
case 0x69546e:goto L69546e;
case 0x695472:c.instructions+=20;goto B695472;
case 0x695475:c.instructions+=19;goto B695475;
case 0x695476:c.instructions+=18;goto B695476;
case 0x69547a:c.instructions+=17;goto B69547a;
case 0x69547b:c.instructions+=16;goto B69547b;
case 0x69547d:c.instructions+=15;goto B69547d;
case 0x695480:c.instructions+=14;goto B695480;
case 0x695483:c.instructions+=13;goto B695483;
case 0x695485:c.instructions+=12;goto B695485;
case 0x695488:c.instructions+=11;goto B695488;
case 0x695489:c.instructions+=10;goto B695489;
case 0x69548d:c.instructions+=9;goto B69548d;
case 0x695490:c.instructions+=8;goto B695490;
case 0x695492:c.instructions+=7;goto B695492;
case 0x695494:c.instructions+=6;goto B695494;
case 0x695498:c.instructions+=5;goto B695498;
case 0x69549b:c.instructions+=4;goto B69549b;
case 0x69549c:c.instructions+=3;goto B69549c;
case 0x69549d:c.instructions+=2;goto B69549d;
case 0x6954a0:c.instructions+=1;goto B6954a0;
case 0x6954a3:goto L6954a3;
case 0x6954a5:c.instructions+=2;goto B6954a5;
case 0x6954a6:c.instructions+=1;goto B6954a6;
case 0x6954a8:goto L6954a8;
case 0x6954aa:goto L6954aa;
case 0x6954ab:c.instructions+=1;goto B6954ab;
case 0x6954ae:goto L6954ae;
case 0x6954b0:c.instructions+=11;goto B6954b0;
case 0x6954b1:c.instructions+=10;goto B6954b1;
case 0x6954b3:c.instructions+=9;goto B6954b3;
case 0x6954b6:c.instructions+=8;goto B6954b6;
case 0x6954b9:c.instructions+=7;goto B6954b9;
case 0x6954ba:c.instructions+=6;goto B6954ba;
case 0x6954bd:c.instructions+=5;goto B6954bd;
case 0x6954be:c.instructions+=4;goto B6954be;
case 0x6954c0:c.instructions+=3;goto B6954c0;
case 0x6954c1:c.instructions+=2;goto B6954c1;
case 0x6954c6:c.instructions+=1;goto B6954c6;
case 0x6954c8:goto L6954c8;
case 0x6954ca:goto L6954ca;
case 0x6954cc:goto L6954cc;
case 0x6954cf:c.instructions+=4;goto B6954cf;
case 0x6954d1:c.instructions+=3;goto B6954d1;
case 0x6954d2:c.instructions+=2;goto B6954d2;
case 0x6954d7:c.instructions+=1;goto B6954d7;
case 0x6954d9:goto L6954d9;
case 0x6954db:goto L6954db;
case 0x6954dd:goto L6954dd;
case 0x6954e0:c.instructions+=4;goto B6954e0;
case 0x6954e2:c.instructions+=3;goto B6954e2;
case 0x6954e4:c.instructions+=2;goto B6954e4;
case 0x6954e5:c.instructions+=1;goto B6954e5;
case 0x6954e8:goto L6954e8;
case 0x6954ea:c.instructions+=1;goto B6954ea;
case 0x6954ec:goto L6954ec;
case 0x6954f1:goto L6954f1;
case 0x6954f2:c.instructions+=3;goto B6954f2;
case 0x6954f3:c.instructions+=2;goto B6954f3;
case 0x6954f4:c.instructions+=1;goto B6954f4;
case 0x6954f7:goto L6954f7;
case 0x6954f9:c.instructions+=6;goto B6954f9;
case 0x6954fa:c.instructions+=5;goto B6954fa;
case 0x6954fc:c.instructions+=4;goto B6954fc;
case 0x6954ff:c.instructions+=3;goto B6954ff;
case 0x695502:c.instructions+=2;goto B695502;
case 0x695503:c.instructions+=1;goto B695503;
case 0x695506:goto L695506;
case 0x695508:c.instructions+=6;goto B695508;
case 0x695509:c.instructions+=5;goto B695509;
case 0x69550b:c.instructions+=4;goto B69550b;
case 0x69550c:c.instructions+=3;goto B69550c;
case 0x69550f:c.instructions+=2;goto B69550f;
case 0x695511:c.instructions+=1;goto B695511;
case 0x695513:goto L695513;
case 0x695518:c.instructions+=1;goto B695518;
case 0x69551a:goto L69551a;
case 0x69551d:c.instructions+=3;goto B69551d;
case 0x695520:c.instructions+=2;goto B695520;
case 0x695523:c.instructions+=1;goto B695523;
case 0x695525:goto L695525;
case 0x695528:c.instructions+=2;goto B695528;
case 0x69552b:c.instructions+=1;goto B69552b;
case 0x69552d:goto L69552d;
case 0x695530:c.instructions+=1;goto B695530;
case 0x695532:goto L695532;
case 0x695537:c.instructions+=1;goto B695537;
case 0x695539:goto L695539;
case 0x69553a:c.instructions+=8;goto B69553a;
case 0x69553c:c.instructions+=7;goto B69553c;
case 0x69553e:c.instructions+=6;goto B69553e;
case 0x69553f:c.instructions+=5;goto B69553f;
case 0x695540:c.instructions+=4;goto B695540;
case 0x695541:c.instructions+=3;goto B695541;
case 0x695544:c.instructions+=2;goto B695544;
case 0x695546:c.instructions+=1;goto B695546;
case 0x695548:goto L695548;
case 0x69554b:c.instructions+=2;goto B69554b;
case 0x69554d:c.instructions+=1;goto B69554d;
case 0x69554f:goto L69554f;
case 0x695551:goto L695551;
case 0x695553:c.instructions+=6;goto B695553;
case 0x695556:c.instructions+=5;goto B695556;
case 0x695559:c.instructions+=4;goto B695559;
case 0x69555c:c.instructions+=3;goto B69555c;
case 0x69555f:c.instructions+=2;goto B69555f;
case 0x695561:c.instructions+=1;goto B695561;
case 0x695562:goto L695562;
case 0x695563:c.instructions+=2;goto B695563;
case 0x695564:c.instructions+=1;goto B695564;
case 0x695567:goto L695567;
case 0x695569:c.instructions+=8;goto B695569;
case 0x69556a:c.instructions+=7;goto B69556a;
case 0x69556c:c.instructions+=6;goto B69556c;
case 0x69556d:c.instructions+=5;goto B69556d;
case 0x695570:c.instructions+=4;goto B695570;
case 0x695571:c.instructions+=3;goto B695571;
case 0x695573:c.instructions+=2;goto B695573;
case 0x695576:c.instructions+=1;goto B695576;
case 0x695578:goto L695578;
case 0x69557b:c.instructions+=4;goto B69557b;
case 0x69557e:c.instructions+=3;goto B69557e;
case 0x695580:c.instructions+=2;goto B695580;
case 0x695583:c.instructions+=1;goto B695583;
case 0x695588:goto L695588;
case 0x69558a:c.instructions+=1;goto B69558a;
case 0x69558c:goto L69558c;
case 0x69558d:c.instructions+=2;goto B69558d;
case 0x695590:c.instructions+=1;goto B695590;
case 0x695592:goto L695592;
case 0x695594:goto L695594;
case 0x695595:c.instructions+=3;goto B695595;
case 0x695596:c.instructions+=2;goto B695596;
case 0x695597:c.instructions+=1;goto B695597;
case 0x69559a:goto L69559a;
case 0x69559c:c.instructions+=9;goto B69559c;
case 0x69559d:c.instructions+=8;goto B69559d;
case 0x69559f:c.instructions+=7;goto B69559f;
case 0x6955a2:c.instructions+=6;goto B6955a2;
case 0x6955a5:c.instructions+=5;goto B6955a5;
case 0x6955a8:c.instructions+=4;goto B6955a8;
case 0x6955aa:c.instructions+=3;goto B6955aa;
case 0x6955ad:c.instructions+=2;goto B6955ad;
case 0x6955ae:c.instructions+=1;goto B6955ae;
case 0x6955b4:goto L6955b4;
case 0x6955b5:c.instructions+=1;goto B6955b5;
case 0x6955b8:goto L6955b8;
case 0x6955ba:c.instructions+=7;goto B6955ba;
case 0x6955bb:c.instructions+=6;goto B6955bb;
case 0x6955bd:c.instructions+=5;goto B6955bd;
case 0x6955be:c.instructions+=4;goto B6955be;
case 0x6955c1:c.instructions+=3;goto B6955c1;
case 0x6955c3:c.instructions+=2;goto B6955c3;
case 0x6955c6:c.instructions+=1;goto B6955c6;
case 0x6955c8:goto L6955c8;
case 0x6955cb:c.instructions+=4;goto B6955cb;
case 0x6955ce:c.instructions+=3;goto B6955ce;
case 0x6955cf:c.instructions+=2;goto B6955cf;
case 0x6955d1:c.instructions+=1;goto B6955d1;
case 0x6955d3:goto L6955d3;
case 0x6955d5:c.instructions+=6;goto B6955d5;
case 0x6955d8:c.instructions+=5;goto B6955d8;
case 0x6955db:c.instructions+=4;goto B6955db;
case 0x6955dd:c.instructions+=3;goto B6955dd;
case 0x6955e0:c.instructions+=2;goto B6955e0;
case 0x6955e1:c.instructions+=1;goto B6955e1;
case 0x6955e3:goto L6955e3;
case 0x6955e4:goto L6955e4;
case 0x6955e7:c.instructions+=6;goto B6955e7;
case 0x6955e9:c.instructions+=5;goto B6955e9;
case 0x6955ea:c.instructions+=4;goto B6955ea;
case 0x6955ed:c.instructions+=3;goto B6955ed;
case 0x6955f0:c.instructions+=2;goto B6955f0;
case 0x6955f1:c.instructions+=1;goto B6955f1;
case 0x6955f7:goto L6955f7;
case 0x6955f8:c.instructions+=2;goto B6955f8;
case 0x6955f9:c.instructions+=1;goto B6955f9;
case 0x6955fc:goto L6955fc;
case 0x6955fe:c.instructions+=16;goto B6955fe;
case 0x6955ff:c.instructions+=15;goto B6955ff;
case 0x695601:c.instructions+=14;goto B695601;
case 0x695602:c.instructions+=13;goto B695602;
case 0x695603:c.instructions+=12;goto B695603;
case 0x695606:c.instructions+=11;goto B695606;
case 0x695608:c.instructions+=10;goto B695608;
case 0x69560b:c.instructions+=9;goto B69560b;
case 0x69560e:c.instructions+=8;goto B69560e;
case 0x695611:c.instructions+=7;goto B695611;
case 0x695616:c.instructions+=6;goto B695616;
case 0x695619:c.instructions+=5;goto B695619;
case 0x69561c:c.instructions+=4;goto B69561c;
case 0x69561e:c.instructions+=3;goto B69561e;
case 0x695621:c.instructions+=2;goto B695621;
case 0x695624:c.instructions+=1;goto B695624;
case 0x695626:goto L695626;
case 0x695629:c.instructions+=3;goto B695629;
case 0x69562c:c.instructions+=2;goto B69562c;
case 0x69562e:c.instructions+=1;goto B69562e;
case 0x69562f:goto L69562f;
case 0x695632:c.instructions+=8;goto B695632;
case 0x695635:c.instructions+=7;goto B695635;
case 0x695638:c.instructions+=6;goto B695638;
case 0x69563b:c.instructions+=5;goto B69563b;
case 0x69563e:c.instructions+=4;goto B69563e;
case 0x695640:c.instructions+=3;goto B695640;
case 0x695643:c.instructions+=2;goto B695643;
case 0x695644:c.instructions+=1;goto B695644;
case 0x695646:goto L695646;
case 0x695647:goto L695647;
case 0x69564a:c.instructions+=7;goto B69564a;
case 0x69564d:c.instructions+=6;goto B69564d;
case 0x69564f:c.instructions+=5;goto B69564f;
case 0x695650:c.instructions+=4;goto B695650;
case 0x695653:c.instructions+=3;goto B695653;
case 0x695656:c.instructions+=2;goto B695656;
case 0x695657:c.instructions+=1;goto B695657;
case 0x69565d:goto L69565d;
case 0x69565e:c.instructions+=2;goto B69565e;
case 0x69565f:c.instructions+=1;goto B69565f;
case 0x695662:goto L695662;
case 0x695664:c.instructions+=9;goto B695664;
case 0x695665:c.instructions+=8;goto B695665;
case 0x695667:c.instructions+=7;goto B695667;
case 0x69566a:c.instructions+=6;goto B69566a;
case 0x69566d:c.instructions+=5;goto B69566d;
case 0x695670:c.instructions+=4;goto B695670;
case 0x695672:c.instructions+=3;goto B695672;
case 0x695675:c.instructions+=2;goto B695675;
case 0x695676:c.instructions+=1;goto B695676;
case 0x69567c:goto L69567c;
case 0x69567d:c.instructions+=1;goto B69567d;
case 0x695680:goto L695680;
case 0x695682:c.instructions+=7;goto B695682;
case 0x695683:c.instructions+=6;goto B695683;
case 0x695685:c.instructions+=5;goto B695685;
case 0x695686:c.instructions+=4;goto B695686;
case 0x695689:c.instructions+=3;goto B695689;
case 0x69568b:c.instructions+=2;goto B69568b;
case 0x69568e:c.instructions+=1;goto B69568e;
case 0x695690:goto L695690;
case 0x695693:c.instructions+=4;goto B695693;
case 0x695696:c.instructions+=3;goto B695696;
case 0x695697:c.instructions+=2;goto B695697;
case 0x695699:c.instructions+=1;goto B695699;
case 0x69569b:goto L69569b;
case 0x69569d:c.instructions+=8;goto B69569d;
case 0x6956a0:c.instructions+=7;goto B6956a0;
case 0x6956a3:c.instructions+=6;goto B6956a3;
case 0x6956a6:c.instructions+=5;goto B6956a6;
case 0x6956a9:c.instructions+=4;goto B6956a9;
case 0x6956ab:c.instructions+=3;goto B6956ab;
case 0x6956ae:c.instructions+=2;goto B6956ae;
case 0x6956af:c.instructions+=1;goto B6956af;
case 0x6956b1:goto L6956b1;
case 0x6956b2:goto L6956b2;
case 0x6956b5:c.instructions+=6;goto B6956b5;
case 0x6956b7:c.instructions+=5;goto B6956b7;
case 0x6956b8:c.instructions+=4;goto B6956b8;
case 0x6956bb:c.instructions+=3;goto B6956bb;
case 0x6956be:c.instructions+=2;goto B6956be;
case 0x6956bf:c.instructions+=1;goto B6956bf;
case 0x6956c5:goto L6956c5;
case 0x6956c6:c.instructions+=2;goto B6956c6;
case 0x6956c7:c.instructions+=1;goto B6956c7;
case 0x6956ca:goto L6956ca;
case 0x6956cc:c.instructions+=7;goto B6956cc;
case 0x6956cd:c.instructions+=6;goto B6956cd;
case 0x6956cf:c.instructions+=5;goto B6956cf;
case 0x6956d0:c.instructions+=4;goto B6956d0;
case 0x6956d3:c.instructions+=3;goto B6956d3;
case 0x6956d5:c.instructions+=2;goto B6956d5;
case 0x6956d8:c.instructions+=1;goto B6956d8;
case 0x6956da:goto L6956da;
case 0x6956dd:c.instructions+=2;goto B6956dd;
case 0x6956e0:c.instructions+=1;goto B6956e0;
case 0x6956e2:goto L6956e2;
case 0x6956e5:c.instructions+=4;goto B6956e5;
case 0x6956e7:c.instructions+=3;goto B6956e7;
case 0x6956ea:c.instructions+=2;goto B6956ea;
case 0x6956eb:c.instructions+=1;goto B6956eb;
case 0x6956ed:goto L6956ed;
case 0x6956f0:c.instructions+=6;goto B6956f0;
case 0x6956f2:c.instructions+=5;goto B6956f2;
case 0x6956f3:c.instructions+=4;goto B6956f3;
case 0x6956f6:c.instructions+=3;goto B6956f6;
case 0x6956f9:c.instructions+=2;goto B6956f9;
case 0x6956fa:c.instructions+=1;goto B6956fa;
case 0x695700:goto L695700;
case 0x695701:c.instructions+=2;goto B695701;
case 0x695702:c.instructions+=1;goto B695702;
case 0x695705:goto L695705;
case 0x695707:c.instructions+=12;goto B695707;
case 0x695708:c.instructions+=11;goto B695708;
case 0x69570a:c.instructions+=10;goto B69570a;
case 0x69570d:c.instructions+=9;goto B69570d;
case 0x69570f:c.instructions+=8;goto B69570f;
case 0x695710:c.instructions+=7;goto B695710;
case 0x695713:c.instructions+=6;goto B695713;
case 0x695714:c.instructions+=5;goto B695714;
case 0x695717:c.instructions+=4;goto B695717;
case 0x695718:c.instructions+=3;goto B695718;
case 0x695719:c.instructions+=2;goto B695719;
case 0x69571c:c.instructions+=1;goto B69571c;
case 0x69571f:goto L69571f;
case 0x695721:c.instructions+=6;goto B695721;
case 0x695724:c.instructions+=5;goto B695724;
case 0x695727:c.instructions+=4;goto B695727;
case 0x695729:c.instructions+=3;goto B695729;
case 0x69572b:c.instructions+=2;goto B69572b;
case 0x69572d:c.instructions+=1;goto B69572d;
case 0x695730:goto L695730;
case 0x695732:goto L695732;
case 0x695734:c.instructions+=1;goto B695734;
case 0x695737:goto L695737;
case 0x695739:goto L695739;
case 0x69573a:c.instructions+=5;goto B69573a;
case 0x69573b:c.instructions+=4;goto B69573b;
case 0x69573d:c.instructions+=3;goto B69573d;
case 0x69573e:c.instructions+=2;goto B69573e;
case 0x69573f:c.instructions+=1;goto B69573f;
case 0x695742:goto L695742;
case 0x695744:c.instructions+=9;goto B695744;
case 0x695745:c.instructions+=8;goto B695745;
case 0x695747:c.instructions+=7;goto B695747;
case 0x695748:c.instructions+=6;goto B695748;
case 0x69574b:c.instructions+=5;goto B69574b;
case 0x69574d:c.instructions+=4;goto B69574d;
case 0x695750:c.instructions+=3;goto B695750;
case 0x695751:c.instructions+=2;goto B695751;
case 0x695752:c.instructions+=1;goto B695752;
case 0x695754:goto L695754;
case 0x695757:c.instructions+=3;goto B695757;
case 0x69575a:c.instructions+=2;goto B69575a;
case 0x69575c:c.instructions+=1;goto B69575c;
case 0x69575e:goto L69575e;
case 0x695760:c.instructions+=8;goto B695760;
case 0x695763:c.instructions+=7;goto B695763;
case 0x695766:c.instructions+=6;goto B695766;
case 0x695769:c.instructions+=5;goto B695769;
case 0x69576c:c.instructions+=4;goto B69576c;
case 0x69576e:c.instructions+=3;goto B69576e;
case 0x695771:c.instructions+=2;goto B695771;
case 0x695772:c.instructions+=1;goto B695772;
case 0x695774:goto L695774;
case 0x695777:c.instructions+=5;goto B695777;
case 0x695779:c.instructions+=4;goto B695779;
case 0x69577c:c.instructions+=3;goto B69577c;
case 0x69577d:c.instructions+=2;goto B69577d;
case 0x695780:c.instructions+=1;goto B695780;
case 0x695783:goto L695783;
case 0x695785:c.instructions+=6;goto B695785;
case 0x695788:c.instructions+=5;goto B695788;
case 0x69578b:c.instructions+=4;goto B69578b;
case 0x69578d:c.instructions+=3;goto B69578d;
case 0x69578f:c.instructions+=2;goto B69578f;
case 0x695791:c.instructions+=1;goto B695791;
case 0x695794:goto L695794;
case 0x695796:goto L695796;
case 0x695798:c.instructions+=1;goto B695798;
case 0x69579b:goto L69579b;
case 0x69579d:goto L69579d;
case 0x69579e:c.instructions+=5;goto B69579e;
case 0x69579f:c.instructions+=4;goto B69579f;
case 0x6957a1:c.instructions+=3;goto B6957a1;
case 0x6957a2:c.instructions+=2;goto B6957a2;
case 0x6957a3:c.instructions+=1;goto B6957a3;
case 0x6957a6:goto L6957a6;
case 0x6957a8:c.instructions+=10;goto B6957a8;
case 0x6957a9:c.instructions+=9;goto B6957a9;
case 0x6957ab:c.instructions+=8;goto B6957ab;
case 0x6957ac:c.instructions+=7;goto B6957ac;
case 0x6957af:c.instructions+=6;goto B6957af;
case 0x6957b0:c.instructions+=5;goto B6957b0;
case 0x6957b3:c.instructions+=4;goto B6957b3;
case 0x6957b5:c.instructions+=3;goto B6957b5;
case 0x6957b8:c.instructions+=2;goto B6957b8;
case 0x6957b9:c.instructions+=1;goto B6957b9;
case 0x6957bb:goto L6957bb;
case 0x6957be:c.instructions+=2;goto B6957be;
case 0x6957c0:c.instructions+=1;goto B6957c0;
case 0x6957c2:goto L6957c2;
case 0x6957c5:c.instructions+=4;goto B6957c5;
case 0x6957c7:c.instructions+=3;goto B6957c7;
case 0x6957ca:c.instructions+=2;goto B6957ca;
case 0x6957cb:c.instructions+=1;goto B6957cb;
case 0x6957cd:goto L6957cd;
case 0x6957d0:c.instructions+=4;goto B6957d0;
case 0x6957d2:c.instructions+=3;goto B6957d2;
case 0x6957d3:c.instructions+=2;goto B6957d3;
case 0x6957d6:c.instructions+=1;goto B6957d6;
case 0x6957d9:goto L6957d9;
case 0x6957db:c.instructions+=6;goto B6957db;
case 0x6957de:c.instructions+=5;goto B6957de;
case 0x6957e1:c.instructions+=4;goto B6957e1;
case 0x6957e3:c.instructions+=3;goto B6957e3;
case 0x6957e5:c.instructions+=2;goto B6957e5;
case 0x6957e7:c.instructions+=1;goto B6957e7;
case 0x6957ea:goto L6957ea;
case 0x6957ec:goto L6957ec;
case 0x6957ee:c.instructions+=1;goto B6957ee;
case 0x6957f1:goto L6957f1;
case 0x6957f3:goto L6957f3;
case 0x6957f4:c.instructions+=5;goto B6957f4;
case 0x6957f5:c.instructions+=4;goto B6957f5;
case 0x6957f7:c.instructions+=3;goto B6957f7;
case 0x6957f8:c.instructions+=2;goto B6957f8;
case 0x6957f9:c.instructions+=1;goto B6957f9;
case 0x6957fc:goto L6957fc;
case 0x6957fe:c.instructions+=5;goto B6957fe;
case 0x6957ff:c.instructions+=4;goto B6957ff;
case 0x695801:c.instructions+=3;goto B695801;
case 0x695802:c.instructions+=2;goto B695802;
case 0x695804:c.instructions+=1;goto B695804;
case 0x695809:goto L695809;
case 0x69580d:c.instructions+=1;goto B69580d;
case 0x69580f:goto L69580f;
case 0x695810:c.instructions+=1;goto B695810;
case 0x695815:goto L695815;
case 0x695816:goto L695816;
case 0x695818:c.instructions+=3;goto B695818;
case 0x695819:c.instructions+=2;goto B695819;
case 0x69581a:c.instructions+=1;goto B69581a;
case 0x69581d:goto L69581d;
case 0x69581f:c.instructions+=5;goto B69581f;
case 0x695820:c.instructions+=4;goto B695820;
case 0x695822:c.instructions+=3;goto B695822;
case 0x695826:c.instructions+=2;goto B695826;
case 0x69582c:c.instructions+=1;goto B69582c;
case 0x69582e:goto L69582e;
case 0x69582f:c.instructions+=3;goto B69582f;
case 0x695831:c.instructions+=2;goto B695831;
case 0x695834:c.instructions+=1;goto B695834;
case 0x695836:goto L695836;
case 0x695839:c.instructions+=3;goto B695839;
case 0x69583c:c.instructions+=2;goto B69583c;
case 0x69583e:c.instructions+=1;goto B69583e;
case 0x695840:goto L695840;
case 0x695842:c.instructions+=1;goto B695842;
case 0x695847:goto L695847;
case 0x695848:c.instructions+=2;goto B695848;
case 0x69584b:c.instructions+=1;goto B69584b;
case 0x69584d:goto L69584d;
case 0x695850:c.instructions+=1;goto B695850;
case 0x695855:goto L695855;
case 0x695856:c.instructions+=1;goto B695856;
case 0x695857:goto L695857;
case 0x69585a:c.instructions+=1;goto B69585a;
case 0x69585f:goto L69585f;
case 0x695862:c.instructions+=1;goto B695862;
case 0x695867:goto L695867;
case 0x695868:c.instructions+=3;goto B695868;
case 0x695869:c.instructions+=2;goto B695869;
case 0x69586a:c.instructions+=1;goto B69586a;
case 0x69586b:goto L69586b;
case 0x69586d:c.instructions+=9;goto B69586d;
case 0x69586e:c.instructions+=8;goto B69586e;
case 0x695870:c.instructions+=7;goto B695870;
case 0x695873:c.instructions+=6;goto B695873;
case 0x695876:c.instructions+=5;goto B695876;
case 0x695879:c.instructions+=4;goto B695879;
case 0x69587b:c.instructions+=3;goto B69587b;
case 0x69587e:c.instructions+=2;goto B69587e;
case 0x69587f:c.instructions+=1;goto B69587f;
case 0x695885:goto L695885;
case 0x695886:c.instructions+=1;goto B695886;
case 0x695889:goto L695889;
case 0x69588b:c.instructions+=4;goto B69588b;
case 0x69588c:c.instructions+=3;goto B69588c;
case 0x69588e:c.instructions+=2;goto B69588e;
case 0x695892:c.instructions+=1;goto B695892;
case 0x695894:goto L695894;
case 0x695897:c.instructions+=4;goto B695897;
case 0x69589a:c.instructions+=3;goto B69589a;
case 0x69589b:c.instructions+=2;goto B69589b;
case 0x69589e:c.instructions+=1;goto B69589e;
case 0x6958a0:goto L6958a0;
case 0x6958a2:c.instructions+=6;goto B6958a2;
case 0x6958a5:c.instructions+=5;goto B6958a5;
case 0x6958a8:c.instructions+=4;goto B6958a8;
case 0x6958aa:c.instructions+=3;goto B6958aa;
case 0x6958ad:c.instructions+=2;goto B6958ad;
case 0x6958ae:c.instructions+=1;goto B6958ae;
case 0x6958b0:goto L6958b0;
case 0x6958b1:goto L6958b1;
case 0x6958b4:c.instructions+=6;goto B6958b4;
case 0x6958b7:c.instructions+=5;goto B6958b7;
case 0x6958ba:c.instructions+=4;goto B6958ba;
case 0x6958bc:c.instructions+=3;goto B6958bc;
case 0x6958bf:c.instructions+=2;goto B6958bf;
case 0x6958c0:c.instructions+=1;goto B6958c0;
case 0x6958c6:goto L6958c6;
case 0x6958c7:c.instructions+=1;goto B6958c7;
case 0x6958ca:goto L6958ca;
case 0x6958cc:c.instructions+=4;goto B6958cc;
case 0x6958cd:c.instructions+=3;goto B6958cd;
case 0x6958cf:c.instructions+=2;goto B6958cf;
case 0x6958d3:c.instructions+=1;goto B6958d3;
case 0x6958d5:goto L6958d5;
case 0x6958d8:c.instructions+=4;goto B6958d8;
case 0x6958db:c.instructions+=3;goto B6958db;
case 0x6958dc:c.instructions+=2;goto B6958dc;
case 0x6958df:c.instructions+=1;goto B6958df;
case 0x6958e1:goto L6958e1;
case 0x6958e7:c.instructions+=5;goto B6958e7;
case 0x6958ea:c.instructions+=4;goto B6958ea;
case 0x6958ec:c.instructions+=3;goto B6958ec;
case 0x6958ee:c.instructions+=2;goto B6958ee;
case 0x6958f1:c.instructions+=1;goto B6958f1;
case 0x6958f3:goto L6958f3;
case 0x6958f5:c.instructions+=2;goto B6958f5;
case 0x6958f6:c.instructions+=1;goto B6958f6;
case 0x6958f8:goto L6958f8;
case 0x6958fa:goto L6958fa;
case 0x6958fc:c.instructions+=3;goto B6958fc;
case 0x6958ff:c.instructions+=2;goto B6958ff;
case 0x695900:c.instructions+=1;goto B695900;
case 0x695902:goto L695902;
case 0x695903:goto L695903;
case 0x695906:c.instructions+=6;goto B695906;
case 0x695909:c.instructions+=5;goto B695909;
case 0x69590c:c.instructions+=4;goto B69590c;
case 0x69590e:c.instructions+=3;goto B69590e;
case 0x695911:c.instructions+=2;goto B695911;
case 0x695912:c.instructions+=1;goto B695912;
case 0x695918:goto L695918;
case 0x695919:c.instructions+=1;goto B695919;
case 0x69591c:goto L69591c;
case 0x69591e:c.instructions+=9;goto B69591e;
case 0x69591f:c.instructions+=8;goto B69591f;
case 0x695921:c.instructions+=7;goto B695921;
case 0x695924:c.instructions+=6;goto B695924;
case 0x695927:c.instructions+=5;goto B695927;
case 0x69592a:c.instructions+=4;goto B69592a;
case 0x69592c:c.instructions+=3;goto B69592c;
case 0x69592f:c.instructions+=2;goto B69592f;
case 0x695930:c.instructions+=1;goto B695930;
case 0x695936:goto L695936;
case 0x695937:c.instructions+=1;goto B695937;
case 0x69593a:goto L69593a;
case 0x69593c:c.instructions+=7;goto B69593c;
case 0x69593d:c.instructions+=6;goto B69593d;
case 0x69593f:c.instructions+=5;goto B69593f;
case 0x695940:c.instructions+=4;goto B695940;
case 0x695943:c.instructions+=3;goto B695943;
case 0x695945:c.instructions+=2;goto B695945;
case 0x695948:c.instructions+=1;goto B695948;
case 0x69594a:goto L69594a;
case 0x69594d:c.instructions+=4;goto B69594d;
case 0x695950:c.instructions+=3;goto B695950;
case 0x695951:c.instructions+=2;goto B695951;
case 0x695953:c.instructions+=1;goto B695953;
case 0x695955:goto L695955;
case 0x695957:c.instructions+=6;goto B695957;
case 0x69595a:c.instructions+=5;goto B69595a;
case 0x69595d:c.instructions+=4;goto B69595d;
case 0x69595f:c.instructions+=3;goto B69595f;
case 0x695962:c.instructions+=2;goto B695962;
case 0x695963:c.instructions+=1;goto B695963;
case 0x695965:goto L695965;
case 0x695966:goto L695966;
case 0x695969:c.instructions+=6;goto B695969;
case 0x69596b:c.instructions+=5;goto B69596b;
case 0x69596c:c.instructions+=4;goto B69596c;
case 0x69596f:c.instructions+=3;goto B69596f;
case 0x695972:c.instructions+=2;goto B695972;
case 0x695973:c.instructions+=1;goto B695973;
case 0x695979:goto L695979;
case 0x69597a:c.instructions+=2;goto B69597a;
case 0x69597b:c.instructions+=1;goto B69597b;
case 0x69597e:goto L69597e;
case 0x695980:c.instructions+=16;goto B695980;
case 0x695981:c.instructions+=15;goto B695981;
case 0x695983:c.instructions+=14;goto B695983;
case 0x695984:c.instructions+=13;goto B695984;
case 0x695985:c.instructions+=12;goto B695985;
case 0x695988:c.instructions+=11;goto B695988;
case 0x69598a:c.instructions+=10;goto B69598a;
case 0x69598d:c.instructions+=9;goto B69598d;
case 0x695990:c.instructions+=8;goto B695990;
case 0x695993:c.instructions+=7;goto B695993;
case 0x695998:c.instructions+=6;goto B695998;
case 0x69599b:c.instructions+=5;goto B69599b;
case 0x69599e:c.instructions+=4;goto B69599e;
case 0x6959a0:c.instructions+=3;goto B6959a0;
case 0x6959a3:c.instructions+=2;goto B6959a3;
case 0x6959a6:c.instructions+=1;goto B6959a6;
case 0x6959a8:goto L6959a8;
case 0x6959ab:c.instructions+=3;goto B6959ab;
case 0x6959ae:c.instructions+=2;goto B6959ae;
case 0x6959b0:c.instructions+=1;goto B6959b0;
case 0x6959b1:goto L6959b1;
case 0x6959b4:c.instructions+=8;goto B6959b4;
case 0x6959b7:c.instructions+=7;goto B6959b7;
case 0x6959ba:c.instructions+=6;goto B6959ba;
case 0x6959bd:c.instructions+=5;goto B6959bd;
case 0x6959c0:c.instructions+=4;goto B6959c0;
case 0x6959c2:c.instructions+=3;goto B6959c2;
case 0x6959c5:c.instructions+=2;goto B6959c5;
case 0x6959c6:c.instructions+=1;goto B6959c6;
case 0x6959c8:goto L6959c8;
case 0x6959c9:goto L6959c9;
case 0x6959cc:c.instructions+=7;goto B6959cc;
case 0x6959cf:c.instructions+=6;goto B6959cf;
case 0x6959d1:c.instructions+=5;goto B6959d1;
case 0x6959d2:c.instructions+=4;goto B6959d2;
case 0x6959d5:c.instructions+=3;goto B6959d5;
case 0x6959d8:c.instructions+=2;goto B6959d8;
case 0x6959d9:c.instructions+=1;goto B6959d9;
case 0x6959df:goto L6959df;
case 0x6959e0:c.instructions+=2;goto B6959e0;
case 0x6959e1:c.instructions+=1;goto B6959e1;
case 0x6959e4:goto L6959e4;
case 0x6959e6:c.instructions+=9;goto B6959e6;
case 0x6959e7:c.instructions+=8;goto B6959e7;
case 0x6959e9:c.instructions+=7;goto B6959e9;
case 0x6959ec:c.instructions+=6;goto B6959ec;
case 0x6959ef:c.instructions+=5;goto B6959ef;
case 0x6959f2:c.instructions+=4;goto B6959f2;
case 0x6959f4:c.instructions+=3;goto B6959f4;
case 0x6959f7:c.instructions+=2;goto B6959f7;
case 0x6959f8:c.instructions+=1;goto B6959f8;
case 0x6959fe:goto L6959fe;
case 0x6959ff:c.instructions+=1;goto B6959ff;
case 0x695a02:goto L695a02;
case 0x695a04:c.instructions+=7;goto B695a04;
case 0x695a05:c.instructions+=6;goto B695a05;
case 0x695a07:c.instructions+=5;goto B695a07;
case 0x695a08:c.instructions+=4;goto B695a08;
case 0x695a0b:c.instructions+=3;goto B695a0b;
case 0x695a0d:c.instructions+=2;goto B695a0d;
case 0x695a10:c.instructions+=1;goto B695a10;
case 0x695a12:goto L695a12;
case 0x695a15:c.instructions+=4;goto B695a15;
case 0x695a18:c.instructions+=3;goto B695a18;
case 0x695a19:c.instructions+=2;goto B695a19;
case 0x695a1b:c.instructions+=1;goto B695a1b;
case 0x695a1d:goto L695a1d;
case 0x695a1f:c.instructions+=8;goto B695a1f;
case 0x695a22:c.instructions+=7;goto B695a22;
case 0x695a25:c.instructions+=6;goto B695a25;
case 0x695a28:c.instructions+=5;goto B695a28;
case 0x695a2b:c.instructions+=4;goto B695a2b;
case 0x695a2d:c.instructions+=3;goto B695a2d;
case 0x695a30:c.instructions+=2;goto B695a30;
case 0x695a31:c.instructions+=1;goto B695a31;
case 0x695a33:goto L695a33;
case 0x695a34:goto L695a34;
case 0x695a37:c.instructions+=6;goto B695a37;
case 0x695a39:c.instructions+=5;goto B695a39;
case 0x695a3a:c.instructions+=4;goto B695a3a;
case 0x695a3d:c.instructions+=3;goto B695a3d;
case 0x695a40:c.instructions+=2;goto B695a40;
case 0x695a41:c.instructions+=1;goto B695a41;
case 0x695a47:goto L695a47;
case 0x695a48:c.instructions+=2;goto B695a48;
case 0x695a49:c.instructions+=1;goto B695a49;
case 0x695a4c:goto L695a4c;
case 0x695a4e:c.instructions+=7;goto B695a4e;
case 0x695a4f:c.instructions+=6;goto B695a4f;
case 0x695a51:c.instructions+=5;goto B695a51;
case 0x695a52:c.instructions+=4;goto B695a52;
case 0x695a55:c.instructions+=3;goto B695a55;
case 0x695a57:c.instructions+=2;goto B695a57;
case 0x695a5a:c.instructions+=1;goto B695a5a;
case 0x695a5c:goto L695a5c;
case 0x695a5f:c.instructions+=2;goto B695a5f;
case 0x695a62:c.instructions+=1;goto B695a62;
case 0x695a64:goto L695a64;
case 0x695a67:c.instructions+=4;goto B695a67;
case 0x695a69:c.instructions+=3;goto B695a69;
case 0x695a6c:c.instructions+=2;goto B695a6c;
case 0x695a6d:c.instructions+=1;goto B695a6d;
case 0x695a6f:goto L695a6f;
case 0x695a72:c.instructions+=6;goto B695a72;
case 0x695a74:c.instructions+=5;goto B695a74;
case 0x695a75:c.instructions+=4;goto B695a75;
case 0x695a78:c.instructions+=3;goto B695a78;
case 0x695a7b:c.instructions+=2;goto B695a7b;
case 0x695a7c:c.instructions+=1;goto B695a7c;
case 0x695a82:goto L695a82;
case 0x695a83:c.instructions+=2;goto B695a83;
case 0x695a84:c.instructions+=1;goto B695a84;
case 0x695a87:goto L695a87;
case 0x695a89:c.instructions+=9;goto B695a89;
case 0x695a8a:c.instructions+=8;goto B695a8a;
case 0x695a8c:c.instructions+=7;goto B695a8c;
case 0x695a8f:c.instructions+=6;goto B695a8f;
case 0x695a92:c.instructions+=5;goto B695a92;
case 0x695a95:c.instructions+=4;goto B695a95;
case 0x695a97:c.instructions+=3;goto B695a97;
case 0x695a9a:c.instructions+=2;goto B695a9a;
case 0x695a9b:c.instructions+=1;goto B695a9b;
case 0x695aa1:goto L695aa1;
case 0x695aa2:c.instructions+=1;goto B695aa2;
case 0x695aa5:goto L695aa5;
case 0x695aa7:c.instructions+=4;goto B695aa7;
case 0x695aa8:c.instructions+=3;goto B695aa8;
case 0x695aaa:c.instructions+=2;goto B695aaa;
case 0x695aae:c.instructions+=1;goto B695aae;
case 0x695ab0:goto L695ab0;
case 0x695ab3:c.instructions+=4;goto B695ab3;
case 0x695ab6:c.instructions+=3;goto B695ab6;
case 0x695ab7:c.instructions+=2;goto B695ab7;
case 0x695aba:c.instructions+=1;goto B695aba;
case 0x695abc:goto L695abc;
case 0x695abe:c.instructions+=6;goto B695abe;
case 0x695ac1:c.instructions+=5;goto B695ac1;
case 0x695ac4:c.instructions+=4;goto B695ac4;
case 0x695ac6:c.instructions+=3;goto B695ac6;
case 0x695ac9:c.instructions+=2;goto B695ac9;
case 0x695aca:c.instructions+=1;goto B695aca;
case 0x695acc:goto L695acc;
case 0x695acd:goto L695acd;
case 0x695ad0:c.instructions+=6;goto B695ad0;
case 0x695ad3:c.instructions+=5;goto B695ad3;
case 0x695ad6:c.instructions+=4;goto B695ad6;
case 0x695ad8:c.instructions+=3;goto B695ad8;
case 0x695adb:c.instructions+=2;goto B695adb;
case 0x695adc:c.instructions+=1;goto B695adc;
case 0x695ae2:goto L695ae2;
case 0x695ae3:c.instructions+=1;goto B695ae3;
case 0x695ae6:goto L695ae6;
case 0x695ae8:c.instructions+=4;goto B695ae8;
case 0x695ae9:c.instructions+=3;goto B695ae9;
case 0x695aeb:c.instructions+=2;goto B695aeb;
case 0x695aef:c.instructions+=1;goto B695aef;
case 0x695af1:goto L695af1;
case 0x695af4:c.instructions+=4;goto B695af4;
case 0x695af7:c.instructions+=3;goto B695af7;
case 0x695af8:c.instructions+=2;goto B695af8;
case 0x695afb:c.instructions+=1;goto B695afb;
case 0x695afd:goto L695afd;
case 0x695b03:c.instructions+=5;goto B695b03;
case 0x695b06:c.instructions+=4;goto B695b06;
case 0x695b08:c.instructions+=3;goto B695b08;
case 0x695b0a:c.instructions+=2;goto B695b0a;
case 0x695b0d:c.instructions+=1;goto B695b0d;
case 0x695b0f:goto L695b0f;
case 0x695b11:c.instructions+=2;goto B695b11;
case 0x695b12:c.instructions+=1;goto B695b12;
case 0x695b14:goto L695b14;
case 0x695b16:goto L695b16;
case 0x695b18:c.instructions+=3;goto B695b18;
case 0x695b1b:c.instructions+=2;goto B695b1b;
case 0x695b1c:c.instructions+=1;goto B695b1c;
case 0x695b1e:goto L695b1e;
case 0x695b1f:goto L695b1f;
case 0x695b22:c.instructions+=6;goto B695b22;
case 0x695b25:c.instructions+=5;goto B695b25;
case 0x695b28:c.instructions+=4;goto B695b28;
case 0x695b2a:c.instructions+=3;goto B695b2a;
case 0x695b2d:c.instructions+=2;goto B695b2d;
case 0x695b2e:c.instructions+=1;goto B695b2e;
case 0x695b34:goto L695b34;
case 0x695b35:c.instructions+=1;goto B695b35;
case 0x695b38:goto L695b38;
case 0x695b3a:c.instructions+=16;goto B695b3a;
case 0x695b3b:c.instructions+=15;goto B695b3b;
case 0x695b3d:c.instructions+=14;goto B695b3d;
case 0x695b40:c.instructions+=13;goto B695b40;
case 0x695b41:c.instructions+=12;goto B695b41;
case 0x695b42:c.instructions+=11;goto B695b42;
case 0x695b43:c.instructions+=10;goto B695b43;
case 0x695b46:c.instructions+=9;goto B695b46;
case 0x695b49:c.instructions+=8;goto B695b49;
case 0x695b4c:c.instructions+=7;goto B695b4c;
case 0x695b4f:c.instructions+=6;goto B695b4f;
case 0x695b52:c.instructions+=5;goto B695b52;
case 0x695b55:c.instructions+=4;goto B695b55;
case 0x695b58:c.instructions+=3;goto B695b58;
case 0x695b5a:c.instructions+=2;goto B695b5a;
case 0x695b5c:c.instructions+=1;goto B695b5c;
case 0x695b62:goto L695b62;
case 0x695b63:c.instructions+=1;goto B695b63;
case 0x695b69:goto L695b69;
case 0x695b6a:c.instructions+=1;goto B695b6a;
case 0x695b70:goto L695b70;
case 0x695b71:c.instructions+=1;goto B695b71;
case 0x695b77:goto L695b77;
case 0x695b78:c.instructions+=2;goto B695b78;
case 0x695b79:c.instructions+=1;goto B695b79;
case 0x695b7b:goto L695b7b;
case 0x695b80:c.instructions+=1;goto B695b80;
case 0x695b85:goto L695b85;
case 0x695b88:c.instructions+=6;goto B695b88;
case 0x695b8a:c.instructions+=5;goto B695b8a;
case 0x695b8d:c.instructions+=4;goto B695b8d;
case 0x695b90:c.instructions+=3;goto B695b90;
case 0x695b94:c.instructions+=2;goto B695b94;
case 0x695b97:c.instructions+=1;goto B695b97;
case 0x695b99:goto L695b99;
case 0x695b9c:goto L695b9c;
case 0x695b9f:c.instructions+=2;goto B695b9f;
case 0x695ba2:c.instructions+=1;goto B695ba2;
case 0x695ba8:goto L695ba8;
case 0x695bac:c.instructions+=2;goto B695bac;
case 0x695bb1:c.instructions+=1;goto B695bb1;
case 0x695bb3:goto L695bb3;
case 0x695bb6:c.instructions+=8;goto B695bb6;
case 0x695bb9:c.instructions+=7;goto B695bb9;
case 0x695bbc:c.instructions+=6;goto B695bbc;
case 0x695bbf:c.instructions+=5;goto B695bbf;
case 0x695bc2:c.instructions+=4;goto B695bc2;
case 0x695bc5:c.instructions+=3;goto B695bc5;
case 0x695bc8:c.instructions+=2;goto B695bc8;
case 0x695bc9:c.instructions+=1;goto B695bc9;
case 0x695bce:goto L695bce;
case 0x695bd0:c.instructions+=1;goto B695bd0;
case 0x695bd6:goto L695bd6;
case 0x695bd9:c.instructions+=9;goto B695bd9;
case 0x695bdc:c.instructions+=8;goto B695bdc;
case 0x695bdf:c.instructions+=7;goto B695bdf;
case 0x695be2:c.instructions+=6;goto B695be2;
case 0x695be5:c.instructions+=5;goto B695be5;
case 0x695be8:c.instructions+=4;goto B695be8;
case 0x695bec:c.instructions+=3;goto B695bec;
case 0x695bef:c.instructions+=2;goto B695bef;
case 0x695bf2:c.instructions+=1;goto B695bf2;
case 0x695bf4:goto L695bf4;
case 0x695bf7:c.instructions+=3;goto B695bf7;
case 0x695bfa:c.instructions+=2;goto B695bfa;
case 0x695bfd:c.instructions+=1;goto B695bfd;
case 0x695bff:goto L695bff;
case 0x695c04:goto L695c04;
case 0x695c08:c.instructions+=10;goto B695c08;
case 0x695c0c:c.instructions+=9;goto B695c0c;
case 0x695c0e:c.instructions+=8;goto B695c0e;
case 0x695c11:c.instructions+=7;goto B695c11;
case 0x695c14:c.instructions+=6;goto B695c14;
case 0x695c16:c.instructions+=5;goto B695c16;
case 0x695c18:c.instructions+=4;goto B695c18;
case 0x695c1b:c.instructions+=3;goto B695c1b;
case 0x695c1f:c.instructions+=2;goto B695c1f;
case 0x695c22:c.instructions+=1;goto B695c22;
case 0x695c24:goto L695c24;
case 0x695c27:goto L695c27;
case 0x695c2b:c.instructions+=3;goto B695c2b;
case 0x695c2f:c.instructions+=2;goto B695c2f;
case 0x695c32:c.instructions+=1;goto B695c32;
case 0x695c34:goto L695c34;
case 0x695c38:c.instructions+=3;goto B695c38;
case 0x695c3c:c.instructions+=2;goto B695c3c;
case 0x695c3e:c.instructions+=1;goto B695c3e;
case 0x695c40:goto L695c40;
case 0x695c42:c.instructions+=2;goto B695c42;
case 0x695c44:c.instructions+=1;goto B695c44;
case 0x695c46:goto L695c46;
case 0x695c4a:c.instructions+=12;goto B695c4a;
case 0x695c4e:c.instructions+=11;goto B695c4e;
case 0x695c50:c.instructions+=10;goto B695c50;
case 0x695c53:c.instructions+=9;goto B695c53;
case 0x695c56:c.instructions+=8;goto B695c56;
case 0x695c59:c.instructions+=7;goto B695c59;
case 0x695c5c:c.instructions+=6;goto B695c5c;
case 0x695c5e:c.instructions+=5;goto B695c5e;
case 0x695c62:c.instructions+=4;goto B695c62;
case 0x695c65:c.instructions+=3;goto B695c65;
case 0x695c66:c.instructions+=2;goto B695c66;
case 0x695c68:c.instructions+=1;goto B695c68;
case 0x695c6a:goto L695c6a;
case 0x695c6e:c.instructions+=3;goto B695c6e;
case 0x695c71:c.instructions+=2;goto B695c71;
case 0x695c74:c.instructions+=1;goto B695c74;
case 0x695c76:goto L695c76;
case 0x695c79:c.instructions+=3;goto B695c79;
case 0x695c7c:c.instructions+=2;goto B695c7c;
case 0x695c7f:c.instructions+=1;goto B695c7f;
case 0x695c81:goto L695c81;
case 0x695c84:c.instructions+=2;goto B695c84;
case 0x695c87:c.instructions+=1;goto B695c87;
case 0x695c89:goto L695c89;
case 0x695c8d:c.instructions+=3;goto B695c8d;
case 0x695c91:c.instructions+=2;goto B695c91;
case 0x695c94:c.instructions+=1;goto B695c94;
case 0x695c96:goto L695c96;
case 0x695c9a:goto L695c9a;
case 0x695c9d:c.instructions+=6;goto B695c9d;
case 0x695c9f:c.instructions+=5;goto B695c9f;
case 0x695ca1:c.instructions+=4;goto B695ca1;
case 0x695ca4:c.instructions+=3;goto B695ca4;
case 0x695ca8:c.instructions+=2;goto B695ca8;
case 0x695cab:c.instructions+=1;goto B695cab;
case 0x695cad:goto L695cad;
case 0x695cb1:c.instructions+=3;goto B695cb1;
case 0x695cb4:c.instructions+=2;goto B695cb4;
case 0x695cb7:c.instructions+=1;goto B695cb7;
case 0x695cb9:goto L695cb9;
case 0x695cbb:goto L695cbb;
case 0x695cbe:goto L695cbe;
case 0x695cc2:c.instructions+=2;goto B695cc2;
case 0x695cc5:c.instructions+=1;goto B695cc5;
case 0x695ccb:goto L695ccb;
case 0x695ccf:c.instructions+=1;goto B695ccf;
case 0x695cd1:goto L695cd1;
case 0x695cd5:c.instructions+=2;goto B695cd5;
case 0x695cd9:c.instructions+=1;goto B695cd9;
case 0x695cdb:goto L695cdb;
case 0x695cdf:c.instructions+=1;goto B695cdf;
case 0x695ce3:goto L695ce3;
case 0x695ce6:c.instructions+=1;goto B695ce6;
case 0x695cec:goto L695cec;
case 0x695cf0:c.instructions+=2;goto B695cf0;
case 0x695cf7:c.instructions+=1;goto B695cf7;
case 0x695cf9:goto L695cf9;
case 0x695d00:goto L695d00;
case 0x695d04:c.instructions+=5;goto B695d04;
case 0x695d07:c.instructions+=4;goto B695d07;
case 0x695d0a:c.instructions+=3;goto B695d0a;
case 0x695d0c:c.instructions+=2;goto B695d0c;
case 0x695d0f:c.instructions+=1;goto B695d0f;
case 0x695d15:goto L695d15;
case 0x695d18:c.instructions+=12;goto B695d18;
case 0x695d1f:c.instructions+=11;goto B695d1f;
case 0x695d22:c.instructions+=10;goto B695d22;
case 0x695d24:c.instructions+=9;goto B695d24;
case 0x695d27:c.instructions+=8;goto B695d27;
case 0x695d2a:c.instructions+=7;goto B695d2a;
case 0x695d2d:c.instructions+=6;goto B695d2d;
case 0x695d2f:c.instructions+=5;goto B695d2f;
case 0x695d31:c.instructions+=4;goto B695d31;
case 0x695d34:c.instructions+=3;goto B695d34;
case 0x695d37:c.instructions+=2;goto B695d37;
case 0x695d3a:c.instructions+=1;goto B695d3a;
case 0x695d3d:goto L695d3d;
case 0x695d3f:c.instructions+=9;goto B695d3f;
case 0x695d42:c.instructions+=8;goto B695d42;
case 0x695d45:c.instructions+=7;goto B695d45;
case 0x695d47:c.instructions+=6;goto B695d47;
case 0x695d4a:c.instructions+=5;goto B695d4a;
case 0x695d4c:c.instructions+=4;goto B695d4c;
case 0x695d4e:c.instructions+=3;goto B695d4e;
case 0x695d50:c.instructions+=2;goto B695d50;
case 0x695d53:c.instructions+=1;goto B695d53;
case 0x695d55:goto L695d55;
case 0x695d58:goto L695d58;
case 0x695d5b:c.instructions+=10;goto B695d5b;
case 0x695d5e:c.instructions+=9;goto B695d5e;
case 0x695d61:c.instructions+=8;goto B695d61;
case 0x695d64:c.instructions+=7;goto B695d64;
case 0x695d67:c.instructions+=6;goto B695d67;
case 0x695d6a:c.instructions+=5;goto B695d6a;
case 0x695d6d:c.instructions+=4;goto B695d6d;
case 0x695d70:c.instructions+=3;goto B695d70;
case 0x695d73:c.instructions+=2;goto B695d73;
case 0x695d75:c.instructions+=1;goto B695d75;
case 0x695d77:goto L695d77;
case 0x695d79:c.instructions+=1;goto B695d79;
case 0x695d7b:goto L695d7b;
case 0x695d7d:c.instructions+=2;goto B695d7d;
case 0x695d80:c.instructions+=1;goto B695d80;
case 0x695d83:goto L695d83;
case 0x695d87:c.instructions+=6;goto B695d87;
case 0x695d8a:c.instructions+=5;goto B695d8a;
case 0x695d8c:c.instructions+=4;goto B695d8c;
case 0x695d8f:c.instructions+=3;goto B695d8f;
case 0x695d92:c.instructions+=2;goto B695d92;
case 0x695d94:c.instructions+=1;goto B695d94;
case 0x695d96:goto L695d96;
case 0x695d99:c.instructions+=1;goto B695d99;
case 0x695d9b:goto L695d9b;
case 0x695d9e:goto L695d9e;
case 0x695da1:c.instructions+=1;goto B695da1;
case 0x695da4:goto L695da4;
case 0x695da7:c.instructions+=4;goto B695da7;
case 0x695dab:c.instructions+=3;goto B695dab;
case 0x695daf:c.instructions+=2;goto B695daf;
case 0x695db1:c.instructions+=1;goto B695db1;
case 0x695db3:goto L695db3;
case 0x695db5:goto L695db5;
case 0x695db6:c.instructions+=7;goto B695db6;
case 0x695db9:c.instructions+=6;goto B695db9;
case 0x695dbd:c.instructions+=5;goto B695dbd;
case 0x695dc0:c.instructions+=4;goto B695dc0;
case 0x695dc3:c.instructions+=3;goto B695dc3;
case 0x695dc4:c.instructions+=2;goto B695dc4;
case 0x695dc7:c.instructions+=1;goto B695dc7;
case 0x695dca:goto L695dca;
case 0x695dcc:c.instructions+=1;goto B695dcc;
case 0x695dce:goto L695dce;
case 0x695dd0:goto L695dd0;
case 0x695dd1:c.instructions+=4;goto B695dd1;
case 0x695dd2:c.instructions+=3;goto B695dd2;
case 0x695dd3:c.instructions+=2;goto B695dd3;
case 0x695dd4:c.instructions+=1;goto B695dd4;
case 0x695dd7:goto L695dd7;
case 0x695dd9:c.instructions+=16;goto B695dd9;
case 0x695dda:c.instructions+=15;goto B695dda;
case 0x695ddc:c.instructions+=14;goto B695ddc;
case 0x695ddf:c.instructions+=13;goto B695ddf;
case 0x695de0:c.instructions+=12;goto B695de0;
case 0x695de1:c.instructions+=11;goto B695de1;
case 0x695de2:c.instructions+=10;goto B695de2;
case 0x695de5:c.instructions+=9;goto B695de5;
case 0x695de8:c.instructions+=8;goto B695de8;
case 0x695deb:c.instructions+=7;goto B695deb;
case 0x695dee:c.instructions+=6;goto B695dee;
case 0x695df1:c.instructions+=5;goto B695df1;
case 0x695df4:c.instructions+=4;goto B695df4;
case 0x695df7:c.instructions+=3;goto B695df7;
case 0x695df9:c.instructions+=2;goto B695df9;
case 0x695dfb:c.instructions+=1;goto B695dfb;
case 0x695e01:goto L695e01;
case 0x695e02:c.instructions+=1;goto B695e02;
case 0x695e08:goto L695e08;
case 0x695e09:c.instructions+=1;goto B695e09;
case 0x695e0f:goto L695e0f;
case 0x695e10:c.instructions+=1;goto B695e10;
case 0x695e16:goto L695e16;
case 0x695e17:c.instructions+=2;goto B695e17;
case 0x695e18:c.instructions+=1;goto B695e18;
case 0x695e1a:goto L695e1a;
case 0x695e1f:c.instructions+=1;goto B695e1f;
case 0x695e24:goto L695e24;
case 0x695e27:c.instructions+=6;goto B695e27;
case 0x695e29:c.instructions+=5;goto B695e29;
case 0x695e2c:c.instructions+=4;goto B695e2c;
case 0x695e2f:c.instructions+=3;goto B695e2f;
case 0x695e33:c.instructions+=2;goto B695e33;
case 0x695e36:c.instructions+=1;goto B695e36;
case 0x695e38:goto L695e38;
case 0x695e3b:goto L695e3b;
case 0x695e3e:c.instructions+=2;goto B695e3e;
case 0x695e41:c.instructions+=1;goto B695e41;
case 0x695e47:goto L695e47;
case 0x695e49:goto L695e49;
case 0x695e4b:goto L695e4b;
case 0x695e4f:c.instructions+=2;goto B695e4f;
case 0x695e52:c.instructions+=1;goto B695e52;
case 0x695e54:goto L695e54;
case 0x695e57:c.instructions+=8;goto B695e57;
case 0x695e5a:c.instructions+=7;goto B695e5a;
case 0x695e5d:c.instructions+=6;goto B695e5d;
case 0x695e60:c.instructions+=5;goto B695e60;
case 0x695e63:c.instructions+=4;goto B695e63;
case 0x695e66:c.instructions+=3;goto B695e66;
case 0x695e69:c.instructions+=2;goto B695e69;
case 0x695e6a:c.instructions+=1;goto B695e6a;
case 0x695e6f:goto L695e6f;
case 0x695e71:c.instructions+=1;goto B695e71;
case 0x695e77:goto L695e77;
case 0x695e7a:c.instructions+=9;goto B695e7a;
case 0x695e7d:c.instructions+=8;goto B695e7d;
case 0x695e80:c.instructions+=7;goto B695e80;
case 0x695e83:c.instructions+=6;goto B695e83;
case 0x695e86:c.instructions+=5;goto B695e86;
case 0x695e89:c.instructions+=4;goto B695e89;
case 0x695e8d:c.instructions+=3;goto B695e8d;
case 0x695e90:c.instructions+=2;goto B695e90;
case 0x695e93:c.instructions+=1;goto B695e93;
case 0x695e95:goto L695e95;
case 0x695e98:c.instructions+=3;goto B695e98;
case 0x695e9b:c.instructions+=2;goto B695e9b;
case 0x695e9e:c.instructions+=1;goto B695e9e;
case 0x695ea0:goto L695ea0;
case 0x695ea5:goto L695ea5;
case 0x695ea9:c.instructions+=10;goto B695ea9;
case 0x695ead:c.instructions+=9;goto B695ead;
case 0x695eaf:c.instructions+=8;goto B695eaf;
case 0x695eb2:c.instructions+=7;goto B695eb2;
case 0x695eb5:c.instructions+=6;goto B695eb5;
case 0x695eb7:c.instructions+=5;goto B695eb7;
case 0x695eb9:c.instructions+=4;goto B695eb9;
case 0x695ebc:c.instructions+=3;goto B695ebc;
case 0x695ec0:c.instructions+=2;goto B695ec0;
case 0x695ec3:c.instructions+=1;goto B695ec3;
case 0x695ec5:goto L695ec5;
case 0x695ec8:goto L695ec8;
case 0x695ecc:c.instructions+=3;goto B695ecc;
case 0x695ed0:c.instructions+=2;goto B695ed0;
case 0x695ed3:c.instructions+=1;goto B695ed3;
case 0x695ed5:goto L695ed5;
case 0x695ed9:c.instructions+=3;goto B695ed9;
case 0x695edd:c.instructions+=2;goto B695edd;
case 0x695edf:c.instructions+=1;goto B695edf;
case 0x695ee1:goto L695ee1;
case 0x695ee3:c.instructions+=2;goto B695ee3;
case 0x695ee5:c.instructions+=1;goto B695ee5;
case 0x695ee7:goto L695ee7;
case 0x695eeb:c.instructions+=12;goto B695eeb;
case 0x695eef:c.instructions+=11;goto B695eef;
case 0x695ef1:c.instructions+=10;goto B695ef1;
case 0x695ef4:c.instructions+=9;goto B695ef4;
case 0x695ef7:c.instructions+=8;goto B695ef7;
case 0x695efa:c.instructions+=7;goto B695efa;
case 0x695efd:c.instructions+=6;goto B695efd;
case 0x695eff:c.instructions+=5;goto B695eff;
case 0x695f03:c.instructions+=4;goto B695f03;
case 0x695f06:c.instructions+=3;goto B695f06;
case 0x695f07:c.instructions+=2;goto B695f07;
case 0x695f09:c.instructions+=1;goto B695f09;
case 0x695f0b:goto L695f0b;
case 0x695f0f:c.instructions+=3;goto B695f0f;
case 0x695f12:c.instructions+=2;goto B695f12;
case 0x695f15:c.instructions+=1;goto B695f15;
case 0x695f17:goto L695f17;
case 0x695f1a:c.instructions+=3;goto B695f1a;
case 0x695f1d:c.instructions+=2;goto B695f1d;
case 0x695f20:c.instructions+=1;goto B695f20;
case 0x695f22:goto L695f22;
case 0x695f25:c.instructions+=2;goto B695f25;
case 0x695f28:c.instructions+=1;goto B695f28;
case 0x695f2a:goto L695f2a;
case 0x695f2e:c.instructions+=3;goto B695f2e;
case 0x695f32:c.instructions+=2;goto B695f32;
case 0x695f35:c.instructions+=1;goto B695f35;
case 0x695f37:goto L695f37;
case 0x695f3b:goto L695f3b;
case 0x695f3e:c.instructions+=6;goto B695f3e;
case 0x695f40:c.instructions+=5;goto B695f40;
case 0x695f42:c.instructions+=4;goto B695f42;
case 0x695f45:c.instructions+=3;goto B695f45;
case 0x695f49:c.instructions+=2;goto B695f49;
case 0x695f4c:c.instructions+=1;goto B695f4c;
case 0x695f4e:goto L695f4e;
case 0x695f52:c.instructions+=3;goto B695f52;
case 0x695f55:c.instructions+=2;goto B695f55;
case 0x695f58:c.instructions+=1;goto B695f58;
case 0x695f5a:goto L695f5a;
case 0x695f5c:goto L695f5c;
case 0x695f5f:goto L695f5f;
case 0x695f63:c.instructions+=2;goto B695f63;
case 0x695f67:c.instructions+=1;goto B695f67;
case 0x695f69:goto L695f69;
case 0x695f6c:c.instructions+=4;goto B695f6c;
case 0x695f70:c.instructions+=3;goto B695f70;
case 0x695f73:c.instructions+=2;goto B695f73;
case 0x695f74:c.instructions+=1;goto B695f74;
case 0x695f76:goto L695f76;
case 0x695f77:c.instructions+=1;goto B695f77;
case 0x695f79:goto L695f79;
case 0x695f7a:c.instructions+=1;goto B695f7a;
case 0x695f7c:goto L695f7c;
case 0x695f7e:c.instructions+=1;goto B695f7e;
case 0x695f80:goto L695f80;
case 0x695f83:c.instructions+=2;goto B695f83;
case 0x695f86:c.instructions+=1;goto B695f86;
case 0x695f88:goto L695f88;
case 0x695f8c:c.instructions+=1;goto B695f8c;
case 0x695f8e:goto L695f8e;
case 0x695f90:c.instructions+=1;goto B695f90;
case 0x695f92:goto L695f92;
case 0x695f94:goto L695f94;
case 0x695f96:c.instructions+=3;goto B695f96;
case 0x695f99:c.instructions+=2;goto B695f99;
case 0x695f9a:c.instructions+=1;goto B695f9a;
case 0x695f9c:goto L695f9c;
case 0x695f9e:goto L695f9e;
case 0x695fa0:c.instructions+=1;goto B695fa0;
case 0x695fa2:goto L695fa2;
case 0x695fa5:c.instructions+=2;goto B695fa5;
case 0x695fa8:c.instructions+=1;goto B695fa8;
case 0x695faa:goto L695faa;
case 0x695fac:c.instructions+=6;goto B695fac;
case 0x695faf:c.instructions+=5;goto B695faf;
case 0x695fb2:c.instructions+=4;goto B695fb2;
case 0x695fb4:c.instructions+=3;goto B695fb4;
case 0x695fb7:c.instructions+=2;goto B695fb7;
case 0x695fb8:c.instructions+=1;goto B695fb8;
case 0x695fba:goto L695fba;
case 0x695fbd:c.instructions+=1;goto B695fbd;
case 0x695fc0:goto L695fc0;
case 0x695fc4:c.instructions+=2;goto B695fc4;
case 0x695fc7:c.instructions+=1;goto B695fc7;
case 0x695fcd:goto L695fcd;
case 0x695fd1:c.instructions+=1;goto B695fd1;
case 0x695fd3:goto L695fd3;
case 0x695fd7:c.instructions+=2;goto B695fd7;
case 0x695fdb:c.instructions+=1;goto B695fdb;
case 0x695fdd:goto L695fdd;
case 0x695fe1:c.instructions+=1;goto B695fe1;
case 0x695fe5:goto L695fe5;
case 0x695fe8:c.instructions+=1;goto B695fe8;
case 0x695fee:goto L695fee;
case 0x695ff2:c.instructions+=2;goto B695ff2;
case 0x695ff9:c.instructions+=1;goto B695ff9;
case 0x695ffb:goto L695ffb;
default:missing_instruction(c.pc);}
B695002:L695002:{c.instructions+=3;NFSU2_TR(0x695002);
__builtin_memmove((R+4400),(R+4368),8);
}
B695005:{NFSU2_TR(0x695005);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4448))));}
}
B695009:{NFSU2_TR(0x695009);
if(r1(R+518)){{goto L695012;}}
}
B69500b:L69500b:{c.instructions+=3;NFSU2_TR(0x69500b);
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
B69500d:{NFSU2_TR(0x69500d);
w2(R+4260,0xffffu);
}
B69500f:{NFSU2_TR(0x69500f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B695012:L695012:{c.instructions+=18;NFSU2_TR(0x695012);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4464))));}
}
B695016:{NFSU2_TR(0x695016);
{SPILL();c.pc=0x695016u;V r_=user_op(c,524534,{rv<8>((R+4416)),rv<8>((R+4432))});SPILL();wv<8>((R+4416),r_);}
}
B69501a:{NFSU2_TR(0x69501a);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4400))));}
}
B69501e:{NFSU2_TR(0x69501e);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4400),(U+0),8);
}
B695021:{NFSU2_TR(0x695021);
{SPILL();c.pc=0x695021u;V r_=user_op(c,524536,{rv<8>((R+4416)),rv<8>((R+4432))});SPILL();wv<8>((R+4416),r_);}
}
B695025:{NFSU2_TR(0x695025);
{wv<8>((R+4384),uo::pfacc<8>(rv<8>((R+4384)),rv<8>((R+4384))));}
}
B695029:{NFSU2_TR(0x695029);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4432,u64(r4(U+4)));
}
B69502d:{NFSU2_TR(0x69502d);
{wv<8>((R+4400),uo::pfsub<8>(rv<8>((R+4400)),rv<8>((R+4448))));}
}
B695031:{NFSU2_TR(0x695031);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4416))));}
}
B695035:{NFSU2_TR(0x695035);
{wv<8>((R+4432),uo::pfsub<8>(rv<8>((R+4432)),rv<8>((R+4464))));}
}
B695039:{NFSU2_TR(0x695039);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B69503d:{NFSU2_TR(0x69503d);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B695041:{NFSU2_TR(0x695041);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4448))));}
}
B695045:{NFSU2_TR(0x695045);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4464))));}
}
B695049:{NFSU2_TR(0x695049);
u8 U[8];
__builtin_memmove((U+0),(R+4400),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B69504c:{NFSU2_TR(0x69504c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w4(U+4,u32(r8(R+4432)));
s4(u32(r4(U+0)),r4(U+4));
}
B695050:{NFSU2_TR(0x695050);
w2(R+4260,0xffffu);
}
B695052:{NFSU2_TR(0x695052);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B695055:L695055:{c.instructions+=26;NFSU2_TR(0x695055);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B695059:{NFSU2_TR(0x695059);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B69505c:{NFSU2_TR(0x69505c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B695060:{NFSU2_TR(0x695060);
__builtin_memmove((R+4368),(R+4352),8);
}
B695063:{NFSU2_TR(0x695063);
__builtin_memmove((R+4400),(R+4384),8);
}
B695066:{NFSU2_TR(0x695066);
w8(R+4384,u64(u64(r8(R+4384))&u64(m8(0x7b71a8))));
}
B69506d:{NFSU2_TR(0x69506d);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4352))));}
}
B695071:{NFSU2_TR(0x695071);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4384))));}
}
B695075:{NFSU2_TR(0x695075);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4384))));}
}
B695079:{NFSU2_TR(0x695079);
{wv<8>((R+4352),uo::pfacc<8>(rv<8>((R+4352)),rv<8>((R+4352))));}
}
B69507d:{NFSU2_TR(0x69507d);
__builtin_memmove((R+4432),(R+4352),8);
}
B695080:{NFSU2_TR(0x695080);
{SPILL();c.pc=0x695080u;V r_=user_op(c,524533,{rv<8>((R+4416)),rv<8>((R+4352))});SPILL();wv<8>((R+4416),r_);}
}
B695084:{NFSU2_TR(0x695084);
{wv<8>((R+4432),uo::pfcmpgt<8>(rv<8>((R+4432)),rv<8>(gp(0x7b71c8))));}
}
B69508c:{NFSU2_TR(0x69508c);
__builtin_memmove((R+4384),(R+4416),8);
}
B69508f:{NFSU2_TR(0x69508f);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4416))));}
}
B695093:{NFSU2_TR(0x695093);
{SPILL();c.pc=0x695093u;V r_=user_op(c,524535,{rv<8>((R+4352)),rv<8>((R+4384))});SPILL();wv<8>((R+4352),r_);}
}
B695097:{NFSU2_TR(0x695097);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69509b:{NFSU2_TR(0x69509b);
w8(R+4368,u64(u64(r8(R+4368))&u64(r8(R+4432))));
}
B69509e:{NFSU2_TR(0x69509e);
w8(R+4400,u64(u64(r8(R+4400))&u64(r8(R+4432))));
}
B6950a1:{NFSU2_TR(0x6950a1);
{SPILL();c.pc=0x6950a1u;V r_=user_op(c,524536,{rv<8>((R+4352)),rv<8>((R+4416))});SPILL();wv<8>((R+4352),r_);}
}
B6950a5:{NFSU2_TR(0x6950a5);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4352))));}
}
B6950a9:{NFSU2_TR(0x6950a9);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4352))));}
}
B6950ad:{NFSU2_TR(0x6950ad);
u8 U[8];
__builtin_memmove((U+0),(R+4368),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B6950b0:{NFSU2_TR(0x6950b0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6950b4:{NFSU2_TR(0x6950b4);
w2(R+4260,0xffffu);
}
B6950b6:{NFSU2_TR(0x6950b6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6950b9:L6950b9:{c.instructions+=34;NFSU2_TR(0x6950b9);
w2(R+4260,0xffffu);
}
B6950bb:{NFSU2_TR(0x6950bb);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6950bf:{NFSU2_TR(0x6950bf);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6950c3:{NFSU2_TR(0x6950c3);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+4))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B6950c6:{NFSU2_TR(0x6950c6);
__builtin_memmove((R+4368),(R+4352),8);
}
B6950c9:{NFSU2_TR(0x6950c9);
__builtin_memmove((R+4356),(R+4352),4);
}
B6950cc:{NFSU2_TR(0x6950cc);
__builtin_memmove((R+4368),(R+4372),4);
__builtin_memmove((R+4372),(R+4372),4);
}
B6950cf:{NFSU2_TR(0x6950cf);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B6950d3:{NFSU2_TR(0x6950d3);
__builtin_memmove((R+4400),(R+4384),8);
}
B6950d6:{NFSU2_TR(0x6950d6);
__builtin_memmove((R+4388),(R+4384),4);
}
B6950d9:{NFSU2_TR(0x6950d9);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B6950dc:{NFSU2_TR(0x6950dc);
__builtin_memmove((R+4416),(R+4352),8);
}
B6950df:{NFSU2_TR(0x6950df);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+0))));}
}
B6950e3:{NFSU2_TR(0x6950e3);
__builtin_memmove((R+4432),(R+4368),8);
}
B6950e6:{NFSU2_TR(0x6950e6);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B6950eb:{NFSU2_TR(0x6950eb);
__builtin_memmove((R+4448),(R+4384),8);
}
B6950ee:{NFSU2_TR(0x6950ee);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B6950f3:{NFSU2_TR(0x6950f3);
__builtin_memmove((R+4464),(R+4400),8);
}
B6950f6:{NFSU2_TR(0x6950f6);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B6950fb:{NFSU2_TR(0x6950fb);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B6950ff:{NFSU2_TR(0x6950ff);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((U+4))));}
}
B695104:{NFSU2_TR(0x695104);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4400))));}
}
B695108:{NFSU2_TR(0x695108);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((U+4))));}
}
B69510d:{NFSU2_TR(0x69510d);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B695111:{NFSU2_TR(0x695111);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((U+4))));}
}
B695116:{NFSU2_TR(0x695116);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((U+4))));}
}
B69511b:{NFSU2_TR(0x69511b);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4384))));}
}
B69511f:{NFSU2_TR(0x69511f);
{wv<8>((R+4416),uo::pfadd<8>(rv<8>((R+4416)),rv<8>((R+4432))));}
}
B695123:{NFSU2_TR(0x695123);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4464))));}
}
B695127:{NFSU2_TR(0x695127);
{wv<8>((R+4416),uo::pfadd<8>(rv<8>((R+4416)),rv<8>((R+4448))));}
}
B69512b:{NFSU2_TR(0x69512b);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B69512e:{NFSU2_TR(0x69512e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B695132:{NFSU2_TR(0x695132);
w2(R+4260,0xffffu);
}
B695134:{NFSU2_TR(0x695134);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B695137:L695137:{c.instructions+=9;NFSU2_TR(0x695137);
__builtin_memmove((R+28),(R+28),4);
}
B695139:{NFSU2_TR(0x695139);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69513a:{NFSU2_TR(0x69513a);
__builtin_memmove((R+20),(R+16),4);
}
B69513c:{NFSU2_TR(0x69513c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69513d:{NFSU2_TR(0x69513d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B695140:{NFSU2_TR(0x695140);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B695144:{NFSU2_TR(0x695144);
u8 U[2];
w2(U+0,u16(u32(r2(R+4))&u32(r2(R+4))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B695147:{NFSU2_TR(0x695147);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B695148:{NFSU2_TR(0x695148);
if(r1(R+518)){{goto L69519a;}}
}
B69514a:L69514a:{c.instructions+=6;NFSU2_TR(0x69514a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69514d:{NFSU2_TR(0x69514d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B695150:{NFSU2_TR(0x695150);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B695153:{NFSU2_TR(0x695153);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B695157:{NFSU2_TR(0x695157);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w2(U+4,u16(u32(r2(R+4))&u32(r2(R+4))));
w1(R+519,u8(s16(r2(U+4))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+4))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B69515a:{NFSU2_TR(0x69515a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6951ec;}}
}
B695160:L695160:{c.instructions+=2;NFSU2_TR(0x695160);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B695161:{NFSU2_TR(0x695161);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B695164:L695164:{c.instructions+=3;NFSU2_TR(0x695164);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B695166:{NFSU2_TR(0x695166);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B695168:{NFSU2_TR(0x695168);
if(r1(R+518)){{goto L695188;}}
}
B69516a:L69516a:{c.instructions+=11;NFSU2_TR(0x69516a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69516d:{NFSU2_TR(0x69516d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B695170:{NFSU2_TR(0x695170);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B695172:{NFSU2_TR(0x695172);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B695176:{NFSU2_TR(0x695176);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
w8(U+8,u64(s64(s32(r4(R+4)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
}
B69517a:{NFSU2_TR(0x69517a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69517d:{NFSU2_TR(0x69517d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69517e:{NFSU2_TR(0x69517e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69517f:{NFSU2_TR(0x69517f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B695182:{NFSU2_TR(0x695182);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B695183:{NFSU2_TR(0x695183);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x695188ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x695137u);}goto L695137;}
}
B695188:L695188:{c.instructions+=5;NFSU2_TR(0x695188);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B69518c:{NFSU2_TR(0x69518c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69518f:{NFSU2_TR(0x69518f);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x8ull))));
}
B695192:{NFSU2_TR(0x695192);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
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
B695195:{NFSU2_TR(0x695195);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x695164u);}goto L695164;}}
}
B695197:L695197:{c.instructions+=2;NFSU2_TR(0x695197);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B695198:{NFSU2_TR(0x695198);
{goto L6951ec;}
}
B69519a:L69519a:{c.instructions+=3;NFSU2_TR(0x69519a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69519d:{NFSU2_TR(0x69519d);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B6951a2:{NFSU2_TR(0x6951a2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6951ae;}}
}
B6951a4:L6951a4:{c.instructions+=3;NFSU2_TR(0x6951a4);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6951a8:{NFSU2_TR(0x6951a8);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6951ac:{NFSU2_TR(0x6951ac);
{goto L6951cc;}
}
B6951ae:L6951ae:{c.instructions+=2;NFSU2_TR(0x6951ae);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(U+2))-u32(u16(0x3ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B6951b2:{NFSU2_TR(0x6951b2);
if(r1(R+518)){{goto L6951be;}}
}
B6951b4:L6951b4:{c.instructions+=3;NFSU2_TR(0x6951b4);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6951b8:{NFSU2_TR(0x6951b8);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6951bc:{NFSU2_TR(0x6951bc);
{goto L6951c6;}
}
B6951be:L6951be:{c.instructions+=2;NFSU2_TR(0x6951be);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6951c2:{NFSU2_TR(0x6951c2);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6951c6:L6951c6:{c.instructions+=2;NFSU2_TR(0x6951c6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x3ull))));
}
B6951c9:{NFSU2_TR(0x6951c9);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B6951cc:L6951cc:{c.instructions+=10;NFSU2_TR(0x6951cc);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B6951cf:{NFSU2_TR(0x6951cf);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
w8(U+8,u64(s64(s32(r4(R+4)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
}
B6951d3:{NFSU2_TR(0x6951d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6951d6:{NFSU2_TR(0x6951d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+4))));
s4(u32(r4(R+0)),r4(U+0));
}
B6951d8:{NFSU2_TR(0x6951d8);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6951dc:{NFSU2_TR(0x6951dc);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6951e0:{NFSU2_TR(0x6951e0);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B6951e3:{NFSU2_TR(0x6951e3);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
w8(U+8,u64(s64(s32(r4(R+4)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
}
B6951e7:{NFSU2_TR(0x6951e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6951ea:{NFSU2_TR(0x6951ea);
u8 U[10];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+512,carry<u32>(r4(U+0),r4(R+4)));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+523,scarry<u32>(r4(U+0),r4(R+4)));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+4))));
s4(u32(r4(R+0)),r4(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+4,u32(u32(r4(U+0))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B6951ec:L6951ec:{c.instructions+=4;NFSU2_TR(0x6951ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6951ed:{NFSU2_TR(0x6951ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6951ee:{NFSU2_TR(0x6951ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6951ef:{NFSU2_TR(0x6951ef);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6951f2:L6951f2:{c.instructions+=8;NFSU2_TR(0x6951f2);
__builtin_memmove((R+28),(R+28),4);
}
B6951f4:{NFSU2_TR(0x6951f4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6951f5:{NFSU2_TR(0x6951f5);
__builtin_memmove((R+20),(R+16),4);
}
B6951f7:{NFSU2_TR(0x6951f7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6951f8:{NFSU2_TR(0x6951f8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6951f9:{NFSU2_TR(0x6951f9);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6951fb:{NFSU2_TR(0x6951fb);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6951fe:{NFSU2_TR(0x6951fe);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L695219;}}
}
B695200:L695200:{c.instructions+=2;NFSU2_TR(0x695200);
__builtin_memmove((R+24),(R+12),4);
}
B695202:{NFSU2_TR(0x695202);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+0))));
}
B695204:L695204:{c.instructions+=4;NFSU2_TR(0x695204);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+4),(U+8),1);
}
B695207:{NFSU2_TR(0x695207);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+8),(U+0),1);
}
B695209:{NFSU2_TR(0x695209);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(R+523,sborrow<u8>(r1(R+4),r1(U+0)));
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B69520b:{NFSU2_TR(0x69520b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L695226;}}
}
B69520d:L69520d:{c.instructions+=1;NFSU2_TR(0x69520d);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L695221;}}
}
B69520f:L69520f:{c.instructions+=4;NFSU2_TR(0x69520f);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B695210:{NFSU2_TR(0x695210);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B695211:{NFSU2_TR(0x695211);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B695214:{NFSU2_TR(0x695214);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x695204u);}goto L695204;}}
}
B695216:L695216:{c.instructions+=1;NFSU2_TR(0x695216);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B695219:L695219:{c.instructions+=1;NFSU2_TR(0x695219);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69522b;}}
}
B69521b:L69521b:{c.instructions+=2;NFSU2_TR(0x69521b);
u8 U[11];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((U+9),(U+8),1);
w1(U+10,u8(u32(r1(U+9))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+10))==(u8(0x0ull))));
}
B69521f:{NFSU2_TR(0x69521f);
if(r1(R+518)){{goto L69522b;}}
}
B695221:L695221:{c.instructions+=3;NFSU2_TR(0x695221);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B695223:{NFSU2_TR(0x695223);
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
B695224:{NFSU2_TR(0x695224);
{goto L69522d;}
}
B695226:L695226:{c.instructions+=2;NFSU2_TR(0x695226);
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
B695229:{NFSU2_TR(0x695229);
{goto L69522d;}
}
B69522b:L69522b:{c.instructions+=1;NFSU2_TR(0x69522b);
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
B69522d:L69522d:{c.instructions+=4;NFSU2_TR(0x69522d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B69522e:{NFSU2_TR(0x69522e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B69522f:{NFSU2_TR(0x69522f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B695230:{NFSU2_TR(0x695230);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B695233:L695233:{c.instructions+=13;NFSU2_TR(0x695233);
__builtin_memmove((R+28),(R+28),4);
}
B695235:{NFSU2_TR(0x695235);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B695236:{NFSU2_TR(0x695236);
__builtin_memmove((R+20),(R+16),4);
}
B695238:{NFSU2_TR(0x695238);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69523b:{NFSU2_TR(0x69523b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69523c:{NFSU2_TR(0x69523c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69523d:{NFSU2_TR(0x69523d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B695240:{NFSU2_TR(0x695240);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B695241:{NFSU2_TR(0x695241);
__builtin_memmove((R+8),(R+4),4);
}
B695243:{NFSU2_TR(0x695243);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B695245:{NFSU2_TR(0x695245);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B695246:{NFSU2_TR(0x695246);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B695248:{NFSU2_TR(0x695248);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B69524b:L69524b:{c.instructions+=1;NFSU2_TR(0x69524b);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L69524d;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69524bu);}goto L69524b;}
}
B69524d:L69524d:{c.instructions+=19;NFSU2_TR(0x69524d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B695250:{NFSU2_TR(0x695250);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B695253:{NFSU2_TR(0x695253);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((R+12),(U+0),4);
}
B695256:{NFSU2_TR(0x695256);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B695257:{NFSU2_TR(0x695257);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((R+28),(U+0),4);
}
B69525a:{NFSU2_TR(0x69525a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69525b:{NFSU2_TR(0x69525b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69525d:{NFSU2_TR(0x69525d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B695260:{NFSU2_TR(0x695260);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B695263:{NFSU2_TR(0x695263);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B695264:{NFSU2_TR(0x695264);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B695267:{NFSU2_TR(0x695267);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69526a:{NFSU2_TR(0x69526a);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B69526c:{NFSU2_TR(0x69526c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69526d:{NFSU2_TR(0x69526d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B695270:{NFSU2_TR(0x695270);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B695273:{NFSU2_TR(0x695273);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+28)),r4(U+0));
}
B695275:{NFSU2_TR(0x695275);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+12)),r4(U+0));
}
B695277:{NFSU2_TR(0x695277);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69527cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x695137u);}goto L695137;}
}
B69527c:L69527c:{c.instructions+=16;NFSU2_TR(0x69527c);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B695280:{NFSU2_TR(0x695280);
u8 U[28];
w8(U+4,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w8(U+12,u64(s64(s32(r4(U+0)))));
w8(U+20,u64(u64(r8(U+4))*u64(r8(U+12))));
w4(R+0,u32(r8(U+20)));
}
B695283:{NFSU2_TR(0x695283);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B695286:{NFSU2_TR(0x695286);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B69528a:{NFSU2_TR(0x69528a);
u8 U[28];
w8(U+4,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w8(U+12,u64(s64(s32(r4(U+0)))));
w8(U+20,u64(u64(r8(U+4))*u64(r8(U+12))));
w4(R+0,u32(r8(U+20)));
}
B69528d:{NFSU2_TR(0x69528d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B695290:{NFSU2_TR(0x695290);
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
B695292:{NFSU2_TR(0x695292);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B695293:{NFSU2_TR(0x695293);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B695294:{NFSU2_TR(0x695294);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B695297:{NFSU2_TR(0x695297);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69529a:{NFSU2_TR(0x69529a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69529d:{NFSU2_TR(0x69529d);
__builtin_memmove((R+0),(R+8),4);
}
B69529f:{NFSU2_TR(0x69529f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6952a0:{NFSU2_TR(0x6952a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6952a1:{NFSU2_TR(0x6952a1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6952a4:L6952a4:{c.instructions+=8;NFSU2_TR(0x6952a4);
__builtin_memmove((R+28),(R+28),4);
}
B6952a6:{NFSU2_TR(0x6952a6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6952a7:{NFSU2_TR(0x6952a7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6952a8:{NFSU2_TR(0x6952a8);
__builtin_memmove((R+24),(R+4),4);
}
B6952aa:{NFSU2_TR(0x6952aa);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6952ac:{NFSU2_TR(0x6952ac);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6952af:{NFSU2_TR(0x6952af);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6952b0:{NFSU2_TR(0x6952b0);
if(r1(R+518)){{goto L6952e8;}}
}
B6952b2:L6952b2:{c.instructions+=3;NFSU2_TR(0x6952b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6952b5:{NFSU2_TR(0x6952b5);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(U+6))<(r2(R+12))));
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+12))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B6952b9:{NFSU2_TR(0x6952b9);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6952df;}}
}
B6952bb:L6952bb:{c.instructions+=4;NFSU2_TR(0x6952bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6952be:{NFSU2_TR(0x6952be);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6952c1:{NFSU2_TR(0x6952c1);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6952c3:{NFSU2_TR(0x6952c3);
if(r1(R+518)){{goto L6952d3;}}
}
B6952c5:L6952c5:{c.instructions+=2;NFSU2_TR(0x6952c5);
__builtin_memmove((R+4),(R+28),4);
}
B6952c7:{NFSU2_TR(0x6952c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6952ccull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6952a4u);}goto L6952a4;}
}
B6952cc:L6952cc:{c.instructions+=2;NFSU2_TR(0x6952cc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6952cd:{NFSU2_TR(0x6952cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6952d2ull));
TAIL_STATIC(0x575630u,575);
}
B6952d2:L6952d2:{c.instructions+=1;NFSU2_TR(0x6952d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6952d3:L6952d3:{c.instructions+=5;NFSU2_TR(0x6952d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6952d6:{NFSU2_TR(0x6952d6);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6952da:{NFSU2_TR(0x6952da);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6952db:{NFSU2_TR(0x6952db);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
}
B6952dd:{NFSU2_TR(0x6952dd);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6952bbu);}goto L6952bb;}}
}
B6952df:L6952df:{c.instructions+=2;NFSU2_TR(0x6952df);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6952e2:{NFSU2_TR(0x6952e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6952e7ull));
TAIL_STATIC(0x575630u,575);
}
B6952e7:L6952e7:{c.instructions+=1;NFSU2_TR(0x6952e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6952e8:L6952e8:{c.instructions+=3;NFSU2_TR(0x6952e8);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6952ea:{NFSU2_TR(0x6952ea);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6952ed:{NFSU2_TR(0x6952ed);
if(r1(R+518)){{goto L695325;}}
}
B6952ef:L6952ef:{c.instructions+=3;NFSU2_TR(0x6952ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6952f2:{NFSU2_TR(0x6952f2);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(U+6))<(r2(R+28))));
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+28))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B6952f6:{NFSU2_TR(0x6952f6);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69531c;}}
}
B6952f8:L6952f8:{c.instructions+=4;NFSU2_TR(0x6952f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6952fb:{NFSU2_TR(0x6952fb);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6952fe:{NFSU2_TR(0x6952fe);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B695300:{NFSU2_TR(0x695300);
if(r1(R+518)){{goto L695310;}}
}
B695302:L695302:{c.instructions+=2;NFSU2_TR(0x695302);
__builtin_memmove((R+4),(R+12),4);
}
B695304:{NFSU2_TR(0x695304);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x695309ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6952a4u);}goto L6952a4;}
}
B695309:L695309:{c.instructions+=2;NFSU2_TR(0x695309);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69530a:{NFSU2_TR(0x69530a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69530full));
TAIL_STATIC(0x575630u,575);
}
B69530f:L69530f:{c.instructions+=1;NFSU2_TR(0x69530f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B695310:L695310:{c.instructions+=5;NFSU2_TR(0x695310);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B695313:{NFSU2_TR(0x695313);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B695317:{NFSU2_TR(0x695317);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B695318:{NFSU2_TR(0x695318);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
}
B69531a:{NFSU2_TR(0x69531a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6952f8u);}goto L6952f8;}}
}
B69531c:L69531c:{c.instructions+=2;NFSU2_TR(0x69531c);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69531f:{NFSU2_TR(0x69531f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x695324ull));
TAIL_STATIC(0x575630u,575);
}
B695324:L695324:{c.instructions+=1;NFSU2_TR(0x695324);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B695325:L695325:{c.instructions+=2;NFSU2_TR(0x695325);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B695328:{NFSU2_TR(0x695328);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69532dull));
TAIL_STATIC(0x575630u,575);
}
B69532d:L69532d:{c.instructions+=5;NFSU2_TR(0x69532d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B69532e:{NFSU2_TR(0x69532e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B69532f:{NFSU2_TR(0x69532f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B695330:{NFSU2_TR(0x695330);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B695331:{NFSU2_TR(0x695331);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B695332:L695332:{c.instructions+=12;NFSU2_TR(0x695332);
__builtin_memmove((R+28),(R+28),4);
}
B695334:{NFSU2_TR(0x695334);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B695335:{NFSU2_TR(0x695335);
__builtin_memmove((R+20),(R+16),4);
}
B695337:{NFSU2_TR(0x695337);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B695338:{NFSU2_TR(0x695338);
__builtin_memmove((R+24),(R+4),4);
}
B69533a:{NFSU2_TR(0x69533a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69533d:{NFSU2_TR(0x69533d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69533e:{NFSU2_TR(0x69533e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B695341:{NFSU2_TR(0x695341);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B695345:{NFSU2_TR(0x695345);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B695348:{NFSU2_TR(0x695348);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(U+6))<(u16(0x0ull))));
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B69534d:{NFSU2_TR(0x69534d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L695396;}}
}
B69534f:L69534f:{c.instructions+=2;NFSU2_TR(0x69534f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B695352:{NFSU2_TR(0x695352);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B695353:L695353:{c.instructions+=5;NFSU2_TR(0x695353);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B695356:{NFSU2_TR(0x695356);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B695359:{NFSU2_TR(0x695359);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69535c:{NFSU2_TR(0x69535c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69535d:{NFSU2_TR(0x69535d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x695362ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x695332u);}goto L695332;}
}
B695362:L695362:{c.instructions+=17;NFSU2_TR(0x695362);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B695365:{NFSU2_TR(0x695365);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B695368:{NFSU2_TR(0x695368);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B69536c:{NFSU2_TR(0x69536c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69536f:{NFSU2_TR(0x69536f);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(r2(U+4)));
}
B695373:{NFSU2_TR(0x695373);
w1(R+512,u8((r2(R+8))!=(u16(0x0ull))));
w2(R+8,u16(0-u32(r2(R+8))));
}
B695376:{NFSU2_TR(0x695376);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(R+8))));
w4(R+8,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B695378:{NFSU2_TR(0x695378);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x3ull))));
}
B69537b:{NFSU2_TR(0x69537b);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B69537c:{NFSU2_TR(0x69537c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B69537f:{NFSU2_TR(0x69537f);
u8 U[32];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
w8(U+8,u64(s64(s32(r4(R+8)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(r8(U+24)));
}
B695383:{NFSU2_TR(0x695383);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B695386:{NFSU2_TR(0x695386);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B69538a:{NFSU2_TR(0x69538a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69538d:{NFSU2_TR(0x69538d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B695390:{NFSU2_TR(0x695390);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B695393:{NFSU2_TR(0x695393);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x695353u);}goto L695353;}}
}
B695395:L695395:{c.instructions+=1;NFSU2_TR(0x695395);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B695396:L695396:{c.instructions+=5;NFSU2_TR(0x695396);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B695397:{NFSU2_TR(0x695397);
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
B695399:{NFSU2_TR(0x695399);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B69539a:{NFSU2_TR(0x69539a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B69539b:{NFSU2_TR(0x69539b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69539e:L69539e:{c.instructions+=14;NFSU2_TR(0x69539e);
__builtin_memmove((R+28),(R+28),4);
}
B6953a0:{NFSU2_TR(0x6953a0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6953a1:{NFSU2_TR(0x6953a1);
__builtin_memmove((R+20),(R+16),4);
}
B6953a3:{NFSU2_TR(0x6953a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6953a6:{NFSU2_TR(0x6953a6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6953a7:{NFSU2_TR(0x6953a7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6953a8:{NFSU2_TR(0x6953a8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6953aa:{NFSU2_TR(0x6953aa);
__builtin_memmove((R+28),(R+8),4);
}
B6953ac:{NFSU2_TR(0x6953ac);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6953ad:{NFSU2_TR(0x6953ad);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6953ae:{NFSU2_TR(0x6953ae);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6953af:{NFSU2_TR(0x6953af);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6953b2:{NFSU2_TR(0x6953b2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6953b4:{NFSU2_TR(0x6953b4);
if(r1(R+518)){{goto L6953bf;}}
}
B6953b6:L6953b6:{c.instructions+=4;NFSU2_TR(0x6953b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6953b8:{NFSU2_TR(0x6953b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6953bb:{NFSU2_TR(0x6953bb);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B6953bd:{NFSU2_TR(0x6953bd);
{goto L6953c1;}
}
B6953bf:L6953bf:{c.instructions+=1;NFSU2_TR(0x6953bf);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6953c1:L6953c1:{c.instructions+=33;NFSU2_TR(0x6953c1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6953c3:{NFSU2_TR(0x6953c3);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6953c7:{NFSU2_TR(0x6953c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6953ca:{NFSU2_TR(0x6953ca);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6953ce:{NFSU2_TR(0x6953ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6953d1:{NFSU2_TR(0x6953d1);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6953d5:{NFSU2_TR(0x6953d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6953d8:{NFSU2_TR(0x6953d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6953db:{NFSU2_TR(0x6953db);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+0,u32(r2(U+0)));
}
B6953de:{NFSU2_TR(0x6953de);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6953e1:{NFSU2_TR(0x6953e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6953e4:{NFSU2_TR(0x6953e4);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6953e8:{NFSU2_TR(0x6953e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6953eb:{NFSU2_TR(0x6953eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6953ee:{NFSU2_TR(0x6953ee);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6953f2:{NFSU2_TR(0x6953f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6953f5:{NFSU2_TR(0x6953f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6953f8:{NFSU2_TR(0x6953f8);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6953fc:{NFSU2_TR(0x6953fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6953ff:{NFSU2_TR(0x6953ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B695402:{NFSU2_TR(0x695402);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B695406:{NFSU2_TR(0x695406);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B695409:{NFSU2_TR(0x695409);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69540c:{NFSU2_TR(0x69540c);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B695410:{NFSU2_TR(0x695410);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B695413:{NFSU2_TR(0x695413);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B695416:{NFSU2_TR(0x695416);
u8 U[32];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B69541a:{NFSU2_TR(0x69541a);
u8 U[32];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B69541e:{NFSU2_TR(0x69541e);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B695421:{NFSU2_TR(0x695421);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B695424:{NFSU2_TR(0x695424);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B695427:{NFSU2_TR(0x695427);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B695429:{NFSU2_TR(0x695429);
if(r1(R+518)){{goto L695434;}}
}
B69542b:L69542b:{c.instructions+=4;NFSU2_TR(0x69542b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B69542d:{NFSU2_TR(0x69542d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B695430:{NFSU2_TR(0x695430);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B695432:{NFSU2_TR(0x695432);
{goto L695436;}
}
B695434:L695434:{c.instructions+=1;NFSU2_TR(0x695434);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B695436:L695436:{c.instructions+=6;NFSU2_TR(0x695436);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B695437:{NFSU2_TR(0x695437);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69543a:{NFSU2_TR(0x69543a);
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
B69543c:{NFSU2_TR(0x69543c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B69543d:{NFSU2_TR(0x69543d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B69543e:{NFSU2_TR(0x69543e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B695441:L695441:{c.instructions+=8;NFSU2_TR(0x695441);
__builtin_memmove((R+28),(R+28),4);
}
B695443:{NFSU2_TR(0x695443);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B695444:{NFSU2_TR(0x695444);
__builtin_memmove((R+20),(R+16),4);
}
B695446:{NFSU2_TR(0x695446);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B695449:{NFSU2_TR(0x695449);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B69544d:{NFSU2_TR(0x69544d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B695450:{NFSU2_TR(0x695450);
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
B695452:{NFSU2_TR(0x695452);
if(r1(R+512)){{goto L695458;}}
}
B695454:L695454:{c.instructions+=2;NFSU2_TR(0x695454);
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
B695456:{NFSU2_TR(0x695456);
{goto L69545e;}
}
B695458:L695458:{c.instructions+=2;NFSU2_TR(0x695458);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69545b:{NFSU2_TR(0x69545b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69545e:L69545e:{c.instructions+=2;NFSU2_TR(0x69545e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B69545f:{NFSU2_TR(0x69545f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B695462:L695462:{c.instructions+=6;NFSU2_TR(0x695462);
__builtin_memmove((R+28),(R+28),4);
}
B695464:{NFSU2_TR(0x695464);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B695465:{NFSU2_TR(0x695465);
__builtin_memmove((R+20),(R+16),4);
}
B695467:{NFSU2_TR(0x695467);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69546a:{NFSU2_TR(0x69546a);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69546c:{NFSU2_TR(0x69546c);
if(r1(R+518)){{goto L6954a8;}}
}
B69546e:L69546e:{c.instructions+=21;NFSU2_TR(0x69546e);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B695472:{NFSU2_TR(0x695472);
w1(R+512,u8((r2(R+0))!=(u16(0x0ull))));
w2(R+0,u16(0-u32(r2(R+0))));
}
B695475:{NFSU2_TR(0x695475);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B695476:{NFSU2_TR(0x695476);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B69547a:{NFSU2_TR(0x69547a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69547b:{NFSU2_TR(0x69547b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B69547d:{NFSU2_TR(0x69547d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B695480:{NFSU2_TR(0x695480);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B695483:{NFSU2_TR(0x695483);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B695485:{NFSU2_TR(0x695485);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x3ull))));
}
B695488:{NFSU2_TR(0x695488);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B695489:{NFSU2_TR(0x695489);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B69548d:{NFSU2_TR(0x69548d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B695490:{NFSU2_TR(0x695490);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B695492:{NFSU2_TR(0x695492);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B695494:{NFSU2_TR(0x695494);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B695498:{NFSU2_TR(0x695498);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
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
B69549b:{NFSU2_TR(0x69549b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69549c:{NFSU2_TR(0x69549c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69549d:{NFSU2_TR(0x69549d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6954a0:{NFSU2_TR(0x6954a0);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6954a3ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6954a3:L6954a3:{c.instructions+=3;NFSU2_TR(0x6954a3);
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
B6954a5:{NFSU2_TR(0x6954a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6954a6:{NFSU2_TR(0x6954a6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6954aa;}}
}
B6954a8:L6954a8:{c.instructions+=1;NFSU2_TR(0x6954a8);
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
B6954aa:L6954aa:{c.instructions+=2;NFSU2_TR(0x6954aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6954ab:{NFSU2_TR(0x6954ab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6954ae:L6954ae:{c.instructions+=12;NFSU2_TR(0x6954ae);
__builtin_memmove((R+28),(R+28),4);
}
B6954b0:{NFSU2_TR(0x6954b0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6954b1:{NFSU2_TR(0x6954b1);
__builtin_memmove((R+20),(R+16),4);
}
B6954b3:{NFSU2_TR(0x6954b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6954b6:{NFSU2_TR(0x6954b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B6954b9:{NFSU2_TR(0x6954b9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6954ba:{NFSU2_TR(0x6954ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6954bd:{NFSU2_TR(0x6954bd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6954be:{NFSU2_TR(0x6954be);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6954c0:{NFSU2_TR(0x6954c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6954c1:{NFSU2_TR(0x6954c1);
w4(R+28,u32(0x7d9904ull));
}
B6954c6:{NFSU2_TR(0x6954c6);
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
B6954c8:L6954c8:{c.instructions+=1;NFSU2_TR(0x6954c8);
u8 U[59];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6954ca;}}
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
__builtin_memmove((U+36),gp(u32(r4(U+20))),4);
__builtin_memmove((U+47),(U+36),4);
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+51),(U+16),4);
w1(R+512,u8((r4(U+51))<(r4(U+47))));
w1(R+523,sborrow<u32>(r4(U+51),r4(U+47)));
w4(U+55,u32(u32(r4(U+51))-u32(r4(U+47))));
w1(R+519,u8(s32(r4(U+55))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+55))==(u32(0x0ull))));
w4(U+41,u32(u32(r4(U+55))&u32(u32(0xffull))));
w1(U+45,u8(__builtin_popcountll(u64(r4(U+41)))));
w1(U+46,u8(u32(r1(U+45))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+46))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6954c8u);}goto L6954c8;}}
}
B6954ca:L6954ca:{c.instructions+=1;NFSU2_TR(0x6954ca);
if(r1(R+518)){{goto L6954dd;}}
}
B6954cc:L6954cc:{c.instructions+=5;NFSU2_TR(0x6954cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6954cf:{NFSU2_TR(0x6954cf);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6954d1:{NFSU2_TR(0x6954d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6954d2:{NFSU2_TR(0x6954d2);
w4(R+28,u32(0x7b7420ull));
}
B6954d7:{NFSU2_TR(0x6954d7);
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
B6954d9:L6954d9:{c.instructions+=1;NFSU2_TR(0x6954d9);
u8 U[59];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6954db;}}
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
__builtin_memmove((U+36),gp(u32(r4(U+20))),4);
__builtin_memmove((U+47),(U+36),4);
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+51),(U+16),4);
w1(R+512,u8((r4(U+51))<(r4(U+47))));
w1(R+523,sborrow<u32>(r4(U+51),r4(U+47)));
w4(U+55,u32(u32(r4(U+51))-u32(r4(U+47))));
w1(R+519,u8(s32(r4(U+55))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+55))==(u32(0x0ull))));
w4(U+41,u32(u32(r4(U+55))&u32(u32(0xffull))));
w1(U+45,u8(__builtin_popcountll(u64(r4(U+41)))));
w1(U+46,u8(u32(r1(U+45))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+46))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6954d9u);}goto L6954d9;}}
}
B6954db:L6954db:{c.instructions+=1;NFSU2_TR(0x6954db);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6954ec;}}
}
B6954dd:L6954dd:{c.instructions+=5;NFSU2_TR(0x6954dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6954e0:{NFSU2_TR(0x6954e0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6954e2:{NFSU2_TR(0x6954e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6954e4:{NFSU2_TR(0x6954e4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6954e5:{NFSU2_TR(0x6954e5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6954e8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6954e8:L6954e8:{c.instructions+=2;NFSU2_TR(0x6954e8);
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
B6954ea:{NFSU2_TR(0x6954ea);
{goto L6954f1;}
}
B6954ec:L6954ec:{c.instructions+=1;NFSU2_TR(0x6954ec);
w4(R+0,u32(0x80004002ull));
}
B6954f1:L6954f1:{c.instructions+=4;NFSU2_TR(0x6954f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6954f2:{NFSU2_TR(0x6954f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6954f3:{NFSU2_TR(0x6954f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6954f4:{NFSU2_TR(0x6954f4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6954f7:L6954f7:{c.instructions+=7;NFSU2_TR(0x6954f7);
__builtin_memmove((R+28),(R+28),4);
}
B6954f9:{NFSU2_TR(0x6954f9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6954fa:{NFSU2_TR(0x6954fa);
__builtin_memmove((R+20),(R+16),4);
}
B6954fc:{NFSU2_TR(0x6954fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6954ff:{NFSU2_TR(0x6954ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B695502:{NFSU2_TR(0x695502);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B695503:{NFSU2_TR(0x695503);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B695506:L695506:{c.instructions+=7;NFSU2_TR(0x695506);
__builtin_memmove((R+28),(R+28),4);
}
B695508:{NFSU2_TR(0x695508);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B695509:{NFSU2_TR(0x695509);
__builtin_memmove((R+20),(R+16),4);
}
B69550b:{NFSU2_TR(0x69550b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69550c:{NFSU2_TR(0x69550c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69550f:{NFSU2_TR(0x69550f);
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
B695511:{NFSU2_TR(0x695511);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69551a;}}
}
B695513:L695513:{c.instructions+=2;NFSU2_TR(0x695513);
w4(R+0,u32(0x8876086cull));
}
B695518:{NFSU2_TR(0x695518);
{goto L695562;}
}
B69551a:L69551a:{c.instructions+=4;NFSU2_TR(0x69551a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69551d:{NFSU2_TR(0x69551d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B695520:{NFSU2_TR(0x695520);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x1cull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1cull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1cull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B695523:{NFSU2_TR(0x695523);
if(r1(R+512)){{goto L695532;}}
}
B695525:L695525:{c.instructions+=3;NFSU2_TR(0x695525);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B695528:{NFSU2_TR(0x695528);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x1cull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x1cull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x1cull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B69552b:{NFSU2_TR(0x69552b);
if(r1(R+512)){{goto L695532;}}
}
B69552d:L69552d:{c.instructions+=2;NFSU2_TR(0x69552d);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
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
B695530:{NFSU2_TR(0x695530);
if(r1(R+512)){{goto L695539;}}
}
B695532:L695532:{c.instructions+=2;NFSU2_TR(0x695532);
w4(R+0,u32(0x88760b59ull));
}
B695537:{NFSU2_TR(0x695537);
{goto L695562;}
}
B695539:L695539:{c.instructions+=9;NFSU2_TR(0x695539);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69553a:{NFSU2_TR(0x69553a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B69553c:{NFSU2_TR(0x69553c);
__builtin_memmove((R+28),(R+24),4);
}
B69553e:{NFSU2_TR(0x69553e);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B69553f:{NFSU2_TR(0x69553f);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B695540:{NFSU2_TR(0x695540);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B695541:{NFSU2_TR(0x695541);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B695544:{NFSU2_TR(0x695544);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B695546:{NFSU2_TR(0x695546);
if(r1(R+518)){{goto L69554f;}}
}
B695548:L695548:{c.instructions+=3;NFSU2_TR(0x695548);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69554b:{NFSU2_TR(0x69554b);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B69554d:{NFSU2_TR(0x69554d);
{goto L695551;}
}
B69554f:L69554f:{c.instructions+=1;NFSU2_TR(0x69554f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B695551:L695551:{c.instructions+=7;NFSU2_TR(0x695551);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B695553:{NFSU2_TR(0x695553);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B695556:{NFSU2_TR(0x695556);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B695559:{NFSU2_TR(0x695559);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69555c:{NFSU2_TR(0x69555c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69555f:{NFSU2_TR(0x69555f);
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
B695561:{NFSU2_TR(0x695561);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B695562:L695562:{c.instructions+=3;NFSU2_TR(0x695562);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B695563:{NFSU2_TR(0x695563);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B695564:{NFSU2_TR(0x695564);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B695567:L695567:{c.instructions+=9;NFSU2_TR(0x695567);
__builtin_memmove((R+28),(R+28),4);
}
B695569:{NFSU2_TR(0x695569);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69556a:{NFSU2_TR(0x69556a);
__builtin_memmove((R+20),(R+16),4);
}
B69556c:{NFSU2_TR(0x69556c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69556d:{NFSU2_TR(0x69556d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B695570:{NFSU2_TR(0x695570);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B695571:{NFSU2_TR(0x695571);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B695573:{NFSU2_TR(0x695573);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B695576:{NFSU2_TR(0x695576);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L695592;}}
}
B695578:L695578:{c.instructions+=5;NFSU2_TR(0x695578);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69557b:{NFSU2_TR(0x69557b);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69557e:{NFSU2_TR(0x69557e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B695580:{NFSU2_TR(0x695580);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B695583:{NFSU2_TR(0x695583);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x695588ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x695462u);}goto L695462;}
}
B695588:L695588:{c.instructions+=2;NFSU2_TR(0x695588);
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
B69558a:{NFSU2_TR(0x69558a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L695594;}}
}
B69558c:L69558c:{c.instructions+=3;NFSU2_TR(0x69558c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B69558d:{NFSU2_TR(0x69558d);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B695590:{NFSU2_TR(0x695590);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x695578u);}goto L695578;}}
}
B695592:L695592:{c.instructions+=1;NFSU2_TR(0x695592);
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
B695594:L695594:{c.instructions+=4;NFSU2_TR(0x695594);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B695595:{NFSU2_TR(0x695595);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B695596:{NFSU2_TR(0x695596);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B695597:{NFSU2_TR(0x695597);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69559a:L69559a:{c.instructions+=10;NFSU2_TR(0x69559a);
__builtin_memmove((R+28),(R+28),4);
}
B69559c:{NFSU2_TR(0x69559c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69559d:{NFSU2_TR(0x69559d);
__builtin_memmove((R+20),(R+16),4);
}
B69559f:{NFSU2_TR(0x69559f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6955a2:{NFSU2_TR(0x6955a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6955a5:{NFSU2_TR(0x6955a5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6955a8:{NFSU2_TR(0x6955a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6955aa:{NFSU2_TR(0x6955aa);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6955ad:{NFSU2_TR(0x6955ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6955ae:{NFSU2_TR(0x6955ae);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6955b4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6955b4:L6955b4:{c.instructions+=2;NFSU2_TR(0x6955b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6955b5:{NFSU2_TR(0x6955b5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6955b8:L6955b8:{c.instructions+=8;NFSU2_TR(0x6955b8);
__builtin_memmove((R+28),(R+28),4);
}
B6955ba:{NFSU2_TR(0x6955ba);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6955bb:{NFSU2_TR(0x6955bb);
__builtin_memmove((R+20),(R+16),4);
}
B6955bd:{NFSU2_TR(0x6955bd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6955be:{NFSU2_TR(0x6955be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6955c1:{NFSU2_TR(0x6955c1);
__builtin_memmove((R+8),(R+28),4);
}
B6955c3:{NFSU2_TR(0x6955c3);
u8 U[45];
w4(U+37,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+8),4);
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+37))));
w1(U+24,u8((r4(U+37))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+37))-u32(u32(0x1ull))));
w4(U+29,shl<u32>(r4(U+41),u64(r4(U+25))));
w1(U+33,u8(s32(r4(U+29))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+33))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+34,u8((r4(U+37))==(u32(0x1ull))));
w1(U+35,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+8))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B6955c6:{NFSU2_TR(0x6955c6);
if(r1(R+518)){{goto L6955e4;}}
}
B6955c8:L6955c8:{c.instructions+=5;NFSU2_TR(0x6955c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6955cb:{NFSU2_TR(0x6955cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6955ce:{NFSU2_TR(0x6955ce);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6955cf:{NFSU2_TR(0x6955cf);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B6955d1:{NFSU2_TR(0x6955d1);
__builtin_memmove((R+24),(R+8),4);
}
B6955d3:L6955d3:{c.instructions+=7;NFSU2_TR(0x6955d3);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6955d5:{NFSU2_TR(0x6955d5);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+8))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6955d8:{NFSU2_TR(0x6955d8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B6955db:{NFSU2_TR(0x6955db);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6955dd:{NFSU2_TR(0x6955dd);
w1(R+512,carry<u32>(r4(R+0),u32(0x4ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6955e0:{NFSU2_TR(0x6955e0);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+24),u32(0x1ull)));
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6955e1:{NFSU2_TR(0x6955e1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6955d3u);}goto L6955d3;}}
}
B6955e3:L6955e3:{c.instructions+=1;NFSU2_TR(0x6955e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6955e4:L6955e4:{c.instructions+=7;NFSU2_TR(0x6955e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6955e7:{NFSU2_TR(0x6955e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6955e9:{NFSU2_TR(0x6955e9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6955ea:{NFSU2_TR(0x6955ea);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6955ed:{NFSU2_TR(0x6955ed);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6955f0:{NFSU2_TR(0x6955f0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6955f1:{NFSU2_TR(0x6955f1);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6955f7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6955f7:L6955f7:{c.instructions+=3;NFSU2_TR(0x6955f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6955f8:{NFSU2_TR(0x6955f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6955f9:{NFSU2_TR(0x6955f9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6955fc:L6955fc:{c.instructions+=17;NFSU2_TR(0x6955fc);
__builtin_memmove((R+28),(R+28),4);
}
B6955fe:{NFSU2_TR(0x6955fe);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6955ff:{NFSU2_TR(0x6955ff);
__builtin_memmove((R+20),(R+16),4);
}
B695601:{NFSU2_TR(0x695601);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B695602:{NFSU2_TR(0x695602);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B695603:{NFSU2_TR(0x695603);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B695606:{NFSU2_TR(0x695606);
__builtin_memmove((R+8),(R+24),4);
}
B695608:{NFSU2_TR(0x695608);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B69560b:{NFSU2_TR(0x69560b);
{u32 ea_=u32(r4(R+20)+u32(24u));__asm__ volatile(".byte 0xd9,0x38"::"a"(ea_):"memory");}
}
B69560e:{NFSU2_TR(0x69560e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B695611:{NFSU2_TR(0x695611);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xc00ull))));
}
B695616:{NFSU2_TR(0x695616);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B695619:{NFSU2_TR(0x695619);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x28"::"a"(ea_):"memory");}
}
B69561c:{NFSU2_TR(0x69561c);
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
B69561e:{NFSU2_TR(0x69561e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B695621:{NFSU2_TR(0x695621);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B695624:{NFSU2_TR(0x695624);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L695647;}}
}
B695626:L695626:{c.instructions+=4;NFSU2_TR(0x695626);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B695629:{NFSU2_TR(0x695629);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69562c:{NFSU2_TR(0x69562c);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B69562e:{NFSU2_TR(0x69562e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69562f:L69562f:{c.instructions+=9;NFSU2_TR(0x69562f);
{u32 ea_=u32(r4(R+0)+r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B695632:{NFSU2_TR(0x695632);
{u32 ea_=u32(r4(R+20)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B695635:{NFSU2_TR(0x695635);
{u32 ea_=u32(r4(R+20)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B695638:{NFSU2_TR(0x695638);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B69563b:{NFSU2_TR(0x69563b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69563e:{NFSU2_TR(0x69563e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B695640:{NFSU2_TR(0x695640);
w1(R+512,carry<u32>(r4(R+0),u32(0x4ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B695643:{NFSU2_TR(0x695643);
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
B695644:{NFSU2_TR(0x695644);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69562fu);}goto L69562f;}}
}
B695646:L695646:{c.instructions+=1;NFSU2_TR(0x695646);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B695647:L695647:{c.instructions+=8;NFSU2_TR(0x695647);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x28"::"a"(ea_):"memory");}
}
B69564a:{NFSU2_TR(0x69564a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69564d:{NFSU2_TR(0x69564d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B69564f:{NFSU2_TR(0x69564f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B695650:{NFSU2_TR(0x695650);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B695653:{NFSU2_TR(0x695653);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B695656:{NFSU2_TR(0x695656);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B695657:{NFSU2_TR(0x695657);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69565dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B69565d:L69565d:{c.instructions+=3;NFSU2_TR(0x69565d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B69565e:{NFSU2_TR(0x69565e);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B69565f:{NFSU2_TR(0x69565f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B695662:L695662:{c.instructions+=10;NFSU2_TR(0x695662);
__builtin_memmove((R+28),(R+28),4);
}
B695664:{NFSU2_TR(0x695664);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B695665:{NFSU2_TR(0x695665);
__builtin_memmove((R+20),(R+16),4);
}
B695667:{NFSU2_TR(0x695667);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69566a:{NFSU2_TR(0x69566a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69566d:{NFSU2_TR(0x69566d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B695670:{NFSU2_TR(0x695670);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B695672:{NFSU2_TR(0x695672);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B695675:{NFSU2_TR(0x695675);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B695676:{NFSU2_TR(0x695676);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69567cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B69567c:L69567c:{c.instructions+=2;NFSU2_TR(0x69567c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B69567d:{NFSU2_TR(0x69567d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B695680:L695680:{c.instructions+=8;NFSU2_TR(0x695680);
__builtin_memmove((R+28),(R+28),4);
}
B695682:{NFSU2_TR(0x695682);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B695683:{NFSU2_TR(0x695683);
__builtin_memmove((R+20),(R+16),4);
}
B695685:{NFSU2_TR(0x695685);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B695686:{NFSU2_TR(0x695686);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B695689:{NFSU2_TR(0x695689);
__builtin_memmove((R+8),(R+28),4);
}
B69568b:{NFSU2_TR(0x69568b);
u8 U[45];
w4(U+37,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+8),4);
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+37))));
w1(U+24,u8((r4(U+37))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+37))-u32(u32(0x1ull))));
w4(U+29,shl<u32>(r4(U+41),u64(r4(U+25))));
w1(U+33,u8(s32(r4(U+29))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+33))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+34,u8((r4(U+37))==(u32(0x1ull))));
w1(U+35,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+8))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B69568e:{NFSU2_TR(0x69568e);
if(r1(R+518)){{goto L6956b2;}}
}
B695690:L695690:{c.instructions+=5;NFSU2_TR(0x695690);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B695693:{NFSU2_TR(0x695693);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B695696:{NFSU2_TR(0x695696);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B695697:{NFSU2_TR(0x695697);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B695699:{NFSU2_TR(0x695699);
__builtin_memmove((R+24),(R+8),4);
}
B69569b:L69569b:{c.instructions+=9;NFSU2_TR(0x69569b);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B69569d:{NFSU2_TR(0x69569d);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+8))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6956a0:{NFSU2_TR(0x6956a0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B6956a3:{NFSU2_TR(0x6956a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6956a6:{NFSU2_TR(0x6956a6);
{u32 ea_=u32(r4(R+20)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6956a9:{NFSU2_TR(0x6956a9);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6956ab:{NFSU2_TR(0x6956ab);
w1(R+512,carry<u32>(r4(R+0),u32(0x4ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6956ae:{NFSU2_TR(0x6956ae);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+24),u32(0x1ull)));
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6956af:{NFSU2_TR(0x6956af);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69569bu);}goto L69569b;}}
}
B6956b1:L6956b1:{c.instructions+=1;NFSU2_TR(0x6956b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6956b2:L6956b2:{c.instructions+=7;NFSU2_TR(0x6956b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6956b5:{NFSU2_TR(0x6956b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6956b7:{NFSU2_TR(0x6956b7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6956b8:{NFSU2_TR(0x6956b8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6956bb:{NFSU2_TR(0x6956bb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6956be:{NFSU2_TR(0x6956be);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6956bf:{NFSU2_TR(0x6956bf);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6956c5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6956c5:L6956c5:{c.instructions+=3;NFSU2_TR(0x6956c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6956c6:{NFSU2_TR(0x6956c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6956c7:{NFSU2_TR(0x6956c7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6956ca:L6956ca:{c.instructions+=8;NFSU2_TR(0x6956ca);
__builtin_memmove((R+28),(R+28),4);
}
B6956cc:{NFSU2_TR(0x6956cc);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6956cd:{NFSU2_TR(0x6956cd);
__builtin_memmove((R+20),(R+16),4);
}
B6956cf:{NFSU2_TR(0x6956cf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6956d0:{NFSU2_TR(0x6956d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6956d3:{NFSU2_TR(0x6956d3);
__builtin_memmove((R+8),(R+24),4);
}
B6956d5:{NFSU2_TR(0x6956d5);
u8 U[45];
w4(U+37,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+8),4);
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+37))));
w1(U+24,u8((r4(U+37))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+37))-u32(u32(0x1ull))));
w4(U+29,shl<u32>(r4(U+41),u64(r4(U+25))));
w1(U+33,u8(s32(r4(U+29))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+33))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+34,u8((r4(U+37))==(u32(0x1ull))));
w1(U+35,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+8))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B6956d8:{NFSU2_TR(0x6956d8);
if(r1(R+518)){{goto L6956ed;}}
}
B6956da:L6956da:{c.instructions+=3;NFSU2_TR(0x6956da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6956dd:{NFSU2_TR(0x6956dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6956e0:{NFSU2_TR(0x6956e0);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B6956e2:L6956e2:{c.instructions+=5;NFSU2_TR(0x6956e2);
{u32 ea_=u32(r4(R+0)+r4(R+4));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6956e5:{NFSU2_TR(0x6956e5);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6956e7:{NFSU2_TR(0x6956e7);
w1(R+512,carry<u32>(r4(R+0),u32(0x4ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6956ea:{NFSU2_TR(0x6956ea);
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
B6956eb:{NFSU2_TR(0x6956eb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6956e2u);}goto L6956e2;}}
}
B6956ed:L6956ed:{c.instructions+=7;NFSU2_TR(0x6956ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6956f0:{NFSU2_TR(0x6956f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6956f2:{NFSU2_TR(0x6956f2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6956f3:{NFSU2_TR(0x6956f3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6956f6:{NFSU2_TR(0x6956f6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6956f9:{NFSU2_TR(0x6956f9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6956fa:{NFSU2_TR(0x6956fa);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x695700ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B695700:L695700:{c.instructions+=3;NFSU2_TR(0x695700);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B695701:{NFSU2_TR(0x695701);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B695702:{NFSU2_TR(0x695702);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B695705:L695705:{c.instructions+=13;NFSU2_TR(0x695705);
__builtin_memmove((R+28),(R+28),4);
}
B695707:{NFSU2_TR(0x695707);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B695708:{NFSU2_TR(0x695708);
__builtin_memmove((R+20),(R+16),4);
}
B69570a:{NFSU2_TR(0x69570a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69570d:{NFSU2_TR(0x69570d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B69570f:{NFSU2_TR(0x69570f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B695710:{NFSU2_TR(0x695710);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B695713:{NFSU2_TR(0x695713);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B695714:{NFSU2_TR(0x695714);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B695717:{NFSU2_TR(0x695717);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B695718:{NFSU2_TR(0x695718);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B695719:{NFSU2_TR(0x695719);
u8 U[45];
w4(U+37,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+12),4);
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+37))));
w1(U+24,u8((r4(U+37))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+37))-u32(u32(0x1ull))));
w4(U+29,shl<u32>(r4(U+41),u64(r4(U+25))));
w1(U+33,u8(s32(r4(U+29))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+33))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+34,u8((r4(U+37))==(u32(0x1ull))));
w1(U+35,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+12))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B69571c:{NFSU2_TR(0x69571c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69571full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B69571f:L69571f:{c.instructions+=7;NFSU2_TR(0x69571f);
__builtin_memmove((R+28),(R+0),4);
}
B695721:{NFSU2_TR(0x695721);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B695724:{NFSU2_TR(0x695724);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B695727:{NFSU2_TR(0x695727);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B695729:{NFSU2_TR(0x695729);
__builtin_memmove((R+4),(R+12),4);
}
B69572b:{NFSU2_TR(0x69572b);
__builtin_memmove((R+0),(R+4),4);
}
B69572d:{NFSU2_TR(0x69572d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B695730:L695730:{c.instructions+=1;NFSU2_TR(0x695730);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L695732;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x695730u);}goto L695730;}
}
B695732:L695732:{c.instructions+=2;NFSU2_TR(0x695732);
__builtin_memmove((R+4),(R+0),4);
}
B695734:{NFSU2_TR(0x695734);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B695737:L695737:{c.instructions+=1;NFSU2_TR(0x695737);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L695739;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x695737u);}goto L695737;}
}
B695739:L695739:{c.instructions+=6;NFSU2_TR(0x695739);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B69573a:{NFSU2_TR(0x69573a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B69573b:{NFSU2_TR(0x69573b);
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
B69573d:{NFSU2_TR(0x69573d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B69573e:{NFSU2_TR(0x69573e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B69573f:{NFSU2_TR(0x69573f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B695742:L695742:{c.instructions+=10;NFSU2_TR(0x695742);
__builtin_memmove((R+28),(R+28),4);
}
B695744:{NFSU2_TR(0x695744);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B695745:{NFSU2_TR(0x695745);
__builtin_memmove((R+20),(R+16),4);
}
B695747:{NFSU2_TR(0x695747);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B695748:{NFSU2_TR(0x695748);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69574b:{NFSU2_TR(0x69574b);
__builtin_memmove((R+8),(R+12),4);
}
B69574d:{NFSU2_TR(0x69574d);
u8 U[45];
w4(U+37,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+8),4);
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+37))));
w1(U+24,u8((r4(U+37))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+37))-u32(u32(0x1ull))));
w4(U+29,shl<u32>(r4(U+41),u64(r4(U+25))));
w1(U+33,u8(s32(r4(U+29))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+33))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+34,u8((r4(U+37))==(u32(0x1ull))));
w1(U+35,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+8))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B695750:{NFSU2_TR(0x695750);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B695751:{NFSU2_TR(0x695751);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B695752:{NFSU2_TR(0x695752);
if(r1(R+518)){{goto L695774;}}
}
B695754:L695754:{c.instructions+=4;NFSU2_TR(0x695754);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B695757:{NFSU2_TR(0x695757);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69575a:{NFSU2_TR(0x69575a);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B69575c:{NFSU2_TR(0x69575c);
__builtin_memmove((R+24),(R+8),4);
}
B69575e:L69575e:{c.instructions+=9;NFSU2_TR(0x69575e);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B695760:{NFSU2_TR(0x695760);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+8))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B695763:{NFSU2_TR(0x695763);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B695766:{NFSU2_TR(0x695766);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B695769:{NFSU2_TR(0x695769);
{u32 ea_=u32(r4(R+20)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B69576c:{NFSU2_TR(0x69576c);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B69576e:{NFSU2_TR(0x69576e);
w1(R+512,carry<u32>(r4(R+0),u32(0x4ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B695771:{NFSU2_TR(0x695771);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+24),u32(0x1ull)));
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B695772:{NFSU2_TR(0x695772);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69575eu);}goto L69575e;}}
}
B695774:L695774:{c.instructions+=6;NFSU2_TR(0x695774);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B695777:{NFSU2_TR(0x695777);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B695779:{NFSU2_TR(0x695779);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69577c:{NFSU2_TR(0x69577c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69577d:{NFSU2_TR(0x69577d);
u8 U[45];
w4(U+37,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+12),4);
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+37))));
w1(U+24,u8((r4(U+37))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+37))-u32(u32(0x1ull))));
w4(U+29,shl<u32>(r4(U+41),u64(r4(U+25))));
w1(U+33,u8(s32(r4(U+29))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+33))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+34,u8((r4(U+37))==(u32(0x1ull))));
w1(U+35,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+12))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B695780:{NFSU2_TR(0x695780);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x695783ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B695783:L695783:{c.instructions+=7;NFSU2_TR(0x695783);
__builtin_memmove((R+28),(R+0),4);
}
B695785:{NFSU2_TR(0x695785);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B695788:{NFSU2_TR(0x695788);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B69578b:{NFSU2_TR(0x69578b);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B69578d:{NFSU2_TR(0x69578d);
__builtin_memmove((R+4),(R+12),4);
}
B69578f:{NFSU2_TR(0x69578f);
__builtin_memmove((R+0),(R+4),4);
}
B695791:{NFSU2_TR(0x695791);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B695794:L695794:{c.instructions+=1;NFSU2_TR(0x695794);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L695796;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x695794u);}goto L695794;}
}
B695796:L695796:{c.instructions+=2;NFSU2_TR(0x695796);
__builtin_memmove((R+4),(R+0),4);
}
B695798:{NFSU2_TR(0x695798);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B69579b:L69579b:{c.instructions+=1;NFSU2_TR(0x69579b);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L69579d;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69579bu);}goto L69579b;}
}
B69579d:L69579d:{c.instructions+=6;NFSU2_TR(0x69579d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B69579e:{NFSU2_TR(0x69579e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B69579f:{NFSU2_TR(0x69579f);
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
B6957a1:{NFSU2_TR(0x6957a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6957a2:{NFSU2_TR(0x6957a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6957a3:{NFSU2_TR(0x6957a3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6957a6:L6957a6:{c.instructions+=11;NFSU2_TR(0x6957a6);
__builtin_memmove((R+28),(R+28),4);
}
B6957a8:{NFSU2_TR(0x6957a8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6957a9:{NFSU2_TR(0x6957a9);
__builtin_memmove((R+20),(R+16),4);
}
B6957ab:{NFSU2_TR(0x6957ab);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6957ac:{NFSU2_TR(0x6957ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6957af:{NFSU2_TR(0x6957af);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6957b0:{NFSU2_TR(0x6957b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6957b3:{NFSU2_TR(0x6957b3);
__builtin_memmove((R+8),(R+12),4);
}
B6957b5:{NFSU2_TR(0x6957b5);
u8 U[45];
w4(U+37,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+8),4);
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+37))));
w1(U+24,u8((r4(U+37))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+37))-u32(u32(0x1ull))));
w4(U+29,shl<u32>(r4(U+41),u64(r4(U+25))));
w1(U+33,u8(s32(r4(U+29))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+33))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+34,u8((r4(U+37))==(u32(0x1ull))));
w1(U+35,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+8))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B6957b8:{NFSU2_TR(0x6957b8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6957b9:{NFSU2_TR(0x6957b9);
if(r1(R+518)){{goto L6957cd;}}
}
B6957bb:L6957bb:{c.instructions+=3;NFSU2_TR(0x6957bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6957be:{NFSU2_TR(0x6957be);
__builtin_memmove((R+4),(R+24),4);
}
B6957c0:{NFSU2_TR(0x6957c0);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B6957c2:L6957c2:{c.instructions+=5;NFSU2_TR(0x6957c2);
{u32 ea_=u32(r4(R+0)+r4(R+4));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6957c5:{NFSU2_TR(0x6957c5);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6957c7:{NFSU2_TR(0x6957c7);
w1(R+512,carry<u32>(r4(R+0),u32(0x4ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6957ca:{NFSU2_TR(0x6957ca);
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
B6957cb:{NFSU2_TR(0x6957cb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6957c2u);}goto L6957c2;}}
}
B6957cd:L6957cd:{c.instructions+=5;NFSU2_TR(0x6957cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6957d0:{NFSU2_TR(0x6957d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6957d2:{NFSU2_TR(0x6957d2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6957d3:{NFSU2_TR(0x6957d3);
u8 U[45];
w4(U+37,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+12),4);
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+37))));
w1(U+24,u8((r4(U+37))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+37))-u32(u32(0x1ull))));
w4(U+29,shl<u32>(r4(U+41),u64(r4(U+25))));
w1(U+33,u8(s32(r4(U+29))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+33))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+34,u8((r4(U+37))==(u32(0x1ull))));
w1(U+35,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+12))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B6957d6:{NFSU2_TR(0x6957d6);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6957d9ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6957d9:L6957d9:{c.instructions+=7;NFSU2_TR(0x6957d9);
__builtin_memmove((R+28),(R+0),4);
}
B6957db:{NFSU2_TR(0x6957db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6957de:{NFSU2_TR(0x6957de);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6957e1:{NFSU2_TR(0x6957e1);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B6957e3:{NFSU2_TR(0x6957e3);
__builtin_memmove((R+4),(R+12),4);
}
B6957e5:{NFSU2_TR(0x6957e5);
__builtin_memmove((R+0),(R+4),4);
}
B6957e7:{NFSU2_TR(0x6957e7);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6957ea:L6957ea:{c.instructions+=1;NFSU2_TR(0x6957ea);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6957ec;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6957eau);}goto L6957ea;}
}
B6957ec:L6957ec:{c.instructions+=2;NFSU2_TR(0x6957ec);
__builtin_memmove((R+4),(R+0),4);
}
B6957ee:{NFSU2_TR(0x6957ee);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6957f1:L6957f1:{c.instructions+=1;NFSU2_TR(0x6957f1);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6957f3;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6957f1u);}goto L6957f1;}
}
B6957f3:L6957f3:{c.instructions+=6;NFSU2_TR(0x6957f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6957f4:{NFSU2_TR(0x6957f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6957f5:{NFSU2_TR(0x6957f5);
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
B6957f7:{NFSU2_TR(0x6957f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6957f8:{NFSU2_TR(0x6957f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6957f9:{NFSU2_TR(0x6957f9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6957fc:L6957fc:{c.instructions+=6;NFSU2_TR(0x6957fc);
__builtin_memmove((R+28),(R+28),4);
}
B6957fe:{NFSU2_TR(0x6957fe);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6957ff:{NFSU2_TR(0x6957ff);
__builtin_memmove((R+20),(R+16),4);
}
B695801:{NFSU2_TR(0x695801);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B695802:{NFSU2_TR(0x695802);
__builtin_memmove((R+24),(R+4),4);
}
B695804:{NFSU2_TR(0x695804);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x695809ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6952a4u);}goto L6952a4;}
}
B695809:L695809:{c.instructions+=2;NFSU2_TR(0x695809);
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
B69580d:{NFSU2_TR(0x69580d);
if(r1(R+518)){{goto L695816;}}
}
B69580f:L69580f:{c.instructions+=2;NFSU2_TR(0x69580f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B695810:{NFSU2_TR(0x695810);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x695815ull));
TAIL_STATIC(0x575630u,575);
}
B695815:L695815:{c.instructions+=1;NFSU2_TR(0x695815);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B695816:L695816:{c.instructions+=4;NFSU2_TR(0x695816);
__builtin_memmove((R+0),(R+24),4);
}
B695818:{NFSU2_TR(0x695818);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B695819:{NFSU2_TR(0x695819);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B69581a:{NFSU2_TR(0x69581a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69581d:L69581d:{c.instructions+=6;NFSU2_TR(0x69581d);
__builtin_memmove((R+28),(R+28),4);
}
B69581f:{NFSU2_TR(0x69581f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B695820:{NFSU2_TR(0x695820);
__builtin_memmove((R+24),(R+4),4);
}
B695822:{NFSU2_TR(0x695822);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B695826:{NFSU2_TR(0x695826);
u8 U[4];
w4(U+0,u32(0x7bab58ull));
s4(u32(r4(R+24)),r4(U+0));
}
B69582c:{NFSU2_TR(0x69582c);
if(r1(R+518)){{goto L695857;}}
}
B69582e:L69582e:{c.instructions+=4;NFSU2_TR(0x69582e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69582f:{NFSU2_TR(0x69582f);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B695831:{NFSU2_TR(0x695831);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B695834:{NFSU2_TR(0x695834);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69584d;}}
}
B695836:L695836:{c.instructions+=4;NFSU2_TR(0x695836);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B695839:{NFSU2_TR(0x695839);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69583c:{NFSU2_TR(0x69583c);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69583e:{NFSU2_TR(0x69583e);
if(r1(R+518)){{goto L695847;}}
}
B695840:L695840:{c.instructions+=2;NFSU2_TR(0x695840);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B695842:{NFSU2_TR(0x695842);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x695847ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6957fcu);}goto L6957fc;}
}
B695847:L695847:{c.instructions+=3;NFSU2_TR(0x695847);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B695848:{NFSU2_TR(0x695848);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B69584b:{NFSU2_TR(0x69584b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x695836u);}goto L695836;}}
}
B69584d:L69584d:{c.instructions+=2;NFSU2_TR(0x69584d);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B695850:{NFSU2_TR(0x695850);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x695855ull));
TAIL_STATIC(0x575630u,575);
}
B695855:L695855:{c.instructions+=2;NFSU2_TR(0x695855);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B695856:{NFSU2_TR(0x695856);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B695857:L695857:{c.instructions+=2;NFSU2_TR(0x695857);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69585a:{NFSU2_TR(0x69585a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69585full));
TAIL_STATIC(0x575630u,575);
}
B69585f:L69585f:{c.instructions+=2;NFSU2_TR(0x69585f);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B695862:{NFSU2_TR(0x695862);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x695867ull));
TAIL_STATIC(0x575630u,575);
}
B695867:L695867:{c.instructions+=4;NFSU2_TR(0x695867);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B695868:{NFSU2_TR(0x695868);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B695869:{NFSU2_TR(0x695869);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B69586a:{NFSU2_TR(0x69586a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69586b:L69586b:{c.instructions+=10;NFSU2_TR(0x69586b);
__builtin_memmove((R+28),(R+28),4);
}
B69586d:{NFSU2_TR(0x69586d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69586e:{NFSU2_TR(0x69586e);
__builtin_memmove((R+20),(R+16),4);
}
B695870:{NFSU2_TR(0x695870);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B695873:{NFSU2_TR(0x695873);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B695876:{NFSU2_TR(0x695876);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B695879:{NFSU2_TR(0x695879);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B69587b:{NFSU2_TR(0x69587b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69587e:{NFSU2_TR(0x69587e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69587f:{NFSU2_TR(0x69587f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x188ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x695885ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B695885:L695885:{c.instructions+=2;NFSU2_TR(0x695885);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B695886:{NFSU2_TR(0x695886);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B695889:L695889:{c.instructions+=5;NFSU2_TR(0x695889);
__builtin_memmove((R+28),(R+28),4);
}
B69588b:{NFSU2_TR(0x69588b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69588c:{NFSU2_TR(0x69588c);
__builtin_memmove((R+20),(R+16),4);
}
B69588e:{NFSU2_TR(0x69588e);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
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
B695892:{NFSU2_TR(0x695892);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6958b1;}}
}
B695894:L695894:{c.instructions+=5;NFSU2_TR(0x695894);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B695897:{NFSU2_TR(0x695897);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69589a:{NFSU2_TR(0x69589a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69589b:{NFSU2_TR(0x69589b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69589e:{NFSU2_TR(0x69589e);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B6958a0:L6958a0:{c.instructions+=7;NFSU2_TR(0x6958a0);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6958a2:{NFSU2_TR(0x6958a2);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+8))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6958a5:{NFSU2_TR(0x6958a5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B6958a8:{NFSU2_TR(0x6958a8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6958aa:{NFSU2_TR(0x6958aa);
w1(R+512,carry<u32>(r4(R+0),u32(0x4ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6958ad:{NFSU2_TR(0x6958ad);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+24),u32(0x1ull)));
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6958ae:{NFSU2_TR(0x6958ae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6958a0u);}goto L6958a0;}}
}
B6958b0:L6958b0:{c.instructions+=1;NFSU2_TR(0x6958b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6958b1:L6958b1:{c.instructions+=7;NFSU2_TR(0x6958b1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6958b4:{NFSU2_TR(0x6958b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6958b7:{NFSU2_TR(0x6958b7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6958ba:{NFSU2_TR(0x6958ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6958bc:{NFSU2_TR(0x6958bc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6958bf:{NFSU2_TR(0x6958bf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6958c0:{NFSU2_TR(0x6958c0);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x188ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6958c6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6958c6:L6958c6:{c.instructions+=2;NFSU2_TR(0x6958c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6958c7:{NFSU2_TR(0x6958c7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6958ca:L6958ca:{c.instructions+=5;NFSU2_TR(0x6958ca);
__builtin_memmove((R+28),(R+28),4);
}
B6958cc:{NFSU2_TR(0x6958cc);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6958cd:{NFSU2_TR(0x6958cd);
__builtin_memmove((R+20),(R+16),4);
}
B6958cf:{NFSU2_TR(0x6958cf);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
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
B6958d3:{NFSU2_TR(0x6958d3);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L695903;}}
}
B6958d5:L6958d5:{c.instructions+=5;NFSU2_TR(0x6958d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6958d8:{NFSU2_TR(0x6958d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6958db:{NFSU2_TR(0x6958db);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6958dc:{NFSU2_TR(0x6958dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6958df:{NFSU2_TR(0x6958df);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B6958e1:L6958e1:{c.instructions+=6;NFSU2_TR(0x6958e1);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6958e7:{NFSU2_TR(0x6958e7);
{u32 ea_=u32(r4(R+4)+r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6958ea:{NFSU2_TR(0x6958ea);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6958ec:{NFSU2_TR(0x6958ec);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6958ee:{NFSU2_TR(0x6958ee);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6958f1:{NFSU2_TR(0x6958f1);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6958f8;}}
}
B6958f3:L6958f3:{c.instructions+=3;NFSU2_TR(0x6958f3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6958f5:{NFSU2_TR(0x6958f5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6958f6:{NFSU2_TR(0x6958f6);
{goto L6958fa;}
}
B6958f8:L6958f8:{c.instructions+=1;NFSU2_TR(0x6958f8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6958fa:L6958fa:{c.instructions+=4;NFSU2_TR(0x6958fa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6958fc:{NFSU2_TR(0x6958fc);
w1(R+512,carry<u32>(r4(R+4),u32(0x4ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6958ff:{NFSU2_TR(0x6958ff);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+24),u32(0x1ull)));
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B695900:{NFSU2_TR(0x695900);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6958e1u);}goto L6958e1;}}
}
B695902:L695902:{c.instructions+=1;NFSU2_TR(0x695902);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B695903:L695903:{c.instructions+=7;NFSU2_TR(0x695903);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B695906:{NFSU2_TR(0x695906);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B695909:{NFSU2_TR(0x695909);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69590c:{NFSU2_TR(0x69590c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B69590e:{NFSU2_TR(0x69590e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B695911:{NFSU2_TR(0x695911);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B695912:{NFSU2_TR(0x695912);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x188ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x695918ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B695918:L695918:{c.instructions+=2;NFSU2_TR(0x695918);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B695919:{NFSU2_TR(0x695919);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69591c:L69591c:{c.instructions+=10;NFSU2_TR(0x69591c);
__builtin_memmove((R+28),(R+28),4);
}
B69591e:{NFSU2_TR(0x69591e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69591f:{NFSU2_TR(0x69591f);
__builtin_memmove((R+20),(R+16),4);
}
B695921:{NFSU2_TR(0x695921);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B695924:{NFSU2_TR(0x695924);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B695927:{NFSU2_TR(0x695927);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69592a:{NFSU2_TR(0x69592a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B69592c:{NFSU2_TR(0x69592c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69592f:{NFSU2_TR(0x69592f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B695930:{NFSU2_TR(0x695930);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x180ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x695936ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B695936:L695936:{c.instructions+=2;NFSU2_TR(0x695936);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B695937:{NFSU2_TR(0x695937);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69593a:L69593a:{c.instructions+=8;NFSU2_TR(0x69593a);
__builtin_memmove((R+28),(R+28),4);
}
B69593c:{NFSU2_TR(0x69593c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69593d:{NFSU2_TR(0x69593d);
__builtin_memmove((R+20),(R+16),4);
}
B69593f:{NFSU2_TR(0x69593f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B695940:{NFSU2_TR(0x695940);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B695943:{NFSU2_TR(0x695943);
__builtin_memmove((R+8),(R+28),4);
}
B695945:{NFSU2_TR(0x695945);
u8 U[45];
w4(U+37,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+8),4);
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+37))));
w1(U+24,u8((r4(U+37))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+37))-u32(u32(0x1ull))));
w4(U+29,shl<u32>(r4(U+41),u64(r4(U+25))));
w1(U+33,u8(s32(r4(U+29))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+33))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+34,u8((r4(U+37))==(u32(0x1ull))));
w1(U+35,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+8))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B695948:{NFSU2_TR(0x695948);
if(r1(R+518)){{goto L695966;}}
}
B69594a:L69594a:{c.instructions+=5;NFSU2_TR(0x69594a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69594d:{NFSU2_TR(0x69594d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B695950:{NFSU2_TR(0x695950);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B695951:{NFSU2_TR(0x695951);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B695953:{NFSU2_TR(0x695953);
__builtin_memmove((R+24),(R+8),4);
}
B695955:L695955:{c.instructions+=7;NFSU2_TR(0x695955);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B695957:{NFSU2_TR(0x695957);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+8))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B69595a:{NFSU2_TR(0x69595a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B69595d:{NFSU2_TR(0x69595d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B69595f:{NFSU2_TR(0x69595f);
w1(R+512,carry<u32>(r4(R+0),u32(0x4ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B695962:{NFSU2_TR(0x695962);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+24),u32(0x1ull)));
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B695963:{NFSU2_TR(0x695963);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x695955u);}goto L695955;}}
}
B695965:L695965:{c.instructions+=1;NFSU2_TR(0x695965);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B695966:L695966:{c.instructions+=7;NFSU2_TR(0x695966);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B695969:{NFSU2_TR(0x695969);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B69596b:{NFSU2_TR(0x69596b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69596c:{NFSU2_TR(0x69596c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69596f:{NFSU2_TR(0x69596f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B695972:{NFSU2_TR(0x695972);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B695973:{NFSU2_TR(0x695973);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x180ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x695979ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B695979:L695979:{c.instructions+=3;NFSU2_TR(0x695979);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B69597a:{NFSU2_TR(0x69597a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B69597b:{NFSU2_TR(0x69597b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69597e:L69597e:{c.instructions+=17;NFSU2_TR(0x69597e);
__builtin_memmove((R+28),(R+28),4);
}
B695980:{NFSU2_TR(0x695980);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B695981:{NFSU2_TR(0x695981);
__builtin_memmove((R+20),(R+16),4);
}
B695983:{NFSU2_TR(0x695983);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B695984:{NFSU2_TR(0x695984);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B695985:{NFSU2_TR(0x695985);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B695988:{NFSU2_TR(0x695988);
__builtin_memmove((R+8),(R+24),4);
}
B69598a:{NFSU2_TR(0x69598a);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B69598d:{NFSU2_TR(0x69598d);
{u32 ea_=u32(r4(R+20)+u32(24u));__asm__ volatile(".byte 0xd9,0x38"::"a"(ea_):"memory");}
}
B695990:{NFSU2_TR(0x695990);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B695993:{NFSU2_TR(0x695993);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xc00ull))));
}
B695998:{NFSU2_TR(0x695998);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69599b:{NFSU2_TR(0x69599b);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x28"::"a"(ea_):"memory");}
}
B69599e:{NFSU2_TR(0x69599e);
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
B6959a0:{NFSU2_TR(0x6959a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6959a3:{NFSU2_TR(0x6959a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6959a6:{NFSU2_TR(0x6959a6);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6959c9;}}
}
B6959a8:L6959a8:{c.instructions+=4;NFSU2_TR(0x6959a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6959ab:{NFSU2_TR(0x6959ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6959ae:{NFSU2_TR(0x6959ae);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B6959b0:{NFSU2_TR(0x6959b0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6959b1:L6959b1:{c.instructions+=9;NFSU2_TR(0x6959b1);
{u32 ea_=u32(r4(R+0)+r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6959b4:{NFSU2_TR(0x6959b4);
{u32 ea_=u32(r4(R+20)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6959b7:{NFSU2_TR(0x6959b7);
{u32 ea_=u32(r4(R+20)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6959ba:{NFSU2_TR(0x6959ba);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B6959bd:{NFSU2_TR(0x6959bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6959c0:{NFSU2_TR(0x6959c0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6959c2:{NFSU2_TR(0x6959c2);
w1(R+512,carry<u32>(r4(R+0),u32(0x4ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6959c5:{NFSU2_TR(0x6959c5);
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
B6959c6:{NFSU2_TR(0x6959c6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6959b1u);}goto L6959b1;}}
}
B6959c8:L6959c8:{c.instructions+=1;NFSU2_TR(0x6959c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6959c9:L6959c9:{c.instructions+=8;NFSU2_TR(0x6959c9);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x28"::"a"(ea_):"memory");}
}
B6959cc:{NFSU2_TR(0x6959cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6959cf:{NFSU2_TR(0x6959cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6959d1:{NFSU2_TR(0x6959d1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6959d2:{NFSU2_TR(0x6959d2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6959d5:{NFSU2_TR(0x6959d5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6959d8:{NFSU2_TR(0x6959d8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6959d9:{NFSU2_TR(0x6959d9);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x180ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6959dfull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6959df:L6959df:{c.instructions+=3;NFSU2_TR(0x6959df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6959e0:{NFSU2_TR(0x6959e0);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6959e1:{NFSU2_TR(0x6959e1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6959e4:L6959e4:{c.instructions+=10;NFSU2_TR(0x6959e4);
__builtin_memmove((R+28),(R+28),4);
}
B6959e6:{NFSU2_TR(0x6959e6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6959e7:{NFSU2_TR(0x6959e7);
__builtin_memmove((R+20),(R+16),4);
}
B6959e9:{NFSU2_TR(0x6959e9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6959ec:{NFSU2_TR(0x6959ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6959ef:{NFSU2_TR(0x6959ef);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6959f2:{NFSU2_TR(0x6959f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6959f4:{NFSU2_TR(0x6959f4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6959f7:{NFSU2_TR(0x6959f7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6959f8:{NFSU2_TR(0x6959f8);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x178ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6959feull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6959fe:L6959fe:{c.instructions+=2;NFSU2_TR(0x6959fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6959ff:{NFSU2_TR(0x6959ff);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B695a02:L695a02:{c.instructions+=8;NFSU2_TR(0x695a02);
__builtin_memmove((R+28),(R+28),4);
}
B695a04:{NFSU2_TR(0x695a04);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B695a05:{NFSU2_TR(0x695a05);
__builtin_memmove((R+20),(R+16),4);
}
B695a07:{NFSU2_TR(0x695a07);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B695a08:{NFSU2_TR(0x695a08);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B695a0b:{NFSU2_TR(0x695a0b);
__builtin_memmove((R+8),(R+28),4);
}
B695a0d:{NFSU2_TR(0x695a0d);
u8 U[45];
w4(U+37,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+8),4);
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+37))));
w1(U+24,u8((r4(U+37))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+37))-u32(u32(0x1ull))));
w4(U+29,shl<u32>(r4(U+41),u64(r4(U+25))));
w1(U+33,u8(s32(r4(U+29))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+33))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+34,u8((r4(U+37))==(u32(0x1ull))));
w1(U+35,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+8))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B695a10:{NFSU2_TR(0x695a10);
if(r1(R+518)){{goto L695a34;}}
}
B695a12:L695a12:{c.instructions+=5;NFSU2_TR(0x695a12);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B695a15:{NFSU2_TR(0x695a15);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B695a18:{NFSU2_TR(0x695a18);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B695a19:{NFSU2_TR(0x695a19);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B695a1b:{NFSU2_TR(0x695a1b);
__builtin_memmove((R+24),(R+8),4);
}
B695a1d:L695a1d:{c.instructions+=9;NFSU2_TR(0x695a1d);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B695a1f:{NFSU2_TR(0x695a1f);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+8))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B695a22:{NFSU2_TR(0x695a22);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B695a25:{NFSU2_TR(0x695a25);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B695a28:{NFSU2_TR(0x695a28);
{u32 ea_=u32(r4(R+20)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B695a2b:{NFSU2_TR(0x695a2b);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B695a2d:{NFSU2_TR(0x695a2d);
w1(R+512,carry<u32>(r4(R+0),u32(0x4ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B695a30:{NFSU2_TR(0x695a30);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+24),u32(0x1ull)));
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B695a31:{NFSU2_TR(0x695a31);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x695a1du);}goto L695a1d;}}
}
B695a33:L695a33:{c.instructions+=1;NFSU2_TR(0x695a33);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B695a34:L695a34:{c.instructions+=7;NFSU2_TR(0x695a34);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B695a37:{NFSU2_TR(0x695a37);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B695a39:{NFSU2_TR(0x695a39);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B695a3a:{NFSU2_TR(0x695a3a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B695a3d:{NFSU2_TR(0x695a3d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B695a40:{NFSU2_TR(0x695a40);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B695a41:{NFSU2_TR(0x695a41);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x178ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x695a47ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B695a47:L695a47:{c.instructions+=3;NFSU2_TR(0x695a47);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B695a48:{NFSU2_TR(0x695a48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B695a49:{NFSU2_TR(0x695a49);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B695a4c:L695a4c:{c.instructions+=8;NFSU2_TR(0x695a4c);
__builtin_memmove((R+28),(R+28),4);
}
B695a4e:{NFSU2_TR(0x695a4e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B695a4f:{NFSU2_TR(0x695a4f);
__builtin_memmove((R+20),(R+16),4);
}
B695a51:{NFSU2_TR(0x695a51);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B695a52:{NFSU2_TR(0x695a52);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B695a55:{NFSU2_TR(0x695a55);
__builtin_memmove((R+8),(R+24),4);
}
B695a57:{NFSU2_TR(0x695a57);
u8 U[45];
w4(U+37,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+8),4);
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+37))));
w1(U+24,u8((r4(U+37))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+37))-u32(u32(0x1ull))));
w4(U+29,shl<u32>(r4(U+41),u64(r4(U+25))));
w1(U+33,u8(s32(r4(U+29))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+33))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+34,u8((r4(U+37))==(u32(0x1ull))));
w1(U+35,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+8))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B695a5a:{NFSU2_TR(0x695a5a);
if(r1(R+518)){{goto L695a6f;}}
}
B695a5c:L695a5c:{c.instructions+=3;NFSU2_TR(0x695a5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B695a5f:{NFSU2_TR(0x695a5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B695a62:{NFSU2_TR(0x695a62);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B695a64:L695a64:{c.instructions+=5;NFSU2_TR(0x695a64);
{u32 ea_=u32(r4(R+0)+r4(R+4));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B695a67:{NFSU2_TR(0x695a67);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B695a69:{NFSU2_TR(0x695a69);
w1(R+512,carry<u32>(r4(R+0),u32(0x4ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B695a6c:{NFSU2_TR(0x695a6c);
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
B695a6d:{NFSU2_TR(0x695a6d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x695a64u);}goto L695a64;}}
}
B695a6f:L695a6f:{c.instructions+=7;NFSU2_TR(0x695a6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B695a72:{NFSU2_TR(0x695a72);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B695a74:{NFSU2_TR(0x695a74);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B695a75:{NFSU2_TR(0x695a75);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B695a78:{NFSU2_TR(0x695a78);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B695a7b:{NFSU2_TR(0x695a7b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B695a7c:{NFSU2_TR(0x695a7c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x178ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x695a82ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B695a82:L695a82:{c.instructions+=3;NFSU2_TR(0x695a82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B695a83:{NFSU2_TR(0x695a83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B695a84:{NFSU2_TR(0x695a84);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B695a87:L695a87:{c.instructions+=10;NFSU2_TR(0x695a87);
__builtin_memmove((R+28),(R+28),4);
}
B695a89:{NFSU2_TR(0x695a89);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B695a8a:{NFSU2_TR(0x695a8a);
__builtin_memmove((R+20),(R+16),4);
}
B695a8c:{NFSU2_TR(0x695a8c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B695a8f:{NFSU2_TR(0x695a8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B695a92:{NFSU2_TR(0x695a92);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B695a95:{NFSU2_TR(0x695a95);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B695a97:{NFSU2_TR(0x695a97);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B695a9a:{NFSU2_TR(0x695a9a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B695a9b:{NFSU2_TR(0x695a9b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1c4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x695aa1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B695aa1:L695aa1:{c.instructions+=2;NFSU2_TR(0x695aa1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B695aa2:{NFSU2_TR(0x695aa2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B695aa5:L695aa5:{c.instructions+=5;NFSU2_TR(0x695aa5);
__builtin_memmove((R+28),(R+28),4);
}
B695aa7:{NFSU2_TR(0x695aa7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B695aa8:{NFSU2_TR(0x695aa8);
__builtin_memmove((R+20),(R+16),4);
}
B695aaa:{NFSU2_TR(0x695aaa);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
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
B695aae:{NFSU2_TR(0x695aae);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L695acd;}}
}
B695ab0:L695ab0:{c.instructions+=5;NFSU2_TR(0x695ab0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B695ab3:{NFSU2_TR(0x695ab3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B695ab6:{NFSU2_TR(0x695ab6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B695ab7:{NFSU2_TR(0x695ab7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B695aba:{NFSU2_TR(0x695aba);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B695abc:L695abc:{c.instructions+=7;NFSU2_TR(0x695abc);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B695abe:{NFSU2_TR(0x695abe);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+8))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B695ac1:{NFSU2_TR(0x695ac1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B695ac4:{NFSU2_TR(0x695ac4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B695ac6:{NFSU2_TR(0x695ac6);
w1(R+512,carry<u32>(r4(R+0),u32(0x4ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B695ac9:{NFSU2_TR(0x695ac9);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+24),u32(0x1ull)));
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B695aca:{NFSU2_TR(0x695aca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x695abcu);}goto L695abc;}}
}
B695acc:L695acc:{c.instructions+=1;NFSU2_TR(0x695acc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B695acd:L695acd:{c.instructions+=7;NFSU2_TR(0x695acd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B695ad0:{NFSU2_TR(0x695ad0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B695ad3:{NFSU2_TR(0x695ad3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B695ad6:{NFSU2_TR(0x695ad6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B695ad8:{NFSU2_TR(0x695ad8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B695adb:{NFSU2_TR(0x695adb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B695adc:{NFSU2_TR(0x695adc);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1c4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x695ae2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B695ae2:L695ae2:{c.instructions+=2;NFSU2_TR(0x695ae2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B695ae3:{NFSU2_TR(0x695ae3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B695ae6:L695ae6:{c.instructions+=5;NFSU2_TR(0x695ae6);
__builtin_memmove((R+28),(R+28),4);
}
B695ae8:{NFSU2_TR(0x695ae8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B695ae9:{NFSU2_TR(0x695ae9);
__builtin_memmove((R+20),(R+16),4);
}
B695aeb:{NFSU2_TR(0x695aeb);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
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
B695aef:{NFSU2_TR(0x695aef);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L695b1f;}}
}
B695af1:L695af1:{c.instructions+=5;NFSU2_TR(0x695af1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B695af4:{NFSU2_TR(0x695af4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B695af7:{NFSU2_TR(0x695af7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B695af8:{NFSU2_TR(0x695af8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B695afb:{NFSU2_TR(0x695afb);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B695afd:L695afd:{c.instructions+=6;NFSU2_TR(0x695afd);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B695b03:{NFSU2_TR(0x695b03);
{u32 ea_=u32(r4(R+4)+r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B695b06:{NFSU2_TR(0x695b06);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B695b08:{NFSU2_TR(0x695b08);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B695b0a:{NFSU2_TR(0x695b0a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B695b0d:{NFSU2_TR(0x695b0d);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L695b14;}}
}
B695b0f:L695b0f:{c.instructions+=3;NFSU2_TR(0x695b0f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B695b11:{NFSU2_TR(0x695b11);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B695b12:{NFSU2_TR(0x695b12);
{goto L695b16;}
}
B695b14:L695b14:{c.instructions+=1;NFSU2_TR(0x695b14);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B695b16:L695b16:{c.instructions+=4;NFSU2_TR(0x695b16);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B695b18:{NFSU2_TR(0x695b18);
w1(R+512,carry<u32>(r4(R+4),u32(0x4ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B695b1b:{NFSU2_TR(0x695b1b);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+24),u32(0x1ull)));
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B695b1c:{NFSU2_TR(0x695b1c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x695afdu);}goto L695afd;}}
}
B695b1e:L695b1e:{c.instructions+=1;NFSU2_TR(0x695b1e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B695b1f:L695b1f:{c.instructions+=7;NFSU2_TR(0x695b1f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B695b22:{NFSU2_TR(0x695b22);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B695b25:{NFSU2_TR(0x695b25);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B695b28:{NFSU2_TR(0x695b28);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B695b2a:{NFSU2_TR(0x695b2a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B695b2d:{NFSU2_TR(0x695b2d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B695b2e:{NFSU2_TR(0x695b2e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1c4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x695b34ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B695b34:L695b34:{c.instructions+=2;NFSU2_TR(0x695b34);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B695b35:{NFSU2_TR(0x695b35);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B695b38:L695b38:{c.instructions+=17;NFSU2_TR(0x695b38);
__builtin_memmove((R+28),(R+28),4);
}
B695b3a:{NFSU2_TR(0x695b3a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B695b3b:{NFSU2_TR(0x695b3b);
__builtin_memmove((R+20),(R+16),4);
}
B695b3d:{NFSU2_TR(0x695b3d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B695b40:{NFSU2_TR(0x695b40);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B695b41:{NFSU2_TR(0x695b41);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B695b42:{NFSU2_TR(0x695b42);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B695b43:{NFSU2_TR(0x695b43);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B695b46:{NFSU2_TR(0x695b46);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B695b49:{NFSU2_TR(0x695b49);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B695b4c:{NFSU2_TR(0x695b4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B695b4f:{NFSU2_TR(0x695b4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B695b52:{NFSU2_TR(0x695b52);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B695b55:{NFSU2_TR(0x695b55);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(R+0,u32(r2(U+0)));
}
B695b58:{NFSU2_TR(0x695b58);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B695b5a:{NFSU2_TR(0x695b5a);
w1(R+512,u8((r4(R+0))<(r4(R+4))));
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B695b5c:{NFSU2_TR(0x695b5c);
if(r1(R+518)){{goto L695cad;}}
}
B695b62:L695b62:{c.instructions+=2;NFSU2_TR(0x695b62);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B695b63:{NFSU2_TR(0x695b63);
if(r1(R+518)){{goto L695c96;}}
}
B695b69:L695b69:{c.instructions+=2;NFSU2_TR(0x695b69);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B695b6a:{NFSU2_TR(0x695b6a);
if(r1(R+518)){{goto L695c89;}}
}
B695b70:L695b70:{c.instructions+=2;NFSU2_TR(0x695b70);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B695b71:{NFSU2_TR(0x695b71);
if(r1(R+518)){{goto L695c04;}}
}
B695b77:L695b77:{c.instructions+=3;NFSU2_TR(0x695b77);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B695b78:{NFSU2_TR(0x695b78);
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
B695b79:{NFSU2_TR(0x695b79);
if(r1(R+518)){{goto L695b85;}}
}
B695b7b:L695b7b:{c.instructions+=2;NFSU2_TR(0x695b7b);
w4(R+0,u32(0x80004001ull));
}
B695b80:{NFSU2_TR(0x695b80);
{goto L695dd0;}
}
B695b85:L695b85:{c.instructions+=7;NFSU2_TR(0x695b85);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B695b88:{NFSU2_TR(0x695b88);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B695b8a:{NFSU2_TR(0x695b8a);
u8 U[64];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(r4(U+4)));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x695b8a);w8(U+48,u64(u64(r8(U+40))/d_));}
w4(R+0,u32(r8(U+48)));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x695b8a);w8(U+56,u64(u64(r8(U+40))%d_));}
w4(R+8,u32(r8(U+56)));
}
B695b8d:{NFSU2_TR(0x695b8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B695b90:{NFSU2_TR(0x695b90);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B695b94:{NFSU2_TR(0x695b94);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B695b97:{NFSU2_TR(0x695b97);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L695b9c;}}
}
B695b99:L695b99:{c.instructions+=1;NFSU2_TR(0x695b99);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B695b9c:L695b9c:{c.instructions+=3;NFSU2_TR(0x695b9c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B695b9f:{NFSU2_TR(0x695b9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B695ba2:{NFSU2_TR(0x695ba2);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L695dce;}}
}
B695ba8:L695ba8:{c.instructions+=3;NFSU2_TR(0x695ba8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B695bac:{NFSU2_TR(0x695bac);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(U+6))<(u16(0x0ull))));
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B695bb1:{NFSU2_TR(0x695bb1);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L695bf4;}}
}
B695bb3:L695bb3:{c.instructions+=9;NFSU2_TR(0x695bb3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B695bb6:{NFSU2_TR(0x695bb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B695bb9:{NFSU2_TR(0x695bb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B695bbc:{NFSU2_TR(0x695bbc);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B695bbf:{NFSU2_TR(0x695bbf);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B695bc2:{NFSU2_TR(0x695bc2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B695bc5:{NFSU2_TR(0x695bc5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B695bc8:{NFSU2_TR(0x695bc8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B695bc9:{NFSU2_TR(0x695bc9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x695bceull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x695b38u);}goto L695b38;}
}
B695bce:L695bce:{c.instructions+=2;NFSU2_TR(0x695bce);
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
B695bd0:{NFSU2_TR(0x695bd0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L695dd0;}}
}
B695bd6:L695bd6:{c.instructions+=10;NFSU2_TR(0x695bd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B695bd9:{NFSU2_TR(0x695bd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B695bdc:{NFSU2_TR(0x695bdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B695bdf:{NFSU2_TR(0x695bdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B695be2:{NFSU2_TR(0x695be2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B695be5:{NFSU2_TR(0x695be5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B695be8:{NFSU2_TR(0x695be8);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B695bec:{NFSU2_TR(0x695bec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B695bef:{NFSU2_TR(0x695bef);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B695bf2:{NFSU2_TR(0x695bf2);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x695bb3u);}goto L695bb3;}}
}
B695bf4:L695bf4:{c.instructions+=4;NFSU2_TR(0x695bf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B695bf7:{NFSU2_TR(0x695bf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B695bfa:{NFSU2_TR(0x695bfa);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B695bfd:{NFSU2_TR(0x695bfd);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x695ba8u);}goto L695ba8;}}
}
B695bff:L695bff:{c.instructions+=1;NFSU2_TR(0x695bff);
{goto L695dce;}
}
B695c04:L695c04:{c.instructions+=11;NFSU2_TR(0x695c04);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B695c08:{NFSU2_TR(0x695c08);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B695c0c:{NFSU2_TR(0x695c0c);
__builtin_memmove((R+12),(R+4),4);
}
B695c0e:{NFSU2_TR(0x695c0e);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B695c11:{NFSU2_TR(0x695c11);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B695c14:{NFSU2_TR(0x695c14);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B695c16:{NFSU2_TR(0x695c16);
u8 U[56];
w8(U+0,u64(r4(R+12)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x695c16);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x695c16);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B695c18:{NFSU2_TR(0x695c18);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B695c1b:{NFSU2_TR(0x695c1b);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B695c1f:{NFSU2_TR(0x695c1f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B695c22:{NFSU2_TR(0x695c22);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L695c27;}}
}
B695c24:L695c24:{c.instructions+=1;NFSU2_TR(0x695c24);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B695c27:L695c27:{c.instructions+=4;NFSU2_TR(0x695c27);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B695c2b:{NFSU2_TR(0x695c2b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B695c2f:{NFSU2_TR(0x695c2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B695c32:{NFSU2_TR(0x695c32);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L695c81;}}
}
B695c34:L695c34:{c.instructions+=4;NFSU2_TR(0x695c34);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B695c38:{NFSU2_TR(0x695c38);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B695c3c:{NFSU2_TR(0x695c3c);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B695c3e:{NFSU2_TR(0x695c3e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L695c76;}}
}
B695c40:L695c40:{c.instructions+=3;NFSU2_TR(0x695c40);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B695c42:{NFSU2_TR(0x695c42);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B695c44:{NFSU2_TR(0x695c44);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L695c6a;}}
}
B695c46:L695c46:{c.instructions+=13;NFSU2_TR(0x695c46);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w8(U+8,u64(s64(s32(r4(R+4)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
}
B695c4a:{NFSU2_TR(0x695c4a);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(r2(U+4)));
}
B695c4e:{NFSU2_TR(0x695c4e);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B695c50:{NFSU2_TR(0x695c50);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B695c53:{NFSU2_TR(0x695c53);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B695c56:{NFSU2_TR(0x695c56);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B695c59:{NFSU2_TR(0x695c59);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B695c5c:{NFSU2_TR(0x695c5c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B695c5e:{NFSU2_TR(0x695c5e);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B695c62:{NFSU2_TR(0x695c62);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B695c65:{NFSU2_TR(0x695c65);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B695c66:{NFSU2_TR(0x695c66);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B695c68:{NFSU2_TR(0x695c68);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x695c46u);}goto L695c46;}}
}
B695c6a:L695c6a:{c.instructions+=4;NFSU2_TR(0x695c6a);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B695c6e:{NFSU2_TR(0x695c6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B695c71:{NFSU2_TR(0x695c71);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B695c74:{NFSU2_TR(0x695c74);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x695c40u);}goto L695c40;}}
}
B695c76:L695c76:{c.instructions+=4;NFSU2_TR(0x695c76);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B695c79:{NFSU2_TR(0x695c79);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B695c7c:{NFSU2_TR(0x695c7c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B695c7f:{NFSU2_TR(0x695c7f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x695c34u);}goto L695c34;}}
}
B695c81:L695c81:{c.instructions+=3;NFSU2_TR(0x695c81);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B695c84:{NFSU2_TR(0x695c84);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B695c87:{NFSU2_TR(0x695c87);
{goto L695cbe;}
}
B695c89:L695c89:{c.instructions+=4;NFSU2_TR(0x695c89);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B695c8d:{NFSU2_TR(0x695c8d);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B695c91:{NFSU2_TR(0x695c91);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B695c94:{NFSU2_TR(0x695c94);
{goto L695c9a;}
}
B695c96:L695c96:{c.instructions+=1;NFSU2_TR(0x695c96);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B695c9a:L695c9a:{c.instructions+=7;NFSU2_TR(0x695c9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B695c9d:{NFSU2_TR(0x695c9d);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B695c9f:{NFSU2_TR(0x695c9f);
u8 U[56];
w8(U+0,u64(r4(R+4)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x695c9f);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x695c9f);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B695ca1:{NFSU2_TR(0x695ca1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B695ca4:{NFSU2_TR(0x695ca4);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B695ca8:{NFSU2_TR(0x695ca8);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B695cab:{NFSU2_TR(0x695cab);
{goto L695cb9;}
}
B695cad:L695cad:{c.instructions+=4;NFSU2_TR(0x695cad);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B695cb1:{NFSU2_TR(0x695cb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B695cb4:{NFSU2_TR(0x695cb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B695cb7:{NFSU2_TR(0x695cb7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B695cb9:L695cb9:{c.instructions+=1;NFSU2_TR(0x695cb9);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L695cbe;}}
}
B695cbb:L695cbb:{c.instructions+=1;NFSU2_TR(0x695cbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B695cbe:L695cbe:{c.instructions+=3;NFSU2_TR(0x695cbe);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B695cc2:{NFSU2_TR(0x695cc2);
u8 U[2];
w2(U+0,u16(u32(r2(R+4))&u32(r2(R+4))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B695cc5:{NFSU2_TR(0x695cc5);
if(r1(R+518)){{goto L695da4;}}
}
B695ccb:L695ccb:{c.instructions+=2;NFSU2_TR(0x695ccb);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(U+2))-u32(u16(0x3ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B695ccf:{NFSU2_TR(0x695ccf);
if(r1(R+518)){{goto L695cdb;}}
}
B695cd1:L695cd1:{c.instructions+=3;NFSU2_TR(0x695cd1);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(r2(U+4)));
}
B695cd5:{NFSU2_TR(0x695cd5);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B695cd9:{NFSU2_TR(0x695cd9);
{goto L695ce3;}
}
B695cdb:L695cdb:{c.instructions+=2;NFSU2_TR(0x695cdb);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(r2(U+4)));
}
B695cdf:{NFSU2_TR(0x695cdf);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B695ce3:L695ce3:{c.instructions+=2;NFSU2_TR(0x695ce3);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x3ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B695ce6:{NFSU2_TR(0x695ce6);
if(r1(R+518)){{goto L695da4;}}
}
B695cec:L695cec:{c.instructions+=3;NFSU2_TR(0x695cec);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0x1ull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B695cf0:{NFSU2_TR(0x695cf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0x7babd4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B695cf7:{NFSU2_TR(0x695cf7);
if(r1(R+518)){{goto L695d00;}}
}
B695cf9:L695cf9:{c.instructions+=1;NFSU2_TR(0x695cf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0x7babc4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B695d00:L695d00:{c.instructions+=6;NFSU2_TR(0x695d00);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B695d04:{NFSU2_TR(0x695d04);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3ull))));
__builtin_memmove((R+24),(U+0),4);
}
B695d07:{NFSU2_TR(0x695d07);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfffffffcull))));
}
B695d0a:{NFSU2_TR(0x695d0a);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B695d0c:{NFSU2_TR(0x695d0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B695d0f:{NFSU2_TR(0x695d0f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L695d9e;}}
}
B695d15:L695d15:{c.instructions+=13;NFSU2_TR(0x695d15);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B695d18:{NFSU2_TR(0x695d18);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4ull))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B695d1f:{NFSU2_TR(0x695d1f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B695d22:{NFSU2_TR(0x695d22);
__builtin_memmove((R+4),(R+8),4);
}
B695d24:{NFSU2_TR(0x695d24);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B695d27:{NFSU2_TR(0x695d27);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B695d2a:{NFSU2_TR(0x695d2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B695d2d:{NFSU2_TR(0x695d2d);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B695d2f:{NFSU2_TR(0x695d2f);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B695d31:{NFSU2_TR(0x695d31);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B695d34:{NFSU2_TR(0x695d34);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B695d37:{NFSU2_TR(0x695d37);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B695d3a:{NFSU2_TR(0x695d3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B695d3d:L695d3d:{c.instructions+=10;NFSU2_TR(0x695d3d);
__builtin_memmove((R+28),(R+24),4);
}
B695d3f:{NFSU2_TR(0x695d3f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B695d42:{NFSU2_TR(0x695d42);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B695d45:{NFSU2_TR(0x695d45);
__builtin_memmove((R+8),(R+12),4);
}
B695d47:{NFSU2_TR(0x695d47);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B695d4a:{NFSU2_TR(0x695d4a);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B695d4c:{NFSU2_TR(0x695d4c);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B695d4e:{NFSU2_TR(0x695d4e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B695d50:{NFSU2_TR(0x695d50);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B695d53:{NFSU2_TR(0x695d53);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L695d77;}}
}
B695d55:L695d55:{c.instructions+=1;NFSU2_TR(0x695d55);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B695d58:L695d58:{c.instructions+=11;NFSU2_TR(0x695d58);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B695d5b:{NFSU2_TR(0x695d5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B695d5e:{NFSU2_TR(0x695d5e);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x4ull))));
}
B695d61:{NFSU2_TR(0x695d61);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B695d64:{NFSU2_TR(0x695d64);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B695d67:{NFSU2_TR(0x695d67);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x3ull))));
}
B695d6a:{NFSU2_TR(0x695d6a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B695d6d:{NFSU2_TR(0x695d6d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B695d70:{NFSU2_TR(0x695d70);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B695d73:{NFSU2_TR(0x695d73);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+8)),r4(U+0));
}
B695d75:{NFSU2_TR(0x695d75);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x695d58u);}goto L695d58;}}
}
B695d77:L695d77:{c.instructions+=2;NFSU2_TR(0x695d77);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B695d79:{NFSU2_TR(0x695d79);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L695d96;}}
}
B695d7b:L695d7b:{c.instructions+=3;NFSU2_TR(0x695d7b);
__builtin_memmove((R+8),(R+0),4);
}
B695d7d:{NFSU2_TR(0x695d7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B695d80:{NFSU2_TR(0x695d80);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B695d83:L695d83:{c.instructions+=7;NFSU2_TR(0x695d83);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B695d87:{NFSU2_TR(0x695d87);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B695d8a:{NFSU2_TR(0x695d8a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B695d8c:{NFSU2_TR(0x695d8c);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x4ull))));
}
B695d8f:{NFSU2_TR(0x695d8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B695d92:{NFSU2_TR(0x695d92);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+8)),r4(U+0));
}
B695d94:{NFSU2_TR(0x695d94);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x695d83u);}goto L695d83;}}
}
B695d96:L695d96:{c.instructions+=2;NFSU2_TR(0x695d96);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B695d99:{NFSU2_TR(0x695d99);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x695d3du);}goto L695d3d;}}
}
B695d9b:L695d9b:{c.instructions+=1;NFSU2_TR(0x695d9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B695d9e:L695d9e:{c.instructions+=2;NFSU2_TR(0x695d9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B695da1:{NFSU2_TR(0x695da1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B695da4:L695da4:{c.instructions+=5;NFSU2_TR(0x695da4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B695da7:{NFSU2_TR(0x695da7);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B695dab:{NFSU2_TR(0x695dab);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B695daf:{NFSU2_TR(0x695daf);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B695db1:{NFSU2_TR(0x695db1);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L695db5;}}
}
B695db3:L695db3:{c.instructions+=1;NFSU2_TR(0x695db3);
__builtin_memmove((R+0),(R+4),4);
}
B695db5:L695db5:{c.instructions+=8;NFSU2_TR(0x695db5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B695db6:{NFSU2_TR(0x695db6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B695db9:{NFSU2_TR(0x695db9);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B695dbd:{NFSU2_TR(0x695dbd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B695dc0:{NFSU2_TR(0x695dc0);
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
B695dc3:{NFSU2_TR(0x695dc3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B695dc4:{NFSU2_TR(0x695dc4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B695dc7:{NFSU2_TR(0x695dc7);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x695dcaull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B695dca:L695dca:{c.instructions+=2;NFSU2_TR(0x695dca);
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
B695dcc:{NFSU2_TR(0x695dcc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L695dd0;}}
}
B695dce:L695dce:{c.instructions+=1;NFSU2_TR(0x695dce);
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
B695dd0:L695dd0:{c.instructions+=5;NFSU2_TR(0x695dd0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B695dd1:{NFSU2_TR(0x695dd1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B695dd2:{NFSU2_TR(0x695dd2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B695dd3:{NFSU2_TR(0x695dd3);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B695dd4:{NFSU2_TR(0x695dd4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B695dd7:L695dd7:{c.instructions+=17;NFSU2_TR(0x695dd7);
__builtin_memmove((R+28),(R+28),4);
}
B695dd9:{NFSU2_TR(0x695dd9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B695dda:{NFSU2_TR(0x695dda);
__builtin_memmove((R+20),(R+16),4);
}
B695ddc:{NFSU2_TR(0x695ddc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B695ddf:{NFSU2_TR(0x695ddf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B695de0:{NFSU2_TR(0x695de0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B695de1:{NFSU2_TR(0x695de1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B695de2:{NFSU2_TR(0x695de2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B695de5:{NFSU2_TR(0x695de5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B695de8:{NFSU2_TR(0x695de8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B695deb:{NFSU2_TR(0x695deb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B695dee:{NFSU2_TR(0x695dee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B695df1:{NFSU2_TR(0x695df1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B695df4:{NFSU2_TR(0x695df4);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(R+0,u32(r2(U+0)));
}
B695df7:{NFSU2_TR(0x695df7);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B695df9:{NFSU2_TR(0x695df9);
w1(R+512,u8((r4(R+0))<(r4(R+4))));
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B695dfb:{NFSU2_TR(0x695dfb);
if(r1(R+518)){{goto L695f4e;}}
}
B695e01:L695e01:{c.instructions+=2;NFSU2_TR(0x695e01);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B695e02:{NFSU2_TR(0x695e02);
if(r1(R+518)){{goto L695f37;}}
}
B695e08:L695e08:{c.instructions+=2;NFSU2_TR(0x695e08);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B695e09:{NFSU2_TR(0x695e09);
if(r1(R+518)){{goto L695f2a;}}
}
B695e0f:L695e0f:{c.instructions+=2;NFSU2_TR(0x695e0f);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B695e10:{NFSU2_TR(0x695e10);
if(r1(R+518)){{goto L695ea5;}}
}
B695e16:L695e16:{c.instructions+=3;NFSU2_TR(0x695e16);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B695e17:{NFSU2_TR(0x695e17);
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
B695e18:{NFSU2_TR(0x695e18);
if(r1(R+518)){{goto L695e24;}}
}
B695e1a:L695e1a:{c.instructions+=2;NFSU2_TR(0x695e1a);
w4(R+0,u32(0x80004001ull));
}
B695e1f:{NFSU2_TR(0x695e1f);
TAIL_STATIC(0x6960d2u,696);
}
B695e24:L695e24:{c.instructions+=7;NFSU2_TR(0x695e24);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B695e27:{NFSU2_TR(0x695e27);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B695e29:{NFSU2_TR(0x695e29);
u8 U[64];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(r4(U+4)));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x695e29);w8(U+48,u64(u64(r8(U+40))/d_));}
w4(R+0,u32(r8(U+48)));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x695e29);w8(U+56,u64(u64(r8(U+40))%d_));}
w4(R+8,u32(r8(U+56)));
}
B695e2c:{NFSU2_TR(0x695e2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B695e2f:{NFSU2_TR(0x695e2f);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B695e33:{NFSU2_TR(0x695e33);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B695e36:{NFSU2_TR(0x695e36);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L695e3b;}}
}
B695e38:L695e38:{c.instructions+=1;NFSU2_TR(0x695e38);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B695e3b:L695e3b:{c.instructions+=3;NFSU2_TR(0x695e3b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B695e3e:{NFSU2_TR(0x695e3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B695e41:{NFSU2_TR(0x695e41);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6960d0u,696);}
}
B695e47:L695e47:{c.instructions+=1;NFSU2_TR(0x695e47);
{goto L695e4b;}
}
B695e49:L695e49:{c.instructions+=1;NFSU2_TR(0x695e49);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B695e4b:L695e4b:{c.instructions+=3;NFSU2_TR(0x695e4b);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(U+6))<(r2(R+4))));
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+4))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B695e4f:{NFSU2_TR(0x695e4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B695e52:{NFSU2_TR(0x695e52);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L695e95;}}
}
B695e54:L695e54:{c.instructions+=9;NFSU2_TR(0x695e54);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B695e57:{NFSU2_TR(0x695e57);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B695e5a:{NFSU2_TR(0x695e5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B695e5d:{NFSU2_TR(0x695e5d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B695e60:{NFSU2_TR(0x695e60);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B695e63:{NFSU2_TR(0x695e63);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B695e66:{NFSU2_TR(0x695e66);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B695e69:{NFSU2_TR(0x695e69);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B695e6a:{NFSU2_TR(0x695e6a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x695e6full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x695dd7u);}goto L695dd7;}
}
B695e6f:L695e6f:{c.instructions+=2;NFSU2_TR(0x695e6f);
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
B695e71:{NFSU2_TR(0x695e71);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6960d2u,696);}
}
B695e77:L695e77:{c.instructions+=10;NFSU2_TR(0x695e77);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B695e7a:{NFSU2_TR(0x695e7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B695e7d:{NFSU2_TR(0x695e7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B695e80:{NFSU2_TR(0x695e80);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B695e83:{NFSU2_TR(0x695e83);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B695e86:{NFSU2_TR(0x695e86);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B695e89:{NFSU2_TR(0x695e89);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B695e8d:{NFSU2_TR(0x695e8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B695e90:{NFSU2_TR(0x695e90);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B695e93:{NFSU2_TR(0x695e93);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x695e54u);}goto L695e54;}}
}
B695e95:L695e95:{c.instructions+=4;NFSU2_TR(0x695e95);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B695e98:{NFSU2_TR(0x695e98);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B695e9b:{NFSU2_TR(0x695e9b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B695e9e:{NFSU2_TR(0x695e9e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x695e49u);}goto L695e49;}}
}
B695ea0:L695ea0:{c.instructions+=1;NFSU2_TR(0x695ea0);
TAIL_STATIC(0x6960d0u,696);
}
B695ea5:L695ea5:{c.instructions+=11;NFSU2_TR(0x695ea5);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B695ea9:{NFSU2_TR(0x695ea9);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B695ead:{NFSU2_TR(0x695ead);
__builtin_memmove((R+12),(R+4),4);
}
B695eaf:{NFSU2_TR(0x695eaf);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B695eb2:{NFSU2_TR(0x695eb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B695eb5:{NFSU2_TR(0x695eb5);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B695eb7:{NFSU2_TR(0x695eb7);
u8 U[56];
w8(U+0,u64(r4(R+12)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x695eb7);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x695eb7);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B695eb9:{NFSU2_TR(0x695eb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B695ebc:{NFSU2_TR(0x695ebc);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B695ec0:{NFSU2_TR(0x695ec0);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B695ec3:{NFSU2_TR(0x695ec3);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L695ec8;}}
}
B695ec5:L695ec5:{c.instructions+=1;NFSU2_TR(0x695ec5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B695ec8:L695ec8:{c.instructions+=4;NFSU2_TR(0x695ec8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B695ecc:{NFSU2_TR(0x695ecc);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B695ed0:{NFSU2_TR(0x695ed0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B695ed3:{NFSU2_TR(0x695ed3);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L695f22;}}
}
B695ed5:L695ed5:{c.instructions+=4;NFSU2_TR(0x695ed5);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B695ed9:{NFSU2_TR(0x695ed9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B695edd:{NFSU2_TR(0x695edd);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B695edf:{NFSU2_TR(0x695edf);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L695f17;}}
}
B695ee1:L695ee1:{c.instructions+=3;NFSU2_TR(0x695ee1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B695ee3:{NFSU2_TR(0x695ee3);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B695ee5:{NFSU2_TR(0x695ee5);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L695f0b;}}
}
B695ee7:L695ee7:{c.instructions+=13;NFSU2_TR(0x695ee7);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w8(U+8,u64(s64(s32(r4(R+4)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
}
B695eeb:{NFSU2_TR(0x695eeb);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(r2(U+4)));
}
B695eef:{NFSU2_TR(0x695eef);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B695ef1:{NFSU2_TR(0x695ef1);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B695ef4:{NFSU2_TR(0x695ef4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B695ef7:{NFSU2_TR(0x695ef7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B695efa:{NFSU2_TR(0x695efa);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B695efd:{NFSU2_TR(0x695efd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B695eff:{NFSU2_TR(0x695eff);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B695f03:{NFSU2_TR(0x695f03);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B695f06:{NFSU2_TR(0x695f06);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B695f07:{NFSU2_TR(0x695f07);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B695f09:{NFSU2_TR(0x695f09);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x695ee7u);}goto L695ee7;}}
}
B695f0b:L695f0b:{c.instructions+=4;NFSU2_TR(0x695f0b);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B695f0f:{NFSU2_TR(0x695f0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B695f12:{NFSU2_TR(0x695f12);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B695f15:{NFSU2_TR(0x695f15);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x695ee1u);}goto L695ee1;}}
}
B695f17:L695f17:{c.instructions+=4;NFSU2_TR(0x695f17);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B695f1a:{NFSU2_TR(0x695f1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B695f1d:{NFSU2_TR(0x695f1d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B695f20:{NFSU2_TR(0x695f20);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x695ed5u);}goto L695ed5;}}
}
B695f22:L695f22:{c.instructions+=3;NFSU2_TR(0x695f22);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B695f25:{NFSU2_TR(0x695f25);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B695f28:{NFSU2_TR(0x695f28);
{goto L695f5f;}
}
B695f2a:L695f2a:{c.instructions+=4;NFSU2_TR(0x695f2a);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B695f2e:{NFSU2_TR(0x695f2e);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B695f32:{NFSU2_TR(0x695f32);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B695f35:{NFSU2_TR(0x695f35);
{goto L695f3b;}
}
B695f37:L695f37:{c.instructions+=1;NFSU2_TR(0x695f37);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B695f3b:L695f3b:{c.instructions+=7;NFSU2_TR(0x695f3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B695f3e:{NFSU2_TR(0x695f3e);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B695f40:{NFSU2_TR(0x695f40);
u8 U[56];
w8(U+0,u64(r4(R+4)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x695f40);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x695f40);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B695f42:{NFSU2_TR(0x695f42);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B695f45:{NFSU2_TR(0x695f45);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B695f49:{NFSU2_TR(0x695f49);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B695f4c:{NFSU2_TR(0x695f4c);
{goto L695f5a;}
}
B695f4e:L695f4e:{c.instructions+=4;NFSU2_TR(0x695f4e);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B695f52:{NFSU2_TR(0x695f52);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B695f55:{NFSU2_TR(0x695f55);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B695f58:{NFSU2_TR(0x695f58);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B695f5a:L695f5a:{c.instructions+=1;NFSU2_TR(0x695f5a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L695f5f;}}
}
B695f5c:L695f5c:{c.instructions+=1;NFSU2_TR(0x695f5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B695f5f:L695f5f:{c.instructions+=3;NFSU2_TR(0x695f5f);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B695f63:{NFSU2_TR(0x695f63);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0x1ull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B695f67:{NFSU2_TR(0x695f67);
if(r1(R+518)){{goto L695fc0;}}
}
B695f69:L695f69:{c.instructions+=5;NFSU2_TR(0x695f69);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B695f6c:{NFSU2_TR(0x695f6c);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B695f70:{NFSU2_TR(0x695f70);
w4(R+4,u32(r2(R+4)));
}
B695f73:{NFSU2_TR(0x695f73);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B695f74:{NFSU2_TR(0x695f74);
if(r1(R+518)){{goto L695fba;}}
}
B695f76:L695f76:{c.instructions+=2;NFSU2_TR(0x695f76);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B695f77:{NFSU2_TR(0x695f77);
if(r1(R+518)){{goto L695f9e;}}
}
B695f79:L695f79:{c.instructions+=2;NFSU2_TR(0x695f79);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B695f7a:{NFSU2_TR(0x695f7a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L695fba;}}
}
B695f7c:L695f7c:{c.instructions+=2;NFSU2_TR(0x695f7c);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B695f7e:{NFSU2_TR(0x695f7e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L695fba;}}
}
B695f80:L695f80:{c.instructions+=3;NFSU2_TR(0x695f80);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B695f83:{NFSU2_TR(0x695f83);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B695f86:{NFSU2_TR(0x695f86);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B695f88:L695f88:{c.instructions+=2;NFSU2_TR(0x695f88);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B695f8c:{NFSU2_TR(0x695f8c);
if(r1(R+518)){{goto L695f92;}}
}
B695f8e:L695f8e:{c.instructions+=2;NFSU2_TR(0x695f8e);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B695f90:{NFSU2_TR(0x695f90);
{goto L695f94;}
}
B695f92:L695f92:{c.instructions+=1;NFSU2_TR(0x695f92);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B695f94:L695f94:{c.instructions+=4;NFSU2_TR(0x695f94);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B695f96:{NFSU2_TR(0x695f96);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B695f99:{NFSU2_TR(0x695f99);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B695f9a:{NFSU2_TR(0x695f9a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x695f88u);}goto L695f88;}}
}
B695f9c:L695f9c:{c.instructions+=1;NFSU2_TR(0x695f9c);
{goto L695fba;}
}
B695f9e:L695f9e:{c.instructions+=2;NFSU2_TR(0x695f9e);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B695fa0:{NFSU2_TR(0x695fa0);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L695fba;}}
}
B695fa2:L695fa2:{c.instructions+=3;NFSU2_TR(0x695fa2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B695fa5:{NFSU2_TR(0x695fa5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B695fa8:{NFSU2_TR(0x695fa8);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B695faa:L695faa:{c.instructions+=7;NFSU2_TR(0x695faa);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B695fac:{NFSU2_TR(0x695fac);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+12))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B695faf:{NFSU2_TR(0x695faf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+12),(U+0),1);
}
B695fb2:{NFSU2_TR(0x695fb2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+4)),r4(U+0));
}
B695fb4:{NFSU2_TR(0x695fb4);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B695fb7:{NFSU2_TR(0x695fb7);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B695fb8:{NFSU2_TR(0x695fb8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x695faau);}goto L695faa;}}
}
B695fba:L695fba:{c.instructions+=2;NFSU2_TR(0x695fba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B695fbd:{NFSU2_TR(0x695fbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B695fc0:L695fc0:{c.instructions+=3;NFSU2_TR(0x695fc0);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B695fc4:{NFSU2_TR(0x695fc4);
u8 U[2];
w2(U+0,u16(u32(r2(R+4))&u32(r2(R+4))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B695fc7:{NFSU2_TR(0x695fc7);
if(r1(R+518)){TAIL_STATIC(0x6960a6u,696);}
}
B695fcd:L695fcd:{c.instructions+=2;NFSU2_TR(0x695fcd);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(U+2))-u32(u16(0x3ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B695fd1:{NFSU2_TR(0x695fd1);
if(r1(R+518)){{goto L695fdd;}}
}
B695fd3:L695fd3:{c.instructions+=3;NFSU2_TR(0x695fd3);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(r2(U+4)));
}
B695fd7:{NFSU2_TR(0x695fd7);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B695fdb:{NFSU2_TR(0x695fdb);
{goto L695fe5;}
}
B695fdd:L695fdd:{c.instructions+=2;NFSU2_TR(0x695fdd);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(r2(U+4)));
}
B695fe1:{NFSU2_TR(0x695fe1);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B695fe5:L695fe5:{c.instructions+=2;NFSU2_TR(0x695fe5);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x3ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B695fe8:{NFSU2_TR(0x695fe8);
if(r1(R+518)){TAIL_STATIC(0x6960a6u,696);}
}
B695fee:L695fee:{c.instructions+=3;NFSU2_TR(0x695fee);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0x1ull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B695ff2:{NFSU2_TR(0x695ff2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0x7babd4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B695ff9:{NFSU2_TR(0x695ff9);
if(r1(R+518)){TAIL_STATIC(0x696002u,696);}
}
B695ffb:L695ffb:{c.instructions+=1;NFSU2_TR(0x695ffb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0x7babc4ull));
s4(u32(r4(U+0)),r4(U+4));
TAIL_STATIC(0x696002u,696);
}
XIT:NFSU2_TR_EXIT(0x695,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
