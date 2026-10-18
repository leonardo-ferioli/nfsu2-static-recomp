#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_40f(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_56c(u8* __restrict R,Cpu& c);
u32 body_56d(u8* __restrict R,Cpu& c);
u32 body_56f(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_579(u8* __restrict R,Cpu& c);
u32 body_59f(u8* __restrict R,Cpu& c);
u32 body_5ba(u8* __restrict R,Cpu& c);
u32 body_5eb(u8* __restrict R,Cpu& c);
u32 body_5f0(u8* __restrict R,Cpu& c);
u32 body_5f4(u8* __restrict R,Cpu& c);
u32 body_5f6(u8* __restrict R,Cpu& c);
u32 body_61d(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x56e,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x56e,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_56e(u8* __restrict R,Cpu& c);
u32 page_56e(Cpu& c){return body_56e(c.regs.data(),c);}
__attribute__((noinline)) u32 body_56e(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x56e001:goto L56e001;
case 0x56e003:c.instructions+=1;goto B56e003;
case 0x56e006:goto L56e006;
case 0x56e009:c.instructions+=6;goto B56e009;
case 0x56e00f:c.instructions+=5;goto B56e00f;
case 0x56e012:c.instructions+=4;goto B56e012;
case 0x56e018:c.instructions+=3;goto B56e018;
case 0x56e01a:c.instructions+=2;goto B56e01a;
case 0x56e01d:c.instructions+=1;goto B56e01d;
case 0x56e01f:goto L56e01f;
case 0x56e024:c.instructions+=1;goto B56e024;
case 0x56e027:goto L56e027;
case 0x56e029:c.instructions+=1;goto B56e029;
case 0x56e030:goto L56e030;
case 0x56e031:c.instructions+=5;goto B56e031;
case 0x56e032:c.instructions+=4;goto B56e032;
case 0x56e035:c.instructions+=3;goto B56e035;
case 0x56e037:c.instructions+=2;goto B56e037;
case 0x56e038:c.instructions+=1;goto B56e038;
case 0x56e03a:goto L56e03a;
case 0x56e03d:c.instructions+=2;goto B56e03d;
case 0x56e03f:c.instructions+=1;goto B56e03f;
case 0x56e041:goto L56e041;
case 0x56e042:c.instructions+=2;goto B56e042;
case 0x56e04a:c.instructions+=1;goto B56e04a;
case 0x56e04f:goto L56e04f;
case 0x56e051:c.instructions+=1;goto B56e051;
case 0x56e053:goto L56e053;
case 0x56e056:c.instructions+=4;goto B56e056;
case 0x56e057:c.instructions+=3;goto B56e057;
case 0x56e05a:c.instructions+=2;goto B56e05a;
case 0x56e05b:c.instructions+=1;goto B56e05b;
case 0x56e060:goto L56e060;
case 0x56e066:c.instructions+=4;goto B56e066;
case 0x56e069:c.instructions+=3;goto B56e069;
case 0x56e06b:c.instructions+=2;goto B56e06b;
case 0x56e06e:c.instructions+=1;goto B56e06e;
case 0x56e070:goto L56e070;
case 0x56e076:c.instructions+=4;goto B56e076;
case 0x56e077:c.instructions+=3;goto B56e077;
case 0x56e078:c.instructions+=2;goto B56e078;
case 0x56e079:c.instructions+=1;goto B56e079;
case 0x56e07c:goto L56e07c;
case 0x56e080:c.instructions+=4;goto B56e080;
case 0x56e081:c.instructions+=3;goto B56e081;
case 0x56e082:c.instructions+=2;goto B56e082;
case 0x56e083:c.instructions+=1;goto B56e083;
case 0x56e086:goto L56e086;
case 0x56e08c:c.instructions+=4;goto B56e08c;
case 0x56e08d:c.instructions+=3;goto B56e08d;
case 0x56e08e:c.instructions+=2;goto B56e08e;
case 0x56e08f:c.instructions+=1;goto B56e08f;
case 0x56e0a0:goto L56e0a0;
case 0x56e0a1:c.instructions+=9;goto B56e0a1;
case 0x56e0a7:c.instructions+=8;goto B56e0a7;
case 0x56e0a8:c.instructions+=7;goto B56e0a8;
case 0x56e0aa:c.instructions+=6;goto B56e0aa;
case 0x56e0ae:c.instructions+=5;goto B56e0ae;
case 0x56e0b0:c.instructions+=4;goto B56e0b0;
case 0x56e0b2:c.instructions+=3;goto B56e0b2;
case 0x56e0b5:c.instructions+=2;goto B56e0b5;
case 0x56e0b7:c.instructions+=1;goto B56e0b7;
case 0x56e0bd:goto L56e0bd;
case 0x56e0c3:c.instructions+=7;goto B56e0c3;
case 0x56e0c6:c.instructions+=6;goto B56e0c6;
case 0x56e0c9:c.instructions+=5;goto B56e0c9;
case 0x56e0ca:c.instructions+=4;goto B56e0ca;
case 0x56e0cc:c.instructions+=3;goto B56e0cc;
case 0x56e0ce:c.instructions+=2;goto B56e0ce;
case 0x56e0d0:c.instructions+=1;goto B56e0d0;
case 0x56e0d6:goto L56e0d6;
case 0x56e0d8:c.instructions+=4;goto B56e0d8;
case 0x56e0dc:c.instructions+=3;goto B56e0dc;
case 0x56e0df:c.instructions+=2;goto B56e0df;
case 0x56e0e1:c.instructions+=1;goto B56e0e1;
case 0x56e0e7:goto L56e0e7;
case 0x56e0ea:c.instructions+=6;goto B56e0ea;
case 0x56e0ec:c.instructions+=5;goto B56e0ec;
case 0x56e0ed:c.instructions+=4;goto B56e0ed;
case 0x56e0f0:c.instructions+=3;goto B56e0f0;
case 0x56e0f3:c.instructions+=2;goto B56e0f3;
case 0x56e0f4:c.instructions+=1;goto B56e0f4;
case 0x56e0f9:goto L56e0f9;
case 0x56e0ff:c.instructions+=4;goto B56e0ff;
case 0x56e102:c.instructions+=3;goto B56e102;
case 0x56e104:c.instructions+=2;goto B56e104;
case 0x56e107:c.instructions+=1;goto B56e107;
case 0x56e109:goto L56e109;
case 0x56e10b:c.instructions+=1;goto B56e10b;
case 0x56e111:goto L56e111;
case 0x56e117:c.instructions+=4;goto B56e117;
case 0x56e119:c.instructions+=3;goto B56e119;
case 0x56e11b:c.instructions+=2;goto B56e11b;
case 0x56e11e:c.instructions+=1;goto B56e11e;
case 0x56e120:goto L56e120;
case 0x56e122:c.instructions+=1;goto B56e122;
case 0x56e128:goto L56e128;
case 0x56e12e:c.instructions+=10;goto B56e12e;
case 0x56e131:c.instructions+=9;goto B56e131;
case 0x56e137:c.instructions+=8;goto B56e137;
case 0x56e13d:c.instructions+=7;goto B56e13d;
case 0x56e13f:c.instructions+=6;goto B56e13f;
case 0x56e145:c.instructions+=5;goto B56e145;
case 0x56e14b:c.instructions+=4;goto B56e14b;
case 0x56e151:c.instructions+=3;goto B56e151;
case 0x56e153:c.instructions+=2;goto B56e153;
case 0x56e156:c.instructions+=1;goto B56e156;
case 0x56e158:goto L56e158;
case 0x56e15a:c.instructions+=1;goto B56e15a;
case 0x56e160:goto L56e160;
case 0x56e166:c.instructions+=4;goto B56e166;
case 0x56e168:c.instructions+=3;goto B56e168;
case 0x56e16a:c.instructions+=2;goto B56e16a;
case 0x56e16d:c.instructions+=1;goto B56e16d;
case 0x56e16f:goto L56e16f;
case 0x56e171:c.instructions+=1;goto B56e171;
case 0x56e177:goto L56e177;
case 0x56e17d:c.instructions+=11;goto B56e17d;
case 0x56e183:c.instructions+=10;goto B56e183;
case 0x56e189:c.instructions+=9;goto B56e189;
case 0x56e18f:c.instructions+=8;goto B56e18f;
case 0x56e191:c.instructions+=7;goto B56e191;
case 0x56e197:c.instructions+=6;goto B56e197;
case 0x56e19d:c.instructions+=5;goto B56e19d;
case 0x56e19f:c.instructions+=4;goto B56e19f;
case 0x56e1a5:c.instructions+=3;goto B56e1a5;
case 0x56e1a7:c.instructions+=2;goto B56e1a7;
case 0x56e1ab:c.instructions+=1;goto B56e1ab;
case 0x56e1af:goto L56e1af;
case 0x56e1b2:c.instructions+=5;goto B56e1b2;
case 0x56e1b5:c.instructions+=4;goto B56e1b5;
case 0x56e1b6:c.instructions+=3;goto B56e1b6;
case 0x56e1b8:c.instructions+=2;goto B56e1b8;
case 0x56e1ba:c.instructions+=1;goto B56e1ba;
case 0x56e1c0:goto L56e1c0;
case 0x56e1c1:goto L56e1c1;
case 0x56e1c2:c.instructions+=2;goto B56e1c2;
case 0x56e1c3:c.instructions+=1;goto B56e1c3;
case 0x56e1d0:goto L56e1d0;
case 0x56e1d1:c.instructions+=24;goto B56e1d1;
case 0x56e1d3:c.instructions+=23;goto B56e1d3;
case 0x56e1d6:c.instructions+=22;goto B56e1d6;
case 0x56e1dc:c.instructions+=21;goto B56e1dc;
case 0x56e1dd:c.instructions+=20;goto B56e1dd;
case 0x56e1df:c.instructions+=19;goto B56e1df;
case 0x56e1e5:c.instructions+=18;goto B56e1e5;
case 0x56e1ed:c.instructions+=17;goto B56e1ed;
case 0x56e1f3:c.instructions+=16;goto B56e1f3;
case 0x56e1fb:c.instructions+=15;goto B56e1fb;
case 0x56e203:c.instructions+=14;goto B56e203;
case 0x56e20b:c.instructions+=13;goto B56e20b;
case 0x56e213:c.instructions+=12;goto B56e213;
case 0x56e21b:c.instructions+=11;goto B56e21b;
case 0x56e223:c.instructions+=10;goto B56e223;
case 0x56e22b:c.instructions+=9;goto B56e22b;
case 0x56e233:c.instructions+=8;goto B56e233;
case 0x56e23b:c.instructions+=7;goto B56e23b;
case 0x56e243:c.instructions+=6;goto B56e243;
case 0x56e24b:c.instructions+=5;goto B56e24b;
case 0x56e253:c.instructions+=4;goto B56e253;
case 0x56e25b:c.instructions+=3;goto B56e25b;
case 0x56e263:c.instructions+=2;goto B56e263;
case 0x56e26b:c.instructions+=1;goto B56e26b;
case 0x56e270:goto L56e270;
case 0x56e274:c.instructions+=5;goto B56e274;
case 0x56e275:c.instructions+=4;goto B56e275;
case 0x56e279:c.instructions+=3;goto B56e279;
case 0x56e27a:c.instructions+=2;goto B56e27a;
case 0x56e27b:c.instructions+=1;goto B56e27b;
case 0x56e280:goto L56e280;
case 0x56e284:c.instructions+=196;goto B56e284;
case 0x56e28a:c.instructions+=195;goto B56e28a;
case 0x56e28e:c.instructions+=194;goto B56e28e;
case 0x56e294:c.instructions+=193;goto B56e294;
case 0x56e296:c.instructions+=192;goto B56e296;
case 0x56e29a:c.instructions+=191;goto B56e29a;
case 0x56e2a0:c.instructions+=190;goto B56e2a0;
case 0x56e2a2:c.instructions+=189;goto B56e2a2;
case 0x56e2a6:c.instructions+=188;goto B56e2a6;
case 0x56e2ac:c.instructions+=187;goto B56e2ac;
case 0x56e2ae:c.instructions+=186;goto B56e2ae;
case 0x56e2b2:c.instructions+=185;goto B56e2b2;
case 0x56e2b6:c.instructions+=184;goto B56e2b6;
case 0x56e2bc:c.instructions+=183;goto B56e2bc;
case 0x56e2c0:c.instructions+=182;goto B56e2c0;
case 0x56e2c6:c.instructions+=181;goto B56e2c6;
case 0x56e2c8:c.instructions+=180;goto B56e2c8;
case 0x56e2cc:c.instructions+=179;goto B56e2cc;
case 0x56e2d2:c.instructions+=178;goto B56e2d2;
case 0x56e2d4:c.instructions+=177;goto B56e2d4;
case 0x56e2d8:c.instructions+=176;goto B56e2d8;
case 0x56e2de:c.instructions+=175;goto B56e2de;
case 0x56e2e0:c.instructions+=174;goto B56e2e0;
case 0x56e2e4:c.instructions+=173;goto B56e2e4;
case 0x56e2e8:c.instructions+=172;goto B56e2e8;
case 0x56e2ee:c.instructions+=171;goto B56e2ee;
case 0x56e2f2:c.instructions+=170;goto B56e2f2;
case 0x56e2f8:c.instructions+=169;goto B56e2f8;
case 0x56e2fa:c.instructions+=168;goto B56e2fa;
case 0x56e2fe:c.instructions+=167;goto B56e2fe;
case 0x56e304:c.instructions+=166;goto B56e304;
case 0x56e306:c.instructions+=165;goto B56e306;
case 0x56e30a:c.instructions+=164;goto B56e30a;
case 0x56e310:c.instructions+=163;goto B56e310;
case 0x56e312:c.instructions+=162;goto B56e312;
case 0x56e316:c.instructions+=161;goto B56e316;
case 0x56e31a:c.instructions+=160;goto B56e31a;
case 0x56e320:c.instructions+=159;goto B56e320;
case 0x56e324:c.instructions+=158;goto B56e324;
case 0x56e32a:c.instructions+=157;goto B56e32a;
case 0x56e32c:c.instructions+=156;goto B56e32c;
case 0x56e330:c.instructions+=155;goto B56e330;
case 0x56e336:c.instructions+=154;goto B56e336;
case 0x56e338:c.instructions+=153;goto B56e338;
case 0x56e33c:c.instructions+=152;goto B56e33c;
case 0x56e342:c.instructions+=151;goto B56e342;
case 0x56e344:c.instructions+=150;goto B56e344;
case 0x56e348:c.instructions+=149;goto B56e348;
case 0x56e34c:c.instructions+=148;goto B56e34c;
case 0x56e352:c.instructions+=147;goto B56e352;
case 0x56e356:c.instructions+=146;goto B56e356;
case 0x56e35c:c.instructions+=145;goto B56e35c;
case 0x56e35e:c.instructions+=144;goto B56e35e;
case 0x56e362:c.instructions+=143;goto B56e362;
case 0x56e368:c.instructions+=142;goto B56e368;
case 0x56e36a:c.instructions+=141;goto B56e36a;
case 0x56e36e:c.instructions+=140;goto B56e36e;
case 0x56e374:c.instructions+=139;goto B56e374;
case 0x56e376:c.instructions+=138;goto B56e376;
case 0x56e37a:c.instructions+=137;goto B56e37a;
case 0x56e37e:c.instructions+=136;goto B56e37e;
case 0x56e384:c.instructions+=135;goto B56e384;
case 0x56e388:c.instructions+=134;goto B56e388;
case 0x56e38e:c.instructions+=133;goto B56e38e;
case 0x56e390:c.instructions+=132;goto B56e390;
case 0x56e394:c.instructions+=131;goto B56e394;
case 0x56e39a:c.instructions+=130;goto B56e39a;
case 0x56e39c:c.instructions+=129;goto B56e39c;
case 0x56e3a0:c.instructions+=128;goto B56e3a0;
case 0x56e3a6:c.instructions+=127;goto B56e3a6;
case 0x56e3a8:c.instructions+=126;goto B56e3a8;
case 0x56e3ac:c.instructions+=125;goto B56e3ac;
case 0x56e3b0:c.instructions+=124;goto B56e3b0;
case 0x56e3b6:c.instructions+=123;goto B56e3b6;
case 0x56e3ba:c.instructions+=122;goto B56e3ba;
case 0x56e3c0:c.instructions+=121;goto B56e3c0;
case 0x56e3c2:c.instructions+=120;goto B56e3c2;
case 0x56e3c6:c.instructions+=119;goto B56e3c6;
case 0x56e3cc:c.instructions+=118;goto B56e3cc;
case 0x56e3ce:c.instructions+=117;goto B56e3ce;
case 0x56e3d2:c.instructions+=116;goto B56e3d2;
case 0x56e3d8:c.instructions+=115;goto B56e3d8;
case 0x56e3da:c.instructions+=114;goto B56e3da;
case 0x56e3de:c.instructions+=113;goto B56e3de;
case 0x56e3e2:c.instructions+=112;goto B56e3e2;
case 0x56e3e8:c.instructions+=111;goto B56e3e8;
case 0x56e3ec:c.instructions+=110;goto B56e3ec;
case 0x56e3f2:c.instructions+=109;goto B56e3f2;
case 0x56e3f4:c.instructions+=108;goto B56e3f4;
case 0x56e3f8:c.instructions+=107;goto B56e3f8;
case 0x56e3fe:c.instructions+=106;goto B56e3fe;
case 0x56e400:c.instructions+=105;goto B56e400;
case 0x56e404:c.instructions+=104;goto B56e404;
case 0x56e40a:c.instructions+=103;goto B56e40a;
case 0x56e40c:c.instructions+=102;goto B56e40c;
case 0x56e410:c.instructions+=101;goto B56e410;
case 0x56e414:c.instructions+=100;goto B56e414;
case 0x56e41a:c.instructions+=99;goto B56e41a;
case 0x56e41e:c.instructions+=98;goto B56e41e;
case 0x56e424:c.instructions+=97;goto B56e424;
case 0x56e426:c.instructions+=96;goto B56e426;
case 0x56e42a:c.instructions+=95;goto B56e42a;
case 0x56e430:c.instructions+=94;goto B56e430;
case 0x56e432:c.instructions+=93;goto B56e432;
case 0x56e436:c.instructions+=92;goto B56e436;
case 0x56e43c:c.instructions+=91;goto B56e43c;
case 0x56e43e:c.instructions+=90;goto B56e43e;
case 0x56e442:c.instructions+=89;goto B56e442;
case 0x56e446:c.instructions+=88;goto B56e446;
case 0x56e44c:c.instructions+=87;goto B56e44c;
case 0x56e450:c.instructions+=86;goto B56e450;
case 0x56e456:c.instructions+=85;goto B56e456;
case 0x56e458:c.instructions+=84;goto B56e458;
case 0x56e45c:c.instructions+=83;goto B56e45c;
case 0x56e462:c.instructions+=82;goto B56e462;
case 0x56e464:c.instructions+=81;goto B56e464;
case 0x56e468:c.instructions+=80;goto B56e468;
case 0x56e46e:c.instructions+=79;goto B56e46e;
case 0x56e470:c.instructions+=78;goto B56e470;
case 0x56e477:c.instructions+=77;goto B56e477;
case 0x56e47b:c.instructions+=76;goto B56e47b;
case 0x56e481:c.instructions+=75;goto B56e481;
case 0x56e485:c.instructions+=74;goto B56e485;
case 0x56e48b:c.instructions+=73;goto B56e48b;
case 0x56e48d:c.instructions+=72;goto B56e48d;
case 0x56e491:c.instructions+=71;goto B56e491;
case 0x56e497:c.instructions+=70;goto B56e497;
case 0x56e499:c.instructions+=69;goto B56e499;
case 0x56e49d:c.instructions+=68;goto B56e49d;
case 0x56e4a3:c.instructions+=67;goto B56e4a3;
case 0x56e4a5:c.instructions+=66;goto B56e4a5;
case 0x56e4ac:c.instructions+=65;goto B56e4ac;
case 0x56e4b0:c.instructions+=64;goto B56e4b0;
case 0x56e4b6:c.instructions+=63;goto B56e4b6;
case 0x56e4ba:c.instructions+=62;goto B56e4ba;
case 0x56e4c0:c.instructions+=61;goto B56e4c0;
case 0x56e4c2:c.instructions+=60;goto B56e4c2;
case 0x56e4c6:c.instructions+=59;goto B56e4c6;
case 0x56e4cc:c.instructions+=58;goto B56e4cc;
case 0x56e4ce:c.instructions+=57;goto B56e4ce;
case 0x56e4d2:c.instructions+=56;goto B56e4d2;
case 0x56e4d8:c.instructions+=55;goto B56e4d8;
case 0x56e4da:c.instructions+=54;goto B56e4da;
case 0x56e4e1:c.instructions+=53;goto B56e4e1;
case 0x56e4e5:c.instructions+=52;goto B56e4e5;
case 0x56e4eb:c.instructions+=51;goto B56e4eb;
case 0x56e4ef:c.instructions+=50;goto B56e4ef;
case 0x56e4f5:c.instructions+=49;goto B56e4f5;
case 0x56e4f7:c.instructions+=48;goto B56e4f7;
case 0x56e4fb:c.instructions+=47;goto B56e4fb;
case 0x56e501:c.instructions+=46;goto B56e501;
case 0x56e503:c.instructions+=45;goto B56e503;
case 0x56e507:c.instructions+=44;goto B56e507;
case 0x56e50d:c.instructions+=43;goto B56e50d;
case 0x56e50f:c.instructions+=42;goto B56e50f;
case 0x56e516:c.instructions+=41;goto B56e516;
case 0x56e51a:c.instructions+=40;goto B56e51a;
case 0x56e520:c.instructions+=39;goto B56e520;
case 0x56e524:c.instructions+=38;goto B56e524;
case 0x56e52a:c.instructions+=37;goto B56e52a;
case 0x56e52c:c.instructions+=36;goto B56e52c;
case 0x56e530:c.instructions+=35;goto B56e530;
case 0x56e536:c.instructions+=34;goto B56e536;
case 0x56e53a:c.instructions+=33;goto B56e53a;
case 0x56e53b:c.instructions+=32;goto B56e53b;
case 0x56e53f:c.instructions+=31;goto B56e53f;
case 0x56e541:c.instructions+=30;goto B56e541;
case 0x56e545:c.instructions+=29;goto B56e545;
case 0x56e546:c.instructions+=28;goto B56e546;
case 0x56e54c:c.instructions+=27;goto B56e54c;
case 0x56e54e:c.instructions+=26;goto B56e54e;
case 0x56e555:c.instructions+=25;goto B56e555;
case 0x56e559:c.instructions+=24;goto B56e559;
case 0x56e55f:c.instructions+=23;goto B56e55f;
case 0x56e563:c.instructions+=22;goto B56e563;
case 0x56e569:c.instructions+=21;goto B56e569;
case 0x56e56b:c.instructions+=20;goto B56e56b;
case 0x56e56f:c.instructions+=19;goto B56e56f;
case 0x56e575:c.instructions+=18;goto B56e575;
case 0x56e577:c.instructions+=17;goto B56e577;
case 0x56e57b:c.instructions+=16;goto B56e57b;
case 0x56e581:c.instructions+=15;goto B56e581;
case 0x56e583:c.instructions+=14;goto B56e583;
case 0x56e58a:c.instructions+=13;goto B56e58a;
case 0x56e58e:c.instructions+=12;goto B56e58e;
case 0x56e594:c.instructions+=11;goto B56e594;
case 0x56e598:c.instructions+=10;goto B56e598;
case 0x56e59e:c.instructions+=9;goto B56e59e;
case 0x56e5a0:c.instructions+=8;goto B56e5a0;
case 0x56e5a4:c.instructions+=7;goto B56e5a4;
case 0x56e5aa:c.instructions+=6;goto B56e5aa;
case 0x56e5ac:c.instructions+=5;goto B56e5ac;
case 0x56e5b0:c.instructions+=4;goto B56e5b0;
case 0x56e5b6:c.instructions+=3;goto B56e5b6;
case 0x56e5b8:c.instructions+=2;goto B56e5b8;
case 0x56e5bf:c.instructions+=1;goto B56e5bf;
case 0x56e5c4:goto L56e5c4;
case 0x56e5c7:c.instructions+=11;goto B56e5c7;
case 0x56e5ca:c.instructions+=10;goto B56e5ca;
case 0x56e5ce:c.instructions+=9;goto B56e5ce;
case 0x56e5d1:c.instructions+=8;goto B56e5d1;
case 0x56e5d4:c.instructions+=7;goto B56e5d4;
case 0x56e5d8:c.instructions+=6;goto B56e5d8;
case 0x56e5dc:c.instructions+=5;goto B56e5dc;
case 0x56e5e0:c.instructions+=4;goto B56e5e0;
case 0x56e5e1:c.instructions+=3;goto B56e5e1;
case 0x56e5e3:c.instructions+=2;goto B56e5e3;
case 0x56e5eb:c.instructions+=1;goto B56e5eb;
case 0x56e5f0:goto L56e5f0;
case 0x56e5f3:c.instructions+=4;goto B56e5f3;
case 0x56e5f5:c.instructions+=3;goto B56e5f5;
case 0x56e5f6:c.instructions+=2;goto B56e5f6;
case 0x56e5f8:c.instructions+=1;goto B56e5f8;
case 0x56e5fd:goto L56e5fd;
case 0x56e5fe:c.instructions+=3;goto B56e5fe;
case 0x56e600:c.instructions+=2;goto B56e600;
case 0x56e601:c.instructions+=1;goto B56e601;
case 0x56e610:goto L56e610;
case 0x56e612:c.instructions+=11;goto B56e612;
case 0x56e617:c.instructions+=10;goto B56e617;
case 0x56e61d:c.instructions+=9;goto B56e61d;
case 0x56e61e:c.instructions+=8;goto B56e61e;
case 0x56e625:c.instructions+=7;goto B56e625;
case 0x56e626:c.instructions+=6;goto B56e626;
case 0x56e627:c.instructions+=5;goto B56e627;
case 0x56e629:c.instructions+=4;goto B56e629;
case 0x56e62b:c.instructions+=3;goto B56e62b;
case 0x56e62e:c.instructions+=2;goto B56e62e;
case 0x56e632:c.instructions+=1;goto B56e632;
case 0x56e637:goto L56e637;
case 0x56e63c:c.instructions+=7;goto B56e63c;
case 0x56e641:c.instructions+=6;goto B56e641;
case 0x56e643:c.instructions+=5;goto B56e643;
case 0x56e648:c.instructions+=4;goto B56e648;
case 0x56e64b:c.instructions+=3;goto B56e64b;
case 0x56e64c:c.instructions+=2;goto B56e64c;
case 0x56e654:c.instructions+=1;goto B56e654;
case 0x56e659:goto L56e659;
case 0x56e65d:c.instructions+=7;goto B56e65d;
case 0x56e663:c.instructions+=6;goto B56e663;
case 0x56e66a:c.instructions+=5;goto B56e66a;
case 0x56e66c:c.instructions+=4;goto B56e66c;
case 0x56e66d:c.instructions+=3;goto B56e66d;
case 0x56e674:c.instructions+=2;goto B56e674;
case 0x56e677:c.instructions+=1;goto B56e677;
case 0x56e680:goto L56e680;
case 0x56e684:c.instructions+=4;goto B56e684;
case 0x56e686:c.instructions+=3;goto B56e686;
case 0x56e687:c.instructions+=2;goto B56e687;
case 0x56e689:c.instructions+=1;goto B56e689;
case 0x56e68b:goto L56e68b;
case 0x56e68d:c.instructions+=2;goto B56e68d;
case 0x56e68f:c.instructions+=1;goto B56e68f;
case 0x56e694:goto L56e694;
case 0x56e696:c.instructions+=1;goto B56e696;
case 0x56e69b:goto L56e69b;
case 0x56e69d:c.instructions+=3;goto B56e69d;
case 0x56e6a0:c.instructions+=2;goto B56e6a0;
case 0x56e6a4:c.instructions+=1;goto B56e6a4;
case 0x56e6a6:goto L56e6a6;
case 0x56e6ac:c.instructions+=2;goto B56e6ac;
case 0x56e6ae:c.instructions+=1;goto B56e6ae;
case 0x56e6b0:goto L56e6b0;
case 0x56e6b3:c.instructions+=4;goto B56e6b3;
case 0x56e6b5:c.instructions+=3;goto B56e6b5;
case 0x56e6b7:c.instructions+=2;goto B56e6b7;
case 0x56e6b9:c.instructions+=1;goto B56e6b9;
case 0x56e6bc:goto L56e6bc;
case 0x56e6c3:c.instructions+=2;goto B56e6c3;
case 0x56e6c4:c.instructions+=1;goto B56e6c4;
case 0x56e6c7:goto L56e6c7;
case 0x56e6ce:c.instructions+=2;goto B56e6ce;
case 0x56e6cf:c.instructions+=1;goto B56e6cf;
case 0x56e6e0:goto L56e6e0;
case 0x56e6e1:c.instructions+=5;goto B56e6e1;
case 0x56e6e6:c.instructions+=4;goto B56e6e6;
case 0x56e6e8:c.instructions+=3;goto B56e6e8;
case 0x56e6e9:c.instructions+=2;goto B56e6e9;
case 0x56e6eb:c.instructions+=1;goto B56e6eb;
case 0x56e6ed:goto L56e6ed;
case 0x56e6f2:c.instructions+=4;goto B56e6f2;
case 0x56e6f5:c.instructions+=3;goto B56e6f5;
case 0x56e6f6:c.instructions+=2;goto B56e6f6;
case 0x56e6f8:c.instructions+=1;goto B56e6f8;
case 0x56e6fd:goto L56e6fd;
case 0x56e6ff:c.instructions+=2;goto B56e6ff;
case 0x56e709:c.instructions+=1;goto B56e709;
case 0x56e70e:goto L56e70e;
case 0x56e711:c.instructions+=3;goto B56e711;
case 0x56e712:c.instructions+=2;goto B56e712;
case 0x56e715:c.instructions+=1;goto B56e715;
case 0x56e71b:goto L56e71b;
case 0x56e722:goto L56e722;
case 0x56e724:c.instructions+=3;goto B56e724;
case 0x56e727:c.instructions+=2;goto B56e727;
case 0x56e729:c.instructions+=1;goto B56e729;
case 0x56e72e:goto L56e72e;
case 0x56e730:c.instructions+=3;goto B56e730;
case 0x56e736:c.instructions+=2;goto B56e736;
case 0x56e739:c.instructions+=1;goto B56e739;
case 0x56e73b:goto L56e73b;
case 0x56e742:c.instructions+=1;goto B56e742;
case 0x56e747:goto L56e747;
case 0x56e74a:c.instructions+=3;goto B56e74a;
case 0x56e74c:c.instructions+=2;goto B56e74c;
case 0x56e74f:c.instructions+=1;goto B56e74f;
case 0x56e751:goto L56e751;
case 0x56e753:c.instructions+=2;goto B56e753;
case 0x56e754:c.instructions+=1;goto B56e754;
case 0x56e757:goto L56e757;
case 0x56e759:c.instructions+=3;goto B56e759;
case 0x56e75c:c.instructions+=2;goto B56e75c;
case 0x56e75e:c.instructions+=1;goto B56e75e;
case 0x56e763:goto L56e763;
case 0x56e768:goto L56e768;
case 0x56e76d:c.instructions+=1;goto B56e76d;
case 0x56e772:goto L56e772;
case 0x56e774:c.instructions+=1;goto B56e774;
case 0x56e779:goto L56e779;
case 0x56e77f:c.instructions+=3;goto B56e77f;
case 0x56e781:c.instructions+=2;goto B56e781;
case 0x56e784:c.instructions+=1;goto B56e784;
case 0x56e786:goto L56e786;
case 0x56e789:goto L56e789;
case 0x56e78b:c.instructions+=2;goto B56e78b;
case 0x56e78e:c.instructions+=1;goto B56e78e;
case 0x56e793:goto L56e793;
case 0x56e798:goto L56e798;
case 0x56e79a:c.instructions+=3;goto B56e79a;
case 0x56e79d:c.instructions+=2;goto B56e79d;
case 0x56e79f:c.instructions+=1;goto B56e79f;
case 0x56e7a4:goto L56e7a4;
case 0x56e7a6:c.instructions+=3;goto B56e7a6;
case 0x56e7a9:c.instructions+=2;goto B56e7a9;
case 0x56e7ae:c.instructions+=1;goto B56e7ae;
case 0x56e7b3:goto L56e7b3;
case 0x56e7b9:c.instructions+=4;goto B56e7b9;
case 0x56e7bf:c.instructions+=3;goto B56e7bf;
case 0x56e7c1:c.instructions+=2;goto B56e7c1;
case 0x56e7c4:c.instructions+=1;goto B56e7c4;
case 0x56e7c6:goto L56e7c6;
case 0x56e7cc:c.instructions+=2;goto B56e7cc;
case 0x56e7d0:c.instructions+=1;goto B56e7d0;
case 0x56e7d2:goto L56e7d2;
case 0x56e7d4:c.instructions+=2;goto B56e7d4;
case 0x56e7da:c.instructions+=1;goto B56e7da;
case 0x56e7de:goto L56e7de;
case 0x56e7e2:c.instructions+=3;goto B56e7e2;
case 0x56e7e3:c.instructions+=2;goto B56e7e3;
case 0x56e7e6:c.instructions+=1;goto B56e7e6;
case 0x56e7eb:goto L56e7eb;
case 0x56e7ed:c.instructions+=1;goto B56e7ed;
case 0x56e7f2:goto L56e7f2;
case 0x56e7f8:c.instructions+=3;goto B56e7f8;
case 0x56e7fa:c.instructions+=2;goto B56e7fa;
case 0x56e7fd:c.instructions+=1;goto B56e7fd;
case 0x56e7ff:goto L56e7ff;
case 0x56e801:c.instructions+=4;goto B56e801;
case 0x56e804:c.instructions+=3;goto B56e804;
case 0x56e806:c.instructions+=2;goto B56e806;
case 0x56e808:c.instructions+=1;goto B56e808;
case 0x56e80b:goto L56e80b;
case 0x56e812:c.instructions+=1;goto B56e812;
case 0x56e814:goto L56e814;
case 0x56e816:c.instructions+=3;goto B56e816;
case 0x56e819:c.instructions+=2;goto B56e819;
case 0x56e81b:c.instructions+=1;goto B56e81b;
case 0x56e820:goto L56e820;
case 0x56e822:c.instructions+=3;goto B56e822;
case 0x56e829:c.instructions+=2;goto B56e829;
case 0x56e82c:c.instructions+=1;goto B56e82c;
case 0x56e82e:goto L56e82e;
case 0x56e833:c.instructions+=1;goto B56e833;
case 0x56e835:goto L56e835;
case 0x56e837:goto L56e837;
case 0x56e83c:goto L56e83c;
case 0x56e83e:c.instructions+=6;goto B56e83e;
case 0x56e844:c.instructions+=5;goto B56e844;
case 0x56e84a:c.instructions+=4;goto B56e84a;
case 0x56e850:c.instructions+=3;goto B56e850;
case 0x56e852:c.instructions+=2;goto B56e852;
case 0x56e855:c.instructions+=1;goto B56e855;
case 0x56e857:goto L56e857;
case 0x56e85e:c.instructions+=1;goto B56e85e;
case 0x56e860:goto L56e860;
case 0x56e862:c.instructions+=2;goto B56e862;
case 0x56e864:c.instructions+=1;goto B56e864;
case 0x56e869:goto L56e869;
case 0x56e86c:c.instructions+=2;goto B56e86c;
case 0x56e86e:c.instructions+=1;goto B56e86e;
case 0x56e870:goto L56e870;
case 0x56e872:c.instructions+=19;goto B56e872;
case 0x56e878:c.instructions+=18;goto B56e878;
case 0x56e87c:c.instructions+=17;goto B56e87c;
case 0x56e882:c.instructions+=16;goto B56e882;
case 0x56e888:c.instructions+=15;goto B56e888;
case 0x56e88a:c.instructions+=14;goto B56e88a;
case 0x56e890:c.instructions+=13;goto B56e890;
case 0x56e894:c.instructions+=12;goto B56e894;
case 0x56e89a:c.instructions+=11;goto B56e89a;
case 0x56e8a0:c.instructions+=10;goto B56e8a0;
case 0x56e8a2:c.instructions+=9;goto B56e8a2;
case 0x56e8a8:c.instructions+=8;goto B56e8a8;
case 0x56e8ac:c.instructions+=7;goto B56e8ac;
case 0x56e8b2:c.instructions+=6;goto B56e8b2;
case 0x56e8b8:c.instructions+=5;goto B56e8b8;
case 0x56e8ba:c.instructions+=4;goto B56e8ba;
case 0x56e8c0:c.instructions+=3;goto B56e8c0;
case 0x56e8c4:c.instructions+=2;goto B56e8c4;
case 0x56e8ca:c.instructions+=1;goto B56e8ca;
case 0x56e8d0:goto L56e8d0;
case 0x56e8d1:c.instructions+=2;goto B56e8d1;
case 0x56e8d2:c.instructions+=1;goto B56e8d2;
case 0x56e8f0:goto L56e8f0;
case 0x56e8f1:c.instructions+=6;goto B56e8f1;
case 0x56e8f5:c.instructions+=5;goto B56e8f5;
case 0x56e8f6:c.instructions+=4;goto B56e8f6;
case 0x56e8f7:c.instructions+=3;goto B56e8f7;
case 0x56e8fa:c.instructions+=2;goto B56e8fa;
case 0x56e8ff:c.instructions+=1;goto B56e8ff;
case 0x56e900:goto L56e900;
case 0x56e901:c.instructions+=2;goto B56e901;
case 0x56e903:c.instructions+=1;goto B56e903;
case 0x56e908:goto L56e908;
case 0x56e90e:c.instructions+=2;goto B56e90e;
case 0x56e90f:c.instructions+=1;goto B56e90f;
case 0x56e911:goto L56e911;
case 0x56e912:c.instructions+=3;goto B56e912;
case 0x56e913:c.instructions+=2;goto B56e913;
case 0x56e914:c.instructions+=1;goto B56e914;
case 0x56e920:goto L56e920;
case 0x56e923:c.instructions+=4;goto B56e923;
case 0x56e924:c.instructions+=3;goto B56e924;
case 0x56e926:c.instructions+=2;goto B56e926;
case 0x56e92b:c.instructions+=1;goto B56e92b;
case 0x56e930:goto L56e930;
case 0x56e932:c.instructions+=1;goto B56e932;
case 0x56e934:goto L56e934;
case 0x56e939:c.instructions+=1;goto B56e939;
case 0x56e93d:goto L56e93d;
case 0x56e942:c.instructions+=1;goto B56e942;
case 0x56e947:goto L56e947;
case 0x56e949:c.instructions+=2;goto B56e949;
case 0x56e94e:c.instructions+=1;goto B56e94e;
case 0x56e950:goto L56e950;
case 0x56e955:goto L56e955;
case 0x56e957:c.instructions+=12;goto B56e957;
case 0x56e95a:c.instructions+=11;goto B56e95a;
case 0x56e95d:c.instructions+=10;goto B56e95d;
case 0x56e95f:c.instructions+=9;goto B56e95f;
case 0x56e963:c.instructions+=8;goto B56e963;
case 0x56e967:c.instructions+=7;goto B56e967;
case 0x56e96d:c.instructions+=6;goto B56e96d;
case 0x56e971:c.instructions+=5;goto B56e971;
case 0x56e975:c.instructions+=4;goto B56e975;
case 0x56e978:c.instructions+=3;goto B56e978;
case 0x56e97a:c.instructions+=2;goto B56e97a;
case 0x56e97d:c.instructions+=1;goto B56e97d;
case 0x56e97f:goto L56e97f;
case 0x56e982:c.instructions+=2;goto B56e982;
case 0x56e984:c.instructions+=1;goto B56e984;
case 0x56e986:goto L56e986;
case 0x56e989:c.instructions+=1;goto B56e989;
case 0x56e98e:goto L56e98e;
case 0x56e992:c.instructions+=7;goto B56e992;
case 0x56e996:c.instructions+=6;goto B56e996;
case 0x56e998:c.instructions+=5;goto B56e998;
case 0x56e99a:c.instructions+=4;goto B56e99a;
case 0x56e99e:c.instructions+=3;goto B56e99e;
case 0x56e9a1:c.instructions+=2;goto B56e9a1;
case 0x56e9a4:c.instructions+=1;goto B56e9a4;
case 0x56e9a9:goto L56e9a9;
case 0x56e9ab:goto L56e9ab;
case 0x56e9ae:c.instructions+=1;goto B56e9ae;
case 0x56e9b0:goto L56e9b0;
case 0x56e9b2:c.instructions+=2;goto B56e9b2;
case 0x56e9b4:c.instructions+=1;goto B56e9b4;
case 0x56e9b9:goto L56e9b9;
case 0x56e9be:goto L56e9be;
case 0x56e9c1:c.instructions+=2;goto B56e9c1;
case 0x56e9c3:c.instructions+=1;goto B56e9c3;
case 0x56e9c5:goto L56e9c5;
case 0x56e9c8:c.instructions+=1;goto B56e9c8;
case 0x56e9ca:goto L56e9ca;
case 0x56e9ce:c.instructions+=5;goto B56e9ce;
case 0x56e9d0:c.instructions+=4;goto B56e9d0;
case 0x56e9d4:c.instructions+=3;goto B56e9d4;
case 0x56e9d6:c.instructions+=2;goto B56e9d6;
case 0x56e9d9:c.instructions+=1;goto B56e9d9;
case 0x56e9db:goto L56e9db;
case 0x56e9df:c.instructions+=3;goto B56e9df;
case 0x56e9e0:c.instructions+=2;goto B56e9e0;
case 0x56e9e2:c.instructions+=1;goto B56e9e2;
case 0x56e9e7:goto L56e9e7;
case 0x56e9ea:goto L56e9ea;
case 0x56e9ee:c.instructions+=1;goto B56e9ee;
case 0x56e9f4:goto L56e9f4;
case 0x56e9f9:c.instructions+=1;goto B56e9f9;
case 0x56e9fe:goto L56e9fe;
case 0x56ea00:c.instructions+=2;goto B56ea00;
case 0x56ea05:c.instructions+=1;goto B56ea05;
case 0x56ea07:goto L56ea07;
case 0x56ea0c:goto L56ea0c;
case 0x56ea0e:c.instructions+=10;goto B56ea0e;
case 0x56ea11:c.instructions+=9;goto B56ea11;
case 0x56ea14:c.instructions+=8;goto B56ea14;
case 0x56ea16:c.instructions+=7;goto B56ea16;
case 0x56ea1a:c.instructions+=6;goto B56ea1a;
case 0x56ea1e:c.instructions+=5;goto B56ea1e;
case 0x56ea24:c.instructions+=4;goto B56ea24;
case 0x56ea27:c.instructions+=3;goto B56ea27;
case 0x56ea29:c.instructions+=2;goto B56ea29;
case 0x56ea2c:c.instructions+=1;goto B56ea2c;
case 0x56ea2e:goto L56ea2e;
case 0x56ea31:c.instructions+=4;goto B56ea31;
case 0x56ea37:c.instructions+=3;goto B56ea37;
case 0x56ea39:c.instructions+=2;goto B56ea39;
case 0x56ea3c:c.instructions+=1;goto B56ea3c;
case 0x56ea3e:goto L56ea3e;
case 0x56ea41:c.instructions+=4;goto B56ea41;
case 0x56ea44:c.instructions+=3;goto B56ea44;
case 0x56ea46:c.instructions+=2;goto B56ea46;
case 0x56ea49:c.instructions+=1;goto B56ea49;
case 0x56ea4b:goto L56ea4b;
case 0x56ea4e:c.instructions+=4;goto B56ea4e;
case 0x56ea54:c.instructions+=3;goto B56ea54;
case 0x56ea56:c.instructions+=2;goto B56ea56;
case 0x56ea59:c.instructions+=1;goto B56ea59;
case 0x56ea5b:goto L56ea5b;
case 0x56ea5e:c.instructions+=4;goto B56ea5e;
case 0x56ea61:c.instructions+=3;goto B56ea61;
case 0x56ea63:c.instructions+=2;goto B56ea63;
case 0x56ea66:c.instructions+=1;goto B56ea66;
case 0x56ea68:goto L56ea68;
case 0x56ea6b:c.instructions+=6;goto B56ea6b;
case 0x56ea6c:c.instructions+=5;goto B56ea6c;
case 0x56ea6f:c.instructions+=4;goto B56ea6f;
case 0x56ea71:c.instructions+=3;goto B56ea71;
case 0x56ea74:c.instructions+=2;goto B56ea74;
case 0x56ea76:c.instructions+=1;goto B56ea76;
case 0x56ea78:goto L56ea78;
case 0x56ea7b:c.instructions+=1;goto B56ea7b;
case 0x56ea7d:goto L56ea7d;
case 0x56ea80:c.instructions+=6;goto B56ea80;
case 0x56ea81:c.instructions+=5;goto B56ea81;
case 0x56ea84:c.instructions+=4;goto B56ea84;
case 0x56ea87:c.instructions+=3;goto B56ea87;
case 0x56ea89:c.instructions+=2;goto B56ea89;
case 0x56ea8c:c.instructions+=1;goto B56ea8c;
case 0x56ea8e:goto L56ea8e;
case 0x56ea91:c.instructions+=2;goto B56ea91;
case 0x56ea94:c.instructions+=1;goto B56ea94;
case 0x56ea97:goto L56ea97;
case 0x56ea9e:goto L56ea9e;
case 0x56ea9f:c.instructions+=2;goto B56ea9f;
case 0x56eaa2:c.instructions+=1;goto B56eaa2;
case 0x56eab0:goto L56eab0;
case 0x56eab1:c.instructions+=5;goto B56eab1;
case 0x56eab3:c.instructions+=4;goto B56eab3;
case 0x56eab6:c.instructions+=3;goto B56eab6;
case 0x56eab9:c.instructions+=2;goto B56eab9;
case 0x56eabb:c.instructions+=1;goto B56eabb;
case 0x56eabd:goto L56eabd;
case 0x56eac0:c.instructions+=2;goto B56eac0;
case 0x56eac3:c.instructions+=1;goto B56eac3;
case 0x56eac9:goto L56eac9;
case 0x56eacc:c.instructions+=2;goto B56eacc;
case 0x56eacf:c.instructions+=1;goto B56eacf;
case 0x56ead5:goto L56ead5;
case 0x56ead8:c.instructions+=1;goto B56ead8;
case 0x56eade:goto L56eade;
case 0x56eae3:c.instructions+=1;goto B56eae3;
case 0x56eae8:goto L56eae8;
case 0x56eaea:c.instructions+=1;goto B56eaea;
case 0x56eaec:goto L56eaec;
case 0x56eaef:c.instructions+=6;goto B56eaef;
case 0x56eaf3:c.instructions+=5;goto B56eaf3;
case 0x56eaf7:c.instructions+=4;goto B56eaf7;
case 0x56eafe:c.instructions+=3;goto B56eafe;
case 0x56eb00:c.instructions+=2;goto B56eb00;
case 0x56eb03:c.instructions+=1;goto B56eb03;
case 0x56eb05:goto L56eb05;
case 0x56eb0c:c.instructions+=1;goto B56eb0c;
case 0x56eb10:goto L56eb10;
case 0x56eb14:c.instructions+=3;goto B56eb14;
case 0x56eb19:c.instructions+=2;goto B56eb19;
case 0x56eb1c:c.instructions+=1;goto B56eb1c;
case 0x56eb21:goto L56eb21;
case 0x56eb23:c.instructions+=2;goto B56eb23;
case 0x56eb28:c.instructions+=1;goto B56eb28;
case 0x56eb2a:goto L56eb2a;
case 0x56eb2f:goto L56eb2f;
case 0x56eb31:c.instructions+=8;goto B56eb31;
case 0x56eb35:c.instructions+=7;goto B56eb35;
case 0x56eb38:c.instructions+=6;goto B56eb38;
case 0x56eb3b:c.instructions+=5;goto B56eb3b;
case 0x56eb3e:c.instructions+=4;goto B56eb3e;
case 0x56eb41:c.instructions+=3;goto B56eb41;
case 0x56eb43:c.instructions+=2;goto B56eb43;
case 0x56eb46:c.instructions+=1;goto B56eb46;
case 0x56eb48:goto L56eb48;
case 0x56eb4b:c.instructions+=1;goto B56eb4b;
case 0x56eb4e:goto L56eb4e;
case 0x56eb51:c.instructions+=3;goto B56eb51;
case 0x56eb54:c.instructions+=2;goto B56eb54;
case 0x56eb56:c.instructions+=1;goto B56eb56;
case 0x56eb58:goto L56eb58;
case 0x56eb5d:c.instructions+=2;goto B56eb5d;
case 0x56eb5f:c.instructions+=1;goto B56eb5f;
case 0x56eb64:goto L56eb64;
case 0x56eb67:c.instructions+=5;goto B56eb67;
case 0x56eb6a:c.instructions+=4;goto B56eb6a;
case 0x56eb70:c.instructions+=3;goto B56eb70;
case 0x56eb72:c.instructions+=2;goto B56eb72;
case 0x56eb75:c.instructions+=1;goto B56eb75;
case 0x56eb77:goto L56eb77;
case 0x56eb7a:c.instructions+=3;goto B56eb7a;
case 0x56eb7c:c.instructions+=2;goto B56eb7c;
case 0x56eb7f:c.instructions+=1;goto B56eb7f;
case 0x56eb81:goto L56eb81;
case 0x56eb84:c.instructions+=4;goto B56eb84;
case 0x56eb8a:c.instructions+=3;goto B56eb8a;
case 0x56eb8c:c.instructions+=2;goto B56eb8c;
case 0x56eb8f:c.instructions+=1;goto B56eb8f;
case 0x56eb91:goto L56eb91;
case 0x56eb94:c.instructions+=3;goto B56eb94;
case 0x56eb96:c.instructions+=2;goto B56eb96;
case 0x56eb99:c.instructions+=1;goto B56eb99;
case 0x56eb9b:goto L56eb9b;
case 0x56eb9d:c.instructions+=3;goto B56eb9d;
case 0x56eba0:c.instructions+=2;goto B56eba0;
case 0x56eba2:c.instructions+=1;goto B56eba2;
case 0x56eba7:goto L56eba7;
case 0x56eba9:c.instructions+=2;goto B56eba9;
case 0x56ebab:c.instructions+=1;goto B56ebab;
case 0x56ebb0:goto L56ebb0;
case 0x56ebb1:c.instructions+=1;goto B56ebb1;
case 0x56ebb4:goto L56ebb4;
case 0x56ebb8:c.instructions+=1;goto B56ebb8;
case 0x56ebba:goto L56ebba;
case 0x56ebbe:c.instructions+=2;goto B56ebbe;
case 0x56ebc1:c.instructions+=1;goto B56ebc1;
case 0x56ebc6:goto L56ebc6;
case 0x56ebc8:c.instructions+=4;goto B56ebc8;
case 0x56ebca:c.instructions+=3;goto B56ebca;
case 0x56ebcc:c.instructions+=2;goto B56ebcc;
case 0x56ebcf:c.instructions+=1;goto B56ebcf;
case 0x56ebd4:goto L56ebd4;
case 0x56ebd5:c.instructions+=1;goto B56ebd5;
case 0x56ebd8:goto L56ebd8;
case 0x56ebda:goto L56ebda;
case 0x56ebdb:c.instructions+=1;goto B56ebdb;
case 0x56ebe0:goto L56ebe0;
case 0x56ebe2:c.instructions+=13;goto B56ebe2;
case 0x56ebe7:c.instructions+=12;goto B56ebe7;
case 0x56ebed:c.instructions+=11;goto B56ebed;
case 0x56ebee:c.instructions+=10;goto B56ebee;
case 0x56ebf5:c.instructions+=9;goto B56ebf5;
case 0x56ebf6:c.instructions+=8;goto B56ebf6;
case 0x56ebf7:c.instructions+=7;goto B56ebf7;
case 0x56ebf8:c.instructions+=6;goto B56ebf8;
case 0x56ebf9:c.instructions+=5;goto B56ebf9;
case 0x56ebfb:c.instructions+=4;goto B56ebfb;
case 0x56ebfc:c.instructions+=3;goto B56ebfc;
case 0x56ebfe:c.instructions+=2;goto B56ebfe;
case 0x56ec03:c.instructions+=1;goto B56ec03;
case 0x56ec05:goto L56ec05;
case 0x56ec07:goto L56ec07;
case 0x56ec09:c.instructions+=3;goto B56ec09;
case 0x56ec0b:c.instructions+=2;goto B56ec0b;
case 0x56ec0d:c.instructions+=1;goto B56ec0d;
case 0x56ec10:goto L56ec10;
case 0x56ec16:c.instructions+=1;goto B56ec16;
case 0x56ec18:goto L56ec18;
case 0x56ec1e:c.instructions+=1;goto B56ec1e;
case 0x56ec20:goto L56ec20;
case 0x56ec22:c.instructions+=1;goto B56ec22;
case 0x56ec24:goto L56ec24;
case 0x56ec2a:c.instructions+=1;goto B56ec2a;
case 0x56ec2c:goto L56ec2c;
case 0x56ec32:c.instructions+=1;goto B56ec32;
case 0x56ec34:goto L56ec34;
case 0x56ec36:c.instructions+=1;goto B56ec36;
case 0x56ec38:goto L56ec38;
case 0x56ec3e:c.instructions+=1;goto B56ec3e;
case 0x56ec40:goto L56ec40;
case 0x56ec42:c.instructions+=1;goto B56ec42;
case 0x56ec44:goto L56ec44;
case 0x56ec4a:c.instructions+=1;goto B56ec4a;
case 0x56ec4c:goto L56ec4c;
case 0x56ec52:c.instructions+=1;goto B56ec52;
case 0x56ec54:goto L56ec54;
case 0x56ec56:c.instructions+=1;goto B56ec56;
case 0x56ec58:goto L56ec58;
case 0x56ec5e:c.instructions+=1;goto B56ec5e;
case 0x56ec60:goto L56ec60;
case 0x56ec66:c.instructions+=1;goto B56ec66;
case 0x56ec68:goto L56ec68;
case 0x56ec6a:c.instructions+=1;goto B56ec6a;
case 0x56ec6c:goto L56ec6c;
case 0x56ec72:c.instructions+=4;goto B56ec72;
case 0x56ec75:c.instructions+=3;goto B56ec75;
case 0x56ec77:c.instructions+=2;goto B56ec77;
case 0x56ec79:c.instructions+=1;goto B56ec79;
case 0x56ec7b:goto L56ec7b;
case 0x56ec81:c.instructions+=2;goto B56ec81;
case 0x56ec85:c.instructions+=1;goto B56ec85;
case 0x56ec87:goto L56ec87;
case 0x56ec8d:c.instructions+=2;goto B56ec8d;
case 0x56ec8e:c.instructions+=1;goto B56ec8e;
case 0x56ec93:goto L56ec93;
case 0x56ec95:c.instructions+=5;goto B56ec95;
case 0x56ec98:c.instructions+=4;goto B56ec98;
case 0x56ec9c:c.instructions+=3;goto B56ec9c;
case 0x56ec9e:c.instructions+=2;goto B56ec9e;
case 0x56eca2:c.instructions+=1;goto B56eca2;
case 0x56eca4:goto L56eca4;
case 0x56eca7:c.instructions+=8;goto B56eca7;
case 0x56ecaa:c.instructions+=7;goto B56ecaa;
case 0x56ecad:c.instructions+=6;goto B56ecad;
case 0x56ecb1:c.instructions+=5;goto B56ecb1;
case 0x56ecb4:c.instructions+=4;goto B56ecb4;
case 0x56ecb9:c.instructions+=3;goto B56ecb9;
case 0x56ecbc:c.instructions+=2;goto B56ecbc;
case 0x56ecbf:c.instructions+=1;goto B56ecbf;
case 0x56ecc4:goto L56ecc4;
case 0x56ecc6:goto L56ecc6;
case 0x56ecc8:goto L56ecc8;
case 0x56eccc:c.instructions+=2;goto B56eccc;
case 0x56ecd4:c.instructions+=1;goto B56ecd4;
case 0x56ecd8:goto L56ecd8;
case 0x56ecdb:c.instructions+=3;goto B56ecdb;
case 0x56ecdc:c.instructions+=2;goto B56ecdc;
case 0x56ece2:c.instructions+=1;goto B56ece2;
case 0x56ece8:goto L56ece8;
case 0x56ecec:c.instructions+=9;goto B56ecec;
case 0x56eced:c.instructions+=8;goto B56eced;
case 0x56ecf3:c.instructions+=7;goto B56ecf3;
case 0x56ecf4:c.instructions+=6;goto B56ecf4;
case 0x56ecf6:c.instructions+=5;goto B56ecf6;
case 0x56ecf7:c.instructions+=4;goto B56ecf7;
case 0x56ecf8:c.instructions+=3;goto B56ecf8;
case 0x56ecff:c.instructions+=2;goto B56ecff;
case 0x56ed02:c.instructions+=1;goto B56ed02;
case 0x56ed10:goto L56ed10;
case 0x56ed14:c.instructions+=3;goto B56ed14;
case 0x56ed17:c.instructions+=2;goto B56ed17;
case 0x56ed19:c.instructions+=1;goto B56ed19;
case 0x56ed1b:goto L56ed1b;
case 0x56ed1e:c.instructions+=2;goto B56ed1e;
case 0x56ed20:c.instructions+=1;goto B56ed20;
case 0x56ed22:goto L56ed22;
case 0x56ed26:c.instructions+=4;goto B56ed26;
case 0x56ed2a:c.instructions+=3;goto B56ed2a;
case 0x56ed2b:c.instructions+=2;goto B56ed2b;
case 0x56ed2c:c.instructions+=1;goto B56ed2c;
case 0x56ed31:goto L56ed31;
case 0x56ed40:goto L56ed40;
case 0x56ed43:c.instructions+=6;goto B56ed43;
case 0x56ed44:c.instructions+=5;goto B56ed44;
case 0x56ed45:c.instructions+=4;goto B56ed45;
case 0x56ed47:c.instructions+=3;goto B56ed47;
case 0x56ed48:c.instructions+=2;goto B56ed48;
case 0x56ed4d:c.instructions+=1;goto B56ed4d;
case 0x56ed52:goto L56ed52;
case 0x56ed54:c.instructions+=1;goto B56ed54;
case 0x56ed56:goto L56ed56;
case 0x56ed5b:c.instructions+=1;goto B56ed5b;
case 0x56ed5f:goto L56ed5f;
case 0x56ed61:c.instructions+=1;goto B56ed61;
case 0x56ed66:goto L56ed66;
case 0x56ed68:c.instructions+=1;goto B56ed68;
case 0x56ed6d:goto L56ed6d;
case 0x56ed71:c.instructions+=3;goto B56ed71;
case 0x56ed72:c.instructions+=2;goto B56ed72;
case 0x56ed74:c.instructions+=1;goto B56ed74;
case 0x56ed79:goto L56ed79;
case 0x56ed7d:c.instructions+=3;goto B56ed7d;
case 0x56ed7e:c.instructions+=2;goto B56ed7e;
case 0x56ed80:c.instructions+=1;goto B56ed80;
case 0x56ed85:goto L56ed85;
case 0x56ed87:c.instructions+=4;goto B56ed87;
case 0x56ed88:c.instructions+=3;goto B56ed88;
case 0x56ed8a:c.instructions+=2;goto B56ed8a;
case 0x56ed8e:c.instructions+=1;goto B56ed8e;
case 0x56ed93:goto L56ed93;
case 0x56ed96:c.instructions+=2;goto B56ed96;
case 0x56ed98:c.instructions+=1;goto B56ed98;
case 0x56ed9d:goto L56ed9d;
case 0x56eda1:c.instructions+=3;goto B56eda1;
case 0x56eda2:c.instructions+=2;goto B56eda2;
case 0x56eda4:c.instructions+=1;goto B56eda4;
case 0x56eda9:goto L56eda9;
case 0x56edad:c.instructions+=3;goto B56edad;
case 0x56edae:c.instructions+=2;goto B56edae;
case 0x56edb0:c.instructions+=1;goto B56edb0;
case 0x56edb5:goto L56edb5;
case 0x56edb8:c.instructions+=15;goto B56edb8;
case 0x56edbb:c.instructions+=14;goto B56edbb;
case 0x56edbf:c.instructions+=13;goto B56edbf;
case 0x56edc2:c.instructions+=12;goto B56edc2;
case 0x56edc5:c.instructions+=11;goto B56edc5;
case 0x56edc7:c.instructions+=10;goto B56edc7;
case 0x56edcd:c.instructions+=9;goto B56edcd;
case 0x56edd1:c.instructions+=8;goto B56edd1;
case 0x56edd5:c.instructions+=7;goto B56edd5;
case 0x56edd9:c.instructions+=6;goto B56edd9;
case 0x56eddb:c.instructions+=5;goto B56eddb;
case 0x56eddf:c.instructions+=4;goto B56eddf;
case 0x56ede5:c.instructions+=3;goto B56ede5;
case 0x56ede7:c.instructions+=2;goto B56ede7;
case 0x56edea:c.instructions+=1;goto B56edea;
case 0x56edec:goto L56edec;
case 0x56edef:c.instructions+=2;goto B56edef;
case 0x56edf1:c.instructions+=1;goto B56edf1;
case 0x56edf3:goto L56edf3;
case 0x56edf5:c.instructions+=4;goto B56edf5;
case 0x56edf7:c.instructions+=3;goto B56edf7;
case 0x56edf9:c.instructions+=2;goto B56edf9;
case 0x56edfe:c.instructions+=1;goto B56edfe;
case 0x56ee00:goto L56ee00;
case 0x56ee03:c.instructions+=2;goto B56ee03;
case 0x56ee05:c.instructions+=1;goto B56ee05;
case 0x56ee07:goto L56ee07;
case 0x56ee0a:c.instructions+=2;goto B56ee0a;
case 0x56ee0c:c.instructions+=1;goto B56ee0c;
case 0x56ee0e:goto L56ee0e;
case 0x56ee10:c.instructions+=1;goto B56ee10;
case 0x56ee12:goto L56ee12;
case 0x56ee14:c.instructions+=1;goto B56ee14;
case 0x56ee19:goto L56ee19;
case 0x56ee1d:c.instructions+=4;goto B56ee1d;
case 0x56ee23:c.instructions+=3;goto B56ee23;
case 0x56ee25:c.instructions+=2;goto B56ee25;
case 0x56ee28:c.instructions+=1;goto B56ee28;
case 0x56ee2a:goto L56ee2a;
case 0x56ee2d:c.instructions+=4;goto B56ee2d;
case 0x56ee33:c.instructions+=3;goto B56ee33;
case 0x56ee37:c.instructions+=2;goto B56ee37;
case 0x56ee3b:c.instructions+=1;goto B56ee3b;
case 0x56ee3f:goto L56ee3f;
case 0x56ee42:c.instructions+=5;goto B56ee42;
case 0x56ee43:c.instructions+=4;goto B56ee43;
case 0x56ee44:c.instructions+=3;goto B56ee44;
case 0x56ee45:c.instructions+=2;goto B56ee45;
case 0x56ee48:c.instructions+=1;goto B56ee48;
case 0x56ee4b:goto L56ee4b;
case 0x56ee4f:c.instructions+=4;goto B56ee4f;
case 0x56ee55:c.instructions+=3;goto B56ee55;
case 0x56ee57:c.instructions+=2;goto B56ee57;
case 0x56ee5a:c.instructions+=1;goto B56ee5a;
case 0x56ee5c:goto L56ee5c;
case 0x56ee5e:c.instructions+=8;goto B56ee5e;
case 0x56ee62:c.instructions+=7;goto B56ee62;
case 0x56ee64:c.instructions+=6;goto B56ee64;
case 0x56ee68:c.instructions+=5;goto B56ee68;
case 0x56ee6a:c.instructions+=4;goto B56ee6a;
case 0x56ee6d:c.instructions+=3;goto B56ee6d;
case 0x56ee6e:c.instructions+=2;goto B56ee6e;
case 0x56ee70:c.instructions+=1;goto B56ee70;
case 0x56ee75:goto L56ee75;
case 0x56ee78:c.instructions+=2;goto B56ee78;
case 0x56ee7a:c.instructions+=1;goto B56ee7a;
case 0x56ee7c:goto L56ee7c;
case 0x56ee7f:c.instructions+=3;goto B56ee7f;
case 0x56ee81:c.instructions+=2;goto B56ee81;
case 0x56ee84:c.instructions+=1;goto B56ee84;
case 0x56ee89:goto L56ee89;
case 0x56ee8b:c.instructions+=5;goto B56ee8b;
case 0x56ee8e:c.instructions+=4;goto B56ee8e;
case 0x56ee94:c.instructions+=3;goto B56ee94;
case 0x56ee96:c.instructions+=2;goto B56ee96;
case 0x56ee99:c.instructions+=1;goto B56ee99;
case 0x56ee9b:goto L56ee9b;
case 0x56ee9d:c.instructions+=8;goto B56ee9d;
case 0x56eea0:c.instructions+=7;goto B56eea0;
case 0x56eea2:c.instructions+=6;goto B56eea2;
case 0x56eea8:c.instructions+=5;goto B56eea8;
case 0x56eeae:c.instructions+=4;goto B56eeae;
case 0x56eeb0:c.instructions+=3;goto B56eeb0;
case 0x56eeb2:c.instructions+=2;goto B56eeb2;
case 0x56eeb5:c.instructions+=1;goto B56eeb5;
case 0x56eeb7:goto L56eeb7;
case 0x56eeb8:c.instructions+=5;goto B56eeb8;
case 0x56eebb:c.instructions+=4;goto B56eebb;
case 0x56eebc:c.instructions+=3;goto B56eebc;
case 0x56eebd:c.instructions+=2;goto B56eebd;
case 0x56eec0:c.instructions+=1;goto B56eec0;
case 0x56eec3:goto L56eec3;
case 0x56eec5:goto L56eec5;
case 0x56eec6:c.instructions+=5;goto B56eec6;
case 0x56eec9:c.instructions+=4;goto B56eec9;
case 0x56eeca:c.instructions+=3;goto B56eeca;
case 0x56eecb:c.instructions+=2;goto B56eecb;
case 0x56eece:c.instructions+=1;goto B56eece;
case 0x56eed1:goto L56eed1;
case 0x56eed2:c.instructions+=5;goto B56eed2;
case 0x56eed4:c.instructions+=4;goto B56eed4;
case 0x56eed5:c.instructions+=3;goto B56eed5;
case 0x56eed6:c.instructions+=2;goto B56eed6;
case 0x56eed9:c.instructions+=1;goto B56eed9;
case 0x56eee0:goto L56eee0;
case 0x56eee1:c.instructions+=7;goto B56eee1;
case 0x56eee2:c.instructions+=6;goto B56eee2;
case 0x56eee4:c.instructions+=5;goto B56eee4;
case 0x56eee6:c.instructions+=4;goto B56eee6;
case 0x56eee9:c.instructions+=3;goto B56eee9;
case 0x56eeeb:c.instructions+=2;goto B56eeeb;
case 0x56eeed:c.instructions+=1;goto B56eeed;
case 0x56eeef:goto L56eeef;
case 0x56eef2:c.instructions+=2;goto B56eef2;
case 0x56eef4:c.instructions+=1;goto B56eef4;
case 0x56eef6:goto L56eef6;
case 0x56eef9:c.instructions+=3;goto B56eef9;
case 0x56eefb:c.instructions+=2;goto B56eefb;
case 0x56eefe:c.instructions+=1;goto B56eefe;
case 0x56ef00:goto L56ef00;
case 0x56ef03:c.instructions+=3;goto B56ef03;
case 0x56ef06:c.instructions+=2;goto B56ef06;
case 0x56ef08:c.instructions+=1;goto B56ef08;
case 0x56ef0a:goto L56ef0a;
case 0x56ef0d:c.instructions+=2;goto B56ef0d;
case 0x56ef0f:c.instructions+=1;goto B56ef0f;
case 0x56ef11:goto L56ef11;
case 0x56ef13:c.instructions+=2;goto B56ef13;
case 0x56ef18:c.instructions+=1;goto B56ef18;
case 0x56ef1d:goto L56ef1d;
case 0x56ef1f:goto L56ef1f;
case 0x56ef22:c.instructions+=4;goto B56ef22;
case 0x56ef25:c.instructions+=3;goto B56ef25;
case 0x56ef28:c.instructions+=2;goto B56ef28;
case 0x56ef2a:c.instructions+=1;goto B56ef2a;
case 0x56ef2c:goto L56ef2c;
case 0x56ef2f:c.instructions+=2;goto B56ef2f;
case 0x56ef31:c.instructions+=1;goto B56ef31;
case 0x56ef33:goto L56ef33;
case 0x56ef3a:c.instructions+=1;goto B56ef3a;
case 0x56ef3c:goto L56ef3c;
case 0x56ef3e:goto L56ef3e;
case 0x56ef41:c.instructions+=1;goto B56ef41;
case 0x56ef44:goto L56ef44;
case 0x56ef46:c.instructions+=3;goto B56ef46;
case 0x56ef49:c.instructions+=2;goto B56ef49;
case 0x56ef4b:c.instructions+=1;goto B56ef4b;
case 0x56ef51:goto L56ef51;
case 0x56ef54:c.instructions+=2;goto B56ef54;
case 0x56ef56:c.instructions+=1;goto B56ef56;
case 0x56ef5c:goto L56ef5c;
case 0x56ef5f:c.instructions+=3;goto B56ef5f;
case 0x56ef61:c.instructions+=2;goto B56ef61;
case 0x56ef64:c.instructions+=1;goto B56ef64;
case 0x56ef66:goto L56ef66;
case 0x56ef69:c.instructions+=3;goto B56ef69;
case 0x56ef6c:c.instructions+=2;goto B56ef6c;
case 0x56ef6e:c.instructions+=1;goto B56ef6e;
case 0x56ef70:goto L56ef70;
case 0x56ef73:c.instructions+=2;goto B56ef73;
case 0x56ef75:c.instructions+=1;goto B56ef75;
case 0x56ef77:goto L56ef77;
case 0x56ef79:c.instructions+=2;goto B56ef79;
case 0x56ef7e:c.instructions+=1;goto B56ef7e;
case 0x56ef83:goto L56ef83;
case 0x56ef85:goto L56ef85;
case 0x56ef88:c.instructions+=4;goto B56ef88;
case 0x56ef8b:c.instructions+=3;goto B56ef8b;
case 0x56ef8e:c.instructions+=2;goto B56ef8e;
case 0x56ef90:c.instructions+=1;goto B56ef90;
case 0x56ef92:goto L56ef92;
case 0x56ef95:c.instructions+=2;goto B56ef95;
case 0x56ef97:c.instructions+=1;goto B56ef97;
case 0x56ef99:goto L56ef99;
case 0x56efa0:goto L56efa0;
case 0x56efa5:c.instructions+=2;goto B56efa5;
case 0x56efa7:c.instructions+=1;goto B56efa7;
case 0x56efa9:goto L56efa9;
case 0x56efae:c.instructions+=2;goto B56efae;
case 0x56efb0:c.instructions+=1;goto B56efb0;
case 0x56efb2:goto L56efb2;
case 0x56efb4:c.instructions+=4;goto B56efb4;
case 0x56efb6:c.instructions+=3;goto B56efb6;
case 0x56efba:c.instructions+=2;goto B56efba;
case 0x56efbb:c.instructions+=1;goto B56efbb;
case 0x56efc0:goto L56efc0;
case 0x56efc3:c.instructions+=1;goto B56efc3;
case 0x56efc5:goto L56efc5;
case 0x56efc7:c.instructions+=4;goto B56efc7;
case 0x56efca:c.instructions+=3;goto B56efca;
case 0x56efcc:c.instructions+=2;goto B56efcc;
case 0x56efce:c.instructions+=1;goto B56efce;
case 0x56efd1:goto L56efd1;
case 0x56efd3:c.instructions+=1;goto B56efd3;
case 0x56efd5:goto L56efd5;
case 0x56efd8:c.instructions+=3;goto B56efd8;
case 0x56efdb:c.instructions+=2;goto B56efdb;
case 0x56efdd:c.instructions+=1;goto B56efdd;
case 0x56efdf:goto L56efdf;
case 0x56efe2:c.instructions+=2;goto B56efe2;
case 0x56efe4:c.instructions+=1;goto B56efe4;
case 0x56efe6:goto L56efe6;
case 0x56efe8:c.instructions+=2;goto B56efe8;
case 0x56efed:c.instructions+=1;goto B56efed;
case 0x56eff2:goto L56eff2;
case 0x56eff3:c.instructions+=2;goto B56eff3;
case 0x56eff4:c.instructions+=1;goto B56eff4;
case 0x56eff5:goto L56eff5;
case 0x56eff8:c.instructions+=3;goto B56eff8;
case 0x56effb:c.instructions+=2;goto B56effb;
case 0x56effd:c.instructions+=1;goto B56effd;
case 0x56efff:goto L56efff;
default:missing_instruction(c.pc);}
B56e001:L56e001:{c.instructions+=2;NFSU2_TR(0x56e001);
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
B56e003:{NFSU2_TR(0x56e003);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56e006:L56e006:{c.instructions+=7;NFSU2_TR(0x56e006);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56e009:{NFSU2_TR(0x56e009);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1d8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56e00f:{NFSU2_TR(0x56e00f);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56e012:{NFSU2_TR(0x56e012);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B56e018:{NFSU2_TR(0x56e018);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56e01a:{NFSU2_TR(0x56e01a);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B56e01d:{NFSU2_TR(0x56e01d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56e027;}}
}
B56e01f:L56e01f:{c.instructions+=2;NFSU2_TR(0x56e01f);
w4(R+0,u32(0x1ull));
}
B56e024:{NFSU2_TR(0x56e024);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56e027:L56e027:{c.instructions+=2;NFSU2_TR(0x56e027);
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
B56e029:{NFSU2_TR(0x56e029);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56e030:L56e030:{c.instructions+=6;NFSU2_TR(0x56e030);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56e031:{NFSU2_TR(0x56e031);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56e032:{NFSU2_TR(0x56e032);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B56e035:{NFSU2_TR(0x56e035);
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
B56e037:{NFSU2_TR(0x56e037);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56e038:{NFSU2_TR(0x56e038);
if(r1(R+518)){{goto L56e086;}}
}
B56e03a:L56e03a:{c.instructions+=3;NFSU2_TR(0x56e03a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B56e03d:{NFSU2_TR(0x56e03d);
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
B56e03f:{NFSU2_TR(0x56e03f);
if(r1(R+518)){{goto L56e086;}}
}
B56e041:L56e041:{c.instructions+=3;NFSU2_TR(0x56e041);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56e042:{NFSU2_TR(0x56e042);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56e04a:{NFSU2_TR(0x56e04a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56e04full));
TAIL_STATIC(0x56dff0u,56d);
}
B56e04f:L56e04f:{c.instructions+=2;NFSU2_TR(0x56e04f);
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
B56e051:{NFSU2_TR(0x56e051);
if(r1(R+518)){{goto L56e07c;}}
}
B56e053:L56e053:{c.instructions+=5;NFSU2_TR(0x56e053);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x60ull))));
}
B56e056:{NFSU2_TR(0x56e056);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56e057:{NFSU2_TR(0x56e057);
u8 U[6];
w1(R+512,carry<u32>(r4(R+28),u32(0x60ull)));
w1(R+523,scarry<u32>(r4(R+28),u32(0x60ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x60ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B56e05a:{NFSU2_TR(0x56e05a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56e05b:{NFSU2_TR(0x56e05b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56e060ull));
TAIL_STATIC(0x43ce10u,43c);
}
B56e060:L56e060:{c.instructions+=5;NFSU2_TR(0x56e060);
{u32 ea_=u32(u32(8365832u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B56e066:{NFSU2_TR(0x56e066);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B56e069:{NFSU2_TR(0x56e069);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56e06b:{NFSU2_TR(0x56e06b);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B56e06e:{NFSU2_TR(0x56e06e);
if(r1(R+514)){{goto L56e07c;}}
}
B56e070:L56e070:{c.instructions+=5;NFSU2_TR(0x56e070);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56e076:{NFSU2_TR(0x56e076);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56e077:{NFSU2_TR(0x56e077);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56e078:{NFSU2_TR(0x56e078);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B56e079:{NFSU2_TR(0x56e079);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56e07c:L56e07c:{c.instructions+=5;NFSU2_TR(0x56e07c);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56e080:{NFSU2_TR(0x56e080);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56e081:{NFSU2_TR(0x56e081);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56e082:{NFSU2_TR(0x56e082);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B56e083:{NFSU2_TR(0x56e083);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56e086:L56e086:{c.instructions+=5;NFSU2_TR(0x56e086);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56e08c:{NFSU2_TR(0x56e08c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56e08d:{NFSU2_TR(0x56e08d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56e08e:{NFSU2_TR(0x56e08e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B56e08f:{NFSU2_TR(0x56e08f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56e0a0:L56e0a0:{c.instructions+=10;NFSU2_TR(0x56e0a0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56e0a1:{NFSU2_TR(0x56e0a1);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56e0a7:{NFSU2_TR(0x56e0a7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56e0a8:{NFSU2_TR(0x56e0a8);
__builtin_memmove((R+28),(R+4),4);
}
B56e0aa:{NFSU2_TR(0x56e0aa);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B56e0ae:{NFSU2_TR(0x56e0ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B56e0b0:{NFSU2_TR(0x56e0b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B56e0b2:{NFSU2_TR(0x56e0b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56e0b5:{NFSU2_TR(0x56e0b5);
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
B56e0b7:{NFSU2_TR(0x56e0b7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56e1c1;}}
}
B56e0bd:L56e0bd:{c.instructions+=8;NFSU2_TR(0x56e0bd);
__builtin_memmove((R+4),gp(0x890080),4);
}
B56e0c3:{NFSU2_TR(0x56e0c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56e0c6:{NFSU2_TR(0x56e0c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56e0c9:{NFSU2_TR(0x56e0c9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56e0ca:{NFSU2_TR(0x56e0ca);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B56e0cc:{NFSU2_TR(0x56e0cc);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B56e0ce:{NFSU2_TR(0x56e0ce);
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
B56e0d0:{NFSU2_TR(0x56e0d0);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L56e1c0;}}
}
B56e0d6:L56e0d6:{c.instructions+=5;NFSU2_TR(0x56e0d6);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B56e0d8:{NFSU2_TR(0x56e0d8);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B56e0dc:{NFSU2_TR(0x56e0dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56e0df:{NFSU2_TR(0x56e0df);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56e0e1:{NFSU2_TR(0x56e0e1);
if(r1(R+518)){{goto L56e1af;}}
}
B56e0e7:L56e0e7:{c.instructions+=7;NFSU2_TR(0x56e0e7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
}
B56e0ea:{NFSU2_TR(0x56e0ea);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B56e0ec:{NFSU2_TR(0x56e0ec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56e0ed:{NFSU2_TR(0x56e0ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56e0f0:{NFSU2_TR(0x56e0f0);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x60ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x60ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B56e0f3:{NFSU2_TR(0x56e0f3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56e0f4:{NFSU2_TR(0x56e0f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56e0f9ull));
TAIL_STATIC(0x43ce10u,43c);
}
B56e0f9:L56e0f9:{c.instructions+=5;NFSU2_TR(0x56e0f9);
{u32 ea_=u32(u32(8365836u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B56e0ff:{NFSU2_TR(0x56e0ff);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B56e102:{NFSU2_TR(0x56e102);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56e104:{NFSU2_TR(0x56e104);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56e107:{NFSU2_TR(0x56e107);
if(r1(R+518)){{goto L56e111;}}
}
B56e109:L56e109:{c.instructions+=2;NFSU2_TR(0x56e109);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B56e10b:{NFSU2_TR(0x56e10b);
{u32 ea_=u32(u32(8365836u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56e111:L56e111:{c.instructions+=5;NFSU2_TR(0x56e111);
{u32 ea_=u32(u32(8365840u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56e117:{NFSU2_TR(0x56e117);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B56e119:{NFSU2_TR(0x56e119);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56e11b:{NFSU2_TR(0x56e11b);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B56e11e:{NFSU2_TR(0x56e11e);
if(r1(R+514)){{goto L56e128;}}
}
B56e120:L56e120:{c.instructions+=2;NFSU2_TR(0x56e120);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B56e122:{NFSU2_TR(0x56e122);
{u32 ea_=u32(u32(8365840u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56e128:L56e128:{c.instructions+=11;NFSU2_TR(0x56e128);
{u32 ea_=u32(u32(8365836u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B56e12e:{NFSU2_TR(0x56e12e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56e131:{NFSU2_TR(0x56e131);
{u32 ea_=u32(u32(8365840u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56e137:{NFSU2_TR(0x56e137);
{u32 ea_=u32(u32(8365836u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B56e13d:{NFSU2_TR(0x56e13d);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B56e13f:{NFSU2_TR(0x56e13f);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B56e145:{NFSU2_TR(0x56e145);
{u32 ea_=u32(r4(R+4)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56e14b:{NFSU2_TR(0x56e14b);
{u32 ea_=u32(u32(8365844u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B56e151:{NFSU2_TR(0x56e151);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56e153:{NFSU2_TR(0x56e153);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56e156:{NFSU2_TR(0x56e156);
if(r1(R+518)){{goto L56e160;}}
}
B56e158:L56e158:{c.instructions+=2;NFSU2_TR(0x56e158);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B56e15a:{NFSU2_TR(0x56e15a);
{u32 ea_=u32(u32(8365844u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56e160:L56e160:{c.instructions+=5;NFSU2_TR(0x56e160);
{u32 ea_=u32(u32(8365848u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56e166:{NFSU2_TR(0x56e166);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B56e168:{NFSU2_TR(0x56e168);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56e16a:{NFSU2_TR(0x56e16a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B56e16d:{NFSU2_TR(0x56e16d);
if(r1(R+514)){{goto L56e177;}}
}
B56e16f:L56e16f:{c.instructions+=2;NFSU2_TR(0x56e16f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B56e171:{NFSU2_TR(0x56e171);
{u32 ea_=u32(u32(8365848u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56e177:L56e177:{c.instructions+=12;NFSU2_TR(0x56e177);
{u32 ea_=u32(u32(8365844u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B56e17d:{NFSU2_TR(0x56e17d);
__builtin_memmove((R+4),gp(0x890080),4);
}
B56e183:{NFSU2_TR(0x56e183);
{u32 ea_=u32(u32(8365848u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56e189:{NFSU2_TR(0x56e189);
{u32 ea_=u32(u32(8365844u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B56e18f:{NFSU2_TR(0x56e18f);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B56e191:{NFSU2_TR(0x56e191);
{u32 ea_=u32(u32(8365856u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56e197:{NFSU2_TR(0x56e197);
{u32 ea_=u32(u32(8365852u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B56e19d:{NFSU2_TR(0x56e19d);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B56e19f:{NFSU2_TR(0x56e19f);
{u32 ea_=u32(u32(8365852u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B56e1a5:{NFSU2_TR(0x56e1a5);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B56e1a7:{NFSU2_TR(0x56e1a7);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B56e1ab:{NFSU2_TR(0x56e1ab);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B56e1af:L56e1af:{c.instructions+=6;NFSU2_TR(0x56e1af);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56e1b2:{NFSU2_TR(0x56e1b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56e1b5:{NFSU2_TR(0x56e1b5);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B56e1b6:{NFSU2_TR(0x56e1b6);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B56e1b8:{NFSU2_TR(0x56e1b8);
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
B56e1ba:{NFSU2_TR(0x56e1ba);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x56e0d6u);}goto L56e0d6;}}
}
B56e1c0:L56e1c0:{c.instructions+=1;NFSU2_TR(0x56e1c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56e1c1:L56e1c1:{c.instructions+=3;NFSU2_TR(0x56e1c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56e1c2:{NFSU2_TR(0x56e1c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B56e1c3:{NFSU2_TR(0x56e1c3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56e1d0:L56e1d0:{c.instructions+=25;NFSU2_TR(0x56e1d0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56e1d1:{NFSU2_TR(0x56e1d1);
__builtin_memmove((R+20),(R+16),4);
}
B56e1d3:{NFSU2_TR(0x56e1d3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B56e1d6:{NFSU2_TR(0x56e1d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8cull))));
}
B56e1dc:{NFSU2_TR(0x56e1dc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56e1dd:{NFSU2_TR(0x56e1dd);
__builtin_memmove((R+24),(R+4),4);
}
B56e1df:{NFSU2_TR(0x56e1df);
{u32 ea_=u32(r4(R+24)+u32(192u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56e1e5:{NFSU2_TR(0x56e1e5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56e1ed:{NFSU2_TR(0x56e1ed);
{u32 ea_=u32(u32(7881276u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56e1f3:{NFSU2_TR(0x56e1f3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56e1fb:{NFSU2_TR(0x56e1fb);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56e203:{NFSU2_TR(0x56e203);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56e20b:{NFSU2_TR(0x56e20b);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56e213:{NFSU2_TR(0x56e213);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56e21b:{NFSU2_TR(0x56e21b);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56e223:{NFSU2_TR(0x56e223);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56e22b:{NFSU2_TR(0x56e22b);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56e233:{NFSU2_TR(0x56e233);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56e23b:{NFSU2_TR(0x56e23b);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56e243:{NFSU2_TR(0x56e243);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56e24b:{NFSU2_TR(0x56e24b);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56e253:{NFSU2_TR(0x56e253);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56e25b:{NFSU2_TR(0x56e25b);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56e263:{NFSU2_TR(0x56e263);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56e26b:{NFSU2_TR(0x56e26b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56e270ull));
TAIL_STATIC(0x75bed4u,75b);
}
B56e270:L56e270:{c.instructions+=6;NFSU2_TR(0x56e270);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B56e274:{NFSU2_TR(0x56e274);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56e275:{NFSU2_TR(0x56e275);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B56e279:{NFSU2_TR(0x56e279);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56e27a:{NFSU2_TR(0x56e27a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56e27b:{NFSU2_TR(0x56e27b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56e280ull));
TAIL_STATIC(0x5bada0u,5ba);
}
B56e280:L56e280:{c.instructions+=197;NFSU2_TR(0x56e280);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56e284:{NFSU2_TR(0x56e284);
{u32 ea_=u32(r4(R+24)+u32(176u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56e28a:{NFSU2_TR(0x56e28a);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56e28e:{NFSU2_TR(0x56e28e);
{u32 ea_=u32(r4(R+24)+u32(128u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56e294:{NFSU2_TR(0x56e294);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B56e296:{NFSU2_TR(0x56e296);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56e29a:{NFSU2_TR(0x56e29a);
{u32 ea_=u32(r4(R+24)+u32(144u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56e2a0:{NFSU2_TR(0x56e2a0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B56e2a2:{NFSU2_TR(0x56e2a2);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56e2a6:{NFSU2_TR(0x56e2a6);
{u32 ea_=u32(r4(R+24)+u32(160u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56e2ac:{NFSU2_TR(0x56e2ac);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B56e2ae:{NFSU2_TR(0x56e2ae);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B56e2b2:{NFSU2_TR(0x56e2b2);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56e2b6:{NFSU2_TR(0x56e2b6);
{u32 ea_=u32(r4(R+24)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56e2bc:{NFSU2_TR(0x56e2bc);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56e2c0:{NFSU2_TR(0x56e2c0);
{u32 ea_=u32(r4(R+24)+u32(164u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56e2c6:{NFSU2_TR(0x56e2c6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B56e2c8:{NFSU2_TR(0x56e2c8);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56e2cc:{NFSU2_TR(0x56e2cc);
{u32 ea_=u32(r4(R+24)+u32(132u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56e2d2:{NFSU2_TR(0x56e2d2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B56e2d4:{NFSU2_TR(0x56e2d4);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56e2d8:{NFSU2_TR(0x56e2d8);
{u32 ea_=u32(r4(R+24)+u32(180u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56e2de:{NFSU2_TR(0x56e2de);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B56e2e0:{NFSU2_TR(0x56e2e0);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B56e2e4:{NFSU2_TR(0x56e2e4);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56e2e8:{NFSU2_TR(0x56e2e8);
{u32 ea_=u32(r4(R+24)+u32(152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56e2ee:{NFSU2_TR(0x56e2ee);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56e2f2:{NFSU2_TR(0x56e2f2);
{u32 ea_=u32(r4(R+24)+u32(168u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56e2f8:{NFSU2_TR(0x56e2f8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B56e2fa:{NFSU2_TR(0x56e2fa);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56e2fe:{NFSU2_TR(0x56e2fe);
{u32 ea_=u32(r4(R+24)+u32(184u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56e304:{NFSU2_TR(0x56e304);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B56e306:{NFSU2_TR(0x56e306);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56e30a:{NFSU2_TR(0x56e30a);
{u32 ea_=u32(r4(R+24)+u32(136u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56e310:{NFSU2_TR(0x56e310);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B56e312:{NFSU2_TR(0x56e312);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B56e316:{NFSU2_TR(0x56e316);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56e31a:{NFSU2_TR(0x56e31a);
{u32 ea_=u32(r4(R+24)+u32(188u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56e320:{NFSU2_TR(0x56e320);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56e324:{NFSU2_TR(0x56e324);
{u32 ea_=u32(r4(R+24)+u32(140u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56e32a:{NFSU2_TR(0x56e32a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B56e32c:{NFSU2_TR(0x56e32c);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56e330:{NFSU2_TR(0x56e330);
{u32 ea_=u32(r4(R+24)+u32(156u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56e336:{NFSU2_TR(0x56e336);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B56e338:{NFSU2_TR(0x56e338);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56e33c:{NFSU2_TR(0x56e33c);
{u32 ea_=u32(r4(R+24)+u32(172u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56e342:{NFSU2_TR(0x56e342);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B56e344:{NFSU2_TR(0x56e344);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B56e348:{NFSU2_TR(0x56e348);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56e34c:{NFSU2_TR(0x56e34c);
{u32 ea_=u32(r4(R+24)+u32(176u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56e352:{NFSU2_TR(0x56e352);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56e356:{NFSU2_TR(0x56e356);
{u32 ea_=u32(r4(R+24)+u32(144u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56e35c:{NFSU2_TR(0x56e35c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B56e35e:{NFSU2_TR(0x56e35e);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56e362:{NFSU2_TR(0x56e362);
{u32 ea_=u32(r4(R+24)+u32(160u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56e368:{NFSU2_TR(0x56e368);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B56e36a:{NFSU2_TR(0x56e36a);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56e36e:{NFSU2_TR(0x56e36e);
{u32 ea_=u32(r4(R+24)+u32(128u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56e374:{NFSU2_TR(0x56e374);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B56e376:{NFSU2_TR(0x56e376);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B56e37a:{NFSU2_TR(0x56e37a);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56e37e:{NFSU2_TR(0x56e37e);
{u32 ea_=u32(r4(R+24)+u32(164u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56e384:{NFSU2_TR(0x56e384);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56e388:{NFSU2_TR(0x56e388);
{u32 ea_=u32(r4(R+24)+u32(132u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56e38e:{NFSU2_TR(0x56e38e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B56e390:{NFSU2_TR(0x56e390);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56e394:{NFSU2_TR(0x56e394);
{u32 ea_=u32(r4(R+24)+u32(180u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56e39a:{NFSU2_TR(0x56e39a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B56e39c:{NFSU2_TR(0x56e39c);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56e3a0:{NFSU2_TR(0x56e3a0);
{u32 ea_=u32(r4(R+24)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56e3a6:{NFSU2_TR(0x56e3a6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B56e3a8:{NFSU2_TR(0x56e3a8);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B56e3ac:{NFSU2_TR(0x56e3ac);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56e3b0:{NFSU2_TR(0x56e3b0);
{u32 ea_=u32(r4(R+24)+u32(152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56e3b6:{NFSU2_TR(0x56e3b6);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56e3ba:{NFSU2_TR(0x56e3ba);
{u32 ea_=u32(r4(R+24)+u32(168u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56e3c0:{NFSU2_TR(0x56e3c0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B56e3c2:{NFSU2_TR(0x56e3c2);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56e3c6:{NFSU2_TR(0x56e3c6);
{u32 ea_=u32(r4(R+24)+u32(136u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56e3cc:{NFSU2_TR(0x56e3cc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B56e3ce:{NFSU2_TR(0x56e3ce);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56e3d2:{NFSU2_TR(0x56e3d2);
{u32 ea_=u32(r4(R+24)+u32(184u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56e3d8:{NFSU2_TR(0x56e3d8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B56e3da:{NFSU2_TR(0x56e3da);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B56e3de:{NFSU2_TR(0x56e3de);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56e3e2:{NFSU2_TR(0x56e3e2);
{u32 ea_=u32(r4(R+24)+u32(188u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56e3e8:{NFSU2_TR(0x56e3e8);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56e3ec:{NFSU2_TR(0x56e3ec);
{u32 ea_=u32(r4(R+24)+u32(156u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56e3f2:{NFSU2_TR(0x56e3f2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B56e3f4:{NFSU2_TR(0x56e3f4);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56e3f8:{NFSU2_TR(0x56e3f8);
{u32 ea_=u32(r4(R+24)+u32(172u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56e3fe:{NFSU2_TR(0x56e3fe);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B56e400:{NFSU2_TR(0x56e400);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56e404:{NFSU2_TR(0x56e404);
{u32 ea_=u32(r4(R+24)+u32(140u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56e40a:{NFSU2_TR(0x56e40a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B56e40c:{NFSU2_TR(0x56e40c);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B56e410:{NFSU2_TR(0x56e410);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56e414:{NFSU2_TR(0x56e414);
{u32 ea_=u32(r4(R+24)+u32(144u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56e41a:{NFSU2_TR(0x56e41a);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56e41e:{NFSU2_TR(0x56e41e);
{u32 ea_=u32(r4(R+24)+u32(160u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56e424:{NFSU2_TR(0x56e424);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B56e426:{NFSU2_TR(0x56e426);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56e42a:{NFSU2_TR(0x56e42a);
{u32 ea_=u32(r4(R+24)+u32(128u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56e430:{NFSU2_TR(0x56e430);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B56e432:{NFSU2_TR(0x56e432);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56e436:{NFSU2_TR(0x56e436);
{u32 ea_=u32(r4(R+24)+u32(176u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56e43c:{NFSU2_TR(0x56e43c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B56e43e:{NFSU2_TR(0x56e43e);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B56e442:{NFSU2_TR(0x56e442);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56e446:{NFSU2_TR(0x56e446);
{u32 ea_=u32(r4(R+24)+u32(164u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56e44c:{NFSU2_TR(0x56e44c);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56e450:{NFSU2_TR(0x56e450);
{u32 ea_=u32(r4(R+24)+u32(132u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56e456:{NFSU2_TR(0x56e456);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B56e458:{NFSU2_TR(0x56e458);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56e45c:{NFSU2_TR(0x56e45c);
{u32 ea_=u32(r4(R+24)+u32(180u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56e462:{NFSU2_TR(0x56e462);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B56e464:{NFSU2_TR(0x56e464);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56e468:{NFSU2_TR(0x56e468);
{u32 ea_=u32(r4(R+24)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56e46e:{NFSU2_TR(0x56e46e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B56e470:{NFSU2_TR(0x56e470);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B56e477:{NFSU2_TR(0x56e477);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56e47b:{NFSU2_TR(0x56e47b);
{u32 ea_=u32(r4(R+24)+u32(152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56e481:{NFSU2_TR(0x56e481);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56e485:{NFSU2_TR(0x56e485);
{u32 ea_=u32(r4(R+24)+u32(184u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56e48b:{NFSU2_TR(0x56e48b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B56e48d:{NFSU2_TR(0x56e48d);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56e491:{NFSU2_TR(0x56e491);
{u32 ea_=u32(r4(R+24)+u32(168u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56e497:{NFSU2_TR(0x56e497);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B56e499:{NFSU2_TR(0x56e499);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56e49d:{NFSU2_TR(0x56e49d);
{u32 ea_=u32(r4(R+24)+u32(136u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56e4a3:{NFSU2_TR(0x56e4a3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B56e4a5:{NFSU2_TR(0x56e4a5);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B56e4ac:{NFSU2_TR(0x56e4ac);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56e4b0:{NFSU2_TR(0x56e4b0);
{u32 ea_=u32(r4(R+24)+u32(156u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56e4b6:{NFSU2_TR(0x56e4b6);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56e4ba:{NFSU2_TR(0x56e4ba);
{u32 ea_=u32(r4(R+24)+u32(172u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56e4c0:{NFSU2_TR(0x56e4c0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B56e4c2:{NFSU2_TR(0x56e4c2);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56e4c6:{NFSU2_TR(0x56e4c6);
{u32 ea_=u32(r4(R+24)+u32(140u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56e4cc:{NFSU2_TR(0x56e4cc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B56e4ce:{NFSU2_TR(0x56e4ce);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56e4d2:{NFSU2_TR(0x56e4d2);
{u32 ea_=u32(r4(R+24)+u32(188u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56e4d8:{NFSU2_TR(0x56e4d8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B56e4da:{NFSU2_TR(0x56e4da);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B56e4e1:{NFSU2_TR(0x56e4e1);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56e4e5:{NFSU2_TR(0x56e4e5);
{u32 ea_=u32(r4(R+24)+u32(144u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56e4eb:{NFSU2_TR(0x56e4eb);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56e4ef:{NFSU2_TR(0x56e4ef);
{u32 ea_=u32(r4(R+24)+u32(160u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56e4f5:{NFSU2_TR(0x56e4f5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B56e4f7:{NFSU2_TR(0x56e4f7);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56e4fb:{NFSU2_TR(0x56e4fb);
{u32 ea_=u32(r4(R+24)+u32(128u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56e501:{NFSU2_TR(0x56e501);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B56e503:{NFSU2_TR(0x56e503);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56e507:{NFSU2_TR(0x56e507);
{u32 ea_=u32(r4(R+24)+u32(176u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56e50d:{NFSU2_TR(0x56e50d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B56e50f:{NFSU2_TR(0x56e50f);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B56e516:{NFSU2_TR(0x56e516);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56e51a:{NFSU2_TR(0x56e51a);
{u32 ea_=u32(r4(R+24)+u32(164u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56e520:{NFSU2_TR(0x56e520);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56e524:{NFSU2_TR(0x56e524);
{u32 ea_=u32(r4(R+24)+u32(132u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56e52a:{NFSU2_TR(0x56e52a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B56e52c:{NFSU2_TR(0x56e52c);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56e530:{NFSU2_TR(0x56e530);
{u32 ea_=u32(r4(R+24)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56e536:{NFSU2_TR(0x56e536);
u8 U[4];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B56e53a:{NFSU2_TR(0x56e53a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56e53b:{NFSU2_TR(0x56e53b);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B56e53f:{NFSU2_TR(0x56e53f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B56e541:{NFSU2_TR(0x56e541);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56e545:{NFSU2_TR(0x56e545);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56e546:{NFSU2_TR(0x56e546);
{u32 ea_=u32(r4(R+24)+u32(180u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56e54c:{NFSU2_TR(0x56e54c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B56e54e:{NFSU2_TR(0x56e54e);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B56e555:{NFSU2_TR(0x56e555);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56e559:{NFSU2_TR(0x56e559);
{u32 ea_=u32(r4(R+24)+u32(184u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56e55f:{NFSU2_TR(0x56e55f);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56e563:{NFSU2_TR(0x56e563);
{u32 ea_=u32(r4(R+24)+u32(168u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56e569:{NFSU2_TR(0x56e569);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B56e56b:{NFSU2_TR(0x56e56b);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56e56f:{NFSU2_TR(0x56e56f);
{u32 ea_=u32(r4(R+24)+u32(136u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56e575:{NFSU2_TR(0x56e575);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B56e577:{NFSU2_TR(0x56e577);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56e57b:{NFSU2_TR(0x56e57b);
{u32 ea_=u32(r4(R+24)+u32(152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56e581:{NFSU2_TR(0x56e581);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B56e583:{NFSU2_TR(0x56e583);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B56e58a:{NFSU2_TR(0x56e58a);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56e58e:{NFSU2_TR(0x56e58e);
{u32 ea_=u32(r4(R+24)+u32(156u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56e594:{NFSU2_TR(0x56e594);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56e598:{NFSU2_TR(0x56e598);
{u32 ea_=u32(r4(R+24)+u32(172u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56e59e:{NFSU2_TR(0x56e59e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B56e5a0:{NFSU2_TR(0x56e5a0);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56e5a4:{NFSU2_TR(0x56e5a4);
{u32 ea_=u32(r4(R+24)+u32(140u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56e5aa:{NFSU2_TR(0x56e5aa);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B56e5ac:{NFSU2_TR(0x56e5ac);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56e5b0:{NFSU2_TR(0x56e5b0);
{u32 ea_=u32(r4(R+24)+u32(188u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56e5b6:{NFSU2_TR(0x56e5b6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B56e5b8:{NFSU2_TR(0x56e5b8);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B56e5bf:{NFSU2_TR(0x56e5bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56e5c4ull));
TAIL_STATIC(0x4012b0u,401);
}
B56e5c4:L56e5c4:{c.instructions+=12;NFSU2_TR(0x56e5c4);
{u32 ea_=u32(r4(R+24)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56e5c7:{NFSU2_TR(0x56e5c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56e5ca:{NFSU2_TR(0x56e5ca);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B56e5ce:{NFSU2_TR(0x56e5ce);
{u32 ea_=u32(r4(R+24)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56e5d1:{NFSU2_TR(0x56e5d1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B56e5d4:{NFSU2_TR(0x56e5d4);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B56e5d8:{NFSU2_TR(0x56e5d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56e5dc:{NFSU2_TR(0x56e5dc);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B56e5e0:{NFSU2_TR(0x56e5e0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56e5e1:{NFSU2_TR(0x56e5e1);
__builtin_memmove((R+4),(R+24),4);
}
B56e5e3:{NFSU2_TR(0x56e5e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56e5eb:{NFSU2_TR(0x56e5eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56e5f0ull));
TAIL_STATIC(0x40f010u,40f);
}
B56e5f0:L56e5f0:{c.instructions+=5;NFSU2_TR(0x56e5f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56e5f3:{NFSU2_TR(0x56e5f3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56e5f5:{NFSU2_TR(0x56e5f5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56e5f6:{NFSU2_TR(0x56e5f6);
__builtin_memmove((R+4),(R+24),4);
}
B56e5f8:{NFSU2_TR(0x56e5f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56e5fdull));
TAIL_STATIC(0x61d150u,61d);
}
B56e5fd:L56e5fd:{c.instructions+=4;NFSU2_TR(0x56e5fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56e5fe:{NFSU2_TR(0x56e5fe);
__builtin_memmove((R+16),(R+20),4);
}
B56e600:{NFSU2_TR(0x56e600);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56e601:{NFSU2_TR(0x56e601);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56e610:L56e610:{c.instructions+=12;NFSU2_TR(0x56e610);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56e612:{NFSU2_TR(0x56e612);
u8 U[4];
w4(U+0,u32(0x77872bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56e617:{NFSU2_TR(0x56e617);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56e61d:{NFSU2_TR(0x56e61d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56e61e:{NFSU2_TR(0x56e61e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56e625:{NFSU2_TR(0x56e625);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56e626:{NFSU2_TR(0x56e626);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56e627:{NFSU2_TR(0x56e627);
__builtin_memmove((R+24),(R+4),4);
}
B56e629:{NFSU2_TR(0x56e629);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56e62b:{NFSU2_TR(0x56e62b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B56e62e:{NFSU2_TR(0x56e62e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56e632:{NFSU2_TR(0x56e632);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56e637ull));
TAIL_STATIC(0x579f20u,579);
}
B56e637:L56e637:{c.instructions+=8;NFSU2_TR(0x56e637);
u8 U[4];
w4(U+0,u32(0x56d130ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56e63c:{NFSU2_TR(0x56e63c);
u8 U[4];
w4(U+0,u32(0x56d050ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56e641:{NFSU2_TR(0x56e641);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56e643:{NFSU2_TR(0x56e643);
u8 U[4];
w4(U+0,u32(0xd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56e648:{NFSU2_TR(0x56e648);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+0),(U+0),4);
}
B56e64b:{NFSU2_TR(0x56e64b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56e64c:{NFSU2_TR(0x56e64c);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56e654:{NFSU2_TR(0x56e654);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56e659ull));
TAIL_STATIC(0x75c461u,75c);
}
B56e659:L56e659:{c.instructions+=8;NFSU2_TR(0x56e659);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56e65d:{NFSU2_TR(0x56e65d);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B56e663:{NFSU2_TR(0x56e663);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56e66a:{NFSU2_TR(0x56e66a);
__builtin_memmove((R+0),(R+24),4);
}
B56e66c:{NFSU2_TR(0x56e66c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56e66d:{NFSU2_TR(0x56e66d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56e674:{NFSU2_TR(0x56e674);
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
B56e677:{NFSU2_TR(0x56e677);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56e680:L56e680:{c.instructions+=5;NFSU2_TR(0x56e680);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56e684:{NFSU2_TR(0x56e684);
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
B56e686:{NFSU2_TR(0x56e686);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56e687:{NFSU2_TR(0x56e687);
__builtin_memmove((R+24),(R+4),4);
}
B56e689:{NFSU2_TR(0x56e689);
if(r1(R+518)){{goto L56e6c7;}}
}
B56e68b:L56e68b:{c.instructions+=3;NFSU2_TR(0x56e68b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B56e68d:{NFSU2_TR(0x56e68d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56e68f:{NFSU2_TR(0x56e68f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56e694ull));
TAIL_STATIC(0x5f46a0u,5f4);
}
B56e694:L56e694:{c.instructions+=2;NFSU2_TR(0x56e694);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B56e696:{NFSU2_TR(0x56e696);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56e69bull));
TAIL_STATIC(0x5f6d50u,5f6);
}
B56e69b:L56e69b:{c.instructions+=4;NFSU2_TR(0x56e69b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B56e69d:{NFSU2_TR(0x56e69d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56e6a0:{NFSU2_TR(0x56e6a0);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
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
B56e6a4:{NFSU2_TR(0x56e6a4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56e6bc;}}
}
B56e6a6:L56e6a6:{c.instructions+=3;NFSU2_TR(0x56e6a6);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B56e6ac:{NFSU2_TR(0x56e6ac);
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
B56e6ae:{NFSU2_TR(0x56e6ae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56e6bc;}}
}
B56e6b0:L56e6b0:{c.instructions+=5;NFSU2_TR(0x56e6b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56e6b3:{NFSU2_TR(0x56e6b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B56e6b5:{NFSU2_TR(0x56e6b5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56e6b7:{NFSU2_TR(0x56e6b7);
__builtin_memmove((R+4),(R+0),4);
}
B56e6b9:{NFSU2_TR(0x56e6b9);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56e6bcull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B56e6bc:L56e6bc:{c.instructions+=3;NFSU2_TR(0x56e6bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56e6c3:{NFSU2_TR(0x56e6c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56e6c4:{NFSU2_TR(0x56e6c4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56e6c7:L56e6c7:{c.instructions+=3;NFSU2_TR(0x56e6c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56e6ce:{NFSU2_TR(0x56e6ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56e6cf:{NFSU2_TR(0x56e6cf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56e6e0:L56e6e0:{c.instructions+=6;NFSU2_TR(0x56e6e0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56e6e1:{NFSU2_TR(0x56e6e1);
__builtin_memmove((R+0),gp(0x86462c),4);
}
B56e6e6:{NFSU2_TR(0x56e6e6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56e6e8:{NFSU2_TR(0x56e6e8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56e6e9:{NFSU2_TR(0x56e6e9);
__builtin_memmove((R+24),(R+4),4);
}
B56e6eb:{NFSU2_TR(0x56e6eb);
if(r1(R+518)){{goto L56e70e;}}
}
B56e6ed:L56e6ed:{c.instructions+=5;NFSU2_TR(0x56e6ed);
__builtin_memmove((R+0),gp(0x890080),4);
}
B56e6f2:{NFSU2_TR(0x56e6f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56e6f5:{NFSU2_TR(0x56e6f5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56e6f6:{NFSU2_TR(0x56e6f6);
__builtin_memmove((R+4),(R+24),4);
}
B56e6f8:{NFSU2_TR(0x56e6f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56e6fdull));
TAIL_STATIC(0x56d1a0u,56d);
}
B56e6fd:L56e6fd:{c.instructions+=3;NFSU2_TR(0x56e6fd);
__builtin_memmove((R+4),(R+24),4);
}
B56e6ff:{NFSU2_TR(0x56e6ff);
s4(0x86462c,u32(0x0ull));
}
B56e709:{NFSU2_TR(0x56e709);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56e70eull));
TAIL_STATIC(0x56d340u,56d);
}
B56e70e:L56e70e:{c.instructions+=4;NFSU2_TR(0x56e70e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56e711:{NFSU2_TR(0x56e711);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B56e712:{NFSU2_TR(0x56e712);
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
B56e715:{NFSU2_TR(0x56e715);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L56e869;}}
}
B56e71b:L56e71b:{c.instructions+=1;NFSU2_TR(0x56e71b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x56e8d8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B56e722:L56e722:{c.instructions+=4;NFSU2_TR(0x56e722);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B56e724:{NFSU2_TR(0x56e724);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56e727:{NFSU2_TR(0x56e727);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56e729:{NFSU2_TR(0x56e729);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56e72eull));
TAIL_STATIC(0x5eb8f0u,5eb);
}
B56e72e:L56e72e:{c.instructions+=4;NFSU2_TR(0x56e72e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B56e730:{NFSU2_TR(0x56e730);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x434ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56e736:{NFSU2_TR(0x56e736);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56e739:{NFSU2_TR(0x56e739);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56e747;}}
}
B56e73b:L56e73b:{c.instructions+=2;NFSU2_TR(0x56e73b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56e742:{NFSU2_TR(0x56e742);
{goto L56e869;}
}
B56e747:L56e747:{c.instructions+=4;NFSU2_TR(0x56e747);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56e74a:{NFSU2_TR(0x56e74a);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B56e74c:{NFSU2_TR(0x56e74c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56e74f:{NFSU2_TR(0x56e74f);
if(r1(R+518)){{goto L56e768;}}
}
B56e751:L56e751:{c.instructions+=3;NFSU2_TR(0x56e751);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B56e753:{NFSU2_TR(0x56e753);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56e754:{NFSU2_TR(0x56e754);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56e757ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B56e757:L56e757:{c.instructions+=4;NFSU2_TR(0x56e757);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B56e759:{NFSU2_TR(0x56e759);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56e75c:{NFSU2_TR(0x56e75c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56e75e:{NFSU2_TR(0x56e75e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56e763ull));
TAIL_STATIC(0x5eb910u,5eb);
}
B56e763:L56e763:{c.instructions+=1;NFSU2_TR(0x56e763);
{goto L56e869;}
}
B56e768:L56e768:{c.instructions+=2;NFSU2_TR(0x56e768);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56e76d:{NFSU2_TR(0x56e76d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56e772ull));
TAIL_STATIC(0x5eb910u,5eb);
}
B56e772:L56e772:{c.instructions+=2;NFSU2_TR(0x56e772);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B56e774:{NFSU2_TR(0x56e774);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56e779ull));
TAIL_STATIC(0x4018c0u,401);
}
B56e779:L56e779:{c.instructions+=4;NFSU2_TR(0x56e779);
{u32 ea_=u32(u32(7986068u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B56e77f:{NFSU2_TR(0x56e77f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56e781:{NFSU2_TR(0x56e781);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56e784:{NFSU2_TR(0x56e784);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56e789;}}
}
B56e786:L56e786:{c.instructions+=1;NFSU2_TR(0x56e786);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B56e789:L56e789:{c.instructions+=3;NFSU2_TR(0x56e789);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56e78b:{NFSU2_TR(0x56e78b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B56e78e:{NFSU2_TR(0x56e78e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56e793ull));
TAIL_STATIC(0x576970u,576);
}
B56e793:L56e793:{c.instructions+=1;NFSU2_TR(0x56e793);
{goto L56e869;}
}
B56e798:L56e798:{c.instructions+=4;NFSU2_TR(0x56e798);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B56e79a:{NFSU2_TR(0x56e79a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56e79d:{NFSU2_TR(0x56e79d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56e79f:{NFSU2_TR(0x56e79f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56e7a4ull));
TAIL_STATIC(0x5eb8f0u,5eb);
}
B56e7a4:L56e7a4:{c.instructions+=4;NFSU2_TR(0x56e7a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B56e7a6:{NFSU2_TR(0x56e7a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56e7a9:{NFSU2_TR(0x56e7a9);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56e7ae:{NFSU2_TR(0x56e7ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56e7b3ull));
TAIL_STATIC(0x5eb910u,5eb);
}
B56e7b3:L56e7b3:{c.instructions+=5;NFSU2_TR(0x56e7b3);
{u32 ea_=u32(u32(8371928u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56e7b9:{NFSU2_TR(0x56e7b9);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B56e7bf:{NFSU2_TR(0x56e7bf);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56e7c1:{NFSU2_TR(0x56e7c1);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B56e7c4:{NFSU2_TR(0x56e7c4);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L56e7d2;}}
}
B56e7c6:L56e7c6:{c.instructions+=3;NFSU2_TR(0x56e7c6);
__builtin_memmove((R+4),gp(0x7fbed8),4);
}
B56e7cc:{NFSU2_TR(0x56e7cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56e7d0:{NFSU2_TR(0x56e7d0);
{goto L56e7de;}
}
B56e7d2:L56e7d2:{c.instructions+=3;NFSU2_TR(0x56e7d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B56e7d4:{NFSU2_TR(0x56e7d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x440ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56e7da:{NFSU2_TR(0x56e7da);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56e7de:L56e7de:{c.instructions+=4;NFSU2_TR(0x56e7de);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56e7e2:{NFSU2_TR(0x56e7e2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56e7e3:{NFSU2_TR(0x56e7e3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B56e7e6:{NFSU2_TR(0x56e7e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56e7ebull));
TAIL_STATIC(0x576970u,576);
}
B56e7eb:L56e7eb:{c.instructions+=2;NFSU2_TR(0x56e7eb);
__builtin_memmove((R+4),(R+24),4);
}
B56e7ed:{NFSU2_TR(0x56e7ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56e7f2ull));
TAIL_STATIC(0x56d440u,56d);
}
B56e7f2:L56e7f2:{c.instructions+=4;NFSU2_TR(0x56e7f2);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B56e7f8:{NFSU2_TR(0x56e7f8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56e7fa:{NFSU2_TR(0x56e7fa);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B56e7fd:{NFSU2_TR(0x56e7fd);
if(r1(R+514)){{goto L56e869;}}
}
B56e7ff:L56e7ff:{c.instructions+=5;NFSU2_TR(0x56e7ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B56e801:{NFSU2_TR(0x56e801);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56e804:{NFSU2_TR(0x56e804);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B56e806:{NFSU2_TR(0x56e806);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56e808:{NFSU2_TR(0x56e808);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56e80bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B56e80b:L56e80b:{c.instructions+=2;NFSU2_TR(0x56e80b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56e812:{NFSU2_TR(0x56e812);
{goto L56e869;}
}
B56e814:L56e814:{c.instructions+=4;NFSU2_TR(0x56e814);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B56e816:{NFSU2_TR(0x56e816);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56e819:{NFSU2_TR(0x56e819);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56e81b:{NFSU2_TR(0x56e81b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56e820ull));
TAIL_STATIC(0x5eb910u,5eb);
}
B56e820:L56e820:{c.instructions+=4;NFSU2_TR(0x56e820);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B56e822:{NFSU2_TR(0x56e822);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x434ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x2ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B56e829:{NFSU2_TR(0x56e829);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56e82c:{NFSU2_TR(0x56e82c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L56e835;}}
}
B56e82e:L56e82e:{c.instructions+=2;NFSU2_TR(0x56e82e);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56e833:{NFSU2_TR(0x56e833);
{goto L56e837;}
}
B56e835:L56e835:{c.instructions+=1;NFSU2_TR(0x56e835);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56e837:L56e837:{c.instructions+=1;NFSU2_TR(0x56e837);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56e83cull));
TAIL_STATIC(0x5eb8f0u,5eb);
}
B56e83c:L56e83c:{c.instructions+=7;NFSU2_TR(0x56e83c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B56e83e:{NFSU2_TR(0x56e83e);
{u32 ea_=u32(r4(R+8)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56e844:{NFSU2_TR(0x56e844);
{u32 ea_=u32(u32(7881324u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56e84a:{NFSU2_TR(0x56e84a);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B56e850:{NFSU2_TR(0x56e850);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56e852:{NFSU2_TR(0x56e852);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B56e855:{NFSU2_TR(0x56e855);
if(r1(R+514)){{goto L56e869;}}
}
B56e857:L56e857:{c.instructions+=2;NFSU2_TR(0x56e857);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56e85e:{NFSU2_TR(0x56e85e);
{goto L56e869;}
}
B56e860:L56e860:{c.instructions+=3;NFSU2_TR(0x56e860);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56e862:{NFSU2_TR(0x56e862);
__builtin_memmove((R+4),(R+24),4);
}
B56e864:{NFSU2_TR(0x56e864);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56e869ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x56e680u);}goto L56e680;}
}
B56e869:L56e869:{c.instructions+=3;NFSU2_TR(0x56e869);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56e86c:{NFSU2_TR(0x56e86c);
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
B56e86e:{NFSU2_TR(0x56e86e);
if(r1(R+518)){{goto L56e8d0;}}
}
B56e870:L56e870:{c.instructions+=20;NFSU2_TR(0x56e870);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B56e872:{NFSU2_TR(0x56e872);
{u32 ea_=u32(r4(R+0)+u32(816u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56e878:{NFSU2_TR(0x56e878);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56e87c:{NFSU2_TR(0x56e87c);
{u32 ea_=u32(r4(R+24)+u32(256u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B56e882:{NFSU2_TR(0x56e882);
{u32 ea_=u32(r4(R+24)+u32(256u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B56e888:{NFSU2_TR(0x56e888);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B56e88a:{NFSU2_TR(0x56e88a);
{u32 ea_=u32(r4(R+4)+u32(820u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56e890:{NFSU2_TR(0x56e890);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56e894:{NFSU2_TR(0x56e894);
{u32 ea_=u32(r4(R+24)+u32(464u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B56e89a:{NFSU2_TR(0x56e89a);
{u32 ea_=u32(r4(R+24)+u32(464u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B56e8a0:{NFSU2_TR(0x56e8a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B56e8a2:{NFSU2_TR(0x56e8a2);
{u32 ea_=u32(r4(R+8)+u32(824u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56e8a8:{NFSU2_TR(0x56e8a8);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56e8ac:{NFSU2_TR(0x56e8ac);
{u32 ea_=u32(r4(R+24)+u32(672u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B56e8b2:{NFSU2_TR(0x56e8b2);
{u32 ea_=u32(r4(R+24)+u32(672u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B56e8b8:{NFSU2_TR(0x56e8b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B56e8ba:{NFSU2_TR(0x56e8ba);
{u32 ea_=u32(r4(R+0)+u32(828u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56e8c0:{NFSU2_TR(0x56e8c0);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56e8c4:{NFSU2_TR(0x56e8c4);
{u32 ea_=u32(r4(R+24)+u32(880u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B56e8ca:{NFSU2_TR(0x56e8ca);
{u32 ea_=u32(r4(R+24)+u32(880u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B56e8d0:L56e8d0:{c.instructions+=3;NFSU2_TR(0x56e8d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56e8d1:{NFSU2_TR(0x56e8d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B56e8d2:{NFSU2_TR(0x56e8d2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56e8f0:L56e8f0:{c.instructions+=7;NFSU2_TR(0x56e8f0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56e8f1:{NFSU2_TR(0x56e8f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B56e8f5:{NFSU2_TR(0x56e8f5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56e8f6:{NFSU2_TR(0x56e8f6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56e8f7:{NFSU2_TR(0x56e8f7);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56e8fa:{NFSU2_TR(0x56e8fa);
w4(R+28,u32(0x4ull));
}
B56e8ff:{NFSU2_TR(0x56e8ff);
}
B56e900:L56e900:{c.instructions+=3;NFSU2_TR(0x56e900);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56e901:{NFSU2_TR(0x56e901);
__builtin_memmove((R+4),(R+24),4);
}
B56e903:{NFSU2_TR(0x56e903);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56e908ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x56e1d0u);}goto L56e1d0;}
}
B56e908:L56e908:{c.instructions+=3;NFSU2_TR(0x56e908);
w1(R+512,carry<u32>(r4(R+24),u32(0xd0ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
}
B56e90e:{NFSU2_TR(0x56e90e);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+28),u32(0x1ull)));
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B56e90f:{NFSU2_TR(0x56e90f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x56e900u);}goto L56e900;}}
}
B56e911:L56e911:{c.instructions+=4;NFSU2_TR(0x56e911);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56e912:{NFSU2_TR(0x56e912);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56e913:{NFSU2_TR(0x56e913);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56e914:{NFSU2_TR(0x56e914);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56e920:L56e920:{c.instructions+=5;NFSU2_TR(0x56e920);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B56e923:{NFSU2_TR(0x56e923);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56e924:{NFSU2_TR(0x56e924);
__builtin_memmove((R+24),(R+4),4);
}
B56e926:{NFSU2_TR(0x56e926);
w4(R+4,u32(0x89cf48ull));
}
B56e92b:{NFSU2_TR(0x56e92b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56e930ull));
TAIL_STATIC(0x5f00f0u,5f0);
}
B56e930:L56e930:{c.instructions+=2;NFSU2_TR(0x56e930);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56e932:{NFSU2_TR(0x56e932);
if(r1(R+518)){{goto L56e93d;}}
}
B56e934:L56e934:{c.instructions+=2;NFSU2_TR(0x56e934);
__builtin_memmove((R+0),gp(0x865198),4);
}
B56e939:{NFSU2_TR(0x56e939);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56e93d:L56e93d:{c.instructions+=2;NFSU2_TR(0x56e93d);
w4(R+4,u32(0x89cf48ull));
}
B56e942:{NFSU2_TR(0x56e942);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56e947ull));
TAIL_STATIC(0x5f00f0u,5f0);
}
B56e947:L56e947:{c.instructions+=3;NFSU2_TR(0x56e947);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56e949:{NFSU2_TR(0x56e949);
w4(R+0,u32(0x8651acull));
}
B56e94e:{NFSU2_TR(0x56e94e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56e955;}}
}
B56e950:L56e950:{c.instructions+=1;NFSU2_TR(0x56e950);
w4(R+0,u32(0x86518cull));
}
B56e955:L56e955:{c.instructions+=13;NFSU2_TR(0x56e955);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B56e957:{NFSU2_TR(0x56e957);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56e95a:{NFSU2_TR(0x56e95a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56e95d:{NFSU2_TR(0x56e95d);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B56e95f:{NFSU2_TR(0x56e95f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56e963:{NFSU2_TR(0x56e963);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B56e967:{NFSU2_TR(0x56e967);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56e96d:{NFSU2_TR(0x56e96d);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B56e971:{NFSU2_TR(0x56e971);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56e975:{NFSU2_TR(0x56e975);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B56e978:{NFSU2_TR(0x56e978);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56e97a:{NFSU2_TR(0x56e97a);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56e97d:{NFSU2_TR(0x56e97d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56e9be;}}
}
B56e97f:L56e97f:{c.instructions+=3;NFSU2_TR(0x56e97f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56e982:{NFSU2_TR(0x56e982);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56e984:{NFSU2_TR(0x56e984);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56e9ab;}}
}
B56e986:L56e986:{c.instructions+=2;NFSU2_TR(0x56e986);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56e989:{NFSU2_TR(0x56e989);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56e98eull));
TAIL_STATIC(0x75bed4u,75b);
}
B56e98e:L56e98e:{c.instructions+=8;NFSU2_TR(0x56e98e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56e992:{NFSU2_TR(0x56e992);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B56e996:{NFSU2_TR(0x56e996);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56e998:{NFSU2_TR(0x56e998);
__builtin_memmove((R+4),(R+24),4);
}
B56e99a:{NFSU2_TR(0x56e99a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56e99e:{NFSU2_TR(0x56e99e);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B56e9a1:{NFSU2_TR(0x56e9a1);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B56e9a4:{NFSU2_TR(0x56e9a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56e9a9ull));
TAIL_STATIC(0x56d500u,56d);
}
B56e9a9:L56e9a9:{c.instructions+=1;NFSU2_TR(0x56e9a9);
{goto L56e9be;}
}
B56e9ab:L56e9ab:{c.instructions+=2;NFSU2_TR(0x56e9ab);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56e9ae:{NFSU2_TR(0x56e9ae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56e9be;}}
}
B56e9b0:L56e9b0:{c.instructions+=3;NFSU2_TR(0x56e9b0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56e9b2:{NFSU2_TR(0x56e9b2);
__builtin_memmove((R+4),(R+24),4);
}
B56e9b4:{NFSU2_TR(0x56e9b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56e9b9ull));
TAIL_STATIC(0x56d5c0u,56d);
}
B56e9b9:L56e9b9:{c.instructions+=1;NFSU2_TR(0x56e9b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56e9beull));
TAIL_STATIC(0x56d6c0u,56d);
}
B56e9be:L56e9be:{c.instructions+=3;NFSU2_TR(0x56e9be);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56e9c1:{NFSU2_TR(0x56e9c1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56e9c3:{NFSU2_TR(0x56e9c3);
if(r1(R+518)){{goto L56e9ca;}}
}
B56e9c5:L56e9c5:{c.instructions+=2;NFSU2_TR(0x56e9c5);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56e9c8:{NFSU2_TR(0x56e9c8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56e9ea;}}
}
B56e9ca:L56e9ca:{c.instructions+=6;NFSU2_TR(0x56e9ca);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56e9ce:{NFSU2_TR(0x56e9ce);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B56e9d0:{NFSU2_TR(0x56e9d0);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B56e9d4:{NFSU2_TR(0x56e9d4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56e9d6:{NFSU2_TR(0x56e9d6);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56e9d9:{NFSU2_TR(0x56e9d9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56e9ea;}}
}
B56e9db:L56e9db:{c.instructions+=4;NFSU2_TR(0x56e9db);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56e9df:{NFSU2_TR(0x56e9df);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56e9e0:{NFSU2_TR(0x56e9e0);
__builtin_memmove((R+4),(R+24),4);
}
B56e9e2:{NFSU2_TR(0x56e9e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56e9e7ull));
TAIL_STATIC(0x56c740u,56c);
}
B56e9e7:L56e9e7:{c.instructions+=1;NFSU2_TR(0x56e9e7);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B56e9ea:L56e9ea:{c.instructions+=2;NFSU2_TR(0x56e9ea);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B56e9ee:{NFSU2_TR(0x56e9ee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56ea9e;}}
}
B56e9f4:L56e9f4:{c.instructions+=2;NFSU2_TR(0x56e9f4);
w4(R+4,u32(0x89cf48ull));
}
B56e9f9:{NFSU2_TR(0x56e9f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56e9feull));
TAIL_STATIC(0x5f00f0u,5f0);
}
B56e9fe:L56e9fe:{c.instructions+=3;NFSU2_TR(0x56e9fe);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56ea00:{NFSU2_TR(0x56ea00);
w4(R+0,u32(0x8651acull));
}
B56ea05:{NFSU2_TR(0x56ea05);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56ea0c;}}
}
B56ea07:L56ea07:{c.instructions+=1;NFSU2_TR(0x56ea07);
w4(R+0,u32(0x86518cull));
}
B56ea0c:L56ea0c:{c.instructions+=11;NFSU2_TR(0x56ea0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B56ea0e:{NFSU2_TR(0x56ea0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56ea11:{NFSU2_TR(0x56ea11);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56ea14:{NFSU2_TR(0x56ea14);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B56ea16:{NFSU2_TR(0x56ea16);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56ea1a:{NFSU2_TR(0x56ea1a);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B56ea1e:{NFSU2_TR(0x56ea1e);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56ea24:{NFSU2_TR(0x56ea24);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B56ea27:{NFSU2_TR(0x56ea27);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56ea29:{NFSU2_TR(0x56ea29);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56ea2c:{NFSU2_TR(0x56ea2c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56ea9e;}}
}
B56ea2e:L56ea2e:{c.instructions+=5;NFSU2_TR(0x56ea2e);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56ea31:{NFSU2_TR(0x56ea31);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B56ea37:{NFSU2_TR(0x56ea37);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56ea39:{NFSU2_TR(0x56ea39);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B56ea3c:{NFSU2_TR(0x56ea3c);
if(r1(R+514)){{goto L56ea4b;}}
}
B56ea3e:L56ea3e:{c.instructions+=5;NFSU2_TR(0x56ea3e);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56ea41:{NFSU2_TR(0x56ea41);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B56ea44:{NFSU2_TR(0x56ea44);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56ea46:{NFSU2_TR(0x56ea46);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B56ea49:{NFSU2_TR(0x56ea49);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L56ea68;}}
}
B56ea4b:L56ea4b:{c.instructions+=5;NFSU2_TR(0x56ea4b);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56ea4e:{NFSU2_TR(0x56ea4e);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B56ea54:{NFSU2_TR(0x56ea54);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56ea56:{NFSU2_TR(0x56ea56);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56ea59:{NFSU2_TR(0x56ea59);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56ea9e;}}
}
B56ea5b:L56ea5b:{c.instructions+=5;NFSU2_TR(0x56ea5b);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56ea5e:{NFSU2_TR(0x56ea5e);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B56ea61:{NFSU2_TR(0x56ea61);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56ea63:{NFSU2_TR(0x56ea63);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56ea66:{NFSU2_TR(0x56ea66);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56ea9e;}}
}
B56ea68:L56ea68:{c.instructions+=7;NFSU2_TR(0x56ea68);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56ea6b:{NFSU2_TR(0x56ea6b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B56ea6c:{NFSU2_TR(0x56ea6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56ea6f:{NFSU2_TR(0x56ea6f);
__builtin_memmove((R+8),(R+0),4);
}
B56ea71:{NFSU2_TR(0x56ea71);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56ea74:{NFSU2_TR(0x56ea74);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56ea76:{NFSU2_TR(0x56ea76);
if(r1(R+518)){{goto L56ea9e;}}
}
B56ea78:L56ea78:{c.instructions+=2;NFSU2_TR(0x56ea78);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56ea7b:{NFSU2_TR(0x56ea7b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56ea97;}}
}
B56ea7d:L56ea7d:{c.instructions+=7;NFSU2_TR(0x56ea7d);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56ea80:{NFSU2_TR(0x56ea80);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B56ea81:{NFSU2_TR(0x56ea81);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56ea84:{NFSU2_TR(0x56ea84);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B56ea87:{NFSU2_TR(0x56ea87);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56ea89:{NFSU2_TR(0x56ea89);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B56ea8c:{NFSU2_TR(0x56ea8c);
if(r1(R+514)){{goto L56ea97;}}
}
B56ea8e:L56ea8e:{c.instructions+=3;NFSU2_TR(0x56ea8e);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56ea91:{NFSU2_TR(0x56ea91);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B56ea94:{NFSU2_TR(0x56ea94);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B56ea97:L56ea97:{c.instructions+=1;NFSU2_TR(0x56ea97);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56ea9e:L56ea9e:{c.instructions+=3;NFSU2_TR(0x56ea9e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56ea9f:{NFSU2_TR(0x56ea9f);
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
B56eaa2:{NFSU2_TR(0x56eaa2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56eab0:L56eab0:{c.instructions+=6;NFSU2_TR(0x56eab0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56eab1:{NFSU2_TR(0x56eab1);
__builtin_memmove((R+24),(R+4),4);
}
B56eab3:{NFSU2_TR(0x56eab3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56eab6:{NFSU2_TR(0x56eab6);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56eab9:{NFSU2_TR(0x56eab9);
u8 U[1];
w1(R+523,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B56eabb:{NFSU2_TR(0x56eabb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L56eac9;}}
}
B56eabd:L56eabd:{c.instructions+=3;NFSU2_TR(0x56eabd);
w4(R+4,u32(s32(s8(r1(R+0)))));
}
B56eac0:{NFSU2_TR(0x56eac0);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+4))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+4)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B56eac3:{NFSU2_TR(0x56eac3);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L56ebda;}}
}
B56eac9:L56eac9:{c.instructions+=3;NFSU2_TR(0x56eac9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56eacc:{NFSU2_TR(0x56eacc);
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
B56eacf:{NFSU2_TR(0x56eacf);
if(r1(R+518)){{goto L56ebda;}}
}
B56ead5:L56ead5:{c.instructions+=2;NFSU2_TR(0x56ead5);
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
B56ead8:{NFSU2_TR(0x56ead8);
if(r1(R+518)){{goto L56ebda;}}
}
B56eade:L56eade:{c.instructions+=2;NFSU2_TR(0x56eade);
w4(R+4,u32(0x89cf48ull));
}
B56eae3:{NFSU2_TR(0x56eae3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56eae8ull));
TAIL_STATIC(0x5f00f0u,5f0);
}
B56eae8:L56eae8:{c.instructions+=2;NFSU2_TR(0x56eae8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56eaea:{NFSU2_TR(0x56eaea);
if(r1(R+518)){{goto L56eb10;}}
}
B56eaec:L56eaec:{c.instructions+=7;NFSU2_TR(0x56eaec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56eaef:{NFSU2_TR(0x56eaef);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56eaf3:{NFSU2_TR(0x56eaf3);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B56eaf7:{NFSU2_TR(0x56eaf7);
{u32 ea_=u32((r4(R+4)*4u)+u32(8365344u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B56eafe:{NFSU2_TR(0x56eafe);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56eb00:{NFSU2_TR(0x56eb00);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56eb03:{NFSU2_TR(0x56eb03);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56eb10;}}
}
B56eb05:L56eb05:{c.instructions+=2;NFSU2_TR(0x56eb05);
{u32 ea_=u32((r4(R+4)*4u)+u32(8365344u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56eb0c:{NFSU2_TR(0x56eb0c);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B56eb10:L56eb10:{c.instructions+=4;NFSU2_TR(0x56eb10);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56eb14:{NFSU2_TR(0x56eb14);
w4(R+4,u32(0x89cf48ull));
}
B56eb19:{NFSU2_TR(0x56eb19);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56eb1c:{NFSU2_TR(0x56eb1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56eb21ull));
TAIL_STATIC(0x5f00f0u,5f0);
}
B56eb21:L56eb21:{c.instructions+=3;NFSU2_TR(0x56eb21);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56eb23:{NFSU2_TR(0x56eb23);
w4(R+0,u32(0x8651acull));
}
B56eb28:{NFSU2_TR(0x56eb28);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56eb2f;}}
}
B56eb2a:L56eb2a:{c.instructions+=1;NFSU2_TR(0x56eb2a);
w4(R+0,u32(0x86518cull));
}
B56eb2f:L56eb2f:{c.instructions+=9;NFSU2_TR(0x56eb2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B56eb31:{NFSU2_TR(0x56eb31);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56eb35:{NFSU2_TR(0x56eb35);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56eb38:{NFSU2_TR(0x56eb38);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56eb3b:{NFSU2_TR(0x56eb3b);
{u32 ea_=u32(r4(R+24)+u32(84u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B56eb3e:{NFSU2_TR(0x56eb3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56eb41:{NFSU2_TR(0x56eb41);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56eb43:{NFSU2_TR(0x56eb43);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56eb46:{NFSU2_TR(0x56eb46);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56eb4e;}}
}
B56eb48:L56eb48:{c.instructions+=2;NFSU2_TR(0x56eb48);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56eb4b:{NFSU2_TR(0x56eb4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56eb4e:L56eb4e:{c.instructions+=4;NFSU2_TR(0x56eb4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56eb51:{NFSU2_TR(0x56eb51);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56eb54:{NFSU2_TR(0x56eb54);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56eb56:{NFSU2_TR(0x56eb56);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56ebb4;}}
}
B56eb58:L56eb58:{c.instructions+=3;NFSU2_TR(0x56eb58);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56eb5d:{NFSU2_TR(0x56eb5d);
__builtin_memmove((R+4),(R+24),4);
}
B56eb5f:{NFSU2_TR(0x56eb5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56eb64ull));
TAIL_STATIC(0x56c740u,56c);
}
B56eb64:L56eb64:{c.instructions+=6;NFSU2_TR(0x56eb64);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56eb67:{NFSU2_TR(0x56eb67);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56eb6a:{NFSU2_TR(0x56eb6a);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B56eb70:{NFSU2_TR(0x56eb70);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56eb72:{NFSU2_TR(0x56eb72);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B56eb75:{NFSU2_TR(0x56eb75);
if(r1(R+514)){{goto L56eb81;}}
}
B56eb77:L56eb77:{c.instructions+=4;NFSU2_TR(0x56eb77);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B56eb7a:{NFSU2_TR(0x56eb7a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56eb7c:{NFSU2_TR(0x56eb7c);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B56eb7f:{NFSU2_TR(0x56eb7f);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L56eb9b;}}
}
B56eb81:L56eb81:{c.instructions+=5;NFSU2_TR(0x56eb81);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56eb84:{NFSU2_TR(0x56eb84);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B56eb8a:{NFSU2_TR(0x56eb8a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56eb8c:{NFSU2_TR(0x56eb8c);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B56eb8f:{NFSU2_TR(0x56eb8f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56ebd8;}}
}
B56eb91:L56eb91:{c.instructions+=4;NFSU2_TR(0x56eb91);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B56eb94:{NFSU2_TR(0x56eb94);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56eb96:{NFSU2_TR(0x56eb96);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B56eb99:{NFSU2_TR(0x56eb99);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56ebd8;}}
}
B56eb9b:L56eb9b:{c.instructions+=4;NFSU2_TR(0x56eb9b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56eb9d:{NFSU2_TR(0x56eb9d);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B56eba0:{NFSU2_TR(0x56eba0);
__builtin_memmove((R+4),(R+24),4);
}
B56eba2:{NFSU2_TR(0x56eba2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56eba7ull));
TAIL_STATIC(0x56d500u,56d);
}
B56eba7:L56eba7:{c.instructions+=3;NFSU2_TR(0x56eba7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56eba9:{NFSU2_TR(0x56eba9);
__builtin_memmove((R+4),(R+24),4);
}
B56ebab:{NFSU2_TR(0x56ebab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56ebb0ull));
TAIL_STATIC(0x56d620u,56d);
}
B56ebb0:L56ebb0:{c.instructions+=2;NFSU2_TR(0x56ebb0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56ebb1:{NFSU2_TR(0x56ebb1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56ebb4:L56ebb4:{c.instructions+=2;NFSU2_TR(0x56ebb4);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x2ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B56ebb8:{NFSU2_TR(0x56ebb8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56ebda;}}
}
B56ebba:L56ebba:{c.instructions+=3;NFSU2_TR(0x56ebba);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56ebbe:{NFSU2_TR(0x56ebbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56ebc1:{NFSU2_TR(0x56ebc1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56ebc6ull));
TAIL_STATIC(0x56c4a0u,56c);
}
B56ebc6:L56ebc6:{c.instructions+=5;NFSU2_TR(0x56ebc6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B56ebc8:{NFSU2_TR(0x56ebc8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ebca:{NFSU2_TR(0x56ebca);
__builtin_memmove((R+4),(R+24),4);
}
B56ebcc:{NFSU2_TR(0x56ebcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56ebcf:{NFSU2_TR(0x56ebcf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56ebd4ull));
TAIL_STATIC(0x56d500u,56d);
}
B56ebd4:L56ebd4:{c.instructions+=2;NFSU2_TR(0x56ebd4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56ebd5:{NFSU2_TR(0x56ebd5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56ebd8:L56ebd8:{c.instructions+=1;NFSU2_TR(0x56ebd8);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B56ebda:L56ebda:{c.instructions+=2;NFSU2_TR(0x56ebda);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56ebdb:{NFSU2_TR(0x56ebdb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56ebe0:L56ebe0:{c.instructions+=14;NFSU2_TR(0x56ebe0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ebe2:{NFSU2_TR(0x56ebe2);
u8 U[4];
w4(U+0,u32(0x77876bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ebe7:{NFSU2_TR(0x56ebe7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56ebed:{NFSU2_TR(0x56ebed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ebee:{NFSU2_TR(0x56ebee);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56ebf5:{NFSU2_TR(0x56ebf5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ebf6:{NFSU2_TR(0x56ebf6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ebf7:{NFSU2_TR(0x56ebf7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ebf8:{NFSU2_TR(0x56ebf8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ebf9:{NFSU2_TR(0x56ebf9);
__builtin_memmove((R+20),(R+4),4);
}
B56ebfb:{NFSU2_TR(0x56ebfb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ebfc:{NFSU2_TR(0x56ebfc);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B56ebfe:{NFSU2_TR(0x56ebfe);
w4(R+4,u32(0x27ull));
}
B56ec03:{NFSU2_TR(0x56ec03);
__builtin_memmove((R+28),(R+20),4);
}
B56ec05:L56ec05:{c.instructions+=1;NFSU2_TR(0x56ec05);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L56ec07;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x56ec05u);}goto L56ec05;}
}
B56ec07:L56ec07:{c.instructions+=4;NFSU2_TR(0x56ec07);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B56ec09:{NFSU2_TR(0x56ec09);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B56ec0b:{NFSU2_TR(0x56ec0b);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B56ec0d:{NFSU2_TR(0x56ec0d);
__builtin_memmove((R+4),(R+4),4);
}
B56ec10:L56ec10:{c.instructions+=2;NFSU2_TR(0x56ec10);
u8 U[2];
__builtin_memmove((U+0),gp(0x89e7d9),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B56ec16:{NFSU2_TR(0x56ec16);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56ec20;}}
}
B56ec18:L56ec18:{c.instructions+=2;NFSU2_TR(0x56ec18);
u8 U[8];
__builtin_memmove((U+0),gp(0x890104),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56ec1e:{NFSU2_TR(0x56ec1e);
if(r1(R+518)){{goto L56ec24;}}
}
B56ec20:L56ec20:{c.instructions+=2;NFSU2_TR(0x56ec20);
w1(R+0,u8(0x4ull));
}
B56ec22:{NFSU2_TR(0x56ec22);
{goto L56ec7b;}
}
B56ec24:L56ec24:{c.instructions+=2;NFSU2_TR(0x56ec24);
u8 U[2];
__builtin_memmove((U+0),gp(0x89e7d8),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B56ec2a:{NFSU2_TR(0x56ec2a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56ec34;}}
}
B56ec2c:L56ec2c:{c.instructions+=2;NFSU2_TR(0x56ec2c);
u8 U[8];
__builtin_memmove((U+0),gp(0x890108),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56ec32:{NFSU2_TR(0x56ec32);
if(r1(R+518)){{goto L56ec38;}}
}
B56ec34:L56ec34:{c.instructions+=2;NFSU2_TR(0x56ec34);
w1(R+0,u8(0x2ull));
}
B56ec36:{NFSU2_TR(0x56ec36);
{goto L56ec7b;}
}
B56ec38:L56ec38:{c.instructions+=2;NFSU2_TR(0x56ec38);
u8 U[8];
__builtin_memmove((U+0),gp(0x89e7b4),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56ec3e:{NFSU2_TR(0x56ec3e);
if(r1(R+518)){{goto L56ec44;}}
}
B56ec40:L56ec40:{c.instructions+=2;NFSU2_TR(0x56ec40);
w1(R+0,u8(0x8ull));
}
B56ec42:{NFSU2_TR(0x56ec42);
{goto L56ec7b;}
}
B56ec44:L56ec44:{c.instructions+=2;NFSU2_TR(0x56ec44);
u8 U[2];
__builtin_memmove((U+0),gp(0x89e7e5),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B56ec4a:{NFSU2_TR(0x56ec4a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56ec54;}}
}
B56ec4c:L56ec4c:{c.instructions+=2;NFSU2_TR(0x56ec4c);
u8 U[8];
__builtin_memmove((U+0),gp(0x836474),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56ec52:{NFSU2_TR(0x56ec52);
if(r1(R+518)){{goto L56ec58;}}
}
B56ec54:L56ec54:{c.instructions+=2;NFSU2_TR(0x56ec54);
w1(R+0,u8(0x20ull));
}
B56ec56:{NFSU2_TR(0x56ec56);
{goto L56ec7b;}
}
B56ec58:L56ec58:{c.instructions+=2;NFSU2_TR(0x56ec58);
u8 U[2];
__builtin_memmove((U+0),gp(0x89e7e3),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B56ec5e:{NFSU2_TR(0x56ec5e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56ec68;}}
}
B56ec60:L56ec60:{c.instructions+=2;NFSU2_TR(0x56ec60);
u8 U[8];
__builtin_memmove((U+0),gp(0x89010c),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56ec66:{NFSU2_TR(0x56ec66);
if(r1(R+518)){{goto L56ec6c;}}
}
B56ec68:L56ec68:{c.instructions+=2;NFSU2_TR(0x56ec68);
w1(R+0,u8(0x10ull));
}
B56ec6a:{NFSU2_TR(0x56ec6a);
{goto L56ec7b;}
}
B56ec6c:L56ec6c:{c.instructions+=5;NFSU2_TR(0x56ec6c);
u8 U[2];
__builtin_memmove((U+0),gp(0x89e7e1),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B56ec72:{NFSU2_TR(0x56ec72);
__builtin_memmove((R+0),(R+518),1);
}
B56ec75:{NFSU2_TR(0x56ec75);
w1(R+0,u8(u32(r1(R+0))-u32(u8(0x1ull))));
}
B56ec77:{NFSU2_TR(0x56ec77);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0x3full))));
}
B56ec79:{NFSU2_TR(0x56ec79);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x1ull))));
}
B56ec7b:L56ec7b:{c.instructions+=3;NFSU2_TR(0x56ec7b);
__builtin_memmove((R+4),gp(0x864624),4);
}
B56ec81:{NFSU2_TR(0x56ec81);
u8 U[14];
w4(U+0,u32(u32(u32(0x7ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w1(U+13,u8(u32(r1(U+12))&u32(r1(R+0))));
w1(R+518,u8((r1(U+13))==(u8(0x0ull))));
}
B56ec85:{NFSU2_TR(0x56ec85);
if(r1(R+518)){{goto L56ecd8;}}
}
B56ec87:L56ec87:{c.instructions+=3;NFSU2_TR(0x56ec87);
__builtin_memmove((R+8),gp(0x864628),4);
}
B56ec8d:{NFSU2_TR(0x56ec8d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ec8e:{NFSU2_TR(0x56ec8e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56ec93ull));
TAIL_STATIC(0x440e50u,440);
}
B56ec93:L56ec93:{c.instructions+=6;NFSU2_TR(0x56ec93);
__builtin_memmove((R+4),(R+0),4);
}
B56ec95:{NFSU2_TR(0x56ec95);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B56ec98:{NFSU2_TR(0x56ec98);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56ec9c:{NFSU2_TR(0x56ec9c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56ec9e:{NFSU2_TR(0x56ec9e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56eca2:{NFSU2_TR(0x56eca2);
if(r1(R+518)){{goto L56ecc6;}}
}
B56eca4:L56eca4:{c.instructions+=9;NFSU2_TR(0x56eca4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56eca7:{NFSU2_TR(0x56eca7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56ecaa:{NFSU2_TR(0x56ecaa);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B56ecad:{NFSU2_TR(0x56ecad);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56ecb1:{NFSU2_TR(0x56ecb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56ecb4:{NFSU2_TR(0x56ecb4);
__builtin_memmove((R+0),gp(0x864624),4);
}
B56ecb9:{NFSU2_TR(0x56ecb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B56ecbc:{NFSU2_TR(0x56ecbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56ecbf:{NFSU2_TR(0x56ecbf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56ecc4ull));
TAIL_STATIC(0x56d650u,56d);
}
B56ecc4:L56ecc4:{c.instructions+=1;NFSU2_TR(0x56ecc4);
{goto L56ecc8;}
}
B56ecc6:L56ecc6:{c.instructions+=1;NFSU2_TR(0x56ecc6);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B56ecc8:L56ecc8:{c.instructions+=3;NFSU2_TR(0x56ecc8);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B56eccc:{NFSU2_TR(0x56eccc);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B56ecd4:{NFSU2_TR(0x56ecd4);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56ecd8:L56ecd8:{c.instructions+=4;NFSU2_TR(0x56ecd8);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x30ull))));
}
B56ecdb:{NFSU2_TR(0x56ecdb);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B56ecdc:{NFSU2_TR(0x56ecdc);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x750ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x750ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B56ece2:{NFSU2_TR(0x56ece2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x56ec10u);}goto L56ec10;}}
}
B56ece8:L56ece8:{c.instructions+=10;NFSU2_TR(0x56ece8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56ecec:{NFSU2_TR(0x56ecec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56eced:{NFSU2_TR(0x56eced);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56ecf3:{NFSU2_TR(0x56ecf3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56ecf4:{NFSU2_TR(0x56ecf4);
__builtin_memmove((R+0),(R+20),4);
}
B56ecf6:{NFSU2_TR(0x56ecf6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56ecf7:{NFSU2_TR(0x56ecf7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56ecf8:{NFSU2_TR(0x56ecf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56ecff:{NFSU2_TR(0x56ecff);
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
B56ed02:{NFSU2_TR(0x56ed02);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56ed10:L56ed10:{c.instructions+=4;NFSU2_TR(0x56ed10);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56ed14:{NFSU2_TR(0x56ed14);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B56ed17:{NFSU2_TR(0x56ed17);
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
B56ed19:{NFSU2_TR(0x56ed19);
if(r1(R+518)){{goto L56ed31;}}
}
B56ed1b:L56ed1b:{c.instructions+=3;NFSU2_TR(0x56ed1b);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56ed1e:{NFSU2_TR(0x56ed1e);
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
B56ed20:{NFSU2_TR(0x56ed20);
if(r1(R+518)){{goto L56ed31;}}
}
B56ed22:L56ed22:{c.instructions+=5;NFSU2_TR(0x56ed22);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56ed26:{NFSU2_TR(0x56ed26);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56ed2a:{NFSU2_TR(0x56ed2a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ed2b:{NFSU2_TR(0x56ed2b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ed2c:{NFSU2_TR(0x56ed2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56ed31ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x56eab0u);}goto L56eab0;}
}
B56ed31:L56ed31:{c.instructions+=1;NFSU2_TR(0x56ed31);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56ed40:L56ed40:{c.instructions+=7;NFSU2_TR(0x56ed40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B56ed43:{NFSU2_TR(0x56ed43);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ed44:{NFSU2_TR(0x56ed44);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ed45:{NFSU2_TR(0x56ed45);
__builtin_memmove((R+24),(R+4),4);
}
B56ed47:{NFSU2_TR(0x56ed47);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ed48:{NFSU2_TR(0x56ed48);
w4(R+4,u32(0x89cf48ull));
}
B56ed4d:{NFSU2_TR(0x56ed4d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56ed52ull));
TAIL_STATIC(0x5f00f0u,5f0);
}
B56ed52:L56ed52:{c.instructions+=2;NFSU2_TR(0x56ed52);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56ed54:{NFSU2_TR(0x56ed54);
if(r1(R+518)){{goto L56ed5f;}}
}
B56ed56:L56ed56:{c.instructions+=2;NFSU2_TR(0x56ed56);
__builtin_memmove((R+0),gp(0x865198),4);
}
B56ed5b:{NFSU2_TR(0x56ed5b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56ed5f:L56ed5f:{c.instructions+=2;NFSU2_TR(0x56ed5f);
__builtin_memmove((R+4),(R+24),4);
}
B56ed61:{NFSU2_TR(0x56ed61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56ed66ull));
TAIL_STATIC(0x56ccd0u,56c);
}
B56ed66:L56ed66:{c.instructions+=2;NFSU2_TR(0x56ed66);
__builtin_memmove((R+4),(R+24),4);
}
B56ed68:{NFSU2_TR(0x56ed68);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56ed6dull));
TAIL_STATIC(0x56dee0u,56d);
}
B56ed6d:L56ed6d:{c.instructions+=4;NFSU2_TR(0x56ed6d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B56ed71:{NFSU2_TR(0x56ed71);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ed72:{NFSU2_TR(0x56ed72);
__builtin_memmove((R+4),(R+24),4);
}
B56ed74:{NFSU2_TR(0x56ed74);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56ed79ull));
TAIL_STATIC(0x56c940u,56c);
}
B56ed79:L56ed79:{c.instructions+=4;NFSU2_TR(0x56ed79);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B56ed7d:{NFSU2_TR(0x56ed7d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ed7e:{NFSU2_TR(0x56ed7e);
__builtin_memmove((R+4),(R+24),4);
}
B56ed80:{NFSU2_TR(0x56ed80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56ed85ull));
TAIL_STATIC(0x56cb50u,56c);
}
B56ed85:L56ed85:{c.instructions+=5;NFSU2_TR(0x56ed85);
__builtin_memmove((R+20),(R+0),4);
}
B56ed87:{NFSU2_TR(0x56ed87);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ed88:{NFSU2_TR(0x56ed88);
__builtin_memmove((R+4),(R+24),4);
}
B56ed8a:{NFSU2_TR(0x56ed8a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56ed8e:{NFSU2_TR(0x56ed8e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56ed93ull));
TAIL_STATIC(0x56ca80u,56c);
}
B56ed93:L56ed93:{c.instructions+=3;NFSU2_TR(0x56ed93);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B56ed96:{NFSU2_TR(0x56ed96);
__builtin_memmove((R+4),(R+24),4);
}
B56ed98:{NFSU2_TR(0x56ed98);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56ed9dull));
TAIL_STATIC(0x56dca0u,56d);
}
B56ed9d:L56ed9d:{c.instructions+=4;NFSU2_TR(0x56ed9d);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B56eda1:{NFSU2_TR(0x56eda1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56eda2:{NFSU2_TR(0x56eda2);
__builtin_memmove((R+4),(R+24),4);
}
B56eda4:{NFSU2_TR(0x56eda4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56eda9ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x56e030u);}goto L56e030;}
}
B56eda9:L56eda9:{c.instructions+=4;NFSU2_TR(0x56eda9);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B56edad:{NFSU2_TR(0x56edad);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56edae:{NFSU2_TR(0x56edae);
__builtin_memmove((R+4),(R+24),4);
}
B56edb0:{NFSU2_TR(0x56edb0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56edb5ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x56e0a0u);}goto L56e0a0;}
}
B56edb5:L56edb5:{c.instructions+=16;NFSU2_TR(0x56edb5);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B56edb8:{NFSU2_TR(0x56edb8);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56edbb:{NFSU2_TR(0x56edbb);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56edbf:{NFSU2_TR(0x56edbf);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56edc2:{NFSU2_TR(0x56edc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56edc5:{NFSU2_TR(0x56edc5);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B56edc7:{NFSU2_TR(0x56edc7);
{u32 ea_=u32(u32(7985892u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56edcd:{NFSU2_TR(0x56edcd);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56edd1:{NFSU2_TR(0x56edd1);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56edd5:{NFSU2_TR(0x56edd5);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B56edd9:{NFSU2_TR(0x56edd9);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B56eddb:{NFSU2_TR(0x56eddb);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56eddf:{NFSU2_TR(0x56eddf);
{u32 ea_=u32(u32(7985916u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B56ede5:{NFSU2_TR(0x56ede5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56ede7:{NFSU2_TR(0x56ede7);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56edea:{NFSU2_TR(0x56edea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56ee4b;}}
}
B56edec:L56edec:{c.instructions+=3;NFSU2_TR(0x56edec);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56edef:{NFSU2_TR(0x56edef);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56edf1:{NFSU2_TR(0x56edf1);
if(r1(R+518)){{goto L56ee4b;}}
}
B56edf3:L56edf3:{c.instructions+=5;NFSU2_TR(0x56edf3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B56edf5:{NFSU2_TR(0x56edf5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B56edf7:{NFSU2_TR(0x56edf7);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56edf9:{NFSU2_TR(0x56edf9);
w4(R+28,u32(0x1ull));
}
B56edfe:{NFSU2_TR(0x56edfe);
if(r1(R+518)){{goto L56ee19;}}
}
B56ee00:L56ee00:{c.instructions+=3;NFSU2_TR(0x56ee00);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56ee03:{NFSU2_TR(0x56ee03);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56ee05:{NFSU2_TR(0x56ee05);
if(r1(R+518)){{goto L56ee19;}}
}
B56ee07:L56ee07:{c.instructions+=3;NFSU2_TR(0x56ee07);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56ee0a:{NFSU2_TR(0x56ee0a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56ee0c:{NFSU2_TR(0x56ee0c);
if(r1(R+518)){{goto L56ee12;}}
}
B56ee0e:L56ee0e:{c.instructions+=2;NFSU2_TR(0x56ee0e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56ee10:{NFSU2_TR(0x56ee10);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56ee19;}}
}
B56ee12:L56ee12:{c.instructions+=2;NFSU2_TR(0x56ee12);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ee14:{NFSU2_TR(0x56ee14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56ee19ull));
TAIL_STATIC(0x56d5c0u,56d);
}
B56ee19:L56ee19:{c.instructions+=5;NFSU2_TR(0x56ee19);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56ee1d:{NFSU2_TR(0x56ee1d);
{u32 ea_=u32(u32(7985920u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B56ee23:{NFSU2_TR(0x56ee23);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56ee25:{NFSU2_TR(0x56ee25);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56ee28:{NFSU2_TR(0x56ee28);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56ee3f;}}
}
B56ee2a:L56ee2a:{c.instructions+=5;NFSU2_TR(0x56ee2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56ee2d:{NFSU2_TR(0x56ee2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56ee33:{NFSU2_TR(0x56ee33);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x9ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56ee37:{NFSU2_TR(0x56ee37);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56ee3b:{NFSU2_TR(0x56ee3b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56ee3f:L56ee3f:{c.instructions+=6;NFSU2_TR(0x56ee3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56ee42:{NFSU2_TR(0x56ee42);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56ee43:{NFSU2_TR(0x56ee43);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56ee44:{NFSU2_TR(0x56ee44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56ee45:{NFSU2_TR(0x56ee45);
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
B56ee48:{NFSU2_TR(0x56ee48);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56ee4b:L56ee4b:{c.instructions+=5;NFSU2_TR(0x56ee4b);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56ee4f:{NFSU2_TR(0x56ee4f);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B56ee55:{NFSU2_TR(0x56ee55);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56ee57:{NFSU2_TR(0x56ee57);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56ee5a:{NFSU2_TR(0x56ee5a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56eec5;}}
}
B56ee5c:L56ee5c:{c.instructions+=9;NFSU2_TR(0x56ee5c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B56ee5e:{NFSU2_TR(0x56ee5e);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B56ee62:{NFSU2_TR(0x56ee62);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+28),(U+0),4);
}
B56ee64:{NFSU2_TR(0x56ee64);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56ee68:{NFSU2_TR(0x56ee68);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ee6a:{NFSU2_TR(0x56ee6a);
{u32 ea_=u32(r4(R+28)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B56ee6d:{NFSU2_TR(0x56ee6d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ee6e:{NFSU2_TR(0x56ee6e);
__builtin_memmove((R+4),(R+28),4);
}
B56ee70:{NFSU2_TR(0x56ee70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56ee75ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x56eab0u);}goto L56eab0;}
}
B56ee75:L56ee75:{c.instructions+=3;NFSU2_TR(0x56ee75);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56ee78:{NFSU2_TR(0x56ee78);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56ee7a:{NFSU2_TR(0x56ee7a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56eec5;}}
}
B56ee7c:L56ee7c:{c.instructions+=4;NFSU2_TR(0x56ee7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56ee7f:{NFSU2_TR(0x56ee7f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B56ee81:{NFSU2_TR(0x56ee81);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B56ee84:{NFSU2_TR(0x56ee84);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56ee89ull));
TAIL_STATIC(0x59fa10u,59f);
}
B56ee89:L56ee89:{c.instructions+=6;NFSU2_TR(0x56ee89);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B56ee8b:{NFSU2_TR(0x56ee8b);
{u32 ea_=u32(r4(R+24)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56ee8e:{NFSU2_TR(0x56ee8e);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B56ee94:{NFSU2_TR(0x56ee94);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56ee96:{NFSU2_TR(0x56ee96);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B56ee99:{NFSU2_TR(0x56ee99);
if(r1(R+514)){{goto L56eec3;}}
}
B56ee9b:L56ee9b:{c.instructions+=9;NFSU2_TR(0x56ee9b);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B56ee9d:{NFSU2_TR(0x56ee9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56eea0:{NFSU2_TR(0x56eea0);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B56eea2:{NFSU2_TR(0x56eea2);
{u32 ea_=u32(u32(7985944u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56eea8:{NFSU2_TR(0x56eea8);
{u32 ea_=u32(u32(7919768u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56eeae:{NFSU2_TR(0x56eeae);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B56eeb0:{NFSU2_TR(0x56eeb0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56eeb2:{NFSU2_TR(0x56eeb2);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B56eeb5:{NFSU2_TR(0x56eeb5);
if(r1(R+514)){{goto L56eed1;}}
}
B56eeb7:L56eeb7:{c.instructions+=6;NFSU2_TR(0x56eeb7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56eeb8:{NFSU2_TR(0x56eeb8);
{u32 ea_=u32(r4(R+24)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B56eebb:{NFSU2_TR(0x56eebb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56eebc:{NFSU2_TR(0x56eebc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56eebd:{NFSU2_TR(0x56eebd);
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
B56eec0:{NFSU2_TR(0x56eec0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56eec3:L56eec3:{c.instructions+=1;NFSU2_TR(0x56eec3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B56eec5:L56eec5:{c.instructions+=6;NFSU2_TR(0x56eec5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56eec6:{NFSU2_TR(0x56eec6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56eec9:{NFSU2_TR(0x56eec9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56eeca:{NFSU2_TR(0x56eeca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56eecb:{NFSU2_TR(0x56eecb);
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
B56eece:{NFSU2_TR(0x56eece);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56eed1:L56eed1:{c.instructions+=6;NFSU2_TR(0x56eed1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56eed2:{NFSU2_TR(0x56eed2);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B56eed4:{NFSU2_TR(0x56eed4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56eed5:{NFSU2_TR(0x56eed5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56eed6:{NFSU2_TR(0x56eed6);
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
B56eed9:{NFSU2_TR(0x56eed9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56eee0:L56eee0:{c.instructions+=8;NFSU2_TR(0x56eee0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56eee1:{NFSU2_TR(0x56eee1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56eee2:{NFSU2_TR(0x56eee2);
__builtin_memmove((R+24),(R+4),4);
}
B56eee4:{NFSU2_TR(0x56eee4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B56eee6:{NFSU2_TR(0x56eee6);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56eee9:{NFSU2_TR(0x56eee9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56eeeb:{NFSU2_TR(0x56eeeb);
w1(R+12,u8(0x1ull));
}
B56eeed:{NFSU2_TR(0x56eeed);
if(r1(R+518)){{goto L56ef3e;}}
}
B56eeef:L56eeef:{c.instructions+=3;NFSU2_TR(0x56eeef);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B56eef2:{NFSU2_TR(0x56eef2);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56eef4:{NFSU2_TR(0x56eef4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56ef3c;}}
}
B56eef6:L56eef6:{c.instructions+=4;NFSU2_TR(0x56eef6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56eef9:{NFSU2_TR(0x56eef9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56eefb:{NFSU2_TR(0x56eefb);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B56eefe:{NFSU2_TR(0x56eefe);
if(r1(R+518)){{goto L56ef1f;}}
}
B56ef00:L56ef00:{c.instructions+=4;NFSU2_TR(0x56ef00);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56ef03:{NFSU2_TR(0x56ef03);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56ef06:{NFSU2_TR(0x56ef06);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56ef08:{NFSU2_TR(0x56ef08);
if(r1(R+518)){{goto L56ef44;}}
}
B56ef0a:L56ef0a:{c.instructions+=3;NFSU2_TR(0x56ef0a);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56ef0d:{NFSU2_TR(0x56ef0d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56ef0f:{NFSU2_TR(0x56ef0f);
if(r1(R+518)){{goto L56ef44;}}
}
B56ef11:L56ef11:{c.instructions+=3;NFSU2_TR(0x56ef11);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ef13:{NFSU2_TR(0x56ef13);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ef18:{NFSU2_TR(0x56ef18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56ef1dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x56eab0u);}goto L56eab0;}
}
B56ef1d:L56ef1d:{c.instructions+=1;NFSU2_TR(0x56ef1d);
{goto L56ef44;}
}
B56ef1f:L56ef1f:{c.instructions+=5;NFSU2_TR(0x56ef1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56ef22:{NFSU2_TR(0x56ef22);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B56ef25:{NFSU2_TR(0x56ef25);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56ef28:{NFSU2_TR(0x56ef28);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56ef2a:{NFSU2_TR(0x56ef2a);
if(r1(R+518)){{goto L56ef44;}}
}
B56ef2c:L56ef2c:{c.instructions+=3;NFSU2_TR(0x56ef2c);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B56ef2f:{NFSU2_TR(0x56ef2f);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56ef31:{NFSU2_TR(0x56ef31);
if(r1(R+518)){{goto L56ef44;}}
}
B56ef33:L56ef33:{c.instructions+=2;NFSU2_TR(0x56ef33);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56ef3a:{NFSU2_TR(0x56ef3a);
{goto L56ef44;}
}
B56ef3c:L56ef3c:{c.instructions+=1;NFSU2_TR(0x56ef3c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56ef3e:L56ef3e:{c.instructions+=2;NFSU2_TR(0x56ef3e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B56ef41:{NFSU2_TR(0x56ef41);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B56ef44:L56ef44:{c.instructions+=4;NFSU2_TR(0x56ef44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B56ef46:{NFSU2_TR(0x56ef46);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xdull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56ef49:{NFSU2_TR(0x56ef49);
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
B56ef4b:{NFSU2_TR(0x56ef4b);
if(r1(R+518)){TAIL_STATIC(0x56f012u,56f);}
}
B56ef51:L56ef51:{c.instructions+=3;NFSU2_TR(0x56ef51);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B56ef54:{NFSU2_TR(0x56ef54);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56ef56:{NFSU2_TR(0x56ef56);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x56f010u,56f);}
}
B56ef5c:L56ef5c:{c.instructions+=4;NFSU2_TR(0x56ef5c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56ef5f:{NFSU2_TR(0x56ef5f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56ef61:{NFSU2_TR(0x56ef61);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B56ef64:{NFSU2_TR(0x56ef64);
if(r1(R+518)){{goto L56ef85;}}
}
B56ef66:L56ef66:{c.instructions+=4;NFSU2_TR(0x56ef66);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56ef69:{NFSU2_TR(0x56ef69);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56ef6c:{NFSU2_TR(0x56ef6c);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56ef6e:{NFSU2_TR(0x56ef6e);
if(r1(R+518)){{goto L56efa0;}}
}
B56ef70:L56ef70:{c.instructions+=3;NFSU2_TR(0x56ef70);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56ef73:{NFSU2_TR(0x56ef73);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56ef75:{NFSU2_TR(0x56ef75);
if(r1(R+518)){{goto L56efa0;}}
}
B56ef77:L56ef77:{c.instructions+=3;NFSU2_TR(0x56ef77);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ef79:{NFSU2_TR(0x56ef79);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ef7e:{NFSU2_TR(0x56ef7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56ef83ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x56eab0u);}goto L56eab0;}
}
B56ef83:L56ef83:{c.instructions+=1;NFSU2_TR(0x56ef83);
{goto L56efa0;}
}
B56ef85:L56ef85:{c.instructions+=5;NFSU2_TR(0x56ef85);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56ef88:{NFSU2_TR(0x56ef88);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B56ef8b:{NFSU2_TR(0x56ef8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56ef8e:{NFSU2_TR(0x56ef8e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56ef90:{NFSU2_TR(0x56ef90);
if(r1(R+518)){{goto L56efa0;}}
}
B56ef92:L56ef92:{c.instructions+=3;NFSU2_TR(0x56ef92);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B56ef95:{NFSU2_TR(0x56ef95);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56ef97:{NFSU2_TR(0x56ef97);
if(r1(R+518)){{goto L56efa0;}}
}
B56ef99:L56ef99:{c.instructions+=1;NFSU2_TR(0x56ef99);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56efa0:L56efa0:{c.instructions+=3;NFSU2_TR(0x56efa0);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B56efa5:{NFSU2_TR(0x56efa5);
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
B56efa7:{NFSU2_TR(0x56efa7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56efb2;}}
}
B56efa9:L56efa9:{c.instructions+=3;NFSU2_TR(0x56efa9);
__builtin_memmove((R+0),gp(0x890104),4);
}
B56efae:{NFSU2_TR(0x56efae);
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
B56efb0:{NFSU2_TR(0x56efb0);
if(r1(R+518)){{goto L56efc5;}}
}
B56efb2:L56efb2:{c.instructions+=5;NFSU2_TR(0x56efb2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B56efb4:{NFSU2_TR(0x56efb4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B56efb6:{NFSU2_TR(0x56efb6);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B56efba:{NFSU2_TR(0x56efba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56efbb:{NFSU2_TR(0x56efbb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56efc0ull));
TAIL_STATIC(0x56dd90u,56d);
}
B56efc0:L56efc0:{c.instructions+=2;NFSU2_TR(0x56efc0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B56efc3:{NFSU2_TR(0x56efc3);
{goto L56efd1;}
}
B56efc5:L56efc5:{c.instructions+=5;NFSU2_TR(0x56efc5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B56efc7:{NFSU2_TR(0x56efc7);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B56efca:{NFSU2_TR(0x56efca);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B56efcc:{NFSU2_TR(0x56efcc);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+8))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B56efce:{NFSU2_TR(0x56efce);
__builtin_memmove((R+0),(R+518),1);
}
B56efd1:L56efd1:{c.instructions+=2;NFSU2_TR(0x56efd1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56efd3:{NFSU2_TR(0x56efd3);
if(r1(R+518)){{goto L56eff5;}}
}
B56efd5:L56efd5:{c.instructions+=4;NFSU2_TR(0x56efd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56efd8:{NFSU2_TR(0x56efd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56efdb:{NFSU2_TR(0x56efdb);
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
B56efdd:{NFSU2_TR(0x56efdd);
if(r1(R+518)){TAIL_STATIC(0x56f018u,56f);}
}
B56efdf:L56efdf:{c.instructions+=3;NFSU2_TR(0x56efdf);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56efe2:{NFSU2_TR(0x56efe2);
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
B56efe4:{NFSU2_TR(0x56efe4);
if(r1(R+518)){TAIL_STATIC(0x56f018u,56f);}
}
B56efe6:L56efe6:{c.instructions+=3;NFSU2_TR(0x56efe6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56efe8:{NFSU2_TR(0x56efe8);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56efed:{NFSU2_TR(0x56efed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56eff2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x56eab0u);}goto L56eab0;}
}
B56eff2:L56eff2:{c.instructions+=3;NFSU2_TR(0x56eff2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56eff3:{NFSU2_TR(0x56eff3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56eff4:{NFSU2_TR(0x56eff4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56eff5:L56eff5:{c.instructions+=4;NFSU2_TR(0x56eff5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56eff8:{NFSU2_TR(0x56eff8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56effb:{NFSU2_TR(0x56effb);
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
B56effd:{NFSU2_TR(0x56effd);
if(r1(R+518)){TAIL_STATIC(0x56f018u,56f);}
}
B56efff:L56efff:{c.instructions+=1;NFSU2_TR(0x56efff);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
TAIL_STATIC(0x56f002u,56f);
}
XIT:NFSU2_TR_EXIT(0x56e,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
