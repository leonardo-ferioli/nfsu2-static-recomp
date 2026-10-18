#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_703(u8* __restrict R,Cpu& c);
u32 body_71a(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_760(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x719,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x719,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_719(u8* __restrict R,Cpu& c);
u32 page_719(Cpu& c){return body_719(c.regs.data(),c);}
__attribute__((noinline)) u32 body_719(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x719002:goto L719002;
case 0x719003:c.instructions+=19;goto B719003;
case 0x719006:c.instructions+=18;goto B719006;
case 0x71900a:c.instructions+=17;goto B71900a;
case 0x71900c:c.instructions+=16;goto B71900c;
case 0x719012:c.instructions+=15;goto B719012;
case 0x719013:c.instructions+=14;goto B719013;
case 0x719014:c.instructions+=13;goto B719014;
case 0x719016:c.instructions+=12;goto B719016;
case 0x719018:c.instructions+=11;goto B719018;
case 0x719019:c.instructions+=10;goto B719019;
case 0x71901c:c.instructions+=9;goto B71901c;
case 0x71901e:c.instructions+=8;goto B71901e;
case 0x719021:c.instructions+=7;goto B719021;
case 0x719024:c.instructions+=6;goto B719024;
case 0x719027:c.instructions+=5;goto B719027;
case 0x71902d:c.instructions+=4;goto B71902d;
case 0x719033:c.instructions+=3;goto B719033;
case 0x719036:c.instructions+=2;goto B719036;
case 0x71903c:c.instructions+=1;goto B71903c;
case 0x71903f:goto L71903f;
case 0x719042:c.instructions+=7;goto B719042;
case 0x719045:c.instructions+=6;goto B719045;
case 0x719049:c.instructions+=5;goto B719049;
case 0x71904b:c.instructions+=4;goto B71904b;
case 0x71904f:c.instructions+=3;goto B71904f;
case 0x719052:c.instructions+=2;goto B719052;
case 0x719055:c.instructions+=1;goto B719055;
case 0x71905a:goto L71905a;
case 0x719060:c.instructions+=3;goto B719060;
case 0x719063:c.instructions+=2;goto B719063;
case 0x719069:c.instructions+=1;goto B719069;
case 0x71906e:goto L71906e;
case 0x719070:c.instructions+=3;goto B719070;
case 0x719072:c.instructions+=2;goto B719072;
case 0x719075:c.instructions+=1;goto B719075;
case 0x719077:goto L719077;
case 0x719079:c.instructions+=2;goto B719079;
case 0x71907b:c.instructions+=1;goto B71907b;
case 0x71907d:goto L71907d;
case 0x719080:c.instructions+=2;goto B719080;
case 0x719087:c.instructions+=1;goto B719087;
case 0x71908c:goto L71908c;
case 0x71908e:c.instructions+=9;goto B71908e;
case 0x719090:c.instructions+=8;goto B719090;
case 0x719093:c.instructions+=7;goto B719093;
case 0x719095:c.instructions+=6;goto B719095;
case 0x719097:c.instructions+=5;goto B719097;
case 0x71909a:c.instructions+=4;goto B71909a;
case 0x71909c:c.instructions+=3;goto B71909c;
case 0x71909f:c.instructions+=2;goto B71909f;
case 0x7190a2:c.instructions+=1;goto B7190a2;
case 0x7190a4:goto L7190a4;
case 0x7190a6:goto L7190a6;
case 0x7190a8:c.instructions+=1;goto B7190a8;
case 0x7190ab:goto L7190ab;
case 0x7190ad:goto L7190ad;
case 0x7190b0:c.instructions+=1;goto B7190b0;
case 0x7190b2:goto L7190b2;
case 0x7190b4:c.instructions+=1;goto B7190b4;
case 0x7190b7:goto L7190b7;
case 0x7190ba:c.instructions+=6;goto B7190ba;
case 0x7190c0:c.instructions+=5;goto B7190c0;
case 0x7190c3:c.instructions+=4;goto B7190c3;
case 0x7190c9:c.instructions+=3;goto B7190c9;
case 0x7190cb:c.instructions+=2;goto B7190cb;
case 0x7190ce:c.instructions+=1;goto B7190ce;
case 0x7190d4:goto L7190d4;
case 0x7190d9:c.instructions+=2;goto B7190d9;
case 0x7190db:c.instructions+=1;goto B7190db;
case 0x7190dd:goto L7190dd;
case 0x7190df:c.instructions+=5;goto B7190df;
case 0x7190e6:c.instructions+=4;goto B7190e6;
case 0x7190e8:c.instructions+=3;goto B7190e8;
case 0x7190ea:c.instructions+=2;goto B7190ea;
case 0x7190ed:c.instructions+=1;goto B7190ed;
case 0x7190ef:goto L7190ef;
case 0x7190f1:goto L7190f1;
case 0x7190f3:c.instructions+=1;goto B7190f3;
case 0x7190f6:goto L7190f6;
case 0x7190f8:goto L7190f8;
case 0x7190fa:goto L7190fa;
case 0x7190ff:goto L7190ff;
case 0x719104:c.instructions+=5;goto B719104;
case 0x71910b:c.instructions+=4;goto B71910b;
case 0x719112:c.instructions+=3;goto B719112;
case 0x719113:c.instructions+=2;goto B719113;
case 0x719119:c.instructions+=1;goto B719119;
case 0x71911b:goto L71911b;
case 0x719121:c.instructions+=38;goto B719121;
case 0x719123:c.instructions+=37;goto B719123;
case 0x719125:c.instructions+=36;goto B719125;
case 0x719127:c.instructions+=35;goto B719127;
case 0x719129:c.instructions+=34;goto B719129;
case 0x71912b:c.instructions+=33;goto B71912b;
case 0x71912e:c.instructions+=32;goto B71912e;
case 0x719130:c.instructions+=31;goto B719130;
case 0x719132:c.instructions+=30;goto B719132;
case 0x719134:c.instructions+=29;goto B719134;
case 0x719137:c.instructions+=28;goto B719137;
case 0x71913a:c.instructions+=27;goto B71913a;
case 0x71913b:c.instructions+=26;goto B71913b;
case 0x71913c:c.instructions+=25;goto B71913c;
case 0x71913d:c.instructions+=24;goto B71913d;
case 0x71913e:c.instructions+=23;goto B71913e;
case 0x719140:c.instructions+=22;goto B719140;
case 0x719142:c.instructions+=21;goto B719142;
case 0x719144:c.instructions+=20;goto B719144;
case 0x719147:c.instructions+=19;goto B719147;
case 0x719149:c.instructions+=18;goto B719149;
case 0x71914c:c.instructions+=17;goto B71914c;
case 0x71914f:c.instructions+=16;goto B71914f;
case 0x719150:c.instructions+=15;goto B719150;
case 0x719151:c.instructions+=14;goto B719151;
case 0x719152:c.instructions+=13;goto B719152;
case 0x719153:c.instructions+=12;goto B719153;
case 0x719155:c.instructions+=11;goto B719155;
case 0x719157:c.instructions+=10;goto B719157;
case 0x71915a:c.instructions+=9;goto B71915a;
case 0x71915d:c.instructions+=8;goto B71915d;
case 0x719160:c.instructions+=7;goto B719160;
case 0x719161:c.instructions+=6;goto B719161;
case 0x719162:c.instructions+=5;goto B719162;
case 0x719163:c.instructions+=4;goto B719163;
case 0x719164:c.instructions+=3;goto B719164;
case 0x719167:c.instructions+=2;goto B719167;
case 0x719169:c.instructions+=1;goto B719169;
case 0x71916b:goto L71916b;
case 0x71916e:c.instructions+=2;goto B71916e;
case 0x719171:c.instructions+=1;goto B719171;
case 0x719174:goto L719174;
case 0x719177:c.instructions+=2;goto B719177;
case 0x71917a:c.instructions+=1;goto B71917a;
case 0x71917f:goto L71917f;
case 0x719184:c.instructions+=6;goto B719184;
case 0x71918b:c.instructions+=5;goto B71918b;
case 0x71918e:c.instructions+=4;goto B71918e;
case 0x719191:c.instructions+=3;goto B719191;
case 0x719194:c.instructions+=2;goto B719194;
case 0x719197:c.instructions+=1;goto B719197;
case 0x719199:goto L719199;
case 0x71919e:c.instructions+=9;goto B71919e;
case 0x7191a3:c.instructions+=8;goto B7191a3;
case 0x7191a8:c.instructions+=7;goto B7191a8;
case 0x7191ad:c.instructions+=6;goto B7191ad;
case 0x7191b2:c.instructions+=5;goto B7191b2;
case 0x7191b6:c.instructions+=4;goto B7191b6;
case 0x7191bb:c.instructions+=3;goto B7191bb;
case 0x7191be:c.instructions+=2;goto B7191be;
case 0x7191c0:c.instructions+=1;goto B7191c0;
case 0x7191c2:goto L7191c2;
case 0x7191c5:c.instructions+=3;goto B7191c5;
case 0x7191c8:c.instructions+=2;goto B7191c8;
case 0x7191cb:c.instructions+=1;goto B7191cb;
case 0x7191cd:goto L7191cd;
case 0x7191ce:c.instructions+=6;goto B7191ce;
case 0x7191cf:c.instructions+=5;goto B7191cf;
case 0x7191d1:c.instructions+=4;goto B7191d1;
case 0x7191d2:c.instructions+=3;goto B7191d2;
case 0x7191d4:c.instructions+=2;goto B7191d4;
case 0x7191d5:c.instructions+=1;goto B7191d5;
case 0x7191d6:goto L7191d6;
case 0x7191d7:c.instructions+=11;goto B7191d7;
case 0x7191d9:c.instructions+=10;goto B7191d9;
case 0x7191dc:c.instructions+=9;goto B7191dc;
case 0x7191dd:c.instructions+=8;goto B7191dd;
case 0x7191de:c.instructions+=7;goto B7191de;
case 0x7191e1:c.instructions+=6;goto B7191e1;
case 0x7191e3:c.instructions+=5;goto B7191e3;
case 0x7191e6:c.instructions+=4;goto B7191e6;
case 0x7191e7:c.instructions+=3;goto B7191e7;
case 0x7191ea:c.instructions+=2;goto B7191ea;
case 0x7191ed:c.instructions+=1;goto B7191ed;
case 0x7191f0:goto L7191f0;
case 0x7191f2:goto L7191f2;
case 0x7191f4:c.instructions+=4;goto B7191f4;
case 0x7191f7:c.instructions+=3;goto B7191f7;
case 0x7191fa:c.instructions+=2;goto B7191fa;
case 0x7191fb:c.instructions+=1;goto B7191fb;
case 0x7191fe:goto L7191fe;
case 0x719200:goto L719200;
case 0x719202:goto L719202;
case 0x719203:c.instructions+=1;goto B719203;
case 0x719206:goto L719206;
case 0x719209:c.instructions+=9;goto B719209;
case 0x71920c:c.instructions+=8;goto B71920c;
case 0x71920f:c.instructions+=7;goto B71920f;
case 0x719212:c.instructions+=6;goto B719212;
case 0x719214:c.instructions+=5;goto B719214;
case 0x719217:c.instructions+=4;goto B719217;
case 0x71921a:c.instructions+=3;goto B71921a;
case 0x71921d:c.instructions+=2;goto B71921d;
case 0x719220:c.instructions+=1;goto B719220;
case 0x719224:goto L719224;
case 0x719229:c.instructions+=15;goto B719229;
case 0x71922e:c.instructions+=14;goto B71922e;
case 0x719232:c.instructions+=13;goto B719232;
case 0x719237:c.instructions+=12;goto B719237;
case 0x71923b:c.instructions+=11;goto B71923b;
case 0x719243:c.instructions+=10;goto B719243;
case 0x719248:c.instructions+=9;goto B719248;
case 0x71924c:c.instructions+=8;goto B71924c;
case 0x719250:c.instructions+=7;goto B719250;
case 0x719254:c.instructions+=6;goto B719254;
case 0x719259:c.instructions+=5;goto B719259;
case 0x71925d:c.instructions+=4;goto B71925d;
case 0x719262:c.instructions+=3;goto B719262;
case 0x719265:c.instructions+=2;goto B719265;
case 0x719267:c.instructions+=1;goto B719267;
case 0x719269:goto L719269;
case 0x71926c:c.instructions+=3;goto B71926c;
case 0x71926f:c.instructions+=2;goto B71926f;
case 0x719272:c.instructions+=1;goto B719272;
case 0x719274:goto L719274;
case 0x719277:c.instructions+=6;goto B719277;
case 0x71927a:c.instructions+=5;goto B71927a;
case 0x71927d:c.instructions+=4;goto B71927d;
case 0x719280:c.instructions+=3;goto B719280;
case 0x719283:c.instructions+=2;goto B719283;
case 0x719285:c.instructions+=1;goto B719285;
case 0x719288:goto L719288;
case 0x71928a:goto L71928a;
case 0x71928c:c.instructions+=1;goto B71928c;
case 0x71928f:goto L71928f;
case 0x719291:goto L719291;
case 0x719292:c.instructions+=4;goto B719292;
case 0x719293:c.instructions+=3;goto B719293;
case 0x719294:c.instructions+=2;goto B719294;
case 0x719295:c.instructions+=1;goto B719295;
case 0x719296:goto L719296;
case 0x71929b:c.instructions+=1;goto B71929b;
case 0x7192a0:goto L7192a0;
case 0x7192a3:c.instructions+=11;goto B7192a3;
case 0x7192a7:c.instructions+=10;goto B7192a7;
case 0x7192aa:c.instructions+=9;goto B7192aa;
case 0x7192ad:c.instructions+=8;goto B7192ad;
case 0x7192b0:c.instructions+=7;goto B7192b0;
case 0x7192b4:c.instructions+=6;goto B7192b4;
case 0x7192b7:c.instructions+=5;goto B7192b7;
case 0x7192bb:c.instructions+=4;goto B7192bb;
case 0x7192be:c.instructions+=3;goto B7192be;
case 0x7192c1:c.instructions+=2;goto B7192c1;
case 0x7192c7:c.instructions+=1;goto B7192c7;
case 0x7192c9:goto L7192c9;
case 0x7192ca:goto L7192ca;
case 0x7192cb:c.instructions+=191;goto B7192cb;
case 0x7192cd:c.instructions+=190;goto B7192cd;
case 0x7192ce:c.instructions+=189;goto B7192ce;
case 0x7192cf:c.instructions+=188;goto B7192cf;
case 0x7192d2:c.instructions+=187;goto B7192d2;
case 0x7192d5:c.instructions+=186;goto B7192d5;
case 0x7192d6:c.instructions+=185;goto B7192d6;
case 0x7192d9:c.instructions+=184;goto B7192d9;
case 0x7192dd:c.instructions+=183;goto B7192dd;
case 0x7192df:c.instructions+=182;goto B7192df;
case 0x7192e2:c.instructions+=181;goto B7192e2;
case 0x7192e5:c.instructions+=180;goto B7192e5;
case 0x7192e6:c.instructions+=179;goto B7192e6;
case 0x7192ed:c.instructions+=178;goto B7192ed;
case 0x7192ee:c.instructions+=177;goto B7192ee;
case 0x7192f1:c.instructions+=176;goto B7192f1;
case 0x7192f3:c.instructions+=175;goto B7192f3;
case 0x7192f4:c.instructions+=174;goto B7192f4;
case 0x7192f8:c.instructions+=173;goto B7192f8;
case 0x7192fc:c.instructions+=172;goto B7192fc;
case 0x719300:c.instructions+=171;goto B719300;
case 0x719304:c.instructions+=170;goto B719304;
case 0x719306:c.instructions+=169;goto B719306;
case 0x719307:c.instructions+=168;goto B719307;
case 0x71930b:c.instructions+=167;goto B71930b;
case 0x71930f:c.instructions+=166;goto B71930f;
case 0x719313:c.instructions+=165;goto B719313;
case 0x719317:c.instructions+=164;goto B719317;
case 0x71931a:c.instructions+=163;goto B71931a;
case 0x71931d:c.instructions+=162;goto B71931d;
case 0x719320:c.instructions+=161;goto B719320;
case 0x719323:c.instructions+=160;goto B719323;
case 0x719325:c.instructions+=159;goto B719325;
case 0x719329:c.instructions+=158;goto B719329;
case 0x71932c:c.instructions+=157;goto B71932c;
case 0x719330:c.instructions+=156;goto B719330;
case 0x719335:c.instructions+=155;goto B719335;
case 0x719338:c.instructions+=154;goto B719338;
case 0x71933c:c.instructions+=153;goto B71933c;
case 0x719340:c.instructions+=152;goto B719340;
case 0x719343:c.instructions+=151;goto B719343;
case 0x719346:c.instructions+=150;goto B719346;
case 0x71934b:c.instructions+=149;goto B71934b;
case 0x71934e:c.instructions+=148;goto B71934e;
case 0x719352:c.instructions+=147;goto B719352;
case 0x719356:c.instructions+=146;goto B719356;
case 0x71935b:c.instructions+=145;goto B71935b;
case 0x71935e:c.instructions+=144;goto B71935e;
case 0x719362:c.instructions+=143;goto B719362;
case 0x719366:c.instructions+=142;goto B719366;
case 0x719369:c.instructions+=141;goto B719369;
case 0x71936c:c.instructions+=140;goto B71936c;
case 0x71936f:c.instructions+=139;goto B71936f;
case 0x719372:c.instructions+=138;goto B719372;
case 0x719375:c.instructions+=137;goto B719375;
case 0x719378:c.instructions+=136;goto B719378;
case 0x71937b:c.instructions+=135;goto B71937b;
case 0x71937e:c.instructions+=134;goto B71937e;
case 0x719381:c.instructions+=133;goto B719381;
case 0x719384:c.instructions+=132;goto B719384;
case 0x719388:c.instructions+=131;goto B719388;
case 0x71938c:c.instructions+=130;goto B71938c;
case 0x719390:c.instructions+=129;goto B719390;
case 0x719393:c.instructions+=128;goto B719393;
case 0x719396:c.instructions+=127;goto B719396;
case 0x71939a:c.instructions+=126;goto B71939a;
case 0x71939f:c.instructions+=125;goto B71939f;
case 0x7193a2:c.instructions+=124;goto B7193a2;
case 0x7193a6:c.instructions+=123;goto B7193a6;
case 0x7193aa:c.instructions+=122;goto B7193aa;
case 0x7193ad:c.instructions+=121;goto B7193ad;
case 0x7193b0:c.instructions+=120;goto B7193b0;
case 0x7193b3:c.instructions+=119;goto B7193b3;
case 0x7193b7:c.instructions+=118;goto B7193b7;
case 0x7193ba:c.instructions+=117;goto B7193ba;
case 0x7193bd:c.instructions+=116;goto B7193bd;
case 0x7193c0:c.instructions+=115;goto B7193c0;
case 0x7193c3:c.instructions+=114;goto B7193c3;
case 0x7193c6:c.instructions+=113;goto B7193c6;
case 0x7193c9:c.instructions+=112;goto B7193c9;
case 0x7193cc:c.instructions+=111;goto B7193cc;
case 0x7193d0:c.instructions+=110;goto B7193d0;
case 0x7193d3:c.instructions+=109;goto B7193d3;
case 0x7193d8:c.instructions+=108;goto B7193d8;
case 0x7193db:c.instructions+=107;goto B7193db;
case 0x7193df:c.instructions+=106;goto B7193df;
case 0x7193e3:c.instructions+=105;goto B7193e3;
case 0x7193e8:c.instructions+=104;goto B7193e8;
case 0x7193eb:c.instructions+=103;goto B7193eb;
case 0x7193ef:c.instructions+=102;goto B7193ef;
case 0x7193f3:c.instructions+=101;goto B7193f3;
case 0x7193f6:c.instructions+=100;goto B7193f6;
case 0x7193f9:c.instructions+=99;goto B7193f9;
case 0x7193fd:c.instructions+=98;goto B7193fd;
case 0x719400:c.instructions+=97;goto B719400;
case 0x719403:c.instructions+=96;goto B719403;
case 0x719406:c.instructions+=95;goto B719406;
case 0x719409:c.instructions+=94;goto B719409;
case 0x71940c:c.instructions+=93;goto B71940c;
case 0x719410:c.instructions+=92;goto B719410;
case 0x719413:c.instructions+=91;goto B719413;
case 0x719417:c.instructions+=90;goto B719417;
case 0x71941b:c.instructions+=89;goto B71941b;
case 0x71941e:c.instructions+=88;goto B71941e;
case 0x719421:c.instructions+=87;goto B719421;
case 0x719425:c.instructions+=86;goto B719425;
case 0x719428:c.instructions+=85;goto B719428;
case 0x71942b:c.instructions+=84;goto B71942b;
case 0x71942e:c.instructions+=83;goto B71942e;
case 0x719432:c.instructions+=82;goto B719432;
case 0x719435:c.instructions+=81;goto B719435;
case 0x719438:c.instructions+=80;goto B719438;
case 0x71943b:c.instructions+=79;goto B71943b;
case 0x71943e:c.instructions+=78;goto B71943e;
case 0x719442:c.instructions+=77;goto B719442;
case 0x719445:c.instructions+=76;goto B719445;
case 0x719448:c.instructions+=75;goto B719448;
case 0x71944b:c.instructions+=74;goto B71944b;
case 0x71944e:c.instructions+=73;goto B71944e;
case 0x719452:c.instructions+=72;goto B719452;
case 0x719455:c.instructions+=71;goto B719455;
case 0x719458:c.instructions+=70;goto B719458;
case 0x71945b:c.instructions+=69;goto B71945b;
case 0x71945e:c.instructions+=68;goto B71945e;
case 0x719461:c.instructions+=67;goto B719461;
case 0x719464:c.instructions+=66;goto B719464;
case 0x719467:c.instructions+=65;goto B719467;
case 0x71946b:c.instructions+=64;goto B71946b;
case 0x71946e:c.instructions+=63;goto B71946e;
case 0x719471:c.instructions+=62;goto B719471;
case 0x719474:c.instructions+=61;goto B719474;
case 0x719478:c.instructions+=60;goto B719478;
case 0x71947c:c.instructions+=59;goto B71947c;
case 0x719480:c.instructions+=58;goto B719480;
case 0x719483:c.instructions+=57;goto B719483;
case 0x719486:c.instructions+=56;goto B719486;
case 0x719489:c.instructions+=55;goto B719489;
case 0x71948c:c.instructions+=54;goto B71948c;
case 0x71948f:c.instructions+=53;goto B71948f;
case 0x719492:c.instructions+=52;goto B719492;
case 0x719495:c.instructions+=51;goto B719495;
case 0x719498:c.instructions+=50;goto B719498;
case 0x71949c:c.instructions+=49;goto B71949c;
case 0x71949f:c.instructions+=48;goto B71949f;
case 0x7194a2:c.instructions+=47;goto B7194a2;
case 0x7194a5:c.instructions+=46;goto B7194a5;
case 0x7194a8:c.instructions+=45;goto B7194a8;
case 0x7194ac:c.instructions+=44;goto B7194ac;
case 0x7194af:c.instructions+=43;goto B7194af;
case 0x7194b2:c.instructions+=42;goto B7194b2;
case 0x7194b5:c.instructions+=41;goto B7194b5;
case 0x7194ba:c.instructions+=40;goto B7194ba;
case 0x7194be:c.instructions+=39;goto B7194be;
case 0x7194c2:c.instructions+=38;goto B7194c2;
case 0x7194c5:c.instructions+=37;goto B7194c5;
case 0x7194c8:c.instructions+=36;goto B7194c8;
case 0x7194cb:c.instructions+=35;goto B7194cb;
case 0x7194d0:c.instructions+=34;goto B7194d0;
case 0x7194d4:c.instructions+=33;goto B7194d4;
case 0x7194d7:c.instructions+=32;goto B7194d7;
case 0x7194da:c.instructions+=31;goto B7194da;
case 0x7194df:c.instructions+=30;goto B7194df;
case 0x7194e2:c.instructions+=29;goto B7194e2;
case 0x7194e6:c.instructions+=28;goto B7194e6;
case 0x7194e9:c.instructions+=27;goto B7194e9;
case 0x7194ec:c.instructions+=26;goto B7194ec;
case 0x7194ef:c.instructions+=25;goto B7194ef;
case 0x7194f3:c.instructions+=24;goto B7194f3;
case 0x7194f6:c.instructions+=23;goto B7194f6;
case 0x7194f9:c.instructions+=22;goto B7194f9;
case 0x7194fc:c.instructions+=21;goto B7194fc;
case 0x7194ff:c.instructions+=20;goto B7194ff;
case 0x719502:c.instructions+=19;goto B719502;
case 0x719505:c.instructions+=18;goto B719505;
case 0x719508:c.instructions+=17;goto B719508;
case 0x71950b:c.instructions+=16;goto B71950b;
case 0x71950e:c.instructions+=15;goto B71950e;
case 0x719512:c.instructions+=14;goto B719512;
case 0x719516:c.instructions+=13;goto B719516;
case 0x719519:c.instructions+=12;goto B719519;
case 0x71951e:c.instructions+=11;goto B71951e;
case 0x719521:c.instructions+=10;goto B719521;
case 0x719526:c.instructions+=9;goto B719526;
case 0x719529:c.instructions+=8;goto B719529;
case 0x71952e:c.instructions+=7;goto B71952e;
case 0x71952f:c.instructions+=6;goto B71952f;
case 0x719530:c.instructions+=5;goto B719530;
case 0x719532:c.instructions+=4;goto B719532;
case 0x719533:c.instructions+=3;goto B719533;
case 0x719535:c.instructions+=2;goto B719535;
case 0x719536:c.instructions+=1;goto B719536;
case 0x719537:goto L719537;
case 0x719538:c.instructions+=114;goto B719538;
case 0x71953a:c.instructions+=113;goto B71953a;
case 0x71953b:c.instructions+=112;goto B71953b;
case 0x71953c:c.instructions+=111;goto B71953c;
case 0x71953f:c.instructions+=110;goto B71953f;
case 0x719542:c.instructions+=109;goto B719542;
case 0x719543:c.instructions+=108;goto B719543;
case 0x719546:c.instructions+=107;goto B719546;
case 0x71954a:c.instructions+=106;goto B71954a;
case 0x71954c:c.instructions+=105;goto B71954c;
case 0x71954f:c.instructions+=104;goto B71954f;
case 0x719552:c.instructions+=103;goto B719552;
case 0x719559:c.instructions+=102;goto B719559;
case 0x71955a:c.instructions+=101;goto B71955a;
case 0x71955d:c.instructions+=100;goto B71955d;
case 0x71955f:c.instructions+=99;goto B71955f;
case 0x719560:c.instructions+=98;goto B719560;
case 0x719564:c.instructions+=97;goto B719564;
case 0x719568:c.instructions+=96;goto B719568;
case 0x71956c:c.instructions+=95;goto B71956c;
case 0x719570:c.instructions+=94;goto B719570;
case 0x719572:c.instructions+=93;goto B719572;
case 0x719573:c.instructions+=92;goto B719573;
case 0x719577:c.instructions+=91;goto B719577;
case 0x71957b:c.instructions+=90;goto B71957b;
case 0x71957f:c.instructions+=89;goto B71957f;
case 0x719583:c.instructions+=88;goto B719583;
case 0x719586:c.instructions+=87;goto B719586;
case 0x719589:c.instructions+=86;goto B719589;
case 0x71958b:c.instructions+=85;goto B71958b;
case 0x71958d:c.instructions+=84;goto B71958d;
case 0x719590:c.instructions+=83;goto B719590;
case 0x719593:c.instructions+=82;goto B719593;
case 0x719596:c.instructions+=81;goto B719596;
case 0x71959a:c.instructions+=80;goto B71959a;
case 0x71959d:c.instructions+=79;goto B71959d;
case 0x7195a1:c.instructions+=78;goto B7195a1;
case 0x7195a4:c.instructions+=77;goto B7195a4;
case 0x7195a8:c.instructions+=76;goto B7195a8;
case 0x7195ab:c.instructions+=75;goto B7195ab;
case 0x7195ae:c.instructions+=74;goto B7195ae;
case 0x7195b1:c.instructions+=73;goto B7195b1;
case 0x7195b4:c.instructions+=72;goto B7195b4;
case 0x7195b7:c.instructions+=71;goto B7195b7;
case 0x7195ba:c.instructions+=70;goto B7195ba;
case 0x7195bd:c.instructions+=69;goto B7195bd;
case 0x7195c0:c.instructions+=68;goto B7195c0;
case 0x7195c3:c.instructions+=67;goto B7195c3;
case 0x7195c6:c.instructions+=66;goto B7195c6;
case 0x7195ca:c.instructions+=65;goto B7195ca;
case 0x7195cd:c.instructions+=64;goto B7195cd;
case 0x7195d1:c.instructions+=63;goto B7195d1;
case 0x7195d4:c.instructions+=62;goto B7195d4;
case 0x7195d8:c.instructions+=61;goto B7195d8;
case 0x7195db:c.instructions+=60;goto B7195db;
case 0x7195de:c.instructions+=59;goto B7195de;
case 0x7195e2:c.instructions+=58;goto B7195e2;
case 0x7195e5:c.instructions+=57;goto B7195e5;
case 0x7195e8:c.instructions+=56;goto B7195e8;
case 0x7195eb:c.instructions+=55;goto B7195eb;
case 0x7195ef:c.instructions+=54;goto B7195ef;
case 0x7195f2:c.instructions+=53;goto B7195f2;
case 0x7195f5:c.instructions+=52;goto B7195f5;
case 0x7195f8:c.instructions+=51;goto B7195f8;
case 0x7195fb:c.instructions+=50;goto B7195fb;
case 0x7195fe:c.instructions+=49;goto B7195fe;
case 0x719601:c.instructions+=48;goto B719601;
case 0x719604:c.instructions+=47;goto B719604;
case 0x719607:c.instructions+=46;goto B719607;
case 0x71960a:c.instructions+=45;goto B71960a;
case 0x71960e:c.instructions+=44;goto B71960e;
case 0x719612:c.instructions+=43;goto B719612;
case 0x719617:c.instructions+=42;goto B719617;
case 0x71961a:c.instructions+=41;goto B71961a;
case 0x71961f:c.instructions+=40;goto B71961f;
case 0x719622:c.instructions+=39;goto B719622;
case 0x719627:c.instructions+=38;goto B719627;
case 0x71962a:c.instructions+=37;goto B71962a;
case 0x71962d:c.instructions+=36;goto B71962d;
case 0x719630:c.instructions+=35;goto B719630;
case 0x719633:c.instructions+=34;goto B719633;
case 0x719636:c.instructions+=33;goto B719636;
case 0x719639:c.instructions+=32;goto B719639;
case 0x71963c:c.instructions+=31;goto B71963c;
case 0x71963f:c.instructions+=30;goto B71963f;
case 0x719642:c.instructions+=29;goto B719642;
case 0x719645:c.instructions+=28;goto B719645;
case 0x719649:c.instructions+=27;goto B719649;
case 0x71964c:c.instructions+=26;goto B71964c;
case 0x719650:c.instructions+=25;goto B719650;
case 0x719653:c.instructions+=24;goto B719653;
case 0x719657:c.instructions+=23;goto B719657;
case 0x71965a:c.instructions+=22;goto B71965a;
case 0x71965d:c.instructions+=21;goto B71965d;
case 0x719661:c.instructions+=20;goto B719661;
case 0x719664:c.instructions+=19;goto B719664;
case 0x719667:c.instructions+=18;goto B719667;
case 0x71966a:c.instructions+=17;goto B71966a;
case 0x71966e:c.instructions+=16;goto B71966e;
case 0x719671:c.instructions+=15;goto B719671;
case 0x719674:c.instructions+=14;goto B719674;
case 0x719677:c.instructions+=13;goto B719677;
case 0x71967a:c.instructions+=12;goto B71967a;
case 0x71967d:c.instructions+=11;goto B71967d;
case 0x719680:c.instructions+=10;goto B719680;
case 0x719683:c.instructions+=9;goto B719683;
case 0x719686:c.instructions+=8;goto B719686;
case 0x71968a:c.instructions+=7;goto B71968a;
case 0x71968f:c.instructions+=6;goto B71968f;
case 0x719690:c.instructions+=5;goto B719690;
case 0x719692:c.instructions+=4;goto B719692;
case 0x719693:c.instructions+=3;goto B719693;
case 0x719695:c.instructions+=2;goto B719695;
case 0x719696:c.instructions+=1;goto B719696;
case 0x719697:goto L719697;
case 0x719698:c.instructions+=266;goto B719698;
case 0x71969a:c.instructions+=265;goto B71969a;
case 0x71969b:c.instructions+=264;goto B71969b;
case 0x71969c:c.instructions+=263;goto B71969c;
case 0x71969f:c.instructions+=262;goto B71969f;
case 0x7196a2:c.instructions+=261;goto B7196a2;
case 0x7196a3:c.instructions+=260;goto B7196a3;
case 0x7196a6:c.instructions+=259;goto B7196a6;
case 0x7196aa:c.instructions+=258;goto B7196aa;
case 0x7196ac:c.instructions+=257;goto B7196ac;
case 0x7196af:c.instructions+=256;goto B7196af;
case 0x7196b2:c.instructions+=255;goto B7196b2;
case 0x7196b3:c.instructions+=254;goto B7196b3;
case 0x7196ba:c.instructions+=253;goto B7196ba;
case 0x7196bb:c.instructions+=252;goto B7196bb;
case 0x7196be:c.instructions+=251;goto B7196be;
case 0x7196c0:c.instructions+=250;goto B7196c0;
case 0x7196c1:c.instructions+=249;goto B7196c1;
case 0x7196c5:c.instructions+=248;goto B7196c5;
case 0x7196c9:c.instructions+=247;goto B7196c9;
case 0x7196cd:c.instructions+=246;goto B7196cd;
case 0x7196d1:c.instructions+=245;goto B7196d1;
case 0x7196d3:c.instructions+=244;goto B7196d3;
case 0x7196d4:c.instructions+=243;goto B7196d4;
case 0x7196d8:c.instructions+=242;goto B7196d8;
case 0x7196dc:c.instructions+=241;goto B7196dc;
case 0x7196e0:c.instructions+=240;goto B7196e0;
case 0x7196e4:c.instructions+=239;goto B7196e4;
case 0x7196e7:c.instructions+=238;goto B7196e7;
case 0x7196ea:c.instructions+=237;goto B7196ea;
case 0x7196ed:c.instructions+=236;goto B7196ed;
case 0x7196f0:c.instructions+=235;goto B7196f0;
case 0x7196f2:c.instructions+=234;goto B7196f2;
case 0x7196f6:c.instructions+=233;goto B7196f6;
case 0x7196f9:c.instructions+=232;goto B7196f9;
case 0x7196fd:c.instructions+=231;goto B7196fd;
case 0x719702:c.instructions+=230;goto B719702;
case 0x719705:c.instructions+=229;goto B719705;
case 0x719709:c.instructions+=228;goto B719709;
case 0x71970d:c.instructions+=227;goto B71970d;
case 0x719710:c.instructions+=226;goto B719710;
case 0x719713:c.instructions+=225;goto B719713;
case 0x719718:c.instructions+=224;goto B719718;
case 0x71971b:c.instructions+=223;goto B71971b;
case 0x71971f:c.instructions+=222;goto B71971f;
case 0x719723:c.instructions+=221;goto B719723;
case 0x719728:c.instructions+=220;goto B719728;
case 0x71972b:c.instructions+=219;goto B71972b;
case 0x71972f:c.instructions+=218;goto B71972f;
case 0x719733:c.instructions+=217;goto B719733;
case 0x719736:c.instructions+=216;goto B719736;
case 0x719739:c.instructions+=215;goto B719739;
case 0x71973c:c.instructions+=214;goto B71973c;
case 0x71973f:c.instructions+=213;goto B71973f;
case 0x719742:c.instructions+=212;goto B719742;
case 0x719745:c.instructions+=211;goto B719745;
case 0x719748:c.instructions+=210;goto B719748;
case 0x71974b:c.instructions+=209;goto B71974b;
case 0x71974e:c.instructions+=208;goto B71974e;
case 0x719751:c.instructions+=207;goto B719751;
case 0x719755:c.instructions+=206;goto B719755;
case 0x719759:c.instructions+=205;goto B719759;
case 0x71975d:c.instructions+=204;goto B71975d;
case 0x719760:c.instructions+=203;goto B719760;
case 0x719763:c.instructions+=202;goto B719763;
case 0x719767:c.instructions+=201;goto B719767;
case 0x71976c:c.instructions+=200;goto B71976c;
case 0x71976f:c.instructions+=199;goto B71976f;
case 0x719773:c.instructions+=198;goto B719773;
case 0x719777:c.instructions+=197;goto B719777;
case 0x71977a:c.instructions+=196;goto B71977a;
case 0x71977d:c.instructions+=195;goto B71977d;
case 0x719780:c.instructions+=194;goto B719780;
case 0x719784:c.instructions+=193;goto B719784;
case 0x719787:c.instructions+=192;goto B719787;
case 0x71978a:c.instructions+=191;goto B71978a;
case 0x71978d:c.instructions+=190;goto B71978d;
case 0x719790:c.instructions+=189;goto B719790;
case 0x719793:c.instructions+=188;goto B719793;
case 0x719796:c.instructions+=187;goto B719796;
case 0x719799:c.instructions+=186;goto B719799;
case 0x71979d:c.instructions+=185;goto B71979d;
case 0x7197a0:c.instructions+=184;goto B7197a0;
case 0x7197a5:c.instructions+=183;goto B7197a5;
case 0x7197a8:c.instructions+=182;goto B7197a8;
case 0x7197ac:c.instructions+=181;goto B7197ac;
case 0x7197b0:c.instructions+=180;goto B7197b0;
case 0x7197b5:c.instructions+=179;goto B7197b5;
case 0x7197b8:c.instructions+=178;goto B7197b8;
case 0x7197bc:c.instructions+=177;goto B7197bc;
case 0x7197c0:c.instructions+=176;goto B7197c0;
case 0x7197c3:c.instructions+=175;goto B7197c3;
case 0x7197c6:c.instructions+=174;goto B7197c6;
case 0x7197ca:c.instructions+=173;goto B7197ca;
case 0x7197cd:c.instructions+=172;goto B7197cd;
case 0x7197d0:c.instructions+=171;goto B7197d0;
case 0x7197d3:c.instructions+=170;goto B7197d3;
case 0x7197d6:c.instructions+=169;goto B7197d6;
case 0x7197d9:c.instructions+=168;goto B7197d9;
case 0x7197dd:c.instructions+=167;goto B7197dd;
case 0x7197e0:c.instructions+=166;goto B7197e0;
case 0x7197e4:c.instructions+=165;goto B7197e4;
case 0x7197e8:c.instructions+=164;goto B7197e8;
case 0x7197eb:c.instructions+=163;goto B7197eb;
case 0x7197ee:c.instructions+=162;goto B7197ee;
case 0x7197f2:c.instructions+=161;goto B7197f2;
case 0x7197f5:c.instructions+=160;goto B7197f5;
case 0x7197f8:c.instructions+=159;goto B7197f8;
case 0x7197fb:c.instructions+=158;goto B7197fb;
case 0x7197ff:c.instructions+=157;goto B7197ff;
case 0x719802:c.instructions+=156;goto B719802;
case 0x719805:c.instructions+=155;goto B719805;
case 0x719808:c.instructions+=154;goto B719808;
case 0x71980b:c.instructions+=153;goto B71980b;
case 0x71980f:c.instructions+=152;goto B71980f;
case 0x719812:c.instructions+=151;goto B719812;
case 0x719815:c.instructions+=150;goto B719815;
case 0x719818:c.instructions+=149;goto B719818;
case 0x71981b:c.instructions+=148;goto B71981b;
case 0x71981f:c.instructions+=147;goto B71981f;
case 0x719822:c.instructions+=146;goto B719822;
case 0x719825:c.instructions+=145;goto B719825;
case 0x719828:c.instructions+=144;goto B719828;
case 0x71982b:c.instructions+=143;goto B71982b;
case 0x71982e:c.instructions+=142;goto B71982e;
case 0x719831:c.instructions+=141;goto B719831;
case 0x719834:c.instructions+=140;goto B719834;
case 0x719838:c.instructions+=139;goto B719838;
case 0x71983b:c.instructions+=138;goto B71983b;
case 0x71983e:c.instructions+=137;goto B71983e;
case 0x719841:c.instructions+=136;goto B719841;
case 0x719845:c.instructions+=135;goto B719845;
case 0x719849:c.instructions+=134;goto B719849;
case 0x71984d:c.instructions+=133;goto B71984d;
case 0x719850:c.instructions+=132;goto B719850;
case 0x719853:c.instructions+=131;goto B719853;
case 0x719856:c.instructions+=130;goto B719856;
case 0x719859:c.instructions+=129;goto B719859;
case 0x71985c:c.instructions+=128;goto B71985c;
case 0x71985f:c.instructions+=127;goto B71985f;
case 0x719862:c.instructions+=126;goto B719862;
case 0x719865:c.instructions+=125;goto B719865;
case 0x719869:c.instructions+=124;goto B719869;
case 0x71986c:c.instructions+=123;goto B71986c;
case 0x71986f:c.instructions+=122;goto B71986f;
case 0x719872:c.instructions+=121;goto B719872;
case 0x719875:c.instructions+=120;goto B719875;
case 0x719879:c.instructions+=119;goto B719879;
case 0x71987c:c.instructions+=118;goto B71987c;
case 0x71987f:c.instructions+=117;goto B71987f;
case 0x719882:c.instructions+=116;goto B719882;
case 0x719887:c.instructions+=115;goto B719887;
case 0x71988b:c.instructions+=114;goto B71988b;
case 0x71988f:c.instructions+=113;goto B71988f;
case 0x719892:c.instructions+=112;goto B719892;
case 0x719895:c.instructions+=111;goto B719895;
case 0x719898:c.instructions+=110;goto B719898;
case 0x71989d:c.instructions+=109;goto B71989d;
case 0x7198a1:c.instructions+=108;goto B7198a1;
case 0x7198a4:c.instructions+=107;goto B7198a4;
case 0x7198a7:c.instructions+=106;goto B7198a7;
case 0x7198ac:c.instructions+=105;goto B7198ac;
case 0x7198af:c.instructions+=104;goto B7198af;
case 0x7198b3:c.instructions+=103;goto B7198b3;
case 0x7198b6:c.instructions+=102;goto B7198b6;
case 0x7198b9:c.instructions+=101;goto B7198b9;
case 0x7198bc:c.instructions+=100;goto B7198bc;
case 0x7198c0:c.instructions+=99;goto B7198c0;
case 0x7198c3:c.instructions+=98;goto B7198c3;
case 0x7198c6:c.instructions+=97;goto B7198c6;
case 0x7198c9:c.instructions+=96;goto B7198c9;
case 0x7198cc:c.instructions+=95;goto B7198cc;
case 0x7198cf:c.instructions+=94;goto B7198cf;
case 0x7198d2:c.instructions+=93;goto B7198d2;
case 0x7198d5:c.instructions+=92;goto B7198d5;
case 0x7198d8:c.instructions+=91;goto B7198d8;
case 0x7198db:c.instructions+=90;goto B7198db;
case 0x7198df:c.instructions+=89;goto B7198df;
case 0x7198e3:c.instructions+=88;goto B7198e3;
case 0x7198e6:c.instructions+=87;goto B7198e6;
case 0x7198eb:c.instructions+=86;goto B7198eb;
case 0x7198ee:c.instructions+=85;goto B7198ee;
case 0x7198f3:c.instructions+=84;goto B7198f3;
case 0x7198f6:c.instructions+=83;goto B7198f6;
case 0x7198fb:c.instructions+=82;goto B7198fb;
case 0x7198fe:c.instructions+=81;goto B7198fe;
case 0x719901:c.instructions+=80;goto B719901;
case 0x719905:c.instructions+=79;goto B719905;
case 0x719908:c.instructions+=78;goto B719908;
case 0x71990c:c.instructions+=77;goto B71990c;
case 0x719911:c.instructions+=76;goto B719911;
case 0x719914:c.instructions+=75;goto B719914;
case 0x719918:c.instructions+=74;goto B719918;
case 0x71991c:c.instructions+=73;goto B71991c;
case 0x71991f:c.instructions+=72;goto B71991f;
case 0x719924:c.instructions+=71;goto B719924;
case 0x719927:c.instructions+=70;goto B719927;
case 0x71992b:c.instructions+=69;goto B71992b;
case 0x71992f:c.instructions+=68;goto B71992f;
case 0x719934:c.instructions+=67;goto B719934;
case 0x719937:c.instructions+=66;goto B719937;
case 0x71993b:c.instructions+=65;goto B71993b;
case 0x71993f:c.instructions+=64;goto B71993f;
case 0x719942:c.instructions+=63;goto B719942;
case 0x719945:c.instructions+=62;goto B719945;
case 0x719948:c.instructions+=61;goto B719948;
case 0x71994b:c.instructions+=60;goto B71994b;
case 0x71994e:c.instructions+=59;goto B71994e;
case 0x719951:c.instructions+=58;goto B719951;
case 0x719954:c.instructions+=57;goto B719954;
case 0x719957:c.instructions+=56;goto B719957;
case 0x71995a:c.instructions+=55;goto B71995a;
case 0x71995e:c.instructions+=54;goto B71995e;
case 0x719962:c.instructions+=53;goto B719962;
case 0x719965:c.instructions+=52;goto B719965;
case 0x719968:c.instructions+=51;goto B719968;
case 0x71996c:c.instructions+=50;goto B71996c;
case 0x71996f:c.instructions+=49;goto B71996f;
case 0x719972:c.instructions+=48;goto B719972;
case 0x719975:c.instructions+=47;goto B719975;
case 0x719978:c.instructions+=46;goto B719978;
case 0x71997b:c.instructions+=45;goto B71997b;
case 0x71997e:c.instructions+=44;goto B71997e;
case 0x719982:c.instructions+=43;goto B719982;
case 0x719985:c.instructions+=42;goto B719985;
case 0x719988:c.instructions+=41;goto B719988;
case 0x71998c:c.instructions+=40;goto B71998c;
case 0x71998f:c.instructions+=39;goto B71998f;
case 0x719993:c.instructions+=38;goto B719993;
case 0x719996:c.instructions+=37;goto B719996;
case 0x719999:c.instructions+=36;goto B719999;
case 0x71999d:c.instructions+=35;goto B71999d;
case 0x7199a0:c.instructions+=34;goto B7199a0;
case 0x7199a3:c.instructions+=33;goto B7199a3;
case 0x7199a6:c.instructions+=32;goto B7199a6;
case 0x7199a9:c.instructions+=31;goto B7199a9;
case 0x7199ad:c.instructions+=30;goto B7199ad;
case 0x7199b0:c.instructions+=29;goto B7199b0;
case 0x7199b3:c.instructions+=28;goto B7199b3;
case 0x7199b6:c.instructions+=27;goto B7199b6;
case 0x7199b9:c.instructions+=26;goto B7199b9;
case 0x7199bc:c.instructions+=25;goto B7199bc;
case 0x7199c0:c.instructions+=24;goto B7199c0;
case 0x7199c3:c.instructions+=23;goto B7199c3;
case 0x7199c7:c.instructions+=22;goto B7199c7;
case 0x7199ca:c.instructions+=21;goto B7199ca;
case 0x7199cd:c.instructions+=20;goto B7199cd;
case 0x7199d0:c.instructions+=19;goto B7199d0;
case 0x7199d3:c.instructions+=18;goto B7199d3;
case 0x7199d6:c.instructions+=17;goto B7199d6;
case 0x7199d9:c.instructions+=16;goto B7199d9;
case 0x7199dc:c.instructions+=15;goto B7199dc;
case 0x7199e0:c.instructions+=14;goto B7199e0;
case 0x7199e4:c.instructions+=13;goto B7199e4;
case 0x7199e7:c.instructions+=12;goto B7199e7;
case 0x7199ec:c.instructions+=11;goto B7199ec;
case 0x7199ef:c.instructions+=10;goto B7199ef;
case 0x7199f4:c.instructions+=9;goto B7199f4;
case 0x7199f7:c.instructions+=8;goto B7199f7;
case 0x7199fc:c.instructions+=7;goto B7199fc;
case 0x7199fd:c.instructions+=6;goto B7199fd;
case 0x7199fe:c.instructions+=5;goto B7199fe;
case 0x719a00:c.instructions+=4;goto B719a00;
case 0x719a01:c.instructions+=3;goto B719a01;
case 0x719a03:c.instructions+=2;goto B719a03;
case 0x719a04:c.instructions+=1;goto B719a04;
case 0x719a05:goto L719a05;
case 0x719a06:c.instructions+=152;goto B719a06;
case 0x719a08:c.instructions+=151;goto B719a08;
case 0x719a09:c.instructions+=150;goto B719a09;
case 0x719a0a:c.instructions+=149;goto B719a0a;
case 0x719a0d:c.instructions+=148;goto B719a0d;
case 0x719a10:c.instructions+=147;goto B719a10;
case 0x719a11:c.instructions+=146;goto B719a11;
case 0x719a14:c.instructions+=145;goto B719a14;
case 0x719a18:c.instructions+=144;goto B719a18;
case 0x719a1a:c.instructions+=143;goto B719a1a;
case 0x719a1d:c.instructions+=142;goto B719a1d;
case 0x719a20:c.instructions+=141;goto B719a20;
case 0x719a27:c.instructions+=140;goto B719a27;
case 0x719a28:c.instructions+=139;goto B719a28;
case 0x719a2b:c.instructions+=138;goto B719a2b;
case 0x719a2d:c.instructions+=137;goto B719a2d;
case 0x719a2e:c.instructions+=136;goto B719a2e;
case 0x719a32:c.instructions+=135;goto B719a32;
case 0x719a36:c.instructions+=134;goto B719a36;
case 0x719a3a:c.instructions+=133;goto B719a3a;
case 0x719a3e:c.instructions+=132;goto B719a3e;
case 0x719a40:c.instructions+=131;goto B719a40;
case 0x719a41:c.instructions+=130;goto B719a41;
case 0x719a45:c.instructions+=129;goto B719a45;
case 0x719a49:c.instructions+=128;goto B719a49;
case 0x719a4d:c.instructions+=127;goto B719a4d;
case 0x719a51:c.instructions+=126;goto B719a51;
case 0x719a54:c.instructions+=125;goto B719a54;
case 0x719a57:c.instructions+=124;goto B719a57;
case 0x719a59:c.instructions+=123;goto B719a59;
case 0x719a5b:c.instructions+=122;goto B719a5b;
case 0x719a5e:c.instructions+=121;goto B719a5e;
case 0x719a61:c.instructions+=120;goto B719a61;
case 0x719a64:c.instructions+=119;goto B719a64;
case 0x719a68:c.instructions+=118;goto B719a68;
case 0x719a6b:c.instructions+=117;goto B719a6b;
case 0x719a6f:c.instructions+=116;goto B719a6f;
case 0x719a72:c.instructions+=115;goto B719a72;
case 0x719a76:c.instructions+=114;goto B719a76;
case 0x719a79:c.instructions+=113;goto B719a79;
case 0x719a7c:c.instructions+=112;goto B719a7c;
case 0x719a7f:c.instructions+=111;goto B719a7f;
case 0x719a82:c.instructions+=110;goto B719a82;
case 0x719a85:c.instructions+=109;goto B719a85;
case 0x719a88:c.instructions+=108;goto B719a88;
case 0x719a8b:c.instructions+=107;goto B719a8b;
case 0x719a8e:c.instructions+=106;goto B719a8e;
case 0x719a91:c.instructions+=105;goto B719a91;
case 0x719a94:c.instructions+=104;goto B719a94;
case 0x719a98:c.instructions+=103;goto B719a98;
case 0x719a9b:c.instructions+=102;goto B719a9b;
case 0x719a9f:c.instructions+=101;goto B719a9f;
case 0x719aa2:c.instructions+=100;goto B719aa2;
case 0x719aa6:c.instructions+=99;goto B719aa6;
case 0x719aa9:c.instructions+=98;goto B719aa9;
case 0x719aac:c.instructions+=97;goto B719aac;
case 0x719ab0:c.instructions+=96;goto B719ab0;
case 0x719ab3:c.instructions+=95;goto B719ab3;
case 0x719ab6:c.instructions+=94;goto B719ab6;
case 0x719ab9:c.instructions+=93;goto B719ab9;
case 0x719abd:c.instructions+=92;goto B719abd;
case 0x719ac0:c.instructions+=91;goto B719ac0;
case 0x719ac3:c.instructions+=90;goto B719ac3;
case 0x719ac6:c.instructions+=89;goto B719ac6;
case 0x719ac9:c.instructions+=88;goto B719ac9;
case 0x719acc:c.instructions+=87;goto B719acc;
case 0x719acf:c.instructions+=86;goto B719acf;
case 0x719ad2:c.instructions+=85;goto B719ad2;
case 0x719ad5:c.instructions+=84;goto B719ad5;
case 0x719ad8:c.instructions+=83;goto B719ad8;
case 0x719adc:c.instructions+=82;goto B719adc;
case 0x719ae0:c.instructions+=81;goto B719ae0;
case 0x719ae5:c.instructions+=80;goto B719ae5;
case 0x719ae8:c.instructions+=79;goto B719ae8;
case 0x719aed:c.instructions+=78;goto B719aed;
case 0x719af0:c.instructions+=77;goto B719af0;
case 0x719af5:c.instructions+=76;goto B719af5;
case 0x719af8:c.instructions+=75;goto B719af8;
case 0x719afb:c.instructions+=74;goto B719afb;
case 0x719afe:c.instructions+=73;goto B719afe;
case 0x719b01:c.instructions+=72;goto B719b01;
case 0x719b04:c.instructions+=71;goto B719b04;
case 0x719b07:c.instructions+=70;goto B719b07;
case 0x719b0a:c.instructions+=69;goto B719b0a;
case 0x719b0d:c.instructions+=68;goto B719b0d;
case 0x719b10:c.instructions+=67;goto B719b10;
case 0x719b13:c.instructions+=66;goto B719b13;
case 0x719b17:c.instructions+=65;goto B719b17;
case 0x719b1a:c.instructions+=64;goto B719b1a;
case 0x719b1e:c.instructions+=63;goto B719b1e;
case 0x719b21:c.instructions+=62;goto B719b21;
case 0x719b25:c.instructions+=61;goto B719b25;
case 0x719b28:c.instructions+=60;goto B719b28;
case 0x719b2b:c.instructions+=59;goto B719b2b;
case 0x719b2f:c.instructions+=58;goto B719b2f;
case 0x719b32:c.instructions+=57;goto B719b32;
case 0x719b35:c.instructions+=56;goto B719b35;
case 0x719b38:c.instructions+=55;goto B719b38;
case 0x719b3c:c.instructions+=54;goto B719b3c;
case 0x719b3f:c.instructions+=53;goto B719b3f;
case 0x719b42:c.instructions+=52;goto B719b42;
case 0x719b45:c.instructions+=51;goto B719b45;
case 0x719b48:c.instructions+=50;goto B719b48;
case 0x719b4b:c.instructions+=49;goto B719b4b;
case 0x719b4e:c.instructions+=48;goto B719b4e;
case 0x719b51:c.instructions+=47;goto B719b51;
case 0x719b54:c.instructions+=46;goto B719b54;
case 0x719b58:c.instructions+=45;goto B719b58;
case 0x719b5d:c.instructions+=44;goto B719b5d;
case 0x719b61:c.instructions+=43;goto B719b61;
case 0x719b66:c.instructions+=42;goto B719b66;
case 0x719b69:c.instructions+=41;goto B719b69;
case 0x719b6e:c.instructions+=40;goto B719b6e;
case 0x719b71:c.instructions+=39;goto B719b71;
case 0x719b76:c.instructions+=38;goto B719b76;
case 0x719b79:c.instructions+=37;goto B719b79;
case 0x719b7c:c.instructions+=36;goto B719b7c;
case 0x719b7f:c.instructions+=35;goto B719b7f;
case 0x719b82:c.instructions+=34;goto B719b82;
case 0x719b85:c.instructions+=33;goto B719b85;
case 0x719b88:c.instructions+=32;goto B719b88;
case 0x719b8b:c.instructions+=31;goto B719b8b;
case 0x719b8e:c.instructions+=30;goto B719b8e;
case 0x719b91:c.instructions+=29;goto B719b91;
case 0x719b94:c.instructions+=28;goto B719b94;
case 0x719b98:c.instructions+=27;goto B719b98;
case 0x719b9b:c.instructions+=26;goto B719b9b;
case 0x719b9f:c.instructions+=25;goto B719b9f;
case 0x719ba2:c.instructions+=24;goto B719ba2;
case 0x719ba6:c.instructions+=23;goto B719ba6;
case 0x719ba9:c.instructions+=22;goto B719ba9;
case 0x719bac:c.instructions+=21;goto B719bac;
case 0x719bb0:c.instructions+=20;goto B719bb0;
case 0x719bb3:c.instructions+=19;goto B719bb3;
case 0x719bb6:c.instructions+=18;goto B719bb6;
case 0x719bb9:c.instructions+=17;goto B719bb9;
case 0x719bbd:c.instructions+=16;goto B719bbd;
case 0x719bc0:c.instructions+=15;goto B719bc0;
case 0x719bc3:c.instructions+=14;goto B719bc3;
case 0x719bc6:c.instructions+=13;goto B719bc6;
case 0x719bc9:c.instructions+=12;goto B719bc9;
case 0x719bcc:c.instructions+=11;goto B719bcc;
case 0x719bcf:c.instructions+=10;goto B719bcf;
case 0x719bd2:c.instructions+=9;goto B719bd2;
case 0x719bd5:c.instructions+=8;goto B719bd5;
case 0x719bd9:c.instructions+=7;goto B719bd9;
case 0x719bde:c.instructions+=6;goto B719bde;
case 0x719bdf:c.instructions+=5;goto B719bdf;
case 0x719be1:c.instructions+=4;goto B719be1;
case 0x719be2:c.instructions+=3;goto B719be2;
case 0x719be4:c.instructions+=2;goto B719be4;
case 0x719be5:c.instructions+=1;goto B719be5;
case 0x719be6:goto L719be6;
case 0x719be7:c.instructions+=13;goto B719be7;
case 0x719be9:c.instructions+=12;goto B719be9;
case 0x719bea:c.instructions+=11;goto B719bea;
case 0x719beb:c.instructions+=10;goto B719beb;
case 0x719bec:c.instructions+=9;goto B719bec;
case 0x719bed:c.instructions+=8;goto B719bed;
case 0x719bf0:c.instructions+=7;goto B719bf0;
case 0x719bf3:c.instructions+=6;goto B719bf3;
case 0x719bf6:c.instructions+=5;goto B719bf6;
case 0x719bfa:c.instructions+=4;goto B719bfa;
case 0x719c01:c.instructions+=3;goto B719c01;
case 0x719c08:c.instructions+=2;goto B719c08;
case 0x719c0f:c.instructions+=1;goto B719c0f;
case 0x719c12:goto L719c12;
case 0x719c14:c.instructions+=25;goto B719c14;
case 0x719c16:c.instructions+=24;goto B719c16;
case 0x719c1c:c.instructions+=23;goto B719c1c;
case 0x719c1e:c.instructions+=22;goto B719c1e;
case 0x719c23:c.instructions+=21;goto B719c23;
case 0x719c25:c.instructions+=20;goto B719c25;
case 0x719c28:c.instructions+=19;goto B719c28;
case 0x719c2a:c.instructions+=18;goto B719c2a;
case 0x719c2d:c.instructions+=17;goto B719c2d;
case 0x719c30:c.instructions+=16;goto B719c30;
case 0x719c32:c.instructions+=15;goto B719c32;
case 0x719c35:c.instructions+=14;goto B719c35;
case 0x719c38:c.instructions+=13;goto B719c38;
case 0x719c3b:c.instructions+=12;goto B719c3b;
case 0x719c3e:c.instructions+=11;goto B719c3e;
case 0x719c41:c.instructions+=10;goto B719c41;
case 0x719c43:c.instructions+=9;goto B719c43;
case 0x719c46:c.instructions+=8;goto B719c46;
case 0x719c49:c.instructions+=7;goto B719c49;
case 0x719c4c:c.instructions+=6;goto B719c4c;
case 0x719c4f:c.instructions+=5;goto B719c4f;
case 0x719c53:c.instructions+=4;goto B719c53;
case 0x719c55:c.instructions+=3;goto B719c55;
case 0x719c58:c.instructions+=2;goto B719c58;
case 0x719c5c:c.instructions+=1;goto B719c5c;
case 0x719c5e:goto L719c5e;
case 0x719c60:c.instructions+=30;goto B719c60;
case 0x719c62:c.instructions+=29;goto B719c62;
case 0x719c68:c.instructions+=28;goto B719c68;
case 0x719c6a:c.instructions+=27;goto B719c6a;
case 0x719c6f:c.instructions+=26;goto B719c6f;
case 0x719c71:c.instructions+=25;goto B719c71;
case 0x719c74:c.instructions+=24;goto B719c74;
case 0x719c76:c.instructions+=23;goto B719c76;
case 0x719c79:c.instructions+=22;goto B719c79;
case 0x719c7e:c.instructions+=21;goto B719c7e;
case 0x719c80:c.instructions+=20;goto B719c80;
case 0x719c83:c.instructions+=19;goto B719c83;
case 0x719c86:c.instructions+=18;goto B719c86;
case 0x719c88:c.instructions+=17;goto B719c88;
case 0x719c8b:c.instructions+=16;goto B719c8b;
case 0x719c8e:c.instructions+=15;goto B719c8e;
case 0x719c91:c.instructions+=14;goto B719c91;
case 0x719c94:c.instructions+=13;goto B719c94;
case 0x719c97:c.instructions+=12;goto B719c97;
case 0x719c99:c.instructions+=11;goto B719c99;
case 0x719c9c:c.instructions+=10;goto B719c9c;
case 0x719c9f:c.instructions+=9;goto B719c9f;
case 0x719ca3:c.instructions+=8;goto B719ca3;
case 0x719ca6:c.instructions+=7;goto B719ca6;
case 0x719caa:c.instructions+=6;goto B719caa;
case 0x719cab:c.instructions+=5;goto B719cab;
case 0x719cac:c.instructions+=4;goto B719cac;
case 0x719cad:c.instructions+=3;goto B719cad;
case 0x719cae:c.instructions+=2;goto B719cae;
case 0x719caf:c.instructions+=1;goto B719caf;
case 0x719cb0:goto L719cb0;
case 0x719cb1:c.instructions+=11;goto B719cb1;
case 0x719cb3:c.instructions+=10;goto B719cb3;
case 0x719cb4:c.instructions+=9;goto B719cb4;
case 0x719cb5:c.instructions+=8;goto B719cb5;
case 0x719cb8:c.instructions+=7;goto B719cb8;
case 0x719cbb:c.instructions+=6;goto B719cbb;
case 0x719cbe:c.instructions+=5;goto B719cbe;
case 0x719cc2:c.instructions+=4;goto B719cc2;
case 0x719cc9:c.instructions+=3;goto B719cc9;
case 0x719cd0:c.instructions+=2;goto B719cd0;
case 0x719cd7:c.instructions+=1;goto B719cd7;
case 0x719cda:goto L719cda;
case 0x719cdd:c.instructions+=27;goto B719cdd;
case 0x719ce1:c.instructions+=26;goto B719ce1;
case 0x719ce4:c.instructions+=25;goto B719ce4;
case 0x719ce7:c.instructions+=24;goto B719ce7;
case 0x719cea:c.instructions+=23;goto B719cea;
case 0x719ced:c.instructions+=22;goto B719ced;
case 0x719cf0:c.instructions+=21;goto B719cf0;
case 0x719cf3:c.instructions+=20;goto B719cf3;
case 0x719cf6:c.instructions+=19;goto B719cf6;
case 0x719cf9:c.instructions+=18;goto B719cf9;
case 0x719cfd:c.instructions+=17;goto B719cfd;
case 0x719d00:c.instructions+=16;goto B719d00;
case 0x719d03:c.instructions+=15;goto B719d03;
case 0x719d06:c.instructions+=14;goto B719d06;
case 0x719d09:c.instructions+=13;goto B719d09;
case 0x719d0c:c.instructions+=12;goto B719d0c;
case 0x719d10:c.instructions+=11;goto B719d10;
case 0x719d13:c.instructions+=10;goto B719d13;
case 0x719d17:c.instructions+=9;goto B719d17;
case 0x719d1a:c.instructions+=8;goto B719d1a;
case 0x719d1d:c.instructions+=7;goto B719d1d;
case 0x719d20:c.instructions+=6;goto B719d20;
case 0x719d23:c.instructions+=5;goto B719d23;
case 0x719d25:c.instructions+=4;goto B719d25;
case 0x719d29:c.instructions+=3;goto B719d29;
case 0x719d2c:c.instructions+=2;goto B719d2c;
case 0x719d30:c.instructions+=1;goto B719d30;
case 0x719d32:goto L719d32;
case 0x719d35:c.instructions+=32;goto B719d35;
case 0x719d38:c.instructions+=31;goto B719d38;
case 0x719d3b:c.instructions+=30;goto B719d3b;
case 0x719d3f:c.instructions+=29;goto B719d3f;
case 0x719d46:c.instructions+=28;goto B719d46;
case 0x719d49:c.instructions+=27;goto B719d49;
case 0x719d4d:c.instructions+=26;goto B719d4d;
case 0x719d50:c.instructions+=25;goto B719d50;
case 0x719d53:c.instructions+=24;goto B719d53;
case 0x719d56:c.instructions+=23;goto B719d56;
case 0x719d59:c.instructions+=22;goto B719d59;
case 0x719d5c:c.instructions+=21;goto B719d5c;
case 0x719d5f:c.instructions+=20;goto B719d5f;
case 0x719d62:c.instructions+=19;goto B719d62;
case 0x719d65:c.instructions+=18;goto B719d65;
case 0x719d69:c.instructions+=17;goto B719d69;
case 0x719d6c:c.instructions+=16;goto B719d6c;
case 0x719d6f:c.instructions+=15;goto B719d6f;
case 0x719d72:c.instructions+=14;goto B719d72;
case 0x719d75:c.instructions+=13;goto B719d75;
case 0x719d78:c.instructions+=12;goto B719d78;
case 0x719d7c:c.instructions+=11;goto B719d7c;
case 0x719d7f:c.instructions+=10;goto B719d7f;
case 0x719d83:c.instructions+=9;goto B719d83;
case 0x719d86:c.instructions+=8;goto B719d86;
case 0x719d89:c.instructions+=7;goto B719d89;
case 0x719d8d:c.instructions+=6;goto B719d8d;
case 0x719d90:c.instructions+=5;goto B719d90;
case 0x719d94:c.instructions+=4;goto B719d94;
case 0x719d95:c.instructions+=3;goto B719d95;
case 0x719d96:c.instructions+=2;goto B719d96;
case 0x719d97:c.instructions+=1;goto B719d97;
case 0x719d98:goto L719d98;
case 0x719d99:c.instructions+=9;goto B719d99;
case 0x719d9b:c.instructions+=8;goto B719d9b;
case 0x719d9c:c.instructions+=7;goto B719d9c;
case 0x719d9d:c.instructions+=6;goto B719d9d;
case 0x719da0:c.instructions+=5;goto B719da0;
case 0x719da3:c.instructions+=4;goto B719da3;
case 0x719da6:c.instructions+=3;goto B719da6;
case 0x719da8:c.instructions+=2;goto B719da8;
case 0x719dab:c.instructions+=1;goto B719dab;
case 0x719dae:goto L719dae;
case 0x719db1:c.instructions+=84;goto B719db1;
case 0x719db5:c.instructions+=83;goto B719db5;
case 0x719db8:c.instructions+=82;goto B719db8;
case 0x719dbb:c.instructions+=81;goto B719dbb;
case 0x719dc2:c.instructions+=80;goto B719dc2;
case 0x719dc5:c.instructions+=79;goto B719dc5;
case 0x719dc8:c.instructions+=78;goto B719dc8;
case 0x719dcb:c.instructions+=77;goto B719dcb;
case 0x719dce:c.instructions+=76;goto B719dce;
case 0x719dd1:c.instructions+=75;goto B719dd1;
case 0x719dd8:c.instructions+=74;goto B719dd8;
case 0x719ddb:c.instructions+=73;goto B719ddb;
case 0x719dde:c.instructions+=72;goto B719dde;
case 0x719de1:c.instructions+=71;goto B719de1;
case 0x719de4:c.instructions+=70;goto B719de4;
case 0x719de7:c.instructions+=69;goto B719de7;
case 0x719dea:c.instructions+=68;goto B719dea;
case 0x719ded:c.instructions+=67;goto B719ded;
case 0x719df4:c.instructions+=66;goto B719df4;
case 0x719dfb:c.instructions+=65;goto B719dfb;
case 0x719dff:c.instructions+=64;goto B719dff;
case 0x719e03:c.instructions+=63;goto B719e03;
case 0x719e06:c.instructions+=62;goto B719e06;
case 0x719e0a:c.instructions+=61;goto B719e0a;
case 0x719e0e:c.instructions+=60;goto B719e0e;
case 0x719e15:c.instructions+=59;goto B719e15;
case 0x719e18:c.instructions+=58;goto B719e18;
case 0x719e1b:c.instructions+=57;goto B719e1b;
case 0x719e22:c.instructions+=56;goto B719e22;
case 0x719e25:c.instructions+=55;goto B719e25;
case 0x719e28:c.instructions+=54;goto B719e28;
case 0x719e2b:c.instructions+=53;goto B719e2b;
case 0x719e2e:c.instructions+=52;goto B719e2e;
case 0x719e31:c.instructions+=51;goto B719e31;
case 0x719e34:c.instructions+=50;goto B719e34;
case 0x719e37:c.instructions+=49;goto B719e37;
case 0x719e3a:c.instructions+=48;goto B719e3a;
case 0x719e3d:c.instructions+=47;goto B719e3d;
case 0x719e44:c.instructions+=46;goto B719e44;
case 0x719e4b:c.instructions+=45;goto B719e4b;
case 0x719e4f:c.instructions+=44;goto B719e4f;
case 0x719e53:c.instructions+=43;goto B719e53;
case 0x719e56:c.instructions+=42;goto B719e56;
case 0x719e5a:c.instructions+=41;goto B719e5a;
case 0x719e5d:c.instructions+=40;goto B719e5d;
case 0x719e60:c.instructions+=39;goto B719e60;
case 0x719e67:c.instructions+=38;goto B719e67;
case 0x719e6a:c.instructions+=37;goto B719e6a;
case 0x719e6d:c.instructions+=36;goto B719e6d;
case 0x719e70:c.instructions+=35;goto B719e70;
case 0x719e73:c.instructions+=34;goto B719e73;
case 0x719e76:c.instructions+=33;goto B719e76;
case 0x719e79:c.instructions+=32;goto B719e79;
case 0x719e7c:c.instructions+=31;goto B719e7c;
case 0x719e7f:c.instructions+=30;goto B719e7f;
case 0x719e82:c.instructions+=29;goto B719e82;
case 0x719e85:c.instructions+=28;goto B719e85;
case 0x719e8c:c.instructions+=27;goto B719e8c;
case 0x719e93:c.instructions+=26;goto B719e93;
case 0x719e97:c.instructions+=25;goto B719e97;
case 0x719e9b:c.instructions+=24;goto B719e9b;
case 0x719e9e:c.instructions+=23;goto B719e9e;
case 0x719ea1:c.instructions+=22;goto B719ea1;
case 0x719ea5:c.instructions+=21;goto B719ea5;
case 0x719eac:c.instructions+=20;goto B719eac;
case 0x719eaf:c.instructions+=19;goto B719eaf;
case 0x719eb6:c.instructions+=18;goto B719eb6;
case 0x719eb9:c.instructions+=17;goto B719eb9;
case 0x719ebc:c.instructions+=16;goto B719ebc;
case 0x719ebf:c.instructions+=15;goto B719ebf;
case 0x719ec2:c.instructions+=14;goto B719ec2;
case 0x719ec5:c.instructions+=13;goto B719ec5;
case 0x719ec8:c.instructions+=12;goto B719ec8;
case 0x719ecb:c.instructions+=11;goto B719ecb;
case 0x719ece:c.instructions+=10;goto B719ece;
case 0x719ed5:c.instructions+=9;goto B719ed5;
case 0x719edc:c.instructions+=8;goto B719edc;
case 0x719ee0:c.instructions+=7;goto B719ee0;
case 0x719ee4:c.instructions+=6;goto B719ee4;
case 0x719ee7:c.instructions+=5;goto B719ee7;
case 0x719eeb:c.instructions+=4;goto B719eeb;
case 0x719eee:c.instructions+=3;goto B719eee;
case 0x719ef1:c.instructions+=2;goto B719ef1;
case 0x719ef4:c.instructions+=1;goto B719ef4;
case 0x719efa:goto L719efa;
case 0x719efb:c.instructions+=3;goto B719efb;
case 0x719efc:c.instructions+=2;goto B719efc;
case 0x719efd:c.instructions+=1;goto B719efd;
case 0x719efe:goto L719efe;
case 0x719eff:c.instructions+=70;goto B719eff;
case 0x719f01:c.instructions+=69;goto B719f01;
case 0x719f02:c.instructions+=68;goto B719f02;
case 0x719f03:c.instructions+=67;goto B719f03;
case 0x719f06:c.instructions+=66;goto B719f06;
case 0x719f09:c.instructions+=65;goto B719f09;
case 0x719f0c:c.instructions+=64;goto B719f0c;
case 0x719f0e:c.instructions+=63;goto B719f0e;
case 0x719f11:c.instructions+=62;goto B719f11;
case 0x719f14:c.instructions+=61;goto B719f14;
case 0x719f17:c.instructions+=60;goto B719f17;
case 0x719f1b:c.instructions+=59;goto B719f1b;
case 0x719f1e:c.instructions+=58;goto B719f1e;
case 0x719f21:c.instructions+=57;goto B719f21;
case 0x719f28:c.instructions+=56;goto B719f28;
case 0x719f2b:c.instructions+=55;goto B719f2b;
case 0x719f2e:c.instructions+=54;goto B719f2e;
case 0x719f31:c.instructions+=53;goto B719f31;
case 0x719f34:c.instructions+=52;goto B719f34;
case 0x719f37:c.instructions+=51;goto B719f37;
case 0x719f3e:c.instructions+=50;goto B719f3e;
case 0x719f41:c.instructions+=49;goto B719f41;
case 0x719f44:c.instructions+=48;goto B719f44;
case 0x719f47:c.instructions+=47;goto B719f47;
case 0x719f4a:c.instructions+=46;goto B719f4a;
case 0x719f4d:c.instructions+=45;goto B719f4d;
case 0x719f50:c.instructions+=44;goto B719f50;
case 0x719f53:c.instructions+=43;goto B719f53;
case 0x719f5a:c.instructions+=42;goto B719f5a;
case 0x719f61:c.instructions+=41;goto B719f61;
case 0x719f65:c.instructions+=40;goto B719f65;
case 0x719f69:c.instructions+=39;goto B719f69;
case 0x719f6c:c.instructions+=38;goto B719f6c;
case 0x719f70:c.instructions+=37;goto B719f70;
case 0x719f74:c.instructions+=36;goto B719f74;
case 0x719f7b:c.instructions+=35;goto B719f7b;
case 0x719f7e:c.instructions+=34;goto B719f7e;
case 0x719f81:c.instructions+=33;goto B719f81;
case 0x719f88:c.instructions+=32;goto B719f88;
case 0x719f8b:c.instructions+=31;goto B719f8b;
case 0x719f8e:c.instructions+=30;goto B719f8e;
case 0x719f91:c.instructions+=29;goto B719f91;
case 0x719f94:c.instructions+=28;goto B719f94;
case 0x719f97:c.instructions+=27;goto B719f97;
case 0x719f9a:c.instructions+=26;goto B719f9a;
case 0x719f9d:c.instructions+=25;goto B719f9d;
case 0x719fa0:c.instructions+=24;goto B719fa0;
case 0x719fa3:c.instructions+=23;goto B719fa3;
case 0x719faa:c.instructions+=22;goto B719faa;
case 0x719fb1:c.instructions+=21;goto B719fb1;
case 0x719fb5:c.instructions+=20;goto B719fb5;
case 0x719fb9:c.instructions+=19;goto B719fb9;
case 0x719fbc:c.instructions+=18;goto B719fbc;
case 0x719fc0:c.instructions+=17;goto B719fc0;
case 0x719fc3:c.instructions+=16;goto B719fc3;
case 0x719fc7:c.instructions+=15;goto B719fc7;
case 0x719fca:c.instructions+=14;goto B719fca;
case 0x719fd1:c.instructions+=13;goto B719fd1;
case 0x719fd4:c.instructions+=12;goto B719fd4;
case 0x719fd7:c.instructions+=11;goto B719fd7;
case 0x719fda:c.instructions+=10;goto B719fda;
case 0x719fdd:c.instructions+=9;goto B719fdd;
case 0x719fe0:c.instructions+=8;goto B719fe0;
case 0x719fe3:c.instructions+=7;goto B719fe3;
case 0x719fe6:c.instructions+=6;goto B719fe6;
case 0x719fe9:c.instructions+=5;goto B719fe9;
case 0x719fec:c.instructions+=4;goto B719fec;
case 0x719fef:c.instructions+=3;goto B719fef;
case 0x719ff6:c.instructions+=2;goto B719ff6;
case 0x719ffd:c.instructions+=1;goto B719ffd;
default:missing_instruction(c.pc);}
B719002:L719002:{c.instructions+=20;NFSU2_TR(0x719002);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B719003:{NFSU2_TR(0x719003);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B719006:{NFSU2_TR(0x719006);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71900a:{NFSU2_TR(0x71900a);
__builtin_memmove((R+20),(R+16),4);
}
B71900c:{NFSU2_TR(0x71900c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x988ull))));
}
B719012:{NFSU2_TR(0x719012);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B719013:{NFSU2_TR(0x719013);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B719014:{NFSU2_TR(0x719014);
w2(R+4260,u16(0xffffull));
}
B719016:{NFSU2_TR(0x719016);
u8 U[4];
w4(U+0,u32(0x3full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B719018:{NFSU2_TR(0x719018);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B719019:{NFSU2_TR(0x719019);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B71901c:{NFSU2_TR(0x71901c);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B71901e:{NFSU2_TR(0x71901e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B719021:{NFSU2_TR(0x719021);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B719024:{NFSU2_TR(0x719024);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B719027:{NFSU2_TR(0x719027);
{u32 ea_=u32(u32(8144400u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B71902d:{NFSU2_TR(0x71902d);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdc,0x00"::"a"(ea_):"memory");}
}
B719033:{NFSU2_TR(0x719033);
{u32 ea_=u32(r4(R+20)+u32(4294967256u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B719036:{NFSU2_TR(0x719036);
{u32 ea_=u32(u32(8144392u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B71903c:{NFSU2_TR(0x71903c);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B71903f:L71903f:{c.instructions+=8;NFSU2_TR(0x71903f);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B719042:{NFSU2_TR(0x719042);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B719045:{NFSU2_TR(0x719045);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B719049:{NFSU2_TR(0x719049);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B71904b:{NFSU2_TR(0x71904b);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B71904f:{NFSU2_TR(0x71904f);
{u32 ea_=u32(r4(R+20)+u32(4294967256u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B719052:{NFSU2_TR(0x719052);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B719055:{NFSU2_TR(0x719055);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x71905aull));
TAIL_STATIC(0x7033a5u,703);
}
B71905a:L71905a:{c.instructions+=4;NFSU2_TR(0x71905a);
{u32 ea_=u32(u32(8144384u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B719060:{NFSU2_TR(0x719060);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B719063:{NFSU2_TR(0x719063);
{u32 ea_=u32(u32(7890144u));__asm__ volatile(".byte 0xdc,0x00"::"a"(ea_):"memory");}
}
B719069:{NFSU2_TR(0x719069);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x71906eull));
TAIL_STATIC(0x75bed4u,75b);
}
B71906e:L71906e:{c.instructions+=4;NFSU2_TR(0x71906e);
__builtin_memmove((R+24),(R+0),4);
}
B719070:{NFSU2_TR(0x719070);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B719072:{NFSU2_TR(0x719072);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B719075:{NFSU2_TR(0x719075);
if(r1(R+518)){{goto L7190b7;}}
}
B719077:L719077:{c.instructions+=3;NFSU2_TR(0x719077);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B719079:{NFSU2_TR(0x719079);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B71907b:{NFSU2_TR(0x71907b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7190b2;}}
}
B71907d:L71907d:{c.instructions+=3;NFSU2_TR(0x71907d);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B719080:{NFSU2_TR(0x719080);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffe80ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B719087:{NFSU2_TR(0x719087);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x71908cull));
TAIL_STATIC(0x75bed4u,75b);
}
B71908c:L71908c:{c.instructions+=10;NFSU2_TR(0x71908c);
__builtin_memmove((R+4),(R+24),4);
}
B71908e:{NFSU2_TR(0x71908e);
__builtin_memmove((R+8),(R+4),4);
}
B719090:{NFSU2_TR(0x719090);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B719093:{NFSU2_TR(0x719093);
__builtin_memmove((R+8),(R+0),1);
}
B719095:{NFSU2_TR(0x719095);
__builtin_memmove((R+9),(R+8),1);
}
B719097:{NFSU2_TR(0x719097);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B71909a:{NFSU2_TR(0x71909a);
__builtin_memmove((R+0),(R+8),4);
}
B71909c:{NFSU2_TR(0x71909c);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B71909f:{NFSU2_TR(0x71909f);
__builtin_memmove((R+0),(R+8),2);
}
B7190a2:{NFSU2_TR(0x7190a2);
__builtin_memmove((R+8),(R+24),4);
}
B7190a4:L7190a4:{c.instructions+=1;NFSU2_TR(0x7190a4);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L7190a6;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7190a4u);}goto L7190a4;}
}
B7190a6:L7190a6:{c.instructions+=2;NFSU2_TR(0x7190a6);
__builtin_memmove((R+4),(R+8),4);
}
B7190a8:{NFSU2_TR(0x7190a8);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B7190ab:L7190ab:{c.instructions+=1;NFSU2_TR(0x7190ab);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L7190ad;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7190abu);}goto L7190ab;}
}
B7190ad:L7190ad:{c.instructions+=2;NFSU2_TR(0x7190ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7190b0:{NFSU2_TR(0x7190b0);
__builtin_memmove((R+0),(R+24),4);
}
B7190b2:L7190b2:{c.instructions+=2;NFSU2_TR(0x7190b2);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B7190b4:{NFSU2_TR(0x7190b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7190b7:L7190b7:{c.instructions+=7;NFSU2_TR(0x7190b7);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B7190ba:{NFSU2_TR(0x7190ba);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdc,0x00"::"a"(ea_):"memory");}
}
B7190c0:{NFSU2_TR(0x7190c0);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xdd,0x10"::"a"(ea_):"memory");}
}
B7190c3:{NFSU2_TR(0x7190c3);
{u32 ea_=u32(u32(8144376u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B7190c9:{NFSU2_TR(0x7190c9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B7190cb:{NFSU2_TR(0x7190cb);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B7190ce:{NFSU2_TR(0x7190ce);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71903fu);}goto L71903f;}}
}
B7190d4:L7190d4:{c.instructions+=3;NFSU2_TR(0x7190d4);
w4(R+4,u32(0x100ull));
}
B7190d9:{NFSU2_TR(0x7190d9);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B7190db:{NFSU2_TR(0x7190db);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L7190f8;}}
}
B7190dd:L7190dd:{c.instructions+=6;NFSU2_TR(0x7190dd);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+28))));
}
B7190df:{NFSU2_TR(0x7190df);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffe80ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B7190e6:{NFSU2_TR(0x7190e6);
__builtin_memmove((R+28),(R+8),4);
}
B7190e8:{NFSU2_TR(0x7190e8);
__builtin_memmove((R+8),(R+4),4);
}
B7190ea:{NFSU2_TR(0x7190ea);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B7190ed:{NFSU2_TR(0x7190ed);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7190ef:L7190ef:{c.instructions+=1;NFSU2_TR(0x7190ef);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L7190f1;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7190efu);}goto L7190ef;}
}
B7190f1:L7190f1:{c.instructions+=2;NFSU2_TR(0x7190f1);
__builtin_memmove((R+4),(R+8),4);
}
B7190f3:{NFSU2_TR(0x7190f3);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B7190f6:L7190f6:{c.instructions+=1;NFSU2_TR(0x7190f6);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L7190f8;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7190f6u);}goto L7190f6;}
}
B7190f8:L7190f8:{c.instructions+=1;NFSU2_TR(0x7190f8);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7190fa:L7190fa:{c.instructions+=1;NFSU2_TR(0x7190fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7190ffull));
TAIL_STATIC(0x760d7du,760);
}
B7190ff:L7190ff:{c.instructions+=6;NFSU2_TR(0x7190ff);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B719104:{NFSU2_TR(0x719104);
u8 U[13];
w4(U+0,u32(u32(u32(0xfffffe80ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+0),(U+12),1);
}
B71910b:{NFSU2_TR(0x71910b);
u8 U[13];
w4(U+0,u32(u32(u32(0xfffff680ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),1);
s1(u32(r4(U+8)),r1(U+12));
}
B719112:{NFSU2_TR(0x719112);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B719113:{NFSU2_TR(0x719113);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x800ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x800ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x800ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B719119:{NFSU2_TR(0x719119);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7190fau);}goto L7190fa;}}
}
B71911b:L71911b:{c.instructions+=39;NFSU2_TR(0x71911b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B719121:{NFSU2_TR(0x719121);
__builtin_memmove((R+4),(R+0),1);
}
B719123:{NFSU2_TR(0x719123);
w1(R+8,u8(0xfeull));
}
B719125:{NFSU2_TR(0x719125);
u8 U[4];
w2(U+0,u16(s16(s8(r1(R+0)))));
w2(U+2,u16(s16(s8(r1(R+8)))));
w2(R+0,u16(u32(r2(U+0))*u32(r2(U+2))));
}
B719127:{NFSU2_TR(0x719127);
__builtin_memmove((R+8),(R+0),1);
}
B719129:{NFSU2_TR(0x719129);
__builtin_memmove((R+9),(R+8),1);
}
B71912b:{NFSU2_TR(0x71912b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B71912e:{NFSU2_TR(0x71912e);
w1(R+4,u8(0-u32(r1(R+4))));
}
B719130:{NFSU2_TR(0x719130);
__builtin_memmove((R+5),(R+4),1);
}
B719132:{NFSU2_TR(0x719132);
__builtin_memmove((R+0),(R+8),4);
}
B719134:{NFSU2_TR(0x719134);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B719137:{NFSU2_TR(0x719137);
__builtin_memmove((R+0),(R+8),2);
}
B71913a:{NFSU2_TR(0x71913a);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B71913b:{NFSU2_TR(0x71913b);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B71913c:{NFSU2_TR(0x71913c);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B71913d:{NFSU2_TR(0x71913d);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B71913e:{NFSU2_TR(0x71913e);
__builtin_memmove((R+0),(R+4),1);
}
B719140:{NFSU2_TR(0x719140);
__builtin_memmove((R+8),(R+0),1);
}
B719142:{NFSU2_TR(0x719142);
__builtin_memmove((R+9),(R+8),1);
}
B719144:{NFSU2_TR(0x719144);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B719147:{NFSU2_TR(0x719147);
__builtin_memmove((R+0),(R+8),4);
}
B719149:{NFSU2_TR(0x719149);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B71914c:{NFSU2_TR(0x71914c);
__builtin_memmove((R+0),(R+8),2);
}
B71914f:{NFSU2_TR(0x71914f);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B719150:{NFSU2_TR(0x719150);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B719151:{NFSU2_TR(0x719151);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B719152:{NFSU2_TR(0x719152);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B719153:{NFSU2_TR(0x719153);
__builtin_memmove((R+0),(R+4),1);
}
B719155:{NFSU2_TR(0x719155);
__builtin_memmove((R+0),(R+4),4);
}
B719157:{NFSU2_TR(0x719157);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B71915a:{NFSU2_TR(0x71915a);
__builtin_memmove((R+0),(R+4),2);
}
B71915d:{NFSU2_TR(0x71915d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B719160:{NFSU2_TR(0x719160);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B719161:{NFSU2_TR(0x719161);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B719162:{NFSU2_TR(0x719162);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B719163:{NFSU2_TR(0x719163);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B719164:{NFSU2_TR(0x719164);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B719167:{NFSU2_TR(0x719167);
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
B719169:{NFSU2_TR(0x719169);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L7191cd;}}
}
B71916b:L71916b:{c.instructions+=3;NFSU2_TR(0x71916b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B71916e:{NFSU2_TR(0x71916e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B719171:{NFSU2_TR(0x719171);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B719174:L719174:{c.instructions+=3;NFSU2_TR(0x719174);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B719177:{NFSU2_TR(0x719177);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71917a:{NFSU2_TR(0x71917a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x71917full));
TAIL_STATIC(0x760d7du,760);
}
B71917f:L71917f:{c.instructions+=7;NFSU2_TR(0x71917f);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B719184:{NFSU2_TR(0x719184);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffff680ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B71918b:{NFSU2_TR(0x71918b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71918e:{NFSU2_TR(0x71918e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B719191:{NFSU2_TR(0x719191);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B719194:{NFSU2_TR(0x719194);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B719197:{NFSU2_TR(0x719197);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B719199:L719199:{c.instructions+=10;NFSU2_TR(0x719199);
u8 U[24];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),16);
__builtin_memmove((R+4672),(U+8),16);
}
B71919e:{NFSU2_TR(0x71919e);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
{wv<16>((R+4672),uo::psubusb<16>(rv<16>((R+4672)),rv<16>((U+4))));}
}
B7191a3:{NFSU2_TR(0x7191a3);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
{wv<16>((R+4672),uo::paddusb<16>(rv<16>((R+4672)),rv<16>((U+4))));}
}
B7191a8:{NFSU2_TR(0x7191a8);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
{wv<16>((R+4672),uo::psubusb<16>(rv<16>((R+4672)),rv<16>((U+4))));}
}
B7191ad:{NFSU2_TR(0x7191ad);
u8 U[24];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),16);
__builtin_memmove((R+4736),(U+8),16);
}
B7191b2:{NFSU2_TR(0x7191b2);
w1(R+4672,u8(u32(r1(R+4672))+u32(r1(R+4736))));
w1(R+4673,u8(u32(r1(R+4673))+u32(r1(R+4737))));
w1(R+4674,u8(u32(r1(R+4674))+u32(r1(R+4738))));
w1(R+4675,u8(u32(r1(R+4675))+u32(r1(R+4739))));
w1(R+4676,u8(u32(r1(R+4676))+u32(r1(R+4740))));
w1(R+4677,u8(u32(r1(R+4677))+u32(r1(R+4741))));
w1(R+4678,u8(u32(r1(R+4678))+u32(r1(R+4742))));
w1(R+4679,u8(u32(r1(R+4679))+u32(r1(R+4743))));
w1(R+4680,u8(u32(r1(R+4680))+u32(r1(R+4744))));
w1(R+4681,u8(u32(r1(R+4681))+u32(r1(R+4745))));
w1(R+4682,u8(u32(r1(R+4682))+u32(r1(R+4746))));
w1(R+4683,u8(u32(r1(R+4683))+u32(r1(R+4747))));
w1(R+4684,u8(u32(r1(R+4684))+u32(r1(R+4748))));
w1(R+4685,u8(u32(r1(R+4685))+u32(r1(R+4749))));
w1(R+4686,u8(u32(r1(R+4686))+u32(r1(R+4750))));
w1(R+4687,u8(u32(r1(R+4687))+u32(r1(R+4751))));
}
B7191b6:{NFSU2_TR(0x7191b6);
u8 U[24];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4672),16);
__builtin_memmove(gp(u32(r4(U+4))),(U+8),16);
}
B7191bb:{NFSU2_TR(0x7191bb);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B7191be:{NFSU2_TR(0x7191be);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B7191c0:{NFSU2_TR(0x7191c0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x719199u);}goto L719199;}}
}
B7191c2:L7191c2:{c.instructions+=4;NFSU2_TR(0x7191c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7191c5:{NFSU2_TR(0x7191c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(U+4),r4(R+0)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B7191c8:{NFSU2_TR(0x7191c8);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
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
B7191cb:{NFSU2_TR(0x7191cb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x719174u);}goto L719174;}}
}
B7191cd:L7191cd:{c.instructions+=7;NFSU2_TR(0x7191cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7191ce:{NFSU2_TR(0x7191ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7191cf:{NFSU2_TR(0x7191cf);
__builtin_memmove((R+16),(R+20),4);
}
B7191d1:{NFSU2_TR(0x7191d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7191d2:{NFSU2_TR(0x7191d2);
__builtin_memmove((R+16),(R+12),4);
}
B7191d4:{NFSU2_TR(0x7191d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7191d5:{NFSU2_TR(0x7191d5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7191d6:L7191d6:{c.instructions+=12;NFSU2_TR(0x7191d6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7191d7:{NFSU2_TR(0x7191d7);
__builtin_memmove((R+20),(R+16),4);
}
B7191d9:{NFSU2_TR(0x7191d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7191dc:{NFSU2_TR(0x7191dc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7191dd:{NFSU2_TR(0x7191dd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7191de:{NFSU2_TR(0x7191de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7191e1:{NFSU2_TR(0x7191e1);
__builtin_memmove((R+0),(R+4),4);
}
B7191e3:{NFSU2_TR(0x7191e3);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B7191e6:{NFSU2_TR(0x7191e6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7191e7:{NFSU2_TR(0x7191e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7191ea:{NFSU2_TR(0x7191ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7191ed:{NFSU2_TR(0x7191ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7191f0:L7191f0:{c.instructions+=1;NFSU2_TR(0x7191f0);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L7191f2;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7191f0u);}goto L7191f0;}
}
B7191f2:L7191f2:{c.instructions+=5;NFSU2_TR(0x7191f2);
__builtin_memmove((R+4),(R+0),4);
}
B7191f4:{NFSU2_TR(0x7191f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7191f7:{NFSU2_TR(0x7191f7);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B7191fa:{NFSU2_TR(0x7191fa);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B7191fb:{NFSU2_TR(0x7191fb);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7191fe:L7191fe:{c.instructions+=1;NFSU2_TR(0x7191fe);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L719200;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7191feu);}goto L7191fe;}
}
B719200:L719200:{c.instructions+=1;NFSU2_TR(0x719200);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L719274;}}
}
B719202:L719202:{c.instructions+=2;NFSU2_TR(0x719202);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B719203:{NFSU2_TR(0x719203);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B719206:L719206:{c.instructions+=10;NFSU2_TR(0x719206);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B719209:{NFSU2_TR(0x719209);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B71920c:{NFSU2_TR(0x71920c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71920f:{NFSU2_TR(0x71920f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B719212:{NFSU2_TR(0x719212);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B719214:{NFSU2_TR(0x719214);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B719217:{NFSU2_TR(0x719217);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B71921a:{NFSU2_TR(0x71921a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B71921d:{NFSU2_TR(0x71921d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B719220:{NFSU2_TR(0x719220);
wv<16>((R+5056),eval<Op::INT_XOR,16,16,16>(rv<16>((R+5056)),rv<16>((R+5056))));
}
B719224:L719224:{c.instructions+=16;NFSU2_TR(0x719224);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
wv<16>((R+4608),eval<Op::INT_ZEXT,16,8>(rv<8>((U+8))));
}
B719229:{NFSU2_TR(0x719229);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
wv<16>((R+4672),eval<Op::INT_ZEXT,16,8>(rv<8>((U+8))));
}
B71922e:{NFSU2_TR(0x71922e);
__builtin_memmove((R+4623),(R+5063),1);
__builtin_memmove((R+4622),(R+4615),1);
__builtin_memmove((R+4621),(R+5062),1);
__builtin_memmove((R+4620),(R+4614),1);
__builtin_memmove((R+4619),(R+5061),1);
__builtin_memmove((R+4618),(R+4613),1);
__builtin_memmove((R+4617),(R+5060),1);
__builtin_memmove((R+4616),(R+4612),1);
__builtin_memmove((R+4615),(R+5059),1);
__builtin_memmove((R+4614),(R+4611),1);
__builtin_memmove((R+4613),(R+5058),1);
__builtin_memmove((R+4612),(R+4610),1);
__builtin_memmove((R+4611),(R+5057),1);
__builtin_memmove((R+4610),(R+4609),1);
__builtin_memmove((R+4609),(R+5056),1);
}
B719232:{NFSU2_TR(0x719232);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
wv<16>((R+4736),eval<Op::INT_ZEXT,16,8>(rv<8>((U+8))));
}
B719237:{NFSU2_TR(0x719237);
__builtin_memmove((R+4687),(R+5063),1);
__builtin_memmove((R+4686),(R+4679),1);
__builtin_memmove((R+4685),(R+5062),1);
__builtin_memmove((R+4684),(R+4678),1);
__builtin_memmove((R+4683),(R+5061),1);
__builtin_memmove((R+4682),(R+4677),1);
__builtin_memmove((R+4681),(R+5060),1);
__builtin_memmove((R+4680),(R+4676),1);
__builtin_memmove((R+4679),(R+5059),1);
__builtin_memmove((R+4678),(R+4675),1);
__builtin_memmove((R+4677),(R+5058),1);
__builtin_memmove((R+4676),(R+4674),1);
__builtin_memmove((R+4675),(R+5057),1);
__builtin_memmove((R+4674),(R+4673),1);
__builtin_memmove((R+4673),(R+5056),1);
}
B71923b:{NFSU2_TR(0x71923b);
u8 U[16];
__builtin_memmove((U+0),gp(0x817720),16);
w2(R+4608,u16(u32(r2(R+4608))+u32(r2(U+0))));
w2(R+4610,u16(u32(r2(R+4610))+u32(r2(U+2))));
w2(R+4612,u16(u32(r2(R+4612))+u32(r2(U+4))));
w2(R+4614,u16(u32(r2(R+4614))+u32(r2(U+6))));
w2(R+4616,u16(u32(r2(R+4616))+u32(r2(U+8))));
w2(R+4618,u16(u32(r2(R+4618))+u32(r2(U+10))));
w2(R+4620,u16(u32(r2(R+4620))+u32(r2(U+12))));
w2(R+4622,u16(u32(r2(R+4622))+u32(r2(U+14))));
}
B719243:{NFSU2_TR(0x719243);
{wv<16>((R+4672),uo::psllw<16>(rv<16>((R+4672)),V(0x1ull)));}
}
B719248:{NFSU2_TR(0x719248);
__builtin_memmove((R+4751),(R+5063),1);
__builtin_memmove((R+4750),(R+4743),1);
__builtin_memmove((R+4749),(R+5062),1);
__builtin_memmove((R+4748),(R+4742),1);
__builtin_memmove((R+4747),(R+5061),1);
__builtin_memmove((R+4746),(R+4741),1);
__builtin_memmove((R+4745),(R+5060),1);
__builtin_memmove((R+4744),(R+4740),1);
__builtin_memmove((R+4743),(R+5059),1);
__builtin_memmove((R+4742),(R+4739),1);
__builtin_memmove((R+4741),(R+5058),1);
__builtin_memmove((R+4740),(R+4738),1);
__builtin_memmove((R+4739),(R+5057),1);
__builtin_memmove((R+4738),(R+4737),1);
__builtin_memmove((R+4737),(R+5056),1);
}
B71924c:{NFSU2_TR(0x71924c);
w2(R+4608,u16(u32(r2(R+4608))+u32(r2(R+4672))));
w2(R+4610,u16(u32(r2(R+4610))+u32(r2(R+4674))));
w2(R+4612,u16(u32(r2(R+4612))+u32(r2(R+4676))));
w2(R+4614,u16(u32(r2(R+4614))+u32(r2(R+4678))));
w2(R+4616,u16(u32(r2(R+4616))+u32(r2(R+4680))));
w2(R+4618,u16(u32(r2(R+4618))+u32(r2(R+4682))));
w2(R+4620,u16(u32(r2(R+4620))+u32(r2(R+4684))));
w2(R+4622,u16(u32(r2(R+4622))+u32(r2(R+4686))));
}
B719250:{NFSU2_TR(0x719250);
w2(R+4608,u16(u32(r2(R+4608))+u32(r2(R+4736))));
w2(R+4610,u16(u32(r2(R+4610))+u32(r2(R+4738))));
w2(R+4612,u16(u32(r2(R+4612))+u32(r2(R+4740))));
w2(R+4614,u16(u32(r2(R+4614))+u32(r2(R+4742))));
w2(R+4616,u16(u32(r2(R+4616))+u32(r2(R+4744))));
w2(R+4618,u16(u32(r2(R+4618))+u32(r2(R+4746))));
w2(R+4620,u16(u32(r2(R+4620))+u32(r2(R+4748))));
w2(R+4622,u16(u32(r2(R+4622))+u32(r2(R+4750))));
}
B719254:{NFSU2_TR(0x719254);
{wv<16>((R+4608),uo::psraw<16>(rv<16>((R+4608)),V(0x2ull)));}
}
B719259:{NFSU2_TR(0x719259);
u8 U[54];
__builtin_memmove((U+5),(R+4608),16);
__builtin_memmove((U+21),(R+5056),16);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+38,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+38))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4608),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+39,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+39))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4609),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+40,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+40))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4610),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+41,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+41))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4611),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+42,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+42))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4612),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+43,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+43))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4613),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+44,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+44))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4614),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+45,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+45))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4615),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+21))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+21))));
w1(U+2,u8(s16(r2(U+21))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+46,u8(r2(U+21)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+46))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4616),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+23))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+23))));
w1(U+2,u8(s16(r2(U+23))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+47,u8(r2(U+23)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+47))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4617),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+25))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+25))));
w1(U+2,u8(s16(r2(U+25))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+48,u8(r2(U+25)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+48))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4618),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+27))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+27))));
w1(U+2,u8(s16(r2(U+27))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+49,u8(r2(U+27)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+49))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4619),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+29))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+29))));
w1(U+2,u8(s16(r2(U+29))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+50,u8(r2(U+29)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+50))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4620),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+31))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+31))));
w1(U+2,u8(s16(r2(U+31))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+51,u8(r2(U+31)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+51))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4621),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+33))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+33))));
w1(U+2,u8(s16(r2(U+33))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+52,u8(r2(U+33)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+52))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4622),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+35))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+35))));
w1(U+2,u8(s16(r2(U+35))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+53,u8(r2(U+35)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+53))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4623),(U+37),1);
}
B71925d:{NFSU2_TR(0x71925d);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4608),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B719262:{NFSU2_TR(0x719262);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B719265:{NFSU2_TR(0x719265);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B719267:{NFSU2_TR(0x719267);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x719224u);}goto L719224;}}
}
B719269:L719269:{c.instructions+=4;NFSU2_TR(0x719269);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71926c:{NFSU2_TR(0x71926c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B71926f:{NFSU2_TR(0x71926f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B719272:{NFSU2_TR(0x719272);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x719206u);}goto L719206;}}
}
B719274:L719274:{c.instructions+=7;NFSU2_TR(0x719274);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B719277:{NFSU2_TR(0x719277);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71927a:{NFSU2_TR(0x71927a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B71927d:{NFSU2_TR(0x71927d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B719280:{NFSU2_TR(0x719280);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B719283:{NFSU2_TR(0x719283);
__builtin_memmove((R+0),(R+4),4);
}
B719285:{NFSU2_TR(0x719285);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B719288:L719288:{c.instructions+=1;NFSU2_TR(0x719288);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L71928a;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x719288u);}goto L719288;}
}
B71928a:L71928a:{c.instructions+=2;NFSU2_TR(0x71928a);
__builtin_memmove((R+4),(R+0),4);
}
B71928c:{NFSU2_TR(0x71928c);
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
B71928f:L71928f:{c.instructions+=1;NFSU2_TR(0x71928f);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L719291;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71928fu);}goto L71928f;}
}
B719291:L719291:{c.instructions+=5;NFSU2_TR(0x719291);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B719292:{NFSU2_TR(0x719292);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B719293:{NFSU2_TR(0x719293);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B719294:{NFSU2_TR(0x719294);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B719295:{NFSU2_TR(0x719295);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B719296:L719296:{c.instructions+=2;NFSU2_TR(0x719296);
__builtin_memmove((R+0),gp(0x8b9c40),4);
}
B71929b:{NFSU2_TR(0x71929b);
w4(R+4,u32(0x8b9942ull));
}
B7192a0:L7192a0:{c.instructions+=12;NFSU2_TR(0x7192a0);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
__builtin_memmove((R+8),(U+0),2);
}
B7192a3:{NFSU2_TR(0x7192a3);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7192a7:{NFSU2_TR(0x7192a7);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
__builtin_memmove((R+8),(U+0),2);
}
B7192aa:{NFSU2_TR(0x7192aa);
u8 U[2];
__builtin_memmove((U+0),(R+8),2);
s2(u32(r4(R+4)),r2(U+0));
}
B7192ad:{NFSU2_TR(0x7192ad);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
__builtin_memmove((R+8),(U+0),2);
}
B7192b0:{NFSU2_TR(0x7192b0);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7192b4:{NFSU2_TR(0x7192b4);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
__builtin_memmove((R+8),(U+0),2);
}
B7192b7:{NFSU2_TR(0x7192b7);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7192bb:{NFSU2_TR(0x7192bb);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B7192be:{NFSU2_TR(0x7192be);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B7192c1:{NFSU2_TR(0x7192c1);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x8b9b42ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x8b9b42ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x8b9b42ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7192c7:{NFSU2_TR(0x7192c7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7192a0u);}goto L7192a0;}}
}
B7192c9:L7192c9:{c.instructions+=1;NFSU2_TR(0x7192c9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7192ca:L7192ca:{c.instructions+=192;NFSU2_TR(0x7192ca);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7192cb:{NFSU2_TR(0x7192cb);
__builtin_memmove((R+12),(R+16),4);
}
B7192cd:{NFSU2_TR(0x7192cd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7192ce:{NFSU2_TR(0x7192ce);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7192cf:{NFSU2_TR(0x7192cf);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B7192d2:{NFSU2_TR(0x7192d2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7192d5:{NFSU2_TR(0x7192d5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7192d6:{NFSU2_TR(0x7192d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B7192d9:{NFSU2_TR(0x7192d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7192dd:{NFSU2_TR(0x7192dd);
__builtin_memmove((R+20),(R+16),4);
}
B7192df:{NFSU2_TR(0x7192df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x58ull))));
}
B7192e2:{NFSU2_TR(0x7192e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7192e5:{NFSU2_TR(0x7192e5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7192e6:{NFSU2_TR(0x7192e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x8b9940ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B7192ed:{NFSU2_TR(0x7192ed);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7192ee:{NFSU2_TR(0x7192ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7192f1:{NFSU2_TR(0x7192f1);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7192f3:{NFSU2_TR(0x7192f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7192f4:{NFSU2_TR(0x7192f4);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7192f8:{NFSU2_TR(0x7192f8);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd2ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7192fc:{NFSU2_TR(0x7192fc);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B719300:{NFSU2_TR(0x719300);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd6ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B719304:{NFSU2_TR(0x719304);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B719306:{NFSU2_TR(0x719306);
u8 U[6];
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B719307:{NFSU2_TR(0x719307);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B71930b:{NFSU2_TR(0x71930b);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe2ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B71930f:{NFSU2_TR(0x71930f);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B719313:{NFSU2_TR(0x719313);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe6ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B719317:{NFSU2_TR(0x719317);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71931a:{NFSU2_TR(0x71931a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B71931d:{NFSU2_TR(0x71931d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B719320:{NFSU2_TR(0x719320);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B719323:{NFSU2_TR(0x719323);
__builtin_memmove((R+4),(R+8),4);
}
B719325:{NFSU2_TR(0x719325);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4352,u64(r4(U+4)));
}
B719329:{NFSU2_TR(0x719329);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w8(R+4416,u64(r4(U+0)));
}
B71932c:{NFSU2_TR(0x71932c);
w4(R+4352,shr<u32>(r4(R+4352),u64(u32(0x10ull))));
w4(R+4356,shr<u32>(r4(R+4356),u64(u32(0x10ull))));
}
B719330:{NFSU2_TR(0x719330);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(R+4368,u64(r4(U+12)));
}
B719335:{NFSU2_TR(0x719335);
__builtin_memmove((R+4358),(R+4418),2);
__builtin_memmove((R+4356),(R+4354),2);
__builtin_memmove((R+4354),(R+4416),2);
}
B719338:{NFSU2_TR(0x719338);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w8(R+4416,u64(r4(U+8)));
}
B71933c:{NFSU2_TR(0x71933c);
w4(R+4368,shr<u32>(r4(R+4368),u64(u32(0x10ull))));
w4(R+4372,shr<u32>(r4(R+4372),u64(u32(0x10ull))));
}
B719340:{NFSU2_TR(0x719340);
__builtin_memmove((R+4374),(R+4418),2);
__builtin_memmove((R+4372),(R+4370),2);
__builtin_memmove((R+4370),(R+4416),2);
}
B719343:{NFSU2_TR(0x719343);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B719346:{NFSU2_TR(0x719346);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(R+4384,u64(r4(U+12)));
}
B71934b:{NFSU2_TR(0x71934b);
__builtin_memmove((R+4359),(R+4371),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4370),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4369),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4368),1);
}
B71934e:{NFSU2_TR(0x71934e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w8(R+4416,u64(r4(U+8)));
}
B719352:{NFSU2_TR(0x719352);
w4(R+4384,shr<u32>(r4(R+4384),u64(u32(0x10ull))));
w4(R+4388,shr<u32>(r4(R+4388),u64(u32(0x10ull))));
}
B719356:{NFSU2_TR(0x719356);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(R+4368,u64(r4(U+12)));
}
B71935b:{NFSU2_TR(0x71935b);
__builtin_memmove((R+4390),(R+4418),2);
__builtin_memmove((R+4388),(R+4386),2);
__builtin_memmove((R+4386),(R+4416),2);
}
B71935e:{NFSU2_TR(0x71935e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w8(R+4416,u64(r4(U+8)));
}
B719362:{NFSU2_TR(0x719362);
w4(R+4368,shr<u32>(r4(R+4368),u64(u32(0x10ull))));
w4(R+4372,shr<u32>(r4(R+4372),u64(u32(0x10ull))));
}
B719366:{NFSU2_TR(0x719366);
__builtin_memmove((R+4374),(R+4418),2);
__builtin_memmove((R+4372),(R+4370),2);
__builtin_memmove((R+4370),(R+4416),2);
}
B719369:{NFSU2_TR(0x719369);
w8(R+4416,u64(u64(r8(R+4416))^u64(r8(R+4416))));
}
B71936c:{NFSU2_TR(0x71936c);
__builtin_memmove((R+4391),(R+4371),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4370),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4369),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4368),1);
}
B71936f:{NFSU2_TR(0x71936f);
__builtin_memmove((R+4368),(R+4352),8);
}
B719372:{NFSU2_TR(0x719372);
__builtin_memmove((R+4358),(R+4386),2);
__builtin_memmove((R+4356),(R+4354),2);
__builtin_memmove((R+4354),(R+4384),2);
}
B719375:{NFSU2_TR(0x719375);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B719378:{NFSU2_TR(0x719378);
__builtin_memmove((R+4368),(R+4372),2);
__builtin_memmove((R+4370),(R+4388),2);
__builtin_memmove((R+4372),(R+4374),2);
__builtin_memmove((R+4374),(R+4390),2);
}
B71937b:{NFSU2_TR(0x71937b);
__builtin_memmove((R+4448),(R+4352),8);
}
B71937e:{NFSU2_TR(0x71937e);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+28)),r8(U+0));
}
B719381:{NFSU2_TR(0x719381);
__builtin_memmove((R+4384),(R+4368),8);
}
B719384:{NFSU2_TR(0x719384);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B719388:{NFSU2_TR(0x719388);
w8(R+4352,shr<u64>(r8(R+4352),u64(u32(0x20ull))));
}
B71938c:{NFSU2_TR(0x71938c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4464,u64(r4(U+4)));
}
B719390:{NFSU2_TR(0x719390);
__builtin_memmove((R+4375),(R+4419),1);
__builtin_memmove((R+4374),(R+4371),1);
__builtin_memmove((R+4373),(R+4418),1);
__builtin_memmove((R+4372),(R+4370),1);
__builtin_memmove((R+4371),(R+4417),1);
__builtin_memmove((R+4370),(R+4369),1);
__builtin_memmove((R+4369),(R+4416),1);
}
B719393:{NFSU2_TR(0x719393);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w8(R+4416,u64(r4(U+0)));
}
B719396:{NFSU2_TR(0x719396);
w4(R+4464,shr<u32>(r4(R+4464),u64(u32(0x10ull))));
w4(R+4468,shr<u32>(r4(R+4468),u64(u32(0x10ull))));
}
B71939a:{NFSU2_TR(0x71939a);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(R+4432,u64(r4(U+12)));
}
B71939f:{NFSU2_TR(0x71939f);
__builtin_memmove((R+4470),(R+4418),2);
__builtin_memmove((R+4468),(R+4466),2);
__builtin_memmove((R+4466),(R+4416),2);
}
B7193a2:{NFSU2_TR(0x7193a2);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w8(R+4416,u64(r4(U+8)));
}
B7193a6:{NFSU2_TR(0x7193a6);
w4(R+4432,shr<u32>(r4(R+4432),u64(u32(0x10ull))));
w4(R+4436,shr<u32>(r4(R+4436),u64(u32(0x10ull))));
}
B7193aa:{NFSU2_TR(0x7193aa);
__builtin_memmove((R+4438),(R+4418),2);
__builtin_memmove((R+4436),(R+4434),2);
__builtin_memmove((R+4434),(R+4416),2);
}
B7193ad:{NFSU2_TR(0x7193ad);
w8(R+4416,u64(u64(r8(R+4416))^u64(r8(R+4416))));
}
B7193b0:{NFSU2_TR(0x7193b0);
__builtin_memmove((R+4359),(R+4419),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4418),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4417),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4416),1);
}
B7193b3:{NFSU2_TR(0x7193b3);
w8(R+4384,shr<u64>(r8(R+4384),u64(u32(0x20ull))));
}
B7193b7:{NFSU2_TR(0x7193b7);
w2(R+4368,u16(u32(r2(R+4368))-u32(r2(R+4352))));
w2(R+4370,u16(u32(r2(R+4370))-u32(r2(R+4354))));
w2(R+4372,u16(u32(r2(R+4372))-u32(r2(R+4356))));
w2(R+4374,u16(u32(r2(R+4374))-u32(r2(R+4358))));
}
B7193ba:{NFSU2_TR(0x7193ba);
__builtin_memmove((R+4471),(R+4435),1);
__builtin_memmove((R+4470),(R+4467),1);
__builtin_memmove((R+4469),(R+4434),1);
__builtin_memmove((R+4468),(R+4466),1);
__builtin_memmove((R+4467),(R+4433),1);
__builtin_memmove((R+4466),(R+4465),1);
__builtin_memmove((R+4465),(R+4432),1);
}
B7193bd:{NFSU2_TR(0x7193bd);
__builtin_memmove((R+4400),(R+4368),8);
}
B7193c0:{NFSU2_TR(0x7193c0);
__builtin_memmove((R+4455),(R+4419),1);
__builtin_memmove((R+4454),(R+4451),1);
__builtin_memmove((R+4453),(R+4418),1);
__builtin_memmove((R+4452),(R+4450),1);
__builtin_memmove((R+4451),(R+4417),1);
__builtin_memmove((R+4450),(R+4449),1);
__builtin_memmove((R+4449),(R+4416),1);
}
B7193c3:{NFSU2_TR(0x7193c3);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4368))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4370))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4372))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4374))));
}
B7193c6:{NFSU2_TR(0x7193c6);
__builtin_memmove((R+4391),(R+4419),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4418),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4417),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4416),1);
}
B7193c9:{NFSU2_TR(0x7193c9);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4400))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4402))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4404))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4406))));
}
B7193cc:{NFSU2_TR(0x7193cc);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(U+12))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(U+14))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(U+16))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(U+18))));
}
B7193d0:{NFSU2_TR(0x7193d0);
w2(R+4448,u16(u32(r2(R+4448))-u32(r2(R+4384))));
w2(R+4450,u16(u32(r2(R+4450))-u32(r2(R+4386))));
w2(R+4452,u16(u32(r2(R+4452))-u32(r2(R+4388))));
w2(R+4454,u16(u32(r2(R+4454))-u32(r2(R+4390))));
}
B7193d3:{NFSU2_TR(0x7193d3);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(R+4384,u64(r4(U+12)));
}
B7193d8:{NFSU2_TR(0x7193d8);
w2(R+4448,u16(u32(r2(R+4448))+u32(r2(R+4368))));
w2(R+4450,u16(u32(r2(R+4450))+u32(r2(R+4370))));
w2(R+4452,u16(u32(r2(R+4452))+u32(r2(R+4372))));
w2(R+4454,u16(u32(r2(R+4454))+u32(r2(R+4374))));
}
B7193db:{NFSU2_TR(0x7193db);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w8(R+4416,u64(r4(U+8)));
}
B7193df:{NFSU2_TR(0x7193df);
w4(R+4384,shr<u32>(r4(R+4384),u64(u32(0x10ull))));
w4(R+4388,shr<u32>(r4(R+4388),u64(u32(0x10ull))));
}
B7193e3:{NFSU2_TR(0x7193e3);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(R+4432,u64(r4(U+12)));
}
B7193e8:{NFSU2_TR(0x7193e8);
__builtin_memmove((R+4390),(R+4418),2);
__builtin_memmove((R+4388),(R+4386),2);
__builtin_memmove((R+4386),(R+4416),2);
}
B7193eb:{NFSU2_TR(0x7193eb);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w8(R+4416,u64(r4(U+8)));
}
B7193ef:{NFSU2_TR(0x7193ef);
w4(R+4432,shr<u32>(r4(R+4432),u64(u32(0x10ull))));
w4(R+4436,shr<u32>(r4(R+4436),u64(u32(0x10ull))));
}
B7193f3:{NFSU2_TR(0x7193f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7193f6:{NFSU2_TR(0x7193f6);
__builtin_memmove((R+4438),(R+4418),2);
__builtin_memmove((R+4436),(R+4434),2);
__builtin_memmove((R+4434),(R+4416),2);
}
B7193f9:{NFSU2_TR(0x7193f9);
{wv<8>((R+4448),uo::psraw<8>(rv<8>((R+4448)),V(0x3ull)));}
}
B7193fd:{NFSU2_TR(0x7193fd);
w8(R+4416,u64(u64(r8(R+4416))^u64(r8(R+4416))));
}
B719400:{NFSU2_TR(0x719400);
__builtin_memmove((R+4391),(R+4435),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4434),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4433),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4432),1);
}
B719403:{NFSU2_TR(0x719403);
__builtin_memmove((R+4432),(R+4464),8);
}
B719406:{NFSU2_TR(0x719406);
__builtin_memmove((R+4368),(R+4448),8);
}
B719409:{NFSU2_TR(0x719409);
__builtin_memmove((R+4432),(R+4436),2);
__builtin_memmove((R+4434),(R+4388),2);
__builtin_memmove((R+4436),(R+4438),2);
__builtin_memmove((R+4438),(R+4390),2);
}
B71940c:{NFSU2_TR(0x71940c);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B719410:{NFSU2_TR(0x719410);
__builtin_memmove((R+4470),(R+4386),2);
__builtin_memmove((R+4468),(R+4466),2);
__builtin_memmove((R+4466),(R+4384),2);
}
B719413:{NFSU2_TR(0x719413);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B719417:{NFSU2_TR(0x719417);
{wv<8>((R+4448),uo::psraw<8>(rv<8>((R+4448)),V(0xfull)));}
}
B71941b:{NFSU2_TR(0x71941b);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4384),(U+0),8);
}
B71941e:{NFSU2_TR(0x71941e);
__builtin_memmove((R+4352),(R+4464),8);
}
B719421:{NFSU2_TR(0x719421);
w8(R+4464,shr<u64>(r8(R+4464),u64(u32(0x20ull))));
}
B719425:{NFSU2_TR(0x719425);
w8(R+4368,u64(u64(r8(R+4368))^u64(r8(R+4448))));
}
B719428:{NFSU2_TR(0x719428);
{wv<8>((R+4368),uo::psubsw<8>(rv<8>((R+4368)),rv<8>((R+4448))));}
}
B71942b:{NFSU2_TR(0x71942b);
__builtin_memmove((R+4439),(R+4419),1);
__builtin_memmove((R+4438),(R+4435),1);
__builtin_memmove((R+4437),(R+4418),1);
__builtin_memmove((R+4436),(R+4434),1);
__builtin_memmove((R+4435),(R+4417),1);
__builtin_memmove((R+4434),(R+4433),1);
__builtin_memmove((R+4433),(R+4416),1);
}
B71942e:{NFSU2_TR(0x71942e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
w8(R+4448,u64(u64(r8(R+4448))|u64(r8(U+4))));
}
B719432:{NFSU2_TR(0x719432);
__builtin_memmove((R+4400),(R+4384),8);
}
B719435:{NFSU2_TR(0x719435);
__builtin_memmove((R+4471),(R+4419),1);
__builtin_memmove((R+4470),(R+4467),1);
__builtin_memmove((R+4469),(R+4418),1);
__builtin_memmove((R+4468),(R+4466),1);
__builtin_memmove((R+4467),(R+4417),1);
__builtin_memmove((R+4466),(R+4465),1);
__builtin_memmove((R+4465),(R+4416),1);
}
B719438:{NFSU2_TR(0x719438);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(R+4368))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(R+4370))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(R+4372))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(R+4374))));
}
B71943b:{NFSU2_TR(0x71943b);
__builtin_memmove((R+4416),(R+4400),8);
}
B71943e:{NFSU2_TR(0x71943e);
{wv<8>((R+4400),uo::psraw<8>(rv<8>((R+4400)),V(0xfull)));}
}
B719442:{NFSU2_TR(0x719442);
w2(R+4432,u16(u32(r2(R+4432))-u32(r2(R+4464))));
w2(R+4434,u16(u32(r2(R+4434))-u32(r2(R+4466))));
w2(R+4436,u16(u32(r2(R+4436))-u32(r2(R+4468))));
w2(R+4438,u16(u32(r2(R+4438))-u32(r2(R+4470))));
}
B719445:{NFSU2_TR(0x719445);
w8(R+4416,u64(u64(r8(R+4416))^u64(r8(R+4400))));
}
B719448:{NFSU2_TR(0x719448);
{wv<8>((R+4416),uo::psubsw<8>(rv<8>((R+4416)),rv<8>((R+4400))));}
}
B71944b:{NFSU2_TR(0x71944b);
w8(R+4400,u64(u64(r8(R+4400))^u64(r8(R+4400))));
}
B71944e:{NFSU2_TR(0x71944e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4368,u64(r4(U+4)));
}
B719452:{NFSU2_TR(0x719452);
{wv<8>((R+4384),uo::psubusw<8>(rv<8>((R+4384)),rv<8>((R+4416))));}
}
B719455:{NFSU2_TR(0x719455);
__builtin_memmove((R+4359),(R+4403),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4402),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4401),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4400),1);
}
B719458:{NFSU2_TR(0x719458);
__builtin_memmove((R+4464),(R+4432),8);
}
B71945b:{NFSU2_TR(0x71945b);
w2(R+4464,u16(u32(r2(R+4464))+u32(r2(R+4432))));
w2(R+4466,u16(u32(r2(R+4466))+u32(r2(R+4434))));
w2(R+4468,u16(u32(r2(R+4468))+u32(r2(R+4436))));
w2(R+4470,u16(u32(r2(R+4470))+u32(r2(R+4438))));
}
B71945e:{NFSU2_TR(0x71945e);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4448))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4450))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4452))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4454))));
}
B719461:{NFSU2_TR(0x719461);
__builtin_memmove((R+4375),(R+4403),1);
__builtin_memmove((R+4374),(R+4371),1);
__builtin_memmove((R+4373),(R+4402),1);
__builtin_memmove((R+4372),(R+4370),1);
__builtin_memmove((R+4371),(R+4401),1);
__builtin_memmove((R+4370),(R+4369),1);
__builtin_memmove((R+4369),(R+4400),1);
}
B719464:{NFSU2_TR(0x719464);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4464))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4466))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4468))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4470))));
}
B719467:{NFSU2_TR(0x719467);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(U+12))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(U+14))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(U+16))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(U+18))));
}
B71946b:{NFSU2_TR(0x71946b);
w2(R+4352,u16(u32(r2(R+4352))-u32(r2(R+4368))));
w2(R+4354,u16(u32(r2(R+4354))-u32(r2(R+4370))));
w2(R+4356,u16(u32(r2(R+4356))-u32(r2(R+4372))));
w2(R+4358,u16(u32(r2(R+4358))-u32(r2(R+4374))));
}
B71946e:{NFSU2_TR(0x71946e);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4432))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4434))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4436))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4438))));
}
B719471:{NFSU2_TR(0x719471);
w8(R+4448,u64(u64(r8(R+4448))^u64(r8(R+4448))));
}
B719474:{NFSU2_TR(0x719474);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4464,u64(r4(U+4)));
}
B719478:{NFSU2_TR(0x719478);
{wv<8>((R+4352),uo::psraw<8>(rv<8>((R+4352)),V(0x3ull)));}
}
B71947c:{NFSU2_TR(0x71947c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4400,u64(r4(U+4)));
}
B719480:{NFSU2_TR(0x719480);
__builtin_memmove((R+4471),(R+4451),1);
__builtin_memmove((R+4470),(R+4467),1);
__builtin_memmove((R+4469),(R+4450),1);
__builtin_memmove((R+4468),(R+4466),1);
__builtin_memmove((R+4467),(R+4449),1);
__builtin_memmove((R+4466),(R+4465),1);
__builtin_memmove((R+4465),(R+4448),1);
}
B719483:{NFSU2_TR(0x719483);
w2(R+4464,u16(u32(r2(R+4464))-u32(r2(R+4384))));
w2(R+4466,u16(u32(r2(R+4466))-u32(r2(R+4386))));
w2(R+4468,u16(u32(r2(R+4468))-u32(r2(R+4388))));
w2(R+4470,u16(u32(r2(R+4470))-u32(r2(R+4390))));
}
B719486:{NFSU2_TR(0x719486);
__builtin_memmove((R+4407),(R+4451),1);
__builtin_memmove((R+4406),(R+4403),1);
__builtin_memmove((R+4405),(R+4450),1);
__builtin_memmove((R+4404),(R+4402),1);
__builtin_memmove((R+4403),(R+4449),1);
__builtin_memmove((R+4402),(R+4401),1);
__builtin_memmove((R+4401),(R+4448),1);
}
B719489:{NFSU2_TR(0x719489);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4384))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4386))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4388))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4390))));
}
B71948c:{NFSU2_TR(0x71948c);
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
B71948f:{NFSU2_TR(0x71948f);
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
B719492:{NFSU2_TR(0x719492);
__builtin_memmove((R+4368),(R+4352),8);
}
B719495:{NFSU2_TR(0x719495);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4384),(U+0),8);
}
B719498:{NFSU2_TR(0x719498);
{wv<8>((R+4352),uo::psraw<8>(rv<8>((R+4352)),V(0xfull)));}
}
B71949c:{NFSU2_TR(0x71949c);
__builtin_memmove((R+4407),(R+4467),1);
__builtin_memmove((R+4406),(R+4403),1);
__builtin_memmove((R+4405),(R+4466),1);
__builtin_memmove((R+4404),(R+4402),1);
__builtin_memmove((R+4403),(R+4465),1);
__builtin_memmove((R+4402),(R+4401),1);
__builtin_memmove((R+4401),(R+4464),1);
}
B71949f:{NFSU2_TR(0x71949f);
__builtin_memmove((R+4464),(R+4352),8);
}
B7194a2:{NFSU2_TR(0x7194a2);
w4(R+0,u32(r8(R+4400)));
}
B7194a5:{NFSU2_TR(0x7194a5);
w8(R+4368,u64(u64(r8(R+4368))^u64(r8(R+4352))));
}
B7194a8:{NFSU2_TR(0x7194a8);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7194ac:{NFSU2_TR(0x7194ac);
{wv<8>((R+4368),uo::psubsw<8>(rv<8>((R+4368)),rv<8>((R+4352))));}
}
B7194af:{NFSU2_TR(0x7194af);
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
B7194b2:{NFSU2_TR(0x7194b2);
__builtin_memmove((R+4432),(R+4384),8);
}
B7194b5:{NFSU2_TR(0x7194b5);
u8 U[14];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),2);
s2(u32(r4(U+8)),r2(U+12));
}
B7194ba:{NFSU2_TR(0x7194ba);
w8(R+4400,shr<u64>(r8(R+4400),u64(u32(0x20ull))));
}
B7194be:{NFSU2_TR(0x7194be);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
w8(R+4464,u64(u64(r8(R+4464))|u64(r8(U+4))));
}
B7194c2:{NFSU2_TR(0x7194c2);
w2(R+4432,u16(u32(r2(R+4432))-u32(r2(R+4368))));
w2(R+4434,u16(u32(r2(R+4434))-u32(r2(R+4370))));
w2(R+4436,u16(u32(r2(R+4436))-u32(r2(R+4372))));
w2(R+4438,u16(u32(r2(R+4438))-u32(r2(R+4374))));
}
B7194c5:{NFSU2_TR(0x7194c5);
w4(R+0,u32(r8(R+4400)));
}
B7194c8:{NFSU2_TR(0x7194c8);
__builtin_memmove((R+4416),(R+4432),8);
}
B7194cb:{NFSU2_TR(0x7194cb);
u8 U[14];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),2);
s2(u32(r4(U+8)),r2(U+12));
}
B7194d0:{NFSU2_TR(0x7194d0);
{wv<8>((R+4432),uo::psraw<8>(rv<8>((R+4432)),V(0xfull)));}
}
B7194d4:{NFSU2_TR(0x7194d4);
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
B7194d7:{NFSU2_TR(0x7194d7);
w8(R+4416,u64(u64(r8(R+4416))^u64(r8(R+4432))));
}
B7194da:{NFSU2_TR(0x7194da);
u8 U[14];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),2);
s2(u32(r4(U+8)),r2(U+12));
}
B7194df:{NFSU2_TR(0x7194df);
{wv<8>((R+4416),uo::psubsw<8>(rv<8>((R+4416)),rv<8>((R+4432))));}
}
B7194e2:{NFSU2_TR(0x7194e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4432,u64(r4(U+4)));
}
B7194e6:{NFSU2_TR(0x7194e6);
{wv<8>((R+4384),uo::psubusw<8>(rv<8>((R+4384)),rv<8>((R+4416))));}
}
B7194e9:{NFSU2_TR(0x7194e9);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4464))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4466))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4468))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4470))));
}
B7194ec:{NFSU2_TR(0x7194ec);
w8(R+4448,u64(u64(r8(R+4448))^u64(r8(R+4448))));
}
B7194ef:{NFSU2_TR(0x7194ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4400,u64(r4(U+4)));
}
B7194f3:{NFSU2_TR(0x7194f3);
__builtin_memmove((R+4439),(R+4451),1);
__builtin_memmove((R+4438),(R+4435),1);
__builtin_memmove((R+4437),(R+4450),1);
__builtin_memmove((R+4436),(R+4434),1);
__builtin_memmove((R+4435),(R+4449),1);
__builtin_memmove((R+4434),(R+4433),1);
__builtin_memmove((R+4433),(R+4448),1);
}
B7194f6:{NFSU2_TR(0x7194f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B7194f9:{NFSU2_TR(0x7194f9);
__builtin_memmove((R+4407),(R+4451),1);
__builtin_memmove((R+4406),(R+4403),1);
__builtin_memmove((R+4405),(R+4450),1);
__builtin_memmove((R+4404),(R+4402),1);
__builtin_memmove((R+4403),(R+4449),1);
__builtin_memmove((R+4402),(R+4401),1);
__builtin_memmove((R+4401),(R+4448),1);
}
B7194fc:{NFSU2_TR(0x7194fc);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4384))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4386))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4388))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4390))));
}
B7194ff:{NFSU2_TR(0x7194ff);
w2(R+4432,u16(u32(r2(R+4432))-u32(r2(R+4384))));
w2(R+4434,u16(u32(r2(R+4434))-u32(r2(R+4386))));
w2(R+4436,u16(u32(r2(R+4436))-u32(r2(R+4388))));
w2(R+4438,u16(u32(r2(R+4438))-u32(r2(R+4390))));
}
B719502:{NFSU2_TR(0x719502);
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
B719505:{NFSU2_TR(0x719505);
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
B719508:{NFSU2_TR(0x719508);
__builtin_memmove((R+4407),(R+4435),1);
__builtin_memmove((R+4406),(R+4403),1);
__builtin_memmove((R+4405),(R+4434),1);
__builtin_memmove((R+4404),(R+4402),1);
__builtin_memmove((R+4403),(R+4433),1);
__builtin_memmove((R+4402),(R+4401),1);
__builtin_memmove((R+4401),(R+4432),1);
}
B71950b:{NFSU2_TR(0x71950b);
w4(R+0,u32(r8(R+4400)));
}
B71950e:{NFSU2_TR(0x71950e);
w8(R+4400,shr<u64>(r8(R+4400),u64(u32(0x20ull))));
}
B719512:{NFSU2_TR(0x719512);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B719516:{NFSU2_TR(0x719516);
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
B719519:{NFSU2_TR(0x719519);
u8 U[14];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),2);
s2(u32(r4(U+8)),r2(U+12));
}
B71951e:{NFSU2_TR(0x71951e);
w4(R+0,u32(r8(R+4400)));
}
B719521:{NFSU2_TR(0x719521);
u8 U[14];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),2);
s2(u32(r4(U+8)),r2(U+12));
}
B719526:{NFSU2_TR(0x719526);
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
B719529:{NFSU2_TR(0x719529);
u8 U[14];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),2);
s2(u32(r4(U+8)),r2(U+12));
}
B71952e:{NFSU2_TR(0x71952e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B71952f:{NFSU2_TR(0x71952f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B719530:{NFSU2_TR(0x719530);
__builtin_memmove((R+16),(R+20),4);
}
B719532:{NFSU2_TR(0x719532);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B719533:{NFSU2_TR(0x719533);
__builtin_memmove((R+16),(R+12),4);
}
B719535:{NFSU2_TR(0x719535);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B719536:{NFSU2_TR(0x719536);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B719537:L719537:{c.instructions+=115;NFSU2_TR(0x719537);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B719538:{NFSU2_TR(0x719538);
__builtin_memmove((R+12),(R+16),4);
}
B71953a:{NFSU2_TR(0x71953a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71953b:{NFSU2_TR(0x71953b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71953c:{NFSU2_TR(0x71953c);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B71953f:{NFSU2_TR(0x71953f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B719542:{NFSU2_TR(0x719542);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B719543:{NFSU2_TR(0x719543);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B719546:{NFSU2_TR(0x719546);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71954a:{NFSU2_TR(0x71954a);
__builtin_memmove((R+20),(R+16),4);
}
B71954c:{NFSU2_TR(0x71954c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x3cull))));
}
B71954f:{NFSU2_TR(0x71954f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B719552:{NFSU2_TR(0x719552);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x8b9940ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B719559:{NFSU2_TR(0x719559);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71955a:{NFSU2_TR(0x71955a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71955d:{NFSU2_TR(0x71955d);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71955f:{NFSU2_TR(0x71955f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B719560:{NFSU2_TR(0x719560);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B719564:{NFSU2_TR(0x719564);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd2ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B719568:{NFSU2_TR(0x719568);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B71956c:{NFSU2_TR(0x71956c);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd6ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B719570:{NFSU2_TR(0x719570);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B719572:{NFSU2_TR(0x719572);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B719573:{NFSU2_TR(0x719573);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B719577:{NFSU2_TR(0x719577);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe2ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B71957b:{NFSU2_TR(0x71957b);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B71957f:{NFSU2_TR(0x71957f);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe6ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B719583:{NFSU2_TR(0x719583);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B719586:{NFSU2_TR(0x719586);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B719589:{NFSU2_TR(0x719589);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B71958b:{NFSU2_TR(0x71958b);
u8 U[6];
w1(R+512,u8((r4(R+4))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(R+4),r4(R+8)));
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B71958d:{NFSU2_TR(0x71958d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B719590:{NFSU2_TR(0x719590);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w8(R+4352,u64(r4(U+0)));
}
B719593:{NFSU2_TR(0x719593);
w8(R+4464,u64(u64(r8(R+4464))^u64(r8(R+4464))));
}
B719596:{NFSU2_TR(0x719596);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w8(R+4368,u64(r4(U+8)));
}
B71959a:{NFSU2_TR(0x71959a);
__builtin_memmove((R+4359),(R+4467),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4466),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4465),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4464),1);
}
B71959d:{NFSU2_TR(0x71959d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w8(R+4384,u64(r4(U+8)));
}
B7195a1:{NFSU2_TR(0x7195a1);
__builtin_memmove((R+4375),(R+4467),1);
__builtin_memmove((R+4374),(R+4371),1);
__builtin_memmove((R+4373),(R+4466),1);
__builtin_memmove((R+4372),(R+4370),1);
__builtin_memmove((R+4371),(R+4465),1);
__builtin_memmove((R+4370),(R+4369),1);
__builtin_memmove((R+4369),(R+4464),1);
}
B7195a4:{NFSU2_TR(0x7195a4);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w8(R+4400,u64(r4(U+8)));
}
B7195a8:{NFSU2_TR(0x7195a8);
__builtin_memmove((R+4432),(R+4352),8);
}
B7195ab:{NFSU2_TR(0x7195ab);
__builtin_memmove((R+4448),(R+4368),8);
}
B7195ae:{NFSU2_TR(0x7195ae);
w2(R+4352,u16(u32(r2(R+4352))-u32(r2(R+4368))));
w2(R+4354,u16(u32(r2(R+4354))-u32(r2(R+4370))));
w2(R+4356,u16(u32(r2(R+4356))-u32(r2(R+4372))));
w2(R+4358,u16(u32(r2(R+4358))-u32(r2(R+4374))));
}
B7195b1:{NFSU2_TR(0x7195b1);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B7195b4:{NFSU2_TR(0x7195b4);
__builtin_memmove((R+4368),(R+4352),8);
}
B7195b7:{NFSU2_TR(0x7195b7);
__builtin_memmove((R+4407),(R+4467),1);
__builtin_memmove((R+4406),(R+4403),1);
__builtin_memmove((R+4405),(R+4466),1);
__builtin_memmove((R+4404),(R+4402),1);
__builtin_memmove((R+4403),(R+4465),1);
__builtin_memmove((R+4402),(R+4401),1);
__builtin_memmove((R+4401),(R+4464),1);
}
B7195ba:{NFSU2_TR(0x7195ba);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4368))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4370))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4372))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4374))));
}
B7195bd:{NFSU2_TR(0x7195bd);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(R+4384))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(R+4386))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(R+4388))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(R+4390))));
}
B7195c0:{NFSU2_TR(0x7195c0);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4352))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4354))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4356))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4358))));
}
B7195c3:{NFSU2_TR(0x7195c3);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4368))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4370))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4372))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4374))));
}
B7195c6:{NFSU2_TR(0x7195c6);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+18))));
}
B7195ca:{NFSU2_TR(0x7195ca);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B7195cd:{NFSU2_TR(0x7195cd);
{wv<8>((R+4400),uo::psraw<8>(rv<8>((R+4400)),V(0x3ull)));}
}
B7195d1:{NFSU2_TR(0x7195d1);
__builtin_memmove((R+4368),(R+4400),8);
}
B7195d4:{NFSU2_TR(0x7195d4);
{wv<8>((R+4400),uo::psraw<8>(rv<8>((R+4400)),V(0xfull)));}
}
B7195d8:{NFSU2_TR(0x7195d8);
w8(R+4368,u64(u64(r8(R+4368))^u64(r8(R+4400))));
}
B7195db:{NFSU2_TR(0x7195db);
{wv<8>((R+4368),uo::psubsw<8>(rv<8>((R+4368)),rv<8>((R+4400))));}
}
B7195de:{NFSU2_TR(0x7195de);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
w8(R+4400,u64(u64(r8(R+4400))|u64(r8(U+4))));
}
B7195e2:{NFSU2_TR(0x7195e2);
__builtin_memmove((R+4384),(R+4352),8);
}
B7195e5:{NFSU2_TR(0x7195e5);
w2(R+4352,u16(u32(r2(R+4352))-u32(r2(R+4368))));
w2(R+4354,u16(u32(r2(R+4354))-u32(r2(R+4370))));
w2(R+4356,u16(u32(r2(R+4356))-u32(r2(R+4372))));
w2(R+4358,u16(u32(r2(R+4358))-u32(r2(R+4374))));
}
B7195e8:{NFSU2_TR(0x7195e8);
__builtin_memmove((R+4416),(R+4352),8);
}
B7195eb:{NFSU2_TR(0x7195eb);
{wv<8>((R+4352),uo::psraw<8>(rv<8>((R+4352)),V(0xfull)));}
}
B7195ef:{NFSU2_TR(0x7195ef);
w8(R+4416,u64(u64(r8(R+4416))^u64(r8(R+4352))));
}
B7195f2:{NFSU2_TR(0x7195f2);
{wv<8>((R+4416),uo::psubsw<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B7195f5:{NFSU2_TR(0x7195f5);
{wv<8>((R+4384),uo::psubusw<8>(rv<8>((R+4384)),rv<8>((R+4416))));}
}
B7195f8:{NFSU2_TR(0x7195f8);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4400))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4402))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4404))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4406))));
}
B7195fb:{NFSU2_TR(0x7195fb);
w2(R+4432,u16(u32(r2(R+4432))-u32(r2(R+4384))));
w2(R+4434,u16(u32(r2(R+4434))-u32(r2(R+4386))));
w2(R+4436,u16(u32(r2(R+4436))-u32(r2(R+4388))));
w2(R+4438,u16(u32(r2(R+4438))-u32(r2(R+4390))));
}
B7195fe:{NFSU2_TR(0x7195fe);
w2(R+4448,u16(u32(r2(R+4448))+u32(r2(R+4384))));
w2(R+4450,u16(u32(r2(R+4450))+u32(r2(R+4386))));
w2(R+4452,u16(u32(r2(R+4452))+u32(r2(R+4388))));
w2(R+4454,u16(u32(r2(R+4454))+u32(r2(R+4390))));
}
B719601:{NFSU2_TR(0x719601);
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
B719604:{NFSU2_TR(0x719604);
u8 U[30];
__builtin_memmove((U+5),(R+4448),8);
__builtin_memmove((U+13),(R+4448),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4448),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4449),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4450),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4451),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4452),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4453),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4454),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4455),(U+21),1);
}
B719607:{NFSU2_TR(0x719607);
u8 U[4];
w4(U+0,u32(r8(R+4432)));
s4(u32(r4(R+24)),r4(U+0));
}
B71960a:{NFSU2_TR(0x71960a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
w4(U+8,u32(r8(R+4448)));
s4(u32(r4(U+4)),r4(U+8));
}
B71960e:{NFSU2_TR(0x71960e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4352,u64(r4(U+4)));
}
B719612:{NFSU2_TR(0x719612);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(R+4368,u64(r4(U+12)));
}
B719617:{NFSU2_TR(0x719617);
__builtin_memmove((R+4359),(R+4467),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4466),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4465),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4464),1);
}
B71961a:{NFSU2_TR(0x71961a);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(R+4384,u64(r4(U+12)));
}
B71961f:{NFSU2_TR(0x71961f);
__builtin_memmove((R+4375),(R+4467),1);
__builtin_memmove((R+4374),(R+4371),1);
__builtin_memmove((R+4373),(R+4466),1);
__builtin_memmove((R+4372),(R+4370),1);
__builtin_memmove((R+4371),(R+4465),1);
__builtin_memmove((R+4370),(R+4369),1);
__builtin_memmove((R+4369),(R+4464),1);
}
B719622:{NFSU2_TR(0x719622);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(R+4400,u64(r4(U+12)));
}
B719627:{NFSU2_TR(0x719627);
__builtin_memmove((R+4432),(R+4352),8);
}
B71962a:{NFSU2_TR(0x71962a);
__builtin_memmove((R+4448),(R+4368),8);
}
B71962d:{NFSU2_TR(0x71962d);
w2(R+4352,u16(u32(r2(R+4352))-u32(r2(R+4368))));
w2(R+4354,u16(u32(r2(R+4354))-u32(r2(R+4370))));
w2(R+4356,u16(u32(r2(R+4356))-u32(r2(R+4372))));
w2(R+4358,u16(u32(r2(R+4358))-u32(r2(R+4374))));
}
B719630:{NFSU2_TR(0x719630);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B719633:{NFSU2_TR(0x719633);
__builtin_memmove((R+4368),(R+4352),8);
}
B719636:{NFSU2_TR(0x719636);
__builtin_memmove((R+4407),(R+4467),1);
__builtin_memmove((R+4406),(R+4403),1);
__builtin_memmove((R+4405),(R+4466),1);
__builtin_memmove((R+4404),(R+4402),1);
__builtin_memmove((R+4403),(R+4465),1);
__builtin_memmove((R+4402),(R+4401),1);
__builtin_memmove((R+4401),(R+4464),1);
}
B719639:{NFSU2_TR(0x719639);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4368))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4370))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4372))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4374))));
}
B71963c:{NFSU2_TR(0x71963c);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(R+4384))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(R+4386))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(R+4388))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(R+4390))));
}
B71963f:{NFSU2_TR(0x71963f);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4352))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4354))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4356))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4358))));
}
B719642:{NFSU2_TR(0x719642);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4368))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4370))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4372))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4374))));
}
B719645:{NFSU2_TR(0x719645);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+18))));
}
B719649:{NFSU2_TR(0x719649);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B71964c:{NFSU2_TR(0x71964c);
{wv<8>((R+4400),uo::psraw<8>(rv<8>((R+4400)),V(0x3ull)));}
}
B719650:{NFSU2_TR(0x719650);
__builtin_memmove((R+4368),(R+4400),8);
}
B719653:{NFSU2_TR(0x719653);
{wv<8>((R+4400),uo::psraw<8>(rv<8>((R+4400)),V(0xfull)));}
}
B719657:{NFSU2_TR(0x719657);
w8(R+4368,u64(u64(r8(R+4368))^u64(r8(R+4400))));
}
B71965a:{NFSU2_TR(0x71965a);
{wv<8>((R+4368),uo::psubsw<8>(rv<8>((R+4368)),rv<8>((R+4400))));}
}
B71965d:{NFSU2_TR(0x71965d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
w8(R+4400,u64(u64(r8(R+4400))|u64(r8(U+4))));
}
B719661:{NFSU2_TR(0x719661);
__builtin_memmove((R+4384),(R+4352),8);
}
B719664:{NFSU2_TR(0x719664);
w2(R+4352,u16(u32(r2(R+4352))-u32(r2(R+4368))));
w2(R+4354,u16(u32(r2(R+4354))-u32(r2(R+4370))));
w2(R+4356,u16(u32(r2(R+4356))-u32(r2(R+4372))));
w2(R+4358,u16(u32(r2(R+4358))-u32(r2(R+4374))));
}
B719667:{NFSU2_TR(0x719667);
__builtin_memmove((R+4416),(R+4352),8);
}
B71966a:{NFSU2_TR(0x71966a);
{wv<8>((R+4352),uo::psraw<8>(rv<8>((R+4352)),V(0xfull)));}
}
B71966e:{NFSU2_TR(0x71966e);
w8(R+4416,u64(u64(r8(R+4416))^u64(r8(R+4352))));
}
B719671:{NFSU2_TR(0x719671);
{wv<8>((R+4416),uo::psubsw<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B719674:{NFSU2_TR(0x719674);
{wv<8>((R+4384),uo::psubusw<8>(rv<8>((R+4384)),rv<8>((R+4416))));}
}
B719677:{NFSU2_TR(0x719677);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4400))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4402))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4404))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4406))));
}
B71967a:{NFSU2_TR(0x71967a);
w2(R+4432,u16(u32(r2(R+4432))-u32(r2(R+4384))));
w2(R+4434,u16(u32(r2(R+4434))-u32(r2(R+4386))));
w2(R+4436,u16(u32(r2(R+4436))-u32(r2(R+4388))));
w2(R+4438,u16(u32(r2(R+4438))-u32(r2(R+4390))));
}
B71967d:{NFSU2_TR(0x71967d);
w2(R+4448,u16(u32(r2(R+4448))+u32(r2(R+4384))));
w2(R+4450,u16(u32(r2(R+4450))+u32(r2(R+4386))));
w2(R+4452,u16(u32(r2(R+4452))+u32(r2(R+4388))));
w2(R+4454,u16(u32(r2(R+4454))+u32(r2(R+4390))));
}
B719680:{NFSU2_TR(0x719680);
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
B719683:{NFSU2_TR(0x719683);
u8 U[30];
__builtin_memmove((U+5),(R+4448),8);
__builtin_memmove((U+13),(R+4448),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4448),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4449),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4450),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4451),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4452),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4453),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4454),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4455),(U+21),1);
}
B719686:{NFSU2_TR(0x719686);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(r8(R+4432)));
s4(u32(r4(U+0)),r4(U+4));
}
B71968a:{NFSU2_TR(0x71968a);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w4(U+12,u32(r8(R+4448)));
s4(u32(r4(U+8)),r4(U+12));
}
B71968f:{NFSU2_TR(0x71968f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B719690:{NFSU2_TR(0x719690);
__builtin_memmove((R+16),(R+20),4);
}
B719692:{NFSU2_TR(0x719692);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B719693:{NFSU2_TR(0x719693);
__builtin_memmove((R+16),(R+12),4);
}
B719695:{NFSU2_TR(0x719695);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B719696:{NFSU2_TR(0x719696);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B719697:L719697:{c.instructions+=267;NFSU2_TR(0x719697);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B719698:{NFSU2_TR(0x719698);
__builtin_memmove((R+12),(R+16),4);
}
B71969a:{NFSU2_TR(0x71969a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71969b:{NFSU2_TR(0x71969b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71969c:{NFSU2_TR(0x71969c);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B71969f:{NFSU2_TR(0x71969f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7196a2:{NFSU2_TR(0x7196a2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7196a3:{NFSU2_TR(0x7196a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B7196a6:{NFSU2_TR(0x7196a6);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7196aa:{NFSU2_TR(0x7196aa);
__builtin_memmove((R+20),(R+16),4);
}
B7196ac:{NFSU2_TR(0x7196ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x58ull))));
}
B7196af:{NFSU2_TR(0x7196af);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7196b2:{NFSU2_TR(0x7196b2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7196b3:{NFSU2_TR(0x7196b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x8b9940ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B7196ba:{NFSU2_TR(0x7196ba);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7196bb:{NFSU2_TR(0x7196bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7196be:{NFSU2_TR(0x7196be);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7196c0:{NFSU2_TR(0x7196c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7196c1:{NFSU2_TR(0x7196c1);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7196c5:{NFSU2_TR(0x7196c5);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd2ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7196c9:{NFSU2_TR(0x7196c9);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7196cd:{NFSU2_TR(0x7196cd);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd6ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7196d1:{NFSU2_TR(0x7196d1);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7196d3:{NFSU2_TR(0x7196d3);
u8 U[6];
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7196d4:{NFSU2_TR(0x7196d4);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7196d8:{NFSU2_TR(0x7196d8);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe2ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7196dc:{NFSU2_TR(0x7196dc);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7196e0:{NFSU2_TR(0x7196e0);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe6ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7196e4:{NFSU2_TR(0x7196e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7196e7:{NFSU2_TR(0x7196e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7196ea:{NFSU2_TR(0x7196ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7196ed:{NFSU2_TR(0x7196ed);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7196f0:{NFSU2_TR(0x7196f0);
__builtin_memmove((R+4),(R+8),4);
}
B7196f2:{NFSU2_TR(0x7196f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4352,u64(r4(U+4)));
}
B7196f6:{NFSU2_TR(0x7196f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w8(R+4416,u64(r4(U+0)));
}
B7196f9:{NFSU2_TR(0x7196f9);
w4(R+4352,shr<u32>(r4(R+4352),u64(u32(0x10ull))));
w4(R+4356,shr<u32>(r4(R+4356),u64(u32(0x10ull))));
}
B7196fd:{NFSU2_TR(0x7196fd);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(R+4368,u64(r4(U+12)));
}
B719702:{NFSU2_TR(0x719702);
__builtin_memmove((R+4358),(R+4418),2);
__builtin_memmove((R+4356),(R+4354),2);
__builtin_memmove((R+4354),(R+4416),2);
}
B719705:{NFSU2_TR(0x719705);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w8(R+4416,u64(r4(U+8)));
}
B719709:{NFSU2_TR(0x719709);
w4(R+4368,shr<u32>(r4(R+4368),u64(u32(0x10ull))));
w4(R+4372,shr<u32>(r4(R+4372),u64(u32(0x10ull))));
}
B71970d:{NFSU2_TR(0x71970d);
__builtin_memmove((R+4374),(R+4418),2);
__builtin_memmove((R+4372),(R+4370),2);
__builtin_memmove((R+4370),(R+4416),2);
}
B719710:{NFSU2_TR(0x719710);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B719713:{NFSU2_TR(0x719713);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(R+4384,u64(r4(U+12)));
}
B719718:{NFSU2_TR(0x719718);
__builtin_memmove((R+4359),(R+4371),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4370),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4369),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4368),1);
}
B71971b:{NFSU2_TR(0x71971b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w8(R+4416,u64(r4(U+8)));
}
B71971f:{NFSU2_TR(0x71971f);
w4(R+4384,shr<u32>(r4(R+4384),u64(u32(0x10ull))));
w4(R+4388,shr<u32>(r4(R+4388),u64(u32(0x10ull))));
}
B719723:{NFSU2_TR(0x719723);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(R+4368,u64(r4(U+12)));
}
B719728:{NFSU2_TR(0x719728);
__builtin_memmove((R+4390),(R+4418),2);
__builtin_memmove((R+4388),(R+4386),2);
__builtin_memmove((R+4386),(R+4416),2);
}
B71972b:{NFSU2_TR(0x71972b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w8(R+4416,u64(r4(U+8)));
}
B71972f:{NFSU2_TR(0x71972f);
w4(R+4368,shr<u32>(r4(R+4368),u64(u32(0x10ull))));
w4(R+4372,shr<u32>(r4(R+4372),u64(u32(0x10ull))));
}
B719733:{NFSU2_TR(0x719733);
__builtin_memmove((R+4374),(R+4418),2);
__builtin_memmove((R+4372),(R+4370),2);
__builtin_memmove((R+4370),(R+4416),2);
}
B719736:{NFSU2_TR(0x719736);
w8(R+4416,u64(u64(r8(R+4416))^u64(r8(R+4416))));
}
B719739:{NFSU2_TR(0x719739);
__builtin_memmove((R+4391),(R+4371),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4370),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4369),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4368),1);
}
B71973c:{NFSU2_TR(0x71973c);
__builtin_memmove((R+4368),(R+4352),8);
}
B71973f:{NFSU2_TR(0x71973f);
__builtin_memmove((R+4358),(R+4386),2);
__builtin_memmove((R+4356),(R+4354),2);
__builtin_memmove((R+4354),(R+4384),2);
}
B719742:{NFSU2_TR(0x719742);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B719745:{NFSU2_TR(0x719745);
__builtin_memmove((R+4368),(R+4372),2);
__builtin_memmove((R+4370),(R+4388),2);
__builtin_memmove((R+4372),(R+4374),2);
__builtin_memmove((R+4374),(R+4390),2);
}
B719748:{NFSU2_TR(0x719748);
__builtin_memmove((R+4448),(R+4352),8);
}
B71974b:{NFSU2_TR(0x71974b);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+28)),r8(U+0));
}
B71974e:{NFSU2_TR(0x71974e);
__builtin_memmove((R+4384),(R+4368),8);
}
B719751:{NFSU2_TR(0x719751);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B719755:{NFSU2_TR(0x719755);
w8(R+4352,shr<u64>(r8(R+4352),u64(u32(0x20ull))));
}
B719759:{NFSU2_TR(0x719759);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4464,u64(r4(U+4)));
}
B71975d:{NFSU2_TR(0x71975d);
__builtin_memmove((R+4375),(R+4419),1);
__builtin_memmove((R+4374),(R+4371),1);
__builtin_memmove((R+4373),(R+4418),1);
__builtin_memmove((R+4372),(R+4370),1);
__builtin_memmove((R+4371),(R+4417),1);
__builtin_memmove((R+4370),(R+4369),1);
__builtin_memmove((R+4369),(R+4416),1);
}
B719760:{NFSU2_TR(0x719760);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w8(R+4416,u64(r4(U+0)));
}
B719763:{NFSU2_TR(0x719763);
w4(R+4464,shr<u32>(r4(R+4464),u64(u32(0x10ull))));
w4(R+4468,shr<u32>(r4(R+4468),u64(u32(0x10ull))));
}
B719767:{NFSU2_TR(0x719767);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(R+4432,u64(r4(U+12)));
}
B71976c:{NFSU2_TR(0x71976c);
__builtin_memmove((R+4470),(R+4418),2);
__builtin_memmove((R+4468),(R+4466),2);
__builtin_memmove((R+4466),(R+4416),2);
}
B71976f:{NFSU2_TR(0x71976f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w8(R+4416,u64(r4(U+8)));
}
B719773:{NFSU2_TR(0x719773);
w4(R+4432,shr<u32>(r4(R+4432),u64(u32(0x10ull))));
w4(R+4436,shr<u32>(r4(R+4436),u64(u32(0x10ull))));
}
B719777:{NFSU2_TR(0x719777);
__builtin_memmove((R+4438),(R+4418),2);
__builtin_memmove((R+4436),(R+4434),2);
__builtin_memmove((R+4434),(R+4416),2);
}
B71977a:{NFSU2_TR(0x71977a);
w8(R+4416,u64(u64(r8(R+4416))^u64(r8(R+4416))));
}
B71977d:{NFSU2_TR(0x71977d);
__builtin_memmove((R+4359),(R+4419),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4418),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4417),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4416),1);
}
B719780:{NFSU2_TR(0x719780);
w8(R+4384,shr<u64>(r8(R+4384),u64(u32(0x20ull))));
}
B719784:{NFSU2_TR(0x719784);
w2(R+4368,u16(u32(r2(R+4368))-u32(r2(R+4352))));
w2(R+4370,u16(u32(r2(R+4370))-u32(r2(R+4354))));
w2(R+4372,u16(u32(r2(R+4372))-u32(r2(R+4356))));
w2(R+4374,u16(u32(r2(R+4374))-u32(r2(R+4358))));
}
B719787:{NFSU2_TR(0x719787);
__builtin_memmove((R+4471),(R+4435),1);
__builtin_memmove((R+4470),(R+4467),1);
__builtin_memmove((R+4469),(R+4434),1);
__builtin_memmove((R+4468),(R+4466),1);
__builtin_memmove((R+4467),(R+4433),1);
__builtin_memmove((R+4466),(R+4465),1);
__builtin_memmove((R+4465),(R+4432),1);
}
B71978a:{NFSU2_TR(0x71978a);
__builtin_memmove((R+4400),(R+4368),8);
}
B71978d:{NFSU2_TR(0x71978d);
__builtin_memmove((R+4455),(R+4419),1);
__builtin_memmove((R+4454),(R+4451),1);
__builtin_memmove((R+4453),(R+4418),1);
__builtin_memmove((R+4452),(R+4450),1);
__builtin_memmove((R+4451),(R+4417),1);
__builtin_memmove((R+4450),(R+4449),1);
__builtin_memmove((R+4449),(R+4416),1);
}
B719790:{NFSU2_TR(0x719790);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4368))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4370))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4372))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4374))));
}
B719793:{NFSU2_TR(0x719793);
__builtin_memmove((R+4391),(R+4419),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4418),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4417),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4416),1);
}
B719796:{NFSU2_TR(0x719796);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4400))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4402))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4404))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4406))));
}
B719799:{NFSU2_TR(0x719799);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(U+12))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(U+14))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(U+16))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(U+18))));
}
B71979d:{NFSU2_TR(0x71979d);
w2(R+4448,u16(u32(r2(R+4448))-u32(r2(R+4384))));
w2(R+4450,u16(u32(r2(R+4450))-u32(r2(R+4386))));
w2(R+4452,u16(u32(r2(R+4452))-u32(r2(R+4388))));
w2(R+4454,u16(u32(r2(R+4454))-u32(r2(R+4390))));
}
B7197a0:{NFSU2_TR(0x7197a0);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(R+4384,u64(r4(U+12)));
}
B7197a5:{NFSU2_TR(0x7197a5);
w2(R+4448,u16(u32(r2(R+4448))+u32(r2(R+4368))));
w2(R+4450,u16(u32(r2(R+4450))+u32(r2(R+4370))));
w2(R+4452,u16(u32(r2(R+4452))+u32(r2(R+4372))));
w2(R+4454,u16(u32(r2(R+4454))+u32(r2(R+4374))));
}
B7197a8:{NFSU2_TR(0x7197a8);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w8(R+4416,u64(r4(U+8)));
}
B7197ac:{NFSU2_TR(0x7197ac);
w4(R+4384,shr<u32>(r4(R+4384),u64(u32(0x10ull))));
w4(R+4388,shr<u32>(r4(R+4388),u64(u32(0x10ull))));
}
B7197b0:{NFSU2_TR(0x7197b0);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(R+4432,u64(r4(U+12)));
}
B7197b5:{NFSU2_TR(0x7197b5);
__builtin_memmove((R+4390),(R+4418),2);
__builtin_memmove((R+4388),(R+4386),2);
__builtin_memmove((R+4386),(R+4416),2);
}
B7197b8:{NFSU2_TR(0x7197b8);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w8(R+4416,u64(r4(U+8)));
}
B7197bc:{NFSU2_TR(0x7197bc);
w4(R+4432,shr<u32>(r4(R+4432),u64(u32(0x10ull))));
w4(R+4436,shr<u32>(r4(R+4436),u64(u32(0x10ull))));
}
B7197c0:{NFSU2_TR(0x7197c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7197c3:{NFSU2_TR(0x7197c3);
__builtin_memmove((R+4438),(R+4418),2);
__builtin_memmove((R+4436),(R+4434),2);
__builtin_memmove((R+4434),(R+4416),2);
}
B7197c6:{NFSU2_TR(0x7197c6);
{wv<8>((R+4448),uo::psraw<8>(rv<8>((R+4448)),V(0x3ull)));}
}
B7197ca:{NFSU2_TR(0x7197ca);
w8(R+4416,u64(u64(r8(R+4416))^u64(r8(R+4416))));
}
B7197cd:{NFSU2_TR(0x7197cd);
__builtin_memmove((R+4391),(R+4435),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4434),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4433),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4432),1);
}
B7197d0:{NFSU2_TR(0x7197d0);
__builtin_memmove((R+4432),(R+4464),8);
}
B7197d3:{NFSU2_TR(0x7197d3);
__builtin_memmove((R+4368),(R+4448),8);
}
B7197d6:{NFSU2_TR(0x7197d6);
__builtin_memmove((R+4432),(R+4436),2);
__builtin_memmove((R+4434),(R+4388),2);
__builtin_memmove((R+4436),(R+4438),2);
__builtin_memmove((R+4438),(R+4390),2);
}
B7197d9:{NFSU2_TR(0x7197d9);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B7197dd:{NFSU2_TR(0x7197dd);
__builtin_memmove((R+4470),(R+4386),2);
__builtin_memmove((R+4468),(R+4466),2);
__builtin_memmove((R+4466),(R+4384),2);
}
B7197e0:{NFSU2_TR(0x7197e0);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B7197e4:{NFSU2_TR(0x7197e4);
{wv<8>((R+4448),uo::psraw<8>(rv<8>((R+4448)),V(0xfull)));}
}
B7197e8:{NFSU2_TR(0x7197e8);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4384),(U+0),8);
}
B7197eb:{NFSU2_TR(0x7197eb);
__builtin_memmove((R+4352),(R+4464),8);
}
B7197ee:{NFSU2_TR(0x7197ee);
w8(R+4464,shr<u64>(r8(R+4464),u64(u32(0x20ull))));
}
B7197f2:{NFSU2_TR(0x7197f2);
w8(R+4368,u64(u64(r8(R+4368))^u64(r8(R+4448))));
}
B7197f5:{NFSU2_TR(0x7197f5);
{wv<8>((R+4368),uo::psubsw<8>(rv<8>((R+4368)),rv<8>((R+4448))));}
}
B7197f8:{NFSU2_TR(0x7197f8);
__builtin_memmove((R+4439),(R+4419),1);
__builtin_memmove((R+4438),(R+4435),1);
__builtin_memmove((R+4437),(R+4418),1);
__builtin_memmove((R+4436),(R+4434),1);
__builtin_memmove((R+4435),(R+4417),1);
__builtin_memmove((R+4434),(R+4433),1);
__builtin_memmove((R+4433),(R+4416),1);
}
B7197fb:{NFSU2_TR(0x7197fb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
w8(R+4448,u64(u64(r8(R+4448))|u64(r8(U+4))));
}
B7197ff:{NFSU2_TR(0x7197ff);
__builtin_memmove((R+4400),(R+4384),8);
}
B719802:{NFSU2_TR(0x719802);
__builtin_memmove((R+4471),(R+4419),1);
__builtin_memmove((R+4470),(R+4467),1);
__builtin_memmove((R+4469),(R+4418),1);
__builtin_memmove((R+4468),(R+4466),1);
__builtin_memmove((R+4467),(R+4417),1);
__builtin_memmove((R+4466),(R+4465),1);
__builtin_memmove((R+4465),(R+4416),1);
}
B719805:{NFSU2_TR(0x719805);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(R+4368))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(R+4370))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(R+4372))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(R+4374))));
}
B719808:{NFSU2_TR(0x719808);
__builtin_memmove((R+4416),(R+4400),8);
}
B71980b:{NFSU2_TR(0x71980b);
{wv<8>((R+4400),uo::psraw<8>(rv<8>((R+4400)),V(0xfull)));}
}
B71980f:{NFSU2_TR(0x71980f);
w2(R+4432,u16(u32(r2(R+4432))-u32(r2(R+4464))));
w2(R+4434,u16(u32(r2(R+4434))-u32(r2(R+4466))));
w2(R+4436,u16(u32(r2(R+4436))-u32(r2(R+4468))));
w2(R+4438,u16(u32(r2(R+4438))-u32(r2(R+4470))));
}
B719812:{NFSU2_TR(0x719812);
w8(R+4416,u64(u64(r8(R+4416))^u64(r8(R+4400))));
}
B719815:{NFSU2_TR(0x719815);
{wv<8>((R+4416),uo::psubsw<8>(rv<8>((R+4416)),rv<8>((R+4400))));}
}
B719818:{NFSU2_TR(0x719818);
w8(R+4400,u64(u64(r8(R+4400))^u64(r8(R+4400))));
}
B71981b:{NFSU2_TR(0x71981b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4368,u64(r4(U+4)));
}
B71981f:{NFSU2_TR(0x71981f);
{wv<8>((R+4384),uo::psubusw<8>(rv<8>((R+4384)),rv<8>((R+4416))));}
}
B719822:{NFSU2_TR(0x719822);
__builtin_memmove((R+4359),(R+4403),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4402),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4401),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4400),1);
}
B719825:{NFSU2_TR(0x719825);
__builtin_memmove((R+4464),(R+4432),8);
}
B719828:{NFSU2_TR(0x719828);
w2(R+4464,u16(u32(r2(R+4464))+u32(r2(R+4432))));
w2(R+4466,u16(u32(r2(R+4466))+u32(r2(R+4434))));
w2(R+4468,u16(u32(r2(R+4468))+u32(r2(R+4436))));
w2(R+4470,u16(u32(r2(R+4470))+u32(r2(R+4438))));
}
B71982b:{NFSU2_TR(0x71982b);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4448))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4450))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4452))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4454))));
}
B71982e:{NFSU2_TR(0x71982e);
__builtin_memmove((R+4375),(R+4403),1);
__builtin_memmove((R+4374),(R+4371),1);
__builtin_memmove((R+4373),(R+4402),1);
__builtin_memmove((R+4372),(R+4370),1);
__builtin_memmove((R+4371),(R+4401),1);
__builtin_memmove((R+4370),(R+4369),1);
__builtin_memmove((R+4369),(R+4400),1);
}
B719831:{NFSU2_TR(0x719831);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4464))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4466))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4468))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4470))));
}
B719834:{NFSU2_TR(0x719834);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(U+12))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(U+14))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(U+16))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(U+18))));
}
B719838:{NFSU2_TR(0x719838);
w2(R+4352,u16(u32(r2(R+4352))-u32(r2(R+4368))));
w2(R+4354,u16(u32(r2(R+4354))-u32(r2(R+4370))));
w2(R+4356,u16(u32(r2(R+4356))-u32(r2(R+4372))));
w2(R+4358,u16(u32(r2(R+4358))-u32(r2(R+4374))));
}
B71983b:{NFSU2_TR(0x71983b);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4432))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4434))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4436))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4438))));
}
B71983e:{NFSU2_TR(0x71983e);
w8(R+4448,u64(u64(r8(R+4448))^u64(r8(R+4448))));
}
B719841:{NFSU2_TR(0x719841);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4464,u64(r4(U+4)));
}
B719845:{NFSU2_TR(0x719845);
{wv<8>((R+4352),uo::psraw<8>(rv<8>((R+4352)),V(0x3ull)));}
}
B719849:{NFSU2_TR(0x719849);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4400,u64(r4(U+4)));
}
B71984d:{NFSU2_TR(0x71984d);
__builtin_memmove((R+4471),(R+4451),1);
__builtin_memmove((R+4470),(R+4467),1);
__builtin_memmove((R+4469),(R+4450),1);
__builtin_memmove((R+4468),(R+4466),1);
__builtin_memmove((R+4467),(R+4449),1);
__builtin_memmove((R+4466),(R+4465),1);
__builtin_memmove((R+4465),(R+4448),1);
}
B719850:{NFSU2_TR(0x719850);
w2(R+4464,u16(u32(r2(R+4464))-u32(r2(R+4384))));
w2(R+4466,u16(u32(r2(R+4466))-u32(r2(R+4386))));
w2(R+4468,u16(u32(r2(R+4468))-u32(r2(R+4388))));
w2(R+4470,u16(u32(r2(R+4470))-u32(r2(R+4390))));
}
B719853:{NFSU2_TR(0x719853);
__builtin_memmove((R+4407),(R+4451),1);
__builtin_memmove((R+4406),(R+4403),1);
__builtin_memmove((R+4405),(R+4450),1);
__builtin_memmove((R+4404),(R+4402),1);
__builtin_memmove((R+4403),(R+4449),1);
__builtin_memmove((R+4402),(R+4401),1);
__builtin_memmove((R+4401),(R+4448),1);
}
B719856:{NFSU2_TR(0x719856);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4384))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4386))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4388))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4390))));
}
B719859:{NFSU2_TR(0x719859);
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
B71985c:{NFSU2_TR(0x71985c);
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
B71985f:{NFSU2_TR(0x71985f);
__builtin_memmove((R+4368),(R+4352),8);
}
B719862:{NFSU2_TR(0x719862);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4384),(U+0),8);
}
B719865:{NFSU2_TR(0x719865);
{wv<8>((R+4352),uo::psraw<8>(rv<8>((R+4352)),V(0xfull)));}
}
B719869:{NFSU2_TR(0x719869);
__builtin_memmove((R+4407),(R+4467),1);
__builtin_memmove((R+4406),(R+4403),1);
__builtin_memmove((R+4405),(R+4466),1);
__builtin_memmove((R+4404),(R+4402),1);
__builtin_memmove((R+4403),(R+4465),1);
__builtin_memmove((R+4402),(R+4401),1);
__builtin_memmove((R+4401),(R+4464),1);
}
B71986c:{NFSU2_TR(0x71986c);
__builtin_memmove((R+4464),(R+4352),8);
}
B71986f:{NFSU2_TR(0x71986f);
w4(R+0,u32(r8(R+4400)));
}
B719872:{NFSU2_TR(0x719872);
w8(R+4368,u64(u64(r8(R+4368))^u64(r8(R+4352))));
}
B719875:{NFSU2_TR(0x719875);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B719879:{NFSU2_TR(0x719879);
{wv<8>((R+4368),uo::psubsw<8>(rv<8>((R+4368)),rv<8>((R+4352))));}
}
B71987c:{NFSU2_TR(0x71987c);
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
B71987f:{NFSU2_TR(0x71987f);
__builtin_memmove((R+4432),(R+4384),8);
}
B719882:{NFSU2_TR(0x719882);
u8 U[14];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),2);
s2(u32(r4(U+8)),r2(U+12));
}
B719887:{NFSU2_TR(0x719887);
w8(R+4400,shr<u64>(r8(R+4400),u64(u32(0x20ull))));
}
B71988b:{NFSU2_TR(0x71988b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
w8(R+4464,u64(u64(r8(R+4464))|u64(r8(U+4))));
}
B71988f:{NFSU2_TR(0x71988f);
w2(R+4432,u16(u32(r2(R+4432))-u32(r2(R+4368))));
w2(R+4434,u16(u32(r2(R+4434))-u32(r2(R+4370))));
w2(R+4436,u16(u32(r2(R+4436))-u32(r2(R+4372))));
w2(R+4438,u16(u32(r2(R+4438))-u32(r2(R+4374))));
}
B719892:{NFSU2_TR(0x719892);
w4(R+0,u32(r8(R+4400)));
}
B719895:{NFSU2_TR(0x719895);
__builtin_memmove((R+4416),(R+4432),8);
}
B719898:{NFSU2_TR(0x719898);
u8 U[14];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),2);
s2(u32(r4(U+8)),r2(U+12));
}
B71989d:{NFSU2_TR(0x71989d);
{wv<8>((R+4432),uo::psraw<8>(rv<8>((R+4432)),V(0xfull)));}
}
B7198a1:{NFSU2_TR(0x7198a1);
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
B7198a4:{NFSU2_TR(0x7198a4);
w8(R+4416,u64(u64(r8(R+4416))^u64(r8(R+4432))));
}
B7198a7:{NFSU2_TR(0x7198a7);
u8 U[14];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),2);
s2(u32(r4(U+8)),r2(U+12));
}
B7198ac:{NFSU2_TR(0x7198ac);
{wv<8>((R+4416),uo::psubsw<8>(rv<8>((R+4416)),rv<8>((R+4432))));}
}
B7198af:{NFSU2_TR(0x7198af);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4432,u64(r4(U+4)));
}
B7198b3:{NFSU2_TR(0x7198b3);
{wv<8>((R+4384),uo::psubusw<8>(rv<8>((R+4384)),rv<8>((R+4416))));}
}
B7198b6:{NFSU2_TR(0x7198b6);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4464))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4466))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4468))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4470))));
}
B7198b9:{NFSU2_TR(0x7198b9);
w8(R+4448,u64(u64(r8(R+4448))^u64(r8(R+4448))));
}
B7198bc:{NFSU2_TR(0x7198bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4400,u64(r4(U+4)));
}
B7198c0:{NFSU2_TR(0x7198c0);
__builtin_memmove((R+4439),(R+4451),1);
__builtin_memmove((R+4438),(R+4435),1);
__builtin_memmove((R+4437),(R+4450),1);
__builtin_memmove((R+4436),(R+4434),1);
__builtin_memmove((R+4435),(R+4449),1);
__builtin_memmove((R+4434),(R+4433),1);
__builtin_memmove((R+4433),(R+4448),1);
}
B7198c3:{NFSU2_TR(0x7198c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B7198c6:{NFSU2_TR(0x7198c6);
__builtin_memmove((R+4407),(R+4451),1);
__builtin_memmove((R+4406),(R+4403),1);
__builtin_memmove((R+4405),(R+4450),1);
__builtin_memmove((R+4404),(R+4402),1);
__builtin_memmove((R+4403),(R+4449),1);
__builtin_memmove((R+4402),(R+4401),1);
__builtin_memmove((R+4401),(R+4448),1);
}
B7198c9:{NFSU2_TR(0x7198c9);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4384))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4386))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4388))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4390))));
}
B7198cc:{NFSU2_TR(0x7198cc);
w2(R+4432,u16(u32(r2(R+4432))-u32(r2(R+4384))));
w2(R+4434,u16(u32(r2(R+4434))-u32(r2(R+4386))));
w2(R+4436,u16(u32(r2(R+4436))-u32(r2(R+4388))));
w2(R+4438,u16(u32(r2(R+4438))-u32(r2(R+4390))));
}
B7198cf:{NFSU2_TR(0x7198cf);
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
B7198d2:{NFSU2_TR(0x7198d2);
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
B7198d5:{NFSU2_TR(0x7198d5);
__builtin_memmove((R+4407),(R+4435),1);
__builtin_memmove((R+4406),(R+4403),1);
__builtin_memmove((R+4405),(R+4434),1);
__builtin_memmove((R+4404),(R+4402),1);
__builtin_memmove((R+4403),(R+4433),1);
__builtin_memmove((R+4402),(R+4401),1);
__builtin_memmove((R+4401),(R+4432),1);
}
B7198d8:{NFSU2_TR(0x7198d8);
w4(R+0,u32(r8(R+4400)));
}
B7198db:{NFSU2_TR(0x7198db);
w8(R+4400,shr<u64>(r8(R+4400),u64(u32(0x20ull))));
}
B7198df:{NFSU2_TR(0x7198df);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7198e3:{NFSU2_TR(0x7198e3);
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
B7198e6:{NFSU2_TR(0x7198e6);
u8 U[14];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),2);
s2(u32(r4(U+8)),r2(U+12));
}
B7198eb:{NFSU2_TR(0x7198eb);
w4(R+0,u32(r8(R+4400)));
}
B7198ee:{NFSU2_TR(0x7198ee);
u8 U[14];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),2);
s2(u32(r4(U+8)),r2(U+12));
}
B7198f3:{NFSU2_TR(0x7198f3);
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
B7198f6:{NFSU2_TR(0x7198f6);
u8 U[14];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),2);
s2(u32(r4(U+8)),r2(U+12));
}
B7198fb:{NFSU2_TR(0x7198fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7198fe:{NFSU2_TR(0x7198fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B719901:{NFSU2_TR(0x719901);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4352,u64(r4(U+4)));
}
B719905:{NFSU2_TR(0x719905);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w8(R+4416,u64(r4(U+0)));
}
B719908:{NFSU2_TR(0x719908);
w4(R+4352,shr<u32>(r4(R+4352),u64(u32(0x10ull))));
w4(R+4356,shr<u32>(r4(R+4356),u64(u32(0x10ull))));
}
B71990c:{NFSU2_TR(0x71990c);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(R+4368,u64(r4(U+12)));
}
B719911:{NFSU2_TR(0x719911);
__builtin_memmove((R+4358),(R+4418),2);
__builtin_memmove((R+4356),(R+4354),2);
__builtin_memmove((R+4354),(R+4416),2);
}
B719914:{NFSU2_TR(0x719914);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w8(R+4416,u64(r4(U+8)));
}
B719918:{NFSU2_TR(0x719918);
w4(R+4368,shr<u32>(r4(R+4368),u64(u32(0x10ull))));
w4(R+4372,shr<u32>(r4(R+4372),u64(u32(0x10ull))));
}
B71991c:{NFSU2_TR(0x71991c);
__builtin_memmove((R+4374),(R+4418),2);
__builtin_memmove((R+4372),(R+4370),2);
__builtin_memmove((R+4370),(R+4416),2);
}
B71991f:{NFSU2_TR(0x71991f);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(R+4384,u64(r4(U+12)));
}
B719924:{NFSU2_TR(0x719924);
__builtin_memmove((R+4359),(R+4371),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4370),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4369),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4368),1);
}
B719927:{NFSU2_TR(0x719927);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w8(R+4416,u64(r4(U+8)));
}
B71992b:{NFSU2_TR(0x71992b);
w4(R+4384,shr<u32>(r4(R+4384),u64(u32(0x10ull))));
w4(R+4388,shr<u32>(r4(R+4388),u64(u32(0x10ull))));
}
B71992f:{NFSU2_TR(0x71992f);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(R+4368,u64(r4(U+12)));
}
B719934:{NFSU2_TR(0x719934);
__builtin_memmove((R+4390),(R+4418),2);
__builtin_memmove((R+4388),(R+4386),2);
__builtin_memmove((R+4386),(R+4416),2);
}
B719937:{NFSU2_TR(0x719937);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w8(R+4416,u64(r4(U+8)));
}
B71993b:{NFSU2_TR(0x71993b);
w4(R+4368,shr<u32>(r4(R+4368),u64(u32(0x10ull))));
w4(R+4372,shr<u32>(r4(R+4372),u64(u32(0x10ull))));
}
B71993f:{NFSU2_TR(0x71993f);
__builtin_memmove((R+4374),(R+4418),2);
__builtin_memmove((R+4372),(R+4370),2);
__builtin_memmove((R+4370),(R+4416),2);
}
B719942:{NFSU2_TR(0x719942);
w8(R+4416,u64(u64(r8(R+4416))^u64(r8(R+4416))));
}
B719945:{NFSU2_TR(0x719945);
__builtin_memmove((R+4391),(R+4371),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4370),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4369),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4368),1);
}
B719948:{NFSU2_TR(0x719948);
__builtin_memmove((R+4368),(R+4352),8);
}
B71994b:{NFSU2_TR(0x71994b);
__builtin_memmove((R+4358),(R+4386),2);
__builtin_memmove((R+4356),(R+4354),2);
__builtin_memmove((R+4354),(R+4384),2);
}
B71994e:{NFSU2_TR(0x71994e);
__builtin_memmove((R+4368),(R+4372),2);
__builtin_memmove((R+4370),(R+4388),2);
__builtin_memmove((R+4372),(R+4374),2);
__builtin_memmove((R+4374),(R+4390),2);
}
B719951:{NFSU2_TR(0x719951);
__builtin_memmove((R+4448),(R+4352),8);
}
B719954:{NFSU2_TR(0x719954);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+28)),r8(U+0));
}
B719957:{NFSU2_TR(0x719957);
__builtin_memmove((R+4384),(R+4368),8);
}
B71995a:{NFSU2_TR(0x71995a);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71995e:{NFSU2_TR(0x71995e);
w8(R+4352,shr<u64>(r8(R+4352),u64(u32(0x20ull))));
}
B719962:{NFSU2_TR(0x719962);
__builtin_memmove((R+4375),(R+4419),1);
__builtin_memmove((R+4374),(R+4371),1);
__builtin_memmove((R+4373),(R+4418),1);
__builtin_memmove((R+4372),(R+4370),1);
__builtin_memmove((R+4371),(R+4417),1);
__builtin_memmove((R+4370),(R+4369),1);
__builtin_memmove((R+4369),(R+4416),1);
}
B719965:{NFSU2_TR(0x719965);
__builtin_memmove((R+4359),(R+4419),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4418),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4417),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4416),1);
}
B719968:{NFSU2_TR(0x719968);
w8(R+4384,shr<u64>(r8(R+4384),u64(u32(0x20ull))));
}
B71996c:{NFSU2_TR(0x71996c);
w2(R+4368,u16(u32(r2(R+4368))-u32(r2(R+4352))));
w2(R+4370,u16(u32(r2(R+4370))-u32(r2(R+4354))));
w2(R+4372,u16(u32(r2(R+4372))-u32(r2(R+4356))));
w2(R+4374,u16(u32(r2(R+4374))-u32(r2(R+4358))));
}
B71996f:{NFSU2_TR(0x71996f);
__builtin_memmove((R+4400),(R+4368),8);
}
B719972:{NFSU2_TR(0x719972);
__builtin_memmove((R+4455),(R+4419),1);
__builtin_memmove((R+4454),(R+4451),1);
__builtin_memmove((R+4453),(R+4418),1);
__builtin_memmove((R+4452),(R+4450),1);
__builtin_memmove((R+4451),(R+4417),1);
__builtin_memmove((R+4450),(R+4449),1);
__builtin_memmove((R+4449),(R+4416),1);
}
B719975:{NFSU2_TR(0x719975);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4368))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4370))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4372))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4374))));
}
B719978:{NFSU2_TR(0x719978);
__builtin_memmove((R+4391),(R+4419),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4418),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4417),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4416),1);
}
B71997b:{NFSU2_TR(0x71997b);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4400))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4402))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4404))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4406))));
}
B71997e:{NFSU2_TR(0x71997e);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(U+12))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(U+14))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(U+16))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(U+18))));
}
B719982:{NFSU2_TR(0x719982);
w2(R+4448,u16(u32(r2(R+4448))-u32(r2(R+4384))));
w2(R+4450,u16(u32(r2(R+4450))-u32(r2(R+4386))));
w2(R+4452,u16(u32(r2(R+4452))-u32(r2(R+4388))));
w2(R+4454,u16(u32(r2(R+4454))-u32(r2(R+4390))));
}
B719985:{NFSU2_TR(0x719985);
w2(R+4448,u16(u32(r2(R+4448))+u32(r2(R+4368))));
w2(R+4450,u16(u32(r2(R+4450))+u32(r2(R+4370))));
w2(R+4452,u16(u32(r2(R+4452))+u32(r2(R+4372))));
w2(R+4454,u16(u32(r2(R+4454))+u32(r2(R+4374))));
}
B719988:{NFSU2_TR(0x719988);
{wv<8>((R+4448),uo::psraw<8>(rv<8>((R+4448)),V(0x3ull)));}
}
B71998c:{NFSU2_TR(0x71998c);
__builtin_memmove((R+4368),(R+4448),8);
}
B71998f:{NFSU2_TR(0x71998f);
{wv<8>((R+4448),uo::psraw<8>(rv<8>((R+4448)),V(0xfull)));}
}
B719993:{NFSU2_TR(0x719993);
w8(R+4368,u64(u64(r8(R+4368))^u64(r8(R+4448))));
}
B719996:{NFSU2_TR(0x719996);
{wv<8>((R+4368),uo::psubsw<8>(rv<8>((R+4368)),rv<8>((R+4448))));}
}
B719999:{NFSU2_TR(0x719999);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
w8(R+4448,u64(u64(r8(R+4448))|u64(r8(U+4))));
}
B71999d:{NFSU2_TR(0x71999d);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4384),(U+0),8);
}
B7199a0:{NFSU2_TR(0x7199a0);
__builtin_memmove((R+4400),(R+4384),8);
}
B7199a3:{NFSU2_TR(0x7199a3);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(R+4368))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(R+4370))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(R+4372))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(R+4374))));
}
B7199a6:{NFSU2_TR(0x7199a6);
__builtin_memmove((R+4416),(R+4400),8);
}
B7199a9:{NFSU2_TR(0x7199a9);
{wv<8>((R+4400),uo::psraw<8>(rv<8>((R+4400)),V(0xfull)));}
}
B7199ad:{NFSU2_TR(0x7199ad);
w8(R+4416,u64(u64(r8(R+4416))^u64(r8(R+4400))));
}
B7199b0:{NFSU2_TR(0x7199b0);
{wv<8>((R+4416),uo::psubsw<8>(rv<8>((R+4416)),rv<8>((R+4400))));}
}
B7199b3:{NFSU2_TR(0x7199b3);
{wv<8>((R+4384),uo::psubusw<8>(rv<8>((R+4384)),rv<8>((R+4416))));}
}
B7199b6:{NFSU2_TR(0x7199b6);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4448))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4450))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4452))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4454))));
}
B7199b9:{NFSU2_TR(0x7199b9);
w8(R+4432,u64(u64(r8(R+4432))^u64(r8(R+4432))));
}
B7199bc:{NFSU2_TR(0x7199bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4464,u64(r4(U+4)));
}
B7199c0:{NFSU2_TR(0x7199c0);
__builtin_memmove((R+4471),(R+4435),1);
__builtin_memmove((R+4470),(R+4467),1);
__builtin_memmove((R+4469),(R+4434),1);
__builtin_memmove((R+4468),(R+4466),1);
__builtin_memmove((R+4467),(R+4433),1);
__builtin_memmove((R+4466),(R+4465),1);
__builtin_memmove((R+4465),(R+4432),1);
}
B7199c3:{NFSU2_TR(0x7199c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4400,u64(r4(U+4)));
}
B7199c7:{NFSU2_TR(0x7199c7);
w2(R+4464,u16(u32(r2(R+4464))-u32(r2(R+4384))));
w2(R+4466,u16(u32(r2(R+4466))-u32(r2(R+4386))));
w2(R+4468,u16(u32(r2(R+4468))-u32(r2(R+4388))));
w2(R+4470,u16(u32(r2(R+4470))-u32(r2(R+4390))));
}
B7199ca:{NFSU2_TR(0x7199ca);
__builtin_memmove((R+4407),(R+4435),1);
__builtin_memmove((R+4406),(R+4403),1);
__builtin_memmove((R+4405),(R+4434),1);
__builtin_memmove((R+4404),(R+4402),1);
__builtin_memmove((R+4403),(R+4433),1);
__builtin_memmove((R+4402),(R+4401),1);
__builtin_memmove((R+4401),(R+4432),1);
}
B7199cd:{NFSU2_TR(0x7199cd);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4384))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4386))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4388))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4390))));
}
B7199d0:{NFSU2_TR(0x7199d0);
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
B7199d3:{NFSU2_TR(0x7199d3);
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
B7199d6:{NFSU2_TR(0x7199d6);
__builtin_memmove((R+4407),(R+4467),1);
__builtin_memmove((R+4406),(R+4403),1);
__builtin_memmove((R+4405),(R+4466),1);
__builtin_memmove((R+4404),(R+4402),1);
__builtin_memmove((R+4403),(R+4465),1);
__builtin_memmove((R+4402),(R+4401),1);
__builtin_memmove((R+4401),(R+4464),1);
}
B7199d9:{NFSU2_TR(0x7199d9);
w4(R+0,u32(r8(R+4400)));
}
B7199dc:{NFSU2_TR(0x7199dc);
w8(R+4400,shr<u64>(r8(R+4400),u64(u32(0x20ull))));
}
B7199e0:{NFSU2_TR(0x7199e0);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7199e4:{NFSU2_TR(0x7199e4);
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
B7199e7:{NFSU2_TR(0x7199e7);
u8 U[14];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),2);
s2(u32(r4(U+8)),r2(U+12));
}
B7199ec:{NFSU2_TR(0x7199ec);
w4(R+0,u32(r8(R+4400)));
}
B7199ef:{NFSU2_TR(0x7199ef);
u8 U[14];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),2);
s2(u32(r4(U+8)),r2(U+12));
}
B7199f4:{NFSU2_TR(0x7199f4);
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
B7199f7:{NFSU2_TR(0x7199f7);
u8 U[14];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),2);
s2(u32(r4(U+8)),r2(U+12));
}
B7199fc:{NFSU2_TR(0x7199fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7199fd:{NFSU2_TR(0x7199fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7199fe:{NFSU2_TR(0x7199fe);
__builtin_memmove((R+16),(R+20),4);
}
B719a00:{NFSU2_TR(0x719a00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B719a01:{NFSU2_TR(0x719a01);
__builtin_memmove((R+16),(R+12),4);
}
B719a03:{NFSU2_TR(0x719a03);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B719a04:{NFSU2_TR(0x719a04);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B719a05:L719a05:{c.instructions+=153;NFSU2_TR(0x719a05);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B719a06:{NFSU2_TR(0x719a06);
__builtin_memmove((R+12),(R+16),4);
}
B719a08:{NFSU2_TR(0x719a08);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B719a09:{NFSU2_TR(0x719a09);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B719a0a:{NFSU2_TR(0x719a0a);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B719a0d:{NFSU2_TR(0x719a0d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B719a10:{NFSU2_TR(0x719a10);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B719a11:{NFSU2_TR(0x719a11);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B719a14:{NFSU2_TR(0x719a14);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B719a18:{NFSU2_TR(0x719a18);
__builtin_memmove((R+20),(R+16),4);
}
B719a1a:{NFSU2_TR(0x719a1a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x3cull))));
}
B719a1d:{NFSU2_TR(0x719a1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B719a20:{NFSU2_TR(0x719a20);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x8b9940ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B719a27:{NFSU2_TR(0x719a27);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B719a28:{NFSU2_TR(0x719a28);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B719a2b:{NFSU2_TR(0x719a2b);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B719a2d:{NFSU2_TR(0x719a2d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B719a2e:{NFSU2_TR(0x719a2e);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B719a32:{NFSU2_TR(0x719a32);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd2ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B719a36:{NFSU2_TR(0x719a36);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B719a3a:{NFSU2_TR(0x719a3a);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd6ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B719a3e:{NFSU2_TR(0x719a3e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B719a40:{NFSU2_TR(0x719a40);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B719a41:{NFSU2_TR(0x719a41);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B719a45:{NFSU2_TR(0x719a45);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe2ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B719a49:{NFSU2_TR(0x719a49);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B719a4d:{NFSU2_TR(0x719a4d);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe6ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B719a51:{NFSU2_TR(0x719a51);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B719a54:{NFSU2_TR(0x719a54);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B719a57:{NFSU2_TR(0x719a57);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B719a59:{NFSU2_TR(0x719a59);
u8 U[6];
w1(R+512,u8((r4(R+4))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(R+4),r4(R+8)));
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B719a5b:{NFSU2_TR(0x719a5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B719a5e:{NFSU2_TR(0x719a5e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w8(R+4352,u64(r4(U+0)));
}
B719a61:{NFSU2_TR(0x719a61);
w8(R+4464,u64(u64(r8(R+4464))^u64(r8(R+4464))));
}
B719a64:{NFSU2_TR(0x719a64);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w8(R+4368,u64(r4(U+8)));
}
B719a68:{NFSU2_TR(0x719a68);
__builtin_memmove((R+4359),(R+4467),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4466),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4465),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4464),1);
}
B719a6b:{NFSU2_TR(0x719a6b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w8(R+4384,u64(r4(U+8)));
}
B719a6f:{NFSU2_TR(0x719a6f);
__builtin_memmove((R+4375),(R+4467),1);
__builtin_memmove((R+4374),(R+4371),1);
__builtin_memmove((R+4373),(R+4466),1);
__builtin_memmove((R+4372),(R+4370),1);
__builtin_memmove((R+4371),(R+4465),1);
__builtin_memmove((R+4370),(R+4369),1);
__builtin_memmove((R+4369),(R+4464),1);
}
B719a72:{NFSU2_TR(0x719a72);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w8(R+4400,u64(r4(U+8)));
}
B719a76:{NFSU2_TR(0x719a76);
__builtin_memmove((R+4432),(R+4352),8);
}
B719a79:{NFSU2_TR(0x719a79);
__builtin_memmove((R+4448),(R+4368),8);
}
B719a7c:{NFSU2_TR(0x719a7c);
w2(R+4352,u16(u32(r2(R+4352))-u32(r2(R+4368))));
w2(R+4354,u16(u32(r2(R+4354))-u32(r2(R+4370))));
w2(R+4356,u16(u32(r2(R+4356))-u32(r2(R+4372))));
w2(R+4358,u16(u32(r2(R+4358))-u32(r2(R+4374))));
}
B719a7f:{NFSU2_TR(0x719a7f);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B719a82:{NFSU2_TR(0x719a82);
__builtin_memmove((R+4368),(R+4352),8);
}
B719a85:{NFSU2_TR(0x719a85);
__builtin_memmove((R+4407),(R+4467),1);
__builtin_memmove((R+4406),(R+4403),1);
__builtin_memmove((R+4405),(R+4466),1);
__builtin_memmove((R+4404),(R+4402),1);
__builtin_memmove((R+4403),(R+4465),1);
__builtin_memmove((R+4402),(R+4401),1);
__builtin_memmove((R+4401),(R+4464),1);
}
B719a88:{NFSU2_TR(0x719a88);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4368))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4370))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4372))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4374))));
}
B719a8b:{NFSU2_TR(0x719a8b);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(R+4384))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(R+4386))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(R+4388))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(R+4390))));
}
B719a8e:{NFSU2_TR(0x719a8e);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4352))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4354))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4356))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4358))));
}
B719a91:{NFSU2_TR(0x719a91);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4368))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4370))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4372))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4374))));
}
B719a94:{NFSU2_TR(0x719a94);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+18))));
}
B719a98:{NFSU2_TR(0x719a98);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B719a9b:{NFSU2_TR(0x719a9b);
{wv<8>((R+4400),uo::psraw<8>(rv<8>((R+4400)),V(0x3ull)));}
}
B719a9f:{NFSU2_TR(0x719a9f);
__builtin_memmove((R+4368),(R+4400),8);
}
B719aa2:{NFSU2_TR(0x719aa2);
{wv<8>((R+4400),uo::psraw<8>(rv<8>((R+4400)),V(0xfull)));}
}
B719aa6:{NFSU2_TR(0x719aa6);
w8(R+4368,u64(u64(r8(R+4368))^u64(r8(R+4400))));
}
B719aa9:{NFSU2_TR(0x719aa9);
{wv<8>((R+4368),uo::psubsw<8>(rv<8>((R+4368)),rv<8>((R+4400))));}
}
B719aac:{NFSU2_TR(0x719aac);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
w8(R+4400,u64(u64(r8(R+4400))|u64(r8(U+4))));
}
B719ab0:{NFSU2_TR(0x719ab0);
__builtin_memmove((R+4384),(R+4352),8);
}
B719ab3:{NFSU2_TR(0x719ab3);
w2(R+4352,u16(u32(r2(R+4352))-u32(r2(R+4368))));
w2(R+4354,u16(u32(r2(R+4354))-u32(r2(R+4370))));
w2(R+4356,u16(u32(r2(R+4356))-u32(r2(R+4372))));
w2(R+4358,u16(u32(r2(R+4358))-u32(r2(R+4374))));
}
B719ab6:{NFSU2_TR(0x719ab6);
__builtin_memmove((R+4416),(R+4352),8);
}
B719ab9:{NFSU2_TR(0x719ab9);
{wv<8>((R+4352),uo::psraw<8>(rv<8>((R+4352)),V(0xfull)));}
}
B719abd:{NFSU2_TR(0x719abd);
w8(R+4416,u64(u64(r8(R+4416))^u64(r8(R+4352))));
}
B719ac0:{NFSU2_TR(0x719ac0);
{wv<8>((R+4416),uo::psubsw<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B719ac3:{NFSU2_TR(0x719ac3);
{wv<8>((R+4384),uo::psubusw<8>(rv<8>((R+4384)),rv<8>((R+4416))));}
}
B719ac6:{NFSU2_TR(0x719ac6);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4400))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4402))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4404))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4406))));
}
B719ac9:{NFSU2_TR(0x719ac9);
w2(R+4432,u16(u32(r2(R+4432))-u32(r2(R+4384))));
w2(R+4434,u16(u32(r2(R+4434))-u32(r2(R+4386))));
w2(R+4436,u16(u32(r2(R+4436))-u32(r2(R+4388))));
w2(R+4438,u16(u32(r2(R+4438))-u32(r2(R+4390))));
}
B719acc:{NFSU2_TR(0x719acc);
w2(R+4448,u16(u32(r2(R+4448))+u32(r2(R+4384))));
w2(R+4450,u16(u32(r2(R+4450))+u32(r2(R+4386))));
w2(R+4452,u16(u32(r2(R+4452))+u32(r2(R+4388))));
w2(R+4454,u16(u32(r2(R+4454))+u32(r2(R+4390))));
}
B719acf:{NFSU2_TR(0x719acf);
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
B719ad2:{NFSU2_TR(0x719ad2);
u8 U[30];
__builtin_memmove((U+5),(R+4448),8);
__builtin_memmove((U+13),(R+4448),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4448),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4449),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4450),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4451),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4452),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4453),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4454),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4455),(U+21),1);
}
B719ad5:{NFSU2_TR(0x719ad5);
u8 U[4];
w4(U+0,u32(r8(R+4432)));
s4(u32(r4(R+24)),r4(U+0));
}
B719ad8:{NFSU2_TR(0x719ad8);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
w4(U+8,u32(r8(R+4448)));
s4(u32(r4(U+4)),r4(U+8));
}
B719adc:{NFSU2_TR(0x719adc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4352,u64(r4(U+4)));
}
B719ae0:{NFSU2_TR(0x719ae0);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(R+4368,u64(r4(U+12)));
}
B719ae5:{NFSU2_TR(0x719ae5);
__builtin_memmove((R+4359),(R+4467),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4466),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4465),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4464),1);
}
B719ae8:{NFSU2_TR(0x719ae8);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(R+4384,u64(r4(U+12)));
}
B719aed:{NFSU2_TR(0x719aed);
__builtin_memmove((R+4375),(R+4467),1);
__builtin_memmove((R+4374),(R+4371),1);
__builtin_memmove((R+4373),(R+4466),1);
__builtin_memmove((R+4372),(R+4370),1);
__builtin_memmove((R+4371),(R+4465),1);
__builtin_memmove((R+4370),(R+4369),1);
__builtin_memmove((R+4369),(R+4464),1);
}
B719af0:{NFSU2_TR(0x719af0);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(R+4400,u64(r4(U+12)));
}
B719af5:{NFSU2_TR(0x719af5);
__builtin_memmove((R+4432),(R+4352),8);
}
B719af8:{NFSU2_TR(0x719af8);
__builtin_memmove((R+4448),(R+4368),8);
}
B719afb:{NFSU2_TR(0x719afb);
w2(R+4352,u16(u32(r2(R+4352))-u32(r2(R+4368))));
w2(R+4354,u16(u32(r2(R+4354))-u32(r2(R+4370))));
w2(R+4356,u16(u32(r2(R+4356))-u32(r2(R+4372))));
w2(R+4358,u16(u32(r2(R+4358))-u32(r2(R+4374))));
}
B719afe:{NFSU2_TR(0x719afe);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B719b01:{NFSU2_TR(0x719b01);
__builtin_memmove((R+4368),(R+4352),8);
}
B719b04:{NFSU2_TR(0x719b04);
__builtin_memmove((R+4407),(R+4467),1);
__builtin_memmove((R+4406),(R+4403),1);
__builtin_memmove((R+4405),(R+4466),1);
__builtin_memmove((R+4404),(R+4402),1);
__builtin_memmove((R+4403),(R+4465),1);
__builtin_memmove((R+4402),(R+4401),1);
__builtin_memmove((R+4401),(R+4464),1);
}
B719b07:{NFSU2_TR(0x719b07);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4368))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4370))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4372))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4374))));
}
B719b0a:{NFSU2_TR(0x719b0a);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(R+4384))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(R+4386))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(R+4388))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(R+4390))));
}
B719b0d:{NFSU2_TR(0x719b0d);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4352))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4354))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4356))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4358))));
}
B719b10:{NFSU2_TR(0x719b10);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4368))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4370))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4372))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4374))));
}
B719b13:{NFSU2_TR(0x719b13);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+18))));
}
B719b17:{NFSU2_TR(0x719b17);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B719b1a:{NFSU2_TR(0x719b1a);
{wv<8>((R+4400),uo::psraw<8>(rv<8>((R+4400)),V(0x3ull)));}
}
B719b1e:{NFSU2_TR(0x719b1e);
__builtin_memmove((R+4368),(R+4400),8);
}
B719b21:{NFSU2_TR(0x719b21);
{wv<8>((R+4400),uo::psraw<8>(rv<8>((R+4400)),V(0xfull)));}
}
B719b25:{NFSU2_TR(0x719b25);
w8(R+4368,u64(u64(r8(R+4368))^u64(r8(R+4400))));
}
B719b28:{NFSU2_TR(0x719b28);
{wv<8>((R+4368),uo::psubsw<8>(rv<8>((R+4368)),rv<8>((R+4400))));}
}
B719b2b:{NFSU2_TR(0x719b2b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
w8(R+4400,u64(u64(r8(R+4400))|u64(r8(U+4))));
}
B719b2f:{NFSU2_TR(0x719b2f);
__builtin_memmove((R+4384),(R+4352),8);
}
B719b32:{NFSU2_TR(0x719b32);
w2(R+4352,u16(u32(r2(R+4352))-u32(r2(R+4368))));
w2(R+4354,u16(u32(r2(R+4354))-u32(r2(R+4370))));
w2(R+4356,u16(u32(r2(R+4356))-u32(r2(R+4372))));
w2(R+4358,u16(u32(r2(R+4358))-u32(r2(R+4374))));
}
B719b35:{NFSU2_TR(0x719b35);
__builtin_memmove((R+4416),(R+4352),8);
}
B719b38:{NFSU2_TR(0x719b38);
{wv<8>((R+4352),uo::psraw<8>(rv<8>((R+4352)),V(0xfull)));}
}
B719b3c:{NFSU2_TR(0x719b3c);
w8(R+4416,u64(u64(r8(R+4416))^u64(r8(R+4352))));
}
B719b3f:{NFSU2_TR(0x719b3f);
{wv<8>((R+4416),uo::psubsw<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B719b42:{NFSU2_TR(0x719b42);
{wv<8>((R+4384),uo::psubusw<8>(rv<8>((R+4384)),rv<8>((R+4416))));}
}
B719b45:{NFSU2_TR(0x719b45);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4400))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4402))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4404))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4406))));
}
B719b48:{NFSU2_TR(0x719b48);
w2(R+4432,u16(u32(r2(R+4432))-u32(r2(R+4384))));
w2(R+4434,u16(u32(r2(R+4434))-u32(r2(R+4386))));
w2(R+4436,u16(u32(r2(R+4436))-u32(r2(R+4388))));
w2(R+4438,u16(u32(r2(R+4438))-u32(r2(R+4390))));
}
B719b4b:{NFSU2_TR(0x719b4b);
w2(R+4448,u16(u32(r2(R+4448))+u32(r2(R+4384))));
w2(R+4450,u16(u32(r2(R+4450))+u32(r2(R+4386))));
w2(R+4452,u16(u32(r2(R+4452))+u32(r2(R+4388))));
w2(R+4454,u16(u32(r2(R+4454))+u32(r2(R+4390))));
}
B719b4e:{NFSU2_TR(0x719b4e);
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
B719b51:{NFSU2_TR(0x719b51);
u8 U[30];
__builtin_memmove((U+5),(R+4448),8);
__builtin_memmove((U+13),(R+4448),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4448),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4449),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4450),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4451),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4452),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4453),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4454),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4455),(U+21),1);
}
B719b54:{NFSU2_TR(0x719b54);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(r8(R+4432)));
s4(u32(r4(U+0)),r4(U+4));
}
B719b58:{NFSU2_TR(0x719b58);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w4(U+12,u32(r8(R+4448)));
s4(u32(r4(U+8)),r4(U+12));
}
B719b5d:{NFSU2_TR(0x719b5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4352,u64(r4(U+4)));
}
B719b61:{NFSU2_TR(0x719b61);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(R+4368,u64(r4(U+12)));
}
B719b66:{NFSU2_TR(0x719b66);
__builtin_memmove((R+4359),(R+4467),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4466),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4465),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4464),1);
}
B719b69:{NFSU2_TR(0x719b69);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(R+4384,u64(r4(U+12)));
}
B719b6e:{NFSU2_TR(0x719b6e);
__builtin_memmove((R+4375),(R+4467),1);
__builtin_memmove((R+4374),(R+4371),1);
__builtin_memmove((R+4373),(R+4466),1);
__builtin_memmove((R+4372),(R+4370),1);
__builtin_memmove((R+4371),(R+4465),1);
__builtin_memmove((R+4370),(R+4369),1);
__builtin_memmove((R+4369),(R+4464),1);
}
B719b71:{NFSU2_TR(0x719b71);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(R+4400,u64(r4(U+12)));
}
B719b76:{NFSU2_TR(0x719b76);
__builtin_memmove((R+4432),(R+4352),8);
}
B719b79:{NFSU2_TR(0x719b79);
__builtin_memmove((R+4448),(R+4368),8);
}
B719b7c:{NFSU2_TR(0x719b7c);
w2(R+4352,u16(u32(r2(R+4352))-u32(r2(R+4368))));
w2(R+4354,u16(u32(r2(R+4354))-u32(r2(R+4370))));
w2(R+4356,u16(u32(r2(R+4356))-u32(r2(R+4372))));
w2(R+4358,u16(u32(r2(R+4358))-u32(r2(R+4374))));
}
B719b7f:{NFSU2_TR(0x719b7f);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B719b82:{NFSU2_TR(0x719b82);
__builtin_memmove((R+4368),(R+4352),8);
}
B719b85:{NFSU2_TR(0x719b85);
__builtin_memmove((R+4407),(R+4467),1);
__builtin_memmove((R+4406),(R+4403),1);
__builtin_memmove((R+4405),(R+4466),1);
__builtin_memmove((R+4404),(R+4402),1);
__builtin_memmove((R+4403),(R+4465),1);
__builtin_memmove((R+4402),(R+4401),1);
__builtin_memmove((R+4401),(R+4464),1);
}
B719b88:{NFSU2_TR(0x719b88);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4368))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4370))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4372))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4374))));
}
B719b8b:{NFSU2_TR(0x719b8b);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(R+4384))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(R+4386))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(R+4388))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(R+4390))));
}
B719b8e:{NFSU2_TR(0x719b8e);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4352))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4354))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4356))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4358))));
}
B719b91:{NFSU2_TR(0x719b91);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4368))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4370))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4372))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4374))));
}
B719b94:{NFSU2_TR(0x719b94);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+18))));
}
B719b98:{NFSU2_TR(0x719b98);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B719b9b:{NFSU2_TR(0x719b9b);
{wv<8>((R+4400),uo::psraw<8>(rv<8>((R+4400)),V(0x3ull)));}
}
B719b9f:{NFSU2_TR(0x719b9f);
__builtin_memmove((R+4368),(R+4400),8);
}
B719ba2:{NFSU2_TR(0x719ba2);
{wv<8>((R+4400),uo::psraw<8>(rv<8>((R+4400)),V(0xfull)));}
}
B719ba6:{NFSU2_TR(0x719ba6);
w8(R+4368,u64(u64(r8(R+4368))^u64(r8(R+4400))));
}
B719ba9:{NFSU2_TR(0x719ba9);
{wv<8>((R+4368),uo::psubsw<8>(rv<8>((R+4368)),rv<8>((R+4400))));}
}
B719bac:{NFSU2_TR(0x719bac);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
w8(R+4400,u64(u64(r8(R+4400))|u64(r8(U+4))));
}
B719bb0:{NFSU2_TR(0x719bb0);
__builtin_memmove((R+4384),(R+4352),8);
}
B719bb3:{NFSU2_TR(0x719bb3);
w2(R+4352,u16(u32(r2(R+4352))-u32(r2(R+4368))));
w2(R+4354,u16(u32(r2(R+4354))-u32(r2(R+4370))));
w2(R+4356,u16(u32(r2(R+4356))-u32(r2(R+4372))));
w2(R+4358,u16(u32(r2(R+4358))-u32(r2(R+4374))));
}
B719bb6:{NFSU2_TR(0x719bb6);
__builtin_memmove((R+4416),(R+4352),8);
}
B719bb9:{NFSU2_TR(0x719bb9);
{wv<8>((R+4352),uo::psraw<8>(rv<8>((R+4352)),V(0xfull)));}
}
B719bbd:{NFSU2_TR(0x719bbd);
w8(R+4416,u64(u64(r8(R+4416))^u64(r8(R+4352))));
}
B719bc0:{NFSU2_TR(0x719bc0);
{wv<8>((R+4416),uo::psubsw<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B719bc3:{NFSU2_TR(0x719bc3);
{wv<8>((R+4384),uo::psubusw<8>(rv<8>((R+4384)),rv<8>((R+4416))));}
}
B719bc6:{NFSU2_TR(0x719bc6);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4400))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4402))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4404))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4406))));
}
B719bc9:{NFSU2_TR(0x719bc9);
w2(R+4432,u16(u32(r2(R+4432))-u32(r2(R+4384))));
w2(R+4434,u16(u32(r2(R+4434))-u32(r2(R+4386))));
w2(R+4436,u16(u32(r2(R+4436))-u32(r2(R+4388))));
w2(R+4438,u16(u32(r2(R+4438))-u32(r2(R+4390))));
}
B719bcc:{NFSU2_TR(0x719bcc);
w2(R+4448,u16(u32(r2(R+4448))+u32(r2(R+4384))));
w2(R+4450,u16(u32(r2(R+4450))+u32(r2(R+4386))));
w2(R+4452,u16(u32(r2(R+4452))+u32(r2(R+4388))));
w2(R+4454,u16(u32(r2(R+4454))+u32(r2(R+4390))));
}
B719bcf:{NFSU2_TR(0x719bcf);
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
B719bd2:{NFSU2_TR(0x719bd2);
u8 U[30];
__builtin_memmove((U+5),(R+4448),8);
__builtin_memmove((U+13),(R+4448),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4448),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4449),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4450),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4451),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4452),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4453),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4454),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4455),(U+21),1);
}
B719bd5:{NFSU2_TR(0x719bd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(r8(R+4432)));
s4(u32(r4(U+0)),r4(U+4));
}
B719bd9:{NFSU2_TR(0x719bd9);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w4(U+12,u32(r8(R+4448)));
s4(u32(r4(U+8)),r4(U+12));
}
B719bde:{NFSU2_TR(0x719bde);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B719bdf:{NFSU2_TR(0x719bdf);
__builtin_memmove((R+16),(R+20),4);
}
B719be1:{NFSU2_TR(0x719be1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B719be2:{NFSU2_TR(0x719be2);
__builtin_memmove((R+16),(R+12),4);
}
B719be4:{NFSU2_TR(0x719be4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B719be5:{NFSU2_TR(0x719be5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B719be6:L719be6:{c.instructions+=14;NFSU2_TR(0x719be6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B719be7:{NFSU2_TR(0x719be7);
__builtin_memmove((R+20),(R+16),4);
}
B719be9:{NFSU2_TR(0x719be9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B719bea:{NFSU2_TR(0x719bea);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B719beb:{NFSU2_TR(0x719beb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B719bec:{NFSU2_TR(0x719bec);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B719bed:{NFSU2_TR(0x719bed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B719bf0:{NFSU2_TR(0x719bf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B719bf3:{NFSU2_TR(0x719bf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B719bf6:{NFSU2_TR(0x719bf6);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffffdull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B719bfa:{NFSU2_TR(0x719bfa);
__builtin_memmove((R+4432),gp(0x7c6760),8);
}
B719c01:{NFSU2_TR(0x719c01);
__builtin_memmove((R+4448),gp(0x7c6750),8);
}
B719c08:{NFSU2_TR(0x719c08);
__builtin_memmove((R+4416),gp(0x7c6700),8);
}
B719c0f:{NFSU2_TR(0x719c0f);
w8(R+4464,u64(u64(r8(R+4464))^u64(r8(R+4464))));
}
B719c12:L719c12:{c.instructions+=26;NFSU2_TR(0x719c12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B719c14:{NFSU2_TR(0x719c14);
__builtin_memmove((R+12),(R+0),4);
}
B719c16:{NFSU2_TR(0x719c16);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xffff00ull))));
}
B719c1c:{NFSU2_TR(0x719c1c);
__builtin_memmove((R+4),(R+0),4);
}
B719c1e:{NFSU2_TR(0x719c1e);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffff0000ull))));
}
B719c23:{NFSU2_TR(0x719c23);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+0))));
}
B719c25:{NFSU2_TR(0x719c25);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r4(U+0))));
}
B719c28:{NFSU2_TR(0x719c28);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+12))));
}
B719c2a:{NFSU2_TR(0x719c2a);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B719c2d:{NFSU2_TR(0x719c2d);
w8(R+4368,u64(r4(R+0)));
}
B719c30:{NFSU2_TR(0x719c30);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+4))));
}
B719c32:{NFSU2_TR(0x719c32);
__builtin_memmove((R+4375),(R+4467),1);
__builtin_memmove((R+4374),(R+4371),1);
__builtin_memmove((R+4373),(R+4466),1);
__builtin_memmove((R+4372),(R+4370),1);
__builtin_memmove((R+4371),(R+4465),1);
__builtin_memmove((R+4370),(R+4369),1);
__builtin_memmove((R+4369),(R+4464),1);
}
B719c35:{NFSU2_TR(0x719c35);
w8(R+4352,u64(r4(R+12)));
}
B719c38:{NFSU2_TR(0x719c38);
w2(R+4368,u16(u32(r2(R+4368))*u32(r2(R+4448))));
w2(R+4370,u16(u32(r2(R+4370))*u32(r2(R+4450))));
w2(R+4372,u16(u32(r2(R+4372))*u32(r2(R+4452))));
w2(R+4374,u16(u32(r2(R+4374))*u32(r2(R+4454))));
}
B719c3b:{NFSU2_TR(0x719c3b);
__builtin_memmove((R+4359),(R+4467),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4466),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4465),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4464),1);
}
B719c3e:{NFSU2_TR(0x719c3e);
w2(R+4352,u16(u32(r2(R+4352))*u32(r2(R+4432))));
w2(R+4354,u16(u32(r2(R+4354))*u32(r2(R+4434))));
w2(R+4356,u16(u32(r2(R+4356))*u32(r2(R+4436))));
w2(R+4358,u16(u32(r2(R+4358))*u32(r2(R+4438))));
}
B719c41:{NFSU2_TR(0x719c41);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+28)),r4(U+0));
}
B719c43:{NFSU2_TR(0x719c43);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x3ull))));
}
B719c46:{NFSU2_TR(0x719c46);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x5ull))));
}
B719c49:{NFSU2_TR(0x719c49);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4368))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4370))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4372))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4374))));
}
B719c4c:{NFSU2_TR(0x719c4c);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4416))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4418))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4420))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4422))));
}
B719c4f:{NFSU2_TR(0x719c4f);
w2(R+4352,shr<u16>(r2(R+4352),u64(u32(0x8ull))));
w2(R+4354,shr<u16>(r2(R+4354),u64(u32(0x8ull))));
w2(R+4356,shr<u16>(r2(R+4356),u64(u32(0x8ull))));
w2(R+4358,shr<u16>(r2(R+4358),u64(u32(0x8ull))));
}
B719c53:{NFSU2_TR(0x719c53);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B719c55:{NFSU2_TR(0x719c55);
u8 U[30];
__builtin_memmove((U+5),(R+4352),8);
__builtin_memmove((U+13),(R+4464),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4352),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4353),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4354),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4355),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4356),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4357),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4358),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4359),(U+21),1);
}
B719c58:{NFSU2_TR(0x719c58);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
w4(U+4,u32(r8(R+4352)));
s4(u32(r4(U+0)),r4(U+4));
}
B719c5c:{NFSU2_TR(0x719c5c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x719c12u);}goto L719c12;}}
}
B719c5e:L719c5e:{c.instructions+=31;NFSU2_TR(0x719c5e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B719c60:{NFSU2_TR(0x719c60);
__builtin_memmove((R+12),(R+0),4);
}
B719c62:{NFSU2_TR(0x719c62);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xffff00ull))));
}
B719c68:{NFSU2_TR(0x719c68);
__builtin_memmove((R+4),(R+0),4);
}
B719c6a:{NFSU2_TR(0x719c6a);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffff0000ull))));
}
B719c6f:{NFSU2_TR(0x719c6f);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+0))));
}
B719c71:{NFSU2_TR(0x719c71);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r4(U+0))));
}
B719c74:{NFSU2_TR(0x719c74);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+12))));
}
B719c76:{NFSU2_TR(0x719c76);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B719c79:{NFSU2_TR(0x719c79);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffff0000ull))));
}
B719c7e:{NFSU2_TR(0x719c7e);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+12))));
}
B719c80:{NFSU2_TR(0x719c80);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B719c83:{NFSU2_TR(0x719c83);
w8(R+4368,u64(r4(R+0)));
}
B719c86:{NFSU2_TR(0x719c86);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B719c88:{NFSU2_TR(0x719c88);
__builtin_memmove((R+4375),(R+4467),1);
__builtin_memmove((R+4374),(R+4371),1);
__builtin_memmove((R+4373),(R+4466),1);
__builtin_memmove((R+4372),(R+4370),1);
__builtin_memmove((R+4371),(R+4465),1);
__builtin_memmove((R+4370),(R+4369),1);
__builtin_memmove((R+4369),(R+4464),1);
}
B719c8b:{NFSU2_TR(0x719c8b);
w8(R+4352,u64(r4(R+12)));
}
B719c8e:{NFSU2_TR(0x719c8e);
w2(R+4368,u16(u32(r2(R+4368))*u32(r2(R+4448))));
w2(R+4370,u16(u32(r2(R+4370))*u32(r2(R+4450))));
w2(R+4372,u16(u32(r2(R+4372))*u32(r2(R+4452))));
w2(R+4374,u16(u32(r2(R+4374))*u32(r2(R+4454))));
}
B719c91:{NFSU2_TR(0x719c91);
__builtin_memmove((R+4359),(R+4467),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4466),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4465),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4464),1);
}
B719c94:{NFSU2_TR(0x719c94);
w2(R+4352,u16(u32(r2(R+4352))*u32(r2(R+4432))));
w2(R+4354,u16(u32(r2(R+4354))*u32(r2(R+4434))));
w2(R+4356,u16(u32(r2(R+4356))*u32(r2(R+4436))));
w2(R+4358,u16(u32(r2(R+4358))*u32(r2(R+4438))));
}
B719c97:{NFSU2_TR(0x719c97);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+28)),r4(U+0));
}
B719c99:{NFSU2_TR(0x719c99);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4368))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4370))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4372))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4374))));
}
B719c9c:{NFSU2_TR(0x719c9c);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4416))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4418))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4420))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4422))));
}
B719c9f:{NFSU2_TR(0x719c9f);
w2(R+4352,shr<u16>(r2(R+4352),u64(u32(0x8ull))));
w2(R+4354,shr<u16>(r2(R+4354),u64(u32(0x8ull))));
w2(R+4356,shr<u16>(r2(R+4356),u64(u32(0x8ull))));
w2(R+4358,shr<u16>(r2(R+4358),u64(u32(0x8ull))));
}
B719ca3:{NFSU2_TR(0x719ca3);
u8 U[30];
__builtin_memmove((U+5),(R+4352),8);
__builtin_memmove((U+13),(R+4464),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4352),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4353),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4354),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4355),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4356),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4357),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4358),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4359),(U+21),1);
}
B719ca6:{NFSU2_TR(0x719ca6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+4,u32(r8(R+4352)));
s4(u32(r4(U+0)),r4(U+4));
}
B719caa:{NFSU2_TR(0x719caa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B719cab:{NFSU2_TR(0x719cab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B719cac:{NFSU2_TR(0x719cac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B719cad:{NFSU2_TR(0x719cad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B719cae:{NFSU2_TR(0x719cae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B719caf:{NFSU2_TR(0x719caf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B719cb0:L719cb0:{c.instructions+=12;NFSU2_TR(0x719cb0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B719cb1:{NFSU2_TR(0x719cb1);
__builtin_memmove((R+20),(R+16),4);
}
B719cb3:{NFSU2_TR(0x719cb3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B719cb4:{NFSU2_TR(0x719cb4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B719cb5:{NFSU2_TR(0x719cb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B719cb8:{NFSU2_TR(0x719cb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B719cbb:{NFSU2_TR(0x719cbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B719cbe:{NFSU2_TR(0x719cbe);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffff8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B719cc2:{NFSU2_TR(0x719cc2);
__builtin_memmove((R+4432),gp(0x7c6730),8);
}
B719cc9:{NFSU2_TR(0x719cc9);
__builtin_memmove((R+4448),gp(0x7c6720),8);
}
B719cd0:{NFSU2_TR(0x719cd0);
__builtin_memmove((R+4416),gp(0x7c6700),8);
}
B719cd7:{NFSU2_TR(0x719cd7);
w8(R+4464,u64(u64(r8(R+4464))^u64(r8(R+4464))));
}
B719cda:L719cda:{c.instructions+=28;NFSU2_TR(0x719cda);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B719cdd:{NFSU2_TR(0x719cdd);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B719ce1:{NFSU2_TR(0x719ce1);
__builtin_memmove((R+4384),(R+4352),8);
}
B719ce4:{NFSU2_TR(0x719ce4);
__builtin_memmove((R+4400),(R+4368),8);
}
B719ce7:{NFSU2_TR(0x719ce7);
u8 U[4];
w4(U+0,u32(r8(R+4352)));
s4(u32(r4(R+28)),r4(U+0));
}
B719cea:{NFSU2_TR(0x719cea);
__builtin_memmove((R+4359),(R+4467),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4466),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4465),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4464),1);
}
B719ced:{NFSU2_TR(0x719ced);
__builtin_memmove((R+4375),(R+4467),1);
__builtin_memmove((R+4374),(R+4371),1);
__builtin_memmove((R+4373),(R+4466),1);
__builtin_memmove((R+4372),(R+4370),1);
__builtin_memmove((R+4371),(R+4465),1);
__builtin_memmove((R+4370),(R+4369),1);
__builtin_memmove((R+4369),(R+4464),1);
}
B719cf0:{NFSU2_TR(0x719cf0);
w2(R+4352,u16(u32(r2(R+4352))*u32(r2(R+4432))));
w2(R+4354,u16(u32(r2(R+4354))*u32(r2(R+4434))));
w2(R+4356,u16(u32(r2(R+4356))*u32(r2(R+4436))));
w2(R+4358,u16(u32(r2(R+4358))*u32(r2(R+4438))));
}
B719cf3:{NFSU2_TR(0x719cf3);
w2(R+4368,u16(u32(r2(R+4368))*u32(r2(R+4448))));
w2(R+4370,u16(u32(r2(R+4370))*u32(r2(R+4450))));
w2(R+4372,u16(u32(r2(R+4372))*u32(r2(R+4452))));
w2(R+4374,u16(u32(r2(R+4374))*u32(r2(R+4454))));
}
B719cf6:{NFSU2_TR(0x719cf6);
__builtin_memmove((R+4384),(R+4388),1);
__builtin_memmove((R+4385),(R+4468),1);
__builtin_memmove((R+4386),(R+4389),1);
__builtin_memmove((R+4387),(R+4469),1);
__builtin_memmove((R+4388),(R+4390),1);
__builtin_memmove((R+4389),(R+4470),1);
__builtin_memmove((R+4390),(R+4391),1);
__builtin_memmove((R+4391),(R+4471),1);
}
B719cf9:{NFSU2_TR(0x719cf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5ull))));
w4(U+4,u32(r8(R+4384)));
s4(u32(r4(U+0)),r4(U+4));
}
B719cfd:{NFSU2_TR(0x719cfd);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4432))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4434))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4436))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4438))));
}
B719d00:{NFSU2_TR(0x719d00);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B719d03:{NFSU2_TR(0x719d03);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(R+4448))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(R+4450))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(R+4452))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(R+4454))));
}
B719d06:{NFSU2_TR(0x719d06);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4368))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4370))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4372))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4374))));
}
B719d09:{NFSU2_TR(0x719d09);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4416))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4418))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4420))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4422))));
}
B719d0c:{NFSU2_TR(0x719d0c);
w2(R+4352,shr<u16>(r2(R+4352),u64(u32(0x8ull))));
w2(R+4354,shr<u16>(r2(R+4354),u64(u32(0x8ull))));
w2(R+4356,shr<u16>(r2(R+4356),u64(u32(0x8ull))));
w2(R+4358,shr<u16>(r2(R+4358),u64(u32(0x8ull))));
}
B719d10:{NFSU2_TR(0x719d10);
u8 U[30];
__builtin_memmove((U+5),(R+4352),8);
__builtin_memmove((U+13),(R+4464),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4352),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4353),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4354),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4355),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4356),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4357),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4358),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4359),(U+21),1);
}
B719d13:{NFSU2_TR(0x719d13);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+4,u32(r8(R+4352)));
s4(u32(r4(U+0)),r4(U+4));
}
B719d17:{NFSU2_TR(0x719d17);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0xaull))));
}
B719d1a:{NFSU2_TR(0x719d1a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B719d1d:{NFSU2_TR(0x719d1d);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(R+4400))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(R+4402))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(R+4404))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(R+4406))));
}
B719d20:{NFSU2_TR(0x719d20);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(R+4416))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(R+4418))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(R+4420))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(R+4422))));
}
B719d23:{NFSU2_TR(0x719d23);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B719d25:{NFSU2_TR(0x719d25);
w2(R+4384,shr<u16>(r2(R+4384),u64(u32(0x8ull))));
w2(R+4386,shr<u16>(r2(R+4386),u64(u32(0x8ull))));
w2(R+4388,shr<u16>(r2(R+4388),u64(u32(0x8ull))));
w2(R+4390,shr<u16>(r2(R+4390),u64(u32(0x8ull))));
}
B719d29:{NFSU2_TR(0x719d29);
u8 U[30];
__builtin_memmove((U+5),(R+4384),8);
__builtin_memmove((U+13),(R+4464),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4384),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4385),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4386),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4387),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4388),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4389),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4390),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4391),(U+21),1);
}
B719d2c:{NFSU2_TR(0x719d2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
w4(U+4,u32(r8(R+4384)));
s4(u32(r4(U+0)),r4(U+4));
}
B719d30:{NFSU2_TR(0x719d30);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x719cdau);}goto L719cda;}}
}
B719d32:L719d32:{c.instructions+=33;NFSU2_TR(0x719d32);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B719d35:{NFSU2_TR(0x719d35);
__builtin_memmove((R+4368),(R+4352),8);
}
B719d38:{NFSU2_TR(0x719d38);
__builtin_memmove((R+4384),(R+4352),8);
}
B719d3b:{NFSU2_TR(0x719d3b);
w8(R+4368,shr<u64>(r8(R+4368),u64(u32(0x8ull))));
}
B719d3f:{NFSU2_TR(0x719d3f);
__builtin_memmove((R+4400),gp(0x7c6740),8);
}
B719d46:{NFSU2_TR(0x719d46);
w8(R+4400,u64(u64(r8(R+4400))&u64(r8(R+4368))));
}
B719d49:{NFSU2_TR(0x719d49);
w8(R+4400,shl<u64>(r8(R+4400),u64(u64(0x8ull))));
}
B719d4d:{NFSU2_TR(0x719d4d);
w8(R+4368,u64(u64(r8(R+4368))|u64(r8(R+4400))));
}
B719d50:{NFSU2_TR(0x719d50);
__builtin_memmove((R+4400),(R+4368),8);
}
B719d53:{NFSU2_TR(0x719d53);
u8 U[4];
w4(U+0,u32(r8(R+4352)));
s4(u32(r4(R+28)),r4(U+0));
}
B719d56:{NFSU2_TR(0x719d56);
__builtin_memmove((R+4359),(R+4467),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4466),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4465),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4464),1);
}
B719d59:{NFSU2_TR(0x719d59);
__builtin_memmove((R+4375),(R+4467),1);
__builtin_memmove((R+4374),(R+4371),1);
__builtin_memmove((R+4373),(R+4466),1);
__builtin_memmove((R+4372),(R+4370),1);
__builtin_memmove((R+4371),(R+4465),1);
__builtin_memmove((R+4370),(R+4369),1);
__builtin_memmove((R+4369),(R+4464),1);
}
B719d5c:{NFSU2_TR(0x719d5c);
w2(R+4352,u16(u32(r2(R+4352))*u32(r2(R+4432))));
w2(R+4354,u16(u32(r2(R+4354))*u32(r2(R+4434))));
w2(R+4356,u16(u32(r2(R+4356))*u32(r2(R+4436))));
w2(R+4358,u16(u32(r2(R+4358))*u32(r2(R+4438))));
}
B719d5f:{NFSU2_TR(0x719d5f);
w2(R+4368,u16(u32(r2(R+4368))*u32(r2(R+4448))));
w2(R+4370,u16(u32(r2(R+4370))*u32(r2(R+4450))));
w2(R+4372,u16(u32(r2(R+4372))*u32(r2(R+4452))));
w2(R+4374,u16(u32(r2(R+4374))*u32(r2(R+4454))));
}
B719d62:{NFSU2_TR(0x719d62);
__builtin_memmove((R+4384),(R+4388),1);
__builtin_memmove((R+4385),(R+4468),1);
__builtin_memmove((R+4386),(R+4389),1);
__builtin_memmove((R+4387),(R+4469),1);
__builtin_memmove((R+4388),(R+4390),1);
__builtin_memmove((R+4389),(R+4470),1);
__builtin_memmove((R+4390),(R+4391),1);
__builtin_memmove((R+4391),(R+4471),1);
}
B719d65:{NFSU2_TR(0x719d65);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5ull))));
w4(U+4,u32(r8(R+4384)));
s4(u32(r4(U+0)),r4(U+4));
}
B719d69:{NFSU2_TR(0x719d69);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4432))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4434))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4436))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4438))));
}
B719d6c:{NFSU2_TR(0x719d6c);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B719d6f:{NFSU2_TR(0x719d6f);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(R+4448))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(R+4450))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(R+4452))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(R+4454))));
}
B719d72:{NFSU2_TR(0x719d72);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4368))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4370))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4372))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4374))));
}
B719d75:{NFSU2_TR(0x719d75);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4416))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4418))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4420))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4422))));
}
B719d78:{NFSU2_TR(0x719d78);
w2(R+4352,shr<u16>(r2(R+4352),u64(u32(0x8ull))));
w2(R+4354,shr<u16>(r2(R+4354),u64(u32(0x8ull))));
w2(R+4356,shr<u16>(r2(R+4356),u64(u32(0x8ull))));
w2(R+4358,shr<u16>(r2(R+4358),u64(u32(0x8ull))));
}
B719d7c:{NFSU2_TR(0x719d7c);
u8 U[30];
__builtin_memmove((U+5),(R+4352),8);
__builtin_memmove((U+13),(R+4464),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4352),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4353),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4354),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4355),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4356),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4357),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4358),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4359),(U+21),1);
}
B719d7f:{NFSU2_TR(0x719d7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+4,u32(r8(R+4352)));
s4(u32(r4(U+0)),r4(U+4));
}
B719d83:{NFSU2_TR(0x719d83);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(R+4400))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(R+4402))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(R+4404))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(R+4406))));
}
B719d86:{NFSU2_TR(0x719d86);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(R+4416))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(R+4418))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(R+4420))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(R+4422))));
}
B719d89:{NFSU2_TR(0x719d89);
w2(R+4384,shr<u16>(r2(R+4384),u64(u32(0x8ull))));
w2(R+4386,shr<u16>(r2(R+4386),u64(u32(0x8ull))));
w2(R+4388,shr<u16>(r2(R+4388),u64(u32(0x8ull))));
w2(R+4390,shr<u16>(r2(R+4390),u64(u32(0x8ull))));
}
B719d8d:{NFSU2_TR(0x719d8d);
u8 U[30];
__builtin_memmove((U+5),(R+4384),8);
__builtin_memmove((U+13),(R+4464),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4384),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4385),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4386),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4387),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4388),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4389),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4390),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4391),(U+21),1);
}
B719d90:{NFSU2_TR(0x719d90);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
w4(U+4,u32(r8(R+4384)));
s4(u32(r4(U+0)),r4(U+4));
}
B719d94:{NFSU2_TR(0x719d94);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B719d95:{NFSU2_TR(0x719d95);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B719d96:{NFSU2_TR(0x719d96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B719d97:{NFSU2_TR(0x719d97);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B719d98:L719d98:{c.instructions+=10;NFSU2_TR(0x719d98);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B719d99:{NFSU2_TR(0x719d99);
__builtin_memmove((R+20),(R+16),4);
}
B719d9b:{NFSU2_TR(0x719d9b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B719d9c:{NFSU2_TR(0x719d9c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B719d9d:{NFSU2_TR(0x719d9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B719da0:{NFSU2_TR(0x719da0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B719da3:{NFSU2_TR(0x719da3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B719da6:{NFSU2_TR(0x719da6);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+4))));
}
B719da8:{NFSU2_TR(0x719da8);
w8(R+4464,u64(u64(r8(R+4464))^u64(r8(R+4464))));
}
B719dab:{NFSU2_TR(0x719dab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B719dae:L719dae:{c.instructions+=85;NFSU2_TR(0x719dae);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B719db1:{NFSU2_TR(0x719db1);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4368),(U+8),8);
}
B719db5:{NFSU2_TR(0x719db5);
__builtin_memmove((R+4384),(R+4352),8);
}
B719db8:{NFSU2_TR(0x719db8);
__builtin_memmove((R+4359),(R+4467),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4466),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4465),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4464),1);
}
B719dbb:{NFSU2_TR(0x719dbb);
__builtin_memmove((R+4432),gp(0x7c66c0),8);
}
B719dc2:{NFSU2_TR(0x719dc2);
__builtin_memmove((R+4384),(R+4388),1);
__builtin_memmove((R+4385),(R+4468),1);
__builtin_memmove((R+4386),(R+4389),1);
__builtin_memmove((R+4387),(R+4469),1);
__builtin_memmove((R+4388),(R+4390),1);
__builtin_memmove((R+4389),(R+4470),1);
__builtin_memmove((R+4390),(R+4391),1);
__builtin_memmove((R+4391),(R+4471),1);
}
B719dc5:{NFSU2_TR(0x719dc5);
w2(R+4352,u16(u32(r2(R+4352))*u32(r2(R+4432))));
w2(R+4354,u16(u32(r2(R+4354))*u32(r2(R+4434))));
w2(R+4356,u16(u32(r2(R+4356))*u32(r2(R+4436))));
w2(R+4358,u16(u32(r2(R+4358))*u32(r2(R+4438))));
}
B719dc8:{NFSU2_TR(0x719dc8);
__builtin_memmove((R+4400),(R+4368),8);
}
B719dcb:{NFSU2_TR(0x719dcb);
__builtin_memmove((R+4375),(R+4467),1);
__builtin_memmove((R+4374),(R+4371),1);
__builtin_memmove((R+4373),(R+4466),1);
__builtin_memmove((R+4372),(R+4370),1);
__builtin_memmove((R+4371),(R+4465),1);
__builtin_memmove((R+4370),(R+4369),1);
__builtin_memmove((R+4369),(R+4464),1);
}
B719dce:{NFSU2_TR(0x719dce);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4432))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4434))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4436))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4438))));
}
B719dd1:{NFSU2_TR(0x719dd1);
__builtin_memmove((R+4448),gp(0x7c66f0),8);
}
B719dd8:{NFSU2_TR(0x719dd8);
__builtin_memmove((R+4416),(R+4368),8);
}
B719ddb:{NFSU2_TR(0x719ddb);
w2(R+4416,u16(u32(r2(R+4416))*u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))*u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))*u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))*u32(r2(R+4454))));
}
B719dde:{NFSU2_TR(0x719dde);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B719de1:{NFSU2_TR(0x719de1);
__builtin_memmove((R+4432),(R+4400),8);
}
B719de4:{NFSU2_TR(0x719de4);
w2(R+4432,u16(u32(r2(R+4432))*u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))*u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))*u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))*u32(r2(R+4454))));
}
B719de7:{NFSU2_TR(0x719de7);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4416))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4418))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4420))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4422))));
}
B719dea:{NFSU2_TR(0x719dea);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(R+4432))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(R+4434))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(R+4436))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(R+4438))));
}
B719ded:{NFSU2_TR(0x719ded);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c6700),8);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(U+0))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(U+2))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(U+4))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(U+6))));
}
B719df4:{NFSU2_TR(0x719df4);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c6700),8);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(U+0))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(U+2))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(U+4))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(U+6))));
}
B719dfb:{NFSU2_TR(0x719dfb);
w2(R+4352,shr<u16>(r2(R+4352),u64(u32(0x8ull))));
w2(R+4354,shr<u16>(r2(R+4354),u64(u32(0x8ull))));
w2(R+4356,shr<u16>(r2(R+4356),u64(u32(0x8ull))));
w2(R+4358,shr<u16>(r2(R+4358),u64(u32(0x8ull))));
}
B719dff:{NFSU2_TR(0x719dff);
w2(R+4384,shr<u16>(r2(R+4384),u64(u32(0x8ull))));
w2(R+4386,shr<u16>(r2(R+4386),u64(u32(0x8ull))));
w2(R+4388,shr<u16>(r2(R+4388),u64(u32(0x8ull))));
w2(R+4390,shr<u16>(r2(R+4390),u64(u32(0x8ull))));
}
B719e03:{NFSU2_TR(0x719e03);
u8 U[30];
__builtin_memmove((U+5),(R+4352),8);
__builtin_memmove((U+13),(R+4384),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4352),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4353),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4354),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4355),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4356),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4357),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4358),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4359),(U+21),1);
}
B719e06:{NFSU2_TR(0x719e06);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4352),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B719e0a:{NFSU2_TR(0x719e0a);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4352),(U+8),8);
}
B719e0e:{NFSU2_TR(0x719e0e);
__builtin_memmove((R+4432),gp(0x7c66d0),8);
}
B719e15:{NFSU2_TR(0x719e15);
__builtin_memmove((R+4384),(R+4352),8);
}
B719e18:{NFSU2_TR(0x719e18);
w2(R+4368,u16(u32(r2(R+4368))*u32(r2(R+4432))));
w2(R+4370,u16(u32(r2(R+4370))*u32(r2(R+4434))));
w2(R+4372,u16(u32(r2(R+4372))*u32(r2(R+4436))));
w2(R+4374,u16(u32(r2(R+4374))*u32(r2(R+4438))));
}
B719e1b:{NFSU2_TR(0x719e1b);
__builtin_memmove((R+4448),gp(0x7c66e0),8);
}
B719e22:{NFSU2_TR(0x719e22);
__builtin_memmove((R+4359),(R+4467),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4466),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4465),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4464),1);
}
B719e25:{NFSU2_TR(0x719e25);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(R+4432))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(R+4434))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(R+4436))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(R+4438))));
}
B719e28:{NFSU2_TR(0x719e28);
__builtin_memmove((R+4416),(R+4352),8);
}
B719e2b:{NFSU2_TR(0x719e2b);
__builtin_memmove((R+4384),(R+4388),1);
__builtin_memmove((R+4385),(R+4468),1);
__builtin_memmove((R+4386),(R+4389),1);
__builtin_memmove((R+4387),(R+4469),1);
__builtin_memmove((R+4388),(R+4390),1);
__builtin_memmove((R+4389),(R+4470),1);
__builtin_memmove((R+4390),(R+4391),1);
__builtin_memmove((R+4391),(R+4471),1);
}
B719e2e:{NFSU2_TR(0x719e2e);
w2(R+4416,u16(u32(r2(R+4416))*u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))*u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))*u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))*u32(r2(R+4454))));
}
B719e31:{NFSU2_TR(0x719e31);
__builtin_memmove((R+4432),(R+4384),8);
}
B719e34:{NFSU2_TR(0x719e34);
w2(R+4432,u16(u32(r2(R+4432))*u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))*u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))*u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))*u32(r2(R+4454))));
}
B719e37:{NFSU2_TR(0x719e37);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4416))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4418))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4420))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4422))));
}
B719e3a:{NFSU2_TR(0x719e3a);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4432))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4434))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4436))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4438))));
}
B719e3d:{NFSU2_TR(0x719e3d);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c6700),8);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(U+0))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(U+2))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(U+4))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(U+6))));
}
B719e44:{NFSU2_TR(0x719e44);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c6700),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+0))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+2))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+4))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+6))));
}
B719e4b:{NFSU2_TR(0x719e4b);
w2(R+4368,shr<u16>(r2(R+4368),u64(u32(0x8ull))));
w2(R+4370,shr<u16>(r2(R+4370),u64(u32(0x8ull))));
w2(R+4372,shr<u16>(r2(R+4372),u64(u32(0x8ull))));
w2(R+4374,shr<u16>(r2(R+4374),u64(u32(0x8ull))));
}
B719e4f:{NFSU2_TR(0x719e4f);
w2(R+4400,shr<u16>(r2(R+4400),u64(u32(0x8ull))));
w2(R+4402,shr<u16>(r2(R+4402),u64(u32(0x8ull))));
w2(R+4404,shr<u16>(r2(R+4404),u64(u32(0x8ull))));
w2(R+4406,shr<u16>(r2(R+4406),u64(u32(0x8ull))));
}
B719e53:{NFSU2_TR(0x719e53);
u8 U[30];
__builtin_memmove((U+5),(R+4368),8);
__builtin_memmove((U+13),(R+4400),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4368),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4369),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4370),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4371),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4372),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4373),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4374),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4375),(U+21),1);
}
B719e56:{NFSU2_TR(0x719e56);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4368),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B719e5a:{NFSU2_TR(0x719e5a);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),8);
__builtin_memmove((R+4368),(U+0),8);
}
B719e5d:{NFSU2_TR(0x719e5d);
w2(R+4352,u16(u32(r2(R+4352))*u32(r2(R+4448))));
w2(R+4354,u16(u32(r2(R+4354))*u32(r2(R+4450))));
w2(R+4356,u16(u32(r2(R+4356))*u32(r2(R+4452))));
w2(R+4358,u16(u32(r2(R+4358))*u32(r2(R+4454))));
}
B719e60:{NFSU2_TR(0x719e60);
__builtin_memmove((R+4432),gp(0x7c66d0),8);
}
B719e67:{NFSU2_TR(0x719e67);
__builtin_memmove((R+4400),(R+4368),8);
}
B719e6a:{NFSU2_TR(0x719e6a);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4448))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4450))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4452))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4454))));
}
B719e6d:{NFSU2_TR(0x719e6d);
__builtin_memmove((R+4375),(R+4467),1);
__builtin_memmove((R+4374),(R+4371),1);
__builtin_memmove((R+4373),(R+4466),1);
__builtin_memmove((R+4372),(R+4370),1);
__builtin_memmove((R+4371),(R+4465),1);
__builtin_memmove((R+4370),(R+4369),1);
__builtin_memmove((R+4369),(R+4464),1);
}
B719e70:{NFSU2_TR(0x719e70);
__builtin_memmove((R+4416),(R+4368),8);
}
B719e73:{NFSU2_TR(0x719e73);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B719e76:{NFSU2_TR(0x719e76);
w2(R+4416,u16(u32(r2(R+4416))*u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))*u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))*u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))*u32(r2(R+4438))));
}
B719e79:{NFSU2_TR(0x719e79);
__builtin_memmove((R+4448),(R+4400),8);
}
B719e7c:{NFSU2_TR(0x719e7c);
w2(R+4448,u16(u32(r2(R+4448))*u32(r2(R+4432))));
w2(R+4450,u16(u32(r2(R+4450))*u32(r2(R+4434))));
w2(R+4452,u16(u32(r2(R+4452))*u32(r2(R+4436))));
w2(R+4454,u16(u32(r2(R+4454))*u32(r2(R+4438))));
}
B719e7f:{NFSU2_TR(0x719e7f);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4416))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4418))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4420))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4422))));
}
B719e82:{NFSU2_TR(0x719e82);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(R+4448))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(R+4450))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(R+4452))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(R+4454))));
}
B719e85:{NFSU2_TR(0x719e85);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c6700),8);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(U+0))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(U+2))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(U+4))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(U+6))));
}
B719e8c:{NFSU2_TR(0x719e8c);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c6700),8);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(U+0))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(U+2))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(U+4))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(U+6))));
}
B719e93:{NFSU2_TR(0x719e93);
w2(R+4352,shr<u16>(r2(R+4352),u64(u32(0x8ull))));
w2(R+4354,shr<u16>(r2(R+4354),u64(u32(0x8ull))));
w2(R+4356,shr<u16>(r2(R+4356),u64(u32(0x8ull))));
w2(R+4358,shr<u16>(r2(R+4358),u64(u32(0x8ull))));
}
B719e97:{NFSU2_TR(0x719e97);
w2(R+4384,shr<u16>(r2(R+4384),u64(u32(0x8ull))));
w2(R+4386,shr<u16>(r2(R+4386),u64(u32(0x8ull))));
w2(R+4388,shr<u16>(r2(R+4388),u64(u32(0x8ull))));
w2(R+4390,shr<u16>(r2(R+4390),u64(u32(0x8ull))));
}
B719e9b:{NFSU2_TR(0x719e9b);
u8 U[30];
__builtin_memmove((U+5),(R+4352),8);
__builtin_memmove((U+13),(R+4384),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4352),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4353),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4354),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4355),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4356),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4357),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4358),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4359),(U+21),1);
}
B719e9e:{NFSU2_TR(0x719e9e);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+28)),r8(U+0));
}
B719ea1:{NFSU2_TR(0x719ea1);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4352),(U+8),8);
}
B719ea5:{NFSU2_TR(0x719ea5);
__builtin_memmove((R+4432),gp(0x7c66f0),8);
}
B719eac:{NFSU2_TR(0x719eac);
w2(R+4368,u16(u32(r2(R+4368))*u32(r2(R+4432))));
w2(R+4370,u16(u32(r2(R+4370))*u32(r2(R+4434))));
w2(R+4372,u16(u32(r2(R+4372))*u32(r2(R+4436))));
w2(R+4374,u16(u32(r2(R+4374))*u32(r2(R+4438))));
}
B719eaf:{NFSU2_TR(0x719eaf);
__builtin_memmove((R+4448),gp(0x7c66c0),8);
}
B719eb6:{NFSU2_TR(0x719eb6);
__builtin_memmove((R+4384),(R+4352),8);
}
B719eb9:{NFSU2_TR(0x719eb9);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(R+4432))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(R+4434))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(R+4436))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(R+4438))));
}
B719ebc:{NFSU2_TR(0x719ebc);
__builtin_memmove((R+4359),(R+4467),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4466),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4465),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4464),1);
}
B719ebf:{NFSU2_TR(0x719ebf);
w2(R+4352,u16(u32(r2(R+4352))*u32(r2(R+4448))));
w2(R+4354,u16(u32(r2(R+4354))*u32(r2(R+4450))));
w2(R+4356,u16(u32(r2(R+4356))*u32(r2(R+4452))));
w2(R+4358,u16(u32(r2(R+4358))*u32(r2(R+4454))));
}
B719ec2:{NFSU2_TR(0x719ec2);
__builtin_memmove((R+4384),(R+4388),1);
__builtin_memmove((R+4385),(R+4468),1);
__builtin_memmove((R+4386),(R+4389),1);
__builtin_memmove((R+4387),(R+4469),1);
__builtin_memmove((R+4388),(R+4390),1);
__builtin_memmove((R+4389),(R+4470),1);
__builtin_memmove((R+4390),(R+4391),1);
__builtin_memmove((R+4391),(R+4471),1);
}
B719ec5:{NFSU2_TR(0x719ec5);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4352))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4354))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4356))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4358))));
}
B719ec8:{NFSU2_TR(0x719ec8);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4448))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4450))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4452))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4454))));
}
B719ecb:{NFSU2_TR(0x719ecb);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4384))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4386))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4388))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4390))));
}
B719ece:{NFSU2_TR(0x719ece);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c6700),8);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(U+0))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(U+2))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(U+4))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(U+6))));
}
B719ed5:{NFSU2_TR(0x719ed5);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c6700),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+0))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+2))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+4))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+6))));
}
B719edc:{NFSU2_TR(0x719edc);
w2(R+4368,shr<u16>(r2(R+4368),u64(u32(0x8ull))));
w2(R+4370,shr<u16>(r2(R+4370),u64(u32(0x8ull))));
w2(R+4372,shr<u16>(r2(R+4372),u64(u32(0x8ull))));
w2(R+4374,shr<u16>(r2(R+4374),u64(u32(0x8ull))));
}
B719ee0:{NFSU2_TR(0x719ee0);
w2(R+4400,shr<u16>(r2(R+4400),u64(u32(0x8ull))));
w2(R+4402,shr<u16>(r2(R+4402),u64(u32(0x8ull))));
w2(R+4404,shr<u16>(r2(R+4404),u64(u32(0x8ull))));
w2(R+4406,shr<u16>(r2(R+4406),u64(u32(0x8ull))));
}
B719ee4:{NFSU2_TR(0x719ee4);
u8 U[30];
__builtin_memmove((U+5),(R+4368),8);
__builtin_memmove((U+13),(R+4400),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4368),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4369),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4370),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4371),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4372),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4373),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4374),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4375),(U+21),1);
}
B719ee7:{NFSU2_TR(0x719ee7);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4368),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B719eeb:{NFSU2_TR(0x719eeb);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x8ull))));
}
B719eee:{NFSU2_TR(0x719eee);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B719ef1:{NFSU2_TR(0x719ef1);
u8 U[6];
w1(R+512,u8((r4(R+8))<(u32(0x8ull))));
w1(R+523,sborrow<u32>(r4(R+8),u32(0x8ull)));
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B719ef4:{NFSU2_TR(0x719ef4);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x719daeu);}goto L719dae;}}
}
B719efa:L719efa:{c.instructions+=4;NFSU2_TR(0x719efa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B719efb:{NFSU2_TR(0x719efb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B719efc:{NFSU2_TR(0x719efc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B719efd:{NFSU2_TR(0x719efd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B719efe:L719efe:{c.instructions+=71;NFSU2_TR(0x719efe);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B719eff:{NFSU2_TR(0x719eff);
__builtin_memmove((R+20),(R+16),4);
}
B719f01:{NFSU2_TR(0x719f01);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B719f02:{NFSU2_TR(0x719f02);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B719f03:{NFSU2_TR(0x719f03);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B719f06:{NFSU2_TR(0x719f06);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B719f09:{NFSU2_TR(0x719f09);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B719f0c:{NFSU2_TR(0x719f0c);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+4))));
}
B719f0e:{NFSU2_TR(0x719f0e);
w8(R+4464,u64(u64(r8(R+4464))^u64(r8(R+4464))));
}
B719f11:{NFSU2_TR(0x719f11);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B719f14:{NFSU2_TR(0x719f14);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B719f17:{NFSU2_TR(0x719f17);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4368),(U+8),8);
}
B719f1b:{NFSU2_TR(0x719f1b);
__builtin_memmove((R+4384),(R+4352),8);
}
B719f1e:{NFSU2_TR(0x719f1e);
__builtin_memmove((R+4359),(R+4467),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4466),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4465),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4464),1);
}
B719f21:{NFSU2_TR(0x719f21);
__builtin_memmove((R+4432),gp(0x7c66c0),8);
}
B719f28:{NFSU2_TR(0x719f28);
__builtin_memmove((R+4384),(R+4388),1);
__builtin_memmove((R+4385),(R+4468),1);
__builtin_memmove((R+4386),(R+4389),1);
__builtin_memmove((R+4387),(R+4469),1);
__builtin_memmove((R+4388),(R+4390),1);
__builtin_memmove((R+4389),(R+4470),1);
__builtin_memmove((R+4390),(R+4391),1);
__builtin_memmove((R+4391),(R+4471),1);
}
B719f2b:{NFSU2_TR(0x719f2b);
w2(R+4352,u16(u32(r2(R+4352))*u32(r2(R+4432))));
w2(R+4354,u16(u32(r2(R+4354))*u32(r2(R+4434))));
w2(R+4356,u16(u32(r2(R+4356))*u32(r2(R+4436))));
w2(R+4358,u16(u32(r2(R+4358))*u32(r2(R+4438))));
}
B719f2e:{NFSU2_TR(0x719f2e);
__builtin_memmove((R+4400),(R+4368),8);
}
B719f31:{NFSU2_TR(0x719f31);
__builtin_memmove((R+4375),(R+4467),1);
__builtin_memmove((R+4374),(R+4371),1);
__builtin_memmove((R+4373),(R+4466),1);
__builtin_memmove((R+4372),(R+4370),1);
__builtin_memmove((R+4371),(R+4465),1);
__builtin_memmove((R+4370),(R+4369),1);
__builtin_memmove((R+4369),(R+4464),1);
}
B719f34:{NFSU2_TR(0x719f34);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4432))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4434))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4436))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4438))));
}
B719f37:{NFSU2_TR(0x719f37);
__builtin_memmove((R+4448),gp(0x7c66f0),8);
}
B719f3e:{NFSU2_TR(0x719f3e);
__builtin_memmove((R+4416),(R+4368),8);
}
B719f41:{NFSU2_TR(0x719f41);
w2(R+4416,u16(u32(r2(R+4416))*u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))*u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))*u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))*u32(r2(R+4454))));
}
B719f44:{NFSU2_TR(0x719f44);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B719f47:{NFSU2_TR(0x719f47);
__builtin_memmove((R+4432),(R+4400),8);
}
B719f4a:{NFSU2_TR(0x719f4a);
w2(R+4432,u16(u32(r2(R+4432))*u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))*u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))*u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))*u32(r2(R+4454))));
}
B719f4d:{NFSU2_TR(0x719f4d);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4416))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4418))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4420))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4422))));
}
B719f50:{NFSU2_TR(0x719f50);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(R+4432))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(R+4434))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(R+4436))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(R+4438))));
}
B719f53:{NFSU2_TR(0x719f53);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c6700),8);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(U+0))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(U+2))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(U+4))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(U+6))));
}
B719f5a:{NFSU2_TR(0x719f5a);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c6700),8);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(U+0))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(U+2))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(U+4))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(U+6))));
}
B719f61:{NFSU2_TR(0x719f61);
w2(R+4352,shr<u16>(r2(R+4352),u64(u32(0x8ull))));
w2(R+4354,shr<u16>(r2(R+4354),u64(u32(0x8ull))));
w2(R+4356,shr<u16>(r2(R+4356),u64(u32(0x8ull))));
w2(R+4358,shr<u16>(r2(R+4358),u64(u32(0x8ull))));
}
B719f65:{NFSU2_TR(0x719f65);
w2(R+4384,shr<u16>(r2(R+4384),u64(u32(0x8ull))));
w2(R+4386,shr<u16>(r2(R+4386),u64(u32(0x8ull))));
w2(R+4388,shr<u16>(r2(R+4388),u64(u32(0x8ull))));
w2(R+4390,shr<u16>(r2(R+4390),u64(u32(0x8ull))));
}
B719f69:{NFSU2_TR(0x719f69);
u8 U[30];
__builtin_memmove((U+5),(R+4352),8);
__builtin_memmove((U+13),(R+4384),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4352),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4353),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4354),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4355),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4356),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4357),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4358),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4359),(U+21),1);
}
B719f6c:{NFSU2_TR(0x719f6c);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4352),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B719f70:{NFSU2_TR(0x719f70);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4352),(U+8),8);
}
B719f74:{NFSU2_TR(0x719f74);
__builtin_memmove((R+4432),gp(0x7c66d0),8);
}
B719f7b:{NFSU2_TR(0x719f7b);
__builtin_memmove((R+4384),(R+4352),8);
}
B719f7e:{NFSU2_TR(0x719f7e);
w2(R+4368,u16(u32(r2(R+4368))*u32(r2(R+4432))));
w2(R+4370,u16(u32(r2(R+4370))*u32(r2(R+4434))));
w2(R+4372,u16(u32(r2(R+4372))*u32(r2(R+4436))));
w2(R+4374,u16(u32(r2(R+4374))*u32(r2(R+4438))));
}
B719f81:{NFSU2_TR(0x719f81);
__builtin_memmove((R+4448),gp(0x7c66e0),8);
}
B719f88:{NFSU2_TR(0x719f88);
__builtin_memmove((R+4359),(R+4467),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4466),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4465),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4464),1);
}
B719f8b:{NFSU2_TR(0x719f8b);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(R+4432))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(R+4434))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(R+4436))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(R+4438))));
}
B719f8e:{NFSU2_TR(0x719f8e);
__builtin_memmove((R+4416),(R+4352),8);
}
B719f91:{NFSU2_TR(0x719f91);
__builtin_memmove((R+4384),(R+4388),1);
__builtin_memmove((R+4385),(R+4468),1);
__builtin_memmove((R+4386),(R+4389),1);
__builtin_memmove((R+4387),(R+4469),1);
__builtin_memmove((R+4388),(R+4390),1);
__builtin_memmove((R+4389),(R+4470),1);
__builtin_memmove((R+4390),(R+4391),1);
__builtin_memmove((R+4391),(R+4471),1);
}
B719f94:{NFSU2_TR(0x719f94);
w2(R+4416,u16(u32(r2(R+4416))*u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))*u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))*u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))*u32(r2(R+4454))));
}
B719f97:{NFSU2_TR(0x719f97);
__builtin_memmove((R+4432),(R+4384),8);
}
B719f9a:{NFSU2_TR(0x719f9a);
w2(R+4432,u16(u32(r2(R+4432))*u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))*u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))*u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))*u32(r2(R+4454))));
}
B719f9d:{NFSU2_TR(0x719f9d);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4416))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4418))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4420))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4422))));
}
B719fa0:{NFSU2_TR(0x719fa0);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4432))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4434))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4436))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4438))));
}
B719fa3:{NFSU2_TR(0x719fa3);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c6700),8);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(U+0))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(U+2))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(U+4))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(U+6))));
}
B719faa:{NFSU2_TR(0x719faa);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c6700),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+0))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+2))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+4))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+6))));
}
B719fb1:{NFSU2_TR(0x719fb1);
w2(R+4368,shr<u16>(r2(R+4368),u64(u32(0x8ull))));
w2(R+4370,shr<u16>(r2(R+4370),u64(u32(0x8ull))));
w2(R+4372,shr<u16>(r2(R+4372),u64(u32(0x8ull))));
w2(R+4374,shr<u16>(r2(R+4374),u64(u32(0x8ull))));
}
B719fb5:{NFSU2_TR(0x719fb5);
w2(R+4400,shr<u16>(r2(R+4400),u64(u32(0x8ull))));
w2(R+4402,shr<u16>(r2(R+4402),u64(u32(0x8ull))));
w2(R+4404,shr<u16>(r2(R+4404),u64(u32(0x8ull))));
w2(R+4406,shr<u16>(r2(R+4406),u64(u32(0x8ull))));
}
B719fb9:{NFSU2_TR(0x719fb9);
u8 U[30];
__builtin_memmove((U+5),(R+4368),8);
__builtin_memmove((U+13),(R+4400),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4368),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4369),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4370),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4371),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4372),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4373),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4374),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4375),(U+21),1);
}
B719fbc:{NFSU2_TR(0x719fbc);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4368),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B719fc0:{NFSU2_TR(0x719fc0);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),8);
__builtin_memmove((R+4368),(U+0),8);
}
B719fc3:{NFSU2_TR(0x719fc3);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4368),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B719fc7:{NFSU2_TR(0x719fc7);
w2(R+4352,u16(u32(r2(R+4352))*u32(r2(R+4448))));
w2(R+4354,u16(u32(r2(R+4354))*u32(r2(R+4450))));
w2(R+4356,u16(u32(r2(R+4356))*u32(r2(R+4452))));
w2(R+4358,u16(u32(r2(R+4358))*u32(r2(R+4454))));
}
B719fca:{NFSU2_TR(0x719fca);
__builtin_memmove((R+4432),gp(0x7c66d0),8);
}
B719fd1:{NFSU2_TR(0x719fd1);
__builtin_memmove((R+4400),(R+4368),8);
}
B719fd4:{NFSU2_TR(0x719fd4);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4448))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4450))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4452))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4454))));
}
B719fd7:{NFSU2_TR(0x719fd7);
__builtin_memmove((R+4375),(R+4467),1);
__builtin_memmove((R+4374),(R+4371),1);
__builtin_memmove((R+4373),(R+4466),1);
__builtin_memmove((R+4372),(R+4370),1);
__builtin_memmove((R+4371),(R+4465),1);
__builtin_memmove((R+4370),(R+4369),1);
__builtin_memmove((R+4369),(R+4464),1);
}
B719fda:{NFSU2_TR(0x719fda);
__builtin_memmove((R+4416),(R+4368),8);
}
B719fdd:{NFSU2_TR(0x719fdd);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B719fe0:{NFSU2_TR(0x719fe0);
w2(R+4416,u16(u32(r2(R+4416))*u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))*u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))*u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))*u32(r2(R+4438))));
}
B719fe3:{NFSU2_TR(0x719fe3);
__builtin_memmove((R+4448),(R+4400),8);
}
B719fe6:{NFSU2_TR(0x719fe6);
w2(R+4448,u16(u32(r2(R+4448))*u32(r2(R+4432))));
w2(R+4450,u16(u32(r2(R+4450))*u32(r2(R+4434))));
w2(R+4452,u16(u32(r2(R+4452))*u32(r2(R+4436))));
w2(R+4454,u16(u32(r2(R+4454))*u32(r2(R+4438))));
}
B719fe9:{NFSU2_TR(0x719fe9);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4416))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4418))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4420))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4422))));
}
B719fec:{NFSU2_TR(0x719fec);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(R+4448))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(R+4450))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(R+4452))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(R+4454))));
}
B719fef:{NFSU2_TR(0x719fef);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c6700),8);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(U+0))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(U+2))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(U+4))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(U+6))));
}
B719ff6:{NFSU2_TR(0x719ff6);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c6700),8);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(U+0))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(U+2))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(U+4))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(U+6))));
}
B719ffd:{NFSU2_TR(0x719ffd);
w2(R+4352,shr<u16>(r2(R+4352),u64(u32(0x8ull))));
w2(R+4354,shr<u16>(r2(R+4354),u64(u32(0x8ull))));
w2(R+4356,shr<u16>(r2(R+4356),u64(u32(0x8ull))));
w2(R+4358,shr<u16>(r2(R+4358),u64(u32(0x8ull))));
TAIL_STATIC(0x71a001u,71a);
}
XIT:NFSU2_TR_EXIT(0x719,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
