#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_71e(u8* __restrict R,Cpu& c);
u32 body_720(u8* __restrict R,Cpu& c);
u32 body_735(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x71f,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x71f,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_71f(u8* __restrict R,Cpu& c);
u32 page_71f(Cpu& c){return body_71f(c.regs.data(),c);}
__attribute__((noinline)) u32 body_71f(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x71f001:goto L71f001;
case 0x71f004:c.instructions+=9;goto B71f004;
case 0x71f009:c.instructions+=8;goto B71f009;
case 0x71f00a:c.instructions+=7;goto B71f00a;
case 0x71f00c:c.instructions+=6;goto B71f00c;
case 0x71f00e:c.instructions+=5;goto B71f00e;
case 0x71f010:c.instructions+=4;goto B71f010;
case 0x71f013:c.instructions+=3;goto B71f013;
case 0x71f016:c.instructions+=2;goto B71f016;
case 0x71f017:c.instructions+=1;goto B71f017;
case 0x71f01c:goto L71f01c;
case 0x71f01f:c.instructions+=1;goto B71f01f;
case 0x71f021:goto L71f021;
case 0x71f024:c.instructions+=2;goto B71f024;
case 0x71f026:c.instructions+=1;goto B71f026;
case 0x71f028:goto L71f028;
case 0x71f02b:c.instructions+=10;goto B71f02b;
case 0x71f02e:c.instructions+=9;goto B71f02e;
case 0x71f033:c.instructions+=8;goto B71f033;
case 0x71f034:c.instructions+=7;goto B71f034;
case 0x71f036:c.instructions+=6;goto B71f036;
case 0x71f038:c.instructions+=5;goto B71f038;
case 0x71f039:c.instructions+=4;goto B71f039;
case 0x71f03a:c.instructions+=3;goto B71f03a;
case 0x71f03d:c.instructions+=2;goto B71f03d;
case 0x71f03e:c.instructions+=1;goto B71f03e;
case 0x71f043:goto L71f043;
case 0x71f045:goto L71f045;
case 0x71f048:c.instructions+=2;goto B71f048;
case 0x71f04a:c.instructions+=1;goto B71f04a;
case 0x71f04c:goto L71f04c;
case 0x71f04f:c.instructions+=9;goto B71f04f;
case 0x71f052:c.instructions+=8;goto B71f052;
case 0x71f057:c.instructions+=7;goto B71f057;
case 0x71f059:c.instructions+=6;goto B71f059;
case 0x71f05a:c.instructions+=5;goto B71f05a;
case 0x71f05d:c.instructions+=4;goto B71f05d;
case 0x71f060:c.instructions+=3;goto B71f060;
case 0x71f062:c.instructions+=2;goto B71f062;
case 0x71f063:c.instructions+=1;goto B71f063;
case 0x71f065:goto L71f065;
case 0x71f068:c.instructions+=2;goto B71f068;
case 0x71f06a:c.instructions+=1;goto B71f06a;
case 0x71f06c:goto L71f06c;
case 0x71f06f:c.instructions+=7;goto B71f06f;
case 0x71f072:c.instructions+=6;goto B71f072;
case 0x71f077:c.instructions+=5;goto B71f077;
case 0x71f079:c.instructions+=4;goto B71f079;
case 0x71f07a:c.instructions+=3;goto B71f07a;
case 0x71f07d:c.instructions+=2;goto B71f07d;
case 0x71f080:c.instructions+=1;goto B71f080;
case 0x71f082:goto L71f082;
case 0x71f083:c.instructions+=4;goto B71f083;
case 0x71f084:c.instructions+=3;goto B71f084;
case 0x71f087:c.instructions+=2;goto B71f087;
case 0x71f088:c.instructions+=1;goto B71f088;
case 0x71f08d:goto L71f08d;
case 0x71f090:goto L71f090;
case 0x71f091:c.instructions+=2;goto B71f091;
case 0x71f092:c.instructions+=1;goto B71f092;
case 0x71f093:goto L71f093;
case 0x71f094:c.instructions+=8;goto B71f094;
case 0x71f096:c.instructions+=7;goto B71f096;
case 0x71f097:c.instructions+=6;goto B71f097;
case 0x71f098:c.instructions+=5;goto B71f098;
case 0x71f09b:c.instructions+=4;goto B71f09b;
case 0x71f09e:c.instructions+=3;goto B71f09e;
case 0x71f0a3:c.instructions+=2;goto B71f0a3;
case 0x71f0a8:c.instructions+=1;goto B71f0a8;
case 0x71f0ac:goto L71f0ac;
case 0x71f0b0:c.instructions+=6;goto B71f0b0;
case 0x71f0b4:c.instructions+=5;goto B71f0b4;
case 0x71f0b8:c.instructions+=4;goto B71f0b8;
case 0x71f0bb:c.instructions+=3;goto B71f0bb;
case 0x71f0bd:c.instructions+=2;goto B71f0bd;
case 0x71f0be:c.instructions+=1;goto B71f0be;
case 0x71f0c0:goto L71f0c0;
case 0x71f0c1:c.instructions+=3;goto B71f0c1;
case 0x71f0c2:c.instructions+=2;goto B71f0c2;
case 0x71f0c3:c.instructions+=1;goto B71f0c3;
case 0x71f0c4:goto L71f0c4;
case 0x71f0c5:c.instructions+=9;goto B71f0c5;
case 0x71f0c7:c.instructions+=8;goto B71f0c7;
case 0x71f0c8:c.instructions+=7;goto B71f0c8;
case 0x71f0c9:c.instructions+=6;goto B71f0c9;
case 0x71f0cc:c.instructions+=5;goto B71f0cc;
case 0x71f0cf:c.instructions+=4;goto B71f0cf;
case 0x71f0d7:c.instructions+=3;goto B71f0d7;
case 0x71f0db:c.instructions+=2;goto B71f0db;
case 0x71f0de:c.instructions+=1;goto B71f0de;
case 0x71f0e4:goto L71f0e4;
case 0x71f0e8:c.instructions+=7;goto B71f0e8;
case 0x71f0ec:c.instructions+=6;goto B71f0ec;
case 0x71f0f0:c.instructions+=5;goto B71f0f0;
case 0x71f0f3:c.instructions+=4;goto B71f0f3;
case 0x71f0f5:c.instructions+=3;goto B71f0f5;
case 0x71f0f9:c.instructions+=2;goto B71f0f9;
case 0x71f0fc:c.instructions+=1;goto B71f0fc;
case 0x71f0fe:goto L71f0fe;
case 0x71f0ff:c.instructions+=3;goto B71f0ff;
case 0x71f100:c.instructions+=2;goto B71f100;
case 0x71f101:c.instructions+=1;goto B71f101;
case 0x71f102:goto L71f102;
case 0x71f103:c.instructions+=10;goto B71f103;
case 0x71f105:c.instructions+=9;goto B71f105;
case 0x71f106:c.instructions+=8;goto B71f106;
case 0x71f107:c.instructions+=7;goto B71f107;
case 0x71f108:c.instructions+=6;goto B71f108;
case 0x71f10b:c.instructions+=5;goto B71f10b;
case 0x71f10e:c.instructions+=4;goto B71f10e;
case 0x71f111:c.instructions+=3;goto B71f111;
case 0x71f114:c.instructions+=2;goto B71f114;
case 0x71f118:c.instructions+=1;goto B71f118;
case 0x71f11e:goto L71f11e;
case 0x71f122:c.instructions+=10;goto B71f122;
case 0x71f126:c.instructions+=9;goto B71f126;
case 0x71f12a:c.instructions+=8;goto B71f12a;
case 0x71f12c:c.instructions+=7;goto B71f12c;
case 0x71f130:c.instructions+=6;goto B71f130;
case 0x71f133:c.instructions+=5;goto B71f133;
case 0x71f137:c.instructions+=4;goto B71f137;
case 0x71f139:c.instructions+=3;goto B71f139;
case 0x71f13d:c.instructions+=2;goto B71f13d;
case 0x71f140:c.instructions+=1;goto B71f140;
case 0x71f142:goto L71f142;
case 0x71f143:c.instructions+=4;goto B71f143;
case 0x71f144:c.instructions+=3;goto B71f144;
case 0x71f145:c.instructions+=2;goto B71f145;
case 0x71f146:c.instructions+=1;goto B71f146;
case 0x71f147:goto L71f147;
case 0x71f148:c.instructions+=13;goto B71f148;
case 0x71f14a:c.instructions+=12;goto B71f14a;
case 0x71f14b:c.instructions+=11;goto B71f14b;
case 0x71f14c:c.instructions+=10;goto B71f14c;
case 0x71f14d:c.instructions+=9;goto B71f14d;
case 0x71f14e:c.instructions+=8;goto B71f14e;
case 0x71f14f:c.instructions+=7;goto B71f14f;
case 0x71f152:c.instructions+=6;goto B71f152;
case 0x71f155:c.instructions+=5;goto B71f155;
case 0x71f158:c.instructions+=4;goto B71f158;
case 0x71f15b:c.instructions+=3;goto B71f15b;
case 0x71f15e:c.instructions+=2;goto B71f15e;
case 0x71f164:c.instructions+=1;goto B71f164;
case 0x71f168:goto L71f168;
case 0x71f16c:c.instructions+=15;goto B71f16c;
case 0x71f170:c.instructions+=14;goto B71f170;
case 0x71f174:c.instructions+=13;goto B71f174;
case 0x71f178:c.instructions+=12;goto B71f178;
case 0x71f17c:c.instructions+=11;goto B71f17c;
case 0x71f180:c.instructions+=10;goto B71f180;
case 0x71f185:c.instructions+=9;goto B71f185;
case 0x71f189:c.instructions+=8;goto B71f189;
case 0x71f18c:c.instructions+=7;goto B71f18c;
case 0x71f190:c.instructions+=6;goto B71f190;
case 0x71f192:c.instructions+=5;goto B71f192;
case 0x71f194:c.instructions+=4;goto B71f194;
case 0x71f196:c.instructions+=3;goto B71f196;
case 0x71f19a:c.instructions+=2;goto B71f19a;
case 0x71f19d:c.instructions+=1;goto B71f19d;
case 0x71f19f:goto L71f19f;
case 0x71f1a0:c.instructions+=6;goto B71f1a0;
case 0x71f1a1:c.instructions+=5;goto B71f1a1;
case 0x71f1a2:c.instructions+=4;goto B71f1a2;
case 0x71f1a3:c.instructions+=3;goto B71f1a3;
case 0x71f1a4:c.instructions+=2;goto B71f1a4;
case 0x71f1a5:c.instructions+=1;goto B71f1a5;
case 0x71f1a6:goto L71f1a6;
case 0x71f1a7:c.instructions+=295;goto B71f1a7;
case 0x71f1a9:c.instructions+=294;goto B71f1a9;
case 0x71f1aa:c.instructions+=293;goto B71f1aa;
case 0x71f1ab:c.instructions+=292;goto B71f1ab;
case 0x71f1ae:c.instructions+=291;goto B71f1ae;
case 0x71f1b1:c.instructions+=290;goto B71f1b1;
case 0x71f1b4:c.instructions+=289;goto B71f1b4;
case 0x71f1ba:c.instructions+=288;goto B71f1ba;
case 0x71f1be:c.instructions+=287;goto B71f1be;
case 0x71f1c3:c.instructions+=286;goto B71f1c3;
case 0x71f1c7:c.instructions+=285;goto B71f1c7;
case 0x71f1cc:c.instructions+=284;goto B71f1cc;
case 0x71f1d1:c.instructions+=283;goto B71f1d1;
case 0x71f1d6:c.instructions+=282;goto B71f1d6;
case 0x71f1db:c.instructions+=281;goto B71f1db;
case 0x71f1e0:c.instructions+=280;goto B71f1e0;
case 0x71f1e4:c.instructions+=279;goto B71f1e4;
case 0x71f1e9:c.instructions+=278;goto B71f1e9;
case 0x71f1ee:c.instructions+=277;goto B71f1ee;
case 0x71f1f3:c.instructions+=276;goto B71f1f3;
case 0x71f1f8:c.instructions+=275;goto B71f1f8;
case 0x71f1fd:c.instructions+=274;goto B71f1fd;
case 0x71f202:c.instructions+=273;goto B71f202;
case 0x71f207:c.instructions+=272;goto B71f207;
case 0x71f20c:c.instructions+=271;goto B71f20c;
case 0x71f211:c.instructions+=270;goto B71f211;
case 0x71f216:c.instructions+=269;goto B71f216;
case 0x71f21b:c.instructions+=268;goto B71f21b;
case 0x71f220:c.instructions+=267;goto B71f220;
case 0x71f225:c.instructions+=266;goto B71f225;
case 0x71f22a:c.instructions+=265;goto B71f22a;
case 0x71f22f:c.instructions+=264;goto B71f22f;
case 0x71f234:c.instructions+=263;goto B71f234;
case 0x71f239:c.instructions+=262;goto B71f239;
case 0x71f23d:c.instructions+=261;goto B71f23d;
case 0x71f242:c.instructions+=260;goto B71f242;
case 0x71f246:c.instructions+=259;goto B71f246;
case 0x71f24b:c.instructions+=258;goto B71f24b;
case 0x71f24f:c.instructions+=257;goto B71f24f;
case 0x71f253:c.instructions+=256;goto B71f253;
case 0x71f257:c.instructions+=255;goto B71f257;
case 0x71f25c:c.instructions+=254;goto B71f25c;
case 0x71f260:c.instructions+=253;goto B71f260;
case 0x71f264:c.instructions+=252;goto B71f264;
case 0x71f268:c.instructions+=251;goto B71f268;
case 0x71f26c:c.instructions+=250;goto B71f26c;
case 0x71f270:c.instructions+=249;goto B71f270;
case 0x71f275:c.instructions+=248;goto B71f275;
case 0x71f279:c.instructions+=247;goto B71f279;
case 0x71f27d:c.instructions+=246;goto B71f27d;
case 0x71f281:c.instructions+=245;goto B71f281;
case 0x71f285:c.instructions+=244;goto B71f285;
case 0x71f289:c.instructions+=243;goto B71f289;
case 0x71f28e:c.instructions+=242;goto B71f28e;
case 0x71f292:c.instructions+=241;goto B71f292;
case 0x71f296:c.instructions+=240;goto B71f296;
case 0x71f29a:c.instructions+=239;goto B71f29a;
case 0x71f29f:c.instructions+=238;goto B71f29f;
case 0x71f2a3:c.instructions+=237;goto B71f2a3;
case 0x71f2a7:c.instructions+=236;goto B71f2a7;
case 0x71f2ab:c.instructions+=235;goto B71f2ab;
case 0x71f2b0:c.instructions+=234;goto B71f2b0;
case 0x71f2b4:c.instructions+=233;goto B71f2b4;
case 0x71f2b9:c.instructions+=232;goto B71f2b9;
case 0x71f2bd:c.instructions+=231;goto B71f2bd;
case 0x71f2c1:c.instructions+=230;goto B71f2c1;
case 0x71f2c5:c.instructions+=229;goto B71f2c5;
case 0x71f2ca:c.instructions+=228;goto B71f2ca;
case 0x71f2ce:c.instructions+=227;goto B71f2ce;
case 0x71f2d3:c.instructions+=226;goto B71f2d3;
case 0x71f2d7:c.instructions+=225;goto B71f2d7;
case 0x71f2db:c.instructions+=224;goto B71f2db;
case 0x71f2df:c.instructions+=223;goto B71f2df;
case 0x71f2e3:c.instructions+=222;goto B71f2e3;
case 0x71f2e7:c.instructions+=221;goto B71f2e7;
case 0x71f2ec:c.instructions+=220;goto B71f2ec;
case 0x71f2f0:c.instructions+=219;goto B71f2f0;
case 0x71f2f5:c.instructions+=218;goto B71f2f5;
case 0x71f2f9:c.instructions+=217;goto B71f2f9;
case 0x71f2fe:c.instructions+=216;goto B71f2fe;
case 0x71f302:c.instructions+=215;goto B71f302;
case 0x71f306:c.instructions+=214;goto B71f306;
case 0x71f30a:c.instructions+=213;goto B71f30a;
case 0x71f30f:c.instructions+=212;goto B71f30f;
case 0x71f313:c.instructions+=211;goto B71f313;
case 0x71f317:c.instructions+=210;goto B71f317;
case 0x71f31b:c.instructions+=209;goto B71f31b;
case 0x71f31f:c.instructions+=208;goto B71f31f;
case 0x71f324:c.instructions+=207;goto B71f324;
case 0x71f328:c.instructions+=206;goto B71f328;
case 0x71f32c:c.instructions+=205;goto B71f32c;
case 0x71f330:c.instructions+=204;goto B71f330;
case 0x71f334:c.instructions+=203;goto B71f334;
case 0x71f338:c.instructions+=202;goto B71f338;
case 0x71f33c:c.instructions+=201;goto B71f33c;
case 0x71f340:c.instructions+=200;goto B71f340;
case 0x71f344:c.instructions+=199;goto B71f344;
case 0x71f348:c.instructions+=198;goto B71f348;
case 0x71f34c:c.instructions+=197;goto B71f34c;
case 0x71f350:c.instructions+=196;goto B71f350;
case 0x71f354:c.instructions+=195;goto B71f354;
case 0x71f358:c.instructions+=194;goto B71f358;
case 0x71f35d:c.instructions+=193;goto B71f35d;
case 0x71f361:c.instructions+=192;goto B71f361;
case 0x71f365:c.instructions+=191;goto B71f365;
case 0x71f369:c.instructions+=190;goto B71f369;
case 0x71f36d:c.instructions+=189;goto B71f36d;
case 0x71f371:c.instructions+=188;goto B71f371;
case 0x71f375:c.instructions+=187;goto B71f375;
case 0x71f37a:c.instructions+=186;goto B71f37a;
case 0x71f37e:c.instructions+=185;goto B71f37e;
case 0x71f383:c.instructions+=184;goto B71f383;
case 0x71f387:c.instructions+=183;goto B71f387;
case 0x71f38c:c.instructions+=182;goto B71f38c;
case 0x71f390:c.instructions+=181;goto B71f390;
case 0x71f394:c.instructions+=180;goto B71f394;
case 0x71f398:c.instructions+=179;goto B71f398;
case 0x71f39c:c.instructions+=178;goto B71f39c;
case 0x71f3a0:c.instructions+=177;goto B71f3a0;
case 0x71f3a4:c.instructions+=176;goto B71f3a4;
case 0x71f3a9:c.instructions+=175;goto B71f3a9;
case 0x71f3ae:c.instructions+=174;goto B71f3ae;
case 0x71f3b2:c.instructions+=173;goto B71f3b2;
case 0x71f3b6:c.instructions+=172;goto B71f3b6;
case 0x71f3ba:c.instructions+=171;goto B71f3ba;
case 0x71f3bf:c.instructions+=170;goto B71f3bf;
case 0x71f3c4:c.instructions+=169;goto B71f3c4;
case 0x71f3c9:c.instructions+=168;goto B71f3c9;
case 0x71f3cd:c.instructions+=167;goto B71f3cd;
case 0x71f3d2:c.instructions+=166;goto B71f3d2;
case 0x71f3d7:c.instructions+=165;goto B71f3d7;
case 0x71f3db:c.instructions+=164;goto B71f3db;
case 0x71f3df:c.instructions+=163;goto B71f3df;
case 0x71f3e3:c.instructions+=162;goto B71f3e3;
case 0x71f3e8:c.instructions+=161;goto B71f3e8;
case 0x71f3ed:c.instructions+=160;goto B71f3ed;
case 0x71f3f1:c.instructions+=159;goto B71f3f1;
case 0x71f3f5:c.instructions+=158;goto B71f3f5;
case 0x71f3f9:c.instructions+=157;goto B71f3f9;
case 0x71f3fd:c.instructions+=156;goto B71f3fd;
case 0x71f401:c.instructions+=155;goto B71f401;
case 0x71f405:c.instructions+=154;goto B71f405;
case 0x71f40a:c.instructions+=153;goto B71f40a;
case 0x71f40e:c.instructions+=152;goto B71f40e;
case 0x71f412:c.instructions+=151;goto B71f412;
case 0x71f416:c.instructions+=150;goto B71f416;
case 0x71f41a:c.instructions+=149;goto B71f41a;
case 0x71f41f:c.instructions+=148;goto B71f41f;
case 0x71f423:c.instructions+=147;goto B71f423;
case 0x71f427:c.instructions+=146;goto B71f427;
case 0x71f42b:c.instructions+=145;goto B71f42b;
case 0x71f430:c.instructions+=144;goto B71f430;
case 0x71f435:c.instructions+=143;goto B71f435;
case 0x71f439:c.instructions+=142;goto B71f439;
case 0x71f43d:c.instructions+=141;goto B71f43d;
case 0x71f441:c.instructions+=140;goto B71f441;
case 0x71f445:c.instructions+=139;goto B71f445;
case 0x71f449:c.instructions+=138;goto B71f449;
case 0x71f44d:c.instructions+=137;goto B71f44d;
case 0x71f451:c.instructions+=136;goto B71f451;
case 0x71f455:c.instructions+=135;goto B71f455;
case 0x71f459:c.instructions+=134;goto B71f459;
case 0x71f45d:c.instructions+=133;goto B71f45d;
case 0x71f461:c.instructions+=132;goto B71f461;
case 0x71f465:c.instructions+=131;goto B71f465;
case 0x71f469:c.instructions+=130;goto B71f469;
case 0x71f46e:c.instructions+=129;goto B71f46e;
case 0x71f473:c.instructions+=128;goto B71f473;
case 0x71f477:c.instructions+=127;goto B71f477;
case 0x71f47b:c.instructions+=126;goto B71f47b;
case 0x71f47f:c.instructions+=125;goto B71f47f;
case 0x71f483:c.instructions+=124;goto B71f483;
case 0x71f487:c.instructions+=123;goto B71f487;
case 0x71f48b:c.instructions+=122;goto B71f48b;
case 0x71f490:c.instructions+=121;goto B71f490;
case 0x71f495:c.instructions+=120;goto B71f495;
case 0x71f49a:c.instructions+=119;goto B71f49a;
case 0x71f49f:c.instructions+=118;goto B71f49f;
case 0x71f4a3:c.instructions+=117;goto B71f4a3;
case 0x71f4a7:c.instructions+=116;goto B71f4a7;
case 0x71f4ab:c.instructions+=115;goto B71f4ab;
case 0x71f4b0:c.instructions+=114;goto B71f4b0;
case 0x71f4b5:c.instructions+=113;goto B71f4b5;
case 0x71f4ba:c.instructions+=112;goto B71f4ba;
case 0x71f4bf:c.instructions+=111;goto B71f4bf;
case 0x71f4c3:c.instructions+=110;goto B71f4c3;
case 0x71f4c8:c.instructions+=109;goto B71f4c8;
case 0x71f4cc:c.instructions+=108;goto B71f4cc;
case 0x71f4d1:c.instructions+=107;goto B71f4d1;
case 0x71f4d5:c.instructions+=106;goto B71f4d5;
case 0x71f4d9:c.instructions+=105;goto B71f4d9;
case 0x71f4dd:c.instructions+=104;goto B71f4dd;
case 0x71f4e2:c.instructions+=103;goto B71f4e2;
case 0x71f4e6:c.instructions+=102;goto B71f4e6;
case 0x71f4ea:c.instructions+=101;goto B71f4ea;
case 0x71f4ee:c.instructions+=100;goto B71f4ee;
case 0x71f4f2:c.instructions+=99;goto B71f4f2;
case 0x71f4f6:c.instructions+=98;goto B71f4f6;
case 0x71f4fb:c.instructions+=97;goto B71f4fb;
case 0x71f4ff:c.instructions+=96;goto B71f4ff;
case 0x71f503:c.instructions+=95;goto B71f503;
case 0x71f507:c.instructions+=94;goto B71f507;
case 0x71f50b:c.instructions+=93;goto B71f50b;
case 0x71f50f:c.instructions+=92;goto B71f50f;
case 0x71f514:c.instructions+=91;goto B71f514;
case 0x71f518:c.instructions+=90;goto B71f518;
case 0x71f51c:c.instructions+=89;goto B71f51c;
case 0x71f520:c.instructions+=88;goto B71f520;
case 0x71f525:c.instructions+=87;goto B71f525;
case 0x71f529:c.instructions+=86;goto B71f529;
case 0x71f52d:c.instructions+=85;goto B71f52d;
case 0x71f531:c.instructions+=84;goto B71f531;
case 0x71f536:c.instructions+=83;goto B71f536;
case 0x71f53a:c.instructions+=82;goto B71f53a;
case 0x71f53f:c.instructions+=81;goto B71f53f;
case 0x71f543:c.instructions+=80;goto B71f543;
case 0x71f547:c.instructions+=79;goto B71f547;
case 0x71f54b:c.instructions+=78;goto B71f54b;
case 0x71f550:c.instructions+=77;goto B71f550;
case 0x71f554:c.instructions+=76;goto B71f554;
case 0x71f559:c.instructions+=75;goto B71f559;
case 0x71f55d:c.instructions+=74;goto B71f55d;
case 0x71f561:c.instructions+=73;goto B71f561;
case 0x71f565:c.instructions+=72;goto B71f565;
case 0x71f569:c.instructions+=71;goto B71f569;
case 0x71f56d:c.instructions+=70;goto B71f56d;
case 0x71f572:c.instructions+=69;goto B71f572;
case 0x71f576:c.instructions+=68;goto B71f576;
case 0x71f57b:c.instructions+=67;goto B71f57b;
case 0x71f57f:c.instructions+=66;goto B71f57f;
case 0x71f584:c.instructions+=65;goto B71f584;
case 0x71f588:c.instructions+=64;goto B71f588;
case 0x71f58c:c.instructions+=63;goto B71f58c;
case 0x71f590:c.instructions+=62;goto B71f590;
case 0x71f595:c.instructions+=61;goto B71f595;
case 0x71f599:c.instructions+=60;goto B71f599;
case 0x71f59d:c.instructions+=59;goto B71f59d;
case 0x71f5a1:c.instructions+=58;goto B71f5a1;
case 0x71f5a5:c.instructions+=57;goto B71f5a5;
case 0x71f5aa:c.instructions+=56;goto B71f5aa;
case 0x71f5ae:c.instructions+=55;goto B71f5ae;
case 0x71f5b2:c.instructions+=54;goto B71f5b2;
case 0x71f5b6:c.instructions+=53;goto B71f5b6;
case 0x71f5ba:c.instructions+=52;goto B71f5ba;
case 0x71f5be:c.instructions+=51;goto B71f5be;
case 0x71f5c2:c.instructions+=50;goto B71f5c2;
case 0x71f5c6:c.instructions+=49;goto B71f5c6;
case 0x71f5ca:c.instructions+=48;goto B71f5ca;
case 0x71f5ce:c.instructions+=47;goto B71f5ce;
case 0x71f5d2:c.instructions+=46;goto B71f5d2;
case 0x71f5d6:c.instructions+=45;goto B71f5d6;
case 0x71f5da:c.instructions+=44;goto B71f5da;
case 0x71f5de:c.instructions+=43;goto B71f5de;
case 0x71f5e3:c.instructions+=42;goto B71f5e3;
case 0x71f5e7:c.instructions+=41;goto B71f5e7;
case 0x71f5eb:c.instructions+=40;goto B71f5eb;
case 0x71f5ef:c.instructions+=39;goto B71f5ef;
case 0x71f5f7:c.instructions+=38;goto B71f5f7;
case 0x71f5fb:c.instructions+=37;goto B71f5fb;
case 0x71f5ff:c.instructions+=36;goto B71f5ff;
case 0x71f604:c.instructions+=35;goto B71f604;
case 0x71f608:c.instructions+=34;goto B71f608;
case 0x71f60d:c.instructions+=33;goto B71f60d;
case 0x71f612:c.instructions+=32;goto B71f612;
case 0x71f616:c.instructions+=31;goto B71f616;
case 0x71f61b:c.instructions+=30;goto B71f61b;
case 0x71f61f:c.instructions+=29;goto B71f61f;
case 0x71f624:c.instructions+=28;goto B71f624;
case 0x71f628:c.instructions+=27;goto B71f628;
case 0x71f630:c.instructions+=26;goto B71f630;
case 0x71f634:c.instructions+=25;goto B71f634;
case 0x71f638:c.instructions+=24;goto B71f638;
case 0x71f63d:c.instructions+=23;goto B71f63d;
case 0x71f641:c.instructions+=22;goto B71f641;
case 0x71f646:c.instructions+=21;goto B71f646;
case 0x71f64e:c.instructions+=20;goto B71f64e;
case 0x71f652:c.instructions+=19;goto B71f652;
case 0x71f656:c.instructions+=18;goto B71f656;
case 0x71f65b:c.instructions+=17;goto B71f65b;
case 0x71f660:c.instructions+=16;goto B71f660;
case 0x71f665:c.instructions+=15;goto B71f665;
case 0x71f66a:c.instructions+=14;goto B71f66a;
case 0x71f66e:c.instructions+=13;goto B71f66e;
case 0x71f676:c.instructions+=12;goto B71f676;
case 0x71f67a:c.instructions+=11;goto B71f67a;
case 0x71f67e:c.instructions+=10;goto B71f67e;
case 0x71f683:c.instructions+=9;goto B71f683;
case 0x71f688:c.instructions+=8;goto B71f688;
case 0x71f68d:c.instructions+=7;goto B71f68d;
case 0x71f692:c.instructions+=6;goto B71f692;
case 0x71f697:c.instructions+=5;goto B71f697;
case 0x71f69b:c.instructions+=4;goto B71f69b;
case 0x71f69c:c.instructions+=3;goto B71f69c;
case 0x71f69d:c.instructions+=2;goto B71f69d;
case 0x71f69e:c.instructions+=1;goto B71f69e;
case 0x71f69f:goto L71f69f;
case 0x71f6a0:c.instructions+=239;goto B71f6a0;
case 0x71f6a2:c.instructions+=238;goto B71f6a2;
case 0x71f6a3:c.instructions+=237;goto B71f6a3;
case 0x71f6a4:c.instructions+=236;goto B71f6a4;
case 0x71f6a7:c.instructions+=235;goto B71f6a7;
case 0x71f6aa:c.instructions+=234;goto B71f6aa;
case 0x71f6ad:c.instructions+=233;goto B71f6ad;
case 0x71f6b3:c.instructions+=232;goto B71f6b3;
case 0x71f6b7:c.instructions+=231;goto B71f6b7;
case 0x71f6bc:c.instructions+=230;goto B71f6bc;
case 0x71f6c0:c.instructions+=229;goto B71f6c0;
case 0x71f6c5:c.instructions+=228;goto B71f6c5;
case 0x71f6ca:c.instructions+=227;goto B71f6ca;
case 0x71f6cf:c.instructions+=226;goto B71f6cf;
case 0x71f6d4:c.instructions+=225;goto B71f6d4;
case 0x71f6d9:c.instructions+=224;goto B71f6d9;
case 0x71f6dd:c.instructions+=223;goto B71f6dd;
case 0x71f6e2:c.instructions+=222;goto B71f6e2;
case 0x71f6e7:c.instructions+=221;goto B71f6e7;
case 0x71f6ec:c.instructions+=220;goto B71f6ec;
case 0x71f6f1:c.instructions+=219;goto B71f6f1;
case 0x71f6f6:c.instructions+=218;goto B71f6f6;
case 0x71f6fa:c.instructions+=217;goto B71f6fa;
case 0x71f6fe:c.instructions+=216;goto B71f6fe;
case 0x71f703:c.instructions+=215;goto B71f703;
case 0x71f707:c.instructions+=214;goto B71f707;
case 0x71f70b:c.instructions+=213;goto B71f70b;
case 0x71f710:c.instructions+=212;goto B71f710;
case 0x71f714:c.instructions+=211;goto B71f714;
case 0x71f718:c.instructions+=210;goto B71f718;
case 0x71f71d:c.instructions+=209;goto B71f71d;
case 0x71f721:c.instructions+=208;goto B71f721;
case 0x71f725:c.instructions+=207;goto B71f725;
case 0x71f729:c.instructions+=206;goto B71f729;
case 0x71f72d:c.instructions+=205;goto B71f72d;
case 0x71f731:c.instructions+=204;goto B71f731;
case 0x71f735:c.instructions+=203;goto B71f735;
case 0x71f739:c.instructions+=202;goto B71f739;
case 0x71f73e:c.instructions+=201;goto B71f73e;
case 0x71f742:c.instructions+=200;goto B71f742;
case 0x71f747:c.instructions+=199;goto B71f747;
case 0x71f74b:c.instructions+=198;goto B71f74b;
case 0x71f74f:c.instructions+=197;goto B71f74f;
case 0x71f754:c.instructions+=196;goto B71f754;
case 0x71f758:c.instructions+=195;goto B71f758;
case 0x71f75c:c.instructions+=194;goto B71f75c;
case 0x71f760:c.instructions+=193;goto B71f760;
case 0x71f764:c.instructions+=192;goto B71f764;
case 0x71f768:c.instructions+=191;goto B71f768;
case 0x71f76d:c.instructions+=190;goto B71f76d;
case 0x71f772:c.instructions+=189;goto B71f772;
case 0x71f776:c.instructions+=188;goto B71f776;
case 0x71f77a:c.instructions+=187;goto B71f77a;
case 0x71f77e:c.instructions+=186;goto B71f77e;
case 0x71f783:c.instructions+=185;goto B71f783;
case 0x71f787:c.instructions+=184;goto B71f787;
case 0x71f78b:c.instructions+=183;goto B71f78b;
case 0x71f78f:c.instructions+=182;goto B71f78f;
case 0x71f793:c.instructions+=181;goto B71f793;
case 0x71f797:c.instructions+=180;goto B71f797;
case 0x71f79b:c.instructions+=179;goto B71f79b;
case 0x71f79f:c.instructions+=178;goto B71f79f;
case 0x71f7a3:c.instructions+=177;goto B71f7a3;
case 0x71f7a7:c.instructions+=176;goto B71f7a7;
case 0x71f7ab:c.instructions+=175;goto B71f7ab;
case 0x71f7af:c.instructions+=174;goto B71f7af;
case 0x71f7b3:c.instructions+=173;goto B71f7b3;
case 0x71f7b7:c.instructions+=172;goto B71f7b7;
case 0x71f7bb:c.instructions+=171;goto B71f7bb;
case 0x71f7c0:c.instructions+=170;goto B71f7c0;
case 0x71f7c4:c.instructions+=169;goto B71f7c4;
case 0x71f7c8:c.instructions+=168;goto B71f7c8;
case 0x71f7cc:c.instructions+=167;goto B71f7cc;
case 0x71f7d0:c.instructions+=166;goto B71f7d0;
case 0x71f7d4:c.instructions+=165;goto B71f7d4;
case 0x71f7d9:c.instructions+=164;goto B71f7d9;
case 0x71f7dd:c.instructions+=163;goto B71f7dd;
case 0x71f7e2:c.instructions+=162;goto B71f7e2;
case 0x71f7e6:c.instructions+=161;goto B71f7e6;
case 0x71f7eb:c.instructions+=160;goto B71f7eb;
case 0x71f7ef:c.instructions+=159;goto B71f7ef;
case 0x71f7f3:c.instructions+=158;goto B71f7f3;
case 0x71f7f7:c.instructions+=157;goto B71f7f7;
case 0x71f7fb:c.instructions+=156;goto B71f7fb;
case 0x71f7ff:c.instructions+=155;goto B71f7ff;
case 0x71f803:c.instructions+=154;goto B71f803;
case 0x71f808:c.instructions+=153;goto B71f808;
case 0x71f80d:c.instructions+=152;goto B71f80d;
case 0x71f811:c.instructions+=151;goto B71f811;
case 0x71f815:c.instructions+=150;goto B71f815;
case 0x71f819:c.instructions+=149;goto B71f819;
case 0x71f81e:c.instructions+=148;goto B71f81e;
case 0x71f823:c.instructions+=147;goto B71f823;
case 0x71f828:c.instructions+=146;goto B71f828;
case 0x71f82c:c.instructions+=145;goto B71f82c;
case 0x71f831:c.instructions+=144;goto B71f831;
case 0x71f836:c.instructions+=143;goto B71f836;
case 0x71f83a:c.instructions+=142;goto B71f83a;
case 0x71f83e:c.instructions+=141;goto B71f83e;
case 0x71f842:c.instructions+=140;goto B71f842;
case 0x71f847:c.instructions+=139;goto B71f847;
case 0x71f84c:c.instructions+=138;goto B71f84c;
case 0x71f850:c.instructions+=137;goto B71f850;
case 0x71f854:c.instructions+=136;goto B71f854;
case 0x71f858:c.instructions+=135;goto B71f858;
case 0x71f85c:c.instructions+=134;goto B71f85c;
case 0x71f860:c.instructions+=133;goto B71f860;
case 0x71f864:c.instructions+=132;goto B71f864;
case 0x71f869:c.instructions+=131;goto B71f869;
case 0x71f86d:c.instructions+=130;goto B71f86d;
case 0x71f871:c.instructions+=129;goto B71f871;
case 0x71f875:c.instructions+=128;goto B71f875;
case 0x71f879:c.instructions+=127;goto B71f879;
case 0x71f87e:c.instructions+=126;goto B71f87e;
case 0x71f882:c.instructions+=125;goto B71f882;
case 0x71f886:c.instructions+=124;goto B71f886;
case 0x71f88a:c.instructions+=123;goto B71f88a;
case 0x71f88f:c.instructions+=122;goto B71f88f;
case 0x71f894:c.instructions+=121;goto B71f894;
case 0x71f898:c.instructions+=120;goto B71f898;
case 0x71f89c:c.instructions+=119;goto B71f89c;
case 0x71f8a0:c.instructions+=118;goto B71f8a0;
case 0x71f8a4:c.instructions+=117;goto B71f8a4;
case 0x71f8a8:c.instructions+=116;goto B71f8a8;
case 0x71f8ac:c.instructions+=115;goto B71f8ac;
case 0x71f8b0:c.instructions+=114;goto B71f8b0;
case 0x71f8b4:c.instructions+=113;goto B71f8b4;
case 0x71f8b8:c.instructions+=112;goto B71f8b8;
case 0x71f8bc:c.instructions+=111;goto B71f8bc;
case 0x71f8c0:c.instructions+=110;goto B71f8c0;
case 0x71f8c4:c.instructions+=109;goto B71f8c4;
case 0x71f8c8:c.instructions+=108;goto B71f8c8;
case 0x71f8cd:c.instructions+=107;goto B71f8cd;
case 0x71f8d2:c.instructions+=106;goto B71f8d2;
case 0x71f8d6:c.instructions+=105;goto B71f8d6;
case 0x71f8da:c.instructions+=104;goto B71f8da;
case 0x71f8de:c.instructions+=103;goto B71f8de;
case 0x71f8e2:c.instructions+=102;goto B71f8e2;
case 0x71f8e6:c.instructions+=101;goto B71f8e6;
case 0x71f8ea:c.instructions+=100;goto B71f8ea;
case 0x71f8ef:c.instructions+=99;goto B71f8ef;
case 0x71f8f4:c.instructions+=98;goto B71f8f4;
case 0x71f8f9:c.instructions+=97;goto B71f8f9;
case 0x71f8fe:c.instructions+=96;goto B71f8fe;
case 0x71f902:c.instructions+=95;goto B71f902;
case 0x71f906:c.instructions+=94;goto B71f906;
case 0x71f90a:c.instructions+=93;goto B71f90a;
case 0x71f90f:c.instructions+=92;goto B71f90f;
case 0x71f914:c.instructions+=91;goto B71f914;
case 0x71f919:c.instructions+=90;goto B71f919;
case 0x71f91e:c.instructions+=89;goto B71f91e;
case 0x71f922:c.instructions+=88;goto B71f922;
case 0x71f926:c.instructions+=87;goto B71f926;
case 0x71f92b:c.instructions+=86;goto B71f92b;
case 0x71f92f:c.instructions+=85;goto B71f92f;
case 0x71f933:c.instructions+=84;goto B71f933;
case 0x71f938:c.instructions+=83;goto B71f938;
case 0x71f93c:c.instructions+=82;goto B71f93c;
case 0x71f940:c.instructions+=81;goto B71f940;
case 0x71f945:c.instructions+=80;goto B71f945;
case 0x71f949:c.instructions+=79;goto B71f949;
case 0x71f94d:c.instructions+=78;goto B71f94d;
case 0x71f951:c.instructions+=77;goto B71f951;
case 0x71f955:c.instructions+=76;goto B71f955;
case 0x71f959:c.instructions+=75;goto B71f959;
case 0x71f95d:c.instructions+=74;goto B71f95d;
case 0x71f961:c.instructions+=73;goto B71f961;
case 0x71f966:c.instructions+=72;goto B71f966;
case 0x71f96a:c.instructions+=71;goto B71f96a;
case 0x71f96f:c.instructions+=70;goto B71f96f;
case 0x71f973:c.instructions+=69;goto B71f973;
case 0x71f977:c.instructions+=68;goto B71f977;
case 0x71f97c:c.instructions+=67;goto B71f97c;
case 0x71f980:c.instructions+=66;goto B71f980;
case 0x71f984:c.instructions+=65;goto B71f984;
case 0x71f988:c.instructions+=64;goto B71f988;
case 0x71f98c:c.instructions+=63;goto B71f98c;
case 0x71f990:c.instructions+=62;goto B71f990;
case 0x71f995:c.instructions+=61;goto B71f995;
case 0x71f99a:c.instructions+=60;goto B71f99a;
case 0x71f99e:c.instructions+=59;goto B71f99e;
case 0x71f9a2:c.instructions+=58;goto B71f9a2;
case 0x71f9a6:c.instructions+=57;goto B71f9a6;
case 0x71f9ab:c.instructions+=56;goto B71f9ab;
case 0x71f9af:c.instructions+=55;goto B71f9af;
case 0x71f9b3:c.instructions+=54;goto B71f9b3;
case 0x71f9b7:c.instructions+=53;goto B71f9b7;
case 0x71f9bb:c.instructions+=52;goto B71f9bb;
case 0x71f9bf:c.instructions+=51;goto B71f9bf;
case 0x71f9c3:c.instructions+=50;goto B71f9c3;
case 0x71f9c7:c.instructions+=49;goto B71f9c7;
case 0x71f9cb:c.instructions+=48;goto B71f9cb;
case 0x71f9cf:c.instructions+=47;goto B71f9cf;
case 0x71f9d3:c.instructions+=46;goto B71f9d3;
case 0x71f9d7:c.instructions+=45;goto B71f9d7;
case 0x71f9db:c.instructions+=44;goto B71f9db;
case 0x71f9df:c.instructions+=43;goto B71f9df;
case 0x71f9e3:c.instructions+=42;goto B71f9e3;
case 0x71f9e8:c.instructions+=41;goto B71f9e8;
case 0x71f9ec:c.instructions+=40;goto B71f9ec;
case 0x71f9f0:c.instructions+=39;goto B71f9f0;
case 0x71f9f8:c.instructions+=38;goto B71f9f8;
case 0x71f9fc:c.instructions+=37;goto B71f9fc;
case 0x71fa00:c.instructions+=36;goto B71fa00;
case 0x71fa05:c.instructions+=35;goto B71fa05;
case 0x71fa09:c.instructions+=34;goto B71fa09;
case 0x71fa0e:c.instructions+=33;goto B71fa0e;
case 0x71fa13:c.instructions+=32;goto B71fa13;
case 0x71fa17:c.instructions+=31;goto B71fa17;
case 0x71fa1c:c.instructions+=30;goto B71fa1c;
case 0x71fa20:c.instructions+=29;goto B71fa20;
case 0x71fa25:c.instructions+=28;goto B71fa25;
case 0x71fa29:c.instructions+=27;goto B71fa29;
case 0x71fa31:c.instructions+=26;goto B71fa31;
case 0x71fa35:c.instructions+=25;goto B71fa35;
case 0x71fa39:c.instructions+=24;goto B71fa39;
case 0x71fa3e:c.instructions+=23;goto B71fa3e;
case 0x71fa42:c.instructions+=22;goto B71fa42;
case 0x71fa47:c.instructions+=21;goto B71fa47;
case 0x71fa4f:c.instructions+=20;goto B71fa4f;
case 0x71fa53:c.instructions+=19;goto B71fa53;
case 0x71fa57:c.instructions+=18;goto B71fa57;
case 0x71fa5c:c.instructions+=17;goto B71fa5c;
case 0x71fa61:c.instructions+=16;goto B71fa61;
case 0x71fa66:c.instructions+=15;goto B71fa66;
case 0x71fa6b:c.instructions+=14;goto B71fa6b;
case 0x71fa6f:c.instructions+=13;goto B71fa6f;
case 0x71fa77:c.instructions+=12;goto B71fa77;
case 0x71fa7b:c.instructions+=11;goto B71fa7b;
case 0x71fa7f:c.instructions+=10;goto B71fa7f;
case 0x71fa84:c.instructions+=9;goto B71fa84;
case 0x71fa89:c.instructions+=8;goto B71fa89;
case 0x71fa8e:c.instructions+=7;goto B71fa8e;
case 0x71fa93:c.instructions+=6;goto B71fa93;
case 0x71fa98:c.instructions+=5;goto B71fa98;
case 0x71fa9c:c.instructions+=4;goto B71fa9c;
case 0x71fa9d:c.instructions+=3;goto B71fa9d;
case 0x71fa9e:c.instructions+=2;goto B71fa9e;
case 0x71fa9f:c.instructions+=1;goto B71fa9f;
case 0x71faa0:goto L71faa0;
case 0x71faa1:c.instructions+=25;goto B71faa1;
case 0x71faa3:c.instructions+=24;goto B71faa3;
case 0x71faa6:c.instructions+=23;goto B71faa6;
case 0x71faab:c.instructions+=22;goto B71faab;
case 0x71faaf:c.instructions+=21;goto B71faaf;
case 0x71fab2:c.instructions+=20;goto B71fab2;
case 0x71fab5:c.instructions+=19;goto B71fab5;
case 0x71fab9:c.instructions+=18;goto B71fab9;
case 0x71fabd:c.instructions+=17;goto B71fabd;
case 0x71fac1:c.instructions+=16;goto B71fac1;
case 0x71fac5:c.instructions+=15;goto B71fac5;
case 0x71faca:c.instructions+=14;goto B71faca;
case 0x71face:c.instructions+=13;goto B71face;
case 0x71fad2:c.instructions+=12;goto B71fad2;
case 0x71fad6:c.instructions+=11;goto B71fad6;
case 0x71fada:c.instructions+=10;goto B71fada;
case 0x71fade:c.instructions+=9;goto B71fade;
case 0x71fae3:c.instructions+=8;goto B71fae3;
case 0x71fae8:c.instructions+=7;goto B71fae8;
case 0x71faed:c.instructions+=6;goto B71faed;
case 0x71faf2:c.instructions+=5;goto B71faf2;
case 0x71faf7:c.instructions+=4;goto B71faf7;
case 0x71fafc:c.instructions+=3;goto B71fafc;
case 0x71fb01:c.instructions+=2;goto B71fb01;
case 0x71fb02:c.instructions+=1;goto B71fb02;
case 0x71fb03:goto L71fb03;
case 0x71fb04:c.instructions+=12;goto B71fb04;
case 0x71fb06:c.instructions+=11;goto B71fb06;
case 0x71fb09:c.instructions+=10;goto B71fb09;
case 0x71fb0c:c.instructions+=9;goto B71fb0c;
case 0x71fb10:c.instructions+=8;goto B71fb10;
case 0x71fb14:c.instructions+=7;goto B71fb14;
case 0x71fb17:c.instructions+=6;goto B71fb17;
case 0x71fb18:c.instructions+=5;goto B71fb18;
case 0x71fb1a:c.instructions+=4;goto B71fb1a;
case 0x71fb1b:c.instructions+=3;goto B71fb1b;
case 0x71fb1e:c.instructions+=2;goto B71fb1e;
case 0x71fb25:c.instructions+=1;goto B71fb25;
case 0x71fb26:goto L71fb26;
case 0x71fb2a:c.instructions+=24;goto B71fb2a;
case 0x71fb2d:c.instructions+=23;goto B71fb2d;
case 0x71fb31:c.instructions+=22;goto B71fb31;
case 0x71fb35:c.instructions+=21;goto B71fb35;
case 0x71fb38:c.instructions+=20;goto B71fb38;
case 0x71fb3a:c.instructions+=19;goto B71fb3a;
case 0x71fb3c:c.instructions+=18;goto B71fb3c;
case 0x71fb3f:c.instructions+=17;goto B71fb3f;
case 0x71fb41:c.instructions+=16;goto B71fb41;
case 0x71fb44:c.instructions+=15;goto B71fb44;
case 0x71fb46:c.instructions+=14;goto B71fb46;
case 0x71fb49:c.instructions+=13;goto B71fb49;
case 0x71fb4b:c.instructions+=12;goto B71fb4b;
case 0x71fb4f:c.instructions+=11;goto B71fb4f;
case 0x71fb52:c.instructions+=10;goto B71fb52;
case 0x71fb54:c.instructions+=9;goto B71fb54;
case 0x71fb57:c.instructions+=8;goto B71fb57;
case 0x71fb59:c.instructions+=7;goto B71fb59;
case 0x71fb5c:c.instructions+=6;goto B71fb5c;
case 0x71fb5f:c.instructions+=5;goto B71fb5f;
case 0x71fb61:c.instructions+=4;goto B71fb61;
case 0x71fb63:c.instructions+=3;goto B71fb63;
case 0x71fb66:c.instructions+=2;goto B71fb66;
case 0x71fb69:c.instructions+=1;goto B71fb69;
case 0x71fb6b:goto L71fb6b;
case 0x71fb6e:c.instructions+=9;goto B71fb6e;
case 0x71fb71:c.instructions+=8;goto B71fb71;
case 0x71fb74:c.instructions+=7;goto B71fb74;
case 0x71fb75:c.instructions+=6;goto B71fb75;
case 0x71fb77:c.instructions+=5;goto B71fb77;
case 0x71fb78:c.instructions+=4;goto B71fb78;
case 0x71fb7b:c.instructions+=3;goto B71fb7b;
case 0x71fb7c:c.instructions+=2;goto B71fb7c;
case 0x71fb7d:c.instructions+=1;goto B71fb7d;
case 0x71fb7e:goto L71fb7e;
case 0x71fb7f:c.instructions+=9;goto B71fb7f;
case 0x71fb81:c.instructions+=8;goto B71fb81;
case 0x71fb84:c.instructions+=7;goto B71fb84;
case 0x71fb85:c.instructions+=6;goto B71fb85;
case 0x71fb86:c.instructions+=5;goto B71fb86;
case 0x71fb88:c.instructions+=4;goto B71fb88;
case 0x71fb89:c.instructions+=3;goto B71fb89;
case 0x71fb93:c.instructions+=2;goto B71fb93;
case 0x71fb96:c.instructions+=1;goto B71fb96;
case 0x71fb9c:goto L71fb9c;
case 0x71fba2:c.instructions+=11;goto B71fba2;
case 0x71fba5:c.instructions+=10;goto B71fba5;
case 0x71fba7:c.instructions+=9;goto B71fba7;
case 0x71fbaa:c.instructions+=8;goto B71fbaa;
case 0x71fbac:c.instructions+=7;goto B71fbac;
case 0x71fbae:c.instructions+=6;goto B71fbae;
case 0x71fbb2:c.instructions+=5;goto B71fbb2;
case 0x71fbb3:c.instructions+=4;goto B71fbb3;
case 0x71fbb5:c.instructions+=3;goto B71fbb5;
case 0x71fbb8:c.instructions+=2;goto B71fbb8;
case 0x71fbbe:c.instructions+=1;goto B71fbbe;
case 0x71fbc0:goto L71fbc0;
case 0x71fbc6:c.instructions+=3;goto B71fbc6;
case 0x71fbcb:c.instructions+=2;goto B71fbcb;
case 0x71fbcd:c.instructions+=1;goto B71fbcd;
case 0x71fbcf:goto L71fbcf;
case 0x71fbd4:c.instructions+=3;goto B71fbd4;
case 0x71fbd6:c.instructions+=2;goto B71fbd6;
case 0x71fbd9:c.instructions+=1;goto B71fbd9;
case 0x71fbdb:goto L71fbdb;
case 0x71fbe1:c.instructions+=3;goto B71fbe1;
case 0x71fbe4:c.instructions+=2;goto B71fbe4;
case 0x71fbe5:c.instructions+=1;goto B71fbe5;
case 0x71fbe7:goto L71fbe7;
case 0x71fbe8:c.instructions+=4;goto B71fbe8;
case 0x71fbe9:c.instructions+=3;goto B71fbe9;
case 0x71fbea:c.instructions+=2;goto B71fbea;
case 0x71fbeb:c.instructions+=1;goto B71fbeb;
case 0x71fbec:goto L71fbec;
case 0x71fbed:c.instructions+=11;goto B71fbed;
case 0x71fbef:c.instructions+=10;goto B71fbef;
case 0x71fbf2:c.instructions+=9;goto B71fbf2;
case 0x71fbf5:c.instructions+=8;goto B71fbf5;
case 0x71fbf6:c.instructions+=7;goto B71fbf6;
case 0x71fbf7:c.instructions+=6;goto B71fbf7;
case 0x71fbf8:c.instructions+=5;goto B71fbf8;
case 0x71fbfb:c.instructions+=4;goto B71fbfb;
case 0x71fbfe:c.instructions+=3;goto B71fbfe;
case 0x71fc00:c.instructions+=2;goto B71fc00;
case 0x71fc02:c.instructions+=1;goto B71fc02;
case 0x71fc04:goto L71fc04;
case 0x71fc07:goto L71fc07;
case 0x71fc0a:c.instructions+=2;goto B71fc0a;
case 0x71fc0c:c.instructions+=1;goto B71fc0c;
case 0x71fc0e:goto L71fc0e;
case 0x71fc10:c.instructions+=2;goto B71fc10;
case 0x71fc12:c.instructions+=1;goto B71fc12;
case 0x71fc14:goto L71fc14;
case 0x71fc16:goto L71fc16;
case 0x71fc18:c.instructions+=1;goto B71fc18;
case 0x71fc1a:goto L71fc1a;
case 0x71fc1c:goto L71fc1c;
case 0x71fc1d:c.instructions+=2;goto B71fc1d;
case 0x71fc1e:c.instructions+=1;goto B71fc1e;
case 0x71fc20:goto L71fc20;
case 0x71fc23:c.instructions+=4;goto B71fc23;
case 0x71fc26:c.instructions+=3;goto B71fc26;
case 0x71fc28:c.instructions+=2;goto B71fc28;
case 0x71fc2b:c.instructions+=1;goto B71fc2b;
case 0x71fc2d:goto L71fc2d;
case 0x71fc30:c.instructions+=9;goto B71fc30;
case 0x71fc33:c.instructions+=8;goto B71fc33;
case 0x71fc38:c.instructions+=7;goto B71fc38;
case 0x71fc3b:c.instructions+=6;goto B71fc3b;
case 0x71fc3d:c.instructions+=5;goto B71fc3d;
case 0x71fc40:c.instructions+=4;goto B71fc40;
case 0x71fc47:c.instructions+=3;goto B71fc47;
case 0x71fc49:c.instructions+=2;goto B71fc49;
case 0x71fc4c:c.instructions+=1;goto B71fc4c;
case 0x71fc4e:goto L71fc4e;
case 0x71fc51:goto L71fc51;
case 0x71fc54:c.instructions+=6;goto B71fc54;
case 0x71fc56:c.instructions+=5;goto B71fc56;
case 0x71fc59:c.instructions+=4;goto B71fc59;
case 0x71fc5c:c.instructions+=3;goto B71fc5c;
case 0x71fc5e:c.instructions+=2;goto B71fc5e;
case 0x71fc61:c.instructions+=1;goto B71fc61;
case 0x71fc67:goto L71fc67;
case 0x71fc6a:c.instructions+=6;goto B71fc6a;
case 0x71fc6c:c.instructions+=5;goto B71fc6c;
case 0x71fc6f:c.instructions+=4;goto B71fc6f;
case 0x71fc71:c.instructions+=3;goto B71fc71;
case 0x71fc74:c.instructions+=2;goto B71fc74;
case 0x71fc77:c.instructions+=1;goto B71fc77;
case 0x71fc7a:goto L71fc7a;
case 0x71fc7d:c.instructions+=2;goto B71fc7d;
case 0x71fc7f:c.instructions+=1;goto B71fc7f;
case 0x71fc81:goto L71fc81;
case 0x71fc84:goto L71fc84;
case 0x71fc87:c.instructions+=17;goto B71fc87;
case 0x71fc8a:c.instructions+=16;goto B71fc8a;
case 0x71fc8d:c.instructions+=15;goto B71fc8d;
case 0x71fc8f:c.instructions+=14;goto B71fc8f;
case 0x71fc92:c.instructions+=13;goto B71fc92;
case 0x71fc93:c.instructions+=12;goto B71fc93;
case 0x71fc95:c.instructions+=11;goto B71fc95;
case 0x71fc98:c.instructions+=10;goto B71fc98;
case 0x71fc9a:c.instructions+=9;goto B71fc9a;
case 0x71fc9c:c.instructions+=8;goto B71fc9c;
case 0x71fca0:c.instructions+=7;goto B71fca0;
case 0x71fca2:c.instructions+=6;goto B71fca2;
case 0x71fca3:c.instructions+=5;goto B71fca3;
case 0x71fca5:c.instructions+=4;goto B71fca5;
case 0x71fca7:c.instructions+=3;goto B71fca7;
case 0x71fca9:c.instructions+=2;goto B71fca9;
case 0x71fcac:c.instructions+=1;goto B71fcac;
case 0x71fcae:goto L71fcae;
case 0x71fcb2:c.instructions+=1;goto B71fcb2;
case 0x71fcb4:goto L71fcb4;
case 0x71fcb7:goto L71fcb7;
case 0x71fcb9:c.instructions+=2;goto B71fcb9;
case 0x71fcbc:c.instructions+=1;goto B71fcbc;
case 0x71fcbe:goto L71fcbe;
case 0x71fcc1:c.instructions+=1;goto B71fcc1;
case 0x71fcc3:goto L71fcc3;
case 0x71fcc6:goto L71fcc6;
case 0x71fcc8:c.instructions+=7;goto B71fcc8;
case 0x71fccb:c.instructions+=6;goto B71fccb;
case 0x71fcce:c.instructions+=5;goto B71fcce;
case 0x71fcd1:c.instructions+=4;goto B71fcd1;
case 0x71fcd4:c.instructions+=3;goto B71fcd4;
case 0x71fcd7:c.instructions+=2;goto B71fcd7;
case 0x71fcd9:c.instructions+=1;goto B71fcd9;
case 0x71fcdb:goto L71fcdb;
case 0x71fcde:goto L71fcde;
case 0x71fce1:c.instructions+=4;goto B71fce1;
case 0x71fce4:c.instructions+=3;goto B71fce4;
case 0x71fce6:c.instructions+=2;goto B71fce6;
case 0x71fce9:c.instructions+=1;goto B71fce9;
case 0x71fcec:goto L71fcec;
case 0x71fcee:goto L71fcee;
case 0x71fcf0:c.instructions+=1;goto B71fcf0;
case 0x71fcf3:goto L71fcf3;
case 0x71fcf5:goto L71fcf5;
case 0x71fcf8:c.instructions+=6;goto B71fcf8;
case 0x71fcfb:c.instructions+=5;goto B71fcfb;
case 0x71fcfd:c.instructions+=4;goto B71fcfd;
case 0x71fd00:c.instructions+=3;goto B71fd00;
case 0x71fd03:c.instructions+=2;goto B71fd03;
case 0x71fd06:c.instructions+=1;goto B71fd06;
case 0x71fd0c:goto L71fd0c;
case 0x71fd10:c.instructions+=2;goto B71fd10;
case 0x71fd14:c.instructions+=1;goto B71fd14;
case 0x71fd1a:goto L71fd1a;
case 0x71fd1d:c.instructions+=4;goto B71fd1d;
case 0x71fd1f:c.instructions+=3;goto B71fd1f;
case 0x71fd22:c.instructions+=2;goto B71fd22;
case 0x71fd25:c.instructions+=1;goto B71fd25;
case 0x71fd28:goto L71fd28;
case 0x71fd2b:c.instructions+=8;goto B71fd2b;
case 0x71fd2e:c.instructions+=7;goto B71fd2e;
case 0x71fd32:c.instructions+=6;goto B71fd32;
case 0x71fd35:c.instructions+=5;goto B71fd35;
case 0x71fd38:c.instructions+=4;goto B71fd38;
case 0x71fd3b:c.instructions+=3;goto B71fd3b;
case 0x71fd3d:c.instructions+=2;goto B71fd3d;
case 0x71fd41:c.instructions+=1;goto B71fd41;
case 0x71fd43:goto L71fd43;
case 0x71fd46:c.instructions+=18;goto B71fd46;
case 0x71fd49:c.instructions+=17;goto B71fd49;
case 0x71fd4c:c.instructions+=16;goto B71fd4c;
case 0x71fd4e:c.instructions+=15;goto B71fd4e;
case 0x71fd50:c.instructions+=14;goto B71fd50;
case 0x71fd51:c.instructions+=13;goto B71fd51;
case 0x71fd53:c.instructions+=12;goto B71fd53;
case 0x71fd55:c.instructions+=11;goto B71fd55;
case 0x71fd57:c.instructions+=10;goto B71fd57;
case 0x71fd5a:c.instructions+=9;goto B71fd5a;
case 0x71fd5d:c.instructions+=8;goto B71fd5d;
case 0x71fd60:c.instructions+=7;goto B71fd60;
case 0x71fd62:c.instructions+=6;goto B71fd62;
case 0x71fd64:c.instructions+=5;goto B71fd64;
case 0x71fd65:c.instructions+=4;goto B71fd65;
case 0x71fd67:c.instructions+=3;goto B71fd67;
case 0x71fd69:c.instructions+=2;goto B71fd69;
case 0x71fd6c:c.instructions+=1;goto B71fd6c;
case 0x71fd6e:goto L71fd6e;
case 0x71fd71:c.instructions+=2;goto B71fd71;
case 0x71fd74:c.instructions+=1;goto B71fd74;
case 0x71fd76:goto L71fd76;
case 0x71fd79:goto L71fd79;
case 0x71fd7c:c.instructions+=1;goto B71fd7c;
case 0x71fd7e:goto L71fd7e;
case 0x71fd81:c.instructions+=2;goto B71fd81;
case 0x71fd84:c.instructions+=1;goto B71fd84;
case 0x71fd86:goto L71fd86;
case 0x71fd89:goto L71fd89;
case 0x71fd8c:c.instructions+=12;goto B71fd8c;
case 0x71fd8f:c.instructions+=11;goto B71fd8f;
case 0x71fd92:c.instructions+=10;goto B71fd92;
case 0x71fd95:c.instructions+=9;goto B71fd95;
case 0x71fd99:c.instructions+=8;goto B71fd99;
case 0x71fd9c:c.instructions+=7;goto B71fd9c;
case 0x71fd9f:c.instructions+=6;goto B71fd9f;
case 0x71fda1:c.instructions+=5;goto B71fda1;
case 0x71fda3:c.instructions+=4;goto B71fda3;
case 0x71fda4:c.instructions+=3;goto B71fda4;
case 0x71fda7:c.instructions+=2;goto B71fda7;
case 0x71fdaa:c.instructions+=1;goto B71fdaa;
case 0x71fdac:goto L71fdac;
case 0x71fdaf:c.instructions+=4;goto B71fdaf;
case 0x71fdb1:c.instructions+=3;goto B71fdb1;
case 0x71fdb4:c.instructions+=2;goto B71fdb4;
case 0x71fdb6:c.instructions+=1;goto B71fdb6;
case 0x71fdb8:goto L71fdb8;
case 0x71fdbc:c.instructions+=5;goto B71fdbc;
case 0x71fdbe:c.instructions+=4;goto B71fdbe;
case 0x71fdc1:c.instructions+=3;goto B71fdc1;
case 0x71fdc2:c.instructions+=2;goto B71fdc2;
case 0x71fdc5:c.instructions+=1;goto B71fdc5;
case 0x71fdc7:goto L71fdc7;
case 0x71fdca:c.instructions+=5;goto B71fdca;
case 0x71fdcd:c.instructions+=4;goto B71fdcd;
case 0x71fdce:c.instructions+=3;goto B71fdce;
case 0x71fdd1:c.instructions+=2;goto B71fdd1;
case 0x71fdd4:c.instructions+=1;goto B71fdd4;
case 0x71fdda:goto L71fdda;
case 0x71fddb:c.instructions+=4;goto B71fddb;
case 0x71fddc:c.instructions+=3;goto B71fddc;
case 0x71fddd:c.instructions+=2;goto B71fddd;
case 0x71fdde:c.instructions+=1;goto B71fdde;
case 0x71fddf:goto L71fddf;
case 0x71fde0:c.instructions+=11;goto B71fde0;
case 0x71fde2:c.instructions+=10;goto B71fde2;
case 0x71fde3:c.instructions+=9;goto B71fde3;
case 0x71fde6:c.instructions+=8;goto B71fde6;
case 0x71fde8:c.instructions+=7;goto B71fde8;
case 0x71fde9:c.instructions+=6;goto B71fde9;
case 0x71fdec:c.instructions+=5;goto B71fdec;
case 0x71fdf2:c.instructions+=4;goto B71fdf2;
case 0x71fdf5:c.instructions+=3;goto B71fdf5;
case 0x71fdf6:c.instructions+=2;goto B71fdf6;
case 0x71fdf9:c.instructions+=1;goto B71fdf9;
case 0x71fdfb:goto L71fdfb;
case 0x71fdfd:c.instructions+=1;goto B71fdfd;
case 0x71fdff:goto L71fdff;
case 0x71fe01:c.instructions+=2;goto B71fe01;
case 0x71fe03:c.instructions+=1;goto B71fe03;
case 0x71fe05:goto L71fe05;
case 0x71fe08:c.instructions+=2;goto B71fe08;
case 0x71fe0a:c.instructions+=1;goto B71fe0a;
case 0x71fe0c:goto L71fe0c;
case 0x71fe0e:c.instructions+=1;goto B71fe0e;
case 0x71fe10:goto L71fe10;
case 0x71fe12:c.instructions+=2;goto B71fe12;
case 0x71fe14:c.instructions+=1;goto B71fe14;
case 0x71fe16:goto L71fe16;
case 0x71fe1c:c.instructions+=11;goto B71fe1c;
case 0x71fe1f:c.instructions+=10;goto B71fe1f;
case 0x71fe22:c.instructions+=9;goto B71fe22;
case 0x71fe24:c.instructions+=8;goto B71fe24;
case 0x71fe25:c.instructions+=7;goto B71fe25;
case 0x71fe29:c.instructions+=6;goto B71fe29;
case 0x71fe2b:c.instructions+=5;goto B71fe2b;
case 0x71fe2d:c.instructions+=4;goto B71fe2d;
case 0x71fe30:c.instructions+=3;goto B71fe30;
case 0x71fe31:c.instructions+=2;goto B71fe31;
case 0x71fe32:c.instructions+=1;goto B71fe32;
case 0x71fe38:goto L71fe38;
case 0x71fe3a:c.instructions+=6;goto B71fe3a;
case 0x71fe3c:c.instructions+=5;goto B71fe3c;
case 0x71fe3f:c.instructions+=4;goto B71fe3f;
case 0x71fe42:c.instructions+=3;goto B71fe42;
case 0x71fe45:c.instructions+=2;goto B71fe45;
case 0x71fe47:c.instructions+=1;goto B71fe47;
case 0x71fe49:goto L71fe49;
case 0x71fe4c:c.instructions+=6;goto B71fe4c;
case 0x71fe50:c.instructions+=5;goto B71fe50;
case 0x71fe52:c.instructions+=4;goto B71fe52;
case 0x71fe53:c.instructions+=3;goto B71fe53;
case 0x71fe59:c.instructions+=2;goto B71fe59;
case 0x71fe5b:c.instructions+=1;goto B71fe5b;
case 0x71fe61:goto L71fe61;
case 0x71fe64:goto L71fe64;
case 0x71fe66:c.instructions+=1;goto B71fe66;
case 0x71fe68:goto L71fe68;
case 0x71fe6e:c.instructions+=7;goto B71fe6e;
case 0x71fe71:c.instructions+=6;goto B71fe71;
case 0x71fe74:c.instructions+=5;goto B71fe74;
case 0x71fe77:c.instructions+=4;goto B71fe77;
case 0x71fe79:c.instructions+=3;goto B71fe79;
case 0x71fe7a:c.instructions+=2;goto B71fe7a;
case 0x71fe7c:c.instructions+=1;goto B71fe7c;
case 0x71fe82:goto L71fe82;
case 0x71fe85:goto L71fe85;
case 0x71fe86:c.instructions+=4;goto B71fe86;
case 0x71fe87:c.instructions+=3;goto B71fe87;
case 0x71fe88:c.instructions+=2;goto B71fe88;
case 0x71fe89:c.instructions+=1;goto B71fe89;
case 0x71fe8a:goto L71fe8a;
case 0x71fe8c:c.instructions+=6;goto B71fe8c;
case 0x71fe90:c.instructions+=5;goto B71fe90;
case 0x71fe94:c.instructions+=4;goto B71fe94;
case 0x71fe96:c.instructions+=3;goto B71fe96;
case 0x71fe98:c.instructions+=2;goto B71fe98;
case 0x71fe9a:c.instructions+=1;goto B71fe9a;
case 0x71fe9c:goto L71fe9c;
case 0x71fe9f:goto L71fe9f;
case 0x71fea1:c.instructions+=1;goto B71fea1;
case 0x71fea4:goto L71fea4;
case 0x71fea6:c.instructions+=3;goto B71fea6;
case 0x71feaa:c.instructions+=2;goto B71feaa;
case 0x71feac:c.instructions+=1;goto B71feac;
case 0x71feae:goto L71feae;
case 0x71feb0:c.instructions+=1;goto B71feb0;
case 0x71feb2:goto L71feb2;
case 0x71feb5:c.instructions+=2;goto B71feb5;
case 0x71feb7:c.instructions+=1;goto B71feb7;
case 0x71feb9:goto L71feb9;
case 0x71febb:c.instructions+=1;goto B71febb;
case 0x71febd:goto L71febd;
case 0x71febf:c.instructions+=2;goto B71febf;
case 0x71fec1:c.instructions+=1;goto B71fec1;
case 0x71fec3:goto L71fec3;
case 0x71fec6:c.instructions+=1;goto B71fec6;
case 0x71fec9:goto L71fec9;
case 0x71fecc:goto L71fecc;
case 0x71fed0:c.instructions+=7;goto B71fed0;
case 0x71fed1:c.instructions+=6;goto B71fed1;
case 0x71fed5:c.instructions+=5;goto B71fed5;
case 0x71fed6:c.instructions+=4;goto B71fed6;
case 0x71feda:c.instructions+=3;goto B71feda;
case 0x71fedc:c.instructions+=2;goto B71fedc;
case 0x71fede:c.instructions+=1;goto B71fede;
case 0x71fee1:goto L71fee1;
case 0x71fee3:goto L71fee3;
case 0x71fee5:c.instructions+=1;goto B71fee5;
case 0x71fee8:goto L71fee8;
case 0x71feea:goto L71feea;
case 0x71feeb:c.instructions+=3;goto B71feeb;
case 0x71feed:c.instructions+=2;goto B71feed;
case 0x71feee:c.instructions+=1;goto B71feee;
case 0x71feef:goto L71feef;
case 0x71fef3:c.instructions+=3;goto B71fef3;
case 0x71fef6:c.instructions+=2;goto B71fef6;
case 0x71fefa:c.instructions+=1;goto B71fefa;
case 0x71fefb:goto L71fefb;
case 0x71feff:c.instructions+=2;goto B71feff;
case 0x71ff02:c.instructions+=1;goto B71ff02;
case 0x71ff03:goto L71ff03;
case 0x71ff07:c.instructions+=2;goto B71ff07;
case 0x71ff0a:c.instructions+=1;goto B71ff0a;
case 0x71ff0b:goto L71ff0b;
case 0x71ff0f:c.instructions+=3;goto B71ff0f;
case 0x71ff11:c.instructions+=2;goto B71ff11;
case 0x71ff14:c.instructions+=1;goto B71ff14;
case 0x71ff15:goto L71ff15;
case 0x71ff16:c.instructions+=5;goto B71ff16;
case 0x71ff17:c.instructions+=4;goto B71ff17;
case 0x71ff1b:c.instructions+=3;goto B71ff1b;
case 0x71ff1d:c.instructions+=2;goto B71ff1d;
case 0x71ff20:c.instructions+=1;goto B71ff20;
case 0x71ff26:goto L71ff26;
case 0x71ff28:c.instructions+=5;goto B71ff28;
case 0x71ff29:c.instructions+=4;goto B71ff29;
case 0x71ff2a:c.instructions+=3;goto B71ff2a;
case 0x71ff2d:c.instructions+=2;goto B71ff2d;
case 0x71ff30:c.instructions+=1;goto B71ff30;
case 0x71ff35:goto L71ff35;
case 0x71ff38:c.instructions+=4;goto B71ff38;
case 0x71ff3b:c.instructions+=3;goto B71ff3b;
case 0x71ff3c:c.instructions+=2;goto B71ff3c;
case 0x71ff41:c.instructions+=1;goto B71ff41;
case 0x71ff46:goto L71ff46;
case 0x71ff49:c.instructions+=4;goto B71ff49;
case 0x71ff4b:c.instructions+=3;goto B71ff4b;
case 0x71ff4e:c.instructions+=2;goto B71ff4e;
case 0x71ff51:c.instructions+=1;goto B71ff51;
case 0x71ff53:goto L71ff53;
case 0x71ff56:c.instructions+=2;goto B71ff56;
case 0x71ff57:c.instructions+=1;goto B71ff57;
case 0x71ff5c:goto L71ff5c;
case 0x71ff5f:goto L71ff5f;
case 0x71ff61:c.instructions+=3;goto B71ff61;
case 0x71ff63:c.instructions+=2;goto B71ff63;
case 0x71ff67:c.instructions+=1;goto B71ff67;
case 0x71ff69:goto L71ff69;
case 0x71ff6c:c.instructions+=3;goto B71ff6c;
case 0x71ff6d:c.instructions+=2;goto B71ff6d;
case 0x71ff6e:c.instructions+=1;goto B71ff6e;
case 0x71ff73:goto L71ff73;
case 0x71ff75:c.instructions+=7;goto B71ff75;
case 0x71ff79:c.instructions+=6;goto B71ff79;
case 0x71ff7c:c.instructions+=5;goto B71ff7c;
case 0x71ff7d:c.instructions+=4;goto B71ff7d;
case 0x71ff7f:c.instructions+=3;goto B71ff7f;
case 0x71ff80:c.instructions+=2;goto B71ff80;
case 0x71ff81:c.instructions+=1;goto B71ff81;
case 0x71ff83:goto L71ff83;
case 0x71ff85:c.instructions+=2;goto B71ff85;
case 0x71ff88:c.instructions+=1;goto B71ff88;
case 0x71ff8a:goto L71ff8a;
case 0x71ff8d:c.instructions+=2;goto B71ff8d;
case 0x71ff8e:c.instructions+=1;goto B71ff8e;
case 0x71ff93:goto L71ff93;
case 0x71ff97:c.instructions+=1;goto B71ff97;
case 0x71ff9b:goto L71ff9b;
case 0x71ff9d:c.instructions+=3;goto B71ff9d;
case 0x71ff9f:c.instructions+=2;goto B71ff9f;
case 0x71ffa3:c.instructions+=1;goto B71ffa3;
case 0x71ffa5:goto L71ffa5;
case 0x71ffa8:c.instructions+=3;goto B71ffa8;
case 0x71ffa9:c.instructions+=2;goto B71ffa9;
case 0x71ffaa:c.instructions+=1;goto B71ffaa;
case 0x71ffaf:goto L71ffaf;
case 0x71ffb3:c.instructions+=8;goto B71ffb3;
case 0x71ffb7:c.instructions+=7;goto B71ffb7;
case 0x71ffb9:c.instructions+=6;goto B71ffb9;
case 0x71ffbd:c.instructions+=5;goto B71ffbd;
case 0x71ffbe:c.instructions+=4;goto B71ffbe;
case 0x71ffc0:c.instructions+=3;goto B71ffc0;
case 0x71ffc1:c.instructions+=2;goto B71ffc1;
case 0x71ffc2:c.instructions+=1;goto B71ffc2;
case 0x71ffc4:goto L71ffc4;
case 0x71ffc6:c.instructions+=4;goto B71ffc6;
case 0x71ffc8:c.instructions+=3;goto B71ffc8;
case 0x71ffcb:c.instructions+=2;goto B71ffcb;
case 0x71ffce:c.instructions+=1;goto B71ffce;
case 0x71ffd0:goto L71ffd0;
case 0x71ffd2:c.instructions+=5;goto B71ffd2;
case 0x71ffd5:c.instructions+=4;goto B71ffd5;
case 0x71ffd8:c.instructions+=3;goto B71ffd8;
case 0x71ffdb:c.instructions+=2;goto B71ffdb;
case 0x71ffdd:c.instructions+=1;goto B71ffdd;
case 0x71ffdf:goto L71ffdf;
case 0x71ffe2:c.instructions+=2;goto B71ffe2;
case 0x71ffe3:c.instructions+=1;goto B71ffe3;
case 0x71ffea:goto L71ffea;
case 0x71ffeb:goto L71ffeb;
case 0x71ffed:c.instructions+=4;goto B71ffed;
case 0x71fff1:c.instructions+=3;goto B71fff1;
case 0x71fff2:c.instructions+=2;goto B71fff2;
case 0x71fff4:c.instructions+=1;goto B71fff4;
case 0x71fff6:goto L71fff6;
case 0x71fff8:c.instructions+=3;goto B71fff8;
case 0x71fffa:c.instructions+=2;goto B71fffa;
case 0x71fffd:c.instructions+=1;goto B71fffd;
case 0x71ffff:goto L71ffff;
default:missing_instruction(c.pc);}
B71f001:L71f001:{c.instructions+=10;NFSU2_TR(0x71f001);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B71f004:{NFSU2_TR(0x71f004);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x817b00ull))));
}
B71f009:{NFSU2_TR(0x71f009);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71f00a:{NFSU2_TR(0x71f00a);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71f00c:{NFSU2_TR(0x71f00c);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71f00e:{NFSU2_TR(0x71f00e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71f010:{NFSU2_TR(0x71f010);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B71f013:{NFSU2_TR(0x71f013);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B71f016:{NFSU2_TR(0x71f016);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71f017:{NFSU2_TR(0x71f017);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x71f01cull));
TAIL_STATIC(0x71ed5eu,71e);
}
B71f01c:L71f01c:{c.instructions+=2;NFSU2_TR(0x71f01c);
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
B71f01f:{NFSU2_TR(0x71f01f);
{goto L71f090;}
}
B71f021:L71f021:{c.instructions+=3;NFSU2_TR(0x71f021);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B71f024:{NFSU2_TR(0x71f024);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B71f026:{NFSU2_TR(0x71f026);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L71f045;}}
}
B71f028:L71f028:{c.instructions+=11;NFSU2_TR(0x71f028);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71f02b:{NFSU2_TR(0x71f02b);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B71f02e:{NFSU2_TR(0x71f02e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x817b00ull))));
}
B71f033:{NFSU2_TR(0x71f033);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71f034:{NFSU2_TR(0x71f034);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71f036:{NFSU2_TR(0x71f036);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71f038:{NFSU2_TR(0x71f038);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71f039:{NFSU2_TR(0x71f039);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71f03a:{NFSU2_TR(0x71f03a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B71f03d:{NFSU2_TR(0x71f03d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71f03e:{NFSU2_TR(0x71f03e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x71f043ull));
TAIL_STATIC(0x71edbdu,71e);
}
B71f043:L71f043:{c.instructions+=1;NFSU2_TR(0x71f043);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71f01cu);}goto L71f01c;}
}
B71f045:L71f045:{c.instructions+=3;NFSU2_TR(0x71f045);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffffull))));
__builtin_memmove((R+24),(U+0),4);
}
B71f048:{NFSU2_TR(0x71f048);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B71f04a:{NFSU2_TR(0x71f04a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L71f065;}}
}
B71f04c:L71f04c:{c.instructions+=10;NFSU2_TR(0x71f04c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71f04f:{NFSU2_TR(0x71f04f);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B71f052:{NFSU2_TR(0x71f052);
w4(R+0,u32(0x817b00ull));
}
B71f057:{NFSU2_TR(0x71f057);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B71f059:{NFSU2_TR(0x71f059);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71f05a:{NFSU2_TR(0x71f05a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71f05d:{NFSU2_TR(0x71f05d);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B71f060:{NFSU2_TR(0x71f060);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B71f062:{NFSU2_TR(0x71f062);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B71f063:{NFSU2_TR(0x71f063);
{goto L71f082;}
}
B71f065:L71f065:{c.instructions+=3;NFSU2_TR(0x71f065);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B71f068:{NFSU2_TR(0x71f068);
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
B71f06a:{NFSU2_TR(0x71f06a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L71f090;}}
}
B71f06c:L71f06c:{c.instructions+=8;NFSU2_TR(0x71f06c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71f06f:{NFSU2_TR(0x71f06f);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B71f072:{NFSU2_TR(0x71f072);
w4(R+0,u32(0x817b00ull));
}
B71f077:{NFSU2_TR(0x71f077);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B71f079:{NFSU2_TR(0x71f079);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71f07a:{NFSU2_TR(0x71f07a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71f07d:{NFSU2_TR(0x71f07d);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B71f080:{NFSU2_TR(0x71f080);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B71f082:L71f082:{c.instructions+=5;NFSU2_TR(0x71f082);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71f083:{NFSU2_TR(0x71f083);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71f084:{NFSU2_TR(0x71f084);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B71f087:{NFSU2_TR(0x71f087);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71f088:{NFSU2_TR(0x71f088);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x71f08dull));
TAIL_STATIC(0x71eca2u,71e);
}
B71f08d:L71f08d:{c.instructions+=1;NFSU2_TR(0x71f08d);
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
B71f090:L71f090:{c.instructions+=3;NFSU2_TR(0x71f090);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B71f091:{NFSU2_TR(0x71f091);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B71f092:{NFSU2_TR(0x71f092);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B71f093:L71f093:{c.instructions+=9;NFSU2_TR(0x71f093);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71f094:{NFSU2_TR(0x71f094);
__builtin_memmove((R+20),(R+16),4);
}
B71f096:{NFSU2_TR(0x71f096);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71f097:{NFSU2_TR(0x71f097);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71f098:{NFSU2_TR(0x71f098);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B71f09b:{NFSU2_TR(0x71f09b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71f09e:{NFSU2_TR(0x71f09e);
w4(R+4,u32(0x8ull));
}
B71f0a3:{NFSU2_TR(0x71f0a3);
w4(R+0,u32(0x10ull));
}
B71f0a8:{NFSU2_TR(0x71f0a8);
wv<16>((R+4608),eval<Op::INT_XOR,16,16,16>(rv<16>((R+4608)),rv<16>((R+4608))));
}
B71f0ac:L71f0ac:{c.instructions+=7;NFSU2_TR(0x71f0ac);
u8 U[16];
__builtin_memmove((U+0),gp(u32(r4(R+24))),16);
__builtin_memmove((R+4800),(U+0),16);
}
B71f0b0:{NFSU2_TR(0x71f0b0);
__builtin_memmove((R+4815),(R+4615),1);
__builtin_memmove((R+4814),(R+4807),1);
__builtin_memmove((R+4813),(R+4614),1);
__builtin_memmove((R+4812),(R+4806),1);
__builtin_memmove((R+4811),(R+4613),1);
__builtin_memmove((R+4810),(R+4805),1);
__builtin_memmove((R+4809),(R+4612),1);
__builtin_memmove((R+4808),(R+4804),1);
__builtin_memmove((R+4807),(R+4611),1);
__builtin_memmove((R+4806),(R+4803),1);
__builtin_memmove((R+4805),(R+4610),1);
__builtin_memmove((R+4804),(R+4802),1);
__builtin_memmove((R+4803),(R+4609),1);
__builtin_memmove((R+4802),(R+4801),1);
__builtin_memmove((R+4801),(R+4608),1);
}
B71f0b4:{NFSU2_TR(0x71f0b4);
u8 U[16];
__builtin_memmove((U+0),(R+4800),16);
__builtin_memmove(gp(u32(r4(R+28))),(U+0),16);
}
B71f0b8:{NFSU2_TR(0x71f0b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B71f0bb:{NFSU2_TR(0x71f0bb);
w1(R+512,carry<u32>(r4(R+28),r4(R+0)));
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B71f0bd:{NFSU2_TR(0x71f0bd);
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
B71f0be:{NFSU2_TR(0x71f0be);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71f0acu);}goto L71f0ac;}}
}
B71f0c0:L71f0c0:{c.instructions+=4;NFSU2_TR(0x71f0c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B71f0c1:{NFSU2_TR(0x71f0c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B71f0c2:{NFSU2_TR(0x71f0c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B71f0c3:{NFSU2_TR(0x71f0c3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B71f0c4:L71f0c4:{c.instructions+=10;NFSU2_TR(0x71f0c4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71f0c5:{NFSU2_TR(0x71f0c5);
__builtin_memmove((R+20),(R+16),4);
}
B71f0c7:{NFSU2_TR(0x71f0c7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71f0c8:{NFSU2_TR(0x71f0c8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71f0c9:{NFSU2_TR(0x71f0c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71f0cc:{NFSU2_TR(0x71f0cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B71f0cf:{NFSU2_TR(0x71f0cf);
wv<16>((R+4608),eval<Op::INT_ZEXT,16,8>(rv<8>(gp(0x817e00))));
}
B71f0d7:{NFSU2_TR(0x71f0d7);
wv<16>((R+4800),eval<Op::INT_XOR,16,16,16>(rv<16>((R+4800)),rv<16>((R+4800))));
}
B71f0db:{NFSU2_TR(0x71f0db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B71f0de:{NFSU2_TR(0x71f0de);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
__builtin_memmove((R+4),(U+0),4);
}
B71f0e4:L71f0e4:{c.instructions+=8;NFSU2_TR(0x71f0e4);
u8 U[16];
__builtin_memmove((U+0),gp(u32(r4(R+0))),16);
__builtin_memmove((R+4736),(U+0),16);
}
B71f0e8:{NFSU2_TR(0x71f0e8);
{wv<16>((R+4736),uo::packsswb<16>(rv<16>((R+4736)),rv<16>((R+4800))));}
}
B71f0ec:{NFSU2_TR(0x71f0ec);
wv<16>((R+4736),eval<Op::INT_XOR,16,16,16>(rv<16>((R+4736)),rv<16>((R+4608))));
}
B71f0f0:{NFSU2_TR(0x71f0f0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B71f0f3:{NFSU2_TR(0x71f0f3);
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
B71f0f5:{NFSU2_TR(0x71f0f5);
u8 U[8];
__builtin_memmove((U+0),(R+4736),8);
s8_(u32(r4(R+8)),r8(U+0));
}
B71f0f9:{NFSU2_TR(0x71f0f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B71f0fc:{NFSU2_TR(0x71f0fc);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71f0e4u);}goto L71f0e4;}}
}
B71f0fe:L71f0fe:{c.instructions+=4;NFSU2_TR(0x71f0fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B71f0ff:{NFSU2_TR(0x71f0ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B71f100:{NFSU2_TR(0x71f100);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B71f101:{NFSU2_TR(0x71f101);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B71f102:L71f102:{c.instructions+=11;NFSU2_TR(0x71f102);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71f103:{NFSU2_TR(0x71f103);
__builtin_memmove((R+20),(R+16),4);
}
B71f105:{NFSU2_TR(0x71f105);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71f106:{NFSU2_TR(0x71f106);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71f107:{NFSU2_TR(0x71f107);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71f108:{NFSU2_TR(0x71f108);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B71f10b:{NFSU2_TR(0x71f10b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B71f10e:{NFSU2_TR(0x71f10e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71f111:{NFSU2_TR(0x71f111);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B71f114:{NFSU2_TR(0x71f114);
wv<16>((R+4608),eval<Op::INT_XOR,16,16,16>(rv<16>((R+4608)),rv<16>((R+4608))));
}
B71f118:{NFSU2_TR(0x71f118);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x80ull))));
__builtin_memmove((R+28),(U+0),4);
}
B71f11e:L71f11e:{c.instructions+=11;NFSU2_TR(0x71f11e);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+12))),8);
wv<16>((R+4736),eval<Op::INT_ZEXT,16,8>(rv<8>((U+0))));
}
B71f122:{NFSU2_TR(0x71f122);
u8 U[16];
__builtin_memmove((U+0),gp(u32(r4(R+4))),16);
__builtin_memmove((R+4864),(U+0),16);
}
B71f126:{NFSU2_TR(0x71f126);
__builtin_memmove((R+4751),(R+4615),1);
__builtin_memmove((R+4750),(R+4743),1);
__builtin_memmove((R+4749),(R+4614),1);
__builtin_memmove((R+4748),(R+4742),1);
__builtin_memmove((R+4747),(R+4613),1);
__builtin_memmove((R+4746),(R+4741),1);
__builtin_memmove((R+4745),(R+4612),1);
__builtin_memmove((R+4744),(R+4740),1);
__builtin_memmove((R+4743),(R+4611),1);
__builtin_memmove((R+4742),(R+4739),1);
__builtin_memmove((R+4741),(R+4610),1);
__builtin_memmove((R+4740),(R+4738),1);
__builtin_memmove((R+4739),(R+4609),1);
__builtin_memmove((R+4738),(R+4737),1);
__builtin_memmove((R+4737),(R+4608),1);
}
B71f12a:{NFSU2_TR(0x71f12a);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+8))));
}
B71f12c:{NFSU2_TR(0x71f12c);
{wv<16>((R+4736),uo::paddsw<16>(rv<16>((R+4736)),rv<16>((R+4864))));}
}
B71f130:{NFSU2_TR(0x71f130);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B71f133:{NFSU2_TR(0x71f133);
u8 U[54];
__builtin_memmove((U+5),(R+4736),16);
__builtin_memmove((U+21),(R+4608),16);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+38,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+38))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4736),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+39,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+39))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4737),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+40,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+40))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4738),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+41,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+41))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4739),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+42,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+42))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4740),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+43,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+43))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4741),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+44,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+44))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4742),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+45,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+45))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4743),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+21))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+21))));
w1(U+2,u8(s16(r2(U+21))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+46,u8(r2(U+21)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+46))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4744),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+23))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+23))));
w1(U+2,u8(s16(r2(U+23))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+47,u8(r2(U+23)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+47))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4745),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+25))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+25))));
w1(U+2,u8(s16(r2(U+25))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+48,u8(r2(U+25)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+48))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4746),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+27))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+27))));
w1(U+2,u8(s16(r2(U+27))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+49,u8(r2(U+27)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+49))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4747),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+29))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+29))));
w1(U+2,u8(s16(r2(U+29))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+50,u8(r2(U+29)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+50))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4748),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+31))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+31))));
w1(U+2,u8(s16(r2(U+31))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+51,u8(r2(U+31)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+51))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4749),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+33))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+33))));
w1(U+2,u8(s16(r2(U+33))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+52,u8(r2(U+33)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+52))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4750),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+35))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+35))));
w1(U+2,u8(s16(r2(U+35))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+53,u8(r2(U+35)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+53))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4751),(U+37),1);
}
B71f137:{NFSU2_TR(0x71f137);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B71f139:{NFSU2_TR(0x71f139);
u8 U[8];
__builtin_memmove((U+0),(R+4736),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B71f13d:{NFSU2_TR(0x71f13d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B71f140:{NFSU2_TR(0x71f140);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71f11eu);}goto L71f11e;}}
}
B71f142:L71f142:{c.instructions+=5;NFSU2_TR(0x71f142);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B71f143:{NFSU2_TR(0x71f143);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B71f144:{NFSU2_TR(0x71f144);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B71f145:{NFSU2_TR(0x71f145);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B71f146:{NFSU2_TR(0x71f146);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B71f147:L71f147:{c.instructions+=14;NFSU2_TR(0x71f147);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71f148:{NFSU2_TR(0x71f148);
__builtin_memmove((R+20),(R+16),4);
}
B71f14a:{NFSU2_TR(0x71f14a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71f14b:{NFSU2_TR(0x71f14b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71f14c:{NFSU2_TR(0x71f14c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71f14d:{NFSU2_TR(0x71f14d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71f14e:{NFSU2_TR(0x71f14e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71f14f:{NFSU2_TR(0x71f14f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B71f152:{NFSU2_TR(0x71f152);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71f155:{NFSU2_TR(0x71f155);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B71f158:{NFSU2_TR(0x71f158);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B71f15b:{NFSU2_TR(0x71f15b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B71f15e:{NFSU2_TR(0x71f15e);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x80ull))));
__builtin_memmove((R+0),(U+0),4);
}
B71f164:{NFSU2_TR(0x71f164);
wv<16>((R+4608),eval<Op::INT_XOR,16,16,16>(rv<16>((R+4608)),rv<16>((R+4608))));
}
B71f168:L71f168:{c.instructions+=16;NFSU2_TR(0x71f168);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
wv<16>((R+4736),eval<Op::INT_ZEXT,16,8>(rv<8>((U+0))));
}
B71f16c:{NFSU2_TR(0x71f16c);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),8);
wv<16>((R+4864),eval<Op::INT_ZEXT,16,8>(rv<8>((U+0))));
}
B71f170:{NFSU2_TR(0x71f170);
__builtin_memmove((R+4751),(R+4615),1);
__builtin_memmove((R+4750),(R+4743),1);
__builtin_memmove((R+4749),(R+4614),1);
__builtin_memmove((R+4748),(R+4742),1);
__builtin_memmove((R+4747),(R+4613),1);
__builtin_memmove((R+4746),(R+4741),1);
__builtin_memmove((R+4745),(R+4612),1);
__builtin_memmove((R+4744),(R+4740),1);
__builtin_memmove((R+4743),(R+4611),1);
__builtin_memmove((R+4742),(R+4739),1);
__builtin_memmove((R+4741),(R+4610),1);
__builtin_memmove((R+4740),(R+4738),1);
__builtin_memmove((R+4739),(R+4609),1);
__builtin_memmove((R+4738),(R+4737),1);
__builtin_memmove((R+4737),(R+4608),1);
}
B71f174:{NFSU2_TR(0x71f174);
__builtin_memmove((R+4879),(R+4615),1);
__builtin_memmove((R+4878),(R+4871),1);
__builtin_memmove((R+4877),(R+4614),1);
__builtin_memmove((R+4876),(R+4870),1);
__builtin_memmove((R+4875),(R+4613),1);
__builtin_memmove((R+4874),(R+4869),1);
__builtin_memmove((R+4873),(R+4612),1);
__builtin_memmove((R+4872),(R+4868),1);
__builtin_memmove((R+4871),(R+4611),1);
__builtin_memmove((R+4870),(R+4867),1);
__builtin_memmove((R+4869),(R+4610),1);
__builtin_memmove((R+4868),(R+4866),1);
__builtin_memmove((R+4867),(R+4609),1);
__builtin_memmove((R+4866),(R+4865),1);
__builtin_memmove((R+4865),(R+4608),1);
}
B71f178:{NFSU2_TR(0x71f178);
u8 U[16];
__builtin_memmove((U+0),gp(u32(r4(R+4))),16);
__builtin_memmove((R+4992),(U+0),16);
}
B71f17c:{NFSU2_TR(0x71f17c);
w2(R+4736,u16(u32(r2(R+4736))+u32(r2(R+4864))));
w2(R+4738,u16(u32(r2(R+4738))+u32(r2(R+4866))));
w2(R+4740,u16(u32(r2(R+4740))+u32(r2(R+4868))));
w2(R+4742,u16(u32(r2(R+4742))+u32(r2(R+4870))));
w2(R+4744,u16(u32(r2(R+4744))+u32(r2(R+4872))));
w2(R+4746,u16(u32(r2(R+4746))+u32(r2(R+4874))));
w2(R+4748,u16(u32(r2(R+4748))+u32(r2(R+4876))));
w2(R+4750,u16(u32(r2(R+4750))+u32(r2(R+4878))));
}
B71f180:{NFSU2_TR(0x71f180);
w2(R+4736,shr<u16>(r2(R+4736),u64(u32(0x1ull))));
w2(R+4738,shr<u16>(r2(R+4738),u64(u32(0x1ull))));
w2(R+4740,shr<u16>(r2(R+4740),u64(u32(0x1ull))));
w2(R+4742,shr<u16>(r2(R+4742),u64(u32(0x1ull))));
w2(R+4744,shr<u16>(r2(R+4744),u64(u32(0x1ull))));
w2(R+4746,shr<u16>(r2(R+4746),u64(u32(0x1ull))));
w2(R+4748,shr<u16>(r2(R+4748),u64(u32(0x1ull))));
w2(R+4750,shr<u16>(r2(R+4750),u64(u32(0x1ull))));
}
B71f185:{NFSU2_TR(0x71f185);
w2(R+4736,u16(u32(r2(R+4736))+u32(r2(R+4992))));
w2(R+4738,u16(u32(r2(R+4738))+u32(r2(R+4994))));
w2(R+4740,u16(u32(r2(R+4740))+u32(r2(R+4996))));
w2(R+4742,u16(u32(r2(R+4742))+u32(r2(R+4998))));
w2(R+4744,u16(u32(r2(R+4744))+u32(r2(R+5000))));
w2(R+4746,u16(u32(r2(R+4746))+u32(r2(R+5002))));
w2(R+4748,u16(u32(r2(R+4748))+u32(r2(R+5004))));
w2(R+4750,u16(u32(r2(R+4750))+u32(r2(R+5006))));
}
B71f189:{NFSU2_TR(0x71f189);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B71f18c:{NFSU2_TR(0x71f18c);
u8 U[54];
__builtin_memmove((U+5),(R+4736),16);
__builtin_memmove((U+21),(R+4608),16);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+38,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+38))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4736),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+39,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+39))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4737),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+40,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+40))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4738),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+41,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+41))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4739),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+42,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+42))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4740),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+43,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+43))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4741),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+44,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+44))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4742),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+45,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+45))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4743),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+21))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+21))));
w1(U+2,u8(s16(r2(U+21))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+46,u8(r2(U+21)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+46))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4744),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+23))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+23))));
w1(U+2,u8(s16(r2(U+23))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+47,u8(r2(U+23)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+47))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4745),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+25))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+25))));
w1(U+2,u8(s16(r2(U+25))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+48,u8(r2(U+25)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+48))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4746),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+27))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+27))));
w1(U+2,u8(s16(r2(U+27))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+49,u8(r2(U+27)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+49))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4747),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+29))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+29))));
w1(U+2,u8(s16(r2(U+29))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+50,u8(r2(U+29)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+50))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4748),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+31))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+31))));
w1(U+2,u8(s16(r2(U+31))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+51,u8(r2(U+31)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+51))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4749),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+33))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+33))));
w1(U+2,u8(s16(r2(U+33))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+52,u8(r2(U+33)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+52))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4750),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+35))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+35))));
w1(U+2,u8(s16(r2(U+35))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+53,u8(r2(U+35)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+53))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4751),(U+37),1);
}
B71f190:{NFSU2_TR(0x71f190);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B71f192:{NFSU2_TR(0x71f192);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B71f194:{NFSU2_TR(0x71f194);
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
B71f196:{NFSU2_TR(0x71f196);
u8 U[8];
__builtin_memmove((U+0),(R+4736),8);
s8_(u32(r4(R+12)),r8(U+0));
}
B71f19a:{NFSU2_TR(0x71f19a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B71f19d:{NFSU2_TR(0x71f19d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71f168u);}goto L71f168;}}
}
B71f19f:L71f19f:{c.instructions+=7;NFSU2_TR(0x71f19f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B71f1a0:{NFSU2_TR(0x71f1a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B71f1a1:{NFSU2_TR(0x71f1a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B71f1a2:{NFSU2_TR(0x71f1a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B71f1a3:{NFSU2_TR(0x71f1a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B71f1a4:{NFSU2_TR(0x71f1a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B71f1a5:{NFSU2_TR(0x71f1a5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B71f1a6:L71f1a6:{c.instructions+=296;NFSU2_TR(0x71f1a6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71f1a7:{NFSU2_TR(0x71f1a7);
__builtin_memmove((R+20),(R+16),4);
}
B71f1a9:{NFSU2_TR(0x71f1a9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71f1aa:{NFSU2_TR(0x71f1aa);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71f1ab:{NFSU2_TR(0x71f1ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71f1ae:{NFSU2_TR(0x71f1ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B71f1b1:{NFSU2_TR(0x71f1b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B71f1b4:{NFSU2_TR(0x71f1b4);
w4(R+4,u32(0x817e40ull));
}
B71f1ba:{NFSU2_TR(0x71f1ba);
u8 U[16];
__builtin_memmove((U+0),gp(u32(r4(R+0))),16);
__builtin_memmove((R+4608),(U+0),16);
}
B71f1be:{NFSU2_TR(0x71f1be);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4672),(U+4),16);
}
B71f1c3:{NFSU2_TR(0x71f1c3);
u8 U[32];
__builtin_memmove((U+0),gp(u32(r4(R+12))),16);
__builtin_memmove((U+16),(U+0),16);
w2(R+4608,u16(u32(r2(R+4608))*u32(r2(U+16))));
w2(R+4610,u16(u32(r2(R+4610))*u32(r2(U+18))));
w2(R+4612,u16(u32(r2(R+4612))*u32(r2(U+20))));
w2(R+4614,u16(u32(r2(R+4614))*u32(r2(U+22))));
w2(R+4616,u16(u32(r2(R+4616))*u32(r2(U+24))));
w2(R+4618,u16(u32(r2(R+4618))*u32(r2(U+26))));
w2(R+4620,u16(u32(r2(R+4620))*u32(r2(U+28))));
w2(R+4622,u16(u32(r2(R+4622))*u32(r2(U+30))));
}
B71f1c7:{NFSU2_TR(0x71f1c7);
u8 U[36];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w2(R+4672,u16(u32(r2(R+4672))*u32(r2(U+20))));
w2(R+4674,u16(u32(r2(R+4674))*u32(r2(U+22))));
w2(R+4676,u16(u32(r2(R+4676))*u32(r2(U+24))));
w2(R+4678,u16(u32(r2(R+4678))*u32(r2(U+26))));
w2(R+4680,u16(u32(r2(R+4680))*u32(r2(U+28))));
w2(R+4682,u16(u32(r2(R+4682))*u32(r2(U+30))));
w2(R+4684,u16(u32(r2(R+4684))*u32(r2(U+32))));
w2(R+4686,u16(u32(r2(R+4686))*u32(r2(U+34))));
}
B71f1cc:{NFSU2_TR(0x71f1cc);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4736),(U+4),16);
}
B71f1d1:{NFSU2_TR(0x71f1d1);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4800),(U+4),16);
}
B71f1d6:{NFSU2_TR(0x71f1d6);
u8 U[36];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w2(R+4736,u16(u32(r2(R+4736))*u32(r2(U+20))));
w2(R+4738,u16(u32(r2(R+4738))*u32(r2(U+22))));
w2(R+4740,u16(u32(r2(R+4740))*u32(r2(U+24))));
w2(R+4742,u16(u32(r2(R+4742))*u32(r2(U+26))));
w2(R+4744,u16(u32(r2(R+4744))*u32(r2(U+28))));
w2(R+4746,u16(u32(r2(R+4746))*u32(r2(U+30))));
w2(R+4748,u16(u32(r2(R+4748))*u32(r2(U+32))));
w2(R+4750,u16(u32(r2(R+4750))*u32(r2(U+34))));
}
B71f1db:{NFSU2_TR(0x71f1db);
u8 U[36];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w2(R+4800,u16(u32(r2(R+4800))*u32(r2(U+20))));
w2(R+4802,u16(u32(r2(R+4802))*u32(r2(U+22))));
w2(R+4804,u16(u32(r2(R+4804))*u32(r2(U+24))));
w2(R+4806,u16(u32(r2(R+4806))*u32(r2(U+26))));
w2(R+4808,u16(u32(r2(R+4808))*u32(r2(U+28))));
w2(R+4810,u16(u32(r2(R+4810))*u32(r2(U+30))));
w2(R+4812,u16(u32(r2(R+4812))*u32(r2(U+32))));
w2(R+4814,u16(u32(r2(R+4814))*u32(r2(U+34))));
}
B71f1e0:{NFSU2_TR(0x71f1e0);
u8 U[16];
__builtin_memmove((U+0),(R+4608),16);
__builtin_memmove(gp(u32(r4(R+8))),(U+0),16);
}
B71f1e4:{NFSU2_TR(0x71f1e4);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4672),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f1e9:{NFSU2_TR(0x71f1e9);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4864),(U+4),16);
}
B71f1ee:{NFSU2_TR(0x71f1ee);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4928),(U+4),16);
}
B71f1f3:{NFSU2_TR(0x71f1f3);
u8 U[36];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w2(R+4864,u16(u32(r2(R+4864))*u32(r2(U+20))));
w2(R+4866,u16(u32(r2(R+4866))*u32(r2(U+22))));
w2(R+4868,u16(u32(r2(R+4868))*u32(r2(U+24))));
w2(R+4870,u16(u32(r2(R+4870))*u32(r2(U+26))));
w2(R+4872,u16(u32(r2(R+4872))*u32(r2(U+28))));
w2(R+4874,u16(u32(r2(R+4874))*u32(r2(U+30))));
w2(R+4876,u16(u32(r2(R+4876))*u32(r2(U+32))));
w2(R+4878,u16(u32(r2(R+4878))*u32(r2(U+34))));
}
B71f1f8:{NFSU2_TR(0x71f1f8);
u8 U[36];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w2(R+4928,u16(u32(r2(R+4928))*u32(r2(U+20))));
w2(R+4930,u16(u32(r2(R+4930))*u32(r2(U+22))));
w2(R+4932,u16(u32(r2(R+4932))*u32(r2(U+24))));
w2(R+4934,u16(u32(r2(R+4934))*u32(r2(U+26))));
w2(R+4936,u16(u32(r2(R+4936))*u32(r2(U+28))));
w2(R+4938,u16(u32(r2(R+4938))*u32(r2(U+30))));
w2(R+4940,u16(u32(r2(R+4940))*u32(r2(U+32))));
w2(R+4942,u16(u32(r2(R+4942))*u32(r2(U+34))));
}
B71f1fd:{NFSU2_TR(0x71f1fd);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4736),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f202:{NFSU2_TR(0x71f202);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4800),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f207:{NFSU2_TR(0x71f207);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4992),(U+4),16);
}
B71f20c:{NFSU2_TR(0x71f20c);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+5056),(U+4),16);
}
B71f211:{NFSU2_TR(0x71f211);
u8 U[36];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w2(R+4992,u16(u32(r2(R+4992))*u32(r2(U+20))));
w2(R+4994,u16(u32(r2(R+4994))*u32(r2(U+22))));
w2(R+4996,u16(u32(r2(R+4996))*u32(r2(U+24))));
w2(R+4998,u16(u32(r2(R+4998))*u32(r2(U+26))));
w2(R+5000,u16(u32(r2(R+5000))*u32(r2(U+28))));
w2(R+5002,u16(u32(r2(R+5002))*u32(r2(U+30))));
w2(R+5004,u16(u32(r2(R+5004))*u32(r2(U+32))));
w2(R+5006,u16(u32(r2(R+5006))*u32(r2(U+34))));
}
B71f216:{NFSU2_TR(0x71f216);
u8 U[36];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w2(R+5056,u16(u32(r2(R+5056))*u32(r2(U+20))));
w2(R+5058,u16(u32(r2(R+5058))*u32(r2(U+22))));
w2(R+5060,u16(u32(r2(R+5060))*u32(r2(U+24))));
w2(R+5062,u16(u32(r2(R+5062))*u32(r2(U+26))));
w2(R+5064,u16(u32(r2(R+5064))*u32(r2(U+28))));
w2(R+5066,u16(u32(r2(R+5066))*u32(r2(U+30))));
w2(R+5068,u16(u32(r2(R+5068))*u32(r2(U+32))));
w2(R+5070,u16(u32(r2(R+5070))*u32(r2(U+34))));
}
B71f21b:{NFSU2_TR(0x71f21b);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4864),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f220:{NFSU2_TR(0x71f220);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4928),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f225:{NFSU2_TR(0x71f225);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4992),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f22a:{NFSU2_TR(0x71f22a);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+5056),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f22f:{NFSU2_TR(0x71f22f);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4736),(U+4),16);
}
B71f234:{NFSU2_TR(0x71f234);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4992),(U+4),16);
}
B71f239:{NFSU2_TR(0x71f239);
__builtin_memmove((R+4864),(R+4736),16);
}
B71f23d:{NFSU2_TR(0x71f23d);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+5056),(U+4),16);
}
B71f242:{NFSU2_TR(0x71f242);
{wv<16>((R+4864),uo::pmulhw<16>(rv<16>((R+4864)),rv<16>((R+4992))));}
}
B71f246:{NFSU2_TR(0x71f246);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4672),(U+4),16);
}
B71f24b:{NFSU2_TR(0x71f24b);
{wv<16>((R+4992),uo::pmulhw<16>(rv<16>((R+4992)),rv<16>((R+5056))));}
}
B71f24f:{NFSU2_TR(0x71f24f);
__builtin_memmove((R+4928),(R+4672),16);
}
B71f253:{NFSU2_TR(0x71f253);
{wv<16>((R+4672),uo::pmulhw<16>(rv<16>((R+4672)),rv<16>((R+4736))));}
}
B71f257:{NFSU2_TR(0x71f257);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4800),(U+4),16);
}
B71f25c:{NFSU2_TR(0x71f25c);
{wv<16>((R+4928),uo::pmulhw<16>(rv<16>((R+4928)),rv<16>((R+5056))));}
}
B71f260:{NFSU2_TR(0x71f260);
u8 U[16];
__builtin_memmove((U+0),gp(u32(r4(R+4))),16);
__builtin_memmove((R+4608),(U+0),16);
}
B71f264:{NFSU2_TR(0x71f264);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4736))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4738))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4740))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4742))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4744))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4746))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4748))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4750))));
}
B71f268:{NFSU2_TR(0x71f268);
w2(R+4992,u16(u32(r2(R+4992))+u32(r2(R+5056))));
w2(R+4994,u16(u32(r2(R+4994))+u32(r2(R+5058))));
w2(R+4996,u16(u32(r2(R+4996))+u32(r2(R+5060))));
w2(R+4998,u16(u32(r2(R+4998))+u32(r2(R+5062))));
w2(R+5000,u16(u32(r2(R+5000))+u32(r2(R+5064))));
w2(R+5002,u16(u32(r2(R+5002))+u32(r2(R+5066))));
w2(R+5004,u16(u32(r2(R+5004))+u32(r2(R+5068))));
w2(R+5006,u16(u32(r2(R+5006))+u32(r2(R+5070))));
}
B71f26c:{NFSU2_TR(0x71f26c);
w2(R+4736,u16(u32(r2(R+4736))+u32(r2(R+4672))));
w2(R+4738,u16(u32(r2(R+4738))+u32(r2(R+4674))));
w2(R+4740,u16(u32(r2(R+4740))+u32(r2(R+4676))));
w2(R+4742,u16(u32(r2(R+4742))+u32(r2(R+4678))));
w2(R+4744,u16(u32(r2(R+4744))+u32(r2(R+4680))));
w2(R+4746,u16(u32(r2(R+4746))+u32(r2(R+4682))));
w2(R+4748,u16(u32(r2(R+4748))+u32(r2(R+4684))));
w2(R+4750,u16(u32(r2(R+4750))+u32(r2(R+4686))));
}
B71f270:{NFSU2_TR(0x71f270);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4672),(U+4),16);
}
B71f275:{NFSU2_TR(0x71f275);
w2(R+5056,u16(u32(r2(R+5056))+u32(r2(R+4928))));
w2(R+5058,u16(u32(r2(R+5058))+u32(r2(R+4930))));
w2(R+5060,u16(u32(r2(R+5060))+u32(r2(R+4932))));
w2(R+5062,u16(u32(r2(R+5062))+u32(r2(R+4934))));
w2(R+5064,u16(u32(r2(R+5064))+u32(r2(R+4936))));
w2(R+5066,u16(u32(r2(R+5066))+u32(r2(R+4938))));
w2(R+5068,u16(u32(r2(R+5068))+u32(r2(R+4940))));
w2(R+5070,u16(u32(r2(R+5070))+u32(r2(R+4942))));
}
B71f279:{NFSU2_TR(0x71f279);
__builtin_memmove((R+4928),(R+4608),16);
}
B71f27d:{NFSU2_TR(0x71f27d);
{wv<16>((R+4608),uo::pmulhw<16>(rv<16>((R+4608)),rv<16>((R+4800))));}
}
B71f281:{NFSU2_TR(0x71f281);
{wv<16>((R+4864),uo::paddsw<16>(rv<16>((R+4864)),rv<16>((R+5056))));}
}
B71f285:{NFSU2_TR(0x71f285);
{wv<16>((R+4928),uo::pmulhw<16>(rv<16>((R+4928)),rv<16>((R+4672))));}
}
B71f289:{NFSU2_TR(0x71f289);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+5056),(U+4),16);
}
B71f28e:{NFSU2_TR(0x71f28e);
{wv<16>((R+4992),uo::psubsw<16>(rv<16>((R+4992)),rv<16>((R+4736))));}
}
B71f292:{NFSU2_TR(0x71f292);
w2(R+4608,u16(u32(r2(R+4608))+u32(r2(R+4800))));
w2(R+4610,u16(u32(r2(R+4610))+u32(r2(R+4802))));
w2(R+4612,u16(u32(r2(R+4612))+u32(r2(R+4804))));
w2(R+4614,u16(u32(r2(R+4614))+u32(r2(R+4806))));
w2(R+4616,u16(u32(r2(R+4616))+u32(r2(R+4808))));
w2(R+4618,u16(u32(r2(R+4618))+u32(r2(R+4810))));
w2(R+4620,u16(u32(r2(R+4620))+u32(r2(R+4812))));
w2(R+4622,u16(u32(r2(R+4622))+u32(r2(R+4814))));
}
B71f296:{NFSU2_TR(0x71f296);
{wv<16>((R+4800),uo::pmulhw<16>(rv<16>((R+4800)),rv<16>((R+5056))));}
}
B71f29a:{NFSU2_TR(0x71f29a);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4736),(U+4),16);
}
B71f29f:{NFSU2_TR(0x71f29f);
{wv<16>((R+5056),uo::pmulhw<16>(rv<16>((R+5056)),rv<16>((R+4672))));}
}
B71f2a3:{NFSU2_TR(0x71f2a3);
w2(R+4928,u16(u32(r2(R+4928))+u32(r2(R+4672))));
w2(R+4930,u16(u32(r2(R+4930))+u32(r2(R+4674))));
w2(R+4932,u16(u32(r2(R+4932))+u32(r2(R+4676))));
w2(R+4934,u16(u32(r2(R+4934))+u32(r2(R+4678))));
w2(R+4936,u16(u32(r2(R+4936))+u32(r2(R+4680))));
w2(R+4938,u16(u32(r2(R+4938))+u32(r2(R+4682))));
w2(R+4940,u16(u32(r2(R+4940))+u32(r2(R+4684))));
w2(R+4942,u16(u32(r2(R+4942))+u32(r2(R+4686))));
}
B71f2a7:{NFSU2_TR(0x71f2a7);
__builtin_memmove((R+4672),(R+4736),16);
}
B71f2ab:{NFSU2_TR(0x71f2ab);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
{wv<16>((R+4736),uo::pmulhw<16>(rv<16>((R+4736)),rv<16>((U+4))));}
}
B71f2b0:{NFSU2_TR(0x71f2b0);
{wv<16>((R+4800),uo::psubsw<16>(rv<16>((R+4800)),rv<16>((R+4928))));}
}
B71f2b4:{NFSU2_TR(0x71f2b4);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4928),(U+4),16);
}
B71f2b9:{NFSU2_TR(0x71f2b9);
{wv<16>((R+4608),uo::paddsw<16>(rv<16>((R+4608)),rv<16>((R+5056))));}
}
B71f2bd:{NFSU2_TR(0x71f2bd);
__builtin_memmove((R+5056),(R+4928),16);
}
B71f2c1:{NFSU2_TR(0x71f2c1);
{wv<16>((R+4608),uo::psubsw<16>(rv<16>((R+4608)),rv<16>((R+4864))));}
}
B71f2c5:{NFSU2_TR(0x71f2c5);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
{wv<16>((R+4928),uo::pmulhw<16>(rv<16>((R+4928)),rv<16>((U+4))));}
}
B71f2ca:{NFSU2_TR(0x71f2ca);
w2(R+4736,u16(u32(r2(R+4736))+u32(r2(R+4672))));
w2(R+4738,u16(u32(r2(R+4738))+u32(r2(R+4674))));
w2(R+4740,u16(u32(r2(R+4740))+u32(r2(R+4676))));
w2(R+4742,u16(u32(r2(R+4742))+u32(r2(R+4678))));
w2(R+4744,u16(u32(r2(R+4744))+u32(r2(R+4680))));
w2(R+4746,u16(u32(r2(R+4746))+u32(r2(R+4682))));
w2(R+4748,u16(u32(r2(R+4748))+u32(r2(R+4684))));
w2(R+4750,u16(u32(r2(R+4750))+u32(r2(R+4686))));
}
B71f2ce:{NFSU2_TR(0x71f2ce);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
{wv<16>((R+4672),uo::pmulhw<16>(rv<16>((R+4672)),rv<16>((U+4))));}
}
B71f2d3:{NFSU2_TR(0x71f2d3);
{wv<16>((R+4864),uo::paddsw<16>(rv<16>((R+4864)),rv<16>((R+4864))));}
}
B71f2d7:{NFSU2_TR(0x71f2d7);
{wv<16>((R+4864),uo::paddsw<16>(rv<16>((R+4864)),rv<16>((R+4608))));}
}
B71f2db:{NFSU2_TR(0x71f2db);
{wv<16>((R+4800),uo::psubsw<16>(rv<16>((R+4800)),rv<16>((R+4992))));}
}
B71f2df:{NFSU2_TR(0x71f2df);
w2(R+4928,u16(u32(r2(R+4928))+u32(r2(R+5056))));
w2(R+4930,u16(u32(r2(R+4930))+u32(r2(R+5058))));
w2(R+4932,u16(u32(r2(R+4932))+u32(r2(R+5060))));
w2(R+4934,u16(u32(r2(R+4934))+u32(r2(R+5062))));
w2(R+4936,u16(u32(r2(R+4936))+u32(r2(R+5064))));
w2(R+4938,u16(u32(r2(R+4938))+u32(r2(R+5066))));
w2(R+4940,u16(u32(r2(R+4940))+u32(r2(R+5068))));
w2(R+4942,u16(u32(r2(R+4942))+u32(r2(R+5070))));
}
B71f2e3:{NFSU2_TR(0x71f2e3);
{wv<16>((R+4992),uo::paddsw<16>(rv<16>((R+4992)),rv<16>((R+4992))));}
}
B71f2e7:{NFSU2_TR(0x71f2e7);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
{wv<16>((R+5056),uo::pmulhw<16>(rv<16>((R+5056)),rv<16>((U+4))));}
}
B71f2ec:{NFSU2_TR(0x71f2ec);
{wv<16>((R+4992),uo::paddsw<16>(rv<16>((R+4992)),rv<16>((R+4800))));}
}
B71f2f0:{NFSU2_TR(0x71f2f0);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4864),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f2f5:{NFSU2_TR(0x71f2f5);
{wv<16>((R+4672),uo::psubsw<16>(rv<16>((R+4672)),rv<16>((R+4928))));}
}
B71f2f9:{NFSU2_TR(0x71f2f9);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4864),(U+4),16);
}
B71f2fe:{NFSU2_TR(0x71f2fe);
__builtin_memmove((R+4928),(R+4800),16);
}
B71f302:{NFSU2_TR(0x71f302);
{wv<16>((R+4800),uo::pmulhw<16>(rv<16>((R+4800)),rv<16>((R+4864))));}
}
B71f306:{NFSU2_TR(0x71f306);
{wv<16>((R+5056),uo::paddsw<16>(rv<16>((R+5056)),rv<16>((R+4736))));}
}
B71f30a:{NFSU2_TR(0x71f30a);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4992),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f30f:{NFSU2_TR(0x71f30f);
__builtin_memmove((R+4736),(R+4608),16);
}
B71f313:{NFSU2_TR(0x71f313);
u8 U[16];
__builtin_memmove((U+0),gp(u32(r4(R+8))),16);
__builtin_memmove((R+4992),(U+0),16);
}
B71f317:{NFSU2_TR(0x71f317);
{wv<16>((R+4608),uo::pmulhw<16>(rv<16>((R+4608)),rv<16>((R+4864))));}
}
B71f31b:{NFSU2_TR(0x71f31b);
w2(R+4928,u16(u32(r2(R+4928))+u32(r2(R+4800))));
w2(R+4930,u16(u32(r2(R+4930))+u32(r2(R+4802))));
w2(R+4932,u16(u32(r2(R+4932))+u32(r2(R+4804))));
w2(R+4934,u16(u32(r2(R+4934))+u32(r2(R+4806))));
w2(R+4936,u16(u32(r2(R+4936))+u32(r2(R+4808))));
w2(R+4938,u16(u32(r2(R+4938))+u32(r2(R+4810))));
w2(R+4940,u16(u32(r2(R+4940))+u32(r2(R+4812))));
w2(R+4942,u16(u32(r2(R+4942))+u32(r2(R+4814))));
}
B71f31f:{NFSU2_TR(0x71f31f);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4800),(U+4),16);
}
B71f324:{NFSU2_TR(0x71f324);
{wv<16>((R+4928),uo::psubsw<16>(rv<16>((R+4928)),rv<16>((R+4672))));}
}
B71f328:{NFSU2_TR(0x71f328);
w2(R+4736,u16(u32(r2(R+4736))+u32(r2(R+4608))));
w2(R+4738,u16(u32(r2(R+4738))+u32(r2(R+4610))));
w2(R+4740,u16(u32(r2(R+4740))+u32(r2(R+4612))));
w2(R+4742,u16(u32(r2(R+4742))+u32(r2(R+4614))));
w2(R+4744,u16(u32(r2(R+4744))+u32(r2(R+4616))));
w2(R+4746,u16(u32(r2(R+4746))+u32(r2(R+4618))));
w2(R+4748,u16(u32(r2(R+4748))+u32(r2(R+4620))));
w2(R+4750,u16(u32(r2(R+4750))+u32(r2(R+4622))));
}
B71f32c:{NFSU2_TR(0x71f32c);
{wv<16>((R+4992),uo::psubsw<16>(rv<16>((R+4992)),rv<16>((R+4800))));}
}
B71f330:{NFSU2_TR(0x71f330);
__builtin_memmove((R+4608),(R+4992),16);
}
B71f334:{NFSU2_TR(0x71f334);
{wv<16>((R+4992),uo::pmulhw<16>(rv<16>((R+4992)),rv<16>((R+4864))));}
}
B71f338:{NFSU2_TR(0x71f338);
{wv<16>((R+4800),uo::paddsw<16>(rv<16>((R+4800)),rv<16>((R+4800))));}
}
B71f33c:{NFSU2_TR(0x71f33c);
{wv<16>((R+4672),uo::paddsw<16>(rv<16>((R+4672)),rv<16>((R+4672))));}
}
B71f340:{NFSU2_TR(0x71f340);
{wv<16>((R+4800),uo::paddsw<16>(rv<16>((R+4800)),rv<16>((R+4608))));}
}
B71f344:{NFSU2_TR(0x71f344);
{wv<16>((R+4672),uo::paddsw<16>(rv<16>((R+4672)),rv<16>((R+4928))));}
}
B71f348:{NFSU2_TR(0x71f348);
{wv<16>((R+4864),uo::pmulhw<16>(rv<16>((R+4864)),rv<16>((R+4800))));}
}
B71f34c:{NFSU2_TR(0x71f34c);
w2(R+4992,u16(u32(r2(R+4992))+u32(r2(R+4608))));
w2(R+4994,u16(u32(r2(R+4994))+u32(r2(R+4610))));
w2(R+4996,u16(u32(r2(R+4996))+u32(r2(R+4612))));
w2(R+4998,u16(u32(r2(R+4998))+u32(r2(R+4614))));
w2(R+5000,u16(u32(r2(R+5000))+u32(r2(R+4616))));
w2(R+5002,u16(u32(r2(R+5002))+u32(r2(R+4618))));
w2(R+5004,u16(u32(r2(R+5004))+u32(r2(R+4620))));
w2(R+5006,u16(u32(r2(R+5006))+u32(r2(R+4622))));
}
B71f350:{NFSU2_TR(0x71f350);
{wv<16>((R+4992),uo::psubsw<16>(rv<16>((R+4992)),rv<16>((R+4736))));}
}
B71f354:{NFSU2_TR(0x71f354);
{wv<16>((R+4736),uo::paddsw<16>(rv<16>((R+4736)),rv<16>((R+4736))));}
}
B71f358:{NFSU2_TR(0x71f358);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4608),(U+4),16);
}
B71f35d:{NFSU2_TR(0x71f35d);
{wv<16>((R+4736),uo::paddsw<16>(rv<16>((R+4736)),rv<16>((R+4992))));}
}
B71f361:{NFSU2_TR(0x71f361);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4800))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4802))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4804))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4806))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4808))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4810))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4812))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4814))));
}
B71f365:{NFSU2_TR(0x71f365);
{wv<16>((R+4736),uo::psubsw<16>(rv<16>((R+4736)),rv<16>((R+4672))));}
}
B71f369:{NFSU2_TR(0x71f369);
{wv<16>((R+4672),uo::paddsw<16>(rv<16>((R+4672)),rv<16>((R+4672))));}
}
B71f36d:{NFSU2_TR(0x71f36d);
{wv<16>((R+4672),uo::paddsw<16>(rv<16>((R+4672)),rv<16>((R+4736))));}
}
B71f371:{NFSU2_TR(0x71f371);
{wv<16>((R+4864),uo::psubsw<16>(rv<16>((R+4864)),rv<16>((R+5056))));}
}
B71f375:{NFSU2_TR(0x71f375);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4800),(U+4),16);
}
B71f37a:{NFSU2_TR(0x71f37a);
{wv<16>((R+5056),uo::paddsw<16>(rv<16>((R+5056)),rv<16>((R+5056))));}
}
B71f37e:{NFSU2_TR(0x71f37e);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4736),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f383:{NFSU2_TR(0x71f383);
{wv<16>((R+5056),uo::paddsw<16>(rv<16>((R+5056)),rv<16>((R+4864))));}
}
B71f387:{NFSU2_TR(0x71f387);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4672),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f38c:{NFSU2_TR(0x71f38c);
{wv<16>((R+4864),uo::psubsw<16>(rv<16>((R+4864)),rv<16>((R+4800))));}
}
B71f390:{NFSU2_TR(0x71f390);
{wv<16>((R+4800),uo::paddsw<16>(rv<16>((R+4800)),rv<16>((R+4800))));}
}
B71f394:{NFSU2_TR(0x71f394);
{wv<16>((R+4800),uo::paddsw<16>(rv<16>((R+4800)),rv<16>((R+4864))));}
}
B71f398:{NFSU2_TR(0x71f398);
{wv<16>((R+4992),uo::psubsw<16>(rv<16>((R+4992)),rv<16>((R+4928))));}
}
B71f39c:{NFSU2_TR(0x71f39c);
{wv<16>((R+4928),uo::paddsw<16>(rv<16>((R+4928)),rv<16>((R+4928))));}
}
B71f3a0:{NFSU2_TR(0x71f3a0);
{wv<16>((R+4928),uo::paddsw<16>(rv<16>((R+4928)),rv<16>((R+4992))));}
}
B71f3a4:{NFSU2_TR(0x71f3a4);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4864),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f3a9:{NFSU2_TR(0x71f3a9);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4800),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f3ae:{NFSU2_TR(0x71f3ae);
{wv<16>((R+5056),uo::psubsw<16>(rv<16>((R+5056)),rv<16>((R+4608))));}
}
B71f3b2:{NFSU2_TR(0x71f3b2);
{wv<16>((R+4608),uo::paddsw<16>(rv<16>((R+4608)),rv<16>((R+4608))));}
}
B71f3b6:{NFSU2_TR(0x71f3b6);
{wv<16>((R+4608),uo::paddsw<16>(rv<16>((R+4608)),rv<16>((R+5056))));}
}
B71f3ba:{NFSU2_TR(0x71f3ba);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4992),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f3bf:{NFSU2_TR(0x71f3bf);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4928),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f3c4:{NFSU2_TR(0x71f3c4);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+5056),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f3c9:{NFSU2_TR(0x71f3c9);
u8 U[16];
__builtin_memmove((U+0),(R+4608),16);
__builtin_memmove(gp(u32(r4(R+8))),(U+0),16);
}
B71f3cd:{NFSU2_TR(0x71f3cd);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4864),(U+4),16);
}
B71f3d2:{NFSU2_TR(0x71f3d2);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4608),(U+4),16);
}
B71f3d7:{NFSU2_TR(0x71f3d7);
__builtin_memmove((R+4928),(R+4864),16);
}
B71f3db:{NFSU2_TR(0x71f3db);
__builtin_memmove((R+4878),(R+4614),2);
__builtin_memmove((R+4876),(R+4870),2);
__builtin_memmove((R+4874),(R+4612),2);
__builtin_memmove((R+4872),(R+4868),2);
__builtin_memmove((R+4870),(R+4610),2);
__builtin_memmove((R+4868),(R+4866),2);
__builtin_memmove((R+4866),(R+4608),2);
}
B71f3df:{NFSU2_TR(0x71f3df);
__builtin_memmove((R+4928),(R+4936),2);
__builtin_memmove((R+4930),(R+4616),2);
__builtin_memmove((R+4932),(R+4938),2);
__builtin_memmove((R+4934),(R+4618),2);
__builtin_memmove((R+4936),(R+4940),2);
__builtin_memmove((R+4938),(R+4620),2);
__builtin_memmove((R+4940),(R+4942),2);
__builtin_memmove((R+4942),(R+4622),2);
}
B71f3e3:{NFSU2_TR(0x71f3e3);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4992),(U+4),16);
}
B71f3e8:{NFSU2_TR(0x71f3e8);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4608),(U+4),16);
}
B71f3ed:{NFSU2_TR(0x71f3ed);
__builtin_memmove((R+5056),(R+4992),16);
}
B71f3f1:{NFSU2_TR(0x71f3f1);
__builtin_memmove((R+5006),(R+4614),2);
__builtin_memmove((R+5004),(R+4998),2);
__builtin_memmove((R+5002),(R+4612),2);
__builtin_memmove((R+5000),(R+4996),2);
__builtin_memmove((R+4998),(R+4610),2);
__builtin_memmove((R+4996),(R+4994),2);
__builtin_memmove((R+4994),(R+4608),2);
}
B71f3f5:{NFSU2_TR(0x71f3f5);
__builtin_memmove((R+5056),(R+5064),2);
__builtin_memmove((R+5058),(R+4616),2);
__builtin_memmove((R+5060),(R+5066),2);
__builtin_memmove((R+5062),(R+4618),2);
__builtin_memmove((R+5064),(R+5068),2);
__builtin_memmove((R+5066),(R+4620),2);
__builtin_memmove((R+5068),(R+5070),2);
__builtin_memmove((R+5070),(R+4622),2);
}
B71f3f9:{NFSU2_TR(0x71f3f9);
__builtin_memmove((R+4800),(R+4864),16);
}
B71f3fd:{NFSU2_TR(0x71f3fd);
__builtin_memmove((R+4876),(R+4996),4);
__builtin_memmove((R+4872),(R+4868),4);
__builtin_memmove((R+4868),(R+4992),4);
}
B71f401:{NFSU2_TR(0x71f401);
__builtin_memmove((R+4800),(R+4808),4);
__builtin_memmove((R+4804),(R+5000),4);
__builtin_memmove((R+4808),(R+4812),4);
__builtin_memmove((R+4812),(R+5004),4);
}
B71f405:{NFSU2_TR(0x71f405);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4800),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f40a:{NFSU2_TR(0x71f40a);
__builtin_memmove((R+4992),(R+4928),16);
}
B71f40e:{NFSU2_TR(0x71f40e);
__builtin_memmove((R+4940),(R+5060),4);
__builtin_memmove((R+4936),(R+4932),4);
__builtin_memmove((R+4932),(R+5056),4);
}
B71f412:{NFSU2_TR(0x71f412);
__builtin_memmove((R+4992),(R+5000),4);
__builtin_memmove((R+4996),(R+5064),4);
__builtin_memmove((R+5000),(R+5004),4);
__builtin_memmove((R+5004),(R+5068),4);
}
B71f416:{NFSU2_TR(0x71f416);
u8 U[16];
__builtin_memmove((U+0),gp(u32(r4(R+8))),16);
__builtin_memmove((R+4608),(U+0),16);
}
B71f41a:{NFSU2_TR(0x71f41a);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4672),(U+4),16);
}
B71f41f:{NFSU2_TR(0x71f41f);
__builtin_memmove((R+5056),(R+4608),16);
}
B71f423:{NFSU2_TR(0x71f423);
__builtin_memmove((R+4622),(R+4678),2);
__builtin_memmove((R+4620),(R+4614),2);
__builtin_memmove((R+4618),(R+4676),2);
__builtin_memmove((R+4616),(R+4612),2);
__builtin_memmove((R+4614),(R+4674),2);
__builtin_memmove((R+4612),(R+4610),2);
__builtin_memmove((R+4610),(R+4672),2);
}
B71f427:{NFSU2_TR(0x71f427);
__builtin_memmove((R+5056),(R+5064),2);
__builtin_memmove((R+5058),(R+4680),2);
__builtin_memmove((R+5060),(R+5066),2);
__builtin_memmove((R+5062),(R+4682),2);
__builtin_memmove((R+5064),(R+5068),2);
__builtin_memmove((R+5066),(R+4684),2);
__builtin_memmove((R+5068),(R+5070),2);
__builtin_memmove((R+5070),(R+4686),2);
}
B71f42b:{NFSU2_TR(0x71f42b);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4736),(U+4),16);
}
B71f430:{NFSU2_TR(0x71f430);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4800),(U+4),16);
}
B71f435:{NFSU2_TR(0x71f435);
__builtin_memmove((R+4672),(R+4736),16);
}
B71f439:{NFSU2_TR(0x71f439);
__builtin_memmove((R+4750),(R+4806),2);
__builtin_memmove((R+4748),(R+4742),2);
__builtin_memmove((R+4746),(R+4804),2);
__builtin_memmove((R+4744),(R+4740),2);
__builtin_memmove((R+4742),(R+4802),2);
__builtin_memmove((R+4740),(R+4738),2);
__builtin_memmove((R+4738),(R+4800),2);
}
B71f43d:{NFSU2_TR(0x71f43d);
__builtin_memmove((R+4672),(R+4680),2);
__builtin_memmove((R+4674),(R+4808),2);
__builtin_memmove((R+4676),(R+4682),2);
__builtin_memmove((R+4678),(R+4810),2);
__builtin_memmove((R+4680),(R+4684),2);
__builtin_memmove((R+4682),(R+4812),2);
__builtin_memmove((R+4684),(R+4686),2);
__builtin_memmove((R+4686),(R+4814),2);
}
B71f441:{NFSU2_TR(0x71f441);
__builtin_memmove((R+4800),(R+4608),16);
}
B71f445:{NFSU2_TR(0x71f445);
__builtin_memmove((R+4620),(R+4740),4);
__builtin_memmove((R+4616),(R+4612),4);
__builtin_memmove((R+4612),(R+4736),4);
}
B71f449:{NFSU2_TR(0x71f449);
__builtin_memmove((R+4800),(R+4808),4);
__builtin_memmove((R+4804),(R+4744),4);
__builtin_memmove((R+4808),(R+4812),4);
__builtin_memmove((R+4812),(R+4748),4);
}
B71f44d:{NFSU2_TR(0x71f44d);
__builtin_memmove((R+4736),(R+5056),16);
}
B71f451:{NFSU2_TR(0x71f451);
__builtin_memmove((R+4748),(R+4676),4);
__builtin_memmove((R+4744),(R+4740),4);
__builtin_memmove((R+4740),(R+4672),4);
}
B71f455:{NFSU2_TR(0x71f455);
__builtin_memmove((R+5056),(R+5064),4);
__builtin_memmove((R+5060),(R+4680),4);
__builtin_memmove((R+5064),(R+5068),4);
__builtin_memmove((R+5068),(R+4684),4);
}
B71f459:{NFSU2_TR(0x71f459);
__builtin_memmove((R+4672),(R+4608),16);
}
B71f45d:{NFSU2_TR(0x71f45d);
__builtin_memmove((R+4616),(R+4864),8);
}
B71f461:{NFSU2_TR(0x71f461);
__builtin_memmove((R+4672),(R+4680),8);
__builtin_memmove((R+4680),(R+4872),8);
}
B71f465:{NFSU2_TR(0x71f465);
u8 U[16];
__builtin_memmove((U+0),(R+4608),16);
__builtin_memmove(gp(u32(r4(R+8))),(U+0),16);
}
B71f469:{NFSU2_TR(0x71f469);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4672),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f46e:{NFSU2_TR(0x71f46e);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4608),(U+4),16);
}
B71f473:{NFSU2_TR(0x71f473);
__builtin_memmove((R+4672),(R+4800),16);
}
B71f477:{NFSU2_TR(0x71f477);
__builtin_memmove((R+4680),(R+4608),8);
}
B71f47b:{NFSU2_TR(0x71f47b);
__builtin_memmove((R+4800),(R+4808),8);
__builtin_memmove((R+4808),(R+4616),8);
}
B71f47f:{NFSU2_TR(0x71f47f);
__builtin_memmove((R+4864),(R+4736),16);
}
B71f483:{NFSU2_TR(0x71f483);
__builtin_memmove((R+4872),(R+4928),8);
}
B71f487:{NFSU2_TR(0x71f487);
__builtin_memmove((R+4736),(R+4744),8);
__builtin_memmove((R+4744),(R+4936),8);
}
B71f48b:{NFSU2_TR(0x71f48b);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4672),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f490:{NFSU2_TR(0x71f490);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4800),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f495:{NFSU2_TR(0x71f495);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4864),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f49a:{NFSU2_TR(0x71f49a);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4736),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f49f:{NFSU2_TR(0x71f49f);
__builtin_memmove((R+4928),(R+5056),16);
}
B71f4a3:{NFSU2_TR(0x71f4a3);
__builtin_memmove((R+4936),(R+4992),8);
}
B71f4a7:{NFSU2_TR(0x71f4a7);
__builtin_memmove((R+5056),(R+5064),8);
__builtin_memmove((R+5064),(R+5000),8);
}
B71f4ab:{NFSU2_TR(0x71f4ab);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4928),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f4b0:{NFSU2_TR(0x71f4b0);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+5056),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f4b5:{NFSU2_TR(0x71f4b5);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4736),(U+4),16);
}
B71f4ba:{NFSU2_TR(0x71f4ba);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4992),(U+4),16);
}
B71f4bf:{NFSU2_TR(0x71f4bf);
__builtin_memmove((R+4864),(R+4736),16);
}
B71f4c3:{NFSU2_TR(0x71f4c3);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+5056),(U+4),16);
}
B71f4c8:{NFSU2_TR(0x71f4c8);
{wv<16>((R+4864),uo::pmulhw<16>(rv<16>((R+4864)),rv<16>((R+4992))));}
}
B71f4cc:{NFSU2_TR(0x71f4cc);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4672),(U+4),16);
}
B71f4d1:{NFSU2_TR(0x71f4d1);
{wv<16>((R+4992),uo::pmulhw<16>(rv<16>((R+4992)),rv<16>((R+5056))));}
}
B71f4d5:{NFSU2_TR(0x71f4d5);
__builtin_memmove((R+4928),(R+4672),16);
}
B71f4d9:{NFSU2_TR(0x71f4d9);
{wv<16>((R+4672),uo::pmulhw<16>(rv<16>((R+4672)),rv<16>((R+4736))));}
}
B71f4dd:{NFSU2_TR(0x71f4dd);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4800),(U+4),16);
}
B71f4e2:{NFSU2_TR(0x71f4e2);
{wv<16>((R+4928),uo::pmulhw<16>(rv<16>((R+4928)),rv<16>((R+5056))));}
}
B71f4e6:{NFSU2_TR(0x71f4e6);
u8 U[16];
__builtin_memmove((U+0),gp(u32(r4(R+4))),16);
__builtin_memmove((R+4608),(U+0),16);
}
B71f4ea:{NFSU2_TR(0x71f4ea);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4736))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4738))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4740))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4742))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4744))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4746))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4748))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4750))));
}
B71f4ee:{NFSU2_TR(0x71f4ee);
w2(R+4992,u16(u32(r2(R+4992))+u32(r2(R+5056))));
w2(R+4994,u16(u32(r2(R+4994))+u32(r2(R+5058))));
w2(R+4996,u16(u32(r2(R+4996))+u32(r2(R+5060))));
w2(R+4998,u16(u32(r2(R+4998))+u32(r2(R+5062))));
w2(R+5000,u16(u32(r2(R+5000))+u32(r2(R+5064))));
w2(R+5002,u16(u32(r2(R+5002))+u32(r2(R+5066))));
w2(R+5004,u16(u32(r2(R+5004))+u32(r2(R+5068))));
w2(R+5006,u16(u32(r2(R+5006))+u32(r2(R+5070))));
}
B71f4f2:{NFSU2_TR(0x71f4f2);
w2(R+4736,u16(u32(r2(R+4736))+u32(r2(R+4672))));
w2(R+4738,u16(u32(r2(R+4738))+u32(r2(R+4674))));
w2(R+4740,u16(u32(r2(R+4740))+u32(r2(R+4676))));
w2(R+4742,u16(u32(r2(R+4742))+u32(r2(R+4678))));
w2(R+4744,u16(u32(r2(R+4744))+u32(r2(R+4680))));
w2(R+4746,u16(u32(r2(R+4746))+u32(r2(R+4682))));
w2(R+4748,u16(u32(r2(R+4748))+u32(r2(R+4684))));
w2(R+4750,u16(u32(r2(R+4750))+u32(r2(R+4686))));
}
B71f4f6:{NFSU2_TR(0x71f4f6);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4672),(U+4),16);
}
B71f4fb:{NFSU2_TR(0x71f4fb);
w2(R+5056,u16(u32(r2(R+5056))+u32(r2(R+4928))));
w2(R+5058,u16(u32(r2(R+5058))+u32(r2(R+4930))));
w2(R+5060,u16(u32(r2(R+5060))+u32(r2(R+4932))));
w2(R+5062,u16(u32(r2(R+5062))+u32(r2(R+4934))));
w2(R+5064,u16(u32(r2(R+5064))+u32(r2(R+4936))));
w2(R+5066,u16(u32(r2(R+5066))+u32(r2(R+4938))));
w2(R+5068,u16(u32(r2(R+5068))+u32(r2(R+4940))));
w2(R+5070,u16(u32(r2(R+5070))+u32(r2(R+4942))));
}
B71f4ff:{NFSU2_TR(0x71f4ff);
__builtin_memmove((R+4928),(R+4608),16);
}
B71f503:{NFSU2_TR(0x71f503);
{wv<16>((R+4608),uo::pmulhw<16>(rv<16>((R+4608)),rv<16>((R+4800))));}
}
B71f507:{NFSU2_TR(0x71f507);
{wv<16>((R+4864),uo::paddsw<16>(rv<16>((R+4864)),rv<16>((R+5056))));}
}
B71f50b:{NFSU2_TR(0x71f50b);
{wv<16>((R+4928),uo::pmulhw<16>(rv<16>((R+4928)),rv<16>((R+4672))));}
}
B71f50f:{NFSU2_TR(0x71f50f);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+5056),(U+4),16);
}
B71f514:{NFSU2_TR(0x71f514);
{wv<16>((R+4992),uo::psubsw<16>(rv<16>((R+4992)),rv<16>((R+4736))));}
}
B71f518:{NFSU2_TR(0x71f518);
w2(R+4608,u16(u32(r2(R+4608))+u32(r2(R+4800))));
w2(R+4610,u16(u32(r2(R+4610))+u32(r2(R+4802))));
w2(R+4612,u16(u32(r2(R+4612))+u32(r2(R+4804))));
w2(R+4614,u16(u32(r2(R+4614))+u32(r2(R+4806))));
w2(R+4616,u16(u32(r2(R+4616))+u32(r2(R+4808))));
w2(R+4618,u16(u32(r2(R+4618))+u32(r2(R+4810))));
w2(R+4620,u16(u32(r2(R+4620))+u32(r2(R+4812))));
w2(R+4622,u16(u32(r2(R+4622))+u32(r2(R+4814))));
}
B71f51c:{NFSU2_TR(0x71f51c);
{wv<16>((R+4800),uo::pmulhw<16>(rv<16>((R+4800)),rv<16>((R+5056))));}
}
B71f520:{NFSU2_TR(0x71f520);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4736),(U+4),16);
}
B71f525:{NFSU2_TR(0x71f525);
{wv<16>((R+5056),uo::pmulhw<16>(rv<16>((R+5056)),rv<16>((R+4672))));}
}
B71f529:{NFSU2_TR(0x71f529);
w2(R+4928,u16(u32(r2(R+4928))+u32(r2(R+4672))));
w2(R+4930,u16(u32(r2(R+4930))+u32(r2(R+4674))));
w2(R+4932,u16(u32(r2(R+4932))+u32(r2(R+4676))));
w2(R+4934,u16(u32(r2(R+4934))+u32(r2(R+4678))));
w2(R+4936,u16(u32(r2(R+4936))+u32(r2(R+4680))));
w2(R+4938,u16(u32(r2(R+4938))+u32(r2(R+4682))));
w2(R+4940,u16(u32(r2(R+4940))+u32(r2(R+4684))));
w2(R+4942,u16(u32(r2(R+4942))+u32(r2(R+4686))));
}
B71f52d:{NFSU2_TR(0x71f52d);
__builtin_memmove((R+4672),(R+4736),16);
}
B71f531:{NFSU2_TR(0x71f531);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
{wv<16>((R+4736),uo::pmulhw<16>(rv<16>((R+4736)),rv<16>((U+4))));}
}
B71f536:{NFSU2_TR(0x71f536);
{wv<16>((R+4800),uo::psubsw<16>(rv<16>((R+4800)),rv<16>((R+4928))));}
}
B71f53a:{NFSU2_TR(0x71f53a);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4928),(U+4),16);
}
B71f53f:{NFSU2_TR(0x71f53f);
{wv<16>((R+4608),uo::paddsw<16>(rv<16>((R+4608)),rv<16>((R+5056))));}
}
B71f543:{NFSU2_TR(0x71f543);
__builtin_memmove((R+5056),(R+4928),16);
}
B71f547:{NFSU2_TR(0x71f547);
{wv<16>((R+4608),uo::psubsw<16>(rv<16>((R+4608)),rv<16>((R+4864))));}
}
B71f54b:{NFSU2_TR(0x71f54b);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
{wv<16>((R+4928),uo::pmulhw<16>(rv<16>((R+4928)),rv<16>((U+4))));}
}
B71f550:{NFSU2_TR(0x71f550);
w2(R+4736,u16(u32(r2(R+4736))+u32(r2(R+4672))));
w2(R+4738,u16(u32(r2(R+4738))+u32(r2(R+4674))));
w2(R+4740,u16(u32(r2(R+4740))+u32(r2(R+4676))));
w2(R+4742,u16(u32(r2(R+4742))+u32(r2(R+4678))));
w2(R+4744,u16(u32(r2(R+4744))+u32(r2(R+4680))));
w2(R+4746,u16(u32(r2(R+4746))+u32(r2(R+4682))));
w2(R+4748,u16(u32(r2(R+4748))+u32(r2(R+4684))));
w2(R+4750,u16(u32(r2(R+4750))+u32(r2(R+4686))));
}
B71f554:{NFSU2_TR(0x71f554);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
{wv<16>((R+4672),uo::pmulhw<16>(rv<16>((R+4672)),rv<16>((U+4))));}
}
B71f559:{NFSU2_TR(0x71f559);
{wv<16>((R+4864),uo::paddsw<16>(rv<16>((R+4864)),rv<16>((R+4864))));}
}
B71f55d:{NFSU2_TR(0x71f55d);
{wv<16>((R+4864),uo::paddsw<16>(rv<16>((R+4864)),rv<16>((R+4608))));}
}
B71f561:{NFSU2_TR(0x71f561);
{wv<16>((R+4800),uo::psubsw<16>(rv<16>((R+4800)),rv<16>((R+4992))));}
}
B71f565:{NFSU2_TR(0x71f565);
w2(R+4928,u16(u32(r2(R+4928))+u32(r2(R+5056))));
w2(R+4930,u16(u32(r2(R+4930))+u32(r2(R+5058))));
w2(R+4932,u16(u32(r2(R+4932))+u32(r2(R+5060))));
w2(R+4934,u16(u32(r2(R+4934))+u32(r2(R+5062))));
w2(R+4936,u16(u32(r2(R+4936))+u32(r2(R+5064))));
w2(R+4938,u16(u32(r2(R+4938))+u32(r2(R+5066))));
w2(R+4940,u16(u32(r2(R+4940))+u32(r2(R+5068))));
w2(R+4942,u16(u32(r2(R+4942))+u32(r2(R+5070))));
}
B71f569:{NFSU2_TR(0x71f569);
{wv<16>((R+4992),uo::paddsw<16>(rv<16>((R+4992)),rv<16>((R+4992))));}
}
B71f56d:{NFSU2_TR(0x71f56d);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
{wv<16>((R+5056),uo::pmulhw<16>(rv<16>((R+5056)),rv<16>((U+4))));}
}
B71f572:{NFSU2_TR(0x71f572);
{wv<16>((R+4992),uo::paddsw<16>(rv<16>((R+4992)),rv<16>((R+4800))));}
}
B71f576:{NFSU2_TR(0x71f576);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4864),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f57b:{NFSU2_TR(0x71f57b);
{wv<16>((R+4672),uo::psubsw<16>(rv<16>((R+4672)),rv<16>((R+4928))));}
}
B71f57f:{NFSU2_TR(0x71f57f);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4864),(U+4),16);
}
B71f584:{NFSU2_TR(0x71f584);
__builtin_memmove((R+4928),(R+4800),16);
}
B71f588:{NFSU2_TR(0x71f588);
{wv<16>((R+4800),uo::pmulhw<16>(rv<16>((R+4800)),rv<16>((R+4864))));}
}
B71f58c:{NFSU2_TR(0x71f58c);
{wv<16>((R+5056),uo::paddsw<16>(rv<16>((R+5056)),rv<16>((R+4736))));}
}
B71f590:{NFSU2_TR(0x71f590);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4992),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f595:{NFSU2_TR(0x71f595);
__builtin_memmove((R+4736),(R+4608),16);
}
B71f599:{NFSU2_TR(0x71f599);
u8 U[16];
__builtin_memmove((U+0),gp(u32(r4(R+8))),16);
__builtin_memmove((R+4992),(U+0),16);
}
B71f59d:{NFSU2_TR(0x71f59d);
{wv<16>((R+4608),uo::pmulhw<16>(rv<16>((R+4608)),rv<16>((R+4864))));}
}
B71f5a1:{NFSU2_TR(0x71f5a1);
w2(R+4928,u16(u32(r2(R+4928))+u32(r2(R+4800))));
w2(R+4930,u16(u32(r2(R+4930))+u32(r2(R+4802))));
w2(R+4932,u16(u32(r2(R+4932))+u32(r2(R+4804))));
w2(R+4934,u16(u32(r2(R+4934))+u32(r2(R+4806))));
w2(R+4936,u16(u32(r2(R+4936))+u32(r2(R+4808))));
w2(R+4938,u16(u32(r2(R+4938))+u32(r2(R+4810))));
w2(R+4940,u16(u32(r2(R+4940))+u32(r2(R+4812))));
w2(R+4942,u16(u32(r2(R+4942))+u32(r2(R+4814))));
}
B71f5a5:{NFSU2_TR(0x71f5a5);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4800),(U+4),16);
}
B71f5aa:{NFSU2_TR(0x71f5aa);
{wv<16>((R+4928),uo::psubsw<16>(rv<16>((R+4928)),rv<16>((R+4672))));}
}
B71f5ae:{NFSU2_TR(0x71f5ae);
w2(R+4736,u16(u32(r2(R+4736))+u32(r2(R+4608))));
w2(R+4738,u16(u32(r2(R+4738))+u32(r2(R+4610))));
w2(R+4740,u16(u32(r2(R+4740))+u32(r2(R+4612))));
w2(R+4742,u16(u32(r2(R+4742))+u32(r2(R+4614))));
w2(R+4744,u16(u32(r2(R+4744))+u32(r2(R+4616))));
w2(R+4746,u16(u32(r2(R+4746))+u32(r2(R+4618))));
w2(R+4748,u16(u32(r2(R+4748))+u32(r2(R+4620))));
w2(R+4750,u16(u32(r2(R+4750))+u32(r2(R+4622))));
}
B71f5b2:{NFSU2_TR(0x71f5b2);
{wv<16>((R+4992),uo::psubsw<16>(rv<16>((R+4992)),rv<16>((R+4800))));}
}
B71f5b6:{NFSU2_TR(0x71f5b6);
__builtin_memmove((R+4608),(R+4992),16);
}
B71f5ba:{NFSU2_TR(0x71f5ba);
{wv<16>((R+4992),uo::pmulhw<16>(rv<16>((R+4992)),rv<16>((R+4864))));}
}
B71f5be:{NFSU2_TR(0x71f5be);
{wv<16>((R+4800),uo::paddsw<16>(rv<16>((R+4800)),rv<16>((R+4800))));}
}
B71f5c2:{NFSU2_TR(0x71f5c2);
{wv<16>((R+4672),uo::paddsw<16>(rv<16>((R+4672)),rv<16>((R+4672))));}
}
B71f5c6:{NFSU2_TR(0x71f5c6);
{wv<16>((R+4800),uo::paddsw<16>(rv<16>((R+4800)),rv<16>((R+4608))));}
}
B71f5ca:{NFSU2_TR(0x71f5ca);
{wv<16>((R+4672),uo::paddsw<16>(rv<16>((R+4672)),rv<16>((R+4928))));}
}
B71f5ce:{NFSU2_TR(0x71f5ce);
{wv<16>((R+4864),uo::pmulhw<16>(rv<16>((R+4864)),rv<16>((R+4800))));}
}
B71f5d2:{NFSU2_TR(0x71f5d2);
w2(R+4992,u16(u32(r2(R+4992))+u32(r2(R+4608))));
w2(R+4994,u16(u32(r2(R+4994))+u32(r2(R+4610))));
w2(R+4996,u16(u32(r2(R+4996))+u32(r2(R+4612))));
w2(R+4998,u16(u32(r2(R+4998))+u32(r2(R+4614))));
w2(R+5000,u16(u32(r2(R+5000))+u32(r2(R+4616))));
w2(R+5002,u16(u32(r2(R+5002))+u32(r2(R+4618))));
w2(R+5004,u16(u32(r2(R+5004))+u32(r2(R+4620))));
w2(R+5006,u16(u32(r2(R+5006))+u32(r2(R+4622))));
}
B71f5d6:{NFSU2_TR(0x71f5d6);
{wv<16>((R+4992),uo::psubsw<16>(rv<16>((R+4992)),rv<16>((R+4736))));}
}
B71f5da:{NFSU2_TR(0x71f5da);
{wv<16>((R+4736),uo::paddsw<16>(rv<16>((R+4736)),rv<16>((R+4736))));}
}
B71f5de:{NFSU2_TR(0x71f5de);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4608),(U+4),16);
}
B71f5e3:{NFSU2_TR(0x71f5e3);
{wv<16>((R+4736),uo::paddsw<16>(rv<16>((R+4736)),rv<16>((R+4992))));}
}
B71f5e7:{NFSU2_TR(0x71f5e7);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4800))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4802))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4804))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4806))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4808))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4810))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4812))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4814))));
}
B71f5eb:{NFSU2_TR(0x71f5eb);
{wv<16>((R+4736),uo::psubsw<16>(rv<16>((R+4736)),rv<16>((R+4672))));}
}
B71f5ef:{NFSU2_TR(0x71f5ef);
{wv<16>((R+4736),uo::paddsw<16>(rv<16>((R+4736)),rv<16>(gp(0x817e20))));}
}
B71f5f7:{NFSU2_TR(0x71f5f7);
{wv<16>((R+4672),uo::paddsw<16>(rv<16>((R+4672)),rv<16>((R+4672))));}
}
B71f5fb:{NFSU2_TR(0x71f5fb);
{wv<16>((R+4672),uo::paddsw<16>(rv<16>((R+4672)),rv<16>((R+4736))));}
}
B71f5ff:{NFSU2_TR(0x71f5ff);
{wv<16>((R+4736),uo::psraw<16>(rv<16>((R+4736)),V(0x4ull)));}
}
B71f604:{NFSU2_TR(0x71f604);
{wv<16>((R+4864),uo::psubsw<16>(rv<16>((R+4864)),rv<16>((R+5056))));}
}
B71f608:{NFSU2_TR(0x71f608);
{wv<16>((R+4672),uo::psraw<16>(rv<16>((R+4672)),V(0x4ull)));}
}
B71f60d:{NFSU2_TR(0x71f60d);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4800),(U+4),16);
}
B71f612:{NFSU2_TR(0x71f612);
{wv<16>((R+5056),uo::paddsw<16>(rv<16>((R+5056)),rv<16>((R+5056))));}
}
B71f616:{NFSU2_TR(0x71f616);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4736),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f61b:{NFSU2_TR(0x71f61b);
{wv<16>((R+5056),uo::paddsw<16>(rv<16>((R+5056)),rv<16>((R+4864))));}
}
B71f61f:{NFSU2_TR(0x71f61f);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4672),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f624:{NFSU2_TR(0x71f624);
{wv<16>((R+4864),uo::psubsw<16>(rv<16>((R+4864)),rv<16>((R+4800))));}
}
B71f628:{NFSU2_TR(0x71f628);
{wv<16>((R+4864),uo::paddsw<16>(rv<16>((R+4864)),rv<16>(gp(0x817e20))));}
}
B71f630:{NFSU2_TR(0x71f630);
{wv<16>((R+4800),uo::paddsw<16>(rv<16>((R+4800)),rv<16>((R+4800))));}
}
B71f634:{NFSU2_TR(0x71f634);
{wv<16>((R+4800),uo::paddsw<16>(rv<16>((R+4800)),rv<16>((R+4864))));}
}
B71f638:{NFSU2_TR(0x71f638);
{wv<16>((R+4864),uo::psraw<16>(rv<16>((R+4864)),V(0x4ull)));}
}
B71f63d:{NFSU2_TR(0x71f63d);
{wv<16>((R+4992),uo::psubsw<16>(rv<16>((R+4992)),rv<16>((R+4928))));}
}
B71f641:{NFSU2_TR(0x71f641);
{wv<16>((R+4800),uo::psraw<16>(rv<16>((R+4800)),V(0x4ull)));}
}
B71f646:{NFSU2_TR(0x71f646);
{wv<16>((R+4992),uo::paddsw<16>(rv<16>((R+4992)),rv<16>(gp(0x817e20))));}
}
B71f64e:{NFSU2_TR(0x71f64e);
{wv<16>((R+4928),uo::paddsw<16>(rv<16>((R+4928)),rv<16>((R+4928))));}
}
B71f652:{NFSU2_TR(0x71f652);
{wv<16>((R+4928),uo::paddsw<16>(rv<16>((R+4928)),rv<16>((R+4992))));}
}
B71f656:{NFSU2_TR(0x71f656);
{wv<16>((R+4992),uo::psraw<16>(rv<16>((R+4992)),V(0x4ull)));}
}
B71f65b:{NFSU2_TR(0x71f65b);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4864),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f660:{NFSU2_TR(0x71f660);
{wv<16>((R+4928),uo::psraw<16>(rv<16>((R+4928)),V(0x4ull)));}
}
B71f665:{NFSU2_TR(0x71f665);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4800),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f66a:{NFSU2_TR(0x71f66a);
{wv<16>((R+5056),uo::psubsw<16>(rv<16>((R+5056)),rv<16>((R+4608))));}
}
B71f66e:{NFSU2_TR(0x71f66e);
{wv<16>((R+5056),uo::paddsw<16>(rv<16>((R+5056)),rv<16>(gp(0x817e20))));}
}
B71f676:{NFSU2_TR(0x71f676);
{wv<16>((R+4608),uo::paddsw<16>(rv<16>((R+4608)),rv<16>((R+4608))));}
}
B71f67a:{NFSU2_TR(0x71f67a);
{wv<16>((R+4608),uo::paddsw<16>(rv<16>((R+4608)),rv<16>((R+5056))));}
}
B71f67e:{NFSU2_TR(0x71f67e);
{wv<16>((R+5056),uo::psraw<16>(rv<16>((R+5056)),V(0x4ull)));}
}
B71f683:{NFSU2_TR(0x71f683);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4992),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f688:{NFSU2_TR(0x71f688);
{wv<16>((R+4608),uo::psraw<16>(rv<16>((R+4608)),V(0x4ull)));}
}
B71f68d:{NFSU2_TR(0x71f68d);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4928),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f692:{NFSU2_TR(0x71f692);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+5056),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f697:{NFSU2_TR(0x71f697);
u8 U[16];
__builtin_memmove((U+0),(R+4608),16);
__builtin_memmove(gp(u32(r4(R+8))),(U+0),16);
}
B71f69b:{NFSU2_TR(0x71f69b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B71f69c:{NFSU2_TR(0x71f69c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B71f69d:{NFSU2_TR(0x71f69d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B71f69e:{NFSU2_TR(0x71f69e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B71f69f:L71f69f:{c.instructions+=240;NFSU2_TR(0x71f69f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71f6a0:{NFSU2_TR(0x71f6a0);
__builtin_memmove((R+20),(R+16),4);
}
B71f6a2:{NFSU2_TR(0x71f6a2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71f6a3:{NFSU2_TR(0x71f6a3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71f6a4:{NFSU2_TR(0x71f6a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71f6a7:{NFSU2_TR(0x71f6a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B71f6aa:{NFSU2_TR(0x71f6aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B71f6ad:{NFSU2_TR(0x71f6ad);
w4(R+4,u32(0x817e40ull));
}
B71f6b3:{NFSU2_TR(0x71f6b3);
u8 U[16];
__builtin_memmove((U+0),gp(u32(r4(R+0))),16);
__builtin_memmove((R+4608),(U+0),16);
}
B71f6b7:{NFSU2_TR(0x71f6b7);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4672),(U+4),16);
}
B71f6bc:{NFSU2_TR(0x71f6bc);
u8 U[32];
__builtin_memmove((U+0),gp(u32(r4(R+12))),16);
__builtin_memmove((U+16),(U+0),16);
w2(R+4608,u16(u32(r2(R+4608))*u32(r2(U+16))));
w2(R+4610,u16(u32(r2(R+4610))*u32(r2(U+18))));
w2(R+4612,u16(u32(r2(R+4612))*u32(r2(U+20))));
w2(R+4614,u16(u32(r2(R+4614))*u32(r2(U+22))));
w2(R+4616,u16(u32(r2(R+4616))*u32(r2(U+24))));
w2(R+4618,u16(u32(r2(R+4618))*u32(r2(U+26))));
w2(R+4620,u16(u32(r2(R+4620))*u32(r2(U+28))));
w2(R+4622,u16(u32(r2(R+4622))*u32(r2(U+30))));
}
B71f6c0:{NFSU2_TR(0x71f6c0);
u8 U[36];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w2(R+4672,u16(u32(r2(R+4672))*u32(r2(U+20))));
w2(R+4674,u16(u32(r2(R+4674))*u32(r2(U+22))));
w2(R+4676,u16(u32(r2(R+4676))*u32(r2(U+24))));
w2(R+4678,u16(u32(r2(R+4678))*u32(r2(U+26))));
w2(R+4680,u16(u32(r2(R+4680))*u32(r2(U+28))));
w2(R+4682,u16(u32(r2(R+4682))*u32(r2(U+30))));
w2(R+4684,u16(u32(r2(R+4684))*u32(r2(U+32))));
w2(R+4686,u16(u32(r2(R+4686))*u32(r2(U+34))));
}
B71f6c5:{NFSU2_TR(0x71f6c5);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4736),(U+4),16);
}
B71f6ca:{NFSU2_TR(0x71f6ca);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4800),(U+4),16);
}
B71f6cf:{NFSU2_TR(0x71f6cf);
u8 U[36];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w2(R+4736,u16(u32(r2(R+4736))*u32(r2(U+20))));
w2(R+4738,u16(u32(r2(R+4738))*u32(r2(U+22))));
w2(R+4740,u16(u32(r2(R+4740))*u32(r2(U+24))));
w2(R+4742,u16(u32(r2(R+4742))*u32(r2(U+26))));
w2(R+4744,u16(u32(r2(R+4744))*u32(r2(U+28))));
w2(R+4746,u16(u32(r2(R+4746))*u32(r2(U+30))));
w2(R+4748,u16(u32(r2(R+4748))*u32(r2(U+32))));
w2(R+4750,u16(u32(r2(R+4750))*u32(r2(U+34))));
}
B71f6d4:{NFSU2_TR(0x71f6d4);
u8 U[36];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w2(R+4800,u16(u32(r2(R+4800))*u32(r2(U+20))));
w2(R+4802,u16(u32(r2(R+4802))*u32(r2(U+22))));
w2(R+4804,u16(u32(r2(R+4804))*u32(r2(U+24))));
w2(R+4806,u16(u32(r2(R+4806))*u32(r2(U+26))));
w2(R+4808,u16(u32(r2(R+4808))*u32(r2(U+28))));
w2(R+4810,u16(u32(r2(R+4810))*u32(r2(U+30))));
w2(R+4812,u16(u32(r2(R+4812))*u32(r2(U+32))));
w2(R+4814,u16(u32(r2(R+4814))*u32(r2(U+34))));
}
B71f6d9:{NFSU2_TR(0x71f6d9);
u8 U[16];
__builtin_memmove((U+0),(R+4608),16);
__builtin_memmove(gp(u32(r4(R+8))),(U+0),16);
}
B71f6dd:{NFSU2_TR(0x71f6dd);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4672),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f6e2:{NFSU2_TR(0x71f6e2);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4736),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f6e7:{NFSU2_TR(0x71f6e7);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4800),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f6ec:{NFSU2_TR(0x71f6ec);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4736),(U+4),16);
}
B71f6f1:{NFSU2_TR(0x71f6f1);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4992),(U+4),16);
}
B71f6f6:{NFSU2_TR(0x71f6f6);
__builtin_memmove((R+4864),(R+4736),16);
}
B71f6fa:{NFSU2_TR(0x71f6fa);
{wv<16>((R+4864),uo::pmulhw<16>(rv<16>((R+4864)),rv<16>((R+4992))));}
}
B71f6fe:{NFSU2_TR(0x71f6fe);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4672),(U+4),16);
}
B71f703:{NFSU2_TR(0x71f703);
__builtin_memmove((R+4928),(R+4672),16);
}
B71f707:{NFSU2_TR(0x71f707);
{wv<16>((R+4672),uo::pmulhw<16>(rv<16>((R+4672)),rv<16>((R+4736))));}
}
B71f70b:{NFSU2_TR(0x71f70b);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4800),(U+4),16);
}
B71f710:{NFSU2_TR(0x71f710);
u8 U[16];
__builtin_memmove((U+0),gp(u32(r4(R+4))),16);
__builtin_memmove((R+4608),(U+0),16);
}
B71f714:{NFSU2_TR(0x71f714);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4736))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4738))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4740))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4742))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4744))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4746))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4748))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4750))));
}
B71f718:{NFSU2_TR(0x71f718);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+5056),(U+4),16);
}
B71f71d:{NFSU2_TR(0x71f71d);
w2(R+4736,u16(u32(r2(R+4736))+u32(r2(R+4672))));
w2(R+4738,u16(u32(r2(R+4738))+u32(r2(R+4674))));
w2(R+4740,u16(u32(r2(R+4740))+u32(r2(R+4676))));
w2(R+4742,u16(u32(r2(R+4742))+u32(r2(R+4678))));
w2(R+4744,u16(u32(r2(R+4744))+u32(r2(R+4680))));
w2(R+4746,u16(u32(r2(R+4746))+u32(r2(R+4682))));
w2(R+4748,u16(u32(r2(R+4748))+u32(r2(R+4684))));
w2(R+4750,u16(u32(r2(R+4750))+u32(r2(R+4686))));
}
B71f721:{NFSU2_TR(0x71f721);
__builtin_memmove((R+4928),(R+4608),16);
}
B71f725:{NFSU2_TR(0x71f725);
{wv<16>((R+4608),uo::pmulhw<16>(rv<16>((R+4608)),rv<16>((R+4800))));}
}
B71f729:{NFSU2_TR(0x71f729);
wv<16>((R+4992),eval<Op::INT_XOR,16,16,16>(rv<16>((R+4992)),rv<16>((R+4992))));
}
B71f72d:{NFSU2_TR(0x71f72d);
{wv<16>((R+4992),uo::psubsw<16>(rv<16>((R+4992)),rv<16>((R+4736))));}
}
B71f731:{NFSU2_TR(0x71f731);
w2(R+4608,u16(u32(r2(R+4608))+u32(r2(R+4800))));
w2(R+4610,u16(u32(r2(R+4610))+u32(r2(R+4802))));
w2(R+4612,u16(u32(r2(R+4612))+u32(r2(R+4804))));
w2(R+4614,u16(u32(r2(R+4614))+u32(r2(R+4806))));
w2(R+4616,u16(u32(r2(R+4616))+u32(r2(R+4808))));
w2(R+4618,u16(u32(r2(R+4618))+u32(r2(R+4810))));
w2(R+4620,u16(u32(r2(R+4620))+u32(r2(R+4812))));
w2(R+4622,u16(u32(r2(R+4622))+u32(r2(R+4814))));
}
B71f735:{NFSU2_TR(0x71f735);
{wv<16>((R+4800),uo::pmulhw<16>(rv<16>((R+4800)),rv<16>((R+5056))));}
}
B71f739:{NFSU2_TR(0x71f739);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4736),(U+4),16);
}
B71f73e:{NFSU2_TR(0x71f73e);
__builtin_memmove((R+4672),(R+4736),16);
}
B71f742:{NFSU2_TR(0x71f742);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
{wv<16>((R+4736),uo::pmulhw<16>(rv<16>((R+4736)),rv<16>((U+4))));}
}
B71f747:{NFSU2_TR(0x71f747);
{wv<16>((R+4608),uo::psubsw<16>(rv<16>((R+4608)),rv<16>((R+4864))));}
}
B71f74b:{NFSU2_TR(0x71f74b);
w2(R+4736,u16(u32(r2(R+4736))+u32(r2(R+4672))));
w2(R+4738,u16(u32(r2(R+4738))+u32(r2(R+4674))));
w2(R+4740,u16(u32(r2(R+4740))+u32(r2(R+4676))));
w2(R+4742,u16(u32(r2(R+4742))+u32(r2(R+4678))));
w2(R+4744,u16(u32(r2(R+4744))+u32(r2(R+4680))));
w2(R+4746,u16(u32(r2(R+4746))+u32(r2(R+4682))));
w2(R+4748,u16(u32(r2(R+4748))+u32(r2(R+4684))));
w2(R+4750,u16(u32(r2(R+4750))+u32(r2(R+4686))));
}
B71f74f:{NFSU2_TR(0x71f74f);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
{wv<16>((R+4672),uo::pmulhw<16>(rv<16>((R+4672)),rv<16>((U+4))));}
}
B71f754:{NFSU2_TR(0x71f754);
{wv<16>((R+4864),uo::paddsw<16>(rv<16>((R+4864)),rv<16>((R+4864))));}
}
B71f758:{NFSU2_TR(0x71f758);
{wv<16>((R+4864),uo::paddsw<16>(rv<16>((R+4864)),rv<16>((R+4608))));}
}
B71f75c:{NFSU2_TR(0x71f75c);
{wv<16>((R+4800),uo::psubsw<16>(rv<16>((R+4800)),rv<16>((R+4992))));}
}
B71f760:{NFSU2_TR(0x71f760);
{wv<16>((R+4992),uo::paddsw<16>(rv<16>((R+4992)),rv<16>((R+4992))));}
}
B71f764:{NFSU2_TR(0x71f764);
{wv<16>((R+4992),uo::paddsw<16>(rv<16>((R+4992)),rv<16>((R+4800))));}
}
B71f768:{NFSU2_TR(0x71f768);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4864),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f76d:{NFSU2_TR(0x71f76d);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4864),(U+4),16);
}
B71f772:{NFSU2_TR(0x71f772);
__builtin_memmove((R+4928),(R+4800),16);
}
B71f776:{NFSU2_TR(0x71f776);
{wv<16>((R+4800),uo::pmulhw<16>(rv<16>((R+4800)),rv<16>((R+4864))));}
}
B71f77a:{NFSU2_TR(0x71f77a);
__builtin_memmove((R+5056),(R+4736),16);
}
B71f77e:{NFSU2_TR(0x71f77e);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4992),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f783:{NFSU2_TR(0x71f783);
__builtin_memmove((R+4736),(R+4608),16);
}
B71f787:{NFSU2_TR(0x71f787);
u8 U[16];
__builtin_memmove((U+0),gp(u32(r4(R+8))),16);
__builtin_memmove((R+4992),(U+0),16);
}
B71f78b:{NFSU2_TR(0x71f78b);
{wv<16>((R+4608),uo::pmulhw<16>(rv<16>((R+4608)),rv<16>((R+4864))));}
}
B71f78f:{NFSU2_TR(0x71f78f);
w2(R+4928,u16(u32(r2(R+4928))+u32(r2(R+4800))));
w2(R+4930,u16(u32(r2(R+4930))+u32(r2(R+4802))));
w2(R+4932,u16(u32(r2(R+4932))+u32(r2(R+4804))));
w2(R+4934,u16(u32(r2(R+4934))+u32(r2(R+4806))));
w2(R+4936,u16(u32(r2(R+4936))+u32(r2(R+4808))));
w2(R+4938,u16(u32(r2(R+4938))+u32(r2(R+4810))));
w2(R+4940,u16(u32(r2(R+4940))+u32(r2(R+4812))));
w2(R+4942,u16(u32(r2(R+4942))+u32(r2(R+4814))));
}
B71f793:{NFSU2_TR(0x71f793);
{wv<16>((R+4928),uo::psubsw<16>(rv<16>((R+4928)),rv<16>((R+4672))));}
}
B71f797:{NFSU2_TR(0x71f797);
w2(R+4736,u16(u32(r2(R+4736))+u32(r2(R+4608))));
w2(R+4738,u16(u32(r2(R+4738))+u32(r2(R+4610))));
w2(R+4740,u16(u32(r2(R+4740))+u32(r2(R+4612))));
w2(R+4742,u16(u32(r2(R+4742))+u32(r2(R+4614))));
w2(R+4744,u16(u32(r2(R+4744))+u32(r2(R+4616))));
w2(R+4746,u16(u32(r2(R+4746))+u32(r2(R+4618))));
w2(R+4748,u16(u32(r2(R+4748))+u32(r2(R+4620))));
w2(R+4750,u16(u32(r2(R+4750))+u32(r2(R+4622))));
}
B71f79b:{NFSU2_TR(0x71f79b);
__builtin_memmove((R+4608),(R+4992),16);
}
B71f79f:{NFSU2_TR(0x71f79f);
{wv<16>((R+4992),uo::pmulhw<16>(rv<16>((R+4992)),rv<16>((R+4864))));}
}
B71f7a3:{NFSU2_TR(0x71f7a3);
{wv<16>((R+4672),uo::paddsw<16>(rv<16>((R+4672)),rv<16>((R+4672))));}
}
B71f7a7:{NFSU2_TR(0x71f7a7);
{wv<16>((R+4672),uo::paddsw<16>(rv<16>((R+4672)),rv<16>((R+4928))));}
}
B71f7ab:{NFSU2_TR(0x71f7ab);
w2(R+4992,u16(u32(r2(R+4992))+u32(r2(R+4608))));
w2(R+4994,u16(u32(r2(R+4994))+u32(r2(R+4610))));
w2(R+4996,u16(u32(r2(R+4996))+u32(r2(R+4612))));
w2(R+4998,u16(u32(r2(R+4998))+u32(r2(R+4614))));
w2(R+5000,u16(u32(r2(R+5000))+u32(r2(R+4616))));
w2(R+5002,u16(u32(r2(R+5002))+u32(r2(R+4618))));
w2(R+5004,u16(u32(r2(R+5004))+u32(r2(R+4620))));
w2(R+5006,u16(u32(r2(R+5006))+u32(r2(R+4622))));
}
B71f7af:{NFSU2_TR(0x71f7af);
__builtin_memmove((R+4864),(R+4992),16);
}
B71f7b3:{NFSU2_TR(0x71f7b3);
{wv<16>((R+4992),uo::psubsw<16>(rv<16>((R+4992)),rv<16>((R+4736))));}
}
B71f7b7:{NFSU2_TR(0x71f7b7);
{wv<16>((R+4736),uo::paddsw<16>(rv<16>((R+4736)),rv<16>((R+4736))));}
}
B71f7bb:{NFSU2_TR(0x71f7bb);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4608),(U+4),16);
}
B71f7c0:{NFSU2_TR(0x71f7c0);
{wv<16>((R+4736),uo::paddsw<16>(rv<16>((R+4736)),rv<16>((R+4992))));}
}
B71f7c4:{NFSU2_TR(0x71f7c4);
{wv<16>((R+4736),uo::psubsw<16>(rv<16>((R+4736)),rv<16>((R+4672))));}
}
B71f7c8:{NFSU2_TR(0x71f7c8);
{wv<16>((R+4672),uo::paddsw<16>(rv<16>((R+4672)),rv<16>((R+4672))));}
}
B71f7cc:{NFSU2_TR(0x71f7cc);
{wv<16>((R+4672),uo::paddsw<16>(rv<16>((R+4672)),rv<16>((R+4736))));}
}
B71f7d0:{NFSU2_TR(0x71f7d0);
{wv<16>((R+4864),uo::psubsw<16>(rv<16>((R+4864)),rv<16>((R+5056))));}
}
B71f7d4:{NFSU2_TR(0x71f7d4);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4800),(U+4),16);
}
B71f7d9:{NFSU2_TR(0x71f7d9);
{wv<16>((R+5056),uo::paddsw<16>(rv<16>((R+5056)),rv<16>((R+5056))));}
}
B71f7dd:{NFSU2_TR(0x71f7dd);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4736),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f7e2:{NFSU2_TR(0x71f7e2);
{wv<16>((R+5056),uo::paddsw<16>(rv<16>((R+5056)),rv<16>((R+4864))));}
}
B71f7e6:{NFSU2_TR(0x71f7e6);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4672),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f7eb:{NFSU2_TR(0x71f7eb);
{wv<16>((R+4864),uo::psubsw<16>(rv<16>((R+4864)),rv<16>((R+4800))));}
}
B71f7ef:{NFSU2_TR(0x71f7ef);
{wv<16>((R+4800),uo::paddsw<16>(rv<16>((R+4800)),rv<16>((R+4800))));}
}
B71f7f3:{NFSU2_TR(0x71f7f3);
{wv<16>((R+4800),uo::paddsw<16>(rv<16>((R+4800)),rv<16>((R+4864))));}
}
B71f7f7:{NFSU2_TR(0x71f7f7);
{wv<16>((R+4992),uo::psubsw<16>(rv<16>((R+4992)),rv<16>((R+4928))));}
}
B71f7fb:{NFSU2_TR(0x71f7fb);
{wv<16>((R+4928),uo::paddsw<16>(rv<16>((R+4928)),rv<16>((R+4928))));}
}
B71f7ff:{NFSU2_TR(0x71f7ff);
{wv<16>((R+4928),uo::paddsw<16>(rv<16>((R+4928)),rv<16>((R+4992))));}
}
B71f803:{NFSU2_TR(0x71f803);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4864),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f808:{NFSU2_TR(0x71f808);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4800),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f80d:{NFSU2_TR(0x71f80d);
{wv<16>((R+5056),uo::psubsw<16>(rv<16>((R+5056)),rv<16>((R+4608))));}
}
B71f811:{NFSU2_TR(0x71f811);
{wv<16>((R+4608),uo::paddsw<16>(rv<16>((R+4608)),rv<16>((R+4608))));}
}
B71f815:{NFSU2_TR(0x71f815);
{wv<16>((R+4608),uo::paddsw<16>(rv<16>((R+4608)),rv<16>((R+5056))));}
}
B71f819:{NFSU2_TR(0x71f819);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4992),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f81e:{NFSU2_TR(0x71f81e);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4928),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f823:{NFSU2_TR(0x71f823);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+5056),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f828:{NFSU2_TR(0x71f828);
u8 U[16];
__builtin_memmove((U+0),(R+4608),16);
__builtin_memmove(gp(u32(r4(R+8))),(U+0),16);
}
B71f82c:{NFSU2_TR(0x71f82c);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4864),(U+4),16);
}
B71f831:{NFSU2_TR(0x71f831);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4608),(U+4),16);
}
B71f836:{NFSU2_TR(0x71f836);
__builtin_memmove((R+4928),(R+4864),16);
}
B71f83a:{NFSU2_TR(0x71f83a);
__builtin_memmove((R+4878),(R+4614),2);
__builtin_memmove((R+4876),(R+4870),2);
__builtin_memmove((R+4874),(R+4612),2);
__builtin_memmove((R+4872),(R+4868),2);
__builtin_memmove((R+4870),(R+4610),2);
__builtin_memmove((R+4868),(R+4866),2);
__builtin_memmove((R+4866),(R+4608),2);
}
B71f83e:{NFSU2_TR(0x71f83e);
__builtin_memmove((R+4928),(R+4936),2);
__builtin_memmove((R+4930),(R+4616),2);
__builtin_memmove((R+4932),(R+4938),2);
__builtin_memmove((R+4934),(R+4618),2);
__builtin_memmove((R+4936),(R+4940),2);
__builtin_memmove((R+4938),(R+4620),2);
__builtin_memmove((R+4940),(R+4942),2);
__builtin_memmove((R+4942),(R+4622),2);
}
B71f842:{NFSU2_TR(0x71f842);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4992),(U+4),16);
}
B71f847:{NFSU2_TR(0x71f847);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4608),(U+4),16);
}
B71f84c:{NFSU2_TR(0x71f84c);
__builtin_memmove((R+5056),(R+4992),16);
}
B71f850:{NFSU2_TR(0x71f850);
__builtin_memmove((R+5006),(R+4614),2);
__builtin_memmove((R+5004),(R+4998),2);
__builtin_memmove((R+5002),(R+4612),2);
__builtin_memmove((R+5000),(R+4996),2);
__builtin_memmove((R+4998),(R+4610),2);
__builtin_memmove((R+4996),(R+4994),2);
__builtin_memmove((R+4994),(R+4608),2);
}
B71f854:{NFSU2_TR(0x71f854);
__builtin_memmove((R+5056),(R+5064),2);
__builtin_memmove((R+5058),(R+4616),2);
__builtin_memmove((R+5060),(R+5066),2);
__builtin_memmove((R+5062),(R+4618),2);
__builtin_memmove((R+5064),(R+5068),2);
__builtin_memmove((R+5066),(R+4620),2);
__builtin_memmove((R+5068),(R+5070),2);
__builtin_memmove((R+5070),(R+4622),2);
}
B71f858:{NFSU2_TR(0x71f858);
__builtin_memmove((R+4800),(R+4864),16);
}
B71f85c:{NFSU2_TR(0x71f85c);
__builtin_memmove((R+4876),(R+4996),4);
__builtin_memmove((R+4872),(R+4868),4);
__builtin_memmove((R+4868),(R+4992),4);
}
B71f860:{NFSU2_TR(0x71f860);
__builtin_memmove((R+4800),(R+4808),4);
__builtin_memmove((R+4804),(R+5000),4);
__builtin_memmove((R+4808),(R+4812),4);
__builtin_memmove((R+4812),(R+5004),4);
}
B71f864:{NFSU2_TR(0x71f864);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4800),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f869:{NFSU2_TR(0x71f869);
__builtin_memmove((R+4992),(R+4928),16);
}
B71f86d:{NFSU2_TR(0x71f86d);
__builtin_memmove((R+4940),(R+5060),4);
__builtin_memmove((R+4936),(R+4932),4);
__builtin_memmove((R+4932),(R+5056),4);
}
B71f871:{NFSU2_TR(0x71f871);
__builtin_memmove((R+4992),(R+5000),4);
__builtin_memmove((R+4996),(R+5064),4);
__builtin_memmove((R+5000),(R+5004),4);
__builtin_memmove((R+5004),(R+5068),4);
}
B71f875:{NFSU2_TR(0x71f875);
u8 U[16];
__builtin_memmove((U+0),gp(u32(r4(R+8))),16);
__builtin_memmove((R+4608),(U+0),16);
}
B71f879:{NFSU2_TR(0x71f879);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4672),(U+4),16);
}
B71f87e:{NFSU2_TR(0x71f87e);
__builtin_memmove((R+5056),(R+4608),16);
}
B71f882:{NFSU2_TR(0x71f882);
__builtin_memmove((R+4622),(R+4678),2);
__builtin_memmove((R+4620),(R+4614),2);
__builtin_memmove((R+4618),(R+4676),2);
__builtin_memmove((R+4616),(R+4612),2);
__builtin_memmove((R+4614),(R+4674),2);
__builtin_memmove((R+4612),(R+4610),2);
__builtin_memmove((R+4610),(R+4672),2);
}
B71f886:{NFSU2_TR(0x71f886);
__builtin_memmove((R+5056),(R+5064),2);
__builtin_memmove((R+5058),(R+4680),2);
__builtin_memmove((R+5060),(R+5066),2);
__builtin_memmove((R+5062),(R+4682),2);
__builtin_memmove((R+5064),(R+5068),2);
__builtin_memmove((R+5066),(R+4684),2);
__builtin_memmove((R+5068),(R+5070),2);
__builtin_memmove((R+5070),(R+4686),2);
}
B71f88a:{NFSU2_TR(0x71f88a);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4736),(U+4),16);
}
B71f88f:{NFSU2_TR(0x71f88f);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4800),(U+4),16);
}
B71f894:{NFSU2_TR(0x71f894);
__builtin_memmove((R+4672),(R+4736),16);
}
B71f898:{NFSU2_TR(0x71f898);
__builtin_memmove((R+4750),(R+4806),2);
__builtin_memmove((R+4748),(R+4742),2);
__builtin_memmove((R+4746),(R+4804),2);
__builtin_memmove((R+4744),(R+4740),2);
__builtin_memmove((R+4742),(R+4802),2);
__builtin_memmove((R+4740),(R+4738),2);
__builtin_memmove((R+4738),(R+4800),2);
}
B71f89c:{NFSU2_TR(0x71f89c);
__builtin_memmove((R+4672),(R+4680),2);
__builtin_memmove((R+4674),(R+4808),2);
__builtin_memmove((R+4676),(R+4682),2);
__builtin_memmove((R+4678),(R+4810),2);
__builtin_memmove((R+4680),(R+4684),2);
__builtin_memmove((R+4682),(R+4812),2);
__builtin_memmove((R+4684),(R+4686),2);
__builtin_memmove((R+4686),(R+4814),2);
}
B71f8a0:{NFSU2_TR(0x71f8a0);
__builtin_memmove((R+4800),(R+4608),16);
}
B71f8a4:{NFSU2_TR(0x71f8a4);
__builtin_memmove((R+4620),(R+4740),4);
__builtin_memmove((R+4616),(R+4612),4);
__builtin_memmove((R+4612),(R+4736),4);
}
B71f8a8:{NFSU2_TR(0x71f8a8);
__builtin_memmove((R+4800),(R+4808),4);
__builtin_memmove((R+4804),(R+4744),4);
__builtin_memmove((R+4808),(R+4812),4);
__builtin_memmove((R+4812),(R+4748),4);
}
B71f8ac:{NFSU2_TR(0x71f8ac);
__builtin_memmove((R+4736),(R+5056),16);
}
B71f8b0:{NFSU2_TR(0x71f8b0);
__builtin_memmove((R+4748),(R+4676),4);
__builtin_memmove((R+4744),(R+4740),4);
__builtin_memmove((R+4740),(R+4672),4);
}
B71f8b4:{NFSU2_TR(0x71f8b4);
__builtin_memmove((R+5056),(R+5064),4);
__builtin_memmove((R+5060),(R+4680),4);
__builtin_memmove((R+5064),(R+5068),4);
__builtin_memmove((R+5068),(R+4684),4);
}
B71f8b8:{NFSU2_TR(0x71f8b8);
__builtin_memmove((R+4672),(R+4608),16);
}
B71f8bc:{NFSU2_TR(0x71f8bc);
__builtin_memmove((R+4616),(R+4864),8);
}
B71f8c0:{NFSU2_TR(0x71f8c0);
__builtin_memmove((R+4672),(R+4680),8);
__builtin_memmove((R+4680),(R+4872),8);
}
B71f8c4:{NFSU2_TR(0x71f8c4);
u8 U[16];
__builtin_memmove((U+0),(R+4608),16);
__builtin_memmove(gp(u32(r4(R+8))),(U+0),16);
}
B71f8c8:{NFSU2_TR(0x71f8c8);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4672),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f8cd:{NFSU2_TR(0x71f8cd);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4608),(U+4),16);
}
B71f8d2:{NFSU2_TR(0x71f8d2);
__builtin_memmove((R+4672),(R+4800),16);
}
B71f8d6:{NFSU2_TR(0x71f8d6);
__builtin_memmove((R+4680),(R+4608),8);
}
B71f8da:{NFSU2_TR(0x71f8da);
__builtin_memmove((R+4800),(R+4808),8);
__builtin_memmove((R+4808),(R+4616),8);
}
B71f8de:{NFSU2_TR(0x71f8de);
__builtin_memmove((R+4864),(R+4736),16);
}
B71f8e2:{NFSU2_TR(0x71f8e2);
__builtin_memmove((R+4872),(R+4928),8);
}
B71f8e6:{NFSU2_TR(0x71f8e6);
__builtin_memmove((R+4736),(R+4744),8);
__builtin_memmove((R+4744),(R+4936),8);
}
B71f8ea:{NFSU2_TR(0x71f8ea);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4672),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f8ef:{NFSU2_TR(0x71f8ef);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4800),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f8f4:{NFSU2_TR(0x71f8f4);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4864),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f8f9:{NFSU2_TR(0x71f8f9);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4736),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f8fe:{NFSU2_TR(0x71f8fe);
__builtin_memmove((R+4928),(R+5056),16);
}
B71f902:{NFSU2_TR(0x71f902);
__builtin_memmove((R+4936),(R+4992),8);
}
B71f906:{NFSU2_TR(0x71f906);
__builtin_memmove((R+5056),(R+5064),8);
__builtin_memmove((R+5064),(R+5000),8);
}
B71f90a:{NFSU2_TR(0x71f90a);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4928),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f90f:{NFSU2_TR(0x71f90f);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+5056),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f914:{NFSU2_TR(0x71f914);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4736),(U+4),16);
}
B71f919:{NFSU2_TR(0x71f919);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4992),(U+4),16);
}
B71f91e:{NFSU2_TR(0x71f91e);
__builtin_memmove((R+4864),(R+4736),16);
}
B71f922:{NFSU2_TR(0x71f922);
{wv<16>((R+4864),uo::pmulhw<16>(rv<16>((R+4864)),rv<16>((R+4992))));}
}
B71f926:{NFSU2_TR(0x71f926);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4672),(U+4),16);
}
B71f92b:{NFSU2_TR(0x71f92b);
__builtin_memmove((R+4928),(R+4672),16);
}
B71f92f:{NFSU2_TR(0x71f92f);
{wv<16>((R+4672),uo::pmulhw<16>(rv<16>((R+4672)),rv<16>((R+4736))));}
}
B71f933:{NFSU2_TR(0x71f933);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4800),(U+4),16);
}
B71f938:{NFSU2_TR(0x71f938);
u8 U[16];
__builtin_memmove((U+0),gp(u32(r4(R+4))),16);
__builtin_memmove((R+4608),(U+0),16);
}
B71f93c:{NFSU2_TR(0x71f93c);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4736))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4738))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4740))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4742))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4744))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4746))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4748))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4750))));
}
B71f940:{NFSU2_TR(0x71f940);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+5056),(U+4),16);
}
B71f945:{NFSU2_TR(0x71f945);
w2(R+4736,u16(u32(r2(R+4736))+u32(r2(R+4672))));
w2(R+4738,u16(u32(r2(R+4738))+u32(r2(R+4674))));
w2(R+4740,u16(u32(r2(R+4740))+u32(r2(R+4676))));
w2(R+4742,u16(u32(r2(R+4742))+u32(r2(R+4678))));
w2(R+4744,u16(u32(r2(R+4744))+u32(r2(R+4680))));
w2(R+4746,u16(u32(r2(R+4746))+u32(r2(R+4682))));
w2(R+4748,u16(u32(r2(R+4748))+u32(r2(R+4684))));
w2(R+4750,u16(u32(r2(R+4750))+u32(r2(R+4686))));
}
B71f949:{NFSU2_TR(0x71f949);
__builtin_memmove((R+4928),(R+4608),16);
}
B71f94d:{NFSU2_TR(0x71f94d);
{wv<16>((R+4608),uo::pmulhw<16>(rv<16>((R+4608)),rv<16>((R+4800))));}
}
B71f951:{NFSU2_TR(0x71f951);
wv<16>((R+4992),eval<Op::INT_XOR,16,16,16>(rv<16>((R+4992)),rv<16>((R+4992))));
}
B71f955:{NFSU2_TR(0x71f955);
{wv<16>((R+4992),uo::psubsw<16>(rv<16>((R+4992)),rv<16>((R+4736))));}
}
B71f959:{NFSU2_TR(0x71f959);
w2(R+4608,u16(u32(r2(R+4608))+u32(r2(R+4800))));
w2(R+4610,u16(u32(r2(R+4610))+u32(r2(R+4802))));
w2(R+4612,u16(u32(r2(R+4612))+u32(r2(R+4804))));
w2(R+4614,u16(u32(r2(R+4614))+u32(r2(R+4806))));
w2(R+4616,u16(u32(r2(R+4616))+u32(r2(R+4808))));
w2(R+4618,u16(u32(r2(R+4618))+u32(r2(R+4810))));
w2(R+4620,u16(u32(r2(R+4620))+u32(r2(R+4812))));
w2(R+4622,u16(u32(r2(R+4622))+u32(r2(R+4814))));
}
B71f95d:{NFSU2_TR(0x71f95d);
{wv<16>((R+4800),uo::pmulhw<16>(rv<16>((R+4800)),rv<16>((R+5056))));}
}
B71f961:{NFSU2_TR(0x71f961);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4736),(U+4),16);
}
B71f966:{NFSU2_TR(0x71f966);
__builtin_memmove((R+4672),(R+4736),16);
}
B71f96a:{NFSU2_TR(0x71f96a);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
{wv<16>((R+4736),uo::pmulhw<16>(rv<16>((R+4736)),rv<16>((U+4))));}
}
B71f96f:{NFSU2_TR(0x71f96f);
{wv<16>((R+4608),uo::psubsw<16>(rv<16>((R+4608)),rv<16>((R+4864))));}
}
B71f973:{NFSU2_TR(0x71f973);
w2(R+4736,u16(u32(r2(R+4736))+u32(r2(R+4672))));
w2(R+4738,u16(u32(r2(R+4738))+u32(r2(R+4674))));
w2(R+4740,u16(u32(r2(R+4740))+u32(r2(R+4676))));
w2(R+4742,u16(u32(r2(R+4742))+u32(r2(R+4678))));
w2(R+4744,u16(u32(r2(R+4744))+u32(r2(R+4680))));
w2(R+4746,u16(u32(r2(R+4746))+u32(r2(R+4682))));
w2(R+4748,u16(u32(r2(R+4748))+u32(r2(R+4684))));
w2(R+4750,u16(u32(r2(R+4750))+u32(r2(R+4686))));
}
B71f977:{NFSU2_TR(0x71f977);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
{wv<16>((R+4672),uo::pmulhw<16>(rv<16>((R+4672)),rv<16>((U+4))));}
}
B71f97c:{NFSU2_TR(0x71f97c);
{wv<16>((R+4864),uo::paddsw<16>(rv<16>((R+4864)),rv<16>((R+4864))));}
}
B71f980:{NFSU2_TR(0x71f980);
{wv<16>((R+4864),uo::paddsw<16>(rv<16>((R+4864)),rv<16>((R+4608))));}
}
B71f984:{NFSU2_TR(0x71f984);
{wv<16>((R+4800),uo::psubsw<16>(rv<16>((R+4800)),rv<16>((R+4992))));}
}
B71f988:{NFSU2_TR(0x71f988);
{wv<16>((R+4992),uo::paddsw<16>(rv<16>((R+4992)),rv<16>((R+4992))));}
}
B71f98c:{NFSU2_TR(0x71f98c);
{wv<16>((R+4992),uo::paddsw<16>(rv<16>((R+4992)),rv<16>((R+4800))));}
}
B71f990:{NFSU2_TR(0x71f990);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4864),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f995:{NFSU2_TR(0x71f995);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4864),(U+4),16);
}
B71f99a:{NFSU2_TR(0x71f99a);
__builtin_memmove((R+4928),(R+4800),16);
}
B71f99e:{NFSU2_TR(0x71f99e);
{wv<16>((R+4800),uo::pmulhw<16>(rv<16>((R+4800)),rv<16>((R+4864))));}
}
B71f9a2:{NFSU2_TR(0x71f9a2);
__builtin_memmove((R+5056),(R+4736),16);
}
B71f9a6:{NFSU2_TR(0x71f9a6);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4992),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f9ab:{NFSU2_TR(0x71f9ab);
__builtin_memmove((R+4736),(R+4608),16);
}
B71f9af:{NFSU2_TR(0x71f9af);
u8 U[16];
__builtin_memmove((U+0),gp(u32(r4(R+8))),16);
__builtin_memmove((R+4992),(U+0),16);
}
B71f9b3:{NFSU2_TR(0x71f9b3);
{wv<16>((R+4608),uo::pmulhw<16>(rv<16>((R+4608)),rv<16>((R+4864))));}
}
B71f9b7:{NFSU2_TR(0x71f9b7);
w2(R+4928,u16(u32(r2(R+4928))+u32(r2(R+4800))));
w2(R+4930,u16(u32(r2(R+4930))+u32(r2(R+4802))));
w2(R+4932,u16(u32(r2(R+4932))+u32(r2(R+4804))));
w2(R+4934,u16(u32(r2(R+4934))+u32(r2(R+4806))));
w2(R+4936,u16(u32(r2(R+4936))+u32(r2(R+4808))));
w2(R+4938,u16(u32(r2(R+4938))+u32(r2(R+4810))));
w2(R+4940,u16(u32(r2(R+4940))+u32(r2(R+4812))));
w2(R+4942,u16(u32(r2(R+4942))+u32(r2(R+4814))));
}
B71f9bb:{NFSU2_TR(0x71f9bb);
{wv<16>((R+4928),uo::psubsw<16>(rv<16>((R+4928)),rv<16>((R+4672))));}
}
B71f9bf:{NFSU2_TR(0x71f9bf);
w2(R+4736,u16(u32(r2(R+4736))+u32(r2(R+4608))));
w2(R+4738,u16(u32(r2(R+4738))+u32(r2(R+4610))));
w2(R+4740,u16(u32(r2(R+4740))+u32(r2(R+4612))));
w2(R+4742,u16(u32(r2(R+4742))+u32(r2(R+4614))));
w2(R+4744,u16(u32(r2(R+4744))+u32(r2(R+4616))));
w2(R+4746,u16(u32(r2(R+4746))+u32(r2(R+4618))));
w2(R+4748,u16(u32(r2(R+4748))+u32(r2(R+4620))));
w2(R+4750,u16(u32(r2(R+4750))+u32(r2(R+4622))));
}
B71f9c3:{NFSU2_TR(0x71f9c3);
__builtin_memmove((R+4608),(R+4992),16);
}
B71f9c7:{NFSU2_TR(0x71f9c7);
{wv<16>((R+4992),uo::pmulhw<16>(rv<16>((R+4992)),rv<16>((R+4864))));}
}
B71f9cb:{NFSU2_TR(0x71f9cb);
{wv<16>((R+4672),uo::paddsw<16>(rv<16>((R+4672)),rv<16>((R+4672))));}
}
B71f9cf:{NFSU2_TR(0x71f9cf);
{wv<16>((R+4672),uo::paddsw<16>(rv<16>((R+4672)),rv<16>((R+4928))));}
}
B71f9d3:{NFSU2_TR(0x71f9d3);
w2(R+4992,u16(u32(r2(R+4992))+u32(r2(R+4608))));
w2(R+4994,u16(u32(r2(R+4994))+u32(r2(R+4610))));
w2(R+4996,u16(u32(r2(R+4996))+u32(r2(R+4612))));
w2(R+4998,u16(u32(r2(R+4998))+u32(r2(R+4614))));
w2(R+5000,u16(u32(r2(R+5000))+u32(r2(R+4616))));
w2(R+5002,u16(u32(r2(R+5002))+u32(r2(R+4618))));
w2(R+5004,u16(u32(r2(R+5004))+u32(r2(R+4620))));
w2(R+5006,u16(u32(r2(R+5006))+u32(r2(R+4622))));
}
B71f9d7:{NFSU2_TR(0x71f9d7);
__builtin_memmove((R+4864),(R+4992),16);
}
B71f9db:{NFSU2_TR(0x71f9db);
{wv<16>((R+4992),uo::psubsw<16>(rv<16>((R+4992)),rv<16>((R+4736))));}
}
B71f9df:{NFSU2_TR(0x71f9df);
{wv<16>((R+4736),uo::paddsw<16>(rv<16>((R+4736)),rv<16>((R+4736))));}
}
B71f9e3:{NFSU2_TR(0x71f9e3);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4608),(U+4),16);
}
B71f9e8:{NFSU2_TR(0x71f9e8);
{wv<16>((R+4736),uo::paddsw<16>(rv<16>((R+4736)),rv<16>((R+4992))));}
}
B71f9ec:{NFSU2_TR(0x71f9ec);
{wv<16>((R+4736),uo::psubsw<16>(rv<16>((R+4736)),rv<16>((R+4672))));}
}
B71f9f0:{NFSU2_TR(0x71f9f0);
{wv<16>((R+4736),uo::paddsw<16>(rv<16>((R+4736)),rv<16>(gp(0x817e20))));}
}
B71f9f8:{NFSU2_TR(0x71f9f8);
{wv<16>((R+4672),uo::paddsw<16>(rv<16>((R+4672)),rv<16>((R+4672))));}
}
B71f9fc:{NFSU2_TR(0x71f9fc);
{wv<16>((R+4672),uo::paddsw<16>(rv<16>((R+4672)),rv<16>((R+4736))));}
}
B71fa00:{NFSU2_TR(0x71fa00);
{wv<16>((R+4736),uo::psraw<16>(rv<16>((R+4736)),V(0x4ull)));}
}
B71fa05:{NFSU2_TR(0x71fa05);
{wv<16>((R+4864),uo::psubsw<16>(rv<16>((R+4864)),rv<16>((R+5056))));}
}
B71fa09:{NFSU2_TR(0x71fa09);
{wv<16>((R+4672),uo::psraw<16>(rv<16>((R+4672)),V(0x4ull)));}
}
B71fa0e:{NFSU2_TR(0x71fa0e);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4800),(U+4),16);
}
B71fa13:{NFSU2_TR(0x71fa13);
{wv<16>((R+5056),uo::paddsw<16>(rv<16>((R+5056)),rv<16>((R+5056))));}
}
B71fa17:{NFSU2_TR(0x71fa17);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4736),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71fa1c:{NFSU2_TR(0x71fa1c);
{wv<16>((R+5056),uo::paddsw<16>(rv<16>((R+5056)),rv<16>((R+4864))));}
}
B71fa20:{NFSU2_TR(0x71fa20);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4672),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71fa25:{NFSU2_TR(0x71fa25);
{wv<16>((R+4864),uo::psubsw<16>(rv<16>((R+4864)),rv<16>((R+4800))));}
}
B71fa29:{NFSU2_TR(0x71fa29);
{wv<16>((R+4864),uo::paddsw<16>(rv<16>((R+4864)),rv<16>(gp(0x817e20))));}
}
B71fa31:{NFSU2_TR(0x71fa31);
{wv<16>((R+4800),uo::paddsw<16>(rv<16>((R+4800)),rv<16>((R+4800))));}
}
B71fa35:{NFSU2_TR(0x71fa35);
{wv<16>((R+4800),uo::paddsw<16>(rv<16>((R+4800)),rv<16>((R+4864))));}
}
B71fa39:{NFSU2_TR(0x71fa39);
{wv<16>((R+4864),uo::psraw<16>(rv<16>((R+4864)),V(0x4ull)));}
}
B71fa3e:{NFSU2_TR(0x71fa3e);
{wv<16>((R+4992),uo::psubsw<16>(rv<16>((R+4992)),rv<16>((R+4928))));}
}
B71fa42:{NFSU2_TR(0x71fa42);
{wv<16>((R+4800),uo::psraw<16>(rv<16>((R+4800)),V(0x4ull)));}
}
B71fa47:{NFSU2_TR(0x71fa47);
{wv<16>((R+4992),uo::paddsw<16>(rv<16>((R+4992)),rv<16>(gp(0x817e20))));}
}
B71fa4f:{NFSU2_TR(0x71fa4f);
{wv<16>((R+4928),uo::paddsw<16>(rv<16>((R+4928)),rv<16>((R+4928))));}
}
B71fa53:{NFSU2_TR(0x71fa53);
{wv<16>((R+4928),uo::paddsw<16>(rv<16>((R+4928)),rv<16>((R+4992))));}
}
B71fa57:{NFSU2_TR(0x71fa57);
{wv<16>((R+4992),uo::psraw<16>(rv<16>((R+4992)),V(0x4ull)));}
}
B71fa5c:{NFSU2_TR(0x71fa5c);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4864),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71fa61:{NFSU2_TR(0x71fa61);
{wv<16>((R+4928),uo::psraw<16>(rv<16>((R+4928)),V(0x4ull)));}
}
B71fa66:{NFSU2_TR(0x71fa66);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4800),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71fa6b:{NFSU2_TR(0x71fa6b);
{wv<16>((R+5056),uo::psubsw<16>(rv<16>((R+5056)),rv<16>((R+4608))));}
}
B71fa6f:{NFSU2_TR(0x71fa6f);
{wv<16>((R+5056),uo::paddsw<16>(rv<16>((R+5056)),rv<16>(gp(0x817e20))));}
}
B71fa77:{NFSU2_TR(0x71fa77);
{wv<16>((R+4608),uo::paddsw<16>(rv<16>((R+4608)),rv<16>((R+4608))));}
}
B71fa7b:{NFSU2_TR(0x71fa7b);
{wv<16>((R+4608),uo::paddsw<16>(rv<16>((R+4608)),rv<16>((R+5056))));}
}
B71fa7f:{NFSU2_TR(0x71fa7f);
{wv<16>((R+5056),uo::psraw<16>(rv<16>((R+5056)),V(0x4ull)));}
}
B71fa84:{NFSU2_TR(0x71fa84);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4992),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71fa89:{NFSU2_TR(0x71fa89);
{wv<16>((R+4608),uo::psraw<16>(rv<16>((R+4608)),V(0x4ull)));}
}
B71fa8e:{NFSU2_TR(0x71fa8e);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4928),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71fa93:{NFSU2_TR(0x71fa93);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+5056),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71fa98:{NFSU2_TR(0x71fa98);
u8 U[16];
__builtin_memmove((U+0),(R+4608),16);
__builtin_memmove(gp(u32(r4(R+8))),(U+0),16);
}
B71fa9c:{NFSU2_TR(0x71fa9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B71fa9d:{NFSU2_TR(0x71fa9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B71fa9e:{NFSU2_TR(0x71fa9e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B71fa9f:{NFSU2_TR(0x71fa9f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B71faa0:L71faa0:{c.instructions+=26;NFSU2_TR(0x71faa0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71faa1:{NFSU2_TR(0x71faa1);
__builtin_memmove((R+20),(R+16),4);
}
B71faa3:{NFSU2_TR(0x71faa3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71faa6:{NFSU2_TR(0x71faa6);
w4(R+8,u32(0xfull));
}
B71faab:{NFSU2_TR(0x71faab);
wv<16>((R+4736),eval<Op::INT_ZEXT,16,4>(rv<4>((R+8))));
}
B71faaf:{NFSU2_TR(0x71faaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B71fab2:{NFSU2_TR(0x71fab2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B71fab5:{NFSU2_TR(0x71fab5);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
wv<16>((R+4608),eval<Op::INT_ZEXT,16,8>(rv<8>((U+0))));
}
B71fab9:{NFSU2_TR(0x71fab9);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+4))),8);
wv<16>((R+4672),eval<Op::INT_ZEXT,16,8>(rv<8>((U+0))));
}
B71fabd:{NFSU2_TR(0x71fabd);
w2(R+4608,u16(u32(r2(R+4608))*u32(r2(R+4672))));
w2(R+4610,u16(u32(r2(R+4610))*u32(r2(R+4674))));
w2(R+4612,u16(u32(r2(R+4612))*u32(r2(R+4676))));
w2(R+4614,u16(u32(r2(R+4614))*u32(r2(R+4678))));
w2(R+4616,u16(u32(r2(R+4616))*u32(r2(R+4680))));
w2(R+4618,u16(u32(r2(R+4618))*u32(r2(R+4682))));
w2(R+4620,u16(u32(r2(R+4620))*u32(r2(R+4684))));
w2(R+4622,u16(u32(r2(R+4622))*u32(r2(R+4686))));
}
B71fac1:{NFSU2_TR(0x71fac1);
w2(R+4608,u16(u32(r2(R+4608))+u32(r2(R+4736))));
w2(R+4610,u16(u32(r2(R+4610))+u32(r2(R+4738))));
w2(R+4612,u16(u32(r2(R+4612))+u32(r2(R+4740))));
w2(R+4614,u16(u32(r2(R+4614))+u32(r2(R+4742))));
w2(R+4616,u16(u32(r2(R+4616))+u32(r2(R+4744))));
w2(R+4618,u16(u32(r2(R+4618))+u32(r2(R+4746))));
w2(R+4620,u16(u32(r2(R+4620))+u32(r2(R+4748))));
w2(R+4622,u16(u32(r2(R+4622))+u32(r2(R+4750))));
}
B71fac5:{NFSU2_TR(0x71fac5);
{wv<16>((R+4608),uo::psraw<16>(rv<16>((R+4608)),V(0x5ull)));}
}
B71faca:{NFSU2_TR(0x71faca);
__builtin_memmove((R+4622),(R+4614),2);
__builtin_memmove((R+4620),(R+4614),2);
__builtin_memmove((R+4618),(R+4612),2);
__builtin_memmove((R+4616),(R+4612),2);
__builtin_memmove((R+4614),(R+4610),2);
__builtin_memmove((R+4612),(R+4610),2);
__builtin_memmove((R+4610),(R+4608),2);
}
B71face:{NFSU2_TR(0x71face);
__builtin_memmove((R+4620),(R+4612),4);
__builtin_memmove((R+4616),(R+4612),4);
__builtin_memmove((R+4612),(R+4608),4);
}
B71fad2:{NFSU2_TR(0x71fad2);
__builtin_memmove((R+4616),(R+4608),8);
}
B71fad6:{NFSU2_TR(0x71fad6);
__builtin_memmove((R+4672),(R+4608),16);
}
B71fada:{NFSU2_TR(0x71fada);
u8 U[16];
__builtin_memmove((U+0),(R+4608),16);
__builtin_memmove(gp(u32(r4(R+8))),(U+0),16);
}
B71fade:{NFSU2_TR(0x71fade);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4672),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71fae3:{NFSU2_TR(0x71fae3);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4608),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71fae8:{NFSU2_TR(0x71fae8);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4672),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71faed:{NFSU2_TR(0x71faed);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4608),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71faf2:{NFSU2_TR(0x71faf2);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4672),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71faf7:{NFSU2_TR(0x71faf7);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4608),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71fafc:{NFSU2_TR(0x71fafc);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+4672),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71fb01:{NFSU2_TR(0x71fb01);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B71fb02:{NFSU2_TR(0x71fb02);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B71fb03:L71fb03:{c.instructions+=13;NFSU2_TR(0x71fb03);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71fb04:{NFSU2_TR(0x71fb04);
__builtin_memmove((R+20),(R+16),4);
}
B71fb06:{NFSU2_TR(0x71fb06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B71fb09:{NFSU2_TR(0x71fb09);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71fb0c:{NFSU2_TR(0x71fb0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B71fb10:{NFSU2_TR(0x71fb10);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B71fb14:{NFSU2_TR(0x71fb14);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B71fb17:{NFSU2_TR(0x71fb17);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71fb18:{NFSU2_TR(0x71fb18);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+0))));
}
B71fb1a:{NFSU2_TR(0x71fb1a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71fb1b:{NFSU2_TR(0x71fb1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71fb1e:{NFSU2_TR(0x71fb1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B71fb25:{NFSU2_TR(0x71fb25);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71fb26:L71fb26:{c.instructions+=25;NFSU2_TR(0x71fb26);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B71fb2a:{NFSU2_TR(0x71fb2a);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w4(R+24,u32(r1(U+0)));
}
B71fb2d:{NFSU2_TR(0x71fb2d);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B71fb31:{NFSU2_TR(0x71fb31);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B71fb35:{NFSU2_TR(0x71fb35);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B71fb38:{NFSU2_TR(0x71fb38);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B71fb3a:{NFSU2_TR(0x71fb3a);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+28))));
}
B71fb3c:{NFSU2_TR(0x71fb3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+12))));
s4(u32(r4(U+0)),r4(U+4));
}
B71fb3f:{NFSU2_TR(0x71fb3f);
__builtin_memmove((R+0),(R+8),4);
}
B71fb41:{NFSU2_TR(0x71fb41);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B71fb44:{NFSU2_TR(0x71fb44);
__builtin_memmove((R+12),(R+24),4);
}
B71fb46:{NFSU2_TR(0x71fb46);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B71fb49:{NFSU2_TR(0x71fb49);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B71fb4b:{NFSU2_TR(0x71fb4b);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B71fb4f:{NFSU2_TR(0x71fb4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B71fb52:{NFSU2_TR(0x71fb52);
__builtin_memmove((R+8),(R+0),4);
}
B71fb54:{NFSU2_TR(0x71fb54);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B71fb57:{NFSU2_TR(0x71fb57);
__builtin_memmove((R+0),(R+28),4);
}
B71fb59:{NFSU2_TR(0x71fb59);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B71fb5c:{NFSU2_TR(0x71fb5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B71fb5f:{NFSU2_TR(0x71fb5f);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+8))));
}
B71fb61:{NFSU2_TR(0x71fb61);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B71fb63:{NFSU2_TR(0x71fb63);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B71fb66:{NFSU2_TR(0x71fb66);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71fb69:{NFSU2_TR(0x71fb69);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71fb26u);}goto L71fb26;}}
}
B71fb6b:L71fb6b:{c.instructions+=10;NFSU2_TR(0x71fb6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B71fb6e:{NFSU2_TR(0x71fb6e);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B71fb71:{NFSU2_TR(0x71fb71);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B71fb74:{NFSU2_TR(0x71fb74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B71fb75:{NFSU2_TR(0x71fb75);
u8 U[6];
w1(R+512,u8((r4(R+0))<(r4(R+4))));
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B71fb77:{NFSU2_TR(0x71fb77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B71fb78:{NFSU2_TR(0x71fb78);
u8 U[48];
w4(U+40,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
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
B71fb7b:{NFSU2_TR(0x71fb7b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B71fb7c:{NFSU2_TR(0x71fb7c);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B71fb7d:{NFSU2_TR(0x71fb7d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B71fb7e:L71fb7e:{c.instructions+=10;NFSU2_TR(0x71fb7e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71fb7f:{NFSU2_TR(0x71fb7f);
__builtin_memmove((R+20),(R+16),4);
}
B71fb81:{NFSU2_TR(0x71fb81);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B71fb84:{NFSU2_TR(0x71fb84);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71fb85:{NFSU2_TR(0x71fb85);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71fb86:{NFSU2_TR(0x71fb86);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B71fb88:{NFSU2_TR(0x71fb88);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71fb89:{NFSU2_TR(0x71fb89);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4538ull))));
w4(U+4,u32(0x40ull));
s4(u32(r4(U+0)),r4(U+4));
}
B71fb93:{NFSU2_TR(0x71fb93);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71fb96:{NFSU2_TR(0x71fb96);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4938ull))));
__builtin_memmove((R+28),(U+0),4);
}
B71fb9c:L71fb9c:{c.instructions+=12;NFSU2_TR(0x71fb9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4538ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71fba2:{NFSU2_TR(0x71fba2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B71fba5:{NFSU2_TR(0x71fba5);
w4(R+0,shl<u32>(r4(R+0),u64(u32(0x1ull))));
}
B71fba7:{NFSU2_TR(0x71fba7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B71fbaa:{NFSU2_TR(0x71fbaa);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B71fbac:{NFSU2_TR(0x71fbac);
u8 U[56];
w8(U+0,u64(r4(R+24)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x71fbac);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x71fbac);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B71fbae:{NFSU2_TR(0x71fbae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x5ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B71fbb2:{NFSU2_TR(0x71fbb2);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B71fbb3:{NFSU2_TR(0x71fbb3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B71fbb5:{NFSU2_TR(0x71fbb5);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x4ull))));
}
B71fbb8:{NFSU2_TR(0x71fbb8);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4538ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B71fbbe:{NFSU2_TR(0x71fbbe);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71fb9cu);}goto L71fb9c;}}
}
B71fbc0:L71fbc0:{c.instructions+=4;NFSU2_TR(0x71fbc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4538ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B71fbc6:{NFSU2_TR(0x71fbc6);
w4(R+0,u32(0xffull));
}
B71fbcb:{NFSU2_TR(0x71fbcb);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(R+8))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+8),r4(U+6)));
w4(U+10,u32(u32(r4(R+8))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B71fbcd:{NFSU2_TR(0x71fbcd);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L71fbe7;}}
}
B71fbcf:L71fbcf:{c.instructions+=4;NFSU2_TR(0x71fbcf);
w4(R+24,u32(0x124eull));
}
B71fbd4:{NFSU2_TR(0x71fbd4);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+8))));
}
B71fbd6:{NFSU2_TR(0x71fbd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B71fbd9:{NFSU2_TR(0x71fbd9);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B71fbdb:L71fbdb:{c.instructions+=4;NFSU2_TR(0x71fbdb);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+4)),r4(U+0));
}
B71fbe1:{NFSU2_TR(0x71fbe1);
w1(R+512,u8((r4(R+4))<(u32(0x4ull))));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x4ull))));
}
B71fbe4:{NFSU2_TR(0x71fbe4);
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
B71fbe5:{NFSU2_TR(0x71fbe5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71fbdbu);}goto L71fbdb;}}
}
B71fbe7:L71fbe7:{c.instructions+=5;NFSU2_TR(0x71fbe7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B71fbe8:{NFSU2_TR(0x71fbe8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B71fbe9:{NFSU2_TR(0x71fbe9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B71fbea:{NFSU2_TR(0x71fbea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B71fbeb:{NFSU2_TR(0x71fbeb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B71fbec:L71fbec:{c.instructions+=12;NFSU2_TR(0x71fbec);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71fbed:{NFSU2_TR(0x71fbed);
__builtin_memmove((R+20),(R+16),4);
}
B71fbef:{NFSU2_TR(0x71fbef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B71fbf2:{NFSU2_TR(0x71fbf2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B71fbf5:{NFSU2_TR(0x71fbf5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71fbf6:{NFSU2_TR(0x71fbf6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71fbf7:{NFSU2_TR(0x71fbf7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71fbf8:{NFSU2_TR(0x71fbf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B71fbfb:{NFSU2_TR(0x71fbfb);
w1(R+8,u8(u32(r1(R+8))|u32(u8(0xffull))));
}
B71fbfe:{NFSU2_TR(0x71fbfe);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B71fc00:{NFSU2_TR(0x71fc00);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B71fc02:{NFSU2_TR(0x71fc02);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L71fc2d;}}
}
B71fc04:L71fc04:{c.instructions+=1;NFSU2_TR(0x71fc04);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71fc07:L71fc07:{c.instructions+=3;NFSU2_TR(0x71fc07);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71fc0a:{NFSU2_TR(0x71fc0a);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B71fc0c:{NFSU2_TR(0x71fc0c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L71fc20;}}
}
B71fc0e:L71fc0e:{c.instructions+=3;NFSU2_TR(0x71fc0e);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+0),(U+0),1);
}
B71fc10:{NFSU2_TR(0x71fc10);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
w1(R+512,u8((r1(R+0))<(r1(U+0))));
}
B71fc12:{NFSU2_TR(0x71fc12);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L71fc16;}}
}
B71fc14:L71fc14:{c.instructions+=1;NFSU2_TR(0x71fc14);
__builtin_memmove((R+8),(R+0),1);
}
B71fc16:L71fc16:{c.instructions+=2;NFSU2_TR(0x71fc16);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(R+512,u8((r1(R+0))<(r1(U+0))));
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B71fc18:{NFSU2_TR(0x71fc18);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L71fc1c;}}
}
B71fc1a:L71fc1a:{c.instructions+=1;NFSU2_TR(0x71fc1a);
__builtin_memmove((R+12),(R+0),1);
}
B71fc1c:L71fc1c:{c.instructions+=3;NFSU2_TR(0x71fc1c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B71fc1d:{NFSU2_TR(0x71fc1d);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B71fc1e:{NFSU2_TR(0x71fc1e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71fc0eu);}goto L71fc0e;}}
}
B71fc20:L71fc20:{c.instructions+=5;NFSU2_TR(0x71fc20);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71fc23:{NFSU2_TR(0x71fc23);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B71fc26:{NFSU2_TR(0x71fc26);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B71fc28:{NFSU2_TR(0x71fc28);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B71fc2b:{NFSU2_TR(0x71fc2b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71fc07u);}goto L71fc07;}}
}
B71fc2d:L71fc2d:{c.instructions+=10;NFSU2_TR(0x71fc2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B71fc30:{NFSU2_TR(0x71fc30);
w4(R+8,u32(r1(R+8)));
}
B71fc33:{NFSU2_TR(0x71fc33);
w4(R+24,u32(0x124eull));
}
B71fc38:{NFSU2_TR(0x71fc38);
w4(R+0,u32(r1(R+12)));
}
B71fc3b:{NFSU2_TR(0x71fc3b);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+8))));
}
B71fc3d:{NFSU2_TR(0x71fc3d);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B71fc40:{NFSU2_TR(0x71fc40);
u8 U[16];
w4(U+0,u32(u32(u32(0x453cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B71fc47:{NFSU2_TR(0x71fc47);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B71fc49:{NFSU2_TR(0x71fc49);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71fc4c:{NFSU2_TR(0x71fc4c);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L71fc51;}}
}
B71fc4e:L71fc4e:{c.instructions+=1;NFSU2_TR(0x71fc4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71fc51:L71fc51:{c.instructions+=7;NFSU2_TR(0x71fc51);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71fc54:{NFSU2_TR(0x71fc54);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B71fc56:{NFSU2_TR(0x71fc56);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B71fc59:{NFSU2_TR(0x71fc59);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B71fc5c:{NFSU2_TR(0x71fc5c);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B71fc5e:{NFSU2_TR(0x71fc5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71fc61:{NFSU2_TR(0x71fc61);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L71fd0c;}}
}
B71fc67:L71fc67:{c.instructions+=7;NFSU2_TR(0x71fc67);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B71fc6a:{NFSU2_TR(0x71fc6a);
w4(R+8,u32(0-u32(r4(R+8))));
}
B71fc6c:{NFSU2_TR(0x71fc6c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+0),(U+0),4);
}
B71fc6f:{NFSU2_TR(0x71fc6f);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B71fc71:{NFSU2_TR(0x71fc71);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71fc74:{NFSU2_TR(0x71fc74);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71fc77:{NFSU2_TR(0x71fc77);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71fc7a:L71fc7a:{c.instructions+=3;NFSU2_TR(0x71fc7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B71fc7d:{NFSU2_TR(0x71fc7d);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B71fc7f:{NFSU2_TR(0x71fc7f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L71fcde;}}
}
B71fc81:L71fc81:{c.instructions+=1;NFSU2_TR(0x71fc81);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71fc84:L71fc84:{c.instructions+=18;NFSU2_TR(0x71fc84);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+0,u32(r1(U+0)));
}
B71fc87:{NFSU2_TR(0x71fc87);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((R+28),(U+0),4);
}
B71fc8a:{NFSU2_TR(0x71fc8a);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+4,u32(r1(U+0)));
}
B71fc8d:{NFSU2_TR(0x71fc8d);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B71fc8f:{NFSU2_TR(0x71fc8f);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+4,u32(r1(U+0)));
}
B71fc92:{NFSU2_TR(0x71fc92);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B71fc93:{NFSU2_TR(0x71fc93);
__builtin_memmove((R+12),(R+0),4);
}
B71fc95:{NFSU2_TR(0x71fc95);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+0,u32(r1(U+0)));
}
B71fc98:{NFSU2_TR(0x71fc98);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+8))));
}
B71fc9a:{NFSU2_TR(0x71fc9a);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+8))));
}
B71fc9c:{NFSU2_TR(0x71fc9c);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B71fca0:{NFSU2_TR(0x71fca0);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B71fca2:{NFSU2_TR(0x71fca2);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B71fca3:{NFSU2_TR(0x71fca3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+8))));
}
B71fca5:{NFSU2_TR(0x71fca5);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B71fca7:{NFSU2_TR(0x71fca7);
w4(R+4,shl<u32>(r4(R+4),u64(u32(0x1ull))));
}
B71fca9:{NFSU2_TR(0x71fca9);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B71fcac:{NFSU2_TR(0x71fcac);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L71fcb4;}}
}
B71fcae:L71fcae:{c.instructions+=2;NFSU2_TR(0x71fcae);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B71fcb2:{NFSU2_TR(0x71fcb2);
{goto L71fcb7;}
}
B71fcb4:L71fcb4:{c.instructions+=1;NFSU2_TR(0x71fcb4);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+0,u32(r1(U+0)));
}
B71fcb7:L71fcb7:{c.instructions+=3;NFSU2_TR(0x71fcb7);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B71fcb9:{NFSU2_TR(0x71fcb9);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+8)));
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B71fcbc:{NFSU2_TR(0x71fcbc);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L71fcc3;}}
}
B71fcbe:L71fcbe:{c.instructions+=2;NFSU2_TR(0x71fcbe);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+0,u32(r1(U+0)));
}
B71fcc1:{NFSU2_TR(0x71fcc1);
{goto L71fcc6;}
}
B71fcc3:L71fcc3:{c.instructions+=1;NFSU2_TR(0x71fcc3);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+0,u32(r1(U+0)));
}
B71fcc6:L71fcc6:{c.instructions+=8;NFSU2_TR(0x71fcc6);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B71fcc8:{NFSU2_TR(0x71fcc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71fccb:{NFSU2_TR(0x71fccb);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B71fcce:{NFSU2_TR(0x71fcce);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B71fcd1:{NFSU2_TR(0x71fcd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B71fcd4:{NFSU2_TR(0x71fcd4);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B71fcd7:{NFSU2_TR(0x71fcd7);
__builtin_memmove((R+24),(R+28),4);
}
B71fcd9:{NFSU2_TR(0x71fcd9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71fc84u);}goto L71fc84;}}
}
B71fcdb:L71fcdb:{c.instructions+=1;NFSU2_TR(0x71fcdb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B71fcde:L71fcde:{c.instructions+=5;NFSU2_TR(0x71fcde);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B71fce1:{NFSU2_TR(0x71fce1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B71fce4:{NFSU2_TR(0x71fce4);
__builtin_memmove((R+12),(R+4),4);
}
B71fce6:{NFSU2_TR(0x71fce6);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B71fce9:{NFSU2_TR(0x71fce9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+24),(U+0),4);
}
B71fcec:L71fcec:{c.instructions+=1;NFSU2_TR(0x71fcec);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L71fcee;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71fcecu);}goto L71fcec;}
}
B71fcee:L71fcee:{c.instructions+=2;NFSU2_TR(0x71fcee);
__builtin_memmove((R+4),(R+12),4);
}
B71fcf0:{NFSU2_TR(0x71fcf0);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B71fcf3:L71fcf3:{c.instructions+=1;NFSU2_TR(0x71fcf3);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L71fcf5;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71fcf3u);}goto L71fcf3;}
}
B71fcf5:L71fcf5:{c.instructions+=7;NFSU2_TR(0x71fcf5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71fcf8:{NFSU2_TR(0x71fcf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B71fcfb:{NFSU2_TR(0x71fcfb);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B71fcfd:{NFSU2_TR(0x71fcfd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B71fd00:{NFSU2_TR(0x71fd00);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71fd03:{NFSU2_TR(0x71fd03);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71fd06:{NFSU2_TR(0x71fd06);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71fc7au);}goto L71fc7a;}}
}
B71fd0c:L71fd0c:{c.instructions+=3;NFSU2_TR(0x71fd0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B71fd10:{NFSU2_TR(0x71fd10);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
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
B71fd14:{NFSU2_TR(0x71fd14);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L71fdda;}}
}
B71fd1a:L71fd1a:{c.instructions+=5;NFSU2_TR(0x71fd1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B71fd1d:{NFSU2_TR(0x71fd1d);
__builtin_memmove((R+0),(R+12),4);
}
B71fd1f:{NFSU2_TR(0x71fd1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B71fd22:{NFSU2_TR(0x71fd22);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71fd25:{NFSU2_TR(0x71fd25);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71fd28:L71fd28:{c.instructions+=9;NFSU2_TR(0x71fd28);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71fd2b:{NFSU2_TR(0x71fd2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B71fd2e:{NFSU2_TR(0x71fd2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B71fd32:{NFSU2_TR(0x71fd32);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B71fd35:{NFSU2_TR(0x71fd35);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71fd38:{NFSU2_TR(0x71fd38);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71fd3b:{NFSU2_TR(0x71fd3b);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B71fd3d:{NFSU2_TR(0x71fd3d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B71fd41:{NFSU2_TR(0x71fd41);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L71fdac;}}
}
B71fd43:L71fd43:{c.instructions+=19;NFSU2_TR(0x71fd43);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71fd46:{NFSU2_TR(0x71fd46);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+4,u32(r1(U+0)));
}
B71fd49:{NFSU2_TR(0x71fd49);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
w4(R+8,u32(r1(U+0)));
}
B71fd4c:{NFSU2_TR(0x71fd4c);
__builtin_memmove((R+0),(R+4),4);
}
B71fd4e:{NFSU2_TR(0x71fd4e);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B71fd50:{NFSU2_TR(0x71fd50);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B71fd51:{NFSU2_TR(0x71fd51);
__builtin_memmove((R+24),(R+0),4);
}
B71fd53:{NFSU2_TR(0x71fd53);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+8))));
}
B71fd55:{NFSU2_TR(0x71fd55);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+8))));
}
B71fd57:{NFSU2_TR(0x71fd57);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+8,u32(r1(U+0)));
}
B71fd5a:{NFSU2_TR(0x71fd5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B71fd5d:{NFSU2_TR(0x71fd5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71fd60:{NFSU2_TR(0x71fd60);
__builtin_memmove((R+0),(R+4),4);
}
B71fd62:{NFSU2_TR(0x71fd62);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B71fd64:{NFSU2_TR(0x71fd64);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B71fd65:{NFSU2_TR(0x71fd65);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+8))));
}
B71fd67:{NFSU2_TR(0x71fd67);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B71fd69:{NFSU2_TR(0x71fd69);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B71fd6c:{NFSU2_TR(0x71fd6c);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L71fd76;}}
}
B71fd6e:L71fd6e:{c.instructions+=3;NFSU2_TR(0x71fd6e);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+0,u32(r1(U+0)));
}
B71fd71:{NFSU2_TR(0x71fd71);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B71fd74:{NFSU2_TR(0x71fd74);
{goto L71fd79;}
}
B71fd76:L71fd76:{c.instructions+=1;NFSU2_TR(0x71fd76);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B71fd79:L71fd79:{c.instructions+=2;NFSU2_TR(0x71fd79);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+8)));
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B71fd7c:{NFSU2_TR(0x71fd7c);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L71fd86;}}
}
B71fd7e:L71fd7e:{c.instructions+=3;NFSU2_TR(0x71fd7e);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
w4(R+0,u32(r1(U+0)));
}
B71fd81:{NFSU2_TR(0x71fd81);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B71fd84:{NFSU2_TR(0x71fd84);
{goto L71fd89;}
}
B71fd86:L71fd86:{c.instructions+=1;NFSU2_TR(0x71fd86);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B71fd89:L71fd89:{c.instructions+=13;NFSU2_TR(0x71fd89);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71fd8c:{NFSU2_TR(0x71fd8c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((R+4),(U+0),4);
}
B71fd8f:{NFSU2_TR(0x71fd8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71fd92:{NFSU2_TR(0x71fd92);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B71fd95:{NFSU2_TR(0x71fd95);
u8 U[13];
w4(U+0,u32(u32(u32(0xffffffdcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),1);
s1(u32(r4(U+8)),r1(U+12));
}
B71fd99:{NFSU2_TR(0x71fd99);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B71fd9c:{NFSU2_TR(0x71fd9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B71fd9f:{NFSU2_TR(0x71fd9f);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+4))));
}
B71fda1:{NFSU2_TR(0x71fda1);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+4))));
}
B71fda3:{NFSU2_TR(0x71fda3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B71fda4:{NFSU2_TR(0x71fda4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B71fda7:{NFSU2_TR(0x71fda7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71fdaa:{NFSU2_TR(0x71fdaa);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71fd43u);}goto L71fd43;}}
}
B71fdac:L71fdac:{c.instructions+=5;NFSU2_TR(0x71fdac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B71fdaf:{NFSU2_TR(0x71fdaf);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B71fdb1:{NFSU2_TR(0x71fdb1);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B71fdb4:{NFSU2_TR(0x71fdb4);
__builtin_memmove((R+4),(R+12),4);
}
B71fdb6:{NFSU2_TR(0x71fdb6);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L71fdc7;}}
}
B71fdb8:L71fdb8:{c.instructions+=6;NFSU2_TR(0x71fdb8);
u8 U[13];
w4(U+0,u32(u32(u32(0xffffffdcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+8),(U+12),1);
}
B71fdbc:{NFSU2_TR(0x71fdbc);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+4)),r1(U+0));
}
B71fdbe:{NFSU2_TR(0x71fdbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B71fdc1:{NFSU2_TR(0x71fdc1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B71fdc2:{NFSU2_TR(0x71fdc2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B71fdc5:{NFSU2_TR(0x71fdc5);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71fdb8u);}goto L71fdb8;}}
}
B71fdc7:L71fdc7:{c.instructions+=6;NFSU2_TR(0x71fdc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B71fdca:{NFSU2_TR(0x71fdca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71fdcd:{NFSU2_TR(0x71fdcd);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B71fdce:{NFSU2_TR(0x71fdce);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
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
B71fdd1:{NFSU2_TR(0x71fdd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71fdd4:{NFSU2_TR(0x71fdd4);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71fd28u);}goto L71fd28;}}
}
B71fdda:L71fdda:{c.instructions+=5;NFSU2_TR(0x71fdda);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B71fddb:{NFSU2_TR(0x71fddb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B71fddc:{NFSU2_TR(0x71fddc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B71fddd:{NFSU2_TR(0x71fddd);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B71fdde:{NFSU2_TR(0x71fdde);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B71fddf:L71fddf:{c.instructions+=12;NFSU2_TR(0x71fddf);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71fde0:{NFSU2_TR(0x71fde0);
__builtin_memmove((R+20),(R+16),4);
}
B71fde2:{NFSU2_TR(0x71fde2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71fde3:{NFSU2_TR(0x71fde3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B71fde6:{NFSU2_TR(0x71fde6);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B71fde8:{NFSU2_TR(0x71fde8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71fde9:{NFSU2_TR(0x71fde9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71fdec:{NFSU2_TR(0x71fdec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x290ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B71fdf2:{NFSU2_TR(0x71fdf2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B71fdf5:{NFSU2_TR(0x71fdf5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71fdf6:{NFSU2_TR(0x71fdf6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71fdf9:{NFSU2_TR(0x71fdf9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L71fdff;}}
}
B71fdfb:L71fdfb:{c.instructions+=2;NFSU2_TR(0x71fdfb);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+12,sar<u32>(r4(R+12),u64(r1(U+0))));
}
B71fdfd:{NFSU2_TR(0x71fdfd);
{goto L71fe05;}
}
B71fdff:L71fdff:{c.instructions+=3;NFSU2_TR(0x71fdff);
w4(R+12,u32(0-u32(r4(R+12))));
}
B71fe01:{NFSU2_TR(0x71fe01);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+12,sar<u32>(r4(R+12),u64(r1(U+0))));
}
B71fe03:{NFSU2_TR(0x71fe03);
w4(R+12,u32(0-u32(r4(R+12))));
}
B71fe05:L71fe05:{c.instructions+=3;NFSU2_TR(0x71fe05);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B71fe08:{NFSU2_TR(0x71fe08);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B71fe0a:{NFSU2_TR(0x71fe0a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L71fe10;}}
}
B71fe0c:L71fe0c:{c.instructions+=2;NFSU2_TR(0x71fe0c);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+28,sar<u32>(r4(R+28),u64(r1(U+0))));
}
B71fe0e:{NFSU2_TR(0x71fe0e);
{goto L71fe16;}
}
B71fe10:L71fe10:{c.instructions+=3;NFSU2_TR(0x71fe10);
w4(R+28,u32(0-u32(r4(R+28))));
}
B71fe12:{NFSU2_TR(0x71fe12);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+28,sar<u32>(r4(R+28),u64(r1(U+0))));
}
B71fe14:{NFSU2_TR(0x71fe14);
w4(R+28,u32(0-u32(r4(R+28))));
}
B71fe16:L71fe16:{c.instructions+=12;NFSU2_TR(0x71fe16);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B71fe1c:{NFSU2_TR(0x71fe1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71fe1f:{NFSU2_TR(0x71fe1f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B71fe22:{NFSU2_TR(0x71fe22);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71fe24:{NFSU2_TR(0x71fe24);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71fe25:{NFSU2_TR(0x71fe25);
u8 U[12];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B71fe29:{NFSU2_TR(0x71fe29);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B71fe2b:{NFSU2_TR(0x71fe2b);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+12))));
}
B71fe2d:{NFSU2_TR(0x71fe2d);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+4),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(R+4),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B71fe30:{NFSU2_TR(0x71fe30);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71fe31:{NFSU2_TR(0x71fe31);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71fe32:{NFSU2_TR(0x71fe32);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9c58),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x71fe38ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B71fe38:L71fe38:{c.instructions+=7;NFSU2_TR(0x71fe38);
w4(R+12,u32(0-u32(r4(R+12))));
}
B71fe3a:{NFSU2_TR(0x71fe3a);
w4(R+28,u32(0-u32(r4(R+28))));
}
B71fe3c:{NFSU2_TR(0x71fe3c);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0x7ull))));
}
B71fe3f:{NFSU2_TR(0x71fe3f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B71fe42:{NFSU2_TR(0x71fe42);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0x7ull))));
}
B71fe45:{NFSU2_TR(0x71fe45);
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
B71fe47:{NFSU2_TR(0x71fe47);
if(r1(R+518)){{goto L71fe64;}}
}
B71fe49:L71fe49:{c.instructions+=7;NFSU2_TR(0x71fe49);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71fe4c:{NFSU2_TR(0x71fe4c);
u8 U[12];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B71fe50:{NFSU2_TR(0x71fe50);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71fe52:{NFSU2_TR(0x71fe52);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71fe53:{NFSU2_TR(0x71fe53);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71fe59:{NFSU2_TR(0x71fe59);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B71fe5b:{NFSU2_TR(0x71fe5b);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9ee4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x71fe61ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B71fe61:L71fe61:{c.instructions+=1;NFSU2_TR(0x71fe61);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B71fe64:L71fe64:{c.instructions+=2;NFSU2_TR(0x71fe64);
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
B71fe66:{NFSU2_TR(0x71fe66);
if(r1(R+518)){{goto L71fe85;}}
}
B71fe68:L71fe68:{c.instructions+=8;NFSU2_TR(0x71fe68);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71fe6e:{NFSU2_TR(0x71fe6e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x2ull))));
}
B71fe71:{NFSU2_TR(0x71fe71);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B71fe74:{NFSU2_TR(0x71fe74);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+28),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(R+28),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B71fe77:{NFSU2_TR(0x71fe77);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71fe79:{NFSU2_TR(0x71fe79);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71fe7a:{NFSU2_TR(0x71fe7a);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B71fe7c:{NFSU2_TR(0x71fe7c);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9ef0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x71fe82ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B71fe82:L71fe82:{c.instructions+=1;NFSU2_TR(0x71fe82);
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
B71fe85:L71fe85:{c.instructions+=5;NFSU2_TR(0x71fe85);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B71fe86:{NFSU2_TR(0x71fe86);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B71fe87:{NFSU2_TR(0x71fe87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B71fe88:{NFSU2_TR(0x71fe88);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B71fe89:{NFSU2_TR(0x71fe89);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B71fe8a:L71fe8a:{c.instructions+=7;NFSU2_TR(0x71fe8a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B71fe8c:{NFSU2_TR(0x71fe8c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71fe90:{NFSU2_TR(0x71fe90);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B71fe94:{NFSU2_TR(0x71fe94);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B71fe96:{NFSU2_TR(0x71fe96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B71fe98:{NFSU2_TR(0x71fe98);
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
B71fe9a:{NFSU2_TR(0x71fe9a);
if(r1(R+518)){{goto L71fe9f;}}
}
B71fe9c:L71fe9c:{c.instructions+=1;NFSU2_TR(0x71fe9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71fe9f:L71fe9f:{c.instructions+=2;NFSU2_TR(0x71fe9f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B71fea1:{NFSU2_TR(0x71fea1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B71fea4:L71fea4:{c.instructions+=4;NFSU2_TR(0x71fea4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B71fea6:{NFSU2_TR(0x71fea6);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71feaa:{NFSU2_TR(0x71feaa);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B71feac:{NFSU2_TR(0x71feac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L71feb2;}}
}
B71feae:L71feae:{c.instructions+=2;NFSU2_TR(0x71feae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B71feb0:{NFSU2_TR(0x71feb0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B71feb2:L71feb2:{c.instructions+=3;NFSU2_TR(0x71feb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B71feb5:{NFSU2_TR(0x71feb5);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B71feb7:{NFSU2_TR(0x71feb7);
if(r1(R+518)){{goto L71febd;}}
}
B71feb9:L71feb9:{c.instructions+=2;NFSU2_TR(0x71feb9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B71febb:{NFSU2_TR(0x71febb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B71febd:L71febd:{c.instructions+=3;NFSU2_TR(0x71febd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B71febf:{NFSU2_TR(0x71febf);
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
B71fec1:{NFSU2_TR(0x71fec1);
if(r1(R+518)){{goto L71fec9;}}
}
B71fec3:L71fec3:{c.instructions+=2;NFSU2_TR(0x71fec3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71fec6:{NFSU2_TR(0x71fec6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71fec9:L71fec9:{c.instructions+=1;NFSU2_TR(0x71fec9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B71fecc:L71fecc:{c.instructions+=8;NFSU2_TR(0x71fecc);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B71fed0:{NFSU2_TR(0x71fed0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71fed1:{NFSU2_TR(0x71fed1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71fed5:{NFSU2_TR(0x71fed5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71fed6:{NFSU2_TR(0x71fed6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B71feda:{NFSU2_TR(0x71feda);
__builtin_memmove((R+0),(R+4),4);
}
B71fedc:{NFSU2_TR(0x71fedc);
__builtin_memmove((R+8),(R+28),4);
}
B71fede:{NFSU2_TR(0x71fede);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B71fee1:L71fee1:{c.instructions+=1;NFSU2_TR(0x71fee1);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L71fee3;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71fee1u);}goto L71fee1;}
}
B71fee3:L71fee3:{c.instructions+=2;NFSU2_TR(0x71fee3);
__builtin_memmove((R+4),(R+0),4);
}
B71fee5:{NFSU2_TR(0x71fee5);
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
B71fee8:L71fee8:{c.instructions+=1;NFSU2_TR(0x71fee8);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L71feea;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71fee8u);}goto L71fee8;}
}
B71feea:L71feea:{c.instructions+=4;NFSU2_TR(0x71feea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B71feeb:{NFSU2_TR(0x71feeb);
__builtin_memmove((R+0),(R+8),4);
}
B71feed:{NFSU2_TR(0x71feed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B71feee:{NFSU2_TR(0x71feee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B71feef:L71feef:{c.instructions+=4;NFSU2_TR(0x71feef);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B71fef3:{NFSU2_TR(0x71fef3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71fef6:{NFSU2_TR(0x71fef6);
u8 U[14];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
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
B71fefa:{NFSU2_TR(0x71fefa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B71fefb:L71fefb:{c.instructions+=3;NFSU2_TR(0x71fefb);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71feff:{NFSU2_TR(0x71feff);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71ff02:{NFSU2_TR(0x71ff02);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B71ff03:L71ff03:{c.instructions+=3;NFSU2_TR(0x71ff03);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71ff07:{NFSU2_TR(0x71ff07);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71ff0a:{NFSU2_TR(0x71ff0a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B71ff0b:L71ff0b:{c.instructions+=4;NFSU2_TR(0x71ff0b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B71ff0f:{NFSU2_TR(0x71ff0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B71ff11:{NFSU2_TR(0x71ff11);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+4)),r4(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+4,u32(u32(r4(U+0))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B71ff14:{NFSU2_TR(0x71ff14);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B71ff15:L71ff15:{c.instructions+=6;NFSU2_TR(0x71ff15);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71ff16:{NFSU2_TR(0x71ff16);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71ff17:{NFSU2_TR(0x71ff17);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71ff1b:{NFSU2_TR(0x71ff1b);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B71ff1d:{NFSU2_TR(0x71ff1d);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B71ff20:{NFSU2_TR(0x71ff20);
if(r1(R+518)){TAIL_STATIC(0x720031u,720);}
}
B71ff26:L71ff26:{c.instructions+=6;NFSU2_TR(0x71ff26);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B71ff28:{NFSU2_TR(0x71ff28);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71ff29:{NFSU2_TR(0x71ff29);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71ff2a:{NFSU2_TR(0x71ff2a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B71ff2d:{NFSU2_TR(0x71ff2d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x38ull))));
}
B71ff30:{NFSU2_TR(0x71ff30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x71ff35ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71fea4u);}goto L71fea4;}
}
B71ff35:L71ff35:{c.instructions+=5;NFSU2_TR(0x71ff35);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71ff38:{NFSU2_TR(0x71ff38);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B71ff3b:{NFSU2_TR(0x71ff3b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71ff3c:{NFSU2_TR(0x71ff3c);
w4(R+4,u32(0x8b446cull));
}
B71ff41:{NFSU2_TR(0x71ff41);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x71ff46ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71fea4u);}goto L71fea4;}
}
B71ff46:L71ff46:{c.instructions+=5;NFSU2_TR(0x71ff46);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B71ff49:{NFSU2_TR(0x71ff49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B71ff4b:{NFSU2_TR(0x71ff4b);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x18ull))));
}
B71ff4e:{NFSU2_TR(0x71ff4e);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x25ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B71ff51:{NFSU2_TR(0x71ff51);
if(r1(R+518)){{goto L71ff5f;}}
}
B71ff53:L71ff53:{c.instructions+=3;NFSU2_TR(0x71ff53);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B71ff56:{NFSU2_TR(0x71ff56);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71ff57:{NFSU2_TR(0x71ff57);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x71ff5cull));
TAIL_STATIC(0x7350e0u,735);
}
B71ff5c:L71ff5c:{c.instructions+=1;NFSU2_TR(0x71ff5c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x14ull))));
}
B71ff5f:L71ff5f:{c.instructions+=4;NFSU2_TR(0x71ff5f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B71ff61:{NFSU2_TR(0x71ff61);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B71ff63:{NFSU2_TR(0x71ff63);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(U+6))<(r2(R+12))));
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+12))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B71ff67:{NFSU2_TR(0x71ff67);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L71ff83;}}
}
B71ff69:L71ff69:{c.instructions+=4;NFSU2_TR(0x71ff69);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B71ff6c:{NFSU2_TR(0x71ff6c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71ff6d:{NFSU2_TR(0x71ff6d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71ff6e:{NFSU2_TR(0x71ff6e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x71ff73ull));
TAIL_STATIC(0x7357a0u,735);
}
B71ff73:L71ff73:{c.instructions+=8;NFSU2_TR(0x71ff73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B71ff75:{NFSU2_TR(0x71ff75);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B71ff79:{NFSU2_TR(0x71ff79);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1cull))));
}
B71ff7c:{NFSU2_TR(0x71ff7c);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B71ff7d:{NFSU2_TR(0x71ff7d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B71ff7f:{NFSU2_TR(0x71ff7f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B71ff80:{NFSU2_TR(0x71ff80);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B71ff81:{NFSU2_TR(0x71ff81);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71ff69u);}goto L71ff69;}}
}
B71ff83:L71ff83:{c.instructions+=3;NFSU2_TR(0x71ff83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B71ff85:{NFSU2_TR(0x71ff85);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x26ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B71ff88:{NFSU2_TR(0x71ff88);
if(r1(R+518)){{goto L71ff9b;}}
}
B71ff8a:L71ff8a:{c.instructions+=3;NFSU2_TR(0x71ff8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B71ff8d:{NFSU2_TR(0x71ff8d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71ff8e:{NFSU2_TR(0x71ff8e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x71ff93ull));
TAIL_STATIC(0x735160u,735);
}
B71ff93:L71ff93:{c.instructions+=2;NFSU2_TR(0x71ff93);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B71ff97:{NFSU2_TR(0x71ff97);
u8 U[12];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B71ff9b:L71ff9b:{c.instructions+=4;NFSU2_TR(0x71ff9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B71ff9d:{NFSU2_TR(0x71ff9d);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B71ff9f:{NFSU2_TR(0x71ff9f);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x22ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(U+6))<(r2(R+12))));
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+12))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B71ffa3:{NFSU2_TR(0x71ffa3);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L71ffc4;}}
}
B71ffa5:L71ffa5:{c.instructions+=4;NFSU2_TR(0x71ffa5);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B71ffa8:{NFSU2_TR(0x71ffa8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71ffa9:{NFSU2_TR(0x71ffa9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71ffaa:{NFSU2_TR(0x71ffaa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x71ffafull));
TAIL_STATIC(0x735620u,735);
}
B71ffaf:L71ffaf:{c.instructions+=9;NFSU2_TR(0x71ffaf);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B71ffb3:{NFSU2_TR(0x71ffb3);
u8 U[12];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B71ffb7:{NFSU2_TR(0x71ffb7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B71ffb9:{NFSU2_TR(0x71ffb9);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x22ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B71ffbd:{NFSU2_TR(0x71ffbd);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B71ffbe:{NFSU2_TR(0x71ffbe);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B71ffc0:{NFSU2_TR(0x71ffc0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B71ffc1:{NFSU2_TR(0x71ffc1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B71ffc2:{NFSU2_TR(0x71ffc2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71ffa5u);}goto L71ffa5;}}
}
B71ffc4:L71ffc4:{c.instructions+=5;NFSU2_TR(0x71ffc4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B71ffc6:{NFSU2_TR(0x71ffc6);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B71ffc8:{NFSU2_TR(0x71ffc8);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(U+5))<(r1(R+12))));
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B71ffcb:{NFSU2_TR(0x71ffcb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((R+28),(U+0),4);
}
B71ffce:{NFSU2_TR(0x71ffce);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L71fff6;}}
}
B71ffd0:L71ffd0:{c.instructions+=6;NFSU2_TR(0x71ffd0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B71ffd2:{NFSU2_TR(0x71ffd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B71ffd5:{NFSU2_TR(0x71ffd5);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B71ffd8:{NFSU2_TR(0x71ffd8);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B71ffdb:{NFSU2_TR(0x71ffdb);
u8 U[5];
__builtin_memmove((U+3),(R+12),1);
w1(R+512,u8((r1(R+4))<(r1(U+3))));
w1(R+523,sborrow<u8>(r1(R+4),r1(U+3)));
w1(U+4,u8(u32(r1(R+4))-u32(r1(U+3))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B71ffdd:{NFSU2_TR(0x71ffdd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L71ffeb;}}
}
B71ffdf:L71ffdf:{c.instructions+=3;NFSU2_TR(0x71ffdf);
w4(R+4,u32(s32(s8(r1(R+4)))));
}
B71ffe2:{NFSU2_TR(0x71ffe2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71ffe3:{NFSU2_TR(0x71ffe3);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x817fa0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x71ffeaull));
{u32 t_=u32(r4(U+12));TAIL_DYNAMIC(t_);}
}
B71ffea:L71ffea:{c.instructions+=1;NFSU2_TR(0x71ffea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B71ffeb:L71ffeb:{c.instructions+=5;NFSU2_TR(0x71ffeb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B71ffed:{NFSU2_TR(0x71ffed);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B71fff1:{NFSU2_TR(0x71fff1);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B71fff2:{NFSU2_TR(0x71fff2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B71fff4:{NFSU2_TR(0x71fff4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71ffd0u);}goto L71ffd0;}}
}
B71fff6:L71fff6:{c.instructions+=4;NFSU2_TR(0x71fff6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B71fff8:{NFSU2_TR(0x71fff8);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B71fffa:{NFSU2_TR(0x71fffa);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x27ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(U+5))<(r1(R+12))));
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B71fffd:{NFSU2_TR(0x71fffd);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x720020u,720);}
}
B71ffff:L71ffff:{c.instructions+=1;NFSU2_TR(0x71ffff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
TAIL_STATIC(0x720001u,720);
}
XIT:NFSU2_TR_EXIT(0x71f,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
