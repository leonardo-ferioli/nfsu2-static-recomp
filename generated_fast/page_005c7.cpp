#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_48b(u8* __restrict R,Cpu& c);
u32 body_490(u8* __restrict R,Cpu& c);
u32 body_5bb(u8* __restrict R,Cpu& c);
u32 body_5bc(u8* __restrict R,Cpu& c);
u32 body_5bd(u8* __restrict R,Cpu& c);
u32 body_5c5(u8* __restrict R,Cpu& c);
u32 body_5c6(u8* __restrict R,Cpu& c);
u32 body_5c8(u8* __restrict R,Cpu& c);
u32 body_5cf(u8* __restrict R,Cpu& c);
u32 body_5db(u8* __restrict R,Cpu& c);
u32 body_614(u8* __restrict R,Cpu& c);
u32 body_63c(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x5c7,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x5c7,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_5c7(u8* __restrict R,Cpu& c);
u32 page_5c7(Cpu& c){return body_5c7(c.regs.data(),c);}
__attribute__((noinline)) u32 body_5c7(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x5c7001:goto L5c7001;
case 0x5c7003:c.instructions+=6;goto B5c7003;
case 0x5c7006:c.instructions+=5;goto B5c7006;
case 0x5c7009:c.instructions+=4;goto B5c7009;
case 0x5c700a:c.instructions+=3;goto B5c700a;
case 0x5c700d:c.instructions+=2;goto B5c700d;
case 0x5c7010:c.instructions+=1;goto B5c7010;
case 0x5c7012:goto L5c7012;
case 0x5c7013:c.instructions+=2;goto B5c7013;
case 0x5c7014:c.instructions+=1;goto B5c7014;
case 0x5c7019:goto L5c7019;
case 0x5c701c:c.instructions+=1;goto B5c701c;
case 0x5c7021:goto L5c7021;
case 0x5c7025:c.instructions+=3;goto B5c7025;
case 0x5c7026:c.instructions+=2;goto B5c7026;
case 0x5c7027:c.instructions+=1;goto B5c7027;
case 0x5c7029:goto L5c7029;
case 0x5c702c:c.instructions+=9;goto B5c702c;
case 0x5c702e:c.instructions+=8;goto B5c702e;
case 0x5c7030:c.instructions+=7;goto B5c7030;
case 0x5c7037:c.instructions+=6;goto B5c7037;
case 0x5c7038:c.instructions+=5;goto B5c7038;
case 0x5c703b:c.instructions+=4;goto B5c703b;
case 0x5c7041:c.instructions+=3;goto B5c7041;
case 0x5c7042:c.instructions+=2;goto B5c7042;
case 0x5c7043:c.instructions+=1;goto B5c7043;
case 0x5c7049:goto L5c7049;
case 0x5c704f:c.instructions+=5;goto B5c704f;
case 0x5c7055:c.instructions+=4;goto B5c7055;
case 0x5c7058:c.instructions+=3;goto B5c7058;
case 0x5c705a:c.instructions+=2;goto B5c705a;
case 0x5c705b:c.instructions+=1;goto B5c705b;
case 0x5c7061:goto L5c7061;
case 0x5c7066:c.instructions+=8;goto B5c7066;
case 0x5c7068:c.instructions+=7;goto B5c7068;
case 0x5c706a:c.instructions+=6;goto B5c706a;
case 0x5c706e:c.instructions+=5;goto B5c706e;
case 0x5c706f:c.instructions+=4;goto B5c706f;
case 0x5c7071:c.instructions+=3;goto B5c7071;
case 0x5c7073:c.instructions+=2;goto B5c7073;
case 0x5c7074:c.instructions+=1;goto B5c7074;
case 0x5c707a:goto L5c707a;
case 0x5c707d:c.instructions+=3;goto B5c707d;
case 0x5c707f:c.instructions+=2;goto B5c707f;
case 0x5c7080:c.instructions+=1;goto B5c7080;
case 0x5c7086:goto L5c7086;
case 0x5c7088:c.instructions+=2;goto B5c7088;
case 0x5c708a:c.instructions+=1;goto B5c708a;
case 0x5c708d:goto L5c708d;
case 0x5c7090:c.instructions+=3;goto B5c7090;
case 0x5c7092:c.instructions+=2;goto B5c7092;
case 0x5c7093:c.instructions+=1;goto B5c7093;
case 0x5c7099:goto L5c7099;
case 0x5c709f:c.instructions+=2;goto B5c709f;
case 0x5c70a5:c.instructions+=1;goto B5c70a5;
case 0x5c70aa:goto L5c70aa;
case 0x5c70ad:c.instructions+=6;goto B5c70ad;
case 0x5c70b2:c.instructions+=5;goto B5c70b2;
case 0x5c70b4:c.instructions+=4;goto B5c70b4;
case 0x5c70b5:c.instructions+=3;goto B5c70b5;
case 0x5c70b6:c.instructions+=2;goto B5c70b6;
case 0x5c70b7:c.instructions+=1;goto B5c70b7;
case 0x5c70bd:goto L5c70bd;
case 0x5c70c0:c.instructions+=5;goto B5c70c0;
case 0x5c70c5:c.instructions+=4;goto B5c70c5;
case 0x5c70c7:c.instructions+=3;goto B5c70c7;
case 0x5c70c8:c.instructions+=2;goto B5c70c8;
case 0x5c70c9:c.instructions+=1;goto B5c70c9;
case 0x5c70cf:goto L5c70cf;
case 0x5c70d2:c.instructions+=13;goto B5c70d2;
case 0x5c70d5:c.instructions+=12;goto B5c70d5;
case 0x5c70d9:c.instructions+=11;goto B5c70d9;
case 0x5c70dd:c.instructions+=10;goto B5c70dd;
case 0x5c70e2:c.instructions+=9;goto B5c70e2;
case 0x5c70e6:c.instructions+=8;goto B5c70e6;
case 0x5c70e7:c.instructions+=7;goto B5c70e7;
case 0x5c70eb:c.instructions+=6;goto B5c70eb;
case 0x5c70ef:c.instructions+=5;goto B5c70ef;
case 0x5c70f7:c.instructions+=4;goto B5c70f7;
case 0x5c70ff:c.instructions+=3;goto B5c70ff;
case 0x5c7101:c.instructions+=2;goto B5c7101;
case 0x5c7102:c.instructions+=1;goto B5c7102;
case 0x5c7108:goto L5c7108;
case 0x5c710e:c.instructions+=5;goto B5c710e;
case 0x5c710f:c.instructions+=4;goto B5c710f;
case 0x5c7115:c.instructions+=3;goto B5c7115;
case 0x5c7116:c.instructions+=2;goto B5c7116;
case 0x5c711c:c.instructions+=1;goto B5c711c;
case 0x5c7120:goto L5c7120;
case 0x5c7124:c.instructions+=7;goto B5c7124;
case 0x5c7128:c.instructions+=6;goto B5c7128;
case 0x5c712a:c.instructions+=5;goto B5c712a;
case 0x5c712f:c.instructions+=4;goto B5c712f;
case 0x5c7131:c.instructions+=3;goto B5c7131;
case 0x5c7132:c.instructions+=2;goto B5c7132;
case 0x5c7133:c.instructions+=1;goto B5c7133;
case 0x5c7138:goto L5c7138;
case 0x5c713b:c.instructions+=1;goto B5c713b;
case 0x5c7140:goto L5c7140;
case 0x5c7141:c.instructions+=12;goto B5c7141;
case 0x5c7143:c.instructions+=11;goto B5c7143;
case 0x5c7146:c.instructions+=10;goto B5c7146;
case 0x5c714c:c.instructions+=9;goto B5c714c;
case 0x5c714d:c.instructions+=8;goto B5c714d;
case 0x5c714e:c.instructions+=7;goto B5c714e;
case 0x5c7151:c.instructions+=6;goto B5c7151;
case 0x5c7153:c.instructions+=5;goto B5c7153;
case 0x5c7154:c.instructions+=4;goto B5c7154;
case 0x5c715b:c.instructions+=3;goto B5c715b;
case 0x5c715c:c.instructions+=2;goto B5c715c;
case 0x5c715d:c.instructions+=1;goto B5c715d;
case 0x5c7160:goto L5c7160;
case 0x5c7165:c.instructions+=5;goto B5c7165;
case 0x5c7167:c.instructions+=4;goto B5c7167;
case 0x5c7168:c.instructions+=3;goto B5c7168;
case 0x5c716a:c.instructions+=2;goto B5c716a;
case 0x5c716b:c.instructions+=1;goto B5c716b;
case 0x5c7171:goto L5c7171;
case 0x5c7176:c.instructions+=4;goto B5c7176;
case 0x5c7178:c.instructions+=3;goto B5c7178;
case 0x5c717a:c.instructions+=2;goto B5c717a;
case 0x5c717b:c.instructions+=1;goto B5c717b;
case 0x5c7181:goto L5c7181;
case 0x5c7184:c.instructions+=3;goto B5c7184;
case 0x5c7186:c.instructions+=2;goto B5c7186;
case 0x5c718c:c.instructions+=1;goto B5c718c;
case 0x5c718e:goto L5c718e;
case 0x5c7194:goto L5c7194;
case 0x5c719a:c.instructions+=3;goto B5c719a;
case 0x5c719c:c.instructions+=2;goto B5c719c;
case 0x5c719e:c.instructions+=1;goto B5c719e;
case 0x5c71a1:goto L5c71a1;
case 0x5c71a4:c.instructions+=5;goto B5c71a4;
case 0x5c71a9:c.instructions+=4;goto B5c71a9;
case 0x5c71ab:c.instructions+=3;goto B5c71ab;
case 0x5c71ac:c.instructions+=2;goto B5c71ac;
case 0x5c71ad:c.instructions+=1;goto B5c71ad;
case 0x5c71b3:goto L5c71b3;
case 0x5c71b6:c.instructions+=6;goto B5c71b6;
case 0x5c71b8:c.instructions+=5;goto B5c71b8;
case 0x5c71ba:c.instructions+=4;goto B5c71ba;
case 0x5c71be:c.instructions+=3;goto B5c71be;
case 0x5c71bf:c.instructions+=2;goto B5c71bf;
case 0x5c71c0:c.instructions+=1;goto B5c71c0;
case 0x5c71c6:goto L5c71c6;
case 0x5c71c8:c.instructions+=1;goto B5c71c8;
case 0x5c71cd:goto L5c71cd;
case 0x5c71cf:c.instructions+=4;goto B5c71cf;
case 0x5c71d6:c.instructions+=3;goto B5c71d6;
case 0x5c71d7:c.instructions+=2;goto B5c71d7;
case 0x5c71db:c.instructions+=1;goto B5c71db;
case 0x5c71e0:goto L5c71e0;
case 0x5c71e2:c.instructions+=4;goto B5c71e2;
case 0x5c71e4:c.instructions+=3;goto B5c71e4;
case 0x5c71e7:c.instructions+=2;goto B5c71e7;
case 0x5c71ec:c.instructions+=1;goto B5c71ec;
case 0x5c71f3:goto L5c71f3;
case 0x5c71f5:goto L5c71f5;
case 0x5c71f8:c.instructions+=5;goto B5c71f8;
case 0x5c71f9:c.instructions+=4;goto B5c71f9;
case 0x5c71fa:c.instructions+=3;goto B5c71fa;
case 0x5c71ff:c.instructions+=2;goto B5c71ff;
case 0x5c7200:c.instructions+=1;goto B5c7200;
case 0x5c7205:goto L5c7205;
case 0x5c7209:c.instructions+=9;goto B5c7209;
case 0x5c720b:c.instructions+=8;goto B5c720b;
case 0x5c720e:c.instructions+=7;goto B5c720e;
case 0x5c720f:c.instructions+=6;goto B5c720f;
case 0x5c7210:c.instructions+=5;goto B5c7210;
case 0x5c7215:c.instructions+=4;goto B5c7215;
case 0x5c7217:c.instructions+=3;goto B5c7217;
case 0x5c721c:c.instructions+=2;goto B5c721c;
case 0x5c7223:c.instructions+=1;goto B5c7223;
case 0x5c7224:goto L5c7224;
case 0x5c7226:goto L5c7226;
case 0x5c722b:goto L5c722b;
case 0x5c7232:c.instructions+=3;goto B5c7232;
case 0x5c7234:c.instructions+=2;goto B5c7234;
case 0x5c7235:c.instructions+=1;goto B5c7235;
case 0x5c723a:goto L5c723a;
case 0x5c723d:c.instructions+=2;goto B5c723d;
case 0x5c7241:c.instructions+=1;goto B5c7241;
case 0x5c7246:goto L5c7246;
case 0x5c724d:c.instructions+=11;goto B5c724d;
case 0x5c7254:c.instructions+=10;goto B5c7254;
case 0x5c7256:c.instructions+=9;goto B5c7256;
case 0x5c725e:c.instructions+=8;goto B5c725e;
case 0x5c7266:c.instructions+=7;goto B5c7266;
case 0x5c726e:c.instructions+=6;goto B5c726e;
case 0x5c7276:c.instructions+=5;goto B5c7276;
case 0x5c727e:c.instructions+=4;goto B5c727e;
case 0x5c7286:c.instructions+=3;goto B5c7286;
case 0x5c728e:c.instructions+=2;goto B5c728e;
case 0x5c7296:c.instructions+=1;goto B5c7296;
case 0x5c7298:goto L5c7298;
case 0x5c729e:goto L5c729e;
case 0x5c72a4:c.instructions+=5;goto B5c72a4;
case 0x5c72ab:c.instructions+=4;goto B5c72ab;
case 0x5c72ad:c.instructions+=3;goto B5c72ad;
case 0x5c72b1:c.instructions+=2;goto B5c72b1;
case 0x5c72b8:c.instructions+=1;goto B5c72b8;
case 0x5c72ba:goto L5c72ba;
case 0x5c72c0:goto L5c72c0;
case 0x5c72c6:c.instructions+=13;goto B5c72c6;
case 0x5c72c9:c.instructions+=12;goto B5c72c9;
case 0x5c72cb:c.instructions+=11;goto B5c72cb;
case 0x5c72ce:c.instructions+=10;goto B5c72ce;
case 0x5c72d2:c.instructions+=9;goto B5c72d2;
case 0x5c72d4:c.instructions+=8;goto B5c72d4;
case 0x5c72d7:c.instructions+=7;goto B5c72d7;
case 0x5c72db:c.instructions+=6;goto B5c72db;
case 0x5c72dd:c.instructions+=5;goto B5c72dd;
case 0x5c72df:c.instructions+=4;goto B5c72df;
case 0x5c72e2:c.instructions+=3;goto B5c72e2;
case 0x5c72e6:c.instructions+=2;goto B5c72e6;
case 0x5c72ea:c.instructions+=1;goto B5c72ea;
case 0x5c72f0:goto L5c72f0;
case 0x5c72f4:c.instructions+=9;goto B5c72f4;
case 0x5c72fb:c.instructions+=8;goto B5c72fb;
case 0x5c72ff:c.instructions+=7;goto B5c72ff;
case 0x5c7306:c.instructions+=6;goto B5c7306;
case 0x5c730a:c.instructions+=5;goto B5c730a;
case 0x5c7311:c.instructions+=4;goto B5c7311;
case 0x5c7318:c.instructions+=3;goto B5c7318;
case 0x5c7319:c.instructions+=2;goto B5c7319;
case 0x5c731c:c.instructions+=1;goto B5c731c;
case 0x5c731e:goto L5c731e;
case 0x5c7322:c.instructions+=23;goto B5c7322;
case 0x5c7327:c.instructions+=22;goto B5c7327;
case 0x5c7329:c.instructions+=21;goto B5c7329;
case 0x5c732b:c.instructions+=20;goto B5c732b;
case 0x5c732f:c.instructions+=19;goto B5c732f;
case 0x5c7331:c.instructions+=18;goto B5c7331;
case 0x5c7335:c.instructions+=17;goto B5c7335;
case 0x5c7337:c.instructions+=16;goto B5c7337;
case 0x5c7339:c.instructions+=15;goto B5c7339;
case 0x5c733a:c.instructions+=14;goto B5c733a;
case 0x5c733e:c.instructions+=13;goto B5c733e;
case 0x5c7344:c.instructions+=12;goto B5c7344;
case 0x5c7348:c.instructions+=11;goto B5c7348;
case 0x5c734c:c.instructions+=10;goto B5c734c;
case 0x5c734e:c.instructions+=9;goto B5c734e;
case 0x5c7352:c.instructions+=8;goto B5c7352;
case 0x5c7356:c.instructions+=7;goto B5c7356;
case 0x5c735c:c.instructions+=6;goto B5c735c;
case 0x5c7360:c.instructions+=5;goto B5c7360;
case 0x5c7367:c.instructions+=4;goto B5c7367;
case 0x5c7369:c.instructions+=3;goto B5c7369;
case 0x5c7370:c.instructions+=2;goto B5c7370;
case 0x5c7377:c.instructions+=1;goto B5c7377;
case 0x5c737d:goto L5c737d;
case 0x5c7382:c.instructions+=5;goto B5c7382;
case 0x5c7384:c.instructions+=4;goto B5c7384;
case 0x5c7386:c.instructions+=3;goto B5c7386;
case 0x5c7388:c.instructions+=2;goto B5c7388;
case 0x5c7389:c.instructions+=1;goto B5c7389;
case 0x5c738f:goto L5c738f;
case 0x5c7392:c.instructions+=2;goto B5c7392;
case 0x5c7394:c.instructions+=1;goto B5c7394;
case 0x5c7396:goto L5c7396;
case 0x5c7399:c.instructions+=7;goto B5c7399;
case 0x5c739b:c.instructions+=6;goto B5c739b;
case 0x5c739c:c.instructions+=5;goto B5c739c;
case 0x5c739f:c.instructions+=4;goto B5c739f;
case 0x5c73a5:c.instructions+=3;goto B5c73a5;
case 0x5c73a6:c.instructions+=2;goto B5c73a6;
case 0x5c73a7:c.instructions+=1;goto B5c73a7;
case 0x5c73ad:goto L5c73ad;
case 0x5c73af:goto L5c73af;
case 0x5c73b2:c.instructions+=3;goto B5c73b2;
case 0x5c73b4:c.instructions+=2;goto B5c73b4;
case 0x5c73b6:c.instructions+=1;goto B5c73b6;
case 0x5c73b8:goto L5c73b8;
case 0x5c73ba:c.instructions+=2;goto B5c73ba;
case 0x5c73bf:c.instructions+=1;goto B5c73bf;
case 0x5c73c4:goto L5c73c4;
case 0x5c73c7:c.instructions+=2;goto B5c73c7;
case 0x5c73c8:c.instructions+=1;goto B5c73c8;
case 0x5c73cd:goto L5c73cd;
case 0x5c73ce:c.instructions+=1;goto B5c73ce;
case 0x5c73d3:goto L5c73d3;
case 0x5c73d6:c.instructions+=1;goto B5c73d6;
case 0x5c73d8:goto L5c73d8;
case 0x5c73dd:c.instructions+=4;goto B5c73dd;
case 0x5c73df:c.instructions+=3;goto B5c73df;
case 0x5c73e1:c.instructions+=2;goto B5c73e1;
case 0x5c73e2:c.instructions+=1;goto B5c73e2;
case 0x5c73e8:goto L5c73e8;
case 0x5c73eb:c.instructions+=2;goto B5c73eb;
case 0x5c73ed:c.instructions+=1;goto B5c73ed;
case 0x5c73ef:goto L5c73ef;
case 0x5c73f1:c.instructions+=2;goto B5c73f1;
case 0x5c73f3:c.instructions+=1;goto B5c73f3;
case 0x5c73f8:goto L5c73f8;
case 0x5c73fb:c.instructions+=6;goto B5c73fb;
case 0x5c73fe:c.instructions+=5;goto B5c73fe;
case 0x5c7402:c.instructions+=4;goto B5c7402;
case 0x5c7403:c.instructions+=3;goto B5c7403;
case 0x5c7404:c.instructions+=2;goto B5c7404;
case 0x5c7405:c.instructions+=1;goto B5c7405;
case 0x5c740a:goto L5c740a;
case 0x5c740d:c.instructions+=1;goto B5c740d;
case 0x5c7412:goto L5c7412;
case 0x5c7414:c.instructions+=4;goto B5c7414;
case 0x5c7418:c.instructions+=3;goto B5c7418;
case 0x5c741a:c.instructions+=2;goto B5c741a;
case 0x5c741b:c.instructions+=1;goto B5c741b;
case 0x5c7420:goto L5c7420;
case 0x5c7422:c.instructions+=3;goto B5c7422;
case 0x5c7425:c.instructions+=2;goto B5c7425;
case 0x5c7427:c.instructions+=1;goto B5c7427;
case 0x5c742a:goto L5c742a;
case 0x5c742d:c.instructions+=3;goto B5c742d;
case 0x5c742f:c.instructions+=2;goto B5c742f;
case 0x5c7430:c.instructions+=1;goto B5c7430;
case 0x5c7436:goto L5c7436;
case 0x5c743b:c.instructions+=6;goto B5c743b;
case 0x5c743d:c.instructions+=5;goto B5c743d;
case 0x5c743f:c.instructions+=4;goto B5c743f;
case 0x5c7449:c.instructions+=3;goto B5c7449;
case 0x5c744b:c.instructions+=2;goto B5c744b;
case 0x5c744c:c.instructions+=1;goto B5c744c;
case 0x5c7452:goto L5c7452;
case 0x5c7457:c.instructions+=5;goto B5c7457;
case 0x5c7459:c.instructions+=4;goto B5c7459;
case 0x5c745b:c.instructions+=3;goto B5c745b;
case 0x5c745d:c.instructions+=2;goto B5c745d;
case 0x5c745e:c.instructions+=1;goto B5c745e;
case 0x5c7464:goto L5c7464;
case 0x5c7465:c.instructions+=5;goto B5c7465;
case 0x5c7466:c.instructions+=4;goto B5c7466;
case 0x5c7467:c.instructions+=3;goto B5c7467;
case 0x5c7469:c.instructions+=2;goto B5c7469;
case 0x5c746a:c.instructions+=1;goto B5c746a;
case 0x5c7470:goto L5c7470;
case 0x5c7471:c.instructions+=7;goto B5c7471;
case 0x5c7473:c.instructions+=6;goto B5c7473;
case 0x5c7476:c.instructions+=5;goto B5c7476;
case 0x5c747c:c.instructions+=4;goto B5c747c;
case 0x5c747d:c.instructions+=3;goto B5c747d;
case 0x5c747e:c.instructions+=2;goto B5c747e;
case 0x5c747f:c.instructions+=1;goto B5c747f;
case 0x5c7484:goto L5c7484;
case 0x5c748a:c.instructions+=7;goto B5c748a;
case 0x5c748f:c.instructions+=6;goto B5c748f;
case 0x5c7491:c.instructions+=5;goto B5c7491;
case 0x5c7492:c.instructions+=4;goto B5c7492;
case 0x5c7494:c.instructions+=3;goto B5c7494;
case 0x5c7495:c.instructions+=2;goto B5c7495;
case 0x5c7496:c.instructions+=1;goto B5c7496;
case 0x5c749c:goto L5c749c;
case 0x5c74a2:c.instructions+=5;goto B5c74a2;
case 0x5c74a7:c.instructions+=4;goto B5c74a7;
case 0x5c74a9:c.instructions+=3;goto B5c74a9;
case 0x5c74aa:c.instructions+=2;goto B5c74aa;
case 0x5c74ab:c.instructions+=1;goto B5c74ab;
case 0x5c74b1:goto L5c74b1;
case 0x5c74b7:c.instructions+=13;goto B5c74b7;
case 0x5c74bc:c.instructions+=12;goto B5c74bc;
case 0x5c74c0:c.instructions+=11;goto B5c74c0;
case 0x5c74c4:c.instructions+=10;goto B5c74c4;
case 0x5c74c9:c.instructions+=9;goto B5c74c9;
case 0x5c74cd:c.instructions+=8;goto B5c74cd;
case 0x5c74ce:c.instructions+=7;goto B5c74ce;
case 0x5c74d2:c.instructions+=6;goto B5c74d2;
case 0x5c74d6:c.instructions+=5;goto B5c74d6;
case 0x5c74da:c.instructions+=4;goto B5c74da;
case 0x5c74e2:c.instructions+=3;goto B5c74e2;
case 0x5c74e4:c.instructions+=2;goto B5c74e4;
case 0x5c74e5:c.instructions+=1;goto B5c74e5;
case 0x5c74eb:goto L5c74eb;
case 0x5c74ef:c.instructions+=4;goto B5c74ef;
case 0x5c74f0:c.instructions+=3;goto B5c74f0;
case 0x5c74fa:c.instructions+=2;goto B5c74fa;
case 0x5c7500:c.instructions+=1;goto B5c7500;
case 0x5c7505:goto L5c7505;
case 0x5c750a:c.instructions+=7;goto B5c750a;
case 0x5c750c:c.instructions+=6;goto B5c750c;
case 0x5c750f:c.instructions+=5;goto B5c750f;
case 0x5c7513:c.instructions+=4;goto B5c7513;
case 0x5c7514:c.instructions+=3;goto B5c7514;
case 0x5c7519:c.instructions+=2;goto B5c7519;
case 0x5c751a:c.instructions+=1;goto B5c751a;
case 0x5c7520:goto L5c7520;
case 0x5c7525:c.instructions+=6;goto B5c7525;
case 0x5c7527:c.instructions+=5;goto B5c7527;
case 0x5c752b:c.instructions+=4;goto B5c752b;
case 0x5c752c:c.instructions+=3;goto B5c752c;
case 0x5c752e:c.instructions+=2;goto B5c752e;
case 0x5c752f:c.instructions+=1;goto B5c752f;
case 0x5c7535:goto L5c7535;
case 0x5c753a:c.instructions+=6;goto B5c753a;
case 0x5c753c:c.instructions+=5;goto B5c753c;
case 0x5c7540:c.instructions+=4;goto B5c7540;
case 0x5c7541:c.instructions+=3;goto B5c7541;
case 0x5c7543:c.instructions+=2;goto B5c7543;
case 0x5c7544:c.instructions+=1;goto B5c7544;
case 0x5c754a:goto L5c754a;
case 0x5c754f:c.instructions+=23;goto B5c754f;
case 0x5c7555:c.instructions+=22;goto B5c7555;
case 0x5c7559:c.instructions+=21;goto B5c7559;
case 0x5c755e:c.instructions+=20;goto B5c755e;
case 0x5c7560:c.instructions+=19;goto B5c7560;
case 0x5c7562:c.instructions+=18;goto B5c7562;
case 0x5c7564:c.instructions+=17;goto B5c7564;
case 0x5c7567:c.instructions+=16;goto B5c7567;
case 0x5c7569:c.instructions+=15;goto B5c7569;
case 0x5c756f:c.instructions+=14;goto B5c756f;
case 0x5c7573:c.instructions+=13;goto B5c7573;
case 0x5c7578:c.instructions+=12;goto B5c7578;
case 0x5c757a:c.instructions+=11;goto B5c757a;
case 0x5c757e:c.instructions+=10;goto B5c757e;
case 0x5c7582:c.instructions+=9;goto B5c7582;
case 0x5c7584:c.instructions+=8;goto B5c7584;
case 0x5c7586:c.instructions+=7;goto B5c7586;
case 0x5c7589:c.instructions+=6;goto B5c7589;
case 0x5c758b:c.instructions+=5;goto B5c758b;
case 0x5c758f:c.instructions+=4;goto B5c758f;
case 0x5c7593:c.instructions+=3;goto B5c7593;
case 0x5c7597:c.instructions+=2;goto B5c7597;
case 0x5c7599:c.instructions+=1;goto B5c7599;
case 0x5c759e:goto L5c759e;
case 0x5c759f:c.instructions+=2;goto B5c759f;
case 0x5c75a3:c.instructions+=1;goto B5c75a3;
case 0x5c75a8:goto L5c75a8;
case 0x5c75ad:c.instructions+=10;goto B5c75ad;
case 0x5c75b0:c.instructions+=9;goto B5c75b0;
case 0x5c75b5:c.instructions+=8;goto B5c75b5;
case 0x5c75b9:c.instructions+=7;goto B5c75b9;
case 0x5c75ba:c.instructions+=6;goto B5c75ba;
case 0x5c75bb:c.instructions+=5;goto B5c75bb;
case 0x5c75bc:c.instructions+=4;goto B5c75bc;
case 0x5c75c0:c.instructions+=3;goto B5c75c0;
case 0x5c75c2:c.instructions+=2;goto B5c75c2;
case 0x5c75c3:c.instructions+=1;goto B5c75c3;
case 0x5c75c6:goto L5c75c6;
case 0x5c75ca:c.instructions+=5;goto B5c75ca;
case 0x5c75ce:c.instructions+=4;goto B5c75ce;
case 0x5c75d0:c.instructions+=3;goto B5c75d0;
case 0x5c75d5:c.instructions+=2;goto B5c75d5;
case 0x5c75dd:c.instructions+=1;goto B5c75dd;
case 0x5c75df:goto L5c75df;
case 0x5c75e1:goto L5c75e1;
case 0x5c75e5:c.instructions+=6;goto B5c75e5;
case 0x5c75eb:c.instructions+=5;goto B5c75eb;
case 0x5c75ed:c.instructions+=4;goto B5c75ed;
case 0x5c75f3:c.instructions+=3;goto B5c75f3;
case 0x5c75f5:c.instructions+=2;goto B5c75f5;
case 0x5c75f8:c.instructions+=1;goto B5c75f8;
case 0x5c75fa:goto L5c75fa;
case 0x5c75fc:c.instructions+=2;goto B5c75fc;
case 0x5c7600:c.instructions+=1;goto B5c7600;
case 0x5c7602:goto L5c7602;
case 0x5c7608:c.instructions+=2;goto B5c7608;
case 0x5c760e:c.instructions+=1;goto B5c760e;
case 0x5c7613:goto L5c7613;
case 0x5c7617:goto L5c7617;
case 0x5c761b:c.instructions+=5;goto B5c761b;
case 0x5c7623:c.instructions+=4;goto B5c7623;
case 0x5c7627:c.instructions+=3;goto B5c7627;
case 0x5c762b:c.instructions+=2;goto B5c762b;
case 0x5c762d:c.instructions+=1;goto B5c762d;
case 0x5c7632:goto L5c7632;
case 0x5c7636:c.instructions+=13;goto B5c7636;
case 0x5c763c:c.instructions+=12;goto B5c763c;
case 0x5c7640:c.instructions+=11;goto B5c7640;
case 0x5c7644:c.instructions+=10;goto B5c7644;
case 0x5c7647:c.instructions+=9;goto B5c7647;
case 0x5c764b:c.instructions+=8;goto B5c764b;
case 0x5c764f:c.instructions+=7;goto B5c764f;
case 0x5c7651:c.instructions+=6;goto B5c7651;
case 0x5c7657:c.instructions+=5;goto B5c7657;
case 0x5c765d:c.instructions+=4;goto B5c765d;
case 0x5c7661:c.instructions+=3;goto B5c7661;
case 0x5c7667:c.instructions+=2;goto B5c7667;
case 0x5c766b:c.instructions+=1;goto B5c766b;
case 0x5c7670:goto L5c7670;
case 0x5c7674:c.instructions+=13;goto B5c7674;
case 0x5c7678:c.instructions+=12;goto B5c7678;
case 0x5c767b:c.instructions+=11;goto B5c767b;
case 0x5c767c:c.instructions+=10;goto B5c767c;
case 0x5c7680:c.instructions+=9;goto B5c7680;
case 0x5c7683:c.instructions+=8;goto B5c7683;
case 0x5c7687:c.instructions+=7;goto B5c7687;
case 0x5c7688:c.instructions+=6;goto B5c7688;
case 0x5c768c:c.instructions+=5;goto B5c768c;
case 0x5c768f:c.instructions+=4;goto B5c768f;
case 0x5c7690:c.instructions+=3;goto B5c7690;
case 0x5c7691:c.instructions+=2;goto B5c7691;
case 0x5c7692:c.instructions+=1;goto B5c7692;
case 0x5c7697:goto L5c7697;
case 0x5c7698:c.instructions+=3;goto B5c7698;
case 0x5c769c:c.instructions+=2;goto B5c769c;
case 0x5c769d:c.instructions+=1;goto B5c769d;
case 0x5c76a2:goto L5c76a2;
case 0x5c76a6:c.instructions+=41;goto B5c76a6;
case 0x5c76ac:c.instructions+=40;goto B5c76ac;
case 0x5c76b0:c.instructions+=39;goto B5c76b0;
case 0x5c76b3:c.instructions+=38;goto B5c76b3;
case 0x5c76b6:c.instructions+=37;goto B5c76b6;
case 0x5c76b9:c.instructions+=36;goto B5c76b9;
case 0x5c76bd:c.instructions+=35;goto B5c76bd;
case 0x5c76c1:c.instructions+=34;goto B5c76c1;
case 0x5c76c4:c.instructions+=33;goto B5c76c4;
case 0x5c76c8:c.instructions+=32;goto B5c76c8;
case 0x5c76cc:c.instructions+=31;goto B5c76cc;
case 0x5c76d0:c.instructions+=30;goto B5c76d0;
case 0x5c76d4:c.instructions+=29;goto B5c76d4;
case 0x5c76d7:c.instructions+=28;goto B5c76d7;
case 0x5c76da:c.instructions+=27;goto B5c76da;
case 0x5c76de:c.instructions+=26;goto B5c76de;
case 0x5c76e2:c.instructions+=25;goto B5c76e2;
case 0x5c76e8:c.instructions+=24;goto B5c76e8;
case 0x5c76ee:c.instructions+=23;goto B5c76ee;
case 0x5c76f0:c.instructions+=22;goto B5c76f0;
case 0x5c76f2:c.instructions+=21;goto B5c76f2;
case 0x5c76f5:c.instructions+=20;goto B5c76f5;
case 0x5c76fb:c.instructions+=19;goto B5c76fb;
case 0x5c76fd:c.instructions+=18;goto B5c76fd;
case 0x5c7701:c.instructions+=17;goto B5c7701;
case 0x5c7706:c.instructions+=16;goto B5c7706;
case 0x5c7709:c.instructions+=15;goto B5c7709;
case 0x5c770b:c.instructions+=14;goto B5c770b;
case 0x5c770f:c.instructions+=13;goto B5c770f;
case 0x5c7713:c.instructions+=12;goto B5c7713;
case 0x5c7717:c.instructions+=11;goto B5c7717;
case 0x5c771b:c.instructions+=10;goto B5c771b;
case 0x5c771f:c.instructions+=9;goto B5c771f;
case 0x5c7723:c.instructions+=8;goto B5c7723;
case 0x5c7727:c.instructions+=7;goto B5c7727;
case 0x5c7728:c.instructions+=6;goto B5c7728;
case 0x5c772b:c.instructions+=5;goto B5c772b;
case 0x5c772f:c.instructions+=4;goto B5c772f;
case 0x5c7735:c.instructions+=3;goto B5c7735;
case 0x5c7739:c.instructions+=2;goto B5c7739;
case 0x5c773d:c.instructions+=1;goto B5c773d;
case 0x5c7743:goto L5c7743;
case 0x5c7747:c.instructions+=10;goto B5c7747;
case 0x5c774b:c.instructions+=9;goto B5c774b;
case 0x5c774f:c.instructions+=8;goto B5c774f;
case 0x5c7755:c.instructions+=7;goto B5c7755;
case 0x5c7756:c.instructions+=6;goto B5c7756;
case 0x5c7757:c.instructions+=5;goto B5c7757;
case 0x5c775a:c.instructions+=4;goto B5c775a;
case 0x5c775e:c.instructions+=3;goto B5c775e;
case 0x5c7762:c.instructions+=2;goto B5c7762;
case 0x5c7766:c.instructions+=1;goto B5c7766;
case 0x5c776c:goto L5c776c;
case 0x5c7771:c.instructions+=3;goto B5c7771;
case 0x5c7773:c.instructions+=2;goto B5c7773;
case 0x5c7774:c.instructions+=1;goto B5c7774;
case 0x5c7777:goto L5c7777;
case 0x5c777c:c.instructions+=6;goto B5c777c;
case 0x5c777e:c.instructions+=5;goto B5c777e;
case 0x5c7780:c.instructions+=4;goto B5c7780;
case 0x5c7781:c.instructions+=3;goto B5c7781;
case 0x5c7782:c.instructions+=2;goto B5c7782;
case 0x5c7783:c.instructions+=1;goto B5c7783;
case 0x5c7789:goto L5c7789;
case 0x5c778f:c.instructions+=8;goto B5c778f;
case 0x5c7794:c.instructions+=7;goto B5c7794;
case 0x5c7796:c.instructions+=6;goto B5c7796;
case 0x5c7798:c.instructions+=5;goto B5c7798;
case 0x5c7799:c.instructions+=4;goto B5c7799;
case 0x5c779a:c.instructions+=3;goto B5c779a;
case 0x5c779b:c.instructions+=2;goto B5c779b;
case 0x5c779c:c.instructions+=1;goto B5c779c;
case 0x5c77a2:goto L5c77a2;
case 0x5c77a8:c.instructions+=5;goto B5c77a8;
case 0x5c77ad:c.instructions+=4;goto B5c77ad;
case 0x5c77af:c.instructions+=3;goto B5c77af;
case 0x5c77b0:c.instructions+=2;goto B5c77b0;
case 0x5c77b1:c.instructions+=1;goto B5c77b1;
case 0x5c77b7:goto L5c77b7;
case 0x5c77bb:c.instructions+=5;goto B5c77bb;
case 0x5c77c1:c.instructions+=4;goto B5c77c1;
case 0x5c77c7:c.instructions+=3;goto B5c77c7;
case 0x5c77c9:c.instructions+=2;goto B5c77c9;
case 0x5c77cb:c.instructions+=1;goto B5c77cb;
case 0x5c77ce:goto L5c77ce;
case 0x5c77d1:c.instructions+=5;goto B5c77d1;
case 0x5c77d6:c.instructions+=4;goto B5c77d6;
case 0x5c77d8:c.instructions+=3;goto B5c77d8;
case 0x5c77d9:c.instructions+=2;goto B5c77d9;
case 0x5c77da:c.instructions+=1;goto B5c77da;
case 0x5c77e0:goto L5c77e0;
case 0x5c77e3:c.instructions+=6;goto B5c77e3;
case 0x5c77e5:c.instructions+=5;goto B5c77e5;
case 0x5c77e6:c.instructions+=4;goto B5c77e6;
case 0x5c77ea:c.instructions+=3;goto B5c77ea;
case 0x5c77eb:c.instructions+=2;goto B5c77eb;
case 0x5c77ec:c.instructions+=1;goto B5c77ec;
case 0x5c77f2:goto L5c77f2;
case 0x5c77f5:c.instructions+=4;goto B5c77f5;
case 0x5c77f7:c.instructions+=3;goto B5c77f7;
case 0x5c77f8:c.instructions+=2;goto B5c77f8;
case 0x5c77f9:c.instructions+=1;goto B5c77f9;
case 0x5c77ff:goto L5c77ff;
case 0x5c7805:c.instructions+=4;goto B5c7805;
case 0x5c7808:c.instructions+=3;goto B5c7808;
case 0x5c780a:c.instructions+=2;goto B5c780a;
case 0x5c780b:c.instructions+=1;goto B5c780b;
case 0x5c7811:goto L5c7811;
case 0x5c7816:c.instructions+=9;goto B5c7816;
case 0x5c7818:c.instructions+=8;goto B5c7818;
case 0x5c781d:c.instructions+=7;goto B5c781d;
case 0x5c781e:c.instructions+=6;goto B5c781e;
case 0x5c7820:c.instructions+=5;goto B5c7820;
case 0x5c7821:c.instructions+=4;goto B5c7821;
case 0x5c7822:c.instructions+=3;goto B5c7822;
case 0x5c7824:c.instructions+=2;goto B5c7824;
case 0x5c7825:c.instructions+=1;goto B5c7825;
case 0x5c782b:goto L5c782b;
case 0x5c782e:c.instructions+=3;goto B5c782e;
case 0x5c7830:c.instructions+=2;goto B5c7830;
case 0x5c7831:c.instructions+=1;goto B5c7831;
case 0x5c7837:goto L5c7837;
case 0x5c7839:c.instructions+=2;goto B5c7839;
case 0x5c783b:c.instructions+=1;goto B5c783b;
case 0x5c783e:goto L5c783e;
case 0x5c7841:c.instructions+=3;goto B5c7841;
case 0x5c7843:c.instructions+=2;goto B5c7843;
case 0x5c7844:c.instructions+=1;goto B5c7844;
case 0x5c784a:goto L5c784a;
case 0x5c7850:c.instructions+=6;goto B5c7850;
case 0x5c7851:c.instructions+=5;goto B5c7851;
case 0x5c7852:c.instructions+=4;goto B5c7852;
case 0x5c7853:c.instructions+=3;goto B5c7853;
case 0x5c7855:c.instructions+=2;goto B5c7855;
case 0x5c7856:c.instructions+=1;goto B5c7856;
case 0x5c7860:goto L5c7860;
case 0x5c7863:c.instructions+=8;goto B5c7863;
case 0x5c7868:c.instructions+=7;goto B5c7868;
case 0x5c786a:c.instructions+=6;goto B5c786a;
case 0x5c786b:c.instructions+=5;goto B5c786b;
case 0x5c786c:c.instructions+=4;goto B5c786c;
case 0x5c786e:c.instructions+=3;goto B5c786e;
case 0x5c7873:c.instructions+=2;goto B5c7873;
case 0x5c7874:c.instructions+=1;goto B5c7874;
case 0x5c787a:goto L5c787a;
case 0x5c787c:c.instructions+=1;goto B5c787c;
case 0x5c7881:goto L5c7881;
case 0x5c7887:c.instructions+=7;goto B5c7887;
case 0x5c788a:c.instructions+=6;goto B5c788a;
case 0x5c788d:c.instructions+=5;goto B5c788d;
case 0x5c7890:c.instructions+=4;goto B5c7890;
case 0x5c7892:c.instructions+=3;goto B5c7892;
case 0x5c789a:c.instructions+=2;goto B5c789a;
case 0x5c78a2:c.instructions+=1;goto B5c78a2;
case 0x5c78a8:goto L5c78a8;
case 0x5c78ae:c.instructions+=4;goto B5c78ae;
case 0x5c78b0:c.instructions+=3;goto B5c78b0;
case 0x5c78b6:c.instructions+=2;goto B5c78b6;
case 0x5c78ba:c.instructions+=1;goto B5c78ba;
case 0x5c78bf:goto L5c78bf;
case 0x5c78c1:c.instructions+=3;goto B5c78c1;
case 0x5c78c5:c.instructions+=2;goto B5c78c5;
case 0x5c78c9:c.instructions+=1;goto B5c78c9;
case 0x5c78cb:goto L5c78cb;
case 0x5c78d1:goto L5c78d1;
case 0x5c78d7:c.instructions+=6;goto B5c78d7;
case 0x5c78dd:c.instructions+=5;goto B5c78dd;
case 0x5c78e1:c.instructions+=4;goto B5c78e1;
case 0x5c78e7:c.instructions+=3;goto B5c78e7;
case 0x5c78ed:c.instructions+=2;goto B5c78ed;
case 0x5c78f3:c.instructions+=1;goto B5c78f3;
case 0x5c78f8:goto L5c78f8;
case 0x5c78fa:c.instructions+=3;goto B5c78fa;
case 0x5c78fe:c.instructions+=2;goto B5c78fe;
case 0x5c7902:c.instructions+=1;goto B5c7902;
case 0x5c7904:goto L5c7904;
case 0x5c790a:goto L5c790a;
case 0x5c7910:c.instructions+=7;goto B5c7910;
case 0x5c7916:c.instructions+=6;goto B5c7916;
case 0x5c791a:c.instructions+=5;goto B5c791a;
case 0x5c7920:c.instructions+=4;goto B5c7920;
case 0x5c7926:c.instructions+=3;goto B5c7926;
case 0x5c792a:c.instructions+=2;goto B5c792a;
case 0x5c7930:c.instructions+=1;goto B5c7930;
case 0x5c7935:goto L5c7935;
case 0x5c7937:c.instructions+=3;goto B5c7937;
case 0x5c793b:c.instructions+=2;goto B5c793b;
case 0x5c793f:c.instructions+=1;goto B5c793f;
case 0x5c7941:goto L5c7941;
case 0x5c7947:goto L5c7947;
case 0x5c794d:c.instructions+=5;goto B5c794d;
case 0x5c7953:c.instructions+=4;goto B5c7953;
case 0x5c7957:c.instructions+=3;goto B5c7957;
case 0x5c795d:c.instructions+=2;goto B5c795d;
case 0x5c7963:c.instructions+=1;goto B5c7963;
case 0x5c7967:goto L5c7967;
case 0x5c796a:c.instructions+=2;goto B5c796a;
case 0x5c796c:c.instructions+=1;goto B5c796c;
case 0x5c7972:goto L5c7972;
case 0x5c7978:c.instructions+=4;goto B5c7978;
case 0x5c797a:c.instructions+=3;goto B5c797a;
case 0x5c797d:c.instructions+=2;goto B5c797d;
case 0x5c7981:c.instructions+=1;goto B5c7981;
case 0x5c7986:goto L5c7986;
case 0x5c7988:c.instructions+=3;goto B5c7988;
case 0x5c798c:c.instructions+=2;goto B5c798c;
case 0x5c7990:c.instructions+=1;goto B5c7990;
case 0x5c7992:goto L5c7992;
case 0x5c7998:goto L5c7998;
case 0x5c799e:c.instructions+=6;goto B5c799e;
case 0x5c79a4:c.instructions+=5;goto B5c79a4;
case 0x5c79a8:c.instructions+=4;goto B5c79a8;
case 0x5c79ae:c.instructions+=3;goto B5c79ae;
case 0x5c79b4:c.instructions+=2;goto B5c79b4;
case 0x5c79b7:c.instructions+=1;goto B5c79b7;
case 0x5c79bc:goto L5c79bc;
case 0x5c79be:c.instructions+=3;goto B5c79be;
case 0x5c79c2:c.instructions+=2;goto B5c79c2;
case 0x5c79c6:c.instructions+=1;goto B5c79c6;
case 0x5c79c8:goto L5c79c8;
case 0x5c79ce:goto L5c79ce;
case 0x5c79d4:c.instructions+=7;goto B5c79d4;
case 0x5c79da:c.instructions+=6;goto B5c79da;
case 0x5c79de:c.instructions+=5;goto B5c79de;
case 0x5c79e4:c.instructions+=4;goto B5c79e4;
case 0x5c79ea:c.instructions+=3;goto B5c79ea;
case 0x5c79ee:c.instructions+=2;goto B5c79ee;
case 0x5c79f1:c.instructions+=1;goto B5c79f1;
case 0x5c79f6:goto L5c79f6;
case 0x5c79f8:c.instructions+=3;goto B5c79f8;
case 0x5c79fc:c.instructions+=2;goto B5c79fc;
case 0x5c7a00:c.instructions+=1;goto B5c7a00;
case 0x5c7a02:goto L5c7a02;
case 0x5c7a08:goto L5c7a08;
case 0x5c7a0e:c.instructions+=5;goto B5c7a0e;
case 0x5c7a14:c.instructions+=4;goto B5c7a14;
case 0x5c7a18:c.instructions+=3;goto B5c7a18;
case 0x5c7a1e:c.instructions+=2;goto B5c7a1e;
case 0x5c7a24:c.instructions+=1;goto B5c7a24;
case 0x5c7a28:goto L5c7a28;
case 0x5c7a2d:goto L5c7a2d;
case 0x5c7a31:c.instructions+=2;goto B5c7a31;
case 0x5c7a33:c.instructions+=1;goto B5c7a33;
case 0x5c7a38:goto L5c7a38;
case 0x5c7a3c:c.instructions+=2;goto B5c7a3c;
case 0x5c7a40:c.instructions+=1;goto B5c7a40;
case 0x5c7a45:goto L5c7a45;
case 0x5c7a47:c.instructions+=10;goto B5c7a47;
case 0x5c7a49:c.instructions+=9;goto B5c7a49;
case 0x5c7a4e:c.instructions+=8;goto B5c7a4e;
case 0x5c7a4f:c.instructions+=7;goto B5c7a4f;
case 0x5c7a50:c.instructions+=6;goto B5c7a50;
case 0x5c7a54:c.instructions+=5;goto B5c7a54;
case 0x5c7a57:c.instructions+=4;goto B5c7a57;
case 0x5c7a59:c.instructions+=3;goto B5c7a59;
case 0x5c7a5f:c.instructions+=2;goto B5c7a5f;
case 0x5c7a62:c.instructions+=1;goto B5c7a62;
case 0x5c7a64:goto L5c7a64;
case 0x5c7a6b:c.instructions+=2;goto B5c7a6b;
case 0x5c7a6d:c.instructions+=1;goto B5c7a6d;
case 0x5c7a6f:goto L5c7a6f;
case 0x5c7a71:c.instructions+=7;goto B5c7a71;
case 0x5c7a73:c.instructions+=6;goto B5c7a73;
case 0x5c7a75:c.instructions+=5;goto B5c7a75;
case 0x5c7a77:c.instructions+=4;goto B5c7a77;
case 0x5c7a78:c.instructions+=3;goto B5c7a78;
case 0x5c7a7a:c.instructions+=2;goto B5c7a7a;
case 0x5c7a7b:c.instructions+=1;goto B5c7a7b;
case 0x5c7a80:goto L5c7a80;
case 0x5c7a83:c.instructions+=2;goto B5c7a83;
case 0x5c7a86:c.instructions+=1;goto B5c7a86;
case 0x5c7a87:goto L5c7a87;
case 0x5c7a8d:c.instructions+=8;goto B5c7a8d;
case 0x5c7a8f:c.instructions+=7;goto B5c7a8f;
case 0x5c7a91:c.instructions+=6;goto B5c7a91;
case 0x5c7a93:c.instructions+=5;goto B5c7a93;
case 0x5c7a95:c.instructions+=4;goto B5c7a95;
case 0x5c7a96:c.instructions+=3;goto B5c7a96;
case 0x5c7a98:c.instructions+=2;goto B5c7a98;
case 0x5c7a99:c.instructions+=1;goto B5c7a99;
case 0x5c7a9e:goto L5c7a9e;
case 0x5c7aa1:c.instructions+=2;goto B5c7aa1;
case 0x5c7aa4:c.instructions+=1;goto B5c7aa4;
case 0x5c7ab0:goto L5c7ab0;
case 0x5c7ab6:c.instructions+=2;goto B5c7ab6;
case 0x5c7ab8:c.instructions+=1;goto B5c7ab8;
case 0x5c7abd:goto L5c7abd;
case 0x5c7ac0:c.instructions+=4;goto B5c7ac0;
case 0x5c7ac2:c.instructions+=3;goto B5c7ac2;
case 0x5c7ac5:c.instructions+=2;goto B5c7ac5;
case 0x5c7ac7:c.instructions+=1;goto B5c7ac7;
case 0x5c7acd:goto L5c7acd;
case 0x5c7ad4:c.instructions+=4;goto B5c7ad4;
case 0x5c7ad6:c.instructions+=3;goto B5c7ad6;
case 0x5c7ad7:c.instructions+=2;goto B5c7ad7;
case 0x5c7ad8:c.instructions+=1;goto B5c7ad8;
case 0x5c7ada:goto L5c7ada;
case 0x5c7adf:c.instructions+=3;goto B5c7adf;
case 0x5c7ae2:c.instructions+=2;goto B5c7ae2;
case 0x5c7ae8:c.instructions+=1;goto B5c7ae8;
case 0x5c7aea:goto L5c7aea;
case 0x5c7aeb:c.instructions+=2;goto B5c7aeb;
case 0x5c7aee:c.instructions+=1;goto B5c7aee;
case 0x5c7aef:goto L5c7aef;
case 0x5c7af6:c.instructions+=7;goto B5c7af6;
case 0x5c7afd:c.instructions+=6;goto B5c7afd;
case 0x5c7aff:c.instructions+=5;goto B5c7aff;
case 0x5c7b04:c.instructions+=4;goto B5c7b04;
case 0x5c7b06:c.instructions+=3;goto B5c7b06;
case 0x5c7b07:c.instructions+=2;goto B5c7b07;
case 0x5c7b08:c.instructions+=1;goto B5c7b08;
case 0x5c7b0d:goto L5c7b0d;
case 0x5c7b13:c.instructions+=8;goto B5c7b13;
case 0x5c7b1a:c.instructions+=7;goto B5c7b1a;
case 0x5c7b1f:c.instructions+=6;goto B5c7b1f;
case 0x5c7b21:c.instructions+=5;goto B5c7b21;
case 0x5c7b24:c.instructions+=4;goto B5c7b24;
case 0x5c7b25:c.instructions+=3;goto B5c7b25;
case 0x5c7b27:c.instructions+=2;goto B5c7b27;
case 0x5c7b28:c.instructions+=1;goto B5c7b28;
case 0x5c7b2e:goto L5c7b2e;
case 0x5c7b30:goto L5c7b30;
case 0x5c7b36:c.instructions+=6;goto B5c7b36;
case 0x5c7b3b:c.instructions+=5;goto B5c7b3b;
case 0x5c7b3d:c.instructions+=4;goto B5c7b3d;
case 0x5c7b3e:c.instructions+=3;goto B5c7b3e;
case 0x5c7b40:c.instructions+=2;goto B5c7b40;
case 0x5c7b41:c.instructions+=1;goto B5c7b41;
case 0x5c7b47:goto L5c7b47;
case 0x5c7b4d:goto L5c7b4d;
case 0x5c7b52:c.instructions+=4;goto B5c7b52;
case 0x5c7b54:c.instructions+=3;goto B5c7b54;
case 0x5c7b56:c.instructions+=2;goto B5c7b56;
case 0x5c7b57:c.instructions+=1;goto B5c7b57;
case 0x5c7b5d:goto L5c7b5d;
case 0x5c7b63:c.instructions+=4;goto B5c7b63;
case 0x5c7b69:c.instructions+=3;goto B5c7b69;
case 0x5c7b6b:c.instructions+=2;goto B5c7b6b;
case 0x5c7b6d:c.instructions+=1;goto B5c7b6d;
case 0x5c7b70:goto L5c7b70;
case 0x5c7b73:c.instructions+=5;goto B5c7b73;
case 0x5c7b78:c.instructions+=4;goto B5c7b78;
case 0x5c7b7a:c.instructions+=3;goto B5c7b7a;
case 0x5c7b7b:c.instructions+=2;goto B5c7b7b;
case 0x5c7b7c:c.instructions+=1;goto B5c7b7c;
case 0x5c7b82:goto L5c7b82;
case 0x5c7b85:c.instructions+=6;goto B5c7b85;
case 0x5c7b87:c.instructions+=5;goto B5c7b87;
case 0x5c7b89:c.instructions+=4;goto B5c7b89;
case 0x5c7b8d:c.instructions+=3;goto B5c7b8d;
case 0x5c7b8e:c.instructions+=2;goto B5c7b8e;
case 0x5c7b8f:c.instructions+=1;goto B5c7b8f;
case 0x5c7b95:goto L5c7b95;
case 0x5c7b99:c.instructions+=2;goto B5c7b99;
case 0x5c7b9e:c.instructions+=1;goto B5c7b9e;
case 0x5c7ba0:goto L5c7ba0;
case 0x5c7ba6:c.instructions+=3;goto B5c7ba6;
case 0x5c7ba9:c.instructions+=2;goto B5c7ba9;
case 0x5c7baa:c.instructions+=1;goto B5c7baa;
case 0x5c7bac:goto L5c7bac;
case 0x5c7bb3:c.instructions+=8;goto B5c7bb3;
case 0x5c7bb6:c.instructions+=7;goto B5c7bb6;
case 0x5c7bb8:c.instructions+=6;goto B5c7bb8;
case 0x5c7bb9:c.instructions+=5;goto B5c7bb9;
case 0x5c7bbc:c.instructions+=4;goto B5c7bbc;
case 0x5c7bc2:c.instructions+=3;goto B5c7bc2;
case 0x5c7bc3:c.instructions+=2;goto B5c7bc3;
case 0x5c7bc4:c.instructions+=1;goto B5c7bc4;
case 0x5c7bca:goto L5c7bca;
case 0x5c7bcc:c.instructions+=3;goto B5c7bcc;
case 0x5c7bce:c.instructions+=2;goto B5c7bce;
case 0x5c7bd3:c.instructions+=1;goto B5c7bd3;
case 0x5c7bd8:goto L5c7bd8;
case 0x5c7bdb:c.instructions+=2;goto B5c7bdb;
case 0x5c7bdc:c.instructions+=1;goto B5c7bdc;
case 0x5c7be1:goto L5c7be1;
case 0x5c7be3:c.instructions+=10;goto B5c7be3;
case 0x5c7be6:c.instructions+=9;goto B5c7be6;
case 0x5c7be9:c.instructions+=8;goto B5c7be9;
case 0x5c7beb:c.instructions+=7;goto B5c7beb;
case 0x5c7bee:c.instructions+=6;goto B5c7bee;
case 0x5c7bef:c.instructions+=5;goto B5c7bef;
case 0x5c7bf2:c.instructions+=4;goto B5c7bf2;
case 0x5c7bf8:c.instructions+=3;goto B5c7bf8;
case 0x5c7bf9:c.instructions+=2;goto B5c7bf9;
case 0x5c7bfa:c.instructions+=1;goto B5c7bfa;
case 0x5c7c00:goto L5c7c00;
case 0x5c7c02:c.instructions+=2;goto B5c7c02;
case 0x5c7c04:c.instructions+=1;goto B5c7c04;
case 0x5c7c09:goto L5c7c09;
case 0x5c7c0c:c.instructions+=4;goto B5c7c0c;
case 0x5c7c0e:c.instructions+=3;goto B5c7c0e;
case 0x5c7c11:c.instructions+=2;goto B5c7c11;
case 0x5c7c13:c.instructions+=1;goto B5c7c13;
case 0x5c7c19:goto L5c7c19;
case 0x5c7c20:goto L5c7c20;
case 0x5c7c24:c.instructions+=12;goto B5c7c24;
case 0x5c7c25:c.instructions+=11;goto B5c7c25;
case 0x5c7c29:c.instructions+=10;goto B5c7c29;
case 0x5c7c2a:c.instructions+=9;goto B5c7c2a;
case 0x5c7c2e:c.instructions+=8;goto B5c7c2e;
case 0x5c7c2f:c.instructions+=7;goto B5c7c2f;
case 0x5c7c33:c.instructions+=6;goto B5c7c33;
case 0x5c7c34:c.instructions+=5;goto B5c7c34;
case 0x5c7c35:c.instructions+=4;goto B5c7c35;
case 0x5c7c37:c.instructions+=3;goto B5c7c37;
case 0x5c7c3f:c.instructions+=2;goto B5c7c3f;
case 0x5c7c47:c.instructions+=1;goto B5c7c47;
case 0x5c7c4c:goto L5c7c4c;
case 0x5c7c4f:c.instructions+=2;goto B5c7c4f;
case 0x5c7c52:c.instructions+=1;goto B5c7c52;
case 0x5c7c57:goto L5c7c57;
case 0x5c7c5b:c.instructions+=10;goto B5c7c5b;
case 0x5c7c61:c.instructions+=9;goto B5c7c61;
case 0x5c7c64:c.instructions+=8;goto B5c7c64;
case 0x5c7c66:c.instructions+=7;goto B5c7c66;
case 0x5c7c67:c.instructions+=6;goto B5c7c67;
case 0x5c7c6a:c.instructions+=5;goto B5c7c6a;
case 0x5c7c70:c.instructions+=4;goto B5c7c70;
case 0x5c7c73:c.instructions+=3;goto B5c7c73;
case 0x5c7c74:c.instructions+=2;goto B5c7c74;
case 0x5c7c75:c.instructions+=1;goto B5c7c75;
case 0x5c7c78:goto L5c7c78;
case 0x5c7c7c:c.instructions+=29;goto B5c7c7c;
case 0x5c7c7e:c.instructions+=28;goto B5c7c7e;
case 0x5c7c81:c.instructions+=27;goto B5c7c81;
case 0x5c7c85:c.instructions+=26;goto B5c7c85;
case 0x5c7c86:c.instructions+=25;goto B5c7c86;
case 0x5c7c8c:c.instructions+=24;goto B5c7c8c;
case 0x5c7c8f:c.instructions+=23;goto B5c7c8f;
case 0x5c7c93:c.instructions+=22;goto B5c7c93;
case 0x5c7c97:c.instructions+=21;goto B5c7c97;
case 0x5c7c99:c.instructions+=20;goto B5c7c99;
case 0x5c7c9f:c.instructions+=19;goto B5c7c9f;
case 0x5c7ca3:c.instructions+=18;goto B5c7ca3;
case 0x5c7ca7:c.instructions+=17;goto B5c7ca7;
case 0x5c7cad:c.instructions+=16;goto B5c7cad;
case 0x5c7cb1:c.instructions+=15;goto B5c7cb1;
case 0x5c7cb7:c.instructions+=14;goto B5c7cb7;
case 0x5c7cb9:c.instructions+=13;goto B5c7cb9;
case 0x5c7cbd:c.instructions+=12;goto B5c7cbd;
case 0x5c7cbf:c.instructions+=11;goto B5c7cbf;
case 0x5c7cc3:c.instructions+=10;goto B5c7cc3;
case 0x5c7cc7:c.instructions+=9;goto B5c7cc7;
case 0x5c7ccb:c.instructions+=8;goto B5c7ccb;
case 0x5c7ccf:c.instructions+=7;goto B5c7ccf;
case 0x5c7cd1:c.instructions+=6;goto B5c7cd1;
case 0x5c7cd5:c.instructions+=5;goto B5c7cd5;
case 0x5c7cdb:c.instructions+=4;goto B5c7cdb;
case 0x5c7cdd:c.instructions+=3;goto B5c7cdd;
case 0x5c7cde:c.instructions+=2;goto B5c7cde;
case 0x5c7cdf:c.instructions+=1;goto B5c7cdf;
case 0x5c7ce5:goto L5c7ce5;
case 0x5c7ce9:c.instructions+=32;goto B5c7ce9;
case 0x5c7ced:c.instructions+=31;goto B5c7ced;
case 0x5c7cf1:c.instructions+=30;goto B5c7cf1;
case 0x5c7cf5:c.instructions+=29;goto B5c7cf5;
case 0x5c7cf7:c.instructions+=28;goto B5c7cf7;
case 0x5c7cfb:c.instructions+=27;goto B5c7cfb;
case 0x5c7cff:c.instructions+=26;goto B5c7cff;
case 0x5c7d03:c.instructions+=25;goto B5c7d03;
case 0x5c7d07:c.instructions+=24;goto B5c7d07;
case 0x5c7d0b:c.instructions+=23;goto B5c7d0b;
case 0x5c7d13:c.instructions+=22;goto B5c7d13;
case 0x5c7d1b:c.instructions+=21;goto B5c7d1b;
case 0x5c7d23:c.instructions+=20;goto B5c7d23;
case 0x5c7d27:c.instructions+=19;goto B5c7d27;
case 0x5c7d2b:c.instructions+=18;goto B5c7d2b;
case 0x5c7d33:c.instructions+=17;goto B5c7d33;
case 0x5c7d35:c.instructions+=16;goto B5c7d35;
case 0x5c7d3d:c.instructions+=15;goto B5c7d3d;
case 0x5c7d45:c.instructions+=14;goto B5c7d45;
case 0x5c7d49:c.instructions+=13;goto B5c7d49;
case 0x5c7d51:c.instructions+=12;goto B5c7d51;
case 0x5c7d59:c.instructions+=11;goto B5c7d59;
case 0x5c7d61:c.instructions+=10;goto B5c7d61;
case 0x5c7d66:c.instructions+=9;goto B5c7d66;
case 0x5c7d6a:c.instructions+=8;goto B5c7d6a;
case 0x5c7d75:c.instructions+=7;goto B5c7d75;
case 0x5c7d7c:c.instructions+=6;goto B5c7d7c;
case 0x5c7d87:c.instructions+=5;goto B5c7d87;
case 0x5c7d92:c.instructions+=4;goto B5c7d92;
case 0x5c7d95:c.instructions+=3;goto B5c7d95;
case 0x5c7d97:c.instructions+=2;goto B5c7d97;
case 0x5c7d98:c.instructions+=1;goto B5c7d98;
case 0x5c7d9e:goto L5c7d9e;
case 0x5c7da1:c.instructions+=4;goto B5c7da1;
case 0x5c7da3:c.instructions+=3;goto B5c7da3;
case 0x5c7da5:c.instructions+=2;goto B5c7da5;
case 0x5c7da6:c.instructions+=1;goto B5c7da6;
case 0x5c7dac:goto L5c7dac;
case 0x5c7db1:c.instructions+=8;goto B5c7db1;
case 0x5c7db3:c.instructions+=7;goto B5c7db3;
case 0x5c7db5:c.instructions+=6;goto B5c7db5;
case 0x5c7db9:c.instructions+=5;goto B5c7db9;
case 0x5c7dba:c.instructions+=4;goto B5c7dba;
case 0x5c7dbc:c.instructions+=3;goto B5c7dbc;
case 0x5c7dbe:c.instructions+=2;goto B5c7dbe;
case 0x5c7dbf:c.instructions+=1;goto B5c7dbf;
case 0x5c7dc5:goto L5c7dc5;
case 0x5c7dc8:c.instructions+=3;goto B5c7dc8;
case 0x5c7dca:c.instructions+=2;goto B5c7dca;
case 0x5c7dcb:c.instructions+=1;goto B5c7dcb;
case 0x5c7dd1:goto L5c7dd1;
case 0x5c7dd3:c.instructions+=2;goto B5c7dd3;
case 0x5c7dd4:c.instructions+=1;goto B5c7dd4;
case 0x5c7dd9:goto L5c7dd9;
case 0x5c7ddc:c.instructions+=4;goto B5c7ddc;
case 0x5c7dde:c.instructions+=3;goto B5c7dde;
case 0x5c7de1:c.instructions+=2;goto B5c7de1;
case 0x5c7de3:c.instructions+=1;goto B5c7de3;
case 0x5c7de9:goto L5c7de9;
case 0x5c7dee:c.instructions+=5;goto B5c7dee;
case 0x5c7df0:c.instructions+=4;goto B5c7df0;
case 0x5c7df2:c.instructions+=3;goto B5c7df2;
case 0x5c7df4:c.instructions+=2;goto B5c7df4;
case 0x5c7df5:c.instructions+=1;goto B5c7df5;
case 0x5c7dfb:goto L5c7dfb;
case 0x5c7e00:c.instructions+=5;goto B5c7e00;
case 0x5c7e02:c.instructions+=4;goto B5c7e02;
case 0x5c7e04:c.instructions+=3;goto B5c7e04;
case 0x5c7e06:c.instructions+=2;goto B5c7e06;
case 0x5c7e07:c.instructions+=1;goto B5c7e07;
case 0x5c7e0d:goto L5c7e0d;
case 0x5c7e0f:c.instructions+=2;goto B5c7e0f;
case 0x5c7e11:c.instructions+=1;goto B5c7e11;
case 0x5c7e14:goto L5c7e14;
case 0x5c7e17:c.instructions+=3;goto B5c7e17;
case 0x5c7e19:c.instructions+=2;goto B5c7e19;
case 0x5c7e1a:c.instructions+=1;goto B5c7e1a;
case 0x5c7e20:goto L5c7e20;
case 0x5c7e21:c.instructions+=2;goto B5c7e21;
case 0x5c7e2b:c.instructions+=1;goto B5c7e2b;
case 0x5c7e2c:goto L5c7e2c;
case 0x5c7e32:c.instructions+=1;goto B5c7e32;
case 0x5c7e40:goto L5c7e40;
case 0x5c7e45:c.instructions+=7;goto B5c7e45;
case 0x5c7e4b:c.instructions+=6;goto B5c7e4b;
case 0x5c7e4d:c.instructions+=5;goto B5c7e4d;
case 0x5c7e52:c.instructions+=4;goto B5c7e52;
case 0x5c7e54:c.instructions+=3;goto B5c7e54;
case 0x5c7e55:c.instructions+=2;goto B5c7e55;
case 0x5c7e56:c.instructions+=1;goto B5c7e56;
case 0x5c7e5b:goto L5c7e5b;
case 0x5c7e61:c.instructions+=7;goto B5c7e61;
case 0x5c7e66:c.instructions+=6;goto B5c7e66;
case 0x5c7e68:c.instructions+=5;goto B5c7e68;
case 0x5c7e6d:c.instructions+=4;goto B5c7e6d;
case 0x5c7e6f:c.instructions+=3;goto B5c7e6f;
case 0x5c7e70:c.instructions+=2;goto B5c7e70;
case 0x5c7e71:c.instructions+=1;goto B5c7e71;
case 0x5c7e76:goto L5c7e76;
case 0x5c7e79:c.instructions+=1;goto B5c7e79;
case 0x5c7e80:goto L5c7e80;
case 0x5c7e84:c.instructions+=8;goto B5c7e84;
case 0x5c7e88:c.instructions+=7;goto B5c7e88;
case 0x5c7e8c:c.instructions+=6;goto B5c7e8c;
case 0x5c7e8d:c.instructions+=5;goto B5c7e8d;
case 0x5c7e91:c.instructions+=4;goto B5c7e91;
case 0x5c7e92:c.instructions+=3;goto B5c7e92;
case 0x5c7e93:c.instructions+=2;goto B5c7e93;
case 0x5c7e94:c.instructions+=1;goto B5c7e94;
case 0x5c7e99:goto L5c7e99;
case 0x5c7e9c:c.instructions+=1;goto B5c7e9c;
case 0x5c7ea0:goto L5c7ea0;
case 0x5c7ea4:c.instructions+=6;goto B5c7ea4;
case 0x5c7ea8:c.instructions+=5;goto B5c7ea8;
case 0x5c7eac:c.instructions+=4;goto B5c7eac;
case 0x5c7ead:c.instructions+=3;goto B5c7ead;
case 0x5c7eae:c.instructions+=2;goto B5c7eae;
case 0x5c7eaf:c.instructions+=1;goto B5c7eaf;
case 0x5c7eb4:goto L5c7eb4;
case 0x5c7eb7:c.instructions+=1;goto B5c7eb7;
case 0x5c7ec0:goto L5c7ec0;
case 0x5c7ec3:c.instructions+=8;goto B5c7ec3;
case 0x5c7ec4:c.instructions+=7;goto B5c7ec4;
case 0x5c7ec8:c.instructions+=6;goto B5c7ec8;
case 0x5c7ec9:c.instructions+=5;goto B5c7ec9;
case 0x5c7eca:c.instructions+=4;goto B5c7eca;
case 0x5c7ecd:c.instructions+=3;goto B5c7ecd;
case 0x5c7ecf:c.instructions+=2;goto B5c7ecf;
case 0x5c7ed1:c.instructions+=1;goto B5c7ed1;
case 0x5c7ed3:goto L5c7ed3;
case 0x5c7ed4:c.instructions+=1;goto B5c7ed4;
case 0x5c7ed9:goto L5c7ed9;
case 0x5c7edc:c.instructions+=2;goto B5c7edc;
case 0x5c7edd:c.instructions+=1;goto B5c7edd;
case 0x5c7ee2:goto L5c7ee2;
case 0x5c7ee5:c.instructions+=5;goto B5c7ee5;
case 0x5c7ee6:c.instructions+=4;goto B5c7ee6;
case 0x5c7ee7:c.instructions+=3;goto B5c7ee7;
case 0x5c7ee8:c.instructions+=2;goto B5c7ee8;
case 0x5c7eeb:c.instructions+=1;goto B5c7eeb;
case 0x5c7eee:goto L5c7eee;
case 0x5c7eef:c.instructions+=2;goto B5c7eef;
case 0x5c7ef0:c.instructions+=1;goto B5c7ef0;
case 0x5c7ef5:goto L5c7ef5;
case 0x5c7ef8:c.instructions+=5;goto B5c7ef8;
case 0x5c7efe:c.instructions+=4;goto B5c7efe;
case 0x5c7f01:c.instructions+=3;goto B5c7f01;
case 0x5c7f04:c.instructions+=2;goto B5c7f04;
case 0x5c7f08:c.instructions+=1;goto B5c7f08;
case 0x5c7f0a:goto L5c7f0a;
case 0x5c7f12:c.instructions+=1;goto B5c7f12;
case 0x5c7f14:goto L5c7f14;
case 0x5c7f1a:c.instructions+=1;goto B5c7f1a;
case 0x5c7f1e:goto L5c7f1e;
case 0x5c7f22:c.instructions+=4;goto B5c7f22;
case 0x5c7f28:c.instructions+=3;goto B5c7f28;
case 0x5c7f2a:c.instructions+=2;goto B5c7f2a;
case 0x5c7f2d:c.instructions+=1;goto B5c7f2d;
case 0x5c7f2f:goto L5c7f2f;
case 0x5c7f33:c.instructions+=1;goto B5c7f33;
case 0x5c7f37:goto L5c7f37;
case 0x5c7f3b:c.instructions+=4;goto B5c7f3b;
case 0x5c7f41:c.instructions+=3;goto B5c7f41;
case 0x5c7f43:c.instructions+=2;goto B5c7f43;
case 0x5c7f46:c.instructions+=1;goto B5c7f46;
case 0x5c7f48:goto L5c7f48;
case 0x5c7f4c:c.instructions+=1;goto B5c7f4c;
case 0x5c7f50:goto L5c7f50;
case 0x5c7f53:c.instructions+=6;goto B5c7f53;
case 0x5c7f56:c.instructions+=5;goto B5c7f56;
case 0x5c7f59:c.instructions+=4;goto B5c7f59;
case 0x5c7f61:c.instructions+=3;goto B5c7f61;
case 0x5c7f64:c.instructions+=2;goto B5c7f64;
case 0x5c7f68:c.instructions+=1;goto B5c7f68;
case 0x5c7f6a:goto L5c7f6a;
case 0x5c7f6d:c.instructions+=1;goto B5c7f6d;
case 0x5c7f6f:goto L5c7f6f;
case 0x5c7f72:c.instructions+=1;goto B5c7f72;
case 0x5c7f74:goto L5c7f74;
case 0x5c7f77:c.instructions+=1;goto B5c7f77;
case 0x5c7f79:goto L5c7f79;
case 0x5c7f7f:c.instructions+=5;goto B5c7f7f;
case 0x5c7f84:c.instructions+=4;goto B5c7f84;
case 0x5c7f8a:c.instructions+=3;goto B5c7f8a;
case 0x5c7f8e:c.instructions+=2;goto B5c7f8e;
case 0x5c7f92:c.instructions+=1;goto B5c7f92;
case 0x5c7f96:goto L5c7f96;
case 0x5c7f99:c.instructions+=1;goto B5c7f99;
case 0x5c7f9b:goto L5c7f9b;
case 0x5c7f9e:c.instructions+=1;goto B5c7f9e;
case 0x5c7fa0:goto L5c7fa0;
case 0x5c7fa8:goto L5c7fa8;
case 0x5c7faf:c.instructions+=6;goto B5c7faf;
case 0x5c7fb3:c.instructions+=5;goto B5c7fb3;
case 0x5c7fb4:c.instructions+=4;goto B5c7fb4;
case 0x5c7fb8:c.instructions+=3;goto B5c7fb8;
case 0x5c7fbc:c.instructions+=2;goto B5c7fbc;
case 0x5c7fc2:c.instructions+=1;goto B5c7fc2;
case 0x5c7fc7:goto L5c7fc7;
case 0x5c7fc9:c.instructions+=2;goto B5c7fc9;
case 0x5c7fca:c.instructions+=1;goto B5c7fca;
case 0x5c7fcf:goto L5c7fcf;
case 0x5c7fd3:c.instructions+=2;goto B5c7fd3;
case 0x5c7fd4:c.instructions+=1;goto B5c7fd4;
case 0x5c7fd9:goto L5c7fd9;
case 0x5c7fdd:c.instructions+=7;goto B5c7fdd;
case 0x5c7fe4:c.instructions+=6;goto B5c7fe4;
case 0x5c7fe8:c.instructions+=5;goto B5c7fe8;
case 0x5c7fee:c.instructions+=4;goto B5c7fee;
case 0x5c7ff2:c.instructions+=3;goto B5c7ff2;
case 0x5c7ff6:c.instructions+=2;goto B5c7ff6;
case 0x5c7ffa:c.instructions+=1;goto B5c7ffa;
default:missing_instruction(c.pc);}
B5c7001:L5c7001:{c.instructions+=7;NFSU2_TR(0x5c7001);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
s4(u32(r4(R+28)),r4(U+0));
}
B5c7003:{NFSU2_TR(0x5c7003);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c7006:{NFSU2_TR(0x5c7006);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c7009:{NFSU2_TR(0x5c7009);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B5c700a:{NFSU2_TR(0x5c700a);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B5c700d:{NFSU2_TR(0x5c700d);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B5c7010:{NFSU2_TR(0x5c7010);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x5c6fe0u,5c6);}
}
B5c7012:L5c7012:{c.instructions+=3;NFSU2_TR(0x5c7012);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7013:{NFSU2_TR(0x5c7013);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7014:{NFSU2_TR(0x5c7014);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c7019ull));
TAIL_STATIC(0x5bcb70u,5bc);
}
B5c7019:L5c7019:{c.instructions+=2;NFSU2_TR(0x5c7019);
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
B5c701c:{NFSU2_TR(0x5c701c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c7021ull));
TAIL_STATIC(0x5bdf90u,5bd);
}
B5c7021:L5c7021:{c.instructions+=4;NFSU2_TR(0x5c7021);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xfull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xfull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xfull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5c7025:{NFSU2_TR(0x5c7025);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5c7026:{NFSU2_TR(0x5c7026);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5c7027:{NFSU2_TR(0x5c7027);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c7049;}}
}
B5c7029:L5c7029:{c.instructions+=10;NFSU2_TR(0x5c7029);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c702c:{NFSU2_TR(0x5c702c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c702e:{NFSU2_TR(0x5c702e);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7030:{NFSU2_TR(0x5c7030);
u8 U[4];
w4(U+0,u32(u32(u32(0x10cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5c7037:{NFSU2_TR(0x5c7037);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7038:{NFSU2_TR(0x5c7038);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c703b:{NFSU2_TR(0x5c703b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c7041:{NFSU2_TR(0x5c7041);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7042:{NFSU2_TR(0x5c7042);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7043:{NFSU2_TR(0x5c7043);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c7049ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c7049:L5c7049:{c.instructions+=6;NFSU2_TR(0x5c7049);
__builtin_memmove((R+8),gp(0x870910),4);
}
B5c704f:{NFSU2_TR(0x5c704f);
__builtin_memmove(gp(0x87092c),(R+20),4);
}
B5c7055:{NFSU2_TR(0x5c7055);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c7058:{NFSU2_TR(0x5c7058);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c705a:{NFSU2_TR(0x5c705a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c705b:{NFSU2_TR(0x5c705b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c7061ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c7061:L5c7061:{c.instructions+=9;NFSU2_TR(0x5c7061);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c7066:{NFSU2_TR(0x5c7066);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c7068:{NFSU2_TR(0x5c7068);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c706a:{NFSU2_TR(0x5c706a);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5c706e:{NFSU2_TR(0x5c706e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c706f:{NFSU2_TR(0x5c706f);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7071:{NFSU2_TR(0x5c7071);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7073:{NFSU2_TR(0x5c7073);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7074:{NFSU2_TR(0x5c7074);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c707aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c707a:L5c707a:{c.instructions+=4;NFSU2_TR(0x5c707a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c707d:{NFSU2_TR(0x5c707d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c707f:{NFSU2_TR(0x5c707f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7080:{NFSU2_TR(0x5c7080);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c7086ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c7086:L5c7086:{c.instructions+=3;NFSU2_TR(0x5c7086);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5c7088:{NFSU2_TR(0x5c7088);
__builtin_memmove((R+4),(R+24),4);
}
B5c708a:{NFSU2_TR(0x5c708a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c708dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c708d:L5c708d:{c.instructions+=4;NFSU2_TR(0x5c708d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5c7090:{NFSU2_TR(0x5c7090);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c7092:{NFSU2_TR(0x5c7092);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7093:{NFSU2_TR(0x5c7093);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c7099ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c7099:L5c7099:{c.instructions+=3;NFSU2_TR(0x5c7099);
__builtin_memmove((R+24),gp(0x870848),4);
}
B5c709f:{NFSU2_TR(0x5c709f);
__builtin_memmove(gp(0x870910),(R+20),4);
}
B5c70a5:{NFSU2_TR(0x5c70a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c70aaull));
TAIL_STATIC(0x5cf420u,5cf);
}
B5c70aa:L5c70aa:{c.instructions+=7;NFSU2_TR(0x5c70aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c70ad:{NFSU2_TR(0x5c70ad);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c70b2:{NFSU2_TR(0x5c70b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c70b4:{NFSU2_TR(0x5c70b4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c70b5:{NFSU2_TR(0x5c70b5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c70b6:{NFSU2_TR(0x5c70b6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c70b7:{NFSU2_TR(0x5c70b7);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c70bdull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c70bd:L5c70bd:{c.instructions+=6;NFSU2_TR(0x5c70bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c70c0:{NFSU2_TR(0x5c70c0);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c70c5:{NFSU2_TR(0x5c70c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c70c7:{NFSU2_TR(0x5c70c7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c70c8:{NFSU2_TR(0x5c70c8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c70c9:{NFSU2_TR(0x5c70c9);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c70cfull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c70cf:L5c70cf:{c.instructions+=14;NFSU2_TR(0x5c70cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c70d2:{NFSU2_TR(0x5c70d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c70d5:{NFSU2_TR(0x5c70d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c70d9:{NFSU2_TR(0x5c70d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c70dd:{NFSU2_TR(0x5c70dd);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c70e2:{NFSU2_TR(0x5c70e2);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5c70e6:{NFSU2_TR(0x5c70e6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c70e7:{NFSU2_TR(0x5c70e7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c70eb:{NFSU2_TR(0x5c70eb);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c70ef:{NFSU2_TR(0x5c70ef);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c70f7:{NFSU2_TR(0x5c70f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c70ff:{NFSU2_TR(0x5c70ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c7101:{NFSU2_TR(0x5c7101);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7102:{NFSU2_TR(0x5c7102);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c7108ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c7108:L5c7108:{c.instructions+=6;NFSU2_TR(0x5c7108);
__builtin_memmove(gp(0x870848),(R+24),4);
}
B5c710e:{NFSU2_TR(0x5c710e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c710f:{NFSU2_TR(0x5c710f);
__builtin_memmove(gp(0x870910),(R+20),4);
}
B5c7115:{NFSU2_TR(0x5c7115);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5c7116:{NFSU2_TR(0x5c7116);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x140ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x140ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x140ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5c711c:{NFSU2_TR(0x5c711c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c7120:L5c7120:{c.instructions+=8;NFSU2_TR(0x5c7120);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c7124:{NFSU2_TR(0x5c7124);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c7128:{NFSU2_TR(0x5c7128);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c712a:{NFSU2_TR(0x5c712a);
u8 U[4];
w4(U+0,u32(0x7ff190ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c712f:{NFSU2_TR(0x5c712f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7131:{NFSU2_TR(0x5c7131);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7132:{NFSU2_TR(0x5c7132);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7133:{NFSU2_TR(0x5c7133);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c7138ull));
TAIL_STATIC(0x5c5f70u,5c5);
}
B5c7138:L5c7138:{c.instructions+=2;NFSU2_TR(0x5c7138);
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
B5c713b:{NFSU2_TR(0x5c713b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c7140:L5c7140:{c.instructions+=13;NFSU2_TR(0x5c7140);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7141:{NFSU2_TR(0x5c7141);
__builtin_memmove((R+20),(R+16),4);
}
B5c7143:{NFSU2_TR(0x5c7143);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5c7146:{NFSU2_TR(0x5c7146);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0xf4ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0xf4ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xf4ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5c714c:{NFSU2_TR(0x5c714c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c714d:{NFSU2_TR(0x5c714d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c714e:{NFSU2_TR(0x5c714e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5c7151:{NFSU2_TR(0x5c7151);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5c7153:{NFSU2_TR(0x5c7153);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7154:{NFSU2_TR(0x5c7154);
u8 U[4];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5c715b:{NFSU2_TR(0x5c715b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c715c:{NFSU2_TR(0x5c715c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c715d:{NFSU2_TR(0x5c715d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c7160ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c7160:L5c7160:{c.instructions+=6;NFSU2_TR(0x5c7160);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c7165:{NFSU2_TR(0x5c7165);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c7167:{NFSU2_TR(0x5c7167);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7168:{NFSU2_TR(0x5c7168);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c716a:{NFSU2_TR(0x5c716a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c716b:{NFSU2_TR(0x5c716b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c7171ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c7171:L5c7171:{c.instructions+=5;NFSU2_TR(0x5c7171);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c7176:{NFSU2_TR(0x5c7176);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c7178:{NFSU2_TR(0x5c7178);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c717a:{NFSU2_TR(0x5c717a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c717b:{NFSU2_TR(0x5c717b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c7181ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c7181:L5c7181:{c.instructions+=4;NFSU2_TR(0x5c7181);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5c7184:{NFSU2_TR(0x5c7184);
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
B5c7186:{NFSU2_TR(0x5c7186);
__builtin_memmove((R+12),gp(0x86eb40),4);
}
B5c718c:{NFSU2_TR(0x5c718c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c7194;}}
}
B5c718e:L5c718e:{c.instructions+=1;NFSU2_TR(0x5c718e);
__builtin_memmove((R+12),gp(0x86eb48),4);
}
B5c7194:L5c7194:{c.instructions+=4;NFSU2_TR(0x5c7194);
__builtin_memmove(gp(0x870910),(R+12),4);
}
B5c719a:{NFSU2_TR(0x5c719a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c719c:{NFSU2_TR(0x5c719c);
__builtin_memmove((R+4),(R+12),4);
}
B5c719e:{NFSU2_TR(0x5c719e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c71a1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c71a1:L5c71a1:{c.instructions+=6;NFSU2_TR(0x5c71a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c71a4:{NFSU2_TR(0x5c71a4);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c71a9:{NFSU2_TR(0x5c71a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c71ab:{NFSU2_TR(0x5c71ab);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c71ac:{NFSU2_TR(0x5c71ac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c71ad:{NFSU2_TR(0x5c71ad);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c71b3ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c71b3:L5c71b3:{c.instructions+=7;NFSU2_TR(0x5c71b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c71b6:{NFSU2_TR(0x5c71b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c71b8:{NFSU2_TR(0x5c71b8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c71ba:{NFSU2_TR(0x5c71ba);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5c71be:{NFSU2_TR(0x5c71be);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c71bf:{NFSU2_TR(0x5c71bf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c71c0:{NFSU2_TR(0x5c71c0);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x104ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c71c6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c71c6:L5c71c6:{c.instructions+=2;NFSU2_TR(0x5c71c6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c71c8:{NFSU2_TR(0x5c71c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c71cdull));
TAIL_STATIC(0x48b1e0u,48b);
}
B5c71cd:L5c71cd:{c.instructions+=5;NFSU2_TR(0x5c71cd);
__builtin_memmove((R+24),(R+0),4);
}
B5c71cf:{NFSU2_TR(0x5c71cf);
u8 U[4];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5c71d6:{NFSU2_TR(0x5c71d6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c71d7:{NFSU2_TR(0x5c71d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c71db:{NFSU2_TR(0x5c71db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c71e0ull));
TAIL_STATIC(0x43c780u,43c);
}
B5c71e0:L5c71e0:{c.instructions+=5;NFSU2_TR(0x5c71e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5c71e2:{NFSU2_TR(0x5c71e2);
__builtin_memmove((R+28),(R+0),4);
}
B5c71e4:{NFSU2_TR(0x5c71e4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5c71e7:{NFSU2_TR(0x5c71e7);
w4(R+4,u32(0x10ull));
}
B5c71ec:{NFSU2_TR(0x5c71ec);
u8 U[4];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B5c71f3:L5c71f3:{c.instructions+=1;NFSU2_TR(0x5c71f3);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L5c71f5;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5c71f3u);}goto L5c71f3;}
}
B5c71f5:L5c71f5:{c.instructions+=6;NFSU2_TR(0x5c71f5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5c71f8:{NFSU2_TR(0x5c71f8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c71f9:{NFSU2_TR(0x5c71f9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c71fa:{NFSU2_TR(0x5c71fa);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x80ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x80ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5c71ff:{NFSU2_TR(0x5c71ff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7200:{NFSU2_TR(0x5c7200);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c7205ull));
TAIL_STATIC(0x63cedbu,63c);
}
B5c7205:L5c7205:{c.instructions+=10;NFSU2_TR(0x5c7205);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c7209:{NFSU2_TR(0x5c7209);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5c720b:{NFSU2_TR(0x5c720b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5c720e:{NFSU2_TR(0x5c720e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c720f:{NFSU2_TR(0x5c720f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7210:{NFSU2_TR(0x5c7210);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x80ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x80ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5c7215:{NFSU2_TR(0x5c7215);
__builtin_memmove((R+28),(R+8),4);
}
B5c7217:{NFSU2_TR(0x5c7217);
w4(R+4,u32(0x10ull));
}
B5c721c:{NFSU2_TR(0x5c721c);
u8 U[4];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B5c7223:{NFSU2_TR(0x5c7223);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7224:L5c7224:{c.instructions+=1;NFSU2_TR(0x5c7224);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L5c7226;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5c7224u);}goto L5c7224;}
}
B5c7226:L5c7226:{c.instructions+=1;NFSU2_TR(0x5c7226);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c722bull));
TAIL_STATIC(0x63cedbu,63c);
}
B5c722b:L5c722b:{c.instructions+=4;NFSU2_TR(0x5c722b);
u8 U[4];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5c7232:{NFSU2_TR(0x5c7232);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7234:{NFSU2_TR(0x5c7234);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7235:{NFSU2_TR(0x5c7235);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c723aull));
TAIL_STATIC(0x5bdde0u,5bd);
}
B5c723a:L5c723a:{c.instructions+=3;NFSU2_TR(0x5c723a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5c723d:{NFSU2_TR(0x5c723d);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5c7241:{NFSU2_TR(0x5c7241);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c7246ull));
TAIL_STATIC(0x5bb1c0u,5bb);
}
B5c7246:L5c7246:{c.instructions+=12;NFSU2_TR(0x5c7246);
{u32 ea_=u32(r4(R+16)+u32(184u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5c724d:{NFSU2_TR(0x5c724d);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c7254:{NFSU2_TR(0x5c7254);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5c7256:{NFSU2_TR(0x5c7256);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c725e:{NFSU2_TR(0x5c725e);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c7266:{NFSU2_TR(0x5c7266);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(MODV+264),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c726e:{NFSU2_TR(0x5c726e);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c7276:{NFSU2_TR(0x5c7276);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(MODV+268),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c727e:{NFSU2_TR(0x5c727e);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(MODV+272),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c7286:{NFSU2_TR(0x5c7286);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c728e:{NFSU2_TR(0x5c728e);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(MODV+276),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c7296:{NFSU2_TR(0x5c7296);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5c729e;}}
}
B5c7298:L5c7298:{c.instructions+=1;NFSU2_TR(0x5c7298);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5c729e:L5c729e:{c.instructions+=6;NFSU2_TR(0x5c729e);
{u32 ea_=u32(u32(8005580u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B5c72a4:{NFSU2_TR(0x5c72a4);
u8 U[8];
w4(U+0,u32(u32(u32(0xbcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c72ab:{NFSU2_TR(0x5c72ab);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5c72ad:{NFSU2_TR(0x5c72ad);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c72b1:{NFSU2_TR(0x5c72b1);
{u32 ea_=u32(r4(R+16)+u32(188u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5c72b8:{NFSU2_TR(0x5c72b8);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5c72c0;}}
}
B5c72ba:L5c72ba:{c.instructions+=1;NFSU2_TR(0x5c72ba);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5c72c0:L5c72c0:{c.instructions+=14;NFSU2_TR(0x5c72c0);
{u32 ea_=u32(u32(8005584u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B5c72c6:{NFSU2_TR(0x5c72c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c72c9:{NFSU2_TR(0x5c72c9);
__builtin_memmove((R+24),(R+4),4);
}
B5c72cb:{NFSU2_TR(0x5c72cb);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B5c72ce:{NFSU2_TR(0x5c72ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c72d2:{NFSU2_TR(0x5c72d2);
__builtin_memmove((R+24),(R+4),4);
}
B5c72d4:{NFSU2_TR(0x5c72d4);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B5c72d7:{NFSU2_TR(0x5c72d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c72db:{NFSU2_TR(0x5c72db);
__builtin_memmove((R+24),(R+4),4);
}
B5c72dd:{NFSU2_TR(0x5c72dd);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5c72df:{NFSU2_TR(0x5c72df);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B5c72e2:{NFSU2_TR(0x5c72e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c72e6:{NFSU2_TR(0x5c72e6);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c72ea:{NFSU2_TR(0x5c72ea);
__builtin_memmove((R+12),(R+12),4);
}
B5c72f0:L5c72f0:{c.instructions+=10;NFSU2_TR(0x5c72f0);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5c72f4:{NFSU2_TR(0x5c72f4);
u8 U[13];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),1);
s1(u32(r4(U+8)),r1(U+12));
}
B5c72fb:{NFSU2_TR(0x5c72fb);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5c72ff:{NFSU2_TR(0x5c72ff);
u8 U[13];
w4(U+0,u32(u32(u32(0x81ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),1);
s1(u32(r4(U+8)),r1(U+12));
}
B5c7306:{NFSU2_TR(0x5c7306);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5c730a:{NFSU2_TR(0x5c730a);
u8 U[13];
w4(U+0,u32(u32(u32(0x82ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),1);
s1(u32(r4(U+8)),r1(U+12));
}
B5c7311:{NFSU2_TR(0x5c7311);
u8 U[13];
w4(U+0,u32(u32(u32(0x83ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),1);
s1(u32(r4(U+8)),r1(U+12));
}
B5c7318:{NFSU2_TR(0x5c7318);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5c7319:{NFSU2_TR(0x5c7319);
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
B5c731c:{NFSU2_TR(0x5c731c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5c72f0u);}goto L5c72f0;}}
}
B5c731e:L5c731e:{c.instructions+=24;NFSU2_TR(0x5c731e);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c7322:{NFSU2_TR(0x5c7322);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c7327:{NFSU2_TR(0x5c7327);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5c7329:{NFSU2_TR(0x5c7329);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c732b:{NFSU2_TR(0x5c732b);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5c732f:{NFSU2_TR(0x5c732f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7331:{NFSU2_TR(0x5c7331);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c7335:{NFSU2_TR(0x5c7335);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7337:{NFSU2_TR(0x5c7337);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5c7339:{NFSU2_TR(0x5c7339);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c733a:{NFSU2_TR(0x5c733a);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5c733e:{NFSU2_TR(0x5c733e);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c7344:{NFSU2_TR(0x5c7344);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5c7348:{NFSU2_TR(0x5c7348);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5c734c:{NFSU2_TR(0x5c734c);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5c734e:{NFSU2_TR(0x5c734e);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c7352:{NFSU2_TR(0x5c7352);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c7356:{NFSU2_TR(0x5c7356);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c735c:{NFSU2_TR(0x5c735c);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5c7360:{NFSU2_TR(0x5c7360);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5c7367:{NFSU2_TR(0x5c7367);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5c7369:{NFSU2_TR(0x5c7369);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c7370:{NFSU2_TR(0x5c7370);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c7377:{NFSU2_TR(0x5c7377);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c737dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c737d:L5c737d:{c.instructions+=6;NFSU2_TR(0x5c737d);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c7382:{NFSU2_TR(0x5c7382);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c7384:{NFSU2_TR(0x5c7384);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7386:{NFSU2_TR(0x5c7386);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7388:{NFSU2_TR(0x5c7388);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7389:{NFSU2_TR(0x5c7389);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c738full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c738f:L5c738f:{c.instructions+=3;NFSU2_TR(0x5c738f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c7392:{NFSU2_TR(0x5c7392);
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
B5c7394:{NFSU2_TR(0x5c7394);
if(r1(R+518)){{goto L5c73af;}}
}
B5c7396:L5c7396:{c.instructions+=8;NFSU2_TR(0x5c7396);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c7399:{NFSU2_TR(0x5c7399);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c739b:{NFSU2_TR(0x5c739b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c739c:{NFSU2_TR(0x5c739c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c739f:{NFSU2_TR(0x5c739f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x13cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c73a5:{NFSU2_TR(0x5c73a5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c73a6:{NFSU2_TR(0x5c73a6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c73a7:{NFSU2_TR(0x5c73a7);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c73adull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c73ad:L5c73ad:{c.instructions+=1;NFSU2_TR(0x5c73ad);
{goto L5c73e8;}
}
B5c73af:L5c73af:{c.instructions+=4;NFSU2_TR(0x5c73af);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5c73b2:{NFSU2_TR(0x5c73b2);
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
B5c73b4:{NFSU2_TR(0x5c73b4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c73b6:{NFSU2_TR(0x5c73b6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c73d8;}}
}
B5c73b8:L5c73b8:{c.instructions+=3;NFSU2_TR(0x5c73b8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c73ba:{NFSU2_TR(0x5c73ba);
u8 U[4];
w4(U+0,u32(0x7a3590ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c73bf:{NFSU2_TR(0x5c73bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c73c4ull));
TAIL_STATIC(0x43db50u,43d);
}
B5c73c4:L5c73c4:{c.instructions+=3;NFSU2_TR(0x5c73c4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5c73c7:{NFSU2_TR(0x5c73c7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c73c8:{NFSU2_TR(0x5c73c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c73cdull));
TAIL_STATIC(0x4901d0u,490);
}
B5c73cd:L5c73cd:{c.instructions+=2;NFSU2_TR(0x5c73cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c73ce:{NFSU2_TR(0x5c73ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c73d3ull));
TAIL_STATIC(0x5bcc30u,5bc);
}
B5c73d3:L5c73d3:{c.instructions+=2;NFSU2_TR(0x5c73d3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5c73d6:{NFSU2_TR(0x5c73d6);
{goto L5c73ef;}
}
B5c73d8:L5c73d8:{c.instructions+=5;NFSU2_TR(0x5c73d8);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c73dd:{NFSU2_TR(0x5c73dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c73df:{NFSU2_TR(0x5c73df);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c73e1:{NFSU2_TR(0x5c73e1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c73e2:{NFSU2_TR(0x5c73e2);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x104ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c73e8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c73e8:L5c73e8:{c.instructions+=3;NFSU2_TR(0x5c73e8);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5c73eb:{NFSU2_TR(0x5c73eb);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5c73ed:{NFSU2_TR(0x5c73ed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c7412;}}
}
B5c73ef:L5c73ef:{c.instructions+=3;NFSU2_TR(0x5c73ef);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c73f1:{NFSU2_TR(0x5c73f1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c73f3:{NFSU2_TR(0x5c73f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c73f8ull));
TAIL_STATIC(0x5bcb70u,5bc);
}
B5c73f8:L5c73f8:{c.instructions+=7;NFSU2_TR(0x5c73f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c73fb:{NFSU2_TR(0x5c73fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c73fe:{NFSU2_TR(0x5c73fe);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B5c7402:{NFSU2_TR(0x5c7402);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7403:{NFSU2_TR(0x5c7403);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7404:{NFSU2_TR(0x5c7404);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7405:{NFSU2_TR(0x5c7405);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c740aull));
TAIL_STATIC(0x5bcbc0u,5bc);
}
B5c740a:L5c740a:{c.instructions+=2;NFSU2_TR(0x5c740a);
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
B5c740d:{NFSU2_TR(0x5c740d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c7412ull));
TAIL_STATIC(0x5bdf90u,5bd);
}
B5c7412:L5c7412:{c.instructions+=5;NFSU2_TR(0x5c7412);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7414:{NFSU2_TR(0x5c7414);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5c7418:{NFSU2_TR(0x5c7418);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c741a:{NFSU2_TR(0x5c741a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c741b:{NFSU2_TR(0x5c741b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c7420ull));
TAIL_STATIC(0x5c5020u,5c5);
}
B5c7420:L5c7420:{c.instructions+=4;NFSU2_TR(0x5c7420);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5c7422:{NFSU2_TR(0x5c7422);
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
B5c7425:{NFSU2_TR(0x5c7425);
__builtin_memmove((R+4),(R+12),4);
}
B5c7427:{NFSU2_TR(0x5c7427);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c742aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c742a:L5c742a:{c.instructions+=4;NFSU2_TR(0x5c742a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5c742d:{NFSU2_TR(0x5c742d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c742f:{NFSU2_TR(0x5c742f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7430:{NFSU2_TR(0x5c7430);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c7436ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c7436:L5c7436:{c.instructions+=7;NFSU2_TR(0x5c7436);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c743b:{NFSU2_TR(0x5c743b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c743d:{NFSU2_TR(0x5c743d);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c743f:{NFSU2_TR(0x5c743f);
s4(0x870910,u32(0x0ull));
}
B5c7449:{NFSU2_TR(0x5c7449);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c744b:{NFSU2_TR(0x5c744b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c744c:{NFSU2_TR(0x5c744c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c7452ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c7452:L5c7452:{c.instructions+=6;NFSU2_TR(0x5c7452);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c7457:{NFSU2_TR(0x5c7457);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c7459:{NFSU2_TR(0x5c7459);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c745b:{NFSU2_TR(0x5c745b);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c745d:{NFSU2_TR(0x5c745d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c745e:{NFSU2_TR(0x5c745e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c7464ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c7464:L5c7464:{c.instructions+=6;NFSU2_TR(0x5c7464);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5c7465:{NFSU2_TR(0x5c7465);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c7466:{NFSU2_TR(0x5c7466);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5c7467:{NFSU2_TR(0x5c7467);
__builtin_memmove((R+16),(R+20),4);
}
B5c7469:{NFSU2_TR(0x5c7469);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5c746a:{NFSU2_TR(0x5c746a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c7470:L5c7470:{c.instructions+=8;NFSU2_TR(0x5c7470);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7471:{NFSU2_TR(0x5c7471);
__builtin_memmove((R+20),(R+16),4);
}
B5c7473:{NFSU2_TR(0x5c7473);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5c7476:{NFSU2_TR(0x5c7476);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xa4ull))));
}
B5c747c:{NFSU2_TR(0x5c747c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c747d:{NFSU2_TR(0x5c747d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c747e:{NFSU2_TR(0x5c747e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c747f:{NFSU2_TR(0x5c747f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c7484ull));
TAIL_STATIC(0x5cf420u,5cf);
}
B5c7484:L5c7484:{c.instructions+=8;NFSU2_TR(0x5c7484);
__builtin_memmove((R+8),gp(0x86e770),4);
}
B5c748a:{NFSU2_TR(0x5c748a);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c748f:{NFSU2_TR(0x5c748f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c7491:{NFSU2_TR(0x5c7491);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7492:{NFSU2_TR(0x5c7492);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5c7494:{NFSU2_TR(0x5c7494);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7495:{NFSU2_TR(0x5c7495);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7496:{NFSU2_TR(0x5c7496);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c749cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c749c:L5c749c:{c.instructions+=6;NFSU2_TR(0x5c749c);
__builtin_memmove((R+8),gp(0x86e774),4);
}
B5c74a2:{NFSU2_TR(0x5c74a2);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c74a7:{NFSU2_TR(0x5c74a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c74a9:{NFSU2_TR(0x5c74a9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c74aa:{NFSU2_TR(0x5c74aa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c74ab:{NFSU2_TR(0x5c74ab);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c74b1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c74b1:L5c74b1:{c.instructions+=14;NFSU2_TR(0x5c74b1);
__builtin_memmove((R+4),gp(0x86e780),4);
}
B5c74b7:{NFSU2_TR(0x5c74b7);
__builtin_memmove((R+0),gp(0x86e77c),4);
}
B5c74bc:{NFSU2_TR(0x5c74bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c74c0:{NFSU2_TR(0x5c74c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c74c4:{NFSU2_TR(0x5c74c4);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c74c9:{NFSU2_TR(0x5c74c9);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5c74cd:{NFSU2_TR(0x5c74cd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c74ce:{NFSU2_TR(0x5c74ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c74d2:{NFSU2_TR(0x5c74d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c74d6:{NFSU2_TR(0x5c74d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c74da:{NFSU2_TR(0x5c74da);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c74e2:{NFSU2_TR(0x5c74e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c74e4:{NFSU2_TR(0x5c74e4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c74e5:{NFSU2_TR(0x5c74e5);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c74ebull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c74eb:L5c74eb:{c.instructions+=5;NFSU2_TR(0x5c74eb);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5c74ef:{NFSU2_TR(0x5c74ef);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c74f0:{NFSU2_TR(0x5c74f0);
s4(0x870848,u32(0x86e768ull));
}
B5c74fa:{NFSU2_TR(0x5c74fa);
__builtin_memmove(gp(0x870910),(R+12),4);
}
B5c7500:{NFSU2_TR(0x5c7500);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c7505ull));
TAIL_STATIC(0x43c780u,43c);
}
B5c7505:L5c7505:{c.instructions+=8;NFSU2_TR(0x5c7505);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c750a:{NFSU2_TR(0x5c750a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c750c:{NFSU2_TR(0x5c750c);
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
B5c750f:{NFSU2_TR(0x5c750f);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5c7513:{NFSU2_TR(0x5c7513);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7514:{NFSU2_TR(0x5c7514);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7519:{NFSU2_TR(0x5c7519);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c751a:{NFSU2_TR(0x5c751a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c7520ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c7520:L5c7520:{c.instructions+=7;NFSU2_TR(0x5c7520);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c7525:{NFSU2_TR(0x5c7525);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c7527:{NFSU2_TR(0x5c7527);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5c752b:{NFSU2_TR(0x5c752b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c752c:{NFSU2_TR(0x5c752c);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c752e:{NFSU2_TR(0x5c752e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c752f:{NFSU2_TR(0x5c752f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c7535ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c7535:L5c7535:{c.instructions+=7;NFSU2_TR(0x5c7535);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c753a:{NFSU2_TR(0x5c753a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c753c:{NFSU2_TR(0x5c753c);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5c7540:{NFSU2_TR(0x5c7540);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7541:{NFSU2_TR(0x5c7541);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7543:{NFSU2_TR(0x5c7543);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7544:{NFSU2_TR(0x5c7544);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c754aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c754a:L5c754a:{c.instructions+=24;NFSU2_TR(0x5c754a);
__builtin_memmove((R+0),gp(0x86eb7c),4);
}
B5c754f:{NFSU2_TR(0x5c754f);
__builtin_memmove((R+4),gp(0x870980),4);
}
B5c7555:{NFSU2_TR(0x5c7555);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c7559:{NFSU2_TR(0x5c7559);
w4(R+0,u32(0x38e38e39ull));
}
B5c755e:{NFSU2_TR(0x5c755e);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B5c7560:{NFSU2_TR(0x5c7560);
w4(R+8,sar<u32>(r4(R+8),u64(u32(0x1ull))));
}
B5c7562:{NFSU2_TR(0x5c7562);
__builtin_memmove((R+4),(R+8),4);
}
B5c7564:{NFSU2_TR(0x5c7564);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5c7567:{NFSU2_TR(0x5c7567);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B5c7569:{NFSU2_TR(0x5c7569);
__builtin_memmove((R+4),gp(0x870984),4);
}
B5c756f:{NFSU2_TR(0x5c756f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c7573:{NFSU2_TR(0x5c7573);
w4(R+0,u32(0x38e38e39ull));
}
B5c7578:{NFSU2_TR(0x5c7578);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B5c757a:{NFSU2_TR(0x5c757a);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5c757e:{NFSU2_TR(0x5c757e);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c7582:{NFSU2_TR(0x5c7582);
w4(R+8,sar<u32>(r4(R+8),u64(u32(0x1ull))));
}
B5c7584:{NFSU2_TR(0x5c7584);
__builtin_memmove((R+0),(R+8),4);
}
B5c7586:{NFSU2_TR(0x5c7586);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5c7589:{NFSU2_TR(0x5c7589);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B5c758b:{NFSU2_TR(0x5c758b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c758f:{NFSU2_TR(0x5c758f);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5c7593:{NFSU2_TR(0x5c7593);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c7597:{NFSU2_TR(0x5c7597);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7599:{NFSU2_TR(0x5c7599);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c759eull));
TAIL_STATIC(0x48b1e0u,48b);
}
B5c759e:L5c759e:{c.instructions+=3;NFSU2_TR(0x5c759e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c759f:{NFSU2_TR(0x5c759f);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c75a3:{NFSU2_TR(0x5c75a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c75a8ull));
TAIL_STATIC(0x5db900u,5db);
}
B5c75a8:L5c75a8:{c.instructions+=11;NFSU2_TR(0x5c75a8);
__builtin_memmove((R+0),gp(0x8708f8),4);
}
B5c75ad:{NFSU2_TR(0x5c75ad);
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
B5c75b0:{NFSU2_TR(0x5c75b0);
u8 U[4];
w4(U+0,u32(0x2800ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c75b5:{NFSU2_TR(0x5c75b5);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5c75b9:{NFSU2_TR(0x5c75b9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c75ba:{NFSU2_TR(0x5c75ba);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c75bb:{NFSU2_TR(0x5c75bb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c75bc:{NFSU2_TR(0x5c75bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c75c0:{NFSU2_TR(0x5c75c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c75c2:{NFSU2_TR(0x5c75c2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c75c3:{NFSU2_TR(0x5c75c3);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c75c6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c75c6:L5c75c6:{c.instructions+=6;NFSU2_TR(0x5c75c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c75ca:{NFSU2_TR(0x5c75ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c75ce:{NFSU2_TR(0x5c75ce);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5c75d0:{NFSU2_TR(0x5c75d0);
w4(R+28,u32(0x86eca0ull));
}
B5c75d5:{NFSU2_TR(0x5c75d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x9ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c75dd:{NFSU2_TR(0x5c75dd);
{goto L5c75e1;}
}
B5c75df:L5c75df:{c.instructions+=1;NFSU2_TR(0x5c75df);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5c75e1:L5c75e1:{c.instructions+=7;NFSU2_TR(0x5c75e1);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5c75e5:{NFSU2_TR(0x5c75e5);
{u32 ea_=u32(u32(7881560u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c75eb:{NFSU2_TR(0x5c75eb);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5c75ed:{NFSU2_TR(0x5c75ed);
{u32 ea_=u32(u32(8003148u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5c75f3:{NFSU2_TR(0x5c75f3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5c75f5:{NFSU2_TR(0x5c75f5);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5c75f8:{NFSU2_TR(0x5c75f8);
if(r1(R+514)){{goto L5c7602;}}
}
B5c75fa:L5c75fa:{c.instructions+=3;NFSU2_TR(0x5c75fa);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5c75fc:{NFSU2_TR(0x5c75fc);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c7600:{NFSU2_TR(0x5c7600);
{goto L5c7617;}
}
B5c7602:L5c7602:{c.instructions+=3;NFSU2_TR(0x5c7602);
{u32 ea_=u32(u32(8003148u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5c7608:{NFSU2_TR(0x5c7608);
{u32 ea_=u32(u32(8010848u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c760e:{NFSU2_TR(0x5c760e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c7613ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5c7613:L5c7613:{c.instructions+=1;NFSU2_TR(0x5c7613);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c7617:L5c7617:{c.instructions+=6;NFSU2_TR(0x5c7617);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5c761b:{NFSU2_TR(0x5c761b);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c7623:{NFSU2_TR(0x5c7623);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c7627:{NFSU2_TR(0x5c7627);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c762b:{NFSU2_TR(0x5c762b);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5c762d:{NFSU2_TR(0x5c762d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c7632ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5c7632:L5c7632:{c.instructions+=14;NFSU2_TR(0x5c7632);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c7636:{NFSU2_TR(0x5c7636);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5c763c:{NFSU2_TR(0x5c763c);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c7640:{NFSU2_TR(0x5c7640);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c7644:{NFSU2_TR(0x5c7644);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5c7647:{NFSU2_TR(0x5c7647);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c764b:{NFSU2_TR(0x5c764b);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c764f:{NFSU2_TR(0x5c764f);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5c7651:{NFSU2_TR(0x5c7651);
{u32 ea_=u32(u32(7881708u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c7657:{NFSU2_TR(0x5c7657);
{u32 ea_=u32(u32(8010844u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5c765d:{NFSU2_TR(0x5c765d);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c7661:{NFSU2_TR(0x5c7661);
{u32 ea_=u32(u32(7985716u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c7667:{NFSU2_TR(0x5c7667);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c766b:{NFSU2_TR(0x5c766b);
{goto L5c7670;}
}
B5c7670:L5c7670:{c.instructions+=14;NFSU2_TR(0x5c7670);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5c7674:{NFSU2_TR(0x5c7674);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c7678:{NFSU2_TR(0x5c7678);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B5c767b:{NFSU2_TR(0x5c767b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c767c:{NFSU2_TR(0x5c767c);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c7680:{NFSU2_TR(0x5c7680);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5c7683:{NFSU2_TR(0x5c7683);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c7687:{NFSU2_TR(0x5c7687);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7688:{NFSU2_TR(0x5c7688);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c768c:{NFSU2_TR(0x5c768c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5c768f:{NFSU2_TR(0x5c768f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7690:{NFSU2_TR(0x5c7690);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7691:{NFSU2_TR(0x5c7691);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7692:{NFSU2_TR(0x5c7692);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c7697ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5c7697:L5c7697:{c.instructions+=4;NFSU2_TR(0x5c7697);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7698:{NFSU2_TR(0x5c7698);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c769c:{NFSU2_TR(0x5c769c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c769d:{NFSU2_TR(0x5c769d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c76a2ull));
TAIL_STATIC(0x5dbb00u,5db);
}
B5c76a2:L5c76a2:{c.instructions+=42;NFSU2_TR(0x5c76a2);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c76a6:{NFSU2_TR(0x5c76a6);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5c76ac:{NFSU2_TR(0x5c76ac);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c76b0:{NFSU2_TR(0x5c76b0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B5c76b3:{NFSU2_TR(0x5c76b3);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B5c76b6:{NFSU2_TR(0x5c76b6);
{u32 ea_=u32(r4(R+4)+r4(R+24));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c76b9:{NFSU2_TR(0x5c76b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c76bd:{NFSU2_TR(0x5c76bd);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c76c1:{NFSU2_TR(0x5c76c1);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x18ull))));
}
B5c76c4:{NFSU2_TR(0x5c76c4);
{u32 ea_=u32(r4(R+8)+r4(R+24)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c76c8:{NFSU2_TR(0x5c76c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c76cc:{NFSU2_TR(0x5c76cc);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c76d0:{NFSU2_TR(0x5c76d0);
{u32 ea_=u32(r4(R+0)+r4(R+24)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c76d4:{NFSU2_TR(0x5c76d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c76d7:{NFSU2_TR(0x5c76d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c76da:{NFSU2_TR(0x5c76da);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c76de:{NFSU2_TR(0x5c76de);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c76e2:{NFSU2_TR(0x5c76e2);
{u32 ea_=u32(u32(7985716u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c76e8:{NFSU2_TR(0x5c76e8);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffull))));
}
B5c76ee:{NFSU2_TR(0x5c76ee);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+0))));
}
B5c76f0:{NFSU2_TR(0x5c76f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5c76f2:{NFSU2_TR(0x5c76f2);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B5c76f5:{NFSU2_TR(0x5c76f5);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xffull))));
}
B5c76fb:{NFSU2_TR(0x5c76fb);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+8))));
}
B5c76fd:{NFSU2_TR(0x5c76fd);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c7701:{NFSU2_TR(0x5c7701);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B5c7706:{NFSU2_TR(0x5c7706);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B5c7709:{NFSU2_TR(0x5c7709);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+0))));
}
B5c770b:{NFSU2_TR(0x5c770b);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffff4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5c770f:{NFSU2_TR(0x5c770f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c7713:{NFSU2_TR(0x5c7713);
{u32 ea_=u32(r4(R+0)+r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c7717:{NFSU2_TR(0x5c7717);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c771b:{NFSU2_TR(0x5c771b);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c771f:{NFSU2_TR(0x5c771f);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c7723:{NFSU2_TR(0x5c7723);
{u32 ea_=u32(r4(R+4)+r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c7727:{NFSU2_TR(0x5c7727);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5c7728:{NFSU2_TR(0x5c7728);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xaull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5c772b:{NFSU2_TR(0x5c772b);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c772f:{NFSU2_TR(0x5c772f);
{u32 ea_=u32(u32(8010840u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5c7735:{NFSU2_TR(0x5c7735);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c7739:{NFSU2_TR(0x5c7739);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c773d:{NFSU2_TR(0x5c773d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5c7670u);}goto L5c7670;}}
}
B5c7743:L5c7743:{c.instructions+=11;NFSU2_TR(0x5c7743);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c7747:{NFSU2_TR(0x5c7747);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5c774b:{NFSU2_TR(0x5c774b);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c774f:{NFSU2_TR(0x5c774f);
{u32 ea_=u32(u32(8010840u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5c7755:{NFSU2_TR(0x5c7755);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B5c7756:{NFSU2_TR(0x5c7756);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B5c7757:{NFSU2_TR(0x5c7757);
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
B5c775a:{NFSU2_TR(0x5c775a);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c775e:{NFSU2_TR(0x5c775e);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c7762:{NFSU2_TR(0x5c7762);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c7766:{NFSU2_TR(0x5c7766);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5c75dfu);}goto L5c75df;}}
}
B5c776c:L5c776c:{c.instructions+=4;NFSU2_TR(0x5c776c);
__builtin_memmove((R+0),gp(0x8708f8),4);
}
B5c7771:{NFSU2_TR(0x5c7771);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c7773:{NFSU2_TR(0x5c7773);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7774:{NFSU2_TR(0x5c7774);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c7777ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c7777:L5c7777:{c.instructions+=7;NFSU2_TR(0x5c7777);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c777c:{NFSU2_TR(0x5c777c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c777e:{NFSU2_TR(0x5c777e);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5c7780:{NFSU2_TR(0x5c7780);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7781:{NFSU2_TR(0x5c7781);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7782:{NFSU2_TR(0x5c7782);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7783:{NFSU2_TR(0x5c7783);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x104ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c7789ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c7789:L5c7789:{c.instructions+=9;NFSU2_TR(0x5c7789);
__builtin_memmove((R+4),gp(0x8708f8),4);
}
B5c778f:{NFSU2_TR(0x5c778f);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c7794:{NFSU2_TR(0x5c7794);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c7796:{NFSU2_TR(0x5c7796);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7798:{NFSU2_TR(0x5c7798);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7799:{NFSU2_TR(0x5c7799);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c779a:{NFSU2_TR(0x5c779a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c779b:{NFSU2_TR(0x5c779b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c779c:{NFSU2_TR(0x5c779c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x190ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c77a2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c77a2:L5c77a2:{c.instructions+=6;NFSU2_TR(0x5c77a2);
__builtin_memmove((R+4),gp(0x8708fc),4);
}
B5c77a8:{NFSU2_TR(0x5c77a8);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c77ad:{NFSU2_TR(0x5c77ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c77af:{NFSU2_TR(0x5c77af);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c77b0:{NFSU2_TR(0x5c77b0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c77b1:{NFSU2_TR(0x5c77b1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1a0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c77b7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c77b7:L5c77b7:{c.instructions+=6;NFSU2_TR(0x5c77b7);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5c77bb:{NFSU2_TR(0x5c77bb);
__builtin_memmove(gp(0x870910),(R+28),4);
}
B5c77c1:{NFSU2_TR(0x5c77c1);
__builtin_memmove(gp(0x870910),(R+24),4);
}
B5c77c7:{NFSU2_TR(0x5c77c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c77c9:{NFSU2_TR(0x5c77c9);
__builtin_memmove((R+4),(R+24),4);
}
B5c77cb:{NFSU2_TR(0x5c77cb);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c77ceull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c77ce:L5c77ce:{c.instructions+=6;NFSU2_TR(0x5c77ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c77d1:{NFSU2_TR(0x5c77d1);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c77d6:{NFSU2_TR(0x5c77d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c77d8:{NFSU2_TR(0x5c77d8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c77d9:{NFSU2_TR(0x5c77d9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c77da:{NFSU2_TR(0x5c77da);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c77e0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c77e0:L5c77e0:{c.instructions+=7;NFSU2_TR(0x5c77e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c77e3:{NFSU2_TR(0x5c77e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c77e5:{NFSU2_TR(0x5c77e5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c77e6:{NFSU2_TR(0x5c77e6);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5c77ea:{NFSU2_TR(0x5c77ea);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c77eb:{NFSU2_TR(0x5c77eb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c77ec:{NFSU2_TR(0x5c77ec);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x104ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c77f2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c77f2:L5c77f2:{c.instructions+=5;NFSU2_TR(0x5c77f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c77f5:{NFSU2_TR(0x5c77f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c77f7:{NFSU2_TR(0x5c77f7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c77f8:{NFSU2_TR(0x5c77f8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c77f9:{NFSU2_TR(0x5c77f9);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c77ffull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c77ff:L5c77ff:{c.instructions+=5;NFSU2_TR(0x5c77ff);
__builtin_memmove((R+8),gp(0x870910),4);
}
B5c7805:{NFSU2_TR(0x5c7805);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c7808:{NFSU2_TR(0x5c7808);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c780a:{NFSU2_TR(0x5c780a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c780b:{NFSU2_TR(0x5c780b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c7811ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c7811:L5c7811:{c.instructions+=10;NFSU2_TR(0x5c7811);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c7816:{NFSU2_TR(0x5c7816);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c7818:{NFSU2_TR(0x5c7818);
u8 U[4];
w4(U+0,u32(0xa2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c781d:{NFSU2_TR(0x5c781d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c781e:{NFSU2_TR(0x5c781e);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7820:{NFSU2_TR(0x5c7820);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7821:{NFSU2_TR(0x5c7821);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7822:{NFSU2_TR(0x5c7822);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7824:{NFSU2_TR(0x5c7824);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7825:{NFSU2_TR(0x5c7825);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x148ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c782bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c782b:L5c782b:{c.instructions+=4;NFSU2_TR(0x5c782b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c782e:{NFSU2_TR(0x5c782e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c7830:{NFSU2_TR(0x5c7830);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7831:{NFSU2_TR(0x5c7831);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c7837ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c7837:L5c7837:{c.instructions+=3;NFSU2_TR(0x5c7837);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c7839:{NFSU2_TR(0x5c7839);
__builtin_memmove((R+4),(R+24),4);
}
B5c783b:{NFSU2_TR(0x5c783b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c783eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c783e:L5c783e:{c.instructions+=4;NFSU2_TR(0x5c783e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5c7841:{NFSU2_TR(0x5c7841);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5c7843:{NFSU2_TR(0x5c7843);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7844:{NFSU2_TR(0x5c7844);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c784aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c784a:L5c784a:{c.instructions+=7;NFSU2_TR(0x5c784a);
__builtin_memmove(gp(0x870910),(R+28),4);
}
B5c7850:{NFSU2_TR(0x5c7850);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5c7851:{NFSU2_TR(0x5c7851);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c7852:{NFSU2_TR(0x5c7852);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5c7853:{NFSU2_TR(0x5c7853);
__builtin_memmove((R+16),(R+20),4);
}
B5c7855:{NFSU2_TR(0x5c7855);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5c7856:{NFSU2_TR(0x5c7856);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c7860:L5c7860:{c.instructions+=9;NFSU2_TR(0x5c7860);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x28ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x28ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x28ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5c7863:{NFSU2_TR(0x5c7863);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c7868:{NFSU2_TR(0x5c7868);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c786a:{NFSU2_TR(0x5c786a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c786b:{NFSU2_TR(0x5c786b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c786c:{NFSU2_TR(0x5c786c);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c786e:{NFSU2_TR(0x5c786e);
u8 U[4];
w4(U+0,u32(0xa8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7873:{NFSU2_TR(0x5c7873);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7874:{NFSU2_TR(0x5c7874);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c787aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c787a:L5c787a:{c.instructions+=2;NFSU2_TR(0x5c787a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c787c:{NFSU2_TR(0x5c787c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c7881ull));
TAIL_STATIC(0x48b1e0u,48b);
}
B5c7881:L5c7881:{c.instructions+=8;NFSU2_TR(0x5c7881);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c7887:{NFSU2_TR(0x5c7887);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5c788a:{NFSU2_TR(0x5c788a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c788d:{NFSU2_TR(0x5c788d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5c7890:{NFSU2_TR(0x5c7890);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5c7892:{NFSU2_TR(0x5c7892);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c789a:{NFSU2_TR(0x5c789a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c78a2:{NFSU2_TR(0x5c78a2);
if(r1(R+518)){{goto L5c7967;}}
}
B5c78a8:L5c78a8:{c.instructions+=5;NFSU2_TR(0x5c78a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c78ae:{NFSU2_TR(0x5c78ae);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5c78b0:{NFSU2_TR(0x5c78b0);
{u32 ea_=u32(r4(R+24)+u32(288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c78b6:{NFSU2_TR(0x5c78b6);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c78ba:{NFSU2_TR(0x5c78ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c78bfull));
TAIL_STATIC(0x75bed4u,75b);
}
B5c78bf:L5c78bf:{c.instructions+=4;NFSU2_TR(0x5c78bf);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5c78c1:{NFSU2_TR(0x5c78c1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c78c5:{NFSU2_TR(0x5c78c5);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5c78c9:{NFSU2_TR(0x5c78c9);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5c78d1;}}
}
B5c78cb:L5c78cb:{c.instructions+=1;NFSU2_TR(0x5c78cb);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5c78d1:L5c78d1:{c.instructions+=7;NFSU2_TR(0x5c78d1);
{u32 ea_=u32(u32(7895792u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c78d7:{NFSU2_TR(0x5c78d7);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5c78dd:{NFSU2_TR(0x5c78dd);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c78e1:{NFSU2_TR(0x5c78e1);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5c78e7:{NFSU2_TR(0x5c78e7);
{u32 ea_=u32(u32(7977300u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c78ed:{NFSU2_TR(0x5c78ed);
{u32 ea_=u32(r4(R+24)+u32(292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c78f3:{NFSU2_TR(0x5c78f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c78f8ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5c78f8:L5c78f8:{c.instructions+=4;NFSU2_TR(0x5c78f8);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5c78fa:{NFSU2_TR(0x5c78fa);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c78fe:{NFSU2_TR(0x5c78fe);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5c7902:{NFSU2_TR(0x5c7902);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5c790a;}}
}
B5c7904:L5c7904:{c.instructions+=1;NFSU2_TR(0x5c7904);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5c790a:L5c790a:{c.instructions+=8;NFSU2_TR(0x5c790a);
{u32 ea_=u32(u32(7895792u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c7910:{NFSU2_TR(0x5c7910);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5c7916:{NFSU2_TR(0x5c7916);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c791a:{NFSU2_TR(0x5c791a);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5c7920:{NFSU2_TR(0x5c7920);
{u32 ea_=u32(u32(7977300u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c7926:{NFSU2_TR(0x5c7926);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c792a:{NFSU2_TR(0x5c792a);
{u32 ea_=u32(r4(R+24)+u32(296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c7930:{NFSU2_TR(0x5c7930);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c7935ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5c7935:L5c7935:{c.instructions+=4;NFSU2_TR(0x5c7935);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5c7937:{NFSU2_TR(0x5c7937);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c793b:{NFSU2_TR(0x5c793b);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5c793f:{NFSU2_TR(0x5c793f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5c7947;}}
}
B5c7941:L5c7941:{c.instructions+=1;NFSU2_TR(0x5c7941);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5c7947:L5c7947:{c.instructions+=6;NFSU2_TR(0x5c7947);
{u32 ea_=u32(u32(7895792u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c794d:{NFSU2_TR(0x5c794d);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5c7953:{NFSU2_TR(0x5c7953);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c7957:{NFSU2_TR(0x5c7957);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5c795d:{NFSU2_TR(0x5c795d);
{u32 ea_=u32(u32(7977300u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c7963:{NFSU2_TR(0x5c7963);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c7967:L5c7967:{c.instructions+=3;NFSU2_TR(0x5c7967);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c796a:{NFSU2_TR(0x5c796a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5c796c:{NFSU2_TR(0x5c796c);
if(r1(R+518)){{goto L5c7a28;}}
}
B5c7972:L5c7972:{c.instructions+=5;NFSU2_TR(0x5c7972);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c7978:{NFSU2_TR(0x5c7978);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5c797a:{NFSU2_TR(0x5c797a);
{u32 ea_=u32(r4(R+24)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c797d:{NFSU2_TR(0x5c797d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c7981:{NFSU2_TR(0x5c7981);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c7986ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5c7986:L5c7986:{c.instructions+=4;NFSU2_TR(0x5c7986);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5c7988:{NFSU2_TR(0x5c7988);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c798c:{NFSU2_TR(0x5c798c);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5c7990:{NFSU2_TR(0x5c7990);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5c7998;}}
}
B5c7992:L5c7992:{c.instructions+=1;NFSU2_TR(0x5c7992);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5c7998:L5c7998:{c.instructions+=7;NFSU2_TR(0x5c7998);
{u32 ea_=u32(u32(7895792u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c799e:{NFSU2_TR(0x5c799e);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5c79a4:{NFSU2_TR(0x5c79a4);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c79a8:{NFSU2_TR(0x5c79a8);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5c79ae:{NFSU2_TR(0x5c79ae);
{u32 ea_=u32(u32(7977300u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c79b4:{NFSU2_TR(0x5c79b4);
{u32 ea_=u32(r4(R+24)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c79b7:{NFSU2_TR(0x5c79b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c79bcull));
TAIL_STATIC(0x75bed4u,75b);
}
B5c79bc:L5c79bc:{c.instructions+=4;NFSU2_TR(0x5c79bc);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5c79be:{NFSU2_TR(0x5c79be);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c79c2:{NFSU2_TR(0x5c79c2);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5c79c6:{NFSU2_TR(0x5c79c6);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5c79ce;}}
}
B5c79c8:L5c79c8:{c.instructions+=1;NFSU2_TR(0x5c79c8);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5c79ce:L5c79ce:{c.instructions+=8;NFSU2_TR(0x5c79ce);
{u32 ea_=u32(u32(7895792u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c79d4:{NFSU2_TR(0x5c79d4);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5c79da:{NFSU2_TR(0x5c79da);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c79de:{NFSU2_TR(0x5c79de);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5c79e4:{NFSU2_TR(0x5c79e4);
{u32 ea_=u32(u32(7977300u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c79ea:{NFSU2_TR(0x5c79ea);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c79ee:{NFSU2_TR(0x5c79ee);
{u32 ea_=u32(r4(R+24)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c79f1:{NFSU2_TR(0x5c79f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c79f6ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5c79f6:L5c79f6:{c.instructions+=4;NFSU2_TR(0x5c79f6);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5c79f8:{NFSU2_TR(0x5c79f8);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c79fc:{NFSU2_TR(0x5c79fc);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5c7a00:{NFSU2_TR(0x5c7a00);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5c7a08;}}
}
B5c7a02:L5c7a02:{c.instructions+=1;NFSU2_TR(0x5c7a02);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5c7a08:L5c7a08:{c.instructions+=6;NFSU2_TR(0x5c7a08);
{u32 ea_=u32(u32(7895792u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c7a0e:{NFSU2_TR(0x5c7a0e);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5c7a14:{NFSU2_TR(0x5c7a14);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c7a18:{NFSU2_TR(0x5c7a18);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5c7a1e:{NFSU2_TR(0x5c7a1e);
{u32 ea_=u32(u32(7977300u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c7a24:{NFSU2_TR(0x5c7a24);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c7a28:L5c7a28:{c.instructions+=1;NFSU2_TR(0x5c7a28);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c7a2dull));
TAIL_STATIC(0x75bed4u,75b);
}
B5c7a2d:L5c7a2d:{c.instructions+=3;NFSU2_TR(0x5c7a2d);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c7a31:{NFSU2_TR(0x5c7a31);
__builtin_memmove((R+12),(R+0),4);
}
B5c7a33:{NFSU2_TR(0x5c7a33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c7a38ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5c7a38:L5c7a38:{c.instructions+=3;NFSU2_TR(0x5c7a38);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c7a3c:{NFSU2_TR(0x5c7a3c);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c7a40:{NFSU2_TR(0x5c7a40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c7a45ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5c7a45:L5c7a45:{c.instructions+=11;NFSU2_TR(0x5c7a45);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5c7a47:{NFSU2_TR(0x5c7a47);
__builtin_memmove((R+5),(R+12),1);
}
B5c7a49:{NFSU2_TR(0x5c7a49);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B5c7a4e:{NFSU2_TR(0x5c7a4e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c7a4f:{NFSU2_TR(0x5c7a4f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5c7a50:{NFSU2_TR(0x5c7a50);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5c7a54:{NFSU2_TR(0x5c7a54);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B5c7a57:{NFSU2_TR(0x5c7a57);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
}
B5c7a59:{NFSU2_TR(0x5c7a59);
__builtin_memmove((R+4),gp(0x8708f4),4);
}
B5c7a5f:{NFSU2_TR(0x5c7a5f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5c7a62:{NFSU2_TR(0x5c7a62);
if(r1(R+518)){{goto L5c7a87;}}
}
B5c7a64:L5c7a64:{c.instructions+=3;NFSU2_TR(0x5c7a64);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86eb0cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B5c7a6b:{NFSU2_TR(0x5c7a6b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5c7a6d:{NFSU2_TR(0x5c7a6d);
if(r1(R+518)){{goto L5c7a87;}}
}
B5c7a6f:L5c7a6f:{c.instructions+=8;NFSU2_TR(0x5c7a6f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7a71:{NFSU2_TR(0x5c7a71);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7a73:{NFSU2_TR(0x5c7a73);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7a75:{NFSU2_TR(0x5c7a75);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7a77:{NFSU2_TR(0x5c7a77);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7a78:{NFSU2_TR(0x5c7a78);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7a7a:{NFSU2_TR(0x5c7a7a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7a7b:{NFSU2_TR(0x5c7a7b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c7a80ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5c7140u);}goto L5c7140;}
}
B5c7a80:L5c7a80:{c.instructions+=3;NFSU2_TR(0x5c7a80);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B5c7a83:{NFSU2_TR(0x5c7a83);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x28ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x28ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5c7a86:{NFSU2_TR(0x5c7a86);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c7a87:L5c7a87:{c.instructions+=9;NFSU2_TR(0x5c7a87);
__builtin_memmove((R+8),gp(0x870850),4);
}
B5c7a8d:{NFSU2_TR(0x5c7a8d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7a8f:{NFSU2_TR(0x5c7a8f);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7a91:{NFSU2_TR(0x5c7a91);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7a93:{NFSU2_TR(0x5c7a93);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7a95:{NFSU2_TR(0x5c7a95);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7a96:{NFSU2_TR(0x5c7a96);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7a98:{NFSU2_TR(0x5c7a98);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7a99:{NFSU2_TR(0x5c7a99);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c7a9eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5c7140u);}goto L5c7140;}
}
B5c7a9e:L5c7a9e:{c.instructions+=3;NFSU2_TR(0x5c7a9e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B5c7aa1:{NFSU2_TR(0x5c7aa1);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x28ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x28ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5c7aa4:{NFSU2_TR(0x5c7aa4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c7ab0:L5c7ab0:{c.instructions+=3;NFSU2_TR(0x5c7ab0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8cull))));
}
B5c7ab6:{NFSU2_TR(0x5c7ab6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7ab8:{NFSU2_TR(0x5c7ab8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c7abdull));
TAIL_STATIC(0x48b1e0u,48b);
}
B5c7abd:L5c7abd:{c.instructions+=5;NFSU2_TR(0x5c7abd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c7ac0:{NFSU2_TR(0x5c7ac0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c7ac2:{NFSU2_TR(0x5c7ac2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5c7ac5:{NFSU2_TR(0x5c7ac5);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5c7ac7:{NFSU2_TR(0x5c7ac7);
if(r1(R+518)){{goto L5c7e2c;}}
}
B5c7acd:L5c7acd:{c.instructions+=5;NFSU2_TR(0x5c7acd);
u8 U[5];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5c7ad4:{NFSU2_TR(0x5c7ad4);
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
B5c7ad6:{NFSU2_TR(0x5c7ad6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7ad7:{NFSU2_TR(0x5c7ad7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7ad8:{NFSU2_TR(0x5c7ad8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c7b30;}}
}
B5c7ada:L5c7ada:{c.instructions+=4;NFSU2_TR(0x5c7ada);
__builtin_memmove((R+0),gp(0x8708f4),4);
}
B5c7adf:{NFSU2_TR(0x5c7adf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5c7ae2:{NFSU2_TR(0x5c7ae2);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0x80000001ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
}
B5c7ae8:{NFSU2_TR(0x5c7ae8);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L5c7aef;}}
}
B5c7aea:L5c7aea:{c.instructions+=3;NFSU2_TR(0x5c7aea);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B5c7aeb:{NFSU2_TR(0x5c7aeb);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0xfffffffeull))));
}
B5c7aee:{NFSU2_TR(0x5c7aee);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5c7aef:L5c7aef:{c.instructions+=8;NFSU2_TR(0x5c7aef);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86eb88ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5c7af6:{NFSU2_TR(0x5c7af6);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86eb0cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B5c7afd:{NFSU2_TR(0x5c7afd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7aff:{NFSU2_TR(0x5c7aff);
u8 U[4];
w4(U+0,u32(0x7ff190ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7b04:{NFSU2_TR(0x5c7b04);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7b06:{NFSU2_TR(0x5c7b06);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7b07:{NFSU2_TR(0x5c7b07);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7b08:{NFSU2_TR(0x5c7b08);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c7b0dull));
TAIL_STATIC(0x5c5f70u,5c5);
}
B5c7b0d:L5c7b0d:{c.instructions+=9;NFSU2_TR(0x5c7b0d);
__builtin_memmove((R+4),gp(0x8708f4),4);
}
B5c7b13:{NFSU2_TR(0x5c7b13);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86eb0cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B5c7b1a:{NFSU2_TR(0x5c7b1a);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c7b1f:{NFSU2_TR(0x5c7b1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c7b21:{NFSU2_TR(0x5c7b21);
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
B5c7b24:{NFSU2_TR(0x5c7b24);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7b25:{NFSU2_TR(0x5c7b25);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7b27:{NFSU2_TR(0x5c7b27);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7b28:{NFSU2_TR(0x5c7b28);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c7b2eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c7b2e:L5c7b2e:{c.instructions+=1;NFSU2_TR(0x5c7b2e);
{goto L5c7b4d;}
}
B5c7b30:L5c7b30:{c.instructions+=7;NFSU2_TR(0x5c7b30);
__builtin_memmove((R+4),gp(0x870850),4);
}
B5c7b36:{NFSU2_TR(0x5c7b36);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c7b3b:{NFSU2_TR(0x5c7b3b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c7b3d:{NFSU2_TR(0x5c7b3d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7b3e:{NFSU2_TR(0x5c7b3e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7b40:{NFSU2_TR(0x5c7b40);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7b41:{NFSU2_TR(0x5c7b41);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c7b47ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c7b47:L5c7b47:{c.instructions+=1;NFSU2_TR(0x5c7b47);
__builtin_memmove((R+28),gp(0x8708f4),4);
}
B5c7b4d:L5c7b4d:{c.instructions+=5;NFSU2_TR(0x5c7b4d);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c7b52:{NFSU2_TR(0x5c7b52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c7b54:{NFSU2_TR(0x5c7b54);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7b56:{NFSU2_TR(0x5c7b56);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7b57:{NFSU2_TR(0x5c7b57);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c7b5dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c7b5d:L5c7b5d:{c.instructions+=5;NFSU2_TR(0x5c7b5d);
__builtin_memmove((R+24),gp(0x86eb74),4);
}
B5c7b63:{NFSU2_TR(0x5c7b63);
__builtin_memmove(gp(0x870910),(R+24),4);
}
B5c7b69:{NFSU2_TR(0x5c7b69);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5c7b6b:{NFSU2_TR(0x5c7b6b);
__builtin_memmove((R+4),(R+24),4);
}
B5c7b6d:{NFSU2_TR(0x5c7b6d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c7b70ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c7b70:L5c7b70:{c.instructions+=6;NFSU2_TR(0x5c7b70);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c7b73:{NFSU2_TR(0x5c7b73);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c7b78:{NFSU2_TR(0x5c7b78);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c7b7a:{NFSU2_TR(0x5c7b7a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7b7b:{NFSU2_TR(0x5c7b7b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7b7c:{NFSU2_TR(0x5c7b7c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c7b82ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c7b82:L5c7b82:{c.instructions+=7;NFSU2_TR(0x5c7b82);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c7b85:{NFSU2_TR(0x5c7b85);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c7b87:{NFSU2_TR(0x5c7b87);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7b89:{NFSU2_TR(0x5c7b89);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5c7b8d:{NFSU2_TR(0x5c7b8d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7b8e:{NFSU2_TR(0x5c7b8e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7b8f:{NFSU2_TR(0x5c7b8f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x104ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c7b95ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c7b95:L5c7b95:{c.instructions+=3;NFSU2_TR(0x5c7b95);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5c7b99:{NFSU2_TR(0x5c7b99);
w4(R+4,u32(0x4ull));
}
B5c7b9e:{NFSU2_TR(0x5c7b9e);
__builtin_memmove((R+28),(R+28),4);
}
B5c7ba0:L5c7ba0:{c.instructions+=4;NFSU2_TR(0x5c7ba0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
s4(u32(r4(R+0)),r4(U+0));
}
B5c7ba6:{NFSU2_TR(0x5c7ba6);
w1(R+512,carry<u32>(r4(R+0),u32(0x18ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
}
B5c7ba9:{NFSU2_TR(0x5c7ba9);
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
B5c7baa:{NFSU2_TR(0x5c7baa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5c7ba0u);}goto L5c7ba0;}}
}
B5c7bac:L5c7bac:{c.instructions+=9;NFSU2_TR(0x5c7bac);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86eb88ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B5c7bb3:{NFSU2_TR(0x5c7bb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c7bb6:{NFSU2_TR(0x5c7bb6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c7bb8:{NFSU2_TR(0x5c7bb8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7bb9:{NFSU2_TR(0x5c7bb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c7bbc:{NFSU2_TR(0x5c7bbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x13cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c7bc2:{NFSU2_TR(0x5c7bc2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7bc3:{NFSU2_TR(0x5c7bc3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7bc4:{NFSU2_TR(0x5c7bc4);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c7bcaull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c7bca:L5c7bca:{c.instructions+=4;NFSU2_TR(0x5c7bca);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7bcc:{NFSU2_TR(0x5c7bcc);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7bce:{NFSU2_TR(0x5c7bce);
u8 U[4];
w4(U+0,u32(0x7a3c64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7bd3:{NFSU2_TR(0x5c7bd3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c7bd8ull));
TAIL_STATIC(0x43db50u,43d);
}
B5c7bd8:L5c7bd8:{c.instructions+=3;NFSU2_TR(0x5c7bd8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5c7bdb:{NFSU2_TR(0x5c7bdb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7bdc:{NFSU2_TR(0x5c7bdc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c7be1ull));
TAIL_STATIC(0x4901d0u,490);
}
B5c7be1:L5c7be1:{c.instructions+=11;NFSU2_TR(0x5c7be1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5c7be3:{NFSU2_TR(0x5c7be3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c7be6:{NFSU2_TR(0x5c7be6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c7be9:{NFSU2_TR(0x5c7be9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c7beb:{NFSU2_TR(0x5c7beb);
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
B5c7bee:{NFSU2_TR(0x5c7bee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7bef:{NFSU2_TR(0x5c7bef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c7bf2:{NFSU2_TR(0x5c7bf2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c7bf8:{NFSU2_TR(0x5c7bf8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7bf9:{NFSU2_TR(0x5c7bf9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7bfa:{NFSU2_TR(0x5c7bfa);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c7c00ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c7c00:L5c7c00:{c.instructions+=3;NFSU2_TR(0x5c7c00);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7c02:{NFSU2_TR(0x5c7c02);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5c7c04:{NFSU2_TR(0x5c7c04);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c7c09ull));
TAIL_STATIC(0x48b1e0u,48b);
}
B5c7c09:L5c7c09:{c.instructions+=5;NFSU2_TR(0x5c7c09);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c7c0c:{NFSU2_TR(0x5c7c0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c7c0e:{NFSU2_TR(0x5c7c0e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5c7c11:{NFSU2_TR(0x5c7c11);
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
B5c7c13:{NFSU2_TR(0x5c7c13);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5c7de9;}}
}
B5c7c19:L5c7c19:{c.instructions+=1;NFSU2_TR(0x5c7c19);
__builtin_memmove((R+16),(R+16),4);
}
B5c7c20:L5c7c20:{c.instructions+=13;NFSU2_TR(0x5c7c20);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5c7c24:{NFSU2_TR(0x5c7c24);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7c25:{NFSU2_TR(0x5c7c25);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5c7c29:{NFSU2_TR(0x5c7c29);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7c2a:{NFSU2_TR(0x5c7c2a);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5c7c2e:{NFSU2_TR(0x5c7c2e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7c2f:{NFSU2_TR(0x5c7c2f);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5c7c33:{NFSU2_TR(0x5c7c33);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7c34:{NFSU2_TR(0x5c7c34);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7c35:{NFSU2_TR(0x5c7c35);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7c37:{NFSU2_TR(0x5c7c37);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c7c3f:{NFSU2_TR(0x5c7c3f);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c7c47:{NFSU2_TR(0x5c7c47);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c7c4cull));
TAIL_STATIC(0x48b1e0u,48b);
}
B5c7c4c:L5c7c4c:{c.instructions+=3;NFSU2_TR(0x5c7c4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c7c4f:{NFSU2_TR(0x5c7c4f);
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
B5c7c52:{NFSU2_TR(0x5c7c52);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c7c57ull));
TAIL_STATIC(0x6142c0u,614);
}
B5c7c57:L5c7c57:{c.instructions+=11;NFSU2_TR(0x5c7c57);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c7c5b:{NFSU2_TR(0x5c7c5b);
{u32 ea_=u32(u32(7895772u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c7c61:{NFSU2_TR(0x5c7c61);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c7c64:{NFSU2_TR(0x5c7c64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c7c66:{NFSU2_TR(0x5c7c66);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7c67:{NFSU2_TR(0x5c7c67);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c7c6a:{NFSU2_TR(0x5c7c6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c7c70:{NFSU2_TR(0x5c7c70);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c7c73:{NFSU2_TR(0x5c7c73);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7c74:{NFSU2_TR(0x5c7c74);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7c75:{NFSU2_TR(0x5c7c75);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c7c78ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c7c78:L5c7c78:{c.instructions+=30;NFSU2_TR(0x5c7c78);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c7c7c:{NFSU2_TR(0x5c7c7c);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B5c7c7e:{NFSU2_TR(0x5c7c7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c7c81:{NFSU2_TR(0x5c7c81);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5c7c85:{NFSU2_TR(0x5c7c85);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7c86:{NFSU2_TR(0x5c7c86);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5c7c8c:{NFSU2_TR(0x5c7c8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c7c8f:{NFSU2_TR(0x5c7c8f);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c7c93:{NFSU2_TR(0x5c7c93);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c7c97:{NFSU2_TR(0x5c7c97);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B5c7c99:{NFSU2_TR(0x5c7c99);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5c7c9f:{NFSU2_TR(0x5c7c9f);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c7ca3:{NFSU2_TR(0x5c7ca3);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c7ca7:{NFSU2_TR(0x5c7ca7);
{u32 ea_=u32(u32(7885672u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c7cad:{NFSU2_TR(0x5c7cad);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5c7cb1:{NFSU2_TR(0x5c7cb1);
{u32 ea_=u32(u32(7884072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c7cb7:{NFSU2_TR(0x5c7cb7);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5c7cb9:{NFSU2_TR(0x5c7cb9);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c7cbd:{NFSU2_TR(0x5c7cbd);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5c7cbf:{NFSU2_TR(0x5c7cbf);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c7cc3:{NFSU2_TR(0x5c7cc3);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5c7cc7:{NFSU2_TR(0x5c7cc7);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c7ccb:{NFSU2_TR(0x5c7ccb);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5c7ccf:{NFSU2_TR(0x5c7ccf);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5c7cd1:{NFSU2_TR(0x5c7cd1);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c7cd5:{NFSU2_TR(0x5c7cd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c7cdb:{NFSU2_TR(0x5c7cdb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c7cdd:{NFSU2_TR(0x5c7cdd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7cde:{NFSU2_TR(0x5c7cde);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7cdf:{NFSU2_TR(0x5c7cdf);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c7ce5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c7ce5:L5c7ce5:{c.instructions+=33;NFSU2_TR(0x5c7ce5);
if(mod_hook_table[44]){SPILL();c.pc=0x5c7ce5u;mod_hook_table[44](c);SPILL();if(c.pc!=0x5c7ce5u){TAIL_DYNAMIC(c.pc);}goto B5c7ced;}
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c7ce9:{NFSU2_TR(0x5c7ce9);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5c7ced:{NFSU2_TR(0x5c7ced);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c7cf1:{NFSU2_TR(0x5c7cf1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c7cf5:{NFSU2_TR(0x5c7cf5);
__builtin_memmove((R+4),(R+0),4);
}
B5c7cf7:{NFSU2_TR(0x5c7cf7);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5c7cfb:{NFSU2_TR(0x5c7cfb);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c7cff:{NFSU2_TR(0x5c7cff);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c7d03:{NFSU2_TR(0x5c7d03);
if(mod_hook_table[45]){SPILL();c.pc=0x5c7d03u;mod_hook_table[45](c);SPILL();if(c.pc!=0x5c7d03u){TAIL_DYNAMIC(c.pc);}goto B5c7d0b;}
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c7d07:{NFSU2_TR(0x5c7d07);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5c7d0b:{NFSU2_TR(0x5c7d0b);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c7d13:{NFSU2_TR(0x5c7d13);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c7d1b:{NFSU2_TR(0x5c7d1b);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c7d23:{NFSU2_TR(0x5c7d23);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5c7d27:{NFSU2_TR(0x5c7d27);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c7d2b:{NFSU2_TR(0x5c7d2b);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c7d33:{NFSU2_TR(0x5c7d33);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5c7d35:{NFSU2_TR(0x5c7d35);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c7d3d:{NFSU2_TR(0x5c7d3d);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c7d45:{NFSU2_TR(0x5c7d45);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c7d49:{NFSU2_TR(0x5c7d49);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c7d51:{NFSU2_TR(0x5c7d51);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c7d59:{NFSU2_TR(0x5c7d59);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c7d61:{NFSU2_TR(0x5c7d61);
__builtin_memmove((R+0),gp(0x870910),4);
}
B5c7d66:{NFSU2_TR(0x5c7d66);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c7d6a:{NFSU2_TR(0x5c7d6a);
u8 U[8];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c7d75:{NFSU2_TR(0x5c7d75);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c7d7c:{NFSU2_TR(0x5c7d7c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c7d87:{NFSU2_TR(0x5c7d87);
u8 U[8];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c7d92:{NFSU2_TR(0x5c7d92);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c7d95:{NFSU2_TR(0x5c7d95);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c7d97:{NFSU2_TR(0x5c7d97);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7d98:{NFSU2_TR(0x5c7d98);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c7d9eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c7d9e:L5c7d9e:{c.instructions+=5;NFSU2_TR(0x5c7d9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c7da1:{NFSU2_TR(0x5c7da1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c7da3:{NFSU2_TR(0x5c7da3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7da5:{NFSU2_TR(0x5c7da5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7da6:{NFSU2_TR(0x5c7da6);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c7dacull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c7dac:L5c7dac:{c.instructions+=9;NFSU2_TR(0x5c7dac);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c7db1:{NFSU2_TR(0x5c7db1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c7db3:{NFSU2_TR(0x5c7db3);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7db5:{NFSU2_TR(0x5c7db5);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5c7db9:{NFSU2_TR(0x5c7db9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7dba:{NFSU2_TR(0x5c7dba);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7dbc:{NFSU2_TR(0x5c7dbc);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7dbe:{NFSU2_TR(0x5c7dbe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7dbf:{NFSU2_TR(0x5c7dbf);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c7dc5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c7dc5:L5c7dc5:{c.instructions+=4;NFSU2_TR(0x5c7dc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c7dc8:{NFSU2_TR(0x5c7dc8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c7dca:{NFSU2_TR(0x5c7dca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7dcb:{NFSU2_TR(0x5c7dcb);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c7dd1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c7dd1:L5c7dd1:{c.instructions+=3;NFSU2_TR(0x5c7dd1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7dd3:{NFSU2_TR(0x5c7dd3);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5c7dd4:{NFSU2_TR(0x5c7dd4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c7dd9ull));
TAIL_STATIC(0x48b1e0u,48b);
}
B5c7dd9:L5c7dd9:{c.instructions+=5;NFSU2_TR(0x5c7dd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c7ddc:{NFSU2_TR(0x5c7ddc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c7dde:{NFSU2_TR(0x5c7dde);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5c7de1:{NFSU2_TR(0x5c7de1);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+28),r4(U+6)));
w4(U+10,u32(u32(r4(R+28))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5c7de3:{NFSU2_TR(0x5c7de3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5c7c20u);}goto L5c7c20;}}
}
B5c7de9:L5c7de9:{c.instructions+=6;NFSU2_TR(0x5c7de9);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c7dee:{NFSU2_TR(0x5c7dee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c7df0:{NFSU2_TR(0x5c7df0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7df2:{NFSU2_TR(0x5c7df2);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7df4:{NFSU2_TR(0x5c7df4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7df5:{NFSU2_TR(0x5c7df5);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c7dfbull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c7dfb:L5c7dfb:{c.instructions+=6;NFSU2_TR(0x5c7dfb);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c7e00:{NFSU2_TR(0x5c7e00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c7e02:{NFSU2_TR(0x5c7e02);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7e04:{NFSU2_TR(0x5c7e04);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7e06:{NFSU2_TR(0x5c7e06);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7e07:{NFSU2_TR(0x5c7e07);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c7e0dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c7e0d:L5c7e0d:{c.instructions+=3;NFSU2_TR(0x5c7e0d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c7e0f:{NFSU2_TR(0x5c7e0f);
__builtin_memmove((R+4),(R+24),4);
}
B5c7e11:{NFSU2_TR(0x5c7e11);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c7e14ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c7e14:L5c7e14:{c.instructions+=4;NFSU2_TR(0x5c7e14);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5c7e17:{NFSU2_TR(0x5c7e17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5c7e19:{NFSU2_TR(0x5c7e19);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7e1a:{NFSU2_TR(0x5c7e1a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c7e20ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c7e20:L5c7e20:{c.instructions+=3;NFSU2_TR(0x5c7e20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5c7e21:{NFSU2_TR(0x5c7e21);
s4(0x870910,u32(0x0ull));
}
B5c7e2b:{NFSU2_TR(0x5c7e2b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c7e2c:L5c7e2c:{c.instructions+=2;NFSU2_TR(0x5c7e2c);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x8cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x8cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5c7e32:{NFSU2_TR(0x5c7e32);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c7e40:L5c7e40:{c.instructions+=8;NFSU2_TR(0x5c7e40);
__builtin_memmove((R+0),gp(0x870894),4);
}
B5c7e45:{NFSU2_TR(0x5c7e45);
__builtin_memmove((R+4),gp(0x870898),4);
}
B5c7e4b:{NFSU2_TR(0x5c7e4b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7e4d:{NFSU2_TR(0x5c7e4d);
u8 U[4];
w4(U+0,u32(0x7ff1ccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7e52:{NFSU2_TR(0x5c7e52);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7e54:{NFSU2_TR(0x5c7e54);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7e55:{NFSU2_TR(0x5c7e55);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7e56:{NFSU2_TR(0x5c7e56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c7e5bull));
TAIL_STATIC(0x5c5f70u,5c5);
}
B5c7e5b:L5c7e5b:{c.instructions+=8;NFSU2_TR(0x5c7e5b);
__builtin_memmove((R+8),gp(0x87089c),4);
}
B5c7e61:{NFSU2_TR(0x5c7e61);
__builtin_memmove((R+0),gp(0x870890),4);
}
B5c7e66:{NFSU2_TR(0x5c7e66);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7e68:{NFSU2_TR(0x5c7e68);
u8 U[4];
w4(U+0,u32(0x7ff19cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7e6d:{NFSU2_TR(0x5c7e6d);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7e6f:{NFSU2_TR(0x5c7e6f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7e70:{NFSU2_TR(0x5c7e70);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7e71:{NFSU2_TR(0x5c7e71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c7e76ull));
TAIL_STATIC(0x5c5f70u,5c5);
}
B5c7e76:L5c7e76:{c.instructions+=2;NFSU2_TR(0x5c7e76);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x28ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x28ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5c7e79:{NFSU2_TR(0x5c7e79);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c7e80:L5c7e80:{c.instructions+=9;NFSU2_TR(0x5c7e80);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c7e84:{NFSU2_TR(0x5c7e84);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c7e88:{NFSU2_TR(0x5c7e88);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c7e8c:{NFSU2_TR(0x5c7e8c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7e8d:{NFSU2_TR(0x5c7e8d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c7e91:{NFSU2_TR(0x5c7e91);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7e92:{NFSU2_TR(0x5c7e92);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7e93:{NFSU2_TR(0x5c7e93);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7e94:{NFSU2_TR(0x5c7e94);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c7e99ull));
TAIL_STATIC(0x5c5580u,5c5);
}
B5c7e99:L5c7e99:{c.instructions+=2;NFSU2_TR(0x5c7e99);
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
B5c7e9c:{NFSU2_TR(0x5c7e9c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c7ea0:L5c7ea0:{c.instructions+=7;NFSU2_TR(0x5c7ea0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c7ea4:{NFSU2_TR(0x5c7ea4);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c7ea8:{NFSU2_TR(0x5c7ea8);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c7eac:{NFSU2_TR(0x5c7eac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7ead:{NFSU2_TR(0x5c7ead);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7eae:{NFSU2_TR(0x5c7eae);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7eaf:{NFSU2_TR(0x5c7eaf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c7eb4ull));
TAIL_STATIC(0x5c5020u,5c5);
}
B5c7eb4:L5c7eb4:{c.instructions+=2;NFSU2_TR(0x5c7eb4);
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
B5c7eb7:{NFSU2_TR(0x5c7eb7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c7ec0:L5c7ec0:{c.instructions+=9;NFSU2_TR(0x5c7ec0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B5c7ec3:{NFSU2_TR(0x5c7ec3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7ec4:{NFSU2_TR(0x5c7ec4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5c7ec8:{NFSU2_TR(0x5c7ec8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7ec9:{NFSU2_TR(0x5c7ec9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7eca:{NFSU2_TR(0x5c7eca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5c7ecd:{NFSU2_TR(0x5c7ecd);
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
B5c7ecf:{NFSU2_TR(0x5c7ecf);
__builtin_memmove((R+24),(R+4),4);
}
B5c7ed1:{NFSU2_TR(0x5c7ed1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c7eee;}}
}
B5c7ed3:L5c7ed3:{c.instructions+=2;NFSU2_TR(0x5c7ed3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7ed4:{NFSU2_TR(0x5c7ed4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c7ed9ull));
TAIL_STATIC(0x43c780u,43c);
}
B5c7ed9:L5c7ed9:{c.instructions+=3;NFSU2_TR(0x5c7ed9);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x40ull))));
}
B5c7edc:{NFSU2_TR(0x5c7edc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7edd:{NFSU2_TR(0x5c7edd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c7ee2ull));
TAIL_STATIC(0x43c780u,43c);
}
B5c7ee2:L5c7ee2:{c.instructions+=6;NFSU2_TR(0x5c7ee2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5c7ee5:{NFSU2_TR(0x5c7ee5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5c7ee6:{NFSU2_TR(0x5c7ee6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c7ee7:{NFSU2_TR(0x5c7ee7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5c7ee8:{NFSU2_TR(0x5c7ee8);
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
B5c7eeb:{NFSU2_TR(0x5c7eeb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c7eee:L5c7eee:{c.instructions+=3;NFSU2_TR(0x5c7eee);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7eef:{NFSU2_TR(0x5c7eef);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7ef0:{NFSU2_TR(0x5c7ef0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c7ef5ull));
TAIL_STATIC(0x4012b0u,401);
}
B5c7ef5:L5c7ef5:{c.instructions+=6;NFSU2_TR(0x5c7ef5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c7ef8:{NFSU2_TR(0x5c7ef8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c7efe:{NFSU2_TR(0x5c7efe);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5c7f01:{NFSU2_TR(0x5c7f01);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5c7f04:{NFSU2_TR(0x5c7f04);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c7f08:{NFSU2_TR(0x5c7f08);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c7f14;}}
}
B5c7f0a:L5c7f0a:{c.instructions+=2;NFSU2_TR(0x5c7f0a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x466a6000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c7f12:{NFSU2_TR(0x5c7f12);
{goto L5c7f1e;}
}
B5c7f14:L5c7f14:{c.instructions+=2;NFSU2_TR(0x5c7f14);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c7f1a:{NFSU2_TR(0x5c7f1a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c7f1e:L5c7f1e:{c.instructions+=5;NFSU2_TR(0x5c7f1e);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c7f22:{NFSU2_TR(0x5c7f22);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B5c7f28:{NFSU2_TR(0x5c7f28);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5c7f2a:{NFSU2_TR(0x5c7f2a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5c7f2d:{NFSU2_TR(0x5c7f2d);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5c7f37;}}
}
B5c7f2f:L5c7f2f:{c.instructions+=2;NFSU2_TR(0x5c7f2f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c7f33:{NFSU2_TR(0x5c7f33);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c7f37:L5c7f37:{c.instructions+=5;NFSU2_TR(0x5c7f37);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c7f3b:{NFSU2_TR(0x5c7f3b);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B5c7f41:{NFSU2_TR(0x5c7f41);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5c7f43:{NFSU2_TR(0x5c7f43);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5c7f46:{NFSU2_TR(0x5c7f46);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5c7f50;}}
}
B5c7f48:L5c7f48:{c.instructions+=2;NFSU2_TR(0x5c7f48);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c7f4c:{NFSU2_TR(0x5c7f4c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c7f50:L5c7f50:{c.instructions+=7;NFSU2_TR(0x5c7f50);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5c7f53:{NFSU2_TR(0x5c7f53);
if(mod_hook_table[43]){SPILL();c.pc=0x5c7f53u;mod_hook_table[43](c);SPILL();if(c.pc!=0x5c7f53u){TAIL_DYNAMIC(c.pc);}goto B5c7f59;}
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c7f56:{NFSU2_TR(0x5c7f56);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5c7f59:{NFSU2_TR(0x5c7f59);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c7f61:{NFSU2_TR(0x5c7f61);
if(r4(MODV+204)){goto B5c7f64;}
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xda,0x30"::"a"(ea_):"memory");}
}
B5c7f64:{NFSU2_TR(0x5c7f64);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c7f68:{NFSU2_TR(0x5c7f68);
if(r1(R+518)){{goto L5c7f79;}}
}
B5c7f6a:L5c7f6a:{c.instructions+=2;NFSU2_TR(0x5c7f6a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5c7f6d:{NFSU2_TR(0x5c7f6d);
if(r1(R+518)){{goto L5c7f79;}}
}
B5c7f6f:L5c7f6f:{c.instructions+=2;NFSU2_TR(0x5c7f6f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5c7f72:{NFSU2_TR(0x5c7f72);
if(r1(R+518)){{goto L5c7f79;}}
}
B5c7f74:L5c7f74:{c.instructions+=2;NFSU2_TR(0x5c7f74);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5c7f77:{NFSU2_TR(0x5c7f77);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c7f96;}}
}
B5c7f79:L5c7f79:{c.instructions+=6;NFSU2_TR(0x5c7f79);
{u32 ea_=u32(u32(8005600u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c7f7f:{NFSU2_TR(0x5c7f7f);
__builtin_memmove((R+0),gp(0x7a27dc),4);
}
B5c7f84:{NFSU2_TR(0x5c7f84);
{u32 ea_=u32(u32(8005592u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5c7f8a:{NFSU2_TR(0x5c7f8a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c7f8e:{NFSU2_TR(0x5c7f8e);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c7f92:{NFSU2_TR(0x5c7f92);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c7f96:L5c7f96:{c.instructions+=2;NFSU2_TR(0x5c7f96);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5c7f99:{NFSU2_TR(0x5c7f99);
if(r1(R+518)){{goto L5c7fa0;}}
}
B5c7f9b:L5c7f9b:{c.instructions+=2;NFSU2_TR(0x5c7f9b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5c7f9e:{NFSU2_TR(0x5c7f9e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c7fa8;}}
}
B5c7fa0:L5c7fa0:{c.instructions+=1;NFSU2_TR(0x5c7fa0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x3f19a956ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c7fa8:L5c7fa8:{c.instructions+=7;NFSU2_TR(0x5c7fa8);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B5c7faf:{NFSU2_TR(0x5c7faf);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c7fb3:{NFSU2_TR(0x5c7fb3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7fb4:{NFSU2_TR(0x5c7fb4);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5c7fb8:{NFSU2_TR(0x5c7fb8);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c7fbc:{NFSU2_TR(0x5c7fbc);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c7fc2:{NFSU2_TR(0x5c7fc2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c7fc7ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5c7fc7:L5c7fc7:{c.instructions+=3;NFSU2_TR(0x5c7fc7);
__builtin_memmove((R+12),(R+0),4);
}
B5c7fc9:{NFSU2_TR(0x5c7fc9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7fca:{NFSU2_TR(0x5c7fca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c7fcfull));
TAIL_STATIC(0x43c2b0u,43c);
}
B5c7fcf:L5c7fcf:{c.instructions+=3;NFSU2_TR(0x5c7fcf);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c7fd3:{NFSU2_TR(0x5c7fd3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c7fd4:{NFSU2_TR(0x5c7fd4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c7fd9ull));
TAIL_STATIC(0x43c370u,43c);
}
B5c7fd9:L5c7fd9:{c.instructions+=8;NFSU2_TR(0x5c7fd9);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B5c7fdd:{NFSU2_TR(0x5c7fdd);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B5c7fe4:{NFSU2_TR(0x5c7fe4);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c7fe8:{NFSU2_TR(0x5c7fe8);
{u32 ea_=u32(r4(MODV+208));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B5c7fee:{NFSU2_TR(0x5c7fee);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c7ff2:{NFSU2_TR(0x5c7ff2);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5c7ff6:{NFSU2_TR(0x5c7ff6);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c7ffa:{NFSU2_TR(0x5c7ffa);
{u32 ea_=u32(r4(MODV+212));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
TAIL_STATIC(0x5c8000u,5c8);
}
XIT:NFSU2_TR_EXIT(0x5c7,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
