#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_63c(u8* __restrict R,Cpu& c);
u32 body_640(u8* __restrict R,Cpu& c);
u32 body_642(u8* __restrict R,Cpu& c);
u32 body_670(u8* __restrict R,Cpu& c);
u32 body_671(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x641,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x641,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_641(u8* __restrict R,Cpu& c);
u32 page_641(Cpu& c){return body_641(c.regs.data(),c);}
__attribute__((noinline)) u32 body_641(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x641005:goto L641005;
case 0x641007:c.instructions+=4;goto B641007;
case 0x641009:c.instructions+=3;goto B641009;
case 0x64100c:c.instructions+=2;goto B64100c;
case 0x64100f:c.instructions+=1;goto B64100f;
case 0x641015:goto L641015;
case 0x64101b:goto L64101b;
case 0x64101e:c.instructions+=3;goto B64101e;
case 0x641021:c.instructions+=2;goto B641021;
case 0x641023:c.instructions+=1;goto B641023;
case 0x641025:goto L641025;
case 0x641027:c.instructions+=1;goto B641027;
case 0x641029:goto L641029;
case 0x64102b:c.instructions+=1;goto B64102b;
case 0x641031:goto L641031;
case 0x641033:c.instructions+=1;goto B641033;
case 0x641039:goto L641039;
case 0x64103b:c.instructions+=2;goto B64103b;
case 0x64103e:c.instructions+=1;goto B64103e;
case 0x641041:goto L641041;
case 0x641042:c.instructions+=5;goto B641042;
case 0x641045:c.instructions+=4;goto B641045;
case 0x641048:c.instructions+=3;goto B641048;
case 0x64104b:c.instructions+=2;goto B64104b;
case 0x64104c:c.instructions+=1;goto B64104c;
case 0x641051:goto L641051;
case 0x641053:goto L641053;
case 0x641055:c.instructions+=3;goto B641055;
case 0x641058:c.instructions+=2;goto B641058;
case 0x64105b:c.instructions+=1;goto B64105b;
case 0x64105d:goto L64105d;
case 0x64105f:c.instructions+=8;goto B64105f;
case 0x641062:c.instructions+=7;goto B641062;
case 0x641065:c.instructions+=6;goto B641065;
case 0x641066:c.instructions+=5;goto B641066;
case 0x641069:c.instructions+=4;goto B641069;
case 0x64106c:c.instructions+=3;goto B64106c;
case 0x64106f:c.instructions+=2;goto B64106f;
case 0x641070:c.instructions+=1;goto B641070;
case 0x641075:goto L641075;
case 0x641078:c.instructions+=21;goto B641078;
case 0x641079:c.instructions+=20;goto B641079;
case 0x64107c:c.instructions+=19;goto B64107c;
case 0x64107f:c.instructions+=18;goto B64107f;
case 0x641082:c.instructions+=17;goto B641082;
case 0x641085:c.instructions+=16;goto B641085;
case 0x641088:c.instructions+=15;goto B641088;
case 0x64108b:c.instructions+=14;goto B64108b;
case 0x64108e:c.instructions+=13;goto B64108e;
case 0x641091:c.instructions+=12;goto B641091;
case 0x641094:c.instructions+=11;goto B641094;
case 0x641097:c.instructions+=10;goto B641097;
case 0x64109a:c.instructions+=9;goto B64109a;
case 0x64109d:c.instructions+=8;goto B64109d;
case 0x6410a0:c.instructions+=7;goto B6410a0;
case 0x6410a3:c.instructions+=6;goto B6410a3;
case 0x6410a6:c.instructions+=5;goto B6410a6;
case 0x6410a8:c.instructions+=4;goto B6410a8;
case 0x6410aa:c.instructions+=3;goto B6410aa;
case 0x6410ad:c.instructions+=2;goto B6410ad;
case 0x6410b0:c.instructions+=1;goto B6410b0;
case 0x6410b6:goto L6410b6;
case 0x6410b9:c.instructions+=7;goto B6410b9;
case 0x6410bc:c.instructions+=6;goto B6410bc;
case 0x6410bf:c.instructions+=5;goto B6410bf;
case 0x6410c1:c.instructions+=4;goto B6410c1;
case 0x6410c7:c.instructions+=3;goto B6410c7;
case 0x6410c9:c.instructions+=2;goto B6410c9;
case 0x6410cc:c.instructions+=1;goto B6410cc;
case 0x6410d2:goto L6410d2;
case 0x6410d6:c.instructions+=1;goto B6410d6;
case 0x6410d8:goto L6410d8;
case 0x6410db:c.instructions+=5;goto B6410db;
case 0x6410de:c.instructions+=4;goto B6410de;
case 0x6410e1:c.instructions+=3;goto B6410e1;
case 0x6410e3:c.instructions+=2;goto B6410e3;
case 0x6410e6:c.instructions+=1;goto B6410e6;
case 0x6410e9:goto L6410e9;
case 0x6410eb:goto L6410eb;
case 0x6410ed:c.instructions+=2;goto B6410ed;
case 0x6410f0:c.instructions+=1;goto B6410f0;
case 0x6410f3:goto L6410f3;
case 0x6410f5:goto L6410f5;
case 0x6410f8:c.instructions+=2;goto B6410f8;
case 0x6410fa:c.instructions+=1;goto B6410fa;
case 0x6410fc:goto L6410fc;
case 0x6410ff:c.instructions+=4;goto B6410ff;
case 0x641102:c.instructions+=3;goto B641102;
case 0x641108:c.instructions+=2;goto B641108;
case 0x64110a:c.instructions+=1;goto B64110a;
case 0x64110d:goto L64110d;
case 0x64110f:c.instructions+=11;goto B64110f;
case 0x641112:c.instructions+=10;goto B641112;
case 0x641114:c.instructions+=9;goto B641114;
case 0x641115:c.instructions+=8;goto B641115;
case 0x641116:c.instructions+=7;goto B641116;
case 0x641117:c.instructions+=6;goto B641117;
case 0x641119:c.instructions+=5;goto B641119;
case 0x64111c:c.instructions+=4;goto B64111c;
case 0x64111f:c.instructions+=3;goto B64111f;
case 0x641122:c.instructions+=2;goto B641122;
case 0x641125:c.instructions+=1;goto B641125;
case 0x641127:goto L641127;
case 0x64112b:c.instructions+=4;goto B64112b;
case 0x64112e:c.instructions+=3;goto B64112e;
case 0x641131:c.instructions+=2;goto B641131;
case 0x641134:c.instructions+=1;goto B641134;
case 0x64113a:goto L64113a;
case 0x64113b:c.instructions+=4;goto B64113b;
case 0x64113c:c.instructions+=3;goto B64113c;
case 0x64113d:c.instructions+=2;goto B64113d;
case 0x64113e:c.instructions+=1;goto B64113e;
case 0x641141:goto L641141;
case 0x641143:c.instructions+=66;goto B641143;
case 0x641144:c.instructions+=65;goto B641144;
case 0x641146:c.instructions+=64;goto B641146;
case 0x641149:c.instructions+=63;goto B641149;
case 0x64114c:c.instructions+=62;goto B64114c;
case 0x64114f:c.instructions+=61;goto B64114f;
case 0x641150:c.instructions+=60;goto B641150;
case 0x641153:c.instructions+=59;goto B641153;
case 0x641154:c.instructions+=58;goto B641154;
case 0x641157:c.instructions+=57;goto B641157;
case 0x641159:c.instructions+=56;goto B641159;
case 0x64115a:c.instructions+=55;goto B64115a;
case 0x64115b:c.instructions+=54;goto B64115b;
case 0x64115c:c.instructions+=53;goto B64115c;
case 0x64115e:c.instructions+=52;goto B64115e;
case 0x641160:c.instructions+=51;goto B641160;
case 0x641161:c.instructions+=50;goto B641161;
case 0x641162:c.instructions+=49;goto B641162;
case 0x641164:c.instructions+=48;goto B641164;
case 0x641167:c.instructions+=47;goto B641167;
case 0x64116a:c.instructions+=46;goto B64116a;
case 0x64116d:c.instructions+=45;goto B64116d;
case 0x641170:c.instructions+=44;goto B641170;
case 0x641173:c.instructions+=43;goto B641173;
case 0x641176:c.instructions+=42;goto B641176;
case 0x641178:c.instructions+=41;goto B641178;
case 0x64117b:c.instructions+=40;goto B64117b;
case 0x64117d:c.instructions+=39;goto B64117d;
case 0x64117f:c.instructions+=38;goto B64117f;
case 0x641181:c.instructions+=37;goto B641181;
case 0x641184:c.instructions+=36;goto B641184;
case 0x641187:c.instructions+=35;goto B641187;
case 0x641189:c.instructions+=34;goto B641189;
case 0x64118b:c.instructions+=33;goto B64118b;
case 0x64118d:c.instructions+=32;goto B64118d;
case 0x641190:c.instructions+=31;goto B641190;
case 0x641192:c.instructions+=30;goto B641192;
case 0x641195:c.instructions+=29;goto B641195;
case 0x641198:c.instructions+=28;goto B641198;
case 0x64119b:c.instructions+=27;goto B64119b;
case 0x64119d:c.instructions+=26;goto B64119d;
case 0x64119f:c.instructions+=25;goto B64119f;
case 0x6411a2:c.instructions+=24;goto B6411a2;
case 0x6411a4:c.instructions+=23;goto B6411a4;
case 0x6411a6:c.instructions+=22;goto B6411a6;
case 0x6411a8:c.instructions+=21;goto B6411a8;
case 0x6411ab:c.instructions+=20;goto B6411ab;
case 0x6411ae:c.instructions+=19;goto B6411ae;
case 0x6411b0:c.instructions+=18;goto B6411b0;
case 0x6411b3:c.instructions+=17;goto B6411b3;
case 0x6411b6:c.instructions+=16;goto B6411b6;
case 0x6411b9:c.instructions+=15;goto B6411b9;
case 0x6411bc:c.instructions+=14;goto B6411bc;
case 0x6411bf:c.instructions+=13;goto B6411bf;
case 0x6411c2:c.instructions+=12;goto B6411c2;
case 0x6411c5:c.instructions+=11;goto B6411c5;
case 0x6411c7:c.instructions+=10;goto B6411c7;
case 0x6411c9:c.instructions+=9;goto B6411c9;
case 0x6411cb:c.instructions+=8;goto B6411cb;
case 0x6411ce:c.instructions+=7;goto B6411ce;
case 0x6411d1:c.instructions+=6;goto B6411d1;
case 0x6411d3:c.instructions+=5;goto B6411d3;
case 0x6411d6:c.instructions+=4;goto B6411d6;
case 0x6411d9:c.instructions+=3;goto B6411d9;
case 0x6411dc:c.instructions+=2;goto B6411dc;
case 0x6411dd:c.instructions+=1;goto B6411dd;
case 0x6411e0:goto L6411e0;
case 0x6411e2:c.instructions+=34;goto B6411e2;
case 0x6411e3:c.instructions+=33;goto B6411e3;
case 0x6411e5:c.instructions+=32;goto B6411e5;
case 0x6411eb:c.instructions+=31;goto B6411eb;
case 0x6411ec:c.instructions+=30;goto B6411ec;
case 0x6411f2:c.instructions+=29;goto B6411f2;
case 0x6411f3:c.instructions+=28;goto B6411f3;
case 0x6411f6:c.instructions+=27;goto B6411f6;
case 0x6411f9:c.instructions+=26;goto B6411f9;
case 0x6411fa:c.instructions+=25;goto B6411fa;
case 0x6411fd:c.instructions+=24;goto B6411fd;
case 0x6411fe:c.instructions+=23;goto B6411fe;
case 0x6411ff:c.instructions+=22;goto B6411ff;
case 0x641200:c.instructions+=21;goto B641200;
case 0x641202:c.instructions+=20;goto B641202;
case 0x641205:c.instructions+=19;goto B641205;
case 0x641206:c.instructions+=18;goto B641206;
case 0x641207:c.instructions+=17;goto B641207;
case 0x641208:c.instructions+=16;goto B641208;
case 0x64120b:c.instructions+=15;goto B64120b;
case 0x64120e:c.instructions+=14;goto B64120e;
case 0x64120f:c.instructions+=13;goto B64120f;
case 0x641210:c.instructions+=12;goto B641210;
case 0x641213:c.instructions+=11;goto B641213;
case 0x641214:c.instructions+=10;goto B641214;
case 0x641215:c.instructions+=9;goto B641215;
case 0x641216:c.instructions+=8;goto B641216;
case 0x641219:c.instructions+=7;goto B641219;
case 0x64121c:c.instructions+=6;goto B64121c;
case 0x64121d:c.instructions+=5;goto B64121d;
case 0x641220:c.instructions+=4;goto B641220;
case 0x641221:c.instructions+=3;goto B641221;
case 0x641224:c.instructions+=2;goto B641224;
case 0x641225:c.instructions+=1;goto B641225;
case 0x64122a:goto L64122a;
case 0x64122d:c.instructions+=10;goto B64122d;
case 0x641233:c.instructions+=9;goto B641233;
case 0x641234:c.instructions+=8;goto B641234;
case 0x641235:c.instructions+=7;goto B641235;
case 0x641238:c.instructions+=6;goto B641238;
case 0x64123b:c.instructions+=5;goto B64123b;
case 0x64123c:c.instructions+=4;goto B64123c;
case 0x64123d:c.instructions+=3;goto B64123d;
case 0x641240:c.instructions+=2;goto B641240;
case 0x641241:c.instructions+=1;goto B641241;
case 0x641246:goto L641246;
case 0x64124c:c.instructions+=11;goto B64124c;
case 0x64124f:c.instructions+=10;goto B64124f;
case 0x641250:c.instructions+=9;goto B641250;
case 0x641251:c.instructions+=8;goto B641251;
case 0x641254:c.instructions+=7;goto B641254;
case 0x641257:c.instructions+=6;goto B641257;
case 0x641258:c.instructions+=5;goto B641258;
case 0x64125b:c.instructions+=4;goto B64125b;
case 0x64125c:c.instructions+=3;goto B64125c;
case 0x64125f:c.instructions+=2;goto B64125f;
case 0x641260:c.instructions+=1;goto B641260;
case 0x641265:goto L641265;
case 0x64126b:c.instructions+=11;goto B64126b;
case 0x64126e:c.instructions+=10;goto B64126e;
case 0x64126f:c.instructions+=9;goto B64126f;
case 0x641270:c.instructions+=8;goto B641270;
case 0x641273:c.instructions+=7;goto B641273;
case 0x641276:c.instructions+=6;goto B641276;
case 0x641277:c.instructions+=5;goto B641277;
case 0x64127a:c.instructions+=4;goto B64127a;
case 0x64127b:c.instructions+=3;goto B64127b;
case 0x64127e:c.instructions+=2;goto B64127e;
case 0x64127f:c.instructions+=1;goto B64127f;
case 0x641284:goto L641284;
case 0x64128a:c.instructions+=10;goto B64128a;
case 0x64128d:c.instructions+=9;goto B64128d;
case 0x64128e:c.instructions+=8;goto B64128e;
case 0x64128f:c.instructions+=7;goto B64128f;
case 0x641292:c.instructions+=6;goto B641292;
case 0x641293:c.instructions+=5;goto B641293;
case 0x641296:c.instructions+=4;goto B641296;
case 0x641297:c.instructions+=3;goto B641297;
case 0x64129a:c.instructions+=2;goto B64129a;
case 0x64129b:c.instructions+=1;goto B64129b;
case 0x6412a0:goto L6412a0;
case 0x6412a6:c.instructions+=10;goto B6412a6;
case 0x6412a9:c.instructions+=9;goto B6412a9;
case 0x6412aa:c.instructions+=8;goto B6412aa;
case 0x6412ab:c.instructions+=7;goto B6412ab;
case 0x6412ae:c.instructions+=6;goto B6412ae;
case 0x6412af:c.instructions+=5;goto B6412af;
case 0x6412b2:c.instructions+=4;goto B6412b2;
case 0x6412b3:c.instructions+=3;goto B6412b3;
case 0x6412b6:c.instructions+=2;goto B6412b6;
case 0x6412b7:c.instructions+=1;goto B6412b7;
case 0x6412bc:goto L6412bc;
case 0x6412bf:c.instructions+=100;goto B6412bf;
case 0x6412c2:c.instructions+=99;goto B6412c2;
case 0x6412c3:c.instructions+=98;goto B6412c3;
case 0x6412c4:c.instructions+=97;goto B6412c4;
case 0x6412c5:c.instructions+=96;goto B6412c5;
case 0x6412c8:c.instructions+=95;goto B6412c8;
case 0x6412cb:c.instructions+=94;goto B6412cb;
case 0x6412ce:c.instructions+=93;goto B6412ce;
case 0x6412d1:c.instructions+=92;goto B6412d1;
case 0x6412d4:c.instructions+=91;goto B6412d4;
case 0x6412d7:c.instructions+=90;goto B6412d7;
case 0x6412da:c.instructions+=89;goto B6412da;
case 0x6412dd:c.instructions+=88;goto B6412dd;
case 0x6412df:c.instructions+=87;goto B6412df;
case 0x6412e2:c.instructions+=86;goto B6412e2;
case 0x6412e5:c.instructions+=85;goto B6412e5;
case 0x6412e7:c.instructions+=84;goto B6412e7;
case 0x6412e9:c.instructions+=83;goto B6412e9;
case 0x6412eb:c.instructions+=82;goto B6412eb;
case 0x6412ee:c.instructions+=81;goto B6412ee;
case 0x6412f1:c.instructions+=80;goto B6412f1;
case 0x6412f4:c.instructions+=79;goto B6412f4;
case 0x6412f7:c.instructions+=78;goto B6412f7;
case 0x6412fa:c.instructions+=77;goto B6412fa;
case 0x6412fd:c.instructions+=76;goto B6412fd;
case 0x6412ff:c.instructions+=75;goto B6412ff;
case 0x641302:c.instructions+=74;goto B641302;
case 0x641305:c.instructions+=73;goto B641305;
case 0x641307:c.instructions+=72;goto B641307;
case 0x641309:c.instructions+=71;goto B641309;
case 0x64130b:c.instructions+=70;goto B64130b;
case 0x64130e:c.instructions+=69;goto B64130e;
case 0x641311:c.instructions+=68;goto B641311;
case 0x641314:c.instructions+=67;goto B641314;
case 0x641317:c.instructions+=66;goto B641317;
case 0x64131a:c.instructions+=65;goto B64131a;
case 0x64131d:c.instructions+=64;goto B64131d;
case 0x64131f:c.instructions+=63;goto B64131f;
case 0x641322:c.instructions+=62;goto B641322;
case 0x641325:c.instructions+=61;goto B641325;
case 0x641327:c.instructions+=60;goto B641327;
case 0x64132a:c.instructions+=59;goto B64132a;
case 0x64132c:c.instructions+=58;goto B64132c;
case 0x64132e:c.instructions+=57;goto B64132e;
case 0x641331:c.instructions+=56;goto B641331;
case 0x641334:c.instructions+=55;goto B641334;
case 0x641337:c.instructions+=54;goto B641337;
case 0x64133a:c.instructions+=53;goto B64133a;
case 0x64133d:c.instructions+=52;goto B64133d;
case 0x641343:c.instructions+=51;goto B641343;
case 0x641346:c.instructions+=50;goto B641346;
case 0x641348:c.instructions+=49;goto B641348;
case 0x64134b:c.instructions+=48;goto B64134b;
case 0x64134e:c.instructions+=47;goto B64134e;
case 0x641350:c.instructions+=46;goto B641350;
case 0x641353:c.instructions+=45;goto B641353;
case 0x641355:c.instructions+=44;goto B641355;
case 0x641357:c.instructions+=43;goto B641357;
case 0x641359:c.instructions+=42;goto B641359;
case 0x64135b:c.instructions+=41;goto B64135b;
case 0x64135e:c.instructions+=40;goto B64135e;
case 0x641361:c.instructions+=39;goto B641361;
case 0x641364:c.instructions+=38;goto B641364;
case 0x641367:c.instructions+=37;goto B641367;
case 0x64136a:c.instructions+=36;goto B64136a;
case 0x64136d:c.instructions+=35;goto B64136d;
case 0x641370:c.instructions+=34;goto B641370;
case 0x641373:c.instructions+=33;goto B641373;
case 0x641375:c.instructions+=32;goto B641375;
case 0x64137b:c.instructions+=31;goto B64137b;
case 0x64137e:c.instructions+=30;goto B64137e;
case 0x641380:c.instructions+=29;goto B641380;
case 0x641382:c.instructions+=28;goto B641382;
case 0x641384:c.instructions+=27;goto B641384;
case 0x641387:c.instructions+=26;goto B641387;
case 0x641389:c.instructions+=25;goto B641389;
case 0x64138c:c.instructions+=24;goto B64138c;
case 0x64138f:c.instructions+=23;goto B64138f;
case 0x641392:c.instructions+=22;goto B641392;
case 0x641398:c.instructions+=21;goto B641398;
case 0x64139e:c.instructions+=20;goto B64139e;
case 0x6413a4:c.instructions+=19;goto B6413a4;
case 0x6413a6:c.instructions+=18;goto B6413a6;
case 0x6413a8:c.instructions+=17;goto B6413a8;
case 0x6413aa:c.instructions+=16;goto B6413aa;
case 0x6413ad:c.instructions+=15;goto B6413ad;
case 0x6413b3:c.instructions+=14;goto B6413b3;
case 0x6413b5:c.instructions+=13;goto B6413b5;
case 0x6413b8:c.instructions+=12;goto B6413b8;
case 0x6413bb:c.instructions+=11;goto B6413bb;
case 0x6413bd:c.instructions+=10;goto B6413bd;
case 0x6413c0:c.instructions+=9;goto B6413c0;
case 0x6413c2:c.instructions+=8;goto B6413c2;
case 0x6413c4:c.instructions+=7;goto B6413c4;
case 0x6413c6:c.instructions+=6;goto B6413c6;
case 0x6413c9:c.instructions+=5;goto B6413c9;
case 0x6413cc:c.instructions+=4;goto B6413cc;
case 0x6413cf:c.instructions+=3;goto B6413cf;
case 0x6413d2:c.instructions+=2;goto B6413d2;
case 0x6413d5:c.instructions+=1;goto B6413d5;
case 0x6413db:goto L6413db;
case 0x6413e1:goto L6413e1;
case 0x6413e4:c.instructions+=55;goto B6413e4;
case 0x6413e7:c.instructions+=54;goto B6413e7;
case 0x6413ea:c.instructions+=53;goto B6413ea;
case 0x6413ec:c.instructions+=52;goto B6413ec;
case 0x6413f0:c.instructions+=51;goto B6413f0;
case 0x6413f3:c.instructions+=50;goto B6413f3;
case 0x6413f5:c.instructions+=49;goto B6413f5;
case 0x6413f7:c.instructions+=48;goto B6413f7;
case 0x6413f9:c.instructions+=47;goto B6413f9;
case 0x6413fb:c.instructions+=46;goto B6413fb;
case 0x6413fd:c.instructions+=45;goto B6413fd;
case 0x6413ff:c.instructions+=44;goto B6413ff;
case 0x641401:c.instructions+=43;goto B641401;
case 0x641407:c.instructions+=42;goto B641407;
case 0x641409:c.instructions+=41;goto B641409;
case 0x64140b:c.instructions+=40;goto B64140b;
case 0x64140e:c.instructions+=39;goto B64140e;
case 0x641410:c.instructions+=38;goto B641410;
case 0x641412:c.instructions+=37;goto B641412;
case 0x641418:c.instructions+=36;goto B641418;
case 0x64141a:c.instructions+=35;goto B64141a;
case 0x64141c:c.instructions+=34;goto B64141c;
case 0x641422:c.instructions+=33;goto B641422;
case 0x641424:c.instructions+=32;goto B641424;
case 0x641426:c.instructions+=31;goto B641426;
case 0x641428:c.instructions+=30;goto B641428;
case 0x64142a:c.instructions+=29;goto B64142a;
case 0x64142c:c.instructions+=28;goto B64142c;
case 0x641432:c.instructions+=27;goto B641432;
case 0x641435:c.instructions+=26;goto B641435;
case 0x641437:c.instructions+=25;goto B641437;
case 0x64143d:c.instructions+=24;goto B64143d;
case 0x641443:c.instructions+=23;goto B641443;
case 0x641445:c.instructions+=22;goto B641445;
case 0x641447:c.instructions+=21;goto B641447;
case 0x641449:c.instructions+=20;goto B641449;
case 0x64144b:c.instructions+=19;goto B64144b;
case 0x641451:c.instructions+=18;goto B641451;
case 0x641453:c.instructions+=17;goto B641453;
case 0x641455:c.instructions+=16;goto B641455;
case 0x64145b:c.instructions+=15;goto B64145b;
case 0x64145d:c.instructions+=14;goto B64145d;
case 0x64145f:c.instructions+=13;goto B64145f;
case 0x641465:c.instructions+=12;goto B641465;
case 0x641467:c.instructions+=11;goto B641467;
case 0x641469:c.instructions+=10;goto B641469;
case 0x64146b:c.instructions+=9;goto B64146b;
case 0x64146d:c.instructions+=8;goto B64146d;
case 0x641473:c.instructions+=7;goto B641473;
case 0x641475:c.instructions+=6;goto B641475;
case 0x641477:c.instructions+=5;goto B641477;
case 0x641479:c.instructions+=4;goto B641479;
case 0x64147f:c.instructions+=3;goto B64147f;
case 0x641481:c.instructions+=2;goto B641481;
case 0x641483:c.instructions+=1;goto B641483;
case 0x641485:goto L641485;
case 0x641488:c.instructions+=13;goto B641488;
case 0x64148f:c.instructions+=12;goto B64148f;
case 0x641491:c.instructions+=11;goto B641491;
case 0x641492:c.instructions+=10;goto B641492;
case 0x641494:c.instructions+=9;goto B641494;
case 0x641496:c.instructions+=8;goto B641496;
case 0x641498:c.instructions+=7;goto B641498;
case 0x64149b:c.instructions+=6;goto B64149b;
case 0x64149e:c.instructions+=5;goto B64149e;
case 0x6414a0:c.instructions+=4;goto B6414a0;
case 0x6414a3:c.instructions+=3;goto B6414a3;
case 0x6414a5:c.instructions+=2;goto B6414a5;
case 0x6414a7:c.instructions+=1;goto B6414a7;
case 0x6414a9:goto L6414a9;
case 0x6414ac:c.instructions+=5;goto B6414ac;
case 0x6414b2:c.instructions+=4;goto B6414b2;
case 0x6414b5:c.instructions+=3;goto B6414b5;
case 0x6414bb:c.instructions+=2;goto B6414bb;
case 0x6414c1:c.instructions+=1;goto B6414c1;
case 0x6414c3:goto L6414c3;
case 0x6414c6:c.instructions+=7;goto B6414c6;
case 0x6414c9:c.instructions+=6;goto B6414c9;
case 0x6414cf:c.instructions+=5;goto B6414cf;
case 0x6414d1:c.instructions+=4;goto B6414d1;
case 0x6414d3:c.instructions+=3;goto B6414d3;
case 0x6414d5:c.instructions+=2;goto B6414d5;
case 0x6414d8:c.instructions+=1;goto B6414d8;
case 0x6414db:goto L6414db;
case 0x6414dd:c.instructions+=11;goto B6414dd;
case 0x6414e0:c.instructions+=10;goto B6414e0;
case 0x6414e2:c.instructions+=9;goto B6414e2;
case 0x6414e5:c.instructions+=8;goto B6414e5;
case 0x6414e7:c.instructions+=7;goto B6414e7;
case 0x6414e9:c.instructions+=6;goto B6414e9;
case 0x6414eb:c.instructions+=5;goto B6414eb;
case 0x6414ed:c.instructions+=4;goto B6414ed;
case 0x6414f0:c.instructions+=3;goto B6414f0;
case 0x6414f3:c.instructions+=2;goto B6414f3;
case 0x6414f4:c.instructions+=1;goto B6414f4;
case 0x6414f6:goto L6414f6;
case 0x6414f9:goto L6414f9;
case 0x6414fc:c.instructions+=11;goto B6414fc;
case 0x6414fe:c.instructions+=10;goto B6414fe;
case 0x641500:c.instructions+=9;goto B641500;
case 0x641502:c.instructions+=8;goto B641502;
case 0x641505:c.instructions+=7;goto B641505;
case 0x641507:c.instructions+=6;goto B641507;
case 0x64150a:c.instructions+=5;goto B64150a;
case 0x64150c:c.instructions+=4;goto B64150c;
case 0x64150f:c.instructions+=3;goto B64150f;
case 0x641511:c.instructions+=2;goto B641511;
case 0x641514:c.instructions+=1;goto B641514;
case 0x64151a:goto L64151a;
case 0x64151c:goto L64151c;
case 0x64151e:c.instructions+=3;goto B64151e;
case 0x641521:c.instructions+=2;goto B641521;
case 0x641522:c.instructions+=1;goto B641522;
case 0x641525:goto L641525;
case 0x641527:goto L641527;
case 0x64152a:c.instructions+=1;goto B64152a;
case 0x641530:goto L641530;
case 0x641532:goto L641532;
case 0x641533:c.instructions+=4;goto B641533;
case 0x641534:c.instructions+=3;goto B641534;
case 0x641535:c.instructions+=2;goto B641535;
case 0x641536:c.instructions+=1;goto B641536;
case 0x641539:goto L641539;
case 0x64153b:c.instructions+=9;goto B64153b;
case 0x64153c:c.instructions+=8;goto B64153c;
case 0x64153e:c.instructions+=7;goto B64153e;
case 0x64153f:c.instructions+=6;goto B64153f;
case 0x641543:c.instructions+=5;goto B641543;
case 0x641546:c.instructions+=4;goto B641546;
case 0x641547:c.instructions+=3;goto B641547;
case 0x64154c:c.instructions+=2;goto B64154c;
case 0x641551:c.instructions+=1;goto B641551;
case 0x641557:goto L641557;
case 0x641559:c.instructions+=1;goto B641559;
case 0x64155b:goto L64155b;
case 0x64155c:c.instructions+=9;goto B64155c;
case 0x64155f:c.instructions+=8;goto B64155f;
case 0x641560:c.instructions+=7;goto B641560;
case 0x641563:c.instructions+=6;goto B641563;
case 0x641566:c.instructions+=5;goto B641566;
case 0x641567:c.instructions+=4;goto B641567;
case 0x641569:c.instructions+=3;goto B641569;
case 0x64156c:c.instructions+=2;goto B64156c;
case 0x64156f:c.instructions+=1;goto B64156f;
case 0x641575:goto L641575;
case 0x641578:c.instructions+=2;goto B641578;
case 0x64157a:c.instructions+=1;goto B64157a;
case 0x641580:goto L641580;
case 0x641582:c.instructions+=2;goto B641582;
case 0x641583:c.instructions+=1;goto B641583;
case 0x641585:goto L641585;
case 0x641588:c.instructions+=2;goto B641588;
case 0x64158b:c.instructions+=1;goto B64158b;
case 0x64158d:goto L64158d;
case 0x64158f:c.instructions+=2;goto B64158f;
case 0x641590:c.instructions+=1;goto B641590;
case 0x641592:goto L641592;
case 0x641594:goto L641594;
case 0x641595:c.instructions+=1;goto B641595;
case 0x641598:goto L641598;
case 0x64159a:c.instructions+=20;goto B64159a;
case 0x64159b:c.instructions+=19;goto B64159b;
case 0x64159d:c.instructions+=18;goto B64159d;
case 0x64159e:c.instructions+=17;goto B64159e;
case 0x64159f:c.instructions+=16;goto B64159f;
case 0x6415a0:c.instructions+=15;goto B6415a0;
case 0x6415a1:c.instructions+=14;goto B6415a1;
case 0x6415a3:c.instructions+=13;goto B6415a3;
case 0x6415a4:c.instructions+=12;goto B6415a4;
case 0x6415a9:c.instructions+=11;goto B6415a9;
case 0x6415ab:c.instructions+=10;goto B6415ab;
case 0x6415b1:c.instructions+=9;goto B6415b1;
case 0x6415b2:c.instructions+=8;goto B6415b2;
case 0x6415b5:c.instructions+=7;goto B6415b5;
case 0x6415b8:c.instructions+=6;goto B6415b8;
case 0x6415bb:c.instructions+=5;goto B6415bb;
case 0x6415bc:c.instructions+=4;goto B6415bc;
case 0x6415bd:c.instructions+=3;goto B6415bd;
case 0x6415be:c.instructions+=2;goto B6415be;
case 0x6415bf:c.instructions+=1;goto B6415bf;
case 0x6415c0:goto L6415c0;
case 0x6415c2:c.instructions+=9;goto B6415c2;
case 0x6415c3:c.instructions+=8;goto B6415c3;
case 0x6415c5:c.instructions+=7;goto B6415c5;
case 0x6415c8:c.instructions+=6;goto B6415c8;
case 0x6415c9:c.instructions+=5;goto B6415c9;
case 0x6415cc:c.instructions+=4;goto B6415cc;
case 0x6415cd:c.instructions+=3;goto B6415cd;
case 0x6415d2:c.instructions+=2;goto B6415d2;
case 0x6415d7:c.instructions+=1;goto B6415d7;
case 0x6415dd:goto L6415dd;
case 0x6415df:c.instructions+=2;goto B6415df;
case 0x6415e1:c.instructions+=1;goto B6415e1;
case 0x6415e3:goto L6415e3;
case 0x6415e6:c.instructions+=10;goto B6415e6;
case 0x6415e7:c.instructions+=9;goto B6415e7;
case 0x6415ea:c.instructions+=8;goto B6415ea;
case 0x6415eb:c.instructions+=7;goto B6415eb;
case 0x6415ee:c.instructions+=6;goto B6415ee;
case 0x6415ef:c.instructions+=5;goto B6415ef;
case 0x6415f0:c.instructions+=4;goto B6415f0;
case 0x6415f5:c.instructions+=3;goto B6415f5;
case 0x6415f8:c.instructions+=2;goto B6415f8;
case 0x6415ff:c.instructions+=1;goto B6415ff;
case 0x641605:goto L641605;
case 0x641607:c.instructions+=1;goto B641607;
case 0x641609:goto L641609;
case 0x64160d:c.instructions+=1;goto B64160d;
case 0x64160f:goto L64160f;
case 0x641612:c.instructions+=1;goto B641612;
case 0x641614:goto L641614;
case 0x641617:c.instructions+=1;goto B641617;
case 0x64161d:goto L64161d;
case 0x641623:c.instructions+=2;goto B641623;
case 0x641625:c.instructions+=1;goto B641625;
case 0x641627:goto L641627;
case 0x64162a:c.instructions+=1;goto B64162a;
case 0x641630:goto L641630;
case 0x641636:c.instructions+=1;goto B641636;
case 0x641638:goto L641638;
case 0x64163b:c.instructions+=3;goto B64163b;
case 0x64163c:c.instructions+=2;goto B64163c;
case 0x641642:c.instructions+=1;goto B641642;
case 0x641648:goto L641648;
case 0x64164c:c.instructions+=1;goto B64164c;
case 0x64164e:goto L64164e;
case 0x641653:c.instructions+=1;goto B641653;
case 0x641655:goto L641655;
case 0x64165a:goto L64165a;
case 0x64165c:c.instructions+=1;goto B64165c;
case 0x64165e:goto L64165e;
case 0x641660:c.instructions+=1;goto B641660;
case 0x64166a:goto L64166a;
case 0x64166f:goto L64166f;
case 0x641670:c.instructions+=2;goto B641670;
case 0x641671:c.instructions+=1;goto B641671;
case 0x641672:goto L641672;
case 0x641677:c.instructions+=1;goto B641677;
case 0x64167c:goto L64167c;
case 0x64167d:c.instructions+=20;goto B64167d;
case 0x641680:c.instructions+=19;goto B641680;
case 0x641681:c.instructions+=18;goto B641681;
case 0x641682:c.instructions+=17;goto B641682;
case 0x641683:c.instructions+=16;goto B641683;
case 0x641686:c.instructions+=15;goto B641686;
case 0x64168a:c.instructions+=14;goto B64168a;
case 0x64168f:c.instructions+=13;goto B64168f;
case 0x641692:c.instructions+=12;goto B641692;
case 0x641693:c.instructions+=11;goto B641693;
case 0x641694:c.instructions+=10;goto B641694;
case 0x641695:c.instructions+=9;goto B641695;
case 0x641696:c.instructions+=8;goto B641696;
case 0x64169a:c.instructions+=7;goto B64169a;
case 0x64169c:c.instructions+=6;goto B64169c;
case 0x64169e:c.instructions+=5;goto B64169e;
case 0x6416a1:c.instructions+=4;goto B6416a1;
case 0x6416a4:c.instructions+=3;goto B6416a4;
case 0x6416a7:c.instructions+=2;goto B6416a7;
case 0x6416aa:c.instructions+=1;goto B6416aa;
case 0x6416ac:goto L6416ac;
case 0x6416af:c.instructions+=3;goto B6416af;
case 0x6416b2:c.instructions+=2;goto B6416b2;
case 0x6416b7:c.instructions+=1;goto B6416b7;
case 0x6416b8:goto L6416b8;
case 0x6416bc:c.instructions+=1;goto B6416bc;
case 0x6416be:goto L6416be;
case 0x6416c1:c.instructions+=1;goto B6416c1;
case 0x6416c3:goto L6416c3;
case 0x6416c7:c.instructions+=1;goto B6416c7;
case 0x6416c9:goto L6416c9;
case 0x6416cc:c.instructions+=1;goto B6416cc;
case 0x6416ce:goto L6416ce;
case 0x6416d3:c.instructions+=6;goto B6416d3;
case 0x6416d5:c.instructions+=5;goto B6416d5;
case 0x6416d8:c.instructions+=4;goto B6416d8;
case 0x6416db:c.instructions+=3;goto B6416db;
case 0x6416de:c.instructions+=2;goto B6416de;
case 0x6416e3:c.instructions+=1;goto B6416e3;
case 0x6416e5:goto L6416e5;
case 0x6416e8:c.instructions+=2;goto B6416e8;
case 0x6416eb:c.instructions+=1;goto B6416eb;
case 0x6416ee:goto L6416ee;
case 0x6416f1:c.instructions+=2;goto B6416f1;
case 0x6416f6:c.instructions+=1;goto B6416f6;
case 0x6416f8:goto L6416f8;
case 0x6416fb:c.instructions+=2;goto B6416fb;
case 0x6416fe:c.instructions+=1;goto B6416fe;
case 0x641701:goto L641701;
case 0x641704:goto L641704;
case 0x641707:c.instructions+=6;goto B641707;
case 0x64170e:c.instructions+=5;goto B64170e;
case 0x64170f:c.instructions+=4;goto B64170f;
case 0x641710:c.instructions+=3;goto B641710;
case 0x641711:c.instructions+=2;goto B641711;
case 0x641712:c.instructions+=1;goto B641712;
case 0x641713:goto L641713;
case 0x641715:c.instructions+=7;goto B641715;
case 0x641716:c.instructions+=6;goto B641716;
case 0x641718:c.instructions+=5;goto B641718;
case 0x641719:c.instructions+=4;goto B641719;
case 0x64171a:c.instructions+=3;goto B64171a;
case 0x64171b:c.instructions+=2;goto B64171b;
case 0x64171c:c.instructions+=1;goto B64171c;
case 0x641721:goto L641721;
case 0x641725:c.instructions+=1;goto B641725;
case 0x641727:goto L641727;
case 0x641729:c.instructions+=4;goto B641729;
case 0x64172a:c.instructions+=3;goto B64172a;
case 0x64172f:c.instructions+=2;goto B64172f;
case 0x641734:c.instructions+=1;goto B641734;
case 0x64173e:goto L64173e;
case 0x641740:goto L641740;
case 0x641745:goto L641745;
case 0x64174f:c.instructions+=1;goto B64174f;
case 0x641755:goto L641755;
case 0x64175c:c.instructions+=7;goto B64175c;
case 0x64175d:c.instructions+=6;goto B64175d;
case 0x64175f:c.instructions+=5;goto B64175f;
case 0x641760:c.instructions+=4;goto B641760;
case 0x641765:c.instructions+=3;goto B641765;
case 0x64176a:c.instructions+=2;goto B64176a;
case 0x64176c:c.instructions+=1;goto B64176c;
case 0x64176d:goto L64176d;
case 0x64176f:goto L64176f;
case 0x641774:goto L641774;
case 0x641776:c.instructions+=7;goto B641776;
case 0x641777:c.instructions+=6;goto B641777;
case 0x641778:c.instructions+=5;goto B641778;
case 0x64177b:c.instructions+=4;goto B64177b;
case 0x64177c:c.instructions+=3;goto B64177c;
case 0x641781:c.instructions+=2;goto B641781;
case 0x641782:c.instructions+=1;goto B641782;
case 0x641787:goto L641787;
case 0x641789:c.instructions+=1;goto B641789;
case 0x64178b:goto L64178b;
case 0x64178e:goto L64178e;
case 0x64178f:c.instructions+=5;goto B64178f;
case 0x641792:c.instructions+=4;goto B641792;
case 0x641793:c.instructions+=3;goto B641793;
case 0x641798:c.instructions+=2;goto B641798;
case 0x641799:c.instructions+=1;goto B641799;
case 0x64179e:goto L64179e;
case 0x6417a0:c.instructions+=1;goto B6417a0;
case 0x6417a2:goto L6417a2;
case 0x6417a5:c.instructions+=1;goto B6417a5;
case 0x6417a8:goto L6417a8;
case 0x6417ac:c.instructions+=1;goto B6417ac;
case 0x6417ae:goto L6417ae;
case 0x6417b4:c.instructions+=4;goto B6417b4;
case 0x6417b6:c.instructions+=3;goto B6417b6;
case 0x6417b7:c.instructions+=2;goto B6417b7;
case 0x6417ba:c.instructions+=1;goto B6417ba;
case 0x6417bc:goto L6417bc;
case 0x6417be:c.instructions+=1;goto B6417be;
case 0x6417c0:goto L6417c0;
case 0x6417c2:c.instructions+=1;goto B6417c2;
case 0x6417c4:goto L6417c4;
case 0x6417c5:c.instructions+=1;goto B6417c5;
case 0x6417ca:goto L6417ca;
case 0x6417d4:c.instructions+=1;goto B6417d4;
case 0x6417d6:goto L6417d6;
case 0x6417db:goto L6417db;
case 0x6417de:c.instructions+=2;goto B6417de;
case 0x6417e1:c.instructions+=1;goto B6417e1;
case 0x6417e3:goto L6417e3;
case 0x6417e4:c.instructions+=1;goto B6417e4;
case 0x6417e9:goto L6417e9;
case 0x6417ef:c.instructions+=1;goto B6417ef;
case 0x6417f1:goto L6417f1;
case 0x6417f3:c.instructions+=1;goto B6417f3;
case 0x6417f5:goto L6417f5;
case 0x6417f7:c.instructions+=1;goto B6417f7;
case 0x6417f9:goto L6417f9;
case 0x6417fa:c.instructions+=1;goto B6417fa;
case 0x6417ff:goto L6417ff;
case 0x641809:goto L641809;
case 0x64180a:goto L64180a;
case 0x64180b:goto L64180b;
case 0x641810:c.instructions+=4;goto B641810;
case 0x641811:c.instructions+=3;goto B641811;
case 0x641812:c.instructions+=2;goto B641812;
case 0x641813:c.instructions+=1;goto B641813;
case 0x641816:goto L641816;
case 0x641818:c.instructions+=5;goto B641818;
case 0x641819:c.instructions+=4;goto B641819;
case 0x64181b:c.instructions+=3;goto B64181b;
case 0x64181c:c.instructions+=2;goto B64181c;
case 0x64181e:c.instructions+=1;goto B64181e;
case 0x641823:goto L641823;
case 0x641827:c.instructions+=1;goto B641827;
case 0x641829:goto L641829;
case 0x64182a:c.instructions+=1;goto B64182a;
case 0x64182f:goto L64182f;
case 0x641830:goto L641830;
case 0x641832:c.instructions+=3;goto B641832;
case 0x641833:c.instructions+=2;goto B641833;
case 0x641834:c.instructions+=1;goto B641834;
case 0x641837:goto L641837;
case 0x641839:c.instructions+=5;goto B641839;
case 0x64183a:c.instructions+=4;goto B64183a;
case 0x64183c:c.instructions+=3;goto B64183c;
case 0x64183f:c.instructions+=2;goto B64183f;
case 0x641841:c.instructions+=1;goto B641841;
case 0x641843:goto L641843;
case 0x641844:c.instructions+=1;goto B641844;
case 0x641849:goto L641849;
case 0x64184d:c.instructions+=1;goto B64184d;
case 0x64184e:goto L64184e;
case 0x641851:c.instructions+=7;goto B641851;
case 0x641854:c.instructions+=6;goto B641854;
case 0x641857:c.instructions+=5;goto B641857;
case 0x64185a:c.instructions+=4;goto B64185a;
case 0x64185d:c.instructions+=3;goto B64185d;
case 0x641860:c.instructions+=2;goto B641860;
case 0x641861:c.instructions+=1;goto B641861;
case 0x641862:goto L641862;
case 0x641864:c.instructions+=8;goto B641864;
case 0x641867:c.instructions+=7;goto B641867;
case 0x641869:c.instructions+=6;goto B641869;
case 0x64186c:c.instructions+=5;goto B64186c;
case 0x64186e:c.instructions+=4;goto B64186e;
case 0x641871:c.instructions+=3;goto B641871;
case 0x641874:c.instructions+=2;goto B641874;
case 0x641877:c.instructions+=1;goto B641877;
case 0x641878:goto L641878;
case 0x64187a:c.instructions+=3;goto B64187a;
case 0x64187b:c.instructions+=2;goto B64187b;
case 0x64187d:c.instructions+=1;goto B64187d;
case 0x64187f:goto L64187f;
case 0x641882:c.instructions+=5;goto B641882;
case 0x641885:c.instructions+=4;goto B641885;
case 0x641888:c.instructions+=3;goto B641888;
case 0x64188c:c.instructions+=2;goto B64188c;
case 0x64188e:c.instructions+=1;goto B64188e;
case 0x641893:goto L641893;
case 0x641897:c.instructions+=1;goto B641897;
case 0x641899:goto L641899;
case 0x64189c:c.instructions+=2;goto B64189c;
case 0x64189d:c.instructions+=1;goto B64189d;
case 0x6418a2:goto L6418a2;
case 0x6418a4:c.instructions+=16;goto B6418a4;
case 0x6418a5:c.instructions+=15;goto B6418a5;
case 0x6418a7:c.instructions+=14;goto B6418a7;
case 0x6418a8:c.instructions+=13;goto B6418a8;
case 0x6418a9:c.instructions+=12;goto B6418a9;
case 0x6418ac:c.instructions+=11;goto B6418ac;
case 0x6418ae:c.instructions+=10;goto B6418ae;
case 0x6418b1:c.instructions+=9;goto B6418b1;
case 0x6418b2:c.instructions+=8;goto B6418b2;
case 0x6418b3:c.instructions+=7;goto B6418b3;
case 0x6418b6:c.instructions+=6;goto B6418b6;
case 0x6418b8:c.instructions+=5;goto B6418b8;
case 0x6418b9:c.instructions+=4;goto B6418b9;
case 0x6418bb:c.instructions+=3;goto B6418bb;
case 0x6418be:c.instructions+=2;goto B6418be;
case 0x6418c1:c.instructions+=1;goto B6418c1;
case 0x6418c3:goto L6418c3;
case 0x6418c5:c.instructions+=2;goto B6418c5;
case 0x6418c7:c.instructions+=1;goto B6418c7;
case 0x6418c9:goto L6418c9;
case 0x6418cc:c.instructions+=2;goto B6418cc;
case 0x6418cf:c.instructions+=1;goto B6418cf;
case 0x6418d1:goto L6418d1;
case 0x6418d4:c.instructions+=4;goto B6418d4;
case 0x6418d7:c.instructions+=3;goto B6418d7;
case 0x6418d9:c.instructions+=2;goto B6418d9;
case 0x6418db:c.instructions+=1;goto B6418db;
case 0x6418dd:goto L6418dd;
case 0x6418e0:c.instructions+=1;goto B6418e0;
case 0x6418e2:goto L6418e2;
case 0x6418e5:c.instructions+=1;goto B6418e5;
case 0x6418e8:goto L6418e8;
case 0x6418eb:c.instructions+=4;goto B6418eb;
case 0x6418ee:c.instructions+=3;goto B6418ee;
case 0x6418f0:c.instructions+=2;goto B6418f0;
case 0x6418f3:c.instructions+=1;goto B6418f3;
case 0x6418f5:goto L6418f5;
case 0x6418f7:c.instructions+=1;goto B6418f7;
case 0x6418f9:goto L6418f9;
case 0x6418fc:goto L6418fc;
case 0x6418ff:c.instructions+=4;goto B6418ff;
case 0x641901:c.instructions+=3;goto B641901;
case 0x641903:c.instructions+=2;goto B641903;
case 0x641905:c.instructions+=1;goto B641905;
case 0x641907:goto L641907;
case 0x64190a:c.instructions+=1;goto B64190a;
case 0x64190c:goto L64190c;
case 0x64190f:c.instructions+=1;goto B64190f;
case 0x641912:goto L641912;
case 0x641915:c.instructions+=3;goto B641915;
case 0x641917:c.instructions+=2;goto B641917;
case 0x641919:c.instructions+=1;goto B641919;
case 0x64191b:goto L64191b;
case 0x64191e:goto L64191e;
case 0x641921:c.instructions+=2;goto B641921;
case 0x641923:c.instructions+=1;goto B641923;
case 0x641925:goto L641925;
case 0x641927:c.instructions+=1;goto B641927;
case 0x641929:goto L641929;
case 0x641930:goto L641930;
case 0x641933:c.instructions+=5;goto B641933;
case 0x641934:c.instructions+=4;goto B641934;
case 0x641935:c.instructions+=3;goto B641935;
case 0x641936:c.instructions+=2;goto B641936;
case 0x641937:c.instructions+=1;goto B641937;
case 0x64193a:goto L64193a;
case 0x64193c:c.instructions+=1;goto B64193c;
case 0x64193e:goto L64193e;
case 0x641940:goto L641940;
case 0x641942:c.instructions+=3;goto B641942;
case 0x641944:c.instructions+=2;goto B641944;
case 0x641946:c.instructions+=1;goto B641946;
case 0x641948:goto L641948;
case 0x64194a:c.instructions+=1;goto B64194a;
case 0x64194c:goto L64194c;
case 0x64194f:c.instructions+=3;goto B64194f;
case 0x641951:c.instructions+=2;goto B641951;
case 0x641954:c.instructions+=1;goto B641954;
case 0x641956:goto L641956;
case 0x641957:c.instructions+=5;goto B641957;
case 0x641958:c.instructions+=4;goto B641958;
case 0x641959:c.instructions+=3;goto B641959;
case 0x64195a:c.instructions+=2;goto B64195a;
case 0x64195c:c.instructions+=1;goto B64195c;
case 0x64195e:goto L64195e;
case 0x641960:c.instructions+=1;goto B641960;
case 0x641962:goto L641962;
case 0x641964:c.instructions+=1;goto B641964;
case 0x641967:goto L641967;
case 0x641969:c.instructions+=1;goto B641969;
case 0x64196b:goto L64196b;
case 0x64196f:c.instructions+=1;goto B64196f;
case 0x641971:goto L641971;
case 0x641973:c.instructions+=1;goto B641973;
case 0x641975:goto L641975;
case 0x641977:goto L641977;
case 0x641979:c.instructions+=1;goto B641979;
case 0x64197b:goto L64197b;
case 0x64197c:c.instructions+=2;goto B64197c;
case 0x64197f:c.instructions+=1;goto B64197f;
case 0x641984:goto L641984;
case 0x641986:c.instructions+=3;goto B641986;
case 0x641987:c.instructions+=2;goto B641987;
case 0x641988:c.instructions+=1;goto B641988;
case 0x64198a:goto L64198a;
case 0x64198d:c.instructions+=4;goto B64198d;
case 0x64198f:c.instructions+=3;goto B64198f;
case 0x641992:c.instructions+=2;goto B641992;
case 0x641994:c.instructions+=1;goto B641994;
case 0x641996:goto L641996;
case 0x641999:c.instructions+=1;goto B641999;
case 0x64199b:goto L64199b;
case 0x64199e:c.instructions+=1;goto B64199e;
case 0x6419a0:goto L6419a0;
case 0x6419a3:c.instructions+=1;goto B6419a3;
case 0x6419a5:goto L6419a5;
case 0x6419a8:c.instructions+=3;goto B6419a8;
case 0x6419aa:c.instructions+=2;goto B6419aa;
case 0x6419ad:c.instructions+=1;goto B6419ad;
case 0x6419b3:goto L6419b3;
case 0x6419b6:c.instructions+=5;goto B6419b6;
case 0x6419b8:c.instructions+=4;goto B6419b8;
case 0x6419bb:c.instructions+=3;goto B6419bb;
case 0x6419bd:c.instructions+=2;goto B6419bd;
case 0x6419bf:c.instructions+=1;goto B6419bf;
case 0x6419c5:goto L6419c5;
case 0x6419c8:c.instructions+=5;goto B6419c8;
case 0x6419c9:c.instructions+=4;goto B6419c9;
case 0x6419cc:c.instructions+=3;goto B6419cc;
case 0x6419cf:c.instructions+=2;goto B6419cf;
case 0x6419d2:c.instructions+=1;goto B6419d2;
case 0x6419d7:goto L6419d7;
case 0x6419d9:c.instructions+=2;goto B6419d9;
case 0x6419dc:c.instructions+=1;goto B6419dc;
case 0x6419e2:goto L6419e2;
case 0x6419e3:c.instructions+=2;goto B6419e3;
case 0x6419e5:c.instructions+=1;goto B6419e5;
case 0x6419e7:goto L6419e7;
case 0x6419ec:goto L6419ec;
case 0x6419ee:c.instructions+=2;goto B6419ee;
case 0x6419f1:c.instructions+=1;goto B6419f1;
case 0x6419f3:goto L6419f3;
case 0x6419f6:c.instructions+=1;goto B6419f6;
case 0x6419f8:goto L6419f8;
case 0x6419fb:c.instructions+=1;goto B6419fb;
case 0x6419fd:goto L6419fd;
case 0x641a00:c.instructions+=1;goto B641a00;
case 0x641a02:goto L641a02;
case 0x641a05:c.instructions+=1;goto B641a05;
case 0x641a0b:goto L641a0b;
case 0x641a0e:c.instructions+=2;goto B641a0e;
case 0x641a11:c.instructions+=1;goto B641a11;
case 0x641a16:goto L641a16;
case 0x641a18:c.instructions+=3;goto B641a18;
case 0x641a1b:c.instructions+=2;goto B641a1b;
case 0x641a1e:c.instructions+=1;goto B641a1e;
case 0x641a24:goto L641a24;
case 0x641a27:c.instructions+=2;goto B641a27;
case 0x641a2a:c.instructions+=1;goto B641a2a;
case 0x641a30:goto L641a30;
case 0x641a33:c.instructions+=3;goto B641a33;
case 0x641a35:c.instructions+=2;goto B641a35;
case 0x641a38:c.instructions+=1;goto B641a38;
case 0x641a3d:goto L641a3d;
case 0x641a3f:c.instructions+=12;goto B641a3f;
case 0x641a40:c.instructions+=11;goto B641a40;
case 0x641a42:c.instructions+=10;goto B641a42;
case 0x641a45:c.instructions+=9;goto B641a45;
case 0x641a48:c.instructions+=8;goto B641a48;
case 0x641a49:c.instructions+=7;goto B641a49;
case 0x641a4c:c.instructions+=6;goto B641a4c;
case 0x641a4d:c.instructions+=5;goto B641a4d;
case 0x641a50:c.instructions+=4;goto B641a50;
case 0x641a53:c.instructions+=3;goto B641a53;
case 0x641a54:c.instructions+=2;goto B641a54;
case 0x641a57:c.instructions+=1;goto B641a57;
case 0x641a5c:goto L641a5c;
case 0x641a5d:c.instructions+=1;goto B641a5d;
case 0x641a60:goto L641a60;
case 0x641a62:c.instructions+=19;goto B641a62;
case 0x641a63:c.instructions+=18;goto B641a63;
case 0x641a65:c.instructions+=17;goto B641a65;
case 0x641a68:c.instructions+=16;goto B641a68;
case 0x641a6b:c.instructions+=15;goto B641a6b;
case 0x641a6d:c.instructions+=14;goto B641a6d;
case 0x641a70:c.instructions+=13;goto B641a70;
case 0x641a73:c.instructions+=12;goto B641a73;
case 0x641a76:c.instructions+=11;goto B641a76;
case 0x641a78:c.instructions+=10;goto B641a78;
case 0x641a79:c.instructions+=9;goto B641a79;
case 0x641a7c:c.instructions+=8;goto B641a7c;
case 0x641a7e:c.instructions+=7;goto B641a7e;
case 0x641a7f:c.instructions+=6;goto B641a7f;
case 0x641a80:c.instructions+=5;goto B641a80;
case 0x641a82:c.instructions+=4;goto B641a82;
case 0x641a83:c.instructions+=3;goto B641a83;
case 0x641a85:c.instructions+=2;goto B641a85;
case 0x641a88:c.instructions+=1;goto B641a88;
case 0x641a8a:goto L641a8a;
case 0x641a8d:c.instructions+=1;goto B641a8d;
case 0x641a8f:goto L641a8f;
case 0x641a92:c.instructions+=1;goto B641a92;
case 0x641a94:goto L641a94;
case 0x641a97:c.instructions+=4;goto B641a97;
case 0x641a9a:c.instructions+=3;goto B641a9a;
case 0x641a9c:c.instructions+=2;goto B641a9c;
case 0x641a9e:c.instructions+=1;goto B641a9e;
case 0x641aa0:goto L641aa0;
case 0x641aa2:c.instructions+=1;goto B641aa2;
case 0x641aa4:goto L641aa4;
case 0x641aa7:goto L641aa7;
case 0x641aaa:c.instructions+=3;goto B641aaa;
case 0x641aac:c.instructions+=2;goto B641aac;
case 0x641aae:c.instructions+=1;goto B641aae;
case 0x641ab0:goto L641ab0;
case 0x641ab2:c.instructions+=1;goto B641ab2;
case 0x641ab4:goto L641ab4;
case 0x641ab7:goto L641ab7;
case 0x641ab9:c.instructions+=1;goto B641ab9;
case 0x641abc:goto L641abc;
case 0x641abe:c.instructions+=3;goto B641abe;
case 0x641abf:c.instructions+=2;goto B641abf;
case 0x641ac1:c.instructions+=1;goto B641ac1;
case 0x641ac3:goto L641ac3;
case 0x641ac5:c.instructions+=2;goto B641ac5;
case 0x641ac8:c.instructions+=1;goto B641ac8;
case 0x641acb:goto L641acb;
case 0x641acd:c.instructions+=3;goto B641acd;
case 0x641ace:c.instructions+=2;goto B641ace;
case 0x641ad0:c.instructions+=1;goto B641ad0;
case 0x641ad2:goto L641ad2;
case 0x641ad4:c.instructions+=2;goto B641ad4;
case 0x641ad6:c.instructions+=1;goto B641ad6;
case 0x641ad8:goto L641ad8;
case 0x641ada:c.instructions+=1;goto B641ada;
case 0x641add:goto L641add;
case 0x641adf:c.instructions+=3;goto B641adf;
case 0x641ae0:c.instructions+=2;goto B641ae0;
case 0x641ae2:c.instructions+=1;goto B641ae2;
case 0x641ae4:goto L641ae4;
case 0x641ae6:c.instructions+=1;goto B641ae6;
case 0x641ae9:goto L641ae9;
case 0x641aeb:c.instructions+=3;goto B641aeb;
case 0x641aec:c.instructions+=2;goto B641aec;
case 0x641aee:c.instructions+=1;goto B641aee;
case 0x641af0:goto L641af0;
case 0x641af2:c.instructions+=8;goto B641af2;
case 0x641af3:c.instructions+=7;goto B641af3;
case 0x641af6:c.instructions+=6;goto B641af6;
case 0x641af8:c.instructions+=5;goto B641af8;
case 0x641afa:c.instructions+=4;goto B641afa;
case 0x641afc:c.instructions+=3;goto B641afc;
case 0x641afd:c.instructions+=2;goto B641afd;
case 0x641b00:c.instructions+=1;goto B641b00;
case 0x641b02:goto L641b02;
case 0x641b05:c.instructions+=19;goto B641b05;
case 0x641b08:c.instructions+=18;goto B641b08;
case 0x641b0b:c.instructions+=17;goto B641b0b;
case 0x641b0c:c.instructions+=16;goto B641b0c;
case 0x641b0f:c.instructions+=15;goto B641b0f;
case 0x641b11:c.instructions+=14;goto B641b11;
case 0x641b13:c.instructions+=13;goto B641b13;
case 0x641b15:c.instructions+=12;goto B641b15;
case 0x641b16:c.instructions+=11;goto B641b16;
case 0x641b18:c.instructions+=10;goto B641b18;
case 0x641b1b:c.instructions+=9;goto B641b1b;
case 0x641b1d:c.instructions+=8;goto B641b1d;
case 0x641b24:c.instructions+=7;goto B641b24;
case 0x641b27:c.instructions+=6;goto B641b27;
case 0x641b29:c.instructions+=5;goto B641b29;
case 0x641b2c:c.instructions+=4;goto B641b2c;
case 0x641b2f:c.instructions+=3;goto B641b2f;
case 0x641b32:c.instructions+=2;goto B641b32;
case 0x641b34:c.instructions+=1;goto B641b34;
case 0x641b3a:goto L641b3a;
case 0x641b3d:c.instructions+=1;goto B641b3d;
case 0x641b43:goto L641b43;
case 0x641b46:c.instructions+=1;goto B641b46;
case 0x641b4c:goto L641b4c;
case 0x641b4f:c.instructions+=1;goto B641b4f;
case 0x641b51:goto L641b51;
case 0x641b54:c.instructions+=1;goto B641b54;
case 0x641b5a:goto L641b5a;
case 0x641b5d:c.instructions+=9;goto B641b5d;
case 0x641b5f:c.instructions+=8;goto B641b5f;
case 0x641b62:c.instructions+=7;goto B641b62;
case 0x641b66:c.instructions+=6;goto B641b66;
case 0x641b69:c.instructions+=5;goto B641b69;
case 0x641b6b:c.instructions+=4;goto B641b6b;
case 0x641b6d:c.instructions+=3;goto B641b6d;
case 0x641b70:c.instructions+=2;goto B641b70;
case 0x641b76:c.instructions+=1;goto B641b76;
case 0x641b78:goto L641b78;
case 0x641b7a:goto L641b7a;
case 0x641b7d:goto L641b7d;
case 0x641b80:c.instructions+=8;goto B641b80;
case 0x641b81:c.instructions+=7;goto B641b81;
case 0x641b84:c.instructions+=6;goto B641b84;
case 0x641b85:c.instructions+=5;goto B641b85;
case 0x641b88:c.instructions+=4;goto B641b88;
case 0x641b89:c.instructions+=3;goto B641b89;
case 0x641b8a:c.instructions+=2;goto B641b8a;
case 0x641b8d:c.instructions+=1;goto B641b8d;
case 0x641b92:goto L641b92;
case 0x641b94:c.instructions+=2;goto B641b94;
case 0x641b97:c.instructions+=1;goto B641b97;
case 0x641b99:goto L641b99;
case 0x641b9c:c.instructions+=9;goto B641b9c;
case 0x641b9e:c.instructions+=8;goto B641b9e;
case 0x641ba1:c.instructions+=7;goto B641ba1;
case 0x641ba3:c.instructions+=6;goto B641ba3;
case 0x641ba6:c.instructions+=5;goto B641ba6;
case 0x641ba8:c.instructions+=4;goto B641ba8;
case 0x641bab:c.instructions+=3;goto B641bab;
case 0x641bae:c.instructions+=2;goto B641bae;
case 0x641bb1:c.instructions+=1;goto B641bb1;
case 0x641bb3:goto L641bb3;
case 0x641bb5:c.instructions+=3;goto B641bb5;
case 0x641bb9:c.instructions+=2;goto B641bb9;
case 0x641bbb:c.instructions+=1;goto B641bbb;
case 0x641bbd:goto L641bbd;
case 0x641bc0:c.instructions+=5;goto B641bc0;
case 0x641bc3:c.instructions+=4;goto B641bc3;
case 0x641bc5:c.instructions+=3;goto B641bc5;
case 0x641bc6:c.instructions+=2;goto B641bc6;
case 0x641bc8:c.instructions+=1;goto B641bc8;
case 0x641bca:goto L641bca;
case 0x641bcd:c.instructions+=1;goto B641bcd;
case 0x641bcf:goto L641bcf;
case 0x641bd2:c.instructions+=1;goto B641bd2;
case 0x641bd4:goto L641bd4;
case 0x641bd7:c.instructions+=1;goto B641bd7;
case 0x641bd9:goto L641bd9;
case 0x641bdc:c.instructions+=2;goto B641bdc;
case 0x641bde:c.instructions+=1;goto B641bde;
case 0x641be0:goto L641be0;
case 0x641be3:goto L641be3;
case 0x641be6:c.instructions+=6;goto B641be6;
case 0x641be7:c.instructions+=5;goto B641be7;
case 0x641be9:c.instructions+=4;goto B641be9;
case 0x641bea:c.instructions+=3;goto B641bea;
case 0x641bec:c.instructions+=2;goto B641bec;
case 0x641bee:c.instructions+=1;goto B641bee;
case 0x641bf0:goto L641bf0;
case 0x641bf1:c.instructions+=1;goto B641bf1;
case 0x641bf3:goto L641bf3;
case 0x641bf4:c.instructions+=1;goto B641bf4;
case 0x641bf6:goto L641bf6;
case 0x641bf9:goto L641bf9;
case 0x641bfc:c.instructions+=2;goto B641bfc;
case 0x641bfe:c.instructions+=1;goto B641bfe;
case 0x641c00:goto L641c00;
case 0x641c03:c.instructions+=1;goto B641c03;
case 0x641c05:goto L641c05;
case 0x641c0c:goto L641c0c;
case 0x641c0f:c.instructions+=5;goto B641c0f;
case 0x641c10:c.instructions+=4;goto B641c10;
case 0x641c11:c.instructions+=3;goto B641c11;
case 0x641c12:c.instructions+=2;goto B641c12;
case 0x641c13:c.instructions+=1;goto B641c13;
case 0x641c16:goto L641c16;
case 0x641c18:c.instructions+=38;goto B641c18;
case 0x641c19:c.instructions+=37;goto B641c19;
case 0x641c1b:c.instructions+=36;goto B641c1b;
case 0x641c1e:c.instructions+=35;goto B641c1e;
case 0x641c1f:c.instructions+=34;goto B641c1f;
case 0x641c20:c.instructions+=33;goto B641c20;
case 0x641c21:c.instructions+=32;goto B641c21;
case 0x641c24:c.instructions+=31;goto B641c24;
case 0x641c26:c.instructions+=30;goto B641c26;
case 0x641c29:c.instructions+=29;goto B641c29;
case 0x641c2c:c.instructions+=28;goto B641c2c;
case 0x641c2f:c.instructions+=27;goto B641c2f;
case 0x641c31:c.instructions+=26;goto B641c31;
case 0x641c34:c.instructions+=25;goto B641c34;
case 0x641c36:c.instructions+=24;goto B641c36;
case 0x641c38:c.instructions+=23;goto B641c38;
case 0x641c3a:c.instructions+=22;goto B641c3a;
case 0x641c3c:c.instructions+=21;goto B641c3c;
case 0x641c3e:c.instructions+=20;goto B641c3e;
case 0x641c41:c.instructions+=19;goto B641c41;
case 0x641c43:c.instructions+=18;goto B641c43;
case 0x641c46:c.instructions+=17;goto B641c46;
case 0x641c48:c.instructions+=16;goto B641c48;
case 0x641c4a:c.instructions+=15;goto B641c4a;
case 0x641c4d:c.instructions+=14;goto B641c4d;
case 0x641c4f:c.instructions+=13;goto B641c4f;
case 0x641c52:c.instructions+=12;goto B641c52;
case 0x641c55:c.instructions+=11;goto B641c55;
case 0x641c57:c.instructions+=10;goto B641c57;
case 0x641c59:c.instructions+=9;goto B641c59;
case 0x641c5c:c.instructions+=8;goto B641c5c;
case 0x641c5f:c.instructions+=7;goto B641c5f;
case 0x641c60:c.instructions+=6;goto B641c60;
case 0x641c62:c.instructions+=5;goto B641c62;
case 0x641c64:c.instructions+=4;goto B641c64;
case 0x641c67:c.instructions+=3;goto B641c67;
case 0x641c6a:c.instructions+=2;goto B641c6a;
case 0x641c6d:c.instructions+=1;goto B641c6d;
case 0x641c6f:goto L641c6f;
case 0x641c72:goto L641c72;
case 0x641c75:c.instructions+=4;goto B641c75;
case 0x641c78:c.instructions+=3;goto B641c78;
case 0x641c7a:c.instructions+=2;goto B641c7a;
case 0x641c7c:c.instructions+=1;goto B641c7c;
case 0x641c7e:goto L641c7e;
case 0x641c81:c.instructions+=1;goto B641c81;
case 0x641c83:goto L641c83;
case 0x641c86:c.instructions+=1;goto B641c86;
case 0x641c89:goto L641c89;
case 0x641c8c:c.instructions+=3;goto B641c8c;
case 0x641c8e:c.instructions+=2;goto B641c8e;
case 0x641c90:c.instructions+=1;goto B641c90;
case 0x641c92:goto L641c92;
case 0x641c95:c.instructions+=1;goto B641c95;
case 0x641c97:goto L641c97;
case 0x641c9a:c.instructions+=1;goto B641c9a;
case 0x641c9d:goto L641c9d;
case 0x641ca0:c.instructions+=1;goto B641ca0;
case 0x641ca3:goto L641ca3;
case 0x641ca5:c.instructions+=3;goto B641ca5;
case 0x641ca6:c.instructions+=2;goto B641ca6;
case 0x641ca8:c.instructions+=1;goto B641ca8;
case 0x641caa:goto L641caa;
case 0x641cad:c.instructions+=11;goto B641cad;
case 0x641caf:c.instructions+=10;goto B641caf;
case 0x641cb1:c.instructions+=9;goto B641cb1;
case 0x641cb4:c.instructions+=8;goto B641cb4;
case 0x641cb7:c.instructions+=7;goto B641cb7;
case 0x641cba:c.instructions+=6;goto B641cba;
case 0x641cbc:c.instructions+=5;goto B641cbc;
case 0x641cbf:c.instructions+=4;goto B641cbf;
case 0x641cc1:c.instructions+=3;goto B641cc1;
case 0x641cc4:c.instructions+=2;goto B641cc4;
case 0x641cc6:c.instructions+=1;goto B641cc6;
case 0x641cc9:goto L641cc9;
case 0x641ccb:goto L641ccb;
case 0x641ccd:c.instructions+=1;goto B641ccd;
case 0x641cd0:goto L641cd0;
case 0x641cd2:goto L641cd2;
case 0x641cd4:c.instructions+=14;goto B641cd4;
case 0x641cd7:c.instructions+=13;goto B641cd7;
case 0x641cd9:c.instructions+=12;goto B641cd9;
case 0x641cdb:c.instructions+=11;goto B641cdb;
case 0x641cdd:c.instructions+=10;goto B641cdd;
case 0x641ce0:c.instructions+=9;goto B641ce0;
case 0x641ce2:c.instructions+=8;goto B641ce2;
case 0x641ce5:c.instructions+=7;goto B641ce5;
case 0x641ce8:c.instructions+=6;goto B641ce8;
case 0x641cea:c.instructions+=5;goto B641cea;
case 0x641cec:c.instructions+=4;goto B641cec;
case 0x641cee:c.instructions+=3;goto B641cee;
case 0x641cf0:c.instructions+=2;goto B641cf0;
case 0x641cf3:c.instructions+=1;goto B641cf3;
case 0x641cf5:goto L641cf5;
case 0x641cf7:c.instructions+=4;goto B641cf7;
case 0x641cfa:c.instructions+=3;goto B641cfa;
case 0x641cfd:c.instructions+=2;goto B641cfd;
case 0x641d00:c.instructions+=1;goto B641d00;
case 0x641d02:goto L641d02;
case 0x641d05:goto L641d05;
case 0x641d07:c.instructions+=3;goto B641d07;
case 0x641d08:c.instructions+=2;goto B641d08;
case 0x641d0a:c.instructions+=1;goto B641d0a;
case 0x641d0c:goto L641d0c;
case 0x641d0f:c.instructions+=11;goto B641d0f;
case 0x641d11:c.instructions+=10;goto B641d11;
case 0x641d14:c.instructions+=9;goto B641d14;
case 0x641d16:c.instructions+=8;goto B641d16;
case 0x641d19:c.instructions+=7;goto B641d19;
case 0x641d1c:c.instructions+=6;goto B641d1c;
case 0x641d1e:c.instructions+=5;goto B641d1e;
case 0x641d21:c.instructions+=4;goto B641d21;
case 0x641d23:c.instructions+=3;goto B641d23;
case 0x641d26:c.instructions+=2;goto B641d26;
case 0x641d28:c.instructions+=1;goto B641d28;
case 0x641d2b:goto L641d2b;
case 0x641d2d:goto L641d2d;
case 0x641d2f:c.instructions+=1;goto B641d2f;
case 0x641d32:goto L641d32;
case 0x641d34:goto L641d34;
case 0x641d36:c.instructions+=8;goto B641d36;
case 0x641d39:c.instructions+=7;goto B641d39;
case 0x641d3b:c.instructions+=6;goto B641d3b;
case 0x641d3d:c.instructions+=5;goto B641d3d;
case 0x641d3f:c.instructions+=4;goto B641d3f;
case 0x641d42:c.instructions+=3;goto B641d42;
case 0x641d44:c.instructions+=2;goto B641d44;
case 0x641d47:c.instructions+=1;goto B641d47;
case 0x641d49:goto L641d49;
case 0x641d4c:c.instructions+=2;goto B641d4c;
case 0x641d4e:c.instructions+=1;goto B641d4e;
case 0x641d54:goto L641d54;
case 0x641d56:c.instructions+=3;goto B641d56;
case 0x641d57:c.instructions+=2;goto B641d57;
case 0x641d59:c.instructions+=1;goto B641d59;
case 0x641d5f:goto L641d5f;
case 0x641d62:c.instructions+=1;goto B641d62;
case 0x641d68:goto L641d68;
case 0x641d6b:c.instructions+=1;goto B641d6b;
case 0x641d71:goto L641d71;
case 0x641d74:c.instructions+=1;goto B641d74;
case 0x641d7a:goto L641d7a;
case 0x641d7d:c.instructions+=16;goto B641d7d;
case 0x641d7f:c.instructions+=15;goto B641d7f;
case 0x641d82:c.instructions+=14;goto B641d82;
case 0x641d84:c.instructions+=13;goto B641d84;
case 0x641d87:c.instructions+=12;goto B641d87;
case 0x641d89:c.instructions+=11;goto B641d89;
case 0x641d8c:c.instructions+=10;goto B641d8c;
case 0x641d8f:c.instructions+=9;goto B641d8f;
case 0x641d91:c.instructions+=8;goto B641d91;
case 0x641d94:c.instructions+=7;goto B641d94;
case 0x641d98:c.instructions+=6;goto B641d98;
case 0x641d9a:c.instructions+=5;goto B641d9a;
case 0x641d9c:c.instructions+=4;goto B641d9c;
case 0x641d9f:c.instructions+=3;goto B641d9f;
case 0x641da1:c.instructions+=2;goto B641da1;
case 0x641da4:c.instructions+=1;goto B641da4;
case 0x641daa:goto L641daa;
case 0x641dad:c.instructions+=6;goto B641dad;
case 0x641db1:c.instructions+=5;goto B641db1;
case 0x641db5:c.instructions+=4;goto B641db5;
case 0x641db7:c.instructions+=3;goto B641db7;
case 0x641db9:c.instructions+=2;goto B641db9;
case 0x641dbb:c.instructions+=1;goto B641dbb;
case 0x641dbd:goto L641dbd;
case 0x641dc0:c.instructions+=8;goto B641dc0;
case 0x641dc3:c.instructions+=7;goto B641dc3;
case 0x641dc4:c.instructions+=6;goto B641dc4;
case 0x641dc5:c.instructions+=5;goto B641dc5;
case 0x641dc8:c.instructions+=4;goto B641dc8;
case 0x641dcb:c.instructions+=3;goto B641dcb;
case 0x641dcc:c.instructions+=2;goto B641dcc;
case 0x641dcf:c.instructions+=1;goto B641dcf;
case 0x641dd4:goto L641dd4;
case 0x641dd6:c.instructions+=2;goto B641dd6;
case 0x641dd9:c.instructions+=1;goto B641dd9;
case 0x641ddf:goto L641ddf;
case 0x641de2:c.instructions+=5;goto B641de2;
case 0x641de5:c.instructions+=4;goto B641de5;
case 0x641de8:c.instructions+=3;goto B641de8;
case 0x641deb:c.instructions+=2;goto B641deb;
case 0x641dee:c.instructions+=1;goto B641dee;
case 0x641df0:goto L641df0;
case 0x641df3:c.instructions+=1;goto B641df3;
case 0x641df5:goto L641df5;
case 0x641dfa:goto L641dfa;
case 0x641dfd:c.instructions+=2;goto B641dfd;
case 0x641e00:c.instructions+=1;goto B641e00;
case 0x641e06:goto L641e06;
case 0x641e09:c.instructions+=1;goto B641e09;
case 0x641e0b:goto L641e0b;
case 0x641e0e:c.instructions+=1;goto B641e0e;
case 0x641e14:goto L641e14;
case 0x641e17:c.instructions+=1;goto B641e17;
case 0x641e1d:goto L641e1d;
case 0x641e20:c.instructions+=2;goto B641e20;
case 0x641e22:c.instructions+=1;goto B641e22;
case 0x641e24:goto L641e24;
case 0x641e27:c.instructions+=3;goto B641e27;
case 0x641e2a:c.instructions+=2;goto B641e2a;
case 0x641e2d:c.instructions+=1;goto B641e2d;
case 0x641e30:goto L641e30;
case 0x641e32:c.instructions+=7;goto B641e32;
case 0x641e34:c.instructions+=6;goto B641e34;
case 0x641e36:c.instructions+=5;goto B641e36;
case 0x641e38:c.instructions+=4;goto B641e38;
case 0x641e3b:c.instructions+=3;goto B641e3b;
case 0x641e3e:c.instructions+=2;goto B641e3e;
case 0x641e41:c.instructions+=1;goto B641e41;
case 0x641e43:goto L641e43;
case 0x641e46:c.instructions+=3;goto B641e46;
case 0x641e49:c.instructions+=2;goto B641e49;
case 0x641e4c:c.instructions+=1;goto B641e4c;
case 0x641e4e:goto L641e4e;
case 0x641e51:goto L641e51;
case 0x641e55:c.instructions+=11;goto B641e55;
case 0x641e58:c.instructions+=10;goto B641e58;
case 0x641e5a:c.instructions+=9;goto B641e5a;
case 0x641e5d:c.instructions+=8;goto B641e5d;
case 0x641e5f:c.instructions+=7;goto B641e5f;
case 0x641e62:c.instructions+=6;goto B641e62;
case 0x641e64:c.instructions+=5;goto B641e64;
case 0x641e67:c.instructions+=4;goto B641e67;
case 0x641e69:c.instructions+=3;goto B641e69;
case 0x641e6c:c.instructions+=2;goto B641e6c;
case 0x641e6f:c.instructions+=1;goto B641e6f;
case 0x641e71:goto L641e71;
case 0x641e74:c.instructions+=1;goto B641e74;
case 0x641e76:goto L641e76;
case 0x641e79:goto L641e79;
case 0x641e7c:c.instructions+=2;goto B641e7c;
case 0x641e7d:c.instructions+=1;goto B641e7d;
case 0x641e7f:goto L641e7f;
case 0x641e80:c.instructions+=1;goto B641e80;
case 0x641e82:goto L641e82;
case 0x641e83:c.instructions+=1;goto B641e83;
case 0x641e85:goto L641e85;
case 0x641e88:c.instructions+=7;goto B641e88;
case 0x641e8a:c.instructions+=6;goto B641e8a;
case 0x641e8d:c.instructions+=5;goto B641e8d;
case 0x641e8f:c.instructions+=4;goto B641e8f;
case 0x641e92:c.instructions+=3;goto B641e92;
case 0x641e94:c.instructions+=2;goto B641e94;
case 0x641e96:c.instructions+=1;goto B641e96;
case 0x641e99:goto L641e99;
case 0x641e9b:goto L641e9b;
case 0x641e9d:c.instructions+=1;goto B641e9d;
case 0x641ea0:goto L641ea0;
case 0x641ea2:goto L641ea2;
case 0x641ea5:c.instructions+=7;goto B641ea5;
case 0x641ea7:c.instructions+=6;goto B641ea7;
case 0x641eaa:c.instructions+=5;goto B641eaa;
case 0x641eac:c.instructions+=4;goto B641eac;
case 0x641eaf:c.instructions+=3;goto B641eaf;
case 0x641eb2:c.instructions+=2;goto B641eb2;
case 0x641eb5:c.instructions+=1;goto B641eb5;
case 0x641eb7:goto L641eb7;
case 0x641ebe:goto L641ebe;
case 0x641ec1:c.instructions+=5;goto B641ec1;
case 0x641ec2:c.instructions+=4;goto B641ec2;
case 0x641ec3:c.instructions+=3;goto B641ec3;
case 0x641ec4:c.instructions+=2;goto B641ec4;
case 0x641ec5:c.instructions+=1;goto B641ec5;
case 0x641ec8:goto L641ec8;
case 0x641eca:c.instructions+=27;goto B641eca;
case 0x641ecb:c.instructions+=26;goto B641ecb;
case 0x641ecd:c.instructions+=25;goto B641ecd;
case 0x641ed0:c.instructions+=24;goto B641ed0;
case 0x641ed3:c.instructions+=23;goto B641ed3;
case 0x641ed6:c.instructions+=22;goto B641ed6;
case 0x641ed8:c.instructions+=21;goto B641ed8;
case 0x641edb:c.instructions+=20;goto B641edb;
case 0x641edc:c.instructions+=19;goto B641edc;
case 0x641edf:c.instructions+=18;goto B641edf;
case 0x641ee2:c.instructions+=17;goto B641ee2;
case 0x641ee5:c.instructions+=16;goto B641ee5;
case 0x641ee7:c.instructions+=15;goto B641ee7;
case 0x641ee8:c.instructions+=14;goto B641ee8;
case 0x641eeb:c.instructions+=13;goto B641eeb;
case 0x641eee:c.instructions+=12;goto B641eee;
case 0x641eef:c.instructions+=11;goto B641eef;
case 0x641ef2:c.instructions+=10;goto B641ef2;
case 0x641ef3:c.instructions+=9;goto B641ef3;
case 0x641ef6:c.instructions+=8;goto B641ef6;
case 0x641ef7:c.instructions+=7;goto B641ef7;
case 0x641ef8:c.instructions+=6;goto B641ef8;
case 0x641efb:c.instructions+=5;goto B641efb;
case 0x641efc:c.instructions+=4;goto B641efc;
case 0x641eff:c.instructions+=3;goto B641eff;
case 0x641f00:c.instructions+=2;goto B641f00;
case 0x641f03:c.instructions+=1;goto B641f03;
case 0x641f08:goto L641f08;
case 0x641f09:c.instructions+=2;goto B641f09;
case 0x641f0a:c.instructions+=1;goto B641f0a;
case 0x641f0d:goto L641f0d;
case 0x641f0f:c.instructions+=18;goto B641f0f;
case 0x641f10:c.instructions+=17;goto B641f10;
case 0x641f12:c.instructions+=16;goto B641f12;
case 0x641f13:c.instructions+=15;goto B641f13;
case 0x641f14:c.instructions+=14;goto B641f14;
case 0x641f18:c.instructions+=13;goto B641f18;
case 0x641f19:c.instructions+=12;goto B641f19;
case 0x641f1a:c.instructions+=11;goto B641f1a;
case 0x641f1d:c.instructions+=10;goto B641f1d;
case 0x641f1f:c.instructions+=9;goto B641f1f;
case 0x641f22:c.instructions+=8;goto B641f22;
case 0x641f24:c.instructions+=7;goto B641f24;
case 0x641f26:c.instructions+=6;goto B641f26;
case 0x641f27:c.instructions+=5;goto B641f27;
case 0x641f29:c.instructions+=4;goto B641f29;
case 0x641f2a:c.instructions+=3;goto B641f2a;
case 0x641f2d:c.instructions+=2;goto B641f2d;
case 0x641f30:c.instructions+=1;goto B641f30;
case 0x641f32:goto L641f32;
case 0x641f35:goto L641f35;
case 0x641f37:c.instructions+=1;goto B641f37;
case 0x641f3d:goto L641f3d;
case 0x641f40:c.instructions+=1;goto B641f40;
case 0x641f46:goto L641f46;
case 0x641f49:c.instructions+=1;goto B641f49;
case 0x641f4b:goto L641f4b;
case 0x641f4e:c.instructions+=1;goto B641f4e;
case 0x641f54:goto L641f54;
case 0x641f58:c.instructions+=4;goto B641f58;
case 0x641f5b:c.instructions+=3;goto B641f5b;
case 0x641f5e:c.instructions+=2;goto B641f5e;
case 0x641f60:c.instructions+=1;goto B641f60;
case 0x641f66:goto L641f66;
case 0x641f6a:c.instructions+=3;goto B641f6a;
case 0x641f6c:c.instructions+=2;goto B641f6c;
case 0x641f6e:c.instructions+=1;goto B641f6e;
case 0x641f70:goto L641f70;
case 0x641f73:c.instructions+=3;goto B641f73;
case 0x641f76:c.instructions+=2;goto B641f76;
case 0x641f77:c.instructions+=1;goto B641f77;
case 0x641f7c:goto L641f7c;
case 0x641f7e:c.instructions+=2;goto B641f7e;
case 0x641f81:c.instructions+=1;goto B641f81;
case 0x641f83:goto L641f83;
case 0x641f86:c.instructions+=2;goto B641f86;
case 0x641f89:c.instructions+=1;goto B641f89;
case 0x641f8b:goto L641f8b;
case 0x641f8e:c.instructions+=1;goto B641f8e;
case 0x641f90:goto L641f90;
case 0x641f92:goto L641f92;
case 0x641f95:c.instructions+=1;goto B641f95;
case 0x641f97:goto L641f97;
case 0x641f9a:c.instructions+=1;goto B641f9a;
case 0x641f9c:goto L641f9c;
case 0x641f9f:c.instructions+=1;goto B641f9f;
case 0x641fa1:goto L641fa1;
case 0x641fa4:c.instructions+=1;goto B641fa4;
case 0x641fa6:goto L641fa6;
case 0x641fa9:c.instructions+=2;goto B641fa9;
case 0x641fab:c.instructions+=1;goto B641fab;
case 0x641fad:goto L641fad;
case 0x641fb0:c.instructions+=1;goto B641fb0;
case 0x641fb3:goto L641fb3;
case 0x641fb5:c.instructions+=7;goto B641fb5;
case 0x641fb7:c.instructions+=6;goto B641fb7;
case 0x641fb9:c.instructions+=5;goto B641fb9;
case 0x641fbb:c.instructions+=4;goto B641fbb;
case 0x641fbe:c.instructions+=3;goto B641fbe;
case 0x641fc1:c.instructions+=2;goto B641fc1;
case 0x641fc2:c.instructions+=1;goto B641fc2;
case 0x641fc4:goto L641fc4;
case 0x641fc7:c.instructions+=1;goto B641fc7;
case 0x641fc9:goto L641fc9;
case 0x641fcc:c.instructions+=4;goto B641fcc;
case 0x641fd0:c.instructions+=3;goto B641fd0;
case 0x641fd4:c.instructions+=2;goto B641fd4;
case 0x641fd5:c.instructions+=1;goto B641fd5;
case 0x641fd7:goto L641fd7;
case 0x641fd8:c.instructions+=1;goto B641fd8;
case 0x641fda:goto L641fda;
case 0x641fdb:c.instructions+=1;goto B641fdb;
case 0x641fdd:goto L641fdd;
case 0x641fe0:c.instructions+=5;goto B641fe0;
case 0x641fe2:c.instructions+=4;goto B641fe2;
case 0x641fe5:c.instructions+=3;goto B641fe5;
case 0x641fe7:c.instructions+=2;goto B641fe7;
case 0x641fea:c.instructions+=1;goto B641fea;
case 0x641fec:goto L641fec;
case 0x641ff3:goto L641ff3;
case 0x641ff6:c.instructions+=5;goto B641ff6;
case 0x641ff7:c.instructions+=4;goto B641ff7;
case 0x641ff8:c.instructions+=3;goto B641ff8;
case 0x641ff9:c.instructions+=2;goto B641ff9;
case 0x641ffa:c.instructions+=1;goto B641ffa;
case 0x641ffd:goto L641ffd;
case 0x641fff:c.instructions+=1;goto B641fff;
default:missing_instruction(c.pc);}
B641005:L641005:{c.instructions+=5;NFSU2_TR(0x641005);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B641007:{NFSU2_TR(0x641007);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B641009:{NFSU2_TR(0x641009);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64100c:{NFSU2_TR(0x64100c);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B64100f:{NFSU2_TR(0x64100f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6410b6;}}
}
B641015:L641015:{c.instructions+=1;NFSU2_TR(0x641015);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcd0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64101b:L64101b:{c.instructions+=4;NFSU2_TR(0x64101b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64101e:{NFSU2_TR(0x64101e);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+0),(U+8),1);
}
B641021:{NFSU2_TR(0x641021);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B641023:{NFSU2_TR(0x641023);
if(r1(R+518)){{goto L64105d;}}
}
B641025:L641025:{c.instructions+=2;NFSU2_TR(0x641025);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B641027:{NFSU2_TR(0x641027);
if(r1(R+518)){{goto L641053;}}
}
B641029:L641029:{c.instructions+=2;NFSU2_TR(0x641029);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0x5ull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0x5ull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0x5ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B64102b:{NFSU2_TR(0x64102b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L64113a;}}
}
B641031:L641031:{c.instructions+=2;NFSU2_TR(0x641031);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0x7ull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0x7ull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0x7ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B641033:{NFSU2_TR(0x641033);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L64113a;}}
}
B641039:L641039:{c.instructions+=3;NFSU2_TR(0x641039);
__builtin_memmove((R+0),(R+12),4);
}
B64103b:{NFSU2_TR(0x64103b);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B64103e:{NFSU2_TR(0x64103e);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B641041:L641041:{c.instructions+=6;NFSU2_TR(0x641041);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B641042:{NFSU2_TR(0x641042);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B641045:{NFSU2_TR(0x641045);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B641048:{NFSU2_TR(0x641048);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B64104b:{NFSU2_TR(0x64104b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64104c:{NFSU2_TR(0x64104c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x641051ull));
TAIL_STATIC(0x63c719u,63c);
}
B641051:L641051:{c.instructions+=1;NFSU2_TR(0x641051);
{goto L641075;}
}
B641053:L641053:{c.instructions+=4;NFSU2_TR(0x641053);
__builtin_memmove((R+0),(R+12),4);
}
B641055:{NFSU2_TR(0x641055);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B641058:{NFSU2_TR(0x641058);
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
B64105b:{NFSU2_TR(0x64105b);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x641041u);}goto L641041;}
}
B64105d:L64105d:{c.instructions+=9;NFSU2_TR(0x64105d);
__builtin_memmove((R+0),(R+12),4);
}
B64105f:{NFSU2_TR(0x64105f);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B641062:{NFSU2_TR(0x641062);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B641065:{NFSU2_TR(0x641065);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B641066:{NFSU2_TR(0x641066);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B641069:{NFSU2_TR(0x641069);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B64106c:{NFSU2_TR(0x64106c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B64106f:{NFSU2_TR(0x64106f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B641070:{NFSU2_TR(0x641070);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x641075ull));
TAIL_STATIC(0x63c606u,63c);
}
B641075:L641075:{c.instructions+=22;NFSU2_TR(0x641075);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B641078:{NFSU2_TR(0x641078);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B641079:{NFSU2_TR(0x641079);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B64107c:{NFSU2_TR(0x64107c);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B64107f:{NFSU2_TR(0x64107f);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B641082:{NFSU2_TR(0x641082);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B641085:{NFSU2_TR(0x641085);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B641088:{NFSU2_TR(0x641088);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B64108b:{NFSU2_TR(0x64108b);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B64108e:{NFSU2_TR(0x64108e);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B641091:{NFSU2_TR(0x641091);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B641094:{NFSU2_TR(0x641094);
{u32 ea_=u32(r4(R+28)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B641097:{NFSU2_TR(0x641097);
{u32 ea_=u32(r4(R+28)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B64109a:{NFSU2_TR(0x64109a);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B64109d:{NFSU2_TR(0x64109d);
{u32 ea_=u32(r4(R+28)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6410a0:{NFSU2_TR(0x6410a0);
{u32 ea_=u32(r4(R+28)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6410a3:{NFSU2_TR(0x6410a3);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6410a6:{NFSU2_TR(0x6410a6);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6410a8:{NFSU2_TR(0x6410a8);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6410aa:{NFSU2_TR(0x6410aa);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0xcull))));
}
B6410ad:{NFSU2_TR(0x6410ad);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B6410b0:{NFSU2_TR(0x6410b0);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64101bu);}goto L64101b;}}
}
B6410b6:L6410b6:{c.instructions+=8;NFSU2_TR(0x6410b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6410b9:{NFSU2_TR(0x6410b9);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B6410bc:{NFSU2_TR(0x6410bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6410bf:{NFSU2_TR(0x6410bf);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6410c1:{NFSU2_TR(0x6410c1);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6410c7:{NFSU2_TR(0x6410c7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6410c9:{NFSU2_TR(0x6410c9);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6410cc:{NFSU2_TR(0x6410cc);
if(r1(R+518)){TAIL_STATIC(0x640fe7u,640);}
}
B6410d2:L6410d2:{c.instructions+=2;NFSU2_TR(0x6410d2);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6410d6:{NFSU2_TR(0x6410d6);
if(r1(R+518)){{goto L6410f5;}}
}
B6410d8:L6410d8:{c.instructions+=6;NFSU2_TR(0x6410d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6410db:{NFSU2_TR(0x6410db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6410de:{NFSU2_TR(0x6410de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6410e1:{NFSU2_TR(0x6410e1);
__builtin_memmove((R+0),(R+4),4);
}
B6410e3:{NFSU2_TR(0x6410e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6410e6:{NFSU2_TR(0x6410e6);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6410e9:L6410e9:{c.instructions+=1;NFSU2_TR(0x6410e9);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6410eb;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6410e9u);}goto L6410e9;}
}
B6410eb:L6410eb:{c.instructions+=3;NFSU2_TR(0x6410eb);
__builtin_memmove((R+4),(R+0),4);
}
B6410ed:{NFSU2_TR(0x6410ed);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6410f0:{NFSU2_TR(0x6410f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6410f3:L6410f3:{c.instructions+=1;NFSU2_TR(0x6410f3);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6410f5;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6410f3u);}goto L6410f3;}
}
B6410f5:L6410f5:{c.instructions+=3;NFSU2_TR(0x6410f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6410f8:{NFSU2_TR(0x6410f8);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6410fa:{NFSU2_TR(0x6410fa);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L641127;}}
}
B6410fc:L6410fc:{c.instructions+=5;NFSU2_TR(0x6410fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6410ff:{NFSU2_TR(0x6410ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B641102:{NFSU2_TR(0x641102);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcc8ull))));
__builtin_memmove((R+12),(U+0),4);
}
B641108:{NFSU2_TR(0x641108);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B64110a:{NFSU2_TR(0x64110a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64110d:L64110d:{c.instructions+=12;NFSU2_TR(0x64110d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B64110f:{NFSU2_TR(0x64110f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B641112:{NFSU2_TR(0x641112);
__builtin_memmove((R+24),(R+12),4);
}
B641114:{NFSU2_TR(0x641114);
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
B641115:{NFSU2_TR(0x641115);
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
B641116:{NFSU2_TR(0x641116);
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
B641117:{NFSU2_TR(0x641117);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+4))));
s4(u32(r4(R+0)),r4(U+0));
}
B641119:{NFSU2_TR(0x641119);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+8,u32(u32(r4(U+8))+u32(r4(R+4))));
s4(u32(r4(U+4)),r4(U+8));
}
B64111c:{NFSU2_TR(0x64111c);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0xcull))));
}
B64111f:{NFSU2_TR(0x64111f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B641122:{NFSU2_TR(0x641122);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B641125:{NFSU2_TR(0x641125);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64110du);}goto L64110d;}}
}
B641127:L641127:{c.instructions+=5;NFSU2_TR(0x641127);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64112b:{NFSU2_TR(0x64112b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64112e:{NFSU2_TR(0x64112e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B641131:{NFSU2_TR(0x641131);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
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
B641134:{NFSU2_TR(0x641134);
if(r1(R+512)){TAIL_STATIC(0x640fc4u,640);}
}
B64113a:L64113a:{c.instructions+=5;NFSU2_TR(0x64113a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64113b:{NFSU2_TR(0x64113b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64113c:{NFSU2_TR(0x64113c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B64113d:{NFSU2_TR(0x64113d);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B64113e:{NFSU2_TR(0x64113e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x2cull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B641141:L641141:{c.instructions+=67;NFSU2_TR(0x641141);
__builtin_memmove((R+28),(R+28),4);
}
B641143:{NFSU2_TR(0x641143);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B641144:{NFSU2_TR(0x641144);
__builtin_memmove((R+20),(R+16),4);
}
B641146:{NFSU2_TR(0x641146);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0xcull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0xcull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B641149:{NFSU2_TR(0x641149);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64114c:{NFSU2_TR(0x64114c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64114f:{NFSU2_TR(0x64114f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B641150:{NFSU2_TR(0x641150);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B641153:{NFSU2_TR(0x641153);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B641154:{NFSU2_TR(0x641154);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B641157:{NFSU2_TR(0x641157);
__builtin_memmove((R+28),(R+0),4);
}
B641159:{NFSU2_TR(0x641159);
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
B64115a:{NFSU2_TR(0x64115a);
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
B64115b:{NFSU2_TR(0x64115b);
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
B64115c:{NFSU2_TR(0x64115c);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B64115e:{NFSU2_TR(0x64115e);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B641160:{NFSU2_TR(0x641160);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B641161:{NFSU2_TR(0x641161);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B641162:{NFSU2_TR(0x641162);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B641164:{NFSU2_TR(0x641164);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B641167:{NFSU2_TR(0x641167);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B64116a:{NFSU2_TR(0x64116a);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B64116d:{NFSU2_TR(0x64116d);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B641170:{NFSU2_TR(0x641170);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B641173:{NFSU2_TR(0x641173);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B641176:{NFSU2_TR(0x641176);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B641178:{NFSU2_TR(0x641178);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B64117b:{NFSU2_TR(0x64117b);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B64117d:{NFSU2_TR(0x64117d);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B64117f:{NFSU2_TR(0x64117f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B641181:{NFSU2_TR(0x641181);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B641184:{NFSU2_TR(0x641184);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B641187:{NFSU2_TR(0x641187);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B641189:{NFSU2_TR(0x641189);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B64118b:{NFSU2_TR(0x64118b);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B64118d:{NFSU2_TR(0x64118d);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B641190:{NFSU2_TR(0x641190);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B641192:{NFSU2_TR(0x641192);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B641195:{NFSU2_TR(0x641195);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B641198:{NFSU2_TR(0x641198);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B64119b:{NFSU2_TR(0x64119b);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B64119d:{NFSU2_TR(0x64119d);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B64119f:{NFSU2_TR(0x64119f);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6411a2:{NFSU2_TR(0x6411a2);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6411a4:{NFSU2_TR(0x6411a4);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6411a6:{NFSU2_TR(0x6411a6);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6411a8:{NFSU2_TR(0x6411a8);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6411ab:{NFSU2_TR(0x6411ab);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6411ae:{NFSU2_TR(0x6411ae);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B6411b0:{NFSU2_TR(0x6411b0);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6411b3:{NFSU2_TR(0x6411b3);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6411b6:{NFSU2_TR(0x6411b6);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6411b9:{NFSU2_TR(0x6411b9);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B6411bc:{NFSU2_TR(0x6411bc);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6411bf:{NFSU2_TR(0x6411bf);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6411c2:{NFSU2_TR(0x6411c2);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6411c5:{NFSU2_TR(0x6411c5);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B6411c7:{NFSU2_TR(0x6411c7);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6411c9:{NFSU2_TR(0x6411c9);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6411cb:{NFSU2_TR(0x6411cb);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6411ce:{NFSU2_TR(0x6411ce);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6411d1:{NFSU2_TR(0x6411d1);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6411d3:{NFSU2_TR(0x6411d3);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6411d6:{NFSU2_TR(0x6411d6);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6411d9:{NFSU2_TR(0x6411d9);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6411dc:{NFSU2_TR(0x6411dc);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6411dd:{NFSU2_TR(0x6411dd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6411e0:L6411e0:{c.instructions+=35;NFSU2_TR(0x6411e0);
__builtin_memmove((R+28),(R+28),4);
}
B6411e2:{NFSU2_TR(0x6411e2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6411e3:{NFSU2_TR(0x6411e3);
__builtin_memmove((R+20),(R+16),4);
}
B6411e5:{NFSU2_TR(0x6411e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1c8ull))));
}
B6411eb:{NFSU2_TR(0x6411eb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6411ec:{NFSU2_TR(0x6411ec);
{u32 ea_=u32(u32(7889736u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6411f2:{NFSU2_TR(0x6411f2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6411f3:{NFSU2_TR(0x6411f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6411f6:{NFSU2_TR(0x6411f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6411f9:{NFSU2_TR(0x6411f9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6411fa:{NFSU2_TR(0x6411fa);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6411fd:{NFSU2_TR(0x6411fd);
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
B6411fe:{NFSU2_TR(0x6411fe);
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
B6411ff:{NFSU2_TR(0x6411ff);
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
B641200:{NFSU2_TR(0x641200);
__builtin_memmove((R+24),(R+12),4);
}
B641202:{NFSU2_TR(0x641202);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B641205:{NFSU2_TR(0x641205);
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
B641206:{NFSU2_TR(0x641206);
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
B641207:{NFSU2_TR(0x641207);
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
B641208:{NFSU2_TR(0x641208);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64120b:{NFSU2_TR(0x64120b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64120e:{NFSU2_TR(0x64120e);
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
B64120f:{NFSU2_TR(0x64120f);
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
B641210:{NFSU2_TR(0x641210);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((R+0),(U+0),4);
}
B641213:{NFSU2_TR(0x641213);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B641214:{NFSU2_TR(0x641214);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B641215:{NFSU2_TR(0x641215);
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
B641216:{NFSU2_TR(0x641216);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B641219:{NFSU2_TR(0x641219);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64121c:{NFSU2_TR(0x64121c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64121d:{NFSU2_TR(0x64121d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((R+0),(U+0),4);
}
B641220:{NFSU2_TR(0x641220);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B641221:{NFSU2_TR(0x641221);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B641224:{NFSU2_TR(0x641224);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B641225:{NFSU2_TR(0x641225);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64122aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x641141u);}goto L641141;}
}
B64122a:L64122a:{c.instructions+=11;NFSU2_TR(0x64122a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64122d:{NFSU2_TR(0x64122d);
{u32 ea_=u32(u32(7889736u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B641233:{NFSU2_TR(0x641233);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B641234:{NFSU2_TR(0x641234);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B641235:{NFSU2_TR(0x641235);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((R+0),(U+0),4);
}
B641238:{NFSU2_TR(0x641238);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B64123b:{NFSU2_TR(0x64123b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64123c:{NFSU2_TR(0x64123c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64123d:{NFSU2_TR(0x64123d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B641240:{NFSU2_TR(0x641240);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B641241:{NFSU2_TR(0x641241);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x641246ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x641141u);}goto L641141;}
}
B641246:L641246:{c.instructions+=12;NFSU2_TR(0x641246);
{u32 ea_=u32(u32(7889736u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B64124c:{NFSU2_TR(0x64124c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((R+0),(U+0),4);
}
B64124f:{NFSU2_TR(0x64124f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B641250:{NFSU2_TR(0x641250);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B641251:{NFSU2_TR(0x641251);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B641254:{NFSU2_TR(0x641254);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+28),(U+0),4);
}
B641257:{NFSU2_TR(0x641257);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B641258:{NFSU2_TR(0x641258);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64125b:{NFSU2_TR(0x64125b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64125c:{NFSU2_TR(0x64125c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64125f:{NFSU2_TR(0x64125f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B641260:{NFSU2_TR(0x641260);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x641265ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x641141u);}goto L641141;}
}
B641265:L641265:{c.instructions+=12;NFSU2_TR(0x641265);
{u32 ea_=u32(u32(7889736u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B64126b:{NFSU2_TR(0x64126b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64126e:{NFSU2_TR(0x64126e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64126f:{NFSU2_TR(0x64126f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B641270:{NFSU2_TR(0x641270);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B641273:{NFSU2_TR(0x641273);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x18ull))));
}
B641276:{NFSU2_TR(0x641276);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B641277:{NFSU2_TR(0x641277);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64127a:{NFSU2_TR(0x64127a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64127b:{NFSU2_TR(0x64127b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64127e:{NFSU2_TR(0x64127e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64127f:{NFSU2_TR(0x64127f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x641284ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x641141u);}goto L641141;}
}
B641284:L641284:{c.instructions+=11;NFSU2_TR(0x641284);
{u32 ea_=u32(u32(7889736u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B64128a:{NFSU2_TR(0x64128a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+0),(U+0),4);
}
B64128d:{NFSU2_TR(0x64128d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64128e:{NFSU2_TR(0x64128e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64128f:{NFSU2_TR(0x64128f);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B641292:{NFSU2_TR(0x641292);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B641293:{NFSU2_TR(0x641293);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B641296:{NFSU2_TR(0x641296);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B641297:{NFSU2_TR(0x641297);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64129a:{NFSU2_TR(0x64129a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64129b:{NFSU2_TR(0x64129b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6412a0ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x641141u);}goto L641141;}
}
B6412a0:L6412a0:{c.instructions+=11;NFSU2_TR(0x6412a0);
{u32 ea_=u32(u32(7889736u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6412a6:{NFSU2_TR(0x6412a6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6412a9:{NFSU2_TR(0x6412a9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6412aa:{NFSU2_TR(0x6412aa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6412ab:{NFSU2_TR(0x6412ab);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6412ae:{NFSU2_TR(0x6412ae);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6412af:{NFSU2_TR(0x6412af);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6412b2:{NFSU2_TR(0x6412b2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6412b3:{NFSU2_TR(0x6412b3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6412b6:{NFSU2_TR(0x6412b6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6412b7:{NFSU2_TR(0x6412b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6412bcull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x641141u);}goto L641141;}
}
B6412bc:L6412bc:{c.instructions+=101;NFSU2_TR(0x6412bc);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6412bf:{NFSU2_TR(0x6412bf);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6412c2:{NFSU2_TR(0x6412c2);
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
B6412c3:{NFSU2_TR(0x6412c3);
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
B6412c4:{NFSU2_TR(0x6412c4);
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
B6412c5:{NFSU2_TR(0x6412c5);
{u32 ea_=u32(r4(R+20)+u32(4294967200u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6412c8:{NFSU2_TR(0x6412c8);
{u32 ea_=u32(r4(R+20)+u32(4294967224u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6412cb:{NFSU2_TR(0x6412cb);
{u32 ea_=u32(r4(R+20)+u32(4294967204u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6412ce:{NFSU2_TR(0x6412ce);
{u32 ea_=u32(r4(R+20)+u32(4294967228u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6412d1:{NFSU2_TR(0x6412d1);
{u32 ea_=u32(r4(R+20)+u32(4294967208u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6412d4:{NFSU2_TR(0x6412d4);
{u32 ea_=u32(r4(R+20)+u32(4294967232u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6412d7:{NFSU2_TR(0x6412d7);
{u32 ea_=u32(r4(R+20)+u32(4294967232u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6412da:{NFSU2_TR(0x6412da);
{u32 ea_=u32(r4(R+20)+u32(4294967212u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6412dd:{NFSU2_TR(0x6412dd);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B6412df:{NFSU2_TR(0x6412df);
{u32 ea_=u32(r4(R+20)+u32(4294967224u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6412e2:{NFSU2_TR(0x6412e2);
{u32 ea_=u32(r4(R+20)+u32(4294967216u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6412e5:{NFSU2_TR(0x6412e5);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B6412e7:{NFSU2_TR(0x6412e7);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B6412e9:{NFSU2_TR(0x6412e9);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6412eb:{NFSU2_TR(0x6412eb);
{u32 ea_=u32(r4(R+20)+u32(4294967220u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6412ee:{NFSU2_TR(0x6412ee);
{u32 ea_=u32(r4(R+20)+u32(4294967232u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6412f1:{NFSU2_TR(0x6412f1);
{u32 ea_=u32(r4(R+20)+u32(4294967236u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6412f4:{NFSU2_TR(0x6412f4);
{u32 ea_=u32(r4(R+20)+u32(4294967224u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6412f7:{NFSU2_TR(0x6412f7);
{u32 ea_=u32(r4(R+20)+u32(4294967224u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6412fa:{NFSU2_TR(0x6412fa);
{u32 ea_=u32(r4(R+20)+u32(4294967240u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6412fd:{NFSU2_TR(0x6412fd);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B6412ff:{NFSU2_TR(0x6412ff);
{u32 ea_=u32(r4(R+20)+u32(4294967228u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B641302:{NFSU2_TR(0x641302);
{u32 ea_=u32(r4(R+20)+u32(4294967244u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B641305:{NFSU2_TR(0x641305);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B641307:{NFSU2_TR(0x641307);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B641309:{NFSU2_TR(0x641309);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B64130b:{NFSU2_TR(0x64130b);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B64130e:{NFSU2_TR(0x64130e);
{u32 ea_=u32(r4(R+20)+u32(4294967224u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B641311:{NFSU2_TR(0x641311);
{u32 ea_=u32(r4(R+20)+u32(4294967264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B641314:{NFSU2_TR(0x641314);
{u32 ea_=u32(r4(R+20)+u32(4294967228u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B641317:{NFSU2_TR(0x641317);
{u32 ea_=u32(r4(R+20)+u32(4294967228u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B64131a:{NFSU2_TR(0x64131a);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B64131d:{NFSU2_TR(0x64131d);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B64131f:{NFSU2_TR(0x64131f);
{u32 ea_=u32(r4(R+20)+u32(4294967232u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B641322:{NFSU2_TR(0x641322);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B641325:{NFSU2_TR(0x641325);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B641327:{NFSU2_TR(0x641327);
{u32 ea_=u32(r4(R+20)+u32(4294967224u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B64132a:{NFSU2_TR(0x64132a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B64132c:{NFSU2_TR(0x64132c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B64132e:{NFSU2_TR(0x64132e);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B641331:{NFSU2_TR(0x641331);
{u32 ea_=u32(r4(R+20)+u32(4294967228u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B641334:{NFSU2_TR(0x641334);
{u32 ea_=u32(r4(R+20)+u32(4294967228u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B641337:{NFSU2_TR(0x641337);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B64133a:{NFSU2_TR(0x64133a);
{u32 ea_=u32(r4(R+20)+u32(4294967232u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B64133d:{NFSU2_TR(0x64133d);
{u32 ea_=u32(u32(7884072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B641343:{NFSU2_TR(0x641343);
{u32 ea_=u32(r4(R+20)+u32(4294967224u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B641346:{NFSU2_TR(0x641346);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B641348:{NFSU2_TR(0x641348);
{u32 ea_=u32(r4(R+20)+u32(4294967224u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B64134b:{NFSU2_TR(0x64134b);
{u32 ea_=u32(r4(R+20)+u32(4294967228u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B64134e:{NFSU2_TR(0x64134e);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B641350:{NFSU2_TR(0x641350);
{u32 ea_=u32(r4(R+20)+u32(4294967228u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B641353:{NFSU2_TR(0x641353);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B641355:{NFSU2_TR(0x641355);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B641357:{NFSU2_TR(0x641357);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B641359:{NFSU2_TR(0x641359);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B64135b:{NFSU2_TR(0x64135b);
{u32 ea_=u32(r4(R+20)+u32(4294967248u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B64135e:{NFSU2_TR(0x64135e);
{u32 ea_=u32(r4(R+20)+u32(4294967176u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B641361:{NFSU2_TR(0x641361);
{u32 ea_=u32(r4(R+20)+u32(4294967252u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B641364:{NFSU2_TR(0x641364);
{u32 ea_=u32(r4(R+20)+u32(4294967180u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B641367:{NFSU2_TR(0x641367);
{u32 ea_=u32(r4(R+20)+u32(4294967256u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B64136a:{NFSU2_TR(0x64136a);
{u32 ea_=u32(r4(R+20)+u32(4294967184u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B64136d:{NFSU2_TR(0x64136d);
{u32 ea_=u32(r4(R+20)+u32(4294967172u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B641370:{NFSU2_TR(0x641370);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B641373:{NFSU2_TR(0x641373);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B641375:{NFSU2_TR(0x641375);
{u32 ea_=u32(r4(R+20)+u32(4294967152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B64137b:{NFSU2_TR(0x64137b);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B64137e:{NFSU2_TR(0x64137e);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B641380:{NFSU2_TR(0x641380);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B641382:{NFSU2_TR(0x641382);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B641384:{NFSU2_TR(0x641384);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B641387:{NFSU2_TR(0x641387);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B641389:{NFSU2_TR(0x641389);
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
B64138c:{NFSU2_TR(0x64138c);
{u32 ea_=u32(r4(R+20)+u32(4294967172u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B64138f:{NFSU2_TR(0x64138f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B641392:{NFSU2_TR(0x641392);
{u32 ea_=u32(r4(R+20)+u32(4294967160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B641398:{NFSU2_TR(0x641398);
{u32 ea_=u32(u32(8041616u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B64139e:{NFSU2_TR(0x64139e);
{u32 ea_=u32(r4(R+20)+u32(4294967152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6413a4:{NFSU2_TR(0x6413a4);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B6413a6:{NFSU2_TR(0x6413a6);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B6413a8:{NFSU2_TR(0x6413a8);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B6413aa:{NFSU2_TR(0x6413aa);
{u32 ea_=u32(r4(R+20)+u32(4294967168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6413ad:{NFSU2_TR(0x6413ad);
{u32 ea_=u32(r4(R+20)+u32(4294967160u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6413b3:{NFSU2_TR(0x6413b3);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B6413b5:{NFSU2_TR(0x6413b5);
{u32 ea_=u32(r4(R+20)+u32(4294967172u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6413b8:{NFSU2_TR(0x6413b8);
{u32 ea_=u32(r4(R+20)+u32(4294967224u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6413bb:{NFSU2_TR(0x6413bb);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B6413bd:{NFSU2_TR(0x6413bd);
{u32 ea_=u32(r4(R+20)+u32(4294967224u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6413c0:{NFSU2_TR(0x6413c0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6413c2:{NFSU2_TR(0x6413c2);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6413c4:{NFSU2_TR(0x6413c4);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6413c6:{NFSU2_TR(0x6413c6);
{u32 ea_=u32(r4(R+20)+u32(4294967228u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6413c9:{NFSU2_TR(0x6413c9);
{u32 ea_=u32(r4(R+20)+u32(4294967168u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6413cc:{NFSU2_TR(0x6413cc);
{u32 ea_=u32(r4(R+20)+u32(4294967228u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6413cf:{NFSU2_TR(0x6413cf);
{u32 ea_=u32(r4(R+20)+u32(4294967172u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6413d2:{NFSU2_TR(0x6413d2);
{u32 ea_=u32(r4(R+20)+u32(4294967232u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6413d5:{NFSU2_TR(0x6413d5);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L641532;}}
}
B6413db:L6413db:{c.instructions+=1;NFSU2_TR(0x6413db);
{u32 ea_=u32(u32(7895772u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6413e1:L6413e1:{c.instructions+=56;NFSU2_TR(0x6413e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6413e4:{NFSU2_TR(0x6413e4);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6413e7:{NFSU2_TR(0x6413e7);
{u32 ea_=u32(r4(R+4)+r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6413ea:{NFSU2_TR(0x6413ea);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6413ec:{NFSU2_TR(0x6413ec);
{u32 ea_=u32(r4(R+4)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6413f0:{NFSU2_TR(0x6413f0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff8cull))));
__builtin_memmove((R+0),(U+0),4);
}
B6413f3:{NFSU2_TR(0x6413f3);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B6413f5:{NFSU2_TR(0x6413f5);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B6413f7:{NFSU2_TR(0x6413f7);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B6413f9:{NFSU2_TR(0x6413f9);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B6413fb:{NFSU2_TR(0x6413fb);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B6413fd:{NFSU2_TR(0x6413fd);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B6413ff:{NFSU2_TR(0x6413ff);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B641401:{NFSU2_TR(0x641401);
{u32 ea_=u32(r4(R+20)+u32(4294967112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B641407:{NFSU2_TR(0x641407);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B641409:{NFSU2_TR(0x641409);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B64140b:{NFSU2_TR(0x64140b);
{u32 ea_=u32(r4(R+20)+u32(28u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B64140e:{NFSU2_TR(0x64140e);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B641410:{NFSU2_TR(0x641410);
__asm__ volatile(".byte 0xd8,0xcd":::"memory");
}
B641412:{NFSU2_TR(0x641412);
{u32 ea_=u32(r4(R+20)+u32(4294967116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B641418:{NFSU2_TR(0x641418);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B64141a:{NFSU2_TR(0x64141a);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B64141c:{NFSU2_TR(0x64141c);
{u32 ea_=u32(r4(R+20)+u32(4294967120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B641422:{NFSU2_TR(0x641422);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B641424:{NFSU2_TR(0x641424);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B641426:{NFSU2_TR(0x641426);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B641428:{NFSU2_TR(0x641428);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B64142a:{NFSU2_TR(0x64142a);
__asm__ volatile(".byte 0xd8,0xcd":::"memory");
}
B64142c:{NFSU2_TR(0x64142c);
{u32 ea_=u32(r4(R+20)+u32(4294967124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B641432:{NFSU2_TR(0x641432);
{u32 ea_=u32(r4(R+20)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B641435:{NFSU2_TR(0x641435);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B641437:{NFSU2_TR(0x641437);
{u32 ea_=u32(u32(7887312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B64143d:{NFSU2_TR(0x64143d);
{u32 ea_=u32(r4(R+20)+u32(4294967128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B641443:{NFSU2_TR(0x641443);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B641445:{NFSU2_TR(0x641445);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B641447:{NFSU2_TR(0x641447);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B641449:{NFSU2_TR(0x641449);
__asm__ volatile(".byte 0xd8,0xcd":::"memory");
}
B64144b:{NFSU2_TR(0x64144b);
{u32 ea_=u32(r4(R+20)+u32(4294967132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B641451:{NFSU2_TR(0x641451);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B641453:{NFSU2_TR(0x641453);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B641455:{NFSU2_TR(0x641455);
{u32 ea_=u32(r4(R+20)+u32(4294967136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B64145b:{NFSU2_TR(0x64145b);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B64145d:{NFSU2_TR(0x64145d);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B64145f:{NFSU2_TR(0x64145f);
{u32 ea_=u32(r4(R+20)+u32(4294967140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B641465:{NFSU2_TR(0x641465);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B641467:{NFSU2_TR(0x641467);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B641469:{NFSU2_TR(0x641469);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B64146b:{NFSU2_TR(0x64146b);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B64146d:{NFSU2_TR(0x64146d);
{u32 ea_=u32(r4(R+20)+u32(4294967144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B641473:{NFSU2_TR(0x641473);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B641475:{NFSU2_TR(0x641475);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B641477:{NFSU2_TR(0x641477);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B641479:{NFSU2_TR(0x641479);
{u32 ea_=u32(r4(R+20)+u32(4294967148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B64147f:{NFSU2_TR(0x64147f);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B641481:{NFSU2_TR(0x641481);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B641483:{NFSU2_TR(0x641483);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B641485:L641485:{c.instructions+=14;NFSU2_TR(0x641485);
{u32 ea_=u32(r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B641488:{NFSU2_TR(0x641488);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffff48ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B64148f:{NFSU2_TR(0x64148f);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B641491:{NFSU2_TR(0x641491);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B641492:{NFSU2_TR(0x641492);
__asm__ volatile(".byte 0xde,0xc3":::"memory");
}
B641494:{NFSU2_TR(0x641494);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B641496:{NFSU2_TR(0x641496);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B641498:{NFSU2_TR(0x641498);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
}
B64149b:{NFSU2_TR(0x64149b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(U+0))<(u32(0xaull))));
}
B64149e:{NFSU2_TR(0x64149e);
__asm__ volatile(".byte 0xde,0xc2":::"memory");
}
B6414a0:{NFSU2_TR(0x6414a0);
{u32 ea_=u32(r4(R+0)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6414a3:{NFSU2_TR(0x6414a3);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6414a5:{NFSU2_TR(0x6414a5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6414a7:{NFSU2_TR(0x6414a7);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x641485u);}goto L641485;}}
}
B6414a9:L6414a9:{c.instructions+=6;NFSU2_TR(0x6414a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6414ac:{NFSU2_TR(0x6414ac);
{u32 ea_=u32(r4(R+20)+u32(4294966848u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6414b2:{NFSU2_TR(0x6414b2);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(U+0))<(u32(0x3ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6414b5:{NFSU2_TR(0x6414b5);
{u32 ea_=u32(r4(R+20)+u32(4294966844u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6414bb:{NFSU2_TR(0x6414bb);
{u32 ea_=u32(r4(R+20)+u32(4294966840u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6414c1:{NFSU2_TR(0x6414c1);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6414f9;}}
}
B6414c3:L6414c3:{c.instructions+=8;NFSU2_TR(0x6414c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6414c6:{NFSU2_TR(0x6414c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6414c9:{NFSU2_TR(0x6414c9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe38ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6414cf:{NFSU2_TR(0x6414cf);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+12))));
}
B6414d1:{NFSU2_TR(0x6414d1);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+12))));
}
B6414d3:{NFSU2_TR(0x6414d3);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+12))));
}
B6414d5:{NFSU2_TR(0x6414d5);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6414d8:{NFSU2_TR(0x6414d8);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xfffffffdull))));
}
B6414db:L6414db:{c.instructions+=12;NFSU2_TR(0x6414db);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B6414dd:{NFSU2_TR(0x6414dd);
{u32 ea_=u32(r4(R+0)+r4(R+28));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6414e0:{NFSU2_TR(0x6414e0);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B6414e2:{NFSU2_TR(0x6414e2);
{u32 ea_=u32(r4(R+0)+r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6414e5:{NFSU2_TR(0x6414e5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6414e7:{NFSU2_TR(0x6414e7);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B6414e9:{NFSU2_TR(0x6414e9);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6414eb:{NFSU2_TR(0x6414eb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6414ed:{NFSU2_TR(0x6414ed);
{u32 ea_=u32(r4(R+0)+r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6414f0:{NFSU2_TR(0x6414f0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6414f3:{NFSU2_TR(0x6414f3);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B6414f4:{NFSU2_TR(0x6414f4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6414dbu);}goto L6414db;}}
}
B6414f6:L6414f6:{c.instructions+=1;NFSU2_TR(0x6414f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6414f9:L6414f9:{c.instructions+=12;NFSU2_TR(0x6414f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6414fc:{NFSU2_TR(0x6414fc);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6414fe:{NFSU2_TR(0x6414fe);
__builtin_memmove((R+0),(R+8),4);
}
B641500:{NFSU2_TR(0x641500);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B641502:{NFSU2_TR(0x641502);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B641505:{NFSU2_TR(0x641505);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B641507:{NFSU2_TR(0x641507);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B64150a:{NFSU2_TR(0x64150a);
__builtin_memmove((R+4),(R+0),4);
}
B64150c:{NFSU2_TR(0x64150c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64150f:{NFSU2_TR(0x64150f);
__builtin_memmove((R+8),(R+4),4);
}
B641511:{NFSU2_TR(0x641511);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B641514:{NFSU2_TR(0x641514);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe38ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64151a:L64151a:{c.instructions+=1;NFSU2_TR(0x64151a);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L64151c;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64151au);}goto L64151a;}
}
B64151c:L64151c:{c.instructions+=4;NFSU2_TR(0x64151c);
__builtin_memmove((R+4),(R+8),4);
}
B64151e:{NFSU2_TR(0x64151e);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B641521:{NFSU2_TR(0x641521);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B641522:{NFSU2_TR(0x641522);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
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
B641525:L641525:{c.instructions+=1;NFSU2_TR(0x641525);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L641527;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x641525u);}goto L641525;}
}
B641527:L641527:{c.instructions+=2;NFSU2_TR(0x641527);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64152a:{NFSU2_TR(0x64152a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6413e1u);}goto L6413e1;}}
}
B641530:L641530:{c.instructions+=1;NFSU2_TR(0x641530);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B641532:L641532:{c.instructions+=5;NFSU2_TR(0x641532);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B641533:{NFSU2_TR(0x641533);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B641534:{NFSU2_TR(0x641534);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B641535:{NFSU2_TR(0x641535);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B641536:{NFSU2_TR(0x641536);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B641539:L641539:{c.instructions+=10;NFSU2_TR(0x641539);
__builtin_memmove((R+28),(R+28),4);
}
B64153b:{NFSU2_TR(0x64153b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64153c:{NFSU2_TR(0x64153c);
__builtin_memmove((R+20),(R+16),4);
}
B64153e:{NFSU2_TR(0x64153e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64153f:{NFSU2_TR(0x64153f);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
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
B641543:{NFSU2_TR(0x641543);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B641546:{NFSU2_TR(0x641546);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B641547:{NFSU2_TR(0x641547);
u8 U[4];
w4(U+0,u32(0x7ab494ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64154c:{NFSU2_TR(0x64154c);
u8 U[4];
w4(U+0,u32(0x80000002ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B641551:{NFSU2_TR(0x641551);
u8 U[4];
__builtin_memmove((U+0),gp(0x78300c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x641557ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B641557:L641557:{c.instructions+=2;NFSU2_TR(0x641557);
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
B641559:{NFSU2_TR(0x641559);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L641592;}}
}
B64155b:L64155b:{c.instructions+=10;NFSU2_TR(0x64155b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64155c:{NFSU2_TR(0x64155c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64155f:{NFSU2_TR(0x64155f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B641560:{NFSU2_TR(0x641560);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B641563:{NFSU2_TR(0x641563);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B641566:{NFSU2_TR(0x641566);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B641567:{NFSU2_TR(0x641567);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B641569:{NFSU2_TR(0x641569);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64156c:{NFSU2_TR(0x64156c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64156f:{NFSU2_TR(0x64156f);
u8 U[4];
__builtin_memmove((U+0),gp(0x783004),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x641575ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B641575:L641575:{c.instructions+=3;NFSU2_TR(0x641575);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B641578:{NFSU2_TR(0x641578);
__builtin_memmove((R+24),(R+0),4);
}
B64157a:{NFSU2_TR(0x64157a);
u8 U[4];
__builtin_memmove((U+0),gp(0x783014),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x641580ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B641580:L641580:{c.instructions+=3;NFSU2_TR(0x641580);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B641582:{NFSU2_TR(0x641582);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B641583:{NFSU2_TR(0x641583);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L641592;}}
}
B641585:L641585:{c.instructions+=3;NFSU2_TR(0x641585);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B641588:{NFSU2_TR(0x641588);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64158b:{NFSU2_TR(0x64158b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L641592;}}
}
B64158d:L64158d:{c.instructions+=3;NFSU2_TR(0x64158d);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B64158f:{NFSU2_TR(0x64158f);
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
B641590:{NFSU2_TR(0x641590);
{goto L641594;}
}
B641592:L641592:{c.instructions+=1;NFSU2_TR(0x641592);
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
B641594:L641594:{c.instructions+=2;NFSU2_TR(0x641594);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B641595:{NFSU2_TR(0x641595);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B641598:L641598:{c.instructions+=21;NFSU2_TR(0x641598);
__builtin_memmove((R+28),(R+28),4);
}
B64159a:{NFSU2_TR(0x64159a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64159b:{NFSU2_TR(0x64159b);
__builtin_memmove((R+20),(R+16),4);
}
B64159d:{NFSU2_TR(0x64159d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64159e:{NFSU2_TR(0x64159e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64159f:{NFSU2_TR(0x64159f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6415a0:{NFSU2_TR(0x6415a0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6415a1:{NFSU2_TR(0x6415a1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6415a3:{NFSU2_TR(0x6415a3);
u8 U[8];
__builtin_memmove((U+4),(R+16),4);
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
__builtin_memmove((U+0),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6415a4:{NFSU2_TR(0x6415a4);
w4(R+0,u32(0x1ull));
}
B6415a9:{NFSU2_TR(0x6415a9);
u8 U[32];
w4(U+0,u32(0x0ull));
w1(U+4,u8((r4(R+0))==(u32(0x0ull))));
if(r1(U+4)){goto L6415a9_35;}
w1(U+5,u8((r4(R+0))==(u32(0x1ull))));
if(r1(U+5)){goto L6415a9_37;}
w1(U+6,u8((r4(R+0))==(u32(0x2ull))));
if(r1(U+6)){goto L6415a9_39;}
w1(U+7,u8((r4(R+0))==(u32(0x3ull))));
if(r1(U+7)){goto L6415a9_41;}
w1(U+8,u8((r4(R+0))==(u32(0x4ull))));
if(r1(U+8)){goto L6415a9_43;}
w1(U+9,u8((r4(R+0))==(u32(0x5ull))));
if(r1(U+9)){goto L6415a9_45;}
w1(U+10,u8((r4(R+0))==(u32(0x6ull))));
if(r1(U+10)){goto L6415a9_47;}
w1(U+11,u8((r4(R+0))==(u32(0x7ull))));
if(r1(U+11)){goto L6415a9_49;}
w1(U+12,u8((r4(R+0))==(u32(0x9ull))));
if(r1(U+12)){goto L6415a9_51;}
w1(U+13,u8((r4(R+0))==(u32(0xaull))));
if(r1(U+13)){goto L6415a9_53;}
w1(U+14,u8((r4(R+0))==(u32(0xbull))));
if(r1(U+14)){goto L6415a9_55;}
w1(U+15,u8((r4(R+0))==(u32(0xdull))));
if(r1(U+15)){goto L6415a9_57;}
w1(U+16,u8((r4(R+0))==(u32(0xfull))));
if(r1(U+16)){goto L6415a9_59;}
w1(U+17,u8((r4(R+0))==(u32(0x80000002ull))));
if(r1(U+17)){goto L6415a9_61;}
w1(U+18,u8((r4(R+0))==(u32(0x80000003ull))));
if(r1(U+18)){goto L6415a9_63;}
w1(U+19,u8((r4(R+0))==(u32(0x80000004ull))));
if(r1(U+19)){goto L6415a9_65;}
{SPILL();c.pc=0x6415a9u;V r_=user_op(c,262189,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6415a9_67;
L6415a9_35:;
{SPILL();c.pc=0x6415a9u;V r_=user_op(c,262190,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6415a9_67;
L6415a9_37:;
{SPILL();c.pc=0x6415a9u;V r_=user_op(c,262191,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6415a9_67;
L6415a9_39:;
{SPILL();c.pc=0x6415a9u;V r_=user_op(c,262192,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6415a9_67;
L6415a9_41:;
{SPILL();c.pc=0x6415a9u;V r_=user_op(c,262193,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6415a9_67;
L6415a9_43:;
{SPILL();c.pc=0x6415a9u;V r_=user_op(c,262194,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6415a9_67;
L6415a9_45:;
{SPILL();c.pc=0x6415a9u;V r_=user_op(c,262195,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6415a9_67;
L6415a9_47:;
{SPILL();c.pc=0x6415a9u;V r_=user_op(c,262196,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6415a9_67;
L6415a9_49:;
{SPILL();c.pc=0x6415a9u;V r_=user_op(c,262197,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6415a9_67;
L6415a9_51:;
{SPILL();c.pc=0x6415a9u;V r_=user_op(c,262198,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6415a9_67;
L6415a9_53:;
{SPILL();c.pc=0x6415a9u;V r_=user_op(c,262199,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6415a9_67;
L6415a9_55:;
{SPILL();c.pc=0x6415a9u;V r_=user_op(c,262200,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6415a9_67;
L6415a9_57:;
{SPILL();c.pc=0x6415a9u;V r_=user_op(c,262201,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6415a9_67;
L6415a9_59:;
{SPILL();c.pc=0x6415a9u;V r_=user_op(c,262202,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6415a9_67;
L6415a9_61:;
{SPILL();c.pc=0x6415a9u;V r_=user_op(c,262203,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6415a9_67;
L6415a9_63:;
{SPILL();c.pc=0x6415a9u;V r_=user_op(c,262204,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6415a9_67;
L6415a9_65:;
{SPILL();c.pc=0x6415a9u;V r_=user_op(c,262205,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6415a9_67;
L6415a9_67:;
__builtin_memmove((R+0),gp(u32(r4(U+0))),4);
w4(U+20,u32(u32(r4(U+0))+u32(u32(0x4ull))));
__builtin_memmove((R+12),gp(u32(r4(U+20))),4);
w4(U+24,u32(u32(r4(U+0))+u32(u32(0x8ull))));
__builtin_memmove((R+8),gp(u32(r4(U+24))),4);
w4(U+28,u32(u32(r4(U+0))+u32(u32(0xcull))));
__builtin_memmove((R+4),gp(u32(r4(U+28))),4);
}
B6415ab:{NFSU2_TR(0x6415ab);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+8))&u32(u32(0x800000ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6415b1:{NFSU2_TR(0x6415b1);
__builtin_memmove((R+28),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6415b2:{NFSU2_TR(0x6415b2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B6415b5:{NFSU2_TR(0x6415b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6415b8:{NFSU2_TR(0x6415b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6415bb:{NFSU2_TR(0x6415bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6415bc:{NFSU2_TR(0x6415bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6415bd:{NFSU2_TR(0x6415bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6415be:{NFSU2_TR(0x6415be);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6415bf:{NFSU2_TR(0x6415bf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6415c0:L6415c0:{c.instructions+=10;NFSU2_TR(0x6415c0);
__builtin_memmove((R+28),(R+28),4);
}
B6415c2:{NFSU2_TR(0x6415c2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6415c3:{NFSU2_TR(0x6415c3);
__builtin_memmove((R+20),(R+16),4);
}
B6415c5:{NFSU2_TR(0x6415c5);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x34ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x34ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x34ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6415c8:{NFSU2_TR(0x6415c8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6415c9:{NFSU2_TR(0x6415c9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6415cc:{NFSU2_TR(0x6415cc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6415cd:{NFSU2_TR(0x6415cd);
u8 U[4];
w4(U+0,u32(0x7ab494ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6415d2:{NFSU2_TR(0x6415d2);
u8 U[4];
w4(U+0,u32(0x80000002ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6415d7:{NFSU2_TR(0x6415d7);
u8 U[4];
__builtin_memmove((U+0),gp(0x78300c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6415ddull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6415dd:L6415dd:{c.instructions+=3;NFSU2_TR(0x6415dd);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6415df:{NFSU2_TR(0x6415df);
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
B6415e1:{NFSU2_TR(0x6415e1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L641630;}}
}
B6415e3:L6415e3:{c.instructions+=11;NFSU2_TR(0x6415e3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6415e6:{NFSU2_TR(0x6415e6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6415e7:{NFSU2_TR(0x6415e7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6415ea:{NFSU2_TR(0x6415ea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6415eb:{NFSU2_TR(0x6415eb);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6415ee:{NFSU2_TR(0x6415ee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6415ef:{NFSU2_TR(0x6415ef);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6415f0:{NFSU2_TR(0x6415f0);
u8 U[4];
w4(U+0,u32(0x7ab4b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6415f5:{NFSU2_TR(0x6415f5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6415f8:{NFSU2_TR(0x6415f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6415ff:{NFSU2_TR(0x6415ff);
u8 U[4];
__builtin_memmove((U+0),gp(0x783004),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x641605ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B641605:L641605:{c.instructions+=2;NFSU2_TR(0x641605);
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
B641607:{NFSU2_TR(0x641607);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L641627;}}
}
B641609:L641609:{c.instructions+=2;NFSU2_TR(0x641609);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
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
B64160d:{NFSU2_TR(0x64160d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L641627;}}
}
B64160f:L64160f:{c.instructions+=2;NFSU2_TR(0x64160f);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
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
B641612:{NFSU2_TR(0x641612);
if(r1(R+518)){{goto L641627;}}
}
B641614:L641614:{c.instructions+=2;NFSU2_TR(0x641614);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B641617:{NFSU2_TR(0x641617);
u8 U[4];
__builtin_memmove((U+0),gp(0x783014),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64161dull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B64161d:L64161d:{c.instructions+=3;NFSU2_TR(0x64161d);
__builtin_memmove(gp(0x8040b8),(R+28),4);
}
B641623:{NFSU2_TR(0x641623);
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
B641625:{NFSU2_TR(0x641625);
{goto L64166f;}
}
B641627:L641627:{c.instructions+=2;NFSU2_TR(0x641627);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64162a:{NFSU2_TR(0x64162a);
u8 U[4];
__builtin_memmove((U+0),gp(0x783014),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x641630ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B641630:L641630:{c.instructions+=2;NFSU2_TR(0x641630);
u8 U[14];
__builtin_memmove((U+6),gp(0x8040b8),4);
w1(R+512,u8((r4(U+6))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+28)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B641636:{NFSU2_TR(0x641636);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L64166a;}}
}
B641638:L641638:{c.instructions+=4;NFSU2_TR(0x641638);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((R+0),(U+0),4);
}
B64163b:{NFSU2_TR(0x64163b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64163c:{NFSU2_TR(0x64163c);
__builtin_memmove(gp(0x8040b8),(R+28),4);
}
B641642:{NFSU2_TR(0x641642);
u8 U[4];
__builtin_memmove((U+0),gp(0x7831a0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x641648ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B641648:L641648:{c.instructions+=2;NFSU2_TR(0x641648);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+10),(U+4),2);
w1(R+512,u8((r2(U+10))<(r2(R+28))));
w1(R+523,sborrow<u16>(r2(U+10),r2(R+28)));
w2(U+12,u16(u32(r2(U+10))-u32(r2(R+28))));
w1(R+519,u8(s16(r2(U+12))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+12))==(u16(0x0ull))));
w2(U+6,u16(u32(r2(U+12))&u32(u16(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r2(U+6)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B64164c:{NFSU2_TR(0x64164c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64166a;}}
}
B64164e:L64164e:{c.instructions+=2;NFSU2_TR(0x64164e);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+10),(U+4),2);
w1(R+512,u8((r2(U+10))<(u16(0x5ull))));
w1(R+523,sborrow<u16>(r2(U+10),u16(0x5ull)));
w2(U+12,u16(u32(r2(U+10))-u32(u16(0x5ull))));
w1(R+519,u8(s16(r2(U+12))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+12))==(u16(0x0ull))));
w2(U+6,u16(u32(r2(U+12))&u32(u16(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r2(U+6)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B641653:{NFSU2_TR(0x641653);
if(r1(R+512)){{goto L64166a;}}
}
B641655:L641655:{c.instructions+=1;NFSU2_TR(0x641655);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64165aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x641598u);}goto L641598;}
}
B64165a:L64165a:{c.instructions+=2;NFSU2_TR(0x64165a);
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
B64165c:{NFSU2_TR(0x64165c);
if(r1(R+518)){{goto L64166a;}}
}
B64165e:L64165e:{c.instructions+=2;NFSU2_TR(0x64165e);
w2(R+4260,u16(0xffffull));
}
B641660:{NFSU2_TR(0x641660);
s4(0x8040b8,u32(0x1ull));
}
B64166a:L64166a:{c.instructions+=1;NFSU2_TR(0x64166a);
__builtin_memmove((R+0),gp(0x8040b8),4);
}
B64166f:L64166f:{c.instructions+=3;NFSU2_TR(0x64166f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B641670:{NFSU2_TR(0x641670);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B641671:{NFSU2_TR(0x641671);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B641672:L641672:{c.instructions+=2;NFSU2_TR(0x641672);
w4(R+0,u32(0x77a5f5ull));
}
B641677:{NFSU2_TR(0x641677);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64167cull));
TAIL_STATIC(0x75dd50u,75d);
}
B64167c:L64167c:{c.instructions+=21;NFSU2_TR(0x64167c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64167d:{NFSU2_TR(0x64167d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x2cull))));
}
B641680:{NFSU2_TR(0x641680);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B641681:{NFSU2_TR(0x641681);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B641682:{NFSU2_TR(0x641682);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B641683:{NFSU2_TR(0x641683);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B641686:{NFSU2_TR(0x641686);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64168a:{NFSU2_TR(0x64168a);
w4(R+24,u32(0x7ab4bcull));
}
B64168f:{NFSU2_TR(0x64168f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+28),(U+0),4);
}
B641692:{NFSU2_TR(0x641692);
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
B641693:{NFSU2_TR(0x641693);
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
B641694:{NFSU2_TR(0x641694);
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
B641695:{NFSU2_TR(0x641695);
u8 U[34];
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
}
B641696:{NFSU2_TR(0x641696);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64169a:{NFSU2_TR(0x64169a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B64169c:{NFSU2_TR(0x64169c);
u8 U[32];
w4(U+0,u32(0x0ull));
w1(U+4,u8((r4(R+0))==(u32(0x0ull))));
if(r1(U+4)){goto L64169c_35;}
w1(U+5,u8((r4(R+0))==(u32(0x1ull))));
if(r1(U+5)){goto L64169c_37;}
w1(U+6,u8((r4(R+0))==(u32(0x2ull))));
if(r1(U+6)){goto L64169c_39;}
w1(U+7,u8((r4(R+0))==(u32(0x3ull))));
if(r1(U+7)){goto L64169c_41;}
w1(U+8,u8((r4(R+0))==(u32(0x4ull))));
if(r1(U+8)){goto L64169c_43;}
w1(U+9,u8((r4(R+0))==(u32(0x5ull))));
if(r1(U+9)){goto L64169c_45;}
w1(U+10,u8((r4(R+0))==(u32(0x6ull))));
if(r1(U+10)){goto L64169c_47;}
w1(U+11,u8((r4(R+0))==(u32(0x7ull))));
if(r1(U+11)){goto L64169c_49;}
w1(U+12,u8((r4(R+0))==(u32(0x9ull))));
if(r1(U+12)){goto L64169c_51;}
w1(U+13,u8((r4(R+0))==(u32(0xaull))));
if(r1(U+13)){goto L64169c_53;}
w1(U+14,u8((r4(R+0))==(u32(0xbull))));
if(r1(U+14)){goto L64169c_55;}
w1(U+15,u8((r4(R+0))==(u32(0xdull))));
if(r1(U+15)){goto L64169c_57;}
w1(U+16,u8((r4(R+0))==(u32(0xfull))));
if(r1(U+16)){goto L64169c_59;}
w1(U+17,u8((r4(R+0))==(u32(0x80000002ull))));
if(r1(U+17)){goto L64169c_61;}
w1(U+18,u8((r4(R+0))==(u32(0x80000003ull))));
if(r1(U+18)){goto L64169c_63;}
w1(U+19,u8((r4(R+0))==(u32(0x80000004ull))));
if(r1(U+19)){goto L64169c_65;}
{SPILL();c.pc=0x64169cu;V r_=user_op(c,262189,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L64169c_67;
L64169c_35:;
{SPILL();c.pc=0x64169cu;V r_=user_op(c,262190,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L64169c_67;
L64169c_37:;
{SPILL();c.pc=0x64169cu;V r_=user_op(c,262191,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L64169c_67;
L64169c_39:;
{SPILL();c.pc=0x64169cu;V r_=user_op(c,262192,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L64169c_67;
L64169c_41:;
{SPILL();c.pc=0x64169cu;V r_=user_op(c,262193,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L64169c_67;
L64169c_43:;
{SPILL();c.pc=0x64169cu;V r_=user_op(c,262194,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L64169c_67;
L64169c_45:;
{SPILL();c.pc=0x64169cu;V r_=user_op(c,262195,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L64169c_67;
L64169c_47:;
{SPILL();c.pc=0x64169cu;V r_=user_op(c,262196,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L64169c_67;
L64169c_49:;
{SPILL();c.pc=0x64169cu;V r_=user_op(c,262197,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L64169c_67;
L64169c_51:;
{SPILL();c.pc=0x64169cu;V r_=user_op(c,262198,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L64169c_67;
L64169c_53:;
{SPILL();c.pc=0x64169cu;V r_=user_op(c,262199,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L64169c_67;
L64169c_55:;
{SPILL();c.pc=0x64169cu;V r_=user_op(c,262200,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L64169c_67;
L64169c_57:;
{SPILL();c.pc=0x64169cu;V r_=user_op(c,262201,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L64169c_67;
L64169c_59:;
{SPILL();c.pc=0x64169cu;V r_=user_op(c,262202,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L64169c_67;
L64169c_61:;
{SPILL();c.pc=0x64169cu;V r_=user_op(c,262203,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L64169c_67;
L64169c_63:;
{SPILL();c.pc=0x64169cu;V r_=user_op(c,262204,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L64169c_67;
L64169c_65:;
{SPILL();c.pc=0x64169cu;V r_=user_op(c,262205,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L64169c_67;
L64169c_67:;
__builtin_memmove((R+0),gp(u32(r4(U+0))),4);
w4(U+20,u32(u32(r4(U+0))+u32(u32(0x4ull))));
__builtin_memmove((R+12),gp(u32(r4(U+20))),4);
w4(U+24,u32(u32(r4(U+0))+u32(u32(0x8ull))));
__builtin_memmove((R+8),gp(u32(r4(U+24))),4);
w4(U+28,u32(u32(r4(U+0))+u32(u32(0xcull))));
__builtin_memmove((R+4),gp(u32(r4(U+28))),4);
}
B64169e:{NFSU2_TR(0x64169e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6416a1:{NFSU2_TR(0x6416a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6416a4:{NFSU2_TR(0x6416a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6416a7:{NFSU2_TR(0x6416a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6416aa:{NFSU2_TR(0x6416aa);
{goto L6416b8;}
}
B6416ac:L6416ac:{c.instructions+=4;NFSU2_TR(0x6416ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6416af:{NFSU2_TR(0x6416af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6416b2:{NFSU2_TR(0x6416b2);
w4(R+0,u32(0x6416beull));
}
B6416b7:{NFSU2_TR(0x6416b7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6416b8:L6416b8:{c.instructions+=2;NFSU2_TR(0x6416b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6416bc:{NFSU2_TR(0x6416bc);
{goto L6416c3;}
}
B6416be:L6416be:{c.instructions+=2;NFSU2_TR(0x6416be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6416c1:{NFSU2_TR(0x6416c1);
{goto L641704;}
}
B6416c3:L6416c3:{c.instructions+=2;NFSU2_TR(0x6416c3);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
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
B6416c7:{NFSU2_TR(0x6416c7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6416ce;}}
}
B6416c9:L6416c9:{c.instructions+=2;NFSU2_TR(0x6416c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6416cc:{NFSU2_TR(0x6416cc);
{goto L641704;}
}
B6416ce:L6416ce:{c.instructions+=7;NFSU2_TR(0x6416ce);
w4(R+0,u32(0x1ull));
}
B6416d3:{NFSU2_TR(0x6416d3);
u8 U[32];
w4(U+0,u32(0x0ull));
w1(U+4,u8((r4(R+0))==(u32(0x0ull))));
if(r1(U+4)){goto L6416d3_35;}
w1(U+5,u8((r4(R+0))==(u32(0x1ull))));
if(r1(U+5)){goto L6416d3_37;}
w1(U+6,u8((r4(R+0))==(u32(0x2ull))));
if(r1(U+6)){goto L6416d3_39;}
w1(U+7,u8((r4(R+0))==(u32(0x3ull))));
if(r1(U+7)){goto L6416d3_41;}
w1(U+8,u8((r4(R+0))==(u32(0x4ull))));
if(r1(U+8)){goto L6416d3_43;}
w1(U+9,u8((r4(R+0))==(u32(0x5ull))));
if(r1(U+9)){goto L6416d3_45;}
w1(U+10,u8((r4(R+0))==(u32(0x6ull))));
if(r1(U+10)){goto L6416d3_47;}
w1(U+11,u8((r4(R+0))==(u32(0x7ull))));
if(r1(U+11)){goto L6416d3_49;}
w1(U+12,u8((r4(R+0))==(u32(0x9ull))));
if(r1(U+12)){goto L6416d3_51;}
w1(U+13,u8((r4(R+0))==(u32(0xaull))));
if(r1(U+13)){goto L6416d3_53;}
w1(U+14,u8((r4(R+0))==(u32(0xbull))));
if(r1(U+14)){goto L6416d3_55;}
w1(U+15,u8((r4(R+0))==(u32(0xdull))));
if(r1(U+15)){goto L6416d3_57;}
w1(U+16,u8((r4(R+0))==(u32(0xfull))));
if(r1(U+16)){goto L6416d3_59;}
w1(U+17,u8((r4(R+0))==(u32(0x80000002ull))));
if(r1(U+17)){goto L6416d3_61;}
w1(U+18,u8((r4(R+0))==(u32(0x80000003ull))));
if(r1(U+18)){goto L6416d3_63;}
w1(U+19,u8((r4(R+0))==(u32(0x80000004ull))));
if(r1(U+19)){goto L6416d3_65;}
{SPILL();c.pc=0x6416d3u;V r_=user_op(c,262189,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6416d3_67;
L6416d3_35:;
{SPILL();c.pc=0x6416d3u;V r_=user_op(c,262190,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6416d3_67;
L6416d3_37:;
{SPILL();c.pc=0x6416d3u;V r_=user_op(c,262191,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6416d3_67;
L6416d3_39:;
{SPILL();c.pc=0x6416d3u;V r_=user_op(c,262192,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6416d3_67;
L6416d3_41:;
{SPILL();c.pc=0x6416d3u;V r_=user_op(c,262193,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6416d3_67;
L6416d3_43:;
{SPILL();c.pc=0x6416d3u;V r_=user_op(c,262194,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6416d3_67;
L6416d3_45:;
{SPILL();c.pc=0x6416d3u;V r_=user_op(c,262195,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6416d3_67;
L6416d3_47:;
{SPILL();c.pc=0x6416d3u;V r_=user_op(c,262196,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6416d3_67;
L6416d3_49:;
{SPILL();c.pc=0x6416d3u;V r_=user_op(c,262197,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6416d3_67;
L6416d3_51:;
{SPILL();c.pc=0x6416d3u;V r_=user_op(c,262198,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6416d3_67;
L6416d3_53:;
{SPILL();c.pc=0x6416d3u;V r_=user_op(c,262199,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6416d3_67;
L6416d3_55:;
{SPILL();c.pc=0x6416d3u;V r_=user_op(c,262200,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6416d3_67;
L6416d3_57:;
{SPILL();c.pc=0x6416d3u;V r_=user_op(c,262201,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6416d3_67;
L6416d3_59:;
{SPILL();c.pc=0x6416d3u;V r_=user_op(c,262202,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6416d3_67;
L6416d3_61:;
{SPILL();c.pc=0x6416d3u;V r_=user_op(c,262203,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6416d3_67;
L6416d3_63:;
{SPILL();c.pc=0x6416d3u;V r_=user_op(c,262204,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6416d3_67;
L6416d3_65:;
{SPILL();c.pc=0x6416d3u;V r_=user_op(c,262205,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6416d3_67;
L6416d3_67:;
__builtin_memmove((R+0),gp(u32(r4(U+0))),4);
w4(U+20,u32(u32(r4(U+0))+u32(u32(0x4ull))));
__builtin_memmove((R+12),gp(u32(r4(U+20))),4);
w4(U+24,u32(u32(r4(U+0))+u32(u32(0x8ull))));
__builtin_memmove((R+8),gp(u32(r4(U+24))),4);
w4(U+28,u32(u32(r4(U+0))+u32(u32(0xcull))));
__builtin_memmove((R+4),gp(u32(r4(U+28))),4);
}
B6416d5:{NFSU2_TR(0x6416d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6416d8:{NFSU2_TR(0x6416d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6416db:{NFSU2_TR(0x6416db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6416de:{NFSU2_TR(0x6416de);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x2000000ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6416e3:{NFSU2_TR(0x6416e3);
if(r1(R+518)){{goto L6416ee;}}
}
B6416e5:L6416e5:{c.instructions+=3;NFSU2_TR(0x6416e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6416e8:{NFSU2_TR(0x6416e8);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x4ull))));
}
B6416eb:{NFSU2_TR(0x6416eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6416ee:L6416ee:{c.instructions+=3;NFSU2_TR(0x6416ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6416f1:{NFSU2_TR(0x6416f1);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x4000000ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6416f6:{NFSU2_TR(0x6416f6);
if(r1(R+518)){{goto L641701;}}
}
B6416f8:L6416f8:{c.instructions+=3;NFSU2_TR(0x6416f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6416fb:{NFSU2_TR(0x6416fb);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6416fe:{NFSU2_TR(0x6416fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B641701:L641701:{c.instructions+=1;NFSU2_TR(0x641701);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B641704:L641704:{c.instructions+=7;NFSU2_TR(0x641704);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B641707:{NFSU2_TR(0x641707);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64170e:{NFSU2_TR(0x64170e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64170f:{NFSU2_TR(0x64170f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B641710:{NFSU2_TR(0x641710);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B641711:{NFSU2_TR(0x641711);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B641712:{NFSU2_TR(0x641712);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B641713:L641713:{c.instructions+=8;NFSU2_TR(0x641713);
__builtin_memmove((R+28),(R+28),4);
}
B641715:{NFSU2_TR(0x641715);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B641716:{NFSU2_TR(0x641716);
__builtin_memmove((R+20),(R+16),4);
}
B641718:{NFSU2_TR(0x641718);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B641719:{NFSU2_TR(0x641719);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64171a:{NFSU2_TR(0x64171a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64171b:{NFSU2_TR(0x64171b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64171c:{NFSU2_TR(0x64171c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x641721ull));
TAIL_STATIC(0x671bc2u,671);
}
B641721:L641721:{c.instructions+=2;NFSU2_TR(0x641721);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B641725:{NFSU2_TR(0x641725);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L641745;}}
}
B641727:L641727:{c.instructions+=5;NFSU2_TR(0x641727);
u8 U[4];
w4(U+0,u32(0x4aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B641729:{NFSU2_TR(0x641729);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64172a:{NFSU2_TR(0x64172a);
w4(R+24,u32(0x803f90ull));
}
B64172f:{NFSU2_TR(0x64172f);
w4(R+28,u32(0x803e68ull));
}
B641734:{NFSU2_TR(0x641734);
s4(0x8040bc,u32(0xffffull));
}
B64173e:L64173e:{c.instructions+=1;NFSU2_TR(0x64173e);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L641740;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64173eu);}goto L64173e;}
}
B641740:L641740:{c.instructions+=1;NFSU2_TR(0x641740);
{goto L64180b;}
}
B641745:L641745:{c.instructions+=2;NFSU2_TR(0x641745);
u8 U[14];
__builtin_memmove((U+6),gp(0x8040bc),4);
w1(R+512,u8((r4(U+6))<(u32(0xffffull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xffffull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xffffull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B64174f:{NFSU2_TR(0x64174f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64180b;}}
}
B641755:L641755:{c.instructions+=8;NFSU2_TR(0x641755);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
s4(0x8040bc,u32(u32(m4(0x8040bc))&u32(u32(0x0ull))));
w1(R+519,u8(s32(m4(0x8040bc))<s32(u32(0x0ull))));
w1(R+518,u8((m4(0x8040bc))==(u32(0x0ull))));
w4(U+0,u32(u32(m4(0x8040bc))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B64175c:{NFSU2_TR(0x64175c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64175d:{NFSU2_TR(0x64175d);
u8 U[4];
w4(U+0,u32(0x4aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64175f:{NFSU2_TR(0x64175f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B641760:{NFSU2_TR(0x641760);
w4(R+12,u32(0x803e68ull));
}
B641765:{NFSU2_TR(0x641765);
w4(R+24,u32(0x803f90ull));
}
B64176a:{NFSU2_TR(0x64176a);
__builtin_memmove((R+28),(R+12),4);
}
B64176c:{NFSU2_TR(0x64176c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64176d:L64176d:{c.instructions+=1;NFSU2_TR(0x64176d);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L64176f;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64176du);}goto L64176d;}
}
B64176f:L64176f:{c.instructions+=1;NFSU2_TR(0x64176f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x641774ull));
TAIL_STATIC(0x671aa3u,671);
}
B641774:L641774:{c.instructions+=8;NFSU2_TR(0x641774);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B641776:{NFSU2_TR(0x641776);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B641777:{NFSU2_TR(0x641777);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B641778:{NFSU2_TR(0x641778);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64177b:{NFSU2_TR(0x64177b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64177c:{NFSU2_TR(0x64177c);
u8 U[4];
w4(U+0,u32(0x7ab4dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B641781:{NFSU2_TR(0x641781);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B641782:{NFSU2_TR(0x641782);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x641787ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x641539u);}goto L641539;}
}
B641787:L641787:{c.instructions+=2;NFSU2_TR(0x641787);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B641789:{NFSU2_TR(0x641789);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64178e;}}
}
B64178b:L64178b:{c.instructions+=1;NFSU2_TR(0x64178b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B64178e:L64178e:{c.instructions+=6;NFSU2_TR(0x64178e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64178f:{NFSU2_TR(0x64178f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B641792:{NFSU2_TR(0x641792);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B641793:{NFSU2_TR(0x641793);
u8 U[4];
w4(U+0,u32(0x7ab4ccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B641798:{NFSU2_TR(0x641798);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B641799:{NFSU2_TR(0x641799);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64179eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x641539u);}goto L641539;}
}
B64179e:L64179e:{c.instructions+=2;NFSU2_TR(0x64179e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6417a0:{NFSU2_TR(0x6417a0);
if(r1(R+518)){{goto L6417a8;}}
}
B6417a2:L6417a2:{c.instructions+=2;NFSU2_TR(0x6417a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6417a5:{NFSU2_TR(0x6417a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6417a8:L6417a8:{c.instructions+=2;NFSU2_TR(0x6417a8);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B6417ac:{NFSU2_TR(0x6417ac);
if(r1(R+518)){{goto L64180a;}}
}
B6417ae:L6417ae:{c.instructions+=5;NFSU2_TR(0x6417ae);
__builtin_memmove((R+24),gp(0x7831a4),4);
}
B6417b4:{NFSU2_TR(0x6417b4);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6417b6:{NFSU2_TR(0x6417b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6417b7:{NFSU2_TR(0x6417b7);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B6417ba:{NFSU2_TR(0x6417ba);
if(r1(R+518)){{goto L6417d6;}}
}
B6417bc:L6417bc:{c.instructions+=2;NFSU2_TR(0x6417bc);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6417be:{NFSU2_TR(0x6417be);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6417c0ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6417c0:L6417c0:{c.instructions+=2;NFSU2_TR(0x6417c0);
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
B6417c2:{NFSU2_TR(0x6417c2);
if(r1(R+518)){{goto L6417d6;}}
}
B6417c4:L6417c4:{c.instructions+=2;NFSU2_TR(0x6417c4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6417c5:{NFSU2_TR(0x6417c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6417caull));
TAIL_STATIC(0x6713a1u,671);
}
B6417ca:L6417ca:{c.instructions+=2;NFSU2_TR(0x6417ca);
s4(0x8040bc,u32(0x1ull));
}
B6417d4:{NFSU2_TR(0x6417d4);
{goto L641809;}
}
B6417d6:L6417d6:{c.instructions+=1;NFSU2_TR(0x6417d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6417dbull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x641672u);}goto L641672;}
}
B6417db:L6417db:{c.instructions+=3;NFSU2_TR(0x6417db);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6417de:{NFSU2_TR(0x6417de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6417e1:{NFSU2_TR(0x6417e1);
if(r1(R+518)){{goto L6417f1;}}
}
B6417e3:L6417e3:{c.instructions+=2;NFSU2_TR(0x6417e3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6417e4:{NFSU2_TR(0x6417e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6417e9ull));
TAIL_STATIC(0x671152u,671);
}
B6417e9:L6417e9:{c.instructions+=2;NFSU2_TR(0x6417e9);
__builtin_memmove(gp(0x8040bc),(R+28),4);
}
B6417ef:{NFSU2_TR(0x6417ef);
{goto L641809;}
}
B6417f1:L6417f1:{c.instructions+=2;NFSU2_TR(0x6417f1);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6417f3:{NFSU2_TR(0x6417f3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6417f5ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6417f5:L6417f5:{c.instructions+=2;NFSU2_TR(0x6417f5);
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
B6417f7:{NFSU2_TR(0x6417f7);
if(r1(R+518)){{goto L64180a;}}
}
B6417f9:L6417f9:{c.instructions+=2;NFSU2_TR(0x6417f9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6417fa:{NFSU2_TR(0x6417fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6417ffull));
TAIL_STATIC(0x670fdfu,670);
}
B6417ff:L6417ff:{c.instructions+=1;NFSU2_TR(0x6417ff);
s4(0x8040bc,u32(0x3ull));
}
B641809:L641809:{c.instructions+=1;NFSU2_TR(0x641809);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64180a:L64180a:{c.instructions+=1;NFSU2_TR(0x64180a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B64180b:L64180b:{c.instructions+=5;NFSU2_TR(0x64180b);
__builtin_memmove((R+0),gp(0x8040bc),4);
}
B641810:{NFSU2_TR(0x641810);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B641811:{NFSU2_TR(0x641811);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B641812:{NFSU2_TR(0x641812);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B641813:{NFSU2_TR(0x641813);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B641816:L641816:{c.instructions+=6;NFSU2_TR(0x641816);
__builtin_memmove((R+28),(R+28),4);
}
B641818:{NFSU2_TR(0x641818);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B641819:{NFSU2_TR(0x641819);
__builtin_memmove((R+20),(R+16),4);
}
B64181b:{NFSU2_TR(0x64181b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64181c:{NFSU2_TR(0x64181c);
__builtin_memmove((R+24),(R+4),4);
}
B64181e:{NFSU2_TR(0x64181e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x641823ull));
{goto L641878;}
}
B641823:L641823:{c.instructions+=2;NFSU2_TR(0x641823);
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
B641827:{NFSU2_TR(0x641827);
if(r1(R+518)){{goto L641830;}}
}
B641829:L641829:{c.instructions+=2;NFSU2_TR(0x641829);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64182a:{NFSU2_TR(0x64182a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64182full));
TAIL_STATIC(0x575630u,575);
}
B64182f:L64182f:{c.instructions+=1;NFSU2_TR(0x64182f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B641830:L641830:{c.instructions+=4;NFSU2_TR(0x641830);
__builtin_memmove((R+0),(R+24),4);
}
B641832:{NFSU2_TR(0x641832);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B641833:{NFSU2_TR(0x641833);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B641834:{NFSU2_TR(0x641834);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B641837:L641837:{c.instructions+=6;NFSU2_TR(0x641837);
__builtin_memmove((R+28),(R+28),4);
}
B641839:{NFSU2_TR(0x641839);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64183a:{NFSU2_TR(0x64183a);
__builtin_memmove((R+24),(R+4),4);
}
B64183c:{NFSU2_TR(0x64183c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64183f:{NFSU2_TR(0x64183f);
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
B641841:{NFSU2_TR(0x641841);
if(r1(R+518)){{goto L64184e;}}
}
B641843:L641843:{c.instructions+=2;NFSU2_TR(0x641843);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B641844:{NFSU2_TR(0x641844);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x641849ull));
TAIL_STATIC(0x575630u,575);
}
B641849:L641849:{c.instructions+=2;NFSU2_TR(0x641849);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
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
B64184d:{NFSU2_TR(0x64184d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64184e:L64184e:{c.instructions+=8;NFSU2_TR(0x64184e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B641851:{NFSU2_TR(0x641851);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B641854:{NFSU2_TR(0x641854);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B641857:{NFSU2_TR(0x641857);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64185a:{NFSU2_TR(0x64185a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64185d:{NFSU2_TR(0x64185d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B641860:{NFSU2_TR(0x641860);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B641861:{NFSU2_TR(0x641861);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B641862:L641862:{c.instructions+=9;NFSU2_TR(0x641862);
__builtin_memmove((R+0),(R+4),4);
}
B641864:{NFSU2_TR(0x641864);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((R+8),(U+0),4);
}
B641867:{NFSU2_TR(0x641867);
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
B641869:{NFSU2_TR(0x641869);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64186c:{NFSU2_TR(0x64186c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B64186e:{NFSU2_TR(0x64186e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B641871:{NFSU2_TR(0x641871);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B641874:{NFSU2_TR(0x641874);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B641877:{NFSU2_TR(0x641877);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B641878:L641878:{c.instructions+=4;NFSU2_TR(0x641878);
__builtin_memmove((R+28),(R+28),4);
}
B64187a:{NFSU2_TR(0x64187a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64187b:{NFSU2_TR(0x64187b);
__builtin_memmove((R+24),(R+4),4);
}
B64187d:{NFSU2_TR(0x64187d);
{goto L641893;}
}
B64187f:L64187f:{c.instructions+=6;NFSU2_TR(0x64187f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B641882:{NFSU2_TR(0x641882);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B641885:{NFSU2_TR(0x641885);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B641888:{NFSU2_TR(0x641888);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64188c:{NFSU2_TR(0x64188c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64188e:{NFSU2_TR(0x64188e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x641893ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x641816u);}goto L641816;}
}
B641893:L641893:{c.instructions+=2;NFSU2_TR(0x641893);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B641897:{NFSU2_TR(0x641897);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64187fu);}goto L64187f;}}
}
B641899:L641899:{c.instructions+=3;NFSU2_TR(0x641899);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B64189c:{NFSU2_TR(0x64189c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64189d:{NFSU2_TR(0x64189d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x641837u);}goto L641837;}
}
B6418a2:L6418a2:{c.instructions+=17;NFSU2_TR(0x6418a2);
__builtin_memmove((R+28),(R+28),4);
}
B6418a4:{NFSU2_TR(0x6418a4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6418a5:{NFSU2_TR(0x6418a5);
__builtin_memmove((R+20),(R+16),4);
}
B6418a7:{NFSU2_TR(0x6418a7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6418a8:{NFSU2_TR(0x6418a8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6418a9:{NFSU2_TR(0x6418a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6418ac:{NFSU2_TR(0x6418ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6418ae:{NFSU2_TR(0x6418ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6418b1:{NFSU2_TR(0x6418b1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6418b2:{NFSU2_TR(0x6418b2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6418b3:{NFSU2_TR(0x6418b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6418b6:{NFSU2_TR(0x6418b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6418b8:{NFSU2_TR(0x6418b8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6418b9:{NFSU2_TR(0x6418b9);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6418bb:{NFSU2_TR(0x6418bb);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+8),r4(U+14)));
w4(U+18,u32(u32(r4(R+8))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6418be:{NFSU2_TR(0x6418be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6418c1:{NFSU2_TR(0x6418c1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L641929;}}
}
B6418c3:L6418c3:{c.instructions+=3;NFSU2_TR(0x6418c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6418c5:{NFSU2_TR(0x6418c5);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(R+8))<(r4(U+10))));
w1(R+523,sborrow<u32>(r4(R+8),r4(U+10)));
w4(U+14,u32(u32(r4(R+8))-u32(r4(U+10))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B6418c7:{NFSU2_TR(0x6418c7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L641929;}}
}
B6418c9:L6418c9:{c.instructions+=3;NFSU2_TR(0x6418c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6418cc:{NFSU2_TR(0x6418cc);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+8),r4(U+14)));
w4(U+18,u32(u32(r4(R+8))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6418cf:{NFSU2_TR(0x6418cf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L641929;}}
}
B6418d1:L6418d1:{c.instructions+=5;NFSU2_TR(0x6418d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6418d4:{NFSU2_TR(0x6418d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6418d7:{NFSU2_TR(0x6418d7);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+12))));
}
B6418d9:{NFSU2_TR(0x6418d9);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6418db:{NFSU2_TR(0x6418db);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6418e2;}}
}
B6418dd:L6418dd:{c.instructions+=2;NFSU2_TR(0x6418dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6418e0:{NFSU2_TR(0x6418e0);
{goto L6418e8;}
}
B6418e2:L6418e2:{c.instructions+=2;NFSU2_TR(0x6418e2);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6418e5:{NFSU2_TR(0x6418e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6418e8:L6418e8:{c.instructions+=5;NFSU2_TR(0x6418e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6418eb:{NFSU2_TR(0x6418eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6418ee:{NFSU2_TR(0x6418ee);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B6418f0:{NFSU2_TR(0x6418f0);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6418f3:{NFSU2_TR(0x6418f3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6418f9;}}
}
B6418f5:L6418f5:{c.instructions+=2;NFSU2_TR(0x6418f5);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6418f7:{NFSU2_TR(0x6418f7);
{goto L6418fc;}
}
B6418f9:L6418f9:{c.instructions+=1;NFSU2_TR(0x6418f9);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6418fc:L6418fc:{c.instructions+=5;NFSU2_TR(0x6418fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6418ff:{NFSU2_TR(0x6418ff);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B641901:{NFSU2_TR(0x641901);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B641903:{NFSU2_TR(0x641903);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+12))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B641905:{NFSU2_TR(0x641905);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64190c;}}
}
B641907:L641907:{c.instructions+=2;NFSU2_TR(0x641907);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64190a:{NFSU2_TR(0x64190a);
{goto L641912;}
}
B64190c:L64190c:{c.instructions+=2;NFSU2_TR(0x64190c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B64190f:{NFSU2_TR(0x64190f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B641912:L641912:{c.instructions+=4;NFSU2_TR(0x641912);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B641915:{NFSU2_TR(0x641915);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B641917:{NFSU2_TR(0x641917);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+12))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B641919:{NFSU2_TR(0x641919);
if(r1(R+518)){{goto L64191e;}}
}
B64191b:L64191b:{c.instructions+=1;NFSU2_TR(0x64191b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B64191e:L64191e:{c.instructions+=3;NFSU2_TR(0x64191e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B641921:{NFSU2_TR(0x641921);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B641923:{NFSU2_TR(0x641923);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64193a;}}
}
B641925:L641925:{c.instructions+=2;NFSU2_TR(0x641925);
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
B641927:{NFSU2_TR(0x641927);
if(r1(R+518)){{goto L64196b;}}
}
B641929:L641929:{c.instructions+=1;NFSU2_TR(0x641929);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x80004005ull));
s4(u32(r4(U+0)),r4(U+4));
}
B641930:L641930:{c.instructions+=6;NFSU2_TR(0x641930);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B641933:{NFSU2_TR(0x641933);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B641934:{NFSU2_TR(0x641934);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B641935:{NFSU2_TR(0x641935);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B641936:{NFSU2_TR(0x641936);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B641937:{NFSU2_TR(0x641937);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64193a:L64193a:{c.instructions+=2;NFSU2_TR(0x64193a);
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
B64193c:{NFSU2_TR(0x64193c);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x641929u);}goto L641929;}}
}
B64193e:L64193e:{c.instructions+=1;NFSU2_TR(0x64193e);
__builtin_memmove((R+28),(R+8),4);
}
B641940:L641940:{c.instructions+=4;NFSU2_TR(0x641940);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+8),(U+0),1);
}
B641942:{NFSU2_TR(0x641942);
__builtin_memmove((R+4),(R+8),1);
}
B641944:{NFSU2_TR(0x641944);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((U+1),(U+0),1);
w1(R+512,u8((r1(R+8))<(r1(U+1))));
w1(U+2,u8(u32(r1(R+8))-u32(r1(U+1))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B641946:{NFSU2_TR(0x641946);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L641962;}}
}
B641948:L641948:{c.instructions+=2;NFSU2_TR(0x641948);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B64194a:{NFSU2_TR(0x64194a);
if(r1(R+518)){{goto L64195e;}}
}
B64194c:L64194c:{c.instructions+=4;NFSU2_TR(0x64194c);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B64194f:{NFSU2_TR(0x64194f);
__builtin_memmove((R+4),(R+8),1);
}
B641951:{NFSU2_TR(0x641951);
u8 U[7];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(R+8))<(r1(U+5))));
w1(U+6,u8(u32(r1(R+8))-u32(r1(U+5))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B641954:{NFSU2_TR(0x641954);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L641962;}}
}
B641956:L641956:{c.instructions+=6;NFSU2_TR(0x641956);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B641957:{NFSU2_TR(0x641957);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B641958:{NFSU2_TR(0x641958);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B641959:{NFSU2_TR(0x641959);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B64195a:{NFSU2_TR(0x64195a);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B64195c:{NFSU2_TR(0x64195c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x641940u);}goto L641940;}}
}
B64195e:L64195e:{c.instructions+=2;NFSU2_TR(0x64195e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B641960:{NFSU2_TR(0x641960);
{goto L641967;}
}
B641962:L641962:{c.instructions+=2;NFSU2_TR(0x641962);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+0))<(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B641964:{NFSU2_TR(0x641964);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(u32(0xffffffffull))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B641967:L641967:{c.instructions+=2;NFSU2_TR(0x641967);
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
B641969:{NFSU2_TR(0x641969);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x641929u);}goto L641929;}}
}
B64196b:L64196b:{c.instructions+=2;NFSU2_TR(0x64196b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64196f:{NFSU2_TR(0x64196f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L641977;}}
}
B641971:L641971:{c.instructions+=2;NFSU2_TR(0x641971);
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
B641973:{NFSU2_TR(0x641973);
if(r1(R+518)){{goto L64198a;}}
}
B641975:L641975:{c.instructions+=1;NFSU2_TR(0x641975);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x641929u);}goto L641929;}
}
B641977:L641977:{c.instructions+=2;NFSU2_TR(0x641977);
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
B641979:{NFSU2_TR(0x641979);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x641929u);}goto L641929;}}
}
B64197b:L64197b:{c.instructions+=3;NFSU2_TR(0x64197b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64197c:{NFSU2_TR(0x64197c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64197f:{NFSU2_TR(0x64197f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x641984ull));
TAIL_STATIC(0x75dd6fu,75d);
}
B641984:L641984:{c.instructions+=4;NFSU2_TR(0x641984);
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
B641986:{NFSU2_TR(0x641986);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B641987:{NFSU2_TR(0x641987);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B641988:{NFSU2_TR(0x641988);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x641929u);}goto L641929;}}
}
B64198a:L64198a:{c.instructions+=5;NFSU2_TR(0x64198a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64198d:{NFSU2_TR(0x64198d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B64198f:{NFSU2_TR(0x64198f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B641992:{NFSU2_TR(0x641992);
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
B641994:{NFSU2_TR(0x641994);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x641929u);}goto L641929;}}
}
B641996:L641996:{c.instructions+=2;NFSU2_TR(0x641996);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B641999:{NFSU2_TR(0x641999);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L641a16;}}
}
B64199b:L64199b:{c.instructions+=2;NFSU2_TR(0x64199b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64199e:{NFSU2_TR(0x64199e);
if(r1(R+518)){{goto L6419ec;}}
}
B6419a0:L6419a0:{c.instructions+=2;NFSU2_TR(0x6419a0);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B6419a3:{NFSU2_TR(0x6419a3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x641929u);}goto L641929;}}
}
B6419a5:L6419a5:{c.instructions+=4;NFSU2_TR(0x6419a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6419a8:{NFSU2_TR(0x6419a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6419aa:{NFSU2_TR(0x6419aa);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+28),r4(U+14)));
w4(U+18,u32(u32(r4(R+28))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6419ad:{NFSU2_TR(0x6419ad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x641929u);}goto L641929;}}
}
B6419b3:L6419b3:{c.instructions+=6;NFSU2_TR(0x6419b3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
}
B6419b6:{NFSU2_TR(0x6419b6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6419b8:{NFSU2_TR(0x6419b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x18ull))));
s4(u32(r4(R+24)),r4(U+0));
}
B6419bb:{NFSU2_TR(0x6419bb);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6419bd:{NFSU2_TR(0x6419bd);
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
B6419bf:{NFSU2_TR(0x6419bf);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x641930u);}goto L641930;}}
}
B6419c5:L6419c5:{c.instructions+=6;NFSU2_TR(0x6419c5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6419c8:{NFSU2_TR(0x6419c8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6419c9:{NFSU2_TR(0x6419c9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6419cc:{NFSU2_TR(0x6419cc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6419cf:{NFSU2_TR(0x6419cf);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6419d2:{NFSU2_TR(0x6419d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6419d7ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6418a2u);}goto L6418a2;}
}
B6419d7:L6419d7:{c.instructions+=3;NFSU2_TR(0x6419d7);
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
B6419d9:{NFSU2_TR(0x6419d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6419dc:{NFSU2_TR(0x6419dc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x641930u);}goto L641930;}}
}
B6419e2:L6419e2:{c.instructions+=3;NFSU2_TR(0x6419e2);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6419e3:{NFSU2_TR(0x6419e3);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(R+12))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+12),r4(U+6)));
w4(U+10,u32(u32(r4(R+12))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6419e5:{NFSU2_TR(0x6419e5);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6419c5u);}goto L6419c5;}}
}
B6419e7:L6419e7:{c.instructions+=1;NFSU2_TR(0x6419e7);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x641930u);}goto L641930;}
}
B6419ec:L6419ec:{c.instructions+=3;NFSU2_TR(0x6419ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6419ee:{NFSU2_TR(0x6419ee);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x5ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6419f1:{NFSU2_TR(0x6419f1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L641a0b;}}
}
B6419f3:L6419f3:{c.instructions+=2;NFSU2_TR(0x6419f3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x9ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6419f6:{NFSU2_TR(0x6419f6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L641a02;}}
}
B6419f8:L6419f8:{c.instructions+=2;NFSU2_TR(0x6419f8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xeull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xeull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6419fb:{NFSU2_TR(0x6419fb);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L641a0b;}}
}
B6419fd:L6419fd:{c.instructions+=2;NFSU2_TR(0x6419fd);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x10ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B641a00:{NFSU2_TR(0x641a00);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L641a0b;}}
}
B641a02:L641a02:{c.instructions+=2;NFSU2_TR(0x641a02);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B641a05:{NFSU2_TR(0x641a05);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+0)),r4(U+0));
}
B641a0b:L641a0b:{c.instructions+=3;NFSU2_TR(0x641a0b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x14ull))));
s4(u32(r4(R+8)),r4(U+0));
}
B641a0e:{NFSU2_TR(0x641a0e);
u8 U[10];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w1(R+512,carry<u32>(r4(U+0),u32(0x14ull)));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w1(R+523,scarry<u32>(r4(U+0),u32(0x14ull)));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x14ull))));
s4(u32(r4(R+24)),r4(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+4,u32(u32(r4(U+0))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B641a11:{NFSU2_TR(0x641a11);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x641930u);}goto L641930;}
}
B641a16:L641a16:{c.instructions+=4;NFSU2_TR(0x641a16);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B641a18:{NFSU2_TR(0x641a18);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B641a1b:{NFSU2_TR(0x641a1b);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+28),r4(U+14)));
w4(U+18,u32(u32(r4(R+28))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B641a1e:{NFSU2_TR(0x641a1e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x641929u);}goto L641929;}}
}
B641a24:L641a24:{c.instructions+=3;NFSU2_TR(0x641a24);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B641a27:{NFSU2_TR(0x641a27);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+28),r4(U+14)));
w4(U+18,u32(u32(r4(R+28))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B641a2a:{NFSU2_TR(0x641a2a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x641929u);}goto L641929;}}
}
B641a30:L641a30:{c.instructions+=4;NFSU2_TR(0x641a30);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
}
B641a33:{NFSU2_TR(0x641a33);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B641a35:{NFSU2_TR(0x641a35);
u8 U[10];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w1(R+512,carry<u32>(r4(U+0),u32(0x1cull)));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w1(R+523,scarry<u32>(r4(U+0),u32(0x1cull)));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1cull))));
s4(u32(r4(R+24)),r4(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+4,u32(u32(r4(U+0))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B641a38:{NFSU2_TR(0x641a38);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x641930u);}goto L641930;}
}
B641a3d:L641a3d:{c.instructions+=13;NFSU2_TR(0x641a3d);
__builtin_memmove((R+28),(R+28),4);
}
B641a3f:{NFSU2_TR(0x641a3f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B641a40:{NFSU2_TR(0x641a40);
__builtin_memmove((R+20),(R+16),4);
}
B641a42:{NFSU2_TR(0x641a42);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B641a45:{NFSU2_TR(0x641a45);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B641a48:{NFSU2_TR(0x641a48);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B641a49:{NFSU2_TR(0x641a49);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((R+0),(U+0),4);
}
B641a4c:{NFSU2_TR(0x641a4c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B641a4d:{NFSU2_TR(0x641a4d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B641a50:{NFSU2_TR(0x641a50);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B641a53:{NFSU2_TR(0x641a53);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B641a54:{NFSU2_TR(0x641a54);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B641a57:{NFSU2_TR(0x641a57);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x641a5cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6418a2u);}goto L6418a2;}
}
B641a5c:L641a5c:{c.instructions+=2;NFSU2_TR(0x641a5c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B641a5d:{NFSU2_TR(0x641a5d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B641a60:L641a60:{c.instructions+=20;NFSU2_TR(0x641a60);
__builtin_memmove((R+28),(R+28),4);
}
B641a62:{NFSU2_TR(0x641a62);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B641a63:{NFSU2_TR(0x641a63);
__builtin_memmove((R+20),(R+16),4);
}
B641a65:{NFSU2_TR(0x641a65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B641a68:{NFSU2_TR(0x641a68);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B641a6b:{NFSU2_TR(0x641a6b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B641a6d:{NFSU2_TR(0x641a6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B641a70:{NFSU2_TR(0x641a70);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B641a73:{NFSU2_TR(0x641a73);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B641a76:{NFSU2_TR(0x641a76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B641a78:{NFSU2_TR(0x641a78);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B641a79:{NFSU2_TR(0x641a79);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B641a7c:{NFSU2_TR(0x641a7c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B641a7e:{NFSU2_TR(0x641a7e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B641a7f:{NFSU2_TR(0x641a7f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B641a80:{NFSU2_TR(0x641a80);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B641a82:{NFSU2_TR(0x641a82);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B641a83:{NFSU2_TR(0x641a83);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B641a85:{NFSU2_TR(0x641a85);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B641a88:{NFSU2_TR(0x641a88);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L641a8f;}}
}
B641a8a:L641a8a:{c.instructions+=2;NFSU2_TR(0x641a8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B641a8d:{NFSU2_TR(0x641a8d);
{goto L641a94;}
}
B641a8f:L641a8f:{c.instructions+=2;NFSU2_TR(0x641a8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B641a92:{NFSU2_TR(0x641a92);
__builtin_memmove((R+0),(R+8),4);
}
B641a94:L641a94:{c.instructions+=5;NFSU2_TR(0x641a94);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B641a97:{NFSU2_TR(0x641a97);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B641a9a:{NFSU2_TR(0x641a9a);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B641a9c:{NFSU2_TR(0x641a9c);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B641a9e:{NFSU2_TR(0x641a9e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L641aa4;}}
}
B641aa0:L641aa0:{c.instructions+=2;NFSU2_TR(0x641aa0);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B641aa2:{NFSU2_TR(0x641aa2);
{goto L641aa7;}
}
B641aa4:L641aa4:{c.instructions+=1;NFSU2_TR(0x641aa4);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B641aa7:L641aa7:{c.instructions+=4;NFSU2_TR(0x641aa7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B641aaa:{NFSU2_TR(0x641aaa);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B641aac:{NFSU2_TR(0x641aac);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B641aae:{NFSU2_TR(0x641aae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L641ab4;}}
}
B641ab0:L641ab0:{c.instructions+=2;NFSU2_TR(0x641ab0);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B641ab2:{NFSU2_TR(0x641ab2);
{goto L641ab7;}
}
B641ab4:L641ab4:{c.instructions+=1;NFSU2_TR(0x641ab4);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B641ab7:L641ab7:{c.instructions+=2;NFSU2_TR(0x641ab7);
__builtin_memmove((R+24),(R+8),4);
}
B641ab9:{NFSU2_TR(0x641ab9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((R+28),(U+0),4);
}
B641abc:L641abc:{c.instructions+=4;NFSU2_TR(0x641abc);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+12),(U+0),1);
}
B641abe:{NFSU2_TR(0x641abe);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B641abf:{NFSU2_TR(0x641abf);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B641ac1:{NFSU2_TR(0x641ac1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x641abcu);}goto L641abc;}}
}
B641ac3:L641ac3:{c.instructions+=3;NFSU2_TR(0x641ac3);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+28))));
}
B641ac5:{NFSU2_TR(0x641ac5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B641ac8:{NFSU2_TR(0x641ac8);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B641acb:L641acb:{c.instructions+=4;NFSU2_TR(0x641acb);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+12),(U+0),1);
}
B641acd:{NFSU2_TR(0x641acd);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B641ace:{NFSU2_TR(0x641ace);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B641ad0:{NFSU2_TR(0x641ad0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x641acbu);}goto L641acb;}}
}
B641ad2:L641ad2:{c.instructions+=3;NFSU2_TR(0x641ad2);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+24))));
}
B641ad4:{NFSU2_TR(0x641ad4);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B641ad6:{NFSU2_TR(0x641ad6);
if(r1(R+518)){{goto L641b02;}}
}
B641ad8:L641ad8:{c.instructions+=2;NFSU2_TR(0x641ad8);
__builtin_memmove((R+24),(R+4),4);
}
B641ada:{NFSU2_TR(0x641ada);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((R+28),(U+0),4);
}
B641add:L641add:{c.instructions+=4;NFSU2_TR(0x641add);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+12),(U+0),1);
}
B641adf:{NFSU2_TR(0x641adf);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B641ae0:{NFSU2_TR(0x641ae0);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B641ae2:{NFSU2_TR(0x641ae2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x641addu);}goto L641add;}}
}
B641ae4:L641ae4:{c.instructions+=2;NFSU2_TR(0x641ae4);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+28))));
}
B641ae6:{NFSU2_TR(0x641ae6);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((R+28),(U+0),4);
}
B641ae9:L641ae9:{c.instructions+=4;NFSU2_TR(0x641ae9);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+12),(U+0),1);
}
B641aeb:{NFSU2_TR(0x641aeb);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B641aec:{NFSU2_TR(0x641aec);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B641aee:{NFSU2_TR(0x641aee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x641ae9u);}goto L641ae9;}}
}
B641af0:L641af0:{c.instructions+=9;NFSU2_TR(0x641af0);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+28))));
}
B641af2:{NFSU2_TR(0x641af2);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B641af3:{NFSU2_TR(0x641af3);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B641af6:{NFSU2_TR(0x641af6);
w1(R+512,u8((r1(R+4))!=(u8(0x0ull))));
w1(R+4,u8(0-u32(r1(R+4))));
}
B641af8:{NFSU2_TR(0x641af8);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(R+4))));
w4(R+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B641afa:{NFSU2_TR(0x641afa);
w4(R+4,u32(0-u32(r4(R+4))));
}
B641afc:{NFSU2_TR(0x641afc);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B641afd:{NFSU2_TR(0x641afd);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B641b00:{NFSU2_TR(0x641b00);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B641b02:L641b02:{c.instructions+=20;NFSU2_TR(0x641b02);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B641b05:{NFSU2_TR(0x641b05);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B641b08:{NFSU2_TR(0x641b08);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B641b0b:{NFSU2_TR(0x641b0b);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B641b0c:{NFSU2_TR(0x641b0c);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x3ull))));
}
B641b0f:{NFSU2_TR(0x641b0f);
w1(R+512,u8((r1(R+8))!=(u8(0x0ull))));
w1(R+8,u8(0-u32(r1(R+8))));
}
B641b11:{NFSU2_TR(0x641b11);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(R+8))));
w4(R+8,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B641b13:{NFSU2_TR(0x641b13);
w4(R+8,u32(0-u32(r4(R+8))));
}
B641b15:{NFSU2_TR(0x641b15);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B641b16:{NFSU2_TR(0x641b16);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B641b18:{NFSU2_TR(0x641b18);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B641b1b:{NFSU2_TR(0x641b1b);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B641b1d:{NFSU2_TR(0x641b1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8ull))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B641b24:{NFSU2_TR(0x641b24);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B641b27:{NFSU2_TR(0x641b27);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+12)),r4(U+0));
}
B641b29:{NFSU2_TR(0x641b29);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+24)),r4(U+0));
}
B641b2c:{NFSU2_TR(0x641b2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B641b2f:{NFSU2_TR(0x641b2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+28)),r4(U+0));
}
B641b32:{NFSU2_TR(0x641b32);
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
B641b34:{NFSU2_TR(0x641b34);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L641c05;}}
}
B641b3a:L641b3a:{c.instructions+=2;NFSU2_TR(0x641b3a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B641b3d:{NFSU2_TR(0x641b3d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L641c00;}}
}
B641b43:L641b43:{c.instructions+=2;NFSU2_TR(0x641b43);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B641b46:{NFSU2_TR(0x641b46);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L641be0;}}
}
B641b4c:L641b4c:{c.instructions+=2;NFSU2_TR(0x641b4c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B641b4f:{NFSU2_TR(0x641b4f);
if(r1(R+518)){{goto L641bbd;}}
}
B641b51:L641b51:{c.instructions+=2;NFSU2_TR(0x641b51);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B641b54:{NFSU2_TR(0x641b54);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L641c05;}}
}
B641b5a:L641b5a:{c.instructions+=10;NFSU2_TR(0x641b5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B641b5d:{NFSU2_TR(0x641b5d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B641b5f:{NFSU2_TR(0x641b5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B641b62:{NFSU2_TR(0x641b62);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B641b66:{NFSU2_TR(0x641b66);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x18ull))));
}
B641b69:{NFSU2_TR(0x641b69);
u8 U[10];
w1(R+512,u8(0x0ull));
w4(U+6,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B641b6b:{NFSU2_TR(0x641b6b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B641b6d:{NFSU2_TR(0x641b6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B641b70:{NFSU2_TR(0x641b70);
u8 U[4];
w4(U+0,u32(0x18ull));
s4(u32(r4(R+28)),r4(U+0));
}
B641b76:{NFSU2_TR(0x641b76);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L641bb3;}}
}
B641b78:L641b78:{c.instructions+=1;NFSU2_TR(0x641b78);
{goto L641b7d;}
}
B641b7a:L641b7a:{c.instructions+=1;NFSU2_TR(0x641b7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B641b7d:L641b7d:{c.instructions+=9;NFSU2_TR(0x641b7d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+4),(U+0),4);
}
B641b80:{NFSU2_TR(0x641b80);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B641b81:{NFSU2_TR(0x641b81);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((R+4),(U+0),4);
}
B641b84:{NFSU2_TR(0x641b84);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B641b85:{NFSU2_TR(0x641b85);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B641b88:{NFSU2_TR(0x641b88);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B641b89:{NFSU2_TR(0x641b89);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B641b8a:{NFSU2_TR(0x641b8a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B641b8d:{NFSU2_TR(0x641b8d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x641b92ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x641a60u);}goto L641a60;}
}
B641b92:L641b92:{c.instructions+=3;NFSU2_TR(0x641b92);
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
B641b94:{NFSU2_TR(0x641b94);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B641b97:{NFSU2_TR(0x641b97);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L641c0c;}}
}
B641b99:L641b99:{c.instructions+=10;NFSU2_TR(0x641b99);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B641b9c:{NFSU2_TR(0x641b9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+0))));
s4(u32(r4(R+24)),r4(U+0));
}
B641b9e:{NFSU2_TR(0x641b9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B641ba1:{NFSU2_TR(0x641ba1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+0))));
s4(u32(r4(R+28)),r4(U+0));
}
B641ba3:{NFSU2_TR(0x641ba3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B641ba6:{NFSU2_TR(0x641ba6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+0))));
s4(u32(r4(R+12)),r4(U+0));
}
B641ba8:{NFSU2_TR(0x641ba8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B641bab:{NFSU2_TR(0x641bab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B641bae:{NFSU2_TR(0x641bae);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+14))));
w4(U+18,u32(u32(r4(R+0))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B641bb1:{NFSU2_TR(0x641bb1);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x641b7au);}goto L641b7a;}}
}
B641bb3:L641bb3:{c.instructions+=4;NFSU2_TR(0x641bb3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B641bb5:{NFSU2_TR(0x641bb5);
u8 U[40];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w8(U+16,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+24,u64(s64(s32(r4(U+4)))));
w8(U+32,u64(u64(r8(U+16))*u64(r8(U+24))));
w4(R+0,u32(r8(U+32)));
w8(U+8,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+8))!=(r8(U+32))));
__builtin_memmove((R+523),(R+512),1);
}
B641bb9:{NFSU2_TR(0x641bb9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B641bbb:{NFSU2_TR(0x641bbb);
{goto L641c0c;}
}
B641bbd:L641bbd:{c.instructions+=6;NFSU2_TR(0x641bbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B641bc0:{NFSU2_TR(0x641bc0);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B641bc3:{NFSU2_TR(0x641bc3);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B641bc5:{NFSU2_TR(0x641bc5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B641bc6:{NFSU2_TR(0x641bc6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+28)),r4(U+0));
}
B641bc8:{NFSU2_TR(0x641bc8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L641c05;}}
}
B641bca:L641bca:{c.instructions+=2;NFSU2_TR(0x641bca);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x9ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B641bcd:{NFSU2_TR(0x641bcd);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L641bd9;}}
}
B641bcf:L641bcf:{c.instructions+=2;NFSU2_TR(0x641bcf);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
w1(R+512,u8((r4(U+6))<(u32(0xeull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xeull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xeull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B641bd2:{NFSU2_TR(0x641bd2);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L641c05;}}
}
B641bd4:L641bd4:{c.instructions+=2;NFSU2_TR(0x641bd4);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
w1(R+512,u8((r4(U+6))<(u32(0x10ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x10ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B641bd7:{NFSU2_TR(0x641bd7);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L641c05;}}
}
B641bd9:L641bd9:{c.instructions+=3;NFSU2_TR(0x641bd9);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B641bdc:{NFSU2_TR(0x641bdc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B641bde:{NFSU2_TR(0x641bde);
{goto L641bf9;}
}
B641be0:L641be0:{c.instructions+=1;NFSU2_TR(0x641be0);
u8 U[23];
w4(U+15,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
__builtin_memmove((U+19),(R+0),4);
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+15))));
w1(U+5,u8((r4(U+15))==(u32(0x0ull))));
w4(U+6,u32(u32(r4(U+15))-u32(u32(0x1ull))));
w4(U+10,shl<u32>(r4(U+19),u64(r4(U+6))));
w1(U+14,u8(s32(r4(U+10))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+5),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+5))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+14))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
}
B641be3:L641be3:{c.instructions+=7;NFSU2_TR(0x641be3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B641be6:{NFSU2_TR(0x641be6);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B641be7:{NFSU2_TR(0x641be7);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B641be9:{NFSU2_TR(0x641be9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B641bea:{NFSU2_TR(0x641bea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B641bec:{NFSU2_TR(0x641bec);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+28)),r4(U+0));
}
B641bee:{NFSU2_TR(0x641bee);
if(r1(R+518)){{goto L641bf6;}}
}
B641bf0:L641bf0:{c.instructions+=2;NFSU2_TR(0x641bf0);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B641bf1:{NFSU2_TR(0x641bf1);
if(r1(R+518)){{goto L641bf6;}}
}
B641bf3:L641bf3:{c.instructions+=2;NFSU2_TR(0x641bf3);
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
B641bf4:{NFSU2_TR(0x641bf4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L641c05;}}
}
B641bf6:L641bf6:{c.instructions+=1;NFSU2_TR(0x641bf6);
u8 U[8];
w4(U+4,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,shl<u32>(r4(U+0),u64(r4(U+4))));
s4(u32(r4(R+24)),r4(U+0));
}
B641bf9:L641bf9:{c.instructions+=3;NFSU2_TR(0x641bf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B641bfc:{NFSU2_TR(0x641bfc);
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
B641bfe:{NFSU2_TR(0x641bfe);
{goto L641c0c;}
}
B641c00:L641c00:{c.instructions+=2;NFSU2_TR(0x641c00);
u8 U[23];
w4(U+15,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
__builtin_memmove((U+19),(R+0),4);
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+15))));
w1(U+5,u8((r4(U+15))==(u32(0x0ull))));
w4(U+6,u32(u32(r4(U+15))-u32(u32(0x1ull))));
w4(U+10,shl<u32>(r4(U+19),u64(r4(U+6))));
w1(U+14,u8(s32(r4(U+10))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+5),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+5))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+14))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
}
B641c03:{NFSU2_TR(0x641c03);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x641be3u);}goto L641be3;}
}
B641c05:L641c05:{c.instructions+=1;NFSU2_TR(0x641c05);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x80004005ull));
s4(u32(r4(U+0)),r4(U+4));
}
B641c0c:L641c0c:{c.instructions+=6;NFSU2_TR(0x641c0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B641c0f:{NFSU2_TR(0x641c0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B641c10:{NFSU2_TR(0x641c10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B641c11:{NFSU2_TR(0x641c11);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B641c12:{NFSU2_TR(0x641c12);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B641c13:{NFSU2_TR(0x641c13);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B641c16:L641c16:{c.instructions+=39;NFSU2_TR(0x641c16);
__builtin_memmove((R+28),(R+28),4);
}
B641c18:{NFSU2_TR(0x641c18);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B641c19:{NFSU2_TR(0x641c19);
__builtin_memmove((R+20),(R+16),4);
}
B641c1b:{NFSU2_TR(0x641c1b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B641c1e:{NFSU2_TR(0x641c1e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B641c1f:{NFSU2_TR(0x641c1f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B641c20:{NFSU2_TR(0x641c20);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B641c21:{NFSU2_TR(0x641c21);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B641c24:{NFSU2_TR(0x641c24);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B641c26:{NFSU2_TR(0x641c26);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B641c29:{NFSU2_TR(0x641c29);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B641c2c:{NFSU2_TR(0x641c2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B641c2f:{NFSU2_TR(0x641c2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+24),(U+0),4);
}
B641c31:{NFSU2_TR(0x641c31);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B641c34:{NFSU2_TR(0x641c34);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B641c36:{NFSU2_TR(0x641c36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B641c38:{NFSU2_TR(0x641c38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+24),(U+0),4);
}
B641c3a:{NFSU2_TR(0x641c3a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B641c3c:{NFSU2_TR(0x641c3c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B641c3e:{NFSU2_TR(0x641c3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B641c41:{NFSU2_TR(0x641c41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+24),(U+0),4);
}
B641c43:{NFSU2_TR(0x641c43);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B641c46:{NFSU2_TR(0x641c46);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B641c48:{NFSU2_TR(0x641c48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+24),(U+0),4);
}
B641c4a:{NFSU2_TR(0x641c4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B641c4d:{NFSU2_TR(0x641c4d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B641c4f:{NFSU2_TR(0x641c4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B641c52:{NFSU2_TR(0x641c52);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B641c55:{NFSU2_TR(0x641c55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B641c57:{NFSU2_TR(0x641c57);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B641c59:{NFSU2_TR(0x641c59);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B641c5c:{NFSU2_TR(0x641c5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B641c5f:{NFSU2_TR(0x641c5f);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B641c60:{NFSU2_TR(0x641c60);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B641c62:{NFSU2_TR(0x641c62);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B641c64:{NFSU2_TR(0x641c64);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B641c67:{NFSU2_TR(0x641c67);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B641c6a:{NFSU2_TR(0x641c6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B641c6d:{NFSU2_TR(0x641c6d);
if(r1(R+512)){{goto L641c72;}}
}
B641c6f:L641c6f:{c.instructions+=1;NFSU2_TR(0x641c6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B641c72:L641c72:{c.instructions+=5;NFSU2_TR(0x641c72);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B641c75:{NFSU2_TR(0x641c75);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B641c78:{NFSU2_TR(0x641c78);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B641c7a:{NFSU2_TR(0x641c7a);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B641c7c:{NFSU2_TR(0x641c7c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L641c83;}}
}
B641c7e:L641c7e:{c.instructions+=2;NFSU2_TR(0x641c7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B641c81:{NFSU2_TR(0x641c81);
{goto L641c89;}
}
B641c83:L641c83:{c.instructions+=2;NFSU2_TR(0x641c83);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B641c86:{NFSU2_TR(0x641c86);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B641c89:L641c89:{c.instructions+=4;NFSU2_TR(0x641c89);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B641c8c:{NFSU2_TR(0x641c8c);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B641c8e:{NFSU2_TR(0x641c8e);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B641c90:{NFSU2_TR(0x641c90);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L641c97;}}
}
B641c92:L641c92:{c.instructions+=2;NFSU2_TR(0x641c92);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B641c95:{NFSU2_TR(0x641c95);
{goto L641c9d;}
}
B641c97:L641c97:{c.instructions+=2;NFSU2_TR(0x641c97);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B641c9a:{NFSU2_TR(0x641c9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B641c9d:L641c9d:{c.instructions+=2;NFSU2_TR(0x641c9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B641ca0:{NFSU2_TR(0x641ca0);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B641ca3:L641ca3:{c.instructions+=4;NFSU2_TR(0x641ca3);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+0),(U+0),1);
}
B641ca5:{NFSU2_TR(0x641ca5);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B641ca6:{NFSU2_TR(0x641ca6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B641ca8:{NFSU2_TR(0x641ca8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x641ca3u);}goto L641ca3;}}
}
B641caa:L641caa:{c.instructions+=12;NFSU2_TR(0x641caa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B641cad:{NFSU2_TR(0x641cad);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+24))));
}
B641caf:{NFSU2_TR(0x641caf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+24),(U+0),4);
}
B641cb1:{NFSU2_TR(0x641cb1);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B641cb4:{NFSU2_TR(0x641cb4);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B641cb7:{NFSU2_TR(0x641cb7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x4ull))));
s4(u32(r4(R+12)),r4(U+0));
}
B641cba:{NFSU2_TR(0x641cba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+28),(U+0),4);
}
B641cbc:{NFSU2_TR(0x641cbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B641cbf:{NFSU2_TR(0x641cbf);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B641cc1:{NFSU2_TR(0x641cc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B641cc4:{NFSU2_TR(0x641cc4);
__builtin_memmove((R+0),(R+4),4);
}
B641cc6:{NFSU2_TR(0x641cc6);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B641cc9:L641cc9:{c.instructions+=1;NFSU2_TR(0x641cc9);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L641ccb;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x641cc9u);}goto L641cc9;}
}
B641ccb:L641ccb:{c.instructions+=2;NFSU2_TR(0x641ccb);
__builtin_memmove((R+4),(R+0),4);
}
B641ccd:{NFSU2_TR(0x641ccd);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B641cd0:L641cd0:{c.instructions+=1;NFSU2_TR(0x641cd0);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L641cd2;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x641cd0u);}goto L641cd0;}
}
B641cd2:L641cd2:{c.instructions+=15;NFSU2_TR(0x641cd2);
__builtin_memmove((R+24),(R+0),4);
}
B641cd4:{NFSU2_TR(0x641cd4);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x3ull))));
}
B641cd7:{NFSU2_TR(0x641cd7);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B641cd9:{NFSU2_TR(0x641cd9);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B641cdb:{NFSU2_TR(0x641cdb);
w4(R+0,u32(0-u32(r4(R+0))));
}
B641cdd:{NFSU2_TR(0x641cdd);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B641ce0:{NFSU2_TR(0x641ce0);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B641ce2:{NFSU2_TR(0x641ce2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B641ce5:{NFSU2_TR(0x641ce5);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B641ce8:{NFSU2_TR(0x641ce8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+0))));
s4(u32(r4(R+12)),r4(U+0));
}
B641cea:{NFSU2_TR(0x641cea);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B641cec:{NFSU2_TR(0x641cec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B641cee:{NFSU2_TR(0x641cee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B641cf0:{NFSU2_TR(0x641cf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B641cf3:{NFSU2_TR(0x641cf3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L641d02;}}
}
B641cf5:L641cf5:{c.instructions+=5;NFSU2_TR(0x641cf5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B641cf7:{NFSU2_TR(0x641cf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B641cfa:{NFSU2_TR(0x641cfa);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+8,u32(u32(r4(U+8))&u32(r4(R+24))));
s4(u32(r4(U+4)),r4(U+8));
}
B641cfd:{NFSU2_TR(0x641cfd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x4ull))));
s4(u32(r4(R+12)),r4(U+0));
}
B641d00:{NFSU2_TR(0x641d00);
{goto L641d49;}
}
B641d02:L641d02:{c.instructions+=1;NFSU2_TR(0x641d02);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((R+28),(U+0),4);
}
B641d05:L641d05:{c.instructions+=4;NFSU2_TR(0x641d05);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B641d07:{NFSU2_TR(0x641d07);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B641d08:{NFSU2_TR(0x641d08);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B641d0a:{NFSU2_TR(0x641d0a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x641d05u);}goto L641d05;}}
}
B641d0c:L641d0c:{c.instructions+=12;NFSU2_TR(0x641d0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B641d0f:{NFSU2_TR(0x641d0f);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+28))));
}
B641d11:{NFSU2_TR(0x641d11);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B641d14:{NFSU2_TR(0x641d14);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+24),(U+0),4);
}
B641d16:{NFSU2_TR(0x641d16);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B641d19:{NFSU2_TR(0x641d19);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x4ull))));
s4(u32(r4(R+12)),r4(U+0));
}
B641d1c:{NFSU2_TR(0x641d1c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+28),(U+0),4);
}
B641d1e:{NFSU2_TR(0x641d1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B641d21:{NFSU2_TR(0x641d21);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B641d23:{NFSU2_TR(0x641d23);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B641d26:{NFSU2_TR(0x641d26);
__builtin_memmove((R+0),(R+4),4);
}
B641d28:{NFSU2_TR(0x641d28);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B641d2b:L641d2b:{c.instructions+=1;NFSU2_TR(0x641d2b);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L641d2d;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x641d2bu);}goto L641d2b;}
}
B641d2d:L641d2d:{c.instructions+=2;NFSU2_TR(0x641d2d);
__builtin_memmove((R+4),(R+0),4);
}
B641d2f:{NFSU2_TR(0x641d2f);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B641d32:L641d32:{c.instructions+=1;NFSU2_TR(0x641d32);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L641d34;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x641d32u);}goto L641d32;}
}
B641d34:L641d34:{c.instructions+=9;NFSU2_TR(0x641d34);
__builtin_memmove((R+24),(R+0),4);
}
B641d36:{NFSU2_TR(0x641d36);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x3ull))));
}
B641d39:{NFSU2_TR(0x641d39);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B641d3b:{NFSU2_TR(0x641d3b);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B641d3d:{NFSU2_TR(0x641d3d);
w4(R+0,u32(0-u32(r4(R+0))));
}
B641d3f:{NFSU2_TR(0x641d3f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B641d42:{NFSU2_TR(0x641d42);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B641d44:{NFSU2_TR(0x641d44);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B641d47:{NFSU2_TR(0x641d47);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+0))));
s4(u32(r4(R+12)),r4(U+0));
}
B641d49:L641d49:{c.instructions+=3;NFSU2_TR(0x641d49);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B641d4c:{NFSU2_TR(0x641d4c);
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
B641d4e:{NFSU2_TR(0x641d4e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L641eb7;}}
}
B641d54:L641d54:{c.instructions+=4;NFSU2_TR(0x641d54);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B641d56:{NFSU2_TR(0x641d56);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B641d57:{NFSU2_TR(0x641d57);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B641d59:{NFSU2_TR(0x641d59);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L641e51;}}
}
B641d5f:L641d5f:{c.instructions+=2;NFSU2_TR(0x641d5f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B641d62:{NFSU2_TR(0x641d62);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L641e4e;}}
}
B641d68:L641d68:{c.instructions+=2;NFSU2_TR(0x641d68);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B641d6b:{NFSU2_TR(0x641d6b);
if(r1(R+518)){{goto L641dfa;}}
}
B641d71:L641d71:{c.instructions+=2;NFSU2_TR(0x641d71);
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
B641d74:{NFSU2_TR(0x641d74);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L641eb7;}}
}
B641d7a:L641d7a:{c.instructions+=17;NFSU2_TR(0x641d7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B641d7d:{NFSU2_TR(0x641d7d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B641d7f:{NFSU2_TR(0x641d7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B641d82:{NFSU2_TR(0x641d82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+24),(U+0),4);
}
B641d84:{NFSU2_TR(0x641d84);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B641d87:{NFSU2_TR(0x641d87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B641d89:{NFSU2_TR(0x641d89);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B641d8c:{NFSU2_TR(0x641d8c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x18ull))));
}
B641d8f:{NFSU2_TR(0x641d8f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B641d91:{NFSU2_TR(0x641d91);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x18ull))));
s4(u32(r4(R+8)),r4(U+0));
}
B641d94:{NFSU2_TR(0x641d94);
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
B641d98:{NFSU2_TR(0x641d98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B641d9a:{NFSU2_TR(0x641d9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B641d9c:{NFSU2_TR(0x641d9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B641d9f:{NFSU2_TR(0x641d9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+24),(U+0),4);
}
B641da1:{NFSU2_TR(0x641da1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B641da4:{NFSU2_TR(0x641da4);
if(r1(R+518)){{goto L641ebe;}}
}
B641daa:L641daa:{c.instructions+=7;NFSU2_TR(0x641daa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B641dad:{NFSU2_TR(0x641dad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B641db1:{NFSU2_TR(0x641db1);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B641db5:{NFSU2_TR(0x641db5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B641db7:{NFSU2_TR(0x641db7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+8)),r4(U+0));
}
B641db9:{NFSU2_TR(0x641db9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+12)),r4(U+0));
}
B641dbb:{NFSU2_TR(0x641dbb);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L641df0;}}
}
B641dbd:L641dbd:{c.instructions+=9;NFSU2_TR(0x641dbd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B641dc0:{NFSU2_TR(0x641dc0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B641dc3:{NFSU2_TR(0x641dc3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B641dc4:{NFSU2_TR(0x641dc4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B641dc5:{NFSU2_TR(0x641dc5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B641dc8:{NFSU2_TR(0x641dc8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B641dcb:{NFSU2_TR(0x641dcb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B641dcc:{NFSU2_TR(0x641dcc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B641dcf:{NFSU2_TR(0x641dcf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x641dd4ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x641c16u);}goto L641c16;}
}
B641dd4:L641dd4:{c.instructions+=3;NFSU2_TR(0x641dd4);
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
B641dd6:{NFSU2_TR(0x641dd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B641dd9:{NFSU2_TR(0x641dd9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L641ebe;}}
}
B641ddf:L641ddf:{c.instructions+=6;NFSU2_TR(0x641ddf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B641de2:{NFSU2_TR(0x641de2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B641de5:{NFSU2_TR(0x641de5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B641de8:{NFSU2_TR(0x641de8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B641deb:{NFSU2_TR(0x641deb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B641dee:{NFSU2_TR(0x641dee);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x641dbdu);}goto L641dbd;}}
}
B641df0:L641df0:{c.instructions+=2;NFSU2_TR(0x641df0);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
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
B641df3:{NFSU2_TR(0x641df3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x641daau);}goto L641daa;}}
}
B641df5:L641df5:{c.instructions+=1;NFSU2_TR(0x641df5);
{goto L641ebe;}
}
B641dfa:L641dfa:{c.instructions+=3;NFSU2_TR(0x641dfa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B641dfd:{NFSU2_TR(0x641dfd);
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
B641e00:{NFSU2_TR(0x641e00);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L641eb7;}}
}
B641e06:L641e06:{c.instructions+=2;NFSU2_TR(0x641e06);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x9ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B641e09:{NFSU2_TR(0x641e09);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L641e1d;}}
}
B641e0b:L641e0b:{c.instructions+=2;NFSU2_TR(0x641e0b);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xeull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xeull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xeull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B641e0e:{NFSU2_TR(0x641e0e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L641eb7;}}
}
B641e14:L641e14:{c.instructions+=2;NFSU2_TR(0x641e14);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x10ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x10ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B641e17:{NFSU2_TR(0x641e17);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L641eb7;}}
}
B641e1d:L641e1d:{c.instructions+=3;NFSU2_TR(0x641e1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B641e20:{NFSU2_TR(0x641e20);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B641e22:{NFSU2_TR(0x641e22);
if(r1(R+518)){{goto L641e43;}}
}
B641e24:L641e24:{c.instructions+=4;NFSU2_TR(0x641e24);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B641e27:{NFSU2_TR(0x641e27);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B641e2a:{NFSU2_TR(0x641e2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B641e2d:{NFSU2_TR(0x641e2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B641e30:L641e30:{c.instructions+=8;NFSU2_TR(0x641e30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+28),(U+0),4);
}
B641e32:{NFSU2_TR(0x641e32);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B641e34:{NFSU2_TR(0x641e34);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+28)),r4(U+0));
}
B641e36:{NFSU2_TR(0x641e36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B641e38:{NFSU2_TR(0x641e38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x4ull))));
s4(u32(r4(R+24)),r4(U+0));
}
B641e3b:{NFSU2_TR(0x641e3b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x4ull))));
s4(u32(r4(R+4)),r4(U+0));
}
B641e3e:{NFSU2_TR(0x641e3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B641e41:{NFSU2_TR(0x641e41);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x641e30u);}goto L641e30;}}
}
B641e43:L641e43:{c.instructions+=4;NFSU2_TR(0x641e43);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B641e46:{NFSU2_TR(0x641e46);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x14ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B641e49:{NFSU2_TR(0x641e49);
u8 U[10];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w1(R+512,carry<u32>(r4(U+0),u32(0x14ull)));
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w1(R+523,scarry<u32>(r4(U+0),u32(0x14ull)));
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x14ull))));
s4(u32(r4(R+8)),r4(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w4(U+4,u32(u32(r4(U+0))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B641e4c:{NFSU2_TR(0x641e4c);
{goto L641ebe;}
}
B641e4e:L641e4e:{c.instructions+=1;NFSU2_TR(0x641e4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B641e51:L641e51:{c.instructions+=12;NFSU2_TR(0x641e51);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B641e55:{NFSU2_TR(0x641e55);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B641e58:{NFSU2_TR(0x641e58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B641e5a:{NFSU2_TR(0x641e5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B641e5d:{NFSU2_TR(0x641e5d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+24),(U+0),4);
}
B641e5f:{NFSU2_TR(0x641e5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B641e62:{NFSU2_TR(0x641e62);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B641e64:{NFSU2_TR(0x641e64);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B641e67:{NFSU2_TR(0x641e67);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B641e69:{NFSU2_TR(0x641e69);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B641e6c:{NFSU2_TR(0x641e6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B641e6f:{NFSU2_TR(0x641e6f);
if(r1(R+518)){{goto L641e76;}}
}
B641e71:L641e71:{c.instructions+=2;NFSU2_TR(0x641e71);
u8 U[23];
w4(U+15,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
__builtin_memmove((U+19),(R+0),4);
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+15))));
w1(U+5,u8((r4(U+15))==(u32(0x0ull))));
w4(U+6,u32(u32(r4(U+15))-u32(u32(0x1ull))));
w4(U+10,shl<u32>(r4(U+19),u64(r4(U+6))));
w1(U+14,u8(s32(r4(U+10))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+5),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+5))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+14))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
}
B641e74:{NFSU2_TR(0x641e74);
{goto L641e79;}
}
B641e76:L641e76:{c.instructions+=1;NFSU2_TR(0x641e76);
u8 U[23];
w4(U+15,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
__builtin_memmove((U+19),(R+0),4);
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+15))));
w1(U+5,u8((r4(U+15))==(u32(0x0ull))));
w4(U+6,u32(u32(r4(U+15))-u32(u32(0x1ull))));
w4(U+10,shl<u32>(r4(U+19),u64(r4(U+6))));
w1(U+14,u8(s32(r4(U+10))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+5),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+5))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+14))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
}
B641e79:L641e79:{c.instructions+=3;NFSU2_TR(0x641e79);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B641e7c:{NFSU2_TR(0x641e7c);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B641e7d:{NFSU2_TR(0x641e7d);
if(r1(R+518)){{goto L641e85;}}
}
B641e7f:L641e7f:{c.instructions+=2;NFSU2_TR(0x641e7f);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B641e80:{NFSU2_TR(0x641e80);
if(r1(R+518)){{goto L641e85;}}
}
B641e82:L641e82:{c.instructions+=2;NFSU2_TR(0x641e82);
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
B641e83:{NFSU2_TR(0x641e83);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L641eb7;}}
}
B641e85:L641e85:{c.instructions+=8;NFSU2_TR(0x641e85);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B641e88:{NFSU2_TR(0x641e88);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B641e8a:{NFSU2_TR(0x641e8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B641e8d:{NFSU2_TR(0x641e8d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B641e8f:{NFSU2_TR(0x641e8f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B641e92:{NFSU2_TR(0x641e92);
__builtin_memmove((R+4),(R+0),4);
}
B641e94:{NFSU2_TR(0x641e94);
__builtin_memmove((R+12),(R+4),4);
}
B641e96:{NFSU2_TR(0x641e96);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B641e99:L641e99:{c.instructions+=1;NFSU2_TR(0x641e99);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L641e9b;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x641e99u);}goto L641e99;}
}
B641e9b:L641e9b:{c.instructions+=2;NFSU2_TR(0x641e9b);
__builtin_memmove((R+4),(R+12),4);
}
B641e9d:{NFSU2_TR(0x641e9d);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B641ea0:L641ea0:{c.instructions+=1;NFSU2_TR(0x641ea0);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L641ea2;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x641ea0u);}goto L641ea0;}
}
B641ea2:L641ea2:{c.instructions+=8;NFSU2_TR(0x641ea2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B641ea5:{NFSU2_TR(0x641ea5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+0))));
s4(u32(r4(R+4)),r4(U+0));
}
B641ea7:{NFSU2_TR(0x641ea7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B641eaa:{NFSU2_TR(0x641eaa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+0))));
s4(u32(r4(R+4)),r4(U+0));
}
B641eac:{NFSU2_TR(0x641eac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B641eaf:{NFSU2_TR(0x641eaf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1cull))));
s4(u32(r4(R+0)),r4(U+0));
}
B641eb2:{NFSU2_TR(0x641eb2);
u8 U[10];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w1(R+512,carry<u32>(r4(U+0),u32(0x1cull)));
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w1(R+523,scarry<u32>(r4(U+0),u32(0x1cull)));
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1cull))));
s4(u32(r4(R+8)),r4(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w4(U+4,u32(u32(r4(U+0))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B641eb5:{NFSU2_TR(0x641eb5);
{goto L641ebe;}
}
B641eb7:L641eb7:{c.instructions+=1;NFSU2_TR(0x641eb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x80004005ull));
s4(u32(r4(U+0)),r4(U+4));
}
B641ebe:L641ebe:{c.instructions+=6;NFSU2_TR(0x641ebe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B641ec1:{NFSU2_TR(0x641ec1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B641ec2:{NFSU2_TR(0x641ec2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B641ec3:{NFSU2_TR(0x641ec3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B641ec4:{NFSU2_TR(0x641ec4);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B641ec5:{NFSU2_TR(0x641ec5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B641ec8:L641ec8:{c.instructions+=28;NFSU2_TR(0x641ec8);
__builtin_memmove((R+28),(R+28),4);
}
B641eca:{NFSU2_TR(0x641eca);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B641ecb:{NFSU2_TR(0x641ecb);
__builtin_memmove((R+20),(R+16),4);
}
B641ecd:{NFSU2_TR(0x641ecd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B641ed0:{NFSU2_TR(0x641ed0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B641ed3:{NFSU2_TR(0x641ed3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B641ed6:{NFSU2_TR(0x641ed6);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B641ed8:{NFSU2_TR(0x641ed8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B641edb:{NFSU2_TR(0x641edb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B641edc:{NFSU2_TR(0x641edc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B641edf:{NFSU2_TR(0x641edf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+4)),r4(U+0));
}
B641ee2:{NFSU2_TR(0x641ee2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B641ee5:{NFSU2_TR(0x641ee5);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B641ee7:{NFSU2_TR(0x641ee7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B641ee8:{NFSU2_TR(0x641ee8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B641eeb:{NFSU2_TR(0x641eeb);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((R+0),(U+0),4);
}
B641eee:{NFSU2_TR(0x641eee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B641eef:{NFSU2_TR(0x641eef);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((R+0),(U+0),4);
}
B641ef2:{NFSU2_TR(0x641ef2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B641ef3:{NFSU2_TR(0x641ef3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((R+0),(U+0),4);
}
B641ef6:{NFSU2_TR(0x641ef6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B641ef7:{NFSU2_TR(0x641ef7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B641ef8:{NFSU2_TR(0x641ef8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B641efb:{NFSU2_TR(0x641efb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B641efc:{NFSU2_TR(0x641efc);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B641eff:{NFSU2_TR(0x641eff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B641f00:{NFSU2_TR(0x641f00);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B641f03:{NFSU2_TR(0x641f03);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x641f08ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x641c16u);}goto L641c16;}
}
B641f08:L641f08:{c.instructions+=3;NFSU2_TR(0x641f08);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B641f09:{NFSU2_TR(0x641f09);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B641f0a:{NFSU2_TR(0x641f0a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B641f0d:L641f0d:{c.instructions+=19;NFSU2_TR(0x641f0d);
__builtin_memmove((R+28),(R+28),4);
}
B641f0f:{NFSU2_TR(0x641f0f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B641f10:{NFSU2_TR(0x641f10);
__builtin_memmove((R+20),(R+16),4);
}
B641f12:{NFSU2_TR(0x641f12);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B641f13:{NFSU2_TR(0x641f13);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B641f14:{NFSU2_TR(0x641f14);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B641f18:{NFSU2_TR(0x641f18);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B641f19:{NFSU2_TR(0x641f19);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B641f1a:{NFSU2_TR(0x641f1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B641f1d:{NFSU2_TR(0x641f1d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B641f1f:{NFSU2_TR(0x641f1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B641f22:{NFSU2_TR(0x641f22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B641f24:{NFSU2_TR(0x641f24);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B641f26:{NFSU2_TR(0x641f26);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B641f27:{NFSU2_TR(0x641f27);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B641f29:{NFSU2_TR(0x641f29);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B641f2a:{NFSU2_TR(0x641f2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B641f2d:{NFSU2_TR(0x641f2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B641f30:{NFSU2_TR(0x641f30);
if(r1(R+512)){{goto L641f35;}}
}
B641f32:L641f32:{c.instructions+=1;NFSU2_TR(0x641f32);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B641f35:L641f35:{c.instructions+=2;NFSU2_TR(0x641f35);
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
B641f37:{NFSU2_TR(0x641f37);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L641fec;}}
}
B641f3d:L641f3d:{c.instructions+=2;NFSU2_TR(0x641f3d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B641f40:{NFSU2_TR(0x641f40);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L641fc9;}}
}
B641f46:L641f46:{c.instructions+=2;NFSU2_TR(0x641f46);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B641f49:{NFSU2_TR(0x641f49);
if(r1(R+518)){{goto L641f92;}}
}
B641f4b:L641f4b:{c.instructions+=2;NFSU2_TR(0x641f4b);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B641f4e:{NFSU2_TR(0x641f4e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L641fec;}}
}
B641f54:L641f54:{c.instructions+=5;NFSU2_TR(0x641f54);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B641f58:{NFSU2_TR(0x641f58);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B641f5b:{NFSU2_TR(0x641f5b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((R+28),(U+0),4);
}
B641f5e:{NFSU2_TR(0x641f5e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+24)),r4(U+0));
}
B641f60:{NFSU2_TR(0x641f60);
if(r1(R+518)){{goto L641ff3;}}
}
B641f66:L641f66:{c.instructions+=4;NFSU2_TR(0x641f66);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B641f6a:{NFSU2_TR(0x641f6a);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B641f6c:{NFSU2_TR(0x641f6c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+24)),r4(U+0));
}
B641f6e:{NFSU2_TR(0x641f6e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L641f8b;}}
}
B641f70:L641f70:{c.instructions+=4;NFSU2_TR(0x641f70);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B641f73:{NFSU2_TR(0x641f73);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B641f76:{NFSU2_TR(0x641f76);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B641f77:{NFSU2_TR(0x641f77);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x641f7cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x641f0du);}goto L641f0d;}
}
B641f7c:L641f7c:{c.instructions+=3;NFSU2_TR(0x641f7c);
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
B641f7e:{NFSU2_TR(0x641f7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B641f81:{NFSU2_TR(0x641f81);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L641ff3;}}
}
B641f83:L641f83:{c.instructions+=3;NFSU2_TR(0x641f83);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B641f86:{NFSU2_TR(0x641f86);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
}
B641f89:{NFSU2_TR(0x641f89);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x641f70u);}goto L641f70;}}
}
B641f8b:L641f8b:{c.instructions+=2;NFSU2_TR(0x641f8b);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
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
B641f8e:{NFSU2_TR(0x641f8e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x641f66u);}goto L641f66;}}
}
B641f90:L641f90:{c.instructions+=1;NFSU2_TR(0x641f90);
{goto L641ff3;}
}
B641f92:L641f92:{c.instructions+=2;NFSU2_TR(0x641f92);
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
B641f95:{NFSU2_TR(0x641f95);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L641fec;}}
}
B641f97:L641f97:{c.instructions+=2;NFSU2_TR(0x641f97);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x9ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B641f9a:{NFSU2_TR(0x641f9a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L641fa6;}}
}
B641f9c:L641f9c:{c.instructions+=2;NFSU2_TR(0x641f9c);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xeull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xeull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xeull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B641f9f:{NFSU2_TR(0x641f9f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L641fec;}}
}
B641fa1:L641fa1:{c.instructions+=2;NFSU2_TR(0x641fa1);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x10ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x10ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B641fa4:{NFSU2_TR(0x641fa4);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L641fec;}}
}
B641fa6:L641fa6:{c.instructions+=3;NFSU2_TR(0x641fa6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B641fa9:{NFSU2_TR(0x641fa9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B641fab:{NFSU2_TR(0x641fab);
if(r1(R+518)){{goto L641fc4;}}
}
B641fad:L641fad:{c.instructions+=2;NFSU2_TR(0x641fad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B641fb0:{NFSU2_TR(0x641fb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B641fb3:L641fb3:{c.instructions+=8;NFSU2_TR(0x641fb3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+28),(U+0),4);
}
B641fb5:{NFSU2_TR(0x641fb5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+12),(U+0),4);
}
B641fb7:{NFSU2_TR(0x641fb7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B641fb9:{NFSU2_TR(0x641fb9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+12)),r4(U+0));
}
B641fbb:{NFSU2_TR(0x641fbb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x4ull))));
s4(u32(r4(R+4)),r4(U+0));
}
B641fbe:{NFSU2_TR(0x641fbe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x4ull))));
s4(u32(r4(R+8)),r4(U+0));
}
B641fc1:{NFSU2_TR(0x641fc1);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B641fc2:{NFSU2_TR(0x641fc2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x641fb3u);}goto L641fb3;}}
}
B641fc4:L641fc4:{c.instructions+=2;NFSU2_TR(0x641fc4);
u8 U[10];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w1(R+512,carry<u32>(r4(U+0),u32(0x14ull)));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w1(R+523,scarry<u32>(r4(U+0),u32(0x14ull)));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x14ull))));
s4(u32(r4(R+24)),r4(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+4,u32(u32(r4(U+0))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B641fc7:{NFSU2_TR(0x641fc7);
{goto L641ff3;}
}
B641fc9:L641fc9:{c.instructions+=5;NFSU2_TR(0x641fc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B641fcc:{NFSU2_TR(0x641fcc);
u8 U[32];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
w8(U+8,u64(s64(s32(r4(R+8)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(r8(U+24)));
}
B641fd0:{NFSU2_TR(0x641fd0);
u8 U[40];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w8(U+16,u64(s64(s32(r4(R+8)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+24,u64(s64(s32(r4(U+4)))));
w8(U+32,u64(u64(r8(U+16))*u64(r8(U+24))));
w4(R+8,u32(r8(U+32)));
w8(U+8,u64(s64(s32(r4(R+8)))));
w1(R+512,u8((r8(U+8))!=(r8(U+32))));
}
B641fd4:{NFSU2_TR(0x641fd4);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B641fd5:{NFSU2_TR(0x641fd5);
if(r1(R+518)){{goto L641fdd;}}
}
B641fd7:L641fd7:{c.instructions+=2;NFSU2_TR(0x641fd7);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B641fd8:{NFSU2_TR(0x641fd8);
if(r1(R+518)){{goto L641fdd;}}
}
B641fda:L641fda:{c.instructions+=2;NFSU2_TR(0x641fda);
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
B641fdb:{NFSU2_TR(0x641fdb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L641fec;}}
}
B641fdd:L641fdd:{c.instructions+=6;NFSU2_TR(0x641fdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B641fe0:{NFSU2_TR(0x641fe0);
__builtin_memmove((R+4),(R+8),4);
}
B641fe2:{NFSU2_TR(0x641fe2);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B641fe5:{NFSU2_TR(0x641fe5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+4))));
s4(u32(r4(R+0)),r4(U+0));
}
B641fe7:{NFSU2_TR(0x641fe7);
u8 U[10];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w1(R+512,carry<u32>(r4(U+0),u32(0x1cull)));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w1(R+523,scarry<u32>(r4(U+0),u32(0x1cull)));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1cull))));
s4(u32(r4(R+24)),r4(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+4,u32(u32(r4(U+0))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B641fea:{NFSU2_TR(0x641fea);
{goto L641ff3;}
}
B641fec:L641fec:{c.instructions+=1;NFSU2_TR(0x641fec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x80004005ull));
s4(u32(r4(U+0)),r4(U+4));
}
B641ff3:L641ff3:{c.instructions+=6;NFSU2_TR(0x641ff3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B641ff6:{NFSU2_TR(0x641ff6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B641ff7:{NFSU2_TR(0x641ff7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B641ff8:{NFSU2_TR(0x641ff8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B641ff9:{NFSU2_TR(0x641ff9);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B641ffa:{NFSU2_TR(0x641ffa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B641ffd:L641ffd:{c.instructions+=2;NFSU2_TR(0x641ffd);
__builtin_memmove((R+28),(R+28),4);
}
B641fff:{NFSU2_TR(0x641fff);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
TAIL_STATIC(0x642000u,642);
}
XIT:NFSU2_TR_EXIT(0x641,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
