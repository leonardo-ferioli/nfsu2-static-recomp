#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_75e(u8* __restrict R,Cpu& c);
u32 body_760(u8* __restrict R,Cpu& c);
u32 body_761(u8* __restrict R,Cpu& c);
u32 body_762(u8* __restrict R,Cpu& c);
u32 body_763(u8* __restrict R,Cpu& c);
u32 body_766(u8* __restrict R,Cpu& c);
u32 body_768(u8* __restrict R,Cpu& c);
u32 body_76a(u8* __restrict R,Cpu& c);
u32 body_76b(u8* __restrict R,Cpu& c);
u32 body_76c(u8* __restrict R,Cpu& c);
u32 body_76e(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x76d,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x76d,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_76d(u8* __restrict R,Cpu& c);
u32 page_76d(Cpu& c){return body_76d(c.regs.data(),c);}
__attribute__((noinline)) u32 body_76d(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x76d002:goto L76d002;
case 0x76d004:goto L76d004;
case 0x76d007:goto L76d007;
case 0x76d00a:c.instructions+=1;goto B76d00a;
case 0x76d00c:goto L76d00c;
case 0x76d00f:goto L76d00f;
case 0x76d014:c.instructions+=1;goto B76d014;
case 0x76d016:goto L76d016;
case 0x76d01b:c.instructions+=1;goto B76d01b;
case 0x76d01d:goto L76d01d;
case 0x76d020:c.instructions+=4;goto B76d020;
case 0x76d021:c.instructions+=3;goto B76d021;
case 0x76d024:c.instructions+=2;goto B76d024;
case 0x76d025:c.instructions+=1;goto B76d025;
case 0x76d02a:goto L76d02a;
case 0x76d02d:c.instructions+=5;goto B76d02d;
case 0x76d030:c.instructions+=4;goto B76d030;
case 0x76d033:c.instructions+=3;goto B76d033;
case 0x76d036:c.instructions+=2;goto B76d036;
case 0x76d039:c.instructions+=1;goto B76d039;
case 0x76d03b:goto L76d03b;
case 0x76d042:c.instructions+=1;goto B76d042;
case 0x76d044:goto L76d044;
case 0x76d046:c.instructions+=5;goto B76d046;
case 0x76d04b:c.instructions+=4;goto B76d04b;
case 0x76d050:c.instructions+=3;goto B76d050;
case 0x76d052:c.instructions+=2;goto B76d052;
case 0x76d059:c.instructions+=1;goto B76d059;
case 0x76d05b:goto L76d05b;
case 0x76d062:goto L76d062;
case 0x76d064:c.instructions+=3;goto B76d064;
case 0x76d066:c.instructions+=2;goto B76d066;
case 0x76d068:c.instructions+=1;goto B76d068;
case 0x76d06a:goto L76d06a;
case 0x76d06d:c.instructions+=12;goto B76d06d;
case 0x76d070:c.instructions+=11;goto B76d070;
case 0x76d073:c.instructions+=10;goto B76d073;
case 0x76d076:c.instructions+=9;goto B76d076;
case 0x76d07a:c.instructions+=8;goto B76d07a;
case 0x76d07d:c.instructions+=7;goto B76d07d;
case 0x76d080:c.instructions+=6;goto B76d080;
case 0x76d083:c.instructions+=5;goto B76d083;
case 0x76d086:c.instructions+=4;goto B76d086;
case 0x76d087:c.instructions+=3;goto B76d087;
case 0x76d088:c.instructions+=2;goto B76d088;
case 0x76d089:c.instructions+=1;goto B76d089;
case 0x76d08e:goto L76d08e;
case 0x76d08f:c.instructions+=1;goto B76d08f;
case 0x76d0c0:goto L76d0c0;
case 0x76d0c1:c.instructions+=12;goto B76d0c1;
case 0x76d0c3:c.instructions+=11;goto B76d0c3;
case 0x76d0c6:c.instructions+=10;goto B76d0c6;
case 0x76d0cb:c.instructions+=9;goto B76d0cb;
case 0x76d0ce:c.instructions+=8;goto B76d0ce;
case 0x76d0d2:c.instructions+=7;goto B76d0d2;
case 0x76d0d4:c.instructions+=6;goto B76d0d4;
case 0x76d0d7:c.instructions+=5;goto B76d0d7;
case 0x76d0da:c.instructions+=4;goto B76d0da;
case 0x76d0db:c.instructions+=3;goto B76d0db;
case 0x76d0e0:c.instructions+=2;goto B76d0e0;
case 0x76d0e3:c.instructions+=1;goto B76d0e3;
case 0x76d0e9:goto L76d0e9;
case 0x76d0eb:c.instructions+=1;goto B76d0eb;
case 0x76d0ed:goto L76d0ed;
case 0x76d0f0:c.instructions+=1;goto B76d0f0;
case 0x76d0f2:goto L76d0f2;
case 0x76d0f5:c.instructions+=2;goto B76d0f5;
case 0x76d0f6:c.instructions+=1;goto B76d0f6;
case 0x76d0fb:goto L76d0fb;
case 0x76d0fc:goto L76d0fc;
case 0x76d0ff:c.instructions+=2;goto B76d0ff;
case 0x76d102:c.instructions+=1;goto B76d102;
case 0x76d107:goto L76d107;
case 0x76d108:c.instructions+=1;goto B76d108;
case 0x76d109:goto L76d109;
case 0x76d10b:c.instructions+=2;goto B76d10b;
case 0x76d110:c.instructions+=1;goto B76d110;
case 0x76d115:goto L76d115;
case 0x76d11a:c.instructions+=12;goto B76d11a;
case 0x76d11d:c.instructions+=11;goto B76d11d;
case 0x76d120:c.instructions+=10;goto B76d120;
case 0x76d122:c.instructions+=9;goto B76d122;
case 0x76d125:c.instructions+=8;goto B76d125;
case 0x76d128:c.instructions+=7;goto B76d128;
case 0x76d12b:c.instructions+=6;goto B76d12b;
case 0x76d12d:c.instructions+=5;goto B76d12d;
case 0x76d130:c.instructions+=4;goto B76d130;
case 0x76d133:c.instructions+=3;goto B76d133;
case 0x76d136:c.instructions+=2;goto B76d136;
case 0x76d139:c.instructions+=1;goto B76d139;
case 0x76d13f:goto L76d13f;
case 0x76d142:c.instructions+=4;goto B76d142;
case 0x76d143:c.instructions+=3;goto B76d143;
case 0x76d144:c.instructions+=2;goto B76d144;
case 0x76d14a:c.instructions+=1;goto B76d14a;
case 0x76d14c:goto L76d14c;
case 0x76d14e:c.instructions+=1;goto B76d14e;
case 0x76d150:goto L76d150;
case 0x76d154:c.instructions+=1;goto B76d154;
case 0x76d156:goto L76d156;
case 0x76d159:c.instructions+=3;goto B76d159;
case 0x76d15a:c.instructions+=2;goto B76d15a;
case 0x76d15d:c.instructions+=1;goto B76d15d;
case 0x76d15f:goto L76d15f;
case 0x76d161:c.instructions+=1;goto B76d161;
case 0x76d163:goto L76d163;
case 0x76d167:c.instructions+=1;goto B76d167;
case 0x76d169:goto L76d169;
case 0x76d170:goto L76d170;
case 0x76d173:c.instructions+=1;goto B76d173;
case 0x76d175:goto L76d175;
case 0x76d178:c.instructions+=1;goto B76d178;
case 0x76d17a:goto L76d17a;
case 0x76d17c:c.instructions+=1;goto B76d17c;
case 0x76d17e:goto L76d17e;
case 0x76d181:c.instructions+=1;goto B76d181;
case 0x76d186:goto L76d186;
case 0x76d187:c.instructions+=2;goto B76d187;
case 0x76d189:c.instructions+=1;goto B76d189;
case 0x76d18a:goto L76d18a;
case 0x76d18d:c.instructions+=1;goto B76d18d;
case 0x76d18f:goto L76d18f;
case 0x76d192:goto L76d192;
case 0x76d195:c.instructions+=1;goto B76d195;
case 0x76d197:goto L76d197;
case 0x76d198:c.instructions+=6;goto B76d198;
case 0x76d199:c.instructions+=5;goto B76d199;
case 0x76d19a:c.instructions+=4;goto B76d19a;
case 0x76d19d:c.instructions+=3;goto B76d19d;
case 0x76d19f:c.instructions+=2;goto B76d19f;
case 0x76d1a2:c.instructions+=1;goto B76d1a2;
case 0x76d1a8:goto L76d1a8;
case 0x76d1aa:c.instructions+=3;goto B76d1aa;
case 0x76d1ad:c.instructions+=2;goto B76d1ad;
case 0x76d1af:c.instructions+=1;goto B76d1af;
case 0x76d1b1:goto L76d1b1;
case 0x76d1b4:c.instructions+=4;goto B76d1b4;
case 0x76d1b7:c.instructions+=3;goto B76d1b7;
case 0x76d1ba:c.instructions+=2;goto B76d1ba;
case 0x76d1bd:c.instructions+=1;goto B76d1bd;
case 0x76d1c2:goto L76d1c2;
case 0x76d1c5:c.instructions+=7;goto B76d1c5;
case 0x76d1c7:c.instructions+=6;goto B76d1c7;
case 0x76d1ca:c.instructions+=5;goto B76d1ca;
case 0x76d1cd:c.instructions+=4;goto B76d1cd;
case 0x76d1ce:c.instructions+=3;goto B76d1ce;
case 0x76d1cf:c.instructions+=2;goto B76d1cf;
case 0x76d1d0:c.instructions+=1;goto B76d1d0;
case 0x76d1d5:goto L76d1d5;
case 0x76d1d8:c.instructions+=2;goto B76d1d8;
case 0x76d1dc:c.instructions+=1;goto B76d1dc;
case 0x76d1de:goto L76d1de;
case 0x76d1e0:c.instructions+=2;goto B76d1e0;
case 0x76d1e1:c.instructions+=1;goto B76d1e1;
case 0x76d1e2:goto L76d1e2;
case 0x76d1e5:c.instructions+=1;goto B76d1e5;
case 0x76d1ea:goto L76d1ea;
case 0x76d1ec:c.instructions+=3;goto B76d1ec;
case 0x76d1ee:c.instructions+=2;goto B76d1ee;
case 0x76d1f2:c.instructions+=1;goto B76d1f2;
case 0x76d1f5:goto L76d1f5;
case 0x76d1f7:c.instructions+=1;goto B76d1f7;
case 0x76d1f9:goto L76d1f9;
case 0x76d1fa:c.instructions+=2;goto B76d1fa;
case 0x76d1fc:c.instructions+=1;goto B76d1fc;
case 0x76d201:goto L76d201;
case 0x76d202:c.instructions+=4;goto B76d202;
case 0x76d203:c.instructions+=3;goto B76d203;
case 0x76d205:c.instructions+=2;goto B76d205;
case 0x76d207:c.instructions+=1;goto B76d207;
case 0x76d209:goto L76d209;
case 0x76d20b:c.instructions+=1;goto B76d20b;
case 0x76d210:goto L76d210;
case 0x76d217:goto L76d217;
case 0x76d218:c.instructions+=6;goto B76d218;
case 0x76d219:c.instructions+=5;goto B76d219;
case 0x76d21c:c.instructions+=4;goto B76d21c;
case 0x76d21f:c.instructions+=3;goto B76d21f;
case 0x76d221:c.instructions+=2;goto B76d221;
case 0x76d224:c.instructions+=1;goto B76d224;
case 0x76d22a:goto L76d22a;
case 0x76d22c:c.instructions+=1;goto B76d22c;
case 0x76d232:goto L76d232;
case 0x76d235:c.instructions+=1;goto B76d235;
case 0x76d237:goto L76d237;
case 0x76d238:c.instructions+=8;goto B76d238;
case 0x76d239:c.instructions+=7;goto B76d239;
case 0x76d23c:c.instructions+=6;goto B76d23c;
case 0x76d23f:c.instructions+=5;goto B76d23f;
case 0x76d240:c.instructions+=4;goto B76d240;
case 0x76d241:c.instructions+=3;goto B76d241;
case 0x76d242:c.instructions+=2;goto B76d242;
case 0x76d245:c.instructions+=1;goto B76d245;
case 0x76d24b:goto L76d24b;
case 0x76d24d:c.instructions+=1;goto B76d24d;
case 0x76d24f:goto L76d24f;
case 0x76d252:c.instructions+=2;goto B76d252;
case 0x76d255:c.instructions+=1;goto B76d255;
case 0x76d257:goto L76d257;
case 0x76d25a:c.instructions+=1;goto B76d25a;
case 0x76d25c:goto L76d25c;
case 0x76d25d:c.instructions+=8;goto B76d25d;
case 0x76d25e:c.instructions+=7;goto B76d25e;
case 0x76d25f:c.instructions+=6;goto B76d25f;
case 0x76d260:c.instructions+=5;goto B76d260;
case 0x76d261:c.instructions+=4;goto B76d261;
case 0x76d262:c.instructions+=3;goto B76d262;
case 0x76d263:c.instructions+=2;goto B76d263;
case 0x76d266:c.instructions+=1;goto B76d266;
case 0x76d26c:goto L76d26c;
case 0x76d26e:c.instructions+=2;goto B76d26e;
case 0x76d270:c.instructions+=1;goto B76d270;
case 0x76d272:goto L76d272;
case 0x76d273:c.instructions+=2;goto B76d273;
case 0x76d275:c.instructions+=1;goto B76d275;
case 0x76d27a:goto L76d27a;
case 0x76d27b:c.instructions+=4;goto B76d27b;
case 0x76d27c:c.instructions+=3;goto B76d27c;
case 0x76d27f:c.instructions+=2;goto B76d27f;
case 0x76d281:c.instructions+=1;goto B76d281;
case 0x76d283:goto L76d283;
case 0x76d284:c.instructions+=8;goto B76d284;
case 0x76d285:c.instructions+=7;goto B76d285;
case 0x76d286:c.instructions+=6;goto B76d286;
case 0x76d287:c.instructions+=5;goto B76d287;
case 0x76d288:c.instructions+=4;goto B76d288;
case 0x76d289:c.instructions+=3;goto B76d289;
case 0x76d28a:c.instructions+=2;goto B76d28a;
case 0x76d28d:c.instructions+=1;goto B76d28d;
case 0x76d293:goto L76d293;
case 0x76d295:c.instructions+=1;goto B76d295;
case 0x76d297:goto L76d297;
case 0x76d29a:c.instructions+=1;goto B76d29a;
case 0x76d29f:goto L76d29f;
case 0x76d2a0:c.instructions+=2;goto B76d2a0;
case 0x76d2a3:c.instructions+=1;goto B76d2a3;
case 0x76d2a5:goto L76d2a5;
case 0x76d2a9:c.instructions+=1;goto B76d2a9;
case 0x76d2ab:goto L76d2ab;
case 0x76d2ae:c.instructions+=2;goto B76d2ae;
case 0x76d2b0:c.instructions+=1;goto B76d2b0;
case 0x76d2b2:goto L76d2b2;
case 0x76d2b5:goto L76d2b5;
case 0x76d2b8:c.instructions+=1;goto B76d2b8;
case 0x76d2ba:goto L76d2ba;
case 0x76d2bb:c.instructions+=1;goto B76d2bb;
case 0x76d2c0:goto L76d2c0;
case 0x76d2c1:goto L76d2c1;
case 0x76d2c4:goto L76d2c4;
case 0x76d2c7:c.instructions+=3;goto B76d2c7;
case 0x76d2ca:c.instructions+=2;goto B76d2ca;
case 0x76d2cd:c.instructions+=1;goto B76d2cd;
case 0x76d2d2:goto L76d2d2;
case 0x76d2d7:goto L76d2d7;
case 0x76d2d8:goto L76d2d8;
case 0x76d2d9:c.instructions+=8;goto B76d2d9;
case 0x76d2db:c.instructions+=7;goto B76d2db;
case 0x76d2de:c.instructions+=6;goto B76d2de;
case 0x76d2df:c.instructions+=5;goto B76d2df;
case 0x76d2e0:c.instructions+=4;goto B76d2e0;
case 0x76d2e1:c.instructions+=3;goto B76d2e1;
case 0x76d2e3:c.instructions+=2;goto B76d2e3;
case 0x76d2e4:c.instructions+=1;goto B76d2e4;
case 0x76d2e9:goto L76d2e9;
case 0x76d2eb:c.instructions+=5;goto B76d2eb;
case 0x76d2ed:c.instructions+=4;goto B76d2ed;
case 0x76d2f0:c.instructions+=3;goto B76d2f0;
case 0x76d2f1:c.instructions+=2;goto B76d2f1;
case 0x76d2f2:c.instructions+=1;goto B76d2f2;
case 0x76d2f8:goto L76d2f8;
case 0x76d2fa:c.instructions+=1;goto B76d2fa;
case 0x76d2fc:goto L76d2fc;
case 0x76d2ff:c.instructions+=3;goto B76d2ff;
case 0x76d302:c.instructions+=2;goto B76d302;
case 0x76d303:c.instructions+=1;goto B76d303;
case 0x76d309:goto L76d309;
case 0x76d30c:c.instructions+=15;goto B76d30c;
case 0x76d30f:c.instructions+=14;goto B76d30f;
case 0x76d311:c.instructions+=13;goto B76d311;
case 0x76d313:c.instructions+=12;goto B76d313;
case 0x76d315:c.instructions+=11;goto B76d315;
case 0x76d318:c.instructions+=10;goto B76d318;
case 0x76d31d:c.instructions+=9;goto B76d31d;
case 0x76d31f:c.instructions+=8;goto B76d31f;
case 0x76d320:c.instructions+=7;goto B76d320;
case 0x76d322:c.instructions+=6;goto B76d322;
case 0x76d324:c.instructions+=5;goto B76d324;
case 0x76d32a:c.instructions+=4;goto B76d32a;
case 0x76d330:c.instructions+=3;goto B76d330;
case 0x76d332:c.instructions+=2;goto B76d332;
case 0x76d334:c.instructions+=1;goto B76d334;
case 0x76d336:goto L76d336;
case 0x76d339:c.instructions+=1;goto B76d339;
case 0x76d33b:goto L76d33b;
case 0x76d33d:c.instructions+=1;goto B76d33d;
case 0x76d342:goto L76d342;
case 0x76d344:c.instructions+=4;goto B76d344;
case 0x76d347:c.instructions+=3;goto B76d347;
case 0x76d348:c.instructions+=2;goto B76d348;
case 0x76d349:c.instructions+=1;goto B76d349;
case 0x76d34f:goto L76d34f;
case 0x76d351:c.instructions+=1;goto B76d351;
case 0x76d353:goto L76d353;
case 0x76d356:c.instructions+=2;goto B76d356;
case 0x76d359:c.instructions+=1;goto B76d359;
case 0x76d35b:goto L76d35b;
case 0x76d35f:c.instructions+=2;goto B76d35f;
case 0x76d362:c.instructions+=1;goto B76d362;
case 0x76d364:goto L76d364;
case 0x76d366:c.instructions+=2;goto B76d366;
case 0x76d367:c.instructions+=1;goto B76d367;
case 0x76d369:goto L76d369;
case 0x76d36b:c.instructions+=1;goto B76d36b;
case 0x76d36d:goto L76d36d;
case 0x76d36f:c.instructions+=1;goto B76d36f;
case 0x76d371:goto L76d371;
case 0x76d373:c.instructions+=4;goto B76d373;
case 0x76d374:c.instructions+=3;goto B76d374;
case 0x76d377:c.instructions+=2;goto B76d377;
case 0x76d378:c.instructions+=1;goto B76d378;
case 0x76d37e:goto L76d37e;
case 0x76d383:c.instructions+=1;goto B76d383;
case 0x76d385:goto L76d385;
case 0x76d387:goto L76d387;
case 0x76d388:c.instructions+=10;goto B76d388;
case 0x76d38a:c.instructions+=9;goto B76d38a;
case 0x76d38c:c.instructions+=8;goto B76d38c;
case 0x76d391:c.instructions+=7;goto B76d391;
case 0x76d394:c.instructions+=6;goto B76d394;
case 0x76d395:c.instructions+=5;goto B76d395;
case 0x76d396:c.instructions+=4;goto B76d396;
case 0x76d397:c.instructions+=3;goto B76d397;
case 0x76d39a:c.instructions+=2;goto B76d39a;
case 0x76d39b:c.instructions+=1;goto B76d39b;
case 0x76d3a1:goto L76d3a1;
case 0x76d3a4:c.instructions+=5;goto B76d3a4;
case 0x76d3a5:c.instructions+=4;goto B76d3a5;
case 0x76d3a6:c.instructions+=3;goto B76d3a6;
case 0x76d3a7:c.instructions+=2;goto B76d3a7;
case 0x76d3a8:c.instructions+=1;goto B76d3a8;
case 0x76d3a9:goto L76d3a9;
case 0x76d3aa:c.instructions+=11;goto B76d3aa;
case 0x76d3ac:c.instructions+=10;goto B76d3ac;
case 0x76d3b2:c.instructions+=9;goto B76d3b2;
case 0x76d3b7:c.instructions+=8;goto B76d3b7;
case 0x76d3ba:c.instructions+=7;goto B76d3ba;
case 0x76d3bb:c.instructions+=6;goto B76d3bb;
case 0x76d3bc:c.instructions+=5;goto B76d3bc;
case 0x76d3be:c.instructions+=4;goto B76d3be;
case 0x76d3c2:c.instructions+=3;goto B76d3c2;
case 0x76d3c5:c.instructions+=2;goto B76d3c5;
case 0x76d3c6:c.instructions+=1;goto B76d3c6;
case 0x76d3cc:goto L76d3cc;
case 0x76d3cd:c.instructions+=8;goto B76d3cd;
case 0x76d3d2:c.instructions+=7;goto B76d3d2;
case 0x76d3d8:c.instructions+=6;goto B76d3d8;
case 0x76d3d9:c.instructions+=5;goto B76d3d9;
case 0x76d3dc:c.instructions+=4;goto B76d3dc;
case 0x76d3e2:c.instructions+=3;goto B76d3e2;
case 0x76d3e5:c.instructions+=2;goto B76d3e5;
case 0x76d3e8:c.instructions+=1;goto B76d3e8;
case 0x76d3ed:goto L76d3ed;
case 0x76d3ef:c.instructions+=3;goto B76d3ef;
case 0x76d3f2:c.instructions+=2;goto B76d3f2;
case 0x76d3f4:c.instructions+=1;goto B76d3f4;
case 0x76d3f6:goto L76d3f6;
case 0x76d3fc:goto L76d3fc;
case 0x76d3ff:c.instructions+=1;goto B76d3ff;
case 0x76d401:goto L76d401;
case 0x76d402:c.instructions+=5;goto B76d402;
case 0x76d403:c.instructions+=4;goto B76d403;
case 0x76d404:c.instructions+=3;goto B76d404;
case 0x76d407:c.instructions+=2;goto B76d407;
case 0x76d40a:c.instructions+=1;goto B76d40a;
case 0x76d40f:goto L76d40f;
case 0x76d411:c.instructions+=3;goto B76d411;
case 0x76d414:c.instructions+=2;goto B76d414;
case 0x76d416:c.instructions+=1;goto B76d416;
case 0x76d418:goto L76d418;
case 0x76d419:c.instructions+=1;goto B76d419;
case 0x76d41e:goto L76d41e;
case 0x76d420:c.instructions+=3;goto B76d420;
case 0x76d422:c.instructions+=2;goto B76d422;
case 0x76d423:c.instructions+=1;goto B76d423;
case 0x76d425:goto L76d425;
case 0x76d426:c.instructions+=6;goto B76d426;
case 0x76d427:c.instructions+=5;goto B76d427;
case 0x76d428:c.instructions+=4;goto B76d428;
case 0x76d42b:c.instructions+=3;goto B76d42b;
case 0x76d432:c.instructions+=2;goto B76d432;
case 0x76d435:c.instructions+=1;goto B76d435;
case 0x76d43a:goto L76d43a;
case 0x76d43c:c.instructions+=3;goto B76d43c;
case 0x76d43f:c.instructions+=2;goto B76d43f;
case 0x76d441:c.instructions+=1;goto B76d441;
case 0x76d443:goto L76d443;
case 0x76d444:c.instructions+=1;goto B76d444;
case 0x76d449:goto L76d449;
case 0x76d44b:c.instructions+=4;goto B76d44b;
case 0x76d44c:c.instructions+=3;goto B76d44c;
case 0x76d44f:c.instructions+=2;goto B76d44f;
case 0x76d451:c.instructions+=1;goto B76d451;
case 0x76d453:goto L76d453;
case 0x76d456:c.instructions+=1;goto B76d456;
case 0x76d458:goto L76d458;
case 0x76d459:c.instructions+=1;goto B76d459;
case 0x76d45e:goto L76d45e;
case 0x76d45f:goto L76d45f;
case 0x76d462:goto L76d462;
case 0x76d465:c.instructions+=5;goto B76d465;
case 0x76d468:c.instructions+=4;goto B76d468;
case 0x76d469:c.instructions+=3;goto B76d469;
case 0x76d46a:c.instructions+=2;goto B76d46a;
case 0x76d46b:c.instructions+=1;goto B76d46b;
case 0x76d470:goto L76d470;
case 0x76d471:c.instructions+=1;goto B76d471;
case 0x76d472:goto L76d472;
case 0x76d473:c.instructions+=3;goto B76d473;
case 0x76d474:c.instructions+=2;goto B76d474;
case 0x76d475:c.instructions+=1;goto B76d475;
case 0x76d47a:goto L76d47a;
case 0x76d47d:c.instructions+=2;goto B76d47d;
case 0x76d480:c.instructions+=1;goto B76d480;
case 0x76d482:goto L76d482;
case 0x76d483:c.instructions+=1;goto B76d483;
case 0x76d488:goto L76d488;
case 0x76d489:c.instructions+=1;goto B76d489;
case 0x76d48b:goto L76d48b;
case 0x76d48e:c.instructions+=1;goto B76d48e;
case 0x76d490:goto L76d490;
case 0x76d491:c.instructions+=6;goto B76d491;
case 0x76d493:c.instructions+=5;goto B76d493;
case 0x76d498:c.instructions+=4;goto B76d498;
case 0x76d499:c.instructions+=3;goto B76d499;
case 0x76d49c:c.instructions+=2;goto B76d49c;
case 0x76d49f:c.instructions+=1;goto B76d49f;
case 0x76d4a4:goto L76d4a4;
case 0x76d4a7:c.instructions+=2;goto B76d4a7;
case 0x76d4a9:c.instructions+=1;goto B76d4a9;
case 0x76d4ab:goto L76d4ab;
case 0x76d4ae:c.instructions+=1;goto B76d4ae;
case 0x76d4b0:goto L76d4b0;
case 0x76d4b2:c.instructions+=3;goto B76d4b2;
case 0x76d4b5:c.instructions+=2;goto B76d4b5;
case 0x76d4b6:c.instructions+=1;goto B76d4b6;
case 0x76d4bb:goto L76d4bb;
case 0x76d4bd:c.instructions+=2;goto B76d4bd;
case 0x76d4be:c.instructions+=1;goto B76d4be;
case 0x76d4c0:goto L76d4c0;
case 0x76d4c2:c.instructions+=9;goto B76d4c2;
case 0x76d4c4:c.instructions+=8;goto B76d4c4;
case 0x76d4c6:c.instructions+=7;goto B76d4c6;
case 0x76d4c8:c.instructions+=6;goto B76d4c8;
case 0x76d4ca:c.instructions+=5;goto B76d4ca;
case 0x76d4cb:c.instructions+=4;goto B76d4cb;
case 0x76d4cc:c.instructions+=3;goto B76d4cc;
case 0x76d4d2:c.instructions+=2;goto B76d4d2;
case 0x76d4d4:c.instructions+=1;goto B76d4d4;
case 0x76d4d6:goto L76d4d6;
case 0x76d4d8:c.instructions+=1;goto B76d4d8;
case 0x76d4da:goto L76d4da;
case 0x76d4db:c.instructions+=4;goto B76d4db;
case 0x76d4dd:c.instructions+=3;goto B76d4dd;
case 0x76d4de:c.instructions+=2;goto B76d4de;
case 0x76d4df:c.instructions+=1;goto B76d4df;
case 0x76d4e4:goto L76d4e4;
case 0x76d4e7:c.instructions+=2;goto B76d4e7;
case 0x76d4ed:c.instructions+=1;goto B76d4ed;
case 0x76d4ef:goto L76d4ef;
case 0x76d4f4:goto L76d4f4;
case 0x76d4f6:goto L76d4f6;
case 0x76d4fa:c.instructions+=1;goto B76d4fa;
case 0x76d4fc:goto L76d4fc;
case 0x76d500:c.instructions+=1;goto B76d500;
case 0x76d502:goto L76d502;
case 0x76d505:c.instructions+=3;goto B76d505;
case 0x76d508:c.instructions+=2;goto B76d508;
case 0x76d50b:c.instructions+=1;goto B76d50b;
case 0x76d510:goto L76d510;
case 0x76d513:c.instructions+=1;goto B76d513;
case 0x76d515:goto L76d515;
case 0x76d516:c.instructions+=3;goto B76d516;
case 0x76d519:c.instructions+=2;goto B76d519;
case 0x76d51a:c.instructions+=1;goto B76d51a;
case 0x76d51d:goto L76d51d;
case 0x76d520:c.instructions+=3;goto B76d520;
case 0x76d521:c.instructions+=2;goto B76d521;
case 0x76d522:c.instructions+=1;goto B76d522;
case 0x76d527:goto L76d527;
case 0x76d52a:c.instructions+=5;goto B76d52a;
case 0x76d52d:c.instructions+=4;goto B76d52d;
case 0x76d52e:c.instructions+=3;goto B76d52e;
case 0x76d52f:c.instructions+=2;goto B76d52f;
case 0x76d530:c.instructions+=1;goto B76d530;
case 0x76d535:goto L76d535;
case 0x76d538:c.instructions+=4;goto B76d538;
case 0x76d539:c.instructions+=3;goto B76d539;
case 0x76d53c:c.instructions+=2;goto B76d53c;
case 0x76d53e:c.instructions+=1;goto B76d53e;
case 0x76d540:goto L76d540;
case 0x76d544:c.instructions+=1;goto B76d544;
case 0x76d546:goto L76d546;
case 0x76d549:c.instructions+=1;goto B76d549;
case 0x76d54b:goto L76d54b;
case 0x76d54e:c.instructions+=4;goto B76d54e;
case 0x76d54f:c.instructions+=3;goto B76d54f;
case 0x76d551:c.instructions+=2;goto B76d551;
case 0x76d552:c.instructions+=1;goto B76d552;
case 0x76d554:goto L76d554;
case 0x76d556:goto L76d556;
case 0x76d557:c.instructions+=2;goto B76d557;
case 0x76d558:c.instructions+=1;goto B76d558;
case 0x76d559:goto L76d559;
case 0x76d55a:c.instructions+=8;goto B76d55a;
case 0x76d55c:c.instructions+=7;goto B76d55c;
case 0x76d55d:c.instructions+=6;goto B76d55d;
case 0x76d55e:c.instructions+=5;goto B76d55e;
case 0x76d55f:c.instructions+=4;goto B76d55f;
case 0x76d562:c.instructions+=3;goto B76d562;
case 0x76d564:c.instructions+=2;goto B76d564;
case 0x76d566:c.instructions+=1;goto B76d566;
case 0x76d568:goto L76d568;
case 0x76d56b:c.instructions+=1;goto B76d56b;
case 0x76d56d:goto L76d56d;
case 0x76d56f:c.instructions+=2;goto B76d56f;
case 0x76d571:c.instructions+=1;goto B76d571;
case 0x76d573:goto L76d573;
case 0x76d576:c.instructions+=2;goto B76d576;
case 0x76d578:c.instructions+=1;goto B76d578;
case 0x76d57a:goto L76d57a;
case 0x76d57d:goto L76d57d;
case 0x76d57f:goto L76d57f;
case 0x76d580:c.instructions+=4;goto B76d580;
case 0x76d581:c.instructions+=3;goto B76d581;
case 0x76d582:c.instructions+=2;goto B76d582;
case 0x76d583:c.instructions+=1;goto B76d583;
case 0x76d584:goto L76d584;
case 0x76d587:c.instructions+=2;goto B76d587;
case 0x76d58a:c.instructions+=1;goto B76d58a;
case 0x76d58c:goto L76d58c;
case 0x76d58f:c.instructions+=2;goto B76d58f;
case 0x76d591:c.instructions+=1;goto B76d591;
case 0x76d593:goto L76d593;
case 0x76d597:c.instructions+=1;goto B76d597;
case 0x76d59a:goto L76d59a;
case 0x76d59c:c.instructions+=2;goto B76d59c;
case 0x76d59d:c.instructions+=1;goto B76d59d;
case 0x76d59f:goto L76d59f;
case 0x76d5a2:c.instructions+=3;goto B76d5a2;
case 0x76d5a5:c.instructions+=2;goto B76d5a5;
case 0x76d5aa:c.instructions+=1;goto B76d5aa;
case 0x76d5ac:goto L76d5ac;
case 0x76d5af:c.instructions+=2;goto B76d5af;
case 0x76d5b2:c.instructions+=1;goto B76d5b2;
case 0x76d5b4:goto L76d5b4;
case 0x76d5b7:c.instructions+=1;goto B76d5b7;
case 0x76d5b9:goto L76d5b9;
case 0x76d5bb:c.instructions+=9;goto B76d5bb;
case 0x76d5be:c.instructions+=8;goto B76d5be;
case 0x76d5c1:c.instructions+=7;goto B76d5c1;
case 0x76d5c2:c.instructions+=6;goto B76d5c2;
case 0x76d5c5:c.instructions+=5;goto B76d5c5;
case 0x76d5c6:c.instructions+=4;goto B76d5c6;
case 0x76d5c7:c.instructions+=3;goto B76d5c7;
case 0x76d5c9:c.instructions+=2;goto B76d5c9;
case 0x76d5cc:c.instructions+=1;goto B76d5cc;
case 0x76d5d2:goto L76d5d2;
case 0x76d5d4:c.instructions+=1;goto B76d5d4;
case 0x76d5d6:goto L76d5d6;
case 0x76d5d9:c.instructions+=2;goto B76d5d9;
case 0x76d5dc:c.instructions+=1;goto B76d5dc;
case 0x76d5de:goto L76d5de;
case 0x76d5e1:c.instructions+=1;goto B76d5e1;
case 0x76d5e3:goto L76d5e3;
case 0x76d5e6:c.instructions+=1;goto B76d5e6;
case 0x76d5e8:goto L76d5e8;
case 0x76d5ea:c.instructions+=9;goto B76d5ea;
case 0x76d5ed:c.instructions+=8;goto B76d5ed;
case 0x76d5f0:c.instructions+=7;goto B76d5f0;
case 0x76d5f1:c.instructions+=6;goto B76d5f1;
case 0x76d5f4:c.instructions+=5;goto B76d5f4;
case 0x76d5f6:c.instructions+=4;goto B76d5f6;
case 0x76d5f7:c.instructions+=3;goto B76d5f7;
case 0x76d5f9:c.instructions+=2;goto B76d5f9;
case 0x76d5fc:c.instructions+=1;goto B76d5fc;
case 0x76d602:goto L76d602;
case 0x76d604:c.instructions+=1;goto B76d604;
case 0x76d606:goto L76d606;
case 0x76d60b:goto L76d60b;
case 0x76d611:c.instructions+=2;goto B76d611;
case 0x76d614:c.instructions+=1;goto B76d614;
case 0x76d619:goto L76d619;
case 0x76d61e:goto L76d61e;
case 0x76d621:c.instructions+=2;goto B76d621;
case 0x76d627:c.instructions+=1;goto B76d627;
case 0x76d629:goto L76d629;
case 0x76d62e:goto L76d62e;
case 0x76d632:c.instructions+=4;goto B76d632;
case 0x76d636:c.instructions+=3;goto B76d636;
case 0x76d63a:c.instructions+=2;goto B76d63a;
case 0x76d63b:c.instructions+=1;goto B76d63b;
case 0x76d640:goto L76d640;
case 0x76d643:c.instructions+=1;goto B76d643;
case 0x76d644:goto L76d644;
case 0x76d645:c.instructions+=11;goto B76d645;
case 0x76d647:c.instructions+=10;goto B76d647;
case 0x76d64a:c.instructions+=9;goto B76d64a;
case 0x76d64f:c.instructions+=8;goto B76d64f;
case 0x76d652:c.instructions+=7;goto B76d652;
case 0x76d653:c.instructions+=6;goto B76d653;
case 0x76d654:c.instructions+=5;goto B76d654;
case 0x76d657:c.instructions+=4;goto B76d657;
case 0x76d65b:c.instructions+=3;goto B76d65b;
case 0x76d65e:c.instructions+=2;goto B76d65e;
case 0x76d65f:c.instructions+=1;goto B76d65f;
case 0x76d665:goto L76d665;
case 0x76d668:c.instructions+=2;goto B76d668;
case 0x76d66b:c.instructions+=1;goto B76d66b;
case 0x76d66d:goto L76d66d;
case 0x76d66f:c.instructions+=6;goto B76d66f;
case 0x76d672:c.instructions+=5;goto B76d672;
case 0x76d679:c.instructions+=4;goto B76d679;
case 0x76d67c:c.instructions+=3;goto B76d67c;
case 0x76d67f:c.instructions+=2;goto B76d67f;
case 0x76d682:c.instructions+=1;goto B76d682;
case 0x76d684:goto L76d684;
case 0x76d689:goto L76d689;
case 0x76d68d:c.instructions+=1;goto B76d68d;
case 0x76d68f:goto L76d68f;
case 0x76d692:c.instructions+=3;goto B76d692;
case 0x76d695:c.instructions+=2;goto B76d695;
case 0x76d696:c.instructions+=1;goto B76d696;
case 0x76d69b:goto L76d69b;
case 0x76d69d:c.instructions+=4;goto B76d69d;
case 0x76d6a0:c.instructions+=3;goto B76d6a0;
case 0x76d6a1:c.instructions+=2;goto B76d6a1;
case 0x76d6a2:c.instructions+=1;goto B76d6a2;
case 0x76d6a4:goto L76d6a4;
case 0x76d6a9:goto L76d6a9;
case 0x76d6af:goto L76d6af;
case 0x76d6b3:c.instructions+=1;goto B76d6b3;
case 0x76d6b5:goto L76d6b5;
case 0x76d6b7:c.instructions+=2;goto B76d6b7;
case 0x76d6b9:c.instructions+=1;goto B76d6b9;
case 0x76d6bb:goto L76d6bb;
case 0x76d6be:c.instructions+=1;goto B76d6be;
case 0x76d6c0:goto L76d6c0;
case 0x76d6c2:c.instructions+=7;goto B76d6c2;
case 0x76d6c6:c.instructions+=6;goto B76d6c6;
case 0x76d6c8:c.instructions+=5;goto B76d6c8;
case 0x76d6ca:c.instructions+=4;goto B76d6ca;
case 0x76d6cd:c.instructions+=3;goto B76d6cd;
case 0x76d6ce:c.instructions+=2;goto B76d6ce;
case 0x76d6d0:c.instructions+=1;goto B76d6d0;
case 0x76d6d2:goto L76d6d2;
case 0x76d6d7:c.instructions+=3;goto B76d6d7;
case 0x76d6d8:c.instructions+=2;goto B76d6d8;
case 0x76d6d9:c.instructions+=1;goto B76d6d9;
case 0x76d6de:goto L76d6de;
case 0x76d6df:c.instructions+=1;goto B76d6df;
case 0x76d6e0:goto L76d6e0;
case 0x76d6e3:c.instructions+=1;goto B76d6e3;
case 0x76d6e5:goto L76d6e5;
case 0x76d6e6:c.instructions+=2;goto B76d6e6;
case 0x76d6e8:c.instructions+=1;goto B76d6e8;
case 0x76d6ea:goto L76d6ea;
case 0x76d6ee:c.instructions+=1;goto B76d6ee;
case 0x76d6f0:goto L76d6f0;
case 0x76d6f4:c.instructions+=1;goto B76d6f4;
case 0x76d6f6:goto L76d6f6;
case 0x76d6f8:c.instructions+=4;goto B76d6f8;
case 0x76d6fb:c.instructions+=3;goto B76d6fb;
case 0x76d6fe:c.instructions+=2;goto B76d6fe;
case 0x76d701:c.instructions+=1;goto B76d701;
case 0x76d703:goto L76d703;
case 0x76d707:c.instructions+=3;goto B76d707;
case 0x76d708:c.instructions+=2;goto B76d708;
case 0x76d709:c.instructions+=1;goto B76d709;
case 0x76d70e:goto L76d70e;
case 0x76d70f:c.instructions+=1;goto B76d70f;
case 0x76d710:goto L76d710;
case 0x76d713:c.instructions+=5;goto B76d713;
case 0x76d716:c.instructions+=4;goto B76d716;
case 0x76d717:c.instructions+=3;goto B76d717;
case 0x76d718:c.instructions+=2;goto B76d718;
case 0x76d719:c.instructions+=1;goto B76d719;
case 0x76d71e:goto L76d71e;
case 0x76d71f:c.instructions+=1;goto B76d71f;
case 0x76d720:goto L76d720;
case 0x76d724:c.instructions+=2;goto B76d724;
case 0x76d726:c.instructions+=1;goto B76d726;
case 0x76d728:goto L76d728;
case 0x76d729:c.instructions+=2;goto B76d729;
case 0x76d72c:c.instructions+=1;goto B76d72c;
case 0x76d72e:goto L76d72e;
case 0x76d72f:c.instructions+=2;goto B76d72f;
case 0x76d731:c.instructions+=1;goto B76d731;
case 0x76d733:goto L76d733;
case 0x76d734:goto L76d734;
case 0x76d738:c.instructions+=3;goto B76d738;
case 0x76d73a:c.instructions+=2;goto B76d73a;
case 0x76d73b:c.instructions+=1;goto B76d73b;
case 0x76d73c:goto L76d73c;
case 0x76d73e:c.instructions+=2;goto B76d73e;
case 0x76d743:c.instructions+=1;goto B76d743;
case 0x76d748:goto L76d748;
case 0x76d74d:c.instructions+=7;goto B76d74d;
case 0x76d750:c.instructions+=6;goto B76d750;
case 0x76d753:c.instructions+=5;goto B76d753;
case 0x76d755:c.instructions+=4;goto B76d755;
case 0x76d757:c.instructions+=3;goto B76d757;
case 0x76d758:c.instructions+=2;goto B76d758;
case 0x76d75e:c.instructions+=1;goto B76d75e;
case 0x76d760:goto L76d760;
case 0x76d761:c.instructions+=7;goto B76d761;
case 0x76d766:c.instructions+=6;goto B76d766;
case 0x76d767:c.instructions+=5;goto B76d767;
case 0x76d768:c.instructions+=4;goto B76d768;
case 0x76d769:c.instructions+=3;goto B76d769;
case 0x76d76a:c.instructions+=2;goto B76d76a;
case 0x76d76b:c.instructions+=1;goto B76d76b;
case 0x76d771:goto L76d771;
case 0x76d773:c.instructions+=1;goto B76d773;
case 0x76d775:goto L76d775;
case 0x76d77b:c.instructions+=1;goto B76d77b;
case 0x76d77d:goto L76d77d;
case 0x76d783:goto L76d783;
case 0x76d786:c.instructions+=1;goto B76d786;
case 0x76d788:goto L76d788;
case 0x76d792:goto L76d792;
case 0x76d795:c.instructions+=1;goto B76d795;
case 0x76d797:goto L76d797;
case 0x76d79a:c.instructions+=2;goto B76d79a;
case 0x76d79d:c.instructions+=1;goto B76d79d;
case 0x76d7a2:goto L76d7a2;
case 0x76d7a3:c.instructions+=1;goto B76d7a3;
case 0x76d7a6:goto L76d7a6;
case 0x76d7a9:c.instructions+=2;goto B76d7a9;
case 0x76d7ab:c.instructions+=1;goto B76d7ab;
case 0x76d7ad:goto L76d7ad;
case 0x76d7ae:c.instructions+=2;goto B76d7ae;
case 0x76d7b1:c.instructions+=1;goto B76d7b1;
case 0x76d7b6:goto L76d7b6;
case 0x76d7b7:c.instructions+=1;goto B76d7b7;
case 0x76d7ba:goto L76d7ba;
case 0x76d7c0:c.instructions+=4;goto B76d7c0;
case 0x76d7c2:c.instructions+=3;goto B76d7c2;
case 0x76d7c3:c.instructions+=2;goto B76d7c3;
case 0x76d7c5:c.instructions+=1;goto B76d7c5;
case 0x76d7cb:goto L76d7cb;
case 0x76d7cd:c.instructions+=1;goto B76d7cd;
case 0x76d7d3:goto L76d7d3;
case 0x76d7d5:c.instructions+=1;goto B76d7d5;
case 0x76d7db:goto L76d7db;
case 0x76d7de:c.instructions+=4;goto B76d7de;
case 0x76d7e1:c.instructions+=3;goto B76d7e1;
case 0x76d7e4:c.instructions+=2;goto B76d7e4;
case 0x76d7e7:c.instructions+=1;goto B76d7e7;
case 0x76d7e9:goto L76d7e9;
case 0x76d7ef:c.instructions+=1;goto B76d7ef;
case 0x76d7f2:goto L76d7f2;
case 0x76d7f5:c.instructions+=1;goto B76d7f5;
case 0x76d7f7:goto L76d7f7;
case 0x76d7f9:c.instructions+=1;goto B76d7f9;
case 0x76d7ff:goto L76d7ff;
case 0x76d802:c.instructions+=1;goto B76d802;
case 0x76d804:goto L76d804;
case 0x76d806:c.instructions+=1;goto B76d806;
case 0x76d80b:goto L76d80b;
case 0x76d80d:c.instructions+=1;goto B76d80d;
case 0x76d813:goto L76d813;
case 0x76d816:c.instructions+=1;goto B76d816;
case 0x76d818:goto L76d818;
case 0x76d81a:c.instructions+=2;goto B76d81a;
case 0x76d81b:c.instructions+=1;goto B76d81b;
case 0x76d820:goto L76d820;
case 0x76d823:c.instructions+=3;goto B76d823;
case 0x76d824:c.instructions+=2;goto B76d824;
case 0x76d827:c.instructions+=1;goto B76d827;
case 0x76d82d:goto L76d82d;
case 0x76d82f:c.instructions+=1;goto B76d82f;
case 0x76d835:goto L76d835;
case 0x76d838:c.instructions+=1;goto B76d838;
case 0x76d83a:goto L76d83a;
case 0x76d83d:c.instructions+=1;goto B76d83d;
case 0x76d83f:goto L76d83f;
case 0x76d842:c.instructions+=2;goto B76d842;
case 0x76d846:c.instructions+=1;goto B76d846;
case 0x76d848:goto L76d848;
case 0x76d84b:c.instructions+=2;goto B76d84b;
case 0x76d84d:c.instructions+=1;goto B76d84d;
case 0x76d84f:goto L76d84f;
case 0x76d852:c.instructions+=3;goto B76d852;
case 0x76d854:c.instructions+=2;goto B76d854;
case 0x76d856:c.instructions+=1;goto B76d856;
case 0x76d858:goto L76d858;
case 0x76d85a:c.instructions+=1;goto B76d85a;
case 0x76d85c:goto L76d85c;
case 0x76d85e:c.instructions+=2;goto B76d85e;
case 0x76d861:c.instructions+=1;goto B76d861;
case 0x76d863:goto L76d863;
case 0x76d865:goto L76d865;
case 0x76d868:c.instructions+=1;goto B76d868;
case 0x76d86a:goto L76d86a;
case 0x76d86d:c.instructions+=1;goto B76d86d;
case 0x76d873:goto L76d873;
case 0x76d876:c.instructions+=2;goto B76d876;
case 0x76d87a:c.instructions+=1;goto B76d87a;
case 0x76d880:goto L76d880;
case 0x76d883:c.instructions+=2;goto B76d883;
case 0x76d885:c.instructions+=1;goto B76d885;
case 0x76d88b:goto L76d88b;
case 0x76d88e:c.instructions+=3;goto B76d88e;
case 0x76d890:c.instructions+=2;goto B76d890;
case 0x76d892:c.instructions+=1;goto B76d892;
case 0x76d894:goto L76d894;
case 0x76d896:c.instructions+=1;goto B76d896;
case 0x76d89c:goto L76d89c;
case 0x76d89e:c.instructions+=2;goto B76d89e;
case 0x76d8a1:c.instructions+=1;goto B76d8a1;
case 0x76d8a3:goto L76d8a3;
case 0x76d8a8:goto L76d8a8;
case 0x76d8a9:c.instructions+=6;goto B76d8a9;
case 0x76d8aa:c.instructions+=5;goto B76d8aa;
case 0x76d8ad:c.instructions+=4;goto B76d8ad;
case 0x76d8b0:c.instructions+=3;goto B76d8b0;
case 0x76d8b2:c.instructions+=2;goto B76d8b2;
case 0x76d8b5:c.instructions+=1;goto B76d8b5;
case 0x76d8bb:goto L76d8bb;
case 0x76d8bd:c.instructions+=3;goto B76d8bd;
case 0x76d8c0:c.instructions+=2;goto B76d8c0;
case 0x76d8c2:c.instructions+=1;goto B76d8c2;
case 0x76d8c8:goto L76d8c8;
case 0x76d8cb:c.instructions+=4;goto B76d8cb;
case 0x76d8ce:c.instructions+=3;goto B76d8ce;
case 0x76d8d1:c.instructions+=2;goto B76d8d1;
case 0x76d8d4:c.instructions+=1;goto B76d8d4;
case 0x76d8d9:goto L76d8d9;
case 0x76d8dc:c.instructions+=4;goto B76d8dc;
case 0x76d8de:c.instructions+=3;goto B76d8de;
case 0x76d8e1:c.instructions+=2;goto B76d8e1;
case 0x76d8e5:c.instructions+=1;goto B76d8e5;
case 0x76d8e7:goto L76d8e7;
case 0x76d8e9:c.instructions+=2;goto B76d8e9;
case 0x76d8ea:c.instructions+=1;goto B76d8ea;
case 0x76d8eb:goto L76d8eb;
case 0x76d8ee:c.instructions+=1;goto B76d8ee;
case 0x76d8f3:goto L76d8f3;
case 0x76d8f7:c.instructions+=5;goto B76d8f7;
case 0x76d8fb:c.instructions+=4;goto B76d8fb;
case 0x76d8fe:c.instructions+=3;goto B76d8fe;
case 0x76d900:c.instructions+=2;goto B76d900;
case 0x76d901:c.instructions+=1;goto B76d901;
case 0x76d903:goto L76d903;
case 0x76d906:c.instructions+=2;goto B76d906;
case 0x76d908:c.instructions+=1;goto B76d908;
case 0x76d90a:goto L76d90a;
case 0x76d90d:c.instructions+=2;goto B76d90d;
case 0x76d90e:c.instructions+=1;goto B76d90e;
case 0x76d913:goto L76d913;
case 0x76d914:c.instructions+=3;goto B76d914;
case 0x76d917:c.instructions+=2;goto B76d917;
case 0x76d919:c.instructions+=1;goto B76d919;
case 0x76d91f:goto L76d91f;
case 0x76d922:goto L76d922;
case 0x76d923:c.instructions+=6;goto B76d923;
case 0x76d924:c.instructions+=5;goto B76d924;
case 0x76d927:c.instructions+=4;goto B76d927;
case 0x76d92a:c.instructions+=3;goto B76d92a;
case 0x76d92b:c.instructions+=2;goto B76d92b;
case 0x76d92e:c.instructions+=1;goto B76d92e;
case 0x76d934:goto L76d934;
case 0x76d936:c.instructions+=1;goto B76d936;
case 0x76d93c:goto L76d93c;
case 0x76d93e:c.instructions+=6;goto B76d93e;
case 0x76d940:c.instructions+=5;goto B76d940;
case 0x76d943:c.instructions+=4;goto B76d943;
case 0x76d946:c.instructions+=3;goto B76d946;
case 0x76d948:c.instructions+=2;goto B76d948;
case 0x76d94b:c.instructions+=1;goto B76d94b;
case 0x76d951:goto L76d951;
case 0x76d953:c.instructions+=3;goto B76d953;
case 0x76d956:c.instructions+=2;goto B76d956;
case 0x76d958:c.instructions+=1;goto B76d958;
case 0x76d95e:goto L76d95e;
case 0x76d965:c.instructions+=4;goto B76d965;
case 0x76d968:c.instructions+=3;goto B76d968;
case 0x76d96b:c.instructions+=2;goto B76d96b;
case 0x76d96e:c.instructions+=1;goto B76d96e;
case 0x76d973:goto L76d973;
case 0x76d976:c.instructions+=4;goto B76d976;
case 0x76d978:c.instructions+=3;goto B76d978;
case 0x76d97b:c.instructions+=2;goto B76d97b;
case 0x76d97f:c.instructions+=1;goto B76d97f;
case 0x76d981:goto L76d981;
case 0x76d983:c.instructions+=2;goto B76d983;
case 0x76d984:c.instructions+=1;goto B76d984;
case 0x76d985:goto L76d985;
case 0x76d988:c.instructions+=1;goto B76d988;
case 0x76d98d:goto L76d98d;
case 0x76d98f:c.instructions+=3;goto B76d98f;
case 0x76d993:c.instructions+=2;goto B76d993;
case 0x76d996:c.instructions+=1;goto B76d996;
case 0x76d999:goto L76d999;
case 0x76d99b:c.instructions+=1;goto B76d99b;
case 0x76d99d:goto L76d99d;
case 0x76d9a0:c.instructions+=2;goto B76d9a0;
case 0x76d9a1:c.instructions+=1;goto B76d9a1;
case 0x76d9a6:goto L76d9a6;
case 0x76d9a7:c.instructions+=3;goto B76d9a7;
case 0x76d9a9:c.instructions+=2;goto B76d9a9;
case 0x76d9ab:c.instructions+=1;goto B76d9ab;
case 0x76d9ad:goto L76d9ad;
case 0x76d9b4:goto L76d9b4;
case 0x76d9b5:c.instructions+=6;goto B76d9b5;
case 0x76d9b6:c.instructions+=5;goto B76d9b6;
case 0x76d9b9:c.instructions+=4;goto B76d9b9;
case 0x76d9bc:c.instructions+=3;goto B76d9bc;
case 0x76d9be:c.instructions+=2;goto B76d9be;
case 0x76d9c1:c.instructions+=1;goto B76d9c1;
case 0x76d9c7:goto L76d9c7;
case 0x76d9c9:c.instructions+=1;goto B76d9c9;
case 0x76d9cb:goto L76d9cb;
case 0x76d9cc:c.instructions+=6;goto B76d9cc;
case 0x76d9cd:c.instructions+=5;goto B76d9cd;
case 0x76d9ce:c.instructions+=4;goto B76d9ce;
case 0x76d9d1:c.instructions+=3;goto B76d9d1;
case 0x76d9d4:c.instructions+=2;goto B76d9d4;
case 0x76d9d7:c.instructions+=1;goto B76d9d7;
case 0x76d9dd:goto L76d9dd;
case 0x76d9e0:goto L76d9e0;
case 0x76d9e4:c.instructions+=1;goto B76d9e4;
case 0x76d9e6:goto L76d9e6;
case 0x76d9e7:c.instructions+=1;goto B76d9e7;
case 0x76d9ec:goto L76d9ec;
case 0x76d9ed:goto L76d9ed;
case 0x76d9f1:c.instructions+=1;goto B76d9f1;
case 0x76d9f3:goto L76d9f3;
case 0x76d9f6:c.instructions+=1;goto B76d9f6;
case 0x76d9fb:goto L76d9fb;
case 0x76d9fc:goto L76d9fc;
case 0x76d9ff:c.instructions+=1;goto B76d9ff;
case 0x76da04:goto L76da04;
case 0x76da07:c.instructions+=2;goto B76da07;
case 0x76da0a:c.instructions+=1;goto B76da0a;
case 0x76da0c:goto L76da0c;
case 0x76da11:c.instructions+=1;goto B76da11;
case 0x76da14:goto L76da14;
case 0x76da17:c.instructions+=2;goto B76da17;
case 0x76da19:c.instructions+=1;goto B76da19;
case 0x76da1b:goto L76da1b;
case 0x76da21:goto L76da21;
case 0x76da24:c.instructions+=1;goto B76da24;
case 0x76da29:goto L76da29;
case 0x76da2a:c.instructions+=3;goto B76da2a;
case 0x76da2c:c.instructions+=2;goto B76da2c;
case 0x76da2f:c.instructions+=1;goto B76da2f;
case 0x76da31:goto L76da31;
case 0x76da33:c.instructions+=1;goto B76da33;
case 0x76da35:goto L76da35;
case 0x76da37:c.instructions+=1;goto B76da37;
case 0x76da39:goto L76da39;
case 0x76da3b:c.instructions+=7;goto B76da3b;
case 0x76da3d:c.instructions+=6;goto B76da3d;
case 0x76da40:c.instructions+=5;goto B76da40;
case 0x76da41:c.instructions+=4;goto B76da41;
case 0x76da44:c.instructions+=3;goto B76da44;
case 0x76da45:c.instructions+=2;goto B76da45;
case 0x76da46:c.instructions+=1;goto B76da46;
case 0x76da4b:goto L76da4b;
case 0x76da4e:c.instructions+=3;goto B76da4e;
case 0x76da50:c.instructions+=2;goto B76da50;
case 0x76da52:c.instructions+=1;goto B76da52;
case 0x76da54:goto L76da54;
case 0x76da56:c.instructions+=7;goto B76da56;
case 0x76da58:c.instructions+=6;goto B76da58;
case 0x76da5b:c.instructions+=5;goto B76da5b;
case 0x76da5c:c.instructions+=4;goto B76da5c;
case 0x76da5f:c.instructions+=3;goto B76da5f;
case 0x76da60:c.instructions+=2;goto B76da60;
case 0x76da61:c.instructions+=1;goto B76da61;
case 0x76da66:goto L76da66;
case 0x76da69:c.instructions+=3;goto B76da69;
case 0x76da6c:c.instructions+=2;goto B76da6c;
case 0x76da6e:c.instructions+=1;goto B76da6e;
case 0x76da70:goto L76da70;
case 0x76da71:c.instructions+=1;goto B76da71;
case 0x76da76:goto L76da76;
case 0x76da77:c.instructions+=1;goto B76da77;
case 0x76da79:goto L76da79;
case 0x76da7c:c.instructions+=2;goto B76da7c;
case 0x76da7f:c.instructions+=1;goto B76da7f;
case 0x76da82:goto L76da82;
case 0x76da85:c.instructions+=6;goto B76da85;
case 0x76da88:c.instructions+=5;goto B76da88;
case 0x76da8b:c.instructions+=4;goto B76da8b;
case 0x76da8e:c.instructions+=3;goto B76da8e;
case 0x76da91:c.instructions+=2;goto B76da91;
case 0x76da94:c.instructions+=1;goto B76da94;
case 0x76da9a:goto L76da9a;
case 0x76da9c:c.instructions+=2;goto B76da9c;
case 0x76da9e:c.instructions+=1;goto B76da9e;
case 0x76daa0:goto L76daa0;
case 0x76daa1:c.instructions+=1;goto B76daa1;
case 0x76daa6:goto L76daa6;
case 0x76daa9:c.instructions+=1;goto B76daa9;
case 0x76daae:goto L76daae;
case 0x76daaf:c.instructions+=1;goto B76daaf;
case 0x76dab0:goto L76dab0;
case 0x76dab2:goto L76dab2;
case 0x76dab5:c.instructions+=3;goto B76dab5;
case 0x76dab8:c.instructions+=2;goto B76dab8;
case 0x76dabb:c.instructions+=1;goto B76dabb;
case 0x76dac0:goto L76dac0;
case 0x76dac5:goto L76dac5;
case 0x76dac6:goto L76dac6;
case 0x76dac7:c.instructions+=2;goto B76dac7;
case 0x76dacd:c.instructions+=1;goto B76dacd;
case 0x76dacf:goto L76dacf;
case 0x76dad0:c.instructions+=3;goto B76dad0;
case 0x76dad1:c.instructions+=2;goto B76dad1;
case 0x76dad5:c.instructions+=1;goto B76dad5;
case 0x76dada:goto L76dada;
case 0x76dadd:c.instructions+=2;goto B76dadd;
case 0x76dadf:c.instructions+=1;goto B76dadf;
case 0x76dae1:goto L76dae1;
case 0x76dae3:c.instructions+=3;goto B76dae3;
case 0x76dae6:c.instructions+=2;goto B76dae6;
case 0x76dae8:c.instructions+=1;goto B76dae8;
case 0x76daea:goto L76daea;
case 0x76daec:c.instructions+=1;goto B76daec;
case 0x76daee:goto L76daee;
case 0x76daf1:goto L76daf1;
case 0x76daf3:c.instructions+=2;goto B76daf3;
case 0x76daf5:c.instructions+=1;goto B76daf5;
case 0x76daf7:goto L76daf7;
case 0x76daf9:c.instructions+=5;goto B76daf9;
case 0x76daff:c.instructions+=4;goto B76daff;
case 0x76db00:c.instructions+=3;goto B76db00;
case 0x76db03:c.instructions+=2;goto B76db03;
case 0x76db05:c.instructions+=1;goto B76db05;
case 0x76db06:goto L76db06;
case 0x76db08:c.instructions+=4;goto B76db08;
case 0x76db0e:c.instructions+=3;goto B76db0e;
case 0x76db0f:c.instructions+=2;goto B76db0f;
case 0x76db12:c.instructions+=1;goto B76db12;
case 0x76db13:goto L76db13;
case 0x76db14:c.instructions+=6;goto B76db14;
case 0x76db16:c.instructions+=5;goto B76db16;
case 0x76db17:c.instructions+=4;goto B76db17;
case 0x76db19:c.instructions+=3;goto B76db19;
case 0x76db1b:c.instructions+=2;goto B76db1b;
case 0x76db1d:c.instructions+=1;goto B76db1d;
case 0x76db1f:goto L76db1f;
case 0x76db20:c.instructions+=1;goto B76db20;
case 0x76db21:goto L76db21;
case 0x76db24:c.instructions+=1;goto B76db24;
case 0x76db26:goto L76db26;
case 0x76db29:c.instructions+=3;goto B76db29;
case 0x76db2a:c.instructions+=2;goto B76db2a;
case 0x76db2d:c.instructions+=1;goto B76db2d;
case 0x76db2f:goto L76db2f;
case 0x76db30:c.instructions+=4;goto B76db30;
case 0x76db37:c.instructions+=3;goto B76db37;
case 0x76db38:c.instructions+=2;goto B76db38;
case 0x76db39:c.instructions+=1;goto B76db39;
case 0x76db3e:goto L76db3e;
case 0x76db40:c.instructions+=4;goto B76db40;
case 0x76db42:c.instructions+=3;goto B76db42;
case 0x76db43:c.instructions+=2;goto B76db43;
case 0x76db46:c.instructions+=1;goto B76db46;
case 0x76db48:goto L76db48;
case 0x76db4a:c.instructions+=1;goto B76db4a;
case 0x76db4f:goto L76db4f;
case 0x76db50:goto L76db50;
case 0x76db52:c.instructions+=2;goto B76db52;
case 0x76db54:c.instructions+=1;goto B76db54;
case 0x76db56:goto L76db56;
case 0x76db57:c.instructions+=1;goto B76db57;
case 0x76db5c:goto L76db5c;
case 0x76db5e:c.instructions+=4;goto B76db5e;
case 0x76db61:c.instructions+=3;goto B76db61;
case 0x76db64:c.instructions+=2;goto B76db64;
case 0x76db66:c.instructions+=1;goto B76db66;
case 0x76db67:goto L76db67;
case 0x76db69:c.instructions+=1;goto B76db69;
case 0x76db6b:goto L76db6b;
case 0x76db6d:c.instructions+=5;goto B76db6d;
case 0x76db70:c.instructions+=4;goto B76db70;
case 0x76db71:c.instructions+=3;goto B76db71;
case 0x76db72:c.instructions+=2;goto B76db72;
case 0x76db73:c.instructions+=1;goto B76db73;
case 0x76db74:goto L76db74;
case 0x76db75:c.instructions+=9;goto B76db75;
case 0x76db77:c.instructions+=8;goto B76db77;
case 0x76db7a:c.instructions+=7;goto B76db7a;
case 0x76db7b:c.instructions+=6;goto B76db7b;
case 0x76db7d:c.instructions+=5;goto B76db7d;
case 0x76db80:c.instructions+=4;goto B76db80;
case 0x76db81:c.instructions+=3;goto B76db81;
case 0x76db82:c.instructions+=2;goto B76db82;
case 0x76db85:c.instructions+=1;goto B76db85;
case 0x76db87:goto L76db87;
case 0x76db89:c.instructions+=2;goto B76db89;
case 0x76db8c:c.instructions+=1;goto B76db8c;
case 0x76db91:goto L76db91;
case 0x76db93:c.instructions+=5;goto B76db93;
case 0x76db95:c.instructions+=4;goto B76db95;
case 0x76db96:c.instructions+=3;goto B76db96;
case 0x76db97:c.instructions+=2;goto B76db97;
case 0x76db9a:c.instructions+=1;goto B76db9a;
case 0x76db9c:goto L76db9c;
case 0x76db9f:c.instructions+=1;goto B76db9f;
case 0x76dba1:goto L76dba1;
case 0x76dba3:c.instructions+=6;goto B76dba3;
case 0x76dba6:c.instructions+=5;goto B76dba6;
case 0x76dba9:c.instructions+=4;goto B76dba9;
case 0x76dbac:c.instructions+=3;goto B76dbac;
case 0x76dbb1:c.instructions+=2;goto B76dbb1;
case 0x76dbb7:c.instructions+=1;goto B76dbb7;
case 0x76dbb9:goto L76dbb9;
case 0x76dbbb:c.instructions+=1;goto B76dbbb;
case 0x76dbc0:goto L76dbc0;
case 0x76dbc5:goto L76dbc5;
case 0x76dbc7:c.instructions+=1;goto B76dbc7;
case 0x76dbc9:goto L76dbc9;
case 0x76dbcc:c.instructions+=1;goto B76dbcc;
case 0x76dbce:goto L76dbce;
case 0x76dbd4:c.instructions+=1;goto B76dbd4;
case 0x76dbd6:goto L76dbd6;
case 0x76dbdb:goto L76dbdb;
case 0x76dbdd:c.instructions+=1;goto B76dbdd;
case 0x76dbdf:goto L76dbdf;
case 0x76dbe2:goto L76dbe2;
case 0x76dbe3:c.instructions+=4;goto B76dbe3;
case 0x76dbe4:c.instructions+=3;goto B76dbe4;
case 0x76dbe5:c.instructions+=2;goto B76dbe5;
case 0x76dbe6:c.instructions+=1;goto B76dbe6;
case 0x76dbe7:goto L76dbe7;
case 0x76dbea:c.instructions+=1;goto B76dbea;
case 0x76dbf0:goto L76dbf0;
case 0x76dbf2:c.instructions+=1;goto B76dbf2;
case 0x76dbf7:goto L76dbf7;
case 0x76dbf9:c.instructions+=3;goto B76dbf9;
case 0x76dbfa:c.instructions+=2;goto B76dbfa;
case 0x76dbff:c.instructions+=1;goto B76dbff;
case 0x76dc01:goto L76dc01;
case 0x76dc03:c.instructions+=2;goto B76dc03;
case 0x76dc09:c.instructions+=1;goto B76dc09;
case 0x76dc0b:goto L76dc0b;
case 0x76dc0d:c.instructions+=1;goto B76dc0d;
case 0x76dc12:goto L76dc12;
case 0x76dc14:c.instructions+=3;goto B76dc14;
case 0x76dc15:c.instructions+=2;goto B76dc15;
case 0x76dc1a:c.instructions+=1;goto B76dc1a;
case 0x76dc1c:goto L76dc1c;
case 0x76dc1e:goto L76dc1e;
case 0x76dc24:c.instructions+=5;goto B76dc24;
case 0x76dc26:c.instructions+=4;goto B76dc26;
case 0x76dc29:c.instructions+=3;goto B76dc29;
case 0x76dc2b:c.instructions+=2;goto B76dc2b;
case 0x76dc2c:c.instructions+=1;goto B76dc2c;
case 0x76dc31:goto L76dc31;
case 0x76dc33:c.instructions+=3;goto B76dc33;
case 0x76dc35:c.instructions+=2;goto B76dc35;
case 0x76dc36:c.instructions+=1;goto B76dc36;
case 0x76dc38:goto L76dc38;
case 0x76dc3b:c.instructions+=1;goto B76dc3b;
case 0x76dc3d:goto L76dc3d;
case 0x76dc40:c.instructions+=2;goto B76dc40;
case 0x76dc42:c.instructions+=1;goto B76dc42;
case 0x76dc47:goto L76dc47;
case 0x76dc49:c.instructions+=3;goto B76dc49;
case 0x76dc4c:c.instructions+=2;goto B76dc4c;
case 0x76dc4d:c.instructions+=1;goto B76dc4d;
case 0x76dc4f:goto L76dc4f;
case 0x76dc52:c.instructions+=2;goto B76dc52;
case 0x76dc54:c.instructions+=1;goto B76dc54;
case 0x76dc56:goto L76dc56;
case 0x76dc59:c.instructions+=3;goto B76dc59;
case 0x76dc5b:c.instructions+=2;goto B76dc5b;
case 0x76dc5c:c.instructions+=1;goto B76dc5c;
case 0x76dc5f:goto L76dc5f;
case 0x76dc61:c.instructions+=1;goto B76dc61;
case 0x76dc63:goto L76dc63;
case 0x76dc65:c.instructions+=4;goto B76dc65;
case 0x76dc68:c.instructions+=3;goto B76dc68;
case 0x76dc69:c.instructions+=2;goto B76dc69;
case 0x76dc6a:c.instructions+=1;goto B76dc6a;
case 0x76dc6f:goto L76dc6f;
case 0x76dc71:c.instructions+=3;goto B76dc71;
case 0x76dc72:c.instructions+=2;goto B76dc72;
case 0x76dc73:c.instructions+=1;goto B76dc73;
case 0x76dc75:goto L76dc75;
case 0x76dc77:goto L76dc77;
case 0x76dc7b:c.instructions+=1;goto B76dc7b;
case 0x76dc81:goto L76dc81;
case 0x76dc83:c.instructions+=1;goto B76dc83;
case 0x76dc85:goto L76dc85;
case 0x76dc87:goto L76dc87;
case 0x76dc8e:c.instructions+=3;goto B76dc8e;
case 0x76dc8f:c.instructions+=2;goto B76dc8f;
case 0x76dc90:c.instructions+=1;goto B76dc90;
case 0x76dc95:goto L76dc95;
case 0x76dc97:c.instructions+=3;goto B76dc97;
case 0x76dc98:c.instructions+=2;goto B76dc98;
case 0x76dc99:c.instructions+=1;goto B76dc99;
case 0x76dc9f:goto L76dc9f;
case 0x76dca2:c.instructions+=2;goto B76dca2;
case 0x76dca6:c.instructions+=1;goto B76dca6;
case 0x76dca8:goto L76dca8;
case 0x76dcad:goto L76dcad;
case 0x76dcb1:c.instructions+=1;goto B76dcb1;
case 0x76dcb3:goto L76dcb3;
case 0x76dcb6:c.instructions+=1;goto B76dcb6;
case 0x76dcbb:goto L76dcbb;
case 0x76dcbc:c.instructions+=3;goto B76dcbc;
case 0x76dcbd:c.instructions+=2;goto B76dcbd;
case 0x76dcbe:c.instructions+=1;goto B76dcbe;
case 0x76dcc3:goto L76dcc3;
case 0x76dcc5:c.instructions+=4;goto B76dcc5;
case 0x76dcc7:c.instructions+=3;goto B76dcc7;
case 0x76dcc8:c.instructions+=2;goto B76dcc8;
case 0x76dcc9:c.instructions+=1;goto B76dcc9;
case 0x76dccb:goto L76dccb;
case 0x76dcce:c.instructions+=2;goto B76dcce;
case 0x76dccf:c.instructions+=1;goto B76dccf;
case 0x76dcd4:goto L76dcd4;
case 0x76dcd6:c.instructions+=14;goto B76dcd6;
case 0x76dcd9:c.instructions+=13;goto B76dcd9;
case 0x76dcda:c.instructions+=12;goto B76dcda;
case 0x76dcdd:c.instructions+=11;goto B76dcdd;
case 0x76dcde:c.instructions+=10;goto B76dcde;
case 0x76dce1:c.instructions+=9;goto B76dce1;
case 0x76dce4:c.instructions+=8;goto B76dce4;
case 0x76dce5:c.instructions+=7;goto B76dce5;
case 0x76dce7:c.instructions+=6;goto B76dce7;
case 0x76dce9:c.instructions+=5;goto B76dce9;
case 0x76dceb:c.instructions+=4;goto B76dceb;
case 0x76dced:c.instructions+=3;goto B76dced;
case 0x76dcee:c.instructions+=2;goto B76dcee;
case 0x76dcef:c.instructions+=1;goto B76dcef;
case 0x76dcf5:goto L76dcf5;
case 0x76dcf7:c.instructions+=1;goto B76dcf7;
case 0x76dcf9:goto L76dcf9;
case 0x76dcfd:goto L76dcfd;
case 0x76dcfe:c.instructions+=1;goto B76dcfe;
case 0x76dd03:goto L76dd03;
case 0x76dd04:goto L76dd04;
case 0x76dd08:c.instructions+=1;goto B76dd08;
case 0x76dd0a:goto L76dd0a;
case 0x76dd0d:c.instructions+=1;goto B76dd0d;
case 0x76dd12:goto L76dd12;
case 0x76dd13:goto L76dd13;
case 0x76dd16:c.instructions+=1;goto B76dd16;
case 0x76dd1b:goto L76dd1b;
case 0x76dd1c:c.instructions+=1;goto B76dd1c;
case 0x76dd21:goto L76dd21;
case 0x76dd22:goto L76dd22;
case 0x76dd24:c.instructions+=1;goto B76dd24;
case 0x76dd29:goto L76dd29;
case 0x76dd2d:c.instructions+=14;goto B76dd2d;
case 0x76dd2f:c.instructions+=13;goto B76dd2f;
case 0x76dd32:c.instructions+=12;goto B76dd32;
case 0x76dd35:c.instructions+=11;goto B76dd35;
case 0x76dd3c:c.instructions+=10;goto B76dd3c;
case 0x76dd3f:c.instructions+=9;goto B76dd3f;
case 0x76dd43:c.instructions+=8;goto B76dd43;
case 0x76dd45:c.instructions+=7;goto B76dd45;
case 0x76dd47:c.instructions+=6;goto B76dd47;
case 0x76dd49:c.instructions+=5;goto B76dd49;
case 0x76dd4a:c.instructions+=4;goto B76dd4a;
case 0x76dd4f:c.instructions+=3;goto B76dd4f;
case 0x76dd54:c.instructions+=2;goto B76dd54;
case 0x76dd58:c.instructions+=1;goto B76dd58;
case 0x76dd5a:goto L76dd5a;
case 0x76dd5d:c.instructions+=1;goto B76dd5d;
case 0x76dd5f:goto L76dd5f;
case 0x76dd67:c.instructions+=1;goto B76dd67;
case 0x76dd69:goto L76dd69;
case 0x76dd6c:goto L76dd6c;
case 0x76dd6e:c.instructions+=6;goto B76dd6e;
case 0x76dd70:c.instructions+=5;goto B76dd70;
case 0x76dd75:c.instructions+=4;goto B76dd75;
case 0x76dd77:c.instructions+=3;goto B76dd77;
case 0x76dd79:c.instructions+=2;goto B76dd79;
case 0x76dd7a:c.instructions+=1;goto B76dd7a;
case 0x76dd7b:goto L76dd7b;
case 0x76dd80:goto L76dd80;
case 0x76dd86:c.instructions+=3;goto B76dd86;
case 0x76dd89:c.instructions+=2;goto B76dd89;
case 0x76dd8a:c.instructions+=1;goto B76dd8a;
case 0x76dd8b:goto L76dd8b;
case 0x76dd8f:c.instructions+=6;goto B76dd8f;
case 0x76dd90:c.instructions+=5;goto B76dd90;
case 0x76dd94:c.instructions+=4;goto B76dd94;
case 0x76dd97:c.instructions+=3;goto B76dd97;
case 0x76dd99:c.instructions+=2;goto B76dd99;
case 0x76dd9b:c.instructions+=1;goto B76dd9b;
case 0x76dd9d:goto L76dd9d;
case 0x76dd9f:c.instructions+=1;goto B76dd9f;
case 0x76dda1:goto L76dda1;
case 0x76dda3:c.instructions+=1;goto B76dda3;
case 0x76dda4:goto L76dda4;
case 0x76dda8:c.instructions+=3;goto B76dda8;
case 0x76ddaa:c.instructions+=2;goto B76ddaa;
case 0x76ddab:c.instructions+=1;goto B76ddab;
case 0x76ddac:goto L76ddac;
case 0x76ddad:c.instructions+=7;goto B76ddad;
case 0x76ddb1:c.instructions+=6;goto B76ddb1;
case 0x76ddb2:c.instructions+=5;goto B76ddb2;
case 0x76ddb6:c.instructions+=4;goto B76ddb6;
case 0x76ddb7:c.instructions+=3;goto B76ddb7;
case 0x76ddb9:c.instructions+=2;goto B76ddb9;
case 0x76ddbb:c.instructions+=1;goto B76ddbb;
case 0x76ddc0:goto L76ddc0;
case 0x76ddc3:c.instructions+=2;goto B76ddc3;
case 0x76ddc5:c.instructions+=1;goto B76ddc5;
case 0x76ddc7:goto L76ddc7;
case 0x76ddca:c.instructions+=4;goto B76ddca;
case 0x76ddcb:c.instructions+=3;goto B76ddcb;
case 0x76ddcd:c.instructions+=2;goto B76ddcd;
case 0x76ddcf:c.instructions+=1;goto B76ddcf;
case 0x76ddd4:goto L76ddd4;
case 0x76ddd7:c.instructions+=2;goto B76ddd7;
case 0x76ddd9:c.instructions+=1;goto B76ddd9;
case 0x76dddb:goto L76dddb;
case 0x76ddde:goto L76ddde;
case 0x76dde1:c.instructions+=4;goto B76dde1;
case 0x76dde2:c.instructions+=3;goto B76dde2;
case 0x76dde5:c.instructions+=2;goto B76dde5;
case 0x76dde7:c.instructions+=1;goto B76dde7;
case 0x76ddec:goto L76ddec;
case 0x76ddef:c.instructions+=2;goto B76ddef;
case 0x76ddf1:c.instructions+=1;goto B76ddf1;
case 0x76ddf3:goto L76ddf3;
case 0x76ddf6:goto L76ddf6;
case 0x76ddf9:c.instructions+=4;goto B76ddf9;
case 0x76ddfa:c.instructions+=3;goto B76ddfa;
case 0x76ddfd:c.instructions+=2;goto B76ddfd;
case 0x76ddff:c.instructions+=1;goto B76ddff;
case 0x76de04:goto L76de04;
case 0x76de07:c.instructions+=3;goto B76de07;
case 0x76de08:c.instructions+=2;goto B76de08;
case 0x76de09:c.instructions+=1;goto B76de09;
case 0x76de0a:goto L76de0a;
case 0x76de0e:c.instructions+=20;goto B76de0e;
case 0x76de0f:c.instructions+=19;goto B76de0f;
case 0x76de11:c.instructions+=18;goto B76de11;
case 0x76de13:c.instructions+=17;goto B76de13;
case 0x76de15:c.instructions+=16;goto B76de15;
case 0x76de16:c.instructions+=15;goto B76de16;
case 0x76de19:c.instructions+=14;goto B76de19;
case 0x76de1c:c.instructions+=13;goto B76de1c;
case 0x76de1e:c.instructions+=12;goto B76de1e;
case 0x76de21:c.instructions+=11;goto B76de21;
case 0x76de23:c.instructions+=10;goto B76de23;
case 0x76de26:c.instructions+=9;goto B76de26;
case 0x76de28:c.instructions+=8;goto B76de28;
case 0x76de2b:c.instructions+=7;goto B76de2b;
case 0x76de2d:c.instructions+=6;goto B76de2d;
case 0x76de2f:c.instructions+=5;goto B76de2f;
case 0x76de30:c.instructions+=4;goto B76de30;
case 0x76de33:c.instructions+=3;goto B76de33;
case 0x76de36:c.instructions+=2;goto B76de36;
case 0x76de37:c.instructions+=1;goto B76de37;
case 0x76de38:goto L76de38;
case 0x76de3c:c.instructions+=20;goto B76de3c;
case 0x76de3f:c.instructions+=19;goto B76de3f;
case 0x76de42:c.instructions+=18;goto B76de42;
case 0x76de43:c.instructions+=17;goto B76de43;
case 0x76de44:c.instructions+=16;goto B76de44;
case 0x76de46:c.instructions+=15;goto B76de46;
case 0x76de48:c.instructions+=14;goto B76de48;
case 0x76de4a:c.instructions+=13;goto B76de4a;
case 0x76de4d:c.instructions+=12;goto B76de4d;
case 0x76de4f:c.instructions+=11;goto B76de4f;
case 0x76de52:c.instructions+=10;goto B76de52;
case 0x76de54:c.instructions+=9;goto B76de54;
case 0x76de57:c.instructions+=8;goto B76de57;
case 0x76de59:c.instructions+=7;goto B76de59;
case 0x76de5b:c.instructions+=6;goto B76de5b;
case 0x76de5d:c.instructions+=5;goto B76de5d;
case 0x76de5e:c.instructions+=4;goto B76de5e;
case 0x76de61:c.instructions+=3;goto B76de61;
case 0x76de63:c.instructions+=2;goto B76de63;
case 0x76de64:c.instructions+=1;goto B76de64;
case 0x76de65:goto L76de65;
case 0x76de66:c.instructions+=17;goto B76de66;
case 0x76de68:c.instructions+=16;goto B76de68;
case 0x76de6b:c.instructions+=15;goto B76de6b;
case 0x76de70:c.instructions+=14;goto B76de70;
case 0x76de73:c.instructions+=13;goto B76de73;
case 0x76de74:c.instructions+=12;goto B76de74;
case 0x76de77:c.instructions+=11;goto B76de77;
case 0x76de79:c.instructions+=10;goto B76de79;
case 0x76de7c:c.instructions+=9;goto B76de7c;
case 0x76de7f:c.instructions+=8;goto B76de7f;
case 0x76de81:c.instructions+=7;goto B76de81;
case 0x76de82:c.instructions+=6;goto B76de82;
case 0x76de83:c.instructions+=5;goto B76de83;
case 0x76de8a:c.instructions+=4;goto B76de8a;
case 0x76de8c:c.instructions+=3;goto B76de8c;
case 0x76de8f:c.instructions+=2;goto B76de8f;
case 0x76de92:c.instructions+=1;goto B76de92;
case 0x76de94:goto L76de94;
case 0x76de97:goto L76de97;
case 0x76de99:c.instructions+=6;goto B76de99;
case 0x76de9c:c.instructions+=5;goto B76de9c;
case 0x76de9d:c.instructions+=4;goto B76de9d;
case 0x76de9e:c.instructions+=3;goto B76de9e;
case 0x76de9f:c.instructions+=2;goto B76de9f;
case 0x76dea0:c.instructions+=1;goto B76dea0;
case 0x76dea5:goto L76dea5;
case 0x76dea6:c.instructions+=1;goto B76dea6;
case 0x76deab:goto L76deab;
case 0x76deae:c.instructions+=3;goto B76deae;
case 0x76deaf:c.instructions+=2;goto B76deaf;
case 0x76deb0:c.instructions+=1;goto B76deb0;
case 0x76deb5:goto L76deb5;
case 0x76deb6:c.instructions+=1;goto B76deb6;
case 0x76debb:goto L76debb;
case 0x76debe:c.instructions+=8;goto B76debe;
case 0x76dec1:c.instructions+=7;goto B76dec1;
case 0x76dec5:c.instructions+=6;goto B76dec5;
case 0x76dec9:c.instructions+=5;goto B76dec9;
case 0x76decc:c.instructions+=4;goto B76decc;
case 0x76decf:c.instructions+=3;goto B76decf;
case 0x76ded0:c.instructions+=2;goto B76ded0;
case 0x76ded1:c.instructions+=1;goto B76ded1;
case 0x76ded6:goto L76ded6;
case 0x76ded9:c.instructions+=3;goto B76ded9;
case 0x76dedc:c.instructions+=2;goto B76dedc;
case 0x76dedf:c.instructions+=1;goto B76dedf;
case 0x76dee1:goto L76dee1;
case 0x76dee3:goto L76dee3;
case 0x76dee6:c.instructions+=1;goto B76dee6;
case 0x76dee8:goto L76dee8;
case 0x76deeb:goto L76deeb;
case 0x76deee:c.instructions+=14;goto B76deee;
case 0x76def5:c.instructions+=13;goto B76def5;
case 0x76def7:c.instructions+=12;goto B76def7;
case 0x76defa:c.instructions+=11;goto B76defa;
case 0x76defc:c.instructions+=10;goto B76defc;
case 0x76defe:c.instructions+=9;goto B76defe;
case 0x76df00:c.instructions+=8;goto B76df00;
case 0x76df03:c.instructions+=7;goto B76df03;
case 0x76df06:c.instructions+=6;goto B76df06;
case 0x76df08:c.instructions+=5;goto B76df08;
case 0x76df0b:c.instructions+=4;goto B76df0b;
case 0x76df0d:c.instructions+=3;goto B76df0d;
case 0x76df10:c.instructions+=2;goto B76df10;
case 0x76df12:c.instructions+=1;goto B76df12;
case 0x76df14:goto L76df14;
case 0x76df17:goto L76df17;
case 0x76df1c:c.instructions+=1;goto B76df1c;
case 0x76df1e:goto L76df1e;
case 0x76df1f:c.instructions+=1;goto B76df1f;
case 0x76df24:goto L76df24;
case 0x76df2b:c.instructions+=1;goto B76df2b;
case 0x76df2c:goto L76df2c;
case 0x76df2f:c.instructions+=1;goto B76df2f;
case 0x76df31:goto L76df31;
case 0x76df34:c.instructions+=7;goto B76df34;
case 0x76df38:c.instructions+=6;goto B76df38;
case 0x76df3b:c.instructions+=5;goto B76df3b;
case 0x76df3c:c.instructions+=4;goto B76df3c;
case 0x76df3d:c.instructions+=3;goto B76df3d;
case 0x76df41:c.instructions+=2;goto B76df41;
case 0x76df42:c.instructions+=1;goto B76df42;
case 0x76df47:goto L76df47;
case 0x76df48:c.instructions+=1;goto B76df48;
case 0x76df49:goto L76df49;
case 0x76df4a:c.instructions+=30;goto B76df4a;
case 0x76df4c:c.instructions+=29;goto B76df4c;
case 0x76df4f:c.instructions+=28;goto B76df4f;
case 0x76df54:c.instructions+=27;goto B76df54;
case 0x76df57:c.instructions+=26;goto B76df57;
case 0x76df58:c.instructions+=25;goto B76df58;
case 0x76df5b:c.instructions+=24;goto B76df5b;
case 0x76df5e:c.instructions+=23;goto B76df5e;
case 0x76df61:c.instructions+=22;goto B76df61;
case 0x76df62:c.instructions+=21;goto B76df62;
case 0x76df64:c.instructions+=20;goto B76df64;
case 0x76df69:c.instructions+=19;goto B76df69;
case 0x76df6f:c.instructions+=18;goto B76df6f;
case 0x76df71:c.instructions+=17;goto B76df71;
case 0x76df74:c.instructions+=16;goto B76df74;
case 0x76df75:c.instructions+=15;goto B76df75;
case 0x76df79:c.instructions+=14;goto B76df79;
case 0x76df7d:c.instructions+=13;goto B76df7d;
case 0x76df81:c.instructions+=12;goto B76df81;
case 0x76df85:c.instructions+=11;goto B76df85;
case 0x76df89:c.instructions+=10;goto B76df89;
case 0x76df8d:c.instructions+=9;goto B76df8d;
case 0x76df91:c.instructions+=8;goto B76df91;
case 0x76df95:c.instructions+=7;goto B76df95;
case 0x76df99:c.instructions+=6;goto B76df99;
case 0x76df9d:c.instructions+=5;goto B76df9d;
case 0x76dfa1:c.instructions+=4;goto B76dfa1;
case 0x76dfa5:c.instructions+=3;goto B76dfa5;
case 0x76dfac:c.instructions+=2;goto B76dfac;
case 0x76dfae:c.instructions+=1;goto B76dfae;
case 0x76dfb0:goto L76dfb0;
case 0x76dfb4:c.instructions+=1;goto B76dfb4;
case 0x76dfb6:goto L76dfb6;
case 0x76dfba:goto L76dfba;
case 0x76dfbd:c.instructions+=2;goto B76dfbd;
case 0x76dfc0:c.instructions+=1;goto B76dfc0;
case 0x76dfc2:goto L76dfc2;
case 0x76dfc4:c.instructions+=1;goto B76dfc4;
case 0x76dfc6:goto L76dfc6;
case 0x76dfc9:c.instructions+=1;goto B76dfc9;
case 0x76dfcf:goto L76dfcf;
case 0x76dfd2:c.instructions+=1;goto B76dfd2;
case 0x76dfd4:goto L76dfd4;
case 0x76dfd9:c.instructions+=3;goto B76dfd9;
case 0x76dfdb:c.instructions+=2;goto B76dfdb;
case 0x76dfe0:c.instructions+=1;goto B76dfe0;
case 0x76dfe2:goto L76dfe2;
case 0x76dfe6:c.instructions+=1;goto B76dfe6;
case 0x76dfe8:goto L76dfe8;
case 0x76dfee:c.instructions+=1;goto B76dfee;
case 0x76dff0:goto L76dff0;
case 0x76dff5:c.instructions+=1;goto B76dff5;
case 0x76dff7:goto L76dff7;
case 0x76dffa:c.instructions+=1;goto B76dffa;
case 0x76dffc:goto L76dffc;
default:missing_instruction(c.pc);}
B76d002:L76d002:{c.instructions+=1;NFSU2_TR(0x76d002);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76d007;}}
}
B76d004:L76d004:{c.instructions+=1;NFSU2_TR(0x76d004);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B76d007:L76d007:{c.instructions+=2;NFSU2_TR(0x76d007);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76d00a:{NFSU2_TR(0x76d00a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76d00f;}}
}
B76d00c:L76d00c:{c.instructions+=1;NFSU2_TR(0x76d00c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B76d00f:L76d00f:{c.instructions+=2;NFSU2_TR(0x76d00f);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1450ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x1450ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76d014:{NFSU2_TR(0x76d014);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L76d044;}}
}
B76d016:L76d016:{c.instructions+=2;NFSU2_TR(0x76d016);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0xffffebb0ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffffebb0ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B76d01b:{NFSU2_TR(0x76d01b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L76d05b;}}
}
B76d01d:L76d01d:{c.instructions+=5;NFSU2_TR(0x76d01d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76d020:{NFSU2_TR(0x76d020);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d021:{NFSU2_TR(0x76d021);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76d024:{NFSU2_TR(0x76d024);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d025:{NFSU2_TR(0x76d025);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76d02aull));
TAIL_STATIC(0x76e415u,76e);
}
B76d02a:L76d02a:{c.instructions+=6;NFSU2_TR(0x76d02a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B76d02d:{NFSU2_TR(0x76d02d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B76d030:{NFSU2_TR(0x76d030);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffcaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B76d033:{NFSU2_TR(0x76d033);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffceull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76d036:{NFSU2_TR(0x76d036);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B76d039:{NFSU2_TR(0x76d039);
{goto L76d06a;}
}
B76d03b:L76d03b:{c.instructions+=2;NFSU2_TR(0x76d03b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B76d042:{NFSU2_TR(0x76d042);
{goto L76d062;}
}
B76d044:L76d044:{c.instructions+=6;NFSU2_TR(0x76d044);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B76d046:{NFSU2_TR(0x76d046);
w4(R+0,u32(0x7fffull));
}
B76d04b:{NFSU2_TR(0x76d04b);
w4(R+24,u32(0x80000000ull));
}
B76d050:{NFSU2_TR(0x76d050);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B76d052:{NFSU2_TR(0x76d052);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B76d059:{NFSU2_TR(0x76d059);
{goto L76d06a;}
}
B76d05b:L76d05b:{c.instructions+=1;NFSU2_TR(0x76d05b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B76d062:L76d062:{c.instructions+=4;NFSU2_TR(0x76d062);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B76d064:{NFSU2_TR(0x76d064);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B76d066:{NFSU2_TR(0x76d066);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B76d068:{NFSU2_TR(0x76d068);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B76d06a:L76d06a:{c.instructions+=13;NFSU2_TR(0x76d06a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76d06d:{NFSU2_TR(0x76d06d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))|u32(r4(U+4))));
}
B76d070:{NFSU2_TR(0x76d070);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76d073:{NFSU2_TR(0x76d073);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76d076:{NFSU2_TR(0x76d076);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xaull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B76d07a:{NFSU2_TR(0x76d07a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76d07d:{NFSU2_TR(0x76d07d);
u8 U[2];
__builtin_memmove((U+0),(R+8),2);
s2(u32(r4(R+4)),r2(U+0));
}
B76d080:{NFSU2_TR(0x76d080);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76d083:{NFSU2_TR(0x76d083);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(U+4))));
}
B76d086:{NFSU2_TR(0x76d086);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B76d087:{NFSU2_TR(0x76d087);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76d088:{NFSU2_TR(0x76d088);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B76d089:{NFSU2_TR(0x76d089);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76d08eull));
TAIL_STATIC(0x76115eu,761);
}
B76d08e:L76d08e:{c.instructions+=2;NFSU2_TR(0x76d08e);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B76d08f:{NFSU2_TR(0x76d08f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76d0c0:L76d0c0:{c.instructions+=13;NFSU2_TR(0x76d0c0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d0c1:{NFSU2_TR(0x76d0c1);
__builtin_memmove((R+20),(R+16),4);
}
B76d0c3:{NFSU2_TR(0x76d0c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B76d0c6:{NFSU2_TR(0x76d0c6);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B76d0cb:{NFSU2_TR(0x76d0cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(U+4))));
}
B76d0ce:{NFSU2_TR(0x76d0ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffaull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))&u32(u8(0x0ull))));
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
B76d0d2:{NFSU2_TR(0x76d0d2);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d0d4:{NFSU2_TR(0x76d0d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76d0d7:{NFSU2_TR(0x76d0d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76d0da:{NFSU2_TR(0x76d0da);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d0db:{NFSU2_TR(0x76d0db);
u8 U[4];
w4(U+0,u32(0x1004ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d0e0:{NFSU2_TR(0x76d0e0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76d0e3:{NFSU2_TR(0x76d0e3);
u8 U[4];
__builtin_memmove((U+0),gp(0x7830b0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76d0e9ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76d0e9:L76d0e9:{c.instructions+=2;NFSU2_TR(0x76d0e9);
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
B76d0eb:{NFSU2_TR(0x76d0eb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76d0f2;}}
}
B76d0ed:L76d0ed:{c.instructions+=2;NFSU2_TR(0x76d0ed);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B76d0f0:{NFSU2_TR(0x76d0f0);
{goto L76d0fc;}
}
B76d0f2:L76d0f2:{c.instructions+=3;NFSU2_TR(0x76d0f2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76d0f5:{NFSU2_TR(0x76d0f5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d0f6:{NFSU2_TR(0x76d0f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76d0fbull));
TAIL_STATIC(0x75d5d3u,75d);
}
B76d0fb:L76d0fb:{c.instructions+=1;NFSU2_TR(0x76d0fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76d0fc:L76d0fc:{c.instructions+=3;NFSU2_TR(0x76d0fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76d0ff:{NFSU2_TR(0x76d0ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(U+4))));
}
B76d102:{NFSU2_TR(0x76d102);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76d107ull));
TAIL_STATIC(0x76115eu,761);
}
B76d107:L76d107:{c.instructions+=2;NFSU2_TR(0x76d107);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B76d108:{NFSU2_TR(0x76d108);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76d109:L76d109:{c.instructions+=3;NFSU2_TR(0x76d109);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d10b:{NFSU2_TR(0x76d10b);
u8 U[4];
w4(U+0,u32(0x7d98a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d110:{NFSU2_TR(0x76d110);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76d115ull));
TAIL_STATIC(0x760da0u,760);
}
B76d115:L76d115:{c.instructions+=13;NFSU2_TR(0x76d115);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B76d11a:{NFSU2_TR(0x76d11a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(U+4))));
}
B76d11d:{NFSU2_TR(0x76d11d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76d120:{NFSU2_TR(0x76d120);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B76d122:{NFSU2_TR(0x76d122);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76d125:{NFSU2_TR(0x76d125);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76d128:{NFSU2_TR(0x76d128);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76d12b:{NFSU2_TR(0x76d12b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B76d12d:{NFSU2_TR(0x76d12d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76d130:{NFSU2_TR(0x76d130);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76d133:{NFSU2_TR(0x76d133);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76d136:{NFSU2_TR(0x76d136);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
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
B76d139:{NFSU2_TR(0x76d139);
if(r1(R+518)){{goto L76d2b2;}}
}
B76d13f:L76d13f:{c.instructions+=5;NFSU2_TR(0x76d13f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76d142:{NFSU2_TR(0x76d142);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d143:{NFSU2_TR(0x76d143);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d144:{NFSU2_TR(0x76d144);
__builtin_memmove((R+24),gp(0x7830c4),4);
}
B76d14a:{NFSU2_TR(0x76d14a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76d14cull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76d14c:L76d14c:{c.instructions+=2;NFSU2_TR(0x76d14c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76d14e:{NFSU2_TR(0x76d14e);
if(r1(R+518)){{goto L76d170;}}
}
B76d150:L76d150:{c.instructions+=2;NFSU2_TR(0x76d150);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
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
B76d154:{NFSU2_TR(0x76d154);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76d170;}}
}
B76d156:L76d156:{c.instructions+=4;NFSU2_TR(0x76d156);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76d159:{NFSU2_TR(0x76d159);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d15a:{NFSU2_TR(0x76d15a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76d15d:{NFSU2_TR(0x76d15d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76d15full));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76d15f:L76d15f:{c.instructions+=2;NFSU2_TR(0x76d15f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76d161:{NFSU2_TR(0x76d161);
if(r1(R+518)){{goto L76d170;}}
}
B76d163:L76d163:{c.instructions+=2;NFSU2_TR(0x76d163);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76d167:{NFSU2_TR(0x76d167);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76d170;}}
}
B76d169:L76d169:{c.instructions+=1;NFSU2_TR(0x76d169);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B76d170:L76d170:{c.instructions+=2;NFSU2_TR(0x76d170);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76d173:{NFSU2_TR(0x76d173);
if(r1(R+518)){{goto L76d18f;}}
}
B76d175:L76d175:{c.instructions+=2;NFSU2_TR(0x76d175);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76d178:{NFSU2_TR(0x76d178);
if(r1(R+518)){{goto L76d17e;}}
}
B76d17a:L76d17a:{c.instructions+=2;NFSU2_TR(0x76d17a);
__builtin_memmove((R+24),(R+12),4);
}
B76d17c:{NFSU2_TR(0x76d17c);
{goto L76d18a;}
}
B76d17e:L76d17e:{c.instructions+=2;NFSU2_TR(0x76d17e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76d181:{NFSU2_TR(0x76d181);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76d186ull));
TAIL_STATIC(0x766bc0u,766);
}
B76d186:L76d186:{c.instructions+=3;NFSU2_TR(0x76d186);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76d187:{NFSU2_TR(0x76d187);
__builtin_memmove((R+24),(R+0),4);
}
B76d189:{NFSU2_TR(0x76d189);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B76d18a:L76d18a:{c.instructions+=2;NFSU2_TR(0x76d18a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76d18d:{NFSU2_TR(0x76d18d);
{goto L76d192;}
}
B76d18f:L76d18f:{c.instructions+=1;NFSU2_TR(0x76d18f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B76d192:L76d192:{c.instructions+=2;NFSU2_TR(0x76d192);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
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
B76d195:{NFSU2_TR(0x76d195);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76d1b1;}}
}
B76d197:L76d197:{c.instructions+=7;NFSU2_TR(0x76d197);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d198:{NFSU2_TR(0x76d198);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d199:{NFSU2_TR(0x76d199);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d19a:{NFSU2_TR(0x76d19a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76d19d:{NFSU2_TR(0x76d19d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d19f:{NFSU2_TR(0x76d19f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76d1a2:{NFSU2_TR(0x76d1a2);
u8 U[4];
__builtin_memmove((U+0),gp(0x783130),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76d1a8ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76d1a8:L76d1a8:{c.instructions+=4;NFSU2_TR(0x76d1a8);
__builtin_memmove((R+24),(R+0),4);
}
B76d1aa:{NFSU2_TR(0x76d1aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76d1ad:{NFSU2_TR(0x76d1ad);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76d1af:{NFSU2_TR(0x76d1af);
if(r1(R+518)){{goto L76d209;}}
}
B76d1b1:L76d1b1:{c.instructions+=5;NFSU2_TR(0x76d1b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76d1b4:{NFSU2_TR(0x76d1b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B76d1b7:{NFSU2_TR(0x76d1b7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
}
B76d1ba:{NFSU2_TR(0x76d1ba);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffffcull))));
}
B76d1bd:{NFSU2_TR(0x76d1bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76d1c2ull));
TAIL_STATIC(0x75c4d0u,75c);
}
B76d1c2:L76d1c2:{c.instructions+=8;NFSU2_TR(0x76d1c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76d1c5:{NFSU2_TR(0x76d1c5);
__builtin_memmove((R+12),(R+16),4);
}
B76d1c7:{NFSU2_TR(0x76d1c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76d1ca:{NFSU2_TR(0x76d1ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B76d1cd:{NFSU2_TR(0x76d1cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d1ce:{NFSU2_TR(0x76d1ce);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d1cf:{NFSU2_TR(0x76d1cf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d1d0:{NFSU2_TR(0x76d1d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76d1d5ull));
TAIL_STATIC(0x768890u,768);
}
B76d1d5:L76d1d5:{c.instructions+=3;NFSU2_TR(0x76d1d5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B76d1d8:{NFSU2_TR(0x76d1d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76d1dc:{NFSU2_TR(0x76d1dc);
{goto L76d1f5;}
}
B76d1de:L76d1de:{c.instructions+=3;NFSU2_TR(0x76d1de);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B76d1e0:{NFSU2_TR(0x76d1e0);
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
B76d1e1:{NFSU2_TR(0x76d1e1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76d1e2:L76d1e2:{c.instructions+=2;NFSU2_TR(0x76d1e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+16),(U+4),4);
}
B76d1e5:{NFSU2_TR(0x76d1e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76d1eaull));
{goto L76d2d8;}
}
B76d1ea:L76d1ea:{c.instructions+=4;NFSU2_TR(0x76d1ea);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B76d1ec:{NFSU2_TR(0x76d1ec);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B76d1ee:{NFSU2_TR(0x76d1ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76d1f2:{NFSU2_TR(0x76d1f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B76d1f5:L76d1f5:{c.instructions+=2;NFSU2_TR(0x76d1f5);
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
B76d1f7:{NFSU2_TR(0x76d1f7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76d217;}}
}
B76d1f9:L76d1f9:{c.instructions+=3;NFSU2_TR(0x76d1f9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d1fa:{NFSU2_TR(0x76d1fa);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d1fc:{NFSU2_TR(0x76d1fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76d201ull));
TAIL_STATIC(0x76ace0u,76a);
}
B76d201:L76d201:{c.instructions+=5;NFSU2_TR(0x76d201);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76d202:{NFSU2_TR(0x76d202);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76d203:{NFSU2_TR(0x76d203);
__builtin_memmove((R+12),(R+0),4);
}
B76d205:{NFSU2_TR(0x76d205);
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
B76d207:{NFSU2_TR(0x76d207);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76d210;}}
}
B76d209:L76d209:{c.instructions+=2;NFSU2_TR(0x76d209);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B76d20b:{NFSU2_TR(0x76d20b);
{goto L76d2c4;}
}
B76d210:L76d210:{c.instructions+=1;NFSU2_TR(0x76d210);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B76d217:L76d217:{c.instructions+=7;NFSU2_TR(0x76d217);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d218:{NFSU2_TR(0x76d218);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d219:{NFSU2_TR(0x76d219);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76d21c:{NFSU2_TR(0x76d21c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76d21f:{NFSU2_TR(0x76d21f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d221:{NFSU2_TR(0x76d221);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76d224:{NFSU2_TR(0x76d224);
u8 U[4];
__builtin_memmove((U+0),gp(0x783130),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76d22aull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76d22a:L76d22a:{c.instructions+=2;NFSU2_TR(0x76d22a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76d22c:{NFSU2_TR(0x76d22c);
if(r1(R+518)){{goto L76d2b5;}}
}
B76d232:L76d232:{c.instructions+=2;NFSU2_TR(0x76d232);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
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
B76d235:{NFSU2_TR(0x76d235);
if(r1(R+518)){{goto L76d257;}}
}
B76d237:L76d237:{c.instructions+=9;NFSU2_TR(0x76d237);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d238:{NFSU2_TR(0x76d238);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d239:{NFSU2_TR(0x76d239);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76d23c:{NFSU2_TR(0x76d23c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76d23f:{NFSU2_TR(0x76d23f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d240:{NFSU2_TR(0x76d240);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d241:{NFSU2_TR(0x76d241);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d242:{NFSU2_TR(0x76d242);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76d245:{NFSU2_TR(0x76d245);
u8 U[4];
__builtin_memmove((U+0),gp(0x78319c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76d24bull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76d24b:L76d24b:{c.instructions+=2;NFSU2_TR(0x76d24b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76d24d:{NFSU2_TR(0x76d24d);
if(r1(R+518)){{goto L76d2b5;}}
}
B76d24f:L76d24f:{c.instructions+=3;NFSU2_TR(0x76d24f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76d252:{NFSU2_TR(0x76d252);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76d255:{NFSU2_TR(0x76d255);
{goto L76d2b5;}
}
B76d257:L76d257:{c.instructions+=2;NFSU2_TR(0x76d257);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
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
B76d25a:{NFSU2_TR(0x76d25a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76d272;}}
}
B76d25c:L76d25c:{c.instructions+=9;NFSU2_TR(0x76d25c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d25d:{NFSU2_TR(0x76d25d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d25e:{NFSU2_TR(0x76d25e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d25f:{NFSU2_TR(0x76d25f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d260:{NFSU2_TR(0x76d260);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d261:{NFSU2_TR(0x76d261);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d262:{NFSU2_TR(0x76d262);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d263:{NFSU2_TR(0x76d263);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76d266:{NFSU2_TR(0x76d266);
u8 U[4];
__builtin_memmove((U+0),gp(0x78319c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76d26cull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76d26c:L76d26c:{c.instructions+=3;NFSU2_TR(0x76d26c);
__builtin_memmove((R+24),(R+0),4);
}
B76d26e:{NFSU2_TR(0x76d26e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76d270:{NFSU2_TR(0x76d270);
if(r1(R+518)){{goto L76d2b5;}}
}
B76d272:L76d272:{c.instructions+=3;NFSU2_TR(0x76d272);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d273:{NFSU2_TR(0x76d273);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d275:{NFSU2_TR(0x76d275);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76d27aull));
TAIL_STATIC(0x76ace0u,76a);
}
B76d27a:L76d27a:{c.instructions+=5;NFSU2_TR(0x76d27a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76d27b:{NFSU2_TR(0x76d27b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76d27c:{NFSU2_TR(0x76d27c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76d27f:{NFSU2_TR(0x76d27f);
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
B76d281:{NFSU2_TR(0x76d281);
if(r1(R+518)){{goto L76d2b5;}}
}
B76d283:L76d283:{c.instructions+=9;NFSU2_TR(0x76d283);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d284:{NFSU2_TR(0x76d284);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d285:{NFSU2_TR(0x76d285);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d286:{NFSU2_TR(0x76d286);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d287:{NFSU2_TR(0x76d287);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d288:{NFSU2_TR(0x76d288);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d289:{NFSU2_TR(0x76d289);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d28a:{NFSU2_TR(0x76d28a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76d28d:{NFSU2_TR(0x76d28d);
u8 U[4];
__builtin_memmove((U+0),gp(0x78319c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76d293ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76d293:L76d293:{c.instructions+=2;NFSU2_TR(0x76d293);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76d295:{NFSU2_TR(0x76d295);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76d2a5;}}
}
B76d297:L76d297:{c.instructions+=2;NFSU2_TR(0x76d297);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76d29a:{NFSU2_TR(0x76d29a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76d29full));
TAIL_STATIC(0x75c6dau,75c);
}
B76d29f:L76d29f:{c.instructions+=3;NFSU2_TR(0x76d29f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76d2a0:{NFSU2_TR(0x76d2a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76d2a3:{NFSU2_TR(0x76d2a3);
{goto L76d2b5;}
}
B76d2a5:L76d2a5:{c.instructions+=2;NFSU2_TR(0x76d2a5);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76d2a9:{NFSU2_TR(0x76d2a9);
if(r1(R+518)){{goto L76d2b5;}}
}
B76d2ab:L76d2ab:{c.instructions+=3;NFSU2_TR(0x76d2ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76d2ae:{NFSU2_TR(0x76d2ae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B76d2b0:{NFSU2_TR(0x76d2b0);
{goto L76d2b5;}
}
B76d2b2:L76d2b2:{c.instructions+=1;NFSU2_TR(0x76d2b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B76d2b5:L76d2b5:{c.instructions+=2;NFSU2_TR(0x76d2b5);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76d2b8:{NFSU2_TR(0x76d2b8);
if(r1(R+518)){{goto L76d2c1;}}
}
B76d2ba:L76d2ba:{c.instructions+=2;NFSU2_TR(0x76d2ba);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d2bb:{NFSU2_TR(0x76d2bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76d2c0ull));
TAIL_STATIC(0x75c6dau,75c);
}
B76d2c0:L76d2c0:{c.instructions+=1;NFSU2_TR(0x76d2c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76d2c1:L76d2c1:{c.instructions+=1;NFSU2_TR(0x76d2c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76d2c4:L76d2c4:{c.instructions+=4;NFSU2_TR(0x76d2c4);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((R+16),(U+0),4);
}
B76d2c7:{NFSU2_TR(0x76d2c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76d2ca:{NFSU2_TR(0x76d2ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(U+4))));
}
B76d2cd:{NFSU2_TR(0x76d2cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76d2d2ull));
TAIL_STATIC(0x76115eu,761);
}
B76d2d2:L76d2d2:{c.instructions+=1;NFSU2_TR(0x76d2d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76d2d7ull));
TAIL_STATIC(0x760ddbu,760);
}
B76d2d7:L76d2d7:{c.instructions+=1;NFSU2_TR(0x76d2d7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76d2d8:L76d2d8:{c.instructions+=9;NFSU2_TR(0x76d2d8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d2d9:{NFSU2_TR(0x76d2d9);
__builtin_memmove((R+20),(R+16),4);
}
B76d2db:{NFSU2_TR(0x76d2db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x48ull))));
}
B76d2de:{NFSU2_TR(0x76d2de);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d2df:{NFSU2_TR(0x76d2df);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d2e0:{NFSU2_TR(0x76d2e0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d2e1:{NFSU2_TR(0x76d2e1);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d2e3:{NFSU2_TR(0x76d2e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76d2e4:{NFSU2_TR(0x76d2e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76d2e9ull));
TAIL_STATIC(0x75c4d0u,75c);
}
B76d2e9:L76d2e9:{c.instructions+=6;NFSU2_TR(0x76d2e9);
__builtin_memmove((R+12),(R+16),4);
}
B76d2eb:{NFSU2_TR(0x76d2eb);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d2ed:{NFSU2_TR(0x76d2ed);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+0),(U+0),4);
}
B76d2f0:{NFSU2_TR(0x76d2f0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d2f1:{NFSU2_TR(0x76d2f1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d2f2:{NFSU2_TR(0x76d2f2);
u8 U[4];
__builtin_memmove((U+0),gp(0x783068),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76d2f8ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76d2f8:L76d2f8:{c.instructions+=2;NFSU2_TR(0x76d2f8);
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
B76d2fa:{NFSU2_TR(0x76d2fa);
if(r1(R+518)){{goto L76d36d;}}
}
B76d2fc:L76d2fc:{c.instructions+=4;NFSU2_TR(0x76d2fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B76d2ff:{NFSU2_TR(0x76d2ff);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76d302:{NFSU2_TR(0x76d302);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d303:{NFSU2_TR(0x76d303);
u8 U[4];
__builtin_memmove((U+0),gp(0x7831a0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76d309ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76d309:L76d309:{c.instructions+=16;NFSU2_TR(0x76d309);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76d30c:{NFSU2_TR(0x76d30c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((R+24),(U+0),4);
}
B76d30f:{NFSU2_TR(0x76d30f);
w4(R+24,u32(~u32(r4(R+24))));
}
B76d311:{NFSU2_TR(0x76d311);
w4(R+24,u32(u32(r4(R+24))&u32(r4(R+12))));
}
B76d313:{NFSU2_TR(0x76d313);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+0))));
}
B76d315:{NFSU2_TR(0x76d315);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76d318:{NFSU2_TR(0x76d318);
__builtin_memmove((R+0),gp(0x8b8430),4);
}
B76d31d:{NFSU2_TR(0x76d31d);
__builtin_memmove((R+4),(R+0),4);
}
B76d31f:{NFSU2_TR(0x76d31f);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B76d320:{NFSU2_TR(0x76d320);
w1(R+512,u8((r4(R+4))!=(u32(0x0ull))));
w4(R+4,u32(0-u32(r4(R+4))));
}
B76d322:{NFSU2_TR(0x76d322);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(R+4))));
w4(R+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B76d324:{NFSU2_TR(0x76d324);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffff1000ull))));
}
B76d32a:{NFSU2_TR(0x76d32a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x11000ull))));
}
B76d330:{NFSU2_TR(0x76d330);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B76d332:{NFSU2_TR(0x76d332);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B76d334:{NFSU2_TR(0x76d334);
if(r1(R+512)){{goto L76d36d;}}
}
B76d336:L76d336:{c.instructions+=2;NFSU2_TR(0x76d336);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B76d339:{NFSU2_TR(0x76d339);
if(r1(R+518)){{goto L76d385;}}
}
B76d33b:L76d33b:{c.instructions+=2;NFSU2_TR(0x76d33b);
__builtin_memmove((R+12),(R+28),4);
}
B76d33d:{NFSU2_TR(0x76d33d);
w4(R+28,u32(0x1000ull));
}
B76d342:L76d342:{c.instructions+=5;NFSU2_TR(0x76d342);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d344:{NFSU2_TR(0x76d344);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+0),(U+0),4);
}
B76d347:{NFSU2_TR(0x76d347);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d348:{NFSU2_TR(0x76d348);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d349:{NFSU2_TR(0x76d349);
u8 U[4];
__builtin_memmove((U+0),gp(0x783068),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76d34full));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76d34f:L76d34f:{c.instructions+=2;NFSU2_TR(0x76d34f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76d351:{NFSU2_TR(0x76d351);
if(r1(R+518)){{goto L76d36d;}}
}
B76d353:L76d353:{c.instructions+=3;NFSU2_TR(0x76d353);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+4))));
}
B76d356:{NFSU2_TR(0x76d356);
u8 U[18];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+14,u32(u32(r4(U+4))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B76d359:{NFSU2_TR(0x76d359);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76d342u);}goto L76d342;}}
}
B76d35b:L76d35b:{c.instructions+=3;NFSU2_TR(0x76d35b);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B76d35f:{NFSU2_TR(0x76d35f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B76d362:{NFSU2_TR(0x76d362);
if(r1(R+518)){{goto L76d369;}}
}
B76d364:L76d364:{c.instructions+=3;NFSU2_TR(0x76d364);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B76d366:{NFSU2_TR(0x76d366);
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
B76d367:{NFSU2_TR(0x76d367);
{goto L76d3a1;}
}
B76d369:L76d369:{c.instructions+=2;NFSU2_TR(0x76d369);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B76d36b:{NFSU2_TR(0x76d36b);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L76d371;}}
}
B76d36d:L76d36d:{c.instructions+=2;NFSU2_TR(0x76d36d);
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
B76d36f:{NFSU2_TR(0x76d36f);
{goto L76d3a1;}
}
B76d371:L76d371:{c.instructions+=5;NFSU2_TR(0x76d371);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d373:{NFSU2_TR(0x76d373);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d374:{NFSU2_TR(0x76d374);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76d377:{NFSU2_TR(0x76d377);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d378:{NFSU2_TR(0x76d378);
u8 U[4];
__builtin_memmove((U+0),gp(0x7831f4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76d37eull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76d37e:L76d37e:{c.instructions+=2;NFSU2_TR(0x76d37e);
__builtin_memmove((R+0),gp(0x8b8430),4);
}
B76d383:{NFSU2_TR(0x76d383);
{goto L76d387;}
}
B76d385:L76d385:{c.instructions+=1;NFSU2_TR(0x76d385);
__builtin_memmove((R+12),(R+24),4);
}
B76d387:L76d387:{c.instructions+=11;NFSU2_TR(0x76d387);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B76d388:{NFSU2_TR(0x76d388);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B76d38a:{NFSU2_TR(0x76d38a);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B76d38c:{NFSU2_TR(0x76d38c);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x103ull))));
}
B76d391:{NFSU2_TR(0x76d391);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76d394:{NFSU2_TR(0x76d394);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d395:{NFSU2_TR(0x76d395);
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
B76d396:{NFSU2_TR(0x76d396);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d397:{NFSU2_TR(0x76d397);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76d39a:{NFSU2_TR(0x76d39a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d39b:{NFSU2_TR(0x76d39b);
u8 U[4];
__builtin_memmove((U+0),gp(0x783244),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76d3a1ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76d3a1:L76d3a1:{c.instructions+=6;NFSU2_TR(0x76d3a1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((R+16),(U+0),4);
}
B76d3a4:{NFSU2_TR(0x76d3a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B76d3a5:{NFSU2_TR(0x76d3a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76d3a6:{NFSU2_TR(0x76d3a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B76d3a7:{NFSU2_TR(0x76d3a7);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B76d3a8:{NFSU2_TR(0x76d3a8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76d3a9:L76d3a9:{c.instructions+=12;NFSU2_TR(0x76d3a9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d3aa:{NFSU2_TR(0x76d3aa);
__builtin_memmove((R+20),(R+16),4);
}
B76d3ac:{NFSU2_TR(0x76d3ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x84ull))));
}
B76d3b2:{NFSU2_TR(0x76d3b2);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B76d3b7:{NFSU2_TR(0x76d3b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(U+4))));
}
B76d3ba:{NFSU2_TR(0x76d3ba);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d3bb:{NFSU2_TR(0x76d3bb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d3bc:{NFSU2_TR(0x76d3bc);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B76d3be:{NFSU2_TR(0x76d3be);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76d3c2:{NFSU2_TR(0x76d3c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76d3c5:{NFSU2_TR(0x76d3c5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d3c6:{NFSU2_TR(0x76d3c6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76d48b;}}
}
B76d3cc:L76d3cc:{c.instructions+=9;NFSU2_TR(0x76d3cc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d3cd:{NFSU2_TR(0x76d3cd);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d3d2:{NFSU2_TR(0x76d3d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff7cull))));
__builtin_memmove((R+0),(U+0),4);
}
B76d3d8:{NFSU2_TR(0x76d3d8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d3d9:{NFSU2_TR(0x76d3d9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76d3dc:{NFSU2_TR(0x76d3dc);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff7cull))));
__builtin_memmove((R+28),(U+0),4);
}
B76d3e2:{NFSU2_TR(0x76d3e2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76d3e5:{NFSU2_TR(0x76d3e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76d3e8:{NFSU2_TR(0x76d3e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76d3edull));
TAIL_STATIC(0x76e5d1u,76e);
}
B76d3ed:L76d3ed:{c.instructions+=4;NFSU2_TR(0x76d3ed);
__builtin_memmove((R+24),(R+0),4);
}
B76d3ef:{NFSU2_TR(0x76d3ef);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B76d3f2:{NFSU2_TR(0x76d3f2);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B76d3f4:{NFSU2_TR(0x76d3f4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76d443;}}
}
B76d3f6:L76d3f6:{c.instructions+=1;NFSU2_TR(0x76d3f6);
u8 U[4];
__builtin_memmove((U+0),gp(0x783114),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76d3fcull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76d3fc:L76d3fc:{c.instructions+=2;NFSU2_TR(0x76d3fc);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7aull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76d3ff:{NFSU2_TR(0x76d3ff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76d45f;}}
}
B76d401:L76d401:{c.instructions+=6;NFSU2_TR(0x76d401);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d402:{NFSU2_TR(0x76d402);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d403:{NFSU2_TR(0x76d403);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d404:{NFSU2_TR(0x76d404);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76d407:{NFSU2_TR(0x76d407);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76d40a:{NFSU2_TR(0x76d40a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76d40full));
TAIL_STATIC(0x76e5d1u,76e);
}
B76d40f:L76d40f:{c.instructions+=4;NFSU2_TR(0x76d40f);
__builtin_memmove((R+24),(R+0),4);
}
B76d411:{NFSU2_TR(0x76d411);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B76d414:{NFSU2_TR(0x76d414);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76d416:{NFSU2_TR(0x76d416);
if(r1(R+518)){{goto L76d45f;}}
}
B76d418:L76d418:{c.instructions+=2;NFSU2_TR(0x76d418);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d419:{NFSU2_TR(0x76d419);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76d41eull));
TAIL_STATIC(0x75c6c8u,75c);
}
B76d41e:L76d41e:{c.instructions+=4;NFSU2_TR(0x76d41e);
__builtin_memmove((R+28),(R+0),4);
}
B76d420:{NFSU2_TR(0x76d420);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76d422:{NFSU2_TR(0x76d422);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76d423:{NFSU2_TR(0x76d423);
if(r1(R+518)){{goto L76d45f;}}
}
B76d425:L76d425:{c.instructions+=7;NFSU2_TR(0x76d425);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d426:{NFSU2_TR(0x76d426);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d427:{NFSU2_TR(0x76d427);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d428:{NFSU2_TR(0x76d428);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76d42b:{NFSU2_TR(0x76d42b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B76d432:{NFSU2_TR(0x76d432);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76d435:{NFSU2_TR(0x76d435);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76d43aull));
TAIL_STATIC(0x76e5d1u,76e);
}
B76d43a:L76d43a:{c.instructions+=4;NFSU2_TR(0x76d43a);
__builtin_memmove((R+24),(R+0),4);
}
B76d43c:{NFSU2_TR(0x76d43c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B76d43f:{NFSU2_TR(0x76d43f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76d441:{NFSU2_TR(0x76d441);
if(r1(R+518)){{goto L76d458;}}
}
B76d443:L76d443:{c.instructions+=2;NFSU2_TR(0x76d443);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d444:{NFSU2_TR(0x76d444);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76d449ull));
TAIL_STATIC(0x75c6c8u,75c);
}
B76d449:L76d449:{c.instructions+=5;NFSU2_TR(0x76d449);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76d44b:{NFSU2_TR(0x76d44b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76d44c:{NFSU2_TR(0x76d44c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76d44f:{NFSU2_TR(0x76d44f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B76d451:{NFSU2_TR(0x76d451);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76d472;}}
}
B76d453:L76d453:{c.instructions+=2;NFSU2_TR(0x76d453);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76d456:{NFSU2_TR(0x76d456);
if(r1(R+518)){{goto L76d45f;}}
}
B76d458:L76d458:{c.instructions+=2;NFSU2_TR(0x76d458);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d459:{NFSU2_TR(0x76d459);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76d45eull));
TAIL_STATIC(0x75c6dau,75c);
}
B76d45e:L76d45e:{c.instructions+=1;NFSU2_TR(0x76d45e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76d45f:L76d45f:{c.instructions+=1;NFSU2_TR(0x76d45f);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B76d462:L76d462:{c.instructions+=6;NFSU2_TR(0x76d462);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76d465:{NFSU2_TR(0x76d465);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(U+4))));
}
B76d468:{NFSU2_TR(0x76d468);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B76d469:{NFSU2_TR(0x76d469);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76d46a:{NFSU2_TR(0x76d46a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B76d46b:{NFSU2_TR(0x76d46b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76d470ull));
TAIL_STATIC(0x76115eu,761);
}
B76d470:L76d470:{c.instructions+=2;NFSU2_TR(0x76d470);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B76d471:{NFSU2_TR(0x76d471);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76d472:L76d472:{c.instructions+=4;NFSU2_TR(0x76d472);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d473:{NFSU2_TR(0x76d473);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d474:{NFSU2_TR(0x76d474);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d475:{NFSU2_TR(0x76d475);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76d47aull));
TAIL_STATIC(0x75c840u,75c);
}
B76d47a:L76d47a:{c.instructions+=3;NFSU2_TR(0x76d47a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B76d47d:{NFSU2_TR(0x76d47d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76d480:{NFSU2_TR(0x76d480);
if(r1(R+518)){{goto L76d4d6;}}
}
B76d482:L76d482:{c.instructions+=2;NFSU2_TR(0x76d482);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d483:{NFSU2_TR(0x76d483);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76d488ull));
TAIL_STATIC(0x75c6dau,75c);
}
B76d488:L76d488:{c.instructions+=2;NFSU2_TR(0x76d488);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76d489:{NFSU2_TR(0x76d489);
{goto L76d4d6;}
}
B76d48b:L76d48b:{c.instructions+=2;NFSU2_TR(0x76d48b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76d48e:{NFSU2_TR(0x76d48e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76d45fu);}goto L76d45f;}}
}
B76d490:L76d490:{c.instructions+=7;NFSU2_TR(0x76d490);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d491:{NFSU2_TR(0x76d491);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d493:{NFSU2_TR(0x76d493);
w4(R+28,u32(0x8b8898ull));
}
B76d498:{NFSU2_TR(0x76d498);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d499:{NFSU2_TR(0x76d499);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76d49c:{NFSU2_TR(0x76d49c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76d49f:{NFSU2_TR(0x76d49f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76d4a4ull));
TAIL_STATIC(0x76e4a1u,76e);
}
B76d4a4:L76d4a4:{c.instructions+=3;NFSU2_TR(0x76d4a4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B76d4a7:{NFSU2_TR(0x76d4a7);
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
B76d4a9:{NFSU2_TR(0x76d4a9);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76d45fu);}goto L76d45f;}}
}
B76d4ab:L76d4ab:{c.instructions+=2;NFSU2_TR(0x76d4ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B76d4ae:{NFSU2_TR(0x76d4ae);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
s1(u32(r4(R+24)),r1(U+0));
}
B76d4b0:L76d4b0:{c.instructions+=4;NFSU2_TR(0x76d4b0);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+12),(U+0),1);
}
B76d4b2:{NFSU2_TR(0x76d4b2);
w4(R+0,u32(r1(R+12)));
}
B76d4b5:{NFSU2_TR(0x76d4b5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d4b6:{NFSU2_TR(0x76d4b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76d4bbull));
TAIL_STATIC(0x75df39u,75d);
}
B76d4bb:L76d4bb:{c.instructions+=3;NFSU2_TR(0x76d4bb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76d4bd:{NFSU2_TR(0x76d4bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76d4be:{NFSU2_TR(0x76d4be);
if(r1(R+518)){{goto L76d4d6;}}
}
B76d4c0:L76d4c0:{c.instructions+=10;NFSU2_TR(0x76d4c0);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B76d4c2:{NFSU2_TR(0x76d4c2);
w1(R+4,u8(0xaull));
}
B76d4c4:{NFSU2_TR(0x76d4c4);
u8 U[4];
w2(U+0,u16(s16(s8(r1(R+0)))));
w2(U+2,u16(s16(s8(r1(R+4)))));
w2(R+0,u16(u32(r2(U+0))*u32(r2(U+2))));
}
B76d4c6:{NFSU2_TR(0x76d4c6);
w1(R+0,u8(u32(r1(R+0))+u32(r1(R+12))));
}
B76d4c8:{NFSU2_TR(0x76d4c8);
w1(R+0,u8(u32(r1(R+0))-u32(u8(0x30ull))));
}
B76d4ca:{NFSU2_TR(0x76d4ca);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B76d4cb:{NFSU2_TR(0x76d4cb);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B76d4cc:{NFSU2_TR(0x76d4cc);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x8b88a0ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x8b88a0ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x8b88a0ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B76d4d2:{NFSU2_TR(0x76d4d2);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+24)),r1(U+0));
}
B76d4d4:{NFSU2_TR(0x76d4d4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76d4b0u);}goto L76d4b0;}}
}
B76d4d6:L76d4d6:{c.instructions+=2;NFSU2_TR(0x76d4d6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B76d4d8:{NFSU2_TR(0x76d4d8);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76d462u);}goto L76d462;}
}
B76d4da:L76d4da:{c.instructions+=5;NFSU2_TR(0x76d4da);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d4db:{NFSU2_TR(0x76d4db);
__builtin_memmove((R+20),(R+16),4);
}
B76d4dd:{NFSU2_TR(0x76d4dd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d4de:{NFSU2_TR(0x76d4de);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d4df:{NFSU2_TR(0x76d4df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76d4e4ull));
TAIL_STATIC(0x761e3cu,761);
}
B76d4e4:L76d4e4:{c.instructions+=3;NFSU2_TR(0x76d4e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B76d4e7:{NFSU2_TR(0x76d4e7);
u8 U[8];
__builtin_memmove((U+0),gp(0x819d24),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76d4ed:{NFSU2_TR(0x76d4ed);
if(r1(R+518)){{goto L76d4f6;}}
}
B76d4ef:L76d4ef:{c.instructions+=1;NFSU2_TR(0x76d4ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76d4f4ull));
TAIL_STATIC(0x75e3d3u,75e);
}
B76d4f4:L76d4f4:{c.instructions+=1;NFSU2_TR(0x76d4f4);
__builtin_memmove((R+12),(R+0),4);
}
B76d4f6:L76d4f6:{c.instructions+=2;NFSU2_TR(0x76d4f6);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76d4fa:{NFSU2_TR(0x76d4fa);
if(r1(R+518)){{goto L76d554;}}
}
B76d4fc:L76d4fc:{c.instructions+=2;NFSU2_TR(0x76d4fc);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76d500:{NFSU2_TR(0x76d500);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76d515;}}
}
B76d502:L76d502:{c.instructions+=4;NFSU2_TR(0x76d502);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76d505:{NFSU2_TR(0x76d505);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76d508:{NFSU2_TR(0x76d508);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76d50b:{NFSU2_TR(0x76d50b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76d510ull));
TAIL_STATIC(0x76e720u,76e);
}
B76d510:L76d510:{c.instructions+=2;NFSU2_TR(0x76d510);
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
B76d513:{NFSU2_TR(0x76d513);
{goto L76d556;}
}
B76d515:L76d515:{c.instructions+=4;NFSU2_TR(0x76d515);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d516:{NFSU2_TR(0x76d516);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B76d519:{NFSU2_TR(0x76d519);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d51a:{NFSU2_TR(0x76d51a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B76d51d:L76d51d:{c.instructions+=4;NFSU2_TR(0x76d51d);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+0,u32(r1(U+0)));
}
B76d520:{NFSU2_TR(0x76d520);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d521:{NFSU2_TR(0x76d521);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d522:{NFSU2_TR(0x76d522);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76d527ull));
TAIL_STATIC(0x75de10u,75d);
}
B76d527:L76d527:{c.instructions+=6;NFSU2_TR(0x76d527);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76d52a:{NFSU2_TR(0x76d52a);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+0,u32(r1(U+0)));
}
B76d52d:{NFSU2_TR(0x76d52d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d52e:{NFSU2_TR(0x76d52e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d52f:{NFSU2_TR(0x76d52f);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B76d530:{NFSU2_TR(0x76d530);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76d535ull));
TAIL_STATIC(0x75de10u,75d);
}
B76d535:L76d535:{c.instructions+=5;NFSU2_TR(0x76d535);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B76d538:{NFSU2_TR(0x76d538);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B76d539:{NFSU2_TR(0x76d539);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76d53c:{NFSU2_TR(0x76d53c);
__builtin_memmove((R+4),(R+0),4);
}
B76d53e:{NFSU2_TR(0x76d53e);
if(r1(R+518)){{goto L76d54b;}}
}
B76d540:L76d540:{c.instructions+=2;NFSU2_TR(0x76d540);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76d544:{NFSU2_TR(0x76d544);
if(r1(R+518)){{goto L76d54b;}}
}
B76d546:L76d546:{c.instructions+=2;NFSU2_TR(0x76d546);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76d549:{NFSU2_TR(0x76d549);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76d51du);}goto L76d51d;}}
}
B76d54b:L76d54b:{c.instructions+=5;NFSU2_TR(0x76d54b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76d54e:{NFSU2_TR(0x76d54e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B76d54f:{NFSU2_TR(0x76d54f);
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
B76d551:{NFSU2_TR(0x76d551);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76d552:{NFSU2_TR(0x76d552);
{goto L76d556;}
}
B76d554:L76d554:{c.instructions+=1;NFSU2_TR(0x76d554);
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
B76d556:L76d556:{c.instructions+=3;NFSU2_TR(0x76d556);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B76d557:{NFSU2_TR(0x76d557);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B76d558:{NFSU2_TR(0x76d558);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76d559:L76d559:{c.instructions+=9;NFSU2_TR(0x76d559);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d55a:{NFSU2_TR(0x76d55a);
__builtin_memmove((R+20),(R+16),4);
}
B76d55c:{NFSU2_TR(0x76d55c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d55d:{NFSU2_TR(0x76d55d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d55e:{NFSU2_TR(0x76d55e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d55f:{NFSU2_TR(0x76d55f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B76d562:{NFSU2_TR(0x76d562);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B76d564:{NFSU2_TR(0x76d564);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76d566:{NFSU2_TR(0x76d566);
if(r1(R+518)){{goto L76d57d;}}
}
B76d568:L76d568:{c.instructions+=2;NFSU2_TR(0x76d568);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76d56b:{NFSU2_TR(0x76d56b);
if(r1(R+518)){{goto L76d57d;}}
}
B76d56d:L76d56d:{c.instructions+=3;NFSU2_TR(0x76d56d);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+0),(U+0),1);
}
B76d56f:{NFSU2_TR(0x76d56f);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B76d571:{NFSU2_TR(0x76d571);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76d584;}}
}
B76d573:L76d573:{c.instructions+=3;NFSU2_TR(0x76d573);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76d576:{NFSU2_TR(0x76d576);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76d578:{NFSU2_TR(0x76d578);
if(r1(R+518)){{goto L76d57d;}}
}
B76d57a:L76d57a:{c.instructions+=1;NFSU2_TR(0x76d57a);
u8 U[2];
__builtin_memmove((U+0),(R+12),2);
s2(u32(r4(R+0)),r2(U+0));
}
B76d57d:L76d57d:{c.instructions+=1;NFSU2_TR(0x76d57d);
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
B76d57f:L76d57f:{c.instructions+=5;NFSU2_TR(0x76d57f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B76d580:{NFSU2_TR(0x76d580);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76d581:{NFSU2_TR(0x76d581);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B76d582:{NFSU2_TR(0x76d582);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B76d583:{NFSU2_TR(0x76d583);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76d584:L76d584:{c.instructions+=3;NFSU2_TR(0x76d584);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B76d587:{NFSU2_TR(0x76d587);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76d58a:{NFSU2_TR(0x76d58a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76d59f;}}
}
B76d58c:L76d58c:{c.instructions+=3;NFSU2_TR(0x76d58c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76d58f:{NFSU2_TR(0x76d58f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76d591:{NFSU2_TR(0x76d591);
if(r1(R+518)){{goto L76d59a;}}
}
B76d593:L76d593:{c.instructions+=2;NFSU2_TR(0x76d593);
w2(R+0,u16(r1(R+0)));
}
B76d597:{NFSU2_TR(0x76d597);
u8 U[2];
__builtin_memmove((U+0),(R+0),2);
s2(u32(r4(R+4)),r2(U+0));
}
B76d59a:L76d59a:{c.instructions+=3;NFSU2_TR(0x76d59a);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B76d59c:{NFSU2_TR(0x76d59c);
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
B76d59d:{NFSU2_TR(0x76d59d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76d57fu);}goto L76d57f;}
}
B76d59f:L76d59f:{c.instructions+=4;NFSU2_TR(0x76d59f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76d5a2:{NFSU2_TR(0x76d5a2);
w4(R+0,u32(r1(R+0)));
}
B76d5a5:{NFSU2_TR(0x76d5a5);
u8 U[14];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x80ull))));
w1(R+518,u8((r1(U+13))==(u8(0x0ull))));
}
B76d5aa:{NFSU2_TR(0x76d5aa);
if(r1(R+518)){{goto L76d5e8;}}
}
B76d5ac:L76d5ac:{c.instructions+=3;NFSU2_TR(0x76d5ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76d5af:{NFSU2_TR(0x76d5af);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76d5b2:{NFSU2_TR(0x76d5b2);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L76d5d6;}}
}
B76d5b4:L76d5b4:{c.instructions+=2;NFSU2_TR(0x76d5b4);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+0)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B76d5b7:{NFSU2_TR(0x76d5b7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L76d5d6;}}
}
B76d5b9:L76d5b9:{c.instructions+=10;NFSU2_TR(0x76d5b9);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B76d5bb:{NFSU2_TR(0x76d5bb);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+12)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B76d5be:{NFSU2_TR(0x76d5be);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B76d5c1:{NFSU2_TR(0x76d5c1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d5c2:{NFSU2_TR(0x76d5c2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76d5c5:{NFSU2_TR(0x76d5c5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d5c6:{NFSU2_TR(0x76d5c6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d5c7:{NFSU2_TR(0x76d5c7);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d5c9:{NFSU2_TR(0x76d5c9);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76d5cc:{NFSU2_TR(0x76d5cc);
u8 U[4];
__builtin_memmove((U+0),gp(0x783130),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76d5d2ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76d5d2:L76d5d2:{c.instructions+=2;NFSU2_TR(0x76d5d2);
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
B76d5d4:{NFSU2_TR(0x76d5d4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76d5e3;}}
}
B76d5d6:L76d5d6:{c.instructions+=3;NFSU2_TR(0x76d5d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76d5d9:{NFSU2_TR(0x76d5d9);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
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
B76d5dc:{NFSU2_TR(0x76d5dc);
if(r1(R+512)){{goto L76d606;}}
}
B76d5de:L76d5de:{c.instructions+=2;NFSU2_TR(0x76d5de);
u8 U[10];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(r1(R+12))));
w1(R+523,sborrow<u8>(r1(U+8),r1(R+12)));
w1(U+9,u8(u32(r1(U+8))-u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B76d5e1:{NFSU2_TR(0x76d5e1);
if(r1(R+518)){{goto L76d606;}}
}
B76d5e3:L76d5e3:{c.instructions+=2;NFSU2_TR(0x76d5e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76d5e6:{NFSU2_TR(0x76d5e6);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76d57fu);}goto L76d57f;}
}
B76d5e8:L76d5e8:{c.instructions+=10;NFSU2_TR(0x76d5e8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B76d5ea:{NFSU2_TR(0x76d5ea);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+12)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B76d5ed:{NFSU2_TR(0x76d5ed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B76d5f0:{NFSU2_TR(0x76d5f0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d5f1:{NFSU2_TR(0x76d5f1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76d5f4:{NFSU2_TR(0x76d5f4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d5f6:{NFSU2_TR(0x76d5f6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d5f7:{NFSU2_TR(0x76d5f7);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d5f9:{NFSU2_TR(0x76d5f9);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76d5fc:{NFSU2_TR(0x76d5fc);
u8 U[4];
__builtin_memmove((U+0),gp(0x783130),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76d602ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76d602:L76d602:{c.instructions+=2;NFSU2_TR(0x76d602);
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
B76d604:{NFSU2_TR(0x76d604);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76d59au);}goto L76d59a;}}
}
B76d606:L76d606:{c.instructions+=1;NFSU2_TR(0x76d606);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76d60bull));
TAIL_STATIC(0x7661bau,766);
}
B76d60b:L76d60b:{c.instructions+=3;NFSU2_TR(0x76d60b);
u8 U[4];
w4(U+0,u32(0x2aull));
s4(u32(r4(R+0)),r4(U+0));
}
B76d611:{NFSU2_TR(0x76d611);
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
B76d614:{NFSU2_TR(0x76d614);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76d57fu);}goto L76d57f;}
}
B76d619:L76d619:{c.instructions+=1;NFSU2_TR(0x76d619);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76d61eull));
TAIL_STATIC(0x761e3cu,761);
}
B76d61e:L76d61e:{c.instructions+=3;NFSU2_TR(0x76d61e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76d621:{NFSU2_TR(0x76d621);
u8 U[8];
__builtin_memmove((U+0),gp(0x819d24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76d627:{NFSU2_TR(0x76d627);
if(r1(R+518)){{goto L76d62e;}}
}
B76d629:L76d629:{c.instructions+=1;NFSU2_TR(0x76d629);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76d62eull));
TAIL_STATIC(0x75e3d3u,75e);
}
B76d62e:L76d62e:{c.instructions+=5;NFSU2_TR(0x76d62e);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76d632:{NFSU2_TR(0x76d632);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76d636:{NFSU2_TR(0x76d636);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76d63a:{NFSU2_TR(0x76d63a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d63b:{NFSU2_TR(0x76d63b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76d640ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76d559u);}goto L76d559;}
}
B76d640:L76d640:{c.instructions+=2;NFSU2_TR(0x76d640);
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
B76d643:{NFSU2_TR(0x76d643);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76d644:L76d644:{c.instructions+=12;NFSU2_TR(0x76d644);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d645:{NFSU2_TR(0x76d645);
__builtin_memmove((R+20),(R+16),4);
}
B76d647:{NFSU2_TR(0x76d647);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B76d64a:{NFSU2_TR(0x76d64a);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B76d64f:{NFSU2_TR(0x76d64f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(U+4))));
}
B76d652:{NFSU2_TR(0x76d652);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d653:{NFSU2_TR(0x76d653);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d654:{NFSU2_TR(0x76d654);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B76d657:{NFSU2_TR(0x76d657);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B76d65b:{NFSU2_TR(0x76d65b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76d65e:{NFSU2_TR(0x76d65e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d65f:{NFSU2_TR(0x76d65f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76d6f0;}}
}
B76d665:L76d665:{c.instructions+=3;NFSU2_TR(0x76d665);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76d668:{NFSU2_TR(0x76d668);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76d66b:{NFSU2_TR(0x76d66b);
if(r1(R+518)){{goto L76d684;}}
}
B76d66d:L76d66d:{c.instructions+=7;NFSU2_TR(0x76d66d);
__builtin_memmove((R+4),(R+0),4);
}
B76d66f:{NFSU2_TR(0x76d66f);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B76d672:{NFSU2_TR(0x76d672);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8ba4c0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B76d679:{NFSU2_TR(0x76d679);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1full))));
}
B76d67c:{NFSU2_TR(0x76d67c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B76d67f:{NFSU2_TR(0x76d67f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B76d682:{NFSU2_TR(0x76d682);
{goto L76d689;}
}
B76d684:L76d684:{c.instructions+=1;NFSU2_TR(0x76d684);
w4(R+0,u32(0x81a2f0ull));
}
B76d689:L76d689:{c.instructions+=2;NFSU2_TR(0x76d689);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(u8(0x80ull))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B76d68d:{NFSU2_TR(0x76d68d);
if(r1(R+518)){{goto L76d6f0;}}
}
B76d68f:L76d68f:{c.instructions+=4;NFSU2_TR(0x76d68f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76d692:{NFSU2_TR(0x76d692);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76d695:{NFSU2_TR(0x76d695);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d696:{NFSU2_TR(0x76d696);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76d69bull));
TAIL_STATIC(0x76cab5u,76c);
}
B76d69b:L76d69b:{c.instructions+=5;NFSU2_TR(0x76d69b);
__builtin_memmove((R+12),(R+0),4);
}
B76d69d:{NFSU2_TR(0x76d69d);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B76d6a0:{NFSU2_TR(0x76d6a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76d6a1:{NFSU2_TR(0x76d6a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76d6a2:{NFSU2_TR(0x76d6a2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76d6b5;}}
}
B76d6a4:L76d6a4:{c.instructions+=1;NFSU2_TR(0x76d6a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76d6a9ull));
TAIL_STATIC(0x7661bau,766);
}
B76d6a9:L76d6a9:{c.instructions+=1;NFSU2_TR(0x76d6a9);
u8 U[4];
w4(U+0,u32(0x2aull));
s4(u32(r4(R+0)),r4(U+0));
}
B76d6af:L76d6af:{c.instructions+=2;NFSU2_TR(0x76d6af);
w2(R+0,u16(u32(r2(R+0))|u32(u16(0xffffull))));
}
B76d6b3:{NFSU2_TR(0x76d6b3);
{goto L76d710;}
}
B76d6b5:L76d6b5:{c.instructions+=3;NFSU2_TR(0x76d6b5);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B76d6b7:{NFSU2_TR(0x76d6b7);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76d6b9:{NFSU2_TR(0x76d6b9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L76d6ea;}}
}
B76d6bb:L76d6bb:{c.instructions+=2;NFSU2_TR(0x76d6bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B76d6be:{NFSU2_TR(0x76d6be);
if(r1(R+519)){{goto L76d6d2;}}
}
B76d6c0:L76d6c0:{c.instructions+=8;NFSU2_TR(0x76d6c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B76d6c2:{NFSU2_TR(0x76d6c2);
u8 U[13];
w4(U+0,u32(u32(u32(0xfffffff4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+4),(U+12),1);
}
B76d6c6:{NFSU2_TR(0x76d6c6);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+0)),r1(U+0));
}
B76d6c8:{NFSU2_TR(0x76d6c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B76d6ca:{NFSU2_TR(0x76d6ca);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w4(R+0,u32(r1(U+0)));
}
B76d6cd:{NFSU2_TR(0x76d6cd);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B76d6ce:{NFSU2_TR(0x76d6ce);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B76d6d0:{NFSU2_TR(0x76d6d0);
{goto L76d6e0;}
}
B76d6d2:L76d6d2:{c.instructions+=4;NFSU2_TR(0x76d6d2);
u8 U[13];
w4(U+0,u32(u32(u32(0xfffffff4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+0,u32(s32(s8(r1(U+12)))));
}
B76d6d7:{NFSU2_TR(0x76d6d7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d6d8:{NFSU2_TR(0x76d6d8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d6d9:{NFSU2_TR(0x76d6d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76d6deull));
TAIL_STATIC(0x763d60u,763);
}
B76d6de:L76d6de:{c.instructions+=2;NFSU2_TR(0x76d6de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76d6df:{NFSU2_TR(0x76d6df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76d6e0:L76d6e0:{c.instructions+=2;NFSU2_TR(0x76d6e0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76d6e3:{NFSU2_TR(0x76d6e3);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76d6afu);}goto L76d6af;}}
}
B76d6e5:L76d6e5:{c.instructions+=3;NFSU2_TR(0x76d6e5);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B76d6e6:{NFSU2_TR(0x76d6e6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B76d6e8:{NFSU2_TR(0x76d6e8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76d6bbu);}goto L76d6bb;}}
}
B76d6ea:L76d6ea:{c.instructions+=2;NFSU2_TR(0x76d6ea);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B76d6ee:{NFSU2_TR(0x76d6ee);
{goto L76d710;}
}
B76d6f0:L76d6f0:{c.instructions+=2;NFSU2_TR(0x76d6f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0xfffffffeull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B76d6f4:{NFSU2_TR(0x76d6f4);
if(r1(R+519)){{goto L76d703;}}
}
B76d6f6:L76d6f6:{c.instructions+=5;NFSU2_TR(0x76d6f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B76d6f8:{NFSU2_TR(0x76d6f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76d6fb:{NFSU2_TR(0x76d6fb);
u8 U[2];
__builtin_memmove((U+0),(R+0),2);
s2(u32(r4(R+4)),r2(U+0));
}
B76d6fe:{NFSU2_TR(0x76d6fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x2ull))));
s4(u32(r4(R+24)),r4(U+0));
}
B76d701:{NFSU2_TR(0x76d701);
{goto L76d710;}
}
B76d703:L76d703:{c.instructions+=4;NFSU2_TR(0x76d703);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B76d707:{NFSU2_TR(0x76d707);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d708:{NFSU2_TR(0x76d708);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d709:{NFSU2_TR(0x76d709);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76d70eull));
TAIL_STATIC(0x76e781u,76e);
}
B76d70e:L76d70e:{c.instructions+=2;NFSU2_TR(0x76d70e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76d70f:{NFSU2_TR(0x76d70f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76d710:L76d710:{c.instructions+=6;NFSU2_TR(0x76d710);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76d713:{NFSU2_TR(0x76d713);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(U+4))));
}
B76d716:{NFSU2_TR(0x76d716);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B76d717:{NFSU2_TR(0x76d717);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76d718:{NFSU2_TR(0x76d718);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B76d719:{NFSU2_TR(0x76d719);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76d71eull));
TAIL_STATIC(0x76115eu,761);
}
B76d71e:L76d71e:{c.instructions+=2;NFSU2_TR(0x76d71e);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B76d71f:{NFSU2_TR(0x76d71f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76d720:L76d720:{c.instructions+=3;NFSU2_TR(0x76d720);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76d724:{NFSU2_TR(0x76d724);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76d726:{NFSU2_TR(0x76d726);
if(r1(R+518)){{goto L76d733;}}
}
B76d728:L76d728:{c.instructions+=3;NFSU2_TR(0x76d728);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B76d729:{NFSU2_TR(0x76d729);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B76d72c:{NFSU2_TR(0x76d72c);
if(r1(R+518)){{goto L76d734;}}
}
B76d72e:L76d72e:{c.instructions+=3;NFSU2_TR(0x76d72e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B76d72f:{NFSU2_TR(0x76d72f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76d731:{NFSU2_TR(0x76d731);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76d728u);}goto L76d728;}}
}
B76d733:L76d733:{c.instructions+=1;NFSU2_TR(0x76d733);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B76d734:L76d734:{c.instructions+=4;NFSU2_TR(0x76d734);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76d738:{NFSU2_TR(0x76d738);
w1(R+512,u8((r4(R+0))<(r4(R+4))));
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B76d73a:{NFSU2_TR(0x76d73a);
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
B76d73b:{NFSU2_TR(0x76d73b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76d73c:L76d73c:{c.instructions+=3;NFSU2_TR(0x76d73c);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d73e:{NFSU2_TR(0x76d73e);
u8 U[4];
w4(U+0,u32(0x7d98b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d743:{NFSU2_TR(0x76d743);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76d748ull));
TAIL_STATIC(0x760da0u,760);
}
B76d748:L76d748:{c.instructions+=8;NFSU2_TR(0x76d748);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B76d74d:{NFSU2_TR(0x76d74d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(U+4))));
}
B76d750:{NFSU2_TR(0x76d750);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76d753:{NFSU2_TR(0x76d753);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B76d755:{NFSU2_TR(0x76d755);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B76d757:{NFSU2_TR(0x76d757);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B76d758:{NFSU2_TR(0x76d758);
u8 U[14];
__builtin_memmove((U+6),gp(0x8b88a0),4);
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
B76d75e:{NFSU2_TR(0x76d75e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76d792;}}
}
B76d760:L76d760:{c.instructions+=8;NFSU2_TR(0x76d760);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d761:{NFSU2_TR(0x76d761);
w4(R+0,u32(0x7d7d3cull));
}
B76d766:{NFSU2_TR(0x76d766);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d767:{NFSU2_TR(0x76d767);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d768:{NFSU2_TR(0x76d768);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d769:{NFSU2_TR(0x76d769);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d76a:{NFSU2_TR(0x76d76a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d76b:{NFSU2_TR(0x76d76b);
u8 U[4];
__builtin_memmove((U+0),gp(0x783098),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76d771ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76d771:L76d771:{c.instructions+=2;NFSU2_TR(0x76d771);
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
B76d773:{NFSU2_TR(0x76d773);
if(r1(R+518)){{goto L76d77d;}}
}
B76d775:L76d775:{c.instructions+=2;NFSU2_TR(0x76d775);
__builtin_memmove(gp(0x8b88a0),(R+24),4);
}
B76d77b:{NFSU2_TR(0x76d77b);
{goto L76d792;}
}
B76d77d:L76d77d:{c.instructions+=1;NFSU2_TR(0x76d77d);
u8 U[4];
__builtin_memmove((U+0),gp(0x783114),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76d783ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76d783:L76d783:{c.instructions+=2;NFSU2_TR(0x76d783);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x78ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76d786:{NFSU2_TR(0x76d786);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76d792;}}
}
B76d788:L76d788:{c.instructions+=1;NFSU2_TR(0x76d788);
s4(0x8b88a0,u32(0x2ull));
}
B76d792:L76d792:{c.instructions+=2;NFSU2_TR(0x76d792);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+28)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76d795:{NFSU2_TR(0x76d795);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L76d7a6;}}
}
B76d797:L76d797:{c.instructions+=3;NFSU2_TR(0x76d797);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76d79a:{NFSU2_TR(0x76d79a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76d79d:{NFSU2_TR(0x76d79d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76d7a2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76d720u);}goto L76d720;}
}
B76d7a2:L76d7a2:{c.instructions+=2;NFSU2_TR(0x76d7a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76d7a3:{NFSU2_TR(0x76d7a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76d7a6:L76d7a6:{c.instructions+=3;NFSU2_TR(0x76d7a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76d7a9:{NFSU2_TR(0x76d7a9);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76d7ab:{NFSU2_TR(0x76d7ab);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L76d7ba;}}
}
B76d7ad:L76d7ad:{c.instructions+=3;NFSU2_TR(0x76d7ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d7ae:{NFSU2_TR(0x76d7ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76d7b1:{NFSU2_TR(0x76d7b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76d7b6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76d720u);}goto L76d720;}
}
B76d7b6:L76d7b6:{c.instructions+=2;NFSU2_TR(0x76d7b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76d7b7:{NFSU2_TR(0x76d7b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76d7ba:L76d7ba:{c.instructions+=5;NFSU2_TR(0x76d7ba);
__builtin_memmove((R+4),gp(0x8b88a0),4);
}
B76d7c0:{NFSU2_TR(0x76d7c0);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d7c2:{NFSU2_TR(0x76d7c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B76d7c3:{NFSU2_TR(0x76d7c3);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76d7c5:{NFSU2_TR(0x76d7c5);
if(r1(R+518)){{goto L76da04;}}
}
B76d7cb:L76d7cb:{c.instructions+=2;NFSU2_TR(0x76d7cb);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76d7cd:{NFSU2_TR(0x76d7cd);
if(r1(R+518)){{goto L76da04;}}
}
B76d7d3:L76d7d3:{c.instructions+=2;NFSU2_TR(0x76d7d3);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76d7d5:{NFSU2_TR(0x76d7d5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76da31;}}
}
B76d7db:L76d7db:{c.instructions+=5;NFSU2_TR(0x76d7db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76d7de:{NFSU2_TR(0x76d7de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76d7e1:{NFSU2_TR(0x76d7e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76d7e4:{NFSU2_TR(0x76d7e4);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76d7e7:{NFSU2_TR(0x76d7e7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76d7f2;}}
}
B76d7e9:L76d7e9:{c.instructions+=2;NFSU2_TR(0x76d7e9);
__builtin_memmove((R+4),gp(0x8b8844),4);
}
B76d7ef:{NFSU2_TR(0x76d7ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76d7f2:L76d7f2:{c.instructions+=2;NFSU2_TR(0x76d7f2);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76d7f5:{NFSU2_TR(0x76d7f5);
if(r1(R+518)){{goto L76d7ff;}}
}
B76d7f7:L76d7f7:{c.instructions+=2;NFSU2_TR(0x76d7f7);
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
B76d7f9:{NFSU2_TR(0x76d7f9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76d8a8;}}
}
B76d7ff:L76d7ff:{c.instructions+=2;NFSU2_TR(0x76d7ff);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76d802:{NFSU2_TR(0x76d802);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76d80b;}}
}
B76d804:L76d804:{c.instructions+=2;NFSU2_TR(0x76d804);
__builtin_memmove((R+0),(R+12),4);
}
B76d806:{NFSU2_TR(0x76d806);
{goto L76dab2;}
}
B76d80b:L76d80b:{c.instructions+=2;NFSU2_TR(0x76d80b);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76d80d:{NFSU2_TR(0x76d80d);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L76dab0;}}
}
B76d813:L76d813:{c.instructions+=2;NFSU2_TR(0x76d813);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+24))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+24)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B76d816:{NFSU2_TR(0x76d816);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L76d820;}}
}
B76d818:L76d818:{c.instructions+=3;NFSU2_TR(0x76d818);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d81a:{NFSU2_TR(0x76d81a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76d81b:{NFSU2_TR(0x76d81b);
{goto L76dab2;}
}
B76d820:L76d820:{c.instructions+=4;NFSU2_TR(0x76d820);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76d823:{NFSU2_TR(0x76d823);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d824:{NFSU2_TR(0x76d824);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76d827:{NFSU2_TR(0x76d827);
u8 U[4];
__builtin_memmove((U+0),gp(0x7830c4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76d82dull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76d82d:L76d82d:{c.instructions+=2;NFSU2_TR(0x76d82d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76d82f:{NFSU2_TR(0x76d82f);
if(r1(R+518)){{goto L76da31;}}
}
B76d835:L76d835:{c.instructions+=2;NFSU2_TR(0x76d835);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+28)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76d838:{NFSU2_TR(0x76d838);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L76d865;}}
}
B76d83a:L76d83a:{c.instructions+=2;NFSU2_TR(0x76d83a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
}
B76d83d:{NFSU2_TR(0x76d83d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76d818u);}goto L76d818;}}
}
B76d83f:L76d83f:{c.instructions+=3;NFSU2_TR(0x76d83f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffcaull))));
__builtin_memmove((R+0),(U+0),4);
}
B76d842:{NFSU2_TR(0x76d842);
u8 U[7];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffcaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B76d846:{NFSU2_TR(0x76d846);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76d818u);}goto L76d818;}}
}
B76d848:L76d848:{c.instructions+=3;NFSU2_TR(0x76d848);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B76d84b:{NFSU2_TR(0x76d84b);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B76d84d:{NFSU2_TR(0x76d84d);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76d818u);}goto L76d818;}}
}
B76d84f:L76d84f:{c.instructions+=4;NFSU2_TR(0x76d84f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76d852:{NFSU2_TR(0x76d852);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+4),(U+0),1);
}
B76d854:{NFSU2_TR(0x76d854);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(R+512,u8((r1(R+4))<(r1(U+1))));
}
B76d856:{NFSU2_TR(0x76d856);
if(r1(R+512)){{goto L76d85c;}}
}
B76d858:L76d858:{c.instructions+=2;NFSU2_TR(0x76d858);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(R+512,u8((r1(R+4))<(r1(U+0))));
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B76d85a:{NFSU2_TR(0x76d85a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76d804u);}goto L76d804;}}
}
B76d85c:L76d85c:{c.instructions+=3;NFSU2_TR(0x76d85c);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B76d85e:{NFSU2_TR(0x76d85e);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B76d861:{NFSU2_TR(0x76d861);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76d848u);}goto L76d848;}}
}
B76d863:L76d863:{c.instructions+=1;NFSU2_TR(0x76d863);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76d818u);}goto L76d818;}
}
B76d865:L76d865:{c.instructions+=2;NFSU2_TR(0x76d865);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
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
B76d868:{NFSU2_TR(0x76d868);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L76d8a8;}}
}
B76d86a:L76d86a:{c.instructions+=2;NFSU2_TR(0x76d86a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
}
B76d86d:{NFSU2_TR(0x76d86d);
if(r1(R+512)){{goto L76dab0;}}
}
B76d873:L76d873:{c.instructions+=3;NFSU2_TR(0x76d873);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffcaull))));
__builtin_memmove((R+0),(U+0),4);
}
B76d876:{NFSU2_TR(0x76d876);
u8 U[7];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffcaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B76d87a:{NFSU2_TR(0x76d87a);
if(r1(R+518)){{goto L76dab0;}}
}
B76d880:L76d880:{c.instructions+=3;NFSU2_TR(0x76d880);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B76d883:{NFSU2_TR(0x76d883);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B76d885:{NFSU2_TR(0x76d885);
if(r1(R+518)){{goto L76dab0;}}
}
B76d88b:L76d88b:{c.instructions+=4;NFSU2_TR(0x76d88b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76d88e:{NFSU2_TR(0x76d88e);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+4),(U+0),1);
}
B76d890:{NFSU2_TR(0x76d890);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(R+512,u8((r1(R+4))<(r1(U+1))));
}
B76d892:{NFSU2_TR(0x76d892);
if(r1(R+512)){{goto L76d89c;}}
}
B76d894:L76d894:{c.instructions+=2;NFSU2_TR(0x76d894);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(R+512,u8((r1(R+4))<(r1(U+0))));
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B76d896:{NFSU2_TR(0x76d896);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76d804u);}goto L76d804;}}
}
B76d89c:L76d89c:{c.instructions+=3;NFSU2_TR(0x76d89c);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B76d89e:{NFSU2_TR(0x76d89e);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B76d8a1:{NFSU2_TR(0x76d8a1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76d880u);}goto L76d880;}}
}
B76d8a3:L76d8a3:{c.instructions+=1;NFSU2_TR(0x76d8a3);
{goto L76dab0;}
}
B76d8a8:L76d8a8:{c.instructions+=7;NFSU2_TR(0x76d8a8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d8a9:{NFSU2_TR(0x76d8a9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d8aa:{NFSU2_TR(0x76d8aa);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76d8ad:{NFSU2_TR(0x76d8ad);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76d8b0:{NFSU2_TR(0x76d8b0);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d8b2:{NFSU2_TR(0x76d8b2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76d8b5:{NFSU2_TR(0x76d8b5);
u8 U[4];
__builtin_memmove((U+0),gp(0x783130),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76d8bbull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76d8bb:L76d8bb:{c.instructions+=4;NFSU2_TR(0x76d8bb);
__builtin_memmove((R+12),(R+0),4);
}
B76d8bd:{NFSU2_TR(0x76d8bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76d8c0:{NFSU2_TR(0x76d8c0);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76d8c2:{NFSU2_TR(0x76d8c2);
if(r1(R+518)){{goto L76da31;}}
}
B76d8c8:L76d8c8:{c.instructions+=5;NFSU2_TR(0x76d8c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76d8cb:{NFSU2_TR(0x76d8cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B76d8ce:{NFSU2_TR(0x76d8ce);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
}
B76d8d1:{NFSU2_TR(0x76d8d1);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffffcull))));
}
B76d8d4:{NFSU2_TR(0x76d8d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76d8d9ull));
TAIL_STATIC(0x75c4d0u,75c);
}
B76d8d9:L76d8d9:{c.instructions+=5;NFSU2_TR(0x76d8d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76d8dc:{NFSU2_TR(0x76d8dc);
__builtin_memmove((R+0),(R+16),4);
}
B76d8de:{NFSU2_TR(0x76d8de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76d8e1:{NFSU2_TR(0x76d8e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76d8e5:{NFSU2_TR(0x76d8e5);
{goto L76d903;}
}
B76d8e7:L76d8e7:{c.instructions+=3;NFSU2_TR(0x76d8e7);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B76d8e9:{NFSU2_TR(0x76d8e9);
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
B76d8ea:{NFSU2_TR(0x76d8ea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76d8eb:L76d8eb:{c.instructions+=2;NFSU2_TR(0x76d8eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+16),(U+4),4);
}
B76d8ee:{NFSU2_TR(0x76d8ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76d8f3ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76d2d8u);}goto L76d2d8;}
}
B76d8f3:L76d8f3:{c.instructions+=6;NFSU2_TR(0x76d8f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76d8f7:{NFSU2_TR(0x76d8f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76d8fb:{NFSU2_TR(0x76d8fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B76d8fe:{NFSU2_TR(0x76d8fe);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B76d900:{NFSU2_TR(0x76d900);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B76d901:{NFSU2_TR(0x76d901);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B76d903:L76d903:{c.instructions+=3;NFSU2_TR(0x76d903);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76d906:{NFSU2_TR(0x76d906);
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
B76d908:{NFSU2_TR(0x76d908);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76d922;}}
}
B76d90a:L76d90a:{c.instructions+=3;NFSU2_TR(0x76d90a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B76d90d:{NFSU2_TR(0x76d90d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d90e:{NFSU2_TR(0x76d90e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76d913ull));
TAIL_STATIC(0x75c6c8u,75c);
}
B76d913:L76d913:{c.instructions+=4;NFSU2_TR(0x76d913);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76d914:{NFSU2_TR(0x76d914);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76d917:{NFSU2_TR(0x76d917);
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
B76d919:{NFSU2_TR(0x76d919);
if(r1(R+518)){{goto L76da31;}}
}
B76d91f:L76d91f:{c.instructions+=1;NFSU2_TR(0x76d91f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76d922:L76d922:{c.instructions+=7;NFSU2_TR(0x76d922);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d923:{NFSU2_TR(0x76d923);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d924:{NFSU2_TR(0x76d924);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76d927:{NFSU2_TR(0x76d927);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76d92a:{NFSU2_TR(0x76d92a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d92b:{NFSU2_TR(0x76d92b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76d92e:{NFSU2_TR(0x76d92e);
u8 U[4];
__builtin_memmove((U+0),gp(0x783130),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76d934ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76d934:L76d934:{c.instructions+=2;NFSU2_TR(0x76d934);
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
B76d936:{NFSU2_TR(0x76d936);
if(r1(R+518)){{goto L76d9ed;}}
}
B76d93c:L76d93c:{c.instructions+=7;NFSU2_TR(0x76d93c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d93e:{NFSU2_TR(0x76d93e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d940:{NFSU2_TR(0x76d940);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76d943:{NFSU2_TR(0x76d943);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76d946:{NFSU2_TR(0x76d946);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d948:{NFSU2_TR(0x76d948);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76d94b:{NFSU2_TR(0x76d94b);
u8 U[4];
__builtin_memmove((U+0),gp(0x783130),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76d951ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76d951:L76d951:{c.instructions+=4;NFSU2_TR(0x76d951);
__builtin_memmove((R+24),(R+0),4);
}
B76d953:{NFSU2_TR(0x76d953);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76d956:{NFSU2_TR(0x76d956);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76d958:{NFSU2_TR(0x76d958);
if(r1(R+518)){{goto L76d9ed;}}
}
B76d95e:L76d95e:{c.instructions+=5;NFSU2_TR(0x76d95e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B76d965:{NFSU2_TR(0x76d965);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B76d968:{NFSU2_TR(0x76d968);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
}
B76d96b:{NFSU2_TR(0x76d96b);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffffcull))));
}
B76d96e:{NFSU2_TR(0x76d96e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76d973ull));
TAIL_STATIC(0x75c4d0u,75c);
}
B76d973:L76d973:{c.instructions+=5;NFSU2_TR(0x76d973);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76d976:{NFSU2_TR(0x76d976);
__builtin_memmove((R+28),(R+16),4);
}
B76d978:{NFSU2_TR(0x76d978);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76d97b:{NFSU2_TR(0x76d97b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76d97f:{NFSU2_TR(0x76d97f);
{goto L76d999;}
}
B76d981:L76d981:{c.instructions+=3;NFSU2_TR(0x76d981);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B76d983:{NFSU2_TR(0x76d983);
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
B76d984:{NFSU2_TR(0x76d984);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76d985:L76d985:{c.instructions+=2;NFSU2_TR(0x76d985);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+16),(U+4),4);
}
B76d988:{NFSU2_TR(0x76d988);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76d98dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76d2d8u);}goto L76d2d8;}
}
B76d98d:L76d98d:{c.instructions+=4;NFSU2_TR(0x76d98d);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B76d98f:{NFSU2_TR(0x76d98f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76d993:{NFSU2_TR(0x76d993);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B76d996:{NFSU2_TR(0x76d996);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B76d999:L76d999:{c.instructions+=2;NFSU2_TR(0x76d999);
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
B76d99b:{NFSU2_TR(0x76d99b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76d9b4;}}
}
B76d99d:L76d99d:{c.instructions+=3;NFSU2_TR(0x76d99d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B76d9a0:{NFSU2_TR(0x76d9a0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d9a1:{NFSU2_TR(0x76d9a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76d9a6ull));
TAIL_STATIC(0x75c6c8u,75c);
}
B76d9a6:L76d9a6:{c.instructions+=4;NFSU2_TR(0x76d9a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76d9a7:{NFSU2_TR(0x76d9a7);
__builtin_memmove((R+28),(R+0),4);
}
B76d9a9:{NFSU2_TR(0x76d9a9);
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
B76d9ab:{NFSU2_TR(0x76d9ab);
if(r1(R+518)){{goto L76d9ed;}}
}
B76d9ad:L76d9ad:{c.instructions+=1;NFSU2_TR(0x76d9ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B76d9b4:L76d9b4:{c.instructions+=7;NFSU2_TR(0x76d9b4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d9b5:{NFSU2_TR(0x76d9b5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d9b6:{NFSU2_TR(0x76d9b6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76d9b9:{NFSU2_TR(0x76d9b9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76d9bc:{NFSU2_TR(0x76d9bc);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d9be:{NFSU2_TR(0x76d9be);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76d9c1:{NFSU2_TR(0x76d9c1);
u8 U[4];
__builtin_memmove((U+0),gp(0x783130),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76d9c7ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76d9c7:L76d9c7:{c.instructions+=2;NFSU2_TR(0x76d9c7);
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
B76d9c9:{NFSU2_TR(0x76d9c9);
if(r1(R+518)){{goto L76d9e0;}}
}
B76d9cb:L76d9cb:{c.instructions+=7;NFSU2_TR(0x76d9cb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d9cc:{NFSU2_TR(0x76d9cc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d9cd:{NFSU2_TR(0x76d9cd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d9ce:{NFSU2_TR(0x76d9ce);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76d9d1:{NFSU2_TR(0x76d9d1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76d9d4:{NFSU2_TR(0x76d9d4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76d9d7:{NFSU2_TR(0x76d9d7);
u8 U[4];
__builtin_memmove((U+0),gp(0x783098),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76d9ddull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76d9dd:L76d9dd:{c.instructions+=1;NFSU2_TR(0x76d9dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76d9e0:L76d9e0:{c.instructions+=2;NFSU2_TR(0x76d9e0);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76d9e4:{NFSU2_TR(0x76d9e4);
if(r1(R+518)){{goto L76d9ed;}}
}
B76d9e6:L76d9e6:{c.instructions+=2;NFSU2_TR(0x76d9e6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76d9e7:{NFSU2_TR(0x76d9e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76d9ecull));
TAIL_STATIC(0x75c6dau,75c);
}
B76d9ec:L76d9ec:{c.instructions+=1;NFSU2_TR(0x76d9ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76d9ed:L76d9ed:{c.instructions+=2;NFSU2_TR(0x76d9ed);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76d9f1:{NFSU2_TR(0x76d9f1);
if(r1(R+518)){{goto L76d9fc;}}
}
B76d9f3:L76d9f3:{c.instructions+=2;NFSU2_TR(0x76d9f3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76d9f6:{NFSU2_TR(0x76d9f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76d9fbull));
TAIL_STATIC(0x75c6dau,75c);
}
B76d9fb:L76d9fb:{c.instructions+=1;NFSU2_TR(0x76d9fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76d9fc:L76d9fc:{c.instructions+=2;NFSU2_TR(0x76d9fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76d9ff:{NFSU2_TR(0x76d9ff);
{goto L76dab2;}
}
B76da04:L76da04:{c.instructions+=3;NFSU2_TR(0x76da04);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76da07:{NFSU2_TR(0x76da07);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76da0a:{NFSU2_TR(0x76da0a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76da14;}}
}
B76da0c:L76da0c:{c.instructions+=2;NFSU2_TR(0x76da0c);
__builtin_memmove((R+0),gp(0x8b8834),4);
}
B76da11:{NFSU2_TR(0x76da11);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76da14:L76da14:{c.instructions+=3;NFSU2_TR(0x76da14);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B76da17:{NFSU2_TR(0x76da17);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76da19:{NFSU2_TR(0x76da19);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76da21;}}
}
B76da1b:L76da1b:{c.instructions+=1;NFSU2_TR(0x76da1b);
__builtin_memmove((R+12),gp(0x8b8844),4);
}
B76da21:L76da21:{c.instructions+=2;NFSU2_TR(0x76da21);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76da24:{NFSU2_TR(0x76da24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76da29ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76d0c0u);}goto L76d0c0;}
}
B76da29:L76da29:{c.instructions+=4;NFSU2_TR(0x76da29);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76da2a:{NFSU2_TR(0x76da2a);
__builtin_memmove((R+24),(R+0),4);
}
B76da2c:{NFSU2_TR(0x76da2c);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76da2f:{NFSU2_TR(0x76da2f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76da35;}}
}
B76da31:L76da31:{c.instructions+=2;NFSU2_TR(0x76da31);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B76da33:{NFSU2_TR(0x76da33);
{goto L76dab2;}
}
B76da35:L76da35:{c.instructions+=2;NFSU2_TR(0x76da35);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B76da37:{NFSU2_TR(0x76da37);
if(r1(R+518)){{goto L76da82;}}
}
B76da39:L76da39:{c.instructions+=8;NFSU2_TR(0x76da39);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76da3b:{NFSU2_TR(0x76da3b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76da3d:{NFSU2_TR(0x76da3d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76da40:{NFSU2_TR(0x76da40);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76da41:{NFSU2_TR(0x76da41);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76da44:{NFSU2_TR(0x76da44);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76da45:{NFSU2_TR(0x76da45);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76da46:{NFSU2_TR(0x76da46);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76da4bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76d109u);}goto L76d109;}
}
B76da4b:L76da4b:{c.instructions+=4;NFSU2_TR(0x76da4b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B76da4e:{NFSU2_TR(0x76da4e);
__builtin_memmove((R+28),(R+0),4);
}
B76da50:{NFSU2_TR(0x76da50);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76da52:{NFSU2_TR(0x76da52);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76da31u);}goto L76da31;}}
}
B76da54:L76da54:{c.instructions+=8;NFSU2_TR(0x76da54);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76da56:{NFSU2_TR(0x76da56);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76da58:{NFSU2_TR(0x76da58);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((R+0),(U+0),4);
}
B76da5b:{NFSU2_TR(0x76da5b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76da5c:{NFSU2_TR(0x76da5c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76da5f:{NFSU2_TR(0x76da5f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76da60:{NFSU2_TR(0x76da60);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76da61:{NFSU2_TR(0x76da61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76da66ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76d109u);}goto L76d109;}
}
B76da66:L76da66:{c.instructions+=4;NFSU2_TR(0x76da66);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B76da69:{NFSU2_TR(0x76da69);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76da6c:{NFSU2_TR(0x76da6c);
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
B76da6e:{NFSU2_TR(0x76da6e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76da79;}}
}
B76da70:L76da70:{c.instructions+=2;NFSU2_TR(0x76da70);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76da71:{NFSU2_TR(0x76da71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76da76ull));
TAIL_STATIC(0x75c6dau,75c);
}
B76da76:L76da76:{c.instructions+=2;NFSU2_TR(0x76da76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76da77:{NFSU2_TR(0x76da77);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76da31u);}goto L76da31;}
}
B76da79:L76da79:{c.instructions+=3;NFSU2_TR(0x76da79);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76da7c:{NFSU2_TR(0x76da7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76da7f:{NFSU2_TR(0x76da7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76da82:L76da82:{c.instructions+=7;NFSU2_TR(0x76da82);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76da85:{NFSU2_TR(0x76da85);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76da88:{NFSU2_TR(0x76da88);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76da8b:{NFSU2_TR(0x76da8b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76da8e:{NFSU2_TR(0x76da8e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76da91:{NFSU2_TR(0x76da91);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76da94:{NFSU2_TR(0x76da94);
u8 U[4];
__builtin_memmove((U+0),gp(0x783094),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76da9aull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76da9a:L76da9a:{c.instructions+=3;NFSU2_TR(0x76da9a);
__builtin_memmove((R+24),(R+0),4);
}
B76da9c:{NFSU2_TR(0x76da9c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76da9e:{NFSU2_TR(0x76da9e);
if(r1(R+518)){{goto L76dab0;}}
}
B76daa0:L76daa0:{c.instructions+=2;NFSU2_TR(0x76daa0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76daa1:{NFSU2_TR(0x76daa1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76daa6ull));
TAIL_STATIC(0x75c6dau,75c);
}
B76daa6:L76daa6:{c.instructions+=2;NFSU2_TR(0x76daa6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76daa9:{NFSU2_TR(0x76daa9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76daaeull));
TAIL_STATIC(0x75c6dau,75c);
}
B76daae:L76daae:{c.instructions+=2;NFSU2_TR(0x76daae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76daaf:{NFSU2_TR(0x76daaf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76dab0:L76dab0:{c.instructions+=1;NFSU2_TR(0x76dab0);
__builtin_memmove((R+0),(R+24),4);
}
B76dab2:L76dab2:{c.instructions+=4;NFSU2_TR(0x76dab2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((R+16),(U+0),4);
}
B76dab5:{NFSU2_TR(0x76dab5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76dab8:{NFSU2_TR(0x76dab8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(U+4))));
}
B76dabb:{NFSU2_TR(0x76dabb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76dac0ull));
TAIL_STATIC(0x76115eu,761);
}
B76dac0:L76dac0:{c.instructions+=1;NFSU2_TR(0x76dac0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76dac5ull));
TAIL_STATIC(0x760ddbu,760);
}
B76dac5:L76dac5:{c.instructions+=1;NFSU2_TR(0x76dac5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76dac6:L76dac6:{c.instructions+=3;NFSU2_TR(0x76dac6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76dac7:{NFSU2_TR(0x76dac7);
__builtin_memmove((R+24),gp(0x8b8450),4);
}
B76dacd:{NFSU2_TR(0x76dacd);
{goto L76daf1;}
}
B76dacf:L76dacf:{c.instructions+=4;NFSU2_TR(0x76dacf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76dad0:{NFSU2_TR(0x76dad0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76dad1:{NFSU2_TR(0x76dad1);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76dad5:{NFSU2_TR(0x76dad5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76dadaull));
TAIL_STATIC(0x76b9f8u,76b);
}
B76dada:L76dada:{c.instructions+=3;NFSU2_TR(0x76dada);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B76dadd:{NFSU2_TR(0x76dadd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76dadf:{NFSU2_TR(0x76dadf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76daee;}}
}
B76dae1:L76dae1:{c.instructions+=4;NFSU2_TR(0x76dae1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B76dae3:{NFSU2_TR(0x76dae3);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+0),(U+8),1);
}
B76dae6:{NFSU2_TR(0x76dae6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x3dull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B76dae8:{NFSU2_TR(0x76dae8);
if(r1(R+518)){{goto L76db06;}}
}
B76daea:L76daea:{c.instructions+=2;NFSU2_TR(0x76daea);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B76daec:{NFSU2_TR(0x76daec);
if(r1(R+518)){{goto L76db06;}}
}
B76daee:L76daee:{c.instructions+=1;NFSU2_TR(0x76daee);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B76daf1:L76daf1:{c.instructions+=3;NFSU2_TR(0x76daf1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B76daf3:{NFSU2_TR(0x76daf3);
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
B76daf5:{NFSU2_TR(0x76daf5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76dacfu);}goto L76dacf;}}
}
B76daf7:L76daf7:{c.instructions+=6;NFSU2_TR(0x76daf7);
__builtin_memmove((R+0),(R+24),4);
}
B76daf9:{NFSU2_TR(0x76daf9);
w4(R+0,u32(u32(r4(R+0))-u32(m4(0x8b8450))));
}
B76daff:{NFSU2_TR(0x76daff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76db00:{NFSU2_TR(0x76db00);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B76db03:{NFSU2_TR(0x76db03);
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
B76db05:{NFSU2_TR(0x76db05);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76db06:L76db06:{c.instructions+=5;NFSU2_TR(0x76db06);
__builtin_memmove((R+0),(R+24),4);
}
B76db08:{NFSU2_TR(0x76db08);
u8 U[6];
w1(R+512,u8((r4(R+0))<(m4(0x8b8450))));
w1(R+523,sborrow<u32>(r4(R+0),m4(0x8b8450)));
w4(R+0,u32(u32(r4(R+0))-u32(m4(0x8b8450))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B76db0e:{NFSU2_TR(0x76db0e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76db0f:{NFSU2_TR(0x76db0f);
u8 U[47];
w4(U+39,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
__builtin_memmove((U+43),(R+0),4);
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+39))));
w1(U+24,u8((r4(U+39))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+39))-u32(u32(0x1ull))));
w4(U+29,sar<u32>(r4(U+43),u64(r4(U+25))));
w4(U+33,u32(u32(r4(U+29))&u32(u32(0x1ull))));
w1(U+37,u8((r4(U+33))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+37))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+38,u8((r4(U+39))==(u32(0x1ull))));
__builtin_memmove((U+0),(U+38),1);
w1(U+1,u8(u32(r1(U+0))*u32(u8(0x0ull))));
w1(U+2,u8(!(r1(U+38))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+39))!=(u32(0x0ull))));
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
B76db12:{NFSU2_TR(0x76db12);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76db13:L76db13:{c.instructions+=7;NFSU2_TR(0x76db13);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76db14:{NFSU2_TR(0x76db14);
__builtin_memmove((R+20),(R+16),4);
}
B76db16:{NFSU2_TR(0x76db16);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76db17:{NFSU2_TR(0x76db17);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B76db19:{NFSU2_TR(0x76db19);
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
B76db1b:{NFSU2_TR(0x76db1b);
__builtin_memmove((R+0),(R+28),4);
}
B76db1d:{NFSU2_TR(0x76db1d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76db21;}}
}
B76db1f:L76db1f:{c.instructions+=2;NFSU2_TR(0x76db1f);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B76db20:{NFSU2_TR(0x76db20);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76db21:L76db21:{c.instructions+=2;NFSU2_TR(0x76db21);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B76db24:{NFSU2_TR(0x76db24);
if(r1(R+518)){{goto L76db2f;}}
}
B76db26:L76db26:{c.instructions+=4;NFSU2_TR(0x76db26);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B76db29:{NFSU2_TR(0x76db29);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B76db2a:{NFSU2_TR(0x76db2a);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B76db2d:{NFSU2_TR(0x76db2d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76db26u);}goto L76db26;}}
}
B76db2f:L76db2f:{c.instructions+=5;NFSU2_TR(0x76db2f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76db30:{NFSU2_TR(0x76db30);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B76db37:{NFSU2_TR(0x76db37);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76db38:{NFSU2_TR(0x76db38);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76db39:{NFSU2_TR(0x76db39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76db3eull));
TAIL_STATIC(0x75c6c8u,75c);
}
B76db3e:L76db3e:{c.instructions+=5;NFSU2_TR(0x76db3e);
__builtin_memmove((R+24),(R+0),4);
}
B76db40:{NFSU2_TR(0x76db40);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76db42:{NFSU2_TR(0x76db42);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76db43:{NFSU2_TR(0x76db43);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76db46:{NFSU2_TR(0x76db46);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76db50;}}
}
B76db48:L76db48:{c.instructions+=2;NFSU2_TR(0x76db48);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76db4a:{NFSU2_TR(0x76db4a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76db4full));
TAIL_STATIC(0x75bc7eu,75b);
}
B76db4f:L76db4f:{c.instructions+=1;NFSU2_TR(0x76db4f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76db50:L76db50:{c.instructions+=3;NFSU2_TR(0x76db50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B76db52:{NFSU2_TR(0x76db52);
__builtin_memmove((R+12),(R+28),4);
}
B76db54:{NFSU2_TR(0x76db54);
{goto L76db67;}
}
B76db56:L76db56:{c.instructions+=2;NFSU2_TR(0x76db56);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76db57:{NFSU2_TR(0x76db57);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76db5cull));
TAIL_STATIC(0x75e0d8u,75e);
}
B76db5c:L76db5c:{c.instructions+=5;NFSU2_TR(0x76db5c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B76db5e:{NFSU2_TR(0x76db5e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B76db61:{NFSU2_TR(0x76db61);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B76db64:{NFSU2_TR(0x76db64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B76db66:{NFSU2_TR(0x76db66);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76db67:L76db67:{c.instructions+=2;NFSU2_TR(0x76db67);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76db69:{NFSU2_TR(0x76db69);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76db56u);}goto L76db56;}}
}
B76db6b:L76db6b:{c.instructions+=6;NFSU2_TR(0x76db6b);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))&u32(r4(R+0))));
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
B76db6d:{NFSU2_TR(0x76db6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76db70:{NFSU2_TR(0x76db70);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76db71:{NFSU2_TR(0x76db71);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B76db72:{NFSU2_TR(0x76db72);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B76db73:{NFSU2_TR(0x76db73);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76db74:L76db74:{c.instructions+=10;NFSU2_TR(0x76db74);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76db75:{NFSU2_TR(0x76db75);
__builtin_memmove((R+20),(R+16),4);
}
B76db77:{NFSU2_TR(0x76db77);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B76db7a:{NFSU2_TR(0x76db7a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76db7b:{NFSU2_TR(0x76db7b);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B76db7d:{NFSU2_TR(0x76db7d);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+12)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B76db80:{NFSU2_TR(0x76db80);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76db81:{NFSU2_TR(0x76db81);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76db82:{NFSU2_TR(0x76db82);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76db85:{NFSU2_TR(0x76db85);
if(r1(R+518)){{goto L76dbdf;}}
}
B76db87:L76db87:{c.instructions+=3;NFSU2_TR(0x76db87);
u8 U[4];
w4(U+0,u32(0x3dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76db89:{NFSU2_TR(0x76db89);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76db8c:{NFSU2_TR(0x76db8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76db91ull));
TAIL_STATIC(0x76e8a9u,76e);
}
B76db91:L76db91:{c.instructions+=6;NFSU2_TR(0x76db91);
__builtin_memmove((R+24),(R+0),4);
}
B76db93:{NFSU2_TR(0x76db93);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76db95:{NFSU2_TR(0x76db95);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76db96:{NFSU2_TR(0x76db96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76db97:{NFSU2_TR(0x76db97);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76db9a:{NFSU2_TR(0x76db9a);
if(r1(R+518)){{goto L76dbdf;}}
}
B76db9c:L76db9c:{c.instructions+=2;NFSU2_TR(0x76db9c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76db9f:{NFSU2_TR(0x76db9f);
if(r1(R+518)){{goto L76dbdf;}}
}
B76dba1:L76dba1:{c.instructions+=7;NFSU2_TR(0x76dba1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B76dba3:{NFSU2_TR(0x76dba3);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+0))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B76dba6:{NFSU2_TR(0x76dba6);
__builtin_memmove((R+0),(R+518),1);
}
B76dba9:{NFSU2_TR(0x76dba9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76dbac:{NFSU2_TR(0x76dbac);
__builtin_memmove((R+0),gp(0x8b8450),4);
}
B76dbb1:{NFSU2_TR(0x76dbb1);
u8 U[8];
__builtin_memmove((U+0),gp(0x8b8454),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76dbb7:{NFSU2_TR(0x76dbb7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76dbc5;}}
}
B76dbb9:L76dbb9:{c.instructions+=2;NFSU2_TR(0x76dbb9);
__builtin_memmove((R+28),(R+0),4);
}
B76dbbb:{NFSU2_TR(0x76dbbb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76dbc0ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76db13u);}goto L76db13;}
}
B76dbc0:L76dbc0:{c.instructions+=1;NFSU2_TR(0x76dbc0);
__builtin_memmove(gp(0x8b8450),(R+0),4);
}
B76dbc5:L76dbc5:{c.instructions+=2;NFSU2_TR(0x76dbc5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76dbc7:{NFSU2_TR(0x76dbc7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76dc1e;}}
}
B76dbc9:L76dbc9:{c.instructions+=2;NFSU2_TR(0x76dbc9);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76dbcc:{NFSU2_TR(0x76dbcc);
if(r1(R+518)){{goto L76dbe7;}}
}
B76dbce:L76dbce:{c.instructions+=2;NFSU2_TR(0x76dbce);
u8 U[8];
__builtin_memmove((U+0),gp(0x8b8458),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76dbd4:{NFSU2_TR(0x76dbd4);
if(r1(R+518)){{goto L76dbe7;}}
}
B76dbd6:L76dbd6:{c.instructions+=1;NFSU2_TR(0x76dbd6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76dbdbull));
TAIL_STATIC(0x76ba46u,76b);
}
B76dbdb:L76dbdb:{c.instructions+=2;NFSU2_TR(0x76dbdb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76dbdd:{NFSU2_TR(0x76dbdd);
if(r1(R+518)){{goto L76dc1e;}}
}
B76dbdf:L76dbdf:{c.instructions+=1;NFSU2_TR(0x76dbdf);
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
B76dbe2:L76dbe2:{c.instructions+=5;NFSU2_TR(0x76dbe2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B76dbe3:{NFSU2_TR(0x76dbe3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76dbe4:{NFSU2_TR(0x76dbe4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B76dbe5:{NFSU2_TR(0x76dbe5);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B76dbe6:{NFSU2_TR(0x76dbe6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76dbe7:L76dbe7:{c.instructions+=2;NFSU2_TR(0x76dbe7);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76dbea:{NFSU2_TR(0x76dbea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76dd22;}}
}
B76dbf0:L76dbf0:{c.instructions+=2;NFSU2_TR(0x76dbf0);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76dbf2:{NFSU2_TR(0x76dbf2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76dbf7ull));
TAIL_STATIC(0x75c6c8u,75c);
}
B76dbf7:L76dbf7:{c.instructions+=4;NFSU2_TR(0x76dbf7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76dbf9:{NFSU2_TR(0x76dbf9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76dbfa:{NFSU2_TR(0x76dbfa);
__builtin_memmove(gp(0x8b8450),(R+0),4);
}
B76dbff:{NFSU2_TR(0x76dbff);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76dbdfu);}goto L76dbdf;}}
}
B76dc01:L76dc01:{c.instructions+=3;NFSU2_TR(0x76dc01);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B76dc03:{NFSU2_TR(0x76dc03);
u8 U[8];
__builtin_memmove((U+0),gp(0x8b8458),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76dc09:{NFSU2_TR(0x76dc09);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76dc1e;}}
}
B76dc0b:L76dc0b:{c.instructions+=2;NFSU2_TR(0x76dc0b);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76dc0d:{NFSU2_TR(0x76dc0d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76dc12ull));
TAIL_STATIC(0x75c6c8u,75c);
}
B76dc12:L76dc12:{c.instructions+=4;NFSU2_TR(0x76dc12);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76dc14:{NFSU2_TR(0x76dc14);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76dc15:{NFSU2_TR(0x76dc15);
__builtin_memmove(gp(0x8b8458),(R+0),4);
}
B76dc1a:{NFSU2_TR(0x76dc1a);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76dbdfu);}goto L76dbdf;}}
}
B76dc1c:L76dc1c:{c.instructions+=1;NFSU2_TR(0x76dc1c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B76dc1e:L76dc1e:{c.instructions+=6;NFSU2_TR(0x76dc1e);
__builtin_memmove((R+12),gp(0x8b8450),4);
}
B76dc24:{NFSU2_TR(0x76dc24);
__builtin_memmove((R+28),(R+24),4);
}
B76dc26:{NFSU2_TR(0x76dc26);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B76dc29:{NFSU2_TR(0x76dc29);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+24))));
}
B76dc2b:{NFSU2_TR(0x76dc2b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76dc2c:{NFSU2_TR(0x76dc2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76dc31ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76dac6u);}goto L76dac6;}
}
B76dc31:L76dc31:{c.instructions+=4;NFSU2_TR(0x76dc31);
__builtin_memmove((R+28),(R+0),4);
}
B76dc33:{NFSU2_TR(0x76dc33);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B76dc35:{NFSU2_TR(0x76dc35);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76dc36:{NFSU2_TR(0x76dc36);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L76dc77;}}
}
B76dc38:L76dc38:{c.instructions+=2;NFSU2_TR(0x76dc38);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B76dc3b:{NFSU2_TR(0x76dc3b);
if(r1(R+518)){{goto L76dc77;}}
}
B76dc3d:L76dc3d:{c.instructions+=3;NFSU2_TR(0x76dc3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B76dc40:{NFSU2_TR(0x76dc40);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B76dc42:{NFSU2_TR(0x76dc42);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76dc47ull));
TAIL_STATIC(0x75c6dau,75c);
}
B76dc47:L76dc47:{c.instructions+=4;NFSU2_TR(0x76dc47);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B76dc49:{NFSU2_TR(0x76dc49);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76dc4c:{NFSU2_TR(0x76dc4c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76dc4d:{NFSU2_TR(0x76dc4d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76dc5f;}}
}
B76dc4f:L76dc4f:{c.instructions+=3;NFSU2_TR(0x76dc4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76dc52:{NFSU2_TR(0x76dc52);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B76dc54:{NFSU2_TR(0x76dc54);
{goto L76dcad;}
}
B76dc56:L76dc56:{c.instructions+=4;NFSU2_TR(0x76dc56);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76dc59:{NFSU2_TR(0x76dc59);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B76dc5b:{NFSU2_TR(0x76dc5b);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B76dc5c:{NFSU2_TR(0x76dc5c);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B76dc5f:L76dc5f:{c.instructions+=2;NFSU2_TR(0x76dc5f);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+0))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B76dc61:{NFSU2_TR(0x76dc61);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76dc56u);}goto L76dc56;}}
}
B76dc63:L76dc63:{c.instructions+=5;NFSU2_TR(0x76dc63);
__builtin_memmove((R+0),(R+28),4);
}
B76dc65:{NFSU2_TR(0x76dc65);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B76dc68:{NFSU2_TR(0x76dc68);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76dc69:{NFSU2_TR(0x76dc69);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76dc6a:{NFSU2_TR(0x76dc6a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76dc6full));
TAIL_STATIC(0x762e9cu,762);
}
B76dc6f:L76dc6f:{c.instructions+=4;NFSU2_TR(0x76dc6f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76dc71:{NFSU2_TR(0x76dc71);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76dc72:{NFSU2_TR(0x76dc72);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76dc73:{NFSU2_TR(0x76dc73);
if(r1(R+518)){{goto L76dcad;}}
}
B76dc75:L76dc75:{c.instructions+=1;NFSU2_TR(0x76dc75);
{goto L76dca8;}
}
B76dc77:L76dc77:{c.instructions+=2;NFSU2_TR(0x76dc77);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76dc7b:{NFSU2_TR(0x76dc7b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76dd1b;}}
}
B76dc81:L76dc81:{c.instructions+=2;NFSU2_TR(0x76dc81);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B76dc83:{NFSU2_TR(0x76dc83);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L76dc87;}}
}
B76dc85:L76dc85:{c.instructions+=1;NFSU2_TR(0x76dc85);
w4(R+28,u32(0-u32(r4(R+28))));
}
B76dc87:L76dc87:{c.instructions+=4;NFSU2_TR(0x76dc87);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B76dc8e:{NFSU2_TR(0x76dc8e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76dc8f:{NFSU2_TR(0x76dc8f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76dc90:{NFSU2_TR(0x76dc90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76dc95ull));
TAIL_STATIC(0x762e9cu,762);
}
B76dc95:L76dc95:{c.instructions+=4;NFSU2_TR(0x76dc95);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76dc97:{NFSU2_TR(0x76dc97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76dc98:{NFSU2_TR(0x76dc98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76dc99:{NFSU2_TR(0x76dc99);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76dbdfu);}goto L76dbdf;}}
}
B76dc9f:L76dc9f:{c.instructions+=3;NFSU2_TR(0x76dc9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B76dca2:{NFSU2_TR(0x76dca2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76dca6:{NFSU2_TR(0x76dca6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B76dca8:L76dca8:{c.instructions+=1;NFSU2_TR(0x76dca8);
__builtin_memmove(gp(0x8b8450),(R+0),4);
}
B76dcad:L76dcad:{c.instructions+=2;NFSU2_TR(0x76dcad);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76dcb1:{NFSU2_TR(0x76dcb1);
if(r1(R+518)){{goto L76dd04;}}
}
B76dcb3:L76dcb3:{c.instructions+=2;NFSU2_TR(0x76dcb3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76dcb6:{NFSU2_TR(0x76dcb6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76dcbbull));
TAIL_STATIC(0x766bc0u,766);
}
B76dcbb:L76dcbb:{c.instructions+=4;NFSU2_TR(0x76dcbb);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B76dcbc:{NFSU2_TR(0x76dcbc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B76dcbd:{NFSU2_TR(0x76dcbd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76dcbe:{NFSU2_TR(0x76dcbe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76dcc3ull));
TAIL_STATIC(0x75c6c8u,75c);
}
B76dcc3:L76dcc3:{c.instructions+=5;NFSU2_TR(0x76dcc3);
__builtin_memmove((R+24),(R+0),4);
}
B76dcc5:{NFSU2_TR(0x76dcc5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76dcc7:{NFSU2_TR(0x76dcc7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76dcc8:{NFSU2_TR(0x76dcc8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76dcc9:{NFSU2_TR(0x76dcc9);
if(r1(R+518)){{goto L76dd04;}}
}
B76dccb:L76dccb:{c.instructions+=3;NFSU2_TR(0x76dccb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76dcce:{NFSU2_TR(0x76dcce);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76dccf:{NFSU2_TR(0x76dccf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76dcd4ull));
TAIL_STATIC(0x766ac0u,766);
}
B76dcd4:L76dcd4:{c.instructions+=15;NFSU2_TR(0x76dcd4);
__builtin_memmove((R+0),(R+24),4);
}
B76dcd6:{NFSU2_TR(0x76dcd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B76dcd9:{NFSU2_TR(0x76dcd9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76dcda:{NFSU2_TR(0x76dcda);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B76dcdd:{NFSU2_TR(0x76dcdd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76dcde:{NFSU2_TR(0x76dcde);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+0,u8(u32(r1(U+0))&u32(u8(0x0ull))));
s1(u32(r4(R+0)),r1(U+0));
}
B76dce1:{NFSU2_TR(0x76dce1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76dce4:{NFSU2_TR(0x76dce4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B76dce5:{NFSU2_TR(0x76dce5);
w1(R+512,u8((r4(R+4))!=(u32(0x0ull))));
w4(R+4,u32(0-u32(r4(R+4))));
}
B76dce7:{NFSU2_TR(0x76dce7);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(R+4))));
w4(R+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B76dce9:{NFSU2_TR(0x76dce9);
w4(R+4,u32(~u32(r4(R+4))));
}
B76dceb:{NFSU2_TR(0x76dceb);
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
B76dced:{NFSU2_TR(0x76dced);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76dcee:{NFSU2_TR(0x76dcee);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76dcef:{NFSU2_TR(0x76dcef);
u8 U[4];
__builtin_memmove((U+0),gp(0x78309c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76dcf5ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76dcf5:L76dcf5:{c.instructions+=2;NFSU2_TR(0x76dcf5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76dcf7:{NFSU2_TR(0x76dcf7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76dcfd;}}
}
B76dcf9:L76dcf9:{c.instructions+=1;NFSU2_TR(0x76dcf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76dcfd:L76dcfd:{c.instructions+=2;NFSU2_TR(0x76dcfd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76dcfe:{NFSU2_TR(0x76dcfe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76dd03ull));
TAIL_STATIC(0x75c6dau,75c);
}
B76dd03:L76dd03:{c.instructions+=1;NFSU2_TR(0x76dd03);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76dd04:L76dd04:{c.instructions+=2;NFSU2_TR(0x76dd04);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
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
B76dd08:{NFSU2_TR(0x76dd08);
if(r1(R+518)){{goto L76dd13;}}
}
B76dd0a:L76dd0a:{c.instructions+=2;NFSU2_TR(0x76dd0a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76dd0d:{NFSU2_TR(0x76dd0d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76dd12ull));
TAIL_STATIC(0x75c6dau,75c);
}
B76dd12:L76dd12:{c.instructions+=1;NFSU2_TR(0x76dd12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76dd13:L76dd13:{c.instructions+=2;NFSU2_TR(0x76dd13);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76dd16:{NFSU2_TR(0x76dd16);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76dbe2u);}goto L76dbe2;}
}
B76dd1b:L76dd1b:{c.instructions+=2;NFSU2_TR(0x76dd1b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76dd1c:{NFSU2_TR(0x76dd1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76dd21ull));
TAIL_STATIC(0x75c6dau,75c);
}
B76dd21:L76dd21:{c.instructions+=1;NFSU2_TR(0x76dd21);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76dd22:L76dd22:{c.instructions+=2;NFSU2_TR(0x76dd22);
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
B76dd24:{NFSU2_TR(0x76dd24);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76dbe2u);}goto L76dbe2;}
}
B76dd29:L76dd29:{c.instructions+=15;NFSU2_TR(0x76dd29);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76dd2d:{NFSU2_TR(0x76dd2d);
__builtin_memmove((R+4),(R+0),4);
}
B76dd2f:{NFSU2_TR(0x76dd2f);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1full))));
}
B76dd32:{NFSU2_TR(0x76dd32);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B76dd35:{NFSU2_TR(0x76dd35);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8ba4c0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B76dd3c:{NFSU2_TR(0x76dd3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B76dd3f:{NFSU2_TR(0x76dd3f);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B76dd43:{NFSU2_TR(0x76dd43);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+4),(U+0),1);
}
B76dd45:{NFSU2_TR(0x76dd45);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B76dd47:{NFSU2_TR(0x76dd47);
__builtin_memmove((R+0),(R+4),1);
}
B76dd49:{NFSU2_TR(0x76dd49);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76dd4a:{NFSU2_TR(0x76dd4a);
w4(R+24,u32(0x8000ull));
}
B76dd4f:{NFSU2_TR(0x76dd4f);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x80ull))));
}
B76dd54:{NFSU2_TR(0x76dd54);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76dd58:{NFSU2_TR(0x76dd58);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76dd5f;}}
}
B76dd5a:L76dd5a:{c.instructions+=2;NFSU2_TR(0x76dd5a);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0x7full))));
}
B76dd5d:{NFSU2_TR(0x76dd5d);
{goto L76dd6c;}
}
B76dd5f:L76dd5f:{c.instructions+=2;NFSU2_TR(0x76dd5f);
u8 U[22];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x4000ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x4000ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x4000ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B76dd67:{NFSU2_TR(0x76dd67);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76dd7b;}}
}
B76dd69:L76dd69:{c.instructions+=1;NFSU2_TR(0x76dd69);
w1(R+4,u8(u32(r1(R+4))|u32(u8(0x80ull))));
}
B76dd6c:L76dd6c:{c.instructions+=7;NFSU2_TR(0x76dd6c);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B76dd6e:{NFSU2_TR(0x76dd6e);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B76dd70:{NFSU2_TR(0x76dd70);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffc000ull))));
}
B76dd75:{NFSU2_TR(0x76dd75);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+24)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+24)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B76dd77:{NFSU2_TR(0x76dd77);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+8)),r1(U+0));
}
B76dd79:{NFSU2_TR(0x76dd79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76dd7a:{NFSU2_TR(0x76dd7a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76dd7b:L76dd7b:{c.instructions+=1;NFSU2_TR(0x76dd7b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76dd80ull));
TAIL_STATIC(0x7661bau,766);
}
B76dd80:L76dd80:{c.instructions+=4;NFSU2_TR(0x76dd80);
u8 U[4];
w4(U+0,u32(0x16ull));
s4(u32(r4(R+0)),r4(U+0));
}
B76dd86:{NFSU2_TR(0x76dd86);
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
B76dd89:{NFSU2_TR(0x76dd89);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76dd8a:{NFSU2_TR(0x76dd8a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76dd8b:L76dd8b:{c.instructions+=7;NFSU2_TR(0x76dd8b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B76dd8f:{NFSU2_TR(0x76dd8f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76dd90:{NFSU2_TR(0x76dd90);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B76dd94:{NFSU2_TR(0x76dd94);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B76dd97:{NFSU2_TR(0x76dd97);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B76dd99:{NFSU2_TR(0x76dd99);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B76dd9b:{NFSU2_TR(0x76dd9b);
if(r1(R+512)){{goto L76dda1;}}
}
B76dd9d:L76dd9d:{c.instructions+=2;NFSU2_TR(0x76dd9d);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B76dd9f:{NFSU2_TR(0x76dd9f);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L76dda4;}}
}
B76dda1:L76dda1:{c.instructions+=2;NFSU2_TR(0x76dda1);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B76dda3:{NFSU2_TR(0x76dda3);
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
B76dda4:L76dda4:{c.instructions+=4;NFSU2_TR(0x76dda4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B76dda8:{NFSU2_TR(0x76dda8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B76ddaa:{NFSU2_TR(0x76ddaa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76ddab:{NFSU2_TR(0x76ddab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76ddac:L76ddac:{c.instructions+=8;NFSU2_TR(0x76ddac);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76ddad:{NFSU2_TR(0x76ddad);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B76ddb1:{NFSU2_TR(0x76ddb1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76ddb2:{NFSU2_TR(0x76ddb2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B76ddb6:{NFSU2_TR(0x76ddb6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76ddb7:{NFSU2_TR(0x76ddb7);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B76ddb9:{NFSU2_TR(0x76ddb9);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B76ddbb:{NFSU2_TR(0x76ddbb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76ddc0ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76dd8bu);}goto L76dd8b;}
}
B76ddc0:L76ddc0:{c.instructions+=3;NFSU2_TR(0x76ddc0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B76ddc3:{NFSU2_TR(0x76ddc3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76ddc5:{NFSU2_TR(0x76ddc5);
if(r1(R+518)){{goto L76ddde;}}
}
B76ddc7:L76ddc7:{c.instructions+=5;NFSU2_TR(0x76ddc7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76ddca:{NFSU2_TR(0x76ddca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76ddcb:{NFSU2_TR(0x76ddcb);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76ddcd:{NFSU2_TR(0x76ddcd);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B76ddcf:{NFSU2_TR(0x76ddcf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76ddd4ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76dd8bu);}goto L76dd8b;}
}
B76ddd4:L76ddd4:{c.instructions+=3;NFSU2_TR(0x76ddd4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B76ddd7:{NFSU2_TR(0x76ddd7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76ddd9:{NFSU2_TR(0x76ddd9);
if(r1(R+518)){{goto L76ddde;}}
}
B76dddb:L76dddb:{c.instructions+=1;NFSU2_TR(0x76dddb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76ddde:L76ddde:{c.instructions+=5;NFSU2_TR(0x76ddde);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76dde1:{NFSU2_TR(0x76dde1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76dde2:{NFSU2_TR(0x76dde2);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76dde5:{NFSU2_TR(0x76dde5);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B76dde7:{NFSU2_TR(0x76dde7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76ddecull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76dd8bu);}goto L76dd8b;}
}
B76ddec:L76ddec:{c.instructions+=3;NFSU2_TR(0x76ddec);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B76ddef:{NFSU2_TR(0x76ddef);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76ddf1:{NFSU2_TR(0x76ddf1);
if(r1(R+518)){{goto L76ddf6;}}
}
B76ddf3:L76ddf3:{c.instructions+=1;NFSU2_TR(0x76ddf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76ddf6:L76ddf6:{c.instructions+=5;NFSU2_TR(0x76ddf6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76ddf9:{NFSU2_TR(0x76ddf9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76ddfa:{NFSU2_TR(0x76ddfa);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76ddfd:{NFSU2_TR(0x76ddfd);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B76ddff:{NFSU2_TR(0x76ddff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76de04ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76dd8bu);}goto L76dd8b;}
}
B76de04:L76de04:{c.instructions+=4;NFSU2_TR(0x76de04);
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
B76de07:{NFSU2_TR(0x76de07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B76de08:{NFSU2_TR(0x76de08);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76de09:{NFSU2_TR(0x76de09);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76de0a:L76de0a:{c.instructions+=21;NFSU2_TR(0x76de0a);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76de0e:{NFSU2_TR(0x76de0e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76de0f:{NFSU2_TR(0x76de0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B76de11:{NFSU2_TR(0x76de11);
__builtin_memmove((R+4),(R+24),4);
}
B76de13:{NFSU2_TR(0x76de13);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+24))));
}
B76de15:{NFSU2_TR(0x76de15);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76de16:{NFSU2_TR(0x76de16);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B76de19:{NFSU2_TR(0x76de19);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B76de1c:{NFSU2_TR(0x76de1c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B76de1e:{NFSU2_TR(0x76de1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B76de21:{NFSU2_TR(0x76de21);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+4))));
}
B76de23:{NFSU2_TR(0x76de23);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76de26:{NFSU2_TR(0x76de26);
__builtin_memmove((R+8),(R+28),4);
}
B76de28:{NFSU2_TR(0x76de28);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B76de2b:{NFSU2_TR(0x76de2b);
w4(R+4,shl<u32>(r4(R+4),u64(u32(0x1ull))));
}
B76de2d:{NFSU2_TR(0x76de2d);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B76de2f:{NFSU2_TR(0x76de2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B76de30:{NFSU2_TR(0x76de30);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76de33:{NFSU2_TR(0x76de33);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76de36:{NFSU2_TR(0x76de36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76de37:{NFSU2_TR(0x76de37);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76de38:L76de38:{c.instructions+=21;NFSU2_TR(0x76de38);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76de3c:{NFSU2_TR(0x76de3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B76de3f:{NFSU2_TR(0x76de3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76de42:{NFSU2_TR(0x76de42);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76de43:{NFSU2_TR(0x76de43);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76de44:{NFSU2_TR(0x76de44);
__builtin_memmove((R+28),(R+4),4);
}
B76de46:{NFSU2_TR(0x76de46);
__builtin_memmove((R+24),(R+8),4);
}
B76de48:{NFSU2_TR(0x76de48);
w4(R+4,shr<u32>(r4(R+4),u64(u32(0x1ull))));
}
B76de4a:{NFSU2_TR(0x76de4a);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B76de4d:{NFSU2_TR(0x76de4d);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+24))));
}
B76de4f:{NFSU2_TR(0x76de4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76de52:{NFSU2_TR(0x76de52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B76de54:{NFSU2_TR(0x76de54);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B76de57:{NFSU2_TR(0x76de57);
w4(R+4,shr<u32>(r4(R+4),u64(u32(0x1ull))));
}
B76de59:{NFSU2_TR(0x76de59);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+28))));
}
B76de5b:{NFSU2_TR(0x76de5b);
u8 U[10];
w4(U+6,u32(u32(r4(R+8))&u32(u32(0x1ull))));
w1(R+512,u8((r4(U+6))!=(u32(0x0ull))));
w1(R+523,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w4(R+8,shr<u32>(r4(R+8),u64(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B76de5d:{NFSU2_TR(0x76de5d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B76de5e:{NFSU2_TR(0x76de5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76de61:{NFSU2_TR(0x76de61);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B76de63:{NFSU2_TR(0x76de63);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76de64:{NFSU2_TR(0x76de64);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76de65:L76de65:{c.instructions+=18;NFSU2_TR(0x76de65);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76de66:{NFSU2_TR(0x76de66);
__builtin_memmove((R+20),(R+16),4);
}
B76de68:{NFSU2_TR(0x76de68);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B76de6b:{NFSU2_TR(0x76de6b);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B76de70:{NFSU2_TR(0x76de70);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(U+4))));
}
B76de73:{NFSU2_TR(0x76de73);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76de74:{NFSU2_TR(0x76de74);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B76de77:{NFSU2_TR(0x76de77);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B76de79:{NFSU2_TR(0x76de79);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76de7c:{NFSU2_TR(0x76de7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76de7f:{NFSU2_TR(0x76de7f);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76de81:{NFSU2_TR(0x76de81);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76de82:{NFSU2_TR(0x76de82);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76de83:{NFSU2_TR(0x76de83);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x404eull));
s4(u32(r4(U+0)),r4(U+4));
}
B76de8a:{NFSU2_TR(0x76de8a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+12)),r4(U+0));
}
B76de8c:{NFSU2_TR(0x76de8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76de8f:{NFSU2_TR(0x76de8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76de92:{NFSU2_TR(0x76de92);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L76dee3;}}
}
B76de94:L76de94:{c.instructions+=1;NFSU2_TR(0x76de94);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76de97:L76de97:{c.instructions+=7;NFSU2_TR(0x76de97);
__builtin_memmove((R+24),(R+12),4);
}
B76de99:{NFSU2_TR(0x76de99);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+28),(U+0),4);
}
B76de9c:{NFSU2_TR(0x76de9c);
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
B76de9d:{NFSU2_TR(0x76de9d);
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
B76de9e:{NFSU2_TR(0x76de9e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76de9f:{NFSU2_TR(0x76de9f);
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
B76dea0:{NFSU2_TR(0x76dea0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76dea5ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76de0au);}goto L76de0a;}
}
B76dea5:L76dea5:{c.instructions+=2;NFSU2_TR(0x76dea5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76dea6:{NFSU2_TR(0x76dea6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76deabull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76de0au);}goto L76de0a;}
}
B76deab:L76deab:{c.instructions+=4;NFSU2_TR(0x76deab);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B76deae:{NFSU2_TR(0x76deae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76deaf:{NFSU2_TR(0x76deaf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76deb0:{NFSU2_TR(0x76deb0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76deb5ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76ddacu);}goto L76ddac;}
}
B76deb5:L76deb5:{c.instructions+=2;NFSU2_TR(0x76deb5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76deb6:{NFSU2_TR(0x76deb6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76debbull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76de0au);}goto L76de0a;}
}
B76debb:L76debb:{c.instructions+=9;NFSU2_TR(0x76debb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76debe:{NFSU2_TR(0x76debe);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B76dec1:{NFSU2_TR(0x76dec1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76dec5:{NFSU2_TR(0x76dec5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76dec9:{NFSU2_TR(0x76dec9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76decc:{NFSU2_TR(0x76decc);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B76decf:{NFSU2_TR(0x76decf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76ded0:{NFSU2_TR(0x76ded0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76ded1:{NFSU2_TR(0x76ded1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76ded6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76ddacu);}goto L76ddac;}
}
B76ded6:L76ded6:{c.instructions+=4;NFSU2_TR(0x76ded6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B76ded9:{NFSU2_TR(0x76ded9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76dedc:{NFSU2_TR(0x76dedc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76dedf:{NFSU2_TR(0x76dedf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76de97u);}goto L76de97;}}
}
B76dee1:L76dee1:{c.instructions+=1;NFSU2_TR(0x76dee1);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B76dee3:L76dee3:{c.instructions+=2;NFSU2_TR(0x76dee3);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76dee6:{NFSU2_TR(0x76dee6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76df17;}}
}
B76dee8:L76dee8:{c.instructions+=1;NFSU2_TR(0x76dee8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B76deeb:L76deeb:{c.instructions+=15;NFSU2_TR(0x76deeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76deee:{NFSU2_TR(0x76deee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0xfff0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76def5:{NFSU2_TR(0x76def5);
__builtin_memmove((R+0),(R+4),4);
}
B76def7:{NFSU2_TR(0x76def7);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B76defa:{NFSU2_TR(0x76defa);
__builtin_memmove((R+28),(R+0),4);
}
B76defc:{NFSU2_TR(0x76defc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B76defe:{NFSU2_TR(0x76defe);
__builtin_memmove((R+24),(R+0),4);
}
B76df00:{NFSU2_TR(0x76df00);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B76df03:{NFSU2_TR(0x76df03);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B76df06:{NFSU2_TR(0x76df06);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+4))));
}
B76df08:{NFSU2_TR(0x76df08);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B76df0b:{NFSU2_TR(0x76df0b);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76df0d:{NFSU2_TR(0x76df0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76df10:{NFSU2_TR(0x76df10);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B76df12:{NFSU2_TR(0x76df12);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76deebu);}goto L76deeb;}}
}
B76df14:L76df14:{c.instructions+=1;NFSU2_TR(0x76df14);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76df17:L76df17:{c.instructions+=2;NFSU2_TR(0x76df17);
w4(R+24,u32(0x8000ull));
}
B76df1c:{NFSU2_TR(0x76df1c);
{goto L76df2c;}
}
B76df1e:L76df1e:{c.instructions+=2;NFSU2_TR(0x76df1e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76df1f:{NFSU2_TR(0x76df1f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76df24ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76de0au);}goto L76de0a;}
}
B76df24:L76df24:{c.instructions+=2;NFSU2_TR(0x76df24);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0xffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76df2b:{NFSU2_TR(0x76df2b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76df2c:L76df2c:{c.instructions+=2;NFSU2_TR(0x76df2c);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(r4(R+24))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B76df2f:{NFSU2_TR(0x76df2f);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76df1eu);}goto L76df1e;}}
}
B76df31:L76df31:{c.instructions+=8;NFSU2_TR(0x76df31);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76df34:{NFSU2_TR(0x76df34);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B76df38:{NFSU2_TR(0x76df38);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(U+4))));
}
B76df3b:{NFSU2_TR(0x76df3b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B76df3c:{NFSU2_TR(0x76df3c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76df3d:{NFSU2_TR(0x76df3d);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xaull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B76df41:{NFSU2_TR(0x76df41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B76df42:{NFSU2_TR(0x76df42);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76df47ull));
TAIL_STATIC(0x76115eu,761);
}
B76df47:L76df47:{c.instructions+=2;NFSU2_TR(0x76df47);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B76df48:{NFSU2_TR(0x76df48);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76df49:L76df49:{c.instructions+=31;NFSU2_TR(0x76df49);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76df4a:{NFSU2_TR(0x76df4a);
__builtin_memmove((R+20),(R+16),4);
}
B76df4c:{NFSU2_TR(0x76df4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x30ull))));
}
B76df4f:{NFSU2_TR(0x76df4f);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B76df54:{NFSU2_TR(0x76df54);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(U+4))));
}
B76df57:{NFSU2_TR(0x76df57);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76df58:{NFSU2_TR(0x76df58);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B76df5b:{NFSU2_TR(0x76df5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76df5e:{NFSU2_TR(0x76df5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76df61:{NFSU2_TR(0x76df61);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76df62:{NFSU2_TR(0x76df62);
__builtin_memmove((R+4),(R+0),4);
}
B76df64:{NFSU2_TR(0x76df64);
w4(R+24,u32(0x7fffull));
}
B76df69:{NFSU2_TR(0x76df69);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x8000ull))));
}
B76df6f:{NFSU2_TR(0x76df6f);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+24))));
}
B76df71:{NFSU2_TR(0x76df71);
u8 U[2];
w2(U+0,u16(u32(r2(R+4))&u32(r2(R+4))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B76df74:{NFSU2_TR(0x76df74);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76df75:{NFSU2_TR(0x76df75);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
w1(U+4,u8(0xccull));
s1(u32(r4(U+0)),r1(U+4));
}
B76df79:{NFSU2_TR(0x76df79);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffddull))));
w1(U+4,u8(0xccull));
s1(u32(r4(U+0)),r1(U+4));
}
B76df7d:{NFSU2_TR(0x76df7d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdeull))));
w1(U+4,u8(0xccull));
s1(u32(r4(U+0)),r1(U+4));
}
B76df81:{NFSU2_TR(0x76df81);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdfull))));
w1(U+4,u8(0xccull));
s1(u32(r4(U+0)),r1(U+4));
}
B76df85:{NFSU2_TR(0x76df85);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
w1(U+4,u8(0xccull));
s1(u32(r4(U+0)),r1(U+4));
}
B76df89:{NFSU2_TR(0x76df89);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe1ull))));
w1(U+4,u8(0xccull));
s1(u32(r4(U+0)),r1(U+4));
}
B76df8d:{NFSU2_TR(0x76df8d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe2ull))));
w1(U+4,u8(0xccull));
s1(u32(r4(U+0)),r1(U+4));
}
B76df91:{NFSU2_TR(0x76df91);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe3ull))));
w1(U+4,u8(0xccull));
s1(u32(r4(U+0)),r1(U+4));
}
B76df95:{NFSU2_TR(0x76df95);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
w1(U+4,u8(0xccull));
s1(u32(r4(U+0)),r1(U+4));
}
B76df99:{NFSU2_TR(0x76df99);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe5ull))));
w1(U+4,u8(0xccull));
s1(u32(r4(U+0)),r1(U+4));
}
B76df9d:{NFSU2_TR(0x76df9d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe6ull))));
w1(U+4,u8(0xfbull));
s1(u32(r4(U+0)),r1(U+4));
}
B76dfa1:{NFSU2_TR(0x76dfa1);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe7ull))));
w1(U+4,u8(0x3full));
s1(u32(r4(U+0)),r1(U+4));
}
B76dfa5:{NFSU2_TR(0x76dfa5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B76dfac:{NFSU2_TR(0x76dfac);
__builtin_memmove((R+8),(R+0),4);
}
B76dfae:{NFSU2_TR(0x76dfae);
if(r1(R+518)){{goto L76dfb6;}}
}
B76dfb0:L76dfb0:{c.instructions+=2;NFSU2_TR(0x76dfb0);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2ull))));
w1(U+4,u8(0x2dull));
s1(u32(r4(U+0)),r1(U+4));
}
B76dfb4:{NFSU2_TR(0x76dfb4);
{goto L76dfba;}
}
B76dfb6:L76dfb6:{c.instructions+=1;NFSU2_TR(0x76dfb6);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2ull))));
w1(U+4,u8(0x20ull));
s1(u32(r4(U+0)),r1(U+4));
}
B76dfba:L76dfba:{c.instructions+=3;NFSU2_TR(0x76dfba);
u8 U[2];
w2(U+0,u16(u32(r2(R+8))&u32(r2(R+8))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B76dfbd:{NFSU2_TR(0x76dfbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B76dfc0:{NFSU2_TR(0x76dfc0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76dfcf;}}
}
B76dfc2:L76dfc2:{c.instructions+=2;NFSU2_TR(0x76dfc2);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76dfc4:{NFSU2_TR(0x76dfc4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76dfcf;}}
}
B76dfc6:L76dfc6:{c.instructions+=2;NFSU2_TR(0x76dfc6);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76dfc9:{NFSU2_TR(0x76dfc9);
if(r1(R+518)){TAIL_STATIC(0x76e0c2u,76e);}
}
B76dfcf:L76dfcf:{c.instructions+=2;NFSU2_TR(0x76dfcf);
u8 U[4];
__builtin_memmove((U+0),(R+24),2);
w2(U+2,u16(u32(r2(R+8))-u32(r2(U+0))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B76dfd2:{NFSU2_TR(0x76dfd2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x76e04cu,76e);}
}
B76dfd4:L76dfd4:{c.instructions+=4;NFSU2_TR(0x76dfd4);
w4(R+0,u32(0x80000000ull));
}
B76dfd9:{NFSU2_TR(0x76dfd9);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76dfdb:{NFSU2_TR(0x76dfdb);
u8 U[2];
w2(U+0,u16(0x1ull));
s2(u32(r4(R+12)),r2(U+0));
}
B76dfe0:{NFSU2_TR(0x76dfe0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76dfe8;}}
}
B76dfe2:L76dfe2:{c.instructions+=2;NFSU2_TR(0x76dfe2);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76dfe6:{NFSU2_TR(0x76dfe6);
if(r1(R+518)){{goto L76dff7;}}
}
B76dfe8:L76dfe8:{c.instructions+=2;NFSU2_TR(0x76dfe8);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(u32(0x40000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76dfee:{NFSU2_TR(0x76dfee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76dff7;}}
}
B76dff0:L76dff0:{c.instructions+=2;NFSU2_TR(0x76dff0);
u8 U[4];
w4(U+0,u32(0x7d98e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76dff5:{NFSU2_TR(0x76dff5);
TAIL_STATIC(0x76e03du,76e);
}
B76dff7:L76dff7:{c.instructions+=2;NFSU2_TR(0x76dff7);
u8 U[2];
w2(U+0,u16(u32(r2(R+4))&u32(r2(R+4))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B76dffa:{NFSU2_TR(0x76dffa);
if(r1(R+518)){TAIL_STATIC(0x76e011u,76e);}
}
B76dffc:L76dffc:{c.instructions+=1;NFSU2_TR(0x76dffc);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc0000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
TAIL_STATIC(0x76e002u,76e);
}
XIT:NFSU2_TR_EXIT(0x76d,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
