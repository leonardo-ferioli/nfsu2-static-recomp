#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_486(u8* __restrict R,Cpu& c);
u32 body_494(u8* __restrict R,Cpu& c);
u32 body_4c5(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_542(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_572(u8* __restrict R,Cpu& c);
u32 body_573(u8* __restrict R,Cpu& c);
u32 body_578(u8* __restrict R,Cpu& c);
u32 body_579(u8* __restrict R,Cpu& c);
u32 body_57a(u8* __restrict R,Cpu& c);
u32 body_57b(u8* __restrict R,Cpu& c);
u32 body_57c(u8* __restrict R,Cpu& c);
u32 body_57e(u8* __restrict R,Cpu& c);
u32 body_6f5(u8* __restrict R,Cpu& c);
u32 body_6f7(u8* __restrict R,Cpu& c);
u32 body_6f8(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x57d,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x57d,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_57d(u8* __restrict R,Cpu& c);
u32 page_57d(Cpu& c){return body_57d(c.regs.data(),c);}
__attribute__((noinline)) u32 body_57d(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x57d000:goto L57d000;
case 0x57d002:c.instructions+=4;goto B57d002;
case 0x57d003:c.instructions+=3;goto B57d003;
case 0x57d005:c.instructions+=2;goto B57d005;
case 0x57d007:c.instructions+=1;goto B57d007;
case 0x57d009:goto L57d009;
case 0x57d00c:c.instructions+=2;goto B57d00c;
case 0x57d00e:c.instructions+=1;goto B57d00e;
case 0x57d010:goto L57d010;
case 0x57d015:c.instructions+=2;goto B57d015;
case 0x57d01b:c.instructions+=1;goto B57d01b;
case 0x57d01d:goto L57d01d;
case 0x57d01e:c.instructions+=1;goto B57d01e;
case 0x57d023:goto L57d023;
case 0x57d025:c.instructions+=1;goto B57d025;
case 0x57d027:goto L57d027;
case 0x57d02c:goto L57d02c;
case 0x57d02f:c.instructions+=2;goto B57d02f;
case 0x57d031:c.instructions+=1;goto B57d031;
case 0x57d033:goto L57d033;
case 0x57d036:c.instructions+=1;goto B57d036;
case 0x57d038:goto L57d038;
case 0x57d03d:c.instructions+=7;goto B57d03d;
case 0x57d03e:c.instructions+=6;goto B57d03e;
case 0x57d03f:c.instructions+=5;goto B57d03f;
case 0x57d044:c.instructions+=4;goto B57d044;
case 0x57d046:c.instructions+=3;goto B57d046;
case 0x57d047:c.instructions+=2;goto B57d047;
case 0x57d049:c.instructions+=1;goto B57d049;
case 0x57d04b:goto L57d04b;
case 0x57d04d:c.instructions+=1;goto B57d04d;
case 0x57d04f:goto L57d04f;
case 0x57d050:c.instructions+=1;goto B57d050;
case 0x57d055:goto L57d055;
case 0x57d056:c.instructions+=1;goto B57d056;
case 0x57d060:goto L57d060;
case 0x57d063:c.instructions+=16;goto B57d063;
case 0x57d068:c.instructions+=15;goto B57d068;
case 0x57d069:c.instructions+=14;goto B57d069;
case 0x57d06b:c.instructions+=13;goto B57d06b;
case 0x57d071:c.instructions+=12;goto B57d071;
case 0x57d077:c.instructions+=11;goto B57d077;
case 0x57d079:c.instructions+=10;goto B57d079;
case 0x57d07d:c.instructions+=9;goto B57d07d;
case 0x57d081:c.instructions+=8;goto B57d081;
case 0x57d085:c.instructions+=7;goto B57d085;
case 0x57d08b:c.instructions+=6;goto B57d08b;
case 0x57d08f:c.instructions+=5;goto B57d08f;
case 0x57d095:c.instructions+=4;goto B57d095;
case 0x57d097:c.instructions+=3;goto B57d097;
case 0x57d099:c.instructions+=2;goto B57d099;
case 0x57d09c:c.instructions+=1;goto B57d09c;
case 0x57d0a2:goto L57d0a2;
case 0x57d0a3:c.instructions+=1;goto B57d0a3;
case 0x57d0b0:goto L57d0b0;
case 0x57d0b6:c.instructions+=2;goto B57d0b6;
case 0x57d0b8:c.instructions+=1;goto B57d0b8;
case 0x57d0be:goto L57d0be;
case 0x57d0c4:c.instructions+=6;goto B57d0c4;
case 0x57d0c6:c.instructions+=5;goto B57d0c6;
case 0x57d0c8:c.instructions+=4;goto B57d0c8;
case 0x57d0c9:c.instructions+=3;goto B57d0c9;
case 0x57d0ce:c.instructions+=2;goto B57d0ce;
case 0x57d0d4:c.instructions+=1;goto B57d0d4;
case 0x57d0d9:goto L57d0d9;
case 0x57d0db:c.instructions+=1;goto B57d0db;
case 0x57d0dd:goto L57d0dd;
case 0x57d0e0:goto L57d0e0;
case 0x57d0e1:c.instructions+=4;goto B57d0e1;
case 0x57d0e2:c.instructions+=3;goto B57d0e2;
case 0x57d0e7:c.instructions+=2;goto B57d0e7;
case 0x57d0e9:c.instructions+=1;goto B57d0e9;
case 0x57d0ee:goto L57d0ee;
case 0x57d0f0:c.instructions+=1;goto B57d0f0;
case 0x57d0f2:goto L57d0f2;
case 0x57d0f4:c.instructions+=10;goto B57d0f4;
case 0x57d0f7:c.instructions+=9;goto B57d0f7;
case 0x57d0f9:c.instructions+=8;goto B57d0f9;
case 0x57d0fc:c.instructions+=7;goto B57d0fc;
case 0x57d102:c.instructions+=6;goto B57d102;
case 0x57d108:c.instructions+=5;goto B57d108;
case 0x57d10a:c.instructions+=4;goto B57d10a;
case 0x57d10d:c.instructions+=3;goto B57d10d;
case 0x57d110:c.instructions+=2;goto B57d110;
case 0x57d112:c.instructions+=1;goto B57d112;
case 0x57d118:goto L57d118;
case 0x57d119:c.instructions+=3;goto B57d119;
case 0x57d11e:c.instructions+=2;goto B57d11e;
case 0x57d120:c.instructions+=1;goto B57d120;
case 0x57d125:goto L57d125;
case 0x57d127:c.instructions+=1;goto B57d127;
case 0x57d129:goto L57d129;
case 0x57d12f:c.instructions+=2;goto B57d12f;
case 0x57d135:c.instructions+=1;goto B57d135;
case 0x57d137:goto L57d137;
case 0x57d13d:c.instructions+=11;goto B57d13d;
case 0x57d143:c.instructions+=10;goto B57d143;
case 0x57d145:c.instructions+=9;goto B57d145;
case 0x57d149:c.instructions+=8;goto B57d149;
case 0x57d14d:c.instructions+=7;goto B57d14d;
case 0x57d153:c.instructions+=6;goto B57d153;
case 0x57d159:c.instructions+=5;goto B57d159;
case 0x57d15f:c.instructions+=4;goto B57d15f;
case 0x57d161:c.instructions+=3;goto B57d161;
case 0x57d163:c.instructions+=2;goto B57d163;
case 0x57d166:c.instructions+=1;goto B57d166;
case 0x57d16c:goto L57d16c;
case 0x57d16d:c.instructions+=3;goto B57d16d;
case 0x57d16e:c.instructions+=2;goto B57d16e;
case 0x57d171:c.instructions+=1;goto B57d171;
case 0x57d172:goto L57d172;
case 0x57d177:c.instructions+=1;goto B57d177;
case 0x57d17c:goto L57d17c;
case 0x57d17e:c.instructions+=1;goto B57d17e;
case 0x57d180:goto L57d180;
case 0x57d186:goto L57d186;
case 0x57d187:goto L57d187;
case 0x57d188:c.instructions+=2;goto B57d188;
case 0x57d18b:c.instructions+=1;goto B57d18b;
case 0x57d190:goto L57d190;
case 0x57d191:c.instructions+=4;goto B57d191;
case 0x57d193:c.instructions+=3;goto B57d193;
case 0x57d198:c.instructions+=2;goto B57d198;
case 0x57d19e:c.instructions+=1;goto B57d19e;
case 0x57d1a3:goto L57d1a3;
case 0x57d1a5:c.instructions+=3;goto B57d1a5;
case 0x57d1aa:c.instructions+=2;goto B57d1aa;
case 0x57d1ac:c.instructions+=1;goto B57d1ac;
case 0x57d1b1:goto L57d1b1;
case 0x57d1b3:c.instructions+=1;goto B57d1b3;
case 0x57d1b5:goto L57d1b5;
case 0x57d1b6:c.instructions+=2;goto B57d1b6;
case 0x57d1b8:c.instructions+=1;goto B57d1b8;
case 0x57d1bd:goto L57d1bd;
case 0x57d1bf:c.instructions+=2;goto B57d1bf;
case 0x57d1c6:c.instructions+=1;goto B57d1c6;
case 0x57d1cb:goto L57d1cb;
case 0x57d1cd:c.instructions+=3;goto B57d1cd;
case 0x57d1d2:c.instructions+=2;goto B57d1d2;
case 0x57d1d4:c.instructions+=1;goto B57d1d4;
case 0x57d1d9:goto L57d1d9;
case 0x57d1db:c.instructions+=1;goto B57d1db;
case 0x57d1dd:goto L57d1dd;
case 0x57d1de:c.instructions+=2;goto B57d1de;
case 0x57d1e0:c.instructions+=1;goto B57d1e0;
case 0x57d1e5:goto L57d1e5;
case 0x57d1e6:c.instructions+=1;goto B57d1e6;
case 0x57d1f0:goto L57d1f0;
case 0x57d1f4:c.instructions+=4;goto B57d1f4;
case 0x57d1f7:c.instructions+=3;goto B57d1f7;
case 0x57d1f9:c.instructions+=2;goto B57d1f9;
case 0x57d1fb:c.instructions+=1;goto B57d1fb;
case 0x57d1fd:goto L57d1fd;
case 0x57d200:c.instructions+=1;goto B57d200;
case 0x57d202:goto L57d202;
case 0x57d204:goto L57d204;
case 0x57d20b:c.instructions+=2;goto B57d20b;
case 0x57d20e:c.instructions+=1;goto B57d20e;
case 0x57d210:goto L57d210;
case 0x57d212:c.instructions+=1;goto B57d212;
case 0x57d214:goto L57d214;
case 0x57d217:c.instructions+=1;goto B57d217;
case 0x57d219:goto L57d219;
case 0x57d21b:goto L57d21b;
case 0x57d222:c.instructions+=5;goto B57d222;
case 0x57d223:c.instructions+=4;goto B57d223;
case 0x57d227:c.instructions+=3;goto B57d227;
case 0x57d22c:c.instructions+=2;goto B57d22c;
case 0x57d22d:c.instructions+=1;goto B57d22d;
case 0x57d232:goto L57d232;
case 0x57d235:c.instructions+=1;goto B57d235;
case 0x57d237:goto L57d237;
case 0x57d23c:goto L57d23c;
case 0x57d240:c.instructions+=6;goto B57d240;
case 0x57d241:c.instructions+=5;goto B57d241;
case 0x57d242:c.instructions+=4;goto B57d242;
case 0x57d244:c.instructions+=3;goto B57d244;
case 0x57d245:c.instructions+=2;goto B57d245;
case 0x57d24b:c.instructions+=1;goto B57d24b;
case 0x57d250:goto L57d250;
case 0x57d252:c.instructions+=3;goto B57d252;
case 0x57d254:c.instructions+=2;goto B57d254;
case 0x57d259:c.instructions+=1;goto B57d259;
case 0x57d25f:goto L57d25f;
case 0x57d260:c.instructions+=1;goto B57d260;
case 0x57d261:goto L57d261;
case 0x57d267:c.instructions+=11;goto B57d267;
case 0x57d26d:c.instructions+=10;goto B57d26d;
case 0x57d273:c.instructions+=9;goto B57d273;
case 0x57d275:c.instructions+=8;goto B57d275;
case 0x57d278:c.instructions+=7;goto B57d278;
case 0x57d27c:c.instructions+=6;goto B57d27c;
case 0x57d27e:c.instructions+=5;goto B57d27e;
case 0x57d281:c.instructions+=4;goto B57d281;
case 0x57d282:c.instructions+=3;goto B57d282;
case 0x57d28a:c.instructions+=2;goto B57d28a;
case 0x57d28e:c.instructions+=1;goto B57d28e;
case 0x57d293:goto L57d293;
case 0x57d295:c.instructions+=3;goto B57d295;
case 0x57d298:c.instructions+=2;goto B57d298;
case 0x57d29a:c.instructions+=1;goto B57d29a;
case 0x57d2a0:goto L57d2a0;
case 0x57d2a3:c.instructions+=8;goto B57d2a3;
case 0x57d2a6:c.instructions+=7;goto B57d2a6;
case 0x57d2a8:c.instructions+=6;goto B57d2a8;
case 0x57d2aa:c.instructions+=5;goto B57d2aa;
case 0x57d2ae:c.instructions+=4;goto B57d2ae;
case 0x57d2af:c.instructions+=3;goto B57d2af;
case 0x57d2b0:c.instructions+=2;goto B57d2b0;
case 0x57d2b1:c.instructions+=1;goto B57d2b1;
case 0x57d2b6:goto L57d2b6;
case 0x57d2b9:c.instructions+=7;goto B57d2b9;
case 0x57d2bc:c.instructions+=6;goto B57d2bc;
case 0x57d2bf:c.instructions+=5;goto B57d2bf;
case 0x57d2c1:c.instructions+=4;goto B57d2c1;
case 0x57d2c4:c.instructions+=3;goto B57d2c4;
case 0x57d2c6:c.instructions+=2;goto B57d2c6;
case 0x57d2c9:c.instructions+=1;goto B57d2c9;
case 0x57d2cb:goto L57d2cb;
case 0x57d2ce:goto L57d2ce;
case 0x57d2d1:c.instructions+=2;goto B57d2d1;
case 0x57d2d3:c.instructions+=1;goto B57d2d3;
case 0x57d2d5:goto L57d2d5;
case 0x57d2dc:c.instructions+=1;goto B57d2dc;
case 0x57d2de:goto L57d2de;
case 0x57d2e1:c.instructions+=2;goto B57d2e1;
case 0x57d2e3:c.instructions+=1;goto B57d2e3;
case 0x57d2e5:goto L57d2e5;
case 0x57d2e8:c.instructions+=2;goto B57d2e8;
case 0x57d2ea:c.instructions+=1;goto B57d2ea;
case 0x57d2ec:goto L57d2ec;
case 0x57d2ef:c.instructions+=1;goto B57d2ef;
case 0x57d2f1:goto L57d2f1;
case 0x57d2f4:c.instructions+=2;goto B57d2f4;
case 0x57d2f6:c.instructions+=1;goto B57d2f6;
case 0x57d2f8:goto L57d2f8;
case 0x57d2fa:c.instructions+=3;goto B57d2fa;
case 0x57d2fc:c.instructions+=2;goto B57d2fc;
case 0x57d2fd:c.instructions+=1;goto B57d2fd;
case 0x57d302:goto L57d302;
case 0x57d307:c.instructions+=2;goto B57d307;
case 0x57d308:c.instructions+=1;goto B57d308;
case 0x57d30d:goto L57d30d;
case 0x57d310:goto L57d310;
case 0x57d317:goto L57d317;
case 0x57d31c:c.instructions+=3;goto B57d31c;
case 0x57d31d:c.instructions+=2;goto B57d31d;
case 0x57d31e:c.instructions+=1;goto B57d31e;
case 0x57d323:goto L57d323;
case 0x57d326:goto L57d326;
case 0x57d328:c.instructions+=4;goto B57d328;
case 0x57d32c:c.instructions+=3;goto B57d32c;
case 0x57d32e:c.instructions+=2;goto B57d32e;
case 0x57d32f:c.instructions+=1;goto B57d32f;
case 0x57d334:goto L57d334;
case 0x57d336:c.instructions+=3;goto B57d336;
case 0x57d339:c.instructions+=2;goto B57d339;
case 0x57d33b:c.instructions+=1;goto B57d33b;
case 0x57d341:goto L57d341;
case 0x57d344:c.instructions+=7;goto B57d344;
case 0x57d347:c.instructions+=6;goto B57d347;
case 0x57d349:c.instructions+=5;goto B57d349;
case 0x57d34a:c.instructions+=4;goto B57d34a;
case 0x57d34b:c.instructions+=3;goto B57d34b;
case 0x57d34c:c.instructions+=2;goto B57d34c;
case 0x57d34d:c.instructions+=1;goto B57d34d;
case 0x57d352:goto L57d352;
case 0x57d355:c.instructions+=7;goto B57d355;
case 0x57d358:c.instructions+=6;goto B57d358;
case 0x57d35a:c.instructions+=5;goto B57d35a;
case 0x57d35c:c.instructions+=4;goto B57d35c;
case 0x57d35f:c.instructions+=3;goto B57d35f;
case 0x57d361:c.instructions+=2;goto B57d361;
case 0x57d364:c.instructions+=1;goto B57d364;
case 0x57d366:goto L57d366;
case 0x57d369:goto L57d369;
case 0x57d36c:c.instructions+=2;goto B57d36c;
case 0x57d36e:c.instructions+=1;goto B57d36e;
case 0x57d370:goto L57d370;
case 0x57d377:c.instructions+=1;goto B57d377;
case 0x57d379:goto L57d379;
case 0x57d37c:c.instructions+=2;goto B57d37c;
case 0x57d37e:c.instructions+=1;goto B57d37e;
case 0x57d380:goto L57d380;
case 0x57d383:c.instructions+=2;goto B57d383;
case 0x57d385:c.instructions+=1;goto B57d385;
case 0x57d387:goto L57d387;
case 0x57d38a:c.instructions+=1;goto B57d38a;
case 0x57d38c:goto L57d38c;
case 0x57d38f:c.instructions+=2;goto B57d38f;
case 0x57d391:c.instructions+=1;goto B57d391;
case 0x57d393:goto L57d393;
case 0x57d395:c.instructions+=3;goto B57d395;
case 0x57d397:c.instructions+=2;goto B57d397;
case 0x57d398:c.instructions+=1;goto B57d398;
case 0x57d39d:goto L57d39d;
case 0x57d3a2:c.instructions+=2;goto B57d3a2;
case 0x57d3a3:c.instructions+=1;goto B57d3a3;
case 0x57d3a8:goto L57d3a8;
case 0x57d3ab:goto L57d3ab;
case 0x57d3b2:goto L57d3b2;
case 0x57d3b8:c.instructions+=3;goto B57d3b8;
case 0x57d3b9:c.instructions+=2;goto B57d3b9;
case 0x57d3ba:c.instructions+=1;goto B57d3ba;
case 0x57d3bf:goto L57d3bf;
case 0x57d3c2:goto L57d3c2;
case 0x57d3c6:c.instructions+=4;goto B57d3c6;
case 0x57d3cc:c.instructions+=3;goto B57d3cc;
case 0x57d3cd:c.instructions+=2;goto B57d3cd;
case 0x57d3ce:c.instructions+=1;goto B57d3ce;
case 0x57d3d3:goto L57d3d3;
case 0x57d3d5:c.instructions+=3;goto B57d3d5;
case 0x57d3d6:c.instructions+=2;goto B57d3d6;
case 0x57d3d8:c.instructions+=1;goto B57d3d8;
case 0x57d3de:goto L57d3de;
case 0x57d3df:c.instructions+=1;goto B57d3df;
case 0x57d3e0:goto L57d3e0;
case 0x57d3e1:c.instructions+=3;goto B57d3e1;
case 0x57d3e2:c.instructions+=2;goto B57d3e2;
case 0x57d3e5:c.instructions+=1;goto B57d3e5;
case 0x57d3f0:goto L57d3f0;
case 0x57d3f6:c.instructions+=9;goto B57d3f6;
case 0x57d3f7:c.instructions+=8;goto B57d3f7;
case 0x57d3f8:c.instructions+=7;goto B57d3f8;
case 0x57d3f9:c.instructions+=6;goto B57d3f9;
case 0x57d3fb:c.instructions+=5;goto B57d3fb;
case 0x57d3fc:c.instructions+=4;goto B57d3fc;
case 0x57d3fe:c.instructions+=3;goto B57d3fe;
case 0x57d404:c.instructions+=2;goto B57d404;
case 0x57d409:c.instructions+=1;goto B57d409;
case 0x57d40e:goto L57d40e;
case 0x57d414:c.instructions+=4;goto B57d414;
case 0x57d415:c.instructions+=3;goto B57d415;
case 0x57d41a:c.instructions+=2;goto B57d41a;
case 0x57d41c:c.instructions+=1;goto B57d41c;
case 0x57d421:goto L57d421;
case 0x57d423:c.instructions+=1;goto B57d423;
case 0x57d429:goto L57d429;
case 0x57d42b:c.instructions+=1;goto B57d42b;
case 0x57d431:goto L57d431;
case 0x57d434:c.instructions+=1;goto B57d434;
case 0x57d436:goto L57d436;
case 0x57d439:goto L57d439;
case 0x57d43a:c.instructions+=6;goto B57d43a;
case 0x57d43d:c.instructions+=5;goto B57d43d;
case 0x57d43e:c.instructions+=4;goto B57d43e;
case 0x57d442:c.instructions+=3;goto B57d442;
case 0x57d443:c.instructions+=2;goto B57d443;
case 0x57d445:c.instructions+=1;goto B57d445;
case 0x57d44a:goto L57d44a;
case 0x57d44c:c.instructions+=7;goto B57d44c;
case 0x57d450:c.instructions+=6;goto B57d450;
case 0x57d451:c.instructions+=5;goto B57d451;
case 0x57d455:c.instructions+=4;goto B57d455;
case 0x57d456:c.instructions+=3;goto B57d456;
case 0x57d45a:c.instructions+=2;goto B57d45a;
case 0x57d45e:c.instructions+=1;goto B57d45e;
case 0x57d463:goto L57d463;
case 0x57d465:c.instructions+=2;goto B57d465;
case 0x57d46a:c.instructions+=1;goto B57d46a;
case 0x57d46e:goto L57d46e;
case 0x57d470:goto L57d470;
case 0x57d475:c.instructions+=8;goto B57d475;
case 0x57d47c:c.instructions+=7;goto B57d47c;
case 0x57d47e:c.instructions+=6;goto B57d47e;
case 0x57d47f:c.instructions+=5;goto B57d47f;
case 0x57d487:c.instructions+=4;goto B57d487;
case 0x57d48e:c.instructions+=3;goto B57d48e;
case 0x57d499:c.instructions+=2;goto B57d499;
case 0x57d4a0:c.instructions+=1;goto B57d4a0;
case 0x57d4a5:goto L57d4a5;
case 0x57d4a7:c.instructions+=7;goto B57d4a7;
case 0x57d4ab:c.instructions+=6;goto B57d4ab;
case 0x57d4ac:c.instructions+=5;goto B57d4ac;
case 0x57d4b0:c.instructions+=4;goto B57d4b0;
case 0x57d4b1:c.instructions+=3;goto B57d4b1;
case 0x57d4b9:c.instructions+=2;goto B57d4b9;
case 0x57d4c1:c.instructions+=1;goto B57d4c1;
case 0x57d4c6:goto L57d4c6;
case 0x57d4c8:c.instructions+=5;goto B57d4c8;
case 0x57d4cf:c.instructions+=4;goto B57d4cf;
case 0x57d4d0:c.instructions+=3;goto B57d4d0;
case 0x57d4d4:c.instructions+=2;goto B57d4d4;
case 0x57d4d5:c.instructions+=1;goto B57d4d5;
case 0x57d4da:goto L57d4da;
case 0x57d4dd:c.instructions+=4;goto B57d4dd;
case 0x57d4e2:c.instructions+=3;goto B57d4e2;
case 0x57d4e3:c.instructions+=2;goto B57d4e3;
case 0x57d4e5:c.instructions+=1;goto B57d4e5;
case 0x57d4ea:goto L57d4ea;
case 0x57d4ef:c.instructions+=3;goto B57d4ef;
case 0x57d4f0:c.instructions+=2;goto B57d4f0;
case 0x57d4f2:c.instructions+=1;goto B57d4f2;
case 0x57d4f7:goto L57d4f7;
case 0x57d4fc:c.instructions+=3;goto B57d4fc;
case 0x57d4fd:c.instructions+=2;goto B57d4fd;
case 0x57d4ff:c.instructions+=1;goto B57d4ff;
case 0x57d504:goto L57d504;
case 0x57d509:c.instructions+=3;goto B57d509;
case 0x57d50a:c.instructions+=2;goto B57d50a;
case 0x57d50c:c.instructions+=1;goto B57d50c;
case 0x57d511:goto L57d511;
case 0x57d516:c.instructions+=3;goto B57d516;
case 0x57d517:c.instructions+=2;goto B57d517;
case 0x57d519:c.instructions+=1;goto B57d519;
case 0x57d51e:goto L57d51e;
case 0x57d523:c.instructions+=3;goto B57d523;
case 0x57d524:c.instructions+=2;goto B57d524;
case 0x57d526:c.instructions+=1;goto B57d526;
case 0x57d52b:goto L57d52b;
case 0x57d530:c.instructions+=18;goto B57d530;
case 0x57d536:c.instructions+=17;goto B57d536;
case 0x57d539:c.instructions+=16;goto B57d539;
case 0x57d53a:c.instructions+=15;goto B57d53a;
case 0x57d53d:c.instructions+=14;goto B57d53d;
case 0x57d53f:c.instructions+=13;goto B57d53f;
case 0x57d541:c.instructions+=12;goto B57d541;
case 0x57d544:c.instructions+=11;goto B57d544;
case 0x57d547:c.instructions+=10;goto B57d547;
case 0x57d54a:c.instructions+=9;goto B57d54a;
case 0x57d54d:c.instructions+=8;goto B57d54d;
case 0x57d555:c.instructions+=7;goto B57d555;
case 0x57d559:c.instructions+=6;goto B57d559;
case 0x57d55b:c.instructions+=5;goto B57d55b;
case 0x57d55f:c.instructions+=4;goto B57d55f;
case 0x57d560:c.instructions+=3;goto B57d560;
case 0x57d564:c.instructions+=2;goto B57d564;
case 0x57d565:c.instructions+=1;goto B57d565;
case 0x57d56a:goto L57d56a;
case 0x57d56b:c.instructions+=4;goto B57d56b;
case 0x57d56f:c.instructions+=3;goto B57d56f;
case 0x57d570:c.instructions+=2;goto B57d570;
case 0x57d571:c.instructions+=1;goto B57d571;
case 0x57d576:goto L57d576;
case 0x57d579:c.instructions+=1;goto B57d579;
case 0x57d57a:goto L57d57a;
case 0x57d57b:c.instructions+=4;goto B57d57b;
case 0x57d57c:c.instructions+=3;goto B57d57c;
case 0x57d57d:c.instructions+=2;goto B57d57d;
case 0x57d583:c.instructions+=1;goto B57d583;
case 0x57d590:goto L57d590;
case 0x57d591:c.instructions+=3;goto B57d591;
case 0x57d592:c.instructions+=2;goto B57d592;
case 0x57d596:c.instructions+=1;goto B57d596;
case 0x57d598:goto L57d598;
case 0x57d599:c.instructions+=2;goto B57d599;
case 0x57d59a:c.instructions+=1;goto B57d59a;
case 0x57d59f:goto L57d59f;
case 0x57d5a2:c.instructions+=3;goto B57d5a2;
case 0x57d5a3:c.instructions+=2;goto B57d5a3;
case 0x57d5a6:c.instructions+=1;goto B57d5a6;
case 0x57d5a8:goto L57d5a8;
case 0x57d5a9:c.instructions+=2;goto B57d5a9;
case 0x57d5aa:c.instructions+=1;goto B57d5aa;
case 0x57d5b0:goto L57d5b0;
case 0x57d5b3:c.instructions+=16;goto B57d5b3;
case 0x57d5b7:c.instructions+=15;goto B57d5b7;
case 0x57d5b8:c.instructions+=14;goto B57d5b8;
case 0x57d5bc:c.instructions+=13;goto B57d5bc;
case 0x57d5bd:c.instructions+=12;goto B57d5bd;
case 0x57d5c0:c.instructions+=11;goto B57d5c0;
case 0x57d5c1:c.instructions+=10;goto B57d5c1;
case 0x57d5c5:c.instructions+=9;goto B57d5c5;
case 0x57d5c8:c.instructions+=8;goto B57d5c8;
case 0x57d5ca:c.instructions+=7;goto B57d5ca;
case 0x57d5cd:c.instructions+=6;goto B57d5cd;
case 0x57d5d1:c.instructions+=5;goto B57d5d1;
case 0x57d5d9:c.instructions+=4;goto B57d5d9;
case 0x57d5db:c.instructions+=3;goto B57d5db;
case 0x57d5df:c.instructions+=2;goto B57d5df;
case 0x57d5e3:c.instructions+=1;goto B57d5e3;
case 0x57d5e5:goto L57d5e5;
case 0x57d5e8:c.instructions+=5;goto B57d5e8;
case 0x57d5e9:c.instructions+=4;goto B57d5e9;
case 0x57d5eb:c.instructions+=3;goto B57d5eb;
case 0x57d5ed:c.instructions+=2;goto B57d5ed;
case 0x57d5f0:c.instructions+=1;goto B57d5f0;
case 0x57d5f2:goto L57d5f2;
case 0x57d5f4:c.instructions+=1;goto B57d5f4;
case 0x57d5f9:goto L57d5f9;
case 0x57d5fc:c.instructions+=1;goto B57d5fc;
case 0x57d5fe:goto L57d5fe;
case 0x57d605:goto L57d605;
case 0x57d608:c.instructions+=1;goto B57d608;
case 0x57d60a:goto L57d60a;
case 0x57d60d:c.instructions+=1;goto B57d60d;
case 0x57d60f:goto L57d60f;
case 0x57d612:c.instructions+=1;goto B57d612;
case 0x57d615:goto L57d615;
case 0x57d617:c.instructions+=5;goto B57d617;
case 0x57d618:c.instructions+=4;goto B57d618;
case 0x57d61c:c.instructions+=3;goto B57d61c;
case 0x57d61d:c.instructions+=2;goto B57d61d;
case 0x57d61f:c.instructions+=1;goto B57d61f;
case 0x57d624:goto L57d624;
case 0x57d627:c.instructions+=9;goto B57d627;
case 0x57d629:c.instructions+=8;goto B57d629;
case 0x57d62b:c.instructions+=7;goto B57d62b;
case 0x57d62d:c.instructions+=6;goto B57d62d;
case 0x57d633:c.instructions+=5;goto B57d633;
case 0x57d639:c.instructions+=4;goto B57d639;
case 0x57d63b:c.instructions+=3;goto B57d63b;
case 0x57d63e:c.instructions+=2;goto B57d63e;
case 0x57d641:c.instructions+=1;goto B57d641;
case 0x57d643:goto L57d643;
case 0x57d645:c.instructions+=1;goto B57d645;
case 0x57d647:goto L57d647;
case 0x57d648:c.instructions+=5;goto B57d648;
case 0x57d64e:c.instructions+=4;goto B57d64e;
case 0x57d64f:c.instructions+=3;goto B57d64f;
case 0x57d652:c.instructions+=2;goto B57d652;
case 0x57d653:c.instructions+=1;goto B57d653;
case 0x57d658:goto L57d658;
case 0x57d65a:c.instructions+=3;goto B57d65a;
case 0x57d65d:c.instructions+=2;goto B57d65d;
case 0x57d660:c.instructions+=1;goto B57d660;
case 0x57d667:goto L57d667;
case 0x57d668:c.instructions+=4;goto B57d668;
case 0x57d669:c.instructions+=3;goto B57d669;
case 0x57d66a:c.instructions+=2;goto B57d66a;
case 0x57d66d:c.instructions+=1;goto B57d66d;
case 0x57d670:goto L57d670;
case 0x57d675:c.instructions+=2;goto B57d675;
case 0x57d677:c.instructions+=1;goto B57d677;
case 0x57d679:goto L57d679;
case 0x57d67d:c.instructions+=7;goto B57d67d;
case 0x57d681:c.instructions+=6;goto B57d681;
case 0x57d685:c.instructions+=5;goto B57d685;
case 0x57d686:c.instructions+=4;goto B57d686;
case 0x57d687:c.instructions+=3;goto B57d687;
case 0x57d68d:c.instructions+=2;goto B57d68d;
case 0x57d68e:c.instructions+=1;goto B57d68e;
case 0x57d693:goto L57d693;
case 0x57d6a0:goto L57d6a0;
case 0x57d6a1:c.instructions+=5;goto B57d6a1;
case 0x57d6a5:c.instructions+=4;goto B57d6a5;
case 0x57d6a6:c.instructions+=3;goto B57d6a6;
case 0x57d6a8:c.instructions+=2;goto B57d6a8;
case 0x57d6aa:c.instructions+=1;goto B57d6aa;
case 0x57d6ac:goto L57d6ac;
case 0x57d6ad:c.instructions+=3;goto B57d6ad;
case 0x57d6b1:c.instructions+=2;goto B57d6b1;
case 0x57d6b2:c.instructions+=1;goto B57d6b2;
case 0x57d6b6:goto L57d6b6;
case 0x57d6bb:c.instructions+=2;goto B57d6bb;
case 0x57d6bd:c.instructions+=1;goto B57d6bd;
case 0x57d6bf:goto L57d6bf;
case 0x57d6c3:c.instructions+=5;goto B57d6c3;
case 0x57d6c9:c.instructions+=4;goto B57d6c9;
case 0x57d6ca:c.instructions+=3;goto B57d6ca;
case 0x57d6cc:c.instructions+=2;goto B57d6cc;
case 0x57d6cd:c.instructions+=1;goto B57d6cd;
case 0x57d6d2:goto L57d6d2;
case 0x57d6d3:c.instructions+=2;goto B57d6d3;
case 0x57d6d5:c.instructions+=1;goto B57d6d5;
case 0x57d6d7:goto L57d6d7;
case 0x57d6d8:c.instructions+=1;goto B57d6d8;
case 0x57d6d9:goto L57d6d9;
case 0x57d6da:c.instructions+=2;goto B57d6da;
case 0x57d6db:c.instructions+=1;goto B57d6db;
case 0x57d6e0:goto L57d6e0;
case 0x57d6e6:c.instructions+=8;goto B57d6e6;
case 0x57d6e8:c.instructions+=7;goto B57d6e8;
case 0x57d6ed:c.instructions+=6;goto B57d6ed;
case 0x57d6ee:c.instructions+=5;goto B57d6ee;
case 0x57d6f3:c.instructions+=4;goto B57d6f3;
case 0x57d6fa:c.instructions+=3;goto B57d6fa;
case 0x57d700:c.instructions+=2;goto B57d700;
case 0x57d702:c.instructions+=1;goto B57d702;
case 0x57d708:goto L57d708;
case 0x57d70c:c.instructions+=3;goto B57d70c;
case 0x57d711:c.instructions+=2;goto B57d711;
case 0x57d712:c.instructions+=1;goto B57d712;
case 0x57d717:goto L57d717;
case 0x57d71b:c.instructions+=3;goto B57d71b;
case 0x57d71e:c.instructions+=2;goto B57d71e;
case 0x57d720:c.instructions+=1;goto B57d720;
case 0x57d726:goto L57d726;
case 0x57d72a:c.instructions+=2;goto B57d72a;
case 0x57d72b:c.instructions+=1;goto B57d72b;
case 0x57d730:goto L57d730;
case 0x57d733:c.instructions+=2;goto B57d733;
case 0x57d735:c.instructions+=1;goto B57d735;
case 0x57d737:goto L57d737;
case 0x57d738:c.instructions+=5;goto B57d738;
case 0x57d73a:c.instructions+=4;goto B57d73a;
case 0x57d73e:c.instructions+=3;goto B57d73e;
case 0x57d740:c.instructions+=2;goto B57d740;
case 0x57d741:c.instructions+=1;goto B57d741;
case 0x57d746:goto L57d746;
case 0x57d74a:c.instructions+=2;goto B57d74a;
case 0x57d74b:c.instructions+=1;goto B57d74b;
case 0x57d750:goto L57d750;
case 0x57d755:c.instructions+=2;goto B57d755;
case 0x57d757:c.instructions+=1;goto B57d757;
case 0x57d75c:goto L57d75c;
case 0x57d75f:c.instructions+=4;goto B57d75f;
case 0x57d763:c.instructions+=3;goto B57d763;
case 0x57d765:c.instructions+=2;goto B57d765;
case 0x57d770:c.instructions+=1;goto B57d770;
case 0x57d772:goto L57d772;
case 0x57d773:c.instructions+=4;goto B57d773;
case 0x57d777:c.instructions+=3;goto B57d777;
case 0x57d778:c.instructions+=2;goto B57d778;
case 0x57d77a:c.instructions+=1;goto B57d77a;
case 0x57d77f:goto L57d77f;
case 0x57d781:goto L57d781;
case 0x57d783:goto L57d783;
case 0x57d788:c.instructions+=6;goto B57d788;
case 0x57d792:c.instructions+=5;goto B57d792;
case 0x57d793:c.instructions+=4;goto B57d793;
case 0x57d79a:c.instructions+=3;goto B57d79a;
case 0x57d7a1:c.instructions+=2;goto B57d7a1;
case 0x57d7a7:c.instructions+=1;goto B57d7a7;
case 0x57d7a8:goto L57d7a8;
case 0x57d7ad:c.instructions+=1;goto B57d7ad;
case 0x57d7b2:goto L57d7b2;
case 0x57d7b5:c.instructions+=4;goto B57d7b5;
case 0x57d7b9:c.instructions+=3;goto B57d7b9;
case 0x57d7bb:c.instructions+=2;goto B57d7bb;
case 0x57d7c6:c.instructions+=1;goto B57d7c6;
case 0x57d7c8:goto L57d7c8;
case 0x57d7ca:c.instructions+=3;goto B57d7ca;
case 0x57d7cf:c.instructions+=2;goto B57d7cf;
case 0x57d7d1:c.instructions+=1;goto B57d7d1;
case 0x57d7d6:goto L57d7d6;
case 0x57d7d8:goto L57d7d8;
case 0x57d7da:goto L57d7da;
case 0x57d7dc:c.instructions+=5;goto B57d7dc;
case 0x57d7de:c.instructions+=4;goto B57d7de;
case 0x57d7e3:c.instructions+=3;goto B57d7e3;
case 0x57d7ee:c.instructions+=2;goto B57d7ee;
case 0x57d7f3:c.instructions+=1;goto B57d7f3;
case 0x57d7f8:goto L57d7f8;
case 0x57d7fb:c.instructions+=1;goto B57d7fb;
case 0x57d805:goto L57d805;
case 0x57d80c:c.instructions+=3;goto B57d80c;
case 0x57d813:c.instructions+=2;goto B57d813;
case 0x57d819:c.instructions+=1;goto B57d819;
case 0x57d820:goto L57d820;
case 0x57d821:c.instructions+=3;goto B57d821;
case 0x57d825:c.instructions+=2;goto B57d825;
case 0x57d826:c.instructions+=1;goto B57d826;
case 0x57d82b:goto L57d82b;
case 0x57d831:c.instructions+=5;goto B57d831;
case 0x57d833:c.instructions+=4;goto B57d833;
case 0x57d836:c.instructions+=3;goto B57d836;
case 0x57d83b:c.instructions+=2;goto B57d83b;
case 0x57d841:c.instructions+=1;goto B57d841;
case 0x57d843:goto L57d843;
case 0x57d845:c.instructions+=4;goto B57d845;
case 0x57d846:c.instructions+=3;goto B57d846;
case 0x57d847:c.instructions+=2;goto B57d847;
case 0x57d848:c.instructions+=1;goto B57d848;
case 0x57d84d:goto L57d84d;
case 0x57d850:goto L57d850;
case 0x57d852:c.instructions+=2;goto B57d852;
case 0x57d853:c.instructions+=1;goto B57d853;
case 0x57d860:goto L57d860;
case 0x57d865:c.instructions+=2;goto B57d865;
case 0x57d867:c.instructions+=1;goto B57d867;
case 0x57d869:goto L57d869;
case 0x57d86e:c.instructions+=2;goto B57d86e;
case 0x57d870:c.instructions+=1;goto B57d870;
case 0x57d872:goto L57d872;
case 0x57d874:c.instructions+=8;goto B57d874;
case 0x57d877:c.instructions+=7;goto B57d877;
case 0x57d878:c.instructions+=6;goto B57d878;
case 0x57d879:c.instructions+=5;goto B57d879;
case 0x57d87c:c.instructions+=4;goto B57d87c;
case 0x57d87e:c.instructions+=3;goto B57d87e;
case 0x57d880:c.instructions+=2;goto B57d880;
case 0x57d882:c.instructions+=1;goto B57d882;
case 0x57d884:goto L57d884;
case 0x57d885:c.instructions+=5;goto B57d885;
case 0x57d88b:c.instructions+=4;goto B57d88b;
case 0x57d88c:c.instructions+=3;goto B57d88c;
case 0x57d88f:c.instructions+=2;goto B57d88f;
case 0x57d890:c.instructions+=1;goto B57d890;
case 0x57d895:goto L57d895;
case 0x57d897:c.instructions+=3;goto B57d897;
case 0x57d89a:c.instructions+=2;goto B57d89a;
case 0x57d89c:c.instructions+=1;goto B57d89c;
case 0x57d8a3:goto L57d8a3;
case 0x57d8a4:c.instructions+=1;goto B57d8a4;
case 0x57d8a5:goto L57d8a5;
case 0x57d8af:c.instructions+=1;goto B57d8af;
case 0x57d8b4:goto L57d8b4;
case 0x57d8c0:goto L57d8c0;
case 0x57d8c4:c.instructions+=5;goto B57d8c4;
case 0x57d8c5:c.instructions+=4;goto B57d8c5;
case 0x57d8c9:c.instructions+=3;goto B57d8c9;
case 0x57d8ca:c.instructions+=2;goto B57d8ca;
case 0x57d8cc:c.instructions+=1;goto B57d8cc;
case 0x57d8d1:goto L57d8d1;
case 0x57d8d3:c.instructions+=1;goto B57d8d3;
case 0x57d8d5:goto L57d8d5;
case 0x57d8d7:c.instructions+=2;goto B57d8d7;
case 0x57d8d9:c.instructions+=1;goto B57d8d9;
case 0x57d8db:goto L57d8db;
case 0x57d8dc:c.instructions+=1;goto B57d8dc;
case 0x57d8e1:goto L57d8e1;
case 0x57d8e4:goto L57d8e4;
case 0x57d8ea:c.instructions+=3;goto B57d8ea;
case 0x57d8eb:c.instructions+=2;goto B57d8eb;
case 0x57d8ec:c.instructions+=1;goto B57d8ec;
case 0x57d8f1:goto L57d8f1;
case 0x57d8f4:goto L57d8f4;
case 0x57d8f5:c.instructions+=1;goto B57d8f5;
case 0x57d900:goto L57d900;
case 0x57d904:c.instructions+=4;goto B57d904;
case 0x57d906:c.instructions+=3;goto B57d906;
case 0x57d908:c.instructions+=2;goto B57d908;
case 0x57d909:c.instructions+=1;goto B57d909;
case 0x57d90e:goto L57d90e;
case 0x57d911:c.instructions+=2;goto B57d911;
case 0x57d913:c.instructions+=1;goto B57d913;
case 0x57d915:goto L57d915;
case 0x57d918:c.instructions+=10;goto B57d918;
case 0x57d91a:c.instructions+=9;goto B57d91a;
case 0x57d91c:c.instructions+=8;goto B57d91c;
case 0x57d91f:c.instructions+=7;goto B57d91f;
case 0x57d920:c.instructions+=6;goto B57d920;
case 0x57d921:c.instructions+=5;goto B57d921;
case 0x57d923:c.instructions+=4;goto B57d923;
case 0x57d926:c.instructions+=3;goto B57d926;
case 0x57d928:c.instructions+=2;goto B57d928;
case 0x57d92a:c.instructions+=1;goto B57d92a;
case 0x57d92c:goto L57d92c;
case 0x57d933:c.instructions+=3;goto B57d933;
case 0x57d935:c.instructions+=2;goto B57d935;
case 0x57d936:c.instructions+=1;goto B57d936;
case 0x57d937:goto L57d937;
case 0x57d939:c.instructions+=2;goto B57d939;
case 0x57d93b:c.instructions+=1;goto B57d93b;
case 0x57d940:goto L57d940;
case 0x57d942:c.instructions+=2;goto B57d942;
case 0x57d943:c.instructions+=1;goto B57d943;
case 0x57d944:goto L57d944;
case 0x57d947:c.instructions+=1;goto B57d947;
case 0x57d950:goto L57d950;
case 0x57d955:c.instructions+=2;goto B57d955;
case 0x57d957:c.instructions+=1;goto B57d957;
case 0x57d959:goto L57d959;
case 0x57d95f:c.instructions+=1;goto B57d95f;
case 0x57d960:goto L57d960;
case 0x57d962:c.instructions+=1;goto B57d962;
case 0x57d964:goto L57d964;
case 0x57d969:goto L57d969;
case 0x57d96e:goto L57d96e;
case 0x57d974:goto L57d974;
case 0x57d976:c.instructions+=4;goto B57d976;
case 0x57d978:c.instructions+=3;goto B57d978;
case 0x57d97b:c.instructions+=2;goto B57d97b;
case 0x57d97d:c.instructions+=1;goto B57d97d;
case 0x57d97f:goto L57d97f;
case 0x57d981:c.instructions+=1;goto B57d981;
case 0x57d986:goto L57d986;
case 0x57d98b:c.instructions+=2;goto B57d98b;
case 0x57d98c:c.instructions+=1;goto B57d98c;
case 0x57d991:goto L57d991;
case 0x57d994:c.instructions+=3;goto B57d994;
case 0x57d99e:c.instructions+=2;goto B57d99e;
case 0x57d9a3:c.instructions+=1;goto B57d9a3;
case 0x57d9a8:goto L57d9a8;
case 0x57d9b0:goto L57d9b0;
case 0x57d9b1:c.instructions+=3;goto B57d9b1;
case 0x57d9b5:c.instructions+=2;goto B57d9b5;
case 0x57d9b7:c.instructions+=1;goto B57d9b7;
case 0x57d9b9:goto L57d9b9;
case 0x57d9bc:c.instructions+=2;goto B57d9bc;
case 0x57d9be:c.instructions+=1;goto B57d9be;
case 0x57d9c0:goto L57d9c0;
case 0x57d9c4:c.instructions+=7;goto B57d9c4;
case 0x57d9c8:c.instructions+=6;goto B57d9c8;
case 0x57d9ca:c.instructions+=5;goto B57d9ca;
case 0x57d9cc:c.instructions+=4;goto B57d9cc;
case 0x57d9cd:c.instructions+=3;goto B57d9cd;
case 0x57d9ce:c.instructions+=2;goto B57d9ce;
case 0x57d9d0:c.instructions+=1;goto B57d9d0;
case 0x57d9d5:goto L57d9d5;
case 0x57d9db:c.instructions+=1;goto B57d9db;
case 0x57d9e0:goto L57d9e0;
case 0x57d9e2:c.instructions+=1;goto B57d9e2;
case 0x57d9e4:goto L57d9e4;
case 0x57d9e9:goto L57d9e9;
case 0x57d9ee:goto L57d9ee;
case 0x57d9f4:goto L57d9f4;
case 0x57d9f6:c.instructions+=2;goto B57d9f6;
case 0x57d9f8:c.instructions+=1;goto B57d9f8;
case 0x57d9fa:goto L57d9fa;
case 0x57d9fd:c.instructions+=2;goto B57d9fd;
case 0x57d9ff:c.instructions+=1;goto B57d9ff;
case 0x57da01:goto L57da01;
case 0x57da03:goto L57da03;
case 0x57da06:c.instructions+=2;goto B57da06;
case 0x57da08:c.instructions+=1;goto B57da08;
case 0x57da0a:goto L57da0a;
case 0x57da0b:c.instructions+=1;goto B57da0b;
case 0x57da10:goto L57da10;
case 0x57da14:c.instructions+=5;goto B57da14;
case 0x57da15:c.instructions+=4;goto B57da15;
case 0x57da17:c.instructions+=3;goto B57da17;
case 0x57da19:c.instructions+=2;goto B57da19;
case 0x57da1a:c.instructions+=1;goto B57da1a;
case 0x57da1f:goto L57da1f;
case 0x57da21:c.instructions+=3;goto B57da21;
case 0x57da24:c.instructions+=2;goto B57da24;
case 0x57da26:c.instructions+=1;goto B57da26;
case 0x57da28:goto L57da28;
case 0x57da29:c.instructions+=1;goto B57da29;
case 0x57da2a:goto L57da2a;
case 0x57da2e:c.instructions+=2;goto B57da2e;
case 0x57da30:c.instructions+=1;goto B57da30;
case 0x57da32:goto L57da32;
case 0x57da35:c.instructions+=6;goto B57da35;
case 0x57da37:c.instructions+=5;goto B57da37;
case 0x57da39:c.instructions+=4;goto B57da39;
case 0x57da3c:c.instructions+=3;goto B57da3c;
case 0x57da3d:c.instructions+=2;goto B57da3d;
case 0x57da3f:c.instructions+=1;goto B57da3f;
case 0x57da41:goto L57da41;
case 0x57da44:c.instructions+=11;goto B57da44;
case 0x57da48:c.instructions+=10;goto B57da48;
case 0x57da4e:c.instructions+=9;goto B57da4e;
case 0x57da50:c.instructions+=8;goto B57da50;
case 0x57da52:c.instructions+=7;goto B57da52;
case 0x57da55:c.instructions+=6;goto B57da55;
case 0x57da56:c.instructions+=5;goto B57da56;
case 0x57da57:c.instructions+=4;goto B57da57;
case 0x57da58:c.instructions+=3;goto B57da58;
case 0x57da5a:c.instructions+=2;goto B57da5a;
case 0x57da5b:c.instructions+=1;goto B57da5b;
case 0x57da60:goto L57da60;
case 0x57da62:c.instructions+=10;goto B57da62;
case 0x57da65:c.instructions+=9;goto B57da65;
case 0x57da67:c.instructions+=8;goto B57da67;
case 0x57da69:c.instructions+=7;goto B57da69;
case 0x57da6c:c.instructions+=6;goto B57da6c;
case 0x57da6d:c.instructions+=5;goto B57da6d;
case 0x57da6f:c.instructions+=4;goto B57da6f;
case 0x57da70:c.instructions+=3;goto B57da70;
case 0x57da71:c.instructions+=2;goto B57da71;
case 0x57da72:c.instructions+=1;goto B57da72;
case 0x57da77:goto L57da77;
case 0x57da7a:c.instructions+=3;goto B57da7a;
case 0x57da7d:c.instructions+=2;goto B57da7d;
case 0x57da7f:c.instructions+=1;goto B57da7f;
case 0x57da81:goto L57da81;
case 0x57da83:c.instructions+=4;goto B57da83;
case 0x57da84:c.instructions+=3;goto B57da84;
case 0x57da8b:c.instructions+=2;goto B57da8b;
case 0x57da8c:c.instructions+=1;goto B57da8c;
case 0x57da8d:goto L57da8d;
case 0x57da8f:c.instructions+=2;goto B57da8f;
case 0x57da91:c.instructions+=1;goto B57da91;
case 0x57da96:goto L57da96;
case 0x57da98:c.instructions+=3;goto B57da98;
case 0x57da99:c.instructions+=2;goto B57da99;
case 0x57da9a:c.instructions+=1;goto B57da9a;
case 0x57daa0:goto L57daa0;
case 0x57daa3:c.instructions+=6;goto B57daa3;
case 0x57daa4:c.instructions+=5;goto B57daa4;
case 0x57daa6:c.instructions+=4;goto B57daa6;
case 0x57daa9:c.instructions+=3;goto B57daa9;
case 0x57daab:c.instructions+=2;goto B57daab;
case 0x57daac:c.instructions+=1;goto B57daac;
case 0x57daae:goto L57daae;
case 0x57daaf:c.instructions+=1;goto B57daaf;
case 0x57dab4:goto L57dab4;
case 0x57dab7:c.instructions+=1;goto B57dab7;
case 0x57dabe:goto L57dabe;
case 0x57dac2:c.instructions+=2;goto B57dac2;
case 0x57dac4:c.instructions+=1;goto B57dac4;
case 0x57daca:goto L57daca;
case 0x57dad0:c.instructions+=19;goto B57dad0;
case 0x57dad6:c.instructions+=18;goto B57dad6;
case 0x57dada:c.instructions+=17;goto B57dada;
case 0x57dae1:c.instructions+=16;goto B57dae1;
case 0x57dae6:c.instructions+=15;goto B57dae6;
case 0x57dae8:c.instructions+=14;goto B57dae8;
case 0x57daec:c.instructions+=13;goto B57daec;
case 0x57daf0:c.instructions+=12;goto B57daf0;
case 0x57daf4:c.instructions+=11;goto B57daf4;
case 0x57dafa:c.instructions+=10;goto B57dafa;
case 0x57dafe:c.instructions+=9;goto B57dafe;
case 0x57db03:c.instructions+=8;goto B57db03;
case 0x57db07:c.instructions+=7;goto B57db07;
case 0x57db0b:c.instructions+=6;goto B57db0b;
case 0x57db0c:c.instructions+=5;goto B57db0c;
case 0x57db10:c.instructions+=4;goto B57db10;
case 0x57db14:c.instructions+=3;goto B57db14;
case 0x57db15:c.instructions+=2;goto B57db15;
case 0x57db19:c.instructions+=1;goto B57db19;
case 0x57db1e:goto L57db1e;
case 0x57db22:c.instructions+=3;goto B57db22;
case 0x57db25:c.instructions+=2;goto B57db25;
case 0x57db26:c.instructions+=1;goto B57db26;
case 0x57db2b:goto L57db2b;
case 0x57db2d:c.instructions+=4;goto B57db2d;
case 0x57db31:c.instructions+=3;goto B57db31;
case 0x57db33:c.instructions+=2;goto B57db33;
case 0x57db34:c.instructions+=1;goto B57db34;
case 0x57db39:goto L57db39;
case 0x57db3c:c.instructions+=3;goto B57db3c;
case 0x57db3e:c.instructions+=2;goto B57db3e;
case 0x57db41:c.instructions+=1;goto B57db41;
case 0x57db43:goto L57db43;
case 0x57db49:c.instructions+=4;goto B57db49;
case 0x57db50:c.instructions+=3;goto B57db50;
case 0x57db57:c.instructions+=2;goto B57db57;
case 0x57db5c:c.instructions+=1;goto B57db5c;
case 0x57db5e:goto L57db5e;
case 0x57db60:goto L57db60;
case 0x57db63:c.instructions+=2;goto B57db63;
case 0x57db68:c.instructions+=1;goto B57db68;
case 0x57db6a:goto L57db6a;
case 0x57db6f:c.instructions+=1;goto B57db6f;
case 0x57db74:goto L57db74;
case 0x57db78:c.instructions+=3;goto B57db78;
case 0x57db79:c.instructions+=2;goto B57db79;
case 0x57db7a:c.instructions+=1;goto B57db7a;
case 0x57db7f:goto L57db7f;
case 0x57db82:c.instructions+=3;goto B57db82;
case 0x57db84:c.instructions+=2;goto B57db84;
case 0x57db87:c.instructions+=1;goto B57db87;
case 0x57db89:goto L57db89;
case 0x57db8b:c.instructions+=4;goto B57db8b;
case 0x57db90:c.instructions+=3;goto B57db90;
case 0x57db95:c.instructions+=2;goto B57db95;
case 0x57db96:c.instructions+=1;goto B57db96;
case 0x57db9b:goto L57db9b;
case 0x57db9e:c.instructions+=4;goto B57db9e;
case 0x57db9f:c.instructions+=3;goto B57db9f;
case 0x57dba0:c.instructions+=2;goto B57dba0;
case 0x57dba3:c.instructions+=1;goto B57dba3;
case 0x57dba6:goto L57dba6;
case 0x57dbaa:c.instructions+=5;goto B57dbaa;
case 0x57dbac:c.instructions+=4;goto B57dbac;
case 0x57dbb1:c.instructions+=3;goto B57dbb1;
case 0x57dbb6:c.instructions+=2;goto B57dbb6;
case 0x57dbb7:c.instructions+=1;goto B57dbb7;
case 0x57dbbc:goto L57dbbc;
case 0x57dbbf:goto L57dbbf;
case 0x57dbc0:c.instructions+=3;goto B57dbc0;
case 0x57dbc1:c.instructions+=2;goto B57dbc1;
case 0x57dbc4:c.instructions+=1;goto B57dbc4;
case 0x57dbd0:goto L57dbd0;
case 0x57dbd7:c.instructions+=1;goto B57dbd7;
case 0x57dbd9:goto L57dbd9;
case 0x57dbde:c.instructions+=2;goto B57dbde;
case 0x57dbe0:c.instructions+=1;goto B57dbe0;
case 0x57dbe2:goto L57dbe2;
case 0x57dbe7:c.instructions+=1;goto B57dbe7;
case 0x57dbec:goto L57dbec;
case 0x57dbef:c.instructions+=4;goto B57dbef;
case 0x57dbf1:c.instructions+=3;goto B57dbf1;
case 0x57dbf3:c.instructions+=2;goto B57dbf3;
case 0x57dbf6:c.instructions+=1;goto B57dbf6;
case 0x57dbfb:goto L57dbfb;
case 0x57dbfe:c.instructions+=3;goto B57dbfe;
case 0x57dc01:c.instructions+=2;goto B57dc01;
case 0x57dc03:c.instructions+=1;goto B57dc03;
case 0x57dc05:goto L57dc05;
case 0x57dc0a:c.instructions+=1;goto B57dc0a;
case 0x57dc0b:goto L57dc0b;
case 0x57dc0f:c.instructions+=3;goto B57dc0f;
case 0x57dc12:c.instructions+=2;goto B57dc12;
case 0x57dc19:c.instructions+=1;goto B57dc19;
case 0x57dc20:goto L57dc20;
case 0x57dc21:c.instructions+=5;goto B57dc21;
case 0x57dc25:c.instructions+=4;goto B57dc25;
case 0x57dc26:c.instructions+=3;goto B57dc26;
case 0x57dc27:c.instructions+=2;goto B57dc27;
case 0x57dc28:c.instructions+=1;goto B57dc28;
case 0x57dc2d:goto L57dc2d;
case 0x57dc2f:c.instructions+=3;goto B57dc2f;
case 0x57dc34:c.instructions+=2;goto B57dc34;
case 0x57dc35:c.instructions+=1;goto B57dc35;
case 0x57dc3a:goto L57dc3a;
case 0x57dc3c:c.instructions+=7;goto B57dc3c;
case 0x57dc3d:c.instructions+=6;goto B57dc3d;
case 0x57dc42:c.instructions+=5;goto B57dc42;
case 0x57dc43:c.instructions+=4;goto B57dc43;
case 0x57dc45:c.instructions+=3;goto B57dc45;
case 0x57dc46:c.instructions+=2;goto B57dc46;
case 0x57dc47:c.instructions+=1;goto B57dc47;
case 0x57dc4c:goto L57dc4c;
case 0x57dc4f:c.instructions+=5;goto B57dc4f;
case 0x57dc50:c.instructions+=4;goto B57dc50;
case 0x57dc52:c.instructions+=3;goto B57dc52;
case 0x57dc53:c.instructions+=2;goto B57dc53;
case 0x57dc54:c.instructions+=1;goto B57dc54;
case 0x57dc60:goto L57dc60;
case 0x57dc63:c.instructions+=7;goto B57dc63;
case 0x57dc64:c.instructions+=6;goto B57dc64;
case 0x57dc66:c.instructions+=5;goto B57dc66;
case 0x57dc68:c.instructions+=4;goto B57dc68;
case 0x57dc6d:c.instructions+=3;goto B57dc6d;
case 0x57dc6f:c.instructions+=2;goto B57dc6f;
case 0x57dc70:c.instructions+=1;goto B57dc70;
case 0x57dc72:goto L57dc72;
case 0x57dc79:goto L57dc79;
case 0x57dc7f:c.instructions+=3;goto B57dc7f;
case 0x57dc81:c.instructions+=2;goto B57dc81;
case 0x57dc83:c.instructions+=1;goto B57dc83;
case 0x57dc85:goto L57dc85;
case 0x57dc8f:goto L57dc8f;
case 0x57dc96:c.instructions+=5;goto B57dc96;
case 0x57dca0:c.instructions+=4;goto B57dca0;
case 0x57dca5:c.instructions+=3;goto B57dca5;
case 0x57dca7:c.instructions+=2;goto B57dca7;
case 0x57dcaa:c.instructions+=1;goto B57dcaa;
case 0x57dcb0:goto L57dcb0;
case 0x57dcb5:c.instructions+=2;goto B57dcb5;
case 0x57dcb7:c.instructions+=1;goto B57dcb7;
case 0x57dcb9:goto L57dcb9;
case 0x57dcbe:goto L57dcbe;
case 0x57dcbf:c.instructions+=2;goto B57dcbf;
case 0x57dcc4:c.instructions+=1;goto B57dcc4;
case 0x57dcc9:goto L57dcc9;
case 0x57dccb:c.instructions+=3;goto B57dccb;
case 0x57dcd0:c.instructions+=2;goto B57dcd0;
case 0x57dcd1:c.instructions+=1;goto B57dcd1;
case 0x57dcd6:goto L57dcd6;
case 0x57dcd8:c.instructions+=7;goto B57dcd8;
case 0x57dcd9:c.instructions+=6;goto B57dcd9;
case 0x57dcde:c.instructions+=5;goto B57dcde;
case 0x57dcdf:c.instructions+=4;goto B57dcdf;
case 0x57dce1:c.instructions+=3;goto B57dce1;
case 0x57dce6:c.instructions+=2;goto B57dce6;
case 0x57dce7:c.instructions+=1;goto B57dce7;
case 0x57dcec:goto L57dcec;
case 0x57dcee:c.instructions+=5;goto B57dcee;
case 0x57dcf0:c.instructions+=4;goto B57dcf0;
case 0x57dcf2:c.instructions+=3;goto B57dcf2;
case 0x57dcf4:c.instructions+=2;goto B57dcf4;
case 0x57dcf7:c.instructions+=1;goto B57dcf7;
case 0x57dcfc:goto L57dcfc;
case 0x57dcfe:c.instructions+=5;goto B57dcfe;
case 0x57dd00:c.instructions+=4;goto B57dd00;
case 0x57dd02:c.instructions+=3;goto B57dd02;
case 0x57dd04:c.instructions+=2;goto B57dd04;
case 0x57dd09:c.instructions+=1;goto B57dd09;
case 0x57dd0e:goto L57dd0e;
case 0x57dd11:c.instructions+=5;goto B57dd11;
case 0x57dd13:c.instructions+=4;goto B57dd13;
case 0x57dd14:c.instructions+=3;goto B57dd14;
case 0x57dd19:c.instructions+=2;goto B57dd19;
case 0x57dd1b:c.instructions+=1;goto B57dd1b;
case 0x57dd20:goto L57dd20;
case 0x57dd22:c.instructions+=5;goto B57dd22;
case 0x57dd25:c.instructions+=4;goto B57dd25;
case 0x57dd2a:c.instructions+=3;goto B57dd2a;
case 0x57dd2d:c.instructions+=2;goto B57dd2d;
case 0x57dd2e:c.instructions+=1;goto B57dd2e;
case 0x57dd33:goto L57dd33;
case 0x57dd36:c.instructions+=5;goto B57dd36;
case 0x57dd37:c.instructions+=4;goto B57dd37;
case 0x57dd38:c.instructions+=3;goto B57dd38;
case 0x57dd39:c.instructions+=2;goto B57dd39;
case 0x57dd3c:c.instructions+=1;goto B57dd3c;
case 0x57dd41:goto L57dd41;
case 0x57dd44:c.instructions+=1;goto B57dd44;
case 0x57dd46:goto L57dd46;
case 0x57dd4b:c.instructions+=6;goto B57dd4b;
case 0x57dd4e:c.instructions+=5;goto B57dd4e;
case 0x57dd4f:c.instructions+=4;goto B57dd4f;
case 0x57dd53:c.instructions+=3;goto B57dd53;
case 0x57dd58:c.instructions+=2;goto B57dd58;
case 0x57dd59:c.instructions+=1;goto B57dd59;
case 0x57dd5e:goto L57dd5e;
case 0x57dd60:c.instructions+=6;goto B57dd60;
case 0x57dd62:c.instructions+=5;goto B57dd62;
case 0x57dd64:c.instructions+=4;goto B57dd64;
case 0x57dd68:c.instructions+=3;goto B57dd68;
case 0x57dd6a:c.instructions+=2;goto B57dd6a;
case 0x57dd6b:c.instructions+=1;goto B57dd6b;
case 0x57dd70:goto L57dd70;
case 0x57dd73:c.instructions+=5;goto B57dd73;
case 0x57dd75:c.instructions+=4;goto B57dd75;
case 0x57dd76:c.instructions+=3;goto B57dd76;
case 0x57dd7b:c.instructions+=2;goto B57dd7b;
case 0x57dd7d:c.instructions+=1;goto B57dd7d;
case 0x57dd82:goto L57dd82;
case 0x57dd85:c.instructions+=4;goto B57dd85;
case 0x57dd86:c.instructions+=3;goto B57dd86;
case 0x57dd87:c.instructions+=2;goto B57dd87;
case 0x57dd8a:c.instructions+=1;goto B57dd8a;
case 0x57dd8b:goto L57dd8b;
case 0x57dd8e:c.instructions+=1;goto B57dd8e;
case 0x57dd90:goto L57dd90;
case 0x57dd91:c.instructions+=2;goto B57dd91;
case 0x57dd96:c.instructions+=1;goto B57dd96;
case 0x57dd9b:goto L57dd9b;
case 0x57dd9e:c.instructions+=4;goto B57dd9e;
case 0x57dd9f:c.instructions+=3;goto B57dd9f;
case 0x57dda0:c.instructions+=2;goto B57dda0;
case 0x57dda3:c.instructions+=1;goto B57dda3;
case 0x57dda4:goto L57dda4;
case 0x57dda7:c.instructions+=1;goto B57dda7;
case 0x57dda9:goto L57dda9;
case 0x57ddae:c.instructions+=6;goto B57ddae;
case 0x57ddb1:c.instructions+=5;goto B57ddb1;
case 0x57ddb2:c.instructions+=4;goto B57ddb2;
case 0x57ddb5:c.instructions+=3;goto B57ddb5;
case 0x57ddba:c.instructions+=2;goto B57ddba;
case 0x57ddbb:c.instructions+=1;goto B57ddbb;
case 0x57ddc0:goto L57ddc0;
case 0x57ddc2:c.instructions+=4;goto B57ddc2;
case 0x57ddc3:c.instructions+=3;goto B57ddc3;
case 0x57ddc8:c.instructions+=2;goto B57ddc8;
case 0x57ddc9:c.instructions+=1;goto B57ddc9;
case 0x57ddce:goto L57ddce;
case 0x57ddd1:c.instructions+=4;goto B57ddd1;
case 0x57ddd2:c.instructions+=3;goto B57ddd2;
case 0x57ddd3:c.instructions+=2;goto B57ddd3;
case 0x57ddd6:c.instructions+=1;goto B57ddd6;
case 0x57ddd7:goto L57ddd7;
case 0x57ddda:c.instructions+=1;goto B57ddda;
case 0x57dddc:goto L57dddc;
case 0x57ddde:c.instructions+=2;goto B57ddde;
case 0x57dde5:c.instructions+=1;goto B57dde5;
case 0x57ddea:goto L57ddea;
case 0x57ddeb:c.instructions+=3;goto B57ddeb;
case 0x57ddec:c.instructions+=2;goto B57ddec;
case 0x57ddef:c.instructions+=1;goto B57ddef;
case 0x57ddf0:goto L57ddf0;
case 0x57ddf5:c.instructions+=2;goto B57ddf5;
case 0x57ddf7:c.instructions+=1;goto B57ddf7;
case 0x57ddfd:goto L57ddfd;
case 0x57de02:c.instructions+=5;goto B57de02;
case 0x57de08:c.instructions+=4;goto B57de08;
case 0x57de0a:c.instructions+=3;goto B57de0a;
case 0x57de0c:c.instructions+=2;goto B57de0c;
case 0x57de0d:c.instructions+=1;goto B57de0d;
case 0x57de12:goto L57de12;
case 0x57de17:c.instructions+=2;goto B57de17;
case 0x57de19:c.instructions+=1;goto B57de19;
case 0x57de1f:goto L57de1f;
case 0x57de25:c.instructions+=5;goto B57de25;
case 0x57de27:c.instructions+=4;goto B57de27;
case 0x57de29:c.instructions+=3;goto B57de29;
case 0x57de2a:c.instructions+=2;goto B57de2a;
case 0x57de30:c.instructions+=1;goto B57de30;
case 0x57de35:goto L57de35;
case 0x57de3a:c.instructions+=2;goto B57de3a;
case 0x57de3c:c.instructions+=1;goto B57de3c;
case 0x57de42:goto L57de42;
case 0x57de48:c.instructions+=5;goto B57de48;
case 0x57de4e:c.instructions+=4;goto B57de4e;
case 0x57de50:c.instructions+=3;goto B57de50;
case 0x57de52:c.instructions+=2;goto B57de52;
case 0x57de53:c.instructions+=1;goto B57de53;
case 0x57de58:goto L57de58;
case 0x57de5d:c.instructions+=2;goto B57de5d;
case 0x57de5f:c.instructions+=1;goto B57de5f;
case 0x57de65:goto L57de65;
case 0x57de6a:c.instructions+=5;goto B57de6a;
case 0x57de70:c.instructions+=4;goto B57de70;
case 0x57de72:c.instructions+=3;goto B57de72;
case 0x57de74:c.instructions+=2;goto B57de74;
case 0x57de75:c.instructions+=1;goto B57de75;
case 0x57de7a:goto L57de7a;
case 0x57de7f:c.instructions+=2;goto B57de7f;
case 0x57de81:c.instructions+=1;goto B57de81;
case 0x57de87:goto L57de87;
case 0x57de8d:c.instructions+=5;goto B57de8d;
case 0x57de8f:c.instructions+=4;goto B57de8f;
case 0x57de91:c.instructions+=3;goto B57de91;
case 0x57de92:c.instructions+=2;goto B57de92;
case 0x57de98:c.instructions+=1;goto B57de98;
case 0x57de9d:goto L57de9d;
case 0x57dea2:c.instructions+=2;goto B57dea2;
case 0x57dea4:c.instructions+=1;goto B57dea4;
case 0x57deaa:goto L57deaa;
case 0x57deb0:c.instructions+=5;goto B57deb0;
case 0x57deb6:c.instructions+=4;goto B57deb6;
case 0x57deb8:c.instructions+=3;goto B57deb8;
case 0x57deba:c.instructions+=2;goto B57deba;
case 0x57debb:c.instructions+=1;goto B57debb;
case 0x57dec0:goto L57dec0;
case 0x57dec5:c.instructions+=2;goto B57dec5;
case 0x57dec7:c.instructions+=1;goto B57dec7;
case 0x57decd:goto L57decd;
case 0x57ded2:c.instructions+=5;goto B57ded2;
case 0x57ded8:c.instructions+=4;goto B57ded8;
case 0x57deda:c.instructions+=3;goto B57deda;
case 0x57dedc:c.instructions+=2;goto B57dedc;
case 0x57dedd:c.instructions+=1;goto B57dedd;
case 0x57dee2:goto L57dee2;
case 0x57dee7:c.instructions+=2;goto B57dee7;
case 0x57dee9:c.instructions+=1;goto B57dee9;
case 0x57deef:goto L57deef;
case 0x57def5:c.instructions+=5;goto B57def5;
case 0x57def7:c.instructions+=4;goto B57def7;
case 0x57def9:c.instructions+=3;goto B57def9;
case 0x57defa:c.instructions+=2;goto B57defa;
case 0x57df00:c.instructions+=1;goto B57df00;
case 0x57df05:goto L57df05;
case 0x57df0a:c.instructions+=2;goto B57df0a;
case 0x57df0c:c.instructions+=1;goto B57df0c;
case 0x57df12:goto L57df12;
case 0x57df18:c.instructions+=5;goto B57df18;
case 0x57df1e:c.instructions+=4;goto B57df1e;
case 0x57df20:c.instructions+=3;goto B57df20;
case 0x57df22:c.instructions+=2;goto B57df22;
case 0x57df23:c.instructions+=1;goto B57df23;
case 0x57df28:goto L57df28;
case 0x57df2d:c.instructions+=2;goto B57df2d;
case 0x57df2f:c.instructions+=1;goto B57df2f;
case 0x57df35:goto L57df35;
case 0x57df3a:c.instructions+=5;goto B57df3a;
case 0x57df40:c.instructions+=4;goto B57df40;
case 0x57df42:c.instructions+=3;goto B57df42;
case 0x57df44:c.instructions+=2;goto B57df44;
case 0x57df45:c.instructions+=1;goto B57df45;
case 0x57df4a:goto L57df4a;
case 0x57df4f:c.instructions+=2;goto B57df4f;
case 0x57df51:c.instructions+=1;goto B57df51;
case 0x57df57:goto L57df57;
case 0x57df5d:c.instructions+=5;goto B57df5d;
case 0x57df5f:c.instructions+=4;goto B57df5f;
case 0x57df61:c.instructions+=3;goto B57df61;
case 0x57df62:c.instructions+=2;goto B57df62;
case 0x57df68:c.instructions+=1;goto B57df68;
case 0x57df6d:goto L57df6d;
case 0x57df72:c.instructions+=2;goto B57df72;
case 0x57df74:c.instructions+=1;goto B57df74;
case 0x57df7a:goto L57df7a;
case 0x57df80:c.instructions+=5;goto B57df80;
case 0x57df86:c.instructions+=4;goto B57df86;
case 0x57df88:c.instructions+=3;goto B57df88;
case 0x57df8a:c.instructions+=2;goto B57df8a;
case 0x57df8b:c.instructions+=1;goto B57df8b;
case 0x57df90:goto L57df90;
case 0x57df95:c.instructions+=2;goto B57df95;
case 0x57df97:c.instructions+=1;goto B57df97;
case 0x57df9d:goto L57df9d;
case 0x57dfa2:c.instructions+=5;goto B57dfa2;
case 0x57dfa8:c.instructions+=4;goto B57dfa8;
case 0x57dfaa:c.instructions+=3;goto B57dfaa;
case 0x57dfac:c.instructions+=2;goto B57dfac;
case 0x57dfad:c.instructions+=1;goto B57dfad;
case 0x57dfb2:goto L57dfb2;
case 0x57dfb7:c.instructions+=2;goto B57dfb7;
case 0x57dfb9:c.instructions+=1;goto B57dfb9;
case 0x57dfbf:goto L57dfbf;
case 0x57dfc5:c.instructions+=5;goto B57dfc5;
case 0x57dfc7:c.instructions+=4;goto B57dfc7;
case 0x57dfc9:c.instructions+=3;goto B57dfc9;
case 0x57dfca:c.instructions+=2;goto B57dfca;
case 0x57dfd0:c.instructions+=1;goto B57dfd0;
case 0x57dfd5:goto L57dfd5;
case 0x57dfda:c.instructions+=2;goto B57dfda;
case 0x57dfdc:c.instructions+=1;goto B57dfdc;
case 0x57dfe2:goto L57dfe2;
case 0x57dfe8:c.instructions+=5;goto B57dfe8;
case 0x57dfee:c.instructions+=4;goto B57dfee;
case 0x57dff0:c.instructions+=3;goto B57dff0;
case 0x57dff2:c.instructions+=2;goto B57dff2;
case 0x57dff3:c.instructions+=1;goto B57dff3;
case 0x57dff8:goto L57dff8;
case 0x57dffd:c.instructions+=2;goto B57dffd;
case 0x57dfff:c.instructions+=1;goto B57dfff;
default:missing_instruction(c.pc);}
B57d000:L57d000:{c.instructions+=5;NFSU2_TR(0x57d000);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B57d002:{NFSU2_TR(0x57d002);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d003:{NFSU2_TR(0x57d003);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B57d005:{NFSU2_TR(0x57d005);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57d007:{NFSU2_TR(0x57d007);
if(r1(R+518)){{goto L57d02c;}}
}
B57d009:L57d009:{c.instructions+=3;NFSU2_TR(0x57d009);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57d00c:{NFSU2_TR(0x57d00c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57d00e:{NFSU2_TR(0x57d00e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57d02c;}}
}
B57d010:L57d010:{c.instructions+=3;NFSU2_TR(0x57d010);
__builtin_memmove((R+0),gp(0x7fb724),4);
}
B57d015:{NFSU2_TR(0x57d015);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B57d01b:{NFSU2_TR(0x57d01b);
if(r1(R+518)){{goto L57d02c;}}
}
B57d01d:L57d01d:{c.instructions+=2;NFSU2_TR(0x57d01d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d01e:{NFSU2_TR(0x57d01e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57d023ull));
TAIL_STATIC(0x571850u,571);
}
B57d023:L57d023:{c.instructions+=2;NFSU2_TR(0x57d023);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B57d025:{NFSU2_TR(0x57d025);
if(r1(R+518)){{goto L57d02c;}}
}
B57d027:L57d027:{c.instructions+=1;NFSU2_TR(0x57d027);
w4(R+24,u32(0x1ull));
}
B57d02c:L57d02c:{c.instructions+=3;NFSU2_TR(0x57d02c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57d02f:{NFSU2_TR(0x57d02f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57d031:{NFSU2_TR(0x57d031);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57d038;}}
}
B57d033:L57d033:{c.instructions+=2;NFSU2_TR(0x57d033);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B57d036:{NFSU2_TR(0x57d036);
if(r1(R+518)){{goto L57d04b;}}
}
B57d038:L57d038:{c.instructions+=8;NFSU2_TR(0x57d038);
__builtin_memmove((R+0),gp(0x7fb724),4);
}
B57d03d:{NFSU2_TR(0x57d03d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d03e:{NFSU2_TR(0x57d03e);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B57d03f:{NFSU2_TR(0x57d03f);
w4(R+28,u32(0x64ull));
}
B57d044:{NFSU2_TR(0x57d044);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x57d044);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x57d044);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B57d046:{NFSU2_TR(0x57d046);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57d047:{NFSU2_TR(0x57d047);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57d049:{NFSU2_TR(0x57d049);
if(r1(R+518)){{goto L57d04f;}}
}
B57d04b:L57d04b:{c.instructions+=2;NFSU2_TR(0x57d04b);
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
B57d04d:{NFSU2_TR(0x57d04d);
if(r1(R+518)){{goto L57d055;}}
}
B57d04f:L57d04f:{c.instructions+=2;NFSU2_TR(0x57d04f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57d050:{NFSU2_TR(0x57d050);
TAIL_STATIC(0x57c180u,57c);
}
B57d055:L57d055:{c.instructions+=2;NFSU2_TR(0x57d055);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57d056:{NFSU2_TR(0x57d056);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57d060:L57d060:{c.instructions+=17;NFSU2_TR(0x57d060);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B57d063:{NFSU2_TR(0x57d063);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B57d068:{NFSU2_TR(0x57d068);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d069:{NFSU2_TR(0x57d069);
__builtin_memmove((R+24),(R+4),4);
}
B57d06b:{NFSU2_TR(0x57d06b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57d071:{NFSU2_TR(0x57d071);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57d077:{NFSU2_TR(0x57d077);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B57d079:{NFSU2_TR(0x57d079);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57d07d:{NFSU2_TR(0x57d07d);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B57d081:{NFSU2_TR(0x57d081);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57d085:{NFSU2_TR(0x57d085);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B57d08b:{NFSU2_TR(0x57d08b);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B57d08f:{NFSU2_TR(0x57d08f);
{u32 ea_=u32(r4(R+24)+u32(196u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B57d095:{NFSU2_TR(0x57d095);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B57d097:{NFSU2_TR(0x57d097);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B57d099:{NFSU2_TR(0x57d099);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B57d09c:{NFSU2_TR(0x57d09c);
if(r1(R+514)){{goto L57d187;}}
}
B57d0a2:L57d0a2:{c.instructions+=2;NFSU2_TR(0x57d0a2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d0a3:{NFSU2_TR(0x57d0a3);
{goto L57d0b0;}
}
B57d0b0:L57d0b0:{c.instructions+=3;NFSU2_TR(0x57d0b0);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B57d0b6:{NFSU2_TR(0x57d0b6);
__builtin_memmove((R+4),(R+24),4);
}
B57d0b8:{NFSU2_TR(0x57d0b8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57d172;}}
}
B57d0be:L57d0be:{c.instructions+=7;NFSU2_TR(0x57d0be);
{u32 ea_=u32(r4(R+24)+u32(196u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B57d0c4:{NFSU2_TR(0x57d0c4);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B57d0c6:{NFSU2_TR(0x57d0c6);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B57d0c8:{NFSU2_TR(0x57d0c8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d0c9:{NFSU2_TR(0x57d0c9);
u8 U[4];
w4(U+0,u32(0x79544cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d0ce:{NFSU2_TR(0x57d0ce);
{u32 ea_=u32(r4(R+24)+u32(196u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B57d0d4:{NFSU2_TR(0x57d0d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57d0d9ull));
TAIL_STATIC(0x578fd0u,578);
}
B57d0d9:L57d0d9:{c.instructions+=2;NFSU2_TR(0x57d0d9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57d0db:{NFSU2_TR(0x57d0db);
if(r1(R+518)){{goto L57d129;}}
}
B57d0dd:L57d0dd:{c.instructions+=1;NFSU2_TR(0x57d0dd);
__builtin_memmove((R+4),(R+4),4);
}
B57d0e0:L57d0e0:{c.instructions+=5;NFSU2_TR(0x57d0e0);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B57d0e1:{NFSU2_TR(0x57d0e1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d0e2:{NFSU2_TR(0x57d0e2);
u8 U[4];
w4(U+0,u32(0x79544cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d0e7:{NFSU2_TR(0x57d0e7);
__builtin_memmove((R+4),(R+24),4);
}
B57d0e9:{NFSU2_TR(0x57d0e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57d0eeull));
TAIL_STATIC(0x578fd0u,578);
}
B57d0ee:L57d0ee:{c.instructions+=2;NFSU2_TR(0x57d0ee);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57d0f0:{NFSU2_TR(0x57d0f0);
if(r1(R+518)){{goto L57d118;}}
}
B57d0f2:L57d0f2:{c.instructions+=11;NFSU2_TR(0x57d0f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B57d0f4:{NFSU2_TR(0x57d0f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57d0f7:{NFSU2_TR(0x57d0f7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B57d0f9:{NFSU2_TR(0x57d0f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57d0fc:{NFSU2_TR(0x57d0fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57d102:{NFSU2_TR(0x57d102);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((R+4),(U+0),4);
}
B57d108:{NFSU2_TR(0x57d108);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B57d10a:{NFSU2_TR(0x57d10a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57d10d:{NFSU2_TR(0x57d10d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57d110:{NFSU2_TR(0x57d110);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B57d112:{NFSU2_TR(0x57d112);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B57d118:L57d118:{c.instructions+=4;NFSU2_TR(0x57d118);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d119:{NFSU2_TR(0x57d119);
u8 U[4];
w4(U+0,u32(0x79544cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d11e:{NFSU2_TR(0x57d11e);
__builtin_memmove((R+4),(R+24),4);
}
B57d120:{NFSU2_TR(0x57d120);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57d125ull));
TAIL_STATIC(0x578fd0u,578);
}
B57d125:L57d125:{c.instructions+=2;NFSU2_TR(0x57d125);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57d127:{NFSU2_TR(0x57d127);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57d0e0u);}goto L57d0e0;}}
}
B57d129:L57d129:{c.instructions+=3;NFSU2_TR(0x57d129);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57d12f:{NFSU2_TR(0x57d12f);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+8)));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B57d135:{NFSU2_TR(0x57d135);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L57d186;}}
}
B57d137:L57d137:{c.instructions+=12;NFSU2_TR(0x57d137);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57d13d:{NFSU2_TR(0x57d13d);
__builtin_memmove((R+8),gp(0x86518c),4);
}
B57d143:{NFSU2_TR(0x57d143);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B57d145:{NFSU2_TR(0x57d145);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57d149:{NFSU2_TR(0x57d149);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B57d14d:{NFSU2_TR(0x57d14d);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B57d153:{NFSU2_TR(0x57d153);
{u32 ea_=u32(r4(R+24)+u32(188u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B57d159:{NFSU2_TR(0x57d159);
{u32 ea_=u32(r4(R+24)+u32(196u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B57d15f:{NFSU2_TR(0x57d15f);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B57d161:{NFSU2_TR(0x57d161);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B57d163:{NFSU2_TR(0x57d163);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B57d166:{NFSU2_TR(0x57d166);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57d0b0u);}goto L57d0b0;}}
}
B57d16c:L57d16c:{c.instructions+=4;NFSU2_TR(0x57d16c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57d16d:{NFSU2_TR(0x57d16d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57d16e:{NFSU2_TR(0x57d16e);
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
B57d171:{NFSU2_TR(0x57d171);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57d172:L57d172:{c.instructions+=2;NFSU2_TR(0x57d172);
u8 U[4];
w4(U+0,u32(0x79544cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d177:{NFSU2_TR(0x57d177);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57d17cull));
TAIL_STATIC(0x57c080u,57c);
}
B57d17c:L57d17c:{c.instructions+=2;NFSU2_TR(0x57d17c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57d17e:{NFSU2_TR(0x57d17e);
if(r1(R+518)){{goto L57d186;}}
}
B57d180:L57d180:{c.instructions+=1;NFSU2_TR(0x57d180);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B57d186:L57d186:{c.instructions+=1;NFSU2_TR(0x57d186);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57d187:L57d187:{c.instructions+=3;NFSU2_TR(0x57d187);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57d188:{NFSU2_TR(0x57d188);
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
B57d18b:{NFSU2_TR(0x57d18b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57d190:L57d190:{c.instructions+=5;NFSU2_TR(0x57d190);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d191:{NFSU2_TR(0x57d191);
__builtin_memmove((R+24),(R+4),4);
}
B57d193:{NFSU2_TR(0x57d193);
u8 U[4];
w4(U+0,u32(0x86519cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d198:{NFSU2_TR(0x57d198);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((R+4),(U+0),4);
}
B57d19e:{NFSU2_TR(0x57d19e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57d1a3ull));
TAIL_STATIC(0x43beb0u,43b);
}
B57d1a3:L57d1a3:{c.instructions+=4;NFSU2_TR(0x57d1a3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d1a5:{NFSU2_TR(0x57d1a5);
u8 U[4];
w4(U+0,u32(0x7a08c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d1aa:{NFSU2_TR(0x57d1aa);
__builtin_memmove((R+4),(R+24),4);
}
B57d1ac:{NFSU2_TR(0x57d1ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57d1b1ull));
TAIL_STATIC(0x578fd0u,578);
}
B57d1b1:L57d1b1:{c.instructions+=2;NFSU2_TR(0x57d1b1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57d1b3:{NFSU2_TR(0x57d1b3);
if(r1(R+518)){{goto L57d1bd;}}
}
B57d1b5:L57d1b5:{c.instructions+=3;NFSU2_TR(0x57d1b5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d1b6:{NFSU2_TR(0x57d1b6);
__builtin_memmove((R+4),(R+24),4);
}
B57d1b8:{NFSU2_TR(0x57d1b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57d1bdull));
TAIL_STATIC(0x57c1d0u,57c);
}
B57d1bd:L57d1bd:{c.instructions+=3;NFSU2_TR(0x57d1bd);
__builtin_memmove((R+4),(R+24),4);
}
B57d1bf:{NFSU2_TR(0x57d1bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B57d1c6:{NFSU2_TR(0x57d1c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57d1cbull));
TAIL_STATIC(0x57aad0u,57a);
}
B57d1cb:L57d1cb:{c.instructions+=4;NFSU2_TR(0x57d1cb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d1cd:{NFSU2_TR(0x57d1cd);
u8 U[4];
w4(U+0,u32(0x7a082cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d1d2:{NFSU2_TR(0x57d1d2);
__builtin_memmove((R+4),(R+24),4);
}
B57d1d4:{NFSU2_TR(0x57d1d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57d1d9ull));
TAIL_STATIC(0x578fd0u,578);
}
B57d1d9:L57d1d9:{c.instructions+=2;NFSU2_TR(0x57d1d9);
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
B57d1db:{NFSU2_TR(0x57d1db);
if(r1(R+518)){{goto L57d1e5;}}
}
B57d1dd:L57d1dd:{c.instructions+=3;NFSU2_TR(0x57d1dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d1de:{NFSU2_TR(0x57d1de);
__builtin_memmove((R+4),(R+24),4);
}
B57d1e0:{NFSU2_TR(0x57d1e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57d1e5ull));
TAIL_STATIC(0x57c1d0u,57c);
}
B57d1e5:L57d1e5:{c.instructions+=2;NFSU2_TR(0x57d1e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57d1e6:{NFSU2_TR(0x57d1e6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57d1f0:L57d1f0:{c.instructions+=5;NFSU2_TR(0x57d1f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57d1f4:{NFSU2_TR(0x57d1f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x48ull))));
}
B57d1f7:{NFSU2_TR(0x57d1f7);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B57d1f9:{NFSU2_TR(0x57d1f9);
__builtin_memmove((R+4),(R+0),4);
}
B57d1fb:{NFSU2_TR(0x57d1fb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L57d202;}}
}
B57d1fd:L57d1fd:{c.instructions+=2;NFSU2_TR(0x57d1fd);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B57d200:{NFSU2_TR(0x57d200);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L57d204;}}
}
B57d202:L57d202:{c.instructions+=1;NFSU2_TR(0x57d202);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B57d204:L57d204:{c.instructions+=3;NFSU2_TR(0x57d204);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7fab40ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B57d20b:{NFSU2_TR(0x57d20b);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B57d20e:{NFSU2_TR(0x57d20e);
if(r1(R+518)){{goto L57d237;}}
}
B57d210:L57d210:{c.instructions+=2;NFSU2_TR(0x57d210);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B57d212:{NFSU2_TR(0x57d212);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L57d219;}}
}
B57d214:L57d214:{c.instructions+=2;NFSU2_TR(0x57d214);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B57d217:{NFSU2_TR(0x57d217);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L57d21b;}}
}
B57d219:L57d219:{c.instructions+=1;NFSU2_TR(0x57d219);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B57d21b:L57d21b:{c.instructions+=6;NFSU2_TR(0x57d21b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7fab40ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B57d222:{NFSU2_TR(0x57d222);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d223:{NFSU2_TR(0x57d223);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B57d227:{NFSU2_TR(0x57d227);
u8 U[4];
w4(U+0,u32(0x7a03f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d22c:{NFSU2_TR(0x57d22c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d22d:{NFSU2_TR(0x57d22d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57d232ull));
TAIL_STATIC(0x4400d0u,440);
}
B57d232:L57d232:{c.instructions+=2;NFSU2_TR(0x57d232);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B57d235:{NFSU2_TR(0x57d235);
{goto L57d23c;}
}
B57d237:L57d237:{c.instructions+=1;NFSU2_TR(0x57d237);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B57d23c:L57d23c:{c.instructions+=7;NFSU2_TR(0x57d23c);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57d240:{NFSU2_TR(0x57d240);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d241:{NFSU2_TR(0x57d241);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d242:{NFSU2_TR(0x57d242);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d244:{NFSU2_TR(0x57d244);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d245:{NFSU2_TR(0x57d245);
__builtin_memmove((R+4),gp(0x8650b8),4);
}
B57d24b:{NFSU2_TR(0x57d24b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57d250ull));
TAIL_STATIC(0x578fd0u,578);
}
B57d250:L57d250:{c.instructions+=4;NFSU2_TR(0x57d250);
__builtin_memmove((R+12),(R+0),4);
}
B57d252:{NFSU2_TR(0x57d252);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57d254:{NFSU2_TR(0x57d254);
w4(R+20,u32(0x1ull));
}
B57d259:{NFSU2_TR(0x57d259);
if(r1(R+518)){{goto L57d3e0;}}
}
B57d25f:L57d25f:{c.instructions+=2;NFSU2_TR(0x57d25f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d260:{NFSU2_TR(0x57d260);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d261:L57d261:{c.instructions+=12;NFSU2_TR(0x57d261);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B57d267:{NFSU2_TR(0x57d267);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))-u32(r4(U+4))));
}
B57d26d:{NFSU2_TR(0x57d26d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x9ebull))));
}
B57d273:{NFSU2_TR(0x57d273);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d275:{NFSU2_TR(0x57d275);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B57d278:{NFSU2_TR(0x57d278);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B57d27c:{NFSU2_TR(0x57d27c);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d27e:{NFSU2_TR(0x57d27e);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B57d281:{NFSU2_TR(0x57d281);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d282:{NFSU2_TR(0x57d282);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x39101ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57d28a:{NFSU2_TR(0x57d28a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57d28e:{NFSU2_TR(0x57d28e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57d293ull));
TAIL_STATIC(0x57ca10u,57c);
}
B57d293:L57d293:{c.instructions+=4;NFSU2_TR(0x57d293);
__builtin_memmove((R+28),(R+0),4);
}
B57d295:{NFSU2_TR(0x57d295);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B57d298:{NFSU2_TR(0x57d298);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57d29a:{NFSU2_TR(0x57d29a);
if(r1(R+518)){{goto L57d326;}}
}
B57d2a0:L57d2a0:{c.instructions+=9;NFSU2_TR(0x57d2a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57d2a3:{NFSU2_TR(0x57d2a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57d2a6:{NFSU2_TR(0x57d2a6);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d2a8:{NFSU2_TR(0x57d2a8);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d2aa:{NFSU2_TR(0x57d2aa);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B57d2ae:{NFSU2_TR(0x57d2ae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d2af:{NFSU2_TR(0x57d2af);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d2b0:{NFSU2_TR(0x57d2b0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d2b1:{NFSU2_TR(0x57d2b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57d2b6ull));
TAIL_STATIC(0x6f876cu,6f8);
}
B57d2b6:L57d2b6:{c.instructions+=8;NFSU2_TR(0x57d2b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57d2b9:{NFSU2_TR(0x57d2b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57d2bc:{NFSU2_TR(0x57d2bc);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x8ull))));
}
B57d2bf:{NFSU2_TR(0x57d2bf);
__builtin_memmove((R+0),(R+8),4);
}
B57d2c1:{NFSU2_TR(0x57d2c1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B57d2c4:{NFSU2_TR(0x57d2c4);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57d2c6:{NFSU2_TR(0x57d2c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57d2c9:{NFSU2_TR(0x57d2c9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L57d2ce;}}
}
B57d2cb:L57d2cb:{c.instructions+=1;NFSU2_TR(0x57d2cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57d2ce:L57d2ce:{c.instructions+=3;NFSU2_TR(0x57d2ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57d2d1:{NFSU2_TR(0x57d2d1);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57d2d3:{NFSU2_TR(0x57d2d3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L57d2de;}}
}
B57d2d5:L57d2d5:{c.instructions+=2;NFSU2_TR(0x57d2d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57d2dc:{NFSU2_TR(0x57d2dc);
{goto L57d326;}
}
B57d2de:L57d2de:{c.instructions+=3;NFSU2_TR(0x57d2de);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57d2e1:{NFSU2_TR(0x57d2e1);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B57d2e3:{NFSU2_TR(0x57d2e3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L57d317;}}
}
B57d2e5:L57d2e5:{c.instructions+=3;NFSU2_TR(0x57d2e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57d2e8:{NFSU2_TR(0x57d2e8);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57d2ea:{NFSU2_TR(0x57d2ea);
if(r1(R+518)){{goto L57d2f1;}}
}
B57d2ec:L57d2ec:{c.instructions+=2;NFSU2_TR(0x57d2ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B57d2ef:{NFSU2_TR(0x57d2ef);
{goto L57d310;}
}
B57d2f1:L57d2f1:{c.instructions+=3;NFSU2_TR(0x57d2f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57d2f4:{NFSU2_TR(0x57d2f4);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57d2f6:{NFSU2_TR(0x57d2f6);
if(r1(R+518)){{goto L57d310;}}
}
B57d2f8:L57d2f8:{c.instructions+=4;NFSU2_TR(0x57d2f8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d2fa:{NFSU2_TR(0x57d2fa);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d2fc:{NFSU2_TR(0x57d2fc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d2fd:{NFSU2_TR(0x57d2fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57d302ull));
TAIL_STATIC(0x6f7790u,6f7);
}
B57d302:L57d302:{c.instructions+=3;NFSU2_TR(0x57d302);
u8 U[4];
w4(U+0,u32(0x5755d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d307:{NFSU2_TR(0x57d307);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d308:{NFSU2_TR(0x57d308);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57d30dull));
TAIL_STATIC(0x6f76f2u,6f7);
}
B57d30d:L57d30d:{c.instructions+=1;NFSU2_TR(0x57d30d);
w1(R+512,carry<u32>(r4(R+16),u32(0x14ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B57d310:L57d310:{c.instructions+=1;NFSU2_TR(0x57d310);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B57d317:L57d317:{c.instructions+=4;NFSU2_TR(0x57d317);
__builtin_memmove((R+0),gp(0x865104),4);
}
B57d31c:{NFSU2_TR(0x57d31c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d31d:{NFSU2_TR(0x57d31d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d31e:{NFSU2_TR(0x57d31e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57d323ull));
TAIL_STATIC(0x43f920u,43f);
}
B57d323:L57d323:{c.instructions+=1;NFSU2_TR(0x57d323);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B57d326:L57d326:{c.instructions+=5;NFSU2_TR(0x57d326);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d328:{NFSU2_TR(0x57d328);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B57d32c:{NFSU2_TR(0x57d32c);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d32e:{NFSU2_TR(0x57d32e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d32f:{NFSU2_TR(0x57d32f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57d334ull));
TAIL_STATIC(0x57ca10u,57c);
}
B57d334:L57d334:{c.instructions+=4;NFSU2_TR(0x57d334);
__builtin_memmove((R+28),(R+0),4);
}
B57d336:{NFSU2_TR(0x57d336);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B57d339:{NFSU2_TR(0x57d339);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57d33b:{NFSU2_TR(0x57d33b);
if(r1(R+518)){{goto L57d3c2;}}
}
B57d341:L57d341:{c.instructions+=8;NFSU2_TR(0x57d341);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57d344:{NFSU2_TR(0x57d344);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57d347:{NFSU2_TR(0x57d347);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d349:{NFSU2_TR(0x57d349);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d34a:{NFSU2_TR(0x57d34a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d34b:{NFSU2_TR(0x57d34b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d34c:{NFSU2_TR(0x57d34c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d34d:{NFSU2_TR(0x57d34d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57d352ull));
TAIL_STATIC(0x6f876cu,6f8);
}
B57d352:L57d352:{c.instructions+=8;NFSU2_TR(0x57d352);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57d355:{NFSU2_TR(0x57d355);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57d358:{NFSU2_TR(0x57d358);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B57d35a:{NFSU2_TR(0x57d35a);
__builtin_memmove((R+0),(R+8),4);
}
B57d35c:{NFSU2_TR(0x57d35c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B57d35f:{NFSU2_TR(0x57d35f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57d361:{NFSU2_TR(0x57d361);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57d364:{NFSU2_TR(0x57d364);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L57d369;}}
}
B57d366:L57d366:{c.instructions+=1;NFSU2_TR(0x57d366);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57d369:L57d369:{c.instructions+=3;NFSU2_TR(0x57d369);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57d36c:{NFSU2_TR(0x57d36c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57d36e:{NFSU2_TR(0x57d36e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L57d379;}}
}
B57d370:L57d370:{c.instructions+=2;NFSU2_TR(0x57d370);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57d377:{NFSU2_TR(0x57d377);
{goto L57d3c2;}
}
B57d379:L57d379:{c.instructions+=3;NFSU2_TR(0x57d379);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57d37c:{NFSU2_TR(0x57d37c);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B57d37e:{NFSU2_TR(0x57d37e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L57d3b2;}}
}
B57d380:L57d380:{c.instructions+=3;NFSU2_TR(0x57d380);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57d383:{NFSU2_TR(0x57d383);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57d385:{NFSU2_TR(0x57d385);
if(r1(R+518)){{goto L57d38c;}}
}
B57d387:L57d387:{c.instructions+=2;NFSU2_TR(0x57d387);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B57d38a:{NFSU2_TR(0x57d38a);
{goto L57d3ab;}
}
B57d38c:L57d38c:{c.instructions+=3;NFSU2_TR(0x57d38c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57d38f:{NFSU2_TR(0x57d38f);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57d391:{NFSU2_TR(0x57d391);
if(r1(R+518)){{goto L57d3ab;}}
}
B57d393:L57d393:{c.instructions+=4;NFSU2_TR(0x57d393);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d395:{NFSU2_TR(0x57d395);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d397:{NFSU2_TR(0x57d397);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d398:{NFSU2_TR(0x57d398);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57d39dull));
TAIL_STATIC(0x6f7790u,6f7);
}
B57d39d:L57d39d:{c.instructions+=3;NFSU2_TR(0x57d39d);
u8 U[4];
w4(U+0,u32(0x5755d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d3a2:{NFSU2_TR(0x57d3a2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d3a3:{NFSU2_TR(0x57d3a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57d3a8ull));
TAIL_STATIC(0x6f76f2u,6f7);
}
B57d3a8:L57d3a8:{c.instructions+=1;NFSU2_TR(0x57d3a8);
w1(R+512,carry<u32>(r4(R+16),u32(0x14ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B57d3ab:L57d3ab:{c.instructions+=1;NFSU2_TR(0x57d3ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B57d3b2:L57d3b2:{c.instructions+=4;NFSU2_TR(0x57d3b2);
__builtin_memmove((R+4),gp(0x865104),4);
}
B57d3b8:{NFSU2_TR(0x57d3b8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d3b9:{NFSU2_TR(0x57d3b9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d3ba:{NFSU2_TR(0x57d3ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57d3bfull));
TAIL_STATIC(0x43f920u,43f);
}
B57d3bf:L57d3bf:{c.instructions+=1;NFSU2_TR(0x57d3bf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B57d3c2:L57d3c2:{c.instructions+=5;NFSU2_TR(0x57d3c2);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57d3c6:{NFSU2_TR(0x57d3c6);
__builtin_memmove((R+4),gp(0x8650b8),4);
}
B57d3cc:{NFSU2_TR(0x57d3cc);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d3cd:{NFSU2_TR(0x57d3cd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d3ce:{NFSU2_TR(0x57d3ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57d3d3ull));
TAIL_STATIC(0x578fd0u,578);
}
B57d3d3:L57d3d3:{c.instructions+=4;NFSU2_TR(0x57d3d3);
__builtin_memmove((R+12),(R+0),4);
}
B57d3d5:{NFSU2_TR(0x57d3d5);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B57d3d6:{NFSU2_TR(0x57d3d6);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57d3d8:{NFSU2_TR(0x57d3d8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57d261u);}goto L57d261;}}
}
B57d3de:L57d3de:{c.instructions+=2;NFSU2_TR(0x57d3de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57d3df:{NFSU2_TR(0x57d3df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57d3e0:L57d3e0:{c.instructions+=4;NFSU2_TR(0x57d3e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B57d3e1:{NFSU2_TR(0x57d3e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B57d3e2:{NFSU2_TR(0x57d3e2);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x48ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x48ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x48ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B57d3e5:{NFSU2_TR(0x57d3e5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57d3f0:L57d3f0:{c.instructions+=10;NFSU2_TR(0x57d3f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xa8ull))));
}
B57d3f6:{NFSU2_TR(0x57d3f6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d3f7:{NFSU2_TR(0x57d3f7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d3f8:{NFSU2_TR(0x57d3f8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d3f9:{NFSU2_TR(0x57d3f9);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B57d3fb:{NFSU2_TR(0x57d3fb);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d3fc:{NFSU2_TR(0x57d3fc);
__builtin_memmove((R+24),(R+4),4);
}
B57d3fe:{NFSU2_TR(0x57d3fe);
__builtin_memmove((R+4),gp(0x8650b8),4);
}
B57d404:{NFSU2_TR(0x57d404);
u8 U[4];
w4(U+0,u32(0x7a0844ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d409:{NFSU2_TR(0x57d409);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57d40eull));
TAIL_STATIC(0x578fd0u,578);
}
B57d40e:L57d40e:{c.instructions+=5;NFSU2_TR(0x57d40e);
__builtin_memmove((R+4),gp(0x8650b8),4);
}
B57d414:{NFSU2_TR(0x57d414);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d415:{NFSU2_TR(0x57d415);
u8 U[4];
w4(U+0,u32(0x7a08c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d41a:{NFSU2_TR(0x57d41a);
__builtin_memmove((R+28),(R+0),4);
}
B57d41c:{NFSU2_TR(0x57d41c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57d421ull));
TAIL_STATIC(0x578fd0u,578);
}
B57d421:L57d421:{c.instructions+=2;NFSU2_TR(0x57d421);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57d423:{NFSU2_TR(0x57d423);
if(r1(R+518)){{goto L57d57a;}}
}
B57d429:L57d429:{c.instructions+=2;NFSU2_TR(0x57d429);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57d42b:{NFSU2_TR(0x57d42b);
if(r1(R+518)){{goto L57d57a;}}
}
B57d431:L57d431:{c.instructions+=2;NFSU2_TR(0x57d431);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+20)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B57d434:{NFSU2_TR(0x57d434);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L57d439;}}
}
B57d436:L57d436:{c.instructions+=1;NFSU2_TR(0x57d436);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57d439:L57d439:{c.instructions+=7;NFSU2_TR(0x57d439);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d43a:{NFSU2_TR(0x57d43a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B57d43d:{NFSU2_TR(0x57d43d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d43e:{NFSU2_TR(0x57d43e);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B57d442:{NFSU2_TR(0x57d442);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d443:{NFSU2_TR(0x57d443);
__builtin_memmove((R+4),(R+24),4);
}
B57d445:{NFSU2_TR(0x57d445);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57d44aull));
TAIL_STATIC(0x571970u,571);
}
B57d44a:L57d44a:{c.instructions+=8;NFSU2_TR(0x57d44a);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d44c:{NFSU2_TR(0x57d44c);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B57d450:{NFSU2_TR(0x57d450);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d451:{NFSU2_TR(0x57d451);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B57d455:{NFSU2_TR(0x57d455);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d456:{NFSU2_TR(0x57d456);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57d45a:{NFSU2_TR(0x57d45a);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57d45e:{NFSU2_TR(0x57d45e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57d463ull));
TAIL_STATIC(0x57cb00u,57c);
}
B57d463:L57d463:{c.instructions+=3;NFSU2_TR(0x57d463);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B57d465:{NFSU2_TR(0x57d465);
w4(R+4,u32(0x14ull));
}
B57d46a:{NFSU2_TR(0x57d46a);
u8 U[4];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B57d46e:L57d46e:{c.instructions+=1;NFSU2_TR(0x57d46e);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L57d470;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57d46eu);}goto L57d46e;}
}
B57d470:L57d470:{c.instructions+=9;NFSU2_TR(0x57d470);
__builtin_memmove((R+0),gp(0x89e7a0),4);
}
B57d475:{NFSU2_TR(0x57d475);
u8 U[4];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B57d47c:{NFSU2_TR(0x57d47c);
u8 U[4];
w4(U+0,u32(0x3full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d47e:{NFSU2_TR(0x57d47e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d47f:{NFSU2_TR(0x57d47f);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57d487:{NFSU2_TR(0x57d487);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57d48e:{NFSU2_TR(0x57d48e);
u8 U[8];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57d499:{NFSU2_TR(0x57d499);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57d4a0:{NFSU2_TR(0x57d4a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57d4a5ull));
TAIL_STATIC(0x43f990u,43f);
}
B57d4a5:L57d4a5:{c.instructions+=8;NFSU2_TR(0x57d4a5);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d4a7:{NFSU2_TR(0x57d4a7);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B57d4ab:{NFSU2_TR(0x57d4ab);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d4ac:{NFSU2_TR(0x57d4ac);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B57d4b0:{NFSU2_TR(0x57d4b0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d4b1:{NFSU2_TR(0x57d4b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
w4(U+4,u32(0x39100ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57d4b9:{NFSU2_TR(0x57d4b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
w4(U+4,u32(0x50ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57d4c1:{NFSU2_TR(0x57d4c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57d4c6ull));
TAIL_STATIC(0x57cb70u,57c);
}
B57d4c6:L57d4c6:{c.instructions+=6;NFSU2_TR(0x57d4c6);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d4c8:{NFSU2_TR(0x57d4c8);
u8 U[4];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B57d4cf:{NFSU2_TR(0x57d4cf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d4d0:{NFSU2_TR(0x57d4d0);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B57d4d4:{NFSU2_TR(0x57d4d4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d4d5:{NFSU2_TR(0x57d4d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57d4daull));
TAIL_STATIC(0x57cb70u,57c);
}
B57d4da:L57d4da:{c.instructions+=5;NFSU2_TR(0x57d4da);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x2cull))));
}
B57d4dd:{NFSU2_TR(0x57d4dd);
u8 U[4];
w4(U+0,u32(0x7a0844ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d4e2:{NFSU2_TR(0x57d4e2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d4e3:{NFSU2_TR(0x57d4e3);
__builtin_memmove((R+4),(R+24),4);
}
B57d4e5:{NFSU2_TR(0x57d4e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57d4eaull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57d1f0u);}goto L57d1f0;}
}
B57d4ea:L57d4ea:{c.instructions+=4;NFSU2_TR(0x57d4ea);
u8 U[4];
w4(U+0,u32(0x7a08c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d4ef:{NFSU2_TR(0x57d4ef);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d4f0:{NFSU2_TR(0x57d4f0);
__builtin_memmove((R+4),(R+24),4);
}
B57d4f2:{NFSU2_TR(0x57d4f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57d4f7ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57d1f0u);}goto L57d1f0;}
}
B57d4f7:L57d4f7:{c.instructions+=4;NFSU2_TR(0x57d4f7);
u8 U[4];
w4(U+0,u32(0x7a0934ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d4fc:{NFSU2_TR(0x57d4fc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d4fd:{NFSU2_TR(0x57d4fd);
__builtin_memmove((R+4),(R+24),4);
}
B57d4ff:{NFSU2_TR(0x57d4ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57d504ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57d1f0u);}goto L57d1f0;}
}
B57d504:L57d504:{c.instructions+=4;NFSU2_TR(0x57d504);
u8 U[4];
w4(U+0,u32(0x7a0928ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d509:{NFSU2_TR(0x57d509);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d50a:{NFSU2_TR(0x57d50a);
__builtin_memmove((R+4),(R+24),4);
}
B57d50c:{NFSU2_TR(0x57d50c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57d511ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57d1f0u);}goto L57d1f0;}
}
B57d511:L57d511:{c.instructions+=4;NFSU2_TR(0x57d511);
u8 U[4];
w4(U+0,u32(0x7a091cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d516:{NFSU2_TR(0x57d516);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d517:{NFSU2_TR(0x57d517);
__builtin_memmove((R+4),(R+24),4);
}
B57d519:{NFSU2_TR(0x57d519);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57d51eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57d1f0u);}goto L57d1f0;}
}
B57d51e:L57d51e:{c.instructions+=4;NFSU2_TR(0x57d51e);
u8 U[4];
w4(U+0,u32(0x7a0910ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d523:{NFSU2_TR(0x57d523);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d524:{NFSU2_TR(0x57d524);
__builtin_memmove((R+4),(R+24),4);
}
B57d526:{NFSU2_TR(0x57d526);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57d52bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57d1f0u);}goto L57d1f0;}
}
B57d52b:L57d52b:{c.instructions+=19;NFSU2_TR(0x57d52b);
__builtin_memmove((R+0),gp(0x8650b8),4);
}
B57d530:{NFSU2_TR(0x57d530);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B57d536:{NFSU2_TR(0x57d536);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57d539:{NFSU2_TR(0x57d539);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B57d53a:{NFSU2_TR(0x57d53a);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7ull))));
}
B57d53d:{NFSU2_TR(0x57d53d);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B57d53f:{NFSU2_TR(0x57d53f);
__builtin_memmove((R+24),(R+0),4);
}
B57d541:{NFSU2_TR(0x57d541);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+24,sar<u32>(r4(R+24),u64(r4(U+0))));
}
B57d544:{NFSU2_TR(0x57d544);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B57d547:{NFSU2_TR(0x57d547);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B57d54a:{NFSU2_TR(0x57d54a);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B57d54d:{NFSU2_TR(0x57d54d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x39102ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57d555:{NFSU2_TR(0x57d555);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57d559:{NFSU2_TR(0x57d559);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d55b:{NFSU2_TR(0x57d55b);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B57d55f:{NFSU2_TR(0x57d55f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d560:{NFSU2_TR(0x57d560);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B57d564:{NFSU2_TR(0x57d564);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d565:{NFSU2_TR(0x57d565);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57d56aull));
TAIL_STATIC(0x57cb70u,57c);
}
B57d56a:L57d56a:{c.instructions+=5;NFSU2_TR(0x57d56a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d56b:{NFSU2_TR(0x57d56b);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B57d56f:{NFSU2_TR(0x57d56f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d570:{NFSU2_TR(0x57d570);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d571:{NFSU2_TR(0x57d571);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57d576ull));
TAIL_STATIC(0x57cb70u,57c);
}
B57d576:L57d576:{c.instructions+=2;NFSU2_TR(0x57d576);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B57d579:{NFSU2_TR(0x57d579);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B57d57a:L57d57a:{c.instructions+=5;NFSU2_TR(0x57d57a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57d57b:{NFSU2_TR(0x57d57b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57d57c:{NFSU2_TR(0x57d57c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B57d57d:{NFSU2_TR(0x57d57d);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0xa8ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0xa8ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xa8ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B57d583:{NFSU2_TR(0x57d583);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57d590:L57d590:{c.instructions+=4;NFSU2_TR(0x57d590);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d591:{NFSU2_TR(0x57d591);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d592:{NFSU2_TR(0x57d592);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B57d596:{NFSU2_TR(0x57d596);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B57d598:L57d598:{c.instructions+=3;NFSU2_TR(0x57d598);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d599:{NFSU2_TR(0x57d599);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d59a:{NFSU2_TR(0x57d59a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57d59full));
TAIL_STATIC(0x57c330u,57c);
}
B57d59f:L57d59f:{c.instructions+=4;NFSU2_TR(0x57d59f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B57d5a2:{NFSU2_TR(0x57d5a2);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B57d5a3:{NFSU2_TR(0x57d5a3);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x2ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B57d5a6:{NFSU2_TR(0x57d5a6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57d598u);}goto L57d598;}}
}
B57d5a8:L57d5a8:{c.instructions+=3;NFSU2_TR(0x57d5a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57d5a9:{NFSU2_TR(0x57d5a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57d5aa:{NFSU2_TR(0x57d5aa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57d5b0:L57d5b0:{c.instructions+=17;NFSU2_TR(0x57d5b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B57d5b3:{NFSU2_TR(0x57d5b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57d5b7:{NFSU2_TR(0x57d5b7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d5b8:{NFSU2_TR(0x57d5b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B57d5bc:{NFSU2_TR(0x57d5bc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d5bd:{NFSU2_TR(0x57d5bd);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x7ull))));
}
B57d5c0:{NFSU2_TR(0x57d5c0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d5c1:{NFSU2_TR(0x57d5c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B57d5c5:{NFSU2_TR(0x57d5c5);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B57d5c8:{NFSU2_TR(0x57d5c8);
__builtin_memmove((R+24),(R+4),4);
}
B57d5ca:{NFSU2_TR(0x57d5ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B57d5cd:{NFSU2_TR(0x57d5cd);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57d5d1:{NFSU2_TR(0x57d5d1);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7fb440ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+0,u32(s32(s8(r1(U+8)))));
}
B57d5d9:{NFSU2_TR(0x57d5d9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57d5db:{NFSU2_TR(0x57d5db);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57d5df:{NFSU2_TR(0x57d5df);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57d5e3:{NFSU2_TR(0x57d5e3);
if(r1(R+518)){{goto L57d5fe;}}
}
B57d5e5:L57d5e5:{c.instructions+=6;NFSU2_TR(0x57d5e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57d5e8:{NFSU2_TR(0x57d5e8);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B57d5e9:{NFSU2_TR(0x57d5e9);
__builtin_memmove((R+4),(R+8),4);
}
B57d5eb:{NFSU2_TR(0x57d5eb);
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
B57d5ed:{NFSU2_TR(0x57d5ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57d5f0:{NFSU2_TR(0x57d5f0);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L57d605;}}
}
B57d5f2:L57d5f2:{c.instructions+=2;NFSU2_TR(0x57d5f2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d5f4:{NFSU2_TR(0x57d5f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57d5f9ull));
TAIL_STATIC(0x6f5889u,6f5);
}
B57d5f9:L57d5f9:{c.instructions+=2;NFSU2_TR(0x57d5f9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B57d5fc:{NFSU2_TR(0x57d5fc);
{goto L57d605;}
}
B57d5fe:L57d5fe:{c.instructions+=1;NFSU2_TR(0x57d5fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57d605:L57d605:{c.instructions+=2;NFSU2_TR(0x57d605);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B57d608:{NFSU2_TR(0x57d608);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57d60f;}}
}
B57d60a:L57d60a:{c.instructions+=2;NFSU2_TR(0x57d60a);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B57d60d:{NFSU2_TR(0x57d60d);
if(r1(R+518)){{goto L57d615;}}
}
B57d60f:L57d60f:{c.instructions+=2;NFSU2_TR(0x57d60f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57d612:{NFSU2_TR(0x57d612);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57d615:L57d615:{c.instructions+=6;NFSU2_TR(0x57d615);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B57d617:{NFSU2_TR(0x57d617);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d618:{NFSU2_TR(0x57d618);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B57d61c:{NFSU2_TR(0x57d61c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d61d:{NFSU2_TR(0x57d61d);
__builtin_memmove((R+4),(R+24),4);
}
B57d61f:{NFSU2_TR(0x57d61f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57d624ull));
TAIL_STATIC(0x573020u,573);
}
B57d624:L57d624:{c.instructions+=10;NFSU2_TR(0x57d624);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57d627:{NFSU2_TR(0x57d627);
__builtin_memmove((R+8),(R+0),4);
}
B57d629:{NFSU2_TR(0x57d629);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B57d62b:{NFSU2_TR(0x57d62b);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B57d62d:{NFSU2_TR(0x57d62d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4000ull))));
}
B57d633:{NFSU2_TR(0x57d633);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x100ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x100ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B57d639:{NFSU2_TR(0x57d639);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B57d63b:{NFSU2_TR(0x57d63b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57d63e:{NFSU2_TR(0x57d63e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57d641:{NFSU2_TR(0x57d641);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L57d667;}}
}
B57d643:L57d643:{c.instructions+=2;NFSU2_TR(0x57d643);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57d645:{NFSU2_TR(0x57d645);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L57d667;}}
}
B57d647:L57d647:{c.instructions+=6;NFSU2_TR(0x57d647);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d648:{NFSU2_TR(0x57d648);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x128ull))));
__builtin_memmove((R+4),(U+0),4);
}
B57d64e:{NFSU2_TR(0x57d64e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d64f:{NFSU2_TR(0x57d64f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((R+8),(U+0),4);
}
B57d652:{NFSU2_TR(0x57d652);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d653:{NFSU2_TR(0x57d653);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57d658ull));
TAIL_STATIC(0x57cb70u,57c);
}
B57d658:L57d658:{c.instructions+=4;NFSU2_TR(0x57d658);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B57d65a:{NFSU2_TR(0x57d65a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B57d65d:{NFSU2_TR(0x57d65d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57d660:{NFSU2_TR(0x57d660);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57d667:L57d667:{c.instructions+=5;NFSU2_TR(0x57d667);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57d668:{NFSU2_TR(0x57d668);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57d669:{NFSU2_TR(0x57d669);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B57d66a:{NFSU2_TR(0x57d66a);
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
B57d66d:{NFSU2_TR(0x57d66d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57d670:L57d670:{c.instructions+=3;NFSU2_TR(0x57d670);
__builtin_memmove((R+0),gp(0x8650d4),4);
}
B57d675:{NFSU2_TR(0x57d675);
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
B57d677:{NFSU2_TR(0x57d677);
if(r1(R+518)){{goto L57d693;}}
}
B57d679:L57d679:{c.instructions+=8;NFSU2_TR(0x57d679);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57d67d:{NFSU2_TR(0x57d67d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57d681:{NFSU2_TR(0x57d681);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57d685:{NFSU2_TR(0x57d685);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d686:{NFSU2_TR(0x57d686);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d687:{NFSU2_TR(0x57d687);
__builtin_memmove((R+4),gp(0x8650dc),4);
}
B57d68d:{NFSU2_TR(0x57d68d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d68e:{NFSU2_TR(0x57d68e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57d693ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57d5b0u);}goto L57d5b0;}
}
B57d693:L57d693:{c.instructions+=1;NFSU2_TR(0x57d693);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57d6a0:L57d6a0:{c.instructions+=6;NFSU2_TR(0x57d6a0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d6a1:{NFSU2_TR(0x57d6a1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B57d6a5:{NFSU2_TR(0x57d6a5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d6a6:{NFSU2_TR(0x57d6a6);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B57d6a8:{NFSU2_TR(0x57d6a8);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B57d6aa:{NFSU2_TR(0x57d6aa);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L57d6d9;}}
}
B57d6ac:L57d6ac:{c.instructions+=4;NFSU2_TR(0x57d6ac);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d6ad:{NFSU2_TR(0x57d6ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B57d6b1:{NFSU2_TR(0x57d6b1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d6b2:{NFSU2_TR(0x57d6b2);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B57d6b6:L57d6b6:{c.instructions+=3;NFSU2_TR(0x57d6b6);
__builtin_memmove((R+0),gp(0x8650d4),4);
}
B57d6bb:{NFSU2_TR(0x57d6bb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57d6bd:{NFSU2_TR(0x57d6bd);
if(r1(R+518)){{goto L57d6d2;}}
}
B57d6bf:L57d6bf:{c.instructions+=6;NFSU2_TR(0x57d6bf);
u8 U[9];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+0,u32(s32(s8(r1(U+8)))));
}
B57d6c3:{NFSU2_TR(0x57d6c3);
__builtin_memmove((R+4),gp(0x8650dc),4);
}
B57d6c9:{NFSU2_TR(0x57d6c9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d6ca:{NFSU2_TR(0x57d6ca);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d6cc:{NFSU2_TR(0x57d6cc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d6cd:{NFSU2_TR(0x57d6cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57d6d2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57d5b0u);}goto L57d5b0;}
}
B57d6d2:L57d6d2:{c.instructions+=3;NFSU2_TR(0x57d6d2);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B57d6d3:{NFSU2_TR(0x57d6d3);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B57d6d5:{NFSU2_TR(0x57d6d5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57d6b6u);}goto L57d6b6;}}
}
B57d6d7:L57d6d7:{c.instructions+=2;NFSU2_TR(0x57d6d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57d6d8:{NFSU2_TR(0x57d6d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B57d6d9:L57d6d9:{c.instructions+=3;NFSU2_TR(0x57d6d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57d6da:{NFSU2_TR(0x57d6da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B57d6db:{NFSU2_TR(0x57d6db);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57d6e0:L57d6e0:{c.instructions+=9;NFSU2_TR(0x57d6e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57d6e6:{NFSU2_TR(0x57d6e6);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d6e8:{NFSU2_TR(0x57d6e8);
u8 U[4];
w4(U+0,u32(0x7788feull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d6ed:{NFSU2_TR(0x57d6ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d6ee:{NFSU2_TR(0x57d6ee);
__builtin_memmove((R+0),gp(0x8650c8),4);
}
B57d6f3:{NFSU2_TR(0x57d6f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57d6fa:{NFSU2_TR(0x57d6fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x108ull))));
}
B57d700:{NFSU2_TR(0x57d700);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57d702:{NFSU2_TR(0x57d702);
if(r1(R+518)){{goto L57d805;}}
}
B57d708:L57d708:{c.instructions+=4;NFSU2_TR(0x57d708);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B57d70c:{NFSU2_TR(0x57d70c);
u8 U[4];
w4(U+0,u32(0x7a09d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d711:{NFSU2_TR(0x57d711);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d712:{NFSU2_TR(0x57d712);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57d717ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B57d717:L57d717:{c.instructions+=4;NFSU2_TR(0x57d717);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B57d71b:{NFSU2_TR(0x57d71b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B57d71e:{NFSU2_TR(0x57d71e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B57d720:{NFSU2_TR(0x57d720);
if(r1(R+518)){{goto L57d7a8;}}
}
B57d726:L57d726:{c.instructions+=3;NFSU2_TR(0x57d726);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B57d72a:{NFSU2_TR(0x57d72a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d72b:{NFSU2_TR(0x57d72b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57d730ull));
TAIL_STATIC(0x57cac0u,57c);
}
B57d730:L57d730:{c.instructions+=3;NFSU2_TR(0x57d730);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B57d733:{NFSU2_TR(0x57d733);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57d735:{NFSU2_TR(0x57d735);
if(r1(R+518)){{goto L57d7a8;}}
}
B57d737:L57d737:{c.instructions+=6;NFSU2_TR(0x57d737);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d738:{NFSU2_TR(0x57d738);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d73a:{NFSU2_TR(0x57d73a);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B57d73e:{NFSU2_TR(0x57d73e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d740:{NFSU2_TR(0x57d740);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d741:{NFSU2_TR(0x57d741);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57d746ull));
TAIL_STATIC(0x57ca10u,57c);
}
B57d746:L57d746:{c.instructions+=3;NFSU2_TR(0x57d746);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B57d74a:{NFSU2_TR(0x57d74a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d74b:{NFSU2_TR(0x57d74b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57d750ull));
{goto L57d900;}
}
B57d750:L57d750:{c.instructions+=3;NFSU2_TR(0x57d750);
u8 U[4];
w4(U+0,u32(0x4128ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d755:{NFSU2_TR(0x57d755);
__builtin_memmove((R+24),(R+0),4);
}
B57d757:{NFSU2_TR(0x57d757);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57d75cull));
TAIL_STATIC(0x75c6c8u,75c);
}
B57d75c:L57d75c:{c.instructions+=5;NFSU2_TR(0x57d75c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B57d75f:{NFSU2_TR(0x57d75f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57d763:{NFSU2_TR(0x57d763);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57d765:{NFSU2_TR(0x57d765);
u8 U[8];
w4(U+0,u32(u32(u32(0x114ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57d770:{NFSU2_TR(0x57d770);
if(r1(R+518)){{goto L57d781;}}
}
B57d772:L57d772:{c.instructions+=5;NFSU2_TR(0x57d772);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d773:{NFSU2_TR(0x57d773);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B57d777:{NFSU2_TR(0x57d777);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d778:{NFSU2_TR(0x57d778);
__builtin_memmove((R+4),(R+0),4);
}
B57d77a:{NFSU2_TR(0x57d77a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57d77full));
TAIL_STATIC(0x572fd0u,572);
}
B57d77f:L57d77f:{c.instructions+=1;NFSU2_TR(0x57d77f);
{goto L57d783;}
}
B57d781:L57d781:{c.instructions+=1;NFSU2_TR(0x57d781);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B57d783:L57d783:{c.instructions+=7;NFSU2_TR(0x57d783);
__builtin_memmove(gp(0x8650d8),(R+0),4);
}
B57d788:{NFSU2_TR(0x57d788);
s4(0x8650d0,u32(0x1ull));
}
B57d792:{NFSU2_TR(0x57d792);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57d793:{NFSU2_TR(0x57d793);
u8 U[8];
w4(U+0,u32(u32(u32(0x108ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57d79a:{NFSU2_TR(0x57d79a);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57d7a1:{NFSU2_TR(0x57d7a1);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x114ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x114ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x114ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B57d7a7:{NFSU2_TR(0x57d7a7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57d7a8:L57d7a8:{c.instructions+=2;NFSU2_TR(0x57d7a8);
u8 U[4];
w4(U+0,u32(0x4128ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d7ad:{NFSU2_TR(0x57d7ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57d7b2ull));
TAIL_STATIC(0x75c6c8u,75c);
}
B57d7b2:L57d7b2:{c.instructions+=5;NFSU2_TR(0x57d7b2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B57d7b5:{NFSU2_TR(0x57d7b5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B57d7b9:{NFSU2_TR(0x57d7b9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57d7bb:{NFSU2_TR(0x57d7bb);
u8 U[8];
w4(U+0,u32(u32(u32(0x110ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57d7c6:{NFSU2_TR(0x57d7c6);
if(r1(R+518)){{goto L57d7d8;}}
}
B57d7c8:L57d7c8:{c.instructions+=4;NFSU2_TR(0x57d7c8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d7ca:{NFSU2_TR(0x57d7ca);
u8 U[4];
w4(U+0,u32(0x7a09bcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d7cf:{NFSU2_TR(0x57d7cf);
__builtin_memmove((R+4),(R+0),4);
}
B57d7d1:{NFSU2_TR(0x57d7d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57d7d6ull));
TAIL_STATIC(0x572fd0u,572);
}
B57d7d6:L57d7d6:{c.instructions+=1;NFSU2_TR(0x57d7d6);
{goto L57d7da;}
}
B57d7d8:L57d7d8:{c.instructions+=1;NFSU2_TR(0x57d7d8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B57d7da:L57d7da:{c.instructions+=6;NFSU2_TR(0x57d7da);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d7dc:{NFSU2_TR(0x57d7dc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d7de:{NFSU2_TR(0x57d7de);
u8 U[4];
w4(U+0,u32(0x7a09bcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d7e3:{NFSU2_TR(0x57d7e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x11cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B57d7ee:{NFSU2_TR(0x57d7ee);
__builtin_memmove(gp(0x8650dc),(R+0),4);
}
B57d7f3:{NFSU2_TR(0x57d7f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57d7f8ull));
TAIL_STATIC(0x57cb00u,57c);
}
B57d7f8:L57d7f8:{c.instructions+=2;NFSU2_TR(0x57d7f8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B57d7fb:{NFSU2_TR(0x57d7fb);
s4(0x8650d4,u32(0x1ull));
}
B57d805:L57d805:{c.instructions+=4;NFSU2_TR(0x57d805);
u8 U[8];
w4(U+0,u32(u32(u32(0x108ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57d80c:{NFSU2_TR(0x57d80c);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57d813:{NFSU2_TR(0x57d813);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x114ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x114ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x114ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B57d819:{NFSU2_TR(0x57d819);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57d820:L57d820:{c.instructions+=4;NFSU2_TR(0x57d820);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d821:{NFSU2_TR(0x57d821);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B57d825:{NFSU2_TR(0x57d825);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d826:{NFSU2_TR(0x57d826);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57d82bull));
TAIL_STATIC(0x43dbb0u,43d);
}
B57d82b:L57d82b:{c.instructions+=6;NFSU2_TR(0x57d82b);
__builtin_memmove((R+8),gp(0x86663c),4);
}
B57d831:{NFSU2_TR(0x57d831);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B57d833:{NFSU2_TR(0x57d833);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B57d836:{NFSU2_TR(0x57d836);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x40000ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x40000ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B57d83b:{NFSU2_TR(0x57d83b);
__builtin_memmove(gp(0x86663c),(R+8),4);
}
B57d841:{NFSU2_TR(0x57d841);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L57d850;}}
}
B57d843:L57d843:{c.instructions+=5;NFSU2_TR(0x57d843);
u8 U[4];
w4(U+0,u32(0xdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d845:{NFSU2_TR(0x57d845);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B57d846:{NFSU2_TR(0x57d846);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d847:{NFSU2_TR(0x57d847);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d848:{NFSU2_TR(0x57d848);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57d84dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57d6a0u);}goto L57d6a0;}
}
B57d84d:L57d84d:{c.instructions+=1;NFSU2_TR(0x57d84d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B57d850:L57d850:{c.instructions+=3;NFSU2_TR(0x57d850);
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
B57d852:{NFSU2_TR(0x57d852);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57d853:{NFSU2_TR(0x57d853);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57d860:L57d860:{c.instructions+=3;NFSU2_TR(0x57d860);
__builtin_memmove((R+0),gp(0x8650cc),4);
}
B57d865:{NFSU2_TR(0x57d865);
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
B57d867:{NFSU2_TR(0x57d867);
if(r1(R+518)){{goto L57d8b4;}}
}
B57d869:L57d869:{c.instructions+=3;NFSU2_TR(0x57d869);
__builtin_memmove((R+0),gp(0x8650dc),4);
}
B57d86e:{NFSU2_TR(0x57d86e);
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
B57d870:{NFSU2_TR(0x57d870);
if(r1(R+518)){{goto L57d8a5;}}
}
B57d872:L57d872:{c.instructions+=9;NFSU2_TR(0x57d872);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B57d874:{NFSU2_TR(0x57d874);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57d877:{NFSU2_TR(0x57d877);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d878:{NFSU2_TR(0x57d878);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d879:{NFSU2_TR(0x57d879);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((R+28),(U+0),4);
}
B57d87c:{NFSU2_TR(0x57d87c);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B57d87e:{NFSU2_TR(0x57d87e);
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
B57d880:{NFSU2_TR(0x57d880);
__builtin_memmove((R+24),(R+0),4);
}
B57d882:{NFSU2_TR(0x57d882);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L57d8a3;}}
}
B57d884:L57d884:{c.instructions+=6;NFSU2_TR(0x57d884);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d885:{NFSU2_TR(0x57d885);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x128ull))));
__builtin_memmove((R+4),(U+0),4);
}
B57d88b:{NFSU2_TR(0x57d88b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d88c:{NFSU2_TR(0x57d88c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
}
B57d88f:{NFSU2_TR(0x57d88f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d890:{NFSU2_TR(0x57d890);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57d895ull));
TAIL_STATIC(0x57cb70u,57c);
}
B57d895:L57d895:{c.instructions+=4;NFSU2_TR(0x57d895);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B57d897:{NFSU2_TR(0x57d897);
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
B57d89a:{NFSU2_TR(0x57d89a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+28)),r4(U+0));
}
B57d89c:{NFSU2_TR(0x57d89c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57d8a3:L57d8a3:{c.instructions+=2;NFSU2_TR(0x57d8a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57d8a4:{NFSU2_TR(0x57d8a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57d8a5:L57d8a5:{c.instructions+=2;NFSU2_TR(0x57d8a5);
s4(0x8650cc,u32(0x0ull));
}
B57d8af:{NFSU2_TR(0x57d8af);
TAIL_STATIC(0x4022c0u,402);
}
B57d8b4:L57d8b4:{c.instructions+=1;NFSU2_TR(0x57d8b4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57d8c0:L57d8c0:{c.instructions+=6;NFSU2_TR(0x57d8c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57d8c4:{NFSU2_TR(0x57d8c4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d8c5:{NFSU2_TR(0x57d8c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B57d8c9:{NFSU2_TR(0x57d8c9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d8ca:{NFSU2_TR(0x57d8ca);
__builtin_memmove((R+4),(R+24),4);
}
B57d8cc:{NFSU2_TR(0x57d8cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57d8d1ull));
TAIL_STATIC(0x57c3f0u,57c);
}
B57d8d1:L57d8d1:{c.instructions+=2;NFSU2_TR(0x57d8d1);
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
B57d8d3:{NFSU2_TR(0x57d8d3);
if(r1(R+518)){{goto L57d8f4;}}
}
B57d8d5:L57d8d5:{c.instructions+=3;NFSU2_TR(0x57d8d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B57d8d7:{NFSU2_TR(0x57d8d7);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57d8d9:{NFSU2_TR(0x57d8d9);
if(r1(R+518)){{goto L57d8e4;}}
}
B57d8db:L57d8db:{c.instructions+=2;NFSU2_TR(0x57d8db);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d8dc:{NFSU2_TR(0x57d8dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57d8e1ull));
TAIL_STATIC(0x440540u,440);
}
B57d8e1:L57d8e1:{c.instructions+=1;NFSU2_TR(0x57d8e1);
w1(R+512,carry<u32>(r4(R+16),u32(0x4ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B57d8e4:L57d8e4:{c.instructions+=4;NFSU2_TR(0x57d8e4);
__builtin_memmove((R+4),gp(0x8650f0),4);
}
B57d8ea:{NFSU2_TR(0x57d8ea);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d8eb:{NFSU2_TR(0x57d8eb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d8ec:{NFSU2_TR(0x57d8ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57d8f1ull));
TAIL_STATIC(0x43f920u,43f);
}
B57d8f1:L57d8f1:{c.instructions+=1;NFSU2_TR(0x57d8f1);
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
B57d8f4:L57d8f4:{c.instructions+=2;NFSU2_TR(0x57d8f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57d8f5:{NFSU2_TR(0x57d8f5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57d900:L57d900:{c.instructions+=5;NFSU2_TR(0x57d900);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57d904:{NFSU2_TR(0x57d904);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d906:{NFSU2_TR(0x57d906);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d908:{NFSU2_TR(0x57d908);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d909:{NFSU2_TR(0x57d909);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57d90eull));
TAIL_STATIC(0x57ca10u,57c);
}
B57d90e:L57d90e:{c.instructions+=3;NFSU2_TR(0x57d90e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B57d911:{NFSU2_TR(0x57d911);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57d913:{NFSU2_TR(0x57d913);
if(r1(R+518)){{goto L57d944;}}
}
B57d915:L57d915:{c.instructions+=11;NFSU2_TR(0x57d915);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57d918:{NFSU2_TR(0x57d918);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B57d91a:{NFSU2_TR(0x57d91a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B57d91c:{NFSU2_TR(0x57d91c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
__builtin_memmove((R+8),(U+0),1);
}
B57d91f:{NFSU2_TR(0x57d91f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d920:{NFSU2_TR(0x57d920);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B57d921:{NFSU2_TR(0x57d921);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+4))));
}
B57d923:{NFSU2_TR(0x57d923);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57d926:{NFSU2_TR(0x57d926);
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
B57d928:{NFSU2_TR(0x57d928);
__builtin_memmove((R+24),(R+8),4);
}
B57d92a:{NFSU2_TR(0x57d92a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L57d937;}}
}
B57d92c:L57d92c:{c.instructions+=4;NFSU2_TR(0x57d92c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57d933:{NFSU2_TR(0x57d933);
__builtin_memmove((R+0),(R+24),4);
}
B57d935:{NFSU2_TR(0x57d935);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57d936:{NFSU2_TR(0x57d936);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57d937:L57d937:{c.instructions+=3;NFSU2_TR(0x57d937);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d939:{NFSU2_TR(0x57d939);
__builtin_memmove((R+4),(R+0),4);
}
B57d93b:{NFSU2_TR(0x57d93b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57d940ull));
TAIL_STATIC(0x579b90u,579);
}
B57d940:L57d940:{c.instructions+=3;NFSU2_TR(0x57d940);
__builtin_memmove((R+0),(R+24),4);
}
B57d942:{NFSU2_TR(0x57d942);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57d943:{NFSU2_TR(0x57d943);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57d944:L57d944:{c.instructions+=2;NFSU2_TR(0x57d944);
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
B57d947:{NFSU2_TR(0x57d947);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57d950:L57d950:{c.instructions+=3;NFSU2_TR(0x57d950);
__builtin_memmove((R+0),gp(0x865104),4);
}
B57d955:{NFSU2_TR(0x57d955);
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
B57d957:{NFSU2_TR(0x57d957);
if(r1(R+518)){{goto L57d9a8;}}
}
B57d959:L57d959:{c.instructions+=2;NFSU2_TR(0x57d959);
__builtin_memmove((R+4),gp(0x865110),4);
}
B57d95f:{NFSU2_TR(0x57d95f);
}
B57d960:L57d960:{c.instructions+=2;NFSU2_TR(0x57d960);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57d962:{NFSU2_TR(0x57d962);
if(r1(R+518)){{goto L57d974;}}
}
B57d964:L57d964:{c.instructions+=1;NFSU2_TR(0x57d964);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57d969ull));
TAIL_STATIC(0x6f56bdu,6f5);
}
B57d969:L57d969:{c.instructions+=1;NFSU2_TR(0x57d969);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57d96eull));
TAIL_STATIC(0x57c920u,57c);
}
B57d96e:L57d96e:{c.instructions+=1;NFSU2_TR(0x57d96e);
__builtin_memmove((R+4),gp(0x865110),4);
}
B57d974:L57d974:{c.instructions+=5;NFSU2_TR(0x57d974);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B57d976:{NFSU2_TR(0x57d976);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57d978:{NFSU2_TR(0x57d978);
__builtin_memmove((R+0),(R+518),1);
}
B57d97b:{NFSU2_TR(0x57d97b);
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
B57d97d:{NFSU2_TR(0x57d97d);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57d960u);}goto L57d960;}}
}
B57d97f:L57d97f:{c.instructions+=2;NFSU2_TR(0x57d97f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d981:{NFSU2_TR(0x57d981);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57d986ull));
TAIL_STATIC(0x57b5d0u,57b);
}
B57d986:L57d986:{c.instructions+=3;NFSU2_TR(0x57d986);
__builtin_memmove((R+0),gp(0x865104),4);
}
B57d98b:{NFSU2_TR(0x57d98b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d98c:{NFSU2_TR(0x57d98c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57d991ull));
TAIL_STATIC(0x440e40u,440);
}
B57d991:L57d991:{c.instructions+=4;NFSU2_TR(0x57d991);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B57d994:{NFSU2_TR(0x57d994);
s4(0x865104,u32(0x0ull));
}
B57d99e:{NFSU2_TR(0x57d99e);
w4(R+4,u32(0x864efcull));
}
B57d9a3:{NFSU2_TR(0x57d9a3);
TAIL_STATIC(0x6f55d2u,6f5);
}
B57d9a8:L57d9a8:{c.instructions+=1;NFSU2_TR(0x57d9a8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57d9b0:L57d9b0:{c.instructions+=4;NFSU2_TR(0x57d9b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d9b1:{NFSU2_TR(0x57d9b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B57d9b5:{NFSU2_TR(0x57d9b5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57d9b7:{NFSU2_TR(0x57d9b7);
if(r1(R+518)){{goto L57d9d5;}}
}
B57d9b9:L57d9b9:{c.instructions+=3;NFSU2_TR(0x57d9b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57d9bc:{NFSU2_TR(0x57d9bc);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B57d9be:{NFSU2_TR(0x57d9be);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L57d9d5;}}
}
B57d9c0:L57d9c0:{c.instructions+=8;NFSU2_TR(0x57d9c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57d9c4:{NFSU2_TR(0x57d9c4);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57d9c8:{NFSU2_TR(0x57d9c8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d9ca:{NFSU2_TR(0x57d9ca);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d9cc:{NFSU2_TR(0x57d9cc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d9cd:{NFSU2_TR(0x57d9cd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57d9ce:{NFSU2_TR(0x57d9ce);
__builtin_memmove((R+4),(R+24),4);
}
B57d9d0:{NFSU2_TR(0x57d9d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57d9d5ull));
TAIL_STATIC(0x57c7a0u,57c);
}
B57d9d5:L57d9d5:{c.instructions+=2;NFSU2_TR(0x57d9d5);
__builtin_memmove((R+4),gp(0x865110),4);
}
B57d9db:{NFSU2_TR(0x57d9db);
{goto L57d9e0;}
}
B57d9e0:L57d9e0:{c.instructions+=2;NFSU2_TR(0x57d9e0);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57d9e2:{NFSU2_TR(0x57d9e2);
if(r1(R+518)){{goto L57d9f4;}}
}
B57d9e4:L57d9e4:{c.instructions+=1;NFSU2_TR(0x57d9e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57d9e9ull));
TAIL_STATIC(0x6f56bdu,6f5);
}
B57d9e9:L57d9e9:{c.instructions+=1;NFSU2_TR(0x57d9e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57d9eeull));
TAIL_STATIC(0x57c920u,57c);
}
B57d9ee:L57d9ee:{c.instructions+=1;NFSU2_TR(0x57d9ee);
__builtin_memmove((R+4),gp(0x865110),4);
}
B57d9f4:L57d9f4:{c.instructions+=3;NFSU2_TR(0x57d9f4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B57d9f6:{NFSU2_TR(0x57d9f6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57d9f8:{NFSU2_TR(0x57d9f8);
if(r1(R+518)){{goto L57da01;}}
}
B57d9fa:L57d9fa:{c.instructions+=3;NFSU2_TR(0x57d9fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57d9fd:{NFSU2_TR(0x57d9fd);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57d9ff:{NFSU2_TR(0x57d9ff);
{goto L57da03;}
}
B57da01:L57da01:{c.instructions+=1;NFSU2_TR(0x57da01);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57da03:L57da03:{c.instructions+=3;NFSU2_TR(0x57da03);
__builtin_memmove((R+0),(R+518),1);
}
B57da06:{NFSU2_TR(0x57da06);
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
B57da08:{NFSU2_TR(0x57da08);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57d9e0u);}goto L57d9e0;}}
}
B57da0a:L57da0a:{c.instructions+=2;NFSU2_TR(0x57da0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57da0b:{NFSU2_TR(0x57da0b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57da10:L57da10:{c.instructions+=6;NFSU2_TR(0x57da10);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57da14:{NFSU2_TR(0x57da14);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57da15:{NFSU2_TR(0x57da15);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57da17:{NFSU2_TR(0x57da17);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57da19:{NFSU2_TR(0x57da19);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57da1a:{NFSU2_TR(0x57da1a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57da1full));
TAIL_STATIC(0x57ca10u,57c);
}
B57da1f:L57da1f:{c.instructions+=4;NFSU2_TR(0x57da1f);
__builtin_memmove((R+24),(R+0),4);
}
B57da21:{NFSU2_TR(0x57da21);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B57da24:{NFSU2_TR(0x57da24);
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
B57da26:{NFSU2_TR(0x57da26);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57da2a;}}
}
B57da28:L57da28:{c.instructions+=2;NFSU2_TR(0x57da28);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57da29:{NFSU2_TR(0x57da29);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57da2a:L57da2a:{c.instructions+=3;NFSU2_TR(0x57da2a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57da2e:{NFSU2_TR(0x57da2e);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57da30:{NFSU2_TR(0x57da30);
if(r1(R+518)){{goto L57da41;}}
}
B57da32:L57da32:{c.instructions+=7;NFSU2_TR(0x57da32);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57da35:{NFSU2_TR(0x57da35);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B57da37:{NFSU2_TR(0x57da37);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B57da39:{NFSU2_TR(0x57da39);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
__builtin_memmove((R+8),(U+0),1);
}
B57da3c:{NFSU2_TR(0x57da3c);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B57da3d:{NFSU2_TR(0x57da3d);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+8))));
}
B57da3f:{NFSU2_TR(0x57da3f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B57da41:L57da41:{c.instructions+=12;NFSU2_TR(0x57da41);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57da44:{NFSU2_TR(0x57da44);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57da48:{NFSU2_TR(0x57da48);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x2000ull))));
}
B57da4e:{NFSU2_TR(0x57da4e);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B57da50:{NFSU2_TR(0x57da50);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B57da52:{NFSU2_TR(0x57da52);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
__builtin_memmove((R+8),(U+0),1);
}
B57da55:{NFSU2_TR(0x57da55);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57da56:{NFSU2_TR(0x57da56);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57da57:{NFSU2_TR(0x57da57);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B57da58:{NFSU2_TR(0x57da58);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+8))));
}
B57da5a:{NFSU2_TR(0x57da5a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57da5b:{NFSU2_TR(0x57da5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57da60ull));
TAIL_STATIC(0x440820u,440);
}
B57da60:L57da60:{c.instructions+=11;NFSU2_TR(0x57da60);
__builtin_memmove((R+28),(R+0),4);
}
B57da62:{NFSU2_TR(0x57da62);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57da65:{NFSU2_TR(0x57da65);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B57da67:{NFSU2_TR(0x57da67);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B57da69:{NFSU2_TR(0x57da69);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
__builtin_memmove((R+4),(U+0),1);
}
B57da6c:{NFSU2_TR(0x57da6c);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B57da6d:{NFSU2_TR(0x57da6d);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
}
B57da6f:{NFSU2_TR(0x57da6f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57da70:{NFSU2_TR(0x57da70);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57da71:{NFSU2_TR(0x57da71);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57da72:{NFSU2_TR(0x57da72);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57da77ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57d9b0u);}goto L57d9b0;}
}
B57da77:L57da77:{c.instructions+=4;NFSU2_TR(0x57da77);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57da7a:{NFSU2_TR(0x57da7a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B57da7d:{NFSU2_TR(0x57da7d);
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
B57da7f:{NFSU2_TR(0x57da7f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L57da8d;}}
}
B57da81:L57da81:{c.instructions+=5;NFSU2_TR(0x57da81);
__builtin_memmove((R+0),(R+28),4);
}
B57da83:{NFSU2_TR(0x57da83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57da84:{NFSU2_TR(0x57da84);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57da8b:{NFSU2_TR(0x57da8b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57da8c:{NFSU2_TR(0x57da8c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57da8d:L57da8d:{c.instructions+=3;NFSU2_TR(0x57da8d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57da8f:{NFSU2_TR(0x57da8f);
__builtin_memmove((R+4),(R+24),4);
}
B57da91:{NFSU2_TR(0x57da91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57da96ull));
TAIL_STATIC(0x579b90u,579);
}
B57da96:L57da96:{c.instructions+=4;NFSU2_TR(0x57da96);
__builtin_memmove((R+0),(R+28),4);
}
B57da98:{NFSU2_TR(0x57da98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57da99:{NFSU2_TR(0x57da99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57da9a:{NFSU2_TR(0x57da9a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57daa0:L57daa0:{c.instructions+=7;NFSU2_TR(0x57daa0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B57daa3:{NFSU2_TR(0x57daa3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57daa4:{NFSU2_TR(0x57daa4);
__builtin_memmove((R+24),(R+4),4);
}
B57daa6:{NFSU2_TR(0x57daa6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57daa9:{NFSU2_TR(0x57daa9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57daab:{NFSU2_TR(0x57daab);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57daac:{NFSU2_TR(0x57daac);
if(r1(R+518)){{goto L57dabe;}}
}
B57daae:L57daae:{c.instructions+=2;NFSU2_TR(0x57daae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57daaf:{NFSU2_TR(0x57daaf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57dab4ull));
TAIL_STATIC(0x440540u,440);
}
B57dab4:L57dab4:{c.instructions+=2;NFSU2_TR(0x57dab4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B57dab7:{NFSU2_TR(0x57dab7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57dabe:L57dabe:{c.instructions+=3;NFSU2_TR(0x57dabe);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57dac2:{NFSU2_TR(0x57dac2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57dac4:{NFSU2_TR(0x57dac4);
if(r1(R+518)){{goto L57dbbf;}}
}
B57daca:L57daca:{c.instructions+=20;NFSU2_TR(0x57daca);
__builtin_memmove((R+4),gp(0x7a0a00),4);
}
B57dad0:{NFSU2_TR(0x57dad0);
__builtin_memmove((R+8),gp(0x7a0a04),4);
}
B57dad6:{NFSU2_TR(0x57dad6);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57dada:{NFSU2_TR(0x57dada);
__builtin_memmove((R+4),gp(0x7a0a08),2);
}
B57dae1:{NFSU2_TR(0x57dae1);
u8 U[6];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B57dae6:{NFSU2_TR(0x57dae6);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B57dae8:{NFSU2_TR(0x57dae8);
u8 U[8];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57daec:{NFSU2_TR(0x57daec);
u8 U[8];
w4(U+0,u32(u32(u32(0x17ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57daf0:{NFSU2_TR(0x57daf0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57daf4:{NFSU2_TR(0x57daf4);
__builtin_memmove((R+8),gp(0x7a0a0a),1);
}
B57dafa:{NFSU2_TR(0x57dafa);
u8 U[8];
w4(U+0,u32(u32(u32(0x1bull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57dafe:{NFSU2_TR(0x57dafe);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57db03:{NFSU2_TR(0x57db03);
u8 U[5];
w4(U+0,u32(u32(u32(0x16ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B57db07:{NFSU2_TR(0x57db07);
u8 U[8];
w4(U+0,u32(u32(u32(0x23ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57db0b:{NFSU2_TR(0x57db0b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57db0c:{NFSU2_TR(0x57db0c);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B57db10:{NFSU2_TR(0x57db10);
u8 U[8];
w4(U+0,u32(u32(u32(0x2bull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57db14:{NFSU2_TR(0x57db14);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57db15:{NFSU2_TR(0x57db15);
u8 U[5];
w4(U+0,u32(u32(u32(0x33ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B57db19:{NFSU2_TR(0x57db19);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57db1eull));
TAIL_STATIC(0x43dbb0u,43d);
}
B57db1e:L57db1e:{c.instructions+=4;NFSU2_TR(0x57db1e);
u8 U[12];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B57db22:{NFSU2_TR(0x57db22);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B57db25:{NFSU2_TR(0x57db25);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57db26:{NFSU2_TR(0x57db26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57db2bull));
TAIL_STATIC(0x43dda0u,43d);
}
B57db2b:L57db2b:{c.instructions+=5;NFSU2_TR(0x57db2b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57db2d:{NFSU2_TR(0x57db2d);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B57db31:{NFSU2_TR(0x57db31);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57db33:{NFSU2_TR(0x57db33);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57db34:{NFSU2_TR(0x57db34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57db39ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57da10u);}goto L57da10;}
}
B57db39:L57db39:{c.instructions+=4;NFSU2_TR(0x57db39);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B57db3c:{NFSU2_TR(0x57db3c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57db3e:{NFSU2_TR(0x57db3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57db41:{NFSU2_TR(0x57db41);
if(r1(R+518)){{goto L57dba6;}}
}
B57db43:L57db43:{c.instructions+=5;NFSU2_TR(0x57db43);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B57db49:{NFSU2_TR(0x57db49);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57db50:{NFSU2_TR(0x57db50);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57db57:{NFSU2_TR(0x57db57);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(U+2))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B57db5c:{NFSU2_TR(0x57db5c);
if(r1(R+518)){{goto L57db6a;}}
}
B57db5e:L57db5e:{c.instructions+=1;NFSU2_TR(0x57db5e);
__builtin_memmove((R+28),(R+28),4);
}
B57db60:L57db60:{c.instructions+=3;NFSU2_TR(0x57db60);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B57db63:{NFSU2_TR(0x57db63);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(U+2))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B57db68:{NFSU2_TR(0x57db68);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57db60u);}goto L57db60;}}
}
B57db6a:L57db6a:{c.instructions+=2;NFSU2_TR(0x57db6a);
u8 U[4];
w4(U+0,u32(0x7a09f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57db6f:{NFSU2_TR(0x57db6f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57db74ull));
TAIL_STATIC(0x505450u,505);
}
B57db74:L57db74:{c.instructions+=4;NFSU2_TR(0x57db74);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B57db78:{NFSU2_TR(0x57db78);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57db79:{NFSU2_TR(0x57db79);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57db7a:{NFSU2_TR(0x57db7a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57db7full));
TAIL_STATIC(0x5379c0u,537);
}
B57db7f:L57db7f:{c.instructions+=4;NFSU2_TR(0x57db7f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B57db82:{NFSU2_TR(0x57db82);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57db84:{NFSU2_TR(0x57db84);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57db87:{NFSU2_TR(0x57db87);
if(r1(R+518)){{goto L57dbbf;}}
}
B57db89:L57db89:{c.instructions+=5;NFSU2_TR(0x57db89);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57db8b:{NFSU2_TR(0x57db8b);
u8 U[4];
w4(U+0,u32(0x78ffd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57db90:{NFSU2_TR(0x57db90);
u8 U[4];
w4(U+0,u32(0x7a09e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57db95:{NFSU2_TR(0x57db95);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57db96:{NFSU2_TR(0x57db96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57db9bull));
TAIL_STATIC(0x5426c0u,542);
}
B57db9b:L57db9b:{c.instructions+=5;NFSU2_TR(0x57db9b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B57db9e:{NFSU2_TR(0x57db9e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57db9f:{NFSU2_TR(0x57db9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57dba0:{NFSU2_TR(0x57dba0);
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
B57dba3:{NFSU2_TR(0x57dba3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57dba6:L57dba6:{c.instructions+=6;NFSU2_TR(0x57dba6);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57dbaa:{NFSU2_TR(0x57dbaa);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57dbac:{NFSU2_TR(0x57dbac);
u8 U[4];
w4(U+0,u32(0x78fc44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57dbb1:{NFSU2_TR(0x57dbb1);
u8 U[4];
w4(U+0,u32(0x7a09e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57dbb6:{NFSU2_TR(0x57dbb6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57dbb7:{NFSU2_TR(0x57dbb7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57dbbcull));
TAIL_STATIC(0x5426c0u,542);
}
B57dbbc:L57dbbc:{c.instructions+=1;NFSU2_TR(0x57dbbc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B57dbbf:L57dbbf:{c.instructions+=4;NFSU2_TR(0x57dbbf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57dbc0:{NFSU2_TR(0x57dbc0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57dbc1:{NFSU2_TR(0x57dbc1);
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
B57dbc4:{NFSU2_TR(0x57dbc4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57dbd0:L57dbd0:{c.instructions+=2;NFSU2_TR(0x57dbd0);
u8 U[14];
__builtin_memmove((U+6),gp(0x864f24),4);
w1(R+512,u8((r4(U+6))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B57dbd7:{NFSU2_TR(0x57dbd7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57dc0b;}}
}
B57dbd9:L57dbd9:{c.instructions+=3;NFSU2_TR(0x57dbd9);
__builtin_memmove((R+0),gp(0x866638),4);
}
B57dbde:{NFSU2_TR(0x57dbde);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57dbe0:{NFSU2_TR(0x57dbe0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57dbfb;}}
}
B57dbe2:L57dbe2:{c.instructions+=2;NFSU2_TR(0x57dbe2);
u8 U[4];
w4(U+0,u32(0x7a094cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57dbe7:{NFSU2_TR(0x57dbe7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57dbecull));
TAIL_STATIC(0x57cac0u,57c);
}
B57dbec:L57dbec:{c.instructions+=5;NFSU2_TR(0x57dbec);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B57dbef:{NFSU2_TR(0x57dbef);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B57dbf1:{NFSU2_TR(0x57dbf1);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B57dbf3:{NFSU2_TR(0x57dbf3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B57dbf6:{NFSU2_TR(0x57dbf6);
__builtin_memmove(gp(0x866638),(R+0),4);
}
B57dbfb:L57dbfb:{c.instructions+=4;NFSU2_TR(0x57dbfb);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57dbfe:{NFSU2_TR(0x57dbfe);
__builtin_memmove((R+0),(R+518),1);
}
B57dc01:{NFSU2_TR(0x57dc01);
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
B57dc03:{NFSU2_TR(0x57dc03);
if(r1(R+518)){{goto L57dc0b;}}
}
B57dc05:L57dc05:{c.instructions+=2;NFSU2_TR(0x57dc05);
w4(R+0,u32(0x7a0a0cull));
}
B57dc0a:{NFSU2_TR(0x57dc0a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57dc0b:L57dc0b:{c.instructions+=4;NFSU2_TR(0x57dc0b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57dc0f:{NFSU2_TR(0x57dc0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B57dc12:{NFSU2_TR(0x57dc12);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7fa750ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B57dc19:{NFSU2_TR(0x57dc19);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57dc20:L57dc20:{c.instructions+=6;NFSU2_TR(0x57dc20);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57dc21:{NFSU2_TR(0x57dc21);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B57dc25:{NFSU2_TR(0x57dc25);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57dc26:{NFSU2_TR(0x57dc26);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57dc27:{NFSU2_TR(0x57dc27);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57dc28:{NFSU2_TR(0x57dc28);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57dc2dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57d900u);}goto L57d900;}
}
B57dc2d:L57dc2d:{c.instructions+=4;NFSU2_TR(0x57dc2d);
__builtin_memmove((R+28),(R+0),4);
}
B57dc2f:{NFSU2_TR(0x57dc2f);
u8 U[4];
w4(U+0,u32(0x1008ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57dc34:{NFSU2_TR(0x57dc34);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57dc35:{NFSU2_TR(0x57dc35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57dc3aull));
TAIL_STATIC(0x440820u,440);
}
B57dc3a:L57dc3a:{c.instructions+=8;NFSU2_TR(0x57dc3a);
__builtin_memmove((R+24),(R+0),4);
}
B57dc3c:{NFSU2_TR(0x57dc3c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57dc3d:{NFSU2_TR(0x57dc3d);
u8 U[4];
w4(U+0,u32(0x57a500ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57dc42:{NFSU2_TR(0x57dc42);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57dc43:{NFSU2_TR(0x57dc43);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57dc45:{NFSU2_TR(0x57dc45);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57dc46:{NFSU2_TR(0x57dc46);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57dc47:{NFSU2_TR(0x57dc47);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57dc4cull));
TAIL_STATIC(0x57b4a0u,57b);
}
B57dc4c:L57dc4c:{c.instructions+=6;NFSU2_TR(0x57dc4c);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x24ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x24ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B57dc4f:{NFSU2_TR(0x57dc4f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57dc50:{NFSU2_TR(0x57dc50);
__builtin_memmove((R+0),(R+24),4);
}
B57dc52:{NFSU2_TR(0x57dc52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57dc53:{NFSU2_TR(0x57dc53);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B57dc54:{NFSU2_TR(0x57dc54);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57dc60:L57dc60:{c.instructions+=8;NFSU2_TR(0x57dc60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B57dc63:{NFSU2_TR(0x57dc63);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57dc64:{NFSU2_TR(0x57dc64);
__builtin_memmove((R+24),(R+4),4);
}
B57dc66:{NFSU2_TR(0x57dc66);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+24)),r4(U+0));
}
B57dc68:{NFSU2_TR(0x57dc68);
__builtin_memmove((R+0),gp(0x865498),1);
}
B57dc6d:{NFSU2_TR(0x57dc6d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B57dc6f:{NFSU2_TR(0x57dc6f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57dc70:{NFSU2_TR(0x57dc70);
if(r1(R+518)){{goto L57dc79;}}
}
B57dc72:L57dc72:{c.instructions+=1;NFSU2_TR(0x57dc72);
s1(0x865498,u8(0x0ull));
}
B57dc79:L57dc79:{c.instructions+=4;NFSU2_TR(0x57dc79);
__builtin_memmove((R+4),gp(0x865484),4);
}
B57dc7f:{NFSU2_TR(0x57dc7f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57dc81:{NFSU2_TR(0x57dc81);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B57dc83:{NFSU2_TR(0x57dc83);
if(r1(R+518)){{goto L57dc8f;}}
}
B57dc85:L57dc85:{c.instructions+=1;NFSU2_TR(0x57dc85);
s4(0x865484,u32(0x0ull));
}
B57dc8f:L57dc8f:{c.instructions+=6;NFSU2_TR(0x57dc8f);
s1(0x865498,u8(0x1ull));
}
B57dc96:{NFSU2_TR(0x57dc96);
s4(0x86549c,u32(0x7a0a8cull));
}
B57dca0:{NFSU2_TR(0x57dca0);
__builtin_memmove(gp(0x8654a0),(R+0),4);
}
B57dca5:{NFSU2_TR(0x57dca5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B57dca7:{NFSU2_TR(0x57dca7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57dcaa:{NFSU2_TR(0x57dcaa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57dd41;}}
}
B57dcb0:L57dcb0:{c.instructions+=3;NFSU2_TR(0x57dcb0);
__builtin_memmove((R+0),gp(0x864fac),4);
}
B57dcb5:{NFSU2_TR(0x57dcb5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57dcb7:{NFSU2_TR(0x57dcb7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57dcbe;}}
}
B57dcb9:L57dcb9:{c.instructions+=1;NFSU2_TR(0x57dcb9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57dcbeull));
TAIL_STATIC(0x4c57c0u,4c5);
}
B57dcbe:L57dcbe:{c.instructions+=3;NFSU2_TR(0x57dcbe);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57dcbf:{NFSU2_TR(0x57dcbf);
u8 U[4];
w4(U+0,u32(0x7a0a70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57dcc4:{NFSU2_TR(0x57dcc4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57dcc9ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57d900u);}goto L57d900;}
}
B57dcc9:L57dcc9:{c.instructions+=4;NFSU2_TR(0x57dcc9);
__builtin_memmove((R+20),(R+0),4);
}
B57dccb:{NFSU2_TR(0x57dccb);
u8 U[4];
w4(U+0,u32(0x1008ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57dcd0:{NFSU2_TR(0x57dcd0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57dcd1:{NFSU2_TR(0x57dcd1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57dcd6ull));
TAIL_STATIC(0x440820u,440);
}
B57dcd6:L57dcd6:{c.instructions+=8;NFSU2_TR(0x57dcd6);
__builtin_memmove((R+28),(R+0),4);
}
B57dcd8:{NFSU2_TR(0x57dcd8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57dcd9:{NFSU2_TR(0x57dcd9);
u8 U[4];
w4(U+0,u32(0x57a500ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57dcde:{NFSU2_TR(0x57dcde);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57dcdf:{NFSU2_TR(0x57dcdf);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57dce1:{NFSU2_TR(0x57dce1);
u8 U[4];
w4(U+0,u32(0x7a0a70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57dce6:{NFSU2_TR(0x57dce6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57dce7:{NFSU2_TR(0x57dce7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57dcecull));
TAIL_STATIC(0x57b4a0u,57b);
}
B57dcec:L57dcec:{c.instructions+=6;NFSU2_TR(0x57dcec);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57dcee:{NFSU2_TR(0x57dcee);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57dcf0:{NFSU2_TR(0x57dcf0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57dcf2:{NFSU2_TR(0x57dcf2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57dcf4:{NFSU2_TR(0x57dcf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57dcf7:{NFSU2_TR(0x57dcf7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57dcfcull));
TAIL_STATIC(0x4ff780u,4ff);
}
B57dcfc:L57dcfc:{c.instructions+=6;NFSU2_TR(0x57dcfc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57dcfe:{NFSU2_TR(0x57dcfe);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57dd00:{NFSU2_TR(0x57dd00);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57dd02:{NFSU2_TR(0x57dd02);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57dd04:{NFSU2_TR(0x57dd04);
u8 U[4];
w4(U+0,u32(0x7a0a58ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57dd09:{NFSU2_TR(0x57dd09);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57dd0eull));
TAIL_STATIC(0x57cef0u,57c);
}
B57dd0e:L57dd0e:{c.instructions+=6;NFSU2_TR(0x57dd0e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x48ull))));
}
B57dd11:{NFSU2_TR(0x57dd11);
__builtin_memmove((R+28),(R+0),4);
}
B57dd13:{NFSU2_TR(0x57dd13);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57dd14:{NFSU2_TR(0x57dd14);
u8 U[4];
w4(U+0,u32(0x571140ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57dd19:{NFSU2_TR(0x57dd19);
__builtin_memmove((R+4),(R+28),4);
}
B57dd1b:{NFSU2_TR(0x57dd1b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57dd20ull));
TAIL_STATIC(0x57bd70u,57b);
}
B57dd20:L57dd20:{c.instructions+=6;NFSU2_TR(0x57dd20);
u8 U[4];
w4(U+0,u32(0x3bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57dd22:{NFSU2_TR(0x57dd22);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57dd25:{NFSU2_TR(0x57dd25);
u8 U[4];
w4(U+0,u32(0x7a0a40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57dd2a:{NFSU2_TR(0x57dd2a);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1cull))));
}
B57dd2d:{NFSU2_TR(0x57dd2d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57dd2e:{NFSU2_TR(0x57dd2e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57dd33ull));
TAIL_STATIC(0x43dc00u,43d);
}
B57dd33:L57dd33:{c.instructions+=6;NFSU2_TR(0x57dd33);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B57dd36:{NFSU2_TR(0x57dd36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B57dd37:{NFSU2_TR(0x57dd37);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57dd38:{NFSU2_TR(0x57dd38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57dd39:{NFSU2_TR(0x57dd39);
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
B57dd3c:{NFSU2_TR(0x57dd3c);
TAIL_STATIC(0x4022c0u,402);
}
B57dd41:L57dd41:{c.instructions+=2;NFSU2_TR(0x57dd41);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57dd44:{NFSU2_TR(0x57dd44);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57dd8b;}}
}
B57dd46:L57dd46:{c.instructions+=7;NFSU2_TR(0x57dd46);
__builtin_memmove((R+0),gp(0x883dac),4);
}
B57dd4b:{NFSU2_TR(0x57dd4b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
}
B57dd4e:{NFSU2_TR(0x57dd4e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57dd4f:{NFSU2_TR(0x57dd4f);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B57dd53:{NFSU2_TR(0x57dd53);
u8 U[4];
w4(U+0,u32(0x7a0a30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57dd58:{NFSU2_TR(0x57dd58);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57dd59:{NFSU2_TR(0x57dd59);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57dd5eull));
TAIL_STATIC(0x4400d0u,440);
}
B57dd5e:L57dd5e:{c.instructions+=7;NFSU2_TR(0x57dd5e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57dd60:{NFSU2_TR(0x57dd60);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57dd62:{NFSU2_TR(0x57dd62);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57dd64:{NFSU2_TR(0x57dd64);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B57dd68:{NFSU2_TR(0x57dd68);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57dd6a:{NFSU2_TR(0x57dd6a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57dd6b:{NFSU2_TR(0x57dd6b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57dd70ull));
TAIL_STATIC(0x57cef0u,57c);
}
B57dd70:L57dd70:{c.instructions+=6;NFSU2_TR(0x57dd70);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B57dd73:{NFSU2_TR(0x57dd73);
__builtin_memmove((R+28),(R+0),4);
}
B57dd75:{NFSU2_TR(0x57dd75);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57dd76:{NFSU2_TR(0x57dd76);
u8 U[4];
w4(U+0,u32(0x571140ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57dd7b:{NFSU2_TR(0x57dd7b);
__builtin_memmove((R+4),(R+28),4);
}
B57dd7d:{NFSU2_TR(0x57dd7d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57dd82ull));
TAIL_STATIC(0x57bd70u,57b);
}
B57dd82:L57dd82:{c.instructions+=5;NFSU2_TR(0x57dd82);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57dd85:{NFSU2_TR(0x57dd85);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57dd86:{NFSU2_TR(0x57dd86);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57dd87:{NFSU2_TR(0x57dd87);
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
B57dd8a:{NFSU2_TR(0x57dd8a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57dd8b:L57dd8b:{c.instructions+=2;NFSU2_TR(0x57dd8b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57dd8e:{NFSU2_TR(0x57dd8e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57dda4;}}
}
B57dd90:L57dd90:{c.instructions+=3;NFSU2_TR(0x57dd90);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57dd91:{NFSU2_TR(0x57dd91);
u8 U[4];
w4(U+0,u32(0x571140ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57dd96:{NFSU2_TR(0x57dd96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57dd9bull));
TAIL_STATIC(0x486ea0u,486);
}
B57dd9b:L57dd9b:{c.instructions+=5;NFSU2_TR(0x57dd9b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B57dd9e:{NFSU2_TR(0x57dd9e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57dd9f:{NFSU2_TR(0x57dd9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57dda0:{NFSU2_TR(0x57dda0);
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
B57dda3:{NFSU2_TR(0x57dda3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57dda4:L57dda4:{c.instructions+=2;NFSU2_TR(0x57dda4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57dda7:{NFSU2_TR(0x57dda7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57ddd7;}}
}
B57dda9:L57dda9:{c.instructions+=7;NFSU2_TR(0x57dda9);
__builtin_memmove((R+0),gp(0x883dac),4);
}
B57ddae:{NFSU2_TR(0x57ddae);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57ddb1:{NFSU2_TR(0x57ddb1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ddb2:{NFSU2_TR(0x57ddb2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57ddb5:{NFSU2_TR(0x57ddb5);
u8 U[4];
w4(U+0,u32(0x7a0a18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ddba:{NFSU2_TR(0x57ddba);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ddbb:{NFSU2_TR(0x57ddbb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57ddc0ull));
TAIL_STATIC(0x4400d0u,440);
}
B57ddc0:L57ddc0:{c.instructions+=5;NFSU2_TR(0x57ddc0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ddc2:{NFSU2_TR(0x57ddc2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ddc3:{NFSU2_TR(0x57ddc3);
u8 U[4];
w4(U+0,u32(0x571140ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ddc8:{NFSU2_TR(0x57ddc8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ddc9:{NFSU2_TR(0x57ddc9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57ddceull));
TAIL_STATIC(0x4944d0u,494);
}
B57ddce:L57ddce:{c.instructions+=5;NFSU2_TR(0x57ddce);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B57ddd1:{NFSU2_TR(0x57ddd1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57ddd2:{NFSU2_TR(0x57ddd2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57ddd3:{NFSU2_TR(0x57ddd3);
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
B57ddd6:{NFSU2_TR(0x57ddd6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57ddd7:L57ddd7:{c.instructions+=2;NFSU2_TR(0x57ddd7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57ddda:{NFSU2_TR(0x57ddda);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57ddea;}}
}
B57dddc:L57dddc:{c.instructions+=3;NFSU2_TR(0x57dddc);
__builtin_memmove((R+4),(R+24),4);
}
B57ddde:{NFSU2_TR(0x57ddde);
s1(0x865498,u8(0x0ull));
}
B57dde5:{NFSU2_TR(0x57dde5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57ddeaull));
TAIL_STATIC(0x57a580u,57a);
}
B57ddea:L57ddea:{c.instructions+=4;NFSU2_TR(0x57ddea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57ddeb:{NFSU2_TR(0x57ddeb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57ddec:{NFSU2_TR(0x57ddec);
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
B57ddef:{NFSU2_TR(0x57ddef);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57ddf0:L57ddf0:{c.instructions+=3;NFSU2_TR(0x57ddf0);
__builtin_memmove((R+0),gp(0x8650d4),4);
}
B57ddf5:{NFSU2_TR(0x57ddf5);
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
B57ddf7:{NFSU2_TR(0x57ddf7);
if(r1(R+518)){TAIL_STATIC(0x57e0fbu,57e);}
}
B57ddfd:L57ddfd:{c.instructions+=6;NFSU2_TR(0x57ddfd);
__builtin_memmove((R+0),gp(0x864fac),4);
}
B57de02:{NFSU2_TR(0x57de02);
__builtin_memmove((R+4),gp(0x8650dc),4);
}
B57de08:{NFSU2_TR(0x57de08);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57de0a:{NFSU2_TR(0x57de0a);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57de0c:{NFSU2_TR(0x57de0c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57de0d:{NFSU2_TR(0x57de0d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57de12ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57d5b0u);}goto L57d5b0;}
}
B57de12:L57de12:{c.instructions+=3;NFSU2_TR(0x57de12);
__builtin_memmove((R+0),gp(0x8650d4),4);
}
B57de17:{NFSU2_TR(0x57de17);
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
B57de19:{NFSU2_TR(0x57de19);
if(r1(R+518)){TAIL_STATIC(0x57e0fbu,57e);}
}
B57de1f:L57de1f:{c.instructions+=6;NFSU2_TR(0x57de1f);
__builtin_memmove((R+4),gp(0x7faa18),4);
}
B57de25:{NFSU2_TR(0x57de25);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57de27:{NFSU2_TR(0x57de27);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57de29:{NFSU2_TR(0x57de29);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57de2a:{NFSU2_TR(0x57de2a);
__builtin_memmove((R+4),gp(0x8650dc),4);
}
B57de30:{NFSU2_TR(0x57de30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57de35ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57d5b0u);}goto L57d5b0;}
}
B57de35:L57de35:{c.instructions+=3;NFSU2_TR(0x57de35);
__builtin_memmove((R+0),gp(0x8650d4),4);
}
B57de3a:{NFSU2_TR(0x57de3a);
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
B57de3c:{NFSU2_TR(0x57de3c);
if(r1(R+518)){TAIL_STATIC(0x57e0fbu,57e);}
}
B57de42:L57de42:{c.instructions+=6;NFSU2_TR(0x57de42);
__builtin_memmove((R+8),gp(0x7faa1c),4);
}
B57de48:{NFSU2_TR(0x57de48);
__builtin_memmove((R+4),gp(0x8650dc),4);
}
B57de4e:{NFSU2_TR(0x57de4e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57de50:{NFSU2_TR(0x57de50);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57de52:{NFSU2_TR(0x57de52);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57de53:{NFSU2_TR(0x57de53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57de58ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57d5b0u);}goto L57d5b0;}
}
B57de58:L57de58:{c.instructions+=3;NFSU2_TR(0x57de58);
__builtin_memmove((R+0),gp(0x8650d4),4);
}
B57de5d:{NFSU2_TR(0x57de5d);
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
B57de5f:{NFSU2_TR(0x57de5f);
if(r1(R+518)){TAIL_STATIC(0x57e0fbu,57e);}
}
B57de65:L57de65:{c.instructions+=6;NFSU2_TR(0x57de65);
__builtin_memmove((R+0),gp(0x864fb0),4);
}
B57de6a:{NFSU2_TR(0x57de6a);
__builtin_memmove((R+4),gp(0x8650dc),4);
}
B57de70:{NFSU2_TR(0x57de70);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57de72:{NFSU2_TR(0x57de72);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57de74:{NFSU2_TR(0x57de74);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57de75:{NFSU2_TR(0x57de75);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57de7aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57d5b0u);}goto L57d5b0;}
}
B57de7a:L57de7a:{c.instructions+=3;NFSU2_TR(0x57de7a);
__builtin_memmove((R+0),gp(0x8650d4),4);
}
B57de7f:{NFSU2_TR(0x57de7f);
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
B57de81:{NFSU2_TR(0x57de81);
if(r1(R+518)){TAIL_STATIC(0x57e0fbu,57e);}
}
B57de87:L57de87:{c.instructions+=6;NFSU2_TR(0x57de87);
__builtin_memmove((R+4),gp(0x7faa20),4);
}
B57de8d:{NFSU2_TR(0x57de8d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57de8f:{NFSU2_TR(0x57de8f);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57de91:{NFSU2_TR(0x57de91);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57de92:{NFSU2_TR(0x57de92);
__builtin_memmove((R+4),gp(0x8650dc),4);
}
B57de98:{NFSU2_TR(0x57de98);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57de9dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57d5b0u);}goto L57d5b0;}
}
B57de9d:L57de9d:{c.instructions+=3;NFSU2_TR(0x57de9d);
__builtin_memmove((R+0),gp(0x8650d4),4);
}
B57dea2:{NFSU2_TR(0x57dea2);
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
B57dea4:{NFSU2_TR(0x57dea4);
if(r1(R+518)){TAIL_STATIC(0x57e0fbu,57e);}
}
B57deaa:L57deaa:{c.instructions+=6;NFSU2_TR(0x57deaa);
__builtin_memmove((R+8),gp(0x864fb4),4);
}
B57deb0:{NFSU2_TR(0x57deb0);
__builtin_memmove((R+4),gp(0x8650dc),4);
}
B57deb6:{NFSU2_TR(0x57deb6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57deb8:{NFSU2_TR(0x57deb8);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57deba:{NFSU2_TR(0x57deba);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57debb:{NFSU2_TR(0x57debb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57dec0ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57d5b0u);}goto L57d5b0;}
}
B57dec0:L57dec0:{c.instructions+=3;NFSU2_TR(0x57dec0);
__builtin_memmove((R+0),gp(0x8650d4),4);
}
B57dec5:{NFSU2_TR(0x57dec5);
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
B57dec7:{NFSU2_TR(0x57dec7);
if(r1(R+518)){TAIL_STATIC(0x57e0fbu,57e);}
}
B57decd:L57decd:{c.instructions+=6;NFSU2_TR(0x57decd);
__builtin_memmove((R+0),gp(0x7faa28),4);
}
B57ded2:{NFSU2_TR(0x57ded2);
__builtin_memmove((R+4),gp(0x8650dc),4);
}
B57ded8:{NFSU2_TR(0x57ded8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57deda:{NFSU2_TR(0x57deda);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57dedc:{NFSU2_TR(0x57dedc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57dedd:{NFSU2_TR(0x57dedd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57dee2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57d5b0u);}goto L57d5b0;}
}
B57dee2:L57dee2:{c.instructions+=3;NFSU2_TR(0x57dee2);
__builtin_memmove((R+0),gp(0x8650d4),4);
}
B57dee7:{NFSU2_TR(0x57dee7);
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
B57dee9:{NFSU2_TR(0x57dee9);
if(r1(R+518)){TAIL_STATIC(0x57e0fbu,57e);}
}
B57deef:L57deef:{c.instructions+=6;NFSU2_TR(0x57deef);
__builtin_memmove((R+4),gp(0x864fbc),4);
}
B57def5:{NFSU2_TR(0x57def5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57def7:{NFSU2_TR(0x57def7);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57def9:{NFSU2_TR(0x57def9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57defa:{NFSU2_TR(0x57defa);
__builtin_memmove((R+4),gp(0x8650dc),4);
}
B57df00:{NFSU2_TR(0x57df00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57df05ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57d5b0u);}goto L57d5b0;}
}
B57df05:L57df05:{c.instructions+=3;NFSU2_TR(0x57df05);
__builtin_memmove((R+0),gp(0x8650d4),4);
}
B57df0a:{NFSU2_TR(0x57df0a);
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
B57df0c:{NFSU2_TR(0x57df0c);
if(r1(R+518)){TAIL_STATIC(0x57e0fbu,57e);}
}
B57df12:L57df12:{c.instructions+=6;NFSU2_TR(0x57df12);
__builtin_memmove((R+8),gp(0x7faa30),4);
}
B57df18:{NFSU2_TR(0x57df18);
__builtin_memmove((R+4),gp(0x8650dc),4);
}
B57df1e:{NFSU2_TR(0x57df1e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57df20:{NFSU2_TR(0x57df20);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57df22:{NFSU2_TR(0x57df22);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57df23:{NFSU2_TR(0x57df23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57df28ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57d5b0u);}goto L57d5b0;}
}
B57df28:L57df28:{c.instructions+=3;NFSU2_TR(0x57df28);
__builtin_memmove((R+0),gp(0x8650d4),4);
}
B57df2d:{NFSU2_TR(0x57df2d);
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
B57df2f:{NFSU2_TR(0x57df2f);
if(r1(R+518)){TAIL_STATIC(0x57e0fbu,57e);}
}
B57df35:L57df35:{c.instructions+=6;NFSU2_TR(0x57df35);
__builtin_memmove((R+0),gp(0x7faa34),4);
}
B57df3a:{NFSU2_TR(0x57df3a);
__builtin_memmove((R+4),gp(0x8650dc),4);
}
B57df40:{NFSU2_TR(0x57df40);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57df42:{NFSU2_TR(0x57df42);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57df44:{NFSU2_TR(0x57df44);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57df45:{NFSU2_TR(0x57df45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57df4aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57d5b0u);}goto L57d5b0;}
}
B57df4a:L57df4a:{c.instructions+=3;NFSU2_TR(0x57df4a);
__builtin_memmove((R+0),gp(0x8650d4),4);
}
B57df4f:{NFSU2_TR(0x57df4f);
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
B57df51:{NFSU2_TR(0x57df51);
if(r1(R+518)){TAIL_STATIC(0x57e0fbu,57e);}
}
B57df57:L57df57:{c.instructions+=6;NFSU2_TR(0x57df57);
__builtin_memmove((R+4),gp(0x7faa38),4);
}
B57df5d:{NFSU2_TR(0x57df5d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57df5f:{NFSU2_TR(0x57df5f);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57df61:{NFSU2_TR(0x57df61);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57df62:{NFSU2_TR(0x57df62);
__builtin_memmove((R+4),gp(0x8650dc),4);
}
B57df68:{NFSU2_TR(0x57df68);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57df6dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57d5b0u);}goto L57d5b0;}
}
B57df6d:L57df6d:{c.instructions+=3;NFSU2_TR(0x57df6d);
__builtin_memmove((R+0),gp(0x8650d4),4);
}
B57df72:{NFSU2_TR(0x57df72);
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
B57df74:{NFSU2_TR(0x57df74);
if(r1(R+518)){TAIL_STATIC(0x57e0fbu,57e);}
}
B57df7a:L57df7a:{c.instructions+=6;NFSU2_TR(0x57df7a);
__builtin_memmove((R+8),gp(0x7faa48),4);
}
B57df80:{NFSU2_TR(0x57df80);
__builtin_memmove((R+4),gp(0x8650dc),4);
}
B57df86:{NFSU2_TR(0x57df86);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57df88:{NFSU2_TR(0x57df88);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57df8a:{NFSU2_TR(0x57df8a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57df8b:{NFSU2_TR(0x57df8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57df90ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57d5b0u);}goto L57d5b0;}
}
B57df90:L57df90:{c.instructions+=3;NFSU2_TR(0x57df90);
__builtin_memmove((R+0),gp(0x8650d4),4);
}
B57df95:{NFSU2_TR(0x57df95);
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
B57df97:{NFSU2_TR(0x57df97);
if(r1(R+518)){TAIL_STATIC(0x57e0fbu,57e);}
}
B57df9d:L57df9d:{c.instructions+=6;NFSU2_TR(0x57df9d);
__builtin_memmove((R+0),gp(0x7faa4c),4);
}
B57dfa2:{NFSU2_TR(0x57dfa2);
__builtin_memmove((R+4),gp(0x8650dc),4);
}
B57dfa8:{NFSU2_TR(0x57dfa8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57dfaa:{NFSU2_TR(0x57dfaa);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57dfac:{NFSU2_TR(0x57dfac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57dfad:{NFSU2_TR(0x57dfad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57dfb2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57d5b0u);}goto L57d5b0;}
}
B57dfb2:L57dfb2:{c.instructions+=3;NFSU2_TR(0x57dfb2);
__builtin_memmove((R+0),gp(0x8650d4),4);
}
B57dfb7:{NFSU2_TR(0x57dfb7);
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
B57dfb9:{NFSU2_TR(0x57dfb9);
if(r1(R+518)){TAIL_STATIC(0x57e0fbu,57e);}
}
B57dfbf:L57dfbf:{c.instructions+=6;NFSU2_TR(0x57dfbf);
__builtin_memmove((R+4),gp(0x7faa54),4);
}
B57dfc5:{NFSU2_TR(0x57dfc5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57dfc7:{NFSU2_TR(0x57dfc7);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57dfc9:{NFSU2_TR(0x57dfc9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57dfca:{NFSU2_TR(0x57dfca);
__builtin_memmove((R+4),gp(0x8650dc),4);
}
B57dfd0:{NFSU2_TR(0x57dfd0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57dfd5ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57d5b0u);}goto L57d5b0;}
}
B57dfd5:L57dfd5:{c.instructions+=3;NFSU2_TR(0x57dfd5);
__builtin_memmove((R+0),gp(0x8650d4),4);
}
B57dfda:{NFSU2_TR(0x57dfda);
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
B57dfdc:{NFSU2_TR(0x57dfdc);
if(r1(R+518)){TAIL_STATIC(0x57e0fbu,57e);}
}
B57dfe2:L57dfe2:{c.instructions+=6;NFSU2_TR(0x57dfe2);
__builtin_memmove((R+8),gp(0x7faa58),4);
}
B57dfe8:{NFSU2_TR(0x57dfe8);
__builtin_memmove((R+4),gp(0x8650dc),4);
}
B57dfee:{NFSU2_TR(0x57dfee);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57dff0:{NFSU2_TR(0x57dff0);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57dff2:{NFSU2_TR(0x57dff2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57dff3:{NFSU2_TR(0x57dff3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57dff8ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57d5b0u);}goto L57d5b0;}
}
B57dff8:L57dff8:{c.instructions+=3;NFSU2_TR(0x57dff8);
__builtin_memmove((R+0),gp(0x8650d4),4);
}
B57dffd:{NFSU2_TR(0x57dffd);
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
B57dfff:{NFSU2_TR(0x57dfff);
if(r1(R+518)){TAIL_STATIC(0x57e0fbu,57e);}
TAIL_STATIC(0x57e005u,57e);
}
XIT:NFSU2_TR_EXIT(0x57d,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
