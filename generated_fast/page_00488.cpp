#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_489(u8* __restrict R,Cpu& c);
u32 body_5b9(u8* __restrict R,Cpu& c);
u32 body_5c2(u8* __restrict R,Cpu& c);
u32 body_5ce(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x488,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x488,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_488(u8* __restrict R,Cpu& c);
u32 page_488(Cpu& c){return body_488(c.regs.data(),c);}
__attribute__((noinline)) u32 body_488(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x488003:goto L488003;
case 0x488006:c.instructions+=130;goto B488006;
case 0x488008:c.instructions+=129;goto B488008;
case 0x48800c:c.instructions+=128;goto B48800c;
case 0x48800f:c.instructions+=127;goto B48800f;
case 0x488011:c.instructions+=126;goto B488011;
case 0x488018:c.instructions+=125;goto B488018;
case 0x48801c:c.instructions+=124;goto B48801c;
case 0x48801f:c.instructions+=123;goto B48801f;
case 0x488023:c.instructions+=122;goto B488023;
case 0x488026:c.instructions+=121;goto B488026;
case 0x488028:c.instructions+=120;goto B488028;
case 0x48802c:c.instructions+=119;goto B48802c;
case 0x48802f:c.instructions+=118;goto B48802f;
case 0x488031:c.instructions+=117;goto B488031;
case 0x488035:c.instructions+=116;goto B488035;
case 0x488038:c.instructions+=115;goto B488038;
case 0x48803a:c.instructions+=114;goto B48803a;
case 0x488041:c.instructions+=113;goto B488041;
case 0x488045:c.instructions+=112;goto B488045;
case 0x488048:c.instructions+=111;goto B488048;
case 0x48804c:c.instructions+=110;goto B48804c;
case 0x48804f:c.instructions+=109;goto B48804f;
case 0x488051:c.instructions+=108;goto B488051;
case 0x488055:c.instructions+=107;goto B488055;
case 0x488058:c.instructions+=106;goto B488058;
case 0x48805a:c.instructions+=105;goto B48805a;
case 0x48805e:c.instructions+=104;goto B48805e;
case 0x488061:c.instructions+=103;goto B488061;
case 0x488063:c.instructions+=102;goto B488063;
case 0x48806a:c.instructions+=101;goto B48806a;
case 0x48806e:c.instructions+=100;goto B48806e;
case 0x488071:c.instructions+=99;goto B488071;
case 0x488075:c.instructions+=98;goto B488075;
case 0x488078:c.instructions+=97;goto B488078;
case 0x48807a:c.instructions+=96;goto B48807a;
case 0x48807e:c.instructions+=95;goto B48807e;
case 0x488081:c.instructions+=94;goto B488081;
case 0x488083:c.instructions+=93;goto B488083;
case 0x488087:c.instructions+=92;goto B488087;
case 0x488089:c.instructions+=91;goto B488089;
case 0x48808b:c.instructions+=90;goto B48808b;
case 0x488092:c.instructions+=89;goto B488092;
case 0x488096:c.instructions+=88;goto B488096;
case 0x488099:c.instructions+=87;goto B488099;
case 0x48809d:c.instructions+=86;goto B48809d;
case 0x4880a0:c.instructions+=85;goto B4880a0;
case 0x4880a2:c.instructions+=84;goto B4880a2;
case 0x4880a6:c.instructions+=83;goto B4880a6;
case 0x4880a9:c.instructions+=82;goto B4880a9;
case 0x4880ab:c.instructions+=81;goto B4880ab;
case 0x4880af:c.instructions+=80;goto B4880af;
case 0x4880b2:c.instructions+=79;goto B4880b2;
case 0x4880b4:c.instructions+=78;goto B4880b4;
case 0x4880bb:c.instructions+=77;goto B4880bb;
case 0x4880bf:c.instructions+=76;goto B4880bf;
case 0x4880c2:c.instructions+=75;goto B4880c2;
case 0x4880c6:c.instructions+=74;goto B4880c6;
case 0x4880c9:c.instructions+=73;goto B4880c9;
case 0x4880cb:c.instructions+=72;goto B4880cb;
case 0x4880cf:c.instructions+=71;goto B4880cf;
case 0x4880d2:c.instructions+=70;goto B4880d2;
case 0x4880d4:c.instructions+=69;goto B4880d4;
case 0x4880d8:c.instructions+=68;goto B4880d8;
case 0x4880db:c.instructions+=67;goto B4880db;
case 0x4880dd:c.instructions+=66;goto B4880dd;
case 0x4880e4:c.instructions+=65;goto B4880e4;
case 0x4880e8:c.instructions+=64;goto B4880e8;
case 0x4880eb:c.instructions+=63;goto B4880eb;
case 0x4880ef:c.instructions+=62;goto B4880ef;
case 0x4880f2:c.instructions+=61;goto B4880f2;
case 0x4880f4:c.instructions+=60;goto B4880f4;
case 0x4880f8:c.instructions+=59;goto B4880f8;
case 0x4880fb:c.instructions+=58;goto B4880fb;
case 0x4880fd:c.instructions+=57;goto B4880fd;
case 0x488101:c.instructions+=56;goto B488101;
case 0x488104:c.instructions+=55;goto B488104;
case 0x488106:c.instructions+=54;goto B488106;
case 0x48810d:c.instructions+=53;goto B48810d;
case 0x488111:c.instructions+=52;goto B488111;
case 0x488114:c.instructions+=51;goto B488114;
case 0x488118:c.instructions+=50;goto B488118;
case 0x48811b:c.instructions+=49;goto B48811b;
case 0x48811d:c.instructions+=48;goto B48811d;
case 0x488121:c.instructions+=47;goto B488121;
case 0x488124:c.instructions+=46;goto B488124;
case 0x488126:c.instructions+=45;goto B488126;
case 0x48812a:c.instructions+=44;goto B48812a;
case 0x48812c:c.instructions+=43;goto B48812c;
case 0x48812e:c.instructions+=42;goto B48812e;
case 0x488135:c.instructions+=41;goto B488135;
case 0x488139:c.instructions+=40;goto B488139;
case 0x48813c:c.instructions+=39;goto B48813c;
case 0x488140:c.instructions+=38;goto B488140;
case 0x488143:c.instructions+=37;goto B488143;
case 0x488145:c.instructions+=36;goto B488145;
case 0x488149:c.instructions+=35;goto B488149;
case 0x48814c:c.instructions+=34;goto B48814c;
case 0x48814e:c.instructions+=33;goto B48814e;
case 0x488152:c.instructions+=32;goto B488152;
case 0x488155:c.instructions+=31;goto B488155;
case 0x488157:c.instructions+=30;goto B488157;
case 0x48815e:c.instructions+=29;goto B48815e;
case 0x488162:c.instructions+=28;goto B488162;
case 0x488165:c.instructions+=27;goto B488165;
case 0x488169:c.instructions+=26;goto B488169;
case 0x48816c:c.instructions+=25;goto B48816c;
case 0x48816e:c.instructions+=24;goto B48816e;
case 0x488172:c.instructions+=23;goto B488172;
case 0x488176:c.instructions+=22;goto B488176;
case 0x488177:c.instructions+=21;goto B488177;
case 0x48817a:c.instructions+=20;goto B48817a;
case 0x48817c:c.instructions+=19;goto B48817c;
case 0x488180:c.instructions+=18;goto B488180;
case 0x488183:c.instructions+=17;goto B488183;
case 0x488185:c.instructions+=16;goto B488185;
case 0x48818c:c.instructions+=15;goto B48818c;
case 0x488190:c.instructions+=14;goto B488190;
case 0x488193:c.instructions+=13;goto B488193;
case 0x488197:c.instructions+=12;goto B488197;
case 0x48819a:c.instructions+=11;goto B48819a;
case 0x48819c:c.instructions+=10;goto B48819c;
case 0x4881a0:c.instructions+=9;goto B4881a0;
case 0x4881a3:c.instructions+=8;goto B4881a3;
case 0x4881a5:c.instructions+=7;goto B4881a5;
case 0x4881a9:c.instructions+=6;goto B4881a9;
case 0x4881ac:c.instructions+=5;goto B4881ac;
case 0x4881af:c.instructions+=4;goto B4881af;
case 0x4881b0:c.instructions+=3;goto B4881b0;
case 0x4881b2:c.instructions+=2;goto B4881b2;
case 0x4881b9:c.instructions+=1;goto B4881b9;
case 0x4881be:goto L4881be;
case 0x4881c1:c.instructions+=3;goto B4881c1;
case 0x4881c3:c.instructions+=2;goto B4881c3;
case 0x4881c4:c.instructions+=1;goto B4881c4;
case 0x4881d0:goto L4881d0;
case 0x4881d1:c.instructions+=57;goto B4881d1;
case 0x4881d3:c.instructions+=56;goto B4881d3;
case 0x4881d6:c.instructions+=55;goto B4881d6;
case 0x4881d9:c.instructions+=54;goto B4881d9;
case 0x4881dc:c.instructions+=53;goto B4881dc;
case 0x4881df:c.instructions+=52;goto B4881df;
case 0x4881e2:c.instructions+=51;goto B4881e2;
case 0x4881e5:c.instructions+=50;goto B4881e5;
case 0x4881e7:c.instructions+=49;goto B4881e7;
case 0x4881eb:c.instructions+=48;goto B4881eb;
case 0x4881ed:c.instructions+=47;goto B4881ed;
case 0x4881f0:c.instructions+=46;goto B4881f0;
case 0x4881f3:c.instructions+=45;goto B4881f3;
case 0x4881f6:c.instructions+=44;goto B4881f6;
case 0x4881f8:c.instructions+=43;goto B4881f8;
case 0x4881fc:c.instructions+=42;goto B4881fc;
case 0x4881fe:c.instructions+=41;goto B4881fe;
case 0x488200:c.instructions+=40;goto B488200;
case 0x488203:c.instructions+=39;goto B488203;
case 0x488207:c.instructions+=38;goto B488207;
case 0x488209:c.instructions+=37;goto B488209;
case 0x48820c:c.instructions+=36;goto B48820c;
case 0x488210:c.instructions+=35;goto B488210;
case 0x488213:c.instructions+=34;goto B488213;
case 0x488215:c.instructions+=33;goto B488215;
case 0x488218:c.instructions+=32;goto B488218;
case 0x48821b:c.instructions+=31;goto B48821b;
case 0x48821d:c.instructions+=30;goto B48821d;
case 0x488220:c.instructions+=29;goto B488220;
case 0x488222:c.instructions+=28;goto B488222;
case 0x488225:c.instructions+=27;goto B488225;
case 0x488229:c.instructions+=26;goto B488229;
case 0x48822c:c.instructions+=25;goto B48822c;
case 0x48822e:c.instructions+=24;goto B48822e;
case 0x488231:c.instructions+=23;goto B488231;
case 0x488234:c.instructions+=22;goto B488234;
case 0x488236:c.instructions+=21;goto B488236;
case 0x488239:c.instructions+=20;goto B488239;
case 0x48823b:c.instructions+=19;goto B48823b;
case 0x48823e:c.instructions+=18;goto B48823e;
case 0x488242:c.instructions+=17;goto B488242;
case 0x488245:c.instructions+=16;goto B488245;
case 0x488247:c.instructions+=15;goto B488247;
case 0x48824a:c.instructions+=14;goto B48824a;
case 0x48824d:c.instructions+=13;goto B48824d;
case 0x48824f:c.instructions+=12;goto B48824f;
case 0x488252:c.instructions+=11;goto B488252;
case 0x488255:c.instructions+=10;goto B488255;
case 0x488259:c.instructions+=9;goto B488259;
case 0x48825d:c.instructions+=8;goto B48825d;
case 0x488261:c.instructions+=7;goto B488261;
case 0x488264:c.instructions+=6;goto B488264;
case 0x488266:c.instructions+=5;goto B488266;
case 0x488269:c.instructions+=4;goto B488269;
case 0x48826c:c.instructions+=3;goto B48826c;
case 0x48826e:c.instructions+=2;goto B48826e;
case 0x48826f:c.instructions+=1;goto B48826f;
case 0x488270:goto L488270;
case 0x488273:c.instructions+=7;goto B488273;
case 0x488277:c.instructions+=6;goto B488277;
case 0x48827f:c.instructions+=5;goto B48827f;
case 0x488285:c.instructions+=4;goto B488285;
case 0x48828d:c.instructions+=3;goto B48828d;
case 0x48828f:c.instructions+=2;goto B48828f;
case 0x488292:c.instructions+=1;goto B488292;
case 0x488294:goto L488294;
case 0x488298:c.instructions+=1;goto B488298;
case 0x48829c:goto L48829c;
case 0x4882a0:c.instructions+=4;goto B4882a0;
case 0x4882a4:c.instructions+=3;goto B4882a4;
case 0x4882a6:c.instructions+=2;goto B4882a6;
case 0x4882a9:c.instructions+=1;goto B4882a9;
case 0x4882ab:goto L4882ab;
case 0x4882af:c.instructions+=1;goto B4882af;
case 0x4882b3:goto L4882b3;
case 0x4882b7:c.instructions+=4;goto B4882b7;
case 0x4882bb:c.instructions+=3;goto B4882bb;
case 0x4882bd:c.instructions+=2;goto B4882bd;
case 0x4882c0:c.instructions+=1;goto B4882c0;
case 0x4882c2:goto L4882c2;
case 0x4882c6:c.instructions+=1;goto B4882c6;
case 0x4882ca:goto L4882ca;
case 0x4882ce:c.instructions+=4;goto B4882ce;
case 0x4882d4:c.instructions+=3;goto B4882d4;
case 0x4882d6:c.instructions+=2;goto B4882d6;
case 0x4882d9:c.instructions+=1;goto B4882d9;
case 0x4882db:goto L4882db;
case 0x4882df:c.instructions+=1;goto B4882df;
case 0x4882e3:goto L4882e3;
case 0x4882e7:c.instructions+=4;goto B4882e7;
case 0x4882eb:c.instructions+=3;goto B4882eb;
case 0x4882ed:c.instructions+=2;goto B4882ed;
case 0x4882f0:c.instructions+=1;goto B4882f0;
case 0x4882f2:goto L4882f2;
case 0x4882f6:c.instructions+=1;goto B4882f6;
case 0x4882fa:goto L4882fa;
case 0x4882fe:c.instructions+=4;goto B4882fe;
case 0x488302:c.instructions+=3;goto B488302;
case 0x488304:c.instructions+=2;goto B488304;
case 0x488307:c.instructions+=1;goto B488307;
case 0x488309:goto L488309;
case 0x48830d:c.instructions+=1;goto B48830d;
case 0x488311:goto L488311;
case 0x488315:c.instructions+=11;goto B488315;
case 0x488319:c.instructions+=10;goto B488319;
case 0x48831d:c.instructions+=9;goto B48831d;
case 0x488321:c.instructions+=8;goto B488321;
case 0x488327:c.instructions+=7;goto B488327;
case 0x488329:c.instructions+=6;goto B488329;
case 0x48832b:c.instructions+=5;goto B48832b;
case 0x48832f:c.instructions+=4;goto B48832f;
case 0x488333:c.instructions+=3;goto B488333;
case 0x488335:c.instructions+=2;goto B488335;
case 0x488338:c.instructions+=1;goto B488338;
case 0x48833a:goto L48833a;
case 0x48833e:c.instructions+=6;goto B48833e;
case 0x488340:c.instructions+=5;goto B488340;
case 0x488344:c.instructions+=4;goto B488344;
case 0x48834a:c.instructions+=3;goto B48834a;
case 0x488350:c.instructions+=2;goto B488350;
case 0x488353:c.instructions+=1;goto B488353;
case 0x488354:goto L488354;
case 0x48835a:c.instructions+=5;goto B48835a;
case 0x48835e:c.instructions+=4;goto B48835e;
case 0x488362:c.instructions+=3;goto B488362;
case 0x488364:c.instructions+=2;goto B488364;
case 0x488367:c.instructions+=1;goto B488367;
case 0x488369:goto L488369;
case 0x48836d:c.instructions+=4;goto B48836d;
case 0x488371:c.instructions+=3;goto B488371;
case 0x488373:c.instructions+=2;goto B488373;
case 0x488375:c.instructions+=1;goto B488375;
case 0x488377:goto L488377;
case 0x48837d:c.instructions+=5;goto B48837d;
case 0x488381:c.instructions+=4;goto B488381;
case 0x488385:c.instructions+=3;goto B488385;
case 0x488389:c.instructions+=2;goto B488389;
case 0x48838b:c.instructions+=1;goto B48838b;
case 0x48838d:goto L48838d;
case 0x488391:c.instructions+=4;goto B488391;
case 0x488395:c.instructions+=3;goto B488395;
case 0x488397:c.instructions+=2;goto B488397;
case 0x48839a:c.instructions+=1;goto B48839a;
case 0x48839c:goto L48839c;
case 0x4883a0:c.instructions+=3;goto B4883a0;
case 0x4883a4:c.instructions+=2;goto B4883a4;
case 0x4883a6:c.instructions+=1;goto B4883a6;
case 0x4883a8:goto L4883a8;
case 0x4883ac:c.instructions+=4;goto B4883ac;
case 0x4883b0:c.instructions+=3;goto B4883b0;
case 0x4883b2:c.instructions+=2;goto B4883b2;
case 0x4883b5:c.instructions+=1;goto B4883b5;
case 0x4883b7:goto L4883b7;
case 0x4883bb:c.instructions+=4;goto B4883bb;
case 0x4883bf:c.instructions+=3;goto B4883bf;
case 0x4883c1:c.instructions+=2;goto B4883c1;
case 0x4883c7:c.instructions+=1;goto B4883c7;
case 0x4883c9:goto L4883c9;
case 0x4883cd:c.instructions+=3;goto B4883cd;
case 0x4883d1:c.instructions+=2;goto B4883d1;
case 0x4883d3:c.instructions+=1;goto B4883d3;
case 0x4883d9:goto L4883d9;
case 0x4883dd:c.instructions+=7;goto B4883dd;
case 0x4883df:c.instructions+=6;goto B4883df;
case 0x4883e1:c.instructions+=5;goto B4883e1;
case 0x4883e3:c.instructions+=4;goto B4883e3;
case 0x4883e9:c.instructions+=3;goto B4883e9;
case 0x4883eb:c.instructions+=2;goto B4883eb;
case 0x4883ee:c.instructions+=1;goto B4883ee;
case 0x4883f0:goto L4883f0;
case 0x4883f4:c.instructions+=6;goto B4883f4;
case 0x4883f7:c.instructions+=5;goto B4883f7;
case 0x4883fd:c.instructions+=4;goto B4883fd;
case 0x488401:c.instructions+=3;goto B488401;
case 0x488403:c.instructions+=2;goto B488403;
case 0x488406:c.instructions+=1;goto B488406;
case 0x488408:goto L488408;
case 0x48840c:c.instructions+=9;goto B48840c;
case 0x488410:c.instructions+=8;goto B488410;
case 0x488412:c.instructions+=7;goto B488412;
case 0x488416:c.instructions+=6;goto B488416;
case 0x48841a:c.instructions+=5;goto B48841a;
case 0x48841c:c.instructions+=4;goto B48841c;
case 0x488420:c.instructions+=3;goto B488420;
case 0x488422:c.instructions+=2;goto B488422;
case 0x488425:c.instructions+=1;goto B488425;
case 0x488426:goto L488426;
case 0x48842c:c.instructions+=4;goto B48842c;
case 0x488430:c.instructions+=3;goto B488430;
case 0x488432:c.instructions+=2;goto B488432;
case 0x488435:c.instructions+=1;goto B488435;
case 0x488437:goto L488437;
case 0x48843d:c.instructions+=2;goto B48843d;
case 0x488441:c.instructions+=1;goto B488441;
case 0x488443:goto L488443;
case 0x488447:c.instructions+=3;goto B488447;
case 0x48844b:c.instructions+=2;goto B48844b;
case 0x48844f:c.instructions+=1;goto B48844f;
case 0x488451:goto L488451;
case 0x488455:c.instructions+=15;goto B488455;
case 0x488459:c.instructions+=14;goto B488459;
case 0x48845b:c.instructions+=13;goto B48845b;
case 0x48845f:c.instructions+=12;goto B48845f;
case 0x488461:c.instructions+=11;goto B488461;
case 0x488465:c.instructions+=10;goto B488465;
case 0x488469:c.instructions+=9;goto B488469;
case 0x48846f:c.instructions+=8;goto B48846f;
case 0x488473:c.instructions+=7;goto B488473;
case 0x488477:c.instructions+=6;goto B488477;
case 0x48847d:c.instructions+=5;goto B48847d;
case 0x488481:c.instructions+=4;goto B488481;
case 0x488487:c.instructions+=3;goto B488487;
case 0x488489:c.instructions+=2;goto B488489;
case 0x48848c:c.instructions+=1;goto B48848c;
case 0x48848e:goto L48848e;
case 0x488492:c.instructions+=2;goto B488492;
case 0x488498:c.instructions+=1;goto B488498;
case 0x48849c:goto L48849c;
case 0x4884a0:c.instructions+=4;goto B4884a0;
case 0x4884a6:c.instructions+=3;goto B4884a6;
case 0x4884a8:c.instructions+=2;goto B4884a8;
case 0x4884ab:c.instructions+=1;goto B4884ab;
case 0x4884ad:goto L4884ad;
case 0x4884b1:c.instructions+=2;goto B4884b1;
case 0x4884b7:c.instructions+=1;goto B4884b7;
case 0x4884bb:goto L4884bb;
case 0x4884bf:c.instructions+=4;goto B4884bf;
case 0x4884c5:c.instructions+=3;goto B4884c5;
case 0x4884c7:c.instructions+=2;goto B4884c7;
case 0x4884ca:c.instructions+=1;goto B4884ca;
case 0x4884cc:goto L4884cc;
case 0x4884d0:c.instructions+=2;goto B4884d0;
case 0x4884d6:c.instructions+=1;goto B4884d6;
case 0x4884d8:goto L4884d8;
case 0x4884dc:goto L4884dc;
case 0x4884e2:c.instructions+=3;goto B4884e2;
case 0x4884e4:c.instructions+=2;goto B4884e4;
case 0x4884e7:c.instructions+=1;goto B4884e7;
case 0x4884e9:goto L4884e9;
case 0x4884ef:goto L4884ef;
case 0x4884f1:c.instructions+=4;goto B4884f1;
case 0x4884f7:c.instructions+=3;goto B4884f7;
case 0x4884f9:c.instructions+=2;goto B4884f9;
case 0x4884fc:c.instructions+=1;goto B4884fc;
case 0x4884fe:goto L4884fe;
case 0x488500:c.instructions+=2;goto B488500;
case 0x488506:c.instructions+=1;goto B488506;
case 0x488508:goto L488508;
case 0x48850a:c.instructions+=4;goto B48850a;
case 0x488510:c.instructions+=3;goto B488510;
case 0x488512:c.instructions+=2;goto B488512;
case 0x488515:c.instructions+=1;goto B488515;
case 0x488517:goto L488517;
case 0x488519:c.instructions+=2;goto B488519;
case 0x48851f:c.instructions+=1;goto B48851f;
case 0x488521:goto L488521;
case 0x488525:c.instructions+=5;goto B488525;
case 0x48852b:c.instructions+=4;goto B48852b;
case 0x488531:c.instructions+=3;goto B488531;
case 0x488533:c.instructions+=2;goto B488533;
case 0x488536:c.instructions+=1;goto B488536;
case 0x488538:goto L488538;
case 0x48853a:c.instructions+=5;goto B48853a;
case 0x48853e:c.instructions+=4;goto B48853e;
case 0x488542:c.instructions+=3;goto B488542;
case 0x488548:c.instructions+=2;goto B488548;
case 0x48854c:c.instructions+=1;goto B48854c;
case 0x48854e:goto L48854e;
case 0x488552:c.instructions+=5;goto B488552;
case 0x488554:c.instructions+=4;goto B488554;
case 0x48855a:c.instructions+=3;goto B48855a;
case 0x48855c:c.instructions+=2;goto B48855c;
case 0x48855f:c.instructions+=1;goto B48855f;
case 0x488561:goto L488561;
case 0x488565:c.instructions+=3;goto B488565;
case 0x488567:c.instructions+=2;goto B488567;
case 0x488569:c.instructions+=1;goto B488569;
case 0x48856b:goto L48856b;
case 0x48856f:c.instructions+=5;goto B48856f;
case 0x488575:c.instructions+=4;goto B488575;
case 0x48857b:c.instructions+=3;goto B48857b;
case 0x48857d:c.instructions+=2;goto B48857d;
case 0x488580:c.instructions+=1;goto B488580;
case 0x488582:goto L488582;
case 0x488586:c.instructions+=9;goto B488586;
case 0x488588:c.instructions+=8;goto B488588;
case 0x48858c:c.instructions+=7;goto B48858c;
case 0x488592:c.instructions+=6;goto B488592;
case 0x488596:c.instructions+=5;goto B488596;
case 0x488598:c.instructions+=4;goto B488598;
case 0x48859e:c.instructions+=3;goto B48859e;
case 0x4885a2:c.instructions+=2;goto B4885a2;
case 0x4885a4:c.instructions+=1;goto B4885a4;
case 0x4885a6:goto L4885a6;
case 0x4885aa:goto L4885aa;
case 0x4885ae:c.instructions+=1;goto B4885ae;
case 0x4885b0:goto L4885b0;
case 0x4885b6:c.instructions+=5;goto B4885b6;
case 0x4885b8:c.instructions+=4;goto B4885b8;
case 0x4885be:c.instructions+=3;goto B4885be;
case 0x4885c0:c.instructions+=2;goto B4885c0;
case 0x4885c3:c.instructions+=1;goto B4885c3;
case 0x4885c5:goto L4885c5;
case 0x4885c9:c.instructions+=8;goto B4885c9;
case 0x4885cb:c.instructions+=7;goto B4885cb;
case 0x4885cf:c.instructions+=6;goto B4885cf;
case 0x4885d1:c.instructions+=5;goto B4885d1;
case 0x4885d7:c.instructions+=4;goto B4885d7;
case 0x4885db:c.instructions+=3;goto B4885db;
case 0x4885dd:c.instructions+=2;goto B4885dd;
case 0x4885df:c.instructions+=1;goto B4885df;
case 0x4885e1:goto L4885e1;
case 0x4885e3:c.instructions+=5;goto B4885e3;
case 0x4885e5:c.instructions+=4;goto B4885e5;
case 0x4885eb:c.instructions+=3;goto B4885eb;
case 0x4885ed:c.instructions+=2;goto B4885ed;
case 0x4885f0:c.instructions+=1;goto B4885f0;
case 0x4885f2:goto L4885f2;
case 0x4885f6:c.instructions+=4;goto B4885f6;
case 0x4885f8:c.instructions+=3;goto B4885f8;
case 0x4885fa:c.instructions+=2;goto B4885fa;
case 0x4885fc:c.instructions+=1;goto B4885fc;
case 0x4885fe:goto L4885fe;
case 0x488604:c.instructions+=5;goto B488604;
case 0x488606:c.instructions+=4;goto B488606;
case 0x48860c:c.instructions+=3;goto B48860c;
case 0x48860e:c.instructions+=2;goto B48860e;
case 0x488611:c.instructions+=1;goto B488611;
case 0x488613:goto L488613;
case 0x488617:c.instructions+=10;goto B488617;
case 0x488619:c.instructions+=9;goto B488619;
case 0x48861d:c.instructions+=8;goto B48861d;
case 0x488623:c.instructions+=7;goto B488623;
case 0x488625:c.instructions+=6;goto B488625;
case 0x488627:c.instructions+=5;goto B488627;
case 0x48862d:c.instructions+=4;goto B48862d;
case 0x488631:c.instructions+=3;goto B488631;
case 0x488633:c.instructions+=2;goto B488633;
case 0x488635:c.instructions+=1;goto B488635;
case 0x488637:goto L488637;
case 0x48863b:c.instructions+=3;goto B48863b;
case 0x48863d:c.instructions+=2;goto B48863d;
case 0x488641:c.instructions+=1;goto B488641;
case 0x488643:goto L488643;
case 0x488649:c.instructions+=5;goto B488649;
case 0x48864b:c.instructions+=4;goto B48864b;
case 0x488651:c.instructions+=3;goto B488651;
case 0x488653:c.instructions+=2;goto B488653;
case 0x488656:c.instructions+=1;goto B488656;
case 0x488658:goto L488658;
case 0x48865c:c.instructions+=9;goto B48865c;
case 0x48865e:c.instructions+=8;goto B48865e;
case 0x488662:c.instructions+=7;goto B488662;
case 0x488664:c.instructions+=6;goto B488664;
case 0x48866a:c.instructions+=5;goto B48866a;
case 0x48866e:c.instructions+=4;goto B48866e;
case 0x488670:c.instructions+=3;goto B488670;
case 0x488672:c.instructions+=2;goto B488672;
case 0x488675:c.instructions+=1;goto B488675;
case 0x488676:goto L488676;
case 0x488678:c.instructions+=5;goto B488678;
case 0x48867a:c.instructions+=4;goto B48867a;
case 0x488680:c.instructions+=3;goto B488680;
case 0x488682:c.instructions+=2;goto B488682;
case 0x488685:c.instructions+=1;goto B488685;
case 0x488687:goto L488687;
case 0x48868b:c.instructions+=4;goto B48868b;
case 0x48868d:c.instructions+=3;goto B48868d;
case 0x48868f:c.instructions+=2;goto B48868f;
case 0x488692:c.instructions+=1;goto B488692;
case 0x488693:goto L488693;
case 0x488699:c.instructions+=5;goto B488699;
case 0x48869b:c.instructions+=4;goto B48869b;
case 0x4886a1:c.instructions+=3;goto B4886a1;
case 0x4886a3:c.instructions+=2;goto B4886a3;
case 0x4886a6:c.instructions+=1;goto B4886a6;
case 0x4886a8:goto L4886a8;
case 0x4886ac:c.instructions+=11;goto B4886ac;
case 0x4886ae:c.instructions+=10;goto B4886ae;
case 0x4886b2:c.instructions+=9;goto B4886b2;
case 0x4886b8:c.instructions+=8;goto B4886b8;
case 0x4886ba:c.instructions+=7;goto B4886ba;
case 0x4886bc:c.instructions+=6;goto B4886bc;
case 0x4886c2:c.instructions+=5;goto B4886c2;
case 0x4886c6:c.instructions+=4;goto B4886c6;
case 0x4886c8:c.instructions+=3;goto B4886c8;
case 0x4886ca:c.instructions+=2;goto B4886ca;
case 0x4886cd:c.instructions+=1;goto B4886cd;
case 0x4886ce:goto L4886ce;
case 0x4886d2:c.instructions+=6;goto B4886d2;
case 0x4886d4:c.instructions+=5;goto B4886d4;
case 0x4886d6:c.instructions+=4;goto B4886d6;
case 0x4886da:c.instructions+=3;goto B4886da;
case 0x4886dc:c.instructions+=2;goto B4886dc;
case 0x4886df:c.instructions+=1;goto B4886df;
case 0x4886e0:goto L4886e0;
case 0x4886e2:c.instructions+=4;goto B4886e2;
case 0x4886e7:c.instructions+=3;goto B4886e7;
case 0x4886ec:c.instructions+=2;goto B4886ec;
case 0x4886ee:c.instructions+=1;goto B4886ee;
case 0x4886f3:goto L4886f3;
case 0x4886f5:c.instructions+=5;goto B4886f5;
case 0x4886fa:c.instructions+=4;goto B4886fa;
case 0x4886ff:c.instructions+=3;goto B4886ff;
case 0x488704:c.instructions+=2;goto B488704;
case 0x488709:c.instructions+=1;goto B488709;
case 0x48870e:goto L48870e;
case 0x488713:c.instructions+=8;goto B488713;
case 0x488718:c.instructions+=7;goto B488718;
case 0x48871c:c.instructions+=6;goto B48871c;
case 0x488721:c.instructions+=5;goto B488721;
case 0x488724:c.instructions+=4;goto B488724;
case 0x488727:c.instructions+=3;goto B488727;
case 0x48872a:c.instructions+=2;goto B48872a;
case 0x48872d:c.instructions+=1;goto B48872d;
case 0x488730:goto L488730;
case 0x488737:c.instructions+=2;goto B488737;
case 0x48873c:c.instructions+=1;goto B48873c;
case 0x48873e:goto L48873e;
case 0x488745:c.instructions+=1;goto B488745;
case 0x488747:goto L488747;
case 0x48874c:goto L48874c;
case 0x48874e:c.instructions+=4;goto B48874e;
case 0x488753:c.instructions+=3;goto B488753;
case 0x488754:c.instructions+=2;goto B488754;
case 0x488756:c.instructions+=1;goto B488756;
case 0x48875b:goto L48875b;
case 0x488760:c.instructions+=7;goto B488760;
case 0x488764:c.instructions+=6;goto B488764;
case 0x488769:c.instructions+=5;goto B488769;
case 0x48876c:c.instructions+=4;goto B48876c;
case 0x48876f:c.instructions+=3;goto B48876f;
case 0x488772:c.instructions+=2;goto B488772;
case 0x488775:c.instructions+=1;goto B488775;
case 0x488780:goto L488780;
case 0x488785:c.instructions+=2;goto B488785;
case 0x488786:c.instructions+=1;goto B488786;
case 0x48878b:goto L48878b;
case 0x488791:c.instructions+=2;goto B488791;
case 0x488792:c.instructions+=1;goto B488792;
case 0x488797:goto L488797;
case 0x48879d:c.instructions+=2;goto B48879d;
case 0x48879e:c.instructions+=1;goto B48879e;
case 0x4887a3:goto L4887a3;
case 0x4887a6:c.instructions+=2;goto B4887a6;
case 0x4887b0:c.instructions+=1;goto B4887b0;
case 0x4887c0:goto L4887c0;
case 0x4887c5:c.instructions+=2;goto B4887c5;
case 0x4887c7:c.instructions+=1;goto B4887c7;
case 0x4887c9:goto L4887c9;
case 0x4887ce:c.instructions+=2;goto B4887ce;
case 0x4887d0:c.instructions+=1;goto B4887d0;
case 0x4887d2:goto L4887d2;
case 0x4887d7:c.instructions+=2;goto B4887d7;
case 0x4887d9:c.instructions+=1;goto B4887d9;
case 0x4887db:goto L4887db;
case 0x4887e0:goto L4887e0;
case 0x4887ea:c.instructions+=2;goto B4887ea;
case 0x4887f4:c.instructions+=1;goto B4887f4;
case 0x4887fe:goto L4887fe;
case 0x488800:goto L488800;
case 0x488805:c.instructions+=2;goto B488805;
case 0x488807:c.instructions+=1;goto B488807;
case 0x488809:goto L488809;
case 0x48880e:c.instructions+=2;goto B48880e;
case 0x488814:c.instructions+=1;goto B488814;
case 0x488816:goto L488816;
case 0x48881b:goto L48881b;
case 0x488821:c.instructions+=9;goto B488821;
case 0x488826:c.instructions+=8;goto B488826;
case 0x48882c:c.instructions+=7;goto B48882c;
case 0x48882d:c.instructions+=6;goto B48882d;
case 0x488833:c.instructions+=5;goto B488833;
case 0x488835:c.instructions+=4;goto B488835;
case 0x488837:c.instructions+=3;goto B488837;
case 0x488841:c.instructions+=2;goto B488841;
case 0x48884b:c.instructions+=1;goto B48884b;
case 0x48884d:goto L48884d;
case 0x488852:goto L488852;
case 0x488858:c.instructions+=13;goto B488858;
case 0x48885d:c.instructions+=12;goto B48885d;
case 0x488862:c.instructions+=11;goto B488862;
case 0x488867:c.instructions+=10;goto B488867;
case 0x488869:c.instructions+=9;goto B488869;
case 0x48886f:c.instructions+=8;goto B48886f;
case 0x488875:c.instructions+=7;goto B488875;
case 0x48887b:c.instructions+=6;goto B48887b;
case 0x488881:c.instructions+=5;goto B488881;
case 0x488887:c.instructions+=4;goto B488887;
case 0x48888c:c.instructions+=3;goto B48888c;
case 0x488896:c.instructions+=2;goto B488896;
case 0x488897:c.instructions+=1;goto B488897;
case 0x4888a0:goto L4888a0;
case 0x4888a1:c.instructions+=2;goto B4888a1;
case 0x4888a2:c.instructions+=1;goto B4888a2;
case 0x4888a7:goto L4888a7;
case 0x4888ab:c.instructions+=5;goto B4888ab;
case 0x4888af:c.instructions+=4;goto B4888af;
case 0x4888b2:c.instructions+=3;goto B4888b2;
case 0x4888b5:c.instructions+=2;goto B4888b5;
case 0x4888b8:c.instructions+=1;goto B4888b8;
case 0x4888ba:goto L4888ba;
case 0x4888bd:c.instructions+=1;goto B4888bd;
case 0x4888bf:goto L4888bf;
case 0x4888c2:goto L4888c2;
case 0x4888c5:c.instructions+=1;goto B4888c5;
case 0x4888c7:goto L4888c7;
case 0x4888ca:c.instructions+=1;goto B4888ca;
case 0x4888cc:goto L4888cc;
case 0x4888cf:goto L4888cf;
case 0x4888d4:c.instructions+=2;goto B4888d4;
case 0x4888d6:c.instructions+=1;goto B4888d6;
case 0x4888d8:goto L4888d8;
case 0x4888db:c.instructions+=1;goto B4888db;
case 0x4888dd:goto L4888dd;
case 0x4888e0:c.instructions+=1;goto B4888e0;
case 0x4888e2:goto L4888e2;
case 0x4888e5:goto L4888e5;
case 0x4888eb:c.instructions+=1;goto B4888eb;
case 0x4888ed:goto L4888ed;
case 0x4888f0:goto L4888f0;
case 0x4888f3:c.instructions+=1;goto B4888f3;
case 0x4888f5:goto L4888f5;
case 0x4888f8:goto L4888f8;
case 0x4888fc:c.instructions+=3;goto B4888fc;
case 0x4888fd:c.instructions+=2;goto B4888fd;
case 0x4888fe:c.instructions+=1;goto B4888fe;
case 0x488903:goto L488903;
case 0x488906:c.instructions+=4;goto B488906;
case 0x488909:c.instructions+=3;goto B488909;
case 0x48890a:c.instructions+=2;goto B48890a;
case 0x48890b:c.instructions+=1;goto B48890b;
case 0x488910:goto L488910;
case 0x488916:c.instructions+=4;goto B488916;
case 0x48891a:c.instructions+=3;goto B48891a;
case 0x48891c:c.instructions+=2;goto B48891c;
case 0x48891e:c.instructions+=1;goto B48891e;
case 0x488920:goto L488920;
case 0x488927:c.instructions+=1;goto B488927;
case 0x488929:goto L488929;
case 0x48892a:c.instructions+=2;goto B48892a;
case 0x48892c:c.instructions+=1;goto B48892c;
case 0x48892e:goto L48892e;
case 0x488932:c.instructions+=4;goto B488932;
case 0x488939:c.instructions+=3;goto B488939;
case 0x488940:c.instructions+=2;goto B488940;
case 0x488941:c.instructions+=1;goto B488941;
case 0x488947:goto L488947;
case 0x488950:goto L488950;
case 0x488951:c.instructions+=4;goto B488951;
case 0x488957:c.instructions+=3;goto B488957;
case 0x488959:c.instructions+=2;goto B488959;
case 0x48895b:c.instructions+=1;goto B48895b;
case 0x48895d:goto L48895d;
case 0x488961:c.instructions+=1;goto B488961;
case 0x488962:goto L488962;
case 0x488969:c.instructions+=1;goto B488969;
case 0x48896b:goto L48896b;
case 0x48896c:c.instructions+=2;goto B48896c;
case 0x48896e:c.instructions+=1;goto B48896e;
case 0x488970:goto L488970;
case 0x488971:c.instructions+=2;goto B488971;
case 0x488972:c.instructions+=1;goto B488972;
case 0x488973:goto L488973;
case 0x488976:c.instructions+=1;goto B488976;
case 0x488978:goto L488978;
case 0x48897b:c.instructions+=3;goto B48897b;
case 0x48897d:c.instructions+=2;goto B48897d;
case 0x488981:c.instructions+=1;goto B488981;
case 0x488983:goto L488983;
case 0x488984:c.instructions+=8;goto B488984;
case 0x488986:c.instructions+=7;goto B488986;
case 0x488987:c.instructions+=6;goto B488987;
case 0x488988:c.instructions+=5;goto B488988;
case 0x48898b:c.instructions+=4;goto B48898b;
case 0x48898d:c.instructions+=3;goto B48898d;
case 0x488990:c.instructions+=2;goto B488990;
case 0x488997:c.instructions+=1;goto B488997;
case 0x48899e:goto L48899e;
case 0x4889a0:goto L4889a0;
case 0x4889a7:c.instructions+=6;goto B4889a7;
case 0x4889ae:c.instructions+=5;goto B4889ae;
case 0x4889b0:c.instructions+=4;goto B4889b0;
case 0x4889b4:c.instructions+=3;goto B4889b4;
case 0x4889b6:c.instructions+=2;goto B4889b6;
case 0x4889b8:c.instructions+=1;goto B4889b8;
case 0x4889bb:goto L4889bb;
case 0x4889bd:goto L4889bd;
case 0x4889be:c.instructions+=2;goto B4889be;
case 0x4889bf:c.instructions+=1;goto B4889bf;
case 0x4889c0:goto L4889c0;
case 0x4889c6:goto L4889c6;
case 0x4889c7:goto L4889c7;
case 0x4889c8:c.instructions+=1;goto B4889c8;
case 0x4889d0:goto L4889d0;
case 0x4889d4:c.instructions+=2;goto B4889d4;
case 0x4889d6:c.instructions+=1;goto B4889d6;
case 0x4889d8:goto L4889d8;
case 0x4889db:c.instructions+=1;goto B4889db;
case 0x4889de:goto L4889de;
case 0x4889e0:c.instructions+=1;goto B4889e0;
case 0x4889e2:goto L4889e2;
case 0x4889e5:c.instructions+=1;goto B4889e5;
case 0x4889e8:goto L4889e8;
case 0x4889ea:c.instructions+=1;goto B4889ea;
case 0x4889f0:goto L4889f0;
case 0x4889f4:c.instructions+=11;goto B4889f4;
case 0x4889f7:c.instructions+=10;goto B4889f7;
case 0x4889f8:c.instructions+=9;goto B4889f8;
case 0x4889fc:c.instructions+=8;goto B4889fc;
case 0x4889fd:c.instructions+=7;goto B4889fd;
case 0x4889fe:c.instructions+=6;goto B4889fe;
case 0x488a00:c.instructions+=5;goto B488a00;
case 0x488a04:c.instructions+=4;goto B488a04;
case 0x488a05:c.instructions+=3;goto B488a05;
case 0x488a06:c.instructions+=2;goto B488a06;
case 0x488a08:c.instructions+=1;goto B488a08;
case 0x488a0d:goto L488a0d;
case 0x488a0f:c.instructions+=1;goto B488a0f;
case 0x488a15:goto L488a15;
case 0x488a18:c.instructions+=3;goto B488a18;
case 0x488a19:c.instructions+=2;goto B488a19;
case 0x488a1d:c.instructions+=1;goto B488a1d;
case 0x488a1f:goto L488a1f;
case 0x488a20:c.instructions+=3;goto B488a20;
case 0x488a23:c.instructions+=2;goto B488a23;
case 0x488a24:c.instructions+=1;goto B488a24;
case 0x488a29:goto L488a29;
case 0x488a2c:c.instructions+=5;goto B488a2c;
case 0x488a2f:c.instructions+=4;goto B488a2f;
case 0x488a32:c.instructions+=3;goto B488a32;
case 0x488a33:c.instructions+=2;goto B488a33;
case 0x488a34:c.instructions+=1;goto B488a34;
case 0x488a39:goto L488a39;
case 0x488a3c:c.instructions+=2;goto B488a3c;
case 0x488a3d:c.instructions+=1;goto B488a3d;
case 0x488a42:goto L488a42;
case 0x488a45:c.instructions+=1;goto B488a45;
case 0x488a46:goto L488a46;
case 0x488a49:c.instructions+=1;goto B488a49;
case 0x488a4b:goto L488a4b;
case 0x488a4c:c.instructions+=4;goto B488a4c;
case 0x488a50:c.instructions+=3;goto B488a50;
case 0x488a55:c.instructions+=2;goto B488a55;
case 0x488a56:c.instructions+=1;goto B488a56;
case 0x488a5b:goto L488a5b;
case 0x488a5e:c.instructions+=3;goto B488a5e;
case 0x488a62:c.instructions+=2;goto B488a62;
case 0x488a63:c.instructions+=1;goto B488a63;
case 0x488a68:goto L488a68;
case 0x488a6b:c.instructions+=6;goto B488a6b;
case 0x488a6e:c.instructions+=5;goto B488a6e;
case 0x488a71:c.instructions+=4;goto B488a71;
case 0x488a75:c.instructions+=3;goto B488a75;
case 0x488a76:c.instructions+=2;goto B488a76;
case 0x488a77:c.instructions+=1;goto B488a77;
case 0x488a7c:goto L488a7c;
case 0x488a7f:c.instructions+=2;goto B488a7f;
case 0x488a80:c.instructions+=1;goto B488a80;
case 0x488a85:goto L488a85;
case 0x488a88:goto L488a88;
case 0x488a89:c.instructions+=5;goto B488a89;
case 0x488a8a:c.instructions+=4;goto B488a8a;
case 0x488a8f:c.instructions+=3;goto B488a8f;
case 0x488a90:c.instructions+=2;goto B488a90;
case 0x488a93:c.instructions+=1;goto B488a93;
case 0x488a96:goto L488a96;
case 0x488a97:c.instructions+=4;goto B488a97;
case 0x488a99:c.instructions+=3;goto B488a99;
case 0x488a9a:c.instructions+=2;goto B488a9a;
case 0x488a9d:c.instructions+=1;goto B488a9d;
case 0x488aa0:goto L488aa0;
case 0x488aa1:c.instructions+=5;goto B488aa1;
case 0x488aa5:c.instructions+=4;goto B488aa5;
case 0x488aa8:c.instructions+=3;goto B488aa8;
case 0x488aa9:c.instructions+=2;goto B488aa9;
case 0x488aab:c.instructions+=1;goto B488aab;
case 0x488aad:goto L488aad;
case 0x488ab0:c.instructions+=1;goto B488ab0;
case 0x488ab2:goto L488ab2;
case 0x488ab5:c.instructions+=1;goto B488ab5;
case 0x488ab7:goto L488ab7;
case 0x488aba:c.instructions+=1;goto B488aba;
case 0x488abc:goto L488abc;
case 0x488abe:goto L488abe;
case 0x488ac1:c.instructions+=2;goto B488ac1;
case 0x488ac2:c.instructions+=1;goto B488ac2;
case 0x488ac7:goto L488ac7;
case 0x488aca:c.instructions+=3;goto B488aca;
case 0x488acb:c.instructions+=2;goto B488acb;
case 0x488acd:c.instructions+=1;goto B488acd;
case 0x488ad2:goto L488ad2;
case 0x488ad3:c.instructions+=2;goto B488ad3;
case 0x488ad4:c.instructions+=1;goto B488ad4;
case 0x488ae0:goto L488ae0;
case 0x488ae2:c.instructions+=12;goto B488ae2;
case 0x488ae4:c.instructions+=11;goto B488ae4;
case 0x488ae7:c.instructions+=10;goto B488ae7;
case 0x488aea:c.instructions+=9;goto B488aea;
case 0x488aed:c.instructions+=8;goto B488aed;
case 0x488af0:c.instructions+=7;goto B488af0;
case 0x488af3:c.instructions+=6;goto B488af3;
case 0x488af6:c.instructions+=5;goto B488af6;
case 0x488af9:c.instructions+=4;goto B488af9;
case 0x488afc:c.instructions+=3;goto B488afc;
case 0x488aff:c.instructions+=2;goto B488aff;
case 0x488b02:c.instructions+=1;goto B488b02;
case 0x488b10:goto L488b10;
case 0x488b11:c.instructions+=6;goto B488b11;
case 0x488b12:c.instructions+=5;goto B488b12;
case 0x488b13:c.instructions+=4;goto B488b13;
case 0x488b15:c.instructions+=3;goto B488b15;
case 0x488b18:c.instructions+=2;goto B488b18;
case 0x488b1a:c.instructions+=1;goto B488b1a;
case 0x488b1f:goto L488b1f;
case 0x488b22:c.instructions+=5;goto B488b22;
case 0x488b25:c.instructions+=4;goto B488b25;
case 0x488b28:c.instructions+=3;goto B488b28;
case 0x488b2a:c.instructions+=2;goto B488b2a;
case 0x488b2d:c.instructions+=1;goto B488b2d;
case 0x488b2f:goto L488b2f;
case 0x488b31:goto L488b31;
case 0x488b33:c.instructions+=1;goto B488b33;
case 0x488b36:goto L488b36;
case 0x488b38:goto L488b38;
case 0x488b3b:c.instructions+=2;goto B488b3b;
case 0x488b3c:c.instructions+=1;goto B488b3c;
case 0x488b41:goto L488b41;
case 0x488b42:c.instructions+=3;goto B488b42;
case 0x488b43:c.instructions+=2;goto B488b43;
case 0x488b44:c.instructions+=1;goto B488b44;
case 0x488b50:goto L488b50;
case 0x488b54:c.instructions+=2;goto B488b54;
case 0x488b58:c.instructions+=1;goto B488b58;
case 0x488b60:goto L488b60;
case 0x488b64:c.instructions+=2;goto B488b64;
case 0x488b68:c.instructions+=1;goto B488b68;
case 0x488b70:goto L488b70;
case 0x488b73:c.instructions+=1;goto B488b73;
case 0x488b80:goto L488b80;
case 0x488b83:c.instructions+=1;goto B488b83;
case 0x488b90:goto L488b90;
case 0x488b94:c.instructions+=3;goto B488b94;
case 0x488b97:c.instructions+=2;goto B488b97;
case 0x488b9b:c.instructions+=1;goto B488b9b;
case 0x488ba0:goto L488ba0;
case 0x488ba6:c.instructions+=6;goto B488ba6;
case 0x488baa:c.instructions+=5;goto B488baa;
case 0x488bab:c.instructions+=4;goto B488bab;
case 0x488bb1:c.instructions+=3;goto B488bb1;
case 0x488bb4:c.instructions+=2;goto B488bb4;
case 0x488bba:c.instructions+=1;goto B488bba;
case 0x488bc0:goto L488bc0;
case 0x488bc4:c.instructions+=6;goto B488bc4;
case 0x488bc6:c.instructions+=5;goto B488bc6;
case 0x488bc7:c.instructions+=4;goto B488bc7;
case 0x488bc8:c.instructions+=3;goto B488bc8;
case 0x488bc9:c.instructions+=2;goto B488bc9;
case 0x488bca:c.instructions+=1;goto B488bca;
case 0x488bcc:goto L488bcc;
case 0x488bd0:c.instructions+=2;goto B488bd0;
case 0x488bd2:c.instructions+=1;goto B488bd2;
case 0x488bd4:goto L488bd4;
case 0x488bd8:c.instructions+=4;goto B488bd8;
case 0x488bdc:c.instructions+=3;goto B488bdc;
case 0x488bdf:c.instructions+=2;goto B488bdf;
case 0x488be1:c.instructions+=1;goto B488be1;
case 0x488be3:goto L488be3;
case 0x488be5:c.instructions+=3;goto B488be5;
case 0x488be6:c.instructions+=2;goto B488be6;
case 0x488be8:c.instructions+=1;goto B488be8;
case 0x488bea:goto L488bea;
case 0x488bf0:goto L488bf0;
case 0x488bf3:c.instructions+=11;goto B488bf3;
case 0x488bf4:c.instructions+=10;goto B488bf4;
case 0x488bf6:c.instructions+=9;goto B488bf6;
case 0x488bfa:c.instructions+=8;goto B488bfa;
case 0x488bfc:c.instructions+=7;goto B488bfc;
case 0x488bfe:c.instructions+=6;goto B488bfe;
case 0x488c00:c.instructions+=5;goto B488c00;
case 0x488c03:c.instructions+=4;goto B488c03;
case 0x488c05:c.instructions+=3;goto B488c05;
case 0x488c08:c.instructions+=2;goto B488c08;
case 0x488c0c:c.instructions+=1;goto B488c0c;
case 0x488c0e:goto L488c0e;
case 0x488c11:c.instructions+=1;goto B488c11;
case 0x488c13:goto L488c13;
case 0x488c17:c.instructions+=2;goto B488c17;
case 0x488c19:c.instructions+=1;goto B488c19;
case 0x488c1b:goto L488c1b;
case 0x488c1e:goto L488c1e;
case 0x488c20:c.instructions+=1;goto B488c20;
case 0x488c22:goto L488c22;
case 0x488c24:goto L488c24;
case 0x488c25:c.instructions+=4;goto B488c25;
case 0x488c26:c.instructions+=3;goto B488c26;
case 0x488c27:c.instructions+=2;goto B488c27;
case 0x488c28:c.instructions+=1;goto B488c28;
case 0x488c29:goto L488c29;
case 0x488c2b:c.instructions+=1;goto B488c2b;
case 0x488c2d:goto L488c2d;
case 0x488c2f:c.instructions+=2;goto B488c2f;
case 0x488c31:c.instructions+=1;goto B488c31;
case 0x488c33:goto L488c33;
case 0x488c35:c.instructions+=1;goto B488c35;
case 0x488c37:goto L488c37;
case 0x488c39:c.instructions+=4;goto B488c39;
case 0x488c3b:c.instructions+=3;goto B488c3b;
case 0x488c3c:c.instructions+=2;goto B488c3c;
case 0x488c3e:c.instructions+=1;goto B488c3e;
case 0x488c40:goto L488c40;
case 0x488c41:c.instructions+=4;goto B488c41;
case 0x488c42:c.instructions+=3;goto B488c42;
case 0x488c43:c.instructions+=2;goto B488c43;
case 0x488c44:c.instructions+=1;goto B488c44;
case 0x488c50:goto L488c50;
case 0x488c54:c.instructions+=6;goto B488c54;
case 0x488c56:c.instructions+=5;goto B488c56;
case 0x488c57:c.instructions+=4;goto B488c57;
case 0x488c58:c.instructions+=3;goto B488c58;
case 0x488c59:c.instructions+=2;goto B488c59;
case 0x488c5a:c.instructions+=1;goto B488c5a;
case 0x488c5c:goto L488c5c;
case 0x488c60:c.instructions+=2;goto B488c60;
case 0x488c62:c.instructions+=1;goto B488c62;
case 0x488c64:goto L488c64;
case 0x488c68:c.instructions+=4;goto B488c68;
case 0x488c6c:c.instructions+=3;goto B488c6c;
case 0x488c6d:c.instructions+=2;goto B488c6d;
case 0x488c6f:c.instructions+=1;goto B488c6f;
case 0x488c71:goto L488c71;
case 0x488c73:c.instructions+=3;goto B488c73;
case 0x488c74:c.instructions+=2;goto B488c74;
case 0x488c76:c.instructions+=1;goto B488c76;
case 0x488c78:goto L488c78;
case 0x488c7c:c.instructions+=13;goto B488c7c;
case 0x488c7f:c.instructions+=12;goto B488c7f;
case 0x488c80:c.instructions+=11;goto B488c80;
case 0x488c82:c.instructions+=10;goto B488c82;
case 0x488c86:c.instructions+=9;goto B488c86;
case 0x488c88:c.instructions+=8;goto B488c88;
case 0x488c8a:c.instructions+=7;goto B488c8a;
case 0x488c8c:c.instructions+=6;goto B488c8c;
case 0x488c8f:c.instructions+=5;goto B488c8f;
case 0x488c91:c.instructions+=4;goto B488c91;
case 0x488c95:c.instructions+=3;goto B488c95;
case 0x488c98:c.instructions+=2;goto B488c98;
case 0x488c9a:c.instructions+=1;goto B488c9a;
case 0x488c9c:goto L488c9c;
case 0x488c9f:c.instructions+=1;goto B488c9f;
case 0x488ca1:goto L488ca1;
case 0x488ca3:goto L488ca3;
case 0x488ca6:goto L488ca6;
case 0x488ca8:c.instructions+=1;goto B488ca8;
case 0x488caa:goto L488caa;
case 0x488cac:goto L488cac;
case 0x488cad:c.instructions+=4;goto B488cad;
case 0x488cae:c.instructions+=3;goto B488cae;
case 0x488caf:c.instructions+=2;goto B488caf;
case 0x488cb0:c.instructions+=1;goto B488cb0;
case 0x488cb1:goto L488cb1;
case 0x488cb3:c.instructions+=1;goto B488cb3;
case 0x488cb5:goto L488cb5;
case 0x488cb9:c.instructions+=4;goto B488cb9;
case 0x488cbb:c.instructions+=3;goto B488cbb;
case 0x488cbd:c.instructions+=2;goto B488cbd;
case 0x488cbf:c.instructions+=1;goto B488cbf;
case 0x488cc0:goto L488cc0;
case 0x488cc2:c.instructions+=1;goto B488cc2;
case 0x488cc4:goto L488cc4;
case 0x488cc6:c.instructions+=4;goto B488cc6;
case 0x488cc8:c.instructions+=3;goto B488cc8;
case 0x488cc9:c.instructions+=2;goto B488cc9;
case 0x488ccb:c.instructions+=1;goto B488ccb;
case 0x488ccd:goto L488ccd;
case 0x488cce:c.instructions+=4;goto B488cce;
case 0x488ccf:c.instructions+=3;goto B488ccf;
case 0x488cd0:c.instructions+=2;goto B488cd0;
case 0x488cd1:c.instructions+=1;goto B488cd1;
case 0x488ce0:goto L488ce0;
case 0x488ce6:c.instructions+=5;goto B488ce6;
case 0x488ce8:c.instructions+=4;goto B488ce8;
case 0x488cec:c.instructions+=3;goto B488cec;
case 0x488ced:c.instructions+=2;goto B488ced;
case 0x488cf1:c.instructions+=1;goto B488cf1;
case 0x488cf3:goto L488cf3;
case 0x488cf5:c.instructions+=1;goto B488cf5;
case 0x488cf7:goto L488cf7;
case 0x488cf8:c.instructions+=4;goto B488cf8;
case 0x488cfb:c.instructions+=3;goto B488cfb;
case 0x488cfd:c.instructions+=2;goto B488cfd;
case 0x488cfe:c.instructions+=1;goto B488cfe;
case 0x488d00:goto L488d00;
case 0x488d06:c.instructions+=2;goto B488d06;
case 0x488d08:c.instructions+=1;goto B488d08;
case 0x488d0a:goto L488d0a;
case 0x488d10:c.instructions+=2;goto B488d10;
case 0x488d12:c.instructions+=1;goto B488d12;
case 0x488d14:goto L488d14;
case 0x488d16:c.instructions+=2;goto B488d16;
case 0x488d18:c.instructions+=1;goto B488d18;
case 0x488d1a:goto L488d1a;
case 0x488d1c:c.instructions+=2;goto B488d1c;
case 0x488d1d:c.instructions+=1;goto B488d1d;
case 0x488d20:goto L488d20;
case 0x488d22:c.instructions+=2;goto B488d22;
case 0x488d23:c.instructions+=1;goto B488d23;
case 0x488d30:goto L488d30;
case 0x488d34:c.instructions+=6;goto B488d34;
case 0x488d37:c.instructions+=5;goto B488d37;
case 0x488d38:c.instructions+=4;goto B488d38;
case 0x488d3c:c.instructions+=3;goto B488d3c;
case 0x488d3f:c.instructions+=2;goto B488d3f;
case 0x488d41:c.instructions+=1;goto B488d41;
case 0x488d43:goto L488d43;
case 0x488d45:goto L488d45;
case 0x488d48:c.instructions+=2;goto B488d48;
case 0x488d4b:c.instructions+=1;goto B488d4b;
case 0x488d4d:goto L488d4d;
case 0x488d4f:c.instructions+=2;goto B488d4f;
case 0x488d50:c.instructions+=1;goto B488d50;
case 0x488d51:goto L488d51;
case 0x488d56:c.instructions+=2;goto B488d56;
case 0x488d57:c.instructions+=1;goto B488d57;
case 0x488d60:goto L488d60;
case 0x488d61:c.instructions+=7;goto B488d61;
case 0x488d65:c.instructions+=6;goto B488d65;
case 0x488d66:c.instructions+=5;goto B488d66;
case 0x488d67:c.instructions+=4;goto B488d67;
case 0x488d6b:c.instructions+=3;goto B488d6b;
case 0x488d6f:c.instructions+=2;goto B488d6f;
case 0x488d71:c.instructions+=1;goto B488d71;
case 0x488d73:goto L488d73;
case 0x488d75:c.instructions+=9;goto B488d75;
case 0x488d78:c.instructions+=8;goto B488d78;
case 0x488d79:c.instructions+=7;goto B488d79;
case 0x488d7b:c.instructions+=6;goto B488d7b;
case 0x488d7c:c.instructions+=5;goto B488d7c;
case 0x488d7e:c.instructions+=4;goto B488d7e;
case 0x488d80:c.instructions+=3;goto B488d80;
case 0x488d81:c.instructions+=2;goto B488d81;
case 0x488d82:c.instructions+=1;goto B488d82;
case 0x488d85:goto L488d85;
case 0x488d88:goto L488d88;
case 0x488d8b:c.instructions+=2;goto B488d8b;
case 0x488d8c:c.instructions+=1;goto B488d8c;
case 0x488d91:goto L488d91;
case 0x488d98:c.instructions+=19;goto B488d98;
case 0x488d9e:c.instructions+=18;goto B488d9e;
case 0x488da4:c.instructions+=17;goto B488da4;
case 0x488da7:c.instructions+=16;goto B488da7;
case 0x488da8:c.instructions+=15;goto B488da8;
case 0x488dae:c.instructions+=14;goto B488dae;
case 0x488db1:c.instructions+=13;goto B488db1;
case 0x488db3:c.instructions+=12;goto B488db3;
case 0x488db9:c.instructions+=11;goto B488db9;
case 0x488dbc:c.instructions+=10;goto B488dbc;
case 0x488dbf:c.instructions+=9;goto B488dbf;
case 0x488dc0:c.instructions+=8;goto B488dc0;
case 0x488dc3:c.instructions+=7;goto B488dc3;
case 0x488dc6:c.instructions+=6;goto B488dc6;
case 0x488dc8:c.instructions+=5;goto B488dc8;
case 0x488dc9:c.instructions+=4;goto B488dc9;
case 0x488dcc:c.instructions+=3;goto B488dcc;
case 0x488dcd:c.instructions+=2;goto B488dcd;
case 0x488dce:c.instructions+=1;goto B488dce;
case 0x488de0:goto L488de0;
case 0x488de1:c.instructions+=9;goto B488de1;
case 0x488de2:c.instructions+=8;goto B488de2;
case 0x488de6:c.instructions+=7;goto B488de6;
case 0x488dec:c.instructions+=6;goto B488dec;
case 0x488def:c.instructions+=5;goto B488def;
case 0x488df0:c.instructions+=4;goto B488df0;
case 0x488df3:c.instructions+=3;goto B488df3;
case 0x488df4:c.instructions+=2;goto B488df4;
case 0x488dfe:c.instructions+=1;goto B488dfe;
case 0x488e03:goto L488e03;
case 0x488e06:c.instructions+=3;goto B488e06;
case 0x488e08:c.instructions+=2;goto B488e08;
case 0x488e12:c.instructions+=1;goto B488e12;
case 0x488e14:goto L488e14;
case 0x488e15:c.instructions+=1;goto B488e15;
case 0x488e17:goto L488e17;
case 0x488e1a:goto L488e1a;
case 0x488e1b:c.instructions+=3;goto B488e1b;
case 0x488e1c:c.instructions+=2;goto B488e1c;
case 0x488e1d:c.instructions+=1;goto B488e1d;
case 0x488e20:goto L488e20;
case 0x488e24:c.instructions+=4;goto B488e24;
case 0x488e28:c.instructions+=3;goto B488e28;
case 0x488e2b:c.instructions+=2;goto B488e2b;
case 0x488e2e:c.instructions+=1;goto B488e2e;
case 0x488e40:goto L488e40;
case 0x488e43:c.instructions+=3;goto B488e43;
case 0x488e45:c.instructions+=2;goto B488e45;
case 0x488e48:c.instructions+=1;goto B488e48;
case 0x488e4a:goto L488e4a;
case 0x488e4b:c.instructions+=3;goto B488e4b;
case 0x488e4e:c.instructions+=2;goto B488e4e;
case 0x488e50:c.instructions+=1;goto B488e50;
case 0x488e52:goto L488e52;
case 0x488e54:c.instructions+=1;goto B488e54;
case 0x488e56:goto L488e56;
case 0x488e59:c.instructions+=3;goto B488e59;
case 0x488e5b:c.instructions+=2;goto B488e5b;
case 0x488e5c:c.instructions+=1;goto B488e5c;
case 0x488e60:goto L488e60;
case 0x488e62:c.instructions+=2;goto B488e62;
case 0x488e64:c.instructions+=1;goto B488e64;
case 0x488e66:goto L488e66;
case 0x488e68:c.instructions+=4;goto B488e68;
case 0x488e6b:c.instructions+=3;goto B488e6b;
case 0x488e6d:c.instructions+=2;goto B488e6d;
case 0x488e73:c.instructions+=1;goto B488e73;
case 0x488e76:goto L488e76;
case 0x488e79:c.instructions+=2;goto B488e79;
case 0x488e7a:c.instructions+=1;goto B488e7a;
case 0x488e7c:goto L488e7c;
case 0x488e7d:goto L488e7d;
case 0x488e7e:goto L488e7e;
case 0x488e80:goto L488e80;
case 0x488e81:c.instructions+=3;goto B488e81;
case 0x488e84:c.instructions+=2;goto B488e84;
case 0x488e86:c.instructions+=1;goto B488e86;
case 0x488e88:goto L488e88;
case 0x488e8b:c.instructions+=10;goto B488e8b;
case 0x488e8e:c.instructions+=9;goto B488e8e;
case 0x488e91:c.instructions+=8;goto B488e91;
case 0x488e94:c.instructions+=7;goto B488e94;
case 0x488e98:c.instructions+=6;goto B488e98;
case 0x488e9a:c.instructions+=5;goto B488e9a;
case 0x488e9d:c.instructions+=4;goto B488e9d;
case 0x488ea1:c.instructions+=3;goto B488ea1;
case 0x488ea3:c.instructions+=2;goto B488ea3;
case 0x488ea6:c.instructions+=1;goto B488ea6;
case 0x488ea9:goto L488ea9;
case 0x488eaa:c.instructions+=1;goto B488eaa;
case 0x488eb0:goto L488eb0;
case 0x488eb3:c.instructions+=2;goto B488eb3;
case 0x488eb5:c.instructions+=1;goto B488eb5;
case 0x488eb7:goto L488eb7;
case 0x488eba:c.instructions+=1;goto B488eba;
case 0x488ebb:goto L488ebb;
case 0x488ebd:c.instructions+=1;goto B488ebd;
case 0x488ec0:goto L488ec0;
case 0x488ec3:c.instructions+=2;goto B488ec3;
case 0x488ec5:c.instructions+=1;goto B488ec5;
case 0x488ec7:goto L488ec7;
case 0x488ecb:c.instructions+=2;goto B488ecb;
case 0x488ece:c.instructions+=1;goto B488ece;
case 0x488ecf:goto L488ecf;
case 0x488ed1:c.instructions+=1;goto B488ed1;
case 0x488ee0:goto L488ee0;
case 0x488ee3:c.instructions+=2;goto B488ee3;
case 0x488ee5:c.instructions+=1;goto B488ee5;
case 0x488ee7:goto L488ee7;
case 0x488eeb:c.instructions+=1;goto B488eeb;
case 0x488eec:goto L488eec;
case 0x488eee:c.instructions+=1;goto B488eee;
case 0x488ef0:goto L488ef0;
case 0x488ef2:c.instructions+=4;goto B488ef2;
case 0x488ef7:c.instructions+=3;goto B488ef7;
case 0x488efc:c.instructions+=2;goto B488efc;
case 0x488efe:c.instructions+=1;goto B488efe;
case 0x488f03:goto L488f03;
case 0x488f06:c.instructions+=2;goto B488f06;
case 0x488f0b:c.instructions+=1;goto B488f0b;
case 0x488f10:goto L488f10;
case 0x488f16:c.instructions+=5;goto B488f16;
case 0x488f17:c.instructions+=4;goto B488f17;
case 0x488f18:c.instructions+=3;goto B488f18;
case 0x488f1f:c.instructions+=2;goto B488f1f;
case 0x488f21:c.instructions+=1;goto B488f21;
case 0x488f23:goto L488f23;
case 0x488f2a:c.instructions+=2;goto B488f2a;
case 0x488f30:c.instructions+=1;goto B488f30;
case 0x488f32:goto L488f32;
case 0x488f34:c.instructions+=1;goto B488f34;
case 0x488f36:goto L488f36;
case 0x488f38:goto L488f38;
case 0x488f39:c.instructions+=4;goto B488f39;
case 0x488f3e:c.instructions+=3;goto B488f3e;
case 0x488f3f:c.instructions+=2;goto B488f3f;
case 0x488f45:c.instructions+=1;goto B488f45;
case 0x488f46:goto L488f46;
case 0x488f48:c.instructions+=3;goto B488f48;
case 0x488f4a:c.instructions+=2;goto B488f4a;
case 0x488f4c:c.instructions+=1;goto B488f4c;
case 0x488f4e:goto L488f4e;
case 0x488f4f:c.instructions+=1;goto B488f4f;
case 0x488f50:goto L488f50;
case 0x488f53:c.instructions+=2;goto B488f53;
case 0x488f55:c.instructions+=1;goto B488f55;
case 0x488f57:goto L488f57;
case 0x488f5a:c.instructions+=2;goto B488f5a;
case 0x488f5c:c.instructions+=1;goto B488f5c;
case 0x488f5e:goto L488f5e;
case 0x488f64:c.instructions+=2;goto B488f64;
case 0x488f66:c.instructions+=1;goto B488f66;
case 0x488f68:goto L488f68;
case 0x488f6c:c.instructions+=1;goto B488f6c;
case 0x488f6d:goto L488f6d;
case 0x488f6e:c.instructions+=2;goto B488f6e;
case 0x488f70:c.instructions+=1;goto B488f70;
case 0x488f72:goto L488f72;
case 0x488f73:goto L488f73;
case 0x488f74:c.instructions+=3;goto B488f74;
case 0x488f78:c.instructions+=2;goto B488f78;
case 0x488f79:c.instructions+=1;goto B488f79;
case 0x488f7e:goto L488f7e;
case 0x488f81:c.instructions+=4;goto B488f81;
case 0x488f82:c.instructions+=3;goto B488f82;
case 0x488f83:c.instructions+=2;goto B488f83;
case 0x488f89:c.instructions+=1;goto B488f89;
case 0x488f8a:goto L488f8a;
case 0x488f8b:c.instructions+=4;goto B488f8b;
case 0x488f8d:c.instructions+=3;goto B488f8d;
case 0x488f8e:c.instructions+=2;goto B488f8e;
case 0x488f94:c.instructions+=1;goto B488f94;
case 0x488fa0:goto L488fa0;
case 0x488fa6:c.instructions+=5;goto B488fa6;
case 0x488faa:c.instructions+=4;goto B488faa;
case 0x488fab:c.instructions+=3;goto B488fab;
case 0x488faf:c.instructions+=2;goto B488faf;
case 0x488fb0:c.instructions+=1;goto B488fb0;
case 0x488fb2:goto L488fb2;
case 0x488fb4:c.instructions+=1;goto B488fb4;
case 0x488fb6:goto L488fb6;
case 0x488fb8:c.instructions+=1;goto B488fb8;
case 0x488fba:goto L488fba;
case 0x488fbc:c.instructions+=1;goto B488fbc;
case 0x488fbe:goto L488fbe;
case 0x488fc0:c.instructions+=1;goto B488fc0;
case 0x488fc2:goto L488fc2;
case 0x488fc6:c.instructions+=4;goto B488fc6;
case 0x488fc9:c.instructions+=3;goto B488fc9;
case 0x488fcb:c.instructions+=2;goto B488fcb;
case 0x488fcd:c.instructions+=1;goto B488fcd;
case 0x488fcf:goto L488fcf;
case 0x488fd2:c.instructions+=1;goto B488fd2;
case 0x488fd4:goto L488fd4;
case 0x488fd6:goto L488fd6;
case 0x488fd8:c.instructions+=1;goto B488fd8;
case 0x488fda:goto L488fda;
case 0x488fdc:c.instructions+=1;goto B488fdc;
case 0x488fde:goto L488fde;
case 0x488fdf:c.instructions+=2;goto B488fdf;
case 0x488fe0:c.instructions+=1;goto B488fe0;
case 0x488fe3:goto L488fe3;
case 0x488fe4:c.instructions+=3;goto B488fe4;
case 0x488fe6:c.instructions+=2;goto B488fe6;
case 0x488fe7:c.instructions+=1;goto B488fe7;
case 0x488ff0:goto L488ff0;
case 0x488ff1:c.instructions+=6;goto B488ff1;
case 0x488ff3:c.instructions+=5;goto B488ff3;
case 0x488ff6:c.instructions+=4;goto B488ff6;
case 0x488ff9:c.instructions+=3;goto B488ff9;
case 0x488ffa:c.instructions+=2;goto B488ffa;
case 0x488ffe:c.instructions+=1;goto B488ffe;
default:missing_instruction(c.pc);}
B488003:L488003:{c.instructions+=131;NFSU2_TR(0x488003);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B488006:{NFSU2_TR(0x488006);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B488008:{NFSU2_TR(0x488008);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48800c:{NFSU2_TR(0x48800c);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48800f:{NFSU2_TR(0x48800f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B488011:{NFSU2_TR(0x488011);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B488018:{NFSU2_TR(0x488018);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48801c:{NFSU2_TR(0x48801c);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48801f:{NFSU2_TR(0x48801f);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B488023:{NFSU2_TR(0x488023);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B488026:{NFSU2_TR(0x488026);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B488028:{NFSU2_TR(0x488028);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48802c:{NFSU2_TR(0x48802c);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48802f:{NFSU2_TR(0x48802f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B488031:{NFSU2_TR(0x488031);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B488035:{NFSU2_TR(0x488035);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B488038:{NFSU2_TR(0x488038);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48803a:{NFSU2_TR(0x48803a);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B488041:{NFSU2_TR(0x488041);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B488045:{NFSU2_TR(0x488045);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B488048:{NFSU2_TR(0x488048);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48804c:{NFSU2_TR(0x48804c);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48804f:{NFSU2_TR(0x48804f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B488051:{NFSU2_TR(0x488051);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B488055:{NFSU2_TR(0x488055);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B488058:{NFSU2_TR(0x488058);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48805a:{NFSU2_TR(0x48805a);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48805e:{NFSU2_TR(0x48805e);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B488061:{NFSU2_TR(0x488061);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B488063:{NFSU2_TR(0x488063);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48806a:{NFSU2_TR(0x48806a);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48806e:{NFSU2_TR(0x48806e);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B488071:{NFSU2_TR(0x488071);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B488075:{NFSU2_TR(0x488075);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B488078:{NFSU2_TR(0x488078);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48807a:{NFSU2_TR(0x48807a);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48807e:{NFSU2_TR(0x48807e);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B488081:{NFSU2_TR(0x488081);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B488083:{NFSU2_TR(0x488083);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B488087:{NFSU2_TR(0x488087);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B488089:{NFSU2_TR(0x488089);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48808b:{NFSU2_TR(0x48808b);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B488092:{NFSU2_TR(0x488092);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B488096:{NFSU2_TR(0x488096);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B488099:{NFSU2_TR(0x488099);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48809d:{NFSU2_TR(0x48809d);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4880a0:{NFSU2_TR(0x4880a0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4880a2:{NFSU2_TR(0x4880a2);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4880a6:{NFSU2_TR(0x4880a6);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4880a9:{NFSU2_TR(0x4880a9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4880ab:{NFSU2_TR(0x4880ab);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4880af:{NFSU2_TR(0x4880af);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4880b2:{NFSU2_TR(0x4880b2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4880b4:{NFSU2_TR(0x4880b4);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4880bb:{NFSU2_TR(0x4880bb);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4880bf:{NFSU2_TR(0x4880bf);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4880c2:{NFSU2_TR(0x4880c2);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4880c6:{NFSU2_TR(0x4880c6);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4880c9:{NFSU2_TR(0x4880c9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4880cb:{NFSU2_TR(0x4880cb);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4880cf:{NFSU2_TR(0x4880cf);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4880d2:{NFSU2_TR(0x4880d2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4880d4:{NFSU2_TR(0x4880d4);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4880d8:{NFSU2_TR(0x4880d8);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4880db:{NFSU2_TR(0x4880db);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4880dd:{NFSU2_TR(0x4880dd);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4880e4:{NFSU2_TR(0x4880e4);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4880e8:{NFSU2_TR(0x4880e8);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4880eb:{NFSU2_TR(0x4880eb);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4880ef:{NFSU2_TR(0x4880ef);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4880f2:{NFSU2_TR(0x4880f2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4880f4:{NFSU2_TR(0x4880f4);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4880f8:{NFSU2_TR(0x4880f8);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4880fb:{NFSU2_TR(0x4880fb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4880fd:{NFSU2_TR(0x4880fd);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B488101:{NFSU2_TR(0x488101);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B488104:{NFSU2_TR(0x488104);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B488106:{NFSU2_TR(0x488106);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48810d:{NFSU2_TR(0x48810d);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B488111:{NFSU2_TR(0x488111);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B488114:{NFSU2_TR(0x488114);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B488118:{NFSU2_TR(0x488118);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48811b:{NFSU2_TR(0x48811b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48811d:{NFSU2_TR(0x48811d);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B488121:{NFSU2_TR(0x488121);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B488124:{NFSU2_TR(0x488124);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B488126:{NFSU2_TR(0x488126);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48812a:{NFSU2_TR(0x48812a);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48812c:{NFSU2_TR(0x48812c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48812e:{NFSU2_TR(0x48812e);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B488135:{NFSU2_TR(0x488135);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B488139:{NFSU2_TR(0x488139);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48813c:{NFSU2_TR(0x48813c);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B488140:{NFSU2_TR(0x488140);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B488143:{NFSU2_TR(0x488143);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B488145:{NFSU2_TR(0x488145);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B488149:{NFSU2_TR(0x488149);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48814c:{NFSU2_TR(0x48814c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48814e:{NFSU2_TR(0x48814e);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B488152:{NFSU2_TR(0x488152);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B488155:{NFSU2_TR(0x488155);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B488157:{NFSU2_TR(0x488157);
{u32 ea_=u32(r4(R+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48815e:{NFSU2_TR(0x48815e);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B488162:{NFSU2_TR(0x488162);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B488165:{NFSU2_TR(0x488165);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B488169:{NFSU2_TR(0x488169);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48816c:{NFSU2_TR(0x48816c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48816e:{NFSU2_TR(0x48816e);
u8 U[4];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B488172:{NFSU2_TR(0x488172);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B488176:{NFSU2_TR(0x488176);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B488177:{NFSU2_TR(0x488177);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48817a:{NFSU2_TR(0x48817a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48817c:{NFSU2_TR(0x48817c);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B488180:{NFSU2_TR(0x488180);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B488183:{NFSU2_TR(0x488183);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B488185:{NFSU2_TR(0x488185);
{u32 ea_=u32(r4(R+16)+u32(180u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48818c:{NFSU2_TR(0x48818c);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B488190:{NFSU2_TR(0x488190);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B488193:{NFSU2_TR(0x488193);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B488197:{NFSU2_TR(0x488197);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48819a:{NFSU2_TR(0x48819a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48819c:{NFSU2_TR(0x48819c);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4881a0:{NFSU2_TR(0x4881a0);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4881a3:{NFSU2_TR(0x4881a3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4881a5:{NFSU2_TR(0x4881a5);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4881a9:{NFSU2_TR(0x4881a9);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4881ac:{NFSU2_TR(0x4881ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4881af:{NFSU2_TR(0x4881af);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4881b0:{NFSU2_TR(0x4881b0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4881b2:{NFSU2_TR(0x4881b2);
{u32 ea_=u32(r4(R+16)+u32(188u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4881b9:{NFSU2_TR(0x4881b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4881beull));
TAIL_STATIC(0x4012b0u,401);
}
B4881be:L4881be:{c.instructions+=4;NFSU2_TR(0x4881be);
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
B4881c1:{NFSU2_TR(0x4881c1);
__builtin_memmove((R+16),(R+20),4);
}
B4881c3:{NFSU2_TR(0x4881c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4881c4:{NFSU2_TR(0x4881c4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4881d0:L4881d0:{c.instructions+=58;NFSU2_TR(0x4881d0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4881d1:{NFSU2_TR(0x4881d1);
__builtin_memmove((R+20),(R+16),4);
}
B4881d3:{NFSU2_TR(0x4881d3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B4881d6:{NFSU2_TR(0x4881d6);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x20ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x20ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4881d9:{NFSU2_TR(0x4881d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4881dc:{NFSU2_TR(0x4881dc);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4881df:{NFSU2_TR(0x4881df);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4881e2:{NFSU2_TR(0x4881e2);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4881e5:{NFSU2_TR(0x4881e5);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B4881e7:{NFSU2_TR(0x4881e7);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4881eb:{NFSU2_TR(0x4881eb);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B4881ed:{NFSU2_TR(0x4881ed);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4881f0:{NFSU2_TR(0x4881f0);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4881f3:{NFSU2_TR(0x4881f3);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4881f6:{NFSU2_TR(0x4881f6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4881f8:{NFSU2_TR(0x4881f8);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4881fc:{NFSU2_TR(0x4881fc);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4881fe:{NFSU2_TR(0x4881fe);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B488200:{NFSU2_TR(0x488200);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B488203:{NFSU2_TR(0x488203);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B488207:{NFSU2_TR(0x488207);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B488209:{NFSU2_TR(0x488209);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48820c:{NFSU2_TR(0x48820c);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B488210:{NFSU2_TR(0x488210);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B488213:{NFSU2_TR(0x488213);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B488215:{NFSU2_TR(0x488215);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B488218:{NFSU2_TR(0x488218);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48821b:{NFSU2_TR(0x48821b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48821d:{NFSU2_TR(0x48821d);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B488220:{NFSU2_TR(0x488220);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B488222:{NFSU2_TR(0x488222);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B488225:{NFSU2_TR(0x488225);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B488229:{NFSU2_TR(0x488229);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48822c:{NFSU2_TR(0x48822c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48822e:{NFSU2_TR(0x48822e);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B488231:{NFSU2_TR(0x488231);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B488234:{NFSU2_TR(0x488234);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B488236:{NFSU2_TR(0x488236);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B488239:{NFSU2_TR(0x488239);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B48823b:{NFSU2_TR(0x48823b);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48823e:{NFSU2_TR(0x48823e);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B488242:{NFSU2_TR(0x488242);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B488245:{NFSU2_TR(0x488245);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B488247:{NFSU2_TR(0x488247);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48824a:{NFSU2_TR(0x48824a);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48824d:{NFSU2_TR(0x48824d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48824f:{NFSU2_TR(0x48824f);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B488252:{NFSU2_TR(0x488252);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B488255:{NFSU2_TR(0x488255);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B488259:{NFSU2_TR(0x488259);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48825d:{NFSU2_TR(0x48825d);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B488261:{NFSU2_TR(0x488261);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B488264:{NFSU2_TR(0x488264);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B488266:{NFSU2_TR(0x488266);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B488269:{NFSU2_TR(0x488269);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48826c:{NFSU2_TR(0x48826c);
__builtin_memmove((R+16),(R+20),4);
}
B48826e:{NFSU2_TR(0x48826e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B48826f:{NFSU2_TR(0x48826f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B488270:L488270:{c.instructions+=8;NFSU2_TR(0x488270);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B488273:{NFSU2_TR(0x488273);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B488277:{NFSU2_TR(0x488277);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B48827f:{NFSU2_TR(0x48827f);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B488285:{NFSU2_TR(0x488285);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+16)),r4(U+0));
}
B48828d:{NFSU2_TR(0x48828d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B48828f:{NFSU2_TR(0x48828f);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B488292:{NFSU2_TR(0x488292);
if(r1(R+514)){{goto L48829c;}}
}
B488294:L488294:{c.instructions+=2;NFSU2_TR(0x488294);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B488298:{NFSU2_TR(0x488298);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48829c:L48829c:{c.instructions+=5;NFSU2_TR(0x48829c);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4882a0:{NFSU2_TR(0x4882a0);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4882a4:{NFSU2_TR(0x4882a4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4882a6:{NFSU2_TR(0x4882a6);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4882a9:{NFSU2_TR(0x4882a9);
if(r1(R+514)){{goto L4882b3;}}
}
B4882ab:L4882ab:{c.instructions+=2;NFSU2_TR(0x4882ab);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4882af:{NFSU2_TR(0x4882af);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4882b3:L4882b3:{c.instructions+=5;NFSU2_TR(0x4882b3);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4882b7:{NFSU2_TR(0x4882b7);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4882bb:{NFSU2_TR(0x4882bb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4882bd:{NFSU2_TR(0x4882bd);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4882c0:{NFSU2_TR(0x4882c0);
if(r1(R+514)){{goto L4882ca;}}
}
B4882c2:L4882c2:{c.instructions+=2;NFSU2_TR(0x4882c2);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4882c6:{NFSU2_TR(0x4882c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4882ca:L4882ca:{c.instructions+=5;NFSU2_TR(0x4882ca);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4882ce:{NFSU2_TR(0x4882ce);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4882d4:{NFSU2_TR(0x4882d4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4882d6:{NFSU2_TR(0x4882d6);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4882d9:{NFSU2_TR(0x4882d9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4882e3;}}
}
B4882db:L4882db:{c.instructions+=2;NFSU2_TR(0x4882db);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4882df:{NFSU2_TR(0x4882df);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4882e3:L4882e3:{c.instructions+=5;NFSU2_TR(0x4882e3);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4882e7:{NFSU2_TR(0x4882e7);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4882eb:{NFSU2_TR(0x4882eb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4882ed:{NFSU2_TR(0x4882ed);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4882f0:{NFSU2_TR(0x4882f0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4882fa;}}
}
B4882f2:L4882f2:{c.instructions+=2;NFSU2_TR(0x4882f2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4882f6:{NFSU2_TR(0x4882f6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4882fa:L4882fa:{c.instructions+=5;NFSU2_TR(0x4882fa);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4882fe:{NFSU2_TR(0x4882fe);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B488302:{NFSU2_TR(0x488302);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B488304:{NFSU2_TR(0x488304);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B488307:{NFSU2_TR(0x488307);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L488311;}}
}
B488309:L488309:{c.instructions+=2;NFSU2_TR(0x488309);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48830d:{NFSU2_TR(0x48830d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+16)),r4(U+0));
}
B488311:L488311:{c.instructions+=12;NFSU2_TR(0x488311);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B488315:{NFSU2_TR(0x488315);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B488319:{NFSU2_TR(0x488319);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48831d:{NFSU2_TR(0x48831d);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B488321:{NFSU2_TR(0x488321);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B488327:{NFSU2_TR(0x488327);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B488329:{NFSU2_TR(0x488329);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48832b:{NFSU2_TR(0x48832b);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48832f:{NFSU2_TR(0x48832f);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B488333:{NFSU2_TR(0x488333);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B488335:{NFSU2_TR(0x488335);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B488338:{NFSU2_TR(0x488338);
if(r1(R+514)){{goto L488354;}}
}
B48833a:L48833a:{c.instructions+=7;NFSU2_TR(0x48833a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48833e:{NFSU2_TR(0x48833e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B488340:{NFSU2_TR(0x488340);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B488344:{NFSU2_TR(0x488344);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+4)),r4(U+0));
}
B48834a:{NFSU2_TR(0x48834a);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+8)),r4(U+0));
}
B488350:{NFSU2_TR(0x488350);
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
B488353:{NFSU2_TR(0x488353);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B488354:L488354:{c.instructions+=6;NFSU2_TR(0x488354);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B48835a:{NFSU2_TR(0x48835a);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48835e:{NFSU2_TR(0x48835e);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B488362:{NFSU2_TR(0x488362);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B488364:{NFSU2_TR(0x488364);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B488367:{NFSU2_TR(0x488367);
if(r1(R+514)){{goto L488377;}}
}
B488369:L488369:{c.instructions+=5;NFSU2_TR(0x488369);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48836d:{NFSU2_TR(0x48836d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B488371:{NFSU2_TR(0x488371);
__asm__ volatile(".byte 0xd8,0xf9":::"memory");
}
B488373:{NFSU2_TR(0x488373);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B488375:{NFSU2_TR(0x488375);
{goto L48838d;}
}
B488377:L488377:{c.instructions+=6;NFSU2_TR(0x488377);
{u32 ea_=u32(u32(7881920u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48837d:{NFSU2_TR(0x48837d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B488381:{NFSU2_TR(0x488381);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B488385:{NFSU2_TR(0x488385);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B488389:{NFSU2_TR(0x488389);
__asm__ volatile(".byte 0xd8,0xf9":::"memory");
}
B48838b:{NFSU2_TR(0x48838b);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48838d:L48838d:{c.instructions+=5;NFSU2_TR(0x48838d);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B488391:{NFSU2_TR(0x488391);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B488395:{NFSU2_TR(0x488395);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B488397:{NFSU2_TR(0x488397);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B48839a:{NFSU2_TR(0x48839a);
if(r1(R+514)){{goto L4883a8;}}
}
B48839c:L48839c:{c.instructions+=4;NFSU2_TR(0x48839c);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4883a0:{NFSU2_TR(0x4883a0);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4883a4:{NFSU2_TR(0x4883a4);
__asm__ volatile(".byte 0xd8,0xf1":::"memory");
}
B4883a6:{NFSU2_TR(0x4883a6);
{goto L4883d9;}
}
B4883a8:L4883a8:{c.instructions+=5;NFSU2_TR(0x4883a8);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4883ac:{NFSU2_TR(0x4883ac);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4883b0:{NFSU2_TR(0x4883b0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4883b2:{NFSU2_TR(0x4883b2);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4883b5:{NFSU2_TR(0x4883b5);
if(r1(R+514)){{goto L4883c9;}}
}
B4883b7:L4883b7:{c.instructions+=5;NFSU2_TR(0x4883b7);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4883bb:{NFSU2_TR(0x4883bb);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4883bf:{NFSU2_TR(0x4883bf);
__asm__ volatile(".byte 0xd8,0xf1":::"memory");
}
B4883c1:{NFSU2_TR(0x4883c1);
{u32 ea_=u32(u32(7881920u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4883c7:{NFSU2_TR(0x4883c7);
{goto L4883d9;}
}
B4883c9:L4883c9:{c.instructions+=4;NFSU2_TR(0x4883c9);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4883cd:{NFSU2_TR(0x4883cd);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4883d1:{NFSU2_TR(0x4883d1);
__asm__ volatile(".byte 0xd8,0xf1":::"memory");
}
B4883d3:{NFSU2_TR(0x4883d3);
{u32 ea_=u32(u32(7881976u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4883d9:L4883d9:{c.instructions+=8;NFSU2_TR(0x4883d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4883dd:{NFSU2_TR(0x4883dd);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4883df:{NFSU2_TR(0x4883df);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4883e1:{NFSU2_TR(0x4883e1);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4883e3:{NFSU2_TR(0x4883e3);
{u32 ea_=u32(u32(7892372u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4883e9:{NFSU2_TR(0x4883e9);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4883eb:{NFSU2_TR(0x4883eb);
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
B4883ee:{NFSU2_TR(0x4883ee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4883f0:L4883f0:{c.instructions+=7;NFSU2_TR(0x4883f0);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4883f4:{NFSU2_TR(0x4883f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B4883f7:{NFSU2_TR(0x4883f7);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4883fd:{NFSU2_TR(0x4883fd);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B488401:{NFSU2_TR(0x488401);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B488403:{NFSU2_TR(0x488403);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B488406:{NFSU2_TR(0x488406);
if(r1(R+514)){{goto L488426;}}
}
B488408:L488408:{c.instructions+=10;NFSU2_TR(0x488408);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48840c:{NFSU2_TR(0x48840c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B488410:{NFSU2_TR(0x488410);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B488412:{NFSU2_TR(0x488412);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B488416:{NFSU2_TR(0x488416);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48841a:{NFSU2_TR(0x48841a);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48841c:{NFSU2_TR(0x48841c);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B488420:{NFSU2_TR(0x488420);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B488422:{NFSU2_TR(0x488422);
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
B488425:{NFSU2_TR(0x488425);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B488426:L488426:{c.instructions+=5;NFSU2_TR(0x488426);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B48842c:{NFSU2_TR(0x48842c);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B488430:{NFSU2_TR(0x488430);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B488432:{NFSU2_TR(0x488432);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B488435:{NFSU2_TR(0x488435);
if(r1(R+514)){{goto L488443;}}
}
B488437:L488437:{c.instructions+=3;NFSU2_TR(0x488437);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48843d:{NFSU2_TR(0x48843d);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B488441:{NFSU2_TR(0x488441);
{goto L488451;}
}
B488443:L488443:{c.instructions+=4;NFSU2_TR(0x488443);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B488447:{NFSU2_TR(0x488447);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48844b:{NFSU2_TR(0x48844b);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48844f:{NFSU2_TR(0x48844f);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B488451:L488451:{c.instructions+=16;NFSU2_TR(0x488451);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B488455:{NFSU2_TR(0x488455);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B488459:{NFSU2_TR(0x488459);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B48845b:{NFSU2_TR(0x48845b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48845f:{NFSU2_TR(0x48845f);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B488461:{NFSU2_TR(0x488461);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B488465:{NFSU2_TR(0x488465);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B488469:{NFSU2_TR(0x488469);
{u32 ea_=u32(u32(7889736u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48846f:{NFSU2_TR(0x48846f);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B488473:{NFSU2_TR(0x488473);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B488477:{NFSU2_TR(0x488477);
{u32 ea_=u32(u32(7889736u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B48847d:{NFSU2_TR(0x48847d);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B488481:{NFSU2_TR(0x488481);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B488487:{NFSU2_TR(0x488487);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B488489:{NFSU2_TR(0x488489);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B48848c:{NFSU2_TR(0x48848c);
if(r1(R+514)){{goto L48849c;}}
}
B48848e:L48848e:{c.instructions+=3;NFSU2_TR(0x48848e);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B488492:{NFSU2_TR(0x488492);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B488498:{NFSU2_TR(0x488498);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48849c:L48849c:{c.instructions+=5;NFSU2_TR(0x48849c);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4884a0:{NFSU2_TR(0x4884a0);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4884a6:{NFSU2_TR(0x4884a6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4884a8:{NFSU2_TR(0x4884a8);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4884ab:{NFSU2_TR(0x4884ab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4884bb;}}
}
B4884ad:L4884ad:{c.instructions+=3;NFSU2_TR(0x4884ad);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4884b1:{NFSU2_TR(0x4884b1);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4884b7:{NFSU2_TR(0x4884b7);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4884bb:L4884bb:{c.instructions+=5;NFSU2_TR(0x4884bb);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4884bf:{NFSU2_TR(0x4884bf);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4884c5:{NFSU2_TR(0x4884c5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4884c7:{NFSU2_TR(0x4884c7);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4884ca:{NFSU2_TR(0x4884ca);
if(r1(R+514)){{goto L4884d8;}}
}
B4884cc:L4884cc:{c.instructions+=3;NFSU2_TR(0x4884cc);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4884d0:{NFSU2_TR(0x4884d0);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4884d6:{NFSU2_TR(0x4884d6);
{goto L4884dc;}
}
B4884d8:L4884d8:{c.instructions+=1;NFSU2_TR(0x4884d8);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4884dc:L4884dc:{c.instructions+=4;NFSU2_TR(0x4884dc);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4884e2:{NFSU2_TR(0x4884e2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4884e4:{NFSU2_TR(0x4884e4);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4884e7:{NFSU2_TR(0x4884e7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4884ef;}}
}
B4884e9:L4884e9:{c.instructions+=1;NFSU2_TR(0x4884e9);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4884ef:L4884ef:{c.instructions+=5;NFSU2_TR(0x4884ef);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B4884f1:{NFSU2_TR(0x4884f1);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4884f7:{NFSU2_TR(0x4884f7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4884f9:{NFSU2_TR(0x4884f9);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4884fc:{NFSU2_TR(0x4884fc);
if(r1(R+514)){{goto L488508;}}
}
B4884fe:L4884fe:{c.instructions+=3;NFSU2_TR(0x4884fe);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B488500:{NFSU2_TR(0x488500);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B488506:{NFSU2_TR(0x488506);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B488508:L488508:{c.instructions+=5;NFSU2_TR(0x488508);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B48850a:{NFSU2_TR(0x48850a);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B488510:{NFSU2_TR(0x488510);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B488512:{NFSU2_TR(0x488512);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B488515:{NFSU2_TR(0x488515);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L488521;}}
}
B488517:L488517:{c.instructions+=3;NFSU2_TR(0x488517);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B488519:{NFSU2_TR(0x488519);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B48851f:{NFSU2_TR(0x48851f);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B488521:L488521:{c.instructions+=6;NFSU2_TR(0x488521);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B488525:{NFSU2_TR(0x488525);
{u32 ea_=u32(u32(7887312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48852b:{NFSU2_TR(0x48852b);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B488531:{NFSU2_TR(0x488531);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B488533:{NFSU2_TR(0x488533);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B488536:{NFSU2_TR(0x488536);
if(r1(R+514)){{goto L48854e;}}
}
B488538:L488538:{c.instructions+=6;NFSU2_TR(0x488538);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B48853a:{NFSU2_TR(0x48853a);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B48853e:{NFSU2_TR(0x48853e);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B488542:{NFSU2_TR(0x488542);
{u32 ea_=u32(u32(7887312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B488548:{NFSU2_TR(0x488548);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48854c:{NFSU2_TR(0x48854c);
{goto L4885aa;}
}
B48854e:L48854e:{c.instructions+=6;NFSU2_TR(0x48854e);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B488552:{NFSU2_TR(0x488552);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B488554:{NFSU2_TR(0x488554);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B48855a:{NFSU2_TR(0x48855a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B48855c:{NFSU2_TR(0x48855c);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B48855f:{NFSU2_TR(0x48855f);
if(r1(R+514)){{goto L48856b;}}
}
B488561:L488561:{c.instructions+=4;NFSU2_TR(0x488561);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B488565:{NFSU2_TR(0x488565);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B488567:{NFSU2_TR(0x488567);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B488569:{NFSU2_TR(0x488569);
{goto L4885b0;}
}
B48856b:L48856b:{c.instructions+=6;NFSU2_TR(0x48856b);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48856f:{NFSU2_TR(0x48856f);
{u32 ea_=u32(u32(7895772u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B488575:{NFSU2_TR(0x488575);
{u32 ea_=u32(u32(7881920u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B48857b:{NFSU2_TR(0x48857b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B48857d:{NFSU2_TR(0x48857d);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B488580:{NFSU2_TR(0x488580);
if(r1(R+514)){{goto L4885a6;}}
}
B488582:L488582:{c.instructions+=10;NFSU2_TR(0x488582);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B488586:{NFSU2_TR(0x488586);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B488588:{NFSU2_TR(0x488588);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B48858c:{NFSU2_TR(0x48858c);
{u32 ea_=u32(u32(7919768u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B488592:{NFSU2_TR(0x488592);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B488596:{NFSU2_TR(0x488596);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B488598:{NFSU2_TR(0x488598);
{u32 ea_=u32(u32(7887312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48859e:{NFSU2_TR(0x48859e);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4885a2:{NFSU2_TR(0x4885a2);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4885a4:{NFSU2_TR(0x4885a4);
{goto L4885b0;}
}
B4885a6:L4885a6:{c.instructions+=1;NFSU2_TR(0x4885a6);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4885aa:L4885aa:{c.instructions+=2;NFSU2_TR(0x4885aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4885ae:{NFSU2_TR(0x4885ae);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4885b0:L4885b0:{c.instructions+=6;NFSU2_TR(0x4885b0);
{u32 ea_=u32(u32(7887312u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4885b6:{NFSU2_TR(0x4885b6);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B4885b8:{NFSU2_TR(0x4885b8);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4885be:{NFSU2_TR(0x4885be);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4885c0:{NFSU2_TR(0x4885c0);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4885c3:{NFSU2_TR(0x4885c3);
if(r1(R+514)){{goto L4885e1;}}
}
B4885c5:L4885c5:{c.instructions+=9;NFSU2_TR(0x4885c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4885c9:{NFSU2_TR(0x4885c9);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B4885cb:{NFSU2_TR(0x4885cb);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4885cf:{NFSU2_TR(0x4885cf);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B4885d1:{NFSU2_TR(0x4885d1);
{u32 ea_=u32(u32(7887312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4885d7:{NFSU2_TR(0x4885d7);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4885db:{NFSU2_TR(0x4885db);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4885dd:{NFSU2_TR(0x4885dd);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4885df:{NFSU2_TR(0x4885df);
{goto L488643;}
}
B4885e1:L4885e1:{c.instructions+=6;NFSU2_TR(0x4885e1);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B4885e3:{NFSU2_TR(0x4885e3);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B4885e5:{NFSU2_TR(0x4885e5);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4885eb:{NFSU2_TR(0x4885eb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4885ed:{NFSU2_TR(0x4885ed);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4885f0:{NFSU2_TR(0x4885f0);
if(r1(R+514)){{goto L4885fe;}}
}
B4885f2:L4885f2:{c.instructions+=5;NFSU2_TR(0x4885f2);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4885f6:{NFSU2_TR(0x4885f6);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4885f8:{NFSU2_TR(0x4885f8);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B4885fa:{NFSU2_TR(0x4885fa);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4885fc:{NFSU2_TR(0x4885fc);
{goto L488643;}
}
B4885fe:L4885fe:{c.instructions+=6;NFSU2_TR(0x4885fe);
{u32 ea_=u32(u32(7895772u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B488604:{NFSU2_TR(0x488604);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B488606:{NFSU2_TR(0x488606);
{u32 ea_=u32(u32(7881920u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B48860c:{NFSU2_TR(0x48860c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B48860e:{NFSU2_TR(0x48860e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B488611:{NFSU2_TR(0x488611);
if(r1(R+514)){{goto L488637;}}
}
B488613:L488613:{c.instructions+=11;NFSU2_TR(0x488613);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B488617:{NFSU2_TR(0x488617);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B488619:{NFSU2_TR(0x488619);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B48861d:{NFSU2_TR(0x48861d);
{u32 ea_=u32(u32(7919768u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B488623:{NFSU2_TR(0x488623);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B488625:{NFSU2_TR(0x488625);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B488627:{NFSU2_TR(0x488627);
{u32 ea_=u32(u32(7887312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48862d:{NFSU2_TR(0x48862d);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B488631:{NFSU2_TR(0x488631);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B488633:{NFSU2_TR(0x488633);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B488635:{NFSU2_TR(0x488635);
{goto L488643;}
}
B488637:L488637:{c.instructions+=4;NFSU2_TR(0x488637);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48863b:{NFSU2_TR(0x48863b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B48863d:{NFSU2_TR(0x48863d);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B488641:{NFSU2_TR(0x488641);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B488643:L488643:{c.instructions+=6;NFSU2_TR(0x488643);
{u32 ea_=u32(u32(7887312u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B488649:{NFSU2_TR(0x488649);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B48864b:{NFSU2_TR(0x48864b);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B488651:{NFSU2_TR(0x488651);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B488653:{NFSU2_TR(0x488653);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B488656:{NFSU2_TR(0x488656);
if(r1(R+514)){{goto L488676;}}
}
B488658:L488658:{c.instructions+=10;NFSU2_TR(0x488658);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48865c:{NFSU2_TR(0x48865c);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B48865e:{NFSU2_TR(0x48865e);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B488662:{NFSU2_TR(0x488662);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B488664:{NFSU2_TR(0x488664);
{u32 ea_=u32(u32(7887312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48866a:{NFSU2_TR(0x48866a);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48866e:{NFSU2_TR(0x48866e);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B488670:{NFSU2_TR(0x488670);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B488672:{NFSU2_TR(0x488672);
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
B488675:{NFSU2_TR(0x488675);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B488676:L488676:{c.instructions+=6;NFSU2_TR(0x488676);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B488678:{NFSU2_TR(0x488678);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B48867a:{NFSU2_TR(0x48867a);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B488680:{NFSU2_TR(0x488680);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B488682:{NFSU2_TR(0x488682);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B488685:{NFSU2_TR(0x488685);
if(r1(R+514)){{goto L488693;}}
}
B488687:L488687:{c.instructions+=5;NFSU2_TR(0x488687);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48868b:{NFSU2_TR(0x48868b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B48868d:{NFSU2_TR(0x48868d);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48868f:{NFSU2_TR(0x48868f);
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
B488692:{NFSU2_TR(0x488692);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B488693:L488693:{c.instructions+=6;NFSU2_TR(0x488693);
{u32 ea_=u32(u32(7895772u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B488699:{NFSU2_TR(0x488699);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B48869b:{NFSU2_TR(0x48869b);
{u32 ea_=u32(u32(7881920u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4886a1:{NFSU2_TR(0x4886a1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4886a3:{NFSU2_TR(0x4886a3);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4886a6:{NFSU2_TR(0x4886a6);
if(r1(R+514)){{goto L4886ce;}}
}
B4886a8:L4886a8:{c.instructions+=12;NFSU2_TR(0x4886a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4886ac:{NFSU2_TR(0x4886ac);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B4886ae:{NFSU2_TR(0x4886ae);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4886b2:{NFSU2_TR(0x4886b2);
{u32 ea_=u32(u32(7919768u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4886b8:{NFSU2_TR(0x4886b8);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B4886ba:{NFSU2_TR(0x4886ba);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B4886bc:{NFSU2_TR(0x4886bc);
{u32 ea_=u32(u32(7887312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4886c2:{NFSU2_TR(0x4886c2);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4886c6:{NFSU2_TR(0x4886c6);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4886c8:{NFSU2_TR(0x4886c8);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4886ca:{NFSU2_TR(0x4886ca);
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
B4886cd:{NFSU2_TR(0x4886cd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4886ce:L4886ce:{c.instructions+=7;NFSU2_TR(0x4886ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4886d2:{NFSU2_TR(0x4886d2);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4886d4:{NFSU2_TR(0x4886d4);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4886d6:{NFSU2_TR(0x4886d6);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4886da:{NFSU2_TR(0x4886da);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4886dc:{NFSU2_TR(0x4886dc);
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
B4886df:{NFSU2_TR(0x4886df);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4886e0:L4886e0:{c.instructions+=5;NFSU2_TR(0x4886e0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4886e2:{NFSU2_TR(0x4886e2);
u8 U[4];
w4(U+0,u32(0x78d8b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4886e7:{NFSU2_TR(0x4886e7);
u8 U[4];
w4(U+0,u32(0x190ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4886ec:{NFSU2_TR(0x4886ec);
u8 U[4];
w4(U+0,u32(0x2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4886ee:{NFSU2_TR(0x4886ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4886f3ull));
TAIL_STATIC(0x440df0u,440);
}
B4886f3:L4886f3:{c.instructions+=6;NFSU2_TR(0x4886f3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4886f5:{NFSU2_TR(0x4886f5);
u8 U[4];
w4(U+0,u32(0x78d89cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4886fa:{NFSU2_TR(0x4886fa);
u8 U[4];
w4(U+0,u32(0xfaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4886ff:{NFSU2_TR(0x4886ff);
u8 U[4];
w4(U+0,u32(0xd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B488704:{NFSU2_TR(0x488704);
__builtin_memmove(gp(0x82da3c),(R+0),4);
}
B488709:{NFSU2_TR(0x488709);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48870eull));
TAIL_STATIC(0x440df0u,440);
}
B48870e:L48870e:{c.instructions+=9;NFSU2_TR(0x48870e);
__builtin_memmove(gp(0x82da40),(R+0),4);
}
B488713:{NFSU2_TR(0x488713);
__builtin_memmove((R+0),gp(0x82da3c),4);
}
B488718:{NFSU2_TR(0x488718);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0xfffffffeull))));
s4(u32(r4(U+0)),r4(U+4));
}
B48871c:{NFSU2_TR(0x48871c);
__builtin_memmove((R+0),gp(0x82da3c),4);
}
B488721:{NFSU2_TR(0x488721);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B488724:{NFSU2_TR(0x488724);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffffdull))));
}
B488727:{NFSU2_TR(0x488727);
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
B48872a:{NFSU2_TR(0x48872a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48872d:{NFSU2_TR(0x48872d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B488730:L488730:{c.instructions+=3;NFSU2_TR(0x488730);
u8 U[8];
__builtin_memmove((U+0),gp(0x8654a4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B488737:{NFSU2_TR(0x488737);
w4(R+0,u32(0x3e8ull));
}
B48873c:{NFSU2_TR(0x48873c);
if(r1(R+518)){{goto L48874c;}}
}
B48873e:L48873e:{c.instructions+=2;NFSU2_TR(0x48873e);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B488745:{NFSU2_TR(0x488745);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48874c;}}
}
B488747:L488747:{c.instructions+=1;NFSU2_TR(0x488747);
w4(R+0,u32(0x12cull));
}
B48874c:L48874c:{c.instructions+=5;NFSU2_TR(0x48874c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48874e:{NFSU2_TR(0x48874e);
u8 U[4];
w4(U+0,u32(0x78d8c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B488753:{NFSU2_TR(0x488753);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B488754:{NFSU2_TR(0x488754);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B488756:{NFSU2_TR(0x488756);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48875bull));
TAIL_STATIC(0x440df0u,440);
}
B48875b:L48875b:{c.instructions+=8;NFSU2_TR(0x48875b);
__builtin_memmove(gp(0x82da38),(R+0),4);
}
B488760:{NFSU2_TR(0x488760);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0xfffffffeull))));
s4(u32(r4(U+0)),r4(U+4));
}
B488764:{NFSU2_TR(0x488764);
__builtin_memmove((R+0),gp(0x82da38),4);
}
B488769:{NFSU2_TR(0x488769);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48876c:{NFSU2_TR(0x48876c);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffffdull))));
}
B48876f:{NFSU2_TR(0x48876f);
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
B488772:{NFSU2_TR(0x488772);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B488775:{NFSU2_TR(0x488775);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B488780:L488780:{c.instructions+=3;NFSU2_TR(0x488780);
__builtin_memmove((R+0),gp(0x82da38),4);
}
B488785:{NFSU2_TR(0x488785);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B488786:{NFSU2_TR(0x488786);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48878bull));
TAIL_STATIC(0x43cd20u,43c);
}
B48878b:L48878b:{c.instructions+=3;NFSU2_TR(0x48878b);
__builtin_memmove((R+4),gp(0x82da38),4);
}
B488791:{NFSU2_TR(0x488791);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B488792:{NFSU2_TR(0x488792);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x488797ull));
TAIL_STATIC(0x43cd30u,43c);
}
B488797:L488797:{c.instructions+=3;NFSU2_TR(0x488797);
__builtin_memmove((R+8),gp(0x82da38),4);
}
B48879d:{NFSU2_TR(0x48879d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48879e:{NFSU2_TR(0x48879e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4887a3ull));
TAIL_STATIC(0x440e40u,440);
}
B4887a3:L4887a3:{c.instructions+=3;NFSU2_TR(0x4887a3);
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
B4887a6:{NFSU2_TR(0x4887a6);
s4(0x82da38,u32(0x0ull));
}
B4887b0:{NFSU2_TR(0x4887b0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4887c0:L4887c0:{c.instructions+=3;NFSU2_TR(0x4887c0);
__builtin_memmove((R+0),gp(0x82daac),4);
}
B4887c5:{NFSU2_TR(0x4887c5);
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
B4887c7:{NFSU2_TR(0x4887c7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4887fe;}}
}
B4887c9:L4887c9:{c.instructions+=3;NFSU2_TR(0x4887c9);
__builtin_memmove((R+0),gp(0x82dab0),4);
}
B4887ce:{NFSU2_TR(0x4887ce);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4887d0:{NFSU2_TR(0x4887d0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4887db;}}
}
B4887d2:L4887d2:{c.instructions+=3;NFSU2_TR(0x4887d2);
__builtin_memmove((R+0),gp(0x82dab4),4);
}
B4887d7:{NFSU2_TR(0x4887d7);
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
B4887d9:{NFSU2_TR(0x4887d9);
if(r1(R+518)){{goto L4887fe;}}
}
B4887db:L4887db:{c.instructions+=1;NFSU2_TR(0x4887db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4887e0ull));
TAIL_STATIC(0x5b98b0u,5b9);
}
B4887e0:L4887e0:{c.instructions+=3;NFSU2_TR(0x4887e0);
s4(0x82dab0,u32(0x0ull));
}
B4887ea:{NFSU2_TR(0x4887ea);
s4(0x82dab4,u32(0x0ull));
}
B4887f4:{NFSU2_TR(0x4887f4);
s4(0x82dab8,u32(0x0ull));
}
B4887fe:L4887fe:{c.instructions+=1;NFSU2_TR(0x4887fe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B488800:L488800:{c.instructions+=3;NFSU2_TR(0x488800);
__builtin_memmove((R+0),gp(0x82da6c),4);
}
B488805:{NFSU2_TR(0x488805);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B488807:{NFSU2_TR(0x488807);
if(r1(R+518)){{goto L48881b;}}
}
B488809:L488809:{c.instructions+=3;NFSU2_TR(0x488809);
__builtin_memmove((R+0),gp(0x82da70),4);
}
B48880e:{NFSU2_TR(0x48880e);
u8 U[8];
__builtin_memmove((U+0),gp(0x82da74),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B488814:{NFSU2_TR(0x488814);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L48881b;}}
}
B488816:L488816:{c.instructions+=1;NFSU2_TR(0x488816);
__builtin_memmove(gp(0x82da74),(R+0),4);
}
B48881b:L48881b:{c.instructions+=10;NFSU2_TR(0x48881b);
__builtin_memmove((R+8),gp(0x82cc24),4);
}
B488821:{NFSU2_TR(0x488821);
__builtin_memmove((R+0),gp(0x82da5c),4);
}
B488826:{NFSU2_TR(0x488826);
__builtin_memmove((R+4),gp(0x82cc28),4);
}
B48882c:{NFSU2_TR(0x48882c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48882d:{NFSU2_TR(0x48882d);
__builtin_memmove((R+28),gp(0x82da78),4);
}
B488833:{NFSU2_TR(0x488833);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B488835:{NFSU2_TR(0x488835);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B488837:{NFSU2_TR(0x488837);
s4(0x82da6c,u32(0x0ull));
}
B488841:{NFSU2_TR(0x488841);
s4(0x82da70,u32(0x0ull));
}
B48884b:{NFSU2_TR(0x48884b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L488852;}}
}
B48884d:L48884d:{c.instructions+=1;NFSU2_TR(0x48884d);
__builtin_memmove(gp(0x82da78),(R+0),4);
}
B488852:L488852:{c.instructions+=14;NFSU2_TR(0x488852);
__builtin_memmove((R+28),gp(0x82cc1c),4);
}
B488858:{NFSU2_TR(0x488858);
__builtin_memmove(gp(0x82da7c),(R+0),4);
}
B48885d:{NFSU2_TR(0x48885d);
__builtin_memmove(gp(0x82cc1c),(R+0),4);
}
B488862:{NFSU2_TR(0x488862);
__builtin_memmove((R+0),gp(0x82da54),4);
}
B488867:{NFSU2_TR(0x488867);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+4)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+4)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B488869:{NFSU2_TR(0x488869);
__builtin_memmove(gp(0x82cc20),(R+28),4);
}
B48886f:{NFSU2_TR(0x48886f);
__builtin_memmove(gp(0x82cc24),(R+4),4);
}
B488875:{NFSU2_TR(0x488875);
__builtin_memmove(gp(0x82cc28),(R+8),4);
}
B48887b:{NFSU2_TR(0x48887b);
__builtin_memmove(gp(0x82da58),(R+4),4);
}
B488881:{NFSU2_TR(0x488881);
__builtin_memmove(gp(0x82da5c),(R+4),4);
}
B488887:{NFSU2_TR(0x488887);
__builtin_memmove(gp(0x82da60),(R+0),4);
}
B48888c:{NFSU2_TR(0x48888c);
s4(0x82da68,u32(0x0ull));
}
B488896:{NFSU2_TR(0x488896);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B488897:{NFSU2_TR(0x488897);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4888a0:L4888a0:{c.instructions+=3;NFSU2_TR(0x4888a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4888a1:{NFSU2_TR(0x4888a1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4888a2:{NFSU2_TR(0x4888a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4888a7ull));
TAIL_STATIC(0x5b98a0u,5b9);
}
B4888a7:L4888a7:{c.instructions+=6;NFSU2_TR(0x4888a7);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4888ab:{NFSU2_TR(0x4888ab);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4888af:{NFSU2_TR(0x4888af);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4888b2:{NFSU2_TR(0x4888b2);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0x10ull))));
}
B4888b5:{NFSU2_TR(0x4888b5);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4888b8:{NFSU2_TR(0x4888b8);
if(r1(R+518)){{goto L4888bf;}}
}
B4888ba:L4888ba:{c.instructions+=2;NFSU2_TR(0x4888ba);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4888bd:{NFSU2_TR(0x4888bd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4888c2;}}
}
B4888bf:L4888bf:{c.instructions+=1;NFSU2_TR(0x4888bf);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0x2ull))));
}
B4888c2:L4888c2:{c.instructions+=2;NFSU2_TR(0x4888c2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4888c5:{NFSU2_TR(0x4888c5);
if(r1(R+518)){{goto L4888cc;}}
}
B4888c7:L4888c7:{c.instructions+=2;NFSU2_TR(0x4888c7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4888ca:{NFSU2_TR(0x4888ca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4888cf;}}
}
B4888cc:L4888cc:{c.instructions+=1;NFSU2_TR(0x4888cc);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0x1ull))));
}
B4888cf:L4888cf:{c.instructions+=3;NFSU2_TR(0x4888cf);
__builtin_memmove((R+0),gp(0x89e7a4),4);
}
B4888d4:{NFSU2_TR(0x4888d4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4888d6:{NFSU2_TR(0x4888d6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4888dd;}}
}
B4888d8:L4888d8:{c.instructions+=2;NFSU2_TR(0x4888d8);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0x8ull))));
}
B4888db:{NFSU2_TR(0x4888db);
{goto L4888e5;}
}
B4888dd:L4888dd:{c.instructions+=2;NFSU2_TR(0x4888dd);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4888e0:{NFSU2_TR(0x4888e0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4888e5;}}
}
B4888e2:L4888e2:{c.instructions+=1;NFSU2_TR(0x4888e2);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0x4ull))));
}
B4888e5:L4888e5:{c.instructions+=2;NFSU2_TR(0x4888e5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(u32(0x1800ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4888eb:{NFSU2_TR(0x4888eb);
if(r1(R+518)){{goto L4888f0;}}
}
B4888ed:L4888ed:{c.instructions+=1;NFSU2_TR(0x4888ed);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0x40ull))));
}
B4888f0:L4888f0:{c.instructions+=2;NFSU2_TR(0x4888f0);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4888f3:{NFSU2_TR(0x4888f3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4888f8;}}
}
B4888f5:L4888f5:{c.instructions+=1;NFSU2_TR(0x4888f5);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0x20ull))));
}
B4888f8:L4888f8:{c.instructions+=4;NFSU2_TR(0x4888f8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4888fc:{NFSU2_TR(0x4888fc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4888fd:{NFSU2_TR(0x4888fd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4888fe:{NFSU2_TR(0x4888fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x488903ull));
TAIL_STATIC(0x5c26e0u,5c2);
}
B488903:L488903:{c.instructions+=5;NFSU2_TR(0x488903);
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
B488906:{NFSU2_TR(0x488906);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B488909:{NFSU2_TR(0x488909);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B48890a:{NFSU2_TR(0x48890a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48890b:{NFSU2_TR(0x48890b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B488910:L488910:{c.instructions+=5;NFSU2_TR(0x488910);
__builtin_memmove((R+4),gp(0x82da80),4);
}
B488916:{NFSU2_TR(0x488916);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48891a:{NFSU2_TR(0x48891a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B48891c:{NFSU2_TR(0x48891c);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48891e:{NFSU2_TR(0x48891e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L48892e;}}
}
B488920:L488920:{c.instructions+=2;NFSU2_TR(0x488920);
u8 U[26];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x82d530ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+18),(U+8),4);
w1(R+512,u8((r4(U+18))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(U+18),r4(R+8)));
w4(U+22,u32(u32(r4(U+18))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+22))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+22))==(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+22))&u32(u32(0xffull))));
w1(U+16,u8(__builtin_popcountll(u64(r4(U+12)))));
w1(U+17,u8(u32(r1(U+16))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+17))==(u8(0x0ull))));
}
B488927:{NFSU2_TR(0x488927);
if(r1(R+518)){{goto L488947;}}
}
B488929:L488929:{c.instructions+=3;NFSU2_TR(0x488929);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B48892a:{NFSU2_TR(0x48892a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B48892c:{NFSU2_TR(0x48892c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x488920u);}goto L488920;}}
}
B48892e:L48892e:{c.instructions+=5;NFSU2_TR(0x48892e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B488932:{NFSU2_TR(0x488932);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x82d530ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B488939:{NFSU2_TR(0x488939);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x82d5c0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B488940:{NFSU2_TR(0x488940);
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
B488941:{NFSU2_TR(0x488941);
__builtin_memmove(gp(0x82da80),(R+4),4);
}
B488947:L488947:{c.instructions+=1;NFSU2_TR(0x488947);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B488950:L488950:{c.instructions+=5;NFSU2_TR(0x488950);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B488951:{NFSU2_TR(0x488951);
__builtin_memmove((R+4),gp(0x82da80),4);
}
B488957:{NFSU2_TR(0x488957);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B488959:{NFSU2_TR(0x488959);
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
B48895b:{NFSU2_TR(0x48895b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L4889c7;}}
}
B48895d:L48895d:{c.instructions+=2;NFSU2_TR(0x48895d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B488961:{NFSU2_TR(0x488961);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B488962:L488962:{c.instructions+=2;NFSU2_TR(0x488962);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x82d530ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+8))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B488969:{NFSU2_TR(0x488969);
if(r1(R+518)){{goto L488973;}}
}
B48896b:L48896b:{c.instructions+=3;NFSU2_TR(0x48896b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B48896c:{NFSU2_TR(0x48896c);
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
B48896e:{NFSU2_TR(0x48896e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x488962u);}goto L488962;}}
}
B488970:L488970:{c.instructions+=3;NFSU2_TR(0x488970);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B488971:{NFSU2_TR(0x488971);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B488972:{NFSU2_TR(0x488972);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B488973:L488973:{c.instructions+=2;NFSU2_TR(0x488973);
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
B488976:{NFSU2_TR(0x488976);
if(r1(R+518)){{goto L4889c6;}}
}
B488978:L488978:{c.instructions+=4;NFSU2_TR(0x488978);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffffull))));
__builtin_memmove((R+8),(U+0),4);
}
B48897b:{NFSU2_TR(0x48897b);
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
B48897d:{NFSU2_TR(0x48897d);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B488981:{NFSU2_TR(0x488981);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L4889c0;}}
}
B488983:L488983:{c.instructions+=9;NFSU2_TR(0x488983);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B488984:{NFSU2_TR(0x488984);
u8 U[6];
w1(R+512,u8((r4(R+8))<(r4(R+0))));
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B488986:{NFSU2_TR(0x488986);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B488987:{NFSU2_TR(0x488987);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B488988:{NFSU2_TR(0x488988);
u8 U[42];
w4(U+34,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
__builtin_memmove((U+38),(R+8),4);
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+34))));
w1(U+24,u8((r4(U+34))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+34))-u32(u32(0x1ull))));
w4(U+29,shl<u32>(r4(U+38),u64(r4(U+25))));
w1(U+33,u8(s32(r4(U+29))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+33))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+34))!=(u32(0x0ull))));
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
B48898b:{NFSU2_TR(0x48898b);
__builtin_memmove((R+4),(R+8),4);
}
B48898d:{NFSU2_TR(0x48898d);
u8 U[46];
w4(U+38,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
__builtin_memmove((U+42),(R+4),4);
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+38))));
w1(U+24,u8((r4(U+38))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+38))-u32(u32(0x1ull))));
w4(U+29,shr<u32>(r4(U+42),u64(r4(U+25))));
w4(U+33,u32(u32(r4(U+29))&u32(u32(0x1ull))));
w1(U+37,u8((r4(U+33))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+37))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+38))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+4))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B488990:{NFSU2_TR(0x488990);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x82d5c0ull))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B488997:{NFSU2_TR(0x488997);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x82d5c4ull))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B48899e:L48899e:{c.instructions+=1;NFSU2_TR(0x48899e);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L4889a0;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48899eu);}goto L48899e;}
}
B4889a0:L4889a0:{c.instructions+=7;NFSU2_TR(0x4889a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x82d530ull))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B4889a7:{NFSU2_TR(0x4889a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x82d534ull))+u32(r4(U+0))));
__builtin_memmove((R+20),(U+4),4);
}
B4889ae:{NFSU2_TR(0x4889ae);
__builtin_memmove((R+4),(R+8),4);
}
B4889b0:{NFSU2_TR(0x4889b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4889b4:{NFSU2_TR(0x4889b4);
__builtin_memmove((R+24),(R+20),4);
}
B4889b6:{NFSU2_TR(0x4889b6);
__builtin_memmove((R+28),(R+12),4);
}
B4889b8:{NFSU2_TR(0x4889b8);
u8 U[48];
w4(U+40,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
__builtin_memmove((U+44),(R+4),4);
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+40))));
w1(U+24,u8((r4(U+40))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+40))-u32(u32(0x1ull))));
w4(U+29,shr<u32>(r4(U+44),u64(r4(U+25))));
w4(U+33,u32(u32(r4(U+29))&u32(u32(0x1ull))));
w1(U+37,u8((r4(U+33))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+37))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+38,u8((r4(U+40))==(u32(0x1ull))));
w1(U+39,u8(s32(r4(U+44))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+38),1);
w1(U+1,u8(u32(r1(U+0))*u32(u8(0x0ull))));
w1(U+2,u8(!(r1(U+38))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+39))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+40))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+4))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B4889bb:L4889bb:{c.instructions+=1;NFSU2_TR(0x4889bb);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L4889bd;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4889bbu);}goto L4889bb;}
}
B4889bd:L4889bd:{c.instructions+=3;NFSU2_TR(0x4889bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4889be:{NFSU2_TR(0x4889be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4889bf:{NFSU2_TR(0x4889bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4889c0:L4889c0:{c.instructions+=1;NFSU2_TR(0x4889c0);
__builtin_memmove(gp(0x82da80),(R+8),4);
}
B4889c6:L4889c6:{c.instructions+=1;NFSU2_TR(0x4889c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4889c7:L4889c7:{c.instructions+=2;NFSU2_TR(0x4889c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4889c8:{NFSU2_TR(0x4889c8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4889d0:L4889d0:{c.instructions+=3;NFSU2_TR(0x4889d0);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4889d4:{NFSU2_TR(0x4889d4);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4889d6:{NFSU2_TR(0x4889d6);
if(r1(R+518)){{goto L4889de;}}
}
B4889d8:L4889d8:{c.instructions+=2;NFSU2_TR(0x4889d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4889db:{NFSU2_TR(0x4889db);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4889de:L4889de:{c.instructions+=2;NFSU2_TR(0x4889de);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(u8(0x2ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4889e0:{NFSU2_TR(0x4889e0);
if(r1(R+518)){{goto L4889e8;}}
}
B4889e2:L4889e2:{c.instructions+=2;NFSU2_TR(0x4889e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4889e5:{NFSU2_TR(0x4889e5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4889e8:L4889e8:{c.instructions+=2;NFSU2_TR(0x4889e8);
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
B4889ea:{NFSU2_TR(0x4889ea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4889f0:L4889f0:{c.instructions+=12;NFSU2_TR(0x4889f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4889f4:{NFSU2_TR(0x4889f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x40ull))));
}
B4889f7:{NFSU2_TR(0x4889f7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4889f8:{NFSU2_TR(0x4889f8);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4889fc:{NFSU2_TR(0x4889fc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4889fd:{NFSU2_TR(0x4889fd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4889fe:{NFSU2_TR(0x4889fe);
__builtin_memmove((R+24),(R+4),4);
}
B488a00:{NFSU2_TR(0x488a00);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B488a04:{NFSU2_TR(0x488a04);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B488a05:{NFSU2_TR(0x488a05);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B488a06:{NFSU2_TR(0x488a06);
__builtin_memmove((R+4),(R+24),4);
}
B488a08:{NFSU2_TR(0x488a08);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x488a0dull));
TAIL_STATIC(0x5ce510u,5ce);
}
B488a0d:L488a0d:{c.instructions+=2;NFSU2_TR(0x488a0d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B488a0f:{NFSU2_TR(0x488a0f);
if(r1(R+518)){{goto L488a96;}}
}
B488a15:L488a15:{c.instructions+=4;NFSU2_TR(0x488a15);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B488a18:{NFSU2_TR(0x488a18);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B488a19:{NFSU2_TR(0x488a19);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B488a1d:{NFSU2_TR(0x488a1d);
if(r1(R+518)){{goto L488a46;}}
}
B488a1f:L488a1f:{c.instructions+=4;NFSU2_TR(0x488a1f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B488a20:{NFSU2_TR(0x488a20);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B488a23:{NFSU2_TR(0x488a23);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B488a24:{NFSU2_TR(0x488a24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x488a29ull));
TAIL_STATIC(0x43db50u,43d);
}
B488a29:L488a29:{c.instructions+=6;NFSU2_TR(0x488a29);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B488a2c:{NFSU2_TR(0x488a2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B488a2f:{NFSU2_TR(0x488a2f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B488a32:{NFSU2_TR(0x488a32);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B488a33:{NFSU2_TR(0x488a33);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B488a34:{NFSU2_TR(0x488a34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x488a39ull));
TAIL_STATIC(0x43db50u,43d);
}
B488a39:L488a39:{c.instructions+=3;NFSU2_TR(0x488a39);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B488a3c:{NFSU2_TR(0x488a3c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B488a3d:{NFSU2_TR(0x488a3d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x488a42ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x488910u);}goto L488910;}
}
B488a42:L488a42:{c.instructions+=2;NFSU2_TR(0x488a42);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B488a45:{NFSU2_TR(0x488a45);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B488a46:L488a46:{c.instructions+=2;NFSU2_TR(0x488a46);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B488a49:{NFSU2_TR(0x488a49);
if(r1(R+518)){{goto L488a88;}}
}
B488a4b:L488a4b:{c.instructions+=5;NFSU2_TR(0x488a4b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B488a4c:{NFSU2_TR(0x488a4c);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B488a50:{NFSU2_TR(0x488a50);
u8 U[4];
w4(U+0,u32(0x78d8e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B488a55:{NFSU2_TR(0x488a55);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B488a56:{NFSU2_TR(0x488a56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x488a5bull));
TAIL_STATIC(0x43dda0u,43d);
}
B488a5b:L488a5b:{c.instructions+=4;NFSU2_TR(0x488a5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B488a5e:{NFSU2_TR(0x488a5e);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B488a62:{NFSU2_TR(0x488a62);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B488a63:{NFSU2_TR(0x488a63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x488a68ull));
TAIL_STATIC(0x43db50u,43d);
}
B488a68:L488a68:{c.instructions+=7;NFSU2_TR(0x488a68);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B488a6b:{NFSU2_TR(0x488a6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B488a6e:{NFSU2_TR(0x488a6e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B488a71:{NFSU2_TR(0x488a71);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B488a75:{NFSU2_TR(0x488a75);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B488a76:{NFSU2_TR(0x488a76);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B488a77:{NFSU2_TR(0x488a77);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x488a7cull));
TAIL_STATIC(0x43db50u,43d);
}
B488a7c:L488a7c:{c.instructions+=3;NFSU2_TR(0x488a7c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B488a7f:{NFSU2_TR(0x488a7f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B488a80:{NFSU2_TR(0x488a80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x488a85ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x488910u);}goto L488910;}
}
B488a85:L488a85:{c.instructions+=1;NFSU2_TR(0x488a85);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B488a88:L488a88:{c.instructions+=6;NFSU2_TR(0x488a88);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B488a89:{NFSU2_TR(0x488a89);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B488a8a:{NFSU2_TR(0x488a8a);
w4(R+0,u32(0x1ull));
}
B488a8f:{NFSU2_TR(0x488a8f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B488a90:{NFSU2_TR(0x488a90);
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
B488a93:{NFSU2_TR(0x488a93);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B488a96:L488a96:{c.instructions+=5;NFSU2_TR(0x488a96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B488a97:{NFSU2_TR(0x488a97);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B488a99:{NFSU2_TR(0x488a99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B488a9a:{NFSU2_TR(0x488a9a);
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
B488a9d:{NFSU2_TR(0x488a9d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B488aa0:L488aa0:{c.instructions+=6;NFSU2_TR(0x488aa0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B488aa1:{NFSU2_TR(0x488aa1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B488aa5:{NFSU2_TR(0x488aa5);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B488aa8:{NFSU2_TR(0x488aa8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B488aa9:{NFSU2_TR(0x488aa9);
__builtin_memmove((R+24),(R+4),4);
}
B488aab:{NFSU2_TR(0x488aab);
if(r1(R+518)){{goto L488ab2;}}
}
B488aad:L488aad:{c.instructions+=2;NFSU2_TR(0x488aad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B488ab0:{NFSU2_TR(0x488ab0);
{goto L488abe;}
}
B488ab2:L488ab2:{c.instructions+=2;NFSU2_TR(0x488ab2);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B488ab5:{NFSU2_TR(0x488ab5);
if(r1(R+518)){{goto L488abc;}}
}
B488ab7:L488ab7:{c.instructions+=2;NFSU2_TR(0x488ab7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B488aba:{NFSU2_TR(0x488aba);
{goto L488abe;}
}
B488abc:L488abc:{c.instructions+=1;NFSU2_TR(0x488abc);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B488abe:L488abe:{c.instructions+=3;NFSU2_TR(0x488abe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B488ac1:{NFSU2_TR(0x488ac1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B488ac2:{NFSU2_TR(0x488ac2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x488ac7ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x488950u);}goto L488950;}
}
B488ac7:L488ac7:{c.instructions+=4;NFSU2_TR(0x488ac7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B488aca:{NFSU2_TR(0x488aca);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B488acb:{NFSU2_TR(0x488acb);
__builtin_memmove((R+4),(R+24),4);
}
B488acd:{NFSU2_TR(0x488acd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x488ad2ull));
TAIL_STATIC(0x5ce6c0u,5ce);
}
B488ad2:L488ad2:{c.instructions+=3;NFSU2_TR(0x488ad2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B488ad3:{NFSU2_TR(0x488ad3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B488ad4:{NFSU2_TR(0x488ad4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B488ae0:L488ae0:{c.instructions+=13;NFSU2_TR(0x488ae0);
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
B488ae2:{NFSU2_TR(0x488ae2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B488ae4:{NFSU2_TR(0x488ae4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B488ae7:{NFSU2_TR(0x488ae7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B488aea:{NFSU2_TR(0x488aea);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B488aed:{NFSU2_TR(0x488aed);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B488af0:{NFSU2_TR(0x488af0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B488af3:{NFSU2_TR(0x488af3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B488af6:{NFSU2_TR(0x488af6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B488af9:{NFSU2_TR(0x488af9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B488afc:{NFSU2_TR(0x488afc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B488aff:{NFSU2_TR(0x488aff);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x29ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B488b02:{NFSU2_TR(0x488b02);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B488b10:L488b10:{c.instructions+=7;NFSU2_TR(0x488b10);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B488b11:{NFSU2_TR(0x488b11);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B488b12:{NFSU2_TR(0x488b12);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B488b13:{NFSU2_TR(0x488b13);
__builtin_memmove((R+12),(R+4),4);
}
B488b15:{NFSU2_TR(0x488b15);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B488b18:{NFSU2_TR(0x488b18);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B488b1a:{NFSU2_TR(0x488b1a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x488b1full));
TAIL_STATIC(0x5b96a0u,5b9);
}
B488b1f:L488b1f:{c.instructions+=6;NFSU2_TR(0x488b1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B488b22:{NFSU2_TR(0x488b22);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B488b25:{NFSU2_TR(0x488b25);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B488b28:{NFSU2_TR(0x488b28);
__builtin_memmove((R+8),(R+4),4);
}
B488b2a:{NFSU2_TR(0x488b2a);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B488b2d:{NFSU2_TR(0x488b2d);
__builtin_memmove((R+28),(R+0),4);
}
B488b2f:L488b2f:{c.instructions+=1;NFSU2_TR(0x488b2f);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L488b31;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x488b2fu);}goto L488b2f;}
}
B488b31:L488b31:{c.instructions+=2;NFSU2_TR(0x488b31);
__builtin_memmove((R+4),(R+8),4);
}
B488b33:{NFSU2_TR(0x488b33);
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
B488b36:L488b36:{c.instructions+=1;NFSU2_TR(0x488b36);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L488b38;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x488b36u);}goto L488b36;}
}
B488b38:L488b38:{c.instructions+=3;NFSU2_TR(0x488b38);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B488b3b:{NFSU2_TR(0x488b3b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B488b3c:{NFSU2_TR(0x488b3c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x488b41ull));
TAIL_STATIC(0x5b96d0u,5b9);
}
B488b41:L488b41:{c.instructions+=4;NFSU2_TR(0x488b41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B488b42:{NFSU2_TR(0x488b42);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B488b43:{NFSU2_TR(0x488b43);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B488b44:{NFSU2_TR(0x488b44);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B488b50:L488b50:{c.instructions+=3;NFSU2_TR(0x488b50);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B488b54:{NFSU2_TR(0x488b54);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x29ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B488b58:{NFSU2_TR(0x488b58);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B488b60:L488b60:{c.instructions+=3;NFSU2_TR(0x488b60);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B488b64:{NFSU2_TR(0x488b64);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x29ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B488b68:{NFSU2_TR(0x488b68);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B488b70:L488b70:{c.instructions+=2;NFSU2_TR(0x488b70);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B488b73:{NFSU2_TR(0x488b73);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B488b80:L488b80:{c.instructions+=2;NFSU2_TR(0x488b80);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x29ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B488b83:{NFSU2_TR(0x488b83);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B488b90:L488b90:{c.instructions+=4;NFSU2_TR(0x488b90);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B488b94:{NFSU2_TR(0x488b94);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B488b97:{NFSU2_TR(0x488b97);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1bull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x80ull))));
s1(u32(r4(U+0)),r1(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B488b9b:{NFSU2_TR(0x488b9b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B488ba0:L488ba0:{c.instructions+=7;NFSU2_TR(0x488ba0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B488ba6:{NFSU2_TR(0x488ba6);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B488baa:{NFSU2_TR(0x488baa);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B488bab:{NFSU2_TR(0x488bab);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B488bb1:{NFSU2_TR(0x488bb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B488bb4:{NFSU2_TR(0x488bb4);
u8 U[14];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(U+4),r4(R+8)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(U+4),r4(R+8)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+8))));
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
B488bba:{NFSU2_TR(0x488bba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B488bc0:L488bc0:{c.instructions+=7;NFSU2_TR(0x488bc0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B488bc4:{NFSU2_TR(0x488bc4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B488bc6:{NFSU2_TR(0x488bc6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B488bc7:{NFSU2_TR(0x488bc7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B488bc8:{NFSU2_TR(0x488bc8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B488bc9:{NFSU2_TR(0x488bc9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B488bca:{NFSU2_TR(0x488bca);
if(r1(R+518)){{goto L488c22;}}
}
B488bcc:L488bcc:{c.instructions+=3;NFSU2_TR(0x488bcc);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B488bd0:{NFSU2_TR(0x488bd0);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B488bd2:{NFSU2_TR(0x488bd2);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L488c22;}}
}
B488bd4:L488bd4:{c.instructions+=5;NFSU2_TR(0x488bd4);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B488bd8:{NFSU2_TR(0x488bd8);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B488bdc:{NFSU2_TR(0x488bdc);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B488bdf:{NFSU2_TR(0x488bdf);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B488be1:{NFSU2_TR(0x488be1);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L488c22;}}
}
B488be3:L488be3:{c.instructions+=4;NFSU2_TR(0x488be3);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B488be5:{NFSU2_TR(0x488be5);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B488be6:{NFSU2_TR(0x488be6);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B488be8:{NFSU2_TR(0x488be8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L488c22;}}
}
B488bea:L488bea:{c.instructions+=1;NFSU2_TR(0x488bea);
__builtin_memmove((R+12),(R+12),4);
}
B488bf0:L488bf0:{c.instructions+=12;NFSU2_TR(0x488bf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B488bf3:{NFSU2_TR(0x488bf3);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B488bf4:{NFSU2_TR(0x488bf4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B488bf6:{NFSU2_TR(0x488bf6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B488bfa:{NFSU2_TR(0x488bfa);
__builtin_memmove((R+4),(R+0),4);
}
B488bfc:{NFSU2_TR(0x488bfc);
w4(R+4,sar<u32>(r4(R+4),u64(u32(0x1ull))));
}
B488bfe:{NFSU2_TR(0x488bfe);
__builtin_memmove((R+0),(R+4),4);
}
B488c00:{NFSU2_TR(0x488c00);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B488c03:{NFSU2_TR(0x488c03);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B488c05:{NFSU2_TR(0x488c05);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B488c08:{NFSU2_TR(0x488c08);
u8 U[12];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
}
B488c0c:{NFSU2_TR(0x488c0c);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L488c13;}}
}
B488c0e:L488c0e:{c.instructions+=2;NFSU2_TR(0x488c0e);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffffull))));
__builtin_memmove((R+28),(U+0),4);
}
B488c11:{NFSU2_TR(0x488c11);
{goto L488c1e;}
}
B488c13:L488c13:{c.instructions+=3;NFSU2_TR(0x488c13);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B488c17:{NFSU2_TR(0x488c17);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B488c19:{NFSU2_TR(0x488c19);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L488c29;}}
}
B488c1b:L488c1b:{c.instructions+=1;NFSU2_TR(0x488c1b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((R+12),(U+0),4);
}
B488c1e:L488c1e:{c.instructions+=2;NFSU2_TR(0x488c1e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B488c20:{NFSU2_TR(0x488c20);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x488bf0u);}goto L488bf0;}}
}
B488c22:L488c22:{c.instructions+=1;NFSU2_TR(0x488c22);
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
B488c24:L488c24:{c.instructions+=5;NFSU2_TR(0x488c24);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B488c25:{NFSU2_TR(0x488c25);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B488c26:{NFSU2_TR(0x488c26);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B488c27:{NFSU2_TR(0x488c27);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B488c28:{NFSU2_TR(0x488c28);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B488c29:L488c29:{c.instructions+=2;NFSU2_TR(0x488c29);
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
B488c2b:{NFSU2_TR(0x488c2b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x488c24u);}goto L488c24;}}
}
B488c2d:L488c2d:{c.instructions+=3;NFSU2_TR(0x488c2d);
__builtin_memmove((R+8),(R+0),4);
}
B488c2f:{NFSU2_TR(0x488c2f);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+24))));
}
B488c31:{NFSU2_TR(0x488c31);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+20))));
}
B488c33:L488c33:{c.instructions+=2;NFSU2_TR(0x488c33);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+12)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B488c35:{NFSU2_TR(0x488c35);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x488c24u);}goto L488c24;}}
}
B488c37:L488c37:{c.instructions+=5;NFSU2_TR(0x488c37);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B488c39:{NFSU2_TR(0x488c39);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+24))));
}
B488c3b:{NFSU2_TR(0x488c3b);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B488c3c:{NFSU2_TR(0x488c3c);
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
B488c3e:{NFSU2_TR(0x488c3e);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x488c33u);}goto L488c33;}}
}
B488c40:L488c40:{c.instructions+=5;NFSU2_TR(0x488c40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B488c41:{NFSU2_TR(0x488c41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B488c42:{NFSU2_TR(0x488c42);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B488c43:{NFSU2_TR(0x488c43);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B488c44:{NFSU2_TR(0x488c44);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B488c50:L488c50:{c.instructions+=7;NFSU2_TR(0x488c50);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B488c54:{NFSU2_TR(0x488c54);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B488c56:{NFSU2_TR(0x488c56);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B488c57:{NFSU2_TR(0x488c57);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B488c58:{NFSU2_TR(0x488c58);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B488c59:{NFSU2_TR(0x488c59);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B488c5a:{NFSU2_TR(0x488c5a);
if(r1(R+518)){{goto L488caa;}}
}
B488c5c:L488c5c:{c.instructions+=3;NFSU2_TR(0x488c5c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B488c60:{NFSU2_TR(0x488c60);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B488c62:{NFSU2_TR(0x488c62);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L488caa;}}
}
B488c64:L488c64:{c.instructions+=5;NFSU2_TR(0x488c64);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B488c68:{NFSU2_TR(0x488c68);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B488c6c:{NFSU2_TR(0x488c6c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B488c6d:{NFSU2_TR(0x488c6d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B488c6f:{NFSU2_TR(0x488c6f);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L488caa;}}
}
B488c71:L488c71:{c.instructions+=4;NFSU2_TR(0x488c71);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B488c73:{NFSU2_TR(0x488c73);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
}
B488c74:{NFSU2_TR(0x488c74);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B488c76:{NFSU2_TR(0x488c76);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L488caa;}}
}
B488c78:L488c78:{c.instructions+=14;NFSU2_TR(0x488c78);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B488c7c:{NFSU2_TR(0x488c7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B488c7f:{NFSU2_TR(0x488c7f);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B488c80:{NFSU2_TR(0x488c80);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B488c82:{NFSU2_TR(0x488c82);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B488c86:{NFSU2_TR(0x488c86);
__builtin_memmove((R+24),(R+0),4);
}
B488c88:{NFSU2_TR(0x488c88);
w4(R+24,sar<u32>(r4(R+24),u64(u32(0x1ull))));
}
B488c8a:{NFSU2_TR(0x488c8a);
__builtin_memmove((R+0),(R+24),4);
}
B488c8c:{NFSU2_TR(0x488c8c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B488c8f:{NFSU2_TR(0x488c8f);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B488c91:{NFSU2_TR(0x488c91);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B488c95:{NFSU2_TR(0x488c95);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+4),(U+8),1);
}
B488c98:{NFSU2_TR(0x488c98);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+512,u8((r1(R+8))<(r1(U+0))));
w1(U+1,u8(u32(r1(R+8))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B488c9a:{NFSU2_TR(0x488c9a);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L488ca1;}}
}
B488c9c:L488c9c:{c.instructions+=2;NFSU2_TR(0x488c9c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((R+20),(U+0),4);
}
B488c9f:{NFSU2_TR(0x488c9f);
{goto L488ca6;}
}
B488ca1:L488ca1:{c.instructions+=1;NFSU2_TR(0x488ca1);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L488cb1;}}
}
B488ca3:L488ca3:{c.instructions+=1;NFSU2_TR(0x488ca3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((R+12),(U+0),4);
}
B488ca6:L488ca6:{c.instructions+=2;NFSU2_TR(0x488ca6);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B488ca8:{NFSU2_TR(0x488ca8);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x488c78u);}goto L488c78;}}
}
B488caa:L488caa:{c.instructions+=1;NFSU2_TR(0x488caa);
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
B488cac:L488cac:{c.instructions+=5;NFSU2_TR(0x488cac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B488cad:{NFSU2_TR(0x488cad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B488cae:{NFSU2_TR(0x488cae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B488caf:{NFSU2_TR(0x488caf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B488cb0:{NFSU2_TR(0x488cb0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B488cb1:L488cb1:{c.instructions+=2;NFSU2_TR(0x488cb1);
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
B488cb3:{NFSU2_TR(0x488cb3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x488cacu);}goto L488cac;}}
}
B488cb5:L488cb5:{c.instructions+=5;NFSU2_TR(0x488cb5);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B488cb9:{NFSU2_TR(0x488cb9);
__builtin_memmove((R+4),(R+0),4);
}
B488cbb:{NFSU2_TR(0x488cbb);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+28))));
}
B488cbd:{NFSU2_TR(0x488cbd);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+12))));
}
B488cbf:{NFSU2_TR(0x488cbf);
}
B488cc0:L488cc0:{c.instructions+=2;NFSU2_TR(0x488cc0);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((U+4),(U+0),1);
w1(R+512,u8((r1(U+4))<(r1(R+8))));
w1(R+523,sborrow<u8>(r1(U+4),r1(R+8)));
w1(U+5,u8(u32(r1(U+4))-u32(r1(R+8))));
w1(R+519,u8(s8(r1(U+5))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
w1(U+1,u8(u32(r1(U+5))&u32(u8(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r1(U+1)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B488cc2:{NFSU2_TR(0x488cc2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x488cacu);}goto L488cac;}}
}
B488cc4:L488cc4:{c.instructions+=5;NFSU2_TR(0x488cc4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B488cc6:{NFSU2_TR(0x488cc6);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+28))));
}
B488cc8:{NFSU2_TR(0x488cc8);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B488cc9:{NFSU2_TR(0x488cc9);
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
B488ccb:{NFSU2_TR(0x488ccb);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x488cc0u);}goto L488cc0;}}
}
B488ccd:L488ccd:{c.instructions+=5;NFSU2_TR(0x488ccd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B488cce:{NFSU2_TR(0x488cce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B488ccf:{NFSU2_TR(0x488ccf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B488cd0:{NFSU2_TR(0x488cd0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B488cd1:{NFSU2_TR(0x488cd1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B488ce0:L488ce0:{c.instructions+=6;NFSU2_TR(0x488ce0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B488ce6:{NFSU2_TR(0x488ce6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B488ce8:{NFSU2_TR(0x488ce8);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B488cec:{NFSU2_TR(0x488cec);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B488ced:{NFSU2_TR(0x488ced);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B488cf1:{NFSU2_TR(0x488cf1);
if(r1(R+518)){{goto L488d00;}}
}
B488cf3:L488cf3:{c.instructions+=2;NFSU2_TR(0x488cf3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B488cf5:{NFSU2_TR(0x488cf5);
if(r1(R+512)){{goto L488d1a;}}
}
B488cf7:L488cf7:{c.instructions+=5;NFSU2_TR(0x488cf7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B488cf8:{NFSU2_TR(0x488cf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B488cfb:{NFSU2_TR(0x488cfb);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B488cfd:{NFSU2_TR(0x488cfd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B488cfe:{NFSU2_TR(0x488cfe);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L488d1a;}}
}
B488d00:L488d00:{c.instructions+=3;NFSU2_TR(0x488d00);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B488d06:{NFSU2_TR(0x488d06);
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
B488d08:{NFSU2_TR(0x488d08);
if(r1(R+518)){{goto L488d20;}}
}
B488d0a:L488d0a:{c.instructions+=3;NFSU2_TR(0x488d0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B488d10:{NFSU2_TR(0x488d10);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B488d12:{NFSU2_TR(0x488d12);
if(r1(R+512)){{goto L488d1a;}}
}
B488d14:L488d14:{c.instructions+=3;NFSU2_TR(0x488d14);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B488d16:{NFSU2_TR(0x488d16);
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
B488d18:{NFSU2_TR(0x488d18);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L488d20;}}
}
B488d1a:L488d1a:{c.instructions+=3;NFSU2_TR(0x488d1a);
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
B488d1c:{NFSU2_TR(0x488d1c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B488d1d:{NFSU2_TR(0x488d1d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B488d20:L488d20:{c.instructions+=3;NFSU2_TR(0x488d20);
w1(R+0,u8(0x1ull));
}
B488d22:{NFSU2_TR(0x488d22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B488d23:{NFSU2_TR(0x488d23);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B488d30:L488d30:{c.instructions+=7;NFSU2_TR(0x488d30);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B488d34:{NFSU2_TR(0x488d34);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B488d37:{NFSU2_TR(0x488d37);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B488d38:{NFSU2_TR(0x488d38);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B488d3c:{NFSU2_TR(0x488d3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B488d3f:{NFSU2_TR(0x488d3f);
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
B488d41:{NFSU2_TR(0x488d41);
if(r1(R+512)){{goto L488d4d;}}
}
B488d43:L488d43:{c.instructions+=1;NFSU2_TR(0x488d43);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L488d51;}}
}
B488d45:L488d45:{c.instructions+=3;NFSU2_TR(0x488d45);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B488d48:{NFSU2_TR(0x488d48);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
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
B488d4b:{NFSU2_TR(0x488d4b);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L488d51;}}
}
B488d4d:L488d4d:{c.instructions+=3;NFSU2_TR(0x488d4d);
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
B488d4f:{NFSU2_TR(0x488d4f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B488d50:{NFSU2_TR(0x488d50);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B488d51:L488d51:{c.instructions+=3;NFSU2_TR(0x488d51);
w4(R+0,u32(0x1ull));
}
B488d56:{NFSU2_TR(0x488d56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B488d57:{NFSU2_TR(0x488d57);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B488d60:L488d60:{c.instructions+=8;NFSU2_TR(0x488d60);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B488d61:{NFSU2_TR(0x488d61);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B488d65:{NFSU2_TR(0x488d65);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B488d66:{NFSU2_TR(0x488d66);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B488d67:{NFSU2_TR(0x488d67);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B488d6b:{NFSU2_TR(0x488d6b);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B488d6f:{NFSU2_TR(0x488d6f);
__builtin_memmove((R+24),(R+4),4);
}
B488d71:{NFSU2_TR(0x488d71);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L488d88;}}
}
B488d73:L488d73:{c.instructions+=10;NFSU2_TR(0x488d73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B488d75:{NFSU2_TR(0x488d75);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B488d78:{NFSU2_TR(0x488d78);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B488d79:{NFSU2_TR(0x488d79);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B488d7b:{NFSU2_TR(0x488d7b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B488d7c:{NFSU2_TR(0x488d7c);
w4(R+0,u32(~u32(r4(R+0))));
}
B488d7e:{NFSU2_TR(0x488d7e);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B488d80:{NFSU2_TR(0x488d80);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B488d81:{NFSU2_TR(0x488d81);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B488d82:{NFSU2_TR(0x488d82);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x488d85ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B488d85:L488d85:{c.instructions+=1;NFSU2_TR(0x488d85);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B488d88:L488d88:{c.instructions+=3;NFSU2_TR(0x488d88);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B488d8b:{NFSU2_TR(0x488d8b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B488d8c:{NFSU2_TR(0x488d8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x488d91ull));
TAIL_STATIC(0x440540u,440);
}
B488d91:L488d91:{c.instructions+=20;NFSU2_TR(0x488d91);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B488d98:{NFSU2_TR(0x488d98);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B488d9e:{NFSU2_TR(0x488d9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B488da4:{NFSU2_TR(0x488da4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B488da7:{NFSU2_TR(0x488da7);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B488da8:{NFSU2_TR(0x488da8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B488dae:{NFSU2_TR(0x488dae);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B488db1:{NFSU2_TR(0x488db1);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B488db3:{NFSU2_TR(0x488db3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B488db9:{NFSU2_TR(0x488db9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B488dbc:{NFSU2_TR(0x488dbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B488dbf:{NFSU2_TR(0x488dbf);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B488dc0:{NFSU2_TR(0x488dc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B488dc3:{NFSU2_TR(0x488dc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B488dc6:{NFSU2_TR(0x488dc6);
u8 U[6];
w1(R+512,u8((r4(R+0))<(r4(R+4))));
w1(R+523,sborrow<u32>(r4(R+0),r4(R+4)));
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B488dc8:{NFSU2_TR(0x488dc8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B488dc9:{NFSU2_TR(0x488dc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B488dcc:{NFSU2_TR(0x488dcc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B488dcd:{NFSU2_TR(0x488dcd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B488dce:{NFSU2_TR(0x488dce);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B488de0:L488de0:{c.instructions+=10;NFSU2_TR(0x488de0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B488de1:{NFSU2_TR(0x488de1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B488de2:{NFSU2_TR(0x488de2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B488de6:{NFSU2_TR(0x488de6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B488dec:{NFSU2_TR(0x488dec);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B488def:{NFSU2_TR(0x488def);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B488df0:{NFSU2_TR(0x488df0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B488df3:{NFSU2_TR(0x488df3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B488df4:{NFSU2_TR(0x488df4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B488dfe:{NFSU2_TR(0x488dfe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x488e03ull));
TAIL_STATIC(0x440540u,440);
}
B488e03:L488e03:{c.instructions+=4;NFSU2_TR(0x488e03);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B488e06:{NFSU2_TR(0x488e06);
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
B488e08:{NFSU2_TR(0x488e08);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B488e12:{NFSU2_TR(0x488e12);
if(r1(R+518)){{goto L488e1a;}}
}
B488e14:L488e14:{c.instructions+=2;NFSU2_TR(0x488e14);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B488e15:{NFSU2_TR(0x488e15);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x488e17ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B488e17:L488e17:{c.instructions+=1;NFSU2_TR(0x488e17);
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
B488e1a:L488e1a:{c.instructions+=4;NFSU2_TR(0x488e1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B488e1b:{NFSU2_TR(0x488e1b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B488e1c:{NFSU2_TR(0x488e1c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B488e1d:{NFSU2_TR(0x488e1d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B488e20:L488e20:{c.instructions+=5;NFSU2_TR(0x488e20);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B488e24:{NFSU2_TR(0x488e24);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B488e28:{NFSU2_TR(0x488e28);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B488e2b:{NFSU2_TR(0x488e2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B488e2e:{NFSU2_TR(0x488e2e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B488e40:L488e40:{c.instructions+=4;NFSU2_TR(0x488e40);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B488e43:{NFSU2_TR(0x488e43);
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
B488e45:{NFSU2_TR(0x488e45);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B488e48:{NFSU2_TR(0x488e48);
if(r1(R+518)){{goto L488e7e;}}
}
B488e4a:L488e4a:{c.instructions+=4;NFSU2_TR(0x488e4a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B488e4b:{NFSU2_TR(0x488e4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B488e4e:{NFSU2_TR(0x488e4e);
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
B488e50:{NFSU2_TR(0x488e50);
if(r1(R+518)){{goto L488e7d;}}
}
B488e52:L488e52:{c.instructions+=2;NFSU2_TR(0x488e52);
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
B488e54:{NFSU2_TR(0x488e54);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L488e7d;}}
}
B488e56:L488e56:{c.instructions+=4;NFSU2_TR(0x488e56);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
}
B488e59:{NFSU2_TR(0x488e59);
__builtin_memmove((R+24),(R+8),4);
}
B488e5b:{NFSU2_TR(0x488e5b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B488e5c:{NFSU2_TR(0x488e5c);
__builtin_memmove((R+16),(R+16),4);
}
B488e60:L488e60:{c.instructions+=3;NFSU2_TR(0x488e60);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B488e62:{NFSU2_TR(0x488e62);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B488e64:{NFSU2_TR(0x488e64);
if(r1(R+518)){{goto L488e76;}}
}
B488e66:L488e66:{c.instructions+=5;NFSU2_TR(0x488e66);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B488e68:{NFSU2_TR(0x488e68);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B488e6b:{NFSU2_TR(0x488e6b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+4)),r4(U+0));
}
B488e6d:{NFSU2_TR(0x488e6d);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B488e73:{NFSU2_TR(0x488e73);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B488e76:L488e76:{c.instructions+=3;NFSU2_TR(0x488e76);
w1(R+512,carry<u32>(r4(R+0),u32(0x10ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B488e79:{NFSU2_TR(0x488e79);
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
B488e7a:{NFSU2_TR(0x488e7a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x488e60u);}goto L488e60;}}
}
B488e7c:L488e7c:{c.instructions+=1;NFSU2_TR(0x488e7c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B488e7d:L488e7d:{c.instructions+=1;NFSU2_TR(0x488e7d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B488e7e:L488e7e:{c.instructions+=1;NFSU2_TR(0x488e7e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B488e80:L488e80:{c.instructions+=4;NFSU2_TR(0x488e80);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B488e81:{NFSU2_TR(0x488e81);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B488e84:{NFSU2_TR(0x488e84);
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
B488e86:{NFSU2_TR(0x488e86);
if(r1(R+518)){{goto L488ea9;}}
}
B488e88:L488e88:{c.instructions+=11;NFSU2_TR(0x488e88);
{u32 ea_=u32(r4(R+0)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B488e8b:{NFSU2_TR(0x488e8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B488e8e:{NFSU2_TR(0x488e8e);
{u32 ea_=u32(r4(R+0)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B488e91:{NFSU2_TR(0x488e91);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B488e94:{NFSU2_TR(0x488e94);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B488e98:{NFSU2_TR(0x488e98);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B488e9a:{NFSU2_TR(0x488e9a);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B488e9d:{NFSU2_TR(0x488e9d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+16)),r4(U+0));
}
B488ea1:{NFSU2_TR(0x488ea1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B488ea3:{NFSU2_TR(0x488ea3);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B488ea6:{NFSU2_TR(0x488ea6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B488ea9:L488ea9:{c.instructions+=2;NFSU2_TR(0x488ea9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B488eaa:{NFSU2_TR(0x488eaa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B488eb0:L488eb0:{c.instructions+=3;NFSU2_TR(0x488eb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B488eb3:{NFSU2_TR(0x488eb3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B488eb5:{NFSU2_TR(0x488eb5);
if(r1(R+518)){{goto L488ebb;}}
}
B488eb7:L488eb7:{c.instructions+=2;NFSU2_TR(0x488eb7);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x70ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x70ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B488eba:{NFSU2_TR(0x488eba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B488ebb:L488ebb:{c.instructions+=2;NFSU2_TR(0x488ebb);
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
B488ebd:{NFSU2_TR(0x488ebd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B488ec0:L488ec0:{c.instructions+=3;NFSU2_TR(0x488ec0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B488ec3:{NFSU2_TR(0x488ec3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B488ec5:{NFSU2_TR(0x488ec5);
if(r1(R+518)){{goto L488ecf;}}
}
B488ec7:L488ec7:{c.instructions+=3;NFSU2_TR(0x488ec7);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B488ecb:{NFSU2_TR(0x488ecb);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B488ece:{NFSU2_TR(0x488ece);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B488ecf:L488ecf:{c.instructions+=2;NFSU2_TR(0x488ecf);
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
B488ed1:{NFSU2_TR(0x488ed1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B488ee0:L488ee0:{c.instructions+=3;NFSU2_TR(0x488ee0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B488ee3:{NFSU2_TR(0x488ee3);
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
B488ee5:{NFSU2_TR(0x488ee5);
if(r1(R+518)){{goto L488eec;}}
}
B488ee7:L488ee7:{c.instructions+=2;NFSU2_TR(0x488ee7);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B488eeb:{NFSU2_TR(0x488eeb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B488eec:L488eec:{c.instructions+=2;NFSU2_TR(0x488eec);
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
B488eee:{NFSU2_TR(0x488eee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B488ef0:L488ef0:{c.instructions+=5;NFSU2_TR(0x488ef0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B488ef2:{NFSU2_TR(0x488ef2);
u8 U[4];
w4(U+0,u32(0x78d90cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B488ef7:{NFSU2_TR(0x488ef7);
u8 U[4];
w4(U+0,u32(0x1388ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B488efc:{NFSU2_TR(0x488efc);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B488efe:{NFSU2_TR(0x488efe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x488f03ull));
TAIL_STATIC(0x440df0u,440);
}
B488f03:L488f03:{c.instructions+=3;NFSU2_TR(0x488f03);
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
B488f06:{NFSU2_TR(0x488f06);
__builtin_memmove(gp(0x82da88),(R+0),4);
}
B488f0b:{NFSU2_TR(0x488f0b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B488f10:L488f10:{c.instructions+=6;NFSU2_TR(0x488f10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x400ull))));
}
B488f16:{NFSU2_TR(0x488f16);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B488f17:{NFSU2_TR(0x488f17);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B488f18:{NFSU2_TR(0x488f18);
u8 U[8];
w4(U+0,u32(u32(u32(0x40cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B488f1f:{NFSU2_TR(0x488f1f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B488f21:{NFSU2_TR(0x488f21);
if(r1(R+518)){{goto L488f8a;}}
}
B488f23:L488f23:{c.instructions+=3;NFSU2_TR(0x488f23);
u8 U[8];
w4(U+0,u32(u32(u32(0x410ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B488f2a:{NFSU2_TR(0x488f2a);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x100ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x100ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B488f30:{NFSU2_TR(0x488f30);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L488f8a;}}
}
B488f32:L488f32:{c.instructions+=2;NFSU2_TR(0x488f32);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B488f34:{NFSU2_TR(0x488f34);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L488f8a;}}
}
B488f36:L488f36:{c.instructions+=1;NFSU2_TR(0x488f36);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L488f46;}}
}
B488f38:L488f38:{c.instructions+=5;NFSU2_TR(0x488f38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B488f39:{NFSU2_TR(0x488f39);
w4(R+0,u32(0x1ull));
}
B488f3e:{NFSU2_TR(0x488f3e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B488f3f:{NFSU2_TR(0x488f3f);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x400ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x400ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x400ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B488f45:{NFSU2_TR(0x488f45);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B488f46:L488f46:{c.instructions+=4;NFSU2_TR(0x488f46);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B488f48:{NFSU2_TR(0x488f48);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B488f4a:{NFSU2_TR(0x488f4a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B488f4c:{NFSU2_TR(0x488f4c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L488f73;}}
}
B488f4e:L488f4e:{c.instructions+=2;NFSU2_TR(0x488f4e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B488f4f:{NFSU2_TR(0x488f4f);
}
B488f50:L488f50:{c.instructions+=3;NFSU2_TR(0x488f50);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B488f53:{NFSU2_TR(0x488f53);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B488f55:{NFSU2_TR(0x488f55);
if(r1(R+518)){{goto L488f6d;}}
}
B488f57:L488f57:{c.instructions+=3;NFSU2_TR(0x488f57);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B488f5a:{NFSU2_TR(0x488f5a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B488f5c:{NFSU2_TR(0x488f5c);
if(r1(R+518)){{goto L488f6d;}}
}
B488f5e:L488f5e:{c.instructions+=3;NFSU2_TR(0x488f5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B488f64:{NFSU2_TR(0x488f64);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B488f66:{NFSU2_TR(0x488f66);
if(r1(R+518)){{goto L488f6d;}}
}
B488f68:L488f68:{c.instructions+=2;NFSU2_TR(0x488f68);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B488f6c:{NFSU2_TR(0x488f6c);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B488f6d:L488f6d:{c.instructions+=3;NFSU2_TR(0x488f6d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B488f6e:{NFSU2_TR(0x488f6e);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B488f70:{NFSU2_TR(0x488f70);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x488f50u);}goto L488f50;}}
}
B488f72:L488f72:{c.instructions+=1;NFSU2_TR(0x488f72);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B488f73:L488f73:{c.instructions+=4;NFSU2_TR(0x488f73);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B488f74:{NFSU2_TR(0x488f74);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B488f78:{NFSU2_TR(0x488f78);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B488f79:{NFSU2_TR(0x488f79);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x488f7eull));
TAIL_STATIC(0x489200u,489);
}
B488f7e:L488f7e:{c.instructions+=5;NFSU2_TR(0x488f7e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B488f81:{NFSU2_TR(0x488f81);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B488f82:{NFSU2_TR(0x488f82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B488f83:{NFSU2_TR(0x488f83);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x400ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x400ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x400ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B488f89:{NFSU2_TR(0x488f89);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B488f8a:L488f8a:{c.instructions+=5;NFSU2_TR(0x488f8a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B488f8b:{NFSU2_TR(0x488f8b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B488f8d:{NFSU2_TR(0x488f8d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B488f8e:{NFSU2_TR(0x488f8e);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x400ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x400ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x400ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B488f94:{NFSU2_TR(0x488f94);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B488fa0:L488fa0:{c.instructions+=6;NFSU2_TR(0x488fa0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B488fa6:{NFSU2_TR(0x488fa6);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1bull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B488faa:{NFSU2_TR(0x488faa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B488fab:{NFSU2_TR(0x488fab);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B488faf:{NFSU2_TR(0x488faf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B488fb0:{NFSU2_TR(0x488fb0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B488fb2:L488fb2:{c.instructions+=2;NFSU2_TR(0x488fb2);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B488fb4:{NFSU2_TR(0x488fb4);
if(r1(R+518)){{goto L488fe3;}}
}
B488fb6:L488fb6:{c.instructions+=2;NFSU2_TR(0x488fb6);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B488fb8:{NFSU2_TR(0x488fb8);
if(r1(R+518)){{goto L488fe3;}}
}
B488fba:L488fba:{c.instructions+=2;NFSU2_TR(0x488fba);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B488fbc:{NFSU2_TR(0x488fbc);
if(r1(R+518)){{goto L488fd4;}}
}
B488fbe:L488fbe:{c.instructions+=2;NFSU2_TR(0x488fbe);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B488fc0:{NFSU2_TR(0x488fc0);
if(r1(R+512)){{goto L488fe3;}}
}
B488fc2:L488fc2:{c.instructions+=5;NFSU2_TR(0x488fc2);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffffbull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B488fc6:{NFSU2_TR(0x488fc6);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B488fc9:{NFSU2_TR(0x488fc9);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B488fcb:{NFSU2_TR(0x488fcb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B488fcd:{NFSU2_TR(0x488fcd);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L488fe3;}}
}
B488fcf:L488fcf:{c.instructions+=2;NFSU2_TR(0x488fcf);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
}
B488fd2:{NFSU2_TR(0x488fd2);
{goto L488fd6;}
}
B488fd4:L488fd4:{c.instructions+=1;NFSU2_TR(0x488fd4);
__builtin_memmove((R+0),(R+8),4);
}
B488fd6:L488fd6:{c.instructions+=2;NFSU2_TR(0x488fd6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B488fd8:{NFSU2_TR(0x488fd8);
if(r1(R+518)){{goto L488fe3;}}
}
B488fda:L488fda:{c.instructions+=2;NFSU2_TR(0x488fda);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+24))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+24)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B488fdc:{NFSU2_TR(0x488fdc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x488fb2u);}goto L488fb2;}}
}
B488fde:L488fde:{c.instructions+=3;NFSU2_TR(0x488fde);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B488fdf:{NFSU2_TR(0x488fdf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B488fe0:{NFSU2_TR(0x488fe0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B488fe3:L488fe3:{c.instructions+=4;NFSU2_TR(0x488fe3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B488fe4:{NFSU2_TR(0x488fe4);
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
B488fe6:{NFSU2_TR(0x488fe6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B488fe7:{NFSU2_TR(0x488fe7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B488ff0:L488ff0:{c.instructions+=7;NFSU2_TR(0x488ff0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B488ff1:{NFSU2_TR(0x488ff1);
__builtin_memmove((R+20),(R+16),4);
}
B488ff3:{NFSU2_TR(0x488ff3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B488ff6:{NFSU2_TR(0x488ff6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x44ull))));
}
B488ff9:{NFSU2_TR(0x488ff9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B488ffa:{NFSU2_TR(0x488ffa);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B488ffe:{NFSU2_TR(0x488ffe);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
TAIL_STATIC(0x489004u,489);
}
XIT:NFSU2_TR_EXIT(0x488,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
