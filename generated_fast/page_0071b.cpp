#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_71c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x71b,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x71b,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_71b(u8* __restrict R,Cpu& c);
u32 page_71b(Cpu& c){return body_71b(c.regs.data(),c);}
__attribute__((noinline)) u32 body_71b(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x71b002:goto L71b002;
case 0x71b005:c.instructions+=44;goto B71b005;
case 0x71b008:c.instructions+=43;goto B71b008;
case 0x71b00b:c.instructions+=42;goto B71b00b;
case 0x71b00f:c.instructions+=41;goto B71b00f;
case 0x71b012:c.instructions+=40;goto B71b012;
case 0x71b015:c.instructions+=39;goto B71b015;
case 0x71b018:c.instructions+=38;goto B71b018;
case 0x71b01d:c.instructions+=37;goto B71b01d;
case 0x71b021:c.instructions+=36;goto B71b021;
case 0x71b025:c.instructions+=35;goto B71b025;
case 0x71b028:c.instructions+=34;goto B71b028;
case 0x71b02b:c.instructions+=33;goto B71b02b;
case 0x71b02e:c.instructions+=32;goto B71b02e;
case 0x71b033:c.instructions+=31;goto B71b033;
case 0x71b037:c.instructions+=30;goto B71b037;
case 0x71b03a:c.instructions+=29;goto B71b03a;
case 0x71b03d:c.instructions+=28;goto B71b03d;
case 0x71b042:c.instructions+=27;goto B71b042;
case 0x71b045:c.instructions+=26;goto B71b045;
case 0x71b049:c.instructions+=25;goto B71b049;
case 0x71b04c:c.instructions+=24;goto B71b04c;
case 0x71b04f:c.instructions+=23;goto B71b04f;
case 0x71b052:c.instructions+=22;goto B71b052;
case 0x71b056:c.instructions+=21;goto B71b056;
case 0x71b059:c.instructions+=20;goto B71b059;
case 0x71b05c:c.instructions+=19;goto B71b05c;
case 0x71b05f:c.instructions+=18;goto B71b05f;
case 0x71b062:c.instructions+=17;goto B71b062;
case 0x71b065:c.instructions+=16;goto B71b065;
case 0x71b068:c.instructions+=15;goto B71b068;
case 0x71b069:c.instructions+=14;goto B71b069;
case 0x71b06c:c.instructions+=13;goto B71b06c;
case 0x71b06f:c.instructions+=12;goto B71b06f;
case 0x71b072:c.instructions+=11;goto B71b072;
case 0x71b076:c.instructions+=10;goto B71b076;
case 0x71b07a:c.instructions+=9;goto B71b07a;
case 0x71b07d:c.instructions+=8;goto B71b07d;
case 0x71b082:c.instructions+=7;goto B71b082;
case 0x71b085:c.instructions+=6;goto B71b085;
case 0x71b08a:c.instructions+=5;goto B71b08a;
case 0x71b08d:c.instructions+=4;goto B71b08d;
case 0x71b092:c.instructions+=3;goto B71b092;
case 0x71b093:c.instructions+=2;goto B71b093;
case 0x71b094:c.instructions+=1;goto B71b094;
case 0x71b095:goto L71b095;
case 0x71b096:c.instructions+=99;goto B71b096;
case 0x71b098:c.instructions+=98;goto B71b098;
case 0x71b099:c.instructions+=97;goto B71b099;
case 0x71b09c:c.instructions+=96;goto B71b09c;
case 0x71b09e:c.instructions+=95;goto B71b09e;
case 0x71b09f:c.instructions+=94;goto B71b09f;
case 0x71b0a2:c.instructions+=93;goto B71b0a2;
case 0x71b0a5:c.instructions+=92;goto B71b0a5;
case 0x71b0a8:c.instructions+=91;goto B71b0a8;
case 0x71b0ab:c.instructions+=90;goto B71b0ab;
case 0x71b0ae:c.instructions+=89;goto B71b0ae;
case 0x71b0b1:c.instructions+=88;goto B71b0b1;
case 0x71b0b5:c.instructions+=87;goto B71b0b5;
case 0x71b0b8:c.instructions+=86;goto B71b0b8;
case 0x71b0bb:c.instructions+=85;goto B71b0bb;
case 0x71b0be:c.instructions+=84;goto B71b0be;
case 0x71b0c2:c.instructions+=83;goto B71b0c2;
case 0x71b0c5:c.instructions+=82;goto B71b0c5;
case 0x71b0c9:c.instructions+=81;goto B71b0c9;
case 0x71b0cc:c.instructions+=80;goto B71b0cc;
case 0x71b0cf:c.instructions+=79;goto B71b0cf;
case 0x71b0d2:c.instructions+=78;goto B71b0d2;
case 0x71b0d5:c.instructions+=77;goto B71b0d5;
case 0x71b0d8:c.instructions+=76;goto B71b0d8;
case 0x71b0dc:c.instructions+=75;goto B71b0dc;
case 0x71b0df:c.instructions+=74;goto B71b0df;
case 0x71b0e2:c.instructions+=73;goto B71b0e2;
case 0x71b0e5:c.instructions+=72;goto B71b0e5;
case 0x71b0e9:c.instructions+=71;goto B71b0e9;
case 0x71b0ed:c.instructions+=70;goto B71b0ed;
case 0x71b0f0:c.instructions+=69;goto B71b0f0;
case 0x71b0f4:c.instructions+=68;goto B71b0f4;
case 0x71b0f9:c.instructions+=67;goto B71b0f9;
case 0x71b0fc:c.instructions+=66;goto B71b0fc;
case 0x71b0ff:c.instructions+=65;goto B71b0ff;
case 0x71b102:c.instructions+=64;goto B71b102;
case 0x71b105:c.instructions+=63;goto B71b105;
case 0x71b108:c.instructions+=62;goto B71b108;
case 0x71b10c:c.instructions+=61;goto B71b10c;
case 0x71b10f:c.instructions+=60;goto B71b10f;
case 0x71b112:c.instructions+=59;goto B71b112;
case 0x71b115:c.instructions+=58;goto B71b115;
case 0x71b118:c.instructions+=57;goto B71b118;
case 0x71b11c:c.instructions+=56;goto B71b11c;
case 0x71b121:c.instructions+=55;goto B71b121;
case 0x71b124:c.instructions+=54;goto B71b124;
case 0x71b129:c.instructions+=53;goto B71b129;
case 0x71b12c:c.instructions+=52;goto B71b12c;
case 0x71b12f:c.instructions+=51;goto B71b12f;
case 0x71b132:c.instructions+=50;goto B71b132;
case 0x71b135:c.instructions+=49;goto B71b135;
case 0x71b138:c.instructions+=48;goto B71b138;
case 0x71b13b:c.instructions+=47;goto B71b13b;
case 0x71b13e:c.instructions+=46;goto B71b13e;
case 0x71b141:c.instructions+=45;goto B71b141;
case 0x71b144:c.instructions+=44;goto B71b144;
case 0x71b148:c.instructions+=43;goto B71b148;
case 0x71b14b:c.instructions+=42;goto B71b14b;
case 0x71b14e:c.instructions+=41;goto B71b14e;
case 0x71b151:c.instructions+=40;goto B71b151;
case 0x71b154:c.instructions+=39;goto B71b154;
case 0x71b158:c.instructions+=38;goto B71b158;
case 0x71b15c:c.instructions+=37;goto B71b15c;
case 0x71b15f:c.instructions+=36;goto B71b15f;
case 0x71b162:c.instructions+=35;goto B71b162;
case 0x71b165:c.instructions+=34;goto B71b165;
case 0x71b168:c.instructions+=33;goto B71b168;
case 0x71b16b:c.instructions+=32;goto B71b16b;
case 0x71b16e:c.instructions+=31;goto B71b16e;
case 0x71b171:c.instructions+=30;goto B71b171;
case 0x71b174:c.instructions+=29;goto B71b174;
case 0x71b178:c.instructions+=28;goto B71b178;
case 0x71b17b:c.instructions+=27;goto B71b17b;
case 0x71b17e:c.instructions+=26;goto B71b17e;
case 0x71b181:c.instructions+=25;goto B71b181;
case 0x71b184:c.instructions+=24;goto B71b184;
case 0x71b187:c.instructions+=23;goto B71b187;
case 0x71b18b:c.instructions+=22;goto B71b18b;
case 0x71b18e:c.instructions+=21;goto B71b18e;
case 0x71b191:c.instructions+=20;goto B71b191;
case 0x71b195:c.instructions+=19;goto B71b195;
case 0x71b199:c.instructions+=18;goto B71b199;
case 0x71b19c:c.instructions+=17;goto B71b19c;
case 0x71b19f:c.instructions+=16;goto B71b19f;
case 0x71b1a2:c.instructions+=15;goto B71b1a2;
case 0x71b1a6:c.instructions+=14;goto B71b1a6;
case 0x71b1a9:c.instructions+=13;goto B71b1a9;
case 0x71b1ae:c.instructions+=12;goto B71b1ae;
case 0x71b1b1:c.instructions+=11;goto B71b1b1;
case 0x71b1b4:c.instructions+=10;goto B71b1b4;
case 0x71b1b7:c.instructions+=9;goto B71b1b7;
case 0x71b1ba:c.instructions+=8;goto B71b1ba;
case 0x71b1bd:c.instructions+=7;goto B71b1bd;
case 0x71b1c0:c.instructions+=6;goto B71b1c0;
case 0x71b1c3:c.instructions+=5;goto B71b1c3;
case 0x71b1c8:c.instructions+=4;goto B71b1c8;
case 0x71b1cc:c.instructions+=3;goto B71b1cc;
case 0x71b1cd:c.instructions+=2;goto B71b1cd;
case 0x71b1ce:c.instructions+=1;goto B71b1ce;
case 0x71b1cf:goto L71b1cf;
case 0x71b1d0:c.instructions+=709;goto B71b1d0;
case 0x71b1d1:c.instructions+=708;goto B71b1d1;
case 0x71b1d2:c.instructions+=707;goto B71b1d2;
case 0x71b1d6:c.instructions+=706;goto B71b1d6;
case 0x71b1da:c.instructions+=705;goto B71b1da;
case 0x71b1dc:c.instructions+=704;goto B71b1dc;
case 0x71b1df:c.instructions+=703;goto B71b1df;
case 0x71b1e2:c.instructions+=702;goto B71b1e2;
case 0x71b1e5:c.instructions+=701;goto B71b1e5;
case 0x71b1e8:c.instructions+=700;goto B71b1e8;
case 0x71b1eb:c.instructions+=699;goto B71b1eb;
case 0x71b1ef:c.instructions+=698;goto B71b1ef;
case 0x71b1f5:c.instructions+=697;goto B71b1f5;
case 0x71b1f8:c.instructions+=696;goto B71b1f8;
case 0x71b1fb:c.instructions+=695;goto B71b1fb;
case 0x71b1ff:c.instructions+=694;goto B71b1ff;
case 0x71b203:c.instructions+=693;goto B71b203;
case 0x71b206:c.instructions+=692;goto B71b206;
case 0x71b209:c.instructions+=691;goto B71b209;
case 0x71b20d:c.instructions+=690;goto B71b20d;
case 0x71b211:c.instructions+=689;goto B71b211;
case 0x71b215:c.instructions+=688;goto B71b215;
case 0x71b218:c.instructions+=687;goto B71b218;
case 0x71b21b:c.instructions+=686;goto B71b21b;
case 0x71b21e:c.instructions+=685;goto B71b21e;
case 0x71b221:c.instructions+=684;goto B71b221;
case 0x71b225:c.instructions+=683;goto B71b225;
case 0x71b229:c.instructions+=682;goto B71b229;
case 0x71b22c:c.instructions+=681;goto B71b22c;
case 0x71b22f:c.instructions+=680;goto B71b22f;
case 0x71b232:c.instructions+=679;goto B71b232;
case 0x71b235:c.instructions+=678;goto B71b235;
case 0x71b238:c.instructions+=677;goto B71b238;
case 0x71b23c:c.instructions+=676;goto B71b23c;
case 0x71b23f:c.instructions+=675;goto B71b23f;
case 0x71b242:c.instructions+=674;goto B71b242;
case 0x71b245:c.instructions+=673;goto B71b245;
case 0x71b249:c.instructions+=672;goto B71b249;
case 0x71b24d:c.instructions+=671;goto B71b24d;
case 0x71b251:c.instructions+=670;goto B71b251;
case 0x71b254:c.instructions+=669;goto B71b254;
case 0x71b257:c.instructions+=668;goto B71b257;
case 0x71b25a:c.instructions+=667;goto B71b25a;
case 0x71b25e:c.instructions+=666;goto B71b25e;
case 0x71b261:c.instructions+=665;goto B71b261;
case 0x71b265:c.instructions+=664;goto B71b265;
case 0x71b269:c.instructions+=663;goto B71b269;
case 0x71b26d:c.instructions+=662;goto B71b26d;
case 0x71b270:c.instructions+=661;goto B71b270;
case 0x71b273:c.instructions+=660;goto B71b273;
case 0x71b277:c.instructions+=659;goto B71b277;
case 0x71b27b:c.instructions+=658;goto B71b27b;
case 0x71b27e:c.instructions+=657;goto B71b27e;
case 0x71b281:c.instructions+=656;goto B71b281;
case 0x71b284:c.instructions+=655;goto B71b284;
case 0x71b288:c.instructions+=654;goto B71b288;
case 0x71b28b:c.instructions+=653;goto B71b28b;
case 0x71b28f:c.instructions+=652;goto B71b28f;
case 0x71b292:c.instructions+=651;goto B71b292;
case 0x71b296:c.instructions+=650;goto B71b296;
case 0x71b299:c.instructions+=649;goto B71b299;
case 0x71b29d:c.instructions+=648;goto B71b29d;
case 0x71b2a1:c.instructions+=647;goto B71b2a1;
case 0x71b2a5:c.instructions+=646;goto B71b2a5;
case 0x71b2a8:c.instructions+=645;goto B71b2a8;
case 0x71b2ac:c.instructions+=644;goto B71b2ac;
case 0x71b2af:c.instructions+=643;goto B71b2af;
case 0x71b2b2:c.instructions+=642;goto B71b2b2;
case 0x71b2b5:c.instructions+=641;goto B71b2b5;
case 0x71b2b9:c.instructions+=640;goto B71b2b9;
case 0x71b2bd:c.instructions+=639;goto B71b2bd;
case 0x71b2c0:c.instructions+=638;goto B71b2c0;
case 0x71b2c3:c.instructions+=637;goto B71b2c3;
case 0x71b2c7:c.instructions+=636;goto B71b2c7;
case 0x71b2ca:c.instructions+=635;goto B71b2ca;
case 0x71b2ce:c.instructions+=634;goto B71b2ce;
case 0x71b2d1:c.instructions+=633;goto B71b2d1;
case 0x71b2d5:c.instructions+=632;goto B71b2d5;
case 0x71b2d8:c.instructions+=631;goto B71b2d8;
case 0x71b2dc:c.instructions+=630;goto B71b2dc;
case 0x71b2df:c.instructions+=629;goto B71b2df;
case 0x71b2e3:c.instructions+=628;goto B71b2e3;
case 0x71b2e6:c.instructions+=627;goto B71b2e6;
case 0x71b2ea:c.instructions+=626;goto B71b2ea;
case 0x71b2ee:c.instructions+=625;goto B71b2ee;
case 0x71b2f2:c.instructions+=624;goto B71b2f2;
case 0x71b2f5:c.instructions+=623;goto B71b2f5;
case 0x71b2f9:c.instructions+=622;goto B71b2f9;
case 0x71b2fc:c.instructions+=621;goto B71b2fc;
case 0x71b300:c.instructions+=620;goto B71b300;
case 0x71b303:c.instructions+=619;goto B71b303;
case 0x71b306:c.instructions+=618;goto B71b306;
case 0x71b309:c.instructions+=617;goto B71b309;
case 0x71b30d:c.instructions+=616;goto B71b30d;
case 0x71b310:c.instructions+=615;goto B71b310;
case 0x71b314:c.instructions+=614;goto B71b314;
case 0x71b317:c.instructions+=613;goto B71b317;
case 0x71b31b:c.instructions+=612;goto B71b31b;
case 0x71b31e:c.instructions+=611;goto B71b31e;
case 0x71b322:c.instructions+=610;goto B71b322;
case 0x71b325:c.instructions+=609;goto B71b325;
case 0x71b329:c.instructions+=608;goto B71b329;
case 0x71b32c:c.instructions+=607;goto B71b32c;
case 0x71b32f:c.instructions+=606;goto B71b32f;
case 0x71b333:c.instructions+=605;goto B71b333;
case 0x71b336:c.instructions+=604;goto B71b336;
case 0x71b339:c.instructions+=603;goto B71b339;
case 0x71b33d:c.instructions+=602;goto B71b33d;
case 0x71b340:c.instructions+=601;goto B71b340;
case 0x71b344:c.instructions+=600;goto B71b344;
case 0x71b347:c.instructions+=599;goto B71b347;
case 0x71b34b:c.instructions+=598;goto B71b34b;
case 0x71b34f:c.instructions+=597;goto B71b34f;
case 0x71b353:c.instructions+=596;goto B71b353;
case 0x71b356:c.instructions+=595;goto B71b356;
case 0x71b35a:c.instructions+=594;goto B71b35a;
case 0x71b35d:c.instructions+=593;goto B71b35d;
case 0x71b361:c.instructions+=592;goto B71b361;
case 0x71b364:c.instructions+=591;goto B71b364;
case 0x71b368:c.instructions+=590;goto B71b368;
case 0x71b36c:c.instructions+=589;goto B71b36c;
case 0x71b36f:c.instructions+=588;goto B71b36f;
case 0x71b372:c.instructions+=587;goto B71b372;
case 0x71b376:c.instructions+=586;goto B71b376;
case 0x71b379:c.instructions+=585;goto B71b379;
case 0x71b37c:c.instructions+=584;goto B71b37c;
case 0x71b380:c.instructions+=583;goto B71b380;
case 0x71b383:c.instructions+=582;goto B71b383;
case 0x71b386:c.instructions+=581;goto B71b386;
case 0x71b38a:c.instructions+=580;goto B71b38a;
case 0x71b38d:c.instructions+=579;goto B71b38d;
case 0x71b391:c.instructions+=578;goto B71b391;
case 0x71b394:c.instructions+=577;goto B71b394;
case 0x71b398:c.instructions+=576;goto B71b398;
case 0x71b39b:c.instructions+=575;goto B71b39b;
case 0x71b39f:c.instructions+=574;goto B71b39f;
case 0x71b3a2:c.instructions+=573;goto B71b3a2;
case 0x71b3a6:c.instructions+=572;goto B71b3a6;
case 0x71b3aa:c.instructions+=571;goto B71b3aa;
case 0x71b3ad:c.instructions+=570;goto B71b3ad;
case 0x71b3b0:c.instructions+=569;goto B71b3b0;
case 0x71b3b4:c.instructions+=568;goto B71b3b4;
case 0x71b3b7:c.instructions+=567;goto B71b3b7;
case 0x71b3bb:c.instructions+=566;goto B71b3bb;
case 0x71b3be:c.instructions+=565;goto B71b3be;
case 0x71b3c2:c.instructions+=564;goto B71b3c2;
case 0x71b3c6:c.instructions+=563;goto B71b3c6;
case 0x71b3ca:c.instructions+=562;goto B71b3ca;
case 0x71b3cd:c.instructions+=561;goto B71b3cd;
case 0x71b3d0:c.instructions+=560;goto B71b3d0;
case 0x71b3d3:c.instructions+=559;goto B71b3d3;
case 0x71b3d7:c.instructions+=558;goto B71b3d7;
case 0x71b3da:c.instructions+=557;goto B71b3da;
case 0x71b3de:c.instructions+=556;goto B71b3de;
case 0x71b3e1:c.instructions+=555;goto B71b3e1;
case 0x71b3e5:c.instructions+=554;goto B71b3e5;
case 0x71b3e8:c.instructions+=553;goto B71b3e8;
case 0x71b3eb:c.instructions+=552;goto B71b3eb;
case 0x71b3ee:c.instructions+=551;goto B71b3ee;
case 0x71b3f2:c.instructions+=550;goto B71b3f2;
case 0x71b3f6:c.instructions+=549;goto B71b3f6;
case 0x71b3fa:c.instructions+=548;goto B71b3fa;
case 0x71b3fd:c.instructions+=547;goto B71b3fd;
case 0x71b400:c.instructions+=546;goto B71b400;
case 0x71b403:c.instructions+=545;goto B71b403;
case 0x71b406:c.instructions+=544;goto B71b406;
case 0x71b40a:c.instructions+=543;goto B71b40a;
case 0x71b40e:c.instructions+=542;goto B71b40e;
case 0x71b412:c.instructions+=541;goto B71b412;
case 0x71b416:c.instructions+=540;goto B71b416;
case 0x71b41a:c.instructions+=539;goto B71b41a;
case 0x71b41e:c.instructions+=538;goto B71b41e;
case 0x71b421:c.instructions+=537;goto B71b421;
case 0x71b425:c.instructions+=536;goto B71b425;
case 0x71b429:c.instructions+=535;goto B71b429;
case 0x71b42d:c.instructions+=534;goto B71b42d;
case 0x71b430:c.instructions+=533;goto B71b430;
case 0x71b433:c.instructions+=532;goto B71b433;
case 0x71b436:c.instructions+=531;goto B71b436;
case 0x71b43a:c.instructions+=530;goto B71b43a;
case 0x71b43d:c.instructions+=529;goto B71b43d;
case 0x71b440:c.instructions+=528;goto B71b440;
case 0x71b444:c.instructions+=527;goto B71b444;
case 0x71b447:c.instructions+=526;goto B71b447;
case 0x71b44a:c.instructions+=525;goto B71b44a;
case 0x71b44d:c.instructions+=524;goto B71b44d;
case 0x71b450:c.instructions+=523;goto B71b450;
case 0x71b454:c.instructions+=522;goto B71b454;
case 0x71b457:c.instructions+=521;goto B71b457;
case 0x71b45b:c.instructions+=520;goto B71b45b;
case 0x71b45f:c.instructions+=519;goto B71b45f;
case 0x71b463:c.instructions+=518;goto B71b463;
case 0x71b466:c.instructions+=517;goto B71b466;
case 0x71b46a:c.instructions+=516;goto B71b46a;
case 0x71b46d:c.instructions+=515;goto B71b46d;
case 0x71b471:c.instructions+=514;goto B71b471;
case 0x71b475:c.instructions+=513;goto B71b475;
case 0x71b479:c.instructions+=512;goto B71b479;
case 0x71b47c:c.instructions+=511;goto B71b47c;
case 0x71b480:c.instructions+=510;goto B71b480;
case 0x71b484:c.instructions+=509;goto B71b484;
case 0x71b488:c.instructions+=508;goto B71b488;
case 0x71b48b:c.instructions+=507;goto B71b48b;
case 0x71b48f:c.instructions+=506;goto B71b48f;
case 0x71b493:c.instructions+=505;goto B71b493;
case 0x71b497:c.instructions+=504;goto B71b497;
case 0x71b49a:c.instructions+=503;goto B71b49a;
case 0x71b49d:c.instructions+=502;goto B71b49d;
case 0x71b4a0:c.instructions+=501;goto B71b4a0;
case 0x71b4a3:c.instructions+=500;goto B71b4a3;
case 0x71b4a7:c.instructions+=499;goto B71b4a7;
case 0x71b4aa:c.instructions+=498;goto B71b4aa;
case 0x71b4ad:c.instructions+=497;goto B71b4ad;
case 0x71b4b1:c.instructions+=496;goto B71b4b1;
case 0x71b4b5:c.instructions+=495;goto B71b4b5;
case 0x71b4b9:c.instructions+=494;goto B71b4b9;
case 0x71b4bc:c.instructions+=493;goto B71b4bc;
case 0x71b4c0:c.instructions+=492;goto B71b4c0;
case 0x71b4c3:c.instructions+=491;goto B71b4c3;
case 0x71b4c6:c.instructions+=490;goto B71b4c6;
case 0x71b4ca:c.instructions+=489;goto B71b4ca;
case 0x71b4ce:c.instructions+=488;goto B71b4ce;
case 0x71b4d1:c.instructions+=487;goto B71b4d1;
case 0x71b4d5:c.instructions+=486;goto B71b4d5;
case 0x71b4d9:c.instructions+=485;goto B71b4d9;
case 0x71b4dd:c.instructions+=484;goto B71b4dd;
case 0x71b4e0:c.instructions+=483;goto B71b4e0;
case 0x71b4e4:c.instructions+=482;goto B71b4e4;
case 0x71b4e7:c.instructions+=481;goto B71b4e7;
case 0x71b4ea:c.instructions+=480;goto B71b4ea;
case 0x71b4ee:c.instructions+=479;goto B71b4ee;
case 0x71b4f2:c.instructions+=478;goto B71b4f2;
case 0x71b4f5:c.instructions+=477;goto B71b4f5;
case 0x71b4f9:c.instructions+=476;goto B71b4f9;
case 0x71b4fc:c.instructions+=475;goto B71b4fc;
case 0x71b4ff:c.instructions+=474;goto B71b4ff;
case 0x71b503:c.instructions+=473;goto B71b503;
case 0x71b507:c.instructions+=472;goto B71b507;
case 0x71b50b:c.instructions+=471;goto B71b50b;
case 0x71b50f:c.instructions+=470;goto B71b50f;
case 0x71b512:c.instructions+=469;goto B71b512;
case 0x71b516:c.instructions+=468;goto B71b516;
case 0x71b519:c.instructions+=467;goto B71b519;
case 0x71b51d:c.instructions+=466;goto B71b51d;
case 0x71b520:c.instructions+=465;goto B71b520;
case 0x71b523:c.instructions+=464;goto B71b523;
case 0x71b526:c.instructions+=463;goto B71b526;
case 0x71b52a:c.instructions+=462;goto B71b52a;
case 0x71b52d:c.instructions+=461;goto B71b52d;
case 0x71b531:c.instructions+=460;goto B71b531;
case 0x71b534:c.instructions+=459;goto B71b534;
case 0x71b537:c.instructions+=458;goto B71b537;
case 0x71b53a:c.instructions+=457;goto B71b53a;
case 0x71b53e:c.instructions+=456;goto B71b53e;
case 0x71b541:c.instructions+=455;goto B71b541;
case 0x71b544:c.instructions+=454;goto B71b544;
case 0x71b547:c.instructions+=453;goto B71b547;
case 0x71b54a:c.instructions+=452;goto B71b54a;
case 0x71b54d:c.instructions+=451;goto B71b54d;
case 0x71b551:c.instructions+=450;goto B71b551;
case 0x71b554:c.instructions+=449;goto B71b554;
case 0x71b557:c.instructions+=448;goto B71b557;
case 0x71b55a:c.instructions+=447;goto B71b55a;
case 0x71b55e:c.instructions+=446;goto B71b55e;
case 0x71b561:c.instructions+=445;goto B71b561;
case 0x71b564:c.instructions+=444;goto B71b564;
case 0x71b567:c.instructions+=443;goto B71b567;
case 0x71b56b:c.instructions+=442;goto B71b56b;
case 0x71b56e:c.instructions+=441;goto B71b56e;
case 0x71b572:c.instructions+=440;goto B71b572;
case 0x71b575:c.instructions+=439;goto B71b575;
case 0x71b578:c.instructions+=438;goto B71b578;
case 0x71b57b:c.instructions+=437;goto B71b57b;
case 0x71b57f:c.instructions+=436;goto B71b57f;
case 0x71b582:c.instructions+=435;goto B71b582;
case 0x71b586:c.instructions+=434;goto B71b586;
case 0x71b589:c.instructions+=433;goto B71b589;
case 0x71b58c:c.instructions+=432;goto B71b58c;
case 0x71b58f:c.instructions+=431;goto B71b58f;
case 0x71b592:c.instructions+=430;goto B71b592;
case 0x71b595:c.instructions+=429;goto B71b595;
case 0x71b599:c.instructions+=428;goto B71b599;
case 0x71b59c:c.instructions+=427;goto B71b59c;
case 0x71b5a0:c.instructions+=426;goto B71b5a0;
case 0x71b5a3:c.instructions+=425;goto B71b5a3;
case 0x71b5a7:c.instructions+=424;goto B71b5a7;
case 0x71b5aa:c.instructions+=423;goto B71b5aa;
case 0x71b5ad:c.instructions+=422;goto B71b5ad;
case 0x71b5b0:c.instructions+=421;goto B71b5b0;
case 0x71b5b4:c.instructions+=420;goto B71b5b4;
case 0x71b5b7:c.instructions+=419;goto B71b5b7;
case 0x71b5ba:c.instructions+=418;goto B71b5ba;
case 0x71b5bd:c.instructions+=417;goto B71b5bd;
case 0x71b5c0:c.instructions+=416;goto B71b5c0;
case 0x71b5c4:c.instructions+=415;goto B71b5c4;
case 0x71b5c7:c.instructions+=414;goto B71b5c7;
case 0x71b5ca:c.instructions+=413;goto B71b5ca;
case 0x71b5cd:c.instructions+=412;goto B71b5cd;
case 0x71b5d0:c.instructions+=411;goto B71b5d0;
case 0x71b5d3:c.instructions+=410;goto B71b5d3;
case 0x71b5d6:c.instructions+=409;goto B71b5d6;
case 0x71b5d9:c.instructions+=408;goto B71b5d9;
case 0x71b5dc:c.instructions+=407;goto B71b5dc;
case 0x71b5df:c.instructions+=406;goto B71b5df;
case 0x71b5e2:c.instructions+=405;goto B71b5e2;
case 0x71b5e5:c.instructions+=404;goto B71b5e5;
case 0x71b5e8:c.instructions+=403;goto B71b5e8;
case 0x71b5eb:c.instructions+=402;goto B71b5eb;
case 0x71b5ef:c.instructions+=401;goto B71b5ef;
case 0x71b5f2:c.instructions+=400;goto B71b5f2;
case 0x71b5f5:c.instructions+=399;goto B71b5f5;
case 0x71b5f8:c.instructions+=398;goto B71b5f8;
case 0x71b5fc:c.instructions+=397;goto B71b5fc;
case 0x71b5ff:c.instructions+=396;goto B71b5ff;
case 0x71b602:c.instructions+=395;goto B71b602;
case 0x71b605:c.instructions+=394;goto B71b605;
case 0x71b608:c.instructions+=393;goto B71b608;
case 0x71b60b:c.instructions+=392;goto B71b60b;
case 0x71b60e:c.instructions+=391;goto B71b60e;
case 0x71b611:c.instructions+=390;goto B71b611;
case 0x71b614:c.instructions+=389;goto B71b614;
case 0x71b617:c.instructions+=388;goto B71b617;
case 0x71b61a:c.instructions+=387;goto B71b61a;
case 0x71b61d:c.instructions+=386;goto B71b61d;
case 0x71b620:c.instructions+=385;goto B71b620;
case 0x71b623:c.instructions+=384;goto B71b623;
case 0x71b627:c.instructions+=383;goto B71b627;
case 0x71b62a:c.instructions+=382;goto B71b62a;
case 0x71b62d:c.instructions+=381;goto B71b62d;
case 0x71b630:c.instructions+=380;goto B71b630;
case 0x71b633:c.instructions+=379;goto B71b633;
case 0x71b636:c.instructions+=378;goto B71b636;
case 0x71b639:c.instructions+=377;goto B71b639;
case 0x71b63c:c.instructions+=376;goto B71b63c;
case 0x71b63f:c.instructions+=375;goto B71b63f;
case 0x71b642:c.instructions+=374;goto B71b642;
case 0x71b645:c.instructions+=373;goto B71b645;
case 0x71b648:c.instructions+=372;goto B71b648;
case 0x71b64c:c.instructions+=371;goto B71b64c;
case 0x71b64f:c.instructions+=370;goto B71b64f;
case 0x71b653:c.instructions+=369;goto B71b653;
case 0x71b656:c.instructions+=368;goto B71b656;
case 0x71b659:c.instructions+=367;goto B71b659;
case 0x71b65c:c.instructions+=366;goto B71b65c;
case 0x71b660:c.instructions+=365;goto B71b660;
case 0x71b663:c.instructions+=364;goto B71b663;
case 0x71b667:c.instructions+=363;goto B71b667;
case 0x71b66a:c.instructions+=362;goto B71b66a;
case 0x71b66e:c.instructions+=361;goto B71b66e;
case 0x71b671:c.instructions+=360;goto B71b671;
case 0x71b674:c.instructions+=359;goto B71b674;
case 0x71b677:c.instructions+=358;goto B71b677;
case 0x71b67a:c.instructions+=357;goto B71b67a;
case 0x71b67d:c.instructions+=356;goto B71b67d;
case 0x71b680:c.instructions+=355;goto B71b680;
case 0x71b683:c.instructions+=354;goto B71b683;
case 0x71b686:c.instructions+=353;goto B71b686;
case 0x71b689:c.instructions+=352;goto B71b689;
case 0x71b68d:c.instructions+=351;goto B71b68d;
case 0x71b690:c.instructions+=350;goto B71b690;
case 0x71b693:c.instructions+=349;goto B71b693;
case 0x71b697:c.instructions+=348;goto B71b697;
case 0x71b69b:c.instructions+=347;goto B71b69b;
case 0x71b69f:c.instructions+=346;goto B71b69f;
case 0x71b6a3:c.instructions+=345;goto B71b6a3;
case 0x71b6a6:c.instructions+=344;goto B71b6a6;
case 0x71b6aa:c.instructions+=343;goto B71b6aa;
case 0x71b6ad:c.instructions+=342;goto B71b6ad;
case 0x71b6b1:c.instructions+=341;goto B71b6b1;
case 0x71b6b4:c.instructions+=340;goto B71b6b4;
case 0x71b6b7:c.instructions+=339;goto B71b6b7;
case 0x71b6ba:c.instructions+=338;goto B71b6ba;
case 0x71b6be:c.instructions+=337;goto B71b6be;
case 0x71b6c1:c.instructions+=336;goto B71b6c1;
case 0x71b6c5:c.instructions+=335;goto B71b6c5;
case 0x71b6c8:c.instructions+=334;goto B71b6c8;
case 0x71b6cb:c.instructions+=333;goto B71b6cb;
case 0x71b6ce:c.instructions+=332;goto B71b6ce;
case 0x71b6d2:c.instructions+=331;goto B71b6d2;
case 0x71b6d5:c.instructions+=330;goto B71b6d5;
case 0x71b6d8:c.instructions+=329;goto B71b6d8;
case 0x71b6db:c.instructions+=328;goto B71b6db;
case 0x71b6de:c.instructions+=327;goto B71b6de;
case 0x71b6e1:c.instructions+=326;goto B71b6e1;
case 0x71b6e5:c.instructions+=325;goto B71b6e5;
case 0x71b6e8:c.instructions+=324;goto B71b6e8;
case 0x71b6eb:c.instructions+=323;goto B71b6eb;
case 0x71b6ee:c.instructions+=322;goto B71b6ee;
case 0x71b6f2:c.instructions+=321;goto B71b6f2;
case 0x71b6f5:c.instructions+=320;goto B71b6f5;
case 0x71b6f8:c.instructions+=319;goto B71b6f8;
case 0x71b6fb:c.instructions+=318;goto B71b6fb;
case 0x71b6ff:c.instructions+=317;goto B71b6ff;
case 0x71b702:c.instructions+=316;goto B71b702;
case 0x71b706:c.instructions+=315;goto B71b706;
case 0x71b709:c.instructions+=314;goto B71b709;
case 0x71b70c:c.instructions+=313;goto B71b70c;
case 0x71b70f:c.instructions+=312;goto B71b70f;
case 0x71b713:c.instructions+=311;goto B71b713;
case 0x71b716:c.instructions+=310;goto B71b716;
case 0x71b71a:c.instructions+=309;goto B71b71a;
case 0x71b71d:c.instructions+=308;goto B71b71d;
case 0x71b720:c.instructions+=307;goto B71b720;
case 0x71b723:c.instructions+=306;goto B71b723;
case 0x71b726:c.instructions+=305;goto B71b726;
case 0x71b729:c.instructions+=304;goto B71b729;
case 0x71b72d:c.instructions+=303;goto B71b72d;
case 0x71b730:c.instructions+=302;goto B71b730;
case 0x71b734:c.instructions+=301;goto B71b734;
case 0x71b737:c.instructions+=300;goto B71b737;
case 0x71b73b:c.instructions+=299;goto B71b73b;
case 0x71b73e:c.instructions+=298;goto B71b73e;
case 0x71b741:c.instructions+=297;goto B71b741;
case 0x71b744:c.instructions+=296;goto B71b744;
case 0x71b748:c.instructions+=295;goto B71b748;
case 0x71b74b:c.instructions+=294;goto B71b74b;
case 0x71b74f:c.instructions+=293;goto B71b74f;
case 0x71b752:c.instructions+=292;goto B71b752;
case 0x71b755:c.instructions+=291;goto B71b755;
case 0x71b759:c.instructions+=290;goto B71b759;
case 0x71b75c:c.instructions+=289;goto B71b75c;
case 0x71b75f:c.instructions+=288;goto B71b75f;
case 0x71b762:c.instructions+=287;goto B71b762;
case 0x71b765:c.instructions+=286;goto B71b765;
case 0x71b768:c.instructions+=285;goto B71b768;
case 0x71b76b:c.instructions+=284;goto B71b76b;
case 0x71b76e:c.instructions+=283;goto B71b76e;
case 0x71b771:c.instructions+=282;goto B71b771;
case 0x71b774:c.instructions+=281;goto B71b774;
case 0x71b777:c.instructions+=280;goto B71b777;
case 0x71b77a:c.instructions+=279;goto B71b77a;
case 0x71b77d:c.instructions+=278;goto B71b77d;
case 0x71b780:c.instructions+=277;goto B71b780;
case 0x71b784:c.instructions+=276;goto B71b784;
case 0x71b787:c.instructions+=275;goto B71b787;
case 0x71b78a:c.instructions+=274;goto B71b78a;
case 0x71b78d:c.instructions+=273;goto B71b78d;
case 0x71b791:c.instructions+=272;goto B71b791;
case 0x71b794:c.instructions+=271;goto B71b794;
case 0x71b797:c.instructions+=270;goto B71b797;
case 0x71b79a:c.instructions+=269;goto B71b79a;
case 0x71b79d:c.instructions+=268;goto B71b79d;
case 0x71b7a0:c.instructions+=267;goto B71b7a0;
case 0x71b7a3:c.instructions+=266;goto B71b7a3;
case 0x71b7a6:c.instructions+=265;goto B71b7a6;
case 0x71b7a9:c.instructions+=264;goto B71b7a9;
case 0x71b7ac:c.instructions+=263;goto B71b7ac;
case 0x71b7af:c.instructions+=262;goto B71b7af;
case 0x71b7b2:c.instructions+=261;goto B71b7b2;
case 0x71b7b5:c.instructions+=260;goto B71b7b5;
case 0x71b7b8:c.instructions+=259;goto B71b7b8;
case 0x71b7bc:c.instructions+=258;goto B71b7bc;
case 0x71b7bf:c.instructions+=257;goto B71b7bf;
case 0x71b7c2:c.instructions+=256;goto B71b7c2;
case 0x71b7c5:c.instructions+=255;goto B71b7c5;
case 0x71b7c9:c.instructions+=254;goto B71b7c9;
case 0x71b7cc:c.instructions+=253;goto B71b7cc;
case 0x71b7cf:c.instructions+=252;goto B71b7cf;
case 0x71b7d2:c.instructions+=251;goto B71b7d2;
case 0x71b7d5:c.instructions+=250;goto B71b7d5;
case 0x71b7d8:c.instructions+=249;goto B71b7d8;
case 0x71b7db:c.instructions+=248;goto B71b7db;
case 0x71b7de:c.instructions+=247;goto B71b7de;
case 0x71b7e2:c.instructions+=246;goto B71b7e2;
case 0x71b7e5:c.instructions+=245;goto B71b7e5;
case 0x71b7e9:c.instructions+=244;goto B71b7e9;
case 0x71b7ec:c.instructions+=243;goto B71b7ec;
case 0x71b7f0:c.instructions+=242;goto B71b7f0;
case 0x71b7f3:c.instructions+=241;goto B71b7f3;
case 0x71b7f7:c.instructions+=240;goto B71b7f7;
case 0x71b7fa:c.instructions+=239;goto B71b7fa;
case 0x71b7fe:c.instructions+=238;goto B71b7fe;
case 0x71b801:c.instructions+=237;goto B71b801;
case 0x71b805:c.instructions+=236;goto B71b805;
case 0x71b808:c.instructions+=235;goto B71b808;
case 0x71b80b:c.instructions+=234;goto B71b80b;
case 0x71b80e:c.instructions+=233;goto B71b80e;
case 0x71b811:c.instructions+=232;goto B71b811;
case 0x71b814:c.instructions+=231;goto B71b814;
case 0x71b817:c.instructions+=230;goto B71b817;
case 0x71b81a:c.instructions+=229;goto B71b81a;
case 0x71b81e:c.instructions+=228;goto B71b81e;
case 0x71b821:c.instructions+=227;goto B71b821;
case 0x71b825:c.instructions+=226;goto B71b825;
case 0x71b828:c.instructions+=225;goto B71b828;
case 0x71b82b:c.instructions+=224;goto B71b82b;
case 0x71b82f:c.instructions+=223;goto B71b82f;
case 0x71b833:c.instructions+=222;goto B71b833;
case 0x71b837:c.instructions+=221;goto B71b837;
case 0x71b83b:c.instructions+=220;goto B71b83b;
case 0x71b83e:c.instructions+=219;goto B71b83e;
case 0x71b842:c.instructions+=218;goto B71b842;
case 0x71b845:c.instructions+=217;goto B71b845;
case 0x71b849:c.instructions+=216;goto B71b849;
case 0x71b84c:c.instructions+=215;goto B71b84c;
case 0x71b84f:c.instructions+=214;goto B71b84f;
case 0x71b852:c.instructions+=213;goto B71b852;
case 0x71b856:c.instructions+=212;goto B71b856;
case 0x71b859:c.instructions+=211;goto B71b859;
case 0x71b85d:c.instructions+=210;goto B71b85d;
case 0x71b860:c.instructions+=209;goto B71b860;
case 0x71b863:c.instructions+=208;goto B71b863;
case 0x71b866:c.instructions+=207;goto B71b866;
case 0x71b86a:c.instructions+=206;goto B71b86a;
case 0x71b86d:c.instructions+=205;goto B71b86d;
case 0x71b870:c.instructions+=204;goto B71b870;
case 0x71b873:c.instructions+=203;goto B71b873;
case 0x71b876:c.instructions+=202;goto B71b876;
case 0x71b879:c.instructions+=201;goto B71b879;
case 0x71b87d:c.instructions+=200;goto B71b87d;
case 0x71b880:c.instructions+=199;goto B71b880;
case 0x71b883:c.instructions+=198;goto B71b883;
case 0x71b886:c.instructions+=197;goto B71b886;
case 0x71b88a:c.instructions+=196;goto B71b88a;
case 0x71b88d:c.instructions+=195;goto B71b88d;
case 0x71b890:c.instructions+=194;goto B71b890;
case 0x71b893:c.instructions+=193;goto B71b893;
case 0x71b897:c.instructions+=192;goto B71b897;
case 0x71b89a:c.instructions+=191;goto B71b89a;
case 0x71b89e:c.instructions+=190;goto B71b89e;
case 0x71b8a1:c.instructions+=189;goto B71b8a1;
case 0x71b8a4:c.instructions+=188;goto B71b8a4;
case 0x71b8a7:c.instructions+=187;goto B71b8a7;
case 0x71b8ab:c.instructions+=186;goto B71b8ab;
case 0x71b8ae:c.instructions+=185;goto B71b8ae;
case 0x71b8b2:c.instructions+=184;goto B71b8b2;
case 0x71b8b5:c.instructions+=183;goto B71b8b5;
case 0x71b8b8:c.instructions+=182;goto B71b8b8;
case 0x71b8bb:c.instructions+=181;goto B71b8bb;
case 0x71b8be:c.instructions+=180;goto B71b8be;
case 0x71b8c1:c.instructions+=179;goto B71b8c1;
case 0x71b8c5:c.instructions+=178;goto B71b8c5;
case 0x71b8c8:c.instructions+=177;goto B71b8c8;
case 0x71b8cc:c.instructions+=176;goto B71b8cc;
case 0x71b8cf:c.instructions+=175;goto B71b8cf;
case 0x71b8d3:c.instructions+=174;goto B71b8d3;
case 0x71b8d6:c.instructions+=173;goto B71b8d6;
case 0x71b8d9:c.instructions+=172;goto B71b8d9;
case 0x71b8dc:c.instructions+=171;goto B71b8dc;
case 0x71b8e0:c.instructions+=170;goto B71b8e0;
case 0x71b8e3:c.instructions+=169;goto B71b8e3;
case 0x71b8e6:c.instructions+=168;goto B71b8e6;
case 0x71b8e9:c.instructions+=167;goto B71b8e9;
case 0x71b8ec:c.instructions+=166;goto B71b8ec;
case 0x71b8f0:c.instructions+=165;goto B71b8f0;
case 0x71b8f3:c.instructions+=164;goto B71b8f3;
case 0x71b8f6:c.instructions+=163;goto B71b8f6;
case 0x71b8f9:c.instructions+=162;goto B71b8f9;
case 0x71b8fc:c.instructions+=161;goto B71b8fc;
case 0x71b8ff:c.instructions+=160;goto B71b8ff;
case 0x71b902:c.instructions+=159;goto B71b902;
case 0x71b905:c.instructions+=158;goto B71b905;
case 0x71b908:c.instructions+=157;goto B71b908;
case 0x71b90b:c.instructions+=156;goto B71b90b;
case 0x71b90e:c.instructions+=155;goto B71b90e;
case 0x71b911:c.instructions+=154;goto B71b911;
case 0x71b914:c.instructions+=153;goto B71b914;
case 0x71b917:c.instructions+=152;goto B71b917;
case 0x71b91b:c.instructions+=151;goto B71b91b;
case 0x71b91e:c.instructions+=150;goto B71b91e;
case 0x71b921:c.instructions+=149;goto B71b921;
case 0x71b924:c.instructions+=148;goto B71b924;
case 0x71b928:c.instructions+=147;goto B71b928;
case 0x71b92b:c.instructions+=146;goto B71b92b;
case 0x71b92e:c.instructions+=145;goto B71b92e;
case 0x71b932:c.instructions+=144;goto B71b932;
case 0x71b935:c.instructions+=143;goto B71b935;
case 0x71b939:c.instructions+=142;goto B71b939;
case 0x71b93d:c.instructions+=141;goto B71b93d;
case 0x71b940:c.instructions+=140;goto B71b940;
case 0x71b944:c.instructions+=139;goto B71b944;
case 0x71b947:c.instructions+=138;goto B71b947;
case 0x71b94b:c.instructions+=137;goto B71b94b;
case 0x71b94e:c.instructions+=136;goto B71b94e;
case 0x71b952:c.instructions+=135;goto B71b952;
case 0x71b955:c.instructions+=134;goto B71b955;
case 0x71b958:c.instructions+=133;goto B71b958;
case 0x71b95c:c.instructions+=132;goto B71b95c;
case 0x71b95f:c.instructions+=131;goto B71b95f;
case 0x71b963:c.instructions+=130;goto B71b963;
case 0x71b967:c.instructions+=129;goto B71b967;
case 0x71b96a:c.instructions+=128;goto B71b96a;
case 0x71b96d:c.instructions+=127;goto B71b96d;
case 0x71b971:c.instructions+=126;goto B71b971;
case 0x71b975:c.instructions+=125;goto B71b975;
case 0x71b979:c.instructions+=124;goto B71b979;
case 0x71b97d:c.instructions+=123;goto B71b97d;
case 0x71b980:c.instructions+=122;goto B71b980;
case 0x71b984:c.instructions+=121;goto B71b984;
case 0x71b987:c.instructions+=120;goto B71b987;
case 0x71b98a:c.instructions+=119;goto B71b98a;
case 0x71b98e:c.instructions+=118;goto B71b98e;
case 0x71b992:c.instructions+=117;goto B71b992;
case 0x71b996:c.instructions+=116;goto B71b996;
case 0x71b99a:c.instructions+=115;goto B71b99a;
case 0x71b99e:c.instructions+=114;goto B71b99e;
case 0x71b9a1:c.instructions+=113;goto B71b9a1;
case 0x71b9a5:c.instructions+=112;goto B71b9a5;
case 0x71b9a9:c.instructions+=111;goto B71b9a9;
case 0x71b9ac:c.instructions+=110;goto B71b9ac;
case 0x71b9b0:c.instructions+=109;goto B71b9b0;
case 0x71b9b3:c.instructions+=108;goto B71b9b3;
case 0x71b9b7:c.instructions+=107;goto B71b9b7;
case 0x71b9ba:c.instructions+=106;goto B71b9ba;
case 0x71b9bd:c.instructions+=105;goto B71b9bd;
case 0x71b9c0:c.instructions+=104;goto B71b9c0;
case 0x71b9c4:c.instructions+=103;goto B71b9c4;
case 0x71b9c7:c.instructions+=102;goto B71b9c7;
case 0x71b9cb:c.instructions+=101;goto B71b9cb;
case 0x71b9ce:c.instructions+=100;goto B71b9ce;
case 0x71b9d1:c.instructions+=99;goto B71b9d1;
case 0x71b9d4:c.instructions+=98;goto B71b9d4;
case 0x71b9d8:c.instructions+=97;goto B71b9d8;
case 0x71b9db:c.instructions+=96;goto B71b9db;
case 0x71b9de:c.instructions+=95;goto B71b9de;
case 0x71b9e1:c.instructions+=94;goto B71b9e1;
case 0x71b9e4:c.instructions+=93;goto B71b9e4;
case 0x71b9e7:c.instructions+=92;goto B71b9e7;
case 0x71b9eb:c.instructions+=91;goto B71b9eb;
case 0x71b9ee:c.instructions+=90;goto B71b9ee;
case 0x71b9f1:c.instructions+=89;goto B71b9f1;
case 0x71b9f4:c.instructions+=88;goto B71b9f4;
case 0x71b9f8:c.instructions+=87;goto B71b9f8;
case 0x71b9fb:c.instructions+=86;goto B71b9fb;
case 0x71b9fe:c.instructions+=85;goto B71b9fe;
case 0x71ba01:c.instructions+=84;goto B71ba01;
case 0x71ba05:c.instructions+=83;goto B71ba05;
case 0x71ba08:c.instructions+=82;goto B71ba08;
case 0x71ba0c:c.instructions+=81;goto B71ba0c;
case 0x71ba0f:c.instructions+=80;goto B71ba0f;
case 0x71ba12:c.instructions+=79;goto B71ba12;
case 0x71ba15:c.instructions+=78;goto B71ba15;
case 0x71ba19:c.instructions+=77;goto B71ba19;
case 0x71ba1c:c.instructions+=76;goto B71ba1c;
case 0x71ba20:c.instructions+=75;goto B71ba20;
case 0x71ba23:c.instructions+=74;goto B71ba23;
case 0x71ba26:c.instructions+=73;goto B71ba26;
case 0x71ba29:c.instructions+=72;goto B71ba29;
case 0x71ba2c:c.instructions+=71;goto B71ba2c;
case 0x71ba2f:c.instructions+=70;goto B71ba2f;
case 0x71ba33:c.instructions+=69;goto B71ba33;
case 0x71ba36:c.instructions+=68;goto B71ba36;
case 0x71ba3a:c.instructions+=67;goto B71ba3a;
case 0x71ba3d:c.instructions+=66;goto B71ba3d;
case 0x71ba41:c.instructions+=65;goto B71ba41;
case 0x71ba44:c.instructions+=64;goto B71ba44;
case 0x71ba47:c.instructions+=63;goto B71ba47;
case 0x71ba4a:c.instructions+=62;goto B71ba4a;
case 0x71ba4e:c.instructions+=61;goto B71ba4e;
case 0x71ba51:c.instructions+=60;goto B71ba51;
case 0x71ba55:c.instructions+=59;goto B71ba55;
case 0x71ba58:c.instructions+=58;goto B71ba58;
case 0x71ba5b:c.instructions+=57;goto B71ba5b;
case 0x71ba5f:c.instructions+=56;goto B71ba5f;
case 0x71ba62:c.instructions+=55;goto B71ba62;
case 0x71ba65:c.instructions+=54;goto B71ba65;
case 0x71ba68:c.instructions+=53;goto B71ba68;
case 0x71ba6b:c.instructions+=52;goto B71ba6b;
case 0x71ba6e:c.instructions+=51;goto B71ba6e;
case 0x71ba71:c.instructions+=50;goto B71ba71;
case 0x71ba74:c.instructions+=49;goto B71ba74;
case 0x71ba77:c.instructions+=48;goto B71ba77;
case 0x71ba7a:c.instructions+=47;goto B71ba7a;
case 0x71ba7d:c.instructions+=46;goto B71ba7d;
case 0x71ba80:c.instructions+=45;goto B71ba80;
case 0x71ba83:c.instructions+=44;goto B71ba83;
case 0x71ba86:c.instructions+=43;goto B71ba86;
case 0x71ba8a:c.instructions+=42;goto B71ba8a;
case 0x71ba8d:c.instructions+=41;goto B71ba8d;
case 0x71ba90:c.instructions+=40;goto B71ba90;
case 0x71ba93:c.instructions+=39;goto B71ba93;
case 0x71ba97:c.instructions+=38;goto B71ba97;
case 0x71ba9a:c.instructions+=37;goto B71ba9a;
case 0x71ba9d:c.instructions+=36;goto B71ba9d;
case 0x71baa1:c.instructions+=35;goto B71baa1;
case 0x71baa4:c.instructions+=34;goto B71baa4;
case 0x71baa8:c.instructions+=33;goto B71baa8;
case 0x71baac:c.instructions+=32;goto B71baac;
case 0x71baaf:c.instructions+=31;goto B71baaf;
case 0x71bab3:c.instructions+=30;goto B71bab3;
case 0x71bab6:c.instructions+=29;goto B71bab6;
case 0x71baba:c.instructions+=28;goto B71baba;
case 0x71babd:c.instructions+=27;goto B71babd;
case 0x71bac1:c.instructions+=26;goto B71bac1;
case 0x71bac4:c.instructions+=25;goto B71bac4;
case 0x71bac7:c.instructions+=24;goto B71bac7;
case 0x71bacb:c.instructions+=23;goto B71bacb;
case 0x71bace:c.instructions+=22;goto B71bace;
case 0x71bad2:c.instructions+=21;goto B71bad2;
case 0x71bad6:c.instructions+=20;goto B71bad6;
case 0x71bad9:c.instructions+=19;goto B71bad9;
case 0x71badc:c.instructions+=18;goto B71badc;
case 0x71bae0:c.instructions+=17;goto B71bae0;
case 0x71bae4:c.instructions+=16;goto B71bae4;
case 0x71bae8:c.instructions+=15;goto B71bae8;
case 0x71baec:c.instructions+=14;goto B71baec;
case 0x71baef:c.instructions+=13;goto B71baef;
case 0x71baf3:c.instructions+=12;goto B71baf3;
case 0x71baf6:c.instructions+=11;goto B71baf6;
case 0x71baf9:c.instructions+=10;goto B71baf9;
case 0x71bafd:c.instructions+=9;goto B71bafd;
case 0x71bb01:c.instructions+=8;goto B71bb01;
case 0x71bb05:c.instructions+=7;goto B71bb05;
case 0x71bb09:c.instructions+=6;goto B71bb09;
case 0x71bb0d:c.instructions+=5;goto B71bb0d;
case 0x71bb11:c.instructions+=4;goto B71bb11;
case 0x71bb12:c.instructions+=3;goto B71bb12;
case 0x71bb13:c.instructions+=2;goto B71bb13;
case 0x71bb14:c.instructions+=1;goto B71bb14;
case 0x71bb15:goto L71bb15;
case 0x71bb16:c.instructions+=372;goto B71bb16;
case 0x71bb17:c.instructions+=371;goto B71bb17;
case 0x71bb18:c.instructions+=370;goto B71bb18;
case 0x71bb1c:c.instructions+=369;goto B71bb1c;
case 0x71bb20:c.instructions+=368;goto B71bb20;
case 0x71bb22:c.instructions+=367;goto B71bb22;
case 0x71bb25:c.instructions+=366;goto B71bb25;
case 0x71bb28:c.instructions+=365;goto B71bb28;
case 0x71bb2b:c.instructions+=364;goto B71bb2b;
case 0x71bb2e:c.instructions+=363;goto B71bb2e;
case 0x71bb31:c.instructions+=362;goto B71bb31;
case 0x71bb35:c.instructions+=361;goto B71bb35;
case 0x71bb3b:c.instructions+=360;goto B71bb3b;
case 0x71bb3e:c.instructions+=359;goto B71bb3e;
case 0x71bb41:c.instructions+=358;goto B71bb41;
case 0x71bb45:c.instructions+=357;goto B71bb45;
case 0x71bb49:c.instructions+=356;goto B71bb49;
case 0x71bb4c:c.instructions+=355;goto B71bb4c;
case 0x71bb4f:c.instructions+=354;goto B71bb4f;
case 0x71bb53:c.instructions+=353;goto B71bb53;
case 0x71bb57:c.instructions+=352;goto B71bb57;
case 0x71bb5b:c.instructions+=351;goto B71bb5b;
case 0x71bb5e:c.instructions+=350;goto B71bb5e;
case 0x71bb61:c.instructions+=349;goto B71bb61;
case 0x71bb64:c.instructions+=348;goto B71bb64;
case 0x71bb67:c.instructions+=347;goto B71bb67;
case 0x71bb6b:c.instructions+=346;goto B71bb6b;
case 0x71bb6f:c.instructions+=345;goto B71bb6f;
case 0x71bb72:c.instructions+=344;goto B71bb72;
case 0x71bb75:c.instructions+=343;goto B71bb75;
case 0x71bb78:c.instructions+=342;goto B71bb78;
case 0x71bb7b:c.instructions+=341;goto B71bb7b;
case 0x71bb7e:c.instructions+=340;goto B71bb7e;
case 0x71bb82:c.instructions+=339;goto B71bb82;
case 0x71bb85:c.instructions+=338;goto B71bb85;
case 0x71bb88:c.instructions+=337;goto B71bb88;
case 0x71bb8b:c.instructions+=336;goto B71bb8b;
case 0x71bb8f:c.instructions+=335;goto B71bb8f;
case 0x71bb93:c.instructions+=334;goto B71bb93;
case 0x71bb97:c.instructions+=333;goto B71bb97;
case 0x71bb9a:c.instructions+=332;goto B71bb9a;
case 0x71bb9d:c.instructions+=331;goto B71bb9d;
case 0x71bba0:c.instructions+=330;goto B71bba0;
case 0x71bba4:c.instructions+=329;goto B71bba4;
case 0x71bba7:c.instructions+=328;goto B71bba7;
case 0x71bbab:c.instructions+=327;goto B71bbab;
case 0x71bbaf:c.instructions+=326;goto B71bbaf;
case 0x71bbb3:c.instructions+=325;goto B71bbb3;
case 0x71bbb6:c.instructions+=324;goto B71bbb6;
case 0x71bbb9:c.instructions+=323;goto B71bbb9;
case 0x71bbbd:c.instructions+=322;goto B71bbbd;
case 0x71bbc1:c.instructions+=321;goto B71bbc1;
case 0x71bbc4:c.instructions+=320;goto B71bbc4;
case 0x71bbc7:c.instructions+=319;goto B71bbc7;
case 0x71bbca:c.instructions+=318;goto B71bbca;
case 0x71bbce:c.instructions+=317;goto B71bbce;
case 0x71bbd1:c.instructions+=316;goto B71bbd1;
case 0x71bbd5:c.instructions+=315;goto B71bbd5;
case 0x71bbd8:c.instructions+=314;goto B71bbd8;
case 0x71bbdc:c.instructions+=313;goto B71bbdc;
case 0x71bbdf:c.instructions+=312;goto B71bbdf;
case 0x71bbe3:c.instructions+=311;goto B71bbe3;
case 0x71bbe7:c.instructions+=310;goto B71bbe7;
case 0x71bbeb:c.instructions+=309;goto B71bbeb;
case 0x71bbee:c.instructions+=308;goto B71bbee;
case 0x71bbf2:c.instructions+=307;goto B71bbf2;
case 0x71bbf5:c.instructions+=306;goto B71bbf5;
case 0x71bbf8:c.instructions+=305;goto B71bbf8;
case 0x71bbfb:c.instructions+=304;goto B71bbfb;
case 0x71bbff:c.instructions+=303;goto B71bbff;
case 0x71bc03:c.instructions+=302;goto B71bc03;
case 0x71bc06:c.instructions+=301;goto B71bc06;
case 0x71bc09:c.instructions+=300;goto B71bc09;
case 0x71bc0d:c.instructions+=299;goto B71bc0d;
case 0x71bc10:c.instructions+=298;goto B71bc10;
case 0x71bc14:c.instructions+=297;goto B71bc14;
case 0x71bc17:c.instructions+=296;goto B71bc17;
case 0x71bc1b:c.instructions+=295;goto B71bc1b;
case 0x71bc1e:c.instructions+=294;goto B71bc1e;
case 0x71bc22:c.instructions+=293;goto B71bc22;
case 0x71bc25:c.instructions+=292;goto B71bc25;
case 0x71bc29:c.instructions+=291;goto B71bc29;
case 0x71bc2c:c.instructions+=290;goto B71bc2c;
case 0x71bc30:c.instructions+=289;goto B71bc30;
case 0x71bc34:c.instructions+=288;goto B71bc34;
case 0x71bc38:c.instructions+=287;goto B71bc38;
case 0x71bc3b:c.instructions+=286;goto B71bc3b;
case 0x71bc3f:c.instructions+=285;goto B71bc3f;
case 0x71bc42:c.instructions+=284;goto B71bc42;
case 0x71bc46:c.instructions+=283;goto B71bc46;
case 0x71bc49:c.instructions+=282;goto B71bc49;
case 0x71bc4c:c.instructions+=281;goto B71bc4c;
case 0x71bc4f:c.instructions+=280;goto B71bc4f;
case 0x71bc53:c.instructions+=279;goto B71bc53;
case 0x71bc56:c.instructions+=278;goto B71bc56;
case 0x71bc5a:c.instructions+=277;goto B71bc5a;
case 0x71bc5d:c.instructions+=276;goto B71bc5d;
case 0x71bc61:c.instructions+=275;goto B71bc61;
case 0x71bc64:c.instructions+=274;goto B71bc64;
case 0x71bc68:c.instructions+=273;goto B71bc68;
case 0x71bc6b:c.instructions+=272;goto B71bc6b;
case 0x71bc6f:c.instructions+=271;goto B71bc6f;
case 0x71bc72:c.instructions+=270;goto B71bc72;
case 0x71bc75:c.instructions+=269;goto B71bc75;
case 0x71bc79:c.instructions+=268;goto B71bc79;
case 0x71bc7c:c.instructions+=267;goto B71bc7c;
case 0x71bc7f:c.instructions+=266;goto B71bc7f;
case 0x71bc83:c.instructions+=265;goto B71bc83;
case 0x71bc86:c.instructions+=264;goto B71bc86;
case 0x71bc8a:c.instructions+=263;goto B71bc8a;
case 0x71bc8d:c.instructions+=262;goto B71bc8d;
case 0x71bc91:c.instructions+=261;goto B71bc91;
case 0x71bc95:c.instructions+=260;goto B71bc95;
case 0x71bc99:c.instructions+=259;goto B71bc99;
case 0x71bc9c:c.instructions+=258;goto B71bc9c;
case 0x71bca0:c.instructions+=257;goto B71bca0;
case 0x71bca3:c.instructions+=256;goto B71bca3;
case 0x71bca7:c.instructions+=255;goto B71bca7;
case 0x71bcaa:c.instructions+=254;goto B71bcaa;
case 0x71bcae:c.instructions+=253;goto B71bcae;
case 0x71bcb2:c.instructions+=252;goto B71bcb2;
case 0x71bcb5:c.instructions+=251;goto B71bcb5;
case 0x71bcb8:c.instructions+=250;goto B71bcb8;
case 0x71bcbc:c.instructions+=249;goto B71bcbc;
case 0x71bcbf:c.instructions+=248;goto B71bcbf;
case 0x71bcc2:c.instructions+=247;goto B71bcc2;
case 0x71bcc6:c.instructions+=246;goto B71bcc6;
case 0x71bcc9:c.instructions+=245;goto B71bcc9;
case 0x71bccc:c.instructions+=244;goto B71bccc;
case 0x71bcd0:c.instructions+=243;goto B71bcd0;
case 0x71bcd3:c.instructions+=242;goto B71bcd3;
case 0x71bcd7:c.instructions+=241;goto B71bcd7;
case 0x71bcda:c.instructions+=240;goto B71bcda;
case 0x71bcde:c.instructions+=239;goto B71bcde;
case 0x71bce1:c.instructions+=238;goto B71bce1;
case 0x71bce5:c.instructions+=237;goto B71bce5;
case 0x71bce8:c.instructions+=236;goto B71bce8;
case 0x71bcec:c.instructions+=235;goto B71bcec;
case 0x71bcf0:c.instructions+=234;goto B71bcf0;
case 0x71bcf3:c.instructions+=233;goto B71bcf3;
case 0x71bcf6:c.instructions+=232;goto B71bcf6;
case 0x71bcfa:c.instructions+=231;goto B71bcfa;
case 0x71bcfd:c.instructions+=230;goto B71bcfd;
case 0x71bd01:c.instructions+=229;goto B71bd01;
case 0x71bd04:c.instructions+=228;goto B71bd04;
case 0x71bd08:c.instructions+=227;goto B71bd08;
case 0x71bd0c:c.instructions+=226;goto B71bd0c;
case 0x71bd10:c.instructions+=225;goto B71bd10;
case 0x71bd13:c.instructions+=224;goto B71bd13;
case 0x71bd16:c.instructions+=223;goto B71bd16;
case 0x71bd19:c.instructions+=222;goto B71bd19;
case 0x71bd1d:c.instructions+=221;goto B71bd1d;
case 0x71bd20:c.instructions+=220;goto B71bd20;
case 0x71bd24:c.instructions+=219;goto B71bd24;
case 0x71bd27:c.instructions+=218;goto B71bd27;
case 0x71bd2b:c.instructions+=217;goto B71bd2b;
case 0x71bd2e:c.instructions+=216;goto B71bd2e;
case 0x71bd31:c.instructions+=215;goto B71bd31;
case 0x71bd34:c.instructions+=214;goto B71bd34;
case 0x71bd38:c.instructions+=213;goto B71bd38;
case 0x71bd3c:c.instructions+=212;goto B71bd3c;
case 0x71bd40:c.instructions+=211;goto B71bd40;
case 0x71bd43:c.instructions+=210;goto B71bd43;
case 0x71bd46:c.instructions+=209;goto B71bd46;
case 0x71bd49:c.instructions+=208;goto B71bd49;
case 0x71bd4c:c.instructions+=207;goto B71bd4c;
case 0x71bd50:c.instructions+=206;goto B71bd50;
case 0x71bd54:c.instructions+=205;goto B71bd54;
case 0x71bd58:c.instructions+=204;goto B71bd58;
case 0x71bd5c:c.instructions+=203;goto B71bd5c;
case 0x71bd60:c.instructions+=202;goto B71bd60;
case 0x71bd64:c.instructions+=201;goto B71bd64;
case 0x71bd67:c.instructions+=200;goto B71bd67;
case 0x71bd6b:c.instructions+=199;goto B71bd6b;
case 0x71bd6f:c.instructions+=198;goto B71bd6f;
case 0x71bd73:c.instructions+=197;goto B71bd73;
case 0x71bd76:c.instructions+=196;goto B71bd76;
case 0x71bd79:c.instructions+=195;goto B71bd79;
case 0x71bd7c:c.instructions+=194;goto B71bd7c;
case 0x71bd80:c.instructions+=193;goto B71bd80;
case 0x71bd83:c.instructions+=192;goto B71bd83;
case 0x71bd86:c.instructions+=191;goto B71bd86;
case 0x71bd8a:c.instructions+=190;goto B71bd8a;
case 0x71bd8d:c.instructions+=189;goto B71bd8d;
case 0x71bd90:c.instructions+=188;goto B71bd90;
case 0x71bd93:c.instructions+=187;goto B71bd93;
case 0x71bd96:c.instructions+=186;goto B71bd96;
case 0x71bd9a:c.instructions+=185;goto B71bd9a;
case 0x71bd9d:c.instructions+=184;goto B71bd9d;
case 0x71bda1:c.instructions+=183;goto B71bda1;
case 0x71bda5:c.instructions+=182;goto B71bda5;
case 0x71bda9:c.instructions+=181;goto B71bda9;
case 0x71bdac:c.instructions+=180;goto B71bdac;
case 0x71bdb0:c.instructions+=179;goto B71bdb0;
case 0x71bdb3:c.instructions+=178;goto B71bdb3;
case 0x71bdb7:c.instructions+=177;goto B71bdb7;
case 0x71bdbb:c.instructions+=176;goto B71bdbb;
case 0x71bdbf:c.instructions+=175;goto B71bdbf;
case 0x71bdc2:c.instructions+=174;goto B71bdc2;
case 0x71bdc6:c.instructions+=173;goto B71bdc6;
case 0x71bdca:c.instructions+=172;goto B71bdca;
case 0x71bdce:c.instructions+=171;goto B71bdce;
case 0x71bdd1:c.instructions+=170;goto B71bdd1;
case 0x71bdd5:c.instructions+=169;goto B71bdd5;
case 0x71bdd9:c.instructions+=168;goto B71bdd9;
case 0x71bddd:c.instructions+=167;goto B71bddd;
case 0x71bde0:c.instructions+=166;goto B71bde0;
case 0x71bde3:c.instructions+=165;goto B71bde3;
case 0x71bde6:c.instructions+=164;goto B71bde6;
case 0x71bde9:c.instructions+=163;goto B71bde9;
case 0x71bded:c.instructions+=162;goto B71bded;
case 0x71bdf0:c.instructions+=161;goto B71bdf0;
case 0x71bdf3:c.instructions+=160;goto B71bdf3;
case 0x71bdf7:c.instructions+=159;goto B71bdf7;
case 0x71bdfb:c.instructions+=158;goto B71bdfb;
case 0x71bdff:c.instructions+=157;goto B71bdff;
case 0x71be02:c.instructions+=156;goto B71be02;
case 0x71be06:c.instructions+=155;goto B71be06;
case 0x71be09:c.instructions+=154;goto B71be09;
case 0x71be0c:c.instructions+=153;goto B71be0c;
case 0x71be10:c.instructions+=152;goto B71be10;
case 0x71be14:c.instructions+=151;goto B71be14;
case 0x71be17:c.instructions+=150;goto B71be17;
case 0x71be1b:c.instructions+=149;goto B71be1b;
case 0x71be1f:c.instructions+=148;goto B71be1f;
case 0x71be23:c.instructions+=147;goto B71be23;
case 0x71be26:c.instructions+=146;goto B71be26;
case 0x71be2a:c.instructions+=145;goto B71be2a;
case 0x71be2d:c.instructions+=144;goto B71be2d;
case 0x71be30:c.instructions+=143;goto B71be30;
case 0x71be34:c.instructions+=142;goto B71be34;
case 0x71be38:c.instructions+=141;goto B71be38;
case 0x71be3b:c.instructions+=140;goto B71be3b;
case 0x71be3f:c.instructions+=139;goto B71be3f;
case 0x71be42:c.instructions+=138;goto B71be42;
case 0x71be45:c.instructions+=137;goto B71be45;
case 0x71be49:c.instructions+=136;goto B71be49;
case 0x71be4d:c.instructions+=135;goto B71be4d;
case 0x71be51:c.instructions+=134;goto B71be51;
case 0x71be52:c.instructions+=133;goto B71be52;
case 0x71be56:c.instructions+=132;goto B71be56;
case 0x71be59:c.instructions+=131;goto B71be59;
case 0x71be5d:c.instructions+=130;goto B71be5d;
case 0x71be60:c.instructions+=129;goto B71be60;
case 0x71be64:c.instructions+=128;goto B71be64;
case 0x71be67:c.instructions+=127;goto B71be67;
case 0x71be6b:c.instructions+=126;goto B71be6b;
case 0x71be6e:c.instructions+=125;goto B71be6e;
case 0x71be71:c.instructions+=124;goto B71be71;
case 0x71be74:c.instructions+=123;goto B71be74;
case 0x71be78:c.instructions+=122;goto B71be78;
case 0x71be7b:c.instructions+=121;goto B71be7b;
case 0x71be7e:c.instructions+=120;goto B71be7e;
case 0x71be81:c.instructions+=119;goto B71be81;
case 0x71be85:c.instructions+=118;goto B71be85;
case 0x71be88:c.instructions+=117;goto B71be88;
case 0x71be8c:c.instructions+=116;goto B71be8c;
case 0x71be8f:c.instructions+=115;goto B71be8f;
case 0x71be93:c.instructions+=114;goto B71be93;
case 0x71be96:c.instructions+=113;goto B71be96;
case 0x71be99:c.instructions+=112;goto B71be99;
case 0x71be9c:c.instructions+=111;goto B71be9c;
case 0x71bea0:c.instructions+=110;goto B71bea0;
case 0x71bea3:c.instructions+=109;goto B71bea3;
case 0x71bea7:c.instructions+=108;goto B71bea7;
case 0x71beaa:c.instructions+=107;goto B71beaa;
case 0x71beae:c.instructions+=106;goto B71beae;
case 0x71beb1:c.instructions+=105;goto B71beb1;
case 0x71beb4:c.instructions+=104;goto B71beb4;
case 0x71beb7:c.instructions+=103;goto B71beb7;
case 0x71bebb:c.instructions+=102;goto B71bebb;
case 0x71bebe:c.instructions+=101;goto B71bebe;
case 0x71bec1:c.instructions+=100;goto B71bec1;
case 0x71bec4:c.instructions+=99;goto B71bec4;
case 0x71bec7:c.instructions+=98;goto B71bec7;
case 0x71beca:c.instructions+=97;goto B71beca;
case 0x71becd:c.instructions+=96;goto B71becd;
case 0x71bed0:c.instructions+=95;goto B71bed0;
case 0x71bed3:c.instructions+=94;goto B71bed3;
case 0x71bed6:c.instructions+=93;goto B71bed6;
case 0x71bed9:c.instructions+=92;goto B71bed9;
case 0x71bedc:c.instructions+=91;goto B71bedc;
case 0x71bedf:c.instructions+=90;goto B71bedf;
case 0x71bee2:c.instructions+=89;goto B71bee2;
case 0x71bee6:c.instructions+=88;goto B71bee6;
case 0x71bee9:c.instructions+=87;goto B71bee9;
case 0x71beec:c.instructions+=86;goto B71beec;
case 0x71beed:c.instructions+=85;goto B71beed;
case 0x71bef1:c.instructions+=84;goto B71bef1;
case 0x71bef4:c.instructions+=83;goto B71bef4;
case 0x71bef7:c.instructions+=82;goto B71bef7;
case 0x71befa:c.instructions+=81;goto B71befa;
case 0x71befd:c.instructions+=80;goto B71befd;
case 0x71bf00:c.instructions+=79;goto B71bf00;
case 0x71bf03:c.instructions+=78;goto B71bf03;
case 0x71bf06:c.instructions+=77;goto B71bf06;
case 0x71bf09:c.instructions+=76;goto B71bf09;
case 0x71bf0c:c.instructions+=75;goto B71bf0c;
case 0x71bf0f:c.instructions+=74;goto B71bf0f;
case 0x71bf12:c.instructions+=73;goto B71bf12;
case 0x71bf15:c.instructions+=72;goto B71bf15;
case 0x71bf18:c.instructions+=71;goto B71bf18;
case 0x71bf1c:c.instructions+=70;goto B71bf1c;
case 0x71bf1f:c.instructions+=69;goto B71bf1f;
case 0x71bf22:c.instructions+=68;goto B71bf22;
case 0x71bf25:c.instructions+=67;goto B71bf25;
case 0x71bf28:c.instructions+=66;goto B71bf28;
case 0x71bf2b:c.instructions+=65;goto B71bf2b;
case 0x71bf2e:c.instructions+=64;goto B71bf2e;
case 0x71bf31:c.instructions+=63;goto B71bf31;
case 0x71bf34:c.instructions+=62;goto B71bf34;
case 0x71bf37:c.instructions+=61;goto B71bf37;
case 0x71bf3a:c.instructions+=60;goto B71bf3a;
case 0x71bf3d:c.instructions+=59;goto B71bf3d;
case 0x71bf41:c.instructions+=58;goto B71bf41;
case 0x71bf44:c.instructions+=57;goto B71bf44;
case 0x71bf48:c.instructions+=56;goto B71bf48;
case 0x71bf4b:c.instructions+=55;goto B71bf4b;
case 0x71bf4e:c.instructions+=54;goto B71bf4e;
case 0x71bf51:c.instructions+=53;goto B71bf51;
case 0x71bf55:c.instructions+=52;goto B71bf55;
case 0x71bf58:c.instructions+=51;goto B71bf58;
case 0x71bf5c:c.instructions+=50;goto B71bf5c;
case 0x71bf5f:c.instructions+=49;goto B71bf5f;
case 0x71bf63:c.instructions+=48;goto B71bf63;
case 0x71bf66:c.instructions+=47;goto B71bf66;
case 0x71bf69:c.instructions+=46;goto B71bf69;
case 0x71bf6c:c.instructions+=45;goto B71bf6c;
case 0x71bf6f:c.instructions+=44;goto B71bf6f;
case 0x71bf72:c.instructions+=43;goto B71bf72;
case 0x71bf75:c.instructions+=42;goto B71bf75;
case 0x71bf78:c.instructions+=41;goto B71bf78;
case 0x71bf7b:c.instructions+=40;goto B71bf7b;
case 0x71bf7e:c.instructions+=39;goto B71bf7e;
case 0x71bf82:c.instructions+=38;goto B71bf82;
case 0x71bf85:c.instructions+=37;goto B71bf85;
case 0x71bf88:c.instructions+=36;goto B71bf88;
case 0x71bf8c:c.instructions+=35;goto B71bf8c;
case 0x71bf90:c.instructions+=34;goto B71bf90;
case 0x71bf94:c.instructions+=33;goto B71bf94;
case 0x71bf95:c.instructions+=32;goto B71bf95;
case 0x71bf99:c.instructions+=31;goto B71bf99;
case 0x71bf9c:c.instructions+=30;goto B71bf9c;
case 0x71bfa0:c.instructions+=29;goto B71bfa0;
case 0x71bfa3:c.instructions+=28;goto B71bfa3;
case 0x71bfa7:c.instructions+=27;goto B71bfa7;
case 0x71bfaa:c.instructions+=26;goto B71bfaa;
case 0x71bfae:c.instructions+=25;goto B71bfae;
case 0x71bfb1:c.instructions+=24;goto B71bfb1;
case 0x71bfb4:c.instructions+=23;goto B71bfb4;
case 0x71bfb7:c.instructions+=22;goto B71bfb7;
case 0x71bfbb:c.instructions+=21;goto B71bfbb;
case 0x71bfbe:c.instructions+=20;goto B71bfbe;
case 0x71bfc1:c.instructions+=19;goto B71bfc1;
case 0x71bfc4:c.instructions+=18;goto B71bfc4;
case 0x71bfc8:c.instructions+=17;goto B71bfc8;
case 0x71bfcb:c.instructions+=16;goto B71bfcb;
case 0x71bfcf:c.instructions+=15;goto B71bfcf;
case 0x71bfd2:c.instructions+=14;goto B71bfd2;
case 0x71bfd6:c.instructions+=13;goto B71bfd6;
case 0x71bfd9:c.instructions+=12;goto B71bfd9;
case 0x71bfdc:c.instructions+=11;goto B71bfdc;
case 0x71bfdf:c.instructions+=10;goto B71bfdf;
case 0x71bfe3:c.instructions+=9;goto B71bfe3;
case 0x71bfe6:c.instructions+=8;goto B71bfe6;
case 0x71bfea:c.instructions+=7;goto B71bfea;
case 0x71bfed:c.instructions+=6;goto B71bfed;
case 0x71bff1:c.instructions+=5;goto B71bff1;
case 0x71bff4:c.instructions+=4;goto B71bff4;
case 0x71bff7:c.instructions+=3;goto B71bff7;
case 0x71bffa:c.instructions+=2;goto B71bffa;
case 0x71bffe:c.instructions+=1;goto B71bffe;
default:missing_instruction(c.pc);}
B71b002:L71b002:{c.instructions+=45;NFSU2_TR(0x71b002);
__builtin_memmove((R+4464),(R+4352),8);
}
B71b005:{NFSU2_TR(0x71b005);
w4(R+20,u32(r8(R+4400)));
}
B71b008:{NFSU2_TR(0x71b008);
w8(R+4368,u64(u64(r8(R+4368))^u64(r8(R+4352))));
}
B71b00b:{NFSU2_TR(0x71b00b);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+20),2);
s2(u32(r4(U+0)),r2(U+4));
}
B71b00f:{NFSU2_TR(0x71b00f);
{wv<8>((R+4368),uo::psubsw<8>(rv<8>((R+4368)),rv<8>((R+4352))));}
}
B71b012:{NFSU2_TR(0x71b012);
u8 U[46];
w4(U+38,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
__builtin_memmove((U+42),(R+20),4);
w4(R+20,shr<u32>(r4(R+20),u64(r4(U+38))));
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
w1(U+6,u8(s32(r4(R+20))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+20))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+20))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B71b015:{NFSU2_TR(0x71b015);
__builtin_memmove((R+4432),(R+4384),8);
}
B71b018:{NFSU2_TR(0x71b018);
u8 U[14];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+20),2);
s2(u32(r4(U+8)),r2(U+12));
}
B71b01d:{NFSU2_TR(0x71b01d);
w8(R+4400,shr<u64>(r8(R+4400),u64(u32(0x20ull))));
}
B71b021:{NFSU2_TR(0x71b021);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
w8(R+4464,u64(u64(r8(R+4464))|u64(r8(U+4))));
}
B71b025:{NFSU2_TR(0x71b025);
w2(R+4432,u16(u32(r2(R+4432))-u32(r2(R+4368))));
w2(R+4434,u16(u32(r2(R+4434))-u32(r2(R+4370))));
w2(R+4436,u16(u32(r2(R+4436))-u32(r2(R+4372))));
w2(R+4438,u16(u32(r2(R+4438))-u32(r2(R+4374))));
}
B71b028:{NFSU2_TR(0x71b028);
w4(R+20,u32(r8(R+4400)));
}
B71b02b:{NFSU2_TR(0x71b02b);
__builtin_memmove((R+4416),(R+4432),8);
}
B71b02e:{NFSU2_TR(0x71b02e);
u8 U[14];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+20),2);
s2(u32(r4(U+8)),r2(U+12));
}
B71b033:{NFSU2_TR(0x71b033);
{wv<8>((R+4432),uo::psraw<8>(rv<8>((R+4432)),V(0xfull)));}
}
B71b037:{NFSU2_TR(0x71b037);
u8 U[46];
w4(U+38,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
__builtin_memmove((U+42),(R+20),4);
w4(R+20,shr<u32>(r4(R+20),u64(r4(U+38))));
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
w1(U+6,u8(s32(r4(R+20))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+20))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+20))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B71b03a:{NFSU2_TR(0x71b03a);
w8(R+4416,u64(u64(r8(R+4416))^u64(r8(R+4432))));
}
B71b03d:{NFSU2_TR(0x71b03d);
u8 U[14];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+20),2);
s2(u32(r4(U+8)),r2(U+12));
}
B71b042:{NFSU2_TR(0x71b042);
{wv<8>((R+4416),uo::psubsw<8>(rv<8>((R+4416)),rv<8>((R+4432))));}
}
B71b045:{NFSU2_TR(0x71b045);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4432,u64(r4(U+4)));
}
B71b049:{NFSU2_TR(0x71b049);
{wv<8>((R+4384),uo::psubusw<8>(rv<8>((R+4384)),rv<8>((R+4416))));}
}
B71b04c:{NFSU2_TR(0x71b04c);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4464))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4466))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4468))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4470))));
}
B71b04f:{NFSU2_TR(0x71b04f);
w8(R+4448,u64(u64(r8(R+4448))^u64(r8(R+4448))));
}
B71b052:{NFSU2_TR(0x71b052);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4400,u64(r4(U+4)));
}
B71b056:{NFSU2_TR(0x71b056);
__builtin_memmove((R+4439),(R+4451),1);
__builtin_memmove((R+4438),(R+4435),1);
__builtin_memmove((R+4437),(R+4450),1);
__builtin_memmove((R+4436),(R+4434),1);
__builtin_memmove((R+4435),(R+4449),1);
__builtin_memmove((R+4434),(R+4433),1);
__builtin_memmove((R+4433),(R+4448),1);
}
B71b059:{NFSU2_TR(0x71b059);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B71b05c:{NFSU2_TR(0x71b05c);
__builtin_memmove((R+4407),(R+4451),1);
__builtin_memmove((R+4406),(R+4403),1);
__builtin_memmove((R+4405),(R+4450),1);
__builtin_memmove((R+4404),(R+4402),1);
__builtin_memmove((R+4403),(R+4449),1);
__builtin_memmove((R+4402),(R+4401),1);
__builtin_memmove((R+4401),(R+4448),1);
}
B71b05f:{NFSU2_TR(0x71b05f);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4384))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4386))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4388))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4390))));
}
B71b062:{NFSU2_TR(0x71b062);
w2(R+4432,u16(u32(r2(R+4432))-u32(r2(R+4384))));
w2(R+4434,u16(u32(r2(R+4434))-u32(r2(R+4386))));
w2(R+4436,u16(u32(r2(R+4436))-u32(r2(R+4388))));
w2(R+4438,u16(u32(r2(R+4438))-u32(r2(R+4390))));
}
B71b065:{NFSU2_TR(0x71b065);
u8 U[30];
__builtin_memmove((U+5),(R+4400),8);
__builtin_memmove((U+13),(R+4400),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4400),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4401),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4402),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4403),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4404),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4405),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4406),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4407),(U+21),1);
}
B71b068:{NFSU2_TR(0x71b068);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B71b069:{NFSU2_TR(0x71b069);
u8 U[30];
__builtin_memmove((U+5),(R+4432),8);
__builtin_memmove((U+13),(R+4432),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4432),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4433),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4434),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4435),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4436),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4437),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4438),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4439),(U+21),1);
}
B71b06c:{NFSU2_TR(0x71b06c);
__builtin_memmove((R+4407),(R+4435),1);
__builtin_memmove((R+4406),(R+4403),1);
__builtin_memmove((R+4405),(R+4434),1);
__builtin_memmove((R+4404),(R+4402),1);
__builtin_memmove((R+4403),(R+4433),1);
__builtin_memmove((R+4402),(R+4401),1);
__builtin_memmove((R+4401),(R+4432),1);
}
B71b06f:{NFSU2_TR(0x71b06f);
w4(R+0,u32(r8(R+4400)));
}
B71b072:{NFSU2_TR(0x71b072);
w8(R+4400,shr<u64>(r8(R+4400),u64(u32(0x20ull))));
}
B71b076:{NFSU2_TR(0x71b076);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B71b07a:{NFSU2_TR(0x71b07a);
u8 U[46];
w4(U+38,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
__builtin_memmove((U+42),(R+0),4);
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+38))));
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
w1(U+6,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+0))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B71b07d:{NFSU2_TR(0x71b07d);
u8 U[14];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),2);
s2(u32(r4(U+8)),r2(U+12));
}
B71b082:{NFSU2_TR(0x71b082);
w4(R+0,u32(r8(R+4400)));
}
B71b085:{NFSU2_TR(0x71b085);
u8 U[14];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),2);
s2(u32(r4(U+8)),r2(U+12));
}
B71b08a:{NFSU2_TR(0x71b08a);
u8 U[48];
w4(U+40,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
__builtin_memmove((U+44),(R+0),4);
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+40))));
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
w1(U+6,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+0))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B71b08d:{NFSU2_TR(0x71b08d);
u8 U[14];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),2);
s2(u32(r4(U+8)),r2(U+12));
}
B71b092:{NFSU2_TR(0x71b092);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B71b093:{NFSU2_TR(0x71b093);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B71b094:{NFSU2_TR(0x71b094);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B71b095:L71b095:{c.instructions+=100;NFSU2_TR(0x71b095);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71b096:{NFSU2_TR(0x71b096);
__builtin_memmove((R+20),(R+16),4);
}
B71b098:{NFSU2_TR(0x71b098);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71b099:{NFSU2_TR(0x71b099);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71b09c:{NFSU2_TR(0x71b09c);
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
B71b09e:{NFSU2_TR(0x71b09e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71b09f:{NFSU2_TR(0x71b09f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71b0a2:{NFSU2_TR(0x71b0a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71b0a5:{NFSU2_TR(0x71b0a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B71b0a8:{NFSU2_TR(0x71b0a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B71b0ab:{NFSU2_TR(0x71b0ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w8(R+4368,u64(r4(U+0)));
}
B71b0ae:{NFSU2_TR(0x71b0ae);
w8(R+4416,u64(u64(r8(R+4416))^u64(r8(R+4416))));
}
B71b0b1:{NFSU2_TR(0x71b0b1);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w8(R+4352,u64(r4(U+8)));
}
B71b0b5:{NFSU2_TR(0x71b0b5);
__builtin_memmove((R+4375),(R+4419),1);
__builtin_memmove((R+4374),(R+4371),1);
__builtin_memmove((R+4373),(R+4418),1);
__builtin_memmove((R+4372),(R+4370),1);
__builtin_memmove((R+4371),(R+4417),1);
__builtin_memmove((R+4370),(R+4369),1);
__builtin_memmove((R+4369),(R+4416),1);
}
B71b0b8:{NFSU2_TR(0x71b0b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B71b0bb:{NFSU2_TR(0x71b0bb);
__builtin_memmove((R+4359),(R+4419),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4418),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4417),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4416),1);
}
B71b0be:{NFSU2_TR(0x71b0be);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w8(R+4448,u64(r4(U+8)));
}
B71b0c2:{NFSU2_TR(0x71b0c2);
w2(R+4368,u16(u32(r2(R+4368))-u32(r2(R+4352))));
w2(R+4370,u16(u32(r2(R+4370))-u32(r2(R+4354))));
w2(R+4372,u16(u32(r2(R+4372))-u32(r2(R+4356))));
w2(R+4374,u16(u32(r2(R+4374))-u32(r2(R+4358))));
}
B71b0c5:{NFSU2_TR(0x71b0c5);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4384),(U+8),8);
}
B71b0c9:{NFSU2_TR(0x71b0c9);
__builtin_memmove((R+4400),(R+4368),8);
}
B71b0cc:{NFSU2_TR(0x71b0cc);
__builtin_memmove((R+4455),(R+4419),1);
__builtin_memmove((R+4454),(R+4451),1);
__builtin_memmove((R+4453),(R+4418),1);
__builtin_memmove((R+4452),(R+4450),1);
__builtin_memmove((R+4451),(R+4417),1);
__builtin_memmove((R+4450),(R+4449),1);
__builtin_memmove((R+4449),(R+4416),1);
}
B71b0cf:{NFSU2_TR(0x71b0cf);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4368))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4370))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4372))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4374))));
}
B71b0d2:{NFSU2_TR(0x71b0d2);
__builtin_memmove((R+4391),(R+4419),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4418),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4417),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4416),1);
}
B71b0d5:{NFSU2_TR(0x71b0d5);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4400))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4402))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4404))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4406))));
}
B71b0d8:{NFSU2_TR(0x71b0d8);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(U+12))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(U+14))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(U+16))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(U+18))));
}
B71b0dc:{NFSU2_TR(0x71b0dc);
w2(R+4448,u16(u32(r2(R+4448))-u32(r2(R+4384))));
w2(R+4450,u16(u32(r2(R+4450))-u32(r2(R+4386))));
w2(R+4452,u16(u32(r2(R+4452))-u32(r2(R+4388))));
w2(R+4454,u16(u32(r2(R+4454))-u32(r2(R+4390))));
}
B71b0df:{NFSU2_TR(0x71b0df);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4384),(U+0),8);
}
B71b0e2:{NFSU2_TR(0x71b0e2);
w2(R+4448,u16(u32(r2(R+4448))+u32(r2(R+4368))));
w2(R+4450,u16(u32(r2(R+4450))+u32(r2(R+4370))));
w2(R+4452,u16(u32(r2(R+4452))+u32(r2(R+4372))));
w2(R+4454,u16(u32(r2(R+4454))+u32(r2(R+4374))));
}
B71b0e5:{NFSU2_TR(0x71b0e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4432,u64(r4(U+4)));
}
B71b0e9:{NFSU2_TR(0x71b0e9);
{wv<8>((R+4448),uo::psraw<8>(rv<8>((R+4448)),V(0x3ull)));}
}
B71b0ed:{NFSU2_TR(0x71b0ed);
__builtin_memmove((R+4368),(R+4448),8);
}
B71b0f0:{NFSU2_TR(0x71b0f0);
{wv<8>((R+4448),uo::psraw<8>(rv<8>((R+4448)),V(0xfull)));}
}
B71b0f4:{NFSU2_TR(0x71b0f4);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(R+4464,u64(r4(U+12)));
}
B71b0f9:{NFSU2_TR(0x71b0f9);
w8(R+4368,u64(u64(r8(R+4368))^u64(r8(R+4448))));
}
B71b0fc:{NFSU2_TR(0x71b0fc);
{wv<8>((R+4368),uo::psubsw<8>(rv<8>((R+4368)),rv<8>((R+4448))));}
}
B71b0ff:{NFSU2_TR(0x71b0ff);
w8(R+4352,u64(u64(r8(R+4352))^u64(r8(R+4352))));
}
B71b102:{NFSU2_TR(0x71b102);
__builtin_memmove((R+4439),(R+4355),1);
__builtin_memmove((R+4438),(R+4435),1);
__builtin_memmove((R+4437),(R+4354),1);
__builtin_memmove((R+4436),(R+4434),1);
__builtin_memmove((R+4435),(R+4353),1);
__builtin_memmove((R+4434),(R+4433),1);
__builtin_memmove((R+4433),(R+4352),1);
}
B71b105:{NFSU2_TR(0x71b105);
__builtin_memmove((R+4400),(R+4384),8);
}
B71b108:{NFSU2_TR(0x71b108);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
w8(R+4448,u64(u64(r8(R+4448))|u64(r8(U+4))));
}
B71b10c:{NFSU2_TR(0x71b10c);
__builtin_memmove((R+4471),(R+4355),1);
__builtin_memmove((R+4470),(R+4467),1);
__builtin_memmove((R+4469),(R+4354),1);
__builtin_memmove((R+4468),(R+4466),1);
__builtin_memmove((R+4467),(R+4353),1);
__builtin_memmove((R+4466),(R+4465),1);
__builtin_memmove((R+4465),(R+4352),1);
}
B71b10f:{NFSU2_TR(0x71b10f);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(R+4368))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(R+4370))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(R+4372))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(R+4374))));
}
B71b112:{NFSU2_TR(0x71b112);
w2(R+4432,u16(u32(r2(R+4432))-u32(r2(R+4464))));
w2(R+4434,u16(u32(r2(R+4434))-u32(r2(R+4466))));
w2(R+4436,u16(u32(r2(R+4436))-u32(r2(R+4468))));
w2(R+4438,u16(u32(r2(R+4438))-u32(r2(R+4470))));
}
B71b115:{NFSU2_TR(0x71b115);
__builtin_memmove((R+4416),(R+4400),8);
}
B71b118:{NFSU2_TR(0x71b118);
{wv<8>((R+4400),uo::psraw<8>(rv<8>((R+4400)),V(0xfull)));}
}
B71b11c:{NFSU2_TR(0x71b11c);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(R+4352,u64(r4(U+12)));
}
B71b121:{NFSU2_TR(0x71b121);
w8(R+4416,u64(u64(r8(R+4416))^u64(r8(R+4400))));
}
B71b124:{NFSU2_TR(0x71b124);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(R+4368,u64(r4(U+12)));
}
B71b129:{NFSU2_TR(0x71b129);
{wv<8>((R+4416),uo::psubsw<8>(rv<8>((R+4416)),rv<8>((R+4400))));}
}
B71b12c:{NFSU2_TR(0x71b12c);
w8(R+4400,u64(u64(r8(R+4400))^u64(r8(R+4400))));
}
B71b12f:{NFSU2_TR(0x71b12f);
{wv<8>((R+4384),uo::psubusw<8>(rv<8>((R+4384)),rv<8>((R+4416))));}
}
B71b132:{NFSU2_TR(0x71b132);
__builtin_memmove((R+4359),(R+4403),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4402),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4401),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4400),1);
}
B71b135:{NFSU2_TR(0x71b135);
__builtin_memmove((R+4464),(R+4432),8);
}
B71b138:{NFSU2_TR(0x71b138);
w2(R+4464,u16(u32(r2(R+4464))+u32(r2(R+4432))));
w2(R+4466,u16(u32(r2(R+4466))+u32(r2(R+4434))));
w2(R+4468,u16(u32(r2(R+4468))+u32(r2(R+4436))));
w2(R+4470,u16(u32(r2(R+4470))+u32(r2(R+4438))));
}
B71b13b:{NFSU2_TR(0x71b13b);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4448))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4450))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4452))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4454))));
}
B71b13e:{NFSU2_TR(0x71b13e);
__builtin_memmove((R+4375),(R+4403),1);
__builtin_memmove((R+4374),(R+4371),1);
__builtin_memmove((R+4373),(R+4402),1);
__builtin_memmove((R+4372),(R+4370),1);
__builtin_memmove((R+4371),(R+4401),1);
__builtin_memmove((R+4370),(R+4369),1);
__builtin_memmove((R+4369),(R+4400),1);
}
B71b141:{NFSU2_TR(0x71b141);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4464))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4466))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4468))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4470))));
}
B71b144:{NFSU2_TR(0x71b144);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(U+12))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(U+14))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(U+16))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(U+18))));
}
B71b148:{NFSU2_TR(0x71b148);
w2(R+4352,u16(u32(r2(R+4352))-u32(r2(R+4368))));
w2(R+4354,u16(u32(r2(R+4354))-u32(r2(R+4370))));
w2(R+4356,u16(u32(r2(R+4356))-u32(r2(R+4372))));
w2(R+4358,u16(u32(r2(R+4358))-u32(r2(R+4374))));
}
B71b14b:{NFSU2_TR(0x71b14b);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4432))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4434))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4436))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4438))));
}
B71b14e:{NFSU2_TR(0x71b14e);
w8(R+4448,u64(u64(r8(R+4448))^u64(r8(R+4448))));
}
B71b151:{NFSU2_TR(0x71b151);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w8(R+4464,u64(r4(U+0)));
}
B71b154:{NFSU2_TR(0x71b154);
{wv<8>((R+4352),uo::psraw<8>(rv<8>((R+4352)),V(0x3ull)));}
}
B71b158:{NFSU2_TR(0x71b158);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w8(R+4400,u64(r4(U+8)));
}
B71b15c:{NFSU2_TR(0x71b15c);
__builtin_memmove((R+4471),(R+4451),1);
__builtin_memmove((R+4470),(R+4467),1);
__builtin_memmove((R+4469),(R+4450),1);
__builtin_memmove((R+4468),(R+4466),1);
__builtin_memmove((R+4467),(R+4449),1);
__builtin_memmove((R+4466),(R+4465),1);
__builtin_memmove((R+4465),(R+4448),1);
}
B71b15f:{NFSU2_TR(0x71b15f);
w2(R+4464,u16(u32(r2(R+4464))-u32(r2(R+4384))));
w2(R+4466,u16(u32(r2(R+4466))-u32(r2(R+4386))));
w2(R+4468,u16(u32(r2(R+4468))-u32(r2(R+4388))));
w2(R+4470,u16(u32(r2(R+4470))-u32(r2(R+4390))));
}
B71b162:{NFSU2_TR(0x71b162);
__builtin_memmove((R+4407),(R+4451),1);
__builtin_memmove((R+4406),(R+4403),1);
__builtin_memmove((R+4405),(R+4450),1);
__builtin_memmove((R+4404),(R+4402),1);
__builtin_memmove((R+4403),(R+4449),1);
__builtin_memmove((R+4402),(R+4401),1);
__builtin_memmove((R+4401),(R+4448),1);
}
B71b165:{NFSU2_TR(0x71b165);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4384))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4386))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4388))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4390))));
}
B71b168:{NFSU2_TR(0x71b168);
u8 U[30];
__builtin_memmove((U+5),(R+4464),8);
__builtin_memmove((U+13),(R+4464),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4464),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4465),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4466),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4467),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4468),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4469),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4470),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4471),(U+21),1);
}
B71b16b:{NFSU2_TR(0x71b16b);
u8 U[30];
__builtin_memmove((U+5),(R+4400),8);
__builtin_memmove((U+13),(R+4400),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4400),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4401),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4402),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4403),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4404),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4405),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4406),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4407),(U+21),1);
}
B71b16e:{NFSU2_TR(0x71b16e);
__builtin_memmove((R+4368),(R+4352),8);
}
B71b171:{NFSU2_TR(0x71b171);
u8 U[4];
w4(U+0,u32(r8(R+4464)));
s4(u32(r4(R+12)),r4(U+0));
}
B71b174:{NFSU2_TR(0x71b174);
{wv<8>((R+4352),uo::psraw<8>(rv<8>((R+4352)),V(0xfull)));}
}
B71b178:{NFSU2_TR(0x71b178);
__builtin_memmove((R+4464),(R+4352),8);
}
B71b17b:{NFSU2_TR(0x71b17b);
w8(R+4368,u64(u64(r8(R+4368))^u64(r8(R+4352))));
}
B71b17e:{NFSU2_TR(0x71b17e);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4384),(U+0),8);
}
B71b181:{NFSU2_TR(0x71b181);
{wv<8>((R+4368),uo::psubsw<8>(rv<8>((R+4368)),rv<8>((R+4352))));}
}
B71b184:{NFSU2_TR(0x71b184);
__builtin_memmove((R+4432),(R+4384),8);
}
B71b187:{NFSU2_TR(0x71b187);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
w8(R+4464,u64(u64(r8(R+4464))|u64(r8(U+4))));
}
B71b18b:{NFSU2_TR(0x71b18b);
w2(R+4432,u16(u32(r2(R+4432))-u32(r2(R+4368))));
w2(R+4434,u16(u32(r2(R+4434))-u32(r2(R+4370))));
w2(R+4436,u16(u32(r2(R+4436))-u32(r2(R+4372))));
w2(R+4438,u16(u32(r2(R+4438))-u32(r2(R+4374))));
}
B71b18e:{NFSU2_TR(0x71b18e);
__builtin_memmove((R+4416),(R+4432),8);
}
B71b191:{NFSU2_TR(0x71b191);
{wv<8>((R+4432),uo::psraw<8>(rv<8>((R+4432)),V(0xfull)));}
}
B71b195:{NFSU2_TR(0x71b195);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
w4(U+8,u32(r8(R+4400)));
s4(u32(r4(U+4)),r4(U+8));
}
B71b199:{NFSU2_TR(0x71b199);
w8(R+4416,u64(u64(r8(R+4416))^u64(r8(R+4432))));
}
B71b19c:{NFSU2_TR(0x71b19c);
{wv<8>((R+4416),uo::psubsw<8>(rv<8>((R+4416)),rv<8>((R+4432))));}
}
B71b19f:{NFSU2_TR(0x71b19f);
w8(R+4448,u64(u64(r8(R+4448))^u64(r8(R+4448))));
}
B71b1a2:{NFSU2_TR(0x71b1a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4432,u64(r4(U+4)));
}
B71b1a6:{NFSU2_TR(0x71b1a6);
{wv<8>((R+4384),uo::psubusw<8>(rv<8>((R+4384)),rv<8>((R+4416))));}
}
B71b1a9:{NFSU2_TR(0x71b1a9);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(R+4400,u64(r4(U+12)));
}
B71b1ae:{NFSU2_TR(0x71b1ae);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4464))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4466))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4468))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4470))));
}
B71b1b1:{NFSU2_TR(0x71b1b1);
__builtin_memmove((R+4439),(R+4451),1);
__builtin_memmove((R+4438),(R+4435),1);
__builtin_memmove((R+4437),(R+4450),1);
__builtin_memmove((R+4436),(R+4434),1);
__builtin_memmove((R+4435),(R+4449),1);
__builtin_memmove((R+4434),(R+4433),1);
__builtin_memmove((R+4433),(R+4448),1);
}
B71b1b4:{NFSU2_TR(0x71b1b4);
__builtin_memmove((R+4407),(R+4451),1);
__builtin_memmove((R+4406),(R+4403),1);
__builtin_memmove((R+4405),(R+4450),1);
__builtin_memmove((R+4404),(R+4402),1);
__builtin_memmove((R+4403),(R+4449),1);
__builtin_memmove((R+4402),(R+4401),1);
__builtin_memmove((R+4401),(R+4448),1);
}
B71b1b7:{NFSU2_TR(0x71b1b7);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4384))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4386))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4388))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4390))));
}
B71b1ba:{NFSU2_TR(0x71b1ba);
w2(R+4432,u16(u32(r2(R+4432))-u32(r2(R+4384))));
w2(R+4434,u16(u32(r2(R+4434))-u32(r2(R+4386))));
w2(R+4436,u16(u32(r2(R+4436))-u32(r2(R+4388))));
w2(R+4438,u16(u32(r2(R+4438))-u32(r2(R+4390))));
}
B71b1bd:{NFSU2_TR(0x71b1bd);
u8 U[30];
__builtin_memmove((U+5),(R+4400),8);
__builtin_memmove((U+13),(R+4400),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4400),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4401),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4402),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4403),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4404),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4405),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4406),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4407),(U+21),1);
}
B71b1c0:{NFSU2_TR(0x71b1c0);
u8 U[30];
__builtin_memmove((U+5),(R+4432),8);
__builtin_memmove((U+13),(R+4432),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4432),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4433),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4434),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4435),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4436),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4437),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4438),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4439),(U+21),1);
}
B71b1c3:{NFSU2_TR(0x71b1c3);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w4(U+12,u32(r8(R+4400)));
s4(u32(r4(U+8)),r4(U+12));
}
B71b1c8:{NFSU2_TR(0x71b1c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
w4(U+4,u32(r8(R+4432)));
s4(u32(r4(U+0)),r4(U+4));
}
B71b1cc:{NFSU2_TR(0x71b1cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B71b1cd:{NFSU2_TR(0x71b1cd);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B71b1ce:{NFSU2_TR(0x71b1ce);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B71b1cf:L71b1cf:{c.instructions+=710;NFSU2_TR(0x71b1cf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71b1d0:{NFSU2_TR(0x71b1d0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71b1d1:{NFSU2_TR(0x71b1d1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71b1d2:{NFSU2_TR(0x71b1d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71b1d6:{NFSU2_TR(0x71b1d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B71b1da:{NFSU2_TR(0x71b1da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B71b1dc:{NFSU2_TR(0x71b1dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B71b1df:{NFSU2_TR(0x71b1df);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B71b1e2:{NFSU2_TR(0x71b1e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B71b1e5:{NFSU2_TR(0x71b1e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B71b1e8:{NFSU2_TR(0x71b1e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B71b1eb:{NFSU2_TR(0x71b1eb);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B71b1ef:{NFSU2_TR(0x71b1ef);
w4(R+4,u32(0x8b98e0ull));
}
B71b1f5:{NFSU2_TR(0x71b1f5);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B71b1f8:{NFSU2_TR(0x71b1f8);
u8 U[16];
__builtin_memmove((U+0),gp(u32(r4(R+12))),8);
__builtin_memmove((U+8),(U+0),8);
w2(R+4352,u16(u32(r2(R+4352))*u32(r2(U+8))));
w2(R+4354,u16(u32(r2(R+4354))*u32(r2(U+10))));
w2(R+4356,u16(u32(r2(R+4356))*u32(r2(U+12))));
w2(R+4358,u16(u32(r2(R+4358))*u32(r2(U+14))));
}
B71b1fb:{NFSU2_TR(0x71b1fb);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B71b1ff:{NFSU2_TR(0x71b1ff);
u8 U[20];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4368,u16(u32(r2(R+4368))*u32(r2(U+12))));
w2(R+4370,u16(u32(r2(R+4370))*u32(r2(U+14))));
w2(R+4372,u16(u32(r2(R+4372))*u32(r2(U+16))));
w2(R+4374,u16(u32(r2(R+4374))*u32(r2(U+18))));
}
B71b203:{NFSU2_TR(0x71b203);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+4))),8);
__builtin_memmove((R+4384),(U+0),8);
}
B71b206:{NFSU2_TR(0x71b206);
__builtin_memmove((R+4400),(R+4352),8);
}
B71b209:{NFSU2_TR(0x71b209);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B71b20d:{NFSU2_TR(0x71b20d);
w8(R+4352,shr<u64>(r8(R+4352),u64(u32(0x10ull))));
}
B71b211:{NFSU2_TR(0x71b211);
u8 U[20];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))*u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))*u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))*u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))*u32(r2(U+18))));
}
B71b215:{NFSU2_TR(0x71b215);
w8(R+4400,u64(u64(r8(R+4400))&u64(r8(R+4384))));
}
B71b218:{NFSU2_TR(0x71b218);
__builtin_memmove((R+4432),(R+4352),8);
}
B71b21b:{NFSU2_TR(0x71b21b);
__builtin_memmove((R+4448),(R+4368),8);
}
B71b21e:{NFSU2_TR(0x71b21e);
w8(R+4432,u64(u64(r8(R+4432))&u64(r8(R+4384))));
}
B71b221:{NFSU2_TR(0x71b221);
w8(R+4448,shl<u64>(r8(R+4448),u64(u64(0x20ull))));
}
B71b225:{NFSU2_TR(0x71b225);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B71b229:{NFSU2_TR(0x71b229);
w8(R+4352,u64(u64(r8(R+4352))^u64(r8(R+4432))));
}
B71b22c:{NFSU2_TR(0x71b22c);
w8(R+4464,u64(u64(r8(R+4464))&u64(r8(R+4448))));
}
B71b22f:{NFSU2_TR(0x71b22f);
w8(R+4352,u64(u64(r8(R+4352))|u64(r8(R+4400))));
}
B71b232:{NFSU2_TR(0x71b232);
w8(R+4448,u64(u64(r8(R+4448))^u64(r8(R+4464))));
}
B71b235:{NFSU2_TR(0x71b235);
w8(R+4352,u64(u64(r8(R+4352))|u64(r8(R+4464))));
}
B71b238:{NFSU2_TR(0x71b238);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B71b23c:{NFSU2_TR(0x71b23c);
__builtin_memmove((R+4400),(R+4416),8);
}
B71b23f:{NFSU2_TR(0x71b23f);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+8)),r8(U+0));
}
B71b242:{NFSU2_TR(0x71b242);
w8(R+4400,u64(u64(r8(R+4400))&u64(r8(R+4384))));
}
B71b245:{NFSU2_TR(0x71b245);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B71b249:{NFSU2_TR(0x71b249);
w8(R+4400,shl<u64>(r8(R+4400),u64(u64(0x10ull))));
}
B71b24d:{NFSU2_TR(0x71b24d);
u8 U[20];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4352,u16(u32(r2(R+4352))*u32(r2(U+12))));
w2(R+4354,u16(u32(r2(R+4354))*u32(r2(U+14))));
w2(R+4356,u16(u32(r2(R+4356))*u32(r2(U+16))));
w2(R+4358,u16(u32(r2(R+4358))*u32(r2(U+18))));
}
B71b251:{NFSU2_TR(0x71b251);
w8(R+4464,u64(u64(r8(R+4464))&u64(r8(R+4368))));
}
B71b254:{NFSU2_TR(0x71b254);
w8(R+4432,u64(u64(r8(R+4432))|u64(r8(R+4400))));
}
B71b257:{NFSU2_TR(0x71b257);
w8(R+4464,u64(u64(r8(R+4464))|u64(r8(R+4448))));
}
B71b25a:{NFSU2_TR(0x71b25a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B71b25e:{NFSU2_TR(0x71b25e);
w8(R+4464,u64(u64(r8(R+4464))|u64(r8(R+4432))));
}
B71b261:{NFSU2_TR(0x71b261);
u8 U[20];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(U+18))));
}
B71b265:{NFSU2_TR(0x71b265);
w8(R+4416,shr<u64>(r8(R+4416),u64(u32(0x10ull))));
}
B71b269:{NFSU2_TR(0x71b269);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71b26d:{NFSU2_TR(0x71b26d);
__builtin_memmove((R+4432),(R+4416),8);
}
B71b270:{NFSU2_TR(0x71b270);
__builtin_memmove((R+4464),(R+4352),8);
}
B71b273:{NFSU2_TR(0x71b273);
w8(R+4416,shr<u64>(r8(R+4416),u64(u32(0x10ull))));
}
B71b277:{NFSU2_TR(0x71b277);
w8(R+4464,shr<u64>(r8(R+4464),u64(u32(0x30ull))));
}
B71b27b:{NFSU2_TR(0x71b27b);
__builtin_memmove((R+4448),(R+4384),8);
}
B71b27e:{NFSU2_TR(0x71b27e);
w8(R+4432,u64(u64(r8(R+4432))&u64(r8(R+4384))));
}
B71b281:{NFSU2_TR(0x71b281);
w8(R+4448,u64(u64(r8(R+4448))&u64(r8(R+4416))));
}
B71b284:{NFSU2_TR(0x71b284);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71b288:{NFSU2_TR(0x71b288);
w8(R+4416,u64(u64(r8(R+4416))^u64(r8(R+4448))));
}
B71b28b:{NFSU2_TR(0x71b28b);
w8(R+4368,shr<u64>(r8(R+4368),u64(u32(0x20ull))));
}
B71b28f:{NFSU2_TR(0x71b28f);
w8(R+4416,u64(u64(r8(R+4416))|u64(r8(R+4432))));
}
B71b292:{NFSU2_TR(0x71b292);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B71b296:{NFSU2_TR(0x71b296);
w8(R+4368,u64(u64(r8(R+4368))&u64(r8(R+4384))));
}
B71b299:{NFSU2_TR(0x71b299);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B71b29d:{NFSU2_TR(0x71b29d);
w8(R+4352,shl<u64>(r8(R+4352),u64(u64(0x10ull))));
}
B71b2a1:{NFSU2_TR(0x71b2a1);
u8 U[20];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4432,u16(u32(r2(R+4432))*u32(r2(U+12))));
w2(R+4434,u16(u32(r2(R+4434))*u32(r2(U+14))));
w2(R+4436,u16(u32(r2(R+4436))*u32(r2(U+16))));
w2(R+4438,u16(u32(r2(R+4438))*u32(r2(U+18))));
}
B71b2a5:{NFSU2_TR(0x71b2a5);
w8(R+4464,u64(u64(r8(R+4464))&u64(r8(R+4352))));
}
B71b2a8:{NFSU2_TR(0x71b2a8);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71b2ac:{NFSU2_TR(0x71b2ac);
w8(R+4464,u64(u64(r8(R+4464))|u64(r8(R+4416))));
}
B71b2af:{NFSU2_TR(0x71b2af);
__builtin_memmove((R+4416),(R+4400),8);
}
B71b2b2:{NFSU2_TR(0x71b2b2);
w8(R+4400,u64(u64(r8(R+4400))&u64(r8(R+4384))));
}
B71b2b5:{NFSU2_TR(0x71b2b5);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B71b2b9:{NFSU2_TR(0x71b2b9);
w8(R+4400,shl<u64>(r8(R+4400),u64(u64(0x20ull))));
}
B71b2bd:{NFSU2_TR(0x71b2bd);
w8(R+4464,u64(u64(r8(R+4464))|u64(r8(R+4400))));
}
B71b2c0:{NFSU2_TR(0x71b2c0);
__builtin_memmove((R+4400),(R+4432),8);
}
B71b2c3:{NFSU2_TR(0x71b2c3);
w8(R+4400,shl<u64>(r8(R+4400),u64(u64(0x30ull))));
}
B71b2c7:{NFSU2_TR(0x71b2c7);
w8(R+4368,u64(u64(r8(R+4368))&u64(r8(R+4352))));
}
B71b2ca:{NFSU2_TR(0x71b2ca);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71b2ce:{NFSU2_TR(0x71b2ce);
w8(R+4448,u64(u64(r8(R+4448))|u64(r8(R+4400))));
}
B71b2d1:{NFSU2_TR(0x71b2d1);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B71b2d5:{NFSU2_TR(0x71b2d5);
w8(R+4448,u64(u64(r8(R+4448))|u64(r8(R+4368))));
}
B71b2d8:{NFSU2_TR(0x71b2d8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B71b2dc:{NFSU2_TR(0x71b2dc);
w8(R+4464,u64(u64(r8(R+4464))&u64(r8(R+4416))));
}
B71b2df:{NFSU2_TR(0x71b2df);
u8 U[20];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4368,u16(u32(r2(R+4368))*u32(r2(U+12))));
w2(R+4370,u16(u32(r2(R+4370))*u32(r2(U+14))));
w2(R+4372,u16(u32(r2(R+4372))*u32(r2(U+16))));
w2(R+4374,u16(u32(r2(R+4374))*u32(r2(U+18))));
}
B71b2e3:{NFSU2_TR(0x71b2e3);
w8(R+4464,u64(u64(r8(R+4464))|u64(r8(R+4448))));
}
B71b2e6:{NFSU2_TR(0x71b2e6);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
w8(R+4352,u64(u64(r8(R+4352))&u64(r8(U+4))));
}
B71b2ea:{NFSU2_TR(0x71b2ea);
w8(R+4416,shr<u64>(r8(R+4416),u64(u32(0x20ull))));
}
B71b2ee:{NFSU2_TR(0x71b2ee);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71b2f2:{NFSU2_TR(0x71b2f2);
__builtin_memmove((R+4448),(R+4416),8);
}
B71b2f5:{NFSU2_TR(0x71b2f5);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B71b2f9:{NFSU2_TR(0x71b2f9);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4384))));
}
B71b2fc:{NFSU2_TR(0x71b2fc);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B71b300:{NFSU2_TR(0x71b300);
w8(R+4464,u64(u64(r8(R+4464))&u64(r8(R+4368))));
}
B71b303:{NFSU2_TR(0x71b303);
w8(R+4400,u64(u64(r8(R+4400))&u64(r8(R+4432))));
}
B71b306:{NFSU2_TR(0x71b306);
w8(R+4352,u64(u64(r8(R+4352))|u64(r8(R+4416))));
}
B71b309:{NFSU2_TR(0x71b309);
w8(R+4400,shl<u64>(r8(R+4400),u64(u64(0x10ull))));
}
B71b30d:{NFSU2_TR(0x71b30d);
w8(R+4464,u64(u64(r8(R+4464))|u64(r8(R+4352))));
}
B71b310:{NFSU2_TR(0x71b310);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B71b314:{NFSU2_TR(0x71b314);
w8(R+4464,u64(u64(r8(R+4464))|u64(r8(R+4400))));
}
B71b317:{NFSU2_TR(0x71b317);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B71b31b:{NFSU2_TR(0x71b31b);
__builtin_memmove((R+4400),(R+4416),8);
}
B71b31e:{NFSU2_TR(0x71b31e);
u8 U[20];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4352,u16(u32(r2(R+4352))*u32(r2(U+12))));
w2(R+4354,u16(u32(r2(R+4354))*u32(r2(U+14))));
w2(R+4356,u16(u32(r2(R+4356))*u32(r2(U+16))));
w2(R+4358,u16(u32(r2(R+4358))*u32(r2(U+18))));
}
B71b322:{NFSU2_TR(0x71b322);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4432))));
}
B71b325:{NFSU2_TR(0x71b325);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71b329:{NFSU2_TR(0x71b329);
w8(R+4448,u64(u64(r8(R+4448))|u64(r8(R+4416))));
}
B71b32c:{NFSU2_TR(0x71b32c);
__builtin_memmove((R+4416),(R+4400),8);
}
B71b32f:{NFSU2_TR(0x71b32f);
w8(R+4448,shr<u64>(r8(R+4448),u64(u32(0x10ull))));
}
B71b333:{NFSU2_TR(0x71b333);
__builtin_memmove((R+4464),(R+4352),8);
}
B71b336:{NFSU2_TR(0x71b336);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4368))));
}
B71b339:{NFSU2_TR(0x71b339);
w8(R+4464,shl<u64>(r8(R+4464),u64(u64(0x30ull))));
}
B71b33d:{NFSU2_TR(0x71b33d);
w8(R+4448,u64(u64(r8(R+4448))|u64(r8(R+4416))));
}
B71b340:{NFSU2_TR(0x71b340);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B71b344:{NFSU2_TR(0x71b344);
w8(R+4464,u64(u64(r8(R+4464))|u64(r8(R+4448))));
}
B71b347:{NFSU2_TR(0x71b347);
u8 U[20];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))*u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))*u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))*u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))*u32(r2(U+18))));
}
B71b34b:{NFSU2_TR(0x71b34b);
w8(R+4400,shr<u64>(r8(R+4400),u64(u32(0x10ull))));
}
B71b34f:{NFSU2_TR(0x71b34f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71b353:{NFSU2_TR(0x71b353);
w8(R+4400,u64(u64(r8(R+4400))&u64(r8(R+4368))));
}
B71b356:{NFSU2_TR(0x71b356);
w8(R+4432,shr<u64>(r8(R+4432),u64(u32(0x30ull))));
}
B71b35a:{NFSU2_TR(0x71b35a);
w8(R+4368,u64(u64(r8(R+4368))&u64(r8(R+4384))));
}
B71b35d:{NFSU2_TR(0x71b35d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B71b361:{NFSU2_TR(0x71b361);
w8(R+4432,u64(u64(r8(R+4432))|u64(r8(R+4400))));
}
B71b364:{NFSU2_TR(0x71b364);
u8 U[20];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4448,u16(u32(r2(R+4448))*u32(r2(U+12))));
w2(R+4450,u16(u32(r2(R+4450))*u32(r2(U+14))));
w2(R+4452,u16(u32(r2(R+4452))*u32(r2(U+16))));
w2(R+4454,u16(u32(r2(R+4454))*u32(r2(U+18))));
}
B71b368:{NFSU2_TR(0x71b368);
w8(R+4352,shr<u64>(r8(R+4352),u64(u32(0x10ull))));
}
B71b36c:{NFSU2_TR(0x71b36c);
__builtin_memmove((R+4464),(R+4416),8);
}
B71b36f:{NFSU2_TR(0x71b36f);
__builtin_memmove((R+4400),(R+4384),8);
}
B71b372:{NFSU2_TR(0x71b372);
w8(R+4464,shl<u64>(r8(R+4464),u64(u64(0x30ull))));
}
B71b376:{NFSU2_TR(0x71b376);
w8(R+4400,u64(u64(r8(R+4400))&u64(r8(R+4352))));
}
B71b379:{NFSU2_TR(0x71b379);
w8(R+4352,u64(u64(r8(R+4352))^u64(r8(R+4400))));
}
B71b37c:{NFSU2_TR(0x71b37c);
w8(R+4400,shl<u64>(r8(R+4400),u64(u64(0x20ull))));
}
B71b380:{NFSU2_TR(0x71b380);
w8(R+4464,u64(u64(r8(R+4464))|u64(r8(R+4432))));
}
B71b383:{NFSU2_TR(0x71b383);
__builtin_memmove((R+4432),(R+4448),8);
}
B71b386:{NFSU2_TR(0x71b386);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
w8(R+4448,u64(u64(r8(R+4448))&u64(r8(U+4))));
}
B71b38a:{NFSU2_TR(0x71b38a);
w8(R+4464,u64(u64(r8(R+4464))|u64(r8(R+4400))));
}
B71b38d:{NFSU2_TR(0x71b38d);
w8(R+4448,shl<u64>(r8(R+4448),u64(u64(0x20ull))));
}
B71b391:{NFSU2_TR(0x71b391);
w8(R+4352,u64(u64(r8(R+4352))|u64(r8(R+4368))));
}
B71b394:{NFSU2_TR(0x71b394);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71b398:{NFSU2_TR(0x71b398);
w8(R+4352,u64(u64(r8(R+4352))|u64(r8(R+4448))));
}
B71b39b:{NFSU2_TR(0x71b39b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B71b39f:{NFSU2_TR(0x71b39f);
__builtin_memmove((R+4448),(R+4432),8);
}
B71b3a2:{NFSU2_TR(0x71b3a2);
u8 U[20];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4464,u16(u32(r2(R+4464))*u32(r2(U+12))));
w2(R+4466,u16(u32(r2(R+4466))*u32(r2(U+14))));
w2(R+4468,u16(u32(r2(R+4468))*u32(r2(U+16))));
w2(R+4470,u16(u32(r2(R+4470))*u32(r2(U+18))));
}
B71b3a6:{NFSU2_TR(0x71b3a6);
w8(R+4432,shr<u64>(r8(R+4432),u64(u32(0x20ull))));
}
B71b3aa:{NFSU2_TR(0x71b3aa);
w8(R+4448,u64(u64(r8(R+4448))&u64(r8(R+4384))));
}
B71b3ad:{NFSU2_TR(0x71b3ad);
__builtin_memmove((R+4368),(R+4432),8);
}
B71b3b0:{NFSU2_TR(0x71b3b0);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71b3b4:{NFSU2_TR(0x71b3b4);
w8(R+4368,u64(u64(r8(R+4368))&u64(r8(R+4384))));
}
B71b3b7:{NFSU2_TR(0x71b3b7);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B71b3bb:{NFSU2_TR(0x71b3bb);
__builtin_memmove((R+4400),(R+4464),8);
}
B71b3be:{NFSU2_TR(0x71b3be);
u8 U[20];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4352,u16(u32(r2(R+4352))*u32(r2(U+12))));
w2(R+4354,u16(u32(r2(R+4354))*u32(r2(U+14))));
w2(R+4356,u16(u32(r2(R+4356))*u32(r2(U+16))));
w2(R+4358,u16(u32(r2(R+4358))*u32(r2(U+18))));
}
B71b3c2:{NFSU2_TR(0x71b3c2);
w8(R+4400,shl<u64>(r8(R+4400),u64(u64(0x10ull))));
}
B71b3c6:{NFSU2_TR(0x71b3c6);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
w8(R+4464,u64(u64(r8(R+4464))&u64(r8(U+4))));
}
B71b3ca:{NFSU2_TR(0x71b3ca);
w8(R+4432,u64(u64(r8(R+4432))^u64(r8(R+4368))));
}
B71b3cd:{NFSU2_TR(0x71b3cd);
w8(R+4448,u64(u64(r8(R+4448))|u64(r8(R+4432))));
}
B71b3d0:{NFSU2_TR(0x71b3d0);
__builtin_memmove((R+4432),(R+4400),8);
}
B71b3d3:{NFSU2_TR(0x71b3d3);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
w8(R+4432,u64(u64(r8(R+4432))&u64(r8(U+4))));
}
B71b3d7:{NFSU2_TR(0x71b3d7);
w8(R+4464,u64(u64(r8(R+4464))|u64(r8(R+4368))));
}
B71b3da:{NFSU2_TR(0x71b3da);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B71b3de:{NFSU2_TR(0x71b3de);
w8(R+4400,u64(u64(r8(R+4400))^u64(r8(R+4432))));
}
B71b3e1:{NFSU2_TR(0x71b3e1);
u8 U[20];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4368,u16(u32(r2(R+4368))*u32(r2(U+12))));
w2(R+4370,u16(u32(r2(R+4370))*u32(r2(U+14))));
w2(R+4372,u16(u32(r2(R+4372))*u32(r2(U+16))));
w2(R+4374,u16(u32(r2(R+4374))*u32(r2(U+18))));
}
B71b3e5:{NFSU2_TR(0x71b3e5);
w8(R+4464,u64(u64(r8(R+4464))|u64(r8(R+4400))));
}
B71b3e8:{NFSU2_TR(0x71b3e8);
w8(R+4448,u64(u64(r8(R+4448))|u64(r8(R+4432))));
}
B71b3eb:{NFSU2_TR(0x71b3eb);
__builtin_memmove((R+4432),(R+4352),8);
}
B71b3ee:{NFSU2_TR(0x71b3ee);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71b3f2:{NFSU2_TR(0x71b3f2);
w8(R+4432,shr<u64>(r8(R+4432),u64(u32(0x10ull))));
}
B71b3f6:{NFSU2_TR(0x71b3f6);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
w8(R+4432,u64(u64(r8(R+4432))&u64(r8(U+4))));
}
B71b3fa:{NFSU2_TR(0x71b3fa);
__builtin_memmove((R+4464),(R+4352),8);
}
B71b3fd:{NFSU2_TR(0x71b3fd);
w8(R+4448,u64(u64(r8(R+4448))|u64(r8(R+4432))));
}
B71b400:{NFSU2_TR(0x71b400);
w8(R+4352,u64(u64(r8(R+4352))&u64(r8(R+4384))));
}
B71b403:{NFSU2_TR(0x71b403);
w8(R+4464,u64(u64(r8(R+4464))^u64(r8(R+4352))));
}
B71b406:{NFSU2_TR(0x71b406);
w8(R+4352,shl<u64>(r8(R+4352),u64(u64(0x20ull))));
}
B71b40a:{NFSU2_TR(0x71b40a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+4448),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71b40e:{NFSU2_TR(0x71b40e);
w8(R+4416,shr<u64>(r8(R+4416),u64(u32(0x10ull))));
}
B71b412:{NFSU2_TR(0x71b412);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B71b416:{NFSU2_TR(0x71b416);
w8(R+4464,shl<u64>(r8(R+4464),u64(u64(0x10ull))));
}
B71b41a:{NFSU2_TR(0x71b41a);
u8 U[20];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4432,u16(u32(r2(R+4432))*u32(r2(U+12))));
w2(R+4434,u16(u32(r2(R+4434))*u32(r2(U+14))));
w2(R+4436,u16(u32(r2(R+4436))*u32(r2(U+16))));
w2(R+4438,u16(u32(r2(R+4438))*u32(r2(U+18))));
}
B71b41e:{NFSU2_TR(0x71b41e);
__builtin_memmove((R+4448),(R+4464),8);
}
B71b421:{NFSU2_TR(0x71b421);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B71b425:{NFSU2_TR(0x71b425);
w8(R+4448,shl<u64>(r8(R+4448),u64(u64(0x10ull))));
}
B71b429:{NFSU2_TR(0x71b429);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
w8(R+4464,u64(u64(r8(R+4464))&u64(r8(U+4))));
}
B71b42d:{NFSU2_TR(0x71b42d);
w8(R+4400,u64(u64(r8(R+4400))&u64(r8(R+4368))));
}
B71b430:{NFSU2_TR(0x71b430);
w8(R+4464,u64(u64(r8(R+4464))|u64(r8(R+4352))));
}
B71b433:{NFSU2_TR(0x71b433);
__builtin_memmove((R+4352),(R+4368),8);
}
B71b436:{NFSU2_TR(0x71b436);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
w8(R+4368,u64(u64(r8(R+4368))&u64(r8(U+4))));
}
B71b43a:{NFSU2_TR(0x71b43a);
w8(R+4448,u64(u64(r8(R+4448))|u64(r8(R+4400))));
}
B71b43d:{NFSU2_TR(0x71b43d);
__builtin_memmove((R+4400),(R+4416),8);
}
B71b440:{NFSU2_TR(0x71b440);
w8(R+4368,shr<u64>(r8(R+4368),u64(u32(0x20ull))));
}
B71b444:{NFSU2_TR(0x71b444);
w8(R+4400,u64(u64(r8(R+4400))&u64(r8(R+4384))));
}
B71b447:{NFSU2_TR(0x71b447);
w8(R+4464,u64(u64(r8(R+4464))|u64(r8(R+4368))));
}
B71b44a:{NFSU2_TR(0x71b44a);
w8(R+4464,u64(u64(r8(R+4464))|u64(r8(R+4400))));
}
B71b44d:{NFSU2_TR(0x71b44d);
__builtin_memmove((R+4400),(R+4416),8);
}
B71b450:{NFSU2_TR(0x71b450);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
w8(R+4400,u64(u64(r8(R+4400))&u64(r8(U+4))));
}
B71b454:{NFSU2_TR(0x71b454);
__builtin_memmove((R+4368),(R+4432),8);
}
B71b457:{NFSU2_TR(0x71b457);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71b45b:{NFSU2_TR(0x71b45b);
w8(R+4432,shr<u64>(r8(R+4432),u64(u32(0x30ull))));
}
B71b45f:{NFSU2_TR(0x71b45f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B71b463:{NFSU2_TR(0x71b463);
w8(R+4448,u64(u64(r8(R+4448))|u64(r8(R+4400))));
}
B71b466:{NFSU2_TR(0x71b466);
u8 U[20];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4464,u16(u32(r2(R+4464))*u32(r2(U+12))));
w2(R+4466,u16(u32(r2(R+4466))*u32(r2(U+14))));
w2(R+4468,u16(u32(r2(R+4468))*u32(r2(U+16))));
w2(R+4470,u16(u32(r2(R+4470))*u32(r2(U+18))));
}
B71b46a:{NFSU2_TR(0x71b46a);
w8(R+4448,u64(u64(r8(R+4448))|u64(r8(R+4432))));
}
B71b46d:{NFSU2_TR(0x71b46d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(U+4))));
}
B71b471:{NFSU2_TR(0x71b471);
w8(R+4352,shl<u64>(r8(R+4352),u64(u64(0x20ull))));
}
B71b475:{NFSU2_TR(0x71b475);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+4448),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71b479:{NFSU2_TR(0x71b479);
__builtin_memmove((R+4448),(R+4352),8);
}
B71b47c:{NFSU2_TR(0x71b47c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
w8(R+4352,u64(u64(r8(R+4352))&u64(r8(U+4))));
}
B71b480:{NFSU2_TR(0x71b480);
w8(R+4448,shl<u64>(r8(R+4448),u64(u64(0x10ull))));
}
B71b484:{NFSU2_TR(0x71b484);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B71b488:{NFSU2_TR(0x71b488);
__builtin_memmove((R+4400),(R+4368),8);
}
B71b48b:{NFSU2_TR(0x71b48b);
u8 U[20];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4432,u16(u32(r2(R+4432))*u32(r2(U+12))));
w2(R+4434,u16(u32(r2(R+4434))*u32(r2(U+14))));
w2(R+4436,u16(u32(r2(R+4436))*u32(r2(U+16))));
w2(R+4438,u16(u32(r2(R+4438))*u32(r2(U+18))));
}
B71b48f:{NFSU2_TR(0x71b48f);
w8(R+4368,shr<u64>(r8(R+4368),u64(u32(0x10ull))));
}
B71b493:{NFSU2_TR(0x71b493);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
w8(R+4368,u64(u64(r8(R+4368))&u64(r8(U+4))));
}
B71b497:{NFSU2_TR(0x71b497);
w8(R+4352,u64(u64(r8(R+4352))|u64(r8(R+4416))));
}
B71b49a:{NFSU2_TR(0x71b49a);
w8(R+4384,u64(u64(r8(R+4384))&u64(r8(R+4464))));
}
B71b49d:{NFSU2_TR(0x71b49d);
w8(R+4352,u64(u64(r8(R+4352))|u64(r8(R+4368))));
}
B71b4a0:{NFSU2_TR(0x71b4a0);
w8(R+4352,u64(u64(r8(R+4352))|u64(r8(R+4384))));
}
B71b4a3:{NFSU2_TR(0x71b4a3);
w8(R+4400,shl<u64>(r8(R+4400),u64(u64(0x10ull))));
}
B71b4a7:{NFSU2_TR(0x71b4a7);
__builtin_memmove((R+4416),(R+4400),8);
}
B71b4aa:{NFSU2_TR(0x71b4aa);
__builtin_memmove((R+4384),(R+4432),8);
}
B71b4ad:{NFSU2_TR(0x71b4ad);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71b4b1:{NFSU2_TR(0x71b4b1);
w8(R+4384,shr<u64>(r8(R+4384),u64(u32(0x30ull))));
}
B71b4b5:{NFSU2_TR(0x71b4b5);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(U+4))));
}
B71b4b9:{NFSU2_TR(0x71b4b9);
w8(R+4448,u64(u64(r8(R+4448))|u64(r8(R+4384))));
}
B71b4bc:{NFSU2_TR(0x71b4bc);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B71b4c0:{NFSU2_TR(0x71b4c0);
w8(R+4448,u64(u64(r8(R+4448))|u64(r8(R+4416))));
}
B71b4c3:{NFSU2_TR(0x71b4c3);
w8(R+4384,u64(u64(r8(R+4384))&u64(r8(R+4464))));
}
B71b4c6:{NFSU2_TR(0x71b4c6);
w8(R+4400,shl<u64>(r8(R+4400),u64(u64(0x20ull))));
}
B71b4ca:{NFSU2_TR(0x71b4ca);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
w8(R+4400,u64(u64(r8(R+4400))|u64(r8(U+4))));
}
B71b4ce:{NFSU2_TR(0x71b4ce);
w8(R+4448,u64(u64(r8(R+4448))|u64(r8(R+4384))));
}
B71b4d1:{NFSU2_TR(0x71b4d1);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B71b4d5:{NFSU2_TR(0x71b4d5);
w8(R+4432,shl<u64>(r8(R+4432),u64(u64(0x10ull))));
}
B71b4d9:{NFSU2_TR(0x71b4d9);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4448),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71b4dd:{NFSU2_TR(0x71b4dd);
w8(R+4384,u64(u64(r8(R+4384))&u64(r8(R+4432))));
}
B71b4e0:{NFSU2_TR(0x71b4e0);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B71b4e4:{NFSU2_TR(0x71b4e4);
w8(R+4432,u64(u64(r8(R+4432))^u64(r8(R+4384))));
}
B71b4e7:{NFSU2_TR(0x71b4e7);
w8(R+4448,u64(u64(r8(R+4448))&u64(r8(R+4464))));
}
B71b4ea:{NFSU2_TR(0x71b4ea);
w8(R+4384,shr<u64>(r8(R+4384),u64(u32(0x20ull))));
}
B71b4ee:{NFSU2_TR(0x71b4ee);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
w8(R+4464,u64(u64(r8(R+4464))&u64(r8(U+4))));
}
B71b4f2:{NFSU2_TR(0x71b4f2);
w8(R+4400,u64(u64(r8(R+4400))|u64(r8(R+4384))));
}
B71b4f5:{NFSU2_TR(0x71b4f5);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
w8(R+4464,u64(u64(r8(R+4464))|u64(r8(U+4))));
}
B71b4f9:{NFSU2_TR(0x71b4f9);
w8(R+4448,u64(u64(r8(R+4448))|u64(r8(R+4400))));
}
B71b4fc:{NFSU2_TR(0x71b4fc);
w8(R+4464,u64(u64(r8(R+4464))|u64(r8(R+4432))));
}
B71b4ff:{NFSU2_TR(0x71b4ff);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4448),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71b503:{NFSU2_TR(0x71b503);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71b507:{NFSU2_TR(0x71b507);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B71b50b:{NFSU2_TR(0x71b50b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B71b50f:{NFSU2_TR(0x71b50f);
__builtin_memmove((R+4416),(R+4384),8);
}
B71b512:{NFSU2_TR(0x71b512);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B71b516:{NFSU2_TR(0x71b516);
{wv<8>((R+4416),uo::pmulhw<8>(rv<8>((R+4416)),rv<8>((R+4448))));}
}
B71b519:{NFSU2_TR(0x71b519);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B71b51d:{NFSU2_TR(0x71b51d);
{wv<8>((R+4448),uo::pmulhw<8>(rv<8>((R+4448)),rv<8>((R+4464))));}
}
B71b520:{NFSU2_TR(0x71b520);
__builtin_memmove((R+4432),(R+4368),8);
}
B71b523:{NFSU2_TR(0x71b523);
{wv<8>((R+4368),uo::pmulhw<8>(rv<8>((R+4368)),rv<8>((R+4384))));}
}
B71b526:{NFSU2_TR(0x71b526);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B71b52a:{NFSU2_TR(0x71b52a);
{wv<8>((R+4432),uo::pmulhw<8>(rv<8>((R+4432)),rv<8>((R+4464))));}
}
B71b52d:{NFSU2_TR(0x71b52d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B71b531:{NFSU2_TR(0x71b531);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4384))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4386))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4388))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4390))));
}
B71b534:{NFSU2_TR(0x71b534);
w2(R+4448,u16(u32(r2(R+4448))+u32(r2(R+4464))));
w2(R+4450,u16(u32(r2(R+4450))+u32(r2(R+4466))));
w2(R+4452,u16(u32(r2(R+4452))+u32(r2(R+4468))));
w2(R+4454,u16(u32(r2(R+4454))+u32(r2(R+4470))));
}
B71b537:{NFSU2_TR(0x71b537);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(R+4368))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(R+4370))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(R+4372))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(R+4374))));
}
B71b53a:{NFSU2_TR(0x71b53a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B71b53e:{NFSU2_TR(0x71b53e);
w2(R+4464,u16(u32(r2(R+4464))+u32(r2(R+4432))));
w2(R+4466,u16(u32(r2(R+4466))+u32(r2(R+4434))));
w2(R+4468,u16(u32(r2(R+4468))+u32(r2(R+4436))));
w2(R+4470,u16(u32(r2(R+4470))+u32(r2(R+4438))));
}
B71b541:{NFSU2_TR(0x71b541);
__builtin_memmove((R+4432),(R+4352),8);
}
B71b544:{NFSU2_TR(0x71b544);
{wv<8>((R+4352),uo::pmulhw<8>(rv<8>((R+4352)),rv<8>((R+4400))));}
}
B71b547:{NFSU2_TR(0x71b547);
{wv<8>((R+4416),uo::paddsw<8>(rv<8>((R+4416)),rv<8>((R+4464))));}
}
B71b54a:{NFSU2_TR(0x71b54a);
{wv<8>((R+4432),uo::pmulhw<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B71b54d:{NFSU2_TR(0x71b54d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B71b551:{NFSU2_TR(0x71b551);
{wv<8>((R+4448),uo::psubsw<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B71b554:{NFSU2_TR(0x71b554);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4400))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4402))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4404))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4406))));
}
B71b557:{NFSU2_TR(0x71b557);
{wv<8>((R+4400),uo::pmulhw<8>(rv<8>((R+4400)),rv<8>((R+4464))));}
}
B71b55a:{NFSU2_TR(0x71b55a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B71b55e:{NFSU2_TR(0x71b55e);
{wv<8>((R+4464),uo::pmulhw<8>(rv<8>((R+4464)),rv<8>((R+4368))));}
}
B71b561:{NFSU2_TR(0x71b561);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4368))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4370))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4372))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4374))));
}
B71b564:{NFSU2_TR(0x71b564);
__builtin_memmove((R+4368),(R+4384),8);
}
B71b567:{NFSU2_TR(0x71b567);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pmulhw<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B71b56b:{NFSU2_TR(0x71b56b);
{wv<8>((R+4400),uo::psubsw<8>(rv<8>((R+4400)),rv<8>((R+4432))));}
}
B71b56e:{NFSU2_TR(0x71b56e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B71b572:{NFSU2_TR(0x71b572);
{wv<8>((R+4352),uo::paddsw<8>(rv<8>((R+4352)),rv<8>((R+4464))));}
}
B71b575:{NFSU2_TR(0x71b575);
__builtin_memmove((R+4464),(R+4432),8);
}
B71b578:{NFSU2_TR(0x71b578);
{wv<8>((R+4352),uo::psubsw<8>(rv<8>((R+4352)),rv<8>((R+4416))));}
}
B71b57b:{NFSU2_TR(0x71b57b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4432),uo::pmulhw<8>(rv<8>((R+4432)),rv<8>((U+4))));}
}
B71b57f:{NFSU2_TR(0x71b57f);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(R+4368))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(R+4370))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(R+4372))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(R+4374))));
}
B71b582:{NFSU2_TR(0x71b582);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pmulhw<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B71b586:{NFSU2_TR(0x71b586);
{wv<8>((R+4416),uo::paddsw<8>(rv<8>((R+4416)),rv<8>((R+4416))));}
}
B71b589:{NFSU2_TR(0x71b589);
{wv<8>((R+4416),uo::paddsw<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B71b58c:{NFSU2_TR(0x71b58c);
{wv<8>((R+4400),uo::psubsw<8>(rv<8>((R+4400)),rv<8>((R+4448))));}
}
B71b58f:{NFSU2_TR(0x71b58f);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4464))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4466))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4468))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4470))));
}
B71b592:{NFSU2_TR(0x71b592);
{wv<8>((R+4448),uo::paddsw<8>(rv<8>((R+4448)),rv<8>((R+4448))));}
}
B71b595:{NFSU2_TR(0x71b595);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4464),uo::pmulhw<8>(rv<8>((R+4464)),rv<8>((U+4))));}
}
B71b599:{NFSU2_TR(0x71b599);
{wv<8>((R+4448),uo::paddsw<8>(rv<8>((R+4448)),rv<8>((R+4400))));}
}
B71b59c:{NFSU2_TR(0x71b59c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71b5a0:{NFSU2_TR(0x71b5a0);
{wv<8>((R+4368),uo::psubsw<8>(rv<8>((R+4368)),rv<8>((R+4432))));}
}
B71b5a3:{NFSU2_TR(0x71b5a3);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B71b5a7:{NFSU2_TR(0x71b5a7);
__builtin_memmove((R+4432),(R+4400),8);
}
B71b5aa:{NFSU2_TR(0x71b5aa);
{wv<8>((R+4400),uo::pmulhw<8>(rv<8>((R+4400)),rv<8>((R+4416))));}
}
B71b5ad:{NFSU2_TR(0x71b5ad);
{wv<8>((R+4464),uo::paddsw<8>(rv<8>((R+4464)),rv<8>((R+4384))));}
}
B71b5b0:{NFSU2_TR(0x71b5b0);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4448),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71b5b4:{NFSU2_TR(0x71b5b4);
__builtin_memmove((R+4384),(R+4352),8);
}
B71b5b7:{NFSU2_TR(0x71b5b7);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4448),(U+0),8);
}
B71b5ba:{NFSU2_TR(0x71b5ba);
{wv<8>((R+4352),uo::pmulhw<8>(rv<8>((R+4352)),rv<8>((R+4416))));}
}
B71b5bd:{NFSU2_TR(0x71b5bd);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4400))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4402))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4404))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4406))));
}
B71b5c0:{NFSU2_TR(0x71b5c0);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B71b5c4:{NFSU2_TR(0x71b5c4);
{wv<8>((R+4432),uo::psubsw<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B71b5c7:{NFSU2_TR(0x71b5c7);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(R+4352))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(R+4354))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(R+4356))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(R+4358))));
}
B71b5ca:{NFSU2_TR(0x71b5ca);
{wv<8>((R+4448),uo::psubsw<8>(rv<8>((R+4448)),rv<8>((R+4400))));}
}
B71b5cd:{NFSU2_TR(0x71b5cd);
__builtin_memmove((R+4352),(R+4448),8);
}
B71b5d0:{NFSU2_TR(0x71b5d0);
{wv<8>((R+4448),uo::pmulhw<8>(rv<8>((R+4448)),rv<8>((R+4416))));}
}
B71b5d3:{NFSU2_TR(0x71b5d3);
{wv<8>((R+4400),uo::paddsw<8>(rv<8>((R+4400)),rv<8>((R+4400))));}
}
B71b5d6:{NFSU2_TR(0x71b5d6);
{wv<8>((R+4368),uo::paddsw<8>(rv<8>((R+4368)),rv<8>((R+4368))));}
}
B71b5d9:{NFSU2_TR(0x71b5d9);
{wv<8>((R+4400),uo::paddsw<8>(rv<8>((R+4400)),rv<8>((R+4352))));}
}
B71b5dc:{NFSU2_TR(0x71b5dc);
{wv<8>((R+4368),uo::paddsw<8>(rv<8>((R+4368)),rv<8>((R+4432))));}
}
B71b5df:{NFSU2_TR(0x71b5df);
{wv<8>((R+4416),uo::pmulhw<8>(rv<8>((R+4416)),rv<8>((R+4400))));}
}
B71b5e2:{NFSU2_TR(0x71b5e2);
{wv<8>((R+4448),uo::paddsw<8>(rv<8>((R+4448)),rv<8>((R+4352))));}
}
B71b5e5:{NFSU2_TR(0x71b5e5);
{wv<8>((R+4448),uo::psubsw<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B71b5e8:{NFSU2_TR(0x71b5e8);
{wv<8>((R+4384),uo::paddsw<8>(rv<8>((R+4384)),rv<8>((R+4384))));}
}
B71b5eb:{NFSU2_TR(0x71b5eb);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B71b5ef:{NFSU2_TR(0x71b5ef);
{wv<8>((R+4384),uo::paddsw<8>(rv<8>((R+4384)),rv<8>((R+4448))));}
}
B71b5f2:{NFSU2_TR(0x71b5f2);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B71b5f5:{NFSU2_TR(0x71b5f5);
{wv<8>((R+4384),uo::psubsw<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B71b5f8:{NFSU2_TR(0x71b5f8);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B71b5fc:{NFSU2_TR(0x71b5fc);
{wv<8>((R+4416),uo::psubsw<8>(rv<8>((R+4416)),rv<8>((R+4464))));}
}
B71b5ff:{NFSU2_TR(0x71b5ff);
{wv<8>((R+4368),uo::paddsw<8>(rv<8>((R+4368)),rv<8>((R+4368))));}
}
B71b602:{NFSU2_TR(0x71b602);
{wv<8>((R+4464),uo::paddsw<8>(rv<8>((R+4464)),rv<8>((R+4464))));}
}
B71b605:{NFSU2_TR(0x71b605);
{wv<8>((R+4368),uo::paddsw<8>(rv<8>((R+4368)),rv<8>((R+4384))));}
}
B71b608:{NFSU2_TR(0x71b608);
{wv<8>((R+4464),uo::paddsw<8>(rv<8>((R+4464)),rv<8>((R+4416))));}
}
B71b60b:{NFSU2_TR(0x71b60b);
{wv<8>((R+4416),uo::psubsw<8>(rv<8>((R+4416)),rv<8>((R+4400))));}
}
B71b60e:{NFSU2_TR(0x71b60e);
{wv<8>((R+4400),uo::paddsw<8>(rv<8>((R+4400)),rv<8>((R+4400))));}
}
B71b611:{NFSU2_TR(0x71b611);
{wv<8>((R+4448),uo::psubsw<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B71b614:{NFSU2_TR(0x71b614);
{wv<8>((R+4432),uo::paddsw<8>(rv<8>((R+4432)),rv<8>((R+4432))));}
}
B71b617:{NFSU2_TR(0x71b617);
{wv<8>((R+4400),uo::paddsw<8>(rv<8>((R+4400)),rv<8>((R+4416))));}
}
B71b61a:{NFSU2_TR(0x71b61a);
{wv<8>((R+4432),uo::paddsw<8>(rv<8>((R+4432)),rv<8>((R+4448))));}
}
B71b61d:{NFSU2_TR(0x71b61d);
{wv<8>((R+4464),uo::psubsw<8>(rv<8>((R+4464)),rv<8>((R+4352))));}
}
B71b620:{NFSU2_TR(0x71b620);
{wv<8>((R+4352),uo::paddsw<8>(rv<8>((R+4352)),rv<8>((R+4352))));}
}
B71b623:{NFSU2_TR(0x71b623);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71b627:{NFSU2_TR(0x71b627);
{wv<8>((R+4352),uo::paddsw<8>(rv<8>((R+4352)),rv<8>((R+4464))));}
}
B71b62a:{NFSU2_TR(0x71b62a);
__builtin_memmove((R+4368),(R+4416),8);
}
B71b62d:{NFSU2_TR(0x71b62d);
__builtin_memmove((R+4422),(R+4434),2);
__builtin_memmove((R+4420),(R+4418),2);
__builtin_memmove((R+4418),(R+4432),2);
}
B71b630:{NFSU2_TR(0x71b630);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+8)),r8(U+0));
}
B71b633:{NFSU2_TR(0x71b633);
__builtin_memmove((R+4368),(R+4372),2);
__builtin_memmove((R+4370),(R+4436),2);
__builtin_memmove((R+4372),(R+4374),2);
__builtin_memmove((R+4374),(R+4438),2);
}
B71b636:{NFSU2_TR(0x71b636);
__builtin_memmove((R+4352),(R+4448),8);
}
B71b639:{NFSU2_TR(0x71b639);
__builtin_memmove((R+4454),(R+4466),2);
__builtin_memmove((R+4452),(R+4450),2);
__builtin_memmove((R+4450),(R+4464),2);
}
B71b63c:{NFSU2_TR(0x71b63c);
__builtin_memmove((R+4432),(R+4416),8);
}
B71b63f:{NFSU2_TR(0x71b63f);
__builtin_memmove((R+4420),(R+4448),4);
}
B71b642:{NFSU2_TR(0x71b642);
__builtin_memmove((R+4432),(R+4436),4);
__builtin_memmove((R+4436),(R+4452),4);
}
B71b645:{NFSU2_TR(0x71b645);
__builtin_memmove((R+4448),(R+4368),8);
}
B71b648:{NFSU2_TR(0x71b648);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71b64c:{NFSU2_TR(0x71b64c);
__builtin_memmove((R+4352),(R+4356),2);
__builtin_memmove((R+4354),(R+4468),2);
__builtin_memmove((R+4356),(R+4358),2);
__builtin_memmove((R+4358),(R+4470),2);
}
B71b64f:{NFSU2_TR(0x71b64f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71b653:{NFSU2_TR(0x71b653);
__builtin_memmove((R+4448),(R+4452),4);
__builtin_memmove((R+4452),(R+4356),4);
}
B71b656:{NFSU2_TR(0x71b656);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B71b659:{NFSU2_TR(0x71b659);
__builtin_memmove((R+4372),(R+4352),4);
}
B71b65c:{NFSU2_TR(0x71b65c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B71b660:{NFSU2_TR(0x71b660);
__builtin_memmove((R+4352),(R+4416),8);
}
B71b663:{NFSU2_TR(0x71b663);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4448),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71b667:{NFSU2_TR(0x71b667);
__builtin_memmove((R+4358),(R+4434),2);
__builtin_memmove((R+4356),(R+4354),2);
__builtin_memmove((R+4354),(R+4432),2);
}
B71b66a:{NFSU2_TR(0x71b66a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71b66e:{NFSU2_TR(0x71b66e);
__builtin_memmove((R+4416),(R+4420),2);
__builtin_memmove((R+4418),(R+4436),2);
__builtin_memmove((R+4420),(R+4422),2);
__builtin_memmove((R+4422),(R+4438),2);
}
B71b671:{NFSU2_TR(0x71b671);
__builtin_memmove((R+4432),(R+4384),8);
}
B71b674:{NFSU2_TR(0x71b674);
__builtin_memmove((R+4390),(R+4402),2);
__builtin_memmove((R+4388),(R+4386),2);
__builtin_memmove((R+4386),(R+4400),2);
}
B71b677:{NFSU2_TR(0x71b677);
__builtin_memmove((R+4368),(R+4352),8);
}
B71b67a:{NFSU2_TR(0x71b67a);
__builtin_memmove((R+4356),(R+4384),4);
}
B71b67d:{NFSU2_TR(0x71b67d);
__builtin_memmove((R+4368),(R+4372),4);
__builtin_memmove((R+4372),(R+4388),4);
}
B71b680:{NFSU2_TR(0x71b680);
__builtin_memmove((R+4384),(R+4416),8);
}
B71b683:{NFSU2_TR(0x71b683);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+8)),r8(U+0));
}
B71b686:{NFSU2_TR(0x71b686);
__builtin_memmove((R+4432),(R+4436),2);
__builtin_memmove((R+4434),(R+4404),2);
__builtin_memmove((R+4436),(R+4438),2);
__builtin_memmove((R+4438),(R+4406),2);
}
B71b689:{NFSU2_TR(0x71b689);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71b68d:{NFSU2_TR(0x71b68d);
__builtin_memmove((R+4416),(R+4420),4);
__builtin_memmove((R+4420),(R+4436),4);
}
B71b690:{NFSU2_TR(0x71b690);
__builtin_memmove((R+4388),(R+4432),4);
}
B71b693:{NFSU2_TR(0x71b693);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71b697:{NFSU2_TR(0x71b697);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71b69b:{NFSU2_TR(0x71b69b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B71b69f:{NFSU2_TR(0x71b69f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B71b6a3:{NFSU2_TR(0x71b6a3);
__builtin_memmove((R+4416),(R+4384),8);
}
B71b6a6:{NFSU2_TR(0x71b6a6);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B71b6aa:{NFSU2_TR(0x71b6aa);
{wv<8>((R+4416),uo::pmulhw<8>(rv<8>((R+4416)),rv<8>((R+4448))));}
}
B71b6ad:{NFSU2_TR(0x71b6ad);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B71b6b1:{NFSU2_TR(0x71b6b1);
{wv<8>((R+4448),uo::pmulhw<8>(rv<8>((R+4448)),rv<8>((R+4464))));}
}
B71b6b4:{NFSU2_TR(0x71b6b4);
__builtin_memmove((R+4432),(R+4368),8);
}
B71b6b7:{NFSU2_TR(0x71b6b7);
{wv<8>((R+4368),uo::pmulhw<8>(rv<8>((R+4368)),rv<8>((R+4384))));}
}
B71b6ba:{NFSU2_TR(0x71b6ba);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B71b6be:{NFSU2_TR(0x71b6be);
{wv<8>((R+4432),uo::pmulhw<8>(rv<8>((R+4432)),rv<8>((R+4464))));}
}
B71b6c1:{NFSU2_TR(0x71b6c1);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B71b6c5:{NFSU2_TR(0x71b6c5);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4384))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4386))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4388))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4390))));
}
B71b6c8:{NFSU2_TR(0x71b6c8);
w2(R+4448,u16(u32(r2(R+4448))+u32(r2(R+4464))));
w2(R+4450,u16(u32(r2(R+4450))+u32(r2(R+4466))));
w2(R+4452,u16(u32(r2(R+4452))+u32(r2(R+4468))));
w2(R+4454,u16(u32(r2(R+4454))+u32(r2(R+4470))));
}
B71b6cb:{NFSU2_TR(0x71b6cb);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(R+4368))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(R+4370))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(R+4372))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(R+4374))));
}
B71b6ce:{NFSU2_TR(0x71b6ce);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B71b6d2:{NFSU2_TR(0x71b6d2);
w2(R+4464,u16(u32(r2(R+4464))+u32(r2(R+4432))));
w2(R+4466,u16(u32(r2(R+4466))+u32(r2(R+4434))));
w2(R+4468,u16(u32(r2(R+4468))+u32(r2(R+4436))));
w2(R+4470,u16(u32(r2(R+4470))+u32(r2(R+4438))));
}
B71b6d5:{NFSU2_TR(0x71b6d5);
__builtin_memmove((R+4432),(R+4352),8);
}
B71b6d8:{NFSU2_TR(0x71b6d8);
{wv<8>((R+4352),uo::pmulhw<8>(rv<8>((R+4352)),rv<8>((R+4400))));}
}
B71b6db:{NFSU2_TR(0x71b6db);
{wv<8>((R+4416),uo::paddsw<8>(rv<8>((R+4416)),rv<8>((R+4464))));}
}
B71b6de:{NFSU2_TR(0x71b6de);
{wv<8>((R+4432),uo::pmulhw<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B71b6e1:{NFSU2_TR(0x71b6e1);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B71b6e5:{NFSU2_TR(0x71b6e5);
{wv<8>((R+4448),uo::psubsw<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B71b6e8:{NFSU2_TR(0x71b6e8);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4400))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4402))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4404))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4406))));
}
B71b6eb:{NFSU2_TR(0x71b6eb);
{wv<8>((R+4400),uo::pmulhw<8>(rv<8>((R+4400)),rv<8>((R+4464))));}
}
B71b6ee:{NFSU2_TR(0x71b6ee);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B71b6f2:{NFSU2_TR(0x71b6f2);
{wv<8>((R+4464),uo::pmulhw<8>(rv<8>((R+4464)),rv<8>((R+4368))));}
}
B71b6f5:{NFSU2_TR(0x71b6f5);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4368))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4370))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4372))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4374))));
}
B71b6f8:{NFSU2_TR(0x71b6f8);
__builtin_memmove((R+4368),(R+4384),8);
}
B71b6fb:{NFSU2_TR(0x71b6fb);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pmulhw<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B71b6ff:{NFSU2_TR(0x71b6ff);
{wv<8>((R+4400),uo::psubsw<8>(rv<8>((R+4400)),rv<8>((R+4432))));}
}
B71b702:{NFSU2_TR(0x71b702);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B71b706:{NFSU2_TR(0x71b706);
{wv<8>((R+4352),uo::paddsw<8>(rv<8>((R+4352)),rv<8>((R+4464))));}
}
B71b709:{NFSU2_TR(0x71b709);
__builtin_memmove((R+4464),(R+4432),8);
}
B71b70c:{NFSU2_TR(0x71b70c);
{wv<8>((R+4352),uo::psubsw<8>(rv<8>((R+4352)),rv<8>((R+4416))));}
}
B71b70f:{NFSU2_TR(0x71b70f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4432),uo::pmulhw<8>(rv<8>((R+4432)),rv<8>((U+4))));}
}
B71b713:{NFSU2_TR(0x71b713);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(R+4368))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(R+4370))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(R+4372))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(R+4374))));
}
B71b716:{NFSU2_TR(0x71b716);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pmulhw<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B71b71a:{NFSU2_TR(0x71b71a);
{wv<8>((R+4416),uo::paddsw<8>(rv<8>((R+4416)),rv<8>((R+4416))));}
}
B71b71d:{NFSU2_TR(0x71b71d);
{wv<8>((R+4416),uo::paddsw<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B71b720:{NFSU2_TR(0x71b720);
{wv<8>((R+4400),uo::psubsw<8>(rv<8>((R+4400)),rv<8>((R+4448))));}
}
B71b723:{NFSU2_TR(0x71b723);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4464))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4466))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4468))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4470))));
}
B71b726:{NFSU2_TR(0x71b726);
{wv<8>((R+4448),uo::paddsw<8>(rv<8>((R+4448)),rv<8>((R+4448))));}
}
B71b729:{NFSU2_TR(0x71b729);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4464),uo::pmulhw<8>(rv<8>((R+4464)),rv<8>((U+4))));}
}
B71b72d:{NFSU2_TR(0x71b72d);
{wv<8>((R+4448),uo::paddsw<8>(rv<8>((R+4448)),rv<8>((R+4400))));}
}
B71b730:{NFSU2_TR(0x71b730);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71b734:{NFSU2_TR(0x71b734);
{wv<8>((R+4368),uo::psubsw<8>(rv<8>((R+4368)),rv<8>((R+4432))));}
}
B71b737:{NFSU2_TR(0x71b737);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B71b73b:{NFSU2_TR(0x71b73b);
__builtin_memmove((R+4432),(R+4400),8);
}
B71b73e:{NFSU2_TR(0x71b73e);
{wv<8>((R+4400),uo::pmulhw<8>(rv<8>((R+4400)),rv<8>((R+4416))));}
}
B71b741:{NFSU2_TR(0x71b741);
{wv<8>((R+4464),uo::paddsw<8>(rv<8>((R+4464)),rv<8>((R+4384))));}
}
B71b744:{NFSU2_TR(0x71b744);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4448),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71b748:{NFSU2_TR(0x71b748);
__builtin_memmove((R+4384),(R+4352),8);
}
B71b74b:{NFSU2_TR(0x71b74b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B71b74f:{NFSU2_TR(0x71b74f);
{wv<8>((R+4352),uo::pmulhw<8>(rv<8>((R+4352)),rv<8>((R+4416))));}
}
B71b752:{NFSU2_TR(0x71b752);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4400))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4402))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4404))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4406))));
}
B71b755:{NFSU2_TR(0x71b755);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B71b759:{NFSU2_TR(0x71b759);
{wv<8>((R+4432),uo::psubsw<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B71b75c:{NFSU2_TR(0x71b75c);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(R+4352))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(R+4354))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(R+4356))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(R+4358))));
}
B71b75f:{NFSU2_TR(0x71b75f);
{wv<8>((R+4448),uo::psubsw<8>(rv<8>((R+4448)),rv<8>((R+4400))));}
}
B71b762:{NFSU2_TR(0x71b762);
__builtin_memmove((R+4352),(R+4448),8);
}
B71b765:{NFSU2_TR(0x71b765);
{wv<8>((R+4448),uo::pmulhw<8>(rv<8>((R+4448)),rv<8>((R+4416))));}
}
B71b768:{NFSU2_TR(0x71b768);
{wv<8>((R+4400),uo::paddsw<8>(rv<8>((R+4400)),rv<8>((R+4400))));}
}
B71b76b:{NFSU2_TR(0x71b76b);
{wv<8>((R+4368),uo::paddsw<8>(rv<8>((R+4368)),rv<8>((R+4368))));}
}
B71b76e:{NFSU2_TR(0x71b76e);
{wv<8>((R+4400),uo::paddsw<8>(rv<8>((R+4400)),rv<8>((R+4352))));}
}
B71b771:{NFSU2_TR(0x71b771);
{wv<8>((R+4368),uo::paddsw<8>(rv<8>((R+4368)),rv<8>((R+4432))));}
}
B71b774:{NFSU2_TR(0x71b774);
{wv<8>((R+4416),uo::pmulhw<8>(rv<8>((R+4416)),rv<8>((R+4400))));}
}
B71b777:{NFSU2_TR(0x71b777);
{wv<8>((R+4448),uo::paddsw<8>(rv<8>((R+4448)),rv<8>((R+4352))));}
}
B71b77a:{NFSU2_TR(0x71b77a);
{wv<8>((R+4448),uo::psubsw<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B71b77d:{NFSU2_TR(0x71b77d);
{wv<8>((R+4384),uo::paddsw<8>(rv<8>((R+4384)),rv<8>((R+4384))));}
}
B71b780:{NFSU2_TR(0x71b780);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B71b784:{NFSU2_TR(0x71b784);
{wv<8>((R+4384),uo::paddsw<8>(rv<8>((R+4384)),rv<8>((R+4448))));}
}
B71b787:{NFSU2_TR(0x71b787);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B71b78a:{NFSU2_TR(0x71b78a);
{wv<8>((R+4384),uo::psubsw<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B71b78d:{NFSU2_TR(0x71b78d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B71b791:{NFSU2_TR(0x71b791);
{wv<8>((R+4416),uo::psubsw<8>(rv<8>((R+4416)),rv<8>((R+4464))));}
}
B71b794:{NFSU2_TR(0x71b794);
{wv<8>((R+4368),uo::paddsw<8>(rv<8>((R+4368)),rv<8>((R+4368))));}
}
B71b797:{NFSU2_TR(0x71b797);
{wv<8>((R+4464),uo::paddsw<8>(rv<8>((R+4464)),rv<8>((R+4464))));}
}
B71b79a:{NFSU2_TR(0x71b79a);
{wv<8>((R+4368),uo::paddsw<8>(rv<8>((R+4368)),rv<8>((R+4384))));}
}
B71b79d:{NFSU2_TR(0x71b79d);
{wv<8>((R+4464),uo::paddsw<8>(rv<8>((R+4464)),rv<8>((R+4416))));}
}
B71b7a0:{NFSU2_TR(0x71b7a0);
{wv<8>((R+4416),uo::psubsw<8>(rv<8>((R+4416)),rv<8>((R+4400))));}
}
B71b7a3:{NFSU2_TR(0x71b7a3);
{wv<8>((R+4400),uo::paddsw<8>(rv<8>((R+4400)),rv<8>((R+4400))));}
}
B71b7a6:{NFSU2_TR(0x71b7a6);
{wv<8>((R+4448),uo::psubsw<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B71b7a9:{NFSU2_TR(0x71b7a9);
{wv<8>((R+4432),uo::paddsw<8>(rv<8>((R+4432)),rv<8>((R+4432))));}
}
B71b7ac:{NFSU2_TR(0x71b7ac);
{wv<8>((R+4400),uo::paddsw<8>(rv<8>((R+4400)),rv<8>((R+4416))));}
}
B71b7af:{NFSU2_TR(0x71b7af);
{wv<8>((R+4432),uo::paddsw<8>(rv<8>((R+4432)),rv<8>((R+4448))));}
}
B71b7b2:{NFSU2_TR(0x71b7b2);
{wv<8>((R+4464),uo::psubsw<8>(rv<8>((R+4464)),rv<8>((R+4352))));}
}
B71b7b5:{NFSU2_TR(0x71b7b5);
{wv<8>((R+4352),uo::paddsw<8>(rv<8>((R+4352)),rv<8>((R+4352))));}
}
B71b7b8:{NFSU2_TR(0x71b7b8);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71b7bc:{NFSU2_TR(0x71b7bc);
{wv<8>((R+4352),uo::paddsw<8>(rv<8>((R+4352)),rv<8>((R+4464))));}
}
B71b7bf:{NFSU2_TR(0x71b7bf);
__builtin_memmove((R+4368),(R+4416),8);
}
B71b7c2:{NFSU2_TR(0x71b7c2);
__builtin_memmove((R+4422),(R+4434),2);
__builtin_memmove((R+4420),(R+4418),2);
__builtin_memmove((R+4418),(R+4432),2);
}
B71b7c5:{NFSU2_TR(0x71b7c5);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71b7c9:{NFSU2_TR(0x71b7c9);
__builtin_memmove((R+4368),(R+4372),2);
__builtin_memmove((R+4370),(R+4436),2);
__builtin_memmove((R+4372),(R+4374),2);
__builtin_memmove((R+4374),(R+4438),2);
}
B71b7cc:{NFSU2_TR(0x71b7cc);
__builtin_memmove((R+4352),(R+4448),8);
}
B71b7cf:{NFSU2_TR(0x71b7cf);
__builtin_memmove((R+4454),(R+4466),2);
__builtin_memmove((R+4452),(R+4450),2);
__builtin_memmove((R+4450),(R+4464),2);
}
B71b7d2:{NFSU2_TR(0x71b7d2);
__builtin_memmove((R+4432),(R+4416),8);
}
B71b7d5:{NFSU2_TR(0x71b7d5);
__builtin_memmove((R+4420),(R+4448),4);
}
B71b7d8:{NFSU2_TR(0x71b7d8);
__builtin_memmove((R+4432),(R+4436),4);
__builtin_memmove((R+4436),(R+4452),4);
}
B71b7db:{NFSU2_TR(0x71b7db);
__builtin_memmove((R+4448),(R+4368),8);
}
B71b7de:{NFSU2_TR(0x71b7de);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71b7e2:{NFSU2_TR(0x71b7e2);
__builtin_memmove((R+4352),(R+4356),2);
__builtin_memmove((R+4354),(R+4468),2);
__builtin_memmove((R+4356),(R+4358),2);
__builtin_memmove((R+4358),(R+4470),2);
}
B71b7e5:{NFSU2_TR(0x71b7e5);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71b7e9:{NFSU2_TR(0x71b7e9);
__builtin_memmove((R+4448),(R+4452),4);
__builtin_memmove((R+4452),(R+4356),4);
}
B71b7ec:{NFSU2_TR(0x71b7ec);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B71b7f0:{NFSU2_TR(0x71b7f0);
__builtin_memmove((R+4372),(R+4352),4);
}
B71b7f3:{NFSU2_TR(0x71b7f3);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B71b7f7:{NFSU2_TR(0x71b7f7);
__builtin_memmove((R+4352),(R+4416),8);
}
B71b7fa:{NFSU2_TR(0x71b7fa);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+4448),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71b7fe:{NFSU2_TR(0x71b7fe);
__builtin_memmove((R+4358),(R+4434),2);
__builtin_memmove((R+4356),(R+4354),2);
__builtin_memmove((R+4354),(R+4432),2);
}
B71b801:{NFSU2_TR(0x71b801);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71b805:{NFSU2_TR(0x71b805);
__builtin_memmove((R+4416),(R+4420),2);
__builtin_memmove((R+4418),(R+4436),2);
__builtin_memmove((R+4420),(R+4422),2);
__builtin_memmove((R+4422),(R+4438),2);
}
B71b808:{NFSU2_TR(0x71b808);
__builtin_memmove((R+4432),(R+4384),8);
}
B71b80b:{NFSU2_TR(0x71b80b);
__builtin_memmove((R+4390),(R+4402),2);
__builtin_memmove((R+4388),(R+4386),2);
__builtin_memmove((R+4386),(R+4400),2);
}
B71b80e:{NFSU2_TR(0x71b80e);
__builtin_memmove((R+4368),(R+4352),8);
}
B71b811:{NFSU2_TR(0x71b811);
__builtin_memmove((R+4356),(R+4384),4);
}
B71b814:{NFSU2_TR(0x71b814);
__builtin_memmove((R+4368),(R+4372),4);
__builtin_memmove((R+4372),(R+4388),4);
}
B71b817:{NFSU2_TR(0x71b817);
__builtin_memmove((R+4384),(R+4416),8);
}
B71b81a:{NFSU2_TR(0x71b81a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71b81e:{NFSU2_TR(0x71b81e);
__builtin_memmove((R+4432),(R+4436),2);
__builtin_memmove((R+4434),(R+4404),2);
__builtin_memmove((R+4436),(R+4438),2);
__builtin_memmove((R+4438),(R+4406),2);
}
B71b821:{NFSU2_TR(0x71b821);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71b825:{NFSU2_TR(0x71b825);
__builtin_memmove((R+4416),(R+4420),4);
__builtin_memmove((R+4420),(R+4436),4);
}
B71b828:{NFSU2_TR(0x71b828);
__builtin_memmove((R+4388),(R+4432),4);
}
B71b82b:{NFSU2_TR(0x71b82b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71b82f:{NFSU2_TR(0x71b82f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71b833:{NFSU2_TR(0x71b833);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B71b837:{NFSU2_TR(0x71b837);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B71b83b:{NFSU2_TR(0x71b83b);
__builtin_memmove((R+4416),(R+4384),8);
}
B71b83e:{NFSU2_TR(0x71b83e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B71b842:{NFSU2_TR(0x71b842);
{wv<8>((R+4416),uo::pmulhw<8>(rv<8>((R+4416)),rv<8>((R+4448))));}
}
B71b845:{NFSU2_TR(0x71b845);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B71b849:{NFSU2_TR(0x71b849);
{wv<8>((R+4448),uo::pmulhw<8>(rv<8>((R+4448)),rv<8>((R+4464))));}
}
B71b84c:{NFSU2_TR(0x71b84c);
__builtin_memmove((R+4432),(R+4368),8);
}
B71b84f:{NFSU2_TR(0x71b84f);
{wv<8>((R+4368),uo::pmulhw<8>(rv<8>((R+4368)),rv<8>((R+4384))));}
}
B71b852:{NFSU2_TR(0x71b852);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B71b856:{NFSU2_TR(0x71b856);
{wv<8>((R+4432),uo::pmulhw<8>(rv<8>((R+4432)),rv<8>((R+4464))));}
}
B71b859:{NFSU2_TR(0x71b859);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B71b85d:{NFSU2_TR(0x71b85d);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4384))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4386))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4388))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4390))));
}
B71b860:{NFSU2_TR(0x71b860);
w2(R+4448,u16(u32(r2(R+4448))+u32(r2(R+4464))));
w2(R+4450,u16(u32(r2(R+4450))+u32(r2(R+4466))));
w2(R+4452,u16(u32(r2(R+4452))+u32(r2(R+4468))));
w2(R+4454,u16(u32(r2(R+4454))+u32(r2(R+4470))));
}
B71b863:{NFSU2_TR(0x71b863);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(R+4368))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(R+4370))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(R+4372))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(R+4374))));
}
B71b866:{NFSU2_TR(0x71b866);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B71b86a:{NFSU2_TR(0x71b86a);
w2(R+4464,u16(u32(r2(R+4464))+u32(r2(R+4432))));
w2(R+4466,u16(u32(r2(R+4466))+u32(r2(R+4434))));
w2(R+4468,u16(u32(r2(R+4468))+u32(r2(R+4436))));
w2(R+4470,u16(u32(r2(R+4470))+u32(r2(R+4438))));
}
B71b86d:{NFSU2_TR(0x71b86d);
__builtin_memmove((R+4432),(R+4352),8);
}
B71b870:{NFSU2_TR(0x71b870);
{wv<8>((R+4352),uo::pmulhw<8>(rv<8>((R+4352)),rv<8>((R+4400))));}
}
B71b873:{NFSU2_TR(0x71b873);
{wv<8>((R+4416),uo::paddsw<8>(rv<8>((R+4416)),rv<8>((R+4464))));}
}
B71b876:{NFSU2_TR(0x71b876);
{wv<8>((R+4432),uo::pmulhw<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B71b879:{NFSU2_TR(0x71b879);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B71b87d:{NFSU2_TR(0x71b87d);
{wv<8>((R+4448),uo::psubsw<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B71b880:{NFSU2_TR(0x71b880);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4400))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4402))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4404))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4406))));
}
B71b883:{NFSU2_TR(0x71b883);
{wv<8>((R+4400),uo::pmulhw<8>(rv<8>((R+4400)),rv<8>((R+4464))));}
}
B71b886:{NFSU2_TR(0x71b886);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B71b88a:{NFSU2_TR(0x71b88a);
{wv<8>((R+4464),uo::pmulhw<8>(rv<8>((R+4464)),rv<8>((R+4368))));}
}
B71b88d:{NFSU2_TR(0x71b88d);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4368))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4370))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4372))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4374))));
}
B71b890:{NFSU2_TR(0x71b890);
__builtin_memmove((R+4368),(R+4384),8);
}
B71b893:{NFSU2_TR(0x71b893);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pmulhw<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B71b897:{NFSU2_TR(0x71b897);
{wv<8>((R+4400),uo::psubsw<8>(rv<8>((R+4400)),rv<8>((R+4432))));}
}
B71b89a:{NFSU2_TR(0x71b89a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B71b89e:{NFSU2_TR(0x71b89e);
{wv<8>((R+4352),uo::paddsw<8>(rv<8>((R+4352)),rv<8>((R+4464))));}
}
B71b8a1:{NFSU2_TR(0x71b8a1);
__builtin_memmove((R+4464),(R+4432),8);
}
B71b8a4:{NFSU2_TR(0x71b8a4);
{wv<8>((R+4352),uo::psubsw<8>(rv<8>((R+4352)),rv<8>((R+4416))));}
}
B71b8a7:{NFSU2_TR(0x71b8a7);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4432),uo::pmulhw<8>(rv<8>((R+4432)),rv<8>((U+4))));}
}
B71b8ab:{NFSU2_TR(0x71b8ab);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(R+4368))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(R+4370))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(R+4372))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(R+4374))));
}
B71b8ae:{NFSU2_TR(0x71b8ae);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pmulhw<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B71b8b2:{NFSU2_TR(0x71b8b2);
{wv<8>((R+4416),uo::paddsw<8>(rv<8>((R+4416)),rv<8>((R+4416))));}
}
B71b8b5:{NFSU2_TR(0x71b8b5);
{wv<8>((R+4416),uo::paddsw<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B71b8b8:{NFSU2_TR(0x71b8b8);
{wv<8>((R+4400),uo::psubsw<8>(rv<8>((R+4400)),rv<8>((R+4448))));}
}
B71b8bb:{NFSU2_TR(0x71b8bb);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4464))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4466))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4468))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4470))));
}
B71b8be:{NFSU2_TR(0x71b8be);
{wv<8>((R+4448),uo::paddsw<8>(rv<8>((R+4448)),rv<8>((R+4448))));}
}
B71b8c1:{NFSU2_TR(0x71b8c1);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4464),uo::pmulhw<8>(rv<8>((R+4464)),rv<8>((U+4))));}
}
B71b8c5:{NFSU2_TR(0x71b8c5);
{wv<8>((R+4448),uo::paddsw<8>(rv<8>((R+4448)),rv<8>((R+4400))));}
}
B71b8c8:{NFSU2_TR(0x71b8c8);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71b8cc:{NFSU2_TR(0x71b8cc);
{wv<8>((R+4368),uo::psubsw<8>(rv<8>((R+4368)),rv<8>((R+4432))));}
}
B71b8cf:{NFSU2_TR(0x71b8cf);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B71b8d3:{NFSU2_TR(0x71b8d3);
__builtin_memmove((R+4432),(R+4400),8);
}
B71b8d6:{NFSU2_TR(0x71b8d6);
{wv<8>((R+4400),uo::pmulhw<8>(rv<8>((R+4400)),rv<8>((R+4416))));}
}
B71b8d9:{NFSU2_TR(0x71b8d9);
{wv<8>((R+4464),uo::paddsw<8>(rv<8>((R+4464)),rv<8>((R+4384))));}
}
B71b8dc:{NFSU2_TR(0x71b8dc);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4448),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71b8e0:{NFSU2_TR(0x71b8e0);
__builtin_memmove((R+4384),(R+4352),8);
}
B71b8e3:{NFSU2_TR(0x71b8e3);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4448),(U+0),8);
}
B71b8e6:{NFSU2_TR(0x71b8e6);
{wv<8>((R+4352),uo::pmulhw<8>(rv<8>((R+4352)),rv<8>((R+4416))));}
}
B71b8e9:{NFSU2_TR(0x71b8e9);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4400))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4402))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4404))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4406))));
}
B71b8ec:{NFSU2_TR(0x71b8ec);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B71b8f0:{NFSU2_TR(0x71b8f0);
{wv<8>((R+4432),uo::psubsw<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B71b8f3:{NFSU2_TR(0x71b8f3);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(R+4352))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(R+4354))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(R+4356))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(R+4358))));
}
B71b8f6:{NFSU2_TR(0x71b8f6);
{wv<8>((R+4448),uo::psubsw<8>(rv<8>((R+4448)),rv<8>((R+4400))));}
}
B71b8f9:{NFSU2_TR(0x71b8f9);
__builtin_memmove((R+4352),(R+4448),8);
}
B71b8fc:{NFSU2_TR(0x71b8fc);
{wv<8>((R+4448),uo::pmulhw<8>(rv<8>((R+4448)),rv<8>((R+4416))));}
}
B71b8ff:{NFSU2_TR(0x71b8ff);
{wv<8>((R+4400),uo::paddsw<8>(rv<8>((R+4400)),rv<8>((R+4400))));}
}
B71b902:{NFSU2_TR(0x71b902);
{wv<8>((R+4368),uo::paddsw<8>(rv<8>((R+4368)),rv<8>((R+4368))));}
}
B71b905:{NFSU2_TR(0x71b905);
{wv<8>((R+4400),uo::paddsw<8>(rv<8>((R+4400)),rv<8>((R+4352))));}
}
B71b908:{NFSU2_TR(0x71b908);
{wv<8>((R+4368),uo::paddsw<8>(rv<8>((R+4368)),rv<8>((R+4432))));}
}
B71b90b:{NFSU2_TR(0x71b90b);
{wv<8>((R+4416),uo::pmulhw<8>(rv<8>((R+4416)),rv<8>((R+4400))));}
}
B71b90e:{NFSU2_TR(0x71b90e);
{wv<8>((R+4448),uo::paddsw<8>(rv<8>((R+4448)),rv<8>((R+4352))));}
}
B71b911:{NFSU2_TR(0x71b911);
{wv<8>((R+4448),uo::psubsw<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B71b914:{NFSU2_TR(0x71b914);
{wv<8>((R+4384),uo::paddsw<8>(rv<8>((R+4384)),rv<8>((R+4384))));}
}
B71b917:{NFSU2_TR(0x71b917);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B71b91b:{NFSU2_TR(0x71b91b);
{wv<8>((R+4384),uo::paddsw<8>(rv<8>((R+4384)),rv<8>((R+4448))));}
}
B71b91e:{NFSU2_TR(0x71b91e);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B71b921:{NFSU2_TR(0x71b921);
{wv<8>((R+4384),uo::psubsw<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B71b924:{NFSU2_TR(0x71b924);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::paddsw<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B71b928:{NFSU2_TR(0x71b928);
{wv<8>((R+4368),uo::paddsw<8>(rv<8>((R+4368)),rv<8>((R+4368))));}
}
B71b92b:{NFSU2_TR(0x71b92b);
{wv<8>((R+4368),uo::paddsw<8>(rv<8>((R+4368)),rv<8>((R+4384))));}
}
B71b92e:{NFSU2_TR(0x71b92e);
{wv<8>((R+4384),uo::psraw<8>(rv<8>((R+4384)),V(0x4ull)));}
}
B71b932:{NFSU2_TR(0x71b932);
{wv<8>((R+4416),uo::psubsw<8>(rv<8>((R+4416)),rv<8>((R+4464))));}
}
B71b935:{NFSU2_TR(0x71b935);
{wv<8>((R+4368),uo::psraw<8>(rv<8>((R+4368)),V(0x4ull)));}
}
B71b939:{NFSU2_TR(0x71b939);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B71b93d:{NFSU2_TR(0x71b93d);
{wv<8>((R+4464),uo::paddsw<8>(rv<8>((R+4464)),rv<8>((R+4464))));}
}
B71b940:{NFSU2_TR(0x71b940);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71b944:{NFSU2_TR(0x71b944);
{wv<8>((R+4464),uo::paddsw<8>(rv<8>((R+4464)),rv<8>((R+4416))));}
}
B71b947:{NFSU2_TR(0x71b947);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71b94b:{NFSU2_TR(0x71b94b);
{wv<8>((R+4416),uo::psubsw<8>(rv<8>((R+4416)),rv<8>((R+4400))));}
}
B71b94e:{NFSU2_TR(0x71b94e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4416),uo::paddsw<8>(rv<8>((R+4416)),rv<8>((U+4))));}
}
B71b952:{NFSU2_TR(0x71b952);
{wv<8>((R+4400),uo::paddsw<8>(rv<8>((R+4400)),rv<8>((R+4400))));}
}
B71b955:{NFSU2_TR(0x71b955);
{wv<8>((R+4400),uo::paddsw<8>(rv<8>((R+4400)),rv<8>((R+4416))));}
}
B71b958:{NFSU2_TR(0x71b958);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x4ull)));}
}
B71b95c:{NFSU2_TR(0x71b95c);
{wv<8>((R+4448),uo::psubsw<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B71b95f:{NFSU2_TR(0x71b95f);
{wv<8>((R+4400),uo::psraw<8>(rv<8>((R+4400)),V(0x4ull)));}
}
B71b963:{NFSU2_TR(0x71b963);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4448),uo::paddsw<8>(rv<8>((R+4448)),rv<8>((U+4))));}
}
B71b967:{NFSU2_TR(0x71b967);
{wv<8>((R+4432),uo::paddsw<8>(rv<8>((R+4432)),rv<8>((R+4432))));}
}
B71b96a:{NFSU2_TR(0x71b96a);
{wv<8>((R+4432),uo::paddsw<8>(rv<8>((R+4432)),rv<8>((R+4448))));}
}
B71b96d:{NFSU2_TR(0x71b96d);
{wv<8>((R+4448),uo::psraw<8>(rv<8>((R+4448)),V(0x4ull)));}
}
B71b971:{NFSU2_TR(0x71b971);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71b975:{NFSU2_TR(0x71b975);
{wv<8>((R+4432),uo::psraw<8>(rv<8>((R+4432)),V(0x4ull)));}
}
B71b979:{NFSU2_TR(0x71b979);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71b97d:{NFSU2_TR(0x71b97d);
{wv<8>((R+4464),uo::psubsw<8>(rv<8>((R+4464)),rv<8>((R+4352))));}
}
B71b980:{NFSU2_TR(0x71b980);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4464),uo::paddsw<8>(rv<8>((R+4464)),rv<8>((U+4))));}
}
B71b984:{NFSU2_TR(0x71b984);
{wv<8>((R+4352),uo::paddsw<8>(rv<8>((R+4352)),rv<8>((R+4352))));}
}
B71b987:{NFSU2_TR(0x71b987);
{wv<8>((R+4352),uo::paddsw<8>(rv<8>((R+4352)),rv<8>((R+4464))));}
}
B71b98a:{NFSU2_TR(0x71b98a);
{wv<8>((R+4464),uo::psraw<8>(rv<8>((R+4464)),V(0x4ull)));}
}
B71b98e:{NFSU2_TR(0x71b98e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4448),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71b992:{NFSU2_TR(0x71b992);
{wv<8>((R+4352),uo::psraw<8>(rv<8>((R+4352)),V(0x4ull)));}
}
B71b996:{NFSU2_TR(0x71b996);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71b99a:{NFSU2_TR(0x71b99a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71b99e:{NFSU2_TR(0x71b99e);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+8)),r8(U+0));
}
B71b9a1:{NFSU2_TR(0x71b9a1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B71b9a5:{NFSU2_TR(0x71b9a5);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B71b9a9:{NFSU2_TR(0x71b9a9);
__builtin_memmove((R+4416),(R+4384),8);
}
B71b9ac:{NFSU2_TR(0x71b9ac);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B71b9b0:{NFSU2_TR(0x71b9b0);
{wv<8>((R+4416),uo::pmulhw<8>(rv<8>((R+4416)),rv<8>((R+4448))));}
}
B71b9b3:{NFSU2_TR(0x71b9b3);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B71b9b7:{NFSU2_TR(0x71b9b7);
{wv<8>((R+4448),uo::pmulhw<8>(rv<8>((R+4448)),rv<8>((R+4464))));}
}
B71b9ba:{NFSU2_TR(0x71b9ba);
__builtin_memmove((R+4432),(R+4368),8);
}
B71b9bd:{NFSU2_TR(0x71b9bd);
{wv<8>((R+4368),uo::pmulhw<8>(rv<8>((R+4368)),rv<8>((R+4384))));}
}
B71b9c0:{NFSU2_TR(0x71b9c0);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B71b9c4:{NFSU2_TR(0x71b9c4);
{wv<8>((R+4432),uo::pmulhw<8>(rv<8>((R+4432)),rv<8>((R+4464))));}
}
B71b9c7:{NFSU2_TR(0x71b9c7);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B71b9cb:{NFSU2_TR(0x71b9cb);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4384))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4386))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4388))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4390))));
}
B71b9ce:{NFSU2_TR(0x71b9ce);
w2(R+4448,u16(u32(r2(R+4448))+u32(r2(R+4464))));
w2(R+4450,u16(u32(r2(R+4450))+u32(r2(R+4466))));
w2(R+4452,u16(u32(r2(R+4452))+u32(r2(R+4468))));
w2(R+4454,u16(u32(r2(R+4454))+u32(r2(R+4470))));
}
B71b9d1:{NFSU2_TR(0x71b9d1);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(R+4368))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(R+4370))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(R+4372))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(R+4374))));
}
B71b9d4:{NFSU2_TR(0x71b9d4);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B71b9d8:{NFSU2_TR(0x71b9d8);
w2(R+4464,u16(u32(r2(R+4464))+u32(r2(R+4432))));
w2(R+4466,u16(u32(r2(R+4466))+u32(r2(R+4434))));
w2(R+4468,u16(u32(r2(R+4468))+u32(r2(R+4436))));
w2(R+4470,u16(u32(r2(R+4470))+u32(r2(R+4438))));
}
B71b9db:{NFSU2_TR(0x71b9db);
__builtin_memmove((R+4432),(R+4352),8);
}
B71b9de:{NFSU2_TR(0x71b9de);
{wv<8>((R+4352),uo::pmulhw<8>(rv<8>((R+4352)),rv<8>((R+4400))));}
}
B71b9e1:{NFSU2_TR(0x71b9e1);
{wv<8>((R+4416),uo::paddsw<8>(rv<8>((R+4416)),rv<8>((R+4464))));}
}
B71b9e4:{NFSU2_TR(0x71b9e4);
{wv<8>((R+4432),uo::pmulhw<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B71b9e7:{NFSU2_TR(0x71b9e7);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B71b9eb:{NFSU2_TR(0x71b9eb);
{wv<8>((R+4448),uo::psubsw<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B71b9ee:{NFSU2_TR(0x71b9ee);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4400))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4402))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4404))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4406))));
}
B71b9f1:{NFSU2_TR(0x71b9f1);
{wv<8>((R+4400),uo::pmulhw<8>(rv<8>((R+4400)),rv<8>((R+4464))));}
}
B71b9f4:{NFSU2_TR(0x71b9f4);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B71b9f8:{NFSU2_TR(0x71b9f8);
{wv<8>((R+4464),uo::pmulhw<8>(rv<8>((R+4464)),rv<8>((R+4368))));}
}
B71b9fb:{NFSU2_TR(0x71b9fb);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4368))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4370))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4372))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4374))));
}
B71b9fe:{NFSU2_TR(0x71b9fe);
__builtin_memmove((R+4368),(R+4384),8);
}
B71ba01:{NFSU2_TR(0x71ba01);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pmulhw<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B71ba05:{NFSU2_TR(0x71ba05);
{wv<8>((R+4400),uo::psubsw<8>(rv<8>((R+4400)),rv<8>((R+4432))));}
}
B71ba08:{NFSU2_TR(0x71ba08);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B71ba0c:{NFSU2_TR(0x71ba0c);
{wv<8>((R+4352),uo::paddsw<8>(rv<8>((R+4352)),rv<8>((R+4464))));}
}
B71ba0f:{NFSU2_TR(0x71ba0f);
__builtin_memmove((R+4464),(R+4432),8);
}
B71ba12:{NFSU2_TR(0x71ba12);
{wv<8>((R+4352),uo::psubsw<8>(rv<8>((R+4352)),rv<8>((R+4416))));}
}
B71ba15:{NFSU2_TR(0x71ba15);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4432),uo::pmulhw<8>(rv<8>((R+4432)),rv<8>((U+4))));}
}
B71ba19:{NFSU2_TR(0x71ba19);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(R+4368))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(R+4370))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(R+4372))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(R+4374))));
}
B71ba1c:{NFSU2_TR(0x71ba1c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pmulhw<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B71ba20:{NFSU2_TR(0x71ba20);
{wv<8>((R+4416),uo::paddsw<8>(rv<8>((R+4416)),rv<8>((R+4416))));}
}
B71ba23:{NFSU2_TR(0x71ba23);
{wv<8>((R+4416),uo::paddsw<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B71ba26:{NFSU2_TR(0x71ba26);
{wv<8>((R+4400),uo::psubsw<8>(rv<8>((R+4400)),rv<8>((R+4448))));}
}
B71ba29:{NFSU2_TR(0x71ba29);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4464))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4466))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4468))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4470))));
}
B71ba2c:{NFSU2_TR(0x71ba2c);
{wv<8>((R+4448),uo::paddsw<8>(rv<8>((R+4448)),rv<8>((R+4448))));}
}
B71ba2f:{NFSU2_TR(0x71ba2f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4464),uo::pmulhw<8>(rv<8>((R+4464)),rv<8>((U+4))));}
}
B71ba33:{NFSU2_TR(0x71ba33);
{wv<8>((R+4448),uo::paddsw<8>(rv<8>((R+4448)),rv<8>((R+4400))));}
}
B71ba36:{NFSU2_TR(0x71ba36);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71ba3a:{NFSU2_TR(0x71ba3a);
{wv<8>((R+4368),uo::psubsw<8>(rv<8>((R+4368)),rv<8>((R+4432))));}
}
B71ba3d:{NFSU2_TR(0x71ba3d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B71ba41:{NFSU2_TR(0x71ba41);
__builtin_memmove((R+4432),(R+4400),8);
}
B71ba44:{NFSU2_TR(0x71ba44);
{wv<8>((R+4400),uo::pmulhw<8>(rv<8>((R+4400)),rv<8>((R+4416))));}
}
B71ba47:{NFSU2_TR(0x71ba47);
{wv<8>((R+4464),uo::paddsw<8>(rv<8>((R+4464)),rv<8>((R+4384))));}
}
B71ba4a:{NFSU2_TR(0x71ba4a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4448),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71ba4e:{NFSU2_TR(0x71ba4e);
__builtin_memmove((R+4384),(R+4352),8);
}
B71ba51:{NFSU2_TR(0x71ba51);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B71ba55:{NFSU2_TR(0x71ba55);
{wv<8>((R+4352),uo::pmulhw<8>(rv<8>((R+4352)),rv<8>((R+4416))));}
}
B71ba58:{NFSU2_TR(0x71ba58);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4400))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4402))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4404))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4406))));
}
B71ba5b:{NFSU2_TR(0x71ba5b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B71ba5f:{NFSU2_TR(0x71ba5f);
{wv<8>((R+4432),uo::psubsw<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B71ba62:{NFSU2_TR(0x71ba62);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(R+4352))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(R+4354))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(R+4356))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(R+4358))));
}
B71ba65:{NFSU2_TR(0x71ba65);
{wv<8>((R+4448),uo::psubsw<8>(rv<8>((R+4448)),rv<8>((R+4400))));}
}
B71ba68:{NFSU2_TR(0x71ba68);
__builtin_memmove((R+4352),(R+4448),8);
}
B71ba6b:{NFSU2_TR(0x71ba6b);
{wv<8>((R+4448),uo::pmulhw<8>(rv<8>((R+4448)),rv<8>((R+4416))));}
}
B71ba6e:{NFSU2_TR(0x71ba6e);
{wv<8>((R+4400),uo::paddsw<8>(rv<8>((R+4400)),rv<8>((R+4400))));}
}
B71ba71:{NFSU2_TR(0x71ba71);
{wv<8>((R+4368),uo::paddsw<8>(rv<8>((R+4368)),rv<8>((R+4368))));}
}
B71ba74:{NFSU2_TR(0x71ba74);
{wv<8>((R+4400),uo::paddsw<8>(rv<8>((R+4400)),rv<8>((R+4352))));}
}
B71ba77:{NFSU2_TR(0x71ba77);
{wv<8>((R+4368),uo::paddsw<8>(rv<8>((R+4368)),rv<8>((R+4432))));}
}
B71ba7a:{NFSU2_TR(0x71ba7a);
{wv<8>((R+4416),uo::pmulhw<8>(rv<8>((R+4416)),rv<8>((R+4400))));}
}
B71ba7d:{NFSU2_TR(0x71ba7d);
{wv<8>((R+4448),uo::paddsw<8>(rv<8>((R+4448)),rv<8>((R+4352))));}
}
B71ba80:{NFSU2_TR(0x71ba80);
{wv<8>((R+4448),uo::psubsw<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B71ba83:{NFSU2_TR(0x71ba83);
{wv<8>((R+4384),uo::paddsw<8>(rv<8>((R+4384)),rv<8>((R+4384))));}
}
B71ba86:{NFSU2_TR(0x71ba86);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B71ba8a:{NFSU2_TR(0x71ba8a);
{wv<8>((R+4384),uo::paddsw<8>(rv<8>((R+4384)),rv<8>((R+4448))));}
}
B71ba8d:{NFSU2_TR(0x71ba8d);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B71ba90:{NFSU2_TR(0x71ba90);
{wv<8>((R+4384),uo::psubsw<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B71ba93:{NFSU2_TR(0x71ba93);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::paddsw<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B71ba97:{NFSU2_TR(0x71ba97);
{wv<8>((R+4368),uo::paddsw<8>(rv<8>((R+4368)),rv<8>((R+4368))));}
}
B71ba9a:{NFSU2_TR(0x71ba9a);
{wv<8>((R+4368),uo::paddsw<8>(rv<8>((R+4368)),rv<8>((R+4384))));}
}
B71ba9d:{NFSU2_TR(0x71ba9d);
{wv<8>((R+4384),uo::psraw<8>(rv<8>((R+4384)),V(0x4ull)));}
}
B71baa1:{NFSU2_TR(0x71baa1);
{wv<8>((R+4416),uo::psubsw<8>(rv<8>((R+4416)),rv<8>((R+4464))));}
}
B71baa4:{NFSU2_TR(0x71baa4);
{wv<8>((R+4368),uo::psraw<8>(rv<8>((R+4368)),V(0x4ull)));}
}
B71baa8:{NFSU2_TR(0x71baa8);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B71baac:{NFSU2_TR(0x71baac);
{wv<8>((R+4464),uo::paddsw<8>(rv<8>((R+4464)),rv<8>((R+4464))));}
}
B71baaf:{NFSU2_TR(0x71baaf);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71bab3:{NFSU2_TR(0x71bab3);
{wv<8>((R+4464),uo::paddsw<8>(rv<8>((R+4464)),rv<8>((R+4416))));}
}
B71bab6:{NFSU2_TR(0x71bab6);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71baba:{NFSU2_TR(0x71baba);
{wv<8>((R+4416),uo::psubsw<8>(rv<8>((R+4416)),rv<8>((R+4400))));}
}
B71babd:{NFSU2_TR(0x71babd);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4416),uo::paddsw<8>(rv<8>((R+4416)),rv<8>((U+4))));}
}
B71bac1:{NFSU2_TR(0x71bac1);
{wv<8>((R+4400),uo::paddsw<8>(rv<8>((R+4400)),rv<8>((R+4400))));}
}
B71bac4:{NFSU2_TR(0x71bac4);
{wv<8>((R+4400),uo::paddsw<8>(rv<8>((R+4400)),rv<8>((R+4416))));}
}
B71bac7:{NFSU2_TR(0x71bac7);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x4ull)));}
}
B71bacb:{NFSU2_TR(0x71bacb);
{wv<8>((R+4448),uo::psubsw<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B71bace:{NFSU2_TR(0x71bace);
{wv<8>((R+4400),uo::psraw<8>(rv<8>((R+4400)),V(0x4ull)));}
}
B71bad2:{NFSU2_TR(0x71bad2);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4448),uo::paddsw<8>(rv<8>((R+4448)),rv<8>((U+4))));}
}
B71bad6:{NFSU2_TR(0x71bad6);
{wv<8>((R+4432),uo::paddsw<8>(rv<8>((R+4432)),rv<8>((R+4432))));}
}
B71bad9:{NFSU2_TR(0x71bad9);
{wv<8>((R+4432),uo::paddsw<8>(rv<8>((R+4432)),rv<8>((R+4448))));}
}
B71badc:{NFSU2_TR(0x71badc);
{wv<8>((R+4448),uo::psraw<8>(rv<8>((R+4448)),V(0x4ull)));}
}
B71bae0:{NFSU2_TR(0x71bae0);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71bae4:{NFSU2_TR(0x71bae4);
{wv<8>((R+4432),uo::psraw<8>(rv<8>((R+4432)),V(0x4ull)));}
}
B71bae8:{NFSU2_TR(0x71bae8);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71baec:{NFSU2_TR(0x71baec);
{wv<8>((R+4464),uo::psubsw<8>(rv<8>((R+4464)),rv<8>((R+4352))));}
}
B71baef:{NFSU2_TR(0x71baef);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4464),uo::paddsw<8>(rv<8>((R+4464)),rv<8>((U+4))));}
}
B71baf3:{NFSU2_TR(0x71baf3);
{wv<8>((R+4352),uo::paddsw<8>(rv<8>((R+4352)),rv<8>((R+4352))));}
}
B71baf6:{NFSU2_TR(0x71baf6);
{wv<8>((R+4352),uo::paddsw<8>(rv<8>((R+4352)),rv<8>((R+4464))));}
}
B71baf9:{NFSU2_TR(0x71baf9);
{wv<8>((R+4464),uo::psraw<8>(rv<8>((R+4464)),V(0x4ull)));}
}
B71bafd:{NFSU2_TR(0x71bafd);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+4448),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71bb01:{NFSU2_TR(0x71bb01);
{wv<8>((R+4352),uo::psraw<8>(rv<8>((R+4352)),V(0x4ull)));}
}
B71bb05:{NFSU2_TR(0x71bb05);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71bb09:{NFSU2_TR(0x71bb09);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71bb0d:{NFSU2_TR(0x71bb0d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71bb11:{NFSU2_TR(0x71bb11);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B71bb12:{NFSU2_TR(0x71bb12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B71bb13:{NFSU2_TR(0x71bb13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B71bb14:{NFSU2_TR(0x71bb14);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B71bb15:L71bb15:{c.instructions+=373;NFSU2_TR(0x71bb15);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71bb16:{NFSU2_TR(0x71bb16);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71bb17:{NFSU2_TR(0x71bb17);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71bb18:{NFSU2_TR(0x71bb18);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71bb1c:{NFSU2_TR(0x71bb1c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B71bb20:{NFSU2_TR(0x71bb20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B71bb22:{NFSU2_TR(0x71bb22);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B71bb25:{NFSU2_TR(0x71bb25);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B71bb28:{NFSU2_TR(0x71bb28);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B71bb2b:{NFSU2_TR(0x71bb2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B71bb2e:{NFSU2_TR(0x71bb2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B71bb31:{NFSU2_TR(0x71bb31);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B71bb35:{NFSU2_TR(0x71bb35);
w4(R+4,u32(0x8b98e0ull));
}
B71bb3b:{NFSU2_TR(0x71bb3b);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B71bb3e:{NFSU2_TR(0x71bb3e);
u8 U[16];
__builtin_memmove((U+0),gp(u32(r4(R+12))),8);
__builtin_memmove((U+8),(U+0),8);
w2(R+4352,u16(u32(r2(R+4352))*u32(r2(U+8))));
w2(R+4354,u16(u32(r2(R+4354))*u32(r2(U+10))));
w2(R+4356,u16(u32(r2(R+4356))*u32(r2(U+12))));
w2(R+4358,u16(u32(r2(R+4358))*u32(r2(U+14))));
}
B71bb41:{NFSU2_TR(0x71bb41);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B71bb45:{NFSU2_TR(0x71bb45);
u8 U[20];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4368,u16(u32(r2(R+4368))*u32(r2(U+12))));
w2(R+4370,u16(u32(r2(R+4370))*u32(r2(U+14))));
w2(R+4372,u16(u32(r2(R+4372))*u32(r2(U+16))));
w2(R+4374,u16(u32(r2(R+4374))*u32(r2(U+18))));
}
B71bb49:{NFSU2_TR(0x71bb49);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+4))),8);
__builtin_memmove((R+4384),(U+0),8);
}
B71bb4c:{NFSU2_TR(0x71bb4c);
__builtin_memmove((R+4400),(R+4352),8);
}
B71bb4f:{NFSU2_TR(0x71bb4f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B71bb53:{NFSU2_TR(0x71bb53);
w8(R+4352,shr<u64>(r8(R+4352),u64(u32(0x10ull))));
}
B71bb57:{NFSU2_TR(0x71bb57);
u8 U[20];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))*u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))*u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))*u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))*u32(r2(U+18))));
}
B71bb5b:{NFSU2_TR(0x71bb5b);
w8(R+4400,u64(u64(r8(R+4400))&u64(r8(R+4384))));
}
B71bb5e:{NFSU2_TR(0x71bb5e);
__builtin_memmove((R+4432),(R+4352),8);
}
B71bb61:{NFSU2_TR(0x71bb61);
__builtin_memmove((R+4448),(R+4368),8);
}
B71bb64:{NFSU2_TR(0x71bb64);
w8(R+4432,u64(u64(r8(R+4432))&u64(r8(R+4384))));
}
B71bb67:{NFSU2_TR(0x71bb67);
w8(R+4448,shl<u64>(r8(R+4448),u64(u64(0x20ull))));
}
B71bb6b:{NFSU2_TR(0x71bb6b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B71bb6f:{NFSU2_TR(0x71bb6f);
w8(R+4352,u64(u64(r8(R+4352))^u64(r8(R+4432))));
}
B71bb72:{NFSU2_TR(0x71bb72);
w8(R+4464,u64(u64(r8(R+4464))&u64(r8(R+4448))));
}
B71bb75:{NFSU2_TR(0x71bb75);
w8(R+4352,u64(u64(r8(R+4352))|u64(r8(R+4400))));
}
B71bb78:{NFSU2_TR(0x71bb78);
w8(R+4448,u64(u64(r8(R+4448))^u64(r8(R+4464))));
}
B71bb7b:{NFSU2_TR(0x71bb7b);
w8(R+4352,u64(u64(r8(R+4352))|u64(r8(R+4464))));
}
B71bb7e:{NFSU2_TR(0x71bb7e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B71bb82:{NFSU2_TR(0x71bb82);
__builtin_memmove((R+4400),(R+4416),8);
}
B71bb85:{NFSU2_TR(0x71bb85);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+8)),r8(U+0));
}
B71bb88:{NFSU2_TR(0x71bb88);
w8(R+4400,u64(u64(r8(R+4400))&u64(r8(R+4384))));
}
B71bb8b:{NFSU2_TR(0x71bb8b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B71bb8f:{NFSU2_TR(0x71bb8f);
w8(R+4400,shl<u64>(r8(R+4400),u64(u64(0x10ull))));
}
B71bb93:{NFSU2_TR(0x71bb93);
u8 U[20];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4352,u16(u32(r2(R+4352))*u32(r2(U+12))));
w2(R+4354,u16(u32(r2(R+4354))*u32(r2(U+14))));
w2(R+4356,u16(u32(r2(R+4356))*u32(r2(U+16))));
w2(R+4358,u16(u32(r2(R+4358))*u32(r2(U+18))));
}
B71bb97:{NFSU2_TR(0x71bb97);
w8(R+4464,u64(u64(r8(R+4464))&u64(r8(R+4368))));
}
B71bb9a:{NFSU2_TR(0x71bb9a);
w8(R+4432,u64(u64(r8(R+4432))|u64(r8(R+4400))));
}
B71bb9d:{NFSU2_TR(0x71bb9d);
w8(R+4464,u64(u64(r8(R+4464))|u64(r8(R+4448))));
}
B71bba0:{NFSU2_TR(0x71bba0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B71bba4:{NFSU2_TR(0x71bba4);
w8(R+4464,u64(u64(r8(R+4464))|u64(r8(R+4432))));
}
B71bba7:{NFSU2_TR(0x71bba7);
u8 U[20];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(U+18))));
}
B71bbab:{NFSU2_TR(0x71bbab);
w8(R+4416,shr<u64>(r8(R+4416),u64(u32(0x10ull))));
}
B71bbaf:{NFSU2_TR(0x71bbaf);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71bbb3:{NFSU2_TR(0x71bbb3);
__builtin_memmove((R+4432),(R+4416),8);
}
B71bbb6:{NFSU2_TR(0x71bbb6);
__builtin_memmove((R+4464),(R+4352),8);
}
B71bbb9:{NFSU2_TR(0x71bbb9);
w8(R+4416,shr<u64>(r8(R+4416),u64(u32(0x10ull))));
}
B71bbbd:{NFSU2_TR(0x71bbbd);
w8(R+4464,shr<u64>(r8(R+4464),u64(u32(0x30ull))));
}
B71bbc1:{NFSU2_TR(0x71bbc1);
__builtin_memmove((R+4448),(R+4384),8);
}
B71bbc4:{NFSU2_TR(0x71bbc4);
w8(R+4432,u64(u64(r8(R+4432))&u64(r8(R+4384))));
}
B71bbc7:{NFSU2_TR(0x71bbc7);
w8(R+4448,u64(u64(r8(R+4448))&u64(r8(R+4416))));
}
B71bbca:{NFSU2_TR(0x71bbca);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71bbce:{NFSU2_TR(0x71bbce);
w8(R+4416,u64(u64(r8(R+4416))^u64(r8(R+4448))));
}
B71bbd1:{NFSU2_TR(0x71bbd1);
w8(R+4368,shr<u64>(r8(R+4368),u64(u32(0x20ull))));
}
B71bbd5:{NFSU2_TR(0x71bbd5);
w8(R+4416,u64(u64(r8(R+4416))|u64(r8(R+4432))));
}
B71bbd8:{NFSU2_TR(0x71bbd8);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B71bbdc:{NFSU2_TR(0x71bbdc);
w8(R+4368,u64(u64(r8(R+4368))&u64(r8(R+4384))));
}
B71bbdf:{NFSU2_TR(0x71bbdf);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B71bbe3:{NFSU2_TR(0x71bbe3);
w8(R+4352,shl<u64>(r8(R+4352),u64(u64(0x10ull))));
}
B71bbe7:{NFSU2_TR(0x71bbe7);
u8 U[20];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4432,u16(u32(r2(R+4432))*u32(r2(U+12))));
w2(R+4434,u16(u32(r2(R+4434))*u32(r2(U+14))));
w2(R+4436,u16(u32(r2(R+4436))*u32(r2(U+16))));
w2(R+4438,u16(u32(r2(R+4438))*u32(r2(U+18))));
}
B71bbeb:{NFSU2_TR(0x71bbeb);
w8(R+4464,u64(u64(r8(R+4464))&u64(r8(R+4352))));
}
B71bbee:{NFSU2_TR(0x71bbee);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71bbf2:{NFSU2_TR(0x71bbf2);
w8(R+4464,u64(u64(r8(R+4464))|u64(r8(R+4416))));
}
B71bbf5:{NFSU2_TR(0x71bbf5);
__builtin_memmove((R+4416),(R+4400),8);
}
B71bbf8:{NFSU2_TR(0x71bbf8);
w8(R+4400,u64(u64(r8(R+4400))&u64(r8(R+4384))));
}
B71bbfb:{NFSU2_TR(0x71bbfb);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B71bbff:{NFSU2_TR(0x71bbff);
w8(R+4400,shl<u64>(r8(R+4400),u64(u64(0x20ull))));
}
B71bc03:{NFSU2_TR(0x71bc03);
w8(R+4464,u64(u64(r8(R+4464))|u64(r8(R+4400))));
}
B71bc06:{NFSU2_TR(0x71bc06);
__builtin_memmove((R+4400),(R+4432),8);
}
B71bc09:{NFSU2_TR(0x71bc09);
w8(R+4400,shl<u64>(r8(R+4400),u64(u64(0x30ull))));
}
B71bc0d:{NFSU2_TR(0x71bc0d);
w8(R+4368,u64(u64(r8(R+4368))&u64(r8(R+4352))));
}
B71bc10:{NFSU2_TR(0x71bc10);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71bc14:{NFSU2_TR(0x71bc14);
w8(R+4448,u64(u64(r8(R+4448))|u64(r8(R+4400))));
}
B71bc17:{NFSU2_TR(0x71bc17);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B71bc1b:{NFSU2_TR(0x71bc1b);
w8(R+4448,u64(u64(r8(R+4448))|u64(r8(R+4368))));
}
B71bc1e:{NFSU2_TR(0x71bc1e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B71bc22:{NFSU2_TR(0x71bc22);
w8(R+4464,u64(u64(r8(R+4464))&u64(r8(R+4416))));
}
B71bc25:{NFSU2_TR(0x71bc25);
u8 U[20];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4368,u16(u32(r2(R+4368))*u32(r2(U+12))));
w2(R+4370,u16(u32(r2(R+4370))*u32(r2(U+14))));
w2(R+4372,u16(u32(r2(R+4372))*u32(r2(U+16))));
w2(R+4374,u16(u32(r2(R+4374))*u32(r2(U+18))));
}
B71bc29:{NFSU2_TR(0x71bc29);
w8(R+4464,u64(u64(r8(R+4464))|u64(r8(R+4448))));
}
B71bc2c:{NFSU2_TR(0x71bc2c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
w8(R+4352,u64(u64(r8(R+4352))&u64(r8(U+4))));
}
B71bc30:{NFSU2_TR(0x71bc30);
w8(R+4416,shr<u64>(r8(R+4416),u64(u32(0x20ull))));
}
B71bc34:{NFSU2_TR(0x71bc34);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71bc38:{NFSU2_TR(0x71bc38);
__builtin_memmove((R+4448),(R+4416),8);
}
B71bc3b:{NFSU2_TR(0x71bc3b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B71bc3f:{NFSU2_TR(0x71bc3f);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4384))));
}
B71bc42:{NFSU2_TR(0x71bc42);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B71bc46:{NFSU2_TR(0x71bc46);
w8(R+4464,u64(u64(r8(R+4464))&u64(r8(R+4368))));
}
B71bc49:{NFSU2_TR(0x71bc49);
w8(R+4400,u64(u64(r8(R+4400))&u64(r8(R+4432))));
}
B71bc4c:{NFSU2_TR(0x71bc4c);
w8(R+4352,u64(u64(r8(R+4352))|u64(r8(R+4416))));
}
B71bc4f:{NFSU2_TR(0x71bc4f);
w8(R+4400,shl<u64>(r8(R+4400),u64(u64(0x10ull))));
}
B71bc53:{NFSU2_TR(0x71bc53);
w8(R+4464,u64(u64(r8(R+4464))|u64(r8(R+4352))));
}
B71bc56:{NFSU2_TR(0x71bc56);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B71bc5a:{NFSU2_TR(0x71bc5a);
w8(R+4464,u64(u64(r8(R+4464))|u64(r8(R+4400))));
}
B71bc5d:{NFSU2_TR(0x71bc5d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B71bc61:{NFSU2_TR(0x71bc61);
__builtin_memmove((R+4400),(R+4416),8);
}
B71bc64:{NFSU2_TR(0x71bc64);
u8 U[20];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4352,u16(u32(r2(R+4352))*u32(r2(U+12))));
w2(R+4354,u16(u32(r2(R+4354))*u32(r2(U+14))));
w2(R+4356,u16(u32(r2(R+4356))*u32(r2(U+16))));
w2(R+4358,u16(u32(r2(R+4358))*u32(r2(U+18))));
}
B71bc68:{NFSU2_TR(0x71bc68);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4432))));
}
B71bc6b:{NFSU2_TR(0x71bc6b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71bc6f:{NFSU2_TR(0x71bc6f);
w8(R+4448,u64(u64(r8(R+4448))|u64(r8(R+4416))));
}
B71bc72:{NFSU2_TR(0x71bc72);
__builtin_memmove((R+4416),(R+4400),8);
}
B71bc75:{NFSU2_TR(0x71bc75);
w8(R+4448,shr<u64>(r8(R+4448),u64(u32(0x10ull))));
}
B71bc79:{NFSU2_TR(0x71bc79);
__builtin_memmove((R+4464),(R+4352),8);
}
B71bc7c:{NFSU2_TR(0x71bc7c);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4368))));
}
B71bc7f:{NFSU2_TR(0x71bc7f);
w8(R+4464,shl<u64>(r8(R+4464),u64(u64(0x30ull))));
}
B71bc83:{NFSU2_TR(0x71bc83);
w8(R+4448,u64(u64(r8(R+4448))|u64(r8(R+4416))));
}
B71bc86:{NFSU2_TR(0x71bc86);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B71bc8a:{NFSU2_TR(0x71bc8a);
w8(R+4464,u64(u64(r8(R+4464))|u64(r8(R+4448))));
}
B71bc8d:{NFSU2_TR(0x71bc8d);
u8 U[20];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))*u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))*u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))*u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))*u32(r2(U+18))));
}
B71bc91:{NFSU2_TR(0x71bc91);
w8(R+4400,shr<u64>(r8(R+4400),u64(u32(0x10ull))));
}
B71bc95:{NFSU2_TR(0x71bc95);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71bc99:{NFSU2_TR(0x71bc99);
w8(R+4400,u64(u64(r8(R+4400))&u64(r8(R+4368))));
}
B71bc9c:{NFSU2_TR(0x71bc9c);
w8(R+4432,shr<u64>(r8(R+4432),u64(u32(0x30ull))));
}
B71bca0:{NFSU2_TR(0x71bca0);
w8(R+4368,u64(u64(r8(R+4368))&u64(r8(R+4384))));
}
B71bca3:{NFSU2_TR(0x71bca3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B71bca7:{NFSU2_TR(0x71bca7);
w8(R+4432,u64(u64(r8(R+4432))|u64(r8(R+4400))));
}
B71bcaa:{NFSU2_TR(0x71bcaa);
u8 U[20];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4448,u16(u32(r2(R+4448))*u32(r2(U+12))));
w2(R+4450,u16(u32(r2(R+4450))*u32(r2(U+14))));
w2(R+4452,u16(u32(r2(R+4452))*u32(r2(U+16))));
w2(R+4454,u16(u32(r2(R+4454))*u32(r2(U+18))));
}
B71bcae:{NFSU2_TR(0x71bcae);
w8(R+4352,shr<u64>(r8(R+4352),u64(u32(0x10ull))));
}
B71bcb2:{NFSU2_TR(0x71bcb2);
__builtin_memmove((R+4464),(R+4416),8);
}
B71bcb5:{NFSU2_TR(0x71bcb5);
__builtin_memmove((R+4400),(R+4384),8);
}
B71bcb8:{NFSU2_TR(0x71bcb8);
w8(R+4464,shl<u64>(r8(R+4464),u64(u64(0x30ull))));
}
B71bcbc:{NFSU2_TR(0x71bcbc);
w8(R+4400,u64(u64(r8(R+4400))&u64(r8(R+4352))));
}
B71bcbf:{NFSU2_TR(0x71bcbf);
w8(R+4352,u64(u64(r8(R+4352))^u64(r8(R+4400))));
}
B71bcc2:{NFSU2_TR(0x71bcc2);
w8(R+4400,shl<u64>(r8(R+4400),u64(u64(0x20ull))));
}
B71bcc6:{NFSU2_TR(0x71bcc6);
w8(R+4464,u64(u64(r8(R+4464))|u64(r8(R+4432))));
}
B71bcc9:{NFSU2_TR(0x71bcc9);
__builtin_memmove((R+4432),(R+4448),8);
}
B71bccc:{NFSU2_TR(0x71bccc);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
w8(R+4448,u64(u64(r8(R+4448))&u64(r8(U+4))));
}
B71bcd0:{NFSU2_TR(0x71bcd0);
w8(R+4464,u64(u64(r8(R+4464))|u64(r8(R+4400))));
}
B71bcd3:{NFSU2_TR(0x71bcd3);
w8(R+4448,shl<u64>(r8(R+4448),u64(u64(0x20ull))));
}
B71bcd7:{NFSU2_TR(0x71bcd7);
w8(R+4352,u64(u64(r8(R+4352))|u64(r8(R+4368))));
}
B71bcda:{NFSU2_TR(0x71bcda);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71bcde:{NFSU2_TR(0x71bcde);
w8(R+4352,u64(u64(r8(R+4352))|u64(r8(R+4448))));
}
B71bce1:{NFSU2_TR(0x71bce1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B71bce5:{NFSU2_TR(0x71bce5);
__builtin_memmove((R+4448),(R+4432),8);
}
B71bce8:{NFSU2_TR(0x71bce8);
u8 U[20];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4464,u16(u32(r2(R+4464))*u32(r2(U+12))));
w2(R+4466,u16(u32(r2(R+4466))*u32(r2(U+14))));
w2(R+4468,u16(u32(r2(R+4468))*u32(r2(U+16))));
w2(R+4470,u16(u32(r2(R+4470))*u32(r2(U+18))));
}
B71bcec:{NFSU2_TR(0x71bcec);
w8(R+4432,shr<u64>(r8(R+4432),u64(u32(0x20ull))));
}
B71bcf0:{NFSU2_TR(0x71bcf0);
w8(R+4448,u64(u64(r8(R+4448))&u64(r8(R+4384))));
}
B71bcf3:{NFSU2_TR(0x71bcf3);
__builtin_memmove((R+4368),(R+4432),8);
}
B71bcf6:{NFSU2_TR(0x71bcf6);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71bcfa:{NFSU2_TR(0x71bcfa);
w8(R+4368,u64(u64(r8(R+4368))&u64(r8(R+4384))));
}
B71bcfd:{NFSU2_TR(0x71bcfd);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B71bd01:{NFSU2_TR(0x71bd01);
__builtin_memmove((R+4400),(R+4464),8);
}
B71bd04:{NFSU2_TR(0x71bd04);
u8 U[20];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4352,u16(u32(r2(R+4352))*u32(r2(U+12))));
w2(R+4354,u16(u32(r2(R+4354))*u32(r2(U+14))));
w2(R+4356,u16(u32(r2(R+4356))*u32(r2(U+16))));
w2(R+4358,u16(u32(r2(R+4358))*u32(r2(U+18))));
}
B71bd08:{NFSU2_TR(0x71bd08);
w8(R+4400,shl<u64>(r8(R+4400),u64(u64(0x10ull))));
}
B71bd0c:{NFSU2_TR(0x71bd0c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
w8(R+4464,u64(u64(r8(R+4464))&u64(r8(U+4))));
}
B71bd10:{NFSU2_TR(0x71bd10);
w8(R+4432,u64(u64(r8(R+4432))^u64(r8(R+4368))));
}
B71bd13:{NFSU2_TR(0x71bd13);
w8(R+4448,u64(u64(r8(R+4448))|u64(r8(R+4432))));
}
B71bd16:{NFSU2_TR(0x71bd16);
__builtin_memmove((R+4432),(R+4400),8);
}
B71bd19:{NFSU2_TR(0x71bd19);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
w8(R+4432,u64(u64(r8(R+4432))&u64(r8(U+4))));
}
B71bd1d:{NFSU2_TR(0x71bd1d);
w8(R+4464,u64(u64(r8(R+4464))|u64(r8(R+4368))));
}
B71bd20:{NFSU2_TR(0x71bd20);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B71bd24:{NFSU2_TR(0x71bd24);
w8(R+4400,u64(u64(r8(R+4400))^u64(r8(R+4432))));
}
B71bd27:{NFSU2_TR(0x71bd27);
u8 U[20];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4368,u16(u32(r2(R+4368))*u32(r2(U+12))));
w2(R+4370,u16(u32(r2(R+4370))*u32(r2(U+14))));
w2(R+4372,u16(u32(r2(R+4372))*u32(r2(U+16))));
w2(R+4374,u16(u32(r2(R+4374))*u32(r2(U+18))));
}
B71bd2b:{NFSU2_TR(0x71bd2b);
w8(R+4464,u64(u64(r8(R+4464))|u64(r8(R+4400))));
}
B71bd2e:{NFSU2_TR(0x71bd2e);
w8(R+4448,u64(u64(r8(R+4448))|u64(r8(R+4432))));
}
B71bd31:{NFSU2_TR(0x71bd31);
__builtin_memmove((R+4432),(R+4352),8);
}
B71bd34:{NFSU2_TR(0x71bd34);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71bd38:{NFSU2_TR(0x71bd38);
w8(R+4432,shr<u64>(r8(R+4432),u64(u32(0x10ull))));
}
B71bd3c:{NFSU2_TR(0x71bd3c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
w8(R+4432,u64(u64(r8(R+4432))&u64(r8(U+4))));
}
B71bd40:{NFSU2_TR(0x71bd40);
__builtin_memmove((R+4464),(R+4352),8);
}
B71bd43:{NFSU2_TR(0x71bd43);
w8(R+4448,u64(u64(r8(R+4448))|u64(r8(R+4432))));
}
B71bd46:{NFSU2_TR(0x71bd46);
w8(R+4352,u64(u64(r8(R+4352))&u64(r8(R+4384))));
}
B71bd49:{NFSU2_TR(0x71bd49);
w8(R+4464,u64(u64(r8(R+4464))^u64(r8(R+4352))));
}
B71bd4c:{NFSU2_TR(0x71bd4c);
w8(R+4352,shl<u64>(r8(R+4352),u64(u64(0x20ull))));
}
B71bd50:{NFSU2_TR(0x71bd50);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+4448),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71bd54:{NFSU2_TR(0x71bd54);
w8(R+4416,shr<u64>(r8(R+4416),u64(u32(0x10ull))));
}
B71bd58:{NFSU2_TR(0x71bd58);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B71bd5c:{NFSU2_TR(0x71bd5c);
w8(R+4464,shl<u64>(r8(R+4464),u64(u64(0x10ull))));
}
B71bd60:{NFSU2_TR(0x71bd60);
u8 U[20];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4432,u16(u32(r2(R+4432))*u32(r2(U+12))));
w2(R+4434,u16(u32(r2(R+4434))*u32(r2(U+14))));
w2(R+4436,u16(u32(r2(R+4436))*u32(r2(U+16))));
w2(R+4438,u16(u32(r2(R+4438))*u32(r2(U+18))));
}
B71bd64:{NFSU2_TR(0x71bd64);
__builtin_memmove((R+4448),(R+4464),8);
}
B71bd67:{NFSU2_TR(0x71bd67);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B71bd6b:{NFSU2_TR(0x71bd6b);
w8(R+4448,shl<u64>(r8(R+4448),u64(u64(0x10ull))));
}
B71bd6f:{NFSU2_TR(0x71bd6f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
w8(R+4464,u64(u64(r8(R+4464))&u64(r8(U+4))));
}
B71bd73:{NFSU2_TR(0x71bd73);
w8(R+4400,u64(u64(r8(R+4400))&u64(r8(R+4368))));
}
B71bd76:{NFSU2_TR(0x71bd76);
w8(R+4464,u64(u64(r8(R+4464))|u64(r8(R+4352))));
}
B71bd79:{NFSU2_TR(0x71bd79);
__builtin_memmove((R+4352),(R+4368),8);
}
B71bd7c:{NFSU2_TR(0x71bd7c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
w8(R+4368,u64(u64(r8(R+4368))&u64(r8(U+4))));
}
B71bd80:{NFSU2_TR(0x71bd80);
w8(R+4448,u64(u64(r8(R+4448))|u64(r8(R+4400))));
}
B71bd83:{NFSU2_TR(0x71bd83);
__builtin_memmove((R+4400),(R+4416),8);
}
B71bd86:{NFSU2_TR(0x71bd86);
w8(R+4368,shr<u64>(r8(R+4368),u64(u32(0x20ull))));
}
B71bd8a:{NFSU2_TR(0x71bd8a);
w8(R+4400,u64(u64(r8(R+4400))&u64(r8(R+4384))));
}
B71bd8d:{NFSU2_TR(0x71bd8d);
w8(R+4464,u64(u64(r8(R+4464))|u64(r8(R+4368))));
}
B71bd90:{NFSU2_TR(0x71bd90);
w8(R+4464,u64(u64(r8(R+4464))|u64(r8(R+4400))));
}
B71bd93:{NFSU2_TR(0x71bd93);
__builtin_memmove((R+4400),(R+4416),8);
}
B71bd96:{NFSU2_TR(0x71bd96);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
w8(R+4400,u64(u64(r8(R+4400))&u64(r8(U+4))));
}
B71bd9a:{NFSU2_TR(0x71bd9a);
__builtin_memmove((R+4368),(R+4432),8);
}
B71bd9d:{NFSU2_TR(0x71bd9d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71bda1:{NFSU2_TR(0x71bda1);
w8(R+4432,shr<u64>(r8(R+4432),u64(u32(0x30ull))));
}
B71bda5:{NFSU2_TR(0x71bda5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B71bda9:{NFSU2_TR(0x71bda9);
w8(R+4448,u64(u64(r8(R+4448))|u64(r8(R+4400))));
}
B71bdac:{NFSU2_TR(0x71bdac);
u8 U[20];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4464,u16(u32(r2(R+4464))*u32(r2(U+12))));
w2(R+4466,u16(u32(r2(R+4466))*u32(r2(U+14))));
w2(R+4468,u16(u32(r2(R+4468))*u32(r2(U+16))));
w2(R+4470,u16(u32(r2(R+4470))*u32(r2(U+18))));
}
B71bdb0:{NFSU2_TR(0x71bdb0);
w8(R+4448,u64(u64(r8(R+4448))|u64(r8(R+4432))));
}
B71bdb3:{NFSU2_TR(0x71bdb3);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(U+4))));
}
B71bdb7:{NFSU2_TR(0x71bdb7);
w8(R+4352,shl<u64>(r8(R+4352),u64(u64(0x20ull))));
}
B71bdbb:{NFSU2_TR(0x71bdbb);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+4448),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71bdbf:{NFSU2_TR(0x71bdbf);
__builtin_memmove((R+4448),(R+4352),8);
}
B71bdc2:{NFSU2_TR(0x71bdc2);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
w8(R+4352,u64(u64(r8(R+4352))&u64(r8(U+4))));
}
B71bdc6:{NFSU2_TR(0x71bdc6);
w8(R+4448,shl<u64>(r8(R+4448),u64(u64(0x10ull))));
}
B71bdca:{NFSU2_TR(0x71bdca);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B71bdce:{NFSU2_TR(0x71bdce);
__builtin_memmove((R+4400),(R+4368),8);
}
B71bdd1:{NFSU2_TR(0x71bdd1);
u8 U[20];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4432,u16(u32(r2(R+4432))*u32(r2(U+12))));
w2(R+4434,u16(u32(r2(R+4434))*u32(r2(U+14))));
w2(R+4436,u16(u32(r2(R+4436))*u32(r2(U+16))));
w2(R+4438,u16(u32(r2(R+4438))*u32(r2(U+18))));
}
B71bdd5:{NFSU2_TR(0x71bdd5);
w8(R+4368,shr<u64>(r8(R+4368),u64(u32(0x10ull))));
}
B71bdd9:{NFSU2_TR(0x71bdd9);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
w8(R+4368,u64(u64(r8(R+4368))&u64(r8(U+4))));
}
B71bddd:{NFSU2_TR(0x71bddd);
w8(R+4352,u64(u64(r8(R+4352))|u64(r8(R+4416))));
}
B71bde0:{NFSU2_TR(0x71bde0);
w8(R+4384,u64(u64(r8(R+4384))&u64(r8(R+4464))));
}
B71bde3:{NFSU2_TR(0x71bde3);
w8(R+4352,u64(u64(r8(R+4352))|u64(r8(R+4368))));
}
B71bde6:{NFSU2_TR(0x71bde6);
w8(R+4352,u64(u64(r8(R+4352))|u64(r8(R+4384))));
}
B71bde9:{NFSU2_TR(0x71bde9);
w8(R+4400,shl<u64>(r8(R+4400),u64(u64(0x10ull))));
}
B71bded:{NFSU2_TR(0x71bded);
__builtin_memmove((R+4416),(R+4400),8);
}
B71bdf0:{NFSU2_TR(0x71bdf0);
__builtin_memmove((R+4384),(R+4432),8);
}
B71bdf3:{NFSU2_TR(0x71bdf3);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71bdf7:{NFSU2_TR(0x71bdf7);
w8(R+4384,shr<u64>(r8(R+4384),u64(u32(0x30ull))));
}
B71bdfb:{NFSU2_TR(0x71bdfb);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(U+4))));
}
B71bdff:{NFSU2_TR(0x71bdff);
w8(R+4448,u64(u64(r8(R+4448))|u64(r8(R+4384))));
}
B71be02:{NFSU2_TR(0x71be02);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B71be06:{NFSU2_TR(0x71be06);
w8(R+4448,u64(u64(r8(R+4448))|u64(r8(R+4416))));
}
B71be09:{NFSU2_TR(0x71be09);
w8(R+4384,u64(u64(r8(R+4384))&u64(r8(R+4464))));
}
B71be0c:{NFSU2_TR(0x71be0c);
w8(R+4400,shl<u64>(r8(R+4400),u64(u64(0x20ull))));
}
B71be10:{NFSU2_TR(0x71be10);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
w8(R+4400,u64(u64(r8(R+4400))|u64(r8(U+4))));
}
B71be14:{NFSU2_TR(0x71be14);
w8(R+4448,u64(u64(r8(R+4448))|u64(r8(R+4384))));
}
B71be17:{NFSU2_TR(0x71be17);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B71be1b:{NFSU2_TR(0x71be1b);
w8(R+4432,shl<u64>(r8(R+4432),u64(u64(0x10ull))));
}
B71be1f:{NFSU2_TR(0x71be1f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4448),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71be23:{NFSU2_TR(0x71be23);
w8(R+4384,u64(u64(r8(R+4384))&u64(r8(R+4432))));
}
B71be26:{NFSU2_TR(0x71be26);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B71be2a:{NFSU2_TR(0x71be2a);
w8(R+4432,u64(u64(r8(R+4432))^u64(r8(R+4384))));
}
B71be2d:{NFSU2_TR(0x71be2d);
w8(R+4448,u64(u64(r8(R+4448))&u64(r8(R+4464))));
}
B71be30:{NFSU2_TR(0x71be30);
w8(R+4384,shr<u64>(r8(R+4384),u64(u32(0x20ull))));
}
B71be34:{NFSU2_TR(0x71be34);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
w8(R+4464,u64(u64(r8(R+4464))&u64(r8(U+4))));
}
B71be38:{NFSU2_TR(0x71be38);
w8(R+4400,u64(u64(r8(R+4400))|u64(r8(R+4384))));
}
B71be3b:{NFSU2_TR(0x71be3b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
w8(R+4464,u64(u64(r8(R+4464))|u64(r8(U+4))));
}
B71be3f:{NFSU2_TR(0x71be3f);
w8(R+4448,u64(u64(r8(R+4448))|u64(r8(R+4400))));
}
B71be42:{NFSU2_TR(0x71be42);
w8(R+4464,u64(u64(r8(R+4464))|u64(r8(R+4432))));
}
B71be45:{NFSU2_TR(0x71be45);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4448),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71be49:{NFSU2_TR(0x71be49);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71be4d:{NFSU2_TR(0x71be4d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B71be51:{NFSU2_TR(0x71be51);
}
B71be52:{NFSU2_TR(0x71be52);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B71be56:{NFSU2_TR(0x71be56);
__builtin_memmove((R+4416),(R+4384),8);
}
B71be59:{NFSU2_TR(0x71be59);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B71be5d:{NFSU2_TR(0x71be5d);
{wv<8>((R+4416),uo::pmulhw<8>(rv<8>((R+4416)),rv<8>((R+4448))));}
}
B71be60:{NFSU2_TR(0x71be60);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B71be64:{NFSU2_TR(0x71be64);
{wv<8>((R+4368),uo::pmulhw<8>(rv<8>((R+4368)),rv<8>((R+4384))));}
}
B71be67:{NFSU2_TR(0x71be67);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B71be6b:{NFSU2_TR(0x71be6b);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4384))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4386))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4388))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4390))));
}
B71be6e:{NFSU2_TR(0x71be6e);
w8(R+4448,u64(u64(r8(R+4448))^u64(r8(R+4448))));
}
B71be71:{NFSU2_TR(0x71be71);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(R+4368))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(R+4370))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(R+4372))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(R+4374))));
}
B71be74:{NFSU2_TR(0x71be74);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B71be78:{NFSU2_TR(0x71be78);
{wv<8>((R+4352),uo::pmulhw<8>(rv<8>((R+4352)),rv<8>((R+4400))));}
}
B71be7b:{NFSU2_TR(0x71be7b);
__builtin_memmove((R+4368),(R+4432),8);
}
B71be7e:{NFSU2_TR(0x71be7e);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4400))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4402))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4404))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4406))));
}
B71be81:{NFSU2_TR(0x71be81);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pmulhw<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B71be85:{NFSU2_TR(0x71be85);
{wv<8>((R+4448),uo::psubsw<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B71be88:{NFSU2_TR(0x71be88);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4432),uo::pmulhw<8>(rv<8>((R+4432)),rv<8>((U+4))));}
}
B71be8c:{NFSU2_TR(0x71be8c);
{wv<8>((R+4352),uo::psubsw<8>(rv<8>((R+4352)),rv<8>((R+4416))));}
}
B71be8f:{NFSU2_TR(0x71be8f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B71be93:{NFSU2_TR(0x71be93);
{wv<8>((R+4416),uo::paddsw<8>(rv<8>((R+4416)),rv<8>((R+4416))));}
}
B71be96:{NFSU2_TR(0x71be96);
w2(R+4464,u16(u32(r2(R+4464))+u32(r2(R+4432))));
w2(R+4466,u16(u32(r2(R+4466))+u32(r2(R+4434))));
w2(R+4468,u16(u32(r2(R+4468))+u32(r2(R+4436))));
w2(R+4470,u16(u32(r2(R+4470))+u32(r2(R+4438))));
}
B71be99:{NFSU2_TR(0x71be99);
{wv<8>((R+4416),uo::paddsw<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B71be9c:{NFSU2_TR(0x71be9c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pmulhw<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B71bea0:{NFSU2_TR(0x71bea0);
{wv<8>((R+4400),uo::psubsw<8>(rv<8>((R+4400)),rv<8>((R+4448))));}
}
B71bea3:{NFSU2_TR(0x71bea3);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71bea7:{NFSU2_TR(0x71bea7);
{wv<8>((R+4448),uo::paddsw<8>(rv<8>((R+4448)),rv<8>((R+4448))));}
}
B71beaa:{NFSU2_TR(0x71beaa);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B71beae:{NFSU2_TR(0x71beae);
{wv<8>((R+4448),uo::paddsw<8>(rv<8>((R+4448)),rv<8>((R+4400))));}
}
B71beb1:{NFSU2_TR(0x71beb1);
__builtin_memmove((R+4432),(R+4400),8);
}
B71beb4:{NFSU2_TR(0x71beb4);
{wv<8>((R+4400),uo::pmulhw<8>(rv<8>((R+4400)),rv<8>((R+4416))));}
}
B71beb7:{NFSU2_TR(0x71beb7);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4448),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71bebb:{NFSU2_TR(0x71bebb);
__builtin_memmove((R+4384),(R+4352),8);
}
B71bebe:{NFSU2_TR(0x71bebe);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4448),(U+0),8);
}
B71bec1:{NFSU2_TR(0x71bec1);
{wv<8>((R+4352),uo::pmulhw<8>(rv<8>((R+4352)),rv<8>((R+4416))));}
}
B71bec4:{NFSU2_TR(0x71bec4);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4400))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4402))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4404))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4406))));
}
B71bec7:{NFSU2_TR(0x71bec7);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(R+4352))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(R+4354))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(R+4356))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(R+4358))));
}
B71beca:{NFSU2_TR(0x71beca);
{wv<8>((R+4432),uo::psubsw<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B71becd:{NFSU2_TR(0x71becd);
{wv<8>((R+4448),uo::pmulhw<8>(rv<8>((R+4448)),rv<8>((R+4416))));}
}
B71bed0:{NFSU2_TR(0x71bed0);
u8 U[16];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((U+8),(U+0),8);
w2(R+4448,u16(u32(r2(R+4448))+u32(r2(U+8))));
w2(R+4450,u16(u32(r2(R+4450))+u32(r2(U+10))));
w2(R+4452,u16(u32(r2(R+4452))+u32(r2(U+12))));
w2(R+4454,u16(u32(r2(R+4454))+u32(r2(U+14))));
}
B71bed3:{NFSU2_TR(0x71bed3);
{wv<8>((R+4368),uo::paddsw<8>(rv<8>((R+4368)),rv<8>((R+4368))));}
}
B71bed6:{NFSU2_TR(0x71bed6);
__builtin_memmove((R+4416),(R+4448),8);
}
B71bed9:{NFSU2_TR(0x71bed9);
{wv<8>((R+4368),uo::paddsw<8>(rv<8>((R+4368)),rv<8>((R+4432))));}
}
B71bedc:{NFSU2_TR(0x71bedc);
{wv<8>((R+4448),uo::psubsw<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B71bedf:{NFSU2_TR(0x71bedf);
{wv<8>((R+4384),uo::paddsw<8>(rv<8>((R+4384)),rv<8>((R+4384))));}
}
B71bee2:{NFSU2_TR(0x71bee2);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B71bee6:{NFSU2_TR(0x71bee6);
{wv<8>((R+4384),uo::paddsw<8>(rv<8>((R+4384)),rv<8>((R+4448))));}
}
B71bee9:{NFSU2_TR(0x71bee9);
{wv<8>((R+4384),uo::psubsw<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B71beec:{NFSU2_TR(0x71beec);
}
B71beed:{NFSU2_TR(0x71beed);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B71bef1:{NFSU2_TR(0x71bef1);
{wv<8>((R+4416),uo::psubsw<8>(rv<8>((R+4416)),rv<8>((R+4464))));}
}
B71bef4:{NFSU2_TR(0x71bef4);
{wv<8>((R+4368),uo::paddsw<8>(rv<8>((R+4368)),rv<8>((R+4368))));}
}
B71bef7:{NFSU2_TR(0x71bef7);
{wv<8>((R+4464),uo::paddsw<8>(rv<8>((R+4464)),rv<8>((R+4464))));}
}
B71befa:{NFSU2_TR(0x71befa);
{wv<8>((R+4368),uo::paddsw<8>(rv<8>((R+4368)),rv<8>((R+4384))));}
}
B71befd:{NFSU2_TR(0x71befd);
{wv<8>((R+4464),uo::paddsw<8>(rv<8>((R+4464)),rv<8>((R+4416))));}
}
B71bf00:{NFSU2_TR(0x71bf00);
{wv<8>((R+4416),uo::psubsw<8>(rv<8>((R+4416)),rv<8>((R+4400))));}
}
B71bf03:{NFSU2_TR(0x71bf03);
{wv<8>((R+4400),uo::paddsw<8>(rv<8>((R+4400)),rv<8>((R+4400))));}
}
B71bf06:{NFSU2_TR(0x71bf06);
{wv<8>((R+4448),uo::psubsw<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B71bf09:{NFSU2_TR(0x71bf09);
{wv<8>((R+4432),uo::paddsw<8>(rv<8>((R+4432)),rv<8>((R+4432))));}
}
B71bf0c:{NFSU2_TR(0x71bf0c);
{wv<8>((R+4400),uo::paddsw<8>(rv<8>((R+4400)),rv<8>((R+4416))));}
}
B71bf0f:{NFSU2_TR(0x71bf0f);
{wv<8>((R+4432),uo::paddsw<8>(rv<8>((R+4432)),rv<8>((R+4448))));}
}
B71bf12:{NFSU2_TR(0x71bf12);
{wv<8>((R+4464),uo::psubsw<8>(rv<8>((R+4464)),rv<8>((R+4352))));}
}
B71bf15:{NFSU2_TR(0x71bf15);
{wv<8>((R+4352),uo::paddsw<8>(rv<8>((R+4352)),rv<8>((R+4352))));}
}
B71bf18:{NFSU2_TR(0x71bf18);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71bf1c:{NFSU2_TR(0x71bf1c);
{wv<8>((R+4352),uo::paddsw<8>(rv<8>((R+4352)),rv<8>((R+4464))));}
}
B71bf1f:{NFSU2_TR(0x71bf1f);
__builtin_memmove((R+4368),(R+4416),8);
}
B71bf22:{NFSU2_TR(0x71bf22);
__builtin_memmove((R+4422),(R+4434),2);
__builtin_memmove((R+4420),(R+4418),2);
__builtin_memmove((R+4418),(R+4432),2);
}
B71bf25:{NFSU2_TR(0x71bf25);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+8)),r8(U+0));
}
B71bf28:{NFSU2_TR(0x71bf28);
__builtin_memmove((R+4368),(R+4372),2);
__builtin_memmove((R+4370),(R+4436),2);
__builtin_memmove((R+4372),(R+4374),2);
__builtin_memmove((R+4374),(R+4438),2);
}
B71bf2b:{NFSU2_TR(0x71bf2b);
__builtin_memmove((R+4352),(R+4448),8);
}
B71bf2e:{NFSU2_TR(0x71bf2e);
__builtin_memmove((R+4454),(R+4466),2);
__builtin_memmove((R+4452),(R+4450),2);
__builtin_memmove((R+4450),(R+4464),2);
}
B71bf31:{NFSU2_TR(0x71bf31);
__builtin_memmove((R+4432),(R+4416),8);
}
B71bf34:{NFSU2_TR(0x71bf34);
__builtin_memmove((R+4420),(R+4448),4);
}
B71bf37:{NFSU2_TR(0x71bf37);
__builtin_memmove((R+4432),(R+4436),4);
__builtin_memmove((R+4436),(R+4452),4);
}
B71bf3a:{NFSU2_TR(0x71bf3a);
__builtin_memmove((R+4448),(R+4368),8);
}
B71bf3d:{NFSU2_TR(0x71bf3d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71bf41:{NFSU2_TR(0x71bf41);
__builtin_memmove((R+4352),(R+4356),2);
__builtin_memmove((R+4354),(R+4468),2);
__builtin_memmove((R+4356),(R+4358),2);
__builtin_memmove((R+4358),(R+4470),2);
}
B71bf44:{NFSU2_TR(0x71bf44);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71bf48:{NFSU2_TR(0x71bf48);
__builtin_memmove((R+4448),(R+4452),4);
__builtin_memmove((R+4452),(R+4356),4);
}
B71bf4b:{NFSU2_TR(0x71bf4b);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B71bf4e:{NFSU2_TR(0x71bf4e);
__builtin_memmove((R+4372),(R+4352),4);
}
B71bf51:{NFSU2_TR(0x71bf51);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B71bf55:{NFSU2_TR(0x71bf55);
__builtin_memmove((R+4352),(R+4416),8);
}
B71bf58:{NFSU2_TR(0x71bf58);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4448),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71bf5c:{NFSU2_TR(0x71bf5c);
__builtin_memmove((R+4358),(R+4434),2);
__builtin_memmove((R+4356),(R+4354),2);
__builtin_memmove((R+4354),(R+4432),2);
}
B71bf5f:{NFSU2_TR(0x71bf5f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71bf63:{NFSU2_TR(0x71bf63);
__builtin_memmove((R+4416),(R+4420),2);
__builtin_memmove((R+4418),(R+4436),2);
__builtin_memmove((R+4420),(R+4422),2);
__builtin_memmove((R+4422),(R+4438),2);
}
B71bf66:{NFSU2_TR(0x71bf66);
__builtin_memmove((R+4432),(R+4384),8);
}
B71bf69:{NFSU2_TR(0x71bf69);
__builtin_memmove((R+4390),(R+4402),2);
__builtin_memmove((R+4388),(R+4386),2);
__builtin_memmove((R+4386),(R+4400),2);
}
B71bf6c:{NFSU2_TR(0x71bf6c);
__builtin_memmove((R+4368),(R+4352),8);
}
B71bf6f:{NFSU2_TR(0x71bf6f);
__builtin_memmove((R+4356),(R+4384),4);
}
B71bf72:{NFSU2_TR(0x71bf72);
__builtin_memmove((R+4368),(R+4372),4);
__builtin_memmove((R+4372),(R+4388),4);
}
B71bf75:{NFSU2_TR(0x71bf75);
__builtin_memmove((R+4384),(R+4416),8);
}
B71bf78:{NFSU2_TR(0x71bf78);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+8)),r8(U+0));
}
B71bf7b:{NFSU2_TR(0x71bf7b);
__builtin_memmove((R+4432),(R+4436),2);
__builtin_memmove((R+4434),(R+4404),2);
__builtin_memmove((R+4436),(R+4438),2);
__builtin_memmove((R+4438),(R+4406),2);
}
B71bf7e:{NFSU2_TR(0x71bf7e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71bf82:{NFSU2_TR(0x71bf82);
__builtin_memmove((R+4416),(R+4420),4);
__builtin_memmove((R+4420),(R+4436),4);
}
B71bf85:{NFSU2_TR(0x71bf85);
__builtin_memmove((R+4388),(R+4432),4);
}
B71bf88:{NFSU2_TR(0x71bf88);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71bf8c:{NFSU2_TR(0x71bf8c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71bf90:{NFSU2_TR(0x71bf90);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B71bf94:{NFSU2_TR(0x71bf94);
}
B71bf95:{NFSU2_TR(0x71bf95);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B71bf99:{NFSU2_TR(0x71bf99);
__builtin_memmove((R+4416),(R+4384),8);
}
B71bf9c:{NFSU2_TR(0x71bf9c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B71bfa0:{NFSU2_TR(0x71bfa0);
{wv<8>((R+4416),uo::pmulhw<8>(rv<8>((R+4416)),rv<8>((R+4448))));}
}
B71bfa3:{NFSU2_TR(0x71bfa3);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B71bfa7:{NFSU2_TR(0x71bfa7);
{wv<8>((R+4368),uo::pmulhw<8>(rv<8>((R+4368)),rv<8>((R+4384))));}
}
B71bfaa:{NFSU2_TR(0x71bfaa);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B71bfae:{NFSU2_TR(0x71bfae);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4384))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4386))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4388))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4390))));
}
B71bfb1:{NFSU2_TR(0x71bfb1);
w8(R+4448,u64(u64(r8(R+4448))^u64(r8(R+4448))));
}
B71bfb4:{NFSU2_TR(0x71bfb4);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(R+4368))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(R+4370))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(R+4372))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(R+4374))));
}
B71bfb7:{NFSU2_TR(0x71bfb7);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B71bfbb:{NFSU2_TR(0x71bfbb);
{wv<8>((R+4352),uo::pmulhw<8>(rv<8>((R+4352)),rv<8>((R+4400))));}
}
B71bfbe:{NFSU2_TR(0x71bfbe);
__builtin_memmove((R+4368),(R+4432),8);
}
B71bfc1:{NFSU2_TR(0x71bfc1);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4400))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4402))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4404))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4406))));
}
B71bfc4:{NFSU2_TR(0x71bfc4);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pmulhw<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B71bfc8:{NFSU2_TR(0x71bfc8);
{wv<8>((R+4448),uo::psubsw<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B71bfcb:{NFSU2_TR(0x71bfcb);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4432),uo::pmulhw<8>(rv<8>((R+4432)),rv<8>((U+4))));}
}
B71bfcf:{NFSU2_TR(0x71bfcf);
{wv<8>((R+4352),uo::psubsw<8>(rv<8>((R+4352)),rv<8>((R+4416))));}
}
B71bfd2:{NFSU2_TR(0x71bfd2);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B71bfd6:{NFSU2_TR(0x71bfd6);
{wv<8>((R+4416),uo::paddsw<8>(rv<8>((R+4416)),rv<8>((R+4416))));}
}
B71bfd9:{NFSU2_TR(0x71bfd9);
w2(R+4464,u16(u32(r2(R+4464))+u32(r2(R+4432))));
w2(R+4466,u16(u32(r2(R+4466))+u32(r2(R+4434))));
w2(R+4468,u16(u32(r2(R+4468))+u32(r2(R+4436))));
w2(R+4470,u16(u32(r2(R+4470))+u32(r2(R+4438))));
}
B71bfdc:{NFSU2_TR(0x71bfdc);
{wv<8>((R+4416),uo::paddsw<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B71bfdf:{NFSU2_TR(0x71bfdf);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pmulhw<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B71bfe3:{NFSU2_TR(0x71bfe3);
{wv<8>((R+4400),uo::psubsw<8>(rv<8>((R+4400)),rv<8>((R+4448))));}
}
B71bfe6:{NFSU2_TR(0x71bfe6);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71bfea:{NFSU2_TR(0x71bfea);
{wv<8>((R+4448),uo::paddsw<8>(rv<8>((R+4448)),rv<8>((R+4448))));}
}
B71bfed:{NFSU2_TR(0x71bfed);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B71bff1:{NFSU2_TR(0x71bff1);
{wv<8>((R+4448),uo::paddsw<8>(rv<8>((R+4448)),rv<8>((R+4400))));}
}
B71bff4:{NFSU2_TR(0x71bff4);
__builtin_memmove((R+4432),(R+4400),8);
}
B71bff7:{NFSU2_TR(0x71bff7);
{wv<8>((R+4400),uo::pmulhw<8>(rv<8>((R+4400)),rv<8>((R+4416))));}
}
B71bffa:{NFSU2_TR(0x71bffa);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4448),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71bffe:{NFSU2_TR(0x71bffe);
__builtin_memmove((R+4384),(R+4352),8);
TAIL_STATIC(0x71c001u,71c);
}
XIT:NFSU2_TR_EXIT(0x71b,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
