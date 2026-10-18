#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_444(u8* __restrict R,Cpu& c);
u32 body_447(u8* __restrict R,Cpu& c);
u32 body_44a(u8* __restrict R,Cpu& c);
u32 body_44c(u8* __restrict R,Cpu& c);
u32 body_48f(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_572(u8* __restrict R,Cpu& c);
u32 body_573(u8* __restrict R,Cpu& c);
u32 body_579(u8* __restrict R,Cpu& c);
u32 body_5ba(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x44b,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x44b,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_44b(u8* __restrict R,Cpu& c);
u32 page_44b(Cpu& c){return body_44b(c.regs.data(),c);}
__attribute__((noinline)) u32 body_44b(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x44b000:goto L44b000;
case 0x44b003:c.instructions+=15;goto B44b003;
case 0x44b005:c.instructions+=14;goto B44b005;
case 0x44b008:c.instructions+=13;goto B44b008;
case 0x44b00c:c.instructions+=12;goto B44b00c;
case 0x44b00e:c.instructions+=11;goto B44b00e;
case 0x44b00f:c.instructions+=10;goto B44b00f;
case 0x44b015:c.instructions+=9;goto B44b015;
case 0x44b016:c.instructions+=8;goto B44b016;
case 0x44b01b:c.instructions+=7;goto B44b01b;
case 0x44b021:c.instructions+=6;goto B44b021;
case 0x44b027:c.instructions+=5;goto B44b027;
case 0x44b02c:c.instructions+=4;goto B44b02c;
case 0x44b02d:c.instructions+=3;goto B44b02d;
case 0x44b02f:c.instructions+=2;goto B44b02f;
case 0x44b030:c.instructions+=1;goto B44b030;
case 0x44b040:goto L44b040;
case 0x44b041:c.instructions+=13;goto B44b041;
case 0x44b043:c.instructions+=12;goto B44b043;
case 0x44b046:c.instructions+=11;goto B44b046;
case 0x44b049:c.instructions+=10;goto B44b049;
case 0x44b04a:c.instructions+=9;goto B44b04a;
case 0x44b04b:c.instructions+=8;goto B44b04b;
case 0x44b04e:c.instructions+=7;goto B44b04e;
case 0x44b04f:c.instructions+=6;goto B44b04f;
case 0x44b053:c.instructions+=5;goto B44b053;
case 0x44b054:c.instructions+=4;goto B44b054;
case 0x44b055:c.instructions+=3;goto B44b055;
case 0x44b057:c.instructions+=2;goto B44b057;
case 0x44b05c:c.instructions+=1;goto B44b05c;
case 0x44b061:goto L44b061;
case 0x44b064:c.instructions+=6;goto B44b064;
case 0x44b067:c.instructions+=5;goto B44b067;
case 0x44b068:c.instructions+=4;goto B44b068;
case 0x44b06c:c.instructions+=3;goto B44b06c;
case 0x44b06d:c.instructions+=2;goto B44b06d;
case 0x44b06f:c.instructions+=1;goto B44b06f;
case 0x44b074:goto L44b074;
case 0x44b076:c.instructions+=1;goto B44b076;
case 0x44b078:goto L44b078;
case 0x44b07d:c.instructions+=1;goto B44b07d;
case 0x44b080:goto L44b080;
case 0x44b084:c.instructions+=21;goto B44b084;
case 0x44b085:c.instructions+=20;goto B44b085;
case 0x44b087:c.instructions+=19;goto B44b087;
case 0x44b08b:c.instructions+=18;goto B44b08b;
case 0x44b08e:c.instructions+=17;goto B44b08e;
case 0x44b08f:c.instructions+=16;goto B44b08f;
case 0x44b093:c.instructions+=15;goto B44b093;
case 0x44b096:c.instructions+=14;goto B44b096;
case 0x44b098:c.instructions+=13;goto B44b098;
case 0x44b09e:c.instructions+=12;goto B44b09e;
case 0x44b0a0:c.instructions+=11;goto B44b0a0;
case 0x44b0a2:c.instructions+=10;goto B44b0a2;
case 0x44b0a4:c.instructions+=9;goto B44b0a4;
case 0x44b0a6:c.instructions+=8;goto B44b0a6;
case 0x44b0a8:c.instructions+=7;goto B44b0a8;
case 0x44b0aa:c.instructions+=6;goto B44b0aa;
case 0x44b0ac:c.instructions+=5;goto B44b0ac;
case 0x44b0ae:c.instructions+=4;goto B44b0ae;
case 0x44b0b0:c.instructions+=3;goto B44b0b0;
case 0x44b0b3:c.instructions+=2;goto B44b0b3;
case 0x44b0b7:c.instructions+=1;goto B44b0b7;
case 0x44b0bc:goto L44b0bc;
case 0x44b0be:c.instructions+=1;goto B44b0be;
case 0x44b0c0:goto L44b0c0;
case 0x44b0c3:c.instructions+=47;goto B44b0c3;
case 0x44b0c6:c.instructions+=46;goto B44b0c6;
case 0x44b0c9:c.instructions+=45;goto B44b0c9;
case 0x44b0cc:c.instructions+=44;goto B44b0cc;
case 0x44b0cf:c.instructions+=43;goto B44b0cf;
case 0x44b0d3:c.instructions+=42;goto B44b0d3;
case 0x44b0d6:c.instructions+=41;goto B44b0d6;
case 0x44b0d7:c.instructions+=40;goto B44b0d7;
case 0x44b0d8:c.instructions+=39;goto B44b0d8;
case 0x44b0dc:c.instructions+=38;goto B44b0dc;
case 0x44b0de:c.instructions+=37;goto B44b0de;
case 0x44b0df:c.instructions+=36;goto B44b0df;
case 0x44b0e1:c.instructions+=35;goto B44b0e1;
case 0x44b0e2:c.instructions+=34;goto B44b0e2;
case 0x44b0e4:c.instructions+=33;goto B44b0e4;
case 0x44b0e6:c.instructions+=32;goto B44b0e6;
case 0x44b0e8:c.instructions+=31;goto B44b0e8;
case 0x44b0eb:c.instructions+=30;goto B44b0eb;
case 0x44b0ee:c.instructions+=29;goto B44b0ee;
case 0x44b0f1:c.instructions+=28;goto B44b0f1;
case 0x44b0f4:c.instructions+=27;goto B44b0f4;
case 0x44b0f6:c.instructions+=26;goto B44b0f6;
case 0x44b0f8:c.instructions+=25;goto B44b0f8;
case 0x44b0fb:c.instructions+=24;goto B44b0fb;
case 0x44b0fe:c.instructions+=23;goto B44b0fe;
case 0x44b100:c.instructions+=22;goto B44b100;
case 0x44b103:c.instructions+=21;goto B44b103;
case 0x44b106:c.instructions+=20;goto B44b106;
case 0x44b109:c.instructions+=19;goto B44b109;
case 0x44b10c:c.instructions+=18;goto B44b10c;
case 0x44b10e:c.instructions+=17;goto B44b10e;
case 0x44b110:c.instructions+=16;goto B44b110;
case 0x44b113:c.instructions+=15;goto B44b113;
case 0x44b116:c.instructions+=14;goto B44b116;
case 0x44b118:c.instructions+=13;goto B44b118;
case 0x44b11b:c.instructions+=12;goto B44b11b;
case 0x44b11f:c.instructions+=11;goto B44b11f;
case 0x44b121:c.instructions+=10;goto B44b121;
case 0x44b125:c.instructions+=9;goto B44b125;
case 0x44b129:c.instructions+=8;goto B44b129;
case 0x44b12f:c.instructions+=7;goto B44b12f;
case 0x44b133:c.instructions+=6;goto B44b133;
case 0x44b135:c.instructions+=5;goto B44b135;
case 0x44b139:c.instructions+=4;goto B44b139;
case 0x44b13b:c.instructions+=3;goto B44b13b;
case 0x44b13f:c.instructions+=2;goto B44b13f;
case 0x44b141:c.instructions+=1;goto B44b141;
case 0x44b146:goto L44b146;
case 0x44b14a:c.instructions+=2;goto B44b14a;
case 0x44b14c:c.instructions+=1;goto B44b14c;
case 0x44b14e:goto L44b14e;
case 0x44b158:goto L44b158;
case 0x44b159:c.instructions+=5;goto B44b159;
case 0x44b15a:c.instructions+=4;goto B44b15a;
case 0x44b15b:c.instructions+=3;goto B44b15b;
case 0x44b15d:c.instructions+=2;goto B44b15d;
case 0x44b15e:c.instructions+=1;goto B44b15e;
case 0x44b170:goto L44b170;
case 0x44b172:c.instructions+=13;goto B44b172;
case 0x44b177:c.instructions+=12;goto B44b177;
case 0x44b17d:c.instructions+=11;goto B44b17d;
case 0x44b17e:c.instructions+=10;goto B44b17e;
case 0x44b185:c.instructions+=9;goto B44b185;
case 0x44b186:c.instructions+=8;goto B44b186;
case 0x44b187:c.instructions+=7;goto B44b187;
case 0x44b189:c.instructions+=6;goto B44b189;
case 0x44b18a:c.instructions+=5;goto B44b18a;
case 0x44b18e:c.instructions+=4;goto B44b18e;
case 0x44b194:c.instructions+=3;goto B44b194;
case 0x44b196:c.instructions+=2;goto B44b196;
case 0x44b19a:c.instructions+=1;goto B44b19a;
case 0x44b19f:goto L44b19f;
case 0x44b1a5:c.instructions+=2;goto B44b1a5;
case 0x44b1a8:c.instructions+=1;goto B44b1a8;
case 0x44b1aa:goto L44b1aa;
case 0x44b1b0:goto L44b1b0;
case 0x44b1b6:c.instructions+=2;goto B44b1b6;
case 0x44b1b9:c.instructions+=1;goto B44b1b9;
case 0x44b1bb:goto L44b1bb;
case 0x44b1c1:goto L44b1c1;
case 0x44b1c4:c.instructions+=3;goto B44b1c4;
case 0x44b1cc:c.instructions+=2;goto B44b1cc;
case 0x44b1d2:c.instructions+=1;goto B44b1d2;
case 0x44b1d4:goto L44b1d4;
case 0x44b1d7:c.instructions+=8;goto B44b1d7;
case 0x44b1da:c.instructions+=7;goto B44b1da;
case 0x44b1e0:c.instructions+=6;goto B44b1e0;
case 0x44b1e3:c.instructions+=5;goto B44b1e3;
case 0x44b1e9:c.instructions+=4;goto B44b1e9;
case 0x44b1ec:c.instructions+=3;goto B44b1ec;
case 0x44b1ed:c.instructions+=2;goto B44b1ed;
case 0x44b1f0:c.instructions+=1;goto B44b1f0;
case 0x44b1f5:goto L44b1f5;
case 0x44b1f9:c.instructions+=3;goto B44b1f9;
case 0x44b1fa:c.instructions+=2;goto B44b1fa;
case 0x44b1fb:c.instructions+=1;goto B44b1fb;
case 0x44b1fd:goto L44b1fd;
case 0x44b203:goto L44b203;
case 0x44b207:c.instructions+=3;goto B44b207;
case 0x44b20e:c.instructions+=2;goto B44b20e;
case 0x44b211:c.instructions+=1;goto B44b211;
case 0x44b220:goto L44b220;
case 0x44b226:c.instructions+=1;goto B44b226;
case 0x44b230:goto L44b230;
case 0x44b231:c.instructions+=8;goto B44b231;
case 0x44b233:c.instructions+=7;goto B44b233;
case 0x44b236:c.instructions+=6;goto B44b236;
case 0x44b23c:c.instructions+=5;goto B44b23c;
case 0x44b23d:c.instructions+=4;goto B44b23d;
case 0x44b23f:c.instructions+=3;goto B44b23f;
case 0x44b240:c.instructions+=2;goto B44b240;
case 0x44b245:c.instructions+=1;goto B44b245;
case 0x44b24a:goto L44b24a;
case 0x44b24c:c.instructions+=1;goto B44b24c;
case 0x44b252:goto L44b252;
case 0x44b258:c.instructions+=2;goto B44b258;
case 0x44b25a:c.instructions+=1;goto B44b25a;
case 0x44b260:goto L44b260;
case 0x44b263:c.instructions+=14;goto B44b263;
case 0x44b268:c.instructions+=13;goto B44b268;
case 0x44b26a:c.instructions+=12;goto B44b26a;
case 0x44b26b:c.instructions+=11;goto B44b26b;
case 0x44b272:c.instructions+=10;goto B44b272;
case 0x44b275:c.instructions+=9;goto B44b275;
case 0x44b277:c.instructions+=8;goto B44b277;
case 0x44b27e:c.instructions+=7;goto B44b27e;
case 0x44b281:c.instructions+=6;goto B44b281;
case 0x44b285:c.instructions+=5;goto B44b285;
case 0x44b287:c.instructions+=4;goto B44b287;
case 0x44b288:c.instructions+=3;goto B44b288;
case 0x44b28e:c.instructions+=2;goto B44b28e;
case 0x44b295:c.instructions+=1;goto B44b295;
case 0x44b29a:goto L44b29a;
case 0x44b29e:c.instructions+=151;goto B44b29e;
case 0x44b2a4:c.instructions+=150;goto B44b2a4;
case 0x44b2a8:c.instructions+=149;goto B44b2a8;
case 0x44b2ae:c.instructions+=148;goto B44b2ae;
case 0x44b2b2:c.instructions+=147;goto B44b2b2;
case 0x44b2b8:c.instructions+=146;goto B44b2b8;
case 0x44b2bc:c.instructions+=145;goto B44b2bc;
case 0x44b2c0:c.instructions+=144;goto B44b2c0;
case 0x44b2c4:c.instructions+=143;goto B44b2c4;
case 0x44b2c6:c.instructions+=142;goto B44b2c6;
case 0x44b2c8:c.instructions+=141;goto B44b2c8;
case 0x44b2cf:c.instructions+=140;goto B44b2cf;
case 0x44b2d3:c.instructions+=139;goto B44b2d3;
case 0x44b2d9:c.instructions+=138;goto B44b2d9;
case 0x44b2dd:c.instructions+=137;goto B44b2dd;
case 0x44b2e1:c.instructions+=136;goto B44b2e1;
case 0x44b2e7:c.instructions+=135;goto B44b2e7;
case 0x44b2eb:c.instructions+=134;goto B44b2eb;
case 0x44b2ef:c.instructions+=133;goto B44b2ef;
case 0x44b2f5:c.instructions+=132;goto B44b2f5;
case 0x44b2f9:c.instructions+=131;goto B44b2f9;
case 0x44b2fd:c.instructions+=130;goto B44b2fd;
case 0x44b301:c.instructions+=129;goto B44b301;
case 0x44b305:c.instructions+=128;goto B44b305;
case 0x44b309:c.instructions+=127;goto B44b309;
case 0x44b310:c.instructions+=126;goto B44b310;
case 0x44b317:c.instructions+=125;goto B44b317;
case 0x44b31d:c.instructions+=124;goto B44b31d;
case 0x44b321:c.instructions+=123;goto B44b321;
case 0x44b325:c.instructions+=122;goto B44b325;
case 0x44b32b:c.instructions+=121;goto B44b32b;
case 0x44b32f:c.instructions+=120;goto B44b32f;
case 0x44b333:c.instructions+=119;goto B44b333;
case 0x44b339:c.instructions+=118;goto B44b339;
case 0x44b33d:c.instructions+=117;goto B44b33d;
case 0x44b341:c.instructions+=116;goto B44b341;
case 0x44b345:c.instructions+=115;goto B44b345;
case 0x44b349:c.instructions+=114;goto B44b349;
case 0x44b34d:c.instructions+=113;goto B44b34d;
case 0x44b354:c.instructions+=112;goto B44b354;
case 0x44b35b:c.instructions+=111;goto B44b35b;
case 0x44b361:c.instructions+=110;goto B44b361;
case 0x44b365:c.instructions+=109;goto B44b365;
case 0x44b369:c.instructions+=108;goto B44b369;
case 0x44b36f:c.instructions+=107;goto B44b36f;
case 0x44b373:c.instructions+=106;goto B44b373;
case 0x44b377:c.instructions+=105;goto B44b377;
case 0x44b37d:c.instructions+=104;goto B44b37d;
case 0x44b381:c.instructions+=103;goto B44b381;
case 0x44b385:c.instructions+=102;goto B44b385;
case 0x44b389:c.instructions+=101;goto B44b389;
case 0x44b38d:c.instructions+=100;goto B44b38d;
case 0x44b391:c.instructions+=99;goto B44b391;
case 0x44b398:c.instructions+=98;goto B44b398;
case 0x44b39c:c.instructions+=97;goto B44b39c;
case 0x44b3a2:c.instructions+=96;goto B44b3a2;
case 0x44b3a4:c.instructions+=95;goto B44b3a4;
case 0x44b3a8:c.instructions+=94;goto B44b3a8;
case 0x44b3ac:c.instructions+=93;goto B44b3ac;
case 0x44b3b0:c.instructions+=92;goto B44b3b0;
case 0x44b3b2:c.instructions+=91;goto B44b3b2;
case 0x44b3b9:c.instructions+=90;goto B44b3b9;
case 0x44b3bb:c.instructions+=89;goto B44b3bb;
case 0x44b3bd:c.instructions+=88;goto B44b3bd;
case 0x44b3c1:c.instructions+=87;goto B44b3c1;
case 0x44b3c7:c.instructions+=86;goto B44b3c7;
case 0x44b3cb:c.instructions+=85;goto B44b3cb;
case 0x44b3cd:c.instructions+=84;goto B44b3cd;
case 0x44b3d1:c.instructions+=83;goto B44b3d1;
case 0x44b3d5:c.instructions+=82;goto B44b3d5;
case 0x44b3dc:c.instructions+=81;goto B44b3dc;
case 0x44b3e0:c.instructions+=80;goto B44b3e0;
case 0x44b3e6:c.instructions+=79;goto B44b3e6;
case 0x44b3ea:c.instructions+=78;goto B44b3ea;
case 0x44b3ec:c.instructions+=77;goto B44b3ec;
case 0x44b3f0:c.instructions+=76;goto B44b3f0;
case 0x44b3f4:c.instructions+=75;goto B44b3f4;
case 0x44b3fb:c.instructions+=74;goto B44b3fb;
case 0x44b3ff:c.instructions+=73;goto B44b3ff;
case 0x44b405:c.instructions+=72;goto B44b405;
case 0x44b409:c.instructions+=71;goto B44b409;
case 0x44b40d:c.instructions+=70;goto B44b40d;
case 0x44b411:c.instructions+=69;goto B44b411;
case 0x44b415:c.instructions+=68;goto B44b415;
case 0x44b419:c.instructions+=67;goto B44b419;
case 0x44b420:c.instructions+=66;goto B44b420;
case 0x44b424:c.instructions+=65;goto B44b424;
case 0x44b428:c.instructions+=64;goto B44b428;
case 0x44b42c:c.instructions+=63;goto B44b42c;
case 0x44b433:c.instructions+=62;goto B44b433;
case 0x44b437:c.instructions+=61;goto B44b437;
case 0x44b439:c.instructions+=60;goto B44b439;
case 0x44b43d:c.instructions+=59;goto B44b43d;
case 0x44b441:c.instructions+=58;goto B44b441;
case 0x44b448:c.instructions+=57;goto B44b448;
case 0x44b44c:c.instructions+=56;goto B44b44c;
case 0x44b44e:c.instructions+=55;goto B44b44e;
case 0x44b452:c.instructions+=54;goto B44b452;
case 0x44b456:c.instructions+=53;goto B44b456;
case 0x44b45d:c.instructions+=52;goto B44b45d;
case 0x44b45f:c.instructions+=51;goto B44b45f;
case 0x44b461:c.instructions+=50;goto B44b461;
case 0x44b465:c.instructions+=49;goto B44b465;
case 0x44b469:c.instructions+=48;goto B44b469;
case 0x44b46d:c.instructions+=47;goto B44b46d;
case 0x44b471:c.instructions+=46;goto B44b471;
case 0x44b478:c.instructions+=45;goto B44b478;
case 0x44b47c:c.instructions+=44;goto B44b47c;
case 0x44b483:c.instructions+=43;goto B44b483;
case 0x44b487:c.instructions+=42;goto B44b487;
case 0x44b48e:c.instructions+=41;goto B44b48e;
case 0x44b490:c.instructions+=40;goto B44b490;
case 0x44b494:c.instructions+=39;goto B44b494;
case 0x44b49b:c.instructions+=38;goto B44b49b;
case 0x44b49d:c.instructions+=37;goto B44b49d;
case 0x44b4a1:c.instructions+=36;goto B44b4a1;
case 0x44b4a8:c.instructions+=35;goto B44b4a8;
case 0x44b4ac:c.instructions+=34;goto B44b4ac;
case 0x44b4b3:c.instructions+=33;goto B44b4b3;
case 0x44b4b7:c.instructions+=32;goto B44b4b7;
case 0x44b4be:c.instructions+=31;goto B44b4be;
case 0x44b4c0:c.instructions+=30;goto B44b4c0;
case 0x44b4c4:c.instructions+=29;goto B44b4c4;
case 0x44b4cb:c.instructions+=28;goto B44b4cb;
case 0x44b4cd:c.instructions+=27;goto B44b4cd;
case 0x44b4d1:c.instructions+=26;goto B44b4d1;
case 0x44b4d8:c.instructions+=25;goto B44b4d8;
case 0x44b4df:c.instructions+=24;goto B44b4df;
case 0x44b4e3:c.instructions+=23;goto B44b4e3;
case 0x44b4e4:c.instructions+=22;goto B44b4e4;
case 0x44b4eb:c.instructions+=21;goto B44b4eb;
case 0x44b4f2:c.instructions+=20;goto B44b4f2;
case 0x44b4f6:c.instructions+=19;goto B44b4f6;
case 0x44b4f7:c.instructions+=18;goto B44b4f7;
case 0x44b4fe:c.instructions+=17;goto B44b4fe;
case 0x44b500:c.instructions+=16;goto B44b500;
case 0x44b504:c.instructions+=15;goto B44b504;
case 0x44b50b:c.instructions+=14;goto B44b50b;
case 0x44b50d:c.instructions+=13;goto B44b50d;
case 0x44b514:c.instructions+=12;goto B44b514;
case 0x44b51b:c.instructions+=11;goto B44b51b;
case 0x44b51f:c.instructions+=10;goto B44b51f;
case 0x44b526:c.instructions+=9;goto B44b526;
case 0x44b52a:c.instructions+=8;goto B44b52a;
case 0x44b531:c.instructions+=7;goto B44b531;
case 0x44b533:c.instructions+=6;goto B44b533;
case 0x44b537:c.instructions+=5;goto B44b537;
case 0x44b53e:c.instructions+=4;goto B44b53e;
case 0x44b540:c.instructions+=3;goto B44b540;
case 0x44b547:c.instructions+=2;goto B44b547;
case 0x44b54e:c.instructions+=1;goto B44b54e;
case 0x44b553:goto L44b553;
case 0x44b55a:c.instructions+=13;goto B44b55a;
case 0x44b55d:c.instructions+=12;goto B44b55d;
case 0x44b563:c.instructions+=11;goto B44b563;
case 0x44b56a:c.instructions+=10;goto B44b56a;
case 0x44b571:c.instructions+=9;goto B44b571;
case 0x44b577:c.instructions+=8;goto B44b577;
case 0x44b57e:c.instructions+=7;goto B44b57e;
case 0x44b584:c.instructions+=6;goto B44b584;
case 0x44b58b:c.instructions+=5;goto B44b58b;
case 0x44b592:c.instructions+=4;goto B44b592;
case 0x44b599:c.instructions+=3;goto B44b599;
case 0x44b59f:c.instructions+=2;goto B44b59f;
case 0x44b5a6:c.instructions+=1;goto B44b5a6;
case 0x44b5ab:goto L44b5ab;
case 0x44b5b1:c.instructions+=17;goto B44b5b1;
case 0x44b5bc:c.instructions+=16;goto B44b5bc;
case 0x44b5be:c.instructions+=15;goto B44b5be;
case 0x44b5c9:c.instructions+=14;goto B44b5c9;
case 0x44b5d0:c.instructions+=13;goto B44b5d0;
case 0x44b5db:c.instructions+=12;goto B44b5db;
case 0x44b5e6:c.instructions+=11;goto B44b5e6;
case 0x44b5f1:c.instructions+=10;goto B44b5f1;
case 0x44b5fc:c.instructions+=9;goto B44b5fc;
case 0x44b607:c.instructions+=8;goto B44b607;
case 0x44b612:c.instructions+=7;goto B44b612;
case 0x44b61d:c.instructions+=6;goto B44b61d;
case 0x44b628:c.instructions+=5;goto B44b628;
case 0x44b633:c.instructions+=4;goto B44b633;
case 0x44b63e:c.instructions+=3;goto B44b63e;
case 0x44b649:c.instructions+=2;goto B44b649;
case 0x44b654:c.instructions+=1;goto B44b654;
case 0x44b65f:goto L44b65f;
case 0x44b666:c.instructions+=1;goto B44b666;
case 0x44b668:goto L44b668;
case 0x44b66b:c.instructions+=2;goto B44b66b;
case 0x44b66e:c.instructions+=1;goto B44b66e;
case 0x44b671:goto L44b671;
case 0x44b674:c.instructions+=5;goto B44b674;
case 0x44b677:c.instructions+=4;goto B44b677;
case 0x44b67a:c.instructions+=3;goto B44b67a;
case 0x44b67c:c.instructions+=2;goto B44b67c;
case 0x44b67f:c.instructions+=1;goto B44b67f;
case 0x44b681:goto L44b681;
case 0x44b684:c.instructions+=1;goto B44b684;
case 0x44b687:goto L44b687;
case 0x44b68a:c.instructions+=4;goto B44b68a;
case 0x44b68d:c.instructions+=3;goto B44b68d;
case 0x44b68f:c.instructions+=2;goto B44b68f;
case 0x44b692:c.instructions+=1;goto B44b692;
case 0x44b694:goto L44b694;
case 0x44b697:c.instructions+=1;goto B44b697;
case 0x44b69a:goto L44b69a;
case 0x44b69d:c.instructions+=4;goto B44b69d;
case 0x44b6a0:c.instructions+=3;goto B44b6a0;
case 0x44b6a2:c.instructions+=2;goto B44b6a2;
case 0x44b6a5:c.instructions+=1;goto B44b6a5;
case 0x44b6a7:goto L44b6a7;
case 0x44b6aa:c.instructions+=1;goto B44b6aa;
case 0x44b6ad:goto L44b6ad;
case 0x44b6b0:c.instructions+=4;goto B44b6b0;
case 0x44b6b3:c.instructions+=3;goto B44b6b3;
case 0x44b6b5:c.instructions+=2;goto B44b6b5;
case 0x44b6b8:c.instructions+=1;goto B44b6b8;
case 0x44b6ba:goto L44b6ba;
case 0x44b6bd:c.instructions+=1;goto B44b6bd;
case 0x44b6c0:goto L44b6c0;
case 0x44b6c3:c.instructions+=4;goto B44b6c3;
case 0x44b6c6:c.instructions+=3;goto B44b6c6;
case 0x44b6c8:c.instructions+=2;goto B44b6c8;
case 0x44b6cb:c.instructions+=1;goto B44b6cb;
case 0x44b6cd:goto L44b6cd;
case 0x44b6cf:c.instructions+=3;goto B44b6cf;
case 0x44b6d1:c.instructions+=2;goto B44b6d1;
case 0x44b6d3:c.instructions+=1;goto B44b6d3;
case 0x44b6d5:goto L44b6d5;
case 0x44b6d8:goto L44b6d8;
case 0x44b6db:c.instructions+=1;goto B44b6db;
case 0x44b6dd:goto L44b6dd;
case 0x44b6df:c.instructions+=3;goto B44b6df;
case 0x44b6e1:c.instructions+=2;goto B44b6e1;
case 0x44b6e3:c.instructions+=1;goto B44b6e3;
case 0x44b6e5:goto L44b6e5;
case 0x44b6e7:c.instructions+=1;goto B44b6e7;
case 0x44b6e9:goto L44b6e9;
case 0x44b6eb:goto L44b6eb;
case 0x44b6ee:goto L44b6ee;
case 0x44b6f1:c.instructions+=3;goto B44b6f1;
case 0x44b6f4:c.instructions+=2;goto B44b6f4;
case 0x44b6f6:c.instructions+=1;goto B44b6f6;
case 0x44b6f8:goto L44b6f8;
case 0x44b6fa:c.instructions+=3;goto B44b6fa;
case 0x44b6fc:c.instructions+=2;goto B44b6fc;
case 0x44b6fe:c.instructions+=1;goto B44b6fe;
case 0x44b700:goto L44b700;
case 0x44b703:goto L44b703;
case 0x44b706:c.instructions+=1;goto B44b706;
case 0x44b708:goto L44b708;
case 0x44b70a:c.instructions+=3;goto B44b70a;
case 0x44b70c:c.instructions+=2;goto B44b70c;
case 0x44b70e:c.instructions+=1;goto B44b70e;
case 0x44b710:goto L44b710;
case 0x44b712:c.instructions+=1;goto B44b712;
case 0x44b714:goto L44b714;
case 0x44b716:goto L44b716;
case 0x44b719:goto L44b719;
case 0x44b71d:c.instructions+=5;goto B44b71d;
case 0x44b721:c.instructions+=4;goto B44b721;
case 0x44b724:c.instructions+=3;goto B44b724;
case 0x44b726:c.instructions+=2;goto B44b726;
case 0x44b72a:c.instructions+=1;goto B44b72a;
case 0x44b72c:goto L44b72c;
case 0x44b730:c.instructions+=4;goto B44b730;
case 0x44b733:c.instructions+=3;goto B44b733;
case 0x44b736:c.instructions+=2;goto B44b736;
case 0x44b739:c.instructions+=1;goto B44b739;
case 0x44b73b:goto L44b73b;
case 0x44b73d:c.instructions+=3;goto B44b73d;
case 0x44b73f:c.instructions+=2;goto B44b73f;
case 0x44b742:c.instructions+=1;goto B44b742;
case 0x44b744:goto L44b744;
case 0x44b747:c.instructions+=1;goto B44b747;
case 0x44b749:goto L44b749;
case 0x44b74b:c.instructions+=3;goto B44b74b;
case 0x44b74d:c.instructions+=2;goto B44b74d;
case 0x44b750:c.instructions+=1;goto B44b750;
case 0x44b752:goto L44b752;
case 0x44b755:goto L44b755;
case 0x44b759:goto L44b759;
case 0x44b75d:c.instructions+=6;goto B44b75d;
case 0x44b761:c.instructions+=5;goto B44b761;
case 0x44b767:c.instructions+=4;goto B44b767;
case 0x44b769:c.instructions+=3;goto B44b769;
case 0x44b76d:c.instructions+=2;goto B44b76d;
case 0x44b774:c.instructions+=1;goto B44b774;
case 0x44b776:goto L44b776;
case 0x44b778:c.instructions+=6;goto B44b778;
case 0x44b77f:c.instructions+=5;goto B44b77f;
case 0x44b786:c.instructions+=4;goto B44b786;
case 0x44b787:c.instructions+=3;goto B44b787;
case 0x44b788:c.instructions+=2;goto B44b788;
case 0x44b789:c.instructions+=1;goto B44b789;
case 0x44b78e:goto L44b78e;
case 0x44b790:c.instructions+=7;goto B44b790;
case 0x44b797:c.instructions+=6;goto B44b797;
case 0x44b79e:c.instructions+=5;goto B44b79e;
case 0x44b7a5:c.instructions+=4;goto B44b7a5;
case 0x44b7a6:c.instructions+=3;goto B44b7a6;
case 0x44b7a7:c.instructions+=2;goto B44b7a7;
case 0x44b7a8:c.instructions+=1;goto B44b7a8;
case 0x44b7ad:goto L44b7ad;
case 0x44b7b3:c.instructions+=1;goto B44b7b3;
case 0x44b7b5:goto L44b7b5;
case 0x44b7b6:c.instructions+=4;goto B44b7b6;
case 0x44b7b7:c.instructions+=3;goto B44b7b7;
case 0x44b7be:c.instructions+=2;goto B44b7be;
case 0x44b7bf:c.instructions+=1;goto B44b7bf;
case 0x44b7c4:goto L44b7c4;
case 0x44b7c6:c.instructions+=7;goto B44b7c6;
case 0x44b7ca:c.instructions+=6;goto B44b7ca;
case 0x44b7d1:c.instructions+=5;goto B44b7d1;
case 0x44b7d8:c.instructions+=4;goto B44b7d8;
case 0x44b7d9:c.instructions+=3;goto B44b7d9;
case 0x44b7da:c.instructions+=2;goto B44b7da;
case 0x44b7db:c.instructions+=1;goto B44b7db;
case 0x44b7e0:goto L44b7e0;
case 0x44b7e3:goto L44b7e3;
case 0x44b7ea:c.instructions+=9;goto B44b7ea;
case 0x44b7eb:c.instructions+=8;goto B44b7eb;
case 0x44b7f2:c.instructions+=7;goto B44b7f2;
case 0x44b7f9:c.instructions+=6;goto B44b7f9;
case 0x44b800:c.instructions+=5;goto B44b800;
case 0x44b801:c.instructions+=4;goto B44b801;
case 0x44b802:c.instructions+=3;goto B44b802;
case 0x44b80d:c.instructions+=2;goto B44b80d;
case 0x44b818:c.instructions+=1;goto B44b818;
case 0x44b81d:goto L44b81d;
case 0x44b820:c.instructions+=6;goto B44b820;
case 0x44b825:c.instructions+=5;goto B44b825;
case 0x44b82c:c.instructions+=4;goto B44b82c;
case 0x44b82d:c.instructions+=3;goto B44b82d;
case 0x44b834:c.instructions+=2;goto B44b834;
case 0x44b835:c.instructions+=1;goto B44b835;
case 0x44b83a:goto L44b83a;
case 0x44b83f:c.instructions+=5;goto B44b83f;
case 0x44b846:c.instructions+=4;goto B44b846;
case 0x44b847:c.instructions+=3;goto B44b847;
case 0x44b84e:c.instructions+=2;goto B44b84e;
case 0x44b84f:c.instructions+=1;goto B44b84f;
case 0x44b854:goto L44b854;
case 0x44b859:c.instructions+=3;goto B44b859;
case 0x44b85c:c.instructions+=2;goto B44b85c;
case 0x44b85e:c.instructions+=1;goto B44b85e;
case 0x44b860:goto L44b860;
case 0x44b863:c.instructions+=5;goto B44b863;
case 0x44b86a:c.instructions+=4;goto B44b86a;
case 0x44b871:c.instructions+=3;goto B44b871;
case 0x44b876:c.instructions+=2;goto B44b876;
case 0x44b878:c.instructions+=1;goto B44b878;
case 0x44b87a:goto L44b87a;
case 0x44b87d:c.instructions+=5;goto B44b87d;
case 0x44b880:c.instructions+=4;goto B44b880;
case 0x44b886:c.instructions+=3;goto B44b886;
case 0x44b88b:c.instructions+=2;goto B44b88b;
case 0x44b88d:c.instructions+=1;goto B44b88d;
case 0x44b88f:goto L44b88f;
case 0x44b892:c.instructions+=5;goto B44b892;
case 0x44b895:c.instructions+=4;goto B44b895;
case 0x44b89b:c.instructions+=3;goto B44b89b;
case 0x44b8a0:c.instructions+=2;goto B44b8a0;
case 0x44b8a2:c.instructions+=1;goto B44b8a2;
case 0x44b8a4:goto L44b8a4;
case 0x44b8a7:c.instructions+=1;goto B44b8a7;
case 0x44b8b1:goto L44b8b1;
case 0x44b8b7:c.instructions+=5;goto B44b8b7;
case 0x44b8b8:c.instructions+=4;goto B44b8b8;
case 0x44b8bb:c.instructions+=3;goto B44b8bb;
case 0x44b8c2:c.instructions+=2;goto B44b8c2;
case 0x44b8c3:c.instructions+=1;goto B44b8c3;
case 0x44b8c8:goto L44b8c8;
case 0x44b8c9:c.instructions+=4;goto B44b8c9;
case 0x44b8ca:c.instructions+=3;goto B44b8ca;
case 0x44b8cc:c.instructions+=2;goto B44b8cc;
case 0x44b8cd:c.instructions+=1;goto B44b8cd;
case 0x44b8d0:goto L44b8d0;
case 0x44b8d4:c.instructions+=11;goto B44b8d4;
case 0x44b8d7:c.instructions+=10;goto B44b8d7;
case 0x44b8d9:c.instructions+=9;goto B44b8d9;
case 0x44b8db:c.instructions+=8;goto B44b8db;
case 0x44b8dd:c.instructions+=7;goto B44b8dd;
case 0x44b8de:c.instructions+=6;goto B44b8de;
case 0x44b8e2:c.instructions+=5;goto B44b8e2;
case 0x44b8e7:c.instructions+=4;goto B44b8e7;
case 0x44b8ea:c.instructions+=3;goto B44b8ea;
case 0x44b8ef:c.instructions+=2;goto B44b8ef;
case 0x44b8f2:c.instructions+=1;goto B44b8f2;
case 0x44b8f8:goto L44b8f8;
case 0x44b8ff:goto L44b8ff;
case 0x44b903:c.instructions+=2;goto B44b903;
case 0x44b905:c.instructions+=1;goto B44b905;
case 0x44b907:goto L44b907;
case 0x44b909:c.instructions+=3;goto B44b909;
case 0x44b90c:c.instructions+=2;goto B44b90c;
case 0x44b90d:c.instructions+=1;goto B44b90d;
case 0x44b90e:goto L44b90e;
case 0x44b915:c.instructions+=2;goto B44b915;
case 0x44b916:c.instructions+=1;goto B44b916;
case 0x44b917:goto L44b917;
case 0x44b91b:c.instructions+=6;goto B44b91b;
case 0x44b91d:c.instructions+=5;goto B44b91d;
case 0x44b91e:c.instructions+=4;goto B44b91e;
case 0x44b920:c.instructions+=3;goto B44b920;
case 0x44b922:c.instructions+=2;goto B44b922;
case 0x44b925:c.instructions+=1;goto B44b925;
case 0x44b926:goto L44b926;
case 0x44b92a:c.instructions+=2;goto B44b92a;
case 0x44b92c:c.instructions+=1;goto B44b92c;
case 0x44b92e:goto L44b92e;
case 0x44b930:c.instructions+=3;goto B44b930;
case 0x44b933:c.instructions+=2;goto B44b933;
case 0x44b934:c.instructions+=1;goto B44b934;
case 0x44b935:goto L44b935;
case 0x44b93c:c.instructions+=2;goto B44b93c;
case 0x44b93d:c.instructions+=1;goto B44b93d;
case 0x44b93e:goto L44b93e;
case 0x44b942:c.instructions+=6;goto B44b942;
case 0x44b944:c.instructions+=5;goto B44b944;
case 0x44b945:c.instructions+=4;goto B44b945;
case 0x44b947:c.instructions+=3;goto B44b947;
case 0x44b949:c.instructions+=2;goto B44b949;
case 0x44b94c:c.instructions+=1;goto B44b94c;
case 0x44b94d:goto L44b94d;
case 0x44b951:c.instructions+=2;goto B44b951;
case 0x44b953:c.instructions+=1;goto B44b953;
case 0x44b955:goto L44b955;
case 0x44b95c:c.instructions+=2;goto B44b95c;
case 0x44b95d:c.instructions+=1;goto B44b95d;
case 0x44b95e:goto L44b95e;
case 0x44b965:c.instructions+=2;goto B44b965;
case 0x44b966:c.instructions+=1;goto B44b966;
case 0x44b967:goto L44b967;
case 0x44b96b:c.instructions+=2;goto B44b96b;
case 0x44b96d:c.instructions+=1;goto B44b96d;
case 0x44b96f:goto L44b96f;
case 0x44b976:c.instructions+=2;goto B44b976;
case 0x44b977:c.instructions+=1;goto B44b977;
case 0x44b978:goto L44b978;
case 0x44b97a:c.instructions+=1;goto B44b97a;
case 0x44b97c:goto L44b97c;
case 0x44b980:c.instructions+=2;goto B44b980;
case 0x44b982:c.instructions+=1;goto B44b982;
case 0x44b984:goto L44b984;
case 0x44b98a:c.instructions+=4;goto B44b98a;
case 0x44b98c:c.instructions+=3;goto B44b98c;
case 0x44b992:c.instructions+=2;goto B44b992;
case 0x44b994:c.instructions+=1;goto B44b994;
case 0x44b996:goto L44b996;
case 0x44b998:goto L44b998;
case 0x44b99e:c.instructions+=2;goto B44b99e;
case 0x44b99f:c.instructions+=1;goto B44b99f;
case 0x44b9a0:goto L44b9a0;
case 0x44b9a2:c.instructions+=1;goto B44b9a2;
case 0x44b9a4:goto L44b9a4;
case 0x44b9a8:c.instructions+=2;goto B44b9a8;
case 0x44b9aa:c.instructions+=1;goto B44b9aa;
case 0x44b9ac:goto L44b9ac;
case 0x44b9b2:c.instructions+=4;goto B44b9b2;
case 0x44b9b5:c.instructions+=3;goto B44b9b5;
case 0x44b9bb:c.instructions+=2;goto B44b9bb;
case 0x44b9bd:c.instructions+=1;goto B44b9bd;
case 0x44b9bf:goto L44b9bf;
case 0x44b9c2:goto L44b9c2;
case 0x44b9c8:c.instructions+=2;goto B44b9c8;
case 0x44b9c9:c.instructions+=1;goto B44b9c9;
case 0x44b9ca:goto L44b9ca;
case 0x44b9ce:c.instructions+=2;goto B44b9ce;
case 0x44b9d0:c.instructions+=1;goto B44b9d0;
case 0x44b9d2:goto L44b9d2;
case 0x44b9d8:c.instructions+=4;goto B44b9d8;
case 0x44b9da:c.instructions+=3;goto B44b9da;
case 0x44b9dc:c.instructions+=2;goto B44b9dc;
case 0x44b9df:c.instructions+=1;goto B44b9df;
case 0x44b9e5:goto L44b9e5;
case 0x44b9e6:c.instructions+=1;goto B44b9e6;
case 0x44ba10:goto L44ba10;
case 0x44ba14:c.instructions+=5;goto B44ba14;
case 0x44ba15:c.instructions+=4;goto B44ba15;
case 0x44ba17:c.instructions+=3;goto B44ba17;
case 0x44ba18:c.instructions+=2;goto B44ba18;
case 0x44ba1a:c.instructions+=1;goto B44ba1a;
case 0x44ba1f:goto L44ba1f;
case 0x44ba23:c.instructions+=5;goto B44ba23;
case 0x44ba29:c.instructions+=4;goto B44ba29;
case 0x44ba2c:c.instructions+=3;goto B44ba2c;
case 0x44ba32:c.instructions+=2;goto B44ba32;
case 0x44ba34:c.instructions+=1;goto B44ba34;
case 0x44ba36:goto L44ba36;
case 0x44ba39:c.instructions+=5;goto B44ba39;
case 0x44ba3f:c.instructions+=4;goto B44ba3f;
case 0x44ba44:c.instructions+=3;goto B44ba44;
case 0x44ba46:c.instructions+=2;goto B44ba46;
case 0x44ba48:c.instructions+=1;goto B44ba48;
case 0x44ba4a:goto L44ba4a;
case 0x44ba4d:c.instructions+=3;goto B44ba4d;
case 0x44ba57:c.instructions+=2;goto B44ba57;
case 0x44ba58:c.instructions+=1;goto B44ba58;
case 0x44ba5b:goto L44ba5b;
case 0x44ba5d:goto L44ba5d;
case 0x44ba5e:c.instructions+=1;goto B44ba5e;
case 0x44ba70:goto L44ba70;
case 0x44ba73:c.instructions+=1;goto B44ba73;
case 0x44ba80:goto L44ba80;
case 0x44ba81:c.instructions+=20;goto B44ba81;
case 0x44ba83:c.instructions+=19;goto B44ba83;
case 0x44ba86:c.instructions+=18;goto B44ba86;
case 0x44ba8c:c.instructions+=17;goto B44ba8c;
case 0x44ba8d:c.instructions+=16;goto B44ba8d;
case 0x44ba8f:c.instructions+=15;goto B44ba8f;
case 0x44ba92:c.instructions+=14;goto B44ba92;
case 0x44ba95:c.instructions+=13;goto B44ba95;
case 0x44ba9a:c.instructions+=12;goto B44ba9a;
case 0x44ba9c:c.instructions+=11;goto B44ba9c;
case 0x44ba9d:c.instructions+=10;goto B44ba9d;
case 0x44baa4:c.instructions+=9;goto B44baa4;
case 0x44baa7:c.instructions+=8;goto B44baa7;
case 0x44baa9:c.instructions+=7;goto B44baa9;
case 0x44bab0:c.instructions+=6;goto B44bab0;
case 0x44bab3:c.instructions+=5;goto B44bab3;
case 0x44bab7:c.instructions+=4;goto B44bab7;
case 0x44bab9:c.instructions+=3;goto B44bab9;
case 0x44baba:c.instructions+=2;goto B44baba;
case 0x44bac1:c.instructions+=1;goto B44bac1;
case 0x44bac6:goto L44bac6;
case 0x44bacb:c.instructions+=5;goto B44bacb;
case 0x44bacf:c.instructions+=4;goto B44bacf;
case 0x44bad0:c.instructions+=3;goto B44bad0;
case 0x44bad4:c.instructions+=2;goto B44bad4;
case 0x44bad5:c.instructions+=1;goto B44bad5;
case 0x44bada:goto L44bada;
case 0x44badf:c.instructions+=5;goto B44badf;
case 0x44bae3:c.instructions+=4;goto B44bae3;
case 0x44bae4:c.instructions+=3;goto B44bae4;
case 0x44bae8:c.instructions+=2;goto B44bae8;
case 0x44bae9:c.instructions+=1;goto B44bae9;
case 0x44baee:goto L44baee;
case 0x44baf0:c.instructions+=5;goto B44baf0;
case 0x44baf4:c.instructions+=4;goto B44baf4;
case 0x44baf5:c.instructions+=3;goto B44baf5;
case 0x44baf9:c.instructions+=2;goto B44baf9;
case 0x44bafa:c.instructions+=1;goto B44bafa;
case 0x44baff:goto L44baff;
case 0x44bb03:c.instructions+=148;goto B44bb03;
case 0x44bb09:c.instructions+=147;goto B44bb09;
case 0x44bb0d:c.instructions+=146;goto B44bb0d;
case 0x44bb13:c.instructions+=145;goto B44bb13;
case 0x44bb15:c.instructions+=144;goto B44bb15;
case 0x44bb19:c.instructions+=143;goto B44bb19;
case 0x44bb1f:c.instructions+=142;goto B44bb1f;
case 0x44bb26:c.instructions+=141;goto B44bb26;
case 0x44bb2a:c.instructions+=140;goto B44bb2a;
case 0x44bb31:c.instructions+=139;goto B44bb31;
case 0x44bb33:c.instructions+=138;goto B44bb33;
case 0x44bb3a:c.instructions+=137;goto B44bb3a;
case 0x44bb3e:c.instructions+=136;goto B44bb3e;
case 0x44bb44:c.instructions+=135;goto B44bb44;
case 0x44bb4b:c.instructions+=134;goto B44bb4b;
case 0x44bb4f:c.instructions+=133;goto B44bb4f;
case 0x44bb55:c.instructions+=132;goto B44bb55;
case 0x44bb5c:c.instructions+=131;goto B44bb5c;
case 0x44bb60:c.instructions+=130;goto B44bb60;
case 0x44bb66:c.instructions+=129;goto B44bb66;
case 0x44bb6d:c.instructions+=128;goto B44bb6d;
case 0x44bb71:c.instructions+=127;goto B44bb71;
case 0x44bb78:c.instructions+=126;goto B44bb78;
case 0x44bb7a:c.instructions+=125;goto B44bb7a;
case 0x44bb81:c.instructions+=124;goto B44bb81;
case 0x44bb85:c.instructions+=123;goto B44bb85;
case 0x44bb8b:c.instructions+=122;goto B44bb8b;
case 0x44bb92:c.instructions+=121;goto B44bb92;
case 0x44bb96:c.instructions+=120;goto B44bb96;
case 0x44bb9c:c.instructions+=119;goto B44bb9c;
case 0x44bba3:c.instructions+=118;goto B44bba3;
case 0x44bba7:c.instructions+=117;goto B44bba7;
case 0x44bbab:c.instructions+=116;goto B44bbab;
case 0x44bbb1:c.instructions+=115;goto B44bbb1;
case 0x44bbb8:c.instructions+=114;goto B44bbb8;
case 0x44bbbc:c.instructions+=113;goto B44bbbc;
case 0x44bbc3:c.instructions+=112;goto B44bbc3;
case 0x44bbc7:c.instructions+=111;goto B44bbc7;
case 0x44bbce:c.instructions+=110;goto B44bbce;
case 0x44bbd2:c.instructions+=109;goto B44bbd2;
case 0x44bbd8:c.instructions+=108;goto B44bbd8;
case 0x44bbdf:c.instructions+=107;goto B44bbdf;
case 0x44bbe3:c.instructions+=106;goto B44bbe3;
case 0x44bbe9:c.instructions+=105;goto B44bbe9;
case 0x44bbf0:c.instructions+=104;goto B44bbf0;
case 0x44bbf7:c.instructions+=103;goto B44bbf7;
case 0x44bbfb:c.instructions+=102;goto B44bbfb;
case 0x44bc01:c.instructions+=101;goto B44bc01;
case 0x44bc08:c.instructions+=100;goto B44bc08;
case 0x44bc0c:c.instructions+=99;goto B44bc0c;
case 0x44bc13:c.instructions+=98;goto B44bc13;
case 0x44bc1a:c.instructions+=97;goto B44bc1a;
case 0x44bc21:c.instructions+=96;goto B44bc21;
case 0x44bc25:c.instructions+=95;goto B44bc25;
case 0x44bc2b:c.instructions+=94;goto B44bc2b;
case 0x44bc32:c.instructions+=93;goto B44bc32;
case 0x44bc36:c.instructions+=92;goto B44bc36;
case 0x44bc38:c.instructions+=91;goto B44bc38;
case 0x44bc3f:c.instructions+=90;goto B44bc3f;
case 0x44bc46:c.instructions+=89;goto B44bc46;
case 0x44bc4a:c.instructions+=88;goto B44bc4a;
case 0x44bc50:c.instructions+=87;goto B44bc50;
case 0x44bc57:c.instructions+=86;goto B44bc57;
case 0x44bc5b:c.instructions+=85;goto B44bc5b;
case 0x44bc5d:c.instructions+=84;goto B44bc5d;
case 0x44bc64:c.instructions+=83;goto B44bc64;
case 0x44bc6b:c.instructions+=82;goto B44bc6b;
case 0x44bc6d:c.instructions+=81;goto B44bc6d;
case 0x44bc6f:c.instructions+=80;goto B44bc6f;
case 0x44bc73:c.instructions+=79;goto B44bc73;
case 0x44bc79:c.instructions+=78;goto B44bc79;
case 0x44bc7d:c.instructions+=77;goto B44bc7d;
case 0x44bc81:c.instructions+=76;goto B44bc81;
case 0x44bc83:c.instructions+=75;goto B44bc83;
case 0x44bc8a:c.instructions+=74;goto B44bc8a;
case 0x44bc8e:c.instructions+=73;goto B44bc8e;
case 0x44bc94:c.instructions+=72;goto B44bc94;
case 0x44bc98:c.instructions+=71;goto B44bc98;
case 0x44bc9c:c.instructions+=70;goto B44bc9c;
case 0x44bca0:c.instructions+=69;goto B44bca0;
case 0x44bca7:c.instructions+=68;goto B44bca7;
case 0x44bcae:c.instructions+=67;goto B44bcae;
case 0x44bcb2:c.instructions+=66;goto B44bcb2;
case 0x44bcb9:c.instructions+=65;goto B44bcb9;
case 0x44bcbb:c.instructions+=64;goto B44bcbb;
case 0x44bcc2:c.instructions+=63;goto B44bcc2;
case 0x44bcc9:c.instructions+=62;goto B44bcc9;
case 0x44bccd:c.instructions+=61;goto B44bccd;
case 0x44bcd4:c.instructions+=60;goto B44bcd4;
case 0x44bcdb:c.instructions+=59;goto B44bcdb;
case 0x44bce2:c.instructions+=58;goto B44bce2;
case 0x44bce9:c.instructions+=57;goto B44bce9;
case 0x44bced:c.instructions+=56;goto B44bced;
case 0x44bcf4:c.instructions+=55;goto B44bcf4;
case 0x44bcfb:c.instructions+=54;goto B44bcfb;
case 0x44bcfd:c.instructions+=53;goto B44bcfd;
case 0x44bd04:c.instructions+=52;goto B44bd04;
case 0x44bd06:c.instructions+=51;goto B44bd06;
case 0x44bd08:c.instructions+=50;goto B44bd08;
case 0x44bd0c:c.instructions+=49;goto B44bd0c;
case 0x44bd10:c.instructions+=48;goto B44bd10;
case 0x44bd17:c.instructions+=47;goto B44bd17;
case 0x44bd1e:c.instructions+=46;goto B44bd1e;
case 0x44bd25:c.instructions+=45;goto B44bd25;
case 0x44bd29:c.instructions+=44;goto B44bd29;
case 0x44bd30:c.instructions+=43;goto B44bd30;
case 0x44bd34:c.instructions+=42;goto B44bd34;
case 0x44bd3b:c.instructions+=41;goto B44bd3b;
case 0x44bd3d:c.instructions+=40;goto B44bd3d;
case 0x44bd41:c.instructions+=39;goto B44bd41;
case 0x44bd48:c.instructions+=38;goto B44bd48;
case 0x44bd4f:c.instructions+=37;goto B44bd4f;
case 0x44bd50:c.instructions+=36;goto B44bd50;
case 0x44bd57:c.instructions+=35;goto B44bd57;
case 0x44bd58:c.instructions+=34;goto B44bd58;
case 0x44bd5a:c.instructions+=33;goto B44bd5a;
case 0x44bd5e:c.instructions+=32;goto B44bd5e;
case 0x44bd65:c.instructions+=31;goto B44bd65;
case 0x44bd69:c.instructions+=30;goto B44bd69;
case 0x44bd70:c.instructions+=29;goto B44bd70;
case 0x44bd74:c.instructions+=28;goto B44bd74;
case 0x44bd7b:c.instructions+=27;goto B44bd7b;
case 0x44bd7d:c.instructions+=26;goto B44bd7d;
case 0x44bd81:c.instructions+=25;goto B44bd81;
case 0x44bd88:c.instructions+=24;goto B44bd88;
case 0x44bd8a:c.instructions+=23;goto B44bd8a;
case 0x44bd8e:c.instructions+=22;goto B44bd8e;
case 0x44bd95:c.instructions+=21;goto B44bd95;
case 0x44bd99:c.instructions+=20;goto B44bd99;
case 0x44bda0:c.instructions+=19;goto B44bda0;
case 0x44bda4:c.instructions+=18;goto B44bda4;
case 0x44bdab:c.instructions+=17;goto B44bdab;
case 0x44bdad:c.instructions+=16;goto B44bdad;
case 0x44bdb1:c.instructions+=15;goto B44bdb1;
case 0x44bdb8:c.instructions+=14;goto B44bdb8;
case 0x44bdba:c.instructions+=13;goto B44bdba;
case 0x44bdbe:c.instructions+=12;goto B44bdbe;
case 0x44bdc5:c.instructions+=11;goto B44bdc5;
case 0x44bdc9:c.instructions+=10;goto B44bdc9;
case 0x44bdd0:c.instructions+=9;goto B44bdd0;
case 0x44bdd4:c.instructions+=8;goto B44bdd4;
case 0x44bddb:c.instructions+=7;goto B44bddb;
case 0x44bddd:c.instructions+=6;goto B44bddd;
case 0x44bde1:c.instructions+=5;goto B44bde1;
case 0x44bde8:c.instructions+=4;goto B44bde8;
case 0x44bdea:c.instructions+=3;goto B44bdea;
case 0x44bdf1:c.instructions+=2;goto B44bdf1;
case 0x44bdf8:c.instructions+=1;goto B44bdf8;
case 0x44bdfd:goto L44bdfd;
case 0x44be03:c.instructions+=12;goto B44be03;
case 0x44be08:c.instructions+=11;goto B44be08;
case 0x44be0f:c.instructions+=10;goto B44be0f;
case 0x44be12:c.instructions+=9;goto B44be12;
case 0x44be14:c.instructions+=8;goto B44be14;
case 0x44be1b:c.instructions+=7;goto B44be1b;
case 0x44be21:c.instructions+=6;goto B44be21;
case 0x44be28:c.instructions+=5;goto B44be28;
case 0x44be2f:c.instructions+=4;goto B44be2f;
case 0x44be35:c.instructions+=3;goto B44be35;
case 0x44be3c:c.instructions+=2;goto B44be3c;
case 0x44be43:c.instructions+=1;goto B44be43;
case 0x44be45:goto L44be45;
case 0x44be48:c.instructions+=1;goto B44be48;
case 0x44be51:goto L44be51;
case 0x44be54:c.instructions+=10;goto B44be54;
case 0x44be5a:c.instructions+=9;goto B44be5a;
case 0x44be60:c.instructions+=8;goto B44be60;
case 0x44be63:c.instructions+=7;goto B44be63;
case 0x44be69:c.instructions+=6;goto B44be69;
case 0x44be70:c.instructions+=5;goto B44be70;
case 0x44be76:c.instructions+=4;goto B44be76;
case 0x44be79:c.instructions+=3;goto B44be79;
case 0x44be7a:c.instructions+=2;goto B44be7a;
case 0x44be7b:c.instructions+=1;goto B44be7b;
case 0x44be80:goto L44be80;
case 0x44be86:c.instructions+=6;goto B44be86;
case 0x44be89:c.instructions+=5;goto B44be89;
case 0x44be8a:c.instructions+=4;goto B44be8a;
case 0x44be8d:c.instructions+=3;goto B44be8d;
case 0x44be94:c.instructions+=2;goto B44be94;
case 0x44be95:c.instructions+=1;goto B44be95;
case 0x44be9a:goto L44be9a;
case 0x44be9b:c.instructions+=3;goto B44be9b;
case 0x44be9d:c.instructions+=2;goto B44be9d;
case 0x44be9e:c.instructions+=1;goto B44be9e;
case 0x44bea0:goto L44bea0;
case 0x44bea1:c.instructions+=16;goto B44bea1;
case 0x44bea3:c.instructions+=15;goto B44bea3;
case 0x44bea5:c.instructions+=14;goto B44bea5;
case 0x44beaa:c.instructions+=13;goto B44beaa;
case 0x44beb0:c.instructions+=12;goto B44beb0;
case 0x44beb1:c.instructions+=11;goto B44beb1;
case 0x44beb8:c.instructions+=10;goto B44beb8;
case 0x44beb9:c.instructions+=9;goto B44beb9;
case 0x44bebc:c.instructions+=8;goto B44bebc;
case 0x44bebd:c.instructions+=7;goto B44bebd;
case 0x44bebe:c.instructions+=6;goto B44bebe;
case 0x44bebf:c.instructions+=5;goto B44bebf;
case 0x44bec1:c.instructions+=4;goto B44bec1;
case 0x44bec3:c.instructions+=3;goto B44bec3;
case 0x44bec4:c.instructions+=2;goto B44bec4;
case 0x44bec7:c.instructions+=1;goto B44bec7;
case 0x44becc:goto L44becc;
case 0x44becf:c.instructions+=3;goto B44becf;
case 0x44bed5:c.instructions+=2;goto B44bed5;
case 0x44bed8:c.instructions+=1;goto B44bed8;
case 0x44bedd:goto L44bedd;
case 0x44bedf:goto L44bedf;
case 0x44bee2:c.instructions+=4;goto B44bee2;
case 0x44bee3:c.instructions+=3;goto B44bee3;
case 0x44bee9:c.instructions+=2;goto B44bee9;
case 0x44bef0:c.instructions+=1;goto B44bef0;
case 0x44bef5:goto L44bef5;
case 0x44befa:c.instructions+=5;goto B44befa;
case 0x44befc:c.instructions+=4;goto B44befc;
case 0x44befe:c.instructions+=3;goto B44befe;
case 0x44bf04:c.instructions+=2;goto B44bf04;
case 0x44bf05:c.instructions+=1;goto B44bf05;
case 0x44bf0a:goto L44bf0a;
case 0x44bf0f:c.instructions+=5;goto B44bf0f;
case 0x44bf11:c.instructions+=4;goto B44bf11;
case 0x44bf17:c.instructions+=3;goto B44bf17;
case 0x44bf18:c.instructions+=2;goto B44bf18;
case 0x44bf1c:c.instructions+=1;goto B44bf1c;
case 0x44bf21:goto L44bf21;
case 0x44bf26:c.instructions+=5;goto B44bf26;
case 0x44bf28:c.instructions+=4;goto B44bf28;
case 0x44bf2e:c.instructions+=3;goto B44bf2e;
case 0x44bf2f:c.instructions+=2;goto B44bf2f;
case 0x44bf33:c.instructions+=1;goto B44bf33;
case 0x44bf38:goto L44bf38;
case 0x44bf3d:c.instructions+=5;goto B44bf3d;
case 0x44bf3f:c.instructions+=4;goto B44bf3f;
case 0x44bf45:c.instructions+=3;goto B44bf45;
case 0x44bf46:c.instructions+=2;goto B44bf46;
case 0x44bf4a:c.instructions+=1;goto B44bf4a;
case 0x44bf4f:goto L44bf4f;
case 0x44bf52:c.instructions+=21;goto B44bf52;
case 0x44bf55:c.instructions+=20;goto B44bf55;
case 0x44bf5b:c.instructions+=19;goto B44bf5b;
case 0x44bf61:c.instructions+=18;goto B44bf61;
case 0x44bf67:c.instructions+=17;goto B44bf67;
case 0x44bf6c:c.instructions+=16;goto B44bf6c;
case 0x44bf72:c.instructions+=15;goto B44bf72;
case 0x44bf78:c.instructions+=14;goto B44bf78;
case 0x44bf7b:c.instructions+=13;goto B44bf7b;
case 0x44bf81:c.instructions+=12;goto B44bf81;
case 0x44bf87:c.instructions+=11;goto B44bf87;
case 0x44bf8d:c.instructions+=10;goto B44bf8d;
case 0x44bf93:c.instructions+=9;goto B44bf93;
case 0x44bf9a:c.instructions+=8;goto B44bf9a;
case 0x44bfa3:c.instructions+=7;goto B44bfa3;
case 0x44bfa9:c.instructions+=6;goto B44bfa9;
case 0x44bfac:c.instructions+=5;goto B44bfac;
case 0x44bfae:c.instructions+=4;goto B44bfae;
case 0x44bfaf:c.instructions+=3;goto B44bfaf;
case 0x44bfb5:c.instructions+=2;goto B44bfb5;
case 0x44bfb9:c.instructions+=1;goto B44bfb9;
case 0x44bfbe:goto L44bfbe;
case 0x44bfc1:c.instructions+=5;goto B44bfc1;
case 0x44bfc4:c.instructions+=4;goto B44bfc4;
case 0x44bfc5:c.instructions+=3;goto B44bfc5;
case 0x44bfc6:c.instructions+=2;goto B44bfc6;
case 0x44bfcc:c.instructions+=1;goto B44bfcc;
case 0x44bfd1:goto L44bfd1;
case 0x44bfd4:c.instructions+=5;goto B44bfd4;
case 0x44bfd7:c.instructions+=4;goto B44bfd7;
case 0x44bfd8:c.instructions+=3;goto B44bfd8;
case 0x44bfd9:c.instructions+=2;goto B44bfd9;
case 0x44bfdf:c.instructions+=1;goto B44bfdf;
case 0x44bfe4:goto L44bfe4;
case 0x44bfea:c.instructions+=5;goto B44bfea;
case 0x44bfeb:c.instructions+=4;goto B44bfeb;
case 0x44bff1:c.instructions+=3;goto B44bff1;
case 0x44bff2:c.instructions+=2;goto B44bff2;
case 0x44bff8:c.instructions+=1;goto B44bff8;
case 0x44bffd:goto L44bffd;
default:missing_instruction(c.pc);}
B44b000:L44b000:{c.instructions+=16;NFSU2_TR(0x44b000);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44b003:{NFSU2_TR(0x44b003);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B44b005:{NFSU2_TR(0x44b005);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44b008:{NFSU2_TR(0x44b008);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44b00c:{NFSU2_TR(0x44b00c);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B44b00e:{NFSU2_TR(0x44b00e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B44b00f:{NFSU2_TR(0x44b00f);
{u32 ea_=u32(u32(8562052u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44b015:{NFSU2_TR(0x44b015);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44b016:{NFSU2_TR(0x44b016);
__builtin_memmove(gp(0x82a580),(R+0),4);
}
B44b01b:{NFSU2_TR(0x44b01b);
{u32 ea_=u32(u32(8562056u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44b021:{NFSU2_TR(0x44b021);
__builtin_memmove(gp(0x82a58c),(R+4),4);
}
B44b027:{NFSU2_TR(0x44b027);
w4(R+0,u32(0x82a580ull));
}
B44b02c:{NFSU2_TR(0x44b02c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B44b02d:{NFSU2_TR(0x44b02d);
__builtin_memmove((R+16),(R+20),4);
}
B44b02f:{NFSU2_TR(0x44b02f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B44b030:{NFSU2_TR(0x44b030);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B44b040:L44b040:{c.instructions+=14;NFSU2_TR(0x44b040);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44b041:{NFSU2_TR(0x44b041);
__builtin_memmove((R+20),(R+16),4);
}
B44b043:{NFSU2_TR(0x44b043);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B44b046:{NFSU2_TR(0x44b046);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x64ull))));
}
B44b049:{NFSU2_TR(0x44b049);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44b04a:{NFSU2_TR(0x44b04a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44b04b:{NFSU2_TR(0x44b04b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B44b04e:{NFSU2_TR(0x44b04e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44b04f:{NFSU2_TR(0x44b04f);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B44b053:{NFSU2_TR(0x44b053);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44b054:{NFSU2_TR(0x44b054);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44b055:{NFSU2_TR(0x44b055);
__builtin_memmove((R+28),(R+4),4);
}
B44b057:{NFSU2_TR(0x44b057);
u8 U[5];
w4(U+0,u32(u32(u32(0x17ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B44b05c:{NFSU2_TR(0x44b05c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44b061ull));
TAIL_STATIC(0x5baf90u,5ba);
}
B44b061:L44b061:{c.instructions+=7;NFSU2_TR(0x44b061);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B44b064:{NFSU2_TR(0x44b064);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B44b067:{NFSU2_TR(0x44b067);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44b068:{NFSU2_TR(0x44b068);
u8 U[4];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B44b06c:{NFSU2_TR(0x44b06c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44b06d:{NFSU2_TR(0x44b06d);
__builtin_memmove((R+4),(R+28),4);
}
B44b06f:{NFSU2_TR(0x44b06f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44b074ull));
TAIL_STATIC(0x44ac10u,44a);
}
B44b074:L44b074:{c.instructions+=2;NFSU2_TR(0x44b074);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44b076:{NFSU2_TR(0x44b076);
if(r1(R+518)){{goto L44b0c0;}}
}
B44b078:L44b078:{c.instructions+=2;NFSU2_TR(0x44b078);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B44b07d:{NFSU2_TR(0x44b07d);
__builtin_memmove((R+4),(R+4),4);
}
B44b080:L44b080:{c.instructions+=22;NFSU2_TR(0x44b080);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44b084:{NFSU2_TR(0x44b084);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44b085:{NFSU2_TR(0x44b085);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B44b087:{NFSU2_TR(0x44b087);
u8 U[4];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44b08b:{NFSU2_TR(0x44b08b);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44b08e:{NFSU2_TR(0x44b08e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44b08f:{NFSU2_TR(0x44b08f);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B44b093:{NFSU2_TR(0x44b093);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44b096:{NFSU2_TR(0x44b096);
__builtin_memmove((R+4),(R+28),4);
}
B44b098:{NFSU2_TR(0x44b098);
{u32 ea_=u32(u32(7881560u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44b09e:{NFSU2_TR(0x44b09e);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B44b0a0:{NFSU2_TR(0x44b0a0);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B44b0a2:{NFSU2_TR(0x44b0a2);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B44b0a4:{NFSU2_TR(0x44b0a4);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B44b0a6:{NFSU2_TR(0x44b0a6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44b0a8:{NFSU2_TR(0x44b0a8);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B44b0aa:{NFSU2_TR(0x44b0aa);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B44b0ac:{NFSU2_TR(0x44b0ac);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B44b0ae:{NFSU2_TR(0x44b0ae);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B44b0b0:{NFSU2_TR(0x44b0b0);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44b0b3:{NFSU2_TR(0x44b0b3);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44b0b7:{NFSU2_TR(0x44b0b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44b0bcull));
TAIL_STATIC(0x44ac10u,44a);
}
B44b0bc:L44b0bc:{c.instructions+=2;NFSU2_TR(0x44b0bc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44b0be:{NFSU2_TR(0x44b0be);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x44b080u);}goto L44b080;}}
}
B44b0c0:L44b0c0:{c.instructions+=48;NFSU2_TR(0x44b0c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44b0c3:{NFSU2_TR(0x44b0c3);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44b0c6:{NFSU2_TR(0x44b0c6);
{u32 ea_=u32(r4(R+0)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44b0c9:{NFSU2_TR(0x44b0c9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
}
B44b0cc:{NFSU2_TR(0x44b0cc);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44b0cf:{NFSU2_TR(0x44b0cf);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B44b0d3:{NFSU2_TR(0x44b0d3);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44b0d6:{NFSU2_TR(0x44b0d6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44b0d7:{NFSU2_TR(0x44b0d7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44b0d8:{NFSU2_TR(0x44b0d8);
u8 U[4];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44b0dc:{NFSU2_TR(0x44b0dc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44b0de:{NFSU2_TR(0x44b0de);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44b0df:{NFSU2_TR(0x44b0df);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44b0e1:{NFSU2_TR(0x44b0e1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44b0e2:{NFSU2_TR(0x44b0e2);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44b0e4:{NFSU2_TR(0x44b0e4);
__builtin_memmove((R+4),(R+28),4);
}
B44b0e6:{NFSU2_TR(0x44b0e6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44b0e8:{NFSU2_TR(0x44b0e8);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44b0eb:{NFSU2_TR(0x44b0eb);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44b0ee:{NFSU2_TR(0x44b0ee);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44b0f1:{NFSU2_TR(0x44b0f1);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44b0f4:{NFSU2_TR(0x44b0f4);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44b0f6:{NFSU2_TR(0x44b0f6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44b0f8:{NFSU2_TR(0x44b0f8);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44b0fb:{NFSU2_TR(0x44b0fb);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44b0fe:{NFSU2_TR(0x44b0fe);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44b100:{NFSU2_TR(0x44b100);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44b103:{NFSU2_TR(0x44b103);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44b106:{NFSU2_TR(0x44b106);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44b109:{NFSU2_TR(0x44b109);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44b10c:{NFSU2_TR(0x44b10c);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44b10e:{NFSU2_TR(0x44b10e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44b110:{NFSU2_TR(0x44b110);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44b113:{NFSU2_TR(0x44b113);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44b116:{NFSU2_TR(0x44b116);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44b118:{NFSU2_TR(0x44b118);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44b11b:{NFSU2_TR(0x44b11b);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44b11f:{NFSU2_TR(0x44b11f);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B44b121:{NFSU2_TR(0x44b121);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44b125:{NFSU2_TR(0x44b125);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44b129:{NFSU2_TR(0x44b129);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B44b12f:{NFSU2_TR(0x44b12f);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44b133:{NFSU2_TR(0x44b133);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B44b135:{NFSU2_TR(0x44b135);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44b139:{NFSU2_TR(0x44b139);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B44b13b:{NFSU2_TR(0x44b13b);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44b13f:{NFSU2_TR(0x44b13f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B44b141:{NFSU2_TR(0x44b141);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44b146ull));
TAIL_STATIC(0x444390u,444);
}
B44b146:L44b146:{c.instructions+=3;NFSU2_TR(0x44b146);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B44b14a:{NFSU2_TR(0x44b14a);
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
B44b14c:{NFSU2_TR(0x44b14c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44b158;}}
}
B44b14e:L44b14e:{c.instructions+=1;NFSU2_TR(0x44b14e);
s4(0x7eb5c0,u32(0xffffffffull));
}
B44b158:L44b158:{c.instructions+=6;NFSU2_TR(0x44b158);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B44b159:{NFSU2_TR(0x44b159);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44b15a:{NFSU2_TR(0x44b15a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B44b15b:{NFSU2_TR(0x44b15b);
__builtin_memmove((R+16),(R+20),4);
}
B44b15d:{NFSU2_TR(0x44b15d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B44b15e:{NFSU2_TR(0x44b15e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B44b170:L44b170:{c.instructions+=14;NFSU2_TR(0x44b170);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44b172:{NFSU2_TR(0x44b172);
u8 U[4];
w4(U+0,u32(0x772068ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44b177:{NFSU2_TR(0x44b177);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44b17d:{NFSU2_TR(0x44b17d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44b17e:{NFSU2_TR(0x44b17e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44b185:{NFSU2_TR(0x44b185);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44b186:{NFSU2_TR(0x44b186);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44b187:{NFSU2_TR(0x44b187);
__builtin_memmove((R+24),(R+4),4);
}
B44b189:{NFSU2_TR(0x44b189);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44b18a:{NFSU2_TR(0x44b18a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44b18e:{NFSU2_TR(0x44b18e);
u8 U[4];
w4(U+0,u32(0x787d40ull));
s4(u32(r4(R+24)),r4(U+0));
}
B44b194:{NFSU2_TR(0x44b194);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B44b196:{NFSU2_TR(0x44b196);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44b19a:{NFSU2_TR(0x44b19a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44b19full));
TAIL_STATIC(0x444bb0u,444);
}
B44b19f:L44b19f:{c.instructions+=3;NFSU2_TR(0x44b19f);
u8 U[8];
__builtin_memmove((U+0),gp(0x828640),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+28))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B44b1a5:{NFSU2_TR(0x44b1a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44b1a8:{NFSU2_TR(0x44b1a8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44b1b0;}}
}
B44b1aa:L44b1aa:{c.instructions+=1;NFSU2_TR(0x44b1aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44b1b0:L44b1b0:{c.instructions+=3;NFSU2_TR(0x44b1b0);
u8 U[8];
__builtin_memmove((U+0),gp(0x828640),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+28))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B44b1b6:{NFSU2_TR(0x44b1b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44b1b9:{NFSU2_TR(0x44b1b9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44b1c1;}}
}
B44b1bb:L44b1bb:{c.instructions+=1;NFSU2_TR(0x44b1bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44b1c1:L44b1c1:{c.instructions+=4;NFSU2_TR(0x44b1c1);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B44b1c4:{NFSU2_TR(0x44b1c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B44b1cc:{NFSU2_TR(0x44b1cc);
u8 U[4];
w4(U+0,u32(0x787cf0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B44b1d2:{NFSU2_TR(0x44b1d2);
if(r1(R+518)){{goto L44b1f5;}}
}
B44b1d4:L44b1d4:{c.instructions+=9;NFSU2_TR(0x44b1d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44b1d7:{NFSU2_TR(0x44b1d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44b1da:{NFSU2_TR(0x44b1da);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x280ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44b1e0:{NFSU2_TR(0x44b1e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44b1e3:{NFSU2_TR(0x44b1e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x284ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44b1e9:{NFSU2_TR(0x44b1e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44b1ec:{NFSU2_TR(0x44b1ec);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44b1ed:{NFSU2_TR(0x44b1ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44b1f0:{NFSU2_TR(0x44b1f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44b1f5ull));
TAIL_STATIC(0x48f760u,48f);
}
B44b1f5:L44b1f5:{c.instructions+=4;NFSU2_TR(0x44b1f5);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B44b1f9:{NFSU2_TR(0x44b1f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B44b1fa:{NFSU2_TR(0x44b1fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44b1fb:{NFSU2_TR(0x44b1fb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44b203;}}
}
B44b1fd:L44b1fd:{c.instructions+=1;NFSU2_TR(0x44b1fd);
s4(0x883dfc,u32(u32(m4(0x883dfc))-u32(u32(0x1ull))));
}
B44b203:L44b203:{c.instructions+=4;NFSU2_TR(0x44b203);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44b207:{NFSU2_TR(0x44b207);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44b20e:{NFSU2_TR(0x44b20e);
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
B44b211:{NFSU2_TR(0x44b211);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B44b220:L44b220:{c.instructions+=2;NFSU2_TR(0x44b220);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44b226:{NFSU2_TR(0x44b226);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B44b230:L44b230:{c.instructions+=9;NFSU2_TR(0x44b230);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44b231:{NFSU2_TR(0x44b231);
__builtin_memmove((R+20),(R+16),4);
}
B44b233:{NFSU2_TR(0x44b233);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B44b236:{NFSU2_TR(0x44b236);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x148ull))));
}
B44b23c:{NFSU2_TR(0x44b23c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44b23d:{NFSU2_TR(0x44b23d);
__builtin_memmove((R+24),(R+4),4);
}
B44b23f:{NFSU2_TR(0x44b23f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44b240:{NFSU2_TR(0x44b240);
w4(R+4,u32(0x865480ull));
}
B44b245:{NFSU2_TR(0x44b245);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44b24aull));
TAIL_STATIC(0x571250u,571);
}
B44b24a:L44b24a:{c.instructions+=2;NFSU2_TR(0x44b24a);
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
B44b24c:{NFSU2_TR(0x44b24c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44b8c8;}}
}
B44b252:L44b252:{c.instructions+=3;NFSU2_TR(0x44b252);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44b258:{NFSU2_TR(0x44b258);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44b25a:{NFSU2_TR(0x44b25a);
if(r1(R+518)){{goto L44b5ab;}}
}
B44b260:L44b260:{c.instructions+=15;NFSU2_TR(0x44b260);
{u32 ea_=u32(r4(R+0)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44b263:{NFSU2_TR(0x44b263);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0xd0ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0xd0ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xd0ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B44b268:{NFSU2_TR(0x44b268);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B44b26a:{NFSU2_TR(0x44b26a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44b26b:{NFSU2_TR(0x44b26b);
{u32 ea_=u32(r4(R+16)+u32(324u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44b272:{NFSU2_TR(0x44b272);
{u32 ea_=u32(r4(R+0)+u32(4294967172u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44b275:{NFSU2_TR(0x44b275);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B44b277:{NFSU2_TR(0x44b277);
{u32 ea_=u32(r4(R+16)+u32(328u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44b27e:{NFSU2_TR(0x44b27e);
{u32 ea_=u32(r4(R+0)+u32(4294967176u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44b281:{NFSU2_TR(0x44b281);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B44b285:{NFSU2_TR(0x44b285);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B44b287:{NFSU2_TR(0x44b287);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44b288:{NFSU2_TR(0x44b288);
{u32 ea_=u32(u32(8554076u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B44b28e:{NFSU2_TR(0x44b28e);
{u32 ea_=u32(r4(R+16)+u32(336u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44b295:{NFSU2_TR(0x44b295);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44b29aull));
TAIL_STATIC(0x5baf80u,5ba);
}
B44b29a:L44b29a:{c.instructions+=152;NFSU2_TR(0x44b29a);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44b29e:{NFSU2_TR(0x44b29e);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44b2a4:{NFSU2_TR(0x44b2a4);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44b2a8:{NFSU2_TR(0x44b2a8);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44b2ae:{NFSU2_TR(0x44b2ae);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44b2b2:{NFSU2_TR(0x44b2b2);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44b2b8:{NFSU2_TR(0x44b2b8);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44b2bc:{NFSU2_TR(0x44b2bc);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44b2c0:{NFSU2_TR(0x44b2c0);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44b2c4:{NFSU2_TR(0x44b2c4);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B44b2c6:{NFSU2_TR(0x44b2c6);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B44b2c8:{NFSU2_TR(0x44b2c8);
{u32 ea_=u32(r4(R+16)+u32(216u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44b2cf:{NFSU2_TR(0x44b2cf);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44b2d3:{NFSU2_TR(0x44b2d3);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44b2d9:{NFSU2_TR(0x44b2d9);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44b2dd:{NFSU2_TR(0x44b2dd);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44b2e1:{NFSU2_TR(0x44b2e1);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44b2e7:{NFSU2_TR(0x44b2e7);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44b2eb:{NFSU2_TR(0x44b2eb);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44b2ef:{NFSU2_TR(0x44b2ef);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44b2f5:{NFSU2_TR(0x44b2f5);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44b2f9:{NFSU2_TR(0x44b2f9);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44b2fd:{NFSU2_TR(0x44b2fd);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44b301:{NFSU2_TR(0x44b301);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44b305:{NFSU2_TR(0x44b305);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44b309:{NFSU2_TR(0x44b309);
{u32 ea_=u32(r4(R+16)+u32(220u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44b310:{NFSU2_TR(0x44b310);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44b317:{NFSU2_TR(0x44b317);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44b31d:{NFSU2_TR(0x44b31d);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44b321:{NFSU2_TR(0x44b321);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44b325:{NFSU2_TR(0x44b325);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44b32b:{NFSU2_TR(0x44b32b);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44b32f:{NFSU2_TR(0x44b32f);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44b333:{NFSU2_TR(0x44b333);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44b339:{NFSU2_TR(0x44b339);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44b33d:{NFSU2_TR(0x44b33d);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44b341:{NFSU2_TR(0x44b341);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44b345:{NFSU2_TR(0x44b345);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44b349:{NFSU2_TR(0x44b349);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44b34d:{NFSU2_TR(0x44b34d);
{u32 ea_=u32(r4(R+16)+u32(224u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44b354:{NFSU2_TR(0x44b354);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44b35b:{NFSU2_TR(0x44b35b);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44b361:{NFSU2_TR(0x44b361);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44b365:{NFSU2_TR(0x44b365);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44b369:{NFSU2_TR(0x44b369);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44b36f:{NFSU2_TR(0x44b36f);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44b373:{NFSU2_TR(0x44b373);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44b377:{NFSU2_TR(0x44b377);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44b37d:{NFSU2_TR(0x44b37d);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44b381:{NFSU2_TR(0x44b381);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44b385:{NFSU2_TR(0x44b385);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44b389:{NFSU2_TR(0x44b389);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44b38d:{NFSU2_TR(0x44b38d);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44b391:{NFSU2_TR(0x44b391);
{u32 ea_=u32(r4(R+16)+u32(228u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44b398:{NFSU2_TR(0x44b398);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44b39c:{NFSU2_TR(0x44b39c);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44b3a2:{NFSU2_TR(0x44b3a2);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B44b3a4:{NFSU2_TR(0x44b3a4);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44b3a8:{NFSU2_TR(0x44b3a8);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44b3ac:{NFSU2_TR(0x44b3ac);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44b3b0:{NFSU2_TR(0x44b3b0);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B44b3b2:{NFSU2_TR(0x44b3b2);
{u32 ea_=u32(r4(R+16)+u32(232u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44b3b9:{NFSU2_TR(0x44b3b9);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B44b3bb:{NFSU2_TR(0x44b3bb);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B44b3bd:{NFSU2_TR(0x44b3bd);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44b3c1:{NFSU2_TR(0x44b3c1);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44b3c7:{NFSU2_TR(0x44b3c7);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44b3cb:{NFSU2_TR(0x44b3cb);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B44b3cd:{NFSU2_TR(0x44b3cd);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44b3d1:{NFSU2_TR(0x44b3d1);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44b3d5:{NFSU2_TR(0x44b3d5);
{u32 ea_=u32(r4(R+16)+u32(236u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44b3dc:{NFSU2_TR(0x44b3dc);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44b3e0:{NFSU2_TR(0x44b3e0);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44b3e6:{NFSU2_TR(0x44b3e6);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44b3ea:{NFSU2_TR(0x44b3ea);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B44b3ec:{NFSU2_TR(0x44b3ec);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44b3f0:{NFSU2_TR(0x44b3f0);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44b3f4:{NFSU2_TR(0x44b3f4);
{u32 ea_=u32(r4(R+16)+u32(240u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44b3fb:{NFSU2_TR(0x44b3fb);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44b3ff:{NFSU2_TR(0x44b3ff);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44b405:{NFSU2_TR(0x44b405);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44b409:{NFSU2_TR(0x44b409);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44b40d:{NFSU2_TR(0x44b40d);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44b411:{NFSU2_TR(0x44b411);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44b415:{NFSU2_TR(0x44b415);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44b419:{NFSU2_TR(0x44b419);
{u32 ea_=u32(r4(R+16)+u32(244u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44b420:{NFSU2_TR(0x44b420);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44b424:{NFSU2_TR(0x44b424);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44b428:{NFSU2_TR(0x44b428);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44b42c:{NFSU2_TR(0x44b42c);
{u32 ea_=u32(r4(R+16)+u32(248u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44b433:{NFSU2_TR(0x44b433);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44b437:{NFSU2_TR(0x44b437);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B44b439:{NFSU2_TR(0x44b439);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44b43d:{NFSU2_TR(0x44b43d);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44b441:{NFSU2_TR(0x44b441);
{u32 ea_=u32(r4(R+16)+u32(252u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44b448:{NFSU2_TR(0x44b448);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44b44c:{NFSU2_TR(0x44b44c);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B44b44e:{NFSU2_TR(0x44b44e);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44b452:{NFSU2_TR(0x44b452);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44b456:{NFSU2_TR(0x44b456);
{u32 ea_=u32(r4(R+16)+u32(256u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44b45d:{NFSU2_TR(0x44b45d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B44b45f:{NFSU2_TR(0x44b45f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B44b461:{NFSU2_TR(0x44b461);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44b465:{NFSU2_TR(0x44b465);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44b469:{NFSU2_TR(0x44b469);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44b46d:{NFSU2_TR(0x44b46d);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44b471:{NFSU2_TR(0x44b471);
{u32 ea_=u32(r4(R+16)+u32(260u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44b478:{NFSU2_TR(0x44b478);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44b47c:{NFSU2_TR(0x44b47c);
{u32 ea_=u32(r4(R+16)+u32(336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44b483:{NFSU2_TR(0x44b483);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44b487:{NFSU2_TR(0x44b487);
{u32 ea_=u32(r4(R+16)+u32(332u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44b48e:{NFSU2_TR(0x44b48e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44b490:{NFSU2_TR(0x44b490);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44b494:{NFSU2_TR(0x44b494);
{u32 ea_=u32(r4(R+16)+u32(328u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44b49b:{NFSU2_TR(0x44b49b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44b49d:{NFSU2_TR(0x44b49d);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44b4a1:{NFSU2_TR(0x44b4a1);
{u32 ea_=u32(r4(R+16)+u32(264u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44b4a8:{NFSU2_TR(0x44b4a8);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44b4ac:{NFSU2_TR(0x44b4ac);
{u32 ea_=u32(r4(R+16)+u32(336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44b4b3:{NFSU2_TR(0x44b4b3);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44b4b7:{NFSU2_TR(0x44b4b7);
{u32 ea_=u32(r4(R+16)+u32(332u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44b4be:{NFSU2_TR(0x44b4be);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44b4c0:{NFSU2_TR(0x44b4c0);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44b4c4:{NFSU2_TR(0x44b4c4);
{u32 ea_=u32(r4(R+16)+u32(328u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44b4cb:{NFSU2_TR(0x44b4cb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44b4cd:{NFSU2_TR(0x44b4cd);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44b4d1:{NFSU2_TR(0x44b4d1);
{u32 ea_=u32(r4(R+16)+u32(268u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44b4d8:{NFSU2_TR(0x44b4d8);
u8 U[4];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B44b4df:{NFSU2_TR(0x44b4df);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44b4e3:{NFSU2_TR(0x44b4e3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44b4e4:{NFSU2_TR(0x44b4e4);
{u32 ea_=u32(r4(R+16)+u32(340u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44b4eb:{NFSU2_TR(0x44b4eb);
u8 U[4];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44b4f2:{NFSU2_TR(0x44b4f2);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44b4f6:{NFSU2_TR(0x44b4f6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44b4f7:{NFSU2_TR(0x44b4f7);
{u32 ea_=u32(r4(R+16)+u32(340u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44b4fe:{NFSU2_TR(0x44b4fe);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44b500:{NFSU2_TR(0x44b500);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44b504:{NFSU2_TR(0x44b504);
{u32 ea_=u32(r4(R+16)+u32(336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44b50b:{NFSU2_TR(0x44b50b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44b50d:{NFSU2_TR(0x44b50d);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44b514:{NFSU2_TR(0x44b514);
{u32 ea_=u32(r4(R+16)+u32(280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44b51b:{NFSU2_TR(0x44b51b);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44b51f:{NFSU2_TR(0x44b51f);
{u32 ea_=u32(r4(R+16)+u32(344u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44b526:{NFSU2_TR(0x44b526);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44b52a:{NFSU2_TR(0x44b52a);
{u32 ea_=u32(r4(R+16)+u32(340u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44b531:{NFSU2_TR(0x44b531);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44b533:{NFSU2_TR(0x44b533);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44b537:{NFSU2_TR(0x44b537);
{u32 ea_=u32(r4(R+16)+u32(336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44b53e:{NFSU2_TR(0x44b53e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44b540:{NFSU2_TR(0x44b540);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44b547:{NFSU2_TR(0x44b547);
{u32 ea_=u32(r4(R+16)+u32(284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44b54e:{NFSU2_TR(0x44b54e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44b553ull));
TAIL_STATIC(0x4012b0u,401);
}
B44b553:L44b553:{c.instructions+=14;NFSU2_TR(0x44b553);
{u32 ea_=u32(r4(R+16)+u32(192u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44b55a:{NFSU2_TR(0x44b55a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B44b55d:{NFSU2_TR(0x44b55d);
{u32 ea_=u32(u32(8554112u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44b563:{NFSU2_TR(0x44b563);
{u32 ea_=u32(r4(R+16)+u32(176u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44b56a:{NFSU2_TR(0x44b56a);
{u32 ea_=u32(r4(R+16)+u32(180u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44b571:{NFSU2_TR(0x44b571);
{u32 ea_=u32(u32(8554116u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44b577:{NFSU2_TR(0x44b577);
{u32 ea_=u32(r4(R+16)+u32(180u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44b57e:{NFSU2_TR(0x44b57e);
{u32 ea_=u32(u32(8554120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44b584:{NFSU2_TR(0x44b584);
{u32 ea_=u32(r4(R+16)+u32(184u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44b58b:{NFSU2_TR(0x44b58b);
{u32 ea_=u32(r4(R+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44b592:{NFSU2_TR(0x44b592);
{u32 ea_=u32(r4(R+16)+u32(188u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44b599:{NFSU2_TR(0x44b599);
{u32 ea_=u32(u32(8554124u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44b59f:{NFSU2_TR(0x44b59f);
{u32 ea_=u32(r4(R+16)+u32(188u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44b5a6:{NFSU2_TR(0x44b5a6);
{goto L44b65f;}
}
B44b5ab:L44b5ab:{c.instructions+=18;NFSU2_TR(0x44b5ab);
{u32 ea_=u32(u32(8304088u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44b5b1:{NFSU2_TR(0x44b5b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44b5bc:{NFSU2_TR(0x44b5bc);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B44b5be:{NFSU2_TR(0x44b5be);
u8 U[8];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44b5c9:{NFSU2_TR(0x44b5c9);
{u32 ea_=u32(r4(R+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44b5d0:{NFSU2_TR(0x44b5d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44b5db:{NFSU2_TR(0x44b5db);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44b5e6:{NFSU2_TR(0x44b5e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44b5f1:{NFSU2_TR(0x44b5f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44b5fc:{NFSU2_TR(0x44b5fc);
u8 U[8];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44b607:{NFSU2_TR(0x44b607);
u8 U[8];
w4(U+0,u32(u32(u32(0x9cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44b612:{NFSU2_TR(0x44b612);
u8 U[8];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44b61d:{NFSU2_TR(0x44b61d);
u8 U[8];
w4(U+0,u32(u32(u32(0xa4ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44b628:{NFSU2_TR(0x44b628);
u8 U[8];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44b633:{NFSU2_TR(0x44b633);
u8 U[8];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44b63e:{NFSU2_TR(0x44b63e);
u8 U[8];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44b649:{NFSU2_TR(0x44b649);
u8 U[8];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44b654:{NFSU2_TR(0x44b654);
u8 U[8];
w4(U+0,u32(u32(u32(0xbcull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44b65f:L44b65f:{c.instructions+=2;NFSU2_TR(0x44b65f);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3f800000ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B44b666:{NFSU2_TR(0x44b666);
if(r1(R+518)){{goto L44b671;}}
}
B44b668:L44b668:{c.instructions+=3;NFSU2_TR(0x44b668);
{u32 ea_=u32(r4(R+24)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44b66b:{NFSU2_TR(0x44b66b);
{u32 ea_=u32(r4(R+24)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44b66e:{NFSU2_TR(0x44b66e);
{u32 ea_=u32(r4(R+24)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44b671:L44b671:{c.instructions+=6;NFSU2_TR(0x44b671);
{u32 ea_=u32(r4(R+24)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44b674:{NFSU2_TR(0x44b674);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B44b677:{NFSU2_TR(0x44b677);
{u32 ea_=u32(r4(R+24)+u32(80u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B44b67a:{NFSU2_TR(0x44b67a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44b67c:{NFSU2_TR(0x44b67c);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B44b67f:{NFSU2_TR(0x44b67f);
if(r1(R+514)){{goto L44b687;}}
}
B44b681:L44b681:{c.instructions+=2;NFSU2_TR(0x44b681);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44b684:{NFSU2_TR(0x44b684);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44b687:L44b687:{c.instructions+=5;NFSU2_TR(0x44b687);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44b68a:{NFSU2_TR(0x44b68a);
{u32 ea_=u32(r4(R+24)+u32(76u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B44b68d:{NFSU2_TR(0x44b68d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44b68f:{NFSU2_TR(0x44b68f);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B44b692:{NFSU2_TR(0x44b692);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44b69a;}}
}
B44b694:L44b694:{c.instructions+=2;NFSU2_TR(0x44b694);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44b697:{NFSU2_TR(0x44b697);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44b69a:L44b69a:{c.instructions+=5;NFSU2_TR(0x44b69a);
{u32 ea_=u32(r4(R+24)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44b69d:{NFSU2_TR(0x44b69d);
{u32 ea_=u32(r4(R+24)+u32(80u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B44b6a0:{NFSU2_TR(0x44b6a0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44b6a2:{NFSU2_TR(0x44b6a2);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B44b6a5:{NFSU2_TR(0x44b6a5);
if(r1(R+514)){{goto L44b6ad;}}
}
B44b6a7:L44b6a7:{c.instructions+=2;NFSU2_TR(0x44b6a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44b6aa:{NFSU2_TR(0x44b6aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44b6ad:L44b6ad:{c.instructions+=5;NFSU2_TR(0x44b6ad);
{u32 ea_=u32(r4(R+24)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44b6b0:{NFSU2_TR(0x44b6b0);
{u32 ea_=u32(r4(R+24)+u32(76u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B44b6b3:{NFSU2_TR(0x44b6b3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44b6b5:{NFSU2_TR(0x44b6b5);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B44b6b8:{NFSU2_TR(0x44b6b8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44b6c0;}}
}
B44b6ba:L44b6ba:{c.instructions+=2;NFSU2_TR(0x44b6ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44b6bd:{NFSU2_TR(0x44b6bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44b6c0:L44b6c0:{c.instructions+=5;NFSU2_TR(0x44b6c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44b6c3:{NFSU2_TR(0x44b6c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44b6c6:{NFSU2_TR(0x44b6c6);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B44b6c8:{NFSU2_TR(0x44b6c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44b6cb:{NFSU2_TR(0x44b6cb);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L44b6dd;}}
}
B44b6cd:L44b6cd:{c.instructions+=4;NFSU2_TR(0x44b6cd);
__builtin_memmove((R+28),(R+8),4);
}
B44b6cf:{NFSU2_TR(0x44b6cf);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+4))));
}
B44b6d1:{NFSU2_TR(0x44b6d1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B44b6d3:{NFSU2_TR(0x44b6d3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L44b6d8;}}
}
B44b6d5:L44b6d5:{c.instructions+=1;NFSU2_TR(0x44b6d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B44b6d8:L44b6d8:{c.instructions+=2;NFSU2_TR(0x44b6d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44b6db:{NFSU2_TR(0x44b6db);
{goto L44b6ee;}
}
B44b6dd:L44b6dd:{c.instructions+=4;NFSU2_TR(0x44b6dd);
__builtin_memmove((R+28),(R+4),4);
}
B44b6df:{NFSU2_TR(0x44b6df);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+8))));
}
B44b6e1:{NFSU2_TR(0x44b6e1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B44b6e3:{NFSU2_TR(0x44b6e3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L44b6e9;}}
}
B44b6e5:L44b6e5:{c.instructions+=2;NFSU2_TR(0x44b6e5);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B44b6e7:{NFSU2_TR(0x44b6e7);
{goto L44b6eb;}
}
B44b6e9:L44b6e9:{c.instructions+=1;NFSU2_TR(0x44b6e9);
__builtin_memmove((R+4),(R+8),4);
}
B44b6eb:L44b6eb:{c.instructions+=1;NFSU2_TR(0x44b6eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44b6ee:L44b6ee:{c.instructions+=4;NFSU2_TR(0x44b6ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44b6f1:{NFSU2_TR(0x44b6f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44b6f4:{NFSU2_TR(0x44b6f4);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B44b6f6:{NFSU2_TR(0x44b6f6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L44b708;}}
}
B44b6f8:L44b6f8:{c.instructions+=4;NFSU2_TR(0x44b6f8);
__builtin_memmove((R+28),(R+8),4);
}
B44b6fa:{NFSU2_TR(0x44b6fa);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+4))));
}
B44b6fc:{NFSU2_TR(0x44b6fc);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B44b6fe:{NFSU2_TR(0x44b6fe);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L44b703;}}
}
B44b700:L44b700:{c.instructions+=1;NFSU2_TR(0x44b700);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B44b703:L44b703:{c.instructions+=2;NFSU2_TR(0x44b703);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44b706:{NFSU2_TR(0x44b706);
{goto L44b719;}
}
B44b708:L44b708:{c.instructions+=4;NFSU2_TR(0x44b708);
__builtin_memmove((R+28),(R+4),4);
}
B44b70a:{NFSU2_TR(0x44b70a);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+8))));
}
B44b70c:{NFSU2_TR(0x44b70c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B44b70e:{NFSU2_TR(0x44b70e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L44b714;}}
}
B44b710:L44b710:{c.instructions+=2;NFSU2_TR(0x44b710);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B44b712:{NFSU2_TR(0x44b712);
{goto L44b716;}
}
B44b714:L44b714:{c.instructions+=1;NFSU2_TR(0x44b714);
__builtin_memmove((R+4),(R+8),4);
}
B44b716:L44b716:{c.instructions+=1;NFSU2_TR(0x44b716);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44b719:L44b719:{c.instructions+=6;NFSU2_TR(0x44b719);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B44b71d:{NFSU2_TR(0x44b71d);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x32ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))+u32(r2(R+4))));
s2(u32(r4(U+0)),r2(U+4));
}
B44b721:{NFSU2_TR(0x44b721);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44b724:{NFSU2_TR(0x44b724);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44b726:{NFSU2_TR(0x44b726);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x32ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B44b72a:{NFSU2_TR(0x44b72a);
if(r1(R+518)){{goto L44b759;}}
}
B44b72c:L44b72c:{c.instructions+=5;NFSU2_TR(0x44b72c);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B44b730:{NFSU2_TR(0x44b730);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w1(R+512,u8((r2(R+0))<(r2(U+0))));
w2(U+2,u16(u32(r2(R+0))-u32(r2(U+0))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B44b733:{NFSU2_TR(0x44b733);
w4(R+4,u32(r2(R+4)));
}
B44b736:{NFSU2_TR(0x44b736);
w4(R+0,u32(r2(R+0)));
}
B44b739:{NFSU2_TR(0x44b739);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L44b749;}}
}
B44b73b:L44b73b:{c.instructions+=4;NFSU2_TR(0x44b73b);
__builtin_memmove((R+8),(R+0),4);
}
B44b73d:{NFSU2_TR(0x44b73d);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B44b73f:{NFSU2_TR(0x44b73f);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x50ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x50ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B44b742:{NFSU2_TR(0x44b742);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L44b755;}}
}
B44b744:L44b744:{c.instructions+=2;NFSU2_TR(0x44b744);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((R+0),(U+0),4);
}
B44b747:{NFSU2_TR(0x44b747);
{goto L44b755;}
}
B44b749:L44b749:{c.instructions+=4;NFSU2_TR(0x44b749);
__builtin_memmove((R+8),(R+4),4);
}
B44b74b:{NFSU2_TR(0x44b74b);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B44b74d:{NFSU2_TR(0x44b74d);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x50ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x50ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B44b750:{NFSU2_TR(0x44b750);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L44b755;}}
}
B44b752:L44b752:{c.instructions+=1;NFSU2_TR(0x44b752);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffb0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B44b755:L44b755:{c.instructions+=1;NFSU2_TR(0x44b755);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x32ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B44b759:L44b759:{c.instructions+=7;NFSU2_TR(0x44b759);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B44b75d:{NFSU2_TR(0x44b75d);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))+u32(r2(R+0))));
s2(u32(r4(U+0)),r2(U+4));
}
B44b761:{NFSU2_TR(0x44b761);
__builtin_memmove((R+4),gp(0x828658),4);
}
B44b767:{NFSU2_TR(0x44b767);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44b769:{NFSU2_TR(0x44b769);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B44b76d:{NFSU2_TR(0x44b76d);
u8 U[4];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44b774:{NFSU2_TR(0x44b774);
if(r1(R+518)){{goto L44b7b5;}}
}
B44b776:L44b776:{c.instructions+=7;NFSU2_TR(0x44b776);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B44b778:{NFSU2_TR(0x44b778);
__builtin_memmove((R+4),gp(0x7eb5c8),2);
}
B44b77f:{NFSU2_TR(0x44b77f);
u8 U[4];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B44b786:{NFSU2_TR(0x44b786);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44b787:{NFSU2_TR(0x44b787);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44b788:{NFSU2_TR(0x44b788);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44b789:{NFSU2_TR(0x44b789);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44b78eull));
TAIL_STATIC(0x5bae60u,5ba);
}
B44b78e:L44b78e:{c.instructions+=8;NFSU2_TR(0x44b78e);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B44b790:{NFSU2_TR(0x44b790);
__builtin_memmove((R+4),gp(0x7eb5cc),2);
}
B44b797:{NFSU2_TR(0x44b797);
u8 U[4];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44b79e:{NFSU2_TR(0x44b79e);
u8 U[4];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B44b7a5:{NFSU2_TR(0x44b7a5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44b7a6:{NFSU2_TR(0x44b7a6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44b7a7:{NFSU2_TR(0x44b7a7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44b7a8:{NFSU2_TR(0x44b7a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44b7adull));
TAIL_STATIC(0x5bada0u,5ba);
}
B44b7ad:L44b7ad:{c.instructions+=2;NFSU2_TR(0x44b7ad);
__builtin_memmove((R+4),gp(0x7eb5c4),4);
}
B44b7b3:{NFSU2_TR(0x44b7b3);
{goto L44b7e3;}
}
B44b7b5:L44b7b5:{c.instructions+=5;NFSU2_TR(0x44b7b5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44b7b6:{NFSU2_TR(0x44b7b6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44b7b7:{NFSU2_TR(0x44b7b7);
u8 U[4];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B44b7be:{NFSU2_TR(0x44b7be);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44b7bf:{NFSU2_TR(0x44b7bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44b7c4ull));
TAIL_STATIC(0x5bae60u,5ba);
}
B44b7c4:L44b7c4:{c.instructions+=8;NFSU2_TR(0x44b7c4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B44b7c6:{NFSU2_TR(0x44b7c6);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x32ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B44b7ca:{NFSU2_TR(0x44b7ca);
u8 U[4];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44b7d1:{NFSU2_TR(0x44b7d1);
u8 U[4];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B44b7d8:{NFSU2_TR(0x44b7d8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44b7d9:{NFSU2_TR(0x44b7d9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44b7da:{NFSU2_TR(0x44b7da);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44b7db:{NFSU2_TR(0x44b7db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44b7e0ull));
TAIL_STATIC(0x5bada0u,5ba);
}
B44b7e0:L44b7e0:{c.instructions+=1;NFSU2_TR(0x44b7e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44b7e3:L44b7e3:{c.instructions+=10;NFSU2_TR(0x44b7e3);
u8 U[4];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44b7ea:{NFSU2_TR(0x44b7ea);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44b7eb:{NFSU2_TR(0x44b7eb);
u8 U[4];
w4(U+0,u32(u32(u32(0x9cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B44b7f2:{NFSU2_TR(0x44b7f2);
u8 U[8];
w4(U+0,u32(u32(u32(0xdcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44b7f9:{NFSU2_TR(0x44b7f9);
u8 U[4];
w4(U+0,u32(u32(u32(0x9cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B44b800:{NFSU2_TR(0x44b800);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44b801:{NFSU2_TR(0x44b801);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44b802:{NFSU2_TR(0x44b802);
u8 U[8];
w4(U+0,u32(u32(u32(0xecull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44b80d:{NFSU2_TR(0x44b80d);
u8 U[8];
w4(U+0,u32(u32(u32(0xe8ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44b818:{NFSU2_TR(0x44b818);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44b81dull));
TAIL_STATIC(0x5bae90u,5ba);
}
B44b81d:L44b81d:{c.instructions+=7;NFSU2_TR(0x44b81d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B44b820:{NFSU2_TR(0x44b820);
u8 U[4];
w4(U+0,u32(0x4000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44b825:{NFSU2_TR(0x44b825);
u8 U[4];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44b82c:{NFSU2_TR(0x44b82c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44b82d:{NFSU2_TR(0x44b82d);
u8 U[4];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B44b834:{NFSU2_TR(0x44b834);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44b835:{NFSU2_TR(0x44b835);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44b83aull));
TAIL_STATIC(0x5bacf0u,5ba);
}
B44b83a:L44b83a:{c.instructions+=6;NFSU2_TR(0x44b83a);
u8 U[4];
w4(U+0,u32(0xc000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44b83f:{NFSU2_TR(0x44b83f);
u8 U[4];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B44b846:{NFSU2_TR(0x44b846);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44b847:{NFSU2_TR(0x44b847);
u8 U[4];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44b84e:{NFSU2_TR(0x44b84e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44b84f:{NFSU2_TR(0x44b84f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44b854ull));
TAIL_STATIC(0x5bada0u,5ba);
}
B44b854:L44b854:{c.instructions+=4;NFSU2_TR(0x44b854);
__builtin_memmove((R+0),gp(0x828640),4);
}
B44b859:{NFSU2_TR(0x44b859);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B44b85c:{NFSU2_TR(0x44b85c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44b85e:{NFSU2_TR(0x44b85e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44b8b1;}}
}
B44b860:L44b860:{c.instructions+=6;NFSU2_TR(0x44b860);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44b863:{NFSU2_TR(0x44b863);
__builtin_memmove((R+4),gp(0x7eb5dc),2);
}
B44b86a:{NFSU2_TR(0x44b86a);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B44b871:{NFSU2_TR(0x44b871);
__builtin_memmove((R+0),gp(0x828640),4);
}
B44b876:{NFSU2_TR(0x44b876);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44b878:{NFSU2_TR(0x44b878);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44b8b1;}}
}
B44b87a:L44b87a:{c.instructions+=6;NFSU2_TR(0x44b87a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44b87d:{NFSU2_TR(0x44b87d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44b880:{NFSU2_TR(0x44b880);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44b886:{NFSU2_TR(0x44b886);
__builtin_memmove((R+0),gp(0x828640),4);
}
B44b88b:{NFSU2_TR(0x44b88b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44b88d:{NFSU2_TR(0x44b88d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44b8b1;}}
}
B44b88f:L44b88f:{c.instructions+=6;NFSU2_TR(0x44b88f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44b892:{NFSU2_TR(0x44b892);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44b895:{NFSU2_TR(0x44b895);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44b89b:{NFSU2_TR(0x44b89b);
__builtin_memmove((R+0),gp(0x828640),4);
}
B44b8a0:{NFSU2_TR(0x44b8a0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44b8a2:{NFSU2_TR(0x44b8a2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44b8b1;}}
}
B44b8a4:L44b8a4:{c.instructions+=2;NFSU2_TR(0x44b8a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44b8a7:{NFSU2_TR(0x44b8a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb8ull))));
w4(U+4,u32(0x41000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44b8b1:L44b8b1:{c.instructions+=6;NFSU2_TR(0x44b8b1);
__builtin_memmove((R+4),gp(0x865198),4);
}
B44b8b7:{NFSU2_TR(0x44b8b7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44b8b8:{NFSU2_TR(0x44b8b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44b8bb:{NFSU2_TR(0x44b8bb);
u8 U[4];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44b8c2:{NFSU2_TR(0x44b8c2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44b8c3:{NFSU2_TR(0x44b8c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44b8c8ull));
TAIL_STATIC(0x447280u,447);
}
B44b8c8:L44b8c8:{c.instructions+=5;NFSU2_TR(0x44b8c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B44b8c9:{NFSU2_TR(0x44b8c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44b8ca:{NFSU2_TR(0x44b8ca);
__builtin_memmove((R+16),(R+20),4);
}
B44b8cc:{NFSU2_TR(0x44b8cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B44b8cd:{NFSU2_TR(0x44b8cd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B44b8d0:L44b8d0:{c.instructions+=12;NFSU2_TR(0x44b8d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44b8d4:{NFSU2_TR(0x44b8d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44b8d7:{NFSU2_TR(0x44b8d7);
__builtin_memmove((R+0),(R+8),4);
}
B44b8d9:{NFSU2_TR(0x44b8d9);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B44b8db:{NFSU2_TR(0x44b8db);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B44b8dd:{NFSU2_TR(0x44b8dd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44b8de:{NFSU2_TR(0x44b8de);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B44b8e2:{NFSU2_TR(0x44b8e2);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffff38ull))));
}
B44b8e7:{NFSU2_TR(0x44b8e7);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xffffffb3ull))));
}
B44b8ea:{NFSU2_TR(0x44b8ea);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1f4ull))));
}
B44b8ef:{NFSU2_TR(0x44b8ef);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B44b8f2:{NFSU2_TR(0x44b8f2);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L44b9e5;}}
}
B44b8f8:L44b8f8:{c.instructions+=1;NFSU2_TR(0x44b8f8);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x44b9e8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B44b8ff:L44b8ff:{c.instructions+=3;NFSU2_TR(0x44b8ff);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B44b903:{NFSU2_TR(0x44b903);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B44b905:{NFSU2_TR(0x44b905);
if(r1(R+518)){{goto L44b90e;}}
}
B44b907:L44b907:{c.instructions+=4;NFSU2_TR(0x44b907);
u8 U[6];
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w1(R+523,sborrow<u32>(u32(0x0ull),r4(R+0)));
w4(R+0,u32(0-u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B44b909:{NFSU2_TR(0x44b909);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44b90c:{NFSU2_TR(0x44b90c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44b90d:{NFSU2_TR(0x44b90d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B44b90e:L44b90e:{c.instructions+=3;NFSU2_TR(0x44b90e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44b915:{NFSU2_TR(0x44b915);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44b916:{NFSU2_TR(0x44b916);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B44b917:L44b917:{c.instructions+=7;NFSU2_TR(0x44b917);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B44b91b:{NFSU2_TR(0x44b91b);
w1(R+512,u8((r1(R+8))!=(u8(0x0ull))));
w1(R+8,u8(0-u32(r1(R+8))));
}
B44b91d:{NFSU2_TR(0x44b91d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44b91e:{NFSU2_TR(0x44b91e);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(R+8))));
w4(R+8,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B44b920:{NFSU2_TR(0x44b920);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B44b922:{NFSU2_TR(0x44b922);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44b925:{NFSU2_TR(0x44b925);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B44b926:L44b926:{c.instructions+=3;NFSU2_TR(0x44b926);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B44b92a:{NFSU2_TR(0x44b92a);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B44b92c:{NFSU2_TR(0x44b92c);
if(r1(R+518)){{goto L44b935;}}
}
B44b92e:L44b92e:{c.instructions+=4;NFSU2_TR(0x44b92e);
u8 U[6];
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w1(R+523,sborrow<u32>(u32(0x0ull),r4(R+0)));
w4(R+0,u32(0-u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B44b930:{NFSU2_TR(0x44b930);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44b933:{NFSU2_TR(0x44b933);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44b934:{NFSU2_TR(0x44b934);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B44b935:L44b935:{c.instructions+=3;NFSU2_TR(0x44b935);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44b93c:{NFSU2_TR(0x44b93c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44b93d:{NFSU2_TR(0x44b93d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B44b93e:L44b93e:{c.instructions+=7;NFSU2_TR(0x44b93e);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B44b942:{NFSU2_TR(0x44b942);
w1(R+512,u8((r1(R+8))!=(u8(0x0ull))));
w1(R+8,u8(0-u32(r1(R+8))));
}
B44b944:{NFSU2_TR(0x44b944);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44b945:{NFSU2_TR(0x44b945);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(R+8))));
w4(R+8,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B44b947:{NFSU2_TR(0x44b947);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B44b949:{NFSU2_TR(0x44b949);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44b94c:{NFSU2_TR(0x44b94c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B44b94d:L44b94d:{c.instructions+=3;NFSU2_TR(0x44b94d);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B44b951:{NFSU2_TR(0x44b951);
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
B44b953:{NFSU2_TR(0x44b953);
if(r1(R+518)){{goto L44b95e;}}
}
B44b955:L44b955:{c.instructions+=3;NFSU2_TR(0x44b955);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
w4(U+4,u32(0x3f7d70a4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44b95c:{NFSU2_TR(0x44b95c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44b95d:{NFSU2_TR(0x44b95d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B44b95e:L44b95e:{c.instructions+=3;NFSU2_TR(0x44b95e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44b965:{NFSU2_TR(0x44b965);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44b966:{NFSU2_TR(0x44b966);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B44b967:L44b967:{c.instructions+=3;NFSU2_TR(0x44b967);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B44b96b:{NFSU2_TR(0x44b96b);
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
B44b96d:{NFSU2_TR(0x44b96d);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x44b95eu);}goto L44b95e;}}
}
B44b96f:L44b96f:{c.instructions+=3;NFSU2_TR(0x44b96f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
w4(U+4,u32(0x3f8147aeull));
s4(u32(r4(U+0)),r4(U+4));
}
B44b976:{NFSU2_TR(0x44b976);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44b977:{NFSU2_TR(0x44b977);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B44b978:L44b978:{c.instructions+=2;NFSU2_TR(0x44b978);
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
B44b97a:{NFSU2_TR(0x44b97a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44b9e5;}}
}
B44b97c:L44b97c:{c.instructions+=3;NFSU2_TR(0x44b97c);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B44b980:{NFSU2_TR(0x44b980);
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
B44b982:{NFSU2_TR(0x44b982);
if(r1(R+518)){{goto L44b9e5;}}
}
B44b984:L44b984:{c.instructions+=5;NFSU2_TR(0x44b984);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44b98a:{NFSU2_TR(0x44b98a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B44b98c:{NFSU2_TR(0x44b98c);
__builtin_memmove((R+8),gp(0x890080),4);
}
B44b992:{NFSU2_TR(0x44b992);
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
B44b994:{NFSU2_TR(0x44b994);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44b998;}}
}
B44b996:L44b996:{c.instructions+=1;NFSU2_TR(0x44b996);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B44b998:L44b998:{c.instructions+=3;NFSU2_TR(0x44b998);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44b99e:{NFSU2_TR(0x44b99e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44b99f:{NFSU2_TR(0x44b99f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B44b9a0:L44b9a0:{c.instructions+=2;NFSU2_TR(0x44b9a0);
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
B44b9a2:{NFSU2_TR(0x44b9a2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44b9e5;}}
}
B44b9a4:L44b9a4:{c.instructions+=3;NFSU2_TR(0x44b9a4);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B44b9a8:{NFSU2_TR(0x44b9a8);
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
B44b9aa:{NFSU2_TR(0x44b9aa);
if(r1(R+518)){{goto L44b9e5;}}
}
B44b9ac:L44b9ac:{c.instructions+=5;NFSU2_TR(0x44b9ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44b9b2:{NFSU2_TR(0x44b9b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44b9b5:{NFSU2_TR(0x44b9b5);
__builtin_memmove((R+8),gp(0x890080),4);
}
B44b9bb:{NFSU2_TR(0x44b9bb);
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
B44b9bd:{NFSU2_TR(0x44b9bd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44b9c2;}}
}
B44b9bf:L44b9bf:{c.instructions+=1;NFSU2_TR(0x44b9bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44b9c2:L44b9c2:{c.instructions+=3;NFSU2_TR(0x44b9c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44b9c8:{NFSU2_TR(0x44b9c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44b9c9:{NFSU2_TR(0x44b9c9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B44b9ca:L44b9ca:{c.instructions+=3;NFSU2_TR(0x44b9ca);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B44b9ce:{NFSU2_TR(0x44b9ce);
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
B44b9d0:{NFSU2_TR(0x44b9d0);
if(r1(R+518)){{goto L44b9e5;}}
}
B44b9d2:L44b9d2:{c.instructions+=5;NFSU2_TR(0x44b9d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44b9d8:{NFSU2_TR(0x44b9d8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B44b9da:{NFSU2_TR(0x44b9da);
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
B44b9dc:{NFSU2_TR(0x44b9dc);
__builtin_memmove((R+0),(R+518),1);
}
B44b9df:{NFSU2_TR(0x44b9df);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44b9e5:L44b9e5:{c.instructions+=2;NFSU2_TR(0x44b9e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44b9e6:{NFSU2_TR(0x44b9e6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B44ba10:L44ba10:{c.instructions+=6;NFSU2_TR(0x44ba10);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44ba14:{NFSU2_TR(0x44ba14);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ba15:{NFSU2_TR(0x44ba15);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ba17:{NFSU2_TR(0x44ba17);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ba18:{NFSU2_TR(0x44ba18);
__builtin_memmove((R+24),(R+4),4);
}
B44ba1a:{NFSU2_TR(0x44ba1a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44ba1full));
TAIL_STATIC(0x44ab90u,44a);
}
B44ba1f:L44ba1f:{c.instructions+=6;NFSU2_TR(0x44ba1f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44ba23:{NFSU2_TR(0x44ba23);
u8 U[4];
w4(U+0,u32(0x787d98ull));
s4(u32(r4(R+24)),r4(U+0));
}
B44ba29:{NFSU2_TR(0x44ba29);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44ba2c:{NFSU2_TR(0x44ba2c);
__builtin_memmove((R+4),gp(0x828640),4);
}
B44ba32:{NFSU2_TR(0x44ba32);
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
B44ba34:{NFSU2_TR(0x44ba34);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44ba5b;}}
}
B44ba36:L44ba36:{c.instructions+=6;NFSU2_TR(0x44ba36);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44ba39:{NFSU2_TR(0x44ba39);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x280ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44ba3f:{NFSU2_TR(0x44ba3f);
__builtin_memmove((R+0),gp(0x828640),4);
}
B44ba44:{NFSU2_TR(0x44ba44);
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
B44ba46:{NFSU2_TR(0x44ba46);
__builtin_memmove((R+0),(R+24),4);
}
B44ba48:{NFSU2_TR(0x44ba48);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44ba5d;}}
}
B44ba4a:L44ba4a:{c.instructions+=4;NFSU2_TR(0x44ba4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44ba4d:{NFSU2_TR(0x44ba4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x284ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44ba57:{NFSU2_TR(0x44ba57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44ba58:{NFSU2_TR(0x44ba58);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B44ba5b:L44ba5b:{c.instructions+=1;NFSU2_TR(0x44ba5b);
__builtin_memmove((R+0),(R+24),4);
}
B44ba5d:L44ba5d:{c.instructions+=2;NFSU2_TR(0x44ba5d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44ba5e:{NFSU2_TR(0x44ba5e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B44ba70:L44ba70:{c.instructions+=2;NFSU2_TR(0x44ba70);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44ba73:{NFSU2_TR(0x44ba73);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B44ba80:L44ba80:{c.instructions+=21;NFSU2_TR(0x44ba80);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ba81:{NFSU2_TR(0x44ba81);
__builtin_memmove((R+20),(R+16),4);
}
B44ba83:{NFSU2_TR(0x44ba83);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B44ba86:{NFSU2_TR(0x44ba86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x13cull))));
}
B44ba8c:{NFSU2_TR(0x44ba8c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ba8d:{NFSU2_TR(0x44ba8d);
__builtin_memmove((R+24),(R+4),4);
}
B44ba8f:{NFSU2_TR(0x44ba8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44ba92:{NFSU2_TR(0x44ba92);
{u32 ea_=u32(r4(R+0)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44ba95:{NFSU2_TR(0x44ba95);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0xd0ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0xd0ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xd0ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B44ba9a:{NFSU2_TR(0x44ba9a);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B44ba9c:{NFSU2_TR(0x44ba9c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ba9d:{NFSU2_TR(0x44ba9d);
{u32 ea_=u32(r4(R+16)+u32(244u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44baa4:{NFSU2_TR(0x44baa4);
{u32 ea_=u32(r4(R+0)+u32(4294967172u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44baa7:{NFSU2_TR(0x44baa7);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B44baa9:{NFSU2_TR(0x44baa9);
{u32 ea_=u32(r4(R+16)+u32(248u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44bab0:{NFSU2_TR(0x44bab0);
{u32 ea_=u32(r4(R+0)+u32(4294967176u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44bab3:{NFSU2_TR(0x44bab3);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B44bab7:{NFSU2_TR(0x44bab7);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B44bab9:{NFSU2_TR(0x44bab9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44baba:{NFSU2_TR(0x44baba);
{u32 ea_=u32(r4(R+16)+u32(256u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44bac1:{NFSU2_TR(0x44bac1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44bac6ull));
TAIL_STATIC(0x5baf80u,5ba);
}
B44bac6:L44bac6:{c.instructions+=6;NFSU2_TR(0x44bac6);
u8 U[4];
w4(U+0,u32(0x4000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44bacb:{NFSU2_TR(0x44bacb);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B44bacf:{NFSU2_TR(0x44bacf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44bad0:{NFSU2_TR(0x44bad0);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44bad4:{NFSU2_TR(0x44bad4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44bad5:{NFSU2_TR(0x44bad5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44badaull));
TAIL_STATIC(0x5bacf0u,5ba);
}
B44bada:L44bada:{c.instructions+=6;NFSU2_TR(0x44bada);
u8 U[4];
w4(U+0,u32(0x4000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44badf:{NFSU2_TR(0x44badf);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B44bae3:{NFSU2_TR(0x44bae3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44bae4:{NFSU2_TR(0x44bae4);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B44bae8:{NFSU2_TR(0x44bae8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44bae9:{NFSU2_TR(0x44bae9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44baeeull));
TAIL_STATIC(0x5bada0u,5ba);
}
B44baee:L44baee:{c.instructions+=6;NFSU2_TR(0x44baee);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44baf0:{NFSU2_TR(0x44baf0);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44baf4:{NFSU2_TR(0x44baf4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44baf5:{NFSU2_TR(0x44baf5);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B44baf9:{NFSU2_TR(0x44baf9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44bafa:{NFSU2_TR(0x44bafa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44baffull));
TAIL_STATIC(0x5bae60u,5ba);
}
B44baff:L44baff:{c.instructions+=149;NFSU2_TR(0x44baff);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44bb03:{NFSU2_TR(0x44bb03);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44bb09:{NFSU2_TR(0x44bb09);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44bb0d:{NFSU2_TR(0x44bb0d);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44bb13:{NFSU2_TR(0x44bb13);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B44bb15:{NFSU2_TR(0x44bb15);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44bb19:{NFSU2_TR(0x44bb19);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44bb1f:{NFSU2_TR(0x44bb1f);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44bb26:{NFSU2_TR(0x44bb26);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44bb2a:{NFSU2_TR(0x44bb2a);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44bb31:{NFSU2_TR(0x44bb31);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B44bb33:{NFSU2_TR(0x44bb33);
{u32 ea_=u32(r4(R+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44bb3a:{NFSU2_TR(0x44bb3a);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44bb3e:{NFSU2_TR(0x44bb3e);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44bb44:{NFSU2_TR(0x44bb44);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44bb4b:{NFSU2_TR(0x44bb4b);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44bb4f:{NFSU2_TR(0x44bb4f);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44bb55:{NFSU2_TR(0x44bb55);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44bb5c:{NFSU2_TR(0x44bb5c);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44bb60:{NFSU2_TR(0x44bb60);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44bb66:{NFSU2_TR(0x44bb66);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44bb6d:{NFSU2_TR(0x44bb6d);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44bb71:{NFSU2_TR(0x44bb71);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44bb78:{NFSU2_TR(0x44bb78);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B44bb7a:{NFSU2_TR(0x44bb7a);
{u32 ea_=u32(r4(R+16)+u32(176u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44bb81:{NFSU2_TR(0x44bb81);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44bb85:{NFSU2_TR(0x44bb85);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44bb8b:{NFSU2_TR(0x44bb8b);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44bb92:{NFSU2_TR(0x44bb92);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44bb96:{NFSU2_TR(0x44bb96);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44bb9c:{NFSU2_TR(0x44bb9c);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44bba3:{NFSU2_TR(0x44bba3);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44bba7:{NFSU2_TR(0x44bba7);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44bbab:{NFSU2_TR(0x44bbab);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44bbb1:{NFSU2_TR(0x44bbb1);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44bbb8:{NFSU2_TR(0x44bbb8);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44bbbc:{NFSU2_TR(0x44bbbc);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44bbc3:{NFSU2_TR(0x44bbc3);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44bbc7:{NFSU2_TR(0x44bbc7);
{u32 ea_=u32(r4(R+16)+u32(180u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44bbce:{NFSU2_TR(0x44bbce);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44bbd2:{NFSU2_TR(0x44bbd2);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44bbd8:{NFSU2_TR(0x44bbd8);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44bbdf:{NFSU2_TR(0x44bbdf);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44bbe3:{NFSU2_TR(0x44bbe3);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44bbe9:{NFSU2_TR(0x44bbe9);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44bbf0:{NFSU2_TR(0x44bbf0);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44bbf7:{NFSU2_TR(0x44bbf7);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44bbfb:{NFSU2_TR(0x44bbfb);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44bc01:{NFSU2_TR(0x44bc01);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44bc08:{NFSU2_TR(0x44bc08);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44bc0c:{NFSU2_TR(0x44bc0c);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44bc13:{NFSU2_TR(0x44bc13);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44bc1a:{NFSU2_TR(0x44bc1a);
{u32 ea_=u32(r4(R+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44bc21:{NFSU2_TR(0x44bc21);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44bc25:{NFSU2_TR(0x44bc25);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44bc2b:{NFSU2_TR(0x44bc2b);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44bc32:{NFSU2_TR(0x44bc32);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44bc36:{NFSU2_TR(0x44bc36);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B44bc38:{NFSU2_TR(0x44bc38);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44bc3f:{NFSU2_TR(0x44bc3f);
{u32 ea_=u32(r4(R+16)+u32(188u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44bc46:{NFSU2_TR(0x44bc46);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44bc4a:{NFSU2_TR(0x44bc4a);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44bc50:{NFSU2_TR(0x44bc50);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44bc57:{NFSU2_TR(0x44bc57);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44bc5b:{NFSU2_TR(0x44bc5b);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B44bc5d:{NFSU2_TR(0x44bc5d);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44bc64:{NFSU2_TR(0x44bc64);
{u32 ea_=u32(r4(R+16)+u32(192u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44bc6b:{NFSU2_TR(0x44bc6b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B44bc6d:{NFSU2_TR(0x44bc6d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B44bc6f:{NFSU2_TR(0x44bc6f);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44bc73:{NFSU2_TR(0x44bc73);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44bc79:{NFSU2_TR(0x44bc79);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44bc7d:{NFSU2_TR(0x44bc7d);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44bc81:{NFSU2_TR(0x44bc81);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B44bc83:{NFSU2_TR(0x44bc83);
{u32 ea_=u32(r4(R+16)+u32(196u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44bc8a:{NFSU2_TR(0x44bc8a);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44bc8e:{NFSU2_TR(0x44bc8e);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44bc94:{NFSU2_TR(0x44bc94);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44bc98:{NFSU2_TR(0x44bc98);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44bc9c:{NFSU2_TR(0x44bc9c);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44bca0:{NFSU2_TR(0x44bca0);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44bca7:{NFSU2_TR(0x44bca7);
{u32 ea_=u32(r4(R+16)+u32(200u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44bcae:{NFSU2_TR(0x44bcae);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44bcb2:{NFSU2_TR(0x44bcb2);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44bcb9:{NFSU2_TR(0x44bcb9);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B44bcbb:{NFSU2_TR(0x44bcbb);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44bcc2:{NFSU2_TR(0x44bcc2);
{u32 ea_=u32(r4(R+16)+u32(204u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44bcc9:{NFSU2_TR(0x44bcc9);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44bccd:{NFSU2_TR(0x44bccd);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44bcd4:{NFSU2_TR(0x44bcd4);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44bcdb:{NFSU2_TR(0x44bcdb);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44bce2:{NFSU2_TR(0x44bce2);
{u32 ea_=u32(r4(R+16)+u32(208u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44bce9:{NFSU2_TR(0x44bce9);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44bced:{NFSU2_TR(0x44bced);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44bcf4:{NFSU2_TR(0x44bcf4);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44bcfb:{NFSU2_TR(0x44bcfb);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B44bcfd:{NFSU2_TR(0x44bcfd);
{u32 ea_=u32(r4(R+16)+u32(212u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44bd04:{NFSU2_TR(0x44bd04);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B44bd06:{NFSU2_TR(0x44bd06);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B44bd08:{NFSU2_TR(0x44bd08);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44bd0c:{NFSU2_TR(0x44bd0c);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44bd10:{NFSU2_TR(0x44bd10);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44bd17:{NFSU2_TR(0x44bd17);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44bd1e:{NFSU2_TR(0x44bd1e);
{u32 ea_=u32(r4(R+16)+u32(216u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44bd25:{NFSU2_TR(0x44bd25);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44bd29:{NFSU2_TR(0x44bd29);
{u32 ea_=u32(r4(R+16)+u32(292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44bd30:{NFSU2_TR(0x44bd30);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44bd34:{NFSU2_TR(0x44bd34);
{u32 ea_=u32(r4(R+16)+u32(288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44bd3b:{NFSU2_TR(0x44bd3b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44bd3d:{NFSU2_TR(0x44bd3d);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44bd41:{NFSU2_TR(0x44bd41);
u8 U[4];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B44bd48:{NFSU2_TR(0x44bd48);
{u32 ea_=u32(r4(R+16)+u32(284u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44bd4f:{NFSU2_TR(0x44bd4f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44bd50:{NFSU2_TR(0x44bd50);
u8 U[4];
w4(U+0,u32(u32(u32(0x130ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44bd57:{NFSU2_TR(0x44bd57);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44bd58:{NFSU2_TR(0x44bd58);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44bd5a:{NFSU2_TR(0x44bd5a);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44bd5e:{NFSU2_TR(0x44bd5e);
{u32 ea_=u32(r4(R+16)+u32(228u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44bd65:{NFSU2_TR(0x44bd65);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44bd69:{NFSU2_TR(0x44bd69);
{u32 ea_=u32(r4(R+16)+u32(300u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44bd70:{NFSU2_TR(0x44bd70);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44bd74:{NFSU2_TR(0x44bd74);
{u32 ea_=u32(r4(R+16)+u32(296u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44bd7b:{NFSU2_TR(0x44bd7b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44bd7d:{NFSU2_TR(0x44bd7d);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44bd81:{NFSU2_TR(0x44bd81);
{u32 ea_=u32(r4(R+16)+u32(292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44bd88:{NFSU2_TR(0x44bd88);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44bd8a:{NFSU2_TR(0x44bd8a);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44bd8e:{NFSU2_TR(0x44bd8e);
{u32 ea_=u32(r4(R+16)+u32(232u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44bd95:{NFSU2_TR(0x44bd95);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44bd99:{NFSU2_TR(0x44bd99);
{u32 ea_=u32(r4(R+16)+u32(300u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44bda0:{NFSU2_TR(0x44bda0);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44bda4:{NFSU2_TR(0x44bda4);
{u32 ea_=u32(r4(R+16)+u32(296u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44bdab:{NFSU2_TR(0x44bdab);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44bdad:{NFSU2_TR(0x44bdad);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44bdb1:{NFSU2_TR(0x44bdb1);
{u32 ea_=u32(r4(R+16)+u32(292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44bdb8:{NFSU2_TR(0x44bdb8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44bdba:{NFSU2_TR(0x44bdba);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44bdbe:{NFSU2_TR(0x44bdbe);
{u32 ea_=u32(r4(R+16)+u32(236u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44bdc5:{NFSU2_TR(0x44bdc5);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44bdc9:{NFSU2_TR(0x44bdc9);
{u32 ea_=u32(r4(R+16)+u32(300u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44bdd0:{NFSU2_TR(0x44bdd0);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44bdd4:{NFSU2_TR(0x44bdd4);
{u32 ea_=u32(r4(R+16)+u32(296u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44bddb:{NFSU2_TR(0x44bddb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44bddd:{NFSU2_TR(0x44bddd);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44bde1:{NFSU2_TR(0x44bde1);
{u32 ea_=u32(r4(R+16)+u32(292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44bde8:{NFSU2_TR(0x44bde8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44bdea:{NFSU2_TR(0x44bdea);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44bdf1:{NFSU2_TR(0x44bdf1);
{u32 ea_=u32(r4(R+16)+u32(240u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44bdf8:{NFSU2_TR(0x44bdf8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44bdfdull));
TAIL_STATIC(0x4012b0u,401);
}
B44bdfd:L44bdfd:{c.instructions+=13;NFSU2_TR(0x44bdfd);
{u32 ea_=u32(u32(8307904u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44be03:{NFSU2_TR(0x44be03);
__builtin_memmove((R+0),gp(0x828640),4);
}
B44be08:{NFSU2_TR(0x44be08);
{u32 ea_=u32(r4(R+16)+u32(356u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44be0f:{NFSU2_TR(0x44be0f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x34ull))));
}
B44be12:{NFSU2_TR(0x44be12);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44be14:{NFSU2_TR(0x44be14);
{u32 ea_=u32(r4(R+16)+u32(304u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44be1b:{NFSU2_TR(0x44be1b);
{u32 ea_=u32(u32(8307908u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44be21:{NFSU2_TR(0x44be21);
{u32 ea_=u32(r4(R+16)+u32(308u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44be28:{NFSU2_TR(0x44be28);
{u32 ea_=u32(r4(R+16)+u32(308u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44be2f:{NFSU2_TR(0x44be2f);
{u32 ea_=u32(u32(8307912u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44be35:{NFSU2_TR(0x44be35);
{u32 ea_=u32(r4(R+16)+u32(312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44be3c:{NFSU2_TR(0x44be3c);
{u32 ea_=u32(r4(R+16)+u32(312u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44be43:{NFSU2_TR(0x44be43);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44be51;}}
}
B44be45:L44be45:{c.instructions+=2;NFSU2_TR(0x44be45);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44be48:{NFSU2_TR(0x44be48);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc4ull))));
w2(U+4,u16(0x4e20ull));
s2(u32(r4(U+0)),r2(U+4));
}
B44be51:L44be51:{c.instructions+=11;NFSU2_TR(0x44be51);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44be54:{NFSU2_TR(0x44be54);
__builtin_memmove((R+8),gp(0x7870d4),4);
}
B44be5a:{NFSU2_TR(0x44be5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44be60:{NFSU2_TR(0x44be60);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44be63:{NFSU2_TR(0x44be63);
__builtin_memmove((R+4),gp(0x7870d8),4);
}
B44be69:{NFSU2_TR(0x44be69);
u8 U[4];
w4(U+0,u32(u32(u32(0x100ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44be70:{NFSU2_TR(0x44be70);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44be76:{NFSU2_TR(0x44be76);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44be79:{NFSU2_TR(0x44be79);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44be7a:{NFSU2_TR(0x44be7a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44be7b:{NFSU2_TR(0x44be7b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44be80ull));
TAIL_STATIC(0x572a50u,572);
}
B44be80:L44be80:{c.instructions+=7;NFSU2_TR(0x44be80);
__builtin_memmove((R+4),gp(0x865198),4);
}
B44be86:{NFSU2_TR(0x44be86);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B44be89:{NFSU2_TR(0x44be89);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44be8a:{NFSU2_TR(0x44be8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44be8d:{NFSU2_TR(0x44be8d);
u8 U[4];
w4(U+0,u32(u32(u32(0x104ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44be94:{NFSU2_TR(0x44be94);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44be95:{NFSU2_TR(0x44be95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44be9aull));
TAIL_STATIC(0x447280u,447);
}
B44be9a:L44be9a:{c.instructions+=4;NFSU2_TR(0x44be9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44be9b:{NFSU2_TR(0x44be9b);
__builtin_memmove((R+16),(R+20),4);
}
B44be9d:{NFSU2_TR(0x44be9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B44be9e:{NFSU2_TR(0x44be9e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B44bea0:L44bea0:{c.instructions+=17;NFSU2_TR(0x44bea0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44bea1:{NFSU2_TR(0x44bea1);
__builtin_memmove((R+20),(R+16),4);
}
B44bea3:{NFSU2_TR(0x44bea3);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44bea5:{NFSU2_TR(0x44bea5);
u8 U[4];
w4(U+0,u32(0x7720c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44beaa:{NFSU2_TR(0x44beaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44beb0:{NFSU2_TR(0x44beb0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44beb1:{NFSU2_TR(0x44beb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44beb8:{NFSU2_TR(0x44beb8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44beb9:{NFSU2_TR(0x44beb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44bebc:{NFSU2_TR(0x44bebc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44bebd:{NFSU2_TR(0x44bebd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44bebe:{NFSU2_TR(0x44bebe);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44bebf:{NFSU2_TR(0x44bebf);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44bec1:{NFSU2_TR(0x44bec1);
__builtin_memmove((R+12),(R+4),4);
}
B44bec3:{NFSU2_TR(0x44bec3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44bec4:{NFSU2_TR(0x44bec4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44bec7:{NFSU2_TR(0x44bec7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44beccull));
TAIL_STATIC(0x44ab90u,44a);
}
B44becc:L44becc:{c.instructions+=4;NFSU2_TR(0x44becc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B44becf:{NFSU2_TR(0x44becf);
u8 U[4];
w4(U+0,u32(0x787de8ull));
s4(u32(r4(R+12)),r4(U+0));
}
B44bed5:{NFSU2_TR(0x44bed5);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x68ull))));
__builtin_memmove((R+28),(U+0),4);
}
B44bed8:{NFSU2_TR(0x44bed8);
w4(R+4,u32(0x29ull));
}
B44bedd:L44bedd:{c.instructions+=1;NFSU2_TR(0x44bedd);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L44bedf;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x44beddu);}goto L44bedd;}
}
B44bedf:L44bedf:{c.instructions+=5;NFSU2_TR(0x44bedf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44bee2:{NFSU2_TR(0x44bee2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44bee3:{NFSU2_TR(0x44bee3);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x110ull))));
__builtin_memmove((R+4),(U+0),4);
}
B44bee9:{NFSU2_TR(0x44bee9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44bef0:{NFSU2_TR(0x44bef0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44bef5ull));
TAIL_STATIC(0x444c60u,444);
}
B44bef5:L44bef5:{c.instructions+=6;NFSU2_TR(0x44bef5);
u8 U[4];
w4(U+0,u32(0x4000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44befa:{NFSU2_TR(0x44befa);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44befc:{NFSU2_TR(0x44befc);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B44befe:{NFSU2_TR(0x44befe);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x340ull))));
__builtin_memmove((R+4),(U+0),4);
}
B44bf04:{NFSU2_TR(0x44bf04);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44bf05:{NFSU2_TR(0x44bf05);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44bf0aull));
TAIL_STATIC(0x573140u,573);
}
B44bf0a:L44bf0a:{c.instructions+=6;NFSU2_TR(0x44bf0a);
u8 U[4];
w4(U+0,u32(0x4000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44bf0f:{NFSU2_TR(0x44bf0f);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44bf11:{NFSU2_TR(0x44bf11);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x370ull))));
__builtin_memmove((R+4),(U+0),4);
}
B44bf17:{NFSU2_TR(0x44bf17);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44bf18:{NFSU2_TR(0x44bf18);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B44bf1c:{NFSU2_TR(0x44bf1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44bf21ull));
TAIL_STATIC(0x573140u,573);
}
B44bf21:L44bf21:{c.instructions+=6;NFSU2_TR(0x44bf21);
u8 U[4];
w4(U+0,u32(0x4000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44bf26:{NFSU2_TR(0x44bf26);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44bf28:{NFSU2_TR(0x44bf28);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3a0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B44bf2e:{NFSU2_TR(0x44bf2e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44bf2f:{NFSU2_TR(0x44bf2f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B44bf33:{NFSU2_TR(0x44bf33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44bf38ull));
TAIL_STATIC(0x573140u,573);
}
B44bf38:L44bf38:{c.instructions+=6;NFSU2_TR(0x44bf38);
u8 U[4];
w4(U+0,u32(0x4000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44bf3d:{NFSU2_TR(0x44bf3d);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44bf3f:{NFSU2_TR(0x44bf3f);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3d0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B44bf45:{NFSU2_TR(0x44bf45);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44bf46:{NFSU2_TR(0x44bf46);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w1(U+4,u8(0x3ull));
s1(u32(r4(U+0)),r1(U+4));
}
B44bf4a:{NFSU2_TR(0x44bf4a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44bf4full));
TAIL_STATIC(0x573140u,573);
}
B44bf4f:L44bf4f:{c.instructions+=22;NFSU2_TR(0x44bf4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44bf52:{NFSU2_TR(0x44bf52);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B44bf55:{NFSU2_TR(0x44bf55);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x400ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44bf5b:{NFSU2_TR(0x44bf5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x404ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44bf61:{NFSU2_TR(0x44bf61);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x438ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44bf67:{NFSU2_TR(0x44bf67);
w4(R+0,u32(0x3f800000ull));
}
B44bf6c:{NFSU2_TR(0x44bf6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x460ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44bf72:{NFSU2_TR(0x44bf72);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x464ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44bf78:{NFSU2_TR(0x44bf78);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44bf7b:{NFSU2_TR(0x44bf7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x43cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44bf81:{NFSU2_TR(0x44bf81);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x440ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44bf87:{NFSU2_TR(0x44bf87);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x444ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44bf8d:{NFSU2_TR(0x44bf8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x448ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44bf93:{NFSU2_TR(0x44bf93);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x468ull))));
__builtin_memmove((U+4),(R+28),2);
s2(u32(r4(U+0)),r2(U+4));
}
B44bf9a:{NFSU2_TR(0x44bf9a);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x46aull))));
w2(U+4,u16(0x1ull));
s2(u32(r4(U+0)),r2(U+4));
}
B44bfa3:{NFSU2_TR(0x44bfa3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x46cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44bfa9:{NFSU2_TR(0x44bfa9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44bfac:{NFSU2_TR(0x44bfac);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44bfae:{NFSU2_TR(0x44bfae);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44bfaf:{NFSU2_TR(0x44bfaf);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x340ull))));
__builtin_memmove((R+4),(U+0),4);
}
B44bfb5:{NFSU2_TR(0x44bfb5);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w1(U+4,u8(0x4ull));
s1(u32(r4(U+0)),r1(U+4));
}
B44bfb9:{NFSU2_TR(0x44bfb9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44bfbeull));
TAIL_STATIC(0x579770u,579);
}
B44bfbe:L44bfbe:{c.instructions+=6;NFSU2_TR(0x44bfbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44bfc1:{NFSU2_TR(0x44bfc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44bfc4:{NFSU2_TR(0x44bfc4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44bfc5:{NFSU2_TR(0x44bfc5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44bfc6:{NFSU2_TR(0x44bfc6);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x370ull))));
__builtin_memmove((R+4),(U+0),4);
}
B44bfcc:{NFSU2_TR(0x44bfcc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44bfd1ull));
TAIL_STATIC(0x579770u,579);
}
B44bfd1:L44bfd1:{c.instructions+=6;NFSU2_TR(0x44bfd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44bfd4:{NFSU2_TR(0x44bfd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44bfd7:{NFSU2_TR(0x44bfd7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44bfd8:{NFSU2_TR(0x44bfd8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44bfd9:{NFSU2_TR(0x44bfd9);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3a0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B44bfdf:{NFSU2_TR(0x44bfdf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44bfe4ull));
TAIL_STATIC(0x579770u,579);
}
B44bfe4:L44bfe4:{c.instructions+=6;NFSU2_TR(0x44bfe4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x138ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44bfea:{NFSU2_TR(0x44bfea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44bfeb:{NFSU2_TR(0x44bfeb);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x140ull))));
__builtin_memmove((R+4),(U+0),4);
}
B44bff1:{NFSU2_TR(0x44bff1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44bff2:{NFSU2_TR(0x44bff2);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3d0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B44bff8:{NFSU2_TR(0x44bff8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44bffdull));
TAIL_STATIC(0x579770u,579);
}
B44bffd:L44bffd:{c.instructions+=1;NFSU2_TR(0x44bffd);
u8 U[8];
__builtin_memmove((U+0),gp(0x828640),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+28))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
TAIL_STATIC(0x44c003u,44c);
}
XIT:NFSU2_TR_EXIT(0x44b,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
