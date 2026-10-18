#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_673(u8* __restrict R,Cpu& c);
u32 body_698(u8* __restrict R,Cpu& c);
u32 body_699(u8* __restrict R,Cpu& c);
u32 body_69e(u8* __restrict R,Cpu& c);
u32 body_6b6(u8* __restrict R,Cpu& c);
u32 body_6b8(u8* __restrict R,Cpu& c);
u32 body_6cc(u8* __restrict R,Cpu& c);
u32 body_6cf(u8* __restrict R,Cpu& c);
u32 body_6d1(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6b7,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6b7,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6b7(u8* __restrict R,Cpu& c);
u32 page_6b7(Cpu& c){return body_6b7(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6b7(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6b7000:goto L6b7000;
case 0x6b7002:c.instructions+=3;goto B6b7002;
case 0x6b7004:c.instructions+=2;goto B6b7004;
case 0x6b7006:c.instructions+=1;goto B6b7006;
case 0x6b700c:goto L6b700c;
case 0x6b700e:c.instructions+=6;goto B6b700e;
case 0x6b7010:c.instructions+=5;goto B6b7010;
case 0x6b7016:c.instructions+=4;goto B6b7016;
case 0x6b701b:c.instructions+=3;goto B6b701b;
case 0x6b7020:c.instructions+=2;goto B6b7020;
case 0x6b7022:c.instructions+=1;goto B6b7022;
case 0x6b7024:goto L6b7024;
case 0x6b7026:c.instructions+=1;goto B6b7026;
case 0x6b7027:goto L6b7027;
case 0x6b702a:c.instructions+=1;goto B6b702a;
case 0x6b7030:goto L6b7030;
case 0x6b7032:c.instructions+=3;goto B6b7032;
case 0x6b7037:c.instructions+=2;goto B6b7037;
case 0x6b703c:c.instructions+=1;goto B6b703c;
case 0x6b7042:goto L6b7042;
case 0x6b7045:c.instructions+=3;goto B6b7045;
case 0x6b7048:c.instructions+=2;goto B6b7048;
case 0x6b704b:c.instructions+=1;goto B6b704b;
case 0x6b7051:goto L6b7051;
case 0x6b7054:c.instructions+=2;goto B6b7054;
case 0x6b7057:c.instructions+=1;goto B6b7057;
case 0x6b705a:goto L6b705a;
case 0x6b705c:c.instructions+=8;goto B6b705c;
case 0x6b705e:c.instructions+=7;goto B6b705e;
case 0x6b705f:c.instructions+=6;goto B6b705f;
case 0x6b7060:c.instructions+=5;goto B6b7060;
case 0x6b7063:c.instructions+=4;goto B6b7063;
case 0x6b7065:c.instructions+=3;goto B6b7065;
case 0x6b706b:c.instructions+=2;goto B6b706b;
case 0x6b7071:c.instructions+=1;goto B6b7071;
case 0x6b7076:goto L6b7076;
case 0x6b7079:c.instructions+=5;goto B6b7079;
case 0x6b707c:c.instructions+=4;goto B6b707c;
case 0x6b707e:c.instructions+=3;goto B6b707e;
case 0x6b7081:c.instructions+=2;goto B6b7081;
case 0x6b7085:c.instructions+=1;goto B6b7085;
case 0x6b7087:goto L6b7087;
case 0x6b708d:c.instructions+=1;goto B6b708d;
case 0x6b708f:goto L6b708f;
case 0x6b7091:c.instructions+=12;goto B6b7091;
case 0x6b7093:c.instructions+=11;goto B6b7093;
case 0x6b709a:c.instructions+=10;goto B6b709a;
case 0x6b709b:c.instructions+=9;goto B6b709b;
case 0x6b709f:c.instructions+=8;goto B6b709f;
case 0x6b70a0:c.instructions+=7;goto B6b70a0;
case 0x6b70a4:c.instructions+=6;goto B6b70a4;
case 0x6b70a5:c.instructions+=5;goto B6b70a5;
case 0x6b70a8:c.instructions+=4;goto B6b70a8;
case 0x6b70aa:c.instructions+=3;goto B6b70aa;
case 0x6b70b0:c.instructions+=2;goto B6b70b0;
case 0x6b70b6:c.instructions+=1;goto B6b70b6;
case 0x6b70bb:goto L6b70bb;
case 0x6b70bd:c.instructions+=13;goto B6b70bd;
case 0x6b70bf:c.instructions+=12;goto B6b70bf;
case 0x6b70c2:c.instructions+=11;goto B6b70c2;
case 0x6b70c3:c.instructions+=10;goto B6b70c3;
case 0x6b70c7:c.instructions+=9;goto B6b70c7;
case 0x6b70c8:c.instructions+=8;goto B6b70c8;
case 0x6b70cc:c.instructions+=7;goto B6b70cc;
case 0x6b70cd:c.instructions+=6;goto B6b70cd;
case 0x6b70d0:c.instructions+=5;goto B6b70d0;
case 0x6b70d2:c.instructions+=4;goto B6b70d2;
case 0x6b70d4:c.instructions+=3;goto B6b70d4;
case 0x6b70d7:c.instructions+=2;goto B6b70d7;
case 0x6b70da:c.instructions+=1;goto B6b70da;
case 0x6b70df:goto L6b70df;
case 0x6b70e2:c.instructions+=1;goto B6b70e2;
case 0x6b70e4:goto L6b70e4;
case 0x6b70e7:c.instructions+=3;goto B6b70e7;
case 0x6b70ea:c.instructions+=2;goto B6b70ea;
case 0x6b70ec:c.instructions+=1;goto B6b70ec;
case 0x6b70ee:goto L6b70ee;
case 0x6b70f2:c.instructions+=1;goto B6b70f2;
case 0x6b70f4:goto L6b70f4;
case 0x6b70fb:c.instructions+=1;goto B6b70fb;
case 0x6b70fd:goto L6b70fd;
case 0x6b7100:goto L6b7100;
case 0x6b7103:c.instructions+=4;goto B6b7103;
case 0x6b7106:c.instructions+=3;goto B6b7106;
case 0x6b710a:c.instructions+=2;goto B6b710a;
case 0x6b710d:c.instructions+=1;goto B6b710d;
case 0x6b7113:goto L6b7113;
case 0x6b7117:c.instructions+=1;goto B6b7117;
case 0x6b711d:goto L6b711d;
case 0x6b711f:goto L6b711f;
case 0x6b7122:c.instructions+=2;goto B6b7122;
case 0x6b7125:c.instructions+=1;goto B6b7125;
case 0x6b712b:goto L6b712b;
case 0x6b712e:c.instructions+=3;goto B6b712e;
case 0x6b7134:c.instructions+=2;goto B6b7134;
case 0x6b7137:c.instructions+=1;goto B6b7137;
case 0x6b713d:goto L6b713d;
case 0x6b7143:c.instructions+=2;goto B6b7143;
case 0x6b7146:c.instructions+=1;goto B6b7146;
case 0x6b7149:goto L6b7149;
case 0x6b714c:c.instructions+=4;goto B6b714c;
case 0x6b714e:c.instructions+=3;goto B6b714e;
case 0x6b7150:c.instructions+=2;goto B6b7150;
case 0x6b7153:c.instructions+=1;goto B6b7153;
case 0x6b7159:goto L6b7159;
case 0x6b715c:c.instructions+=3;goto B6b715c;
case 0x6b715e:c.instructions+=2;goto B6b715e;
case 0x6b7160:c.instructions+=1;goto B6b7160;
case 0x6b7166:goto L6b7166;
case 0x6b7168:c.instructions+=1;goto B6b7168;
case 0x6b716e:goto L6b716e;
case 0x6b7170:c.instructions+=6;goto B6b7170;
case 0x6b7173:c.instructions+=5;goto B6b7173;
case 0x6b7175:c.instructions+=4;goto B6b7175;
case 0x6b717a:c.instructions+=3;goto B6b717a;
case 0x6b7180:c.instructions+=2;goto B6b7180;
case 0x6b7183:c.instructions+=1;goto B6b7183;
case 0x6b7185:goto L6b7185;
case 0x6b718c:goto L6b718c;
case 0x6b718e:c.instructions+=3;goto B6b718e;
case 0x6b7191:c.instructions+=2;goto B6b7191;
case 0x6b7194:c.instructions+=1;goto B6b7194;
case 0x6b7196:goto L6b7196;
case 0x6b7199:c.instructions+=1;goto B6b7199;
case 0x6b719c:goto L6b719c;
case 0x6b719f:c.instructions+=2;goto B6b719f;
case 0x6b71a2:c.instructions+=1;goto B6b71a2;
case 0x6b71a4:goto L6b71a4;
case 0x6b71a7:c.instructions+=3;goto B6b71a7;
case 0x6b71aa:c.instructions+=2;goto B6b71aa;
case 0x6b71ad:c.instructions+=1;goto B6b71ad;
case 0x6b71b0:goto L6b71b0;
case 0x6b71b2:c.instructions+=2;goto B6b71b2;
case 0x6b71b4:c.instructions+=1;goto B6b71b4;
case 0x6b71ba:goto L6b71ba;
case 0x6b71bd:c.instructions+=4;goto B6b71bd;
case 0x6b71c0:c.instructions+=3;goto B6b71c0;
case 0x6b71c3:c.instructions+=2;goto B6b71c3;
case 0x6b71c6:c.instructions+=1;goto B6b71c6;
case 0x6b71cc:goto L6b71cc;
case 0x6b71cf:c.instructions+=6;goto B6b71cf;
case 0x6b71d2:c.instructions+=5;goto B6b71d2;
case 0x6b71d5:c.instructions+=4;goto B6b71d5;
case 0x6b71d8:c.instructions+=3;goto B6b71d8;
case 0x6b71db:c.instructions+=2;goto B6b71db;
case 0x6b71de:c.instructions+=1;goto B6b71de;
case 0x6b71e0:goto L6b71e0;
case 0x6b71e2:goto L6b71e2;
case 0x6b71e5:c.instructions+=3;goto B6b71e5;
case 0x6b71e8:c.instructions+=2;goto B6b71e8;
case 0x6b71eb:c.instructions+=1;goto B6b71eb;
case 0x6b71ed:goto L6b71ed;
case 0x6b71f0:goto L6b71f0;
case 0x6b71f4:c.instructions+=4;goto B6b71f4;
case 0x6b71f5:c.instructions+=3;goto B6b71f5;
case 0x6b71fb:c.instructions+=2;goto B6b71fb;
case 0x6b71fe:c.instructions+=1;goto B6b71fe;
case 0x6b7204:goto L6b7204;
case 0x6b7207:c.instructions+=2;goto B6b7207;
case 0x6b720a:c.instructions+=1;goto B6b720a;
case 0x6b720c:goto L6b720c;
case 0x6b7210:c.instructions+=2;goto B6b7210;
case 0x6b7213:c.instructions+=1;goto B6b7213;
case 0x6b7219:goto L6b7219;
case 0x6b721a:c.instructions+=2;goto B6b721a;
case 0x6b721e:c.instructions+=1;goto B6b721e;
case 0x6b7224:goto L6b7224;
case 0x6b7226:c.instructions+=9;goto B6b7226;
case 0x6b7229:c.instructions+=8;goto B6b7229;
case 0x6b722c:c.instructions+=7;goto B6b722c;
case 0x6b7230:c.instructions+=6;goto B6b7230;
case 0x6b7233:c.instructions+=5;goto B6b7233;
case 0x6b7237:c.instructions+=4;goto B6b7237;
case 0x6b723a:c.instructions+=3;goto B6b723a;
case 0x6b723d:c.instructions+=2;goto B6b723d;
case 0x6b7240:c.instructions+=1;goto B6b7240;
case 0x6b7246:goto L6b7246;
case 0x6b724a:c.instructions+=5;goto B6b724a;
case 0x6b724d:c.instructions+=4;goto B6b724d;
case 0x6b7250:c.instructions+=3;goto B6b7250;
case 0x6b7253:c.instructions+=2;goto B6b7253;
case 0x6b7255:c.instructions+=1;goto B6b7255;
case 0x6b7257:goto L6b7257;
case 0x6b725c:c.instructions+=1;goto B6b725c;
case 0x6b7262:goto L6b7262;
case 0x6b7264:c.instructions+=1;goto B6b7264;
case 0x6b7269:goto L6b7269;
case 0x6b726b:c.instructions+=1;goto B6b726b;
case 0x6b726d:goto L6b726d;
case 0x6b726f:c.instructions+=1;goto B6b726f;
case 0x6b7274:goto L6b7274;
case 0x6b7276:c.instructions+=1;goto B6b7276;
case 0x6b7278:goto L6b7278;
case 0x6b727a:goto L6b727a;
case 0x6b727c:c.instructions+=2;goto B6b727c;
case 0x6b7280:c.instructions+=1;goto B6b7280;
case 0x6b7286:goto L6b7286;
case 0x6b7289:c.instructions+=3;goto B6b7289;
case 0x6b728c:c.instructions+=2;goto B6b728c;
case 0x6b728f:c.instructions+=1;goto B6b728f;
case 0x6b7291:goto L6b7291;
case 0x6b7294:c.instructions+=4;goto B6b7294;
case 0x6b7296:c.instructions+=3;goto B6b7296;
case 0x6b7298:c.instructions+=2;goto B6b7298;
case 0x6b729d:c.instructions+=1;goto B6b729d;
case 0x6b729f:goto L6b729f;
case 0x6b72a2:c.instructions+=1;goto B6b72a2;
case 0x6b72a8:goto L6b72a8;
case 0x6b72a9:c.instructions+=4;goto B6b72a9;
case 0x6b72ab:c.instructions+=3;goto B6b72ab;
case 0x6b72ad:c.instructions+=2;goto B6b72ad;
case 0x6b72b2:c.instructions+=1;goto B6b72b2;
case 0x6b72b4:goto L6b72b4;
case 0x6b72b9:c.instructions+=1;goto B6b72b9;
case 0x6b72bb:goto L6b72bb;
case 0x6b72be:c.instructions+=1;goto B6b72be;
case 0x6b72c4:goto L6b72c4;
case 0x6b72c5:c.instructions+=4;goto B6b72c5;
case 0x6b72c7:c.instructions+=3;goto B6b72c7;
case 0x6b72c9:c.instructions+=2;goto B6b72c9;
case 0x6b72ce:c.instructions+=1;goto B6b72ce;
case 0x6b72d0:goto L6b72d0;
case 0x6b72d3:c.instructions+=4;goto B6b72d3;
case 0x6b72d4:c.instructions+=3;goto B6b72d4;
case 0x6b72d6:c.instructions+=2;goto B6b72d6;
case 0x6b72d8:c.instructions+=1;goto B6b72d8;
case 0x6b72da:goto L6b72da;
case 0x6b72df:c.instructions+=1;goto B6b72df;
case 0x6b72e1:goto L6b72e1;
case 0x6b72e3:c.instructions+=6;goto B6b72e3;
case 0x6b72e7:c.instructions+=5;goto B6b72e7;
case 0x6b72ea:c.instructions+=4;goto B6b72ea;
case 0x6b72eb:c.instructions+=3;goto B6b72eb;
case 0x6b72f0:c.instructions+=2;goto B6b72f0;
case 0x6b72f5:c.instructions+=1;goto B6b72f5;
case 0x6b72f7:goto L6b72f7;
case 0x6b72f9:c.instructions+=8;goto B6b72f9;
case 0x6b72fd:c.instructions+=7;goto B6b72fd;
case 0x6b72fe:c.instructions+=6;goto B6b72fe;
case 0x6b7301:c.instructions+=5;goto B6b7301;
case 0x6b7302:c.instructions+=4;goto B6b7302;
case 0x6b7304:c.instructions+=3;goto B6b7304;
case 0x6b7305:c.instructions+=2;goto B6b7305;
case 0x6b730a:c.instructions+=1;goto B6b730a;
case 0x6b730f:goto L6b730f;
case 0x6b7310:goto L6b7310;
case 0x6b7315:goto L6b7315;
case 0x6b7317:c.instructions+=2;goto B6b7317;
case 0x6b7319:c.instructions+=1;goto B6b7319;
case 0x6b731f:goto L6b731f;
case 0x6b7322:c.instructions+=3;goto B6b7322;
case 0x6b7325:c.instructions+=2;goto B6b7325;
case 0x6b7328:c.instructions+=1;goto B6b7328;
case 0x6b732e:goto L6b732e;
case 0x6b7331:c.instructions+=2;goto B6b7331;
case 0x6b7334:c.instructions+=1;goto B6b7334;
case 0x6b733a:goto L6b733a;
case 0x6b733d:c.instructions+=15;goto B6b733d;
case 0x6b7341:c.instructions+=14;goto B6b7341;
case 0x6b7344:c.instructions+=13;goto B6b7344;
case 0x6b7348:c.instructions+=12;goto B6b7348;
case 0x6b734c:c.instructions+=11;goto B6b734c;
case 0x6b734f:c.instructions+=10;goto B6b734f;
case 0x6b7356:c.instructions+=9;goto B6b7356;
case 0x6b7359:c.instructions+=8;goto B6b7359;
case 0x6b735d:c.instructions+=7;goto B6b735d;
case 0x6b7361:c.instructions+=6;goto B6b7361;
case 0x6b7364:c.instructions+=5;goto B6b7364;
case 0x6b7366:c.instructions+=4;goto B6b7366;
case 0x6b7369:c.instructions+=3;goto B6b7369;
case 0x6b736a:c.instructions+=2;goto B6b736a;
case 0x6b736d:c.instructions+=1;goto B6b736d;
case 0x6b7370:goto L6b7370;
case 0x6b7373:c.instructions+=28;goto B6b7373;
case 0x6b7375:c.instructions+=27;goto B6b7375;
case 0x6b7378:c.instructions+=26;goto B6b7378;
case 0x6b737b:c.instructions+=25;goto B6b737b;
case 0x6b737e:c.instructions+=24;goto B6b737e;
case 0x6b7381:c.instructions+=23;goto B6b7381;
case 0x6b7384:c.instructions+=22;goto B6b7384;
case 0x6b7388:c.instructions+=21;goto B6b7388;
case 0x6b738b:c.instructions+=20;goto B6b738b;
case 0x6b738e:c.instructions+=19;goto B6b738e;
case 0x6b7391:c.instructions+=18;goto B6b7391;
case 0x6b7394:c.instructions+=17;goto B6b7394;
case 0x6b7397:c.instructions+=16;goto B6b7397;
case 0x6b739a:c.instructions+=15;goto B6b739a;
case 0x6b739d:c.instructions+=14;goto B6b739d;
case 0x6b73a1:c.instructions+=13;goto B6b73a1;
case 0x6b73a4:c.instructions+=12;goto B6b73a4;
case 0x6b73a7:c.instructions+=11;goto B6b73a7;
case 0x6b73aa:c.instructions+=10;goto B6b73aa;
case 0x6b73ab:c.instructions+=9;goto B6b73ab;
case 0x6b73ac:c.instructions+=8;goto B6b73ac;
case 0x6b73af:c.instructions+=7;goto B6b73af;
case 0x6b73b1:c.instructions+=6;goto B6b73b1;
case 0x6b73b3:c.instructions+=5;goto B6b73b3;
case 0x6b73b9:c.instructions+=4;goto B6b73b9;
case 0x6b73bb:c.instructions+=3;goto B6b73bb;
case 0x6b73be:c.instructions+=2;goto B6b73be;
case 0x6b73c1:c.instructions+=1;goto B6b73c1;
case 0x6b73c6:goto L6b73c6;
case 0x6b73c9:c.instructions+=11;goto B6b73c9;
case 0x6b73cc:c.instructions+=10;goto B6b73cc;
case 0x6b73cf:c.instructions+=9;goto B6b73cf;
case 0x6b73d2:c.instructions+=8;goto B6b73d2;
case 0x6b73d5:c.instructions+=7;goto B6b73d5;
case 0x6b73d8:c.instructions+=6;goto B6b73d8;
case 0x6b73db:c.instructions+=5;goto B6b73db;
case 0x6b73de:c.instructions+=4;goto B6b73de;
case 0x6b73e2:c.instructions+=3;goto B6b73e2;
case 0x6b73e5:c.instructions+=2;goto B6b73e5;
case 0x6b73e8:c.instructions+=1;goto B6b73e8;
case 0x6b73ed:goto L6b73ed;
case 0x6b73f0:c.instructions+=11;goto B6b73f0;
case 0x6b73f3:c.instructions+=10;goto B6b73f3;
case 0x6b73f6:c.instructions+=9;goto B6b73f6;
case 0x6b73f9:c.instructions+=8;goto B6b73f9;
case 0x6b73fb:c.instructions+=7;goto B6b73fb;
case 0x6b73fe:c.instructions+=6;goto B6b73fe;
case 0x6b7404:c.instructions+=5;goto B6b7404;
case 0x6b7407:c.instructions+=4;goto B6b7407;
case 0x6b740a:c.instructions+=3;goto B6b740a;
case 0x6b740d:c.instructions+=2;goto B6b740d;
case 0x6b7410:c.instructions+=1;goto B6b7410;
case 0x6b7415:goto L6b7415;
case 0x6b7418:c.instructions+=8;goto B6b7418;
case 0x6b741b:c.instructions+=7;goto B6b741b;
case 0x6b741e:c.instructions+=6;goto B6b741e;
case 0x6b7421:c.instructions+=5;goto B6b7421;
case 0x6b7424:c.instructions+=4;goto B6b7424;
case 0x6b7427:c.instructions+=3;goto B6b7427;
case 0x6b7429:c.instructions+=2;goto B6b7429;
case 0x6b742f:c.instructions+=1;goto B6b742f;
case 0x6b7431:goto L6b7431;
case 0x6b7434:c.instructions+=3;goto B6b7434;
case 0x6b7435:c.instructions+=2;goto B6b7435;
case 0x6b7438:c.instructions+=1;goto B6b7438;
case 0x6b743a:goto L6b743a;
case 0x6b743d:c.instructions+=3;goto B6b743d;
case 0x6b7440:c.instructions+=2;goto B6b7440;
case 0x6b7444:c.instructions+=1;goto B6b7444;
case 0x6b7448:goto L6b7448;
case 0x6b744b:c.instructions+=5;goto B6b744b;
case 0x6b744f:c.instructions+=4;goto B6b744f;
case 0x6b7453:c.instructions+=3;goto B6b7453;
case 0x6b7456:c.instructions+=2;goto B6b7456;
case 0x6b7459:c.instructions+=1;goto B6b7459;
case 0x6b745f:goto L6b745f;
case 0x6b7462:c.instructions+=3;goto B6b7462;
case 0x6b7465:c.instructions+=2;goto B6b7465;
case 0x6b7468:c.instructions+=1;goto B6b7468;
case 0x6b746e:goto L6b746e;
case 0x6b7471:c.instructions+=3;goto B6b7471;
case 0x6b7475:c.instructions+=2;goto B6b7475;
case 0x6b7478:c.instructions+=1;goto B6b7478;
case 0x6b747a:goto L6b747a;
case 0x6b747c:c.instructions+=7;goto B6b747c;
case 0x6b747f:c.instructions+=6;goto B6b747f;
case 0x6b7482:c.instructions+=5;goto B6b7482;
case 0x6b7485:c.instructions+=4;goto B6b7485;
case 0x6b7488:c.instructions+=3;goto B6b7488;
case 0x6b748b:c.instructions+=2;goto B6b748b;
case 0x6b748e:c.instructions+=1;goto B6b748e;
case 0x6b7490:goto L6b7490;
case 0x6b7493:c.instructions+=3;goto B6b7493;
case 0x6b7495:c.instructions+=2;goto B6b7495;
case 0x6b7497:c.instructions+=1;goto B6b7497;
case 0x6b7499:goto L6b7499;
case 0x6b749d:c.instructions+=3;goto B6b749d;
case 0x6b74a0:c.instructions+=2;goto B6b74a0;
case 0x6b74a4:c.instructions+=1;goto B6b74a4;
case 0x6b74aa:goto L6b74aa;
case 0x6b74ab:c.instructions+=2;goto B6b74ab;
case 0x6b74ad:c.instructions+=1;goto B6b74ad;
case 0x6b74af:goto L6b74af;
case 0x6b74b1:c.instructions+=10;goto B6b74b1;
case 0x6b74b4:c.instructions+=9;goto B6b74b4;
case 0x6b74b7:c.instructions+=8;goto B6b74b7;
case 0x6b74b9:c.instructions+=7;goto B6b74b9;
case 0x6b74bc:c.instructions+=6;goto B6b74bc;
case 0x6b74bf:c.instructions+=5;goto B6b74bf;
case 0x6b74c2:c.instructions+=4;goto B6b74c2;
case 0x6b74c5:c.instructions+=3;goto B6b74c5;
case 0x6b74c8:c.instructions+=2;goto B6b74c8;
case 0x6b74ca:c.instructions+=1;goto B6b74ca;
case 0x6b74d0:goto L6b74d0;
case 0x6b74d5:c.instructions+=2;goto B6b74d5;
case 0x6b74d9:c.instructions+=1;goto B6b74d9;
case 0x6b74db:goto L6b74db;
case 0x6b74de:c.instructions+=1;goto B6b74de;
case 0x6b74e0:goto L6b74e0;
case 0x6b74e4:c.instructions+=6;goto B6b74e4;
case 0x6b74e7:c.instructions+=5;goto B6b74e7;
case 0x6b74eb:c.instructions+=4;goto B6b74eb;
case 0x6b74ee:c.instructions+=3;goto B6b74ee;
case 0x6b74f1:c.instructions+=2;goto B6b74f1;
case 0x6b74f4:c.instructions+=1;goto B6b74f4;
case 0x6b74fa:goto L6b74fa;
case 0x6b74ff:c.instructions+=1;goto B6b74ff;
case 0x6b7504:goto L6b7504;
case 0x6b7507:goto L6b7507;
case 0x6b750b:c.instructions+=2;goto B6b750b;
case 0x6b750d:c.instructions+=1;goto B6b750d;
case 0x6b750f:goto L6b750f;
case 0x6b7512:c.instructions+=9;goto B6b7512;
case 0x6b7515:c.instructions+=8;goto B6b7515;
case 0x6b7518:c.instructions+=7;goto B6b7518;
case 0x6b751c:c.instructions+=6;goto B6b751c;
case 0x6b751e:c.instructions+=5;goto B6b751e;
case 0x6b7522:c.instructions+=4;goto B6b7522;
case 0x6b7525:c.instructions+=3;goto B6b7525;
case 0x6b7526:c.instructions+=2;goto B6b7526;
case 0x6b7528:c.instructions+=1;goto B6b7528;
case 0x6b752d:goto L6b752d;
case 0x6b752f:c.instructions+=2;goto B6b752f;
case 0x6b7531:c.instructions+=1;goto B6b7531;
case 0x6b7533:goto L6b7533;
case 0x6b7536:c.instructions+=6;goto B6b7536;
case 0x6b7539:c.instructions+=5;goto B6b7539;
case 0x6b753c:c.instructions+=4;goto B6b753c;
case 0x6b753f:c.instructions+=3;goto B6b753f;
case 0x6b7542:c.instructions+=2;goto B6b7542;
case 0x6b7545:c.instructions+=1;goto B6b7545;
case 0x6b7547:goto L6b7547;
case 0x6b754a:c.instructions+=4;goto B6b754a;
case 0x6b754d:c.instructions+=3;goto B6b754d;
case 0x6b7551:c.instructions+=2;goto B6b7551;
case 0x6b7554:c.instructions+=1;goto B6b7554;
case 0x6b755a:goto L6b755a;
case 0x6b755c:goto L6b755c;
case 0x6b755e:goto L6b755e;
case 0x6b7562:c.instructions+=2;goto B6b7562;
case 0x6b7564:c.instructions+=1;goto B6b7564;
case 0x6b7566:goto L6b7566;
case 0x6b7568:c.instructions+=1;goto B6b7568;
case 0x6b756d:goto L6b756d;
case 0x6b756e:c.instructions+=2;goto B6b756e;
case 0x6b7571:c.instructions+=1;goto B6b7571;
case 0x6b7573:goto L6b7573;
case 0x6b7574:c.instructions+=5;goto B6b7574;
case 0x6b7576:c.instructions+=4;goto B6b7576;
case 0x6b7577:c.instructions+=3;goto B6b7577;
case 0x6b7578:c.instructions+=2;goto B6b7578;
case 0x6b7579:c.instructions+=1;goto B6b7579;
case 0x6b757c:goto L6b757c;
case 0x6b7581:c.instructions+=2;goto B6b7581;
case 0x6b7586:c.instructions+=1;goto B6b7586;
case 0x6b7589:goto L6b7589;
case 0x6b758a:c.instructions+=1;goto B6b758a;
case 0x6b758f:goto L6b758f;
case 0x6b7592:goto L6b7592;
case 0x6b7597:c.instructions+=1;goto B6b7597;
case 0x6b7599:goto L6b7599;
case 0x6b759f:c.instructions+=6;goto B6b759f;
case 0x6b75a4:c.instructions+=5;goto B6b75a4;
case 0x6b75a5:c.instructions+=4;goto B6b75a5;
case 0x6b75aa:c.instructions+=3;goto B6b75aa;
case 0x6b75af:c.instructions+=2;goto B6b75af;
case 0x6b75b0:c.instructions+=1;goto B6b75b0;
case 0x6b75b2:goto L6b75b2;
case 0x6b75b7:c.instructions+=2;goto B6b75b7;
case 0x6b75bc:c.instructions+=1;goto B6b75bc;
case 0x6b75be:goto L6b75be;
case 0x6b75c3:c.instructions+=1;goto B6b75c3;
case 0x6b75c8:goto L6b75c8;
case 0x6b75c9:c.instructions+=1;goto B6b75c9;
case 0x6b75cb:goto L6b75cb;
case 0x6b75d0:c.instructions+=1;goto B6b75d0;
case 0x6b75d2:goto L6b75d2;
case 0x6b75d4:c.instructions+=2;goto B6b75d4;
case 0x6b75d5:c.instructions+=1;goto B6b75d5;
case 0x6b75d7:goto L6b75d7;
case 0x6b75dc:c.instructions+=3;goto B6b75dc;
case 0x6b75e1:c.instructions+=2;goto B6b75e1;
case 0x6b75e3:c.instructions+=1;goto B6b75e3;
case 0x6b75e5:goto L6b75e5;
case 0x6b75ea:goto L6b75ea;
case 0x6b75ef:c.instructions+=1;goto B6b75ef;
case 0x6b75f2:goto L6b75f2;
case 0x6b75f3:c.instructions+=1;goto B6b75f3;
case 0x6b75f8:goto L6b75f8;
case 0x6b75fb:c.instructions+=1;goto B6b75fb;
case 0x6b75fd:goto L6b75fd;
case 0x6b75ff:c.instructions+=23;goto B6b75ff;
case 0x6b7600:c.instructions+=22;goto B6b7600;
case 0x6b7602:c.instructions+=21;goto B6b7602;
case 0x6b7605:c.instructions+=20;goto B6b7605;
case 0x6b7606:c.instructions+=19;goto B6b7606;
case 0x6b7607:c.instructions+=18;goto B6b7607;
case 0x6b7608:c.instructions+=17;goto B6b7608;
case 0x6b760a:c.instructions+=16;goto B6b760a;
case 0x6b760d:c.instructions+=15;goto B6b760d;
case 0x6b760e:c.instructions+=14;goto B6b760e;
case 0x6b760f:c.instructions+=13;goto B6b760f;
case 0x6b7610:c.instructions+=12;goto B6b7610;
case 0x6b7611:c.instructions+=11;goto B6b7611;
case 0x6b7613:c.instructions+=10;goto B6b7613;
case 0x6b7615:c.instructions+=9;goto B6b7615;
case 0x6b761b:c.instructions+=8;goto B6b761b;
case 0x6b761c:c.instructions+=7;goto B6b761c;
case 0x6b761d:c.instructions+=6;goto B6b761d;
case 0x6b761f:c.instructions+=5;goto B6b761f;
case 0x6b7621:c.instructions+=4;goto B6b7621;
case 0x6b7623:c.instructions+=3;goto B6b7623;
case 0x6b7624:c.instructions+=2;goto B6b7624;
case 0x6b762a:c.instructions+=1;goto B6b762a;
case 0x6b762c:goto L6b762c;
case 0x6b762e:goto L6b762e;
case 0x6b7631:c.instructions+=5;goto B6b7631;
case 0x6b7634:c.instructions+=4;goto B6b7634;
case 0x6b7637:c.instructions+=3;goto B6b7637;
case 0x6b763a:c.instructions+=2;goto B6b763a;
case 0x6b763d:c.instructions+=1;goto B6b763d;
case 0x6b7643:goto L6b7643;
case 0x6b7646:c.instructions+=7;goto B6b7646;
case 0x6b7649:c.instructions+=6;goto B6b7649;
case 0x6b764c:c.instructions+=5;goto B6b764c;
case 0x6b7650:c.instructions+=4;goto B6b7650;
case 0x6b7653:c.instructions+=3;goto B6b7653;
case 0x6b7656:c.instructions+=2;goto B6b7656;
case 0x6b7659:c.instructions+=1;goto B6b7659;
case 0x6b765b:goto L6b765b;
case 0x6b765f:c.instructions+=1;goto B6b765f;
case 0x6b7661:goto L6b7661;
case 0x6b7666:c.instructions+=4;goto B6b7666;
case 0x6b766b:c.instructions+=3;goto B6b766b;
case 0x6b766e:c.instructions+=2;goto B6b766e;
case 0x6b766f:c.instructions+=1;goto B6b766f;
case 0x6b7674:goto L6b7674;
case 0x6b7676:c.instructions+=5;goto B6b7676;
case 0x6b7679:c.instructions+=4;goto B6b7679;
case 0x6b767a:c.instructions+=3;goto B6b767a;
case 0x6b767d:c.instructions+=2;goto B6b767d;
case 0x6b767f:c.instructions+=1;goto B6b767f;
case 0x6b7681:goto L6b7681;
case 0x6b7683:c.instructions+=1;goto B6b7683;
case 0x6b7684:goto L6b7684;
case 0x6b7687:c.instructions+=2;goto B6b7687;
case 0x6b7689:c.instructions+=1;goto B6b7689;
case 0x6b768b:goto L6b768b;
case 0x6b768f:c.instructions+=2;goto B6b768f;
case 0x6b7692:c.instructions+=1;goto B6b7692;
case 0x6b7698:goto L6b7698;
case 0x6b769b:c.instructions+=3;goto B6b769b;
case 0x6b76a0:c.instructions+=2;goto B6b76a0;
case 0x6b76a1:c.instructions+=1;goto B6b76a1;
case 0x6b76a3:goto L6b76a3;
case 0x6b76a4:c.instructions+=1;goto B6b76a4;
case 0x6b76aa:goto L6b76aa;
case 0x6b76ac:c.instructions+=1;goto B6b76ac;
case 0x6b76b2:goto L6b76b2;
case 0x6b76b5:c.instructions+=1;goto B6b76b5;
case 0x6b76b7:goto L6b76b7;
case 0x6b76ba:c.instructions+=1;goto B6b76ba;
case 0x6b76bc:goto L6b76bc;
case 0x6b76c1:c.instructions+=4;goto B6b76c1;
case 0x6b76c6:c.instructions+=3;goto B6b76c6;
case 0x6b76c9:c.instructions+=2;goto B6b76c9;
case 0x6b76ca:c.instructions+=1;goto B6b76ca;
case 0x6b76cf:goto L6b76cf;
case 0x6b76d1:c.instructions+=5;goto B6b76d1;
case 0x6b76d4:c.instructions+=4;goto B6b76d4;
case 0x6b76d5:c.instructions+=3;goto B6b76d5;
case 0x6b76d8:c.instructions+=2;goto B6b76d8;
case 0x6b76da:c.instructions+=1;goto B6b76da;
case 0x6b76dc:goto L6b76dc;
case 0x6b76de:c.instructions+=1;goto B6b76de;
case 0x6b76e0:goto L6b76e0;
case 0x6b76e3:c.instructions+=4;goto B6b76e3;
case 0x6b76e7:c.instructions+=3;goto B6b76e7;
case 0x6b76ea:c.instructions+=2;goto B6b76ea;
case 0x6b76ed:c.instructions+=1;goto B6b76ed;
case 0x6b76ef:goto L6b76ef;
case 0x6b76f1:c.instructions+=1;goto B6b76f1;
case 0x6b76f3:goto L6b76f3;
case 0x6b76f6:c.instructions+=1;goto B6b76f6;
case 0x6b76f8:goto L6b76f8;
case 0x6b76fb:c.instructions+=4;goto B6b76fb;
case 0x6b76ff:c.instructions+=3;goto B6b76ff;
case 0x6b7705:c.instructions+=2;goto B6b7705;
case 0x6b7706:c.instructions+=1;goto B6b7706;
case 0x6b7708:goto L6b7708;
case 0x6b7709:c.instructions+=2;goto B6b7709;
case 0x6b770a:c.instructions+=1;goto B6b770a;
case 0x6b770c:goto L6b770c;
case 0x6b770f:c.instructions+=1;goto B6b770f;
case 0x6b7711:goto L6b7711;
case 0x6b7718:c.instructions+=1;goto B6b7718;
case 0x6b771a:goto L6b771a;
case 0x6b771d:c.instructions+=1;goto B6b771d;
case 0x6b771f:goto L6b771f;
case 0x6b7726:goto L6b7726;
case 0x6b7729:c.instructions+=3;goto B6b7729;
case 0x6b772c:c.instructions+=2;goto B6b772c;
case 0x6b772e:c.instructions+=1;goto B6b772e;
case 0x6b7730:goto L6b7730;
case 0x6b7732:goto L6b7732;
case 0x6b7735:c.instructions+=3;goto B6b7735;
case 0x6b7738:c.instructions+=2;goto B6b7738;
case 0x6b773b:c.instructions+=1;goto B6b773b;
case 0x6b7741:goto L6b7741;
case 0x6b7743:goto L6b7743;
case 0x6b7745:goto L6b7745;
case 0x6b7747:c.instructions+=6;goto B6b7747;
case 0x6b774b:c.instructions+=5;goto B6b774b;
case 0x6b774e:c.instructions+=4;goto B6b774e;
case 0x6b7750:c.instructions+=3;goto B6b7750;
case 0x6b7751:c.instructions+=2;goto B6b7751;
case 0x6b7754:c.instructions+=1;goto B6b7754;
case 0x6b7756:goto L6b7756;
case 0x6b7759:c.instructions+=1;goto B6b7759;
case 0x6b775b:goto L6b775b;
case 0x6b7760:c.instructions+=4;goto B6b7760;
case 0x6b7765:c.instructions+=3;goto B6b7765;
case 0x6b7768:c.instructions+=2;goto B6b7768;
case 0x6b7769:c.instructions+=1;goto B6b7769;
case 0x6b776e:goto L6b776e;
case 0x6b7770:c.instructions+=2;goto B6b7770;
case 0x6b7773:c.instructions+=1;goto B6b7773;
case 0x6b7774:goto L6b7774;
case 0x6b7776:c.instructions+=8;goto B6b7776;
case 0x6b7778:c.instructions+=7;goto B6b7778;
case 0x6b7779:c.instructions+=6;goto B6b7779;
case 0x6b777b:c.instructions+=5;goto B6b777b;
case 0x6b777c:c.instructions+=4;goto B6b777c;
case 0x6b7781:c.instructions+=3;goto B6b7781;
case 0x6b7782:c.instructions+=2;goto B6b7782;
case 0x6b7783:c.instructions+=1;goto B6b7783;
case 0x6b7784:goto L6b7784;
case 0x6b7786:c.instructions+=15;goto B6b7786;
case 0x6b7787:c.instructions+=14;goto B6b7787;
case 0x6b7789:c.instructions+=13;goto B6b7789;
case 0x6b778c:c.instructions+=12;goto B6b778c;
case 0x6b778d:c.instructions+=11;goto B6b778d;
case 0x6b778f:c.instructions+=10;goto B6b778f;
case 0x6b7795:c.instructions+=9;goto B6b7795;
case 0x6b779b:c.instructions+=8;goto B6b779b;
case 0x6b779c:c.instructions+=7;goto B6b779c;
case 0x6b779d:c.instructions+=6;goto B6b779d;
case 0x6b77a0:c.instructions+=5;goto B6b77a0;
case 0x6b77a3:c.instructions+=4;goto B6b77a3;
case 0x6b77a6:c.instructions+=3;goto B6b77a6;
case 0x6b77a8:c.instructions+=2;goto B6b77a8;
case 0x6b77ab:c.instructions+=1;goto B6b77ab;
case 0x6b77ad:goto L6b77ad;
case 0x6b77b0:c.instructions+=8;goto B6b77b0;
case 0x6b77b3:c.instructions+=7;goto B6b77b3;
case 0x6b77b7:c.instructions+=6;goto B6b77b7;
case 0x6b77ba:c.instructions+=5;goto B6b77ba;
case 0x6b77bd:c.instructions+=4;goto B6b77bd;
case 0x6b77c1:c.instructions+=3;goto B6b77c1;
case 0x6b77c4:c.instructions+=2;goto B6b77c4;
case 0x6b77c7:c.instructions+=1;goto B6b77c7;
case 0x6b77c9:goto L6b77c9;
case 0x6b77cc:c.instructions+=5;goto B6b77cc;
case 0x6b77ce:c.instructions+=4;goto B6b77ce;
case 0x6b77d1:c.instructions+=3;goto B6b77d1;
case 0x6b77d4:c.instructions+=2;goto B6b77d4;
case 0x6b77da:c.instructions+=1;goto B6b77da;
case 0x6b77dc:goto L6b77dc;
case 0x6b77e0:c.instructions+=1;goto B6b77e0;
case 0x6b77e2:goto L6b77e2;
case 0x6b77e8:c.instructions+=5;goto B6b77e8;
case 0x6b77ed:c.instructions+=4;goto B6b77ed;
case 0x6b77f2:c.instructions+=3;goto B6b77f2;
case 0x6b77f5:c.instructions+=2;goto B6b77f5;
case 0x6b77f6:c.instructions+=1;goto B6b77f6;
case 0x6b77fb:goto L6b77fb;
case 0x6b77fe:c.instructions+=2;goto B6b77fe;
case 0x6b7803:c.instructions+=1;goto B6b7803;
case 0x6b7808:goto L6b7808;
case 0x6b780b:c.instructions+=2;goto B6b780b;
case 0x6b780d:c.instructions+=1;goto B6b780d;
case 0x6b780f:goto L6b780f;
case 0x6b7810:c.instructions+=10;goto B6b7810;
case 0x6b7813:c.instructions+=9;goto B6b7813;
case 0x6b7815:c.instructions+=8;goto B6b7815;
case 0x6b7818:c.instructions+=7;goto B6b7818;
case 0x6b781b:c.instructions+=6;goto B6b781b;
case 0x6b781e:c.instructions+=5;goto B6b781e;
case 0x6b7820:c.instructions+=4;goto B6b7820;
case 0x6b7823:c.instructions+=3;goto B6b7823;
case 0x6b7829:c.instructions+=2;goto B6b7829;
case 0x6b782c:c.instructions+=1;goto B6b782c;
case 0x6b782e:goto L6b782e;
case 0x6b7831:c.instructions+=2;goto B6b7831;
case 0x6b7833:c.instructions+=1;goto B6b7833;
case 0x6b7835:goto L6b7835;
case 0x6b7838:c.instructions+=5;goto B6b7838;
case 0x6b783a:c.instructions+=4;goto B6b783a;
case 0x6b783d:c.instructions+=3;goto B6b783d;
case 0x6b7840:c.instructions+=2;goto B6b7840;
case 0x6b7843:c.instructions+=1;goto B6b7843;
case 0x6b7845:goto L6b7845;
case 0x6b7848:goto L6b7848;
case 0x6b7849:c.instructions+=8;goto B6b7849;
case 0x6b784b:c.instructions+=7;goto B6b784b;
case 0x6b784c:c.instructions+=6;goto B6b784c;
case 0x6b784f:c.instructions+=5;goto B6b784f;
case 0x6b7850:c.instructions+=4;goto B6b7850;
case 0x6b7851:c.instructions+=3;goto B6b7851;
case 0x6b7852:c.instructions+=2;goto B6b7852;
case 0x6b7854:c.instructions+=1;goto B6b7854;
case 0x6b7859:goto L6b7859;
case 0x6b785c:c.instructions+=9;goto B6b785c;
case 0x6b7860:c.instructions+=8;goto B6b7860;
case 0x6b7863:c.instructions+=7;goto B6b7863;
case 0x6b7866:c.instructions+=6;goto B6b7866;
case 0x6b7868:c.instructions+=5;goto B6b7868;
case 0x6b786b:c.instructions+=4;goto B6b786b;
case 0x6b786e:c.instructions+=3;goto B6b786e;
case 0x6b7870:c.instructions+=2;goto B6b7870;
case 0x6b7871:c.instructions+=1;goto B6b7871;
case 0x6b7873:goto L6b7873;
case 0x6b7875:goto L6b7875;
case 0x6b7879:c.instructions+=3;goto B6b7879;
case 0x6b787b:c.instructions+=2;goto B6b787b;
case 0x6b787e:c.instructions+=1;goto B6b787e;
case 0x6b7880:goto L6b7880;
case 0x6b7883:goto L6b7883;
case 0x6b7889:c.instructions+=16;goto B6b7889;
case 0x6b788c:c.instructions+=15;goto B6b788c;
case 0x6b788d:c.instructions+=14;goto B6b788d;
case 0x6b788e:c.instructions+=13;goto B6b788e;
case 0x6b788f:c.instructions+=12;goto B6b788f;
case 0x6b7890:c.instructions+=11;goto B6b7890;
case 0x6b7892:c.instructions+=10;goto B6b7892;
case 0x6b7893:c.instructions+=9;goto B6b7893;
case 0x6b7896:c.instructions+=8;goto B6b7896;
case 0x6b7897:c.instructions+=7;goto B6b7897;
case 0x6b7898:c.instructions+=6;goto B6b7898;
case 0x6b789b:c.instructions+=5;goto B6b789b;
case 0x6b789e:c.instructions+=4;goto B6b789e;
case 0x6b789f:c.instructions+=3;goto B6b789f;
case 0x6b78a1:c.instructions+=2;goto B6b78a1;
case 0x6b78a3:c.instructions+=1;goto B6b78a3;
case 0x6b78a8:goto L6b78a8;
case 0x6b78aa:c.instructions+=1;goto B6b78aa;
case 0x6b78ac:goto L6b78ac;
case 0x6b78ad:c.instructions+=15;goto B6b78ad;
case 0x6b78ae:c.instructions+=14;goto B6b78ae;
case 0x6b78af:c.instructions+=13;goto B6b78af;
case 0x6b78b0:c.instructions+=12;goto B6b78b0;
case 0x6b78b3:c.instructions+=11;goto B6b78b3;
case 0x6b78b6:c.instructions+=10;goto B6b78b6;
case 0x6b78b7:c.instructions+=9;goto B6b78b7;
case 0x6b78ba:c.instructions+=8;goto B6b78ba;
case 0x6b78bb:c.instructions+=7;goto B6b78bb;
case 0x6b78be:c.instructions+=6;goto B6b78be;
case 0x6b78bf:c.instructions+=5;goto B6b78bf;
case 0x6b78c2:c.instructions+=4;goto B6b78c2;
case 0x6b78c4:c.instructions+=3;goto B6b78c4;
case 0x6b78c5:c.instructions+=2;goto B6b78c5;
case 0x6b78c7:c.instructions+=1;goto B6b78c7;
case 0x6b78cc:goto L6b78cc;
case 0x6b78cd:c.instructions+=4;goto B6b78cd;
case 0x6b78ce:c.instructions+=3;goto B6b78ce;
case 0x6b78cf:c.instructions+=2;goto B6b78cf;
case 0x6b78d0:c.instructions+=1;goto B6b78d0;
case 0x6b78d1:goto L6b78d1;
case 0x6b78d3:c.instructions+=28;goto B6b78d3;
case 0x6b78d4:c.instructions+=27;goto B6b78d4;
case 0x6b78d6:c.instructions+=26;goto B6b78d6;
case 0x6b78d9:c.instructions+=25;goto B6b78d9;
case 0x6b78da:c.instructions+=24;goto B6b78da;
case 0x6b78db:c.instructions+=23;goto B6b78db;
case 0x6b78dd:c.instructions+=22;goto B6b78dd;
case 0x6b78e3:c.instructions+=21;goto B6b78e3;
case 0x6b78e5:c.instructions+=20;goto B6b78e5;
case 0x6b78e8:c.instructions+=19;goto B6b78e8;
case 0x6b78ee:c.instructions+=18;goto B6b78ee;
case 0x6b78ef:c.instructions+=17;goto B6b78ef;
case 0x6b78f2:c.instructions+=16;goto B6b78f2;
case 0x6b78f8:c.instructions+=15;goto B6b78f8;
case 0x6b78fa:c.instructions+=14;goto B6b78fa;
case 0x6b78fd:c.instructions+=13;goto B6b78fd;
case 0x6b7900:c.instructions+=12;goto B6b7900;
case 0x6b7902:c.instructions+=11;goto B6b7902;
case 0x6b7904:c.instructions+=10;goto B6b7904;
case 0x6b7906:c.instructions+=9;goto B6b7906;
case 0x6b7909:c.instructions+=8;goto B6b7909;
case 0x6b790c:c.instructions+=7;goto B6b790c;
case 0x6b790f:c.instructions+=6;goto B6b790f;
case 0x6b7912:c.instructions+=5;goto B6b7912;
case 0x6b7914:c.instructions+=4;goto B6b7914;
case 0x6b7916:c.instructions+=3;goto B6b7916;
case 0x6b7918:c.instructions+=2;goto B6b7918;
case 0x6b791b:c.instructions+=1;goto B6b791b;
case 0x6b7920:goto L6b7920;
case 0x6b7922:c.instructions+=1;goto B6b7922;
case 0x6b7928:goto L6b7928;
case 0x6b792b:c.instructions+=14;goto B6b792b;
case 0x6b792d:c.instructions+=13;goto B6b792d;
case 0x6b7930:c.instructions+=12;goto B6b7930;
case 0x6b7933:c.instructions+=11;goto B6b7933;
case 0x6b7937:c.instructions+=10;goto B6b7937;
case 0x6b7939:c.instructions+=9;goto B6b7939;
case 0x6b793c:c.instructions+=8;goto B6b793c;
case 0x6b793e:c.instructions+=7;goto B6b793e;
case 0x6b7943:c.instructions+=6;goto B6b7943;
case 0x6b7948:c.instructions+=5;goto B6b7948;
case 0x6b794d:c.instructions+=4;goto B6b794d;
case 0x6b794e:c.instructions+=3;goto B6b794e;
case 0x6b7950:c.instructions+=2;goto B6b7950;
case 0x6b7953:c.instructions+=1;goto B6b7953;
case 0x6b7956:goto L6b7956;
case 0x6b7958:c.instructions+=1;goto B6b7958;
case 0x6b795e:goto L6b795e;
case 0x6b7960:c.instructions+=1;goto B6b7960;
case 0x6b7962:goto L6b7962;
case 0x6b7965:c.instructions+=9;goto B6b7965;
case 0x6b7967:c.instructions+=8;goto B6b7967;
case 0x6b796a:c.instructions+=7;goto B6b796a;
case 0x6b796b:c.instructions+=6;goto B6b796b;
case 0x6b796e:c.instructions+=5;goto B6b796e;
case 0x6b796f:c.instructions+=4;goto B6b796f;
case 0x6b7971:c.instructions+=3;goto B6b7971;
case 0x6b7974:c.instructions+=2;goto B6b7974;
case 0x6b7976:c.instructions+=1;goto B6b7976;
case 0x6b7979:goto L6b7979;
case 0x6b797b:c.instructions+=1;goto B6b797b;
case 0x6b7981:goto L6b7981;
case 0x6b7983:c.instructions+=7;goto B6b7983;
case 0x6b7986:c.instructions+=6;goto B6b7986;
case 0x6b7987:c.instructions+=5;goto B6b7987;
case 0x6b798c:c.instructions+=4;goto B6b798c;
case 0x6b798d:c.instructions+=3;goto B6b798d;
case 0x6b798e:c.instructions+=2;goto B6b798e;
case 0x6b7990:c.instructions+=1;goto B6b7990;
case 0x6b7993:goto L6b7993;
case 0x6b7995:c.instructions+=1;goto B6b7995;
case 0x6b7997:goto L6b7997;
case 0x6b799a:c.instructions+=5;goto B6b799a;
case 0x6b799c:c.instructions+=4;goto B6b799c;
case 0x6b799f:c.instructions+=3;goto B6b799f;
case 0x6b79a1:c.instructions+=2;goto B6b79a1;
case 0x6b79a4:c.instructions+=1;goto B6b79a4;
case 0x6b79a7:goto L6b79a7;
case 0x6b79a9:c.instructions+=1;goto B6b79a9;
case 0x6b79ab:goto L6b79ab;
case 0x6b79ae:c.instructions+=2;goto B6b79ae;
case 0x6b79b0:c.instructions+=1;goto B6b79b0;
case 0x6b79b2:goto L6b79b2;
case 0x6b79b5:c.instructions+=9;goto B6b79b5;
case 0x6b79b7:c.instructions+=8;goto B6b79b7;
case 0x6b79ba:c.instructions+=7;goto B6b79ba;
case 0x6b79bb:c.instructions+=6;goto B6b79bb;
case 0x6b79be:c.instructions+=5;goto B6b79be;
case 0x6b79bf:c.instructions+=4;goto B6b79bf;
case 0x6b79c1:c.instructions+=3;goto B6b79c1;
case 0x6b79c4:c.instructions+=2;goto B6b79c4;
case 0x6b79c6:c.instructions+=1;goto B6b79c6;
case 0x6b79c9:goto L6b79c9;
case 0x6b79cb:c.instructions+=1;goto B6b79cb;
case 0x6b79cd:goto L6b79cd;
case 0x6b79cf:c.instructions+=7;goto B6b79cf;
case 0x6b79d2:c.instructions+=6;goto B6b79d2;
case 0x6b79d3:c.instructions+=5;goto B6b79d3;
case 0x6b79d8:c.instructions+=4;goto B6b79d8;
case 0x6b79d9:c.instructions+=3;goto B6b79d9;
case 0x6b79da:c.instructions+=2;goto B6b79da;
case 0x6b79dc:c.instructions+=1;goto B6b79dc;
case 0x6b79df:goto L6b79df;
case 0x6b79e1:c.instructions+=1;goto B6b79e1;
case 0x6b79e3:goto L6b79e3;
case 0x6b79e6:c.instructions+=5;goto B6b79e6;
case 0x6b79e8:c.instructions+=4;goto B6b79e8;
case 0x6b79eb:c.instructions+=3;goto B6b79eb;
case 0x6b79ed:c.instructions+=2;goto B6b79ed;
case 0x6b79f0:c.instructions+=1;goto B6b79f0;
case 0x6b79f3:goto L6b79f3;
case 0x6b79f5:c.instructions+=1;goto B6b79f5;
case 0x6b79f7:goto L6b79f7;
case 0x6b79f9:c.instructions+=2;goto B6b79f9;
case 0x6b79fb:c.instructions+=1;goto B6b79fb;
case 0x6b79fe:goto L6b79fe;
case 0x6b7a00:c.instructions+=1;goto B6b7a00;
case 0x6b7a02:goto L6b7a02;
case 0x6b7a04:c.instructions+=1;goto B6b7a04;
case 0x6b7a09:goto L6b7a09;
case 0x6b7a0b:c.instructions+=1;goto B6b7a0b;
case 0x6b7a0d:goto L6b7a0d;
case 0x6b7a0f:goto L6b7a0f;
case 0x6b7a10:c.instructions+=4;goto B6b7a10;
case 0x6b7a11:c.instructions+=3;goto B6b7a11;
case 0x6b7a12:c.instructions+=2;goto B6b7a12;
case 0x6b7a13:c.instructions+=1;goto B6b7a13;
case 0x6b7a16:goto L6b7a16;
case 0x6b7a18:c.instructions+=12;goto B6b7a18;
case 0x6b7a19:c.instructions+=11;goto B6b7a19;
case 0x6b7a1b:c.instructions+=10;goto B6b7a1b;
case 0x6b7a1e:c.instructions+=9;goto B6b7a1e;
case 0x6b7a1f:c.instructions+=8;goto B6b7a1f;
case 0x6b7a20:c.instructions+=7;goto B6b7a20;
case 0x6b7a22:c.instructions+=6;goto B6b7a22;
case 0x6b7a28:c.instructions+=5;goto B6b7a28;
case 0x6b7a29:c.instructions+=4;goto B6b7a29;
case 0x6b7a2b:c.instructions+=3;goto B6b7a2b;
case 0x6b7a2d:c.instructions+=2;goto B6b7a2d;
case 0x6b7a33:c.instructions+=1;goto B6b7a33;
case 0x6b7a38:goto L6b7a38;
case 0x6b7a3a:c.instructions+=2;goto B6b7a3a;
case 0x6b7a3c:c.instructions+=1;goto B6b7a3c;
case 0x6b7a42:goto L6b7a42;
case 0x6b7a45:c.instructions+=11;goto B6b7a45;
case 0x6b7a47:c.instructions+=10;goto B6b7a47;
case 0x6b7a48:c.instructions+=9;goto B6b7a48;
case 0x6b7a49:c.instructions+=8;goto B6b7a49;
case 0x6b7a4c:c.instructions+=7;goto B6b7a4c;
case 0x6b7a4d:c.instructions+=6;goto B6b7a4d;
case 0x6b7a53:c.instructions+=5;goto B6b7a53;
case 0x6b7a56:c.instructions+=4;goto B6b7a56;
case 0x6b7a58:c.instructions+=3;goto B6b7a58;
case 0x6b7a5b:c.instructions+=2;goto B6b7a5b;
case 0x6b7a5d:c.instructions+=1;goto B6b7a5d;
case 0x6b7a60:goto L6b7a60;
case 0x6b7a62:c.instructions+=1;goto B6b7a62;
case 0x6b7a68:goto L6b7a68;
case 0x6b7a6a:c.instructions+=5;goto B6b7a6a;
case 0x6b7a6b:c.instructions+=4;goto B6b7a6b;
case 0x6b7a70:c.instructions+=3;goto B6b7a70;
case 0x6b7a73:c.instructions+=2;goto B6b7a73;
case 0x6b7a75:c.instructions+=1;goto B6b7a75;
case 0x6b7a78:goto L6b7a78;
case 0x6b7a7a:c.instructions+=1;goto B6b7a7a;
case 0x6b7a7c:goto L6b7a7c;
case 0x6b7a82:c.instructions+=12;goto B6b7a82;
case 0x6b7a85:c.instructions+=11;goto B6b7a85;
case 0x6b7a88:c.instructions+=10;goto B6b7a88;
case 0x6b7a8b:c.instructions+=9;goto B6b7a8b;
case 0x6b7a8c:c.instructions+=8;goto B6b7a8c;
case 0x6b7a8f:c.instructions+=7;goto B6b7a8f;
case 0x6b7a91:c.instructions+=6;goto B6b7a91;
case 0x6b7a94:c.instructions+=5;goto B6b7a94;
case 0x6b7a95:c.instructions+=4;goto B6b7a95;
case 0x6b7a97:c.instructions+=3;goto B6b7a97;
case 0x6b7a9a:c.instructions+=2;goto B6b7a9a;
case 0x6b7a9c:c.instructions+=1;goto B6b7a9c;
case 0x6b7a9f:goto L6b7a9f;
case 0x6b7aa1:c.instructions+=1;goto B6b7aa1;
case 0x6b7aa3:goto L6b7aa3;
case 0x6b7aa5:c.instructions+=7;goto B6b7aa5;
case 0x6b7aa8:c.instructions+=6;goto B6b7aa8;
case 0x6b7aa9:c.instructions+=5;goto B6b7aa9;
case 0x6b7aae:c.instructions+=4;goto B6b7aae;
case 0x6b7aaf:c.instructions+=3;goto B6b7aaf;
case 0x6b7ab0:c.instructions+=2;goto B6b7ab0;
case 0x6b7ab2:c.instructions+=1;goto B6b7ab2;
case 0x6b7ab5:goto L6b7ab5;
case 0x6b7ab7:c.instructions+=1;goto B6b7ab7;
case 0x6b7ab9:goto L6b7ab9;
case 0x6b7abc:c.instructions+=7;goto B6b7abc;
case 0x6b7abf:c.instructions+=6;goto B6b7abf;
case 0x6b7ac1:c.instructions+=5;goto B6b7ac1;
case 0x6b7ac7:c.instructions+=4;goto B6b7ac7;
case 0x6b7ac8:c.instructions+=3;goto B6b7ac8;
case 0x6b7acb:c.instructions+=2;goto B6b7acb;
case 0x6b7acd:c.instructions+=1;goto B6b7acd;
case 0x6b7ad0:goto L6b7ad0;
case 0x6b7ad2:c.instructions+=1;goto B6b7ad2;
case 0x6b7ad4:goto L6b7ad4;
case 0x6b7ad6:c.instructions+=2;goto B6b7ad6;
case 0x6b7ad8:c.instructions+=1;goto B6b7ad8;
case 0x6b7adb:goto L6b7adb;
case 0x6b7add:c.instructions+=1;goto B6b7add;
case 0x6b7adf:goto L6b7adf;
case 0x6b7ae1:c.instructions+=1;goto B6b7ae1;
case 0x6b7ae6:goto L6b7ae6;
case 0x6b7ae8:c.instructions+=1;goto B6b7ae8;
case 0x6b7aea:goto L6b7aea;
case 0x6b7aec:goto L6b7aec;
case 0x6b7aed:c.instructions+=4;goto B6b7aed;
case 0x6b7aee:c.instructions+=3;goto B6b7aee;
case 0x6b7aef:c.instructions+=2;goto B6b7aef;
case 0x6b7af0:c.instructions+=1;goto B6b7af0;
case 0x6b7af1:goto L6b7af1;
case 0x6b7af3:c.instructions+=12;goto B6b7af3;
case 0x6b7af4:c.instructions+=11;goto B6b7af4;
case 0x6b7af6:c.instructions+=10;goto B6b7af6;
case 0x6b7af9:c.instructions+=9;goto B6b7af9;
case 0x6b7afa:c.instructions+=8;goto B6b7afa;
case 0x6b7afb:c.instructions+=7;goto B6b7afb;
case 0x6b7afd:c.instructions+=6;goto B6b7afd;
case 0x6b7b03:c.instructions+=5;goto B6b7b03;
case 0x6b7b04:c.instructions+=4;goto B6b7b04;
case 0x6b7b06:c.instructions+=3;goto B6b7b06;
case 0x6b7b08:c.instructions+=2;goto B6b7b08;
case 0x6b7b0e:c.instructions+=1;goto B6b7b0e;
case 0x6b7b13:goto L6b7b13;
case 0x6b7b15:c.instructions+=2;goto B6b7b15;
case 0x6b7b17:c.instructions+=1;goto B6b7b17;
case 0x6b7b1d:goto L6b7b1d;
case 0x6b7b20:c.instructions+=11;goto B6b7b20;
case 0x6b7b22:c.instructions+=10;goto B6b7b22;
case 0x6b7b23:c.instructions+=9;goto B6b7b23;
case 0x6b7b24:c.instructions+=8;goto B6b7b24;
case 0x6b7b27:c.instructions+=7;goto B6b7b27;
case 0x6b7b28:c.instructions+=6;goto B6b7b28;
case 0x6b7b2e:c.instructions+=5;goto B6b7b2e;
case 0x6b7b31:c.instructions+=4;goto B6b7b31;
case 0x6b7b33:c.instructions+=3;goto B6b7b33;
case 0x6b7b36:c.instructions+=2;goto B6b7b36;
case 0x6b7b38:c.instructions+=1;goto B6b7b38;
case 0x6b7b3b:goto L6b7b3b;
case 0x6b7b3d:c.instructions+=1;goto B6b7b3d;
case 0x6b7b3f:goto L6b7b3f;
case 0x6b7b41:c.instructions+=5;goto B6b7b41;
case 0x6b7b42:c.instructions+=4;goto B6b7b42;
case 0x6b7b47:c.instructions+=3;goto B6b7b47;
case 0x6b7b4a:c.instructions+=2;goto B6b7b4a;
case 0x6b7b4c:c.instructions+=1;goto B6b7b4c;
case 0x6b7b4f:goto L6b7b4f;
case 0x6b7b51:c.instructions+=1;goto B6b7b51;
case 0x6b7b53:goto L6b7b53;
case 0x6b7b59:c.instructions+=12;goto B6b7b59;
case 0x6b7b5c:c.instructions+=11;goto B6b7b5c;
case 0x6b7b5f:c.instructions+=10;goto B6b7b5f;
case 0x6b7b62:c.instructions+=9;goto B6b7b62;
case 0x6b7b63:c.instructions+=8;goto B6b7b63;
case 0x6b7b66:c.instructions+=7;goto B6b7b66;
case 0x6b7b68:c.instructions+=6;goto B6b7b68;
case 0x6b7b6b:c.instructions+=5;goto B6b7b6b;
case 0x6b7b6c:c.instructions+=4;goto B6b7b6c;
case 0x6b7b6e:c.instructions+=3;goto B6b7b6e;
case 0x6b7b71:c.instructions+=2;goto B6b7b71;
case 0x6b7b73:c.instructions+=1;goto B6b7b73;
case 0x6b7b76:goto L6b7b76;
case 0x6b7b78:c.instructions+=1;goto B6b7b78;
case 0x6b7b7a:goto L6b7b7a;
case 0x6b7b7c:c.instructions+=7;goto B6b7b7c;
case 0x6b7b7f:c.instructions+=6;goto B6b7b7f;
case 0x6b7b80:c.instructions+=5;goto B6b7b80;
case 0x6b7b85:c.instructions+=4;goto B6b7b85;
case 0x6b7b86:c.instructions+=3;goto B6b7b86;
case 0x6b7b87:c.instructions+=2;goto B6b7b87;
case 0x6b7b89:c.instructions+=1;goto B6b7b89;
case 0x6b7b8c:goto L6b7b8c;
case 0x6b7b8e:c.instructions+=1;goto B6b7b8e;
case 0x6b7b90:goto L6b7b90;
case 0x6b7b93:c.instructions+=5;goto B6b7b93;
case 0x6b7b95:c.instructions+=4;goto B6b7b95;
case 0x6b7b9a:c.instructions+=3;goto B6b7b9a;
case 0x6b7b9d:c.instructions+=2;goto B6b7b9d;
case 0x6b7b9f:c.instructions+=1;goto B6b7b9f;
case 0x6b7ba2:goto L6b7ba2;
case 0x6b7ba4:c.instructions+=1;goto B6b7ba4;
case 0x6b7ba6:goto L6b7ba6;
case 0x6b7ba8:c.instructions+=2;goto B6b7ba8;
case 0x6b7baa:c.instructions+=1;goto B6b7baa;
case 0x6b7bad:goto L6b7bad;
case 0x6b7baf:c.instructions+=1;goto B6b7baf;
case 0x6b7bb1:goto L6b7bb1;
case 0x6b7bb3:c.instructions+=1;goto B6b7bb3;
case 0x6b7bb8:goto L6b7bb8;
case 0x6b7bba:c.instructions+=1;goto B6b7bba;
case 0x6b7bbc:goto L6b7bbc;
case 0x6b7bbe:goto L6b7bbe;
case 0x6b7bbf:c.instructions+=4;goto B6b7bbf;
case 0x6b7bc0:c.instructions+=3;goto B6b7bc0;
case 0x6b7bc1:c.instructions+=2;goto B6b7bc1;
case 0x6b7bc2:c.instructions+=1;goto B6b7bc2;
case 0x6b7bc3:goto L6b7bc3;
case 0x6b7bc5:c.instructions+=16;goto B6b7bc5;
case 0x6b7bc6:c.instructions+=15;goto B6b7bc6;
case 0x6b7bc8:c.instructions+=14;goto B6b7bc8;
case 0x6b7bcb:c.instructions+=13;goto B6b7bcb;
case 0x6b7bcc:c.instructions+=12;goto B6b7bcc;
case 0x6b7bcd:c.instructions+=11;goto B6b7bcd;
case 0x6b7bcf:c.instructions+=10;goto B6b7bcf;
case 0x6b7bd5:c.instructions+=9;goto B6b7bd5;
case 0x6b7bd6:c.instructions+=8;goto B6b7bd6;
case 0x6b7bd8:c.instructions+=7;goto B6b7bd8;
case 0x6b7bde:c.instructions+=6;goto B6b7bde;
case 0x6b7be4:c.instructions+=5;goto B6b7be4;
case 0x6b7be9:c.instructions+=4;goto B6b7be9;
case 0x6b7bee:c.instructions+=3;goto B6b7bee;
case 0x6b7bf1:c.instructions+=2;goto B6b7bf1;
case 0x6b7bf3:c.instructions+=1;goto B6b7bf3;
case 0x6b7bf9:goto L6b7bf9;
case 0x6b7bfe:goto L6b7bfe;
case 0x6b7c00:c.instructions+=2;goto B6b7c00;
case 0x6b7c02:c.instructions+=1;goto B6b7c02;
case 0x6b7c08:goto L6b7c08;
case 0x6b7c0b:c.instructions+=11;goto B6b7c0b;
case 0x6b7c0d:c.instructions+=10;goto B6b7c0d;
case 0x6b7c0e:c.instructions+=9;goto B6b7c0e;
case 0x6b7c0f:c.instructions+=8;goto B6b7c0f;
case 0x6b7c12:c.instructions+=7;goto B6b7c12;
case 0x6b7c13:c.instructions+=6;goto B6b7c13;
case 0x6b7c19:c.instructions+=5;goto B6b7c19;
case 0x6b7c1c:c.instructions+=4;goto B6b7c1c;
case 0x6b7c1e:c.instructions+=3;goto B6b7c1e;
case 0x6b7c21:c.instructions+=2;goto B6b7c21;
case 0x6b7c23:c.instructions+=1;goto B6b7c23;
case 0x6b7c26:goto L6b7c26;
case 0x6b7c28:c.instructions+=1;goto B6b7c28;
case 0x6b7c2e:goto L6b7c2e;
case 0x6b7c30:c.instructions+=6;goto B6b7c30;
case 0x6b7c31:c.instructions+=5;goto B6b7c31;
case 0x6b7c36:c.instructions+=4;goto B6b7c36;
case 0x6b7c37:c.instructions+=3;goto B6b7c37;
case 0x6b7c3a:c.instructions+=2;goto B6b7c3a;
case 0x6b7c3c:c.instructions+=1;goto B6b7c3c;
case 0x6b7c3f:goto L6b7c3f;
case 0x6b7c41:c.instructions+=1;goto B6b7c41;
case 0x6b7c47:goto L6b7c47;
case 0x6b7c4d:c.instructions+=12;goto B6b7c4d;
case 0x6b7c50:c.instructions+=11;goto B6b7c50;
case 0x6b7c53:c.instructions+=10;goto B6b7c53;
case 0x6b7c56:c.instructions+=9;goto B6b7c56;
case 0x6b7c57:c.instructions+=8;goto B6b7c57;
case 0x6b7c5a:c.instructions+=7;goto B6b7c5a;
case 0x6b7c5c:c.instructions+=6;goto B6b7c5c;
case 0x6b7c5f:c.instructions+=5;goto B6b7c5f;
case 0x6b7c60:c.instructions+=4;goto B6b7c60;
case 0x6b7c62:c.instructions+=3;goto B6b7c62;
case 0x6b7c65:c.instructions+=2;goto B6b7c65;
case 0x6b7c67:c.instructions+=1;goto B6b7c67;
case 0x6b7c6a:goto L6b7c6a;
case 0x6b7c6c:c.instructions+=1;goto B6b7c6c;
case 0x6b7c72:goto L6b7c72;
case 0x6b7c74:c.instructions+=7;goto B6b7c74;
case 0x6b7c77:c.instructions+=6;goto B6b7c77;
case 0x6b7c78:c.instructions+=5;goto B6b7c78;
case 0x6b7c79:c.instructions+=4;goto B6b7c79;
case 0x6b7c7c:c.instructions+=3;goto B6b7c7c;
case 0x6b7c7e:c.instructions+=2;goto B6b7c7e;
case 0x6b7c7f:c.instructions+=1;goto B6b7c7f;
case 0x6b7c82:goto L6b7c82;
case 0x6b7c84:c.instructions+=1;goto B6b7c84;
case 0x6b7c8a:goto L6b7c8a;
case 0x6b7c8d:c.instructions+=5;goto B6b7c8d;
case 0x6b7c8f:c.instructions+=4;goto B6b7c8f;
case 0x6b7c92:c.instructions+=3;goto B6b7c92;
case 0x6b7c94:c.instructions+=2;goto B6b7c94;
case 0x6b7c97:c.instructions+=1;goto B6b7c97;
case 0x6b7c9a:goto L6b7c9a;
case 0x6b7c9c:c.instructions+=1;goto B6b7c9c;
case 0x6b7c9e:goto L6b7c9e;
case 0x6b7ca0:c.instructions+=2;goto B6b7ca0;
case 0x6b7ca2:c.instructions+=1;goto B6b7ca2;
case 0x6b7ca5:goto L6b7ca5;
case 0x6b7ca7:c.instructions+=1;goto B6b7ca7;
case 0x6b7ca9:goto L6b7ca9;
case 0x6b7cab:c.instructions+=1;goto B6b7cab;
case 0x6b7cb0:goto L6b7cb0;
case 0x6b7cb2:c.instructions+=1;goto B6b7cb2;
case 0x6b7cb4:goto L6b7cb4;
case 0x6b7cb6:goto L6b7cb6;
case 0x6b7cbb:goto L6b7cbb;
case 0x6b7cbd:c.instructions+=2;goto B6b7cbd;
case 0x6b7cbf:c.instructions+=1;goto B6b7cbf;
case 0x6b7cc1:goto L6b7cc1;
case 0x6b7cc4:c.instructions+=11;goto B6b7cc4;
case 0x6b7cc6:c.instructions+=10;goto B6b7cc6;
case 0x6b7cc7:c.instructions+=9;goto B6b7cc7;
case 0x6b7cc8:c.instructions+=8;goto B6b7cc8;
case 0x6b7ccb:c.instructions+=7;goto B6b7ccb;
case 0x6b7ccc:c.instructions+=6;goto B6b7ccc;
case 0x6b7cd2:c.instructions+=5;goto B6b7cd2;
case 0x6b7cd5:c.instructions+=4;goto B6b7cd5;
case 0x6b7cd7:c.instructions+=3;goto B6b7cd7;
case 0x6b7cda:c.instructions+=2;goto B6b7cda;
case 0x6b7cdc:c.instructions+=1;goto B6b7cdc;
case 0x6b7cdf:goto L6b7cdf;
case 0x6b7ce1:c.instructions+=1;goto B6b7ce1;
case 0x6b7ce3:goto L6b7ce3;
case 0x6b7ce5:c.instructions+=5;goto B6b7ce5;
case 0x6b7ce6:c.instructions+=4;goto B6b7ce6;
case 0x6b7ceb:c.instructions+=3;goto B6b7ceb;
case 0x6b7cee:c.instructions+=2;goto B6b7cee;
case 0x6b7cf0:c.instructions+=1;goto B6b7cf0;
case 0x6b7cf3:goto L6b7cf3;
case 0x6b7cf5:c.instructions+=1;goto B6b7cf5;
case 0x6b7cf7:goto L6b7cf7;
case 0x6b7cf9:c.instructions+=2;goto B6b7cf9;
case 0x6b7cfb:c.instructions+=1;goto B6b7cfb;
case 0x6b7cfe:goto L6b7cfe;
case 0x6b7d00:c.instructions+=1;goto B6b7d00;
case 0x6b7d02:goto L6b7d02;
case 0x6b7d04:c.instructions+=1;goto B6b7d04;
case 0x6b7d09:goto L6b7d09;
case 0x6b7d0b:c.instructions+=1;goto B6b7d0b;
case 0x6b7d0d:goto L6b7d0d;
case 0x6b7d0f:goto L6b7d0f;
case 0x6b7d10:c.instructions+=4;goto B6b7d10;
case 0x6b7d11:c.instructions+=3;goto B6b7d11;
case 0x6b7d12:c.instructions+=2;goto B6b7d12;
case 0x6b7d13:c.instructions+=1;goto B6b7d13;
case 0x6b7d14:goto L6b7d14;
case 0x6b7d16:c.instructions+=20;goto B6b7d16;
case 0x6b7d17:c.instructions+=19;goto B6b7d17;
case 0x6b7d19:c.instructions+=18;goto B6b7d19;
case 0x6b7d1c:c.instructions+=17;goto B6b7d1c;
case 0x6b7d1d:c.instructions+=16;goto B6b7d1d;
case 0x6b7d1e:c.instructions+=15;goto B6b7d1e;
case 0x6b7d20:c.instructions+=14;goto B6b7d20;
case 0x6b7d26:c.instructions+=13;goto B6b7d26;
case 0x6b7d28:c.instructions+=12;goto B6b7d28;
case 0x6b7d2b:c.instructions+=11;goto B6b7d2b;
case 0x6b7d2d:c.instructions+=10;goto B6b7d2d;
case 0x6b7d30:c.instructions+=9;goto B6b7d30;
case 0x6b7d31:c.instructions+=8;goto B6b7d31;
case 0x6b7d34:c.instructions+=7;goto B6b7d34;
case 0x6b7d3a:c.instructions+=6;goto B6b7d3a;
case 0x6b7d3f:c.instructions+=5;goto B6b7d3f;
case 0x6b7d45:c.instructions+=4;goto B6b7d45;
case 0x6b7d4a:c.instructions+=3;goto B6b7d4a;
case 0x6b7d4c:c.instructions+=2;goto B6b7d4c;
case 0x6b7d4e:c.instructions+=1;goto B6b7d4e;
case 0x6b7d54:goto L6b7d54;
case 0x6b7d59:goto L6b7d59;
case 0x6b7d5b:c.instructions+=1;goto B6b7d5b;
case 0x6b7d61:goto L6b7d61;
case 0x6b7d63:c.instructions+=8;goto B6b7d63;
case 0x6b7d66:c.instructions+=7;goto B6b7d66;
case 0x6b7d67:c.instructions+=6;goto B6b7d67;
case 0x6b7d69:c.instructions+=5;goto B6b7d69;
case 0x6b7d6c:c.instructions+=4;goto B6b7d6c;
case 0x6b7d6d:c.instructions+=3;goto B6b7d6d;
case 0x6b7d6e:c.instructions+=2;goto B6b7d6e;
case 0x6b7d70:c.instructions+=1;goto B6b7d70;
case 0x6b7d73:goto L6b7d73;
case 0x6b7d75:c.instructions+=1;goto B6b7d75;
case 0x6b7d7b:goto L6b7d7b;
case 0x6b7d7e:c.instructions+=8;goto B6b7d7e;
case 0x6b7d80:c.instructions+=7;goto B6b7d80;
case 0x6b7d83:c.instructions+=6;goto B6b7d83;
case 0x6b7d84:c.instructions+=5;goto B6b7d84;
case 0x6b7d8a:c.instructions+=4;goto B6b7d8a;
case 0x6b7d8b:c.instructions+=3;goto B6b7d8b;
case 0x6b7d8e:c.instructions+=2;goto B6b7d8e;
case 0x6b7d90:c.instructions+=1;goto B6b7d90;
case 0x6b7d93:goto L6b7d93;
case 0x6b7d95:c.instructions+=1;goto B6b7d95;
case 0x6b7d97:goto L6b7d97;
case 0x6b7d99:c.instructions+=5;goto B6b7d99;
case 0x6b7d9b:c.instructions+=4;goto B6b7d9b;
case 0x6b7da0:c.instructions+=3;goto B6b7da0;
case 0x6b7da3:c.instructions+=2;goto B6b7da3;
case 0x6b7da5:c.instructions+=1;goto B6b7da5;
case 0x6b7da8:goto L6b7da8;
case 0x6b7daa:c.instructions+=1;goto B6b7daa;
case 0x6b7dac:goto L6b7dac;
case 0x6b7db2:c.instructions+=11;goto B6b7db2;
case 0x6b7db5:c.instructions+=10;goto B6b7db5;
case 0x6b7db8:c.instructions+=9;goto B6b7db8;
case 0x6b7dba:c.instructions+=8;goto B6b7dba;
case 0x6b7dbd:c.instructions+=7;goto B6b7dbd;
case 0x6b7dbe:c.instructions+=6;goto B6b7dbe;
case 0x6b7dc1:c.instructions+=5;goto B6b7dc1;
case 0x6b7dc2:c.instructions+=4;goto B6b7dc2;
case 0x6b7dc4:c.instructions+=3;goto B6b7dc4;
case 0x6b7dc7:c.instructions+=2;goto B6b7dc7;
case 0x6b7dc9:c.instructions+=1;goto B6b7dc9;
case 0x6b7dcc:goto L6b7dcc;
case 0x6b7dce:c.instructions+=1;goto B6b7dce;
case 0x6b7dd0:goto L6b7dd0;
case 0x6b7dd2:c.instructions+=7;goto B6b7dd2;
case 0x6b7dd5:c.instructions+=6;goto B6b7dd5;
case 0x6b7dd6:c.instructions+=5;goto B6b7dd6;
case 0x6b7dd9:c.instructions+=4;goto B6b7dd9;
case 0x6b7ddb:c.instructions+=3;goto B6b7ddb;
case 0x6b7ddc:c.instructions+=2;goto B6b7ddc;
case 0x6b7ddd:c.instructions+=1;goto B6b7ddd;
case 0x6b7de0:goto L6b7de0;
case 0x6b7de2:c.instructions+=1;goto B6b7de2;
case 0x6b7de4:goto L6b7de4;
case 0x6b7de7:c.instructions+=5;goto B6b7de7;
case 0x6b7de9:c.instructions+=4;goto B6b7de9;
case 0x6b7dee:c.instructions+=3;goto B6b7dee;
case 0x6b7df1:c.instructions+=2;goto B6b7df1;
case 0x6b7df3:c.instructions+=1;goto B6b7df3;
case 0x6b7df6:goto L6b7df6;
case 0x6b7df8:c.instructions+=1;goto B6b7df8;
case 0x6b7dfa:goto L6b7dfa;
case 0x6b7dfc:c.instructions+=2;goto B6b7dfc;
case 0x6b7dfe:c.instructions+=1;goto B6b7dfe;
case 0x6b7e01:goto L6b7e01;
case 0x6b7e03:c.instructions+=1;goto B6b7e03;
case 0x6b7e05:goto L6b7e05;
case 0x6b7e07:c.instructions+=1;goto B6b7e07;
case 0x6b7e0c:goto L6b7e0c;
case 0x6b7e0e:c.instructions+=1;goto B6b7e0e;
case 0x6b7e10:goto L6b7e10;
case 0x6b7e12:goto L6b7e12;
case 0x6b7e13:c.instructions+=4;goto B6b7e13;
case 0x6b7e14:c.instructions+=3;goto B6b7e14;
case 0x6b7e15:c.instructions+=2;goto B6b7e15;
case 0x6b7e16:c.instructions+=1;goto B6b7e16;
case 0x6b7e17:goto L6b7e17;
case 0x6b7e1c:goto L6b7e1c;
case 0x6b7e1e:c.instructions+=1;goto B6b7e1e;
case 0x6b7e20:goto L6b7e20;
case 0x6b7e22:c.instructions+=8;goto B6b7e22;
case 0x6b7e25:c.instructions+=7;goto B6b7e25;
case 0x6b7e26:c.instructions+=6;goto B6b7e26;
case 0x6b7e28:c.instructions+=5;goto B6b7e28;
case 0x6b7e2b:c.instructions+=4;goto B6b7e2b;
case 0x6b7e2c:c.instructions+=3;goto B6b7e2c;
case 0x6b7e2d:c.instructions+=2;goto B6b7e2d;
case 0x6b7e2f:c.instructions+=1;goto B6b7e2f;
case 0x6b7e32:goto L6b7e32;
case 0x6b7e34:c.instructions+=1;goto B6b7e34;
case 0x6b7e36:goto L6b7e36;
case 0x6b7e39:c.instructions+=8;goto B6b7e39;
case 0x6b7e3b:c.instructions+=7;goto B6b7e3b;
case 0x6b7e3e:c.instructions+=6;goto B6b7e3e;
case 0x6b7e3f:c.instructions+=5;goto B6b7e3f;
case 0x6b7e45:c.instructions+=4;goto B6b7e45;
case 0x6b7e46:c.instructions+=3;goto B6b7e46;
case 0x6b7e49:c.instructions+=2;goto B6b7e49;
case 0x6b7e4b:c.instructions+=1;goto B6b7e4b;
case 0x6b7e4e:goto L6b7e4e;
case 0x6b7e50:c.instructions+=1;goto B6b7e50;
case 0x6b7e52:goto L6b7e52;
case 0x6b7e54:c.instructions+=5;goto B6b7e54;
case 0x6b7e56:c.instructions+=4;goto B6b7e56;
case 0x6b7e5b:c.instructions+=3;goto B6b7e5b;
case 0x6b7e5e:c.instructions+=2;goto B6b7e5e;
case 0x6b7e60:c.instructions+=1;goto B6b7e60;
case 0x6b7e63:goto L6b7e63;
case 0x6b7e65:goto L6b7e65;
case 0x6b7e67:c.instructions+=6;goto B6b7e67;
case 0x6b7e68:c.instructions+=5;goto B6b7e68;
case 0x6b7e6a:c.instructions+=4;goto B6b7e6a;
case 0x6b7e70:c.instructions+=3;goto B6b7e70;
case 0x6b7e74:c.instructions+=2;goto B6b7e74;
case 0x6b7e77:c.instructions+=1;goto B6b7e77;
case 0x6b7e79:goto L6b7e79;
case 0x6b7e7e:goto L6b7e7e;
case 0x6b7e7f:c.instructions+=1;goto B6b7e7f;
case 0x6b7e82:goto L6b7e82;
case 0x6b7e84:c.instructions+=4;goto B6b7e84;
case 0x6b7e85:c.instructions+=3;goto B6b7e85;
case 0x6b7e87:c.instructions+=2;goto B6b7e87;
case 0x6b7e8d:c.instructions+=1;goto B6b7e8d;
case 0x6b7e92:goto L6b7e92;
case 0x6b7e94:c.instructions+=1;goto B6b7e94;
case 0x6b7e96:goto L6b7e96;
case 0x6b7e98:c.instructions+=1;goto B6b7e98;
case 0x6b7e9d:goto L6b7e9d;
case 0x6b7e9f:c.instructions+=1;goto B6b7e9f;
case 0x6b7ea1:goto L6b7ea1;
case 0x6b7ea3:goto L6b7ea3;
case 0x6b7ea4:c.instructions+=1;goto B6b7ea4;
case 0x6b7ea5:goto L6b7ea5;
case 0x6b7ea7:c.instructions+=8;goto B6b7ea7;
case 0x6b7ea8:c.instructions+=7;goto B6b7ea8;
case 0x6b7eaa:c.instructions+=6;goto B6b7eaa;
case 0x6b7ead:c.instructions+=5;goto B6b7ead;
case 0x6b7eb0:c.instructions+=4;goto B6b7eb0;
case 0x6b7eb4:c.instructions+=3;goto B6b7eb4;
case 0x6b7eb9:c.instructions+=2;goto B6b7eb9;
case 0x6b7ebc:c.instructions+=1;goto B6b7ebc;
case 0x6b7ebe:goto L6b7ebe;
case 0x6b7ec1:c.instructions+=1;goto B6b7ec1;
case 0x6b7ec3:goto L6b7ec3;
case 0x6b7ec6:c.instructions+=2;goto B6b7ec6;
case 0x6b7ec8:c.instructions+=1;goto B6b7ec8;
case 0x6b7eca:goto L6b7eca;
case 0x6b7ecd:c.instructions+=1;goto B6b7ecd;
case 0x6b7ecf:goto L6b7ecf;
case 0x6b7ed2:c.instructions+=1;goto B6b7ed2;
case 0x6b7ed4:goto L6b7ed4;
case 0x6b7ed7:c.instructions+=1;goto B6b7ed7;
case 0x6b7ed9:goto L6b7ed9;
case 0x6b7edc:c.instructions+=1;goto B6b7edc;
case 0x6b7ede:goto L6b7ede;
case 0x6b7ee1:c.instructions+=1;goto B6b7ee1;
case 0x6b7ee7:goto L6b7ee7;
case 0x6b7ee9:c.instructions+=1;goto B6b7ee9;
case 0x6b7eeb:goto L6b7eeb;
case 0x6b7ef0:goto L6b7ef0;
case 0x6b7ef1:c.instructions+=1;goto B6b7ef1;
case 0x6b7ef4:goto L6b7ef4;
case 0x6b7ef6:c.instructions+=13;goto B6b7ef6;
case 0x6b7ef7:c.instructions+=12;goto B6b7ef7;
case 0x6b7ef9:c.instructions+=11;goto B6b7ef9;
case 0x6b7efc:c.instructions+=10;goto B6b7efc;
case 0x6b7eff:c.instructions+=9;goto B6b7eff;
case 0x6b7f03:c.instructions+=8;goto B6b7f03;
case 0x6b7f04:c.instructions+=7;goto B6b7f04;
case 0x6b7f07:c.instructions+=6;goto B6b7f07;
case 0x6b7f09:c.instructions+=5;goto B6b7f09;
case 0x6b7f0b:c.instructions+=4;goto B6b7f0b;
case 0x6b7f10:c.instructions+=3;goto B6b7f10;
case 0x6b7f11:c.instructions+=2;goto B6b7f11;
case 0x6b7f13:c.instructions+=1;goto B6b7f13;
case 0x6b7f15:goto L6b7f15;
case 0x6b7f18:c.instructions+=1;goto B6b7f18;
case 0x6b7f1a:goto L6b7f1a;
case 0x6b7f1c:c.instructions+=3;goto B6b7f1c;
case 0x6b7f1d:c.instructions+=2;goto B6b7f1d;
case 0x6b7f1f:c.instructions+=1;goto B6b7f1f;
case 0x6b7f21:goto L6b7f21;
case 0x6b7f24:goto L6b7f24;
case 0x6b7f26:goto L6b7f26;
case 0x6b7f29:c.instructions+=3;goto B6b7f29;
case 0x6b7f2b:c.instructions+=2;goto B6b7f2b;
case 0x6b7f2d:c.instructions+=1;goto B6b7f2d;
case 0x6b7f2f:goto L6b7f2f;
case 0x6b7f34:goto L6b7f34;
case 0x6b7f35:c.instructions+=2;goto B6b7f35;
case 0x6b7f36:c.instructions+=1;goto B6b7f36;
case 0x6b7f39:goto L6b7f39;
case 0x6b7f3b:c.instructions+=19;goto B6b7f3b;
case 0x6b7f3c:c.instructions+=18;goto B6b7f3c;
case 0x6b7f3e:c.instructions+=17;goto B6b7f3e;
case 0x6b7f41:c.instructions+=16;goto B6b7f41;
case 0x6b7f42:c.instructions+=15;goto B6b7f42;
case 0x6b7f43:c.instructions+=14;goto B6b7f43;
case 0x6b7f44:c.instructions+=13;goto B6b7f44;
case 0x6b7f47:c.instructions+=12;goto B6b7f47;
case 0x6b7f4a:c.instructions+=11;goto B6b7f4a;
case 0x6b7f4d:c.instructions+=10;goto B6b7f4d;
case 0x6b7f4f:c.instructions+=9;goto B6b7f4f;
case 0x6b7f50:c.instructions+=8;goto B6b7f50;
case 0x6b7f53:c.instructions+=7;goto B6b7f53;
case 0x6b7f56:c.instructions+=6;goto B6b7f56;
case 0x6b7f58:c.instructions+=5;goto B6b7f58;
case 0x6b7f59:c.instructions+=4;goto B6b7f59;
case 0x6b7f5c:c.instructions+=3;goto B6b7f5c;
case 0x6b7f5f:c.instructions+=2;goto B6b7f5f;
case 0x6b7f62:c.instructions+=1;goto B6b7f62;
case 0x6b7f67:goto L6b7f67;
case 0x6b7f6a:c.instructions+=4;goto B6b7f6a;
case 0x6b7f6e:c.instructions+=3;goto B6b7f6e;
case 0x6b7f72:c.instructions+=2;goto B6b7f72;
case 0x6b7f75:c.instructions+=1;goto B6b7f75;
case 0x6b7f77:goto L6b7f77;
case 0x6b7f7a:c.instructions+=2;goto B6b7f7a;
case 0x6b7f7b:c.instructions+=1;goto B6b7f7b;
case 0x6b7f80:goto L6b7f80;
case 0x6b7f82:c.instructions+=2;goto B6b7f82;
case 0x6b7f83:c.instructions+=1;goto B6b7f83;
case 0x6b7f85:goto L6b7f85;
case 0x6b7f86:c.instructions+=2;goto B6b7f86;
case 0x6b7f89:c.instructions+=1;goto B6b7f89;
case 0x6b7f8b:goto L6b7f8b;
case 0x6b7f8e:c.instructions+=1;goto B6b7f8e;
case 0x6b7f90:goto L6b7f90;
case 0x6b7f91:c.instructions+=1;goto B6b7f91;
case 0x6b7f96:goto L6b7f96;
case 0x6b7f97:c.instructions+=2;goto B6b7f97;
case 0x6b7f9a:c.instructions+=1;goto B6b7f9a;
case 0x6b7f9c:goto L6b7f9c;
case 0x6b7fa0:goto L6b7fa0;
case 0x6b7fa3:c.instructions+=1;goto B6b7fa3;
case 0x6b7fa5:goto L6b7fa5;
case 0x6b7fa8:c.instructions+=1;goto B6b7fa8;
case 0x6b7fa9:goto L6b7fa9;
case 0x6b7fab:c.instructions+=2;goto B6b7fab;
case 0x6b7fad:c.instructions+=1;goto B6b7fad;
case 0x6b7faf:goto L6b7faf;
case 0x6b7fb2:c.instructions+=2;goto B6b7fb2;
case 0x6b7fb3:c.instructions+=1;goto B6b7fb3;
case 0x6b7fb8:goto L6b7fb8;
case 0x6b7fba:c.instructions+=2;goto B6b7fba;
case 0x6b7fbb:c.instructions+=1;goto B6b7fbb;
case 0x6b7fbd:goto L6b7fbd;
case 0x6b7fbe:c.instructions+=3;goto B6b7fbe;
case 0x6b7fc0:c.instructions+=2;goto B6b7fc0;
case 0x6b7fc2:c.instructions+=1;goto B6b7fc2;
case 0x6b7fc4:goto L6b7fc4;
case 0x6b7fc7:c.instructions+=1;goto B6b7fc7;
case 0x6b7fc9:goto L6b7fc9;
case 0x6b7fcd:c.instructions+=1;goto B6b7fcd;
case 0x6b7fcf:goto L6b7fcf;
case 0x6b7fd2:c.instructions+=2;goto B6b7fd2;
case 0x6b7fd5:c.instructions+=1;goto B6b7fd5;
case 0x6b7fd8:goto L6b7fd8;
case 0x6b7fdb:c.instructions+=3;goto B6b7fdb;
case 0x6b7fde:c.instructions+=2;goto B6b7fde;
case 0x6b7fe3:c.instructions+=1;goto B6b7fe3;
case 0x6b7fe5:goto L6b7fe5;
case 0x6b7fe9:c.instructions+=5;goto B6b7fe9;
case 0x6b7fee:c.instructions+=4;goto B6b7fee;
case 0x6b7ff1:c.instructions+=3;goto B6b7ff1;
case 0x6b7ff4:c.instructions+=2;goto B6b7ff4;
case 0x6b7ff7:c.instructions+=1;goto B6b7ff7;
case 0x6b7ffd:goto L6b7ffd;
default:missing_instruction(c.pc);}
B6b7000:L6b7000:{c.instructions+=4;NFSU2_TR(0x6b7000);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6b7002:{NFSU2_TR(0x6b7002);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6b7004:{NFSU2_TR(0x6b7004);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b7006:{NFSU2_TR(0x6b7006);
if(r1(R+518)){{goto L6b7547;}}
}
B6b700c:L6b700c:{c.instructions+=7;NFSU2_TR(0x6b700c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b700e:{NFSU2_TR(0x6b700e);
__builtin_memmove((R+4),(R+0),4);
}
B6b7010:{NFSU2_TR(0x6b7010);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffull))));
}
B6b7016:{NFSU2_TR(0x6b7016);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6b701b:{NFSU2_TR(0x6b701b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x60000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b7020:{NFSU2_TR(0x6b7020);
__builtin_memmove((R+24),(R+4),4);
}
B6b7022:{NFSU2_TR(0x6b7022);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b7027;}}
}
B6b7024:L6b7024:{c.instructions+=2;NFSU2_TR(0x6b7024);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6b7026:{NFSU2_TR(0x6b7026);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6b7027:L6b7027:{c.instructions+=2;NFSU2_TR(0x6b7027);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b702a:{NFSU2_TR(0x6b702a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b7547;}}
}
B6b7030:L6b7030:{c.instructions+=4;NFSU2_TR(0x6b7030);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b7032:{NFSU2_TR(0x6b7032);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6b7037:{NFSU2_TR(0x6b7037);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x11000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b703c:{NFSU2_TR(0x6b703c);
if(r1(R+518)){{goto L6b7547;}}
}
B6b7042:L6b7042:{c.instructions+=4;NFSU2_TR(0x6b7042);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b7045:{NFSU2_TR(0x6b7045);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b7048:{NFSU2_TR(0x6b7048);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b704b:{NFSU2_TR(0x6b704b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b711f;}}
}
B6b7051:L6b7051:{c.instructions+=3;NFSU2_TR(0x6b7051);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b7054:{NFSU2_TR(0x6b7054);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6b7057:{NFSU2_TR(0x6b7057);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b705a:L6b705a:{c.instructions+=9;NFSU2_TR(0x6b705a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b705c:{NFSU2_TR(0x6b705c);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6b705e:{NFSU2_TR(0x6b705e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6b705f:{NFSU2_TR(0x6b705f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7060:{NFSU2_TR(0x6b7060);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b7063:{NFSU2_TR(0x6b7063);
__builtin_memmove((R+4),(R+12),4);
}
B6b7065:{NFSU2_TR(0x6b7065);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b706b:{NFSU2_TR(0x6b706b);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x22cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b7071:{NFSU2_TR(0x6b7071);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b7076ull));
TAIL_STATIC(0x6b68a4u,6b6);
}
B6b7076:L6b7076:{c.instructions+=6;NFSU2_TR(0x6b7076);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6b7079:{NFSU2_TR(0x6b7079);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B6b707c:{NFSU2_TR(0x6b707c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b707e:{NFSU2_TR(0x6b707e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b7081:{NFSU2_TR(0x6b7081);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffacull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6b7085:{NFSU2_TR(0x6b7085);
if(r1(R+518)){{goto L6b70fd;}}
}
B6b7087:L6b7087:{c.instructions+=2;NFSU2_TR(0x6b7087);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x50000003ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6b708d:{NFSU2_TR(0x6b708d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b70fd;}}
}
B6b708f:L6b708f:{c.instructions+=13;NFSU2_TR(0x6b708f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7091:{NFSU2_TR(0x6b7091);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7093:{NFSU2_TR(0x6b7093);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffff7cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B6b709a:{NFSU2_TR(0x6b709a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b709b:{NFSU2_TR(0x6b709b);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffff94ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6b709f:{NFSU2_TR(0x6b709f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b70a0:{NFSU2_TR(0x6b70a0);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffc8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6b70a4:{NFSU2_TR(0x6b70a4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b70a5:{NFSU2_TR(0x6b70a5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b70a8:{NFSU2_TR(0x6b70a8);
__builtin_memmove((R+4),(R+12),4);
}
B6b70aa:{NFSU2_TR(0x6b70aa);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b70b0:{NFSU2_TR(0x6b70b0);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x22cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b70b6:{NFSU2_TR(0x6b70b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b70bbull));
TAIL_STATIC(0x6b699cu,6b6);
}
B6b70bb:L6b70bb:{c.instructions+=14;NFSU2_TR(0x6b70bb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b70bd:{NFSU2_TR(0x6b70bd);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b70bf:{NFSU2_TR(0x6b70bf);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b70c2:{NFSU2_TR(0x6b70c2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b70c3:{NFSU2_TR(0x6b70c3);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffa0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B6b70c7:{NFSU2_TR(0x6b70c7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b70c8:{NFSU2_TR(0x6b70c8);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffff88ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6b70cc:{NFSU2_TR(0x6b70cc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b70cd:{NFSU2_TR(0x6b70cd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b70d0:{NFSU2_TR(0x6b70d0);
__builtin_memmove((R+4),(R+12),4);
}
B6b70d2:{NFSU2_TR(0x6b70d2);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b70d4:{NFSU2_TR(0x6b70d4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b70d7:{NFSU2_TR(0x6b70d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b70da:{NFSU2_TR(0x6b70da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b70dfull));
TAIL_STATIC(0x6b699cu,6b6);
}
B6b70df:L6b70df:{c.instructions+=2;NFSU2_TR(0x6b70df);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6b70e2:{NFSU2_TR(0x6b70e2);
if(r1(R+518)){{goto L6b70f4;}}
}
B6b70e4:L6b70e4:{c.instructions+=4;NFSU2_TR(0x6b70e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b70e7:{NFSU2_TR(0x6b70e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b70ea:{NFSU2_TR(0x6b70ea);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6b70ec:{NFSU2_TR(0x6b70ec);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b70f4;}}
}
B6b70ee:L6b70ee:{c.instructions+=2;NFSU2_TR(0x6b70ee);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b70f2:{NFSU2_TR(0x6b70f2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b7100;}}
}
B6b70f4:L6b70f4:{c.instructions+=2;NFSU2_TR(0x6b70f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6b70fb:{NFSU2_TR(0x6b70fb);
{goto L6b7100;}
}
B6b70fd:L6b70fd:{c.instructions+=1;NFSU2_TR(0x6b70fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b7100:L6b7100:{c.instructions+=5;NFSU2_TR(0x6b7100);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b7103:{NFSU2_TR(0x6b7103);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b7106:{NFSU2_TR(0x6b7106);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b710a:{NFSU2_TR(0x6b710a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b710d:{NFSU2_TR(0x6b710d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b705au);}goto L6b705a;}}
}
B6b7113:L6b7113:{c.instructions+=2;NFSU2_TR(0x6b7113);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b7117:{NFSU2_TR(0x6b7117);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b7547;}}
}
B6b711d:L6b711d:{c.instructions+=1;NFSU2_TR(0x6b711d);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6b711f:L6b711f:{c.instructions+=3;NFSU2_TR(0x6b711f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b7122:{NFSU2_TR(0x6b7122);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b7125:{NFSU2_TR(0x6b7125);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b732e;}}
}
B6b712b:L6b712b:{c.instructions+=4;NFSU2_TR(0x6b712b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b712e:{NFSU2_TR(0x6b712e);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x224ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b7134:{NFSU2_TR(0x6b7134);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b7137:{NFSU2_TR(0x6b7137);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6b7204;}}
}
B6b713d:L6b713d:{c.instructions+=3;NFSU2_TR(0x6b713d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b7143:{NFSU2_TR(0x6b7143);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6b7146:{NFSU2_TR(0x6b7146);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b7149:L6b7149:{c.instructions+=5;NFSU2_TR(0x6b7149);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b714c:{NFSU2_TR(0x6b714c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6b714e:{NFSU2_TR(0x6b714e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b7150:{NFSU2_TR(0x6b7150);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b7153:{NFSU2_TR(0x6b7153);
if(r1(R+518)){{goto L6b71f0;}}
}
B6b7159:L6b7159:{c.instructions+=4;NFSU2_TR(0x6b7159);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b715c:{NFSU2_TR(0x6b715c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6b715e:{NFSU2_TR(0x6b715e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b7160:{NFSU2_TR(0x6b7160);
if(r1(R+518)){{goto L6b71f0;}}
}
B6b7166:L6b7166:{c.instructions+=2;NFSU2_TR(0x6b7166);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6b7168:{NFSU2_TR(0x6b7168);
if(r1(R+518)){{goto L6b71f0;}}
}
B6b716e:L6b716e:{c.instructions+=7;NFSU2_TR(0x6b716e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6b7170:{NFSU2_TR(0x6b7170);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b7173:{NFSU2_TR(0x6b7173);
__builtin_memmove((R+0),(R+8),4);
}
B6b7175:{NFSU2_TR(0x6b7175);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6b717a:{NFSU2_TR(0x6b717a);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x72d00003ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b7180:{NFSU2_TR(0x6b7180);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b7183:{NFSU2_TR(0x6b7183);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b718c;}}
}
B6b7185:L6b7185:{c.instructions+=1;NFSU2_TR(0x6b7185);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6b718c:L6b718c:{c.instructions+=4;NFSU2_TR(0x6b718c);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6b718e:{NFSU2_TR(0x6b718e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b7191:{NFSU2_TR(0x6b7191);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b7194:{NFSU2_TR(0x6b7194);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6b71ed;}}
}
B6b7196:L6b7196:{c.instructions+=2;NFSU2_TR(0x6b7196);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b7199:{NFSU2_TR(0x6b7199);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b719c:L6b719c:{c.instructions+=3;NFSU2_TR(0x6b719c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b719f:{NFSU2_TR(0x6b719f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b71a2:{NFSU2_TR(0x6b71a2);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b71e2;}}
}
B6b71a4:L6b71a4:{c.instructions+=4;NFSU2_TR(0x6b71a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b71a7:{NFSU2_TR(0x6b71a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b71aa:{NFSU2_TR(0x6b71aa);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6b71ad:{NFSU2_TR(0x6b71ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b71b0:L6b71b0:{c.instructions+=3;NFSU2_TR(0x6b71b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6b71b2:{NFSU2_TR(0x6b71b2);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b71b4:{NFSU2_TR(0x6b71b4);
if(r1(R+518)){{goto L6b757c;}}
}
B6b71ba:L6b71ba:{c.instructions+=5;NFSU2_TR(0x6b71ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6b71bd:{NFSU2_TR(0x6b71bd);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6b71c0:{NFSU2_TR(0x6b71c0);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b71c3:{NFSU2_TR(0x6b71c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6b71c6:{NFSU2_TR(0x6b71c6);
if(r1(R+518)){{goto L6b757c;}}
}
B6b71cc:L6b71cc:{c.instructions+=7;NFSU2_TR(0x6b71cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6b71cf:{NFSU2_TR(0x6b71cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b71d2:{NFSU2_TR(0x6b71d2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6b71d5:{NFSU2_TR(0x6b71d5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
}
B6b71d8:{NFSU2_TR(0x6b71d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b71db:{NFSU2_TR(0x6b71db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6b71de:{NFSU2_TR(0x6b71de);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b71b0u);}goto L6b71b0;}}
}
B6b71e0:L6b71e0:{c.instructions+=1;NFSU2_TR(0x6b71e0);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6b71e2:L6b71e2:{c.instructions+=4;NFSU2_TR(0x6b71e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b71e5:{NFSU2_TR(0x6b71e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b71e8:{NFSU2_TR(0x6b71e8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b71eb:{NFSU2_TR(0x6b71eb);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b719cu);}goto L6b719c;}}
}
B6b71ed:L6b71ed:{c.instructions+=1;NFSU2_TR(0x6b71ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b71f0:L6b71f0:{c.instructions+=5;NFSU2_TR(0x6b71f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b71f4:{NFSU2_TR(0x6b71f4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6b71f5:{NFSU2_TR(0x6b71f5);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x224ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b71fb:{NFSU2_TR(0x6b71fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b71fe:{NFSU2_TR(0x6b71fe);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b7149u);}goto L6b7149;}}
}
B6b7204:L6b7204:{c.instructions+=3;NFSU2_TR(0x6b7204);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b7207:{NFSU2_TR(0x6b7207);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x1ull))));
}
B6b720a:{NFSU2_TR(0x6b720a);
if(r1(R+512)){{goto L6b7224;}}
}
B6b720c:L6b720c:{c.instructions+=3;NFSU2_TR(0x6b720c);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffc4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6b7210:{NFSU2_TR(0x6b7210);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b7213:{NFSU2_TR(0x6b7213);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b7599;}}
}
B6b7219:L6b7219:{c.instructions+=3;NFSU2_TR(0x6b7219);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6b721a:{NFSU2_TR(0x6b721a);
u8 U[24];
w4(U+0,u32(u32(u32(0xffffffc8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(r4(R+0))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B6b721e:{NFSU2_TR(0x6b721e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b7599;}}
}
B6b7224:L6b7224:{c.instructions+=10;NFSU2_TR(0x6b7224);
__builtin_memmove((R+24),(R+4),4);
}
B6b7226:{NFSU2_TR(0x6b7226);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b7229:{NFSU2_TR(0x6b7229);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B6b722c:{NFSU2_TR(0x6b722c);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffacull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6b7230:{NFSU2_TR(0x6b7230);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b7233:{NFSU2_TR(0x6b7233);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff94ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B6b7237:{NFSU2_TR(0x6b7237);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6b723a:{NFSU2_TR(0x6b723a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6b723d:{NFSU2_TR(0x6b723d);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b7240:{NFSU2_TR(0x6b7240);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b75b2;}}
}
B6b7246:L6b7246:{c.instructions+=6;NFSU2_TR(0x6b7246);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffa0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B6b724a:{NFSU2_TR(0x6b724a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b724d:{NFSU2_TR(0x6b724d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b7250:{NFSU2_TR(0x6b7250);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b7253:{NFSU2_TR(0x6b7253);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b7255:{NFSU2_TR(0x6b7255);
if(r1(R+518)){{goto L6b7262;}}
}
B6b7257:L6b7257:{c.instructions+=2;NFSU2_TR(0x6b7257);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x60000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b725c:{NFSU2_TR(0x6b725c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b75be;}}
}
B6b7262:L6b7262:{c.instructions+=2;NFSU2_TR(0x6b7262);
u8 U[4];
w4(U+0,u32(0x74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7264:{NFSU2_TR(0x6b7264);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b7269ull));
TAIL_STATIC(0x699317u,699);
}
B6b7269:L6b7269:{c.instructions+=2;NFSU2_TR(0x6b7269);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b726b:{NFSU2_TR(0x6b726b);
if(r1(R+518)){{goto L6b7278;}}
}
B6b726d:L6b726d:{c.instructions+=2;NFSU2_TR(0x6b726d);
__builtin_memmove((R+4),(R+0),4);
}
B6b726f:{NFSU2_TR(0x6b726f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b7274ull));
TAIL_STATIC(0x698e7du,698);
}
B6b7274:L6b7274:{c.instructions+=2;NFSU2_TR(0x6b7274);
__builtin_memmove((R+4),(R+0),4);
}
B6b7276:{NFSU2_TR(0x6b7276);
{goto L6b727a;}
}
B6b7278:L6b7278:{c.instructions+=1;NFSU2_TR(0x6b7278);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6b727a:L6b727a:{c.instructions+=3;NFSU2_TR(0x6b727a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b727c:{NFSU2_TR(0x6b727c);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffb8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6b7280:{NFSU2_TR(0x6b7280);
if(r1(R+518)){{goto L6b75cb;}}
}
B6b7286:L6b7286:{c.instructions+=4;NFSU2_TR(0x6b7286);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b7289:{NFSU2_TR(0x6b7289);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b728c:{NFSU2_TR(0x6b728c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b728f:{NFSU2_TR(0x6b728f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b72f7;}}
}
B6b7291:L6b7291:{c.instructions+=5;NFSU2_TR(0x6b7291);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b7294:{NFSU2_TR(0x6b7294);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b7296:{NFSU2_TR(0x6b7296);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b7298:{NFSU2_TR(0x6b7298);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x72d00003ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b729d:{NFSU2_TR(0x6b729d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b72b4;}}
}
B6b729f:L6b729f:{c.instructions+=2;NFSU2_TR(0x6b729f);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b72a2:{NFSU2_TR(0x6b72a2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b75d2;}}
}
B6b72a8:L6b72a8:{c.instructions+=5;NFSU2_TR(0x6b72a8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b72a9:{NFSU2_TR(0x6b72a9);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b72ab:{NFSU2_TR(0x6b72ab);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b72ad:{NFSU2_TR(0x6b72ad);
u8 U[4];
w4(U+0,u32(0x72a00003ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b72b2:{NFSU2_TR(0x6b72b2);
{goto L6b7310;}
}
B6b72b4:L6b72b4:{c.instructions+=2;NFSU2_TR(0x6b72b4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x72c00003ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b72b9:{NFSU2_TR(0x6b72b9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b72d0;}}
}
B6b72bb:L6b72bb:{c.instructions+=2;NFSU2_TR(0x6b72bb);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b72be:{NFSU2_TR(0x6b72be);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b75d2;}}
}
B6b72c4:L6b72c4:{c.instructions+=5;NFSU2_TR(0x6b72c4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b72c5:{NFSU2_TR(0x6b72c5);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b72c7:{NFSU2_TR(0x6b72c7);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b72c9:{NFSU2_TR(0x6b72c9);
u8 U[4];
w4(U+0,u32(0x72900003ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b72ce:{NFSU2_TR(0x6b72ce);
{goto L6b7310;}
}
B6b72d0:L6b72d0:{c.instructions+=5;NFSU2_TR(0x6b72d0);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b72d3:{NFSU2_TR(0x6b72d3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b72d4:{NFSU2_TR(0x6b72d4);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b72d6:{NFSU2_TR(0x6b72d6);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b72d8:{NFSU2_TR(0x6b72d8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b72e1;}}
}
B6b72da:L6b72da:{c.instructions+=2;NFSU2_TR(0x6b72da);
u8 U[4];
w4(U+0,u32(0x72b00003ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b72df:{NFSU2_TR(0x6b72df);
{goto L6b7310;}
}
B6b72e1:L6b72e1:{c.instructions+=7;NFSU2_TR(0x6b72e1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6b72e3:{NFSU2_TR(0x6b72e3);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b72e7:{NFSU2_TR(0x6b72e7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B6b72ea:{NFSU2_TR(0x6b72ea);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B6b72eb:{NFSU2_TR(0x6b72eb);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x200000ull))));
}
B6b72f0:{NFSU2_TR(0x6b72f0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x72300003ull))));
}
B6b72f5:{NFSU2_TR(0x6b72f5);
{goto L6b730f;}
}
B6b72f7:L6b72f7:{c.instructions+=9;NFSU2_TR(0x6b72f7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6b72f9:{NFSU2_TR(0x6b72f9);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b72fd:{NFSU2_TR(0x6b72fd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b72fe:{NFSU2_TR(0x6b72fe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B6b7301:{NFSU2_TR(0x6b7301);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7302:{NFSU2_TR(0x6b7302);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7304:{NFSU2_TR(0x6b7304);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B6b7305:{NFSU2_TR(0x6b7305);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x200000ull))));
}
B6b730a:{NFSU2_TR(0x6b730a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x72200003ull))));
}
B6b730f:L6b730f:{c.instructions+=1;NFSU2_TR(0x6b730f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7310:L6b7310:{c.instructions+=1;NFSU2_TR(0x6b7310);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b7315ull));
TAIL_STATIC(0x699362u,699);
}
B6b7315:L6b7315:{c.instructions+=3;NFSU2_TR(0x6b7315);
__builtin_memmove((R+24),(R+0),4);
}
B6b7317:{NFSU2_TR(0x6b7317);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6b7319:{NFSU2_TR(0x6b7319);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b755c;}}
}
B6b731f:L6b731f:{c.instructions+=4;NFSU2_TR(0x6b731f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b7322:{NFSU2_TR(0x6b7322);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b7325:{NFSU2_TR(0x6b7325);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b7328:{NFSU2_TR(0x6b7328);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b712bu);}goto L6b712b;}}
}
B6b732e:L6b732e:{c.instructions+=3;NFSU2_TR(0x6b732e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b7331:{NFSU2_TR(0x6b7331);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b7334:{NFSU2_TR(0x6b7334);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b746e;}}
}
B6b733a:L6b733a:{c.instructions+=16;NFSU2_TR(0x6b733a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b733d:{NFSU2_TR(0x6b733d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b7341:{NFSU2_TR(0x6b7341);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6b7344:{NFSU2_TR(0x6b7344);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffacull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6b7348:{NFSU2_TR(0x6b7348);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffb8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B6b734c:{NFSU2_TR(0x6b734c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b734f:{NFSU2_TR(0x6b734f);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff7cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6b7356:{NFSU2_TR(0x6b7356);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b7359:{NFSU2_TR(0x6b7359);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffa0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6b735d:{NFSU2_TR(0x6b735d);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff94ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6b7361:{NFSU2_TR(0x6b7361);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6b7364:{NFSU2_TR(0x6b7364);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7366:{NFSU2_TR(0x6b7366);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6b7369:{NFSU2_TR(0x6b7369);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6b736a:{NFSU2_TR(0x6b736a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b736d:{NFSU2_TR(0x6b736d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b7370:L6b7370:{c.instructions+=29;NFSU2_TR(0x6b7370);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b7373:{NFSU2_TR(0x6b7373);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6b7375:{NFSU2_TR(0x6b7375);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b7378:{NFSU2_TR(0x6b7378);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b737b:{NFSU2_TR(0x6b737b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b737e:{NFSU2_TR(0x6b737e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b7381:{NFSU2_TR(0x6b7381);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b7384:{NFSU2_TR(0x6b7384);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffff4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6b7388:{NFSU2_TR(0x6b7388);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b738b:{NFSU2_TR(0x6b738b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b738e:{NFSU2_TR(0x6b738e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b7391:{NFSU2_TR(0x6b7391);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b7394:{NFSU2_TR(0x6b7394);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6b7397:{NFSU2_TR(0x6b7397);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b739a:{NFSU2_TR(0x6b739a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b739d:{NFSU2_TR(0x6b739d);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffff4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B6b73a1:{NFSU2_TR(0x6b73a1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b73a4:{NFSU2_TR(0x6b73a4);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6b73a7:{NFSU2_TR(0x6b73a7);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b73aa:{NFSU2_TR(0x6b73aa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b73ab:{NFSU2_TR(0x6b73ab);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b73ac:{NFSU2_TR(0x6b73ac);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6b73af:{NFSU2_TR(0x6b73af);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b73b1:{NFSU2_TR(0x6b73b1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b73b3:{NFSU2_TR(0x6b73b3);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b73b9:{NFSU2_TR(0x6b73b9);
__builtin_memmove((R+4),(R+12),4);
}
B6b73bb:{NFSU2_TR(0x6b73bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b73be:{NFSU2_TR(0x6b73be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b73c1:{NFSU2_TR(0x6b73c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b73c6ull));
TAIL_STATIC(0x699c39u,699);
}
B6b73c6:L6b73c6:{c.instructions+=12;NFSU2_TR(0x6b73c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b73c9:{NFSU2_TR(0x6b73c9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6b73cc:{NFSU2_TR(0x6b73cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b73cf:{NFSU2_TR(0x6b73cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b73d2:{NFSU2_TR(0x6b73d2);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6b73d5:{NFSU2_TR(0x6b73d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b73d8:{NFSU2_TR(0x6b73d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b73db:{NFSU2_TR(0x6b73db);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b73de:{NFSU2_TR(0x6b73de);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffff4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6b73e2:{NFSU2_TR(0x6b73e2);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6b73e5:{NFSU2_TR(0x6b73e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b73e8:{NFSU2_TR(0x6b73e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b73edull));
TAIL_STATIC(0x699765u,699);
}
B6b73ed:L6b73ed:{c.instructions+=12;NFSU2_TR(0x6b73ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b73f0:{NFSU2_TR(0x6b73f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b73f3:{NFSU2_TR(0x6b73f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b73f6:{NFSU2_TR(0x6b73f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b73f9:{NFSU2_TR(0x6b73f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6b73fb:{NFSU2_TR(0x6b73fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b73fe:{NFSU2_TR(0x6b73fe);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffull))));
}
B6b7404:{NFSU2_TR(0x6b7404);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b7407:{NFSU2_TR(0x6b7407);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b740a:{NFSU2_TR(0x6b740a);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6b740d:{NFSU2_TR(0x6b740d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b7410:{NFSU2_TR(0x6b7410);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b7415ull));
TAIL_STATIC(0x699765u,699);
}
B6b7415:L6b7415:{c.instructions+=9;NFSU2_TR(0x6b7415);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b7418:{NFSU2_TR(0x6b7418);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b741b:{NFSU2_TR(0x6b741b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b741e:{NFSU2_TR(0x6b741e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b7421:{NFSU2_TR(0x6b7421);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b7424:{NFSU2_TR(0x6b7424);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b7427:{NFSU2_TR(0x6b7427);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b7429:{NFSU2_TR(0x6b7429);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x72d00003ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6b742f:{NFSU2_TR(0x6b742f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b7448;}}
}
B6b7431:L6b7431:{c.instructions+=4;NFSU2_TR(0x6b7431);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b7434:{NFSU2_TR(0x6b7434);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B6b7435:{NFSU2_TR(0x6b7435);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b7438:{NFSU2_TR(0x6b7438);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b7448;}}
}
B6b743a:L6b743a:{c.instructions+=4;NFSU2_TR(0x6b743a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b743d:{NFSU2_TR(0x6b743d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b7440:{NFSU2_TR(0x6b7440);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6b7444:{NFSU2_TR(0x6b7444);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6b7448:L6b7448:{c.instructions+=6;NFSU2_TR(0x6b7448);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b744b:{NFSU2_TR(0x6b744b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b744f:{NFSU2_TR(0x6b744f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b7453:{NFSU2_TR(0x6b7453);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B6b7456:{NFSU2_TR(0x6b7456);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0x18ull))));
}
B6b7459:{NFSU2_TR(0x6b7459);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b7370u);}goto L6b7370;}}
}
B6b745f:L6b745f:{c.instructions+=4;NFSU2_TR(0x6b745f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b7462:{NFSU2_TR(0x6b7462);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b7465:{NFSU2_TR(0x6b7465);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b7468:{NFSU2_TR(0x6b7468);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b733au);}goto L6b733a;}}
}
B6b746e:L6b746e:{c.instructions+=4;NFSU2_TR(0x6b746e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b7471:{NFSU2_TR(0x6b7471);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffb4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6b7475:{NFSU2_TR(0x6b7475);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b7478:{NFSU2_TR(0x6b7478);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6b747a:L6b747a:{c.instructions+=8;NFSU2_TR(0x6b747a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6b747c:{NFSU2_TR(0x6b747c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6b747f:{NFSU2_TR(0x6b747f);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6b7482:{NFSU2_TR(0x6b7482);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b7485:{NFSU2_TR(0x6b7485);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+24),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6b7488:{NFSU2_TR(0x6b7488);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6b748b:{NFSU2_TR(0x6b748b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x10ull))));
}
B6b748e:{NFSU2_TR(0x6b748e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b747au);}goto L6b747a;}}
}
B6b7490:L6b7490:{c.instructions+=4;NFSU2_TR(0x6b7490);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b7493:{NFSU2_TR(0x6b7493);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6b7495:{NFSU2_TR(0x6b7495);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b7497:{NFSU2_TR(0x6b7497);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b74af;}}
}
B6b7499:L6b7499:{c.instructions+=4;NFSU2_TR(0x6b7499);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffc8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6b749d:{NFSU2_TR(0x6b749d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6b74a0:{NFSU2_TR(0x6b74a0);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6b74a4:{NFSU2_TR(0x6b74a4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b7592;}}
}
B6b74aa:L6b74aa:{c.instructions+=3;NFSU2_TR(0x6b74aa);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6b74ab:{NFSU2_TR(0x6b74ab);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B6b74ad:{NFSU2_TR(0x6b74ad);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b7499u);}goto L6b7499;}}
}
B6b74af:L6b74af:{c.instructions+=11;NFSU2_TR(0x6b74af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b74b1:{NFSU2_TR(0x6b74b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b74b4:{NFSU2_TR(0x6b74b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b74b7:{NFSU2_TR(0x6b74b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b74b9:{NFSU2_TR(0x6b74b9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b74bc:{NFSU2_TR(0x6b74bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b74bf:{NFSU2_TR(0x6b74bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b74c2:{NFSU2_TR(0x6b74c2);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6b74c5:{NFSU2_TR(0x6b74c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b74c8:{NFSU2_TR(0x6b74c8);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B6b74ca:{NFSU2_TR(0x6b74ca);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L6b75d7;}}
}
B6b74d0:L6b74d0:{c.instructions+=3;NFSU2_TR(0x6b74d0);
u8 U[2];
w2(U+0,u16(u32(r2(R+4))&u32(u16(0x840ull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B6b74d5:{NFSU2_TR(0x6b74d5);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffc4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6b74d9:{NFSU2_TR(0x6b74d9);
if(r1(R+518)){{goto L6b7504;}}
}
B6b74db:L6b74db:{c.instructions+=2;NFSU2_TR(0x6b74db);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b74de:{NFSU2_TR(0x6b74de);
if(r1(R+518)){{goto L6b7507;}}
}
B6b74e0:L6b74e0:{c.instructions+=7;NFSU2_TR(0x6b74e0);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6b74e4:{NFSU2_TR(0x6b74e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b74e7:{NFSU2_TR(0x6b74e7);
u8 U[20];
w4(U+0,u32(u32(u32(0xffffffc4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+16));
}
B6b74eb:{NFSU2_TR(0x6b74eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b74ee:{NFSU2_TR(0x6b74ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b74f1:{NFSU2_TR(0x6b74f1);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b74f4:{NFSU2_TR(0x6b74f4);
if(r1(R+518)){{goto L6b75e5;}}
}
B6b74fa:L6b74fa:{c.instructions+=2;NFSU2_TR(0x6b74fa);
u8 U[4];
w4(U+0,u32(0x7bcbc0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b74ff:{NFSU2_TR(0x6b74ff);
{goto L6b75ea;}
}
B6b7504:L6b7504:{c.instructions+=1;NFSU2_TR(0x6b7504);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b7507:L6b7507:{c.instructions+=3;NFSU2_TR(0x6b7507);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b750b:{NFSU2_TR(0x6b750b);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b750d:{NFSU2_TR(0x6b750d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b7547;}}
}
B6b750f:L6b750f:{c.instructions+=10;NFSU2_TR(0x6b750f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b7512:{NFSU2_TR(0x6b7512);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b7515:{NFSU2_TR(0x6b7515);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6b7518:{NFSU2_TR(0x6b7518);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffb8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B6b751c:{NFSU2_TR(0x6b751c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b751e:{NFSU2_TR(0x6b751e);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffc8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6b7522:{NFSU2_TR(0x6b7522);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6b7525:{NFSU2_TR(0x6b7525);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7526:{NFSU2_TR(0x6b7526);
__builtin_memmove((R+4),(R+12),4);
}
B6b7528:{NFSU2_TR(0x6b7528);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b752dull));
TAIL_STATIC(0x699b26u,699);
}
B6b752d:L6b752d:{c.instructions+=3;NFSU2_TR(0x6b752d);
__builtin_memmove((R+24),(R+0),4);
}
B6b752f:{NFSU2_TR(0x6b752f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6b7531:{NFSU2_TR(0x6b7531);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b755c;}}
}
B6b7533:L6b7533:{c.instructions+=7;NFSU2_TR(0x6b7533);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b7536:{NFSU2_TR(0x6b7536);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B6b7539:{NFSU2_TR(0x6b7539);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+28)),r4(U+0));
}
B6b753c:{NFSU2_TR(0x6b753c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b753f:{NFSU2_TR(0x6b753f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b7542:{NFSU2_TR(0x6b7542);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b7545:{NFSU2_TR(0x6b7545);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b750fu);}goto L6b750f;}}
}
B6b7547:L6b7547:{c.instructions+=5;NFSU2_TR(0x6b7547);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b754a:{NFSU2_TR(0x6b754a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b754d:{NFSU2_TR(0x6b754d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b7551:{NFSU2_TR(0x6b7551);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b7554:{NFSU2_TR(0x6b7554);
if(r1(R+512)){TAIL_STATIC(0x6b6ffdu,6b6);}
}
B6b755a:L6b755a:{c.instructions+=1;NFSU2_TR(0x6b755a);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6b755c:L6b755c:{c.instructions+=1;NFSU2_TR(0x6b755c);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6b755e:L6b755e:{c.instructions+=3;NFSU2_TR(0x6b755e);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffb8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6b7562:{NFSU2_TR(0x6b7562);
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
B6b7564:{NFSU2_TR(0x6b7564);
if(r1(R+518)){{goto L6b756d;}}
}
B6b7566:L6b7566:{c.instructions+=2;NFSU2_TR(0x6b7566);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7568:{NFSU2_TR(0x6b7568);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b756dull));
TAIL_STATIC(0x6739efu,673);
}
B6b756d:L6b756d:{c.instructions+=3;NFSU2_TR(0x6b756d);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6b756e:{NFSU2_TR(0x6b756e);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B6b7571:{NFSU2_TR(0x6b7571);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b755eu);}goto L6b755e;}}
}
B6b7573:L6b7573:{c.instructions+=6;NFSU2_TR(0x6b7573);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b7574:{NFSU2_TR(0x6b7574);
__builtin_memmove((R+0),(R+24),4);
}
B6b7576:{NFSU2_TR(0x6b7576);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6b7577:{NFSU2_TR(0x6b7577);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6b7578:{NFSU2_TR(0x6b7578);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6b7579:{NFSU2_TR(0x6b7579);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6b757c:L6b757c:{c.instructions+=3;NFSU2_TR(0x6b757c);
u8 U[4];
w4(U+0,u32(0x7bcb78ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7581:{NFSU2_TR(0x6b7581);
u8 U[4];
w4(U+0,u32(0x11acull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7586:{NFSU2_TR(0x6b7586);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b7589:L6b7589:{c.instructions+=2;NFSU2_TR(0x6b7589);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b758a:{NFSU2_TR(0x6b758a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b758full));
TAIL_STATIC(0x69e936u,69e);
}
B6b758f:L6b758f:{c.instructions+=1;NFSU2_TR(0x6b758f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6b7592:L6b7592:{c.instructions+=2;NFSU2_TR(0x6b7592);
w4(R+24,u32(0x80004005ull));
}
B6b7597:{NFSU2_TR(0x6b7597);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b755cu);}goto L6b755c;}
}
B6b7599:L6b7599:{c.instructions+=7;NFSU2_TR(0x6b7599);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b759f:{NFSU2_TR(0x6b759f);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B6b75a4:{NFSU2_TR(0x6b75a4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b75a5:{NFSU2_TR(0x6b75a5);
u8 U[4];
w4(U+0,u32(0x7bcae8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b75aa:{NFSU2_TR(0x6b75aa);
u8 U[4];
w4(U+0,u32(0x11adull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b75af:{NFSU2_TR(0x6b75af);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b75b0:{NFSU2_TR(0x6b75b0);
{goto L6b75f2;}
}
B6b75b2:L6b75b2:{c.instructions+=3;NFSU2_TR(0x6b75b2);
u8 U[4];
w4(U+0,u32(0x7bca90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b75b7:{NFSU2_TR(0x6b75b7);
u8 U[4];
w4(U+0,u32(0x11aeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b75bc:{NFSU2_TR(0x6b75bc);
{goto L6b75c8;}
}
B6b75be:L6b75be:{c.instructions+=2;NFSU2_TR(0x6b75be);
u8 U[4];
w4(U+0,u32(0x7bca40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b75c3:{NFSU2_TR(0x6b75c3);
u8 U[4];
w4(U+0,u32(0x11afull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b75c8:L6b75c8:{c.instructions+=2;NFSU2_TR(0x6b75c8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b75c9:{NFSU2_TR(0x6b75c9);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b7589u);}goto L6b7589;}
}
B6b75cb:L6b75cb:{c.instructions+=2;NFSU2_TR(0x6b75cb);
w4(R+24,u32(0x8007000eull));
}
B6b75d0:{NFSU2_TR(0x6b75d0);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b755cu);}goto L6b755c;}
}
B6b75d2:L6b75d2:{c.instructions+=3;NFSU2_TR(0x6b75d2);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6b75d4:{NFSU2_TR(0x6b75d4);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6b75d5:{NFSU2_TR(0x6b75d5);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b755cu);}goto L6b755c;}
}
B6b75d7:L6b75d7:{c.instructions+=4;NFSU2_TR(0x6b75d7);
u8 U[4];
w4(U+0,u32(0x7bca14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b75dc:{NFSU2_TR(0x6b75dc);
u8 U[4];
w4(U+0,u32(0x12ccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b75e1:{NFSU2_TR(0x6b75e1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b75e3:{NFSU2_TR(0x6b75e3);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b7589u);}goto L6b7589;}
}
B6b75e5:L6b75e5:{c.instructions+=1;NFSU2_TR(0x6b75e5);
u8 U[4];
w4(U+0,u32(0x7bc9d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b75ea:L6b75ea:{c.instructions+=2;NFSU2_TR(0x6b75ea);
u8 U[4];
w4(U+0,u32(0x11a3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b75ef:{NFSU2_TR(0x6b75ef);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b75f2:L6b75f2:{c.instructions+=2;NFSU2_TR(0x6b75f2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b75f3:{NFSU2_TR(0x6b75f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b75f8ull));
TAIL_STATIC(0x69e936u,69e);
}
B6b75f8:L6b75f8:{c.instructions+=2;NFSU2_TR(0x6b75f8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B6b75fb:{NFSU2_TR(0x6b75fb);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b7592u);}goto L6b7592;}
}
B6b75fd:L6b75fd:{c.instructions+=24;NFSU2_TR(0x6b75fd);
__builtin_memmove((R+28),(R+28),4);
}
B6b75ff:{NFSU2_TR(0x6b75ff);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7600:{NFSU2_TR(0x6b7600);
__builtin_memmove((R+20),(R+16),4);
}
B6b7602:{NFSU2_TR(0x6b7602);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B6b7605:{NFSU2_TR(0x6b7605);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7606:{NFSU2_TR(0x6b7606);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7607:{NFSU2_TR(0x6b7607);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7608:{NFSU2_TR(0x6b7608);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6b760a:{NFSU2_TR(0x6b760a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b760d:{NFSU2_TR(0x6b760d);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b760e:{NFSU2_TR(0x6b760e);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b760f:{NFSU2_TR(0x6b760f);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b7610:{NFSU2_TR(0x6b7610);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b7611:{NFSU2_TR(0x6b7611);
__builtin_memmove((R+12),(R+4),4);
}
B6b7613:{NFSU2_TR(0x6b7613);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6b7615:{NFSU2_TR(0x6b7615);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x218ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b761b:{NFSU2_TR(0x6b761b);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b761c:{NFSU2_TR(0x6b761c);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b761d:{NFSU2_TR(0x6b761d);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6b761f:{NFSU2_TR(0x6b761f);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7621:{NFSU2_TR(0x6b7621);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6b7623:{NFSU2_TR(0x6b7623);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b7624:{NFSU2_TR(0x6b7624);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1f8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b762a:{NFSU2_TR(0x6b762a);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6b762c:L6b762c:{c.instructions+=1;NFSU2_TR(0x6b762c);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6b762e;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b762cu);}goto L6b762c;}
}
B6b762e:L6b762e:{c.instructions+=6;NFSU2_TR(0x6b762e);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b7631:{NFSU2_TR(0x6b7631);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b7634:{NFSU2_TR(0x6b7634);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b7637:{NFSU2_TR(0x6b7637);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b763a:{NFSU2_TR(0x6b763a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b763d:{NFSU2_TR(0x6b763d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b7743;}}
}
B6b7643:L6b7643:{c.instructions+=8;NFSU2_TR(0x6b7643);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b7646:{NFSU2_TR(0x6b7646);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b7649:{NFSU2_TR(0x6b7649);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6b764c:{NFSU2_TR(0x6b764c);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b7650:{NFSU2_TR(0x6b7650);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b7653:{NFSU2_TR(0x6b7653);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b7656:{NFSU2_TR(0x6b7656);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6b7659:{NFSU2_TR(0x6b7659);
if(r1(R+518)){{goto L6b7681;}}
}
B6b765b:L6b765b:{c.instructions+=2;NFSU2_TR(0x6b765b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b765f:{NFSU2_TR(0x6b765f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b7681;}}
}
B6b7661:L6b7661:{c.instructions+=5;NFSU2_TR(0x6b7661);
u8 U[4];
w4(U+0,u32(0x7bcc0cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7666:{NFSU2_TR(0x6b7666);
u8 U[4];
w4(U+0,u32(0x119full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b766b:{NFSU2_TR(0x6b766b);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b766e:{NFSU2_TR(0x6b766e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b766f:{NFSU2_TR(0x6b766f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b7674ull));
TAIL_STATIC(0x69e936u,69e);
}
B6b7674:L6b7674:{c.instructions+=6;NFSU2_TR(0x6b7674);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6b7676:{NFSU2_TR(0x6b7676);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6b7679:{NFSU2_TR(0x6b7679);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6b767a:{NFSU2_TR(0x6b767a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b767d:{NFSU2_TR(0x6b767d);
__builtin_memmove((R+8),(R+4),4);
}
B6b767f:{NFSU2_TR(0x6b767f);
{goto L6b7684;}
}
B6b7681:L6b7681:{c.instructions+=2;NFSU2_TR(0x6b7681);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6b7683:{NFSU2_TR(0x6b7683);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6b7684:L6b7684:{c.instructions+=3;NFSU2_TR(0x6b7684);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b7687:{NFSU2_TR(0x6b7687);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6b7689:{NFSU2_TR(0x6b7689);
if(r1(R+518)){{goto L6b76ef;}}
}
B6b768b:L6b768b:{c.instructions+=3;NFSU2_TR(0x6b768b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B6b768f:{NFSU2_TR(0x6b768f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x3ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b7692:{NFSU2_TR(0x6b7692);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6b7741;}}
}
B6b7698:L6b7698:{c.instructions+=4;NFSU2_TR(0x6b7698);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b769b:{NFSU2_TR(0x6b769b);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B6b76a0:{NFSU2_TR(0x6b76a0);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6b76a1:{NFSU2_TR(0x6b76a1);
if(r1(R+518)){{goto L6b76dc;}}
}
B6b76a3:L6b76a3:{c.instructions+=2;NFSU2_TR(0x6b76a3);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6b76a4:{NFSU2_TR(0x6b76a4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b7732;}}
}
B6b76aa:L6b76aa:{c.instructions+=2;NFSU2_TR(0x6b76aa);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b76ac:{NFSU2_TR(0x6b76ac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b7732;}}
}
B6b76b2:L6b76b2:{c.instructions+=2;NFSU2_TR(0x6b76b2);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b76b5:{NFSU2_TR(0x6b76b5);
if(r1(R+518)){{goto L6b7732;}}
}
B6b76b7:L6b76b7:{c.instructions+=2;NFSU2_TR(0x6b76b7);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b76ba:{NFSU2_TR(0x6b76ba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b7732;}}
}
B6b76bc:L6b76bc:{c.instructions+=5;NFSU2_TR(0x6b76bc);
u8 U[4];
w4(U+0,u32(0x7bb108ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b76c1:{NFSU2_TR(0x6b76c1);
u8 U[4];
w4(U+0,u32(0x11b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b76c6:{NFSU2_TR(0x6b76c6);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b76c9:{NFSU2_TR(0x6b76c9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b76ca:{NFSU2_TR(0x6b76ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b76cfull));
TAIL_STATIC(0x69e936u,69e);
}
B6b76cf:L6b76cf:{c.instructions+=6;NFSU2_TR(0x6b76cf);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6b76d1:{NFSU2_TR(0x6b76d1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6b76d4:{NFSU2_TR(0x6b76d4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6b76d5:{NFSU2_TR(0x6b76d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b76d8:{NFSU2_TR(0x6b76d8);
__builtin_memmove((R+8),(R+0),4);
}
B6b76da:{NFSU2_TR(0x6b76da);
{goto L6b7732;}
}
B6b76dc:L6b76dc:{c.instructions+=2;NFSU2_TR(0x6b76dc);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b76de:{NFSU2_TR(0x6b76de);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b7732;}}
}
B6b76e0:L6b76e0:{c.instructions+=5;NFSU2_TR(0x6b76e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b76e3:{NFSU2_TR(0x6b76e3);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffe0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6b76e7:{NFSU2_TR(0x6b76e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b76ea:{NFSU2_TR(0x6b76ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b76ed:{NFSU2_TR(0x6b76ed);
{goto L6b7732;}
}
B6b76ef:L6b76ef:{c.instructions+=2;NFSU2_TR(0x6b76ef);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6b76f1:{NFSU2_TR(0x6b76f1);
if(r1(R+518)){{goto L6b7732;}}
}
B6b76f3:L6b76f3:{c.instructions+=2;NFSU2_TR(0x6b76f3);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6b76f6:{NFSU2_TR(0x6b76f6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b7732;}}
}
B6b76f8:L6b76f8:{c.instructions+=5;NFSU2_TR(0x6b76f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b76fb:{NFSU2_TR(0x6b76fb);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B6b76ff:{NFSU2_TR(0x6b76ff);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffull))));
}
B6b7705:{NFSU2_TR(0x6b7705);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6b7706:{NFSU2_TR(0x6b7706);
if(r1(R+518)){{goto L6b771a;}}
}
B6b7708:L6b7708:{c.instructions+=3;NFSU2_TR(0x6b7708);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B6b7709:{NFSU2_TR(0x6b7709);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6b770a:{NFSU2_TR(0x6b770a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b7732;}}
}
B6b770c:L6b770c:{c.instructions+=2;NFSU2_TR(0x6b770c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x8ull))));
}
B6b770f:{NFSU2_TR(0x6b770f);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6b7732;}}
}
B6b7711:L6b7711:{c.instructions+=2;NFSU2_TR(0x6b7711);
u8 U[12];
w4(U+0,u32(u32(u32(0x1f8ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6b7718:{NFSU2_TR(0x6b7718);
{goto L6b7726;}
}
B6b771a:L6b771a:{c.instructions+=2;NFSU2_TR(0x6b771a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x2ull))));
}
B6b771d:{NFSU2_TR(0x6b771d);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6b7732;}}
}
B6b771f:L6b771f:{c.instructions+=1;NFSU2_TR(0x6b771f);
u8 U[12];
w4(U+0,u32(u32(u32(0x218ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6b7726:L6b7726:{c.instructions+=4;NFSU2_TR(0x6b7726);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6b7729:{NFSU2_TR(0x6b7729);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b772c:{NFSU2_TR(0x6b772c);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+512,u8((r4(U+4))<(r4(R+4))));
}
B6b772e:{NFSU2_TR(0x6b772e);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6b7732;}}
}
B6b7730:L6b7730:{c.instructions+=1;NFSU2_TR(0x6b7730);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6b7732:L6b7732:{c.instructions+=4;NFSU2_TR(0x6b7732);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b7735:{NFSU2_TR(0x6b7735);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b7738:{NFSU2_TR(0x6b7738);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b773b:{NFSU2_TR(0x6b773b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b7643u);}goto L6b7643;}}
}
B6b7741:L6b7741:{c.instructions+=1;NFSU2_TR(0x6b7741);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6b7743:L6b7743:{c.instructions+=1;NFSU2_TR(0x6b7743);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6b7745:L6b7745:{c.instructions+=7;NFSU2_TR(0x6b7745);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6b7747:{NFSU2_TR(0x6b7747);
u8 U[24];
w4(U+0,u32(u32(u32(0xffffffe0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(r4(R+4))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B6b774b:{NFSU2_TR(0x6b774b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B6b774e:{NFSU2_TR(0x6b774e);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+4))));
}
B6b7750:{NFSU2_TR(0x6b7750);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6b7751:{NFSU2_TR(0x6b7751);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B6b7754:{NFSU2_TR(0x6b7754);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b7745u);}goto L6b7745;}}
}
B6b7756:L6b7756:{c.instructions+=2;NFSU2_TR(0x6b7756);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b7759:{NFSU2_TR(0x6b7759);
if(r1(R+518)){{goto L6b7774;}}
}
B6b775b:L6b775b:{c.instructions+=5;NFSU2_TR(0x6b775b);
u8 U[4];
w4(U+0,u32(0x7bb0c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7760:{NFSU2_TR(0x6b7760);
u8 U[4];
w4(U+0,u32(0x11b2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7765:{NFSU2_TR(0x6b7765);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b7768:{NFSU2_TR(0x6b7768);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7769:{NFSU2_TR(0x6b7769);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b776eull));
TAIL_STATIC(0x69e936u,69e);
}
B6b776e:L6b776e:{c.instructions+=3;NFSU2_TR(0x6b776e);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6b7770:{NFSU2_TR(0x6b7770);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6b7773:{NFSU2_TR(0x6b7773);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6b7774:L6b7774:{c.instructions+=9;NFSU2_TR(0x6b7774);
__builtin_memmove((R+0),(R+8),4);
}
B6b7776:{NFSU2_TR(0x6b7776);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B6b7778:{NFSU2_TR(0x6b7778);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b7779:{NFSU2_TR(0x6b7779);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6b777b:{NFSU2_TR(0x6b777b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6b777c:{NFSU2_TR(0x6b777c);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x80004005ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6b7781:{NFSU2_TR(0x6b7781);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6b7782:{NFSU2_TR(0x6b7782);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6b7783:{NFSU2_TR(0x6b7783);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6b7784:L6b7784:{c.instructions+=16;NFSU2_TR(0x6b7784);
__builtin_memmove((R+28),(R+28),4);
}
B6b7786:{NFSU2_TR(0x6b7786);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7787:{NFSU2_TR(0x6b7787);
__builtin_memmove((R+20),(R+16),4);
}
B6b7789:{NFSU2_TR(0x6b7789);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x44ull))));
}
B6b778c:{NFSU2_TR(0x6b778c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b778d:{NFSU2_TR(0x6b778d);
__builtin_memmove((R+12),(R+4),4);
}
B6b778f:{NFSU2_TR(0x6b778f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b7795:{NFSU2_TR(0x6b7795);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b779b:{NFSU2_TR(0x6b779b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b779c:{NFSU2_TR(0x6b779c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b779d:{NFSU2_TR(0x6b779d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b77a0:{NFSU2_TR(0x6b77a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b77a3:{NFSU2_TR(0x6b77a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b77a6:{NFSU2_TR(0x6b77a6);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6b77a8:{NFSU2_TR(0x6b77a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b77ab:{NFSU2_TR(0x6b77ab);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6b77ad:L6b77ad:{c.instructions+=9;NFSU2_TR(0x6b77ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b77b0:{NFSU2_TR(0x6b77b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b77b3:{NFSU2_TR(0x6b77b3);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffbcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6b77b7:{NFSU2_TR(0x6b77b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b77ba:{NFSU2_TR(0x6b77ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b77bd:{NFSU2_TR(0x6b77bd);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffccull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6b77c1:{NFSU2_TR(0x6b77c1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6b77c4:{NFSU2_TR(0x6b77c4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x10ull))));
}
B6b77c7:{NFSU2_TR(0x6b77c7);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b77adu);}goto L6b77ad;}}
}
B6b77c9:L6b77c9:{c.instructions+=6;NFSU2_TR(0x6b77c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b77cc:{NFSU2_TR(0x6b77cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b77ce:{NFSU2_TR(0x6b77ce);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b77d1:{NFSU2_TR(0x6b77d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b77d4:{NFSU2_TR(0x6b77d4);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b77da:{NFSU2_TR(0x6b77da);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b782e;}}
}
B6b77dc:L6b77dc:{c.instructions+=2;NFSU2_TR(0x6b77dc);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b77e0:{NFSU2_TR(0x6b77e0);
if(r1(R+518)){{goto L6b7808;}}
}
B6b77e2:L6b77e2:{c.instructions+=6;NFSU2_TR(0x6b77e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b77e8:{NFSU2_TR(0x6b77e8);
u8 U[4];
w4(U+0,u32(0x7bcc38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b77ed:{NFSU2_TR(0x6b77ed);
u8 U[4];
w4(U+0,u32(0x12cdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b77f2:{NFSU2_TR(0x6b77f2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b77f5:{NFSU2_TR(0x6b77f5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b77f6:{NFSU2_TR(0x6b77f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b77fbull));
TAIL_STATIC(0x69e936u,69e);
}
B6b77fb:L6b77fb:{c.instructions+=3;NFSU2_TR(0x6b77fb);
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
B6b77fe:{NFSU2_TR(0x6b77fe);
w4(R+0,u32(0x80004005ull));
}
B6b7803:{NFSU2_TR(0x6b7803);
{goto L6b78cc;}
}
B6b7808:L6b7808:{c.instructions+=3;NFSU2_TR(0x6b7808);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b780b:{NFSU2_TR(0x6b780b);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b780d:{NFSU2_TR(0x6b780d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b782e;}}
}
B6b780f:L6b780f:{c.instructions+=11;NFSU2_TR(0x6b780f);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6b7810:{NFSU2_TR(0x6b7810);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b7813:{NFSU2_TR(0x6b7813);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6b7815:{NFSU2_TR(0x6b7815);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6b7818:{NFSU2_TR(0x6b7818);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b781b:{NFSU2_TR(0x6b781b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b781e:{NFSU2_TR(0x6b781e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6b7820:{NFSU2_TR(0x6b7820);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6b7823:{NFSU2_TR(0x6b7823);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b7829:{NFSU2_TR(0x6b7829);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b782c:{NFSU2_TR(0x6b782c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b780fu);}goto L6b780f;}}
}
B6b782e:L6b782e:{c.instructions+=3;NFSU2_TR(0x6b782e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b7831:{NFSU2_TR(0x6b7831);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b7833:{NFSU2_TR(0x6b7833);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b7883;}}
}
B6b7835:L6b7835:{c.instructions+=6;NFSU2_TR(0x6b7835);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b7838:{NFSU2_TR(0x6b7838);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B6b783a:{NFSU2_TR(0x6b783a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b783d:{NFSU2_TR(0x6b783d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b7840:{NFSU2_TR(0x6b7840);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b7843:{NFSU2_TR(0x6b7843);
{goto L6b7848;}
}
B6b7845:L6b7845:{c.instructions+=1;NFSU2_TR(0x6b7845);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b7848:L6b7848:{c.instructions+=9;NFSU2_TR(0x6b7848);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7849:{NFSU2_TR(0x6b7849);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6b784b:{NFSU2_TR(0x6b784b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b784c:{NFSU2_TR(0x6b784c);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6b784f:{NFSU2_TR(0x6b784f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7850:{NFSU2_TR(0x6b7850);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7851:{NFSU2_TR(0x6b7851);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7852:{NFSU2_TR(0x6b7852);
__builtin_memmove((R+4),(R+12),4);
}
B6b7854:{NFSU2_TR(0x6b7854);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b7859ull));
TAIL_STATIC(0x699c39u,699);
}
B6b7859:L6b7859:{c.instructions+=10;NFSU2_TR(0x6b7859);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b785c:{NFSU2_TR(0x6b785c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b7860:{NFSU2_TR(0x6b7860);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6b7863:{NFSU2_TR(0x6b7863);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b7866:{NFSU2_TR(0x6b7866);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6b7868:{NFSU2_TR(0x6b7868);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b786b:{NFSU2_TR(0x6b786b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6b786e:{NFSU2_TR(0x6b786e);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7870:{NFSU2_TR(0x6b7870);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b7871:{NFSU2_TR(0x6b7871);
__builtin_memmove((R+28),(R+0),4);
}
B6b7873:L6b7873:{c.instructions+=1;NFSU2_TR(0x6b7873);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6b7875;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b7873u);}goto L6b7873;}
}
B6b7875:L6b7875:{c.instructions+=4;NFSU2_TR(0x6b7875);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b7879:{NFSU2_TR(0x6b7879);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6b787b:{NFSU2_TR(0x6b787b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b787e:{NFSU2_TR(0x6b787e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b7845u);}goto L6b7845;}}
}
B6b7880:L6b7880:{c.instructions+=1;NFSU2_TR(0x6b7880);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b7883:L6b7883:{c.instructions+=17;NFSU2_TR(0x6b7883);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b7889:{NFSU2_TR(0x6b7889);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b788c:{NFSU2_TR(0x6b788c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b788d:{NFSU2_TR(0x6b788d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b788e:{NFSU2_TR(0x6b788e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b788f:{NFSU2_TR(0x6b788f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7890:{NFSU2_TR(0x6b7890);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7892:{NFSU2_TR(0x6b7892);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7893:{NFSU2_TR(0x6b7893);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b7896:{NFSU2_TR(0x6b7896);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7897:{NFSU2_TR(0x6b7897);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7898:{NFSU2_TR(0x6b7898);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b789b:{NFSU2_TR(0x6b789b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b789e:{NFSU2_TR(0x6b789e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b789f:{NFSU2_TR(0x6b789f);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b78a1:{NFSU2_TR(0x6b78a1);
__builtin_memmove((R+4),(R+12),4);
}
B6b78a3:{NFSU2_TR(0x6b78a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b78a8ull));
TAIL_STATIC(0x6d1ab8u,6d1);
}
B6b78a8:L6b78a8:{c.instructions+=2;NFSU2_TR(0x6b78a8);
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
B6b78aa:{NFSU2_TR(0x6b78aa);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b78cc;}}
}
B6b78ac:L6b78ac:{c.instructions+=16;NFSU2_TR(0x6b78ac);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b78ad:{NFSU2_TR(0x6b78ad);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b78ae:{NFSU2_TR(0x6b78ae);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b78af:{NFSU2_TR(0x6b78af);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b78b0:{NFSU2_TR(0x6b78b0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b78b3:{NFSU2_TR(0x6b78b3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b78b6:{NFSU2_TR(0x6b78b6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b78b7:{NFSU2_TR(0x6b78b7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b78ba:{NFSU2_TR(0x6b78ba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b78bb:{NFSU2_TR(0x6b78bb);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b78be:{NFSU2_TR(0x6b78be);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b78bf:{NFSU2_TR(0x6b78bf);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b78c2:{NFSU2_TR(0x6b78c2);
__builtin_memmove((R+4),(R+12),4);
}
B6b78c4:{NFSU2_TR(0x6b78c4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b78c5:{NFSU2_TR(0x6b78c5);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b78c7:{NFSU2_TR(0x6b78c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b78ccull));
TAIL_STATIC(0x6d1ab8u,6d1);
}
B6b78cc:L6b78cc:{c.instructions+=5;NFSU2_TR(0x6b78cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b78cd:{NFSU2_TR(0x6b78cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6b78ce:{NFSU2_TR(0x6b78ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6b78cf:{NFSU2_TR(0x6b78cf);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6b78d0:{NFSU2_TR(0x6b78d0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6b78d1:L6b78d1:{c.instructions+=29;NFSU2_TR(0x6b78d1);
__builtin_memmove((R+28),(R+28),4);
}
B6b78d3:{NFSU2_TR(0x6b78d3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b78d4:{NFSU2_TR(0x6b78d4);
__builtin_memmove((R+20),(R+16),4);
}
B6b78d6:{NFSU2_TR(0x6b78d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B6b78d9:{NFSU2_TR(0x6b78d9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b78da:{NFSU2_TR(0x6b78da);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b78db:{NFSU2_TR(0x6b78db);
__builtin_memmove((R+24),(R+4),4);
}
B6b78dd:{NFSU2_TR(0x6b78dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b78e3:{NFSU2_TR(0x6b78e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6b78e5:{NFSU2_TR(0x6b78e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b78e8:{NFSU2_TR(0x6b78e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b78ee:{NFSU2_TR(0x6b78ee);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b78ef:{NFSU2_TR(0x6b78ef);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b78f2:{NFSU2_TR(0x6b78f2);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xfffffull))));
}
B6b78f8:{NFSU2_TR(0x6b78f8);
__builtin_memmove((R+28),(R+12),4);
}
B6b78fa:{NFSU2_TR(0x6b78fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))-u32(r4(U+4))));
}
B6b78fd:{NFSU2_TR(0x6b78fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6b7900:{NFSU2_TR(0x6b7900);
w1(R+512,u8((r4(R+28))!=(u32(0x0ull))));
w4(R+28,u32(0-u32(r4(R+28))));
}
B6b7902:{NFSU2_TR(0x6b7902);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(R+28))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6b7904:{NFSU2_TR(0x6b7904);
w4(R+28,u32(u32(r4(R+28))&u32(r4(R+0))));
}
B6b7906:{NFSU2_TR(0x6b7906);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6b7909:{NFSU2_TR(0x6b7909);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b790c:{NFSU2_TR(0x6b790c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b790f:{NFSU2_TR(0x6b790f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6b7912:{NFSU2_TR(0x6b7912);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6b7914:{NFSU2_TR(0x6b7914);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
}
B6b7916:{NFSU2_TR(0x6b7916);
__builtin_memmove((R+4),(R+24),4);
}
B6b7918:{NFSU2_TR(0x6b7918);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b791b:{NFSU2_TR(0x6b791b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b7920ull));
TAIL_STATIC(0x6d18eau,6d1);
}
B6b7920:L6b7920:{c.instructions+=2;NFSU2_TR(0x6b7920);
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
B6b7922:{NFSU2_TR(0x6b7922);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b7a0f;}}
}
B6b7928:L6b7928:{c.instructions+=15;NFSU2_TR(0x6b7928);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b792b:{NFSU2_TR(0x6b792b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b792d:{NFSU2_TR(0x6b792d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b7930:{NFSU2_TR(0x6b7930);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b7933:{NFSU2_TR(0x6b7933);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B6b7937:{NFSU2_TR(0x6b7937);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6b7939:{NFSU2_TR(0x6b7939);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b793c:{NFSU2_TR(0x6b793c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b793e:{NFSU2_TR(0x6b793e);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ffull))));
}
B6b7943:{NFSU2_TR(0x6b7943);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xb0000000ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6b7948:{NFSU2_TR(0x6b7948);
u8 U[4];
w4(U+0,u32(0xf0000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b794d:{NFSU2_TR(0x6b794d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b794e:{NFSU2_TR(0x6b794e);
__builtin_memmove((R+4),(R+24),4);
}
B6b7950:{NFSU2_TR(0x6b7950);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b7953:{NFSU2_TR(0x6b7953);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b7956ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6b7956:L6b7956:{c.instructions+=2;NFSU2_TR(0x6b7956);
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
B6b7958:{NFSU2_TR(0x6b7958);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b7a0f;}}
}
B6b795e:L6b795e:{c.instructions+=2;NFSU2_TR(0x6b795e);
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
B6b7960:{NFSU2_TR(0x6b7960);
if(r1(R+518)){{goto L6b79ab;}}
}
B6b7962:L6b7962:{c.instructions+=10;NFSU2_TR(0x6b7962);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b7965:{NFSU2_TR(0x6b7965);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b7967:{NFSU2_TR(0x6b7967);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b796a:{NFSU2_TR(0x6b796a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b796b:{NFSU2_TR(0x6b796b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b796e:{NFSU2_TR(0x6b796e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b796f:{NFSU2_TR(0x6b796f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6b7971:{NFSU2_TR(0x6b7971);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6b7974:{NFSU2_TR(0x6b7974);
__builtin_memmove((R+4),(R+24),4);
}
B6b7976:{NFSU2_TR(0x6b7976);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b7979ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6b7979:L6b7979:{c.instructions+=2;NFSU2_TR(0x6b7979);
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
B6b797b:{NFSU2_TR(0x6b797b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b7a0f;}}
}
B6b7981:L6b7981:{c.instructions+=8;NFSU2_TR(0x6b7981);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b7983:{NFSU2_TR(0x6b7983);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b7986:{NFSU2_TR(0x6b7986);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7987:{NFSU2_TR(0x6b7987);
u8 U[4];
w4(U+0,u32(0xf0000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b798c:{NFSU2_TR(0x6b798c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b798d:{NFSU2_TR(0x6b798d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b798e:{NFSU2_TR(0x6b798e);
__builtin_memmove((R+4),(R+24),4);
}
B6b7990:{NFSU2_TR(0x6b7990);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b7993ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6b7993:L6b7993:{c.instructions+=2;NFSU2_TR(0x6b7993);
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
B6b7995:{NFSU2_TR(0x6b7995);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b7a0f;}}
}
B6b7997:L6b7997:{c.instructions+=6;NFSU2_TR(0x6b7997);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b799a:{NFSU2_TR(0x6b799a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b799c:{NFSU2_TR(0x6b799c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b799f:{NFSU2_TR(0x6b799f);
__builtin_memmove((R+4),(R+24),4);
}
B6b79a1:{NFSU2_TR(0x6b79a1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b79a4:{NFSU2_TR(0x6b79a4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b79a7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6b79a7:L6b79a7:{c.instructions+=2;NFSU2_TR(0x6b79a7);
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
B6b79a9:{NFSU2_TR(0x6b79a9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b7a0f;}}
}
B6b79ab:L6b79ab:{c.instructions+=3;NFSU2_TR(0x6b79ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b79ae:{NFSU2_TR(0x6b79ae);
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
B6b79b0:{NFSU2_TR(0x6b79b0);
if(r1(R+518)){{goto L6b79f7;}}
}
B6b79b2:L6b79b2:{c.instructions+=10;NFSU2_TR(0x6b79b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b79b5:{NFSU2_TR(0x6b79b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b79b7:{NFSU2_TR(0x6b79b7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b79ba:{NFSU2_TR(0x6b79ba);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b79bb:{NFSU2_TR(0x6b79bb);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b79be:{NFSU2_TR(0x6b79be);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b79bf:{NFSU2_TR(0x6b79bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6b79c1:{NFSU2_TR(0x6b79c1);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6b79c4:{NFSU2_TR(0x6b79c4);
__builtin_memmove((R+4),(R+24),4);
}
B6b79c6:{NFSU2_TR(0x6b79c6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b79c9ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6b79c9:L6b79c9:{c.instructions+=2;NFSU2_TR(0x6b79c9);
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
B6b79cb:{NFSU2_TR(0x6b79cb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b7a0f;}}
}
B6b79cd:L6b79cd:{c.instructions+=8;NFSU2_TR(0x6b79cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b79cf:{NFSU2_TR(0x6b79cf);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b79d2:{NFSU2_TR(0x6b79d2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b79d3:{NFSU2_TR(0x6b79d3);
u8 U[4];
w4(U+0,u32(0xf0000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b79d8:{NFSU2_TR(0x6b79d8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b79d9:{NFSU2_TR(0x6b79d9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b79da:{NFSU2_TR(0x6b79da);
__builtin_memmove((R+4),(R+24),4);
}
B6b79dc:{NFSU2_TR(0x6b79dc);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b79dfull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6b79df:L6b79df:{c.instructions+=2;NFSU2_TR(0x6b79df);
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
B6b79e1:{NFSU2_TR(0x6b79e1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b7a0f;}}
}
B6b79e3:L6b79e3:{c.instructions+=6;NFSU2_TR(0x6b79e3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b79e6:{NFSU2_TR(0x6b79e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b79e8:{NFSU2_TR(0x6b79e8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b79eb:{NFSU2_TR(0x6b79eb);
__builtin_memmove((R+4),(R+24),4);
}
B6b79ed:{NFSU2_TR(0x6b79ed);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b79f0:{NFSU2_TR(0x6b79f0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b79f3ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6b79f3:L6b79f3:{c.instructions+=2;NFSU2_TR(0x6b79f3);
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
B6b79f5:{NFSU2_TR(0x6b79f5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b7a0f;}}
}
B6b79f7:L6b79f7:{c.instructions+=3;NFSU2_TR(0x6b79f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b79f9:{NFSU2_TR(0x6b79f9);
__builtin_memmove((R+4),(R+24),4);
}
B6b79fb:{NFSU2_TR(0x6b79fb);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b79feull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6b79fe:L6b79fe:{c.instructions+=2;NFSU2_TR(0x6b79fe);
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
B6b7a00:{NFSU2_TR(0x6b7a00);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b7a0f;}}
}
B6b7a02:L6b7a02:{c.instructions+=2;NFSU2_TR(0x6b7a02);
__builtin_memmove((R+4),(R+24),4);
}
B6b7a04:{NFSU2_TR(0x6b7a04);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b7a09ull));
TAIL_STATIC(0x6ccd02u,6cc);
}
B6b7a09:L6b7a09:{c.instructions+=2;NFSU2_TR(0x6b7a09);
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
B6b7a0b:{NFSU2_TR(0x6b7a0b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b7a0f;}}
}
B6b7a0d:L6b7a0d:{c.instructions+=1;NFSU2_TR(0x6b7a0d);
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
B6b7a0f:L6b7a0f:{c.instructions+=5;NFSU2_TR(0x6b7a0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b7a10:{NFSU2_TR(0x6b7a10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6b7a11:{NFSU2_TR(0x6b7a11);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6b7a12:{NFSU2_TR(0x6b7a12);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6b7a13:{NFSU2_TR(0x6b7a13);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6b7a16:L6b7a16:{c.instructions+=13;NFSU2_TR(0x6b7a16);
__builtin_memmove((R+28),(R+28),4);
}
B6b7a18:{NFSU2_TR(0x6b7a18);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7a19:{NFSU2_TR(0x6b7a19);
__builtin_memmove((R+20),(R+16),4);
}
B6b7a1b:{NFSU2_TR(0x6b7a1b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B6b7a1e:{NFSU2_TR(0x6b7a1e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7a1f:{NFSU2_TR(0x6b7a1f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7a20:{NFSU2_TR(0x6b7a20);
__builtin_memmove((R+24),(R+4),4);
}
B6b7a22:{NFSU2_TR(0x6b7a22);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b7a28:{NFSU2_TR(0x6b7a28);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7a29:{NFSU2_TR(0x6b7a29);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6b7a2b:{NFSU2_TR(0x6b7a2b);
u8 U[4];
w4(U+0,u32(0x42ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7a2d:{NFSU2_TR(0x6b7a2d);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xfffffull))));
}
B6b7a33:{NFSU2_TR(0x6b7a33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b7a38ull));
TAIL_STATIC(0x6d18eau,6d1);
}
B6b7a38:L6b7a38:{c.instructions+=3;NFSU2_TR(0x6b7a38);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6b7a3a:{NFSU2_TR(0x6b7a3a);
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
B6b7a3c:{NFSU2_TR(0x6b7a3c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b7aec;}}
}
B6b7a42:L6b7a42:{c.instructions+=12;NFSU2_TR(0x6b7a42);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b7a45:{NFSU2_TR(0x6b7a45);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b7a47:{NFSU2_TR(0x6b7a47);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7a48:{NFSU2_TR(0x6b7a48);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7a49:{NFSU2_TR(0x6b7a49);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b7a4c:{NFSU2_TR(0x6b7a4c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7a4d:{NFSU2_TR(0x6b7a4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b7a53:{NFSU2_TR(0x6b7a53);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b7a56:{NFSU2_TR(0x6b7a56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6b7a58:{NFSU2_TR(0x6b7a58);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6b7a5b:{NFSU2_TR(0x6b7a5b);
__builtin_memmove((R+4),(R+24),4);
}
B6b7a5d:{NFSU2_TR(0x6b7a5d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b7a60ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6b7a60:L6b7a60:{c.instructions+=2;NFSU2_TR(0x6b7a60);
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
B6b7a62:{NFSU2_TR(0x6b7a62);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b7aec;}}
}
B6b7a68:L6b7a68:{c.instructions+=6;NFSU2_TR(0x6b7a68);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b7a6a:{NFSU2_TR(0x6b7a6a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7a6b:{NFSU2_TR(0x6b7a6b);
u8 U[4];
w4(U+0,u32(0xf0000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7a70:{NFSU2_TR(0x6b7a70);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b7a73:{NFSU2_TR(0x6b7a73);
__builtin_memmove((R+4),(R+24),4);
}
B6b7a75:{NFSU2_TR(0x6b7a75);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b7a78ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6b7a78:L6b7a78:{c.instructions+=2;NFSU2_TR(0x6b7a78);
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
B6b7a7a:{NFSU2_TR(0x6b7a7a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b7aec;}}
}
B6b7a7c:L6b7a7c:{c.instructions+=13;NFSU2_TR(0x6b7a7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b7a82:{NFSU2_TR(0x6b7a82);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b7a85:{NFSU2_TR(0x6b7a85);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b7a88:{NFSU2_TR(0x6b7a88);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b7a8b:{NFSU2_TR(0x6b7a8b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7a8c:{NFSU2_TR(0x6b7a8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B6b7a8f:{NFSU2_TR(0x6b7a8f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b7a91:{NFSU2_TR(0x6b7a91);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b7a94:{NFSU2_TR(0x6b7a94);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7a95:{NFSU2_TR(0x6b7a95);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6b7a97:{NFSU2_TR(0x6b7a97);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6b7a9a:{NFSU2_TR(0x6b7a9a);
__builtin_memmove((R+4),(R+24),4);
}
B6b7a9c:{NFSU2_TR(0x6b7a9c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b7a9full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6b7a9f:L6b7a9f:{c.instructions+=2;NFSU2_TR(0x6b7a9f);
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
B6b7aa1:{NFSU2_TR(0x6b7aa1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b7aec;}}
}
B6b7aa3:L6b7aa3:{c.instructions+=8;NFSU2_TR(0x6b7aa3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b7aa5:{NFSU2_TR(0x6b7aa5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b7aa8:{NFSU2_TR(0x6b7aa8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7aa9:{NFSU2_TR(0x6b7aa9);
u8 U[4];
w4(U+0,u32(0xf0000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7aae:{NFSU2_TR(0x6b7aae);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7aaf:{NFSU2_TR(0x6b7aaf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7ab0:{NFSU2_TR(0x6b7ab0);
__builtin_memmove((R+4),(R+24),4);
}
B6b7ab2:{NFSU2_TR(0x6b7ab2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b7ab5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6b7ab5:L6b7ab5:{c.instructions+=2;NFSU2_TR(0x6b7ab5);
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
B6b7ab7:{NFSU2_TR(0x6b7ab7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b7aec;}}
}
B6b7ab9:L6b7ab9:{c.instructions+=8;NFSU2_TR(0x6b7ab9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b7abc:{NFSU2_TR(0x6b7abc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b7abf:{NFSU2_TR(0x6b7abf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b7ac1:{NFSU2_TR(0x6b7ac1);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x9000000ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6b7ac7:{NFSU2_TR(0x6b7ac7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7ac8:{NFSU2_TR(0x6b7ac8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b7acb:{NFSU2_TR(0x6b7acb);
__builtin_memmove((R+4),(R+24),4);
}
B6b7acd:{NFSU2_TR(0x6b7acd);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b7ad0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6b7ad0:L6b7ad0:{c.instructions+=2;NFSU2_TR(0x6b7ad0);
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
B6b7ad2:{NFSU2_TR(0x6b7ad2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b7aec;}}
}
B6b7ad4:L6b7ad4:{c.instructions+=3;NFSU2_TR(0x6b7ad4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b7ad6:{NFSU2_TR(0x6b7ad6);
__builtin_memmove((R+4),(R+24),4);
}
B6b7ad8:{NFSU2_TR(0x6b7ad8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b7adbull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6b7adb:L6b7adb:{c.instructions+=2;NFSU2_TR(0x6b7adb);
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
B6b7add:{NFSU2_TR(0x6b7add);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b7aec;}}
}
B6b7adf:L6b7adf:{c.instructions+=2;NFSU2_TR(0x6b7adf);
__builtin_memmove((R+4),(R+24),4);
}
B6b7ae1:{NFSU2_TR(0x6b7ae1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b7ae6ull));
TAIL_STATIC(0x6ccd02u,6cc);
}
B6b7ae6:L6b7ae6:{c.instructions+=2;NFSU2_TR(0x6b7ae6);
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
B6b7ae8:{NFSU2_TR(0x6b7ae8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b7aec;}}
}
B6b7aea:L6b7aea:{c.instructions+=1;NFSU2_TR(0x6b7aea);
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
B6b7aec:L6b7aec:{c.instructions+=5;NFSU2_TR(0x6b7aec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b7aed:{NFSU2_TR(0x6b7aed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6b7aee:{NFSU2_TR(0x6b7aee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6b7aef:{NFSU2_TR(0x6b7aef);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6b7af0:{NFSU2_TR(0x6b7af0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6b7af1:L6b7af1:{c.instructions+=13;NFSU2_TR(0x6b7af1);
__builtin_memmove((R+28),(R+28),4);
}
B6b7af3:{NFSU2_TR(0x6b7af3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7af4:{NFSU2_TR(0x6b7af4);
__builtin_memmove((R+20),(R+16),4);
}
B6b7af6:{NFSU2_TR(0x6b7af6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B6b7af9:{NFSU2_TR(0x6b7af9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7afa:{NFSU2_TR(0x6b7afa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7afb:{NFSU2_TR(0x6b7afb);
__builtin_memmove((R+24),(R+4),4);
}
B6b7afd:{NFSU2_TR(0x6b7afd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b7b03:{NFSU2_TR(0x6b7b03);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7b04:{NFSU2_TR(0x6b7b04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6b7b06:{NFSU2_TR(0x6b7b06);
u8 U[4];
w4(U+0,u32(0x42ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7b08:{NFSU2_TR(0x6b7b08);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xfffffull))));
}
B6b7b0e:{NFSU2_TR(0x6b7b0e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b7b13ull));
TAIL_STATIC(0x6d18eau,6d1);
}
B6b7b13:L6b7b13:{c.instructions+=3;NFSU2_TR(0x6b7b13);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6b7b15:{NFSU2_TR(0x6b7b15);
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
B6b7b17:{NFSU2_TR(0x6b7b17);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b7bbe;}}
}
B6b7b1d:L6b7b1d:{c.instructions+=12;NFSU2_TR(0x6b7b1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b7b20:{NFSU2_TR(0x6b7b20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b7b22:{NFSU2_TR(0x6b7b22);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7b23:{NFSU2_TR(0x6b7b23);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7b24:{NFSU2_TR(0x6b7b24);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b7b27:{NFSU2_TR(0x6b7b27);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7b28:{NFSU2_TR(0x6b7b28);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b7b2e:{NFSU2_TR(0x6b7b2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b7b31:{NFSU2_TR(0x6b7b31);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6b7b33:{NFSU2_TR(0x6b7b33);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6b7b36:{NFSU2_TR(0x6b7b36);
__builtin_memmove((R+4),(R+24),4);
}
B6b7b38:{NFSU2_TR(0x6b7b38);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b7b3bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6b7b3b:L6b7b3b:{c.instructions+=2;NFSU2_TR(0x6b7b3b);
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
B6b7b3d:{NFSU2_TR(0x6b7b3d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b7bbe;}}
}
B6b7b3f:L6b7b3f:{c.instructions+=6;NFSU2_TR(0x6b7b3f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b7b41:{NFSU2_TR(0x6b7b41);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7b42:{NFSU2_TR(0x6b7b42);
u8 U[4];
w4(U+0,u32(0xf0000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7b47:{NFSU2_TR(0x6b7b47);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b7b4a:{NFSU2_TR(0x6b7b4a);
__builtin_memmove((R+4),(R+24),4);
}
B6b7b4c:{NFSU2_TR(0x6b7b4c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b7b4full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6b7b4f:L6b7b4f:{c.instructions+=2;NFSU2_TR(0x6b7b4f);
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
B6b7b51:{NFSU2_TR(0x6b7b51);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b7bbe;}}
}
B6b7b53:L6b7b53:{c.instructions+=13;NFSU2_TR(0x6b7b53);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b7b59:{NFSU2_TR(0x6b7b59);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b7b5c:{NFSU2_TR(0x6b7b5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b7b5f:{NFSU2_TR(0x6b7b5f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b7b62:{NFSU2_TR(0x6b7b62);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7b63:{NFSU2_TR(0x6b7b63);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B6b7b66:{NFSU2_TR(0x6b7b66);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b7b68:{NFSU2_TR(0x6b7b68);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b7b6b:{NFSU2_TR(0x6b7b6b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7b6c:{NFSU2_TR(0x6b7b6c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6b7b6e:{NFSU2_TR(0x6b7b6e);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6b7b71:{NFSU2_TR(0x6b7b71);
__builtin_memmove((R+4),(R+24),4);
}
B6b7b73:{NFSU2_TR(0x6b7b73);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b7b76ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6b7b76:L6b7b76:{c.instructions+=2;NFSU2_TR(0x6b7b76);
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
B6b7b78:{NFSU2_TR(0x6b7b78);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b7bbe;}}
}
B6b7b7a:L6b7b7a:{c.instructions+=8;NFSU2_TR(0x6b7b7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b7b7c:{NFSU2_TR(0x6b7b7c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b7b7f:{NFSU2_TR(0x6b7b7f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7b80:{NFSU2_TR(0x6b7b80);
u8 U[4];
w4(U+0,u32(0xf0000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7b85:{NFSU2_TR(0x6b7b85);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7b86:{NFSU2_TR(0x6b7b86);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7b87:{NFSU2_TR(0x6b7b87);
__builtin_memmove((R+4),(R+24),4);
}
B6b7b89:{NFSU2_TR(0x6b7b89);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b7b8cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6b7b8c:L6b7b8c:{c.instructions+=2;NFSU2_TR(0x6b7b8c);
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
B6b7b8e:{NFSU2_TR(0x6b7b8e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b7bbe;}}
}
B6b7b90:L6b7b90:{c.instructions+=6;NFSU2_TR(0x6b7b90);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b7b93:{NFSU2_TR(0x6b7b93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b7b95:{NFSU2_TR(0x6b7b95);
u8 U[4];
w4(U+0,u32(0xaf40000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7b9a:{NFSU2_TR(0x6b7b9a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b7b9d:{NFSU2_TR(0x6b7b9d);
__builtin_memmove((R+4),(R+24),4);
}
B6b7b9f:{NFSU2_TR(0x6b7b9f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b7ba2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6b7ba2:L6b7ba2:{c.instructions+=2;NFSU2_TR(0x6b7ba2);
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
B6b7ba4:{NFSU2_TR(0x6b7ba4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b7bbe;}}
}
B6b7ba6:L6b7ba6:{c.instructions+=3;NFSU2_TR(0x6b7ba6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b7ba8:{NFSU2_TR(0x6b7ba8);
__builtin_memmove((R+4),(R+24),4);
}
B6b7baa:{NFSU2_TR(0x6b7baa);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b7badull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6b7bad:L6b7bad:{c.instructions+=2;NFSU2_TR(0x6b7bad);
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
B6b7baf:{NFSU2_TR(0x6b7baf);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b7bbe;}}
}
B6b7bb1:L6b7bb1:{c.instructions+=2;NFSU2_TR(0x6b7bb1);
__builtin_memmove((R+4),(R+24),4);
}
B6b7bb3:{NFSU2_TR(0x6b7bb3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b7bb8ull));
TAIL_STATIC(0x6ccd02u,6cc);
}
B6b7bb8:L6b7bb8:{c.instructions+=2;NFSU2_TR(0x6b7bb8);
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
B6b7bba:{NFSU2_TR(0x6b7bba);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b7bbe;}}
}
B6b7bbc:L6b7bbc:{c.instructions+=1;NFSU2_TR(0x6b7bbc);
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
B6b7bbe:L6b7bbe:{c.instructions+=5;NFSU2_TR(0x6b7bbe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b7bbf:{NFSU2_TR(0x6b7bbf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6b7bc0:{NFSU2_TR(0x6b7bc0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6b7bc1:{NFSU2_TR(0x6b7bc1);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6b7bc2:{NFSU2_TR(0x6b7bc2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6b7bc3:L6b7bc3:{c.instructions+=17;NFSU2_TR(0x6b7bc3);
__builtin_memmove((R+28),(R+28),4);
}
B6b7bc5:{NFSU2_TR(0x6b7bc5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7bc6:{NFSU2_TR(0x6b7bc6);
__builtin_memmove((R+20),(R+16),4);
}
B6b7bc8:{NFSU2_TR(0x6b7bc8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B6b7bcb:{NFSU2_TR(0x6b7bcb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7bcc:{NFSU2_TR(0x6b7bcc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7bcd:{NFSU2_TR(0x6b7bcd);
__builtin_memmove((R+24),(R+4),4);
}
B6b7bcf:{NFSU2_TR(0x6b7bcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b7bd5:{NFSU2_TR(0x6b7bd5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7bd6:{NFSU2_TR(0x6b7bd6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6b7bd8:{NFSU2_TR(0x6b7bd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b7bde:{NFSU2_TR(0x6b7bde);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xfffffull))));
}
B6b7be4:{NFSU2_TR(0x6b7be4);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffull))));
}
B6b7be9:{NFSU2_TR(0x6b7be9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x104ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b7bee:{NFSU2_TR(0x6b7bee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b7bf1:{NFSU2_TR(0x6b7bf1);
u8 U[4];
w4(U+0,u32(0x42ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7bf3:{NFSU2_TR(0x6b7bf3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b7cb6;}}
}
B6b7bf9:L6b7bf9:{c.instructions+=1;NFSU2_TR(0x6b7bf9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b7bfeull));
TAIL_STATIC(0x6d18eau,6d1);
}
B6b7bfe:L6b7bfe:{c.instructions+=3;NFSU2_TR(0x6b7bfe);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6b7c00:{NFSU2_TR(0x6b7c00);
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
B6b7c02:{NFSU2_TR(0x6b7c02);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b7d0f;}}
}
B6b7c08:L6b7c08:{c.instructions+=12;NFSU2_TR(0x6b7c08);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b7c0b:{NFSU2_TR(0x6b7c0b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b7c0d:{NFSU2_TR(0x6b7c0d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7c0e:{NFSU2_TR(0x6b7c0e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7c0f:{NFSU2_TR(0x6b7c0f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b7c12:{NFSU2_TR(0x6b7c12);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7c13:{NFSU2_TR(0x6b7c13);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b7c19:{NFSU2_TR(0x6b7c19);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b7c1c:{NFSU2_TR(0x6b7c1c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6b7c1e:{NFSU2_TR(0x6b7c1e);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6b7c21:{NFSU2_TR(0x6b7c21);
__builtin_memmove((R+4),(R+24),4);
}
B6b7c23:{NFSU2_TR(0x6b7c23);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b7c26ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6b7c26:L6b7c26:{c.instructions+=2;NFSU2_TR(0x6b7c26);
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
B6b7c28:{NFSU2_TR(0x6b7c28);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b7d0f;}}
}
B6b7c2e:L6b7c2e:{c.instructions+=7;NFSU2_TR(0x6b7c2e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b7c30:{NFSU2_TR(0x6b7c30);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7c31:{NFSU2_TR(0x6b7c31);
w4(R+12,u32(0xf0000ull));
}
B6b7c36:{NFSU2_TR(0x6b7c36);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7c37:{NFSU2_TR(0x6b7c37);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b7c3a:{NFSU2_TR(0x6b7c3a);
__builtin_memmove((R+4),(R+24),4);
}
B6b7c3c:{NFSU2_TR(0x6b7c3c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b7c3full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6b7c3f:L6b7c3f:{c.instructions+=2;NFSU2_TR(0x6b7c3f);
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
B6b7c41:{NFSU2_TR(0x6b7c41);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b7d0f;}}
}
B6b7c47:L6b7c47:{c.instructions+=13;NFSU2_TR(0x6b7c47);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b7c4d:{NFSU2_TR(0x6b7c4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b7c50:{NFSU2_TR(0x6b7c50);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b7c53:{NFSU2_TR(0x6b7c53);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b7c56:{NFSU2_TR(0x6b7c56);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7c57:{NFSU2_TR(0x6b7c57);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B6b7c5a:{NFSU2_TR(0x6b7c5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b7c5c:{NFSU2_TR(0x6b7c5c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b7c5f:{NFSU2_TR(0x6b7c5f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7c60:{NFSU2_TR(0x6b7c60);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6b7c62:{NFSU2_TR(0x6b7c62);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6b7c65:{NFSU2_TR(0x6b7c65);
__builtin_memmove((R+4),(R+24),4);
}
B6b7c67:{NFSU2_TR(0x6b7c67);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b7c6aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6b7c6a:L6b7c6a:{c.instructions+=2;NFSU2_TR(0x6b7c6a);
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
B6b7c6c:{NFSU2_TR(0x6b7c6c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b7d0f;}}
}
B6b7c72:L6b7c72:{c.instructions+=8;NFSU2_TR(0x6b7c72);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b7c74:{NFSU2_TR(0x6b7c74);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b7c77:{NFSU2_TR(0x6b7c77);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7c78:{NFSU2_TR(0x6b7c78);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7c79:{NFSU2_TR(0x6b7c79);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b7c7c:{NFSU2_TR(0x6b7c7c);
__builtin_memmove((R+4),(R+24),4);
}
B6b7c7e:{NFSU2_TR(0x6b7c7e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7c7f:{NFSU2_TR(0x6b7c7f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b7c82ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6b7c82:L6b7c82:{c.instructions+=2;NFSU2_TR(0x6b7c82);
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
B6b7c84:{NFSU2_TR(0x6b7c84);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b7d0f;}}
}
B6b7c8a:L6b7c8a:{c.instructions+=6;NFSU2_TR(0x6b7c8a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b7c8d:{NFSU2_TR(0x6b7c8d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b7c8f:{NFSU2_TR(0x6b7c8f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b7c92:{NFSU2_TR(0x6b7c92);
__builtin_memmove((R+4),(R+24),4);
}
B6b7c94:{NFSU2_TR(0x6b7c94);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b7c97:{NFSU2_TR(0x6b7c97);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b7c9aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6b7c9a:L6b7c9a:{c.instructions+=2;NFSU2_TR(0x6b7c9a);
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
B6b7c9c:{NFSU2_TR(0x6b7c9c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b7d0f;}}
}
B6b7c9e:L6b7c9e:{c.instructions+=3;NFSU2_TR(0x6b7c9e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b7ca0:{NFSU2_TR(0x6b7ca0);
__builtin_memmove((R+4),(R+24),4);
}
B6b7ca2:{NFSU2_TR(0x6b7ca2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b7ca5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6b7ca5:L6b7ca5:{c.instructions+=2;NFSU2_TR(0x6b7ca5);
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
B6b7ca7:{NFSU2_TR(0x6b7ca7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b7d0f;}}
}
B6b7ca9:L6b7ca9:{c.instructions+=2;NFSU2_TR(0x6b7ca9);
__builtin_memmove((R+4),(R+24),4);
}
B6b7cab:{NFSU2_TR(0x6b7cab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b7cb0ull));
TAIL_STATIC(0x6ccd02u,6cc);
}
B6b7cb0:L6b7cb0:{c.instructions+=2;NFSU2_TR(0x6b7cb0);
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
B6b7cb2:{NFSU2_TR(0x6b7cb2);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6b7d0d;}}
}
B6b7cb4:L6b7cb4:{c.instructions+=1;NFSU2_TR(0x6b7cb4);
{goto L6b7d0f;}
}
B6b7cb6:L6b7cb6:{c.instructions+=1;NFSU2_TR(0x6b7cb6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b7cbbull));
TAIL_STATIC(0x6d18eau,6d1);
}
B6b7cbb:L6b7cbb:{c.instructions+=3;NFSU2_TR(0x6b7cbb);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6b7cbd:{NFSU2_TR(0x6b7cbd);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B6b7cbf:{NFSU2_TR(0x6b7cbf);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b7d0f;}}
}
B6b7cc1:L6b7cc1:{c.instructions+=12;NFSU2_TR(0x6b7cc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b7cc4:{NFSU2_TR(0x6b7cc4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b7cc6:{NFSU2_TR(0x6b7cc6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7cc7:{NFSU2_TR(0x6b7cc7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7cc8:{NFSU2_TR(0x6b7cc8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b7ccb:{NFSU2_TR(0x6b7ccb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7ccc:{NFSU2_TR(0x6b7ccc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b7cd2:{NFSU2_TR(0x6b7cd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b7cd5:{NFSU2_TR(0x6b7cd5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6b7cd7:{NFSU2_TR(0x6b7cd7);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6b7cda:{NFSU2_TR(0x6b7cda);
__builtin_memmove((R+4),(R+24),4);
}
B6b7cdc:{NFSU2_TR(0x6b7cdc);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b7cdfull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6b7cdf:L6b7cdf:{c.instructions+=2;NFSU2_TR(0x6b7cdf);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B6b7ce1:{NFSU2_TR(0x6b7ce1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b7d0f;}}
}
B6b7ce3:L6b7ce3:{c.instructions+=6;NFSU2_TR(0x6b7ce3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b7ce5:{NFSU2_TR(0x6b7ce5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7ce6:{NFSU2_TR(0x6b7ce6);
u8 U[4];
w4(U+0,u32(0xf0000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7ceb:{NFSU2_TR(0x6b7ceb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b7cee:{NFSU2_TR(0x6b7cee);
__builtin_memmove((R+4),(R+24),4);
}
B6b7cf0:{NFSU2_TR(0x6b7cf0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b7cf3ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6b7cf3:L6b7cf3:{c.instructions+=2;NFSU2_TR(0x6b7cf3);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B6b7cf5:{NFSU2_TR(0x6b7cf5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b7d0f;}}
}
B6b7cf7:L6b7cf7:{c.instructions+=3;NFSU2_TR(0x6b7cf7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b7cf9:{NFSU2_TR(0x6b7cf9);
__builtin_memmove((R+4),(R+24),4);
}
B6b7cfb:{NFSU2_TR(0x6b7cfb);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b7cfeull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6b7cfe:L6b7cfe:{c.instructions+=2;NFSU2_TR(0x6b7cfe);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B6b7d00:{NFSU2_TR(0x6b7d00);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b7d0f;}}
}
B6b7d02:L6b7d02:{c.instructions+=2;NFSU2_TR(0x6b7d02);
__builtin_memmove((R+4),(R+24),4);
}
B6b7d04:{NFSU2_TR(0x6b7d04);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b7d09ull));
TAIL_STATIC(0x6ccd02u,6cc);
}
B6b7d09:L6b7d09:{c.instructions+=2;NFSU2_TR(0x6b7d09);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B6b7d0b:{NFSU2_TR(0x6b7d0b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b7d0f;}}
}
B6b7d0d:L6b7d0d:{c.instructions+=1;NFSU2_TR(0x6b7d0d);
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
B6b7d0f:L6b7d0f:{c.instructions+=5;NFSU2_TR(0x6b7d0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b7d10:{NFSU2_TR(0x6b7d10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6b7d11:{NFSU2_TR(0x6b7d11);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6b7d12:{NFSU2_TR(0x6b7d12);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6b7d13:{NFSU2_TR(0x6b7d13);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6b7d14:L6b7d14:{c.instructions+=21;NFSU2_TR(0x6b7d14);
__builtin_memmove((R+28),(R+28),4);
}
B6b7d16:{NFSU2_TR(0x6b7d16);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7d17:{NFSU2_TR(0x6b7d17);
__builtin_memmove((R+20),(R+16),4);
}
B6b7d19:{NFSU2_TR(0x6b7d19);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B6b7d1c:{NFSU2_TR(0x6b7d1c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7d1d:{NFSU2_TR(0x6b7d1d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7d1e:{NFSU2_TR(0x6b7d1e);
__builtin_memmove((R+24),(R+4),4);
}
B6b7d20:{NFSU2_TR(0x6b7d20);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b7d26:{NFSU2_TR(0x6b7d26);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6b7d28:{NFSU2_TR(0x6b7d28);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b7d2b:{NFSU2_TR(0x6b7d2b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b7d2d:{NFSU2_TR(0x6b7d2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b7d30:{NFSU2_TR(0x6b7d30);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7d31:{NFSU2_TR(0x6b7d31);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6b7d34:{NFSU2_TR(0x6b7d34);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b7d3a:{NFSU2_TR(0x6b7d3a);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffull))));
}
B6b7d3f:{NFSU2_TR(0x6b7d3f);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xfffffull))));
}
B6b7d45:{NFSU2_TR(0x6b7d45);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x104ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b7d4a:{NFSU2_TR(0x6b7d4a);
__builtin_memmove((R+4),(R+24),4);
}
B6b7d4c:{NFSU2_TR(0x6b7d4c);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7d4e:{NFSU2_TR(0x6b7d4e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b7e17;}}
}
B6b7d54:L6b7d54:{c.instructions+=1;NFSU2_TR(0x6b7d54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b7d59ull));
TAIL_STATIC(0x6d18eau,6d1);
}
B6b7d59:L6b7d59:{c.instructions+=2;NFSU2_TR(0x6b7d59);
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
B6b7d5b:{NFSU2_TR(0x6b7d5b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b7e12;}}
}
B6b7d61:L6b7d61:{c.instructions+=9;NFSU2_TR(0x6b7d61);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b7d63:{NFSU2_TR(0x6b7d63);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b7d66:{NFSU2_TR(0x6b7d66);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7d67:{NFSU2_TR(0x6b7d67);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7d69:{NFSU2_TR(0x6b7d69);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b7d6c:{NFSU2_TR(0x6b7d6c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7d6d:{NFSU2_TR(0x6b7d6d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7d6e:{NFSU2_TR(0x6b7d6e);
__builtin_memmove((R+4),(R+24),4);
}
B6b7d70:{NFSU2_TR(0x6b7d70);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b7d73ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6b7d73:L6b7d73:{c.instructions+=2;NFSU2_TR(0x6b7d73);
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
B6b7d75:{NFSU2_TR(0x6b7d75);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b7e12;}}
}
B6b7d7b:L6b7d7b:{c.instructions+=9;NFSU2_TR(0x6b7d7b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b7d7e:{NFSU2_TR(0x6b7d7e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b7d80:{NFSU2_TR(0x6b7d80);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b7d83:{NFSU2_TR(0x6b7d83);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7d84:{NFSU2_TR(0x6b7d84);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b7d8a:{NFSU2_TR(0x6b7d8a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7d8b:{NFSU2_TR(0x6b7d8b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b7d8e:{NFSU2_TR(0x6b7d8e);
__builtin_memmove((R+4),(R+24),4);
}
B6b7d90:{NFSU2_TR(0x6b7d90);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b7d93ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6b7d93:L6b7d93:{c.instructions+=2;NFSU2_TR(0x6b7d93);
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
B6b7d95:{NFSU2_TR(0x6b7d95);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b7e12;}}
}
B6b7d97:L6b7d97:{c.instructions+=6;NFSU2_TR(0x6b7d97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b7d99:{NFSU2_TR(0x6b7d99);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7d9b:{NFSU2_TR(0x6b7d9b);
u8 U[4];
w4(U+0,u32(0x70000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7da0:{NFSU2_TR(0x6b7da0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b7da3:{NFSU2_TR(0x6b7da3);
__builtin_memmove((R+4),(R+24),4);
}
B6b7da5:{NFSU2_TR(0x6b7da5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b7da8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6b7da8:L6b7da8:{c.instructions+=2;NFSU2_TR(0x6b7da8);
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
B6b7daa:{NFSU2_TR(0x6b7daa);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b7e12;}}
}
B6b7dac:L6b7dac:{c.instructions+=12;NFSU2_TR(0x6b7dac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b7db2:{NFSU2_TR(0x6b7db2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b7db5:{NFSU2_TR(0x6b7db5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b7db8:{NFSU2_TR(0x6b7db8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b7dba:{NFSU2_TR(0x6b7dba);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b7dbd:{NFSU2_TR(0x6b7dbd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7dbe:{NFSU2_TR(0x6b7dbe);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b7dc1:{NFSU2_TR(0x6b7dc1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7dc2:{NFSU2_TR(0x6b7dc2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6b7dc4:{NFSU2_TR(0x6b7dc4);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6b7dc7:{NFSU2_TR(0x6b7dc7);
__builtin_memmove((R+4),(R+24),4);
}
B6b7dc9:{NFSU2_TR(0x6b7dc9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b7dccull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6b7dcc:L6b7dcc:{c.instructions+=2;NFSU2_TR(0x6b7dcc);
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
B6b7dce:{NFSU2_TR(0x6b7dce);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b7e12;}}
}
B6b7dd0:L6b7dd0:{c.instructions+=8;NFSU2_TR(0x6b7dd0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b7dd2:{NFSU2_TR(0x6b7dd2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b7dd5:{NFSU2_TR(0x6b7dd5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7dd6:{NFSU2_TR(0x6b7dd6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b7dd9:{NFSU2_TR(0x6b7dd9);
__builtin_memmove((R+4),(R+24),4);
}
B6b7ddb:{NFSU2_TR(0x6b7ddb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7ddc:{NFSU2_TR(0x6b7ddc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7ddd:{NFSU2_TR(0x6b7ddd);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b7de0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6b7de0:L6b7de0:{c.instructions+=2;NFSU2_TR(0x6b7de0);
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
B6b7de2:{NFSU2_TR(0x6b7de2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b7e12;}}
}
B6b7de4:L6b7de4:{c.instructions+=6;NFSU2_TR(0x6b7de4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b7de7:{NFSU2_TR(0x6b7de7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b7de9:{NFSU2_TR(0x6b7de9);
u8 U[4];
w4(U+0,u32(0xe40000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7dee:{NFSU2_TR(0x6b7dee);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b7df1:{NFSU2_TR(0x6b7df1);
__builtin_memmove((R+4),(R+24),4);
}
B6b7df3:{NFSU2_TR(0x6b7df3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b7df6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6b7df6:L6b7df6:{c.instructions+=2;NFSU2_TR(0x6b7df6);
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
B6b7df8:{NFSU2_TR(0x6b7df8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b7e12;}}
}
B6b7dfa:L6b7dfa:{c.instructions+=3;NFSU2_TR(0x6b7dfa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b7dfc:{NFSU2_TR(0x6b7dfc);
__builtin_memmove((R+4),(R+24),4);
}
B6b7dfe:{NFSU2_TR(0x6b7dfe);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b7e01ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6b7e01:L6b7e01:{c.instructions+=2;NFSU2_TR(0x6b7e01);
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
B6b7e03:{NFSU2_TR(0x6b7e03);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b7e12;}}
}
B6b7e05:L6b7e05:{c.instructions+=2;NFSU2_TR(0x6b7e05);
__builtin_memmove((R+4),(R+24),4);
}
B6b7e07:{NFSU2_TR(0x6b7e07);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b7e0cull));
TAIL_STATIC(0x6ccd02u,6cc);
}
B6b7e0c:L6b7e0c:{c.instructions+=2;NFSU2_TR(0x6b7e0c);
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
B6b7e0e:{NFSU2_TR(0x6b7e0e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b7e12;}}
}
B6b7e10:L6b7e10:{c.instructions+=1;NFSU2_TR(0x6b7e10);
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
B6b7e12:L6b7e12:{c.instructions+=5;NFSU2_TR(0x6b7e12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b7e13:{NFSU2_TR(0x6b7e13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6b7e14:{NFSU2_TR(0x6b7e14);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6b7e15:{NFSU2_TR(0x6b7e15);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6b7e16:{NFSU2_TR(0x6b7e16);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6b7e17:L6b7e17:{c.instructions+=1;NFSU2_TR(0x6b7e17);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b7e1cull));
TAIL_STATIC(0x6d18eau,6d1);
}
B6b7e1c:L6b7e1c:{c.instructions+=2;NFSU2_TR(0x6b7e1c);
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
B6b7e1e:{NFSU2_TR(0x6b7e1e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b7e12u);}goto L6b7e12;}}
}
B6b7e20:L6b7e20:{c.instructions+=9;NFSU2_TR(0x6b7e20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b7e22:{NFSU2_TR(0x6b7e22);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b7e25:{NFSU2_TR(0x6b7e25);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7e26:{NFSU2_TR(0x6b7e26);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7e28:{NFSU2_TR(0x6b7e28);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b7e2b:{NFSU2_TR(0x6b7e2b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7e2c:{NFSU2_TR(0x6b7e2c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7e2d:{NFSU2_TR(0x6b7e2d);
__builtin_memmove((R+4),(R+24),4);
}
B6b7e2f:{NFSU2_TR(0x6b7e2f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b7e32ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6b7e32:L6b7e32:{c.instructions+=2;NFSU2_TR(0x6b7e32);
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
B6b7e34:{NFSU2_TR(0x6b7e34);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b7e12u);}goto L6b7e12;}}
}
B6b7e36:L6b7e36:{c.instructions+=9;NFSU2_TR(0x6b7e36);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b7e39:{NFSU2_TR(0x6b7e39);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b7e3b:{NFSU2_TR(0x6b7e3b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b7e3e:{NFSU2_TR(0x6b7e3e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7e3f:{NFSU2_TR(0x6b7e3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b7e45:{NFSU2_TR(0x6b7e45);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7e46:{NFSU2_TR(0x6b7e46);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b7e49:{NFSU2_TR(0x6b7e49);
__builtin_memmove((R+4),(R+24),4);
}
B6b7e4b:{NFSU2_TR(0x6b7e4b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b7e4eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6b7e4e:L6b7e4e:{c.instructions+=2;NFSU2_TR(0x6b7e4e);
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
B6b7e50:{NFSU2_TR(0x6b7e50);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b7e12u);}goto L6b7e12;}}
}
B6b7e52:L6b7e52:{c.instructions+=6;NFSU2_TR(0x6b7e52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b7e54:{NFSU2_TR(0x6b7e54);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7e56:{NFSU2_TR(0x6b7e56);
u8 U[4];
w4(U+0,u32(0xf0000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7e5b:{NFSU2_TR(0x6b7e5b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b7e5e:{NFSU2_TR(0x6b7e5e);
__builtin_memmove((R+4),(R+24),4);
}
B6b7e60:{NFSU2_TR(0x6b7e60);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b7e63ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6b7e63:L6b7e63:{c.instructions+=1;NFSU2_TR(0x6b7e63);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b7df6u);}goto L6b7df6;}
}
B6b7e65:L6b7e65:{c.instructions+=7;NFSU2_TR(0x6b7e65);
__builtin_memmove((R+28),(R+28),4);
}
B6b7e67:{NFSU2_TR(0x6b7e67);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7e68:{NFSU2_TR(0x6b7e68);
__builtin_memmove((R+20),(R+16),4);
}
B6b7e6a:{NFSU2_TR(0x6b7e6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b7e70:{NFSU2_TR(0x6b7e70);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
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
B6b7e74:{NFSU2_TR(0x6b7e74);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b7e77:{NFSU2_TR(0x6b7e77);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b7e7e;}}
}
B6b7e79:L6b7e79:{c.instructions+=1;NFSU2_TR(0x6b7e79);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x40000000ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6b7e7e:L6b7e7e:{c.instructions+=2;NFSU2_TR(0x6b7e7e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6b7e7f:{NFSU2_TR(0x6b7e7f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6b7e82:L6b7e82:{c.instructions+=5;NFSU2_TR(0x6b7e82);
__builtin_memmove((R+28),(R+28),4);
}
B6b7e84:{NFSU2_TR(0x6b7e84);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7e85:{NFSU2_TR(0x6b7e85);
__builtin_memmove((R+24),(R+4),4);
}
B6b7e87:{NFSU2_TR(0x6b7e87);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b7e8d:{NFSU2_TR(0x6b7e8d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b7e92ull));
TAIL_STATIC(0x6cfb73u,6cf);
}
B6b7e92:L6b7e92:{c.instructions+=2;NFSU2_TR(0x6b7e92);
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
B6b7e94:{NFSU2_TR(0x6b7e94);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b7ea3;}}
}
B6b7e96:L6b7e96:{c.instructions+=2;NFSU2_TR(0x6b7e96);
__builtin_memmove((R+4),(R+24),4);
}
B6b7e98:{NFSU2_TR(0x6b7e98);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b7e9dull));
TAIL_STATIC(0x6ccd02u,6cc);
}
B6b7e9d:L6b7e9d:{c.instructions+=2;NFSU2_TR(0x6b7e9d);
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
B6b7e9f:{NFSU2_TR(0x6b7e9f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b7ea3;}}
}
B6b7ea1:L6b7ea1:{c.instructions+=1;NFSU2_TR(0x6b7ea1);
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
B6b7ea3:L6b7ea3:{c.instructions+=2;NFSU2_TR(0x6b7ea3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6b7ea4:{NFSU2_TR(0x6b7ea4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6b7ea5:L6b7ea5:{c.instructions+=9;NFSU2_TR(0x6b7ea5);
__builtin_memmove((R+28),(R+28),4);
}
B6b7ea7:{NFSU2_TR(0x6b7ea7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7ea8:{NFSU2_TR(0x6b7ea8);
__builtin_memmove((R+20),(R+16),4);
}
B6b7eaa:{NFSU2_TR(0x6b7eaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b7ead:{NFSU2_TR(0x6b7ead);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b7eb0:{NFSU2_TR(0x6b7eb0);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x6dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B6b7eb4:{NFSU2_TR(0x6b7eb4);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B6b7eb9:{NFSU2_TR(0x6b7eb9);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b7ebc:{NFSU2_TR(0x6b7ebc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b7eca;}}
}
B6b7ebe:L6b7ebe:{c.instructions+=2;NFSU2_TR(0x6b7ebe);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
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
B6b7ec1:{NFSU2_TR(0x6b7ec1);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6b7eeb;}}
}
B6b7ec3:L6b7ec3:{c.instructions+=3;NFSU2_TR(0x6b7ec3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b7ec6:{NFSU2_TR(0x6b7ec6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6b7ec8:{NFSU2_TR(0x6b7ec8);
{goto L6b7ee7;}
}
B6b7eca:L6b7eca:{c.instructions+=2;NFSU2_TR(0x6b7eca);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b7ecd:{NFSU2_TR(0x6b7ecd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b7ed9;}}
}
B6b7ecf:L6b7ecf:{c.instructions+=2;NFSU2_TR(0x6b7ecf);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
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
B6b7ed2:{NFSU2_TR(0x6b7ed2);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6b7eeb;}}
}
B6b7ed4:L6b7ed4:{c.instructions+=2;NFSU2_TR(0x6b7ed4);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x2ull))));
}
B6b7ed7:{NFSU2_TR(0x6b7ed7);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b7ec3u);}goto L6b7ec3;}
}
B6b7ed9:L6b7ed9:{c.instructions+=2;NFSU2_TR(0x6b7ed9);
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
B6b7edc:{NFSU2_TR(0x6b7edc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b7eeb;}}
}
B6b7ede:L6b7ede:{c.instructions+=2;NFSU2_TR(0x6b7ede);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b7ee1:{NFSU2_TR(0x6b7ee1);
u8 U[4];
w4(U+0,u32(0xcull));
s4(u32(r4(R+0)),r4(U+0));
}
B6b7ee7:L6b7ee7:{c.instructions+=2;NFSU2_TR(0x6b7ee7);
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
B6b7ee9:{NFSU2_TR(0x6b7ee9);
{goto L6b7ef0;}
}
B6b7eeb:L6b7eeb:{c.instructions+=1;NFSU2_TR(0x6b7eeb);
w4(R+0,u32(0x80004005ull));
}
B6b7ef0:L6b7ef0:{c.instructions+=2;NFSU2_TR(0x6b7ef0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6b7ef1:{NFSU2_TR(0x6b7ef1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6b7ef4:L6b7ef4:{c.instructions+=14;NFSU2_TR(0x6b7ef4);
__builtin_memmove((R+28),(R+28),4);
}
B6b7ef6:{NFSU2_TR(0x6b7ef6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7ef7:{NFSU2_TR(0x6b7ef7);
__builtin_memmove((R+20),(R+16),4);
}
B6b7ef9:{NFSU2_TR(0x6b7ef9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b7efc:{NFSU2_TR(0x6b7efc);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b7eff:{NFSU2_TR(0x6b7eff);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x6dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B6b7f03:{NFSU2_TR(0x6b7f03);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7f04:{NFSU2_TR(0x6b7f04);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6b7f07:{NFSU2_TR(0x6b7f07);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6b7f09:{NFSU2_TR(0x6b7f09);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6b7f0b:{NFSU2_TR(0x6b7f0b);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B6b7f10:{NFSU2_TR(0x6b7f10);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6b7f11:{NFSU2_TR(0x6b7f11);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b7f13:{NFSU2_TR(0x6b7f13);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b7f1a;}}
}
B6b7f15:L6b7f15:{c.instructions+=2;NFSU2_TR(0x6b7f15);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
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
B6b7f18:{NFSU2_TR(0x6b7f18);
{goto L6b7f24;}
}
B6b7f1a:L6b7f1a:{c.instructions+=4;NFSU2_TR(0x6b7f1a);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7f1c:{NFSU2_TR(0x6b7f1c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6b7f1d:{NFSU2_TR(0x6b7f1d);
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
B6b7f1f:{NFSU2_TR(0x6b7f1f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b7f2f;}}
}
B6b7f21:L6b7f21:{c.instructions+=1;NFSU2_TR(0x6b7f21);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
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
B6b7f24:L6b7f24:{c.instructions+=1;NFSU2_TR(0x6b7f24);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6b7f2f;}}
}
B6b7f26:L6b7f26:{c.instructions+=4;NFSU2_TR(0x6b7f26);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b7f29:{NFSU2_TR(0x6b7f29);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6b7f2b:{NFSU2_TR(0x6b7f2b);
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
B6b7f2d:{NFSU2_TR(0x6b7f2d);
{goto L6b7f34;}
}
B6b7f2f:L6b7f2f:{c.instructions+=1;NFSU2_TR(0x6b7f2f);
w4(R+0,u32(0x80004005ull));
}
B6b7f34:L6b7f34:{c.instructions+=3;NFSU2_TR(0x6b7f34);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6b7f35:{NFSU2_TR(0x6b7f35);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6b7f36:{NFSU2_TR(0x6b7f36);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6b7f39:L6b7f39:{c.instructions+=20;NFSU2_TR(0x6b7f39);
__builtin_memmove((R+28),(R+28),4);
}
B6b7f3b:{NFSU2_TR(0x6b7f3b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7f3c:{NFSU2_TR(0x6b7f3c);
__builtin_memmove((R+20),(R+16),4);
}
B6b7f3e:{NFSU2_TR(0x6b7f3e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x34ull))));
}
B6b7f41:{NFSU2_TR(0x6b7f41);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7f42:{NFSU2_TR(0x6b7f42);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7f43:{NFSU2_TR(0x6b7f43);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7f44:{NFSU2_TR(0x6b7f44);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b7f47:{NFSU2_TR(0x6b7f47);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b7f4a:{NFSU2_TR(0x6b7f4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b7f4d:{NFSU2_TR(0x6b7f4d);
u8 U[4];
w4(U+0,u32(0x1full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7f4f:{NFSU2_TR(0x6b7f4f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7f50:{NFSU2_TR(0x6b7f50);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b7f53:{NFSU2_TR(0x6b7f53);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b7f56:{NFSU2_TR(0x6b7f56);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6b7f58:{NFSU2_TR(0x6b7f58);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7f59:{NFSU2_TR(0x6b7f59);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b7f5c:{NFSU2_TR(0x6b7f5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b7f5f:{NFSU2_TR(0x6b7f5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b7f62:{NFSU2_TR(0x6b7f62);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b7f67ull));
TAIL_STATIC(0x75c840u,75c);
}
B6b7f67:L6b7f67:{c.instructions+=5;NFSU2_TR(0x6b7f67);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6b7f6a:{NFSU2_TR(0x6b7f6a);
u8 U[10];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+8),u8(0x0ull)));
w1(U+9,u8(u32(r1(U+8))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B6b7f6e:{NFSU2_TR(0x6b7f6e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffebull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6b7f72:{NFSU2_TR(0x6b7f72);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((R+12),(U+0),4);
}
B6b7f75:{NFSU2_TR(0x6b7f75);
if(r1(R+518)){{goto L6b7f9c;}}
}
B6b7f77:L6b7f77:{c.instructions+=3;NFSU2_TR(0x6b7f77);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B6b7f7a:{NFSU2_TR(0x6b7f7a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7f7b:{NFSU2_TR(0x6b7f7b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b7f80ull));
TAIL_STATIC(0x75defau,75d);
}
B6b7f80:L6b7f80:{c.instructions+=3;NFSU2_TR(0x6b7f80);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b7f82:{NFSU2_TR(0x6b7f82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b7f83:{NFSU2_TR(0x6b7f83);
if(r1(R+518)){{goto L6b7f8b;}}
}
B6b7f85:L6b7f85:{c.instructions+=3;NFSU2_TR(0x6b7f85);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6b7f86:{NFSU2_TR(0x6b7f86);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
__builtin_memmove((U+4),(U+0),1);
w1(R+512,u8((r1(U+4))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+4),u8(0x0ull)));
w1(U+5,u8(u32(r1(U+4))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+5))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
w1(U+1,u8(u32(r1(U+5))&u32(u8(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r1(U+1)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B6b7f89:{NFSU2_TR(0x6b7f89);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b7f77u);}goto L6b7f77;}}
}
B6b7f8b:L6b7f8b:{c.instructions+=2;NFSU2_TR(0x6b7f8b);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
__builtin_memmove((U+4),(U+0),1);
w1(R+512,u8((r1(U+4))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+4),u8(0x0ull)));
w1(U+5,u8(u32(r1(U+4))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+5))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
w1(U+1,u8(u32(r1(U+5))&u32(u8(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r1(U+1)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B6b7f8e:{NFSU2_TR(0x6b7f8e);
if(r1(R+518)){{goto L6b7f9c;}}
}
B6b7f90:L6b7f90:{c.instructions+=2;NFSU2_TR(0x6b7f90);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7f91:{NFSU2_TR(0x6b7f91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b7f96ull));
TAIL_STATIC(0x75d65bu,75d);
}
B6b7f96:L6b7f96:{c.instructions+=3;NFSU2_TR(0x6b7f96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b7f97:{NFSU2_TR(0x6b7f97);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b7f9a:{NFSU2_TR(0x6b7f9a);
{goto L6b7fa0;}
}
B6b7f9c:L6b7f9c:{c.instructions+=1;NFSU2_TR(0x6b7f9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b7fa0:L6b7fa0:{c.instructions+=2;NFSU2_TR(0x6b7fa0);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B6b7fa3:{NFSU2_TR(0x6b7fa3);
if(r1(R+518)){{goto L6b7fa9;}}
}
B6b7fa5:L6b7fa5:{c.instructions+=2;NFSU2_TR(0x6b7fa5);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+12)),r1(U+0));
}
B6b7fa8:{NFSU2_TR(0x6b7fa8);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6b7fa9:L6b7fa9:{c.instructions+=3;NFSU2_TR(0x6b7fa9);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
__builtin_memmove((R+0),(U+0),1);
}
B6b7fab:{NFSU2_TR(0x6b7fab);
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
B6b7fad:{NFSU2_TR(0x6b7fad);
if(r1(R+518)){{goto L6b7fcf;}}
}
B6b7faf:L6b7faf:{c.instructions+=3;NFSU2_TR(0x6b7faf);
w4(R+0,u32(s32(s8(r1(R+0)))));
}
B6b7fb2:{NFSU2_TR(0x6b7fb2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b7fb3:{NFSU2_TR(0x6b7fb3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b7fb8ull));
TAIL_STATIC(0x75df39u,75d);
}
B6b7fb8:L6b7fb8:{c.instructions+=3;NFSU2_TR(0x6b7fb8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b7fba:{NFSU2_TR(0x6b7fba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b7fbb:{NFSU2_TR(0x6b7fbb);
if(r1(R+518)){{goto L6b7fc4;}}
}
B6b7fbd:L6b7fbd:{c.instructions+=4;NFSU2_TR(0x6b7fbd);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6b7fbe:{NFSU2_TR(0x6b7fbe);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
__builtin_memmove((R+0),(U+0),1);
}
B6b7fc0:{NFSU2_TR(0x6b7fc0);
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
B6b7fc2:{NFSU2_TR(0x6b7fc2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b7fafu);}goto L6b7faf;}}
}
B6b7fc4:L6b7fc4:{c.instructions+=2;NFSU2_TR(0x6b7fc4);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B6b7fc7:{NFSU2_TR(0x6b7fc7);
if(r1(R+518)){{goto L6b7fcf;}}
}
B6b7fc9:L6b7fc9:{c.instructions+=2;NFSU2_TR(0x6b7fc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b7fcd:{NFSU2_TR(0x6b7fcd);
{goto L6b7fd8;}
}
B6b7fcf:L6b7fcf:{c.instructions+=3;NFSU2_TR(0x6b7fcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b7fd2:{NFSU2_TR(0x6b7fd2);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B6b7fd5:{NFSU2_TR(0x6b7fd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b7fd8:L6b7fd8:{c.instructions+=4;NFSU2_TR(0x6b7fd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b7fdb:{NFSU2_TR(0x6b7fdb);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b7fde:{NFSU2_TR(0x6b7fde);
w4(R+12,u32(0x1196ull));
}
B6b7fe3:{NFSU2_TR(0x6b7fe3);
if(r1(R+518)){TAIL_STATIC(0x6b8032u,6b8);}
}
B6b7fe5:L6b7fe5:{c.instructions+=6;NFSU2_TR(0x6b7fe5);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B6b7fe9:{NFSU2_TR(0x6b7fe9);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B6b7fee:{NFSU2_TR(0x6b7fee);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b7ff1:{NFSU2_TR(0x6b7ff1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b7ff4:{NFSU2_TR(0x6b7ff4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b7ff7:{NFSU2_TR(0x6b7ff7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6b82b2u,6b8);}
}
B6b7ffd:L6b7ffd:{c.instructions+=1;NFSU2_TR(0x6b7ffd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
TAIL_STATIC(0x6b8000u,6b8);
}
XIT:NFSU2_TR_EXIT(0x6b7,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
