#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_503(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_513(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_55d(u8* __restrict R,Cpu& c);
u32 body_570(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_581(u8* __restrict R,Cpu& c);
u32 body_582(u8* __restrict R,Cpu& c);
u32 body_584(u8* __restrict R,Cpu& c);
u32 body_586(u8* __restrict R,Cpu& c);
u32 body_587(u8* __restrict R,Cpu& c);
u32 body_589(u8* __restrict R,Cpu& c);
u32 body_58a(u8* __restrict R,Cpu& c);
u32 body_73e(u8* __restrict R,Cpu& c);
u32 body_740(u8* __restrict R,Cpu& c);
u32 body_741(u8* __restrict R,Cpu& c);
u32 body_742(u8* __restrict R,Cpu& c);
u32 body_744(u8* __restrict R,Cpu& c);
u32 body_745(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x58b,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x58b,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_58b(u8* __restrict R,Cpu& c);
u32 page_58b(Cpu& c){return body_58b(c.regs.data(),c);}
__attribute__((noinline)) u32 body_58b(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x58b004:goto L58b004;
case 0x58b007:c.instructions+=2;goto B58b007;
case 0x58b009:c.instructions+=1;goto B58b009;
case 0x58b00b:goto L58b00b;
case 0x58b00e:c.instructions+=4;goto B58b00e;
case 0x58b010:c.instructions+=3;goto B58b010;
case 0x58b011:c.instructions+=2;goto B58b011;
case 0x58b015:c.instructions+=1;goto B58b015;
case 0x58b017:goto L58b017;
case 0x58b01b:c.instructions+=1;goto B58b01b;
case 0x58b01d:goto L58b01d;
case 0x58b020:c.instructions+=4;goto B58b020;
case 0x58b022:c.instructions+=3;goto B58b022;
case 0x58b027:c.instructions+=2;goto B58b027;
case 0x58b028:c.instructions+=1;goto B58b028;
case 0x58b02d:goto L58b02d;
case 0x58b030:c.instructions+=2;goto B58b030;
case 0x58b031:c.instructions+=1;goto B58b031;
case 0x58b036:goto L58b036;
case 0x58b039:c.instructions+=3;goto B58b039;
case 0x58b03c:c.instructions+=2;goto B58b03c;
case 0x58b03e:c.instructions+=1;goto B58b03e;
case 0x58b040:goto L58b040;
case 0x58b043:c.instructions+=4;goto B58b043;
case 0x58b044:c.instructions+=3;goto B58b044;
case 0x58b046:c.instructions+=2;goto B58b046;
case 0x58b048:c.instructions+=1;goto B58b048;
case 0x58b04b:goto L58b04b;
case 0x58b04e:goto L58b04e;
case 0x58b053:goto L58b053;
case 0x58b056:c.instructions+=2;goto B58b056;
case 0x58b058:c.instructions+=1;goto B58b058;
case 0x58b05a:goto L58b05a;
case 0x58b061:c.instructions+=1;goto B58b061;
case 0x58b063:goto L58b063;
case 0x58b064:c.instructions+=2;goto B58b064;
case 0x58b066:c.instructions+=1;goto B58b066;
case 0x58b06b:goto L58b06b;
case 0x58b06c:goto L58b06c;
case 0x58b06d:c.instructions+=1;goto B58b06d;
case 0x58b070:goto L58b070;
case 0x58b071:c.instructions+=6;goto B58b071;
case 0x58b075:c.instructions+=5;goto B58b075;
case 0x58b078:c.instructions+=4;goto B58b078;
case 0x58b07a:c.instructions+=3;goto B58b07a;
case 0x58b07b:c.instructions+=2;goto B58b07b;
case 0x58b07c:c.instructions+=1;goto B58b07c;
case 0x58b082:goto L58b082;
case 0x58b085:c.instructions+=5;goto B58b085;
case 0x58b089:c.instructions+=4;goto B58b089;
case 0x58b08a:c.instructions+=3;goto B58b08a;
case 0x58b08d:c.instructions+=2;goto B58b08d;
case 0x58b08e:c.instructions+=1;goto B58b08e;
case 0x58b093:goto L58b093;
case 0x58b096:c.instructions+=2;goto B58b096;
case 0x58b09b:c.instructions+=1;goto B58b09b;
case 0x58b0a0:goto L58b0a0;
case 0x58b0a1:c.instructions+=3;goto B58b0a1;
case 0x58b0a4:c.instructions+=2;goto B58b0a4;
case 0x58b0a5:c.instructions+=1;goto B58b0a5;
case 0x58b0aa:goto L58b0aa;
case 0x58b0ad:c.instructions+=2;goto B58b0ad;
case 0x58b0af:c.instructions+=1;goto B58b0af;
case 0x58b0b5:goto L58b0b5;
case 0x58b0bb:c.instructions+=14;goto B58b0bb;
case 0x58b0be:c.instructions+=13;goto B58b0be;
case 0x58b0c4:c.instructions+=12;goto B58b0c4;
case 0x58b0ca:c.instructions+=11;goto B58b0ca;
case 0x58b0cc:c.instructions+=10;goto B58b0cc;
case 0x58b0ce:c.instructions+=9;goto B58b0ce;
case 0x58b0d3:c.instructions+=8;goto B58b0d3;
case 0x58b0d9:c.instructions+=7;goto B58b0d9;
case 0x58b0dc:c.instructions+=6;goto B58b0dc;
case 0x58b0df:c.instructions+=5;goto B58b0df;
case 0x58b0e5:c.instructions+=4;goto B58b0e5;
case 0x58b0eb:c.instructions+=3;goto B58b0eb;
case 0x58b0f0:c.instructions+=2;goto B58b0f0;
case 0x58b0f5:c.instructions+=1;goto B58b0f5;
case 0x58b0f7:goto L58b0f7;
case 0x58b101:c.instructions+=1;goto B58b101;
case 0x58b103:goto L58b103;
case 0x58b108:c.instructions+=1;goto B58b108;
case 0x58b10a:goto L58b10a;
case 0x58b114:c.instructions+=1;goto B58b114;
case 0x58b116:goto L58b116;
case 0x58b11b:c.instructions+=1;goto B58b11b;
case 0x58b11d:goto L58b11d;
case 0x58b123:c.instructions+=1;goto B58b123;
case 0x58b125:goto L58b125;
case 0x58b12a:c.instructions+=1;goto B58b12a;
case 0x58b12c:goto L58b12c;
case 0x58b136:c.instructions+=1;goto B58b136;
case 0x58b138:goto L58b138;
case 0x58b13d:c.instructions+=1;goto B58b13d;
case 0x58b13f:goto L58b13f;
case 0x58b149:c.instructions+=1;goto B58b149;
case 0x58b14b:goto L58b14b;
case 0x58b150:c.instructions+=1;goto B58b150;
case 0x58b152:goto L58b152;
case 0x58b15c:c.instructions+=1;goto B58b15c;
case 0x58b15e:goto L58b15e;
case 0x58b160:c.instructions+=1;goto B58b160;
case 0x58b162:goto L58b162;
case 0x58b16c:goto L58b16c;
case 0x58b16e:c.instructions+=4;goto B58b16e;
case 0x58b174:c.instructions+=3;goto B58b174;
case 0x58b179:c.instructions+=2;goto B58b179;
case 0x58b17a:c.instructions+=1;goto B58b17a;
case 0x58b17f:goto L58b17f;
case 0x58b182:c.instructions+=2;goto B58b182;
case 0x58b183:c.instructions+=1;goto B58b183;
case 0x58b188:goto L58b188;
case 0x58b18b:c.instructions+=5;goto B58b18b;
case 0x58b18d:c.instructions+=4;goto B58b18d;
case 0x58b192:c.instructions+=3;goto B58b192;
case 0x58b193:c.instructions+=2;goto B58b193;
case 0x58b199:c.instructions+=1;goto B58b199;
case 0x58b19e:goto L58b19e;
case 0x58b1a1:c.instructions+=2;goto B58b1a1;
case 0x58b1a2:c.instructions+=1;goto B58b1a2;
case 0x58b1a7:goto L58b1a7;
case 0x58b1aa:c.instructions+=5;goto B58b1aa;
case 0x58b1ac:c.instructions+=4;goto B58b1ac;
case 0x58b1b1:c.instructions+=3;goto B58b1b1;
case 0x58b1b2:c.instructions+=2;goto B58b1b2;
case 0x58b1b7:c.instructions+=1;goto B58b1b7;
case 0x58b1bc:goto L58b1bc;
case 0x58b1bf:c.instructions+=2;goto B58b1bf;
case 0x58b1c0:c.instructions+=1;goto B58b1c0;
case 0x58b1c5:goto L58b1c5;
case 0x58b1cb:c.instructions+=4;goto B58b1cb;
case 0x58b1d0:c.instructions+=3;goto B58b1d0;
case 0x58b1d3:c.instructions+=2;goto B58b1d3;
case 0x58b1d5:c.instructions+=1;goto B58b1d5;
case 0x58b1d7:goto L58b1d7;
case 0x58b1d9:c.instructions+=3;goto B58b1d9;
case 0x58b1de:c.instructions+=2;goto B58b1de;
case 0x58b1df:c.instructions+=1;goto B58b1df;
case 0x58b1e4:goto L58b1e4;
case 0x58b1e7:c.instructions+=2;goto B58b1e7;
case 0x58b1e8:c.instructions+=1;goto B58b1e8;
case 0x58b1ed:goto L58b1ed;
case 0x58b1f0:c.instructions+=5;goto B58b1f0;
case 0x58b1f2:c.instructions+=4;goto B58b1f2;
case 0x58b1f7:c.instructions+=3;goto B58b1f7;
case 0x58b1f8:c.instructions+=2;goto B58b1f8;
case 0x58b1fd:c.instructions+=1;goto B58b1fd;
case 0x58b202:goto L58b202;
case 0x58b205:c.instructions+=2;goto B58b205;
case 0x58b206:c.instructions+=1;goto B58b206;
case 0x58b20b:goto L58b20b;
case 0x58b20e:c.instructions+=1;goto B58b20e;
case 0x58b213:goto L58b213;
case 0x58b21d:c.instructions+=1;goto B58b21d;
case 0x58b21f:goto L58b21f;
case 0x58b229:goto L58b229;
case 0x58b22e:goto L58b22e;
case 0x58b230:c.instructions+=3;goto B58b230;
case 0x58b233:c.instructions+=2;goto B58b233;
case 0x58b235:c.instructions+=1;goto B58b235;
case 0x58b237:goto L58b237;
case 0x58b23a:c.instructions+=2;goto B58b23a;
case 0x58b23c:c.instructions+=1;goto B58b23c;
case 0x58b23e:goto L58b23e;
case 0x58b241:c.instructions+=3;goto B58b241;
case 0x58b242:c.instructions+=2;goto B58b242;
case 0x58b243:c.instructions+=1;goto B58b243;
case 0x58b245:goto L58b245;
case 0x58b248:goto L58b248;
case 0x58b24b:c.instructions+=2;goto B58b24b;
case 0x58b24d:c.instructions+=1;goto B58b24d;
case 0x58b24f:goto L58b24f;
case 0x58b251:c.instructions+=1;goto B58b251;
case 0x58b256:goto L58b256;
case 0x58b257:c.instructions+=1;goto B58b257;
case 0x58b25c:goto L58b25c;
case 0x58b25f:goto L58b25f;
case 0x58b266:goto L58b266;
case 0x58b267:c.instructions+=3;goto B58b267;
case 0x58b268:c.instructions+=2;goto B58b268;
case 0x58b269:c.instructions+=1;goto B58b269;
case 0x58b270:goto L58b270;
case 0x58b271:c.instructions+=5;goto B58b271;
case 0x58b275:c.instructions+=4;goto B58b275;
case 0x58b278:c.instructions+=3;goto B58b278;
case 0x58b27a:c.instructions+=2;goto B58b27a;
case 0x58b27b:c.instructions+=1;goto B58b27b;
case 0x58b27d:goto L58b27d;
case 0x58b282:c.instructions+=1;goto B58b282;
case 0x58b284:goto L58b284;
case 0x58b288:c.instructions+=4;goto B58b288;
case 0x58b28b:c.instructions+=3;goto B58b28b;
case 0x58b290:c.instructions+=2;goto B58b290;
case 0x58b292:c.instructions+=1;goto B58b292;
case 0x58b294:goto L58b294;
case 0x58b296:goto L58b296;
case 0x58b29c:goto L58b29c;
case 0x58b2a1:goto L58b2a1;
case 0x58b2a3:c.instructions+=3;goto B58b2a3;
case 0x58b2a6:c.instructions+=2;goto B58b2a6;
case 0x58b2a8:c.instructions+=1;goto B58b2a8;
case 0x58b2aa:goto L58b2aa;
case 0x58b2ad:c.instructions+=2;goto B58b2ad;
case 0x58b2af:c.instructions+=1;goto B58b2af;
case 0x58b2b1:goto L58b2b1;
case 0x58b2b4:c.instructions+=3;goto B58b2b4;
case 0x58b2b5:c.instructions+=2;goto B58b2b5;
case 0x58b2b6:c.instructions+=1;goto B58b2b6;
case 0x58b2b8:goto L58b2b8;
case 0x58b2bb:goto L58b2bb;
case 0x58b2be:c.instructions+=2;goto B58b2be;
case 0x58b2c0:c.instructions+=1;goto B58b2c0;
case 0x58b2c2:goto L58b2c2;
case 0x58b2c4:c.instructions+=1;goto B58b2c4;
case 0x58b2c9:goto L58b2c9;
case 0x58b2ca:c.instructions+=1;goto B58b2ca;
case 0x58b2cf:goto L58b2cf;
case 0x58b2d2:goto L58b2d2;
case 0x58b2d9:goto L58b2d9;
case 0x58b2da:c.instructions+=2;goto B58b2da;
case 0x58b2db:c.instructions+=1;goto B58b2db;
case 0x58b2e0:goto L58b2e0;
case 0x58b2e1:c.instructions+=5;goto B58b2e1;
case 0x58b2e5:c.instructions+=4;goto B58b2e5;
case 0x58b2e8:c.instructions+=3;goto B58b2e8;
case 0x58b2ea:c.instructions+=2;goto B58b2ea;
case 0x58b2eb:c.instructions+=1;goto B58b2eb;
case 0x58b2ed:goto L58b2ed;
case 0x58b2f0:c.instructions+=5;goto B58b2f0;
case 0x58b2f4:c.instructions+=4;goto B58b2f4;
case 0x58b2f6:c.instructions+=3;goto B58b2f6;
case 0x58b2fb:c.instructions+=2;goto B58b2fb;
case 0x58b2fc:c.instructions+=1;goto B58b2fc;
case 0x58b301:goto L58b301;
case 0x58b304:c.instructions+=2;goto B58b304;
case 0x58b305:c.instructions+=1;goto B58b305;
case 0x58b30a:goto L58b30a;
case 0x58b310:c.instructions+=4;goto B58b310;
case 0x58b313:c.instructions+=3;goto B58b313;
case 0x58b316:c.instructions+=2;goto B58b316;
case 0x58b318:c.instructions+=1;goto B58b318;
case 0x58b31a:goto L58b31a;
case 0x58b31d:c.instructions+=4;goto B58b31d;
case 0x58b31e:c.instructions+=3;goto B58b31e;
case 0x58b320:c.instructions+=2;goto B58b320;
case 0x58b322:c.instructions+=1;goto B58b322;
case 0x58b324:goto L58b324;
case 0x58b327:goto L58b327;
case 0x58b32d:c.instructions+=2;goto B58b32d;
case 0x58b32f:c.instructions+=1;goto B58b32f;
case 0x58b331:goto L58b331;
case 0x58b332:c.instructions+=1;goto B58b332;
case 0x58b337:goto L58b337;
case 0x58b339:c.instructions+=1;goto B58b339;
case 0x58b33e:goto L58b33e;
case 0x58b33f:c.instructions+=2;goto B58b33f;
case 0x58b340:c.instructions+=1;goto B58b340;
case 0x58b341:goto L58b341;
case 0x58b342:c.instructions+=1;goto B58b342;
case 0x58b347:goto L58b347;
case 0x58b349:c.instructions+=3;goto B58b349;
case 0x58b34c:c.instructions+=2;goto B58b34c;
case 0x58b34e:c.instructions+=1;goto B58b34e;
case 0x58b350:goto L58b350;
case 0x58b353:c.instructions+=2;goto B58b353;
case 0x58b355:c.instructions+=1;goto B58b355;
case 0x58b357:goto L58b357;
case 0x58b35a:c.instructions+=3;goto B58b35a;
case 0x58b35b:c.instructions+=2;goto B58b35b;
case 0x58b35c:c.instructions+=1;goto B58b35c;
case 0x58b35e:goto L58b35e;
case 0x58b361:goto L58b361;
case 0x58b364:c.instructions+=2;goto B58b364;
case 0x58b366:c.instructions+=1;goto B58b366;
case 0x58b368:goto L58b368;
case 0x58b36a:c.instructions+=1;goto B58b36a;
case 0x58b36f:goto L58b36f;
case 0x58b370:c.instructions+=1;goto B58b370;
case 0x58b375:goto L58b375;
case 0x58b378:goto L58b378;
case 0x58b37f:goto L58b37f;
case 0x58b380:goto L58b380;
case 0x58b381:c.instructions+=2;goto B58b381;
case 0x58b382:c.instructions+=1;goto B58b382;
case 0x58b390:goto L58b390;
case 0x58b391:c.instructions+=12;goto B58b391;
case 0x58b393:c.instructions+=11;goto B58b393;
case 0x58b396:c.instructions+=10;goto B58b396;
case 0x58b39c:c.instructions+=9;goto B58b39c;
case 0x58b39d:c.instructions+=8;goto B58b39d;
case 0x58b39e:c.instructions+=7;goto B58b39e;
case 0x58b3a1:c.instructions+=6;goto B58b3a1;
case 0x58b3a2:c.instructions+=5;goto B58b3a2;
case 0x58b3a4:c.instructions+=4;goto B58b3a4;
case 0x58b3a6:c.instructions+=3;goto B58b3a6;
case 0x58b3ae:c.instructions+=2;goto B58b3ae;
case 0x58b3b3:c.instructions+=1;goto B58b3b3;
case 0x58b3ba:goto L58b3ba;
case 0x58b3bc:goto L58b3bc;
case 0x58b3be:c.instructions+=4;goto B58b3be;
case 0x58b3bf:c.instructions+=3;goto B58b3bf;
case 0x58b3c2:c.instructions+=2;goto B58b3c2;
case 0x58b3c7:c.instructions+=1;goto B58b3c7;
case 0x58b3cd:goto L58b3cd;
case 0x58b3d3:goto L58b3d3;
case 0x58b3d8:c.instructions+=1;goto B58b3d8;
case 0x58b3de:goto L58b3de;
case 0x58b3e4:goto L58b3e4;
case 0x58b3e9:c.instructions+=1;goto B58b3e9;
case 0x58b3eb:goto L58b3eb;
case 0x58b3f0:c.instructions+=1;goto B58b3f0;
case 0x58b3f6:goto L58b3f6;
case 0x58b3f9:c.instructions+=7;goto B58b3f9;
case 0x58b3fe:c.instructions+=6;goto B58b3fe;
case 0x58b403:c.instructions+=5;goto B58b403;
case 0x58b40a:c.instructions+=4;goto B58b40a;
case 0x58b40b:c.instructions+=3;goto B58b40b;
case 0x58b410:c.instructions+=2;goto B58b410;
case 0x58b411:c.instructions+=1;goto B58b411;
case 0x58b416:goto L58b416;
case 0x58b419:c.instructions+=2;goto B58b419;
case 0x58b41a:c.instructions+=1;goto B58b41a;
case 0x58b41f:goto L58b41f;
case 0x58b421:c.instructions+=2;goto B58b421;
case 0x58b426:c.instructions+=1;goto B58b426;
case 0x58b42b:goto L58b42b;
case 0x58b42e:c.instructions+=8;goto B58b42e;
case 0x58b438:c.instructions+=7;goto B58b438;
case 0x58b442:c.instructions+=6;goto B58b442;
case 0x58b443:c.instructions+=5;goto B58b443;
case 0x58b444:c.instructions+=4;goto B58b444;
case 0x58b445:c.instructions+=3;goto B58b445;
case 0x58b447:c.instructions+=2;goto B58b447;
case 0x58b448:c.instructions+=1;goto B58b448;
case 0x58b44b:goto L58b44b;
case 0x58b44e:c.instructions+=7;goto B58b44e;
case 0x58b453:c.instructions+=6;goto B58b453;
case 0x58b458:c.instructions+=5;goto B58b458;
case 0x58b45f:c.instructions+=4;goto B58b45f;
case 0x58b460:c.instructions+=3;goto B58b460;
case 0x58b465:c.instructions+=2;goto B58b465;
case 0x58b466:c.instructions+=1;goto B58b466;
case 0x58b46b:goto L58b46b;
case 0x58b46e:c.instructions+=2;goto B58b46e;
case 0x58b46f:c.instructions+=1;goto B58b46f;
case 0x58b474:goto L58b474;
case 0x58b479:c.instructions+=4;goto B58b479;
case 0x58b47e:c.instructions+=3;goto B58b47e;
case 0x58b481:c.instructions+=2;goto B58b481;
case 0x58b483:c.instructions+=1;goto B58b483;
case 0x58b485:goto L58b485;
case 0x58b48a:c.instructions+=2;goto B58b48a;
case 0x58b48f:c.instructions+=1;goto B58b48f;
case 0x58b494:goto L58b494;
case 0x58b497:goto L58b497;
case 0x58b49d:c.instructions+=6;goto B58b49d;
case 0x58b49e:c.instructions+=5;goto B58b49e;
case 0x58b49f:c.instructions+=4;goto B58b49f;
case 0x58b4a0:c.instructions+=3;goto B58b4a0;
case 0x58b4a2:c.instructions+=2;goto B58b4a2;
case 0x58b4a3:c.instructions+=1;goto B58b4a3;
case 0x58b4a6:goto L58b4a6;
case 0x58b4a9:c.instructions+=7;goto B58b4a9;
case 0x58b4ae:c.instructions+=6;goto B58b4ae;
case 0x58b4b3:c.instructions+=5;goto B58b4b3;
case 0x58b4ba:c.instructions+=4;goto B58b4ba;
case 0x58b4bb:c.instructions+=3;goto B58b4bb;
case 0x58b4c0:c.instructions+=2;goto B58b4c0;
case 0x58b4c1:c.instructions+=1;goto B58b4c1;
case 0x58b4c6:goto L58b4c6;
case 0x58b4c9:c.instructions+=2;goto B58b4c9;
case 0x58b4ca:c.instructions+=1;goto B58b4ca;
case 0x58b4cf:goto L58b4cf;
case 0x58b4d1:c.instructions+=4;goto B58b4d1;
case 0x58b4d6:c.instructions+=3;goto B58b4d6;
case 0x58b4e0:c.instructions+=2;goto B58b4e0;
case 0x58b4ea:c.instructions+=1;goto B58b4ea;
case 0x58b4ef:goto L58b4ef;
case 0x58b4f2:c.instructions+=6;goto B58b4f2;
case 0x58b4f3:c.instructions+=5;goto B58b4f3;
case 0x58b4f4:c.instructions+=4;goto B58b4f4;
case 0x58b4f5:c.instructions+=3;goto B58b4f5;
case 0x58b4f7:c.instructions+=2;goto B58b4f7;
case 0x58b4f8:c.instructions+=1;goto B58b4f8;
case 0x58b4fb:goto L58b4fb;
case 0x58b500:c.instructions+=1;goto B58b500;
case 0x58b506:goto L58b506;
case 0x58b508:c.instructions+=3;goto B58b508;
case 0x58b50d:c.instructions+=2;goto B58b50d;
case 0x58b512:c.instructions+=1;goto B58b512;
case 0x58b516:goto L58b516;
case 0x58b518:goto L58b518;
case 0x58b51b:c.instructions+=9;goto B58b51b;
case 0x58b51d:c.instructions+=8;goto B58b51d;
case 0x58b522:c.instructions+=7;goto B58b522;
case 0x58b523:c.instructions+=6;goto B58b523;
case 0x58b528:c.instructions+=5;goto B58b528;
case 0x58b52f:c.instructions+=4;goto B58b52f;
case 0x58b530:c.instructions+=3;goto B58b530;
case 0x58b535:c.instructions+=2;goto B58b535;
case 0x58b536:c.instructions+=1;goto B58b536;
case 0x58b53b:goto L58b53b;
case 0x58b53e:c.instructions+=2;goto B58b53e;
case 0x58b53f:c.instructions+=1;goto B58b53f;
case 0x58b544:goto L58b544;
case 0x58b547:c.instructions+=8;goto B58b547;
case 0x58b54c:c.instructions+=7;goto B58b54c;
case 0x58b551:c.instructions+=6;goto B58b551;
case 0x58b555:c.instructions+=5;goto B58b555;
case 0x58b556:c.instructions+=4;goto B58b556;
case 0x58b55d:c.instructions+=3;goto B58b55d;
case 0x58b562:c.instructions+=2;goto B58b562;
case 0x58b563:c.instructions+=1;goto B58b563;
case 0x58b568:goto L58b568;
case 0x58b56b:c.instructions+=2;goto B58b56b;
case 0x58b56c:c.instructions+=1;goto B58b56c;
case 0x58b571:goto L58b571;
case 0x58b575:c.instructions+=3;goto B58b575;
case 0x58b57a:c.instructions+=2;goto B58b57a;
case 0x58b57b:c.instructions+=1;goto B58b57b;
case 0x58b580:goto L58b580;
case 0x58b583:c.instructions+=2;goto B58b583;
case 0x58b585:c.instructions+=1;goto B58b585;
case 0x58b58b:goto L58b58b;
case 0x58b58d:c.instructions+=1;goto B58b58d;
case 0x58b592:goto L58b592;
case 0x58b597:c.instructions+=9;goto B58b597;
case 0x58b59c:c.instructions+=8;goto B58b59c;
case 0x58b5a0:c.instructions+=7;goto B58b5a0;
case 0x58b5a2:c.instructions+=6;goto B58b5a2;
case 0x58b5a5:c.instructions+=5;goto B58b5a5;
case 0x58b5a8:c.instructions+=4;goto B58b5a8;
case 0x58b5a9:c.instructions+=3;goto B58b5a9;
case 0x58b5ae:c.instructions+=2;goto B58b5ae;
case 0x58b5af:c.instructions+=1;goto B58b5af;
case 0x58b5b4:goto L58b5b4;
case 0x58b5b7:c.instructions+=2;goto B58b5b7;
case 0x58b5b8:c.instructions+=1;goto B58b5b8;
case 0x58b5bd:goto L58b5bd;
case 0x58b5c0:c.instructions+=5;goto B58b5c0;
case 0x58b5c2:c.instructions+=4;goto B58b5c2;
case 0x58b5c6:c.instructions+=3;goto B58b5c6;
case 0x58b5c7:c.instructions+=2;goto B58b5c7;
case 0x58b5c9:c.instructions+=1;goto B58b5c9;
case 0x58b5ce:goto L58b5ce;
case 0x58b5d2:c.instructions+=3;goto B58b5d2;
case 0x58b5d3:c.instructions+=2;goto B58b5d3;
case 0x58b5d5:c.instructions+=1;goto B58b5d5;
case 0x58b5da:goto L58b5da;
case 0x58b5db:c.instructions+=1;goto B58b5db;
case 0x58b5e0:goto L58b5e0;
case 0x58b5e3:c.instructions+=2;goto B58b5e3;
case 0x58b5e5:c.instructions+=1;goto B58b5e5;
case 0x58b5e7:goto L58b5e7;
case 0x58b5ec:goto L58b5ec;
case 0x58b5f2:c.instructions+=2;goto B58b5f2;
case 0x58b5f3:c.instructions+=1;goto B58b5f3;
case 0x58b5f8:goto L58b5f8;
case 0x58b5fb:c.instructions+=6;goto B58b5fb;
case 0x58b5fc:c.instructions+=5;goto B58b5fc;
case 0x58b5fd:c.instructions+=4;goto B58b5fd;
case 0x58b5fe:c.instructions+=3;goto B58b5fe;
case 0x58b600:c.instructions+=2;goto B58b600;
case 0x58b601:c.instructions+=1;goto B58b601;
case 0x58b604:goto L58b604;
case 0x58b607:c.instructions+=10;goto B58b607;
case 0x58b60d:c.instructions+=9;goto B58b60d;
case 0x58b610:c.instructions+=8;goto B58b610;
case 0x58b615:c.instructions+=7;goto B58b615;
case 0x58b617:c.instructions+=6;goto B58b617;
case 0x58b619:c.instructions+=5;goto B58b619;
case 0x58b61f:c.instructions+=4;goto B58b61f;
case 0x58b620:c.instructions+=3;goto B58b620;
case 0x58b625:c.instructions+=2;goto B58b625;
case 0x58b626:c.instructions+=1;goto B58b626;
case 0x58b62b:goto L58b62b;
case 0x58b62e:c.instructions+=2;goto B58b62e;
case 0x58b62f:c.instructions+=1;goto B58b62f;
case 0x58b634:goto L58b634;
case 0x58b637:c.instructions+=8;goto B58b637;
case 0x58b63c:c.instructions+=7;goto B58b63c;
case 0x58b641:c.instructions+=6;goto B58b641;
case 0x58b647:c.instructions+=5;goto B58b647;
case 0x58b648:c.instructions+=4;goto B58b648;
case 0x58b64f:c.instructions+=3;goto B58b64f;
case 0x58b654:c.instructions+=2;goto B58b654;
case 0x58b655:c.instructions+=1;goto B58b655;
case 0x58b65a:goto L58b65a;
case 0x58b65d:c.instructions+=2;goto B58b65d;
case 0x58b65e:c.instructions+=1;goto B58b65e;
case 0x58b663:goto L58b663;
case 0x58b666:c.instructions+=10;goto B58b666;
case 0x58b66b:c.instructions+=9;goto B58b66b;
case 0x58b66d:c.instructions+=8;goto B58b66d;
case 0x58b671:c.instructions+=7;goto B58b671;
case 0x58b672:c.instructions+=6;goto B58b672;
case 0x58b679:c.instructions+=5;goto B58b679;
case 0x58b67e:c.instructions+=4;goto B58b67e;
case 0x58b67f:c.instructions+=3;goto B58b67f;
case 0x58b684:c.instructions+=2;goto B58b684;
case 0x58b689:c.instructions+=1;goto B58b689;
case 0x58b68e:goto L58b68e;
case 0x58b691:c.instructions+=2;goto B58b691;
case 0x58b692:c.instructions+=1;goto B58b692;
case 0x58b697:goto L58b697;
case 0x58b69a:c.instructions+=8;goto B58b69a;
case 0x58b69f:c.instructions+=7;goto B58b69f;
case 0x58b6a1:c.instructions+=6;goto B58b6a1;
case 0x58b6a5:c.instructions+=5;goto B58b6a5;
case 0x58b6a6:c.instructions+=4;goto B58b6a6;
case 0x58b6ad:c.instructions+=3;goto B58b6ad;
case 0x58b6b2:c.instructions+=2;goto B58b6b2;
case 0x58b6b3:c.instructions+=1;goto B58b6b3;
case 0x58b6b8:goto L58b6b8;
case 0x58b6bb:c.instructions+=2;goto B58b6bb;
case 0x58b6bc:c.instructions+=1;goto B58b6bc;
case 0x58b6c1:goto L58b6c1;
case 0x58b6c4:c.instructions+=2;goto B58b6c4;
case 0x58b6c9:c.instructions+=1;goto B58b6c9;
case 0x58b6ce:goto L58b6ce;
case 0x58b6d1:c.instructions+=2;goto B58b6d1;
case 0x58b6d2:c.instructions+=1;goto B58b6d2;
case 0x58b6d7:goto L58b6d7;
case 0x58b6db:c.instructions+=4;goto B58b6db;
case 0x58b6dc:c.instructions+=3;goto B58b6dc;
case 0x58b6e1:c.instructions+=2;goto B58b6e1;
case 0x58b6e2:c.instructions+=1;goto B58b6e2;
case 0x58b6e7:goto L58b6e7;
case 0x58b6ea:c.instructions+=3;goto B58b6ea;
case 0x58b6ec:c.instructions+=2;goto B58b6ec;
case 0x58b6f0:c.instructions+=1;goto B58b6f0;
case 0x58b6f2:goto L58b6f2;
case 0x58b6f6:goto L58b6f6;
case 0x58b6f7:c.instructions+=3;goto B58b6f7;
case 0x58b6fd:c.instructions+=2;goto B58b6fd;
case 0x58b6fe:c.instructions+=1;goto B58b6fe;
case 0x58b703:goto L58b703;
case 0x58b708:c.instructions+=1;goto B58b708;
case 0x58b70d:goto L58b70d;
case 0x58b710:c.instructions+=2;goto B58b710;
case 0x58b712:c.instructions+=1;goto B58b712;
case 0x58b714:goto L58b714;
case 0x58b716:c.instructions+=1;goto B58b716;
case 0x58b71b:goto L58b71b;
case 0x58b71e:goto L58b71e;
case 0x58b723:c.instructions+=3;goto B58b723;
case 0x58b724:c.instructions+=2;goto B58b724;
case 0x58b726:c.instructions+=1;goto B58b726;
case 0x58b72b:goto L58b72b;
case 0x58b72d:c.instructions+=2;goto B58b72d;
case 0x58b732:c.instructions+=1;goto B58b732;
case 0x58b737:goto L58b737;
case 0x58b73d:c.instructions+=4;goto B58b73d;
case 0x58b73f:c.instructions+=3;goto B58b73f;
case 0x58b740:c.instructions+=2;goto B58b740;
case 0x58b741:c.instructions+=1;goto B58b741;
case 0x58b746:goto L58b746;
case 0x58b749:c.instructions+=8;goto B58b749;
case 0x58b74f:c.instructions+=7;goto B58b74f;
case 0x58b759:c.instructions+=6;goto B58b759;
case 0x58b75a:c.instructions+=5;goto B58b75a;
case 0x58b75b:c.instructions+=4;goto B58b75b;
case 0x58b75c:c.instructions+=3;goto B58b75c;
case 0x58b75e:c.instructions+=2;goto B58b75e;
case 0x58b75f:c.instructions+=1;goto B58b75f;
case 0x58b762:goto L58b762;
case 0x58b765:c.instructions+=7;goto B58b765;
case 0x58b76a:c.instructions+=6;goto B58b76a;
case 0x58b76f:c.instructions+=5;goto B58b76f;
case 0x58b776:c.instructions+=4;goto B58b776;
case 0x58b777:c.instructions+=3;goto B58b777;
case 0x58b77c:c.instructions+=2;goto B58b77c;
case 0x58b77d:c.instructions+=1;goto B58b77d;
case 0x58b782:goto L58b782;
case 0x58b785:c.instructions+=2;goto B58b785;
case 0x58b786:c.instructions+=1;goto B58b786;
case 0x58b78b:goto L58b78b;
case 0x58b78e:c.instructions+=4;goto B58b78e;
case 0x58b791:c.instructions+=3;goto B58b791;
case 0x58b792:c.instructions+=2;goto B58b792;
case 0x58b794:c.instructions+=1;goto B58b794;
case 0x58b799:goto L58b799;
case 0x58b79b:c.instructions+=1;goto B58b79b;
case 0x58b79d:goto L58b79d;
case 0x58b7a0:c.instructions+=3;goto B58b7a0;
case 0x58b7a1:c.instructions+=2;goto B58b7a1;
case 0x58b7a3:c.instructions+=1;goto B58b7a3;
case 0x58b7a8:goto L58b7a8;
case 0x58b7aa:c.instructions+=2;goto B58b7aa;
case 0x58b7af:c.instructions+=1;goto B58b7af;
case 0x58b7b4:goto L58b7b4;
case 0x58b7b7:c.instructions+=1;goto B58b7b7;
case 0x58b7c1:goto L58b7c1;
case 0x58b7c3:c.instructions+=3;goto B58b7c3;
case 0x58b7c5:c.instructions+=2;goto B58b7c5;
case 0x58b7cf:c.instructions+=1;goto B58b7cf;
case 0x58b7d4:goto L58b7d4;
case 0x58b7d6:c.instructions+=2;goto B58b7d6;
case 0x58b7db:c.instructions+=1;goto B58b7db;
case 0x58b7e0:goto L58b7e0;
case 0x58b7e3:c.instructions+=6;goto B58b7e3;
case 0x58b7e4:c.instructions+=5;goto B58b7e4;
case 0x58b7e5:c.instructions+=4;goto B58b7e5;
case 0x58b7e6:c.instructions+=3;goto B58b7e6;
case 0x58b7e8:c.instructions+=2;goto B58b7e8;
case 0x58b7e9:c.instructions+=1;goto B58b7e9;
case 0x58b7ec:goto L58b7ec;
case 0x58b7f1:c.instructions+=1;goto B58b7f1;
case 0x58b7f7:goto L58b7f7;
case 0x58b7fd:goto L58b7fd;
case 0x58b802:c.instructions+=1;goto B58b802;
case 0x58b804:goto L58b804;
case 0x58b809:c.instructions+=1;goto B58b809;
case 0x58b80f:goto L58b80f;
case 0x58b812:c.instructions+=6;goto B58b812;
case 0x58b817:c.instructions+=5;goto B58b817;
case 0x58b81c:c.instructions+=4;goto B58b81c;
case 0x58b823:c.instructions+=3;goto B58b823;
case 0x58b824:c.instructions+=2;goto B58b824;
case 0x58b829:c.instructions+=1;goto B58b829;
case 0x58b82a:goto L58b82a;
case 0x58b82f:goto L58b82f;
case 0x58b832:c.instructions+=2;goto B58b832;
case 0x58b833:c.instructions+=1;goto B58b833;
case 0x58b838:goto L58b838;
case 0x58b83b:c.instructions+=7;goto B58b83b;
case 0x58b845:c.instructions+=6;goto B58b845;
case 0x58b846:c.instructions+=5;goto B58b846;
case 0x58b847:c.instructions+=4;goto B58b847;
case 0x58b848:c.instructions+=3;goto B58b848;
case 0x58b84a:c.instructions+=2;goto B58b84a;
case 0x58b84b:c.instructions+=1;goto B58b84b;
case 0x58b84e:goto L58b84e;
case 0x58b851:c.instructions+=7;goto B58b851;
case 0x58b856:c.instructions+=6;goto B58b856;
case 0x58b85b:c.instructions+=5;goto B58b85b;
case 0x58b862:c.instructions+=4;goto B58b862;
case 0x58b863:c.instructions+=3;goto B58b863;
case 0x58b868:c.instructions+=2;goto B58b868;
case 0x58b869:c.instructions+=1;goto B58b869;
case 0x58b86e:goto L58b86e;
case 0x58b871:c.instructions+=2;goto B58b871;
case 0x58b872:c.instructions+=1;goto B58b872;
case 0x58b877:goto L58b877;
case 0x58b87c:c.instructions+=4;goto B58b87c;
case 0x58b881:c.instructions+=3;goto B58b881;
case 0x58b884:c.instructions+=2;goto B58b884;
case 0x58b886:c.instructions+=1;goto B58b886;
case 0x58b88c:goto L58b88c;
case 0x58b891:c.instructions+=2;goto B58b891;
case 0x58b896:c.instructions+=1;goto B58b896;
case 0x58b89b:goto L58b89b;
case 0x58b89e:c.instructions+=7;goto B58b89e;
case 0x58b8a4:c.instructions+=6;goto B58b8a4;
case 0x58b8a5:c.instructions+=5;goto B58b8a5;
case 0x58b8a6:c.instructions+=4;goto B58b8a6;
case 0x58b8a7:c.instructions+=3;goto B58b8a7;
case 0x58b8a9:c.instructions+=2;goto B58b8a9;
case 0x58b8aa:c.instructions+=1;goto B58b8aa;
case 0x58b8ad:goto L58b8ad;
case 0x58b8b0:c.instructions+=7;goto B58b8b0;
case 0x58b8b5:c.instructions+=6;goto B58b8b5;
case 0x58b8ba:c.instructions+=5;goto B58b8ba;
case 0x58b8c1:c.instructions+=4;goto B58b8c1;
case 0x58b8c2:c.instructions+=3;goto B58b8c2;
case 0x58b8c7:c.instructions+=2;goto B58b8c7;
case 0x58b8c8:c.instructions+=1;goto B58b8c8;
case 0x58b8cd:goto L58b8cd;
case 0x58b8d2:c.instructions+=1;goto B58b8d2;
case 0x58b8d4:goto L58b8d4;
case 0x58b8d7:c.instructions+=7;goto B58b8d7;
case 0x58b8dc:c.instructions+=6;goto B58b8dc;
case 0x58b8e1:c.instructions+=5;goto B58b8e1;
case 0x58b8e8:c.instructions+=4;goto B58b8e8;
case 0x58b8e9:c.instructions+=3;goto B58b8e9;
case 0x58b8ee:c.instructions+=2;goto B58b8ee;
case 0x58b8ef:c.instructions+=1;goto B58b8ef;
case 0x58b8f4:goto L58b8f4;
case 0x58b8f7:c.instructions+=2;goto B58b8f7;
case 0x58b8f8:c.instructions+=1;goto B58b8f8;
case 0x58b8fd:goto L58b8fd;
case 0x58b8ff:c.instructions+=6;goto B58b8ff;
case 0x58b900:c.instructions+=5;goto B58b900;
case 0x58b905:c.instructions+=4;goto B58b905;
case 0x58b90b:c.instructions+=3;goto B58b90b;
case 0x58b915:c.instructions+=2;goto B58b915;
case 0x58b91b:c.instructions+=1;goto B58b91b;
case 0x58b920:goto L58b920;
case 0x58b921:c.instructions+=2;goto B58b921;
case 0x58b923:c.instructions+=1;goto B58b923;
case 0x58b928:goto L58b928;
case 0x58b929:c.instructions+=2;goto B58b929;
case 0x58b92e:c.instructions+=1;goto B58b92e;
case 0x58b933:goto L58b933;
case 0x58b936:goto L58b936;
case 0x58b937:c.instructions+=5;goto B58b937;
case 0x58b938:c.instructions+=4;goto B58b938;
case 0x58b939:c.instructions+=3;goto B58b939;
case 0x58b93b:c.instructions+=2;goto B58b93b;
case 0x58b93c:c.instructions+=1;goto B58b93c;
case 0x58b940:goto L58b940;
case 0x58b946:c.instructions+=3;goto B58b946;
case 0x58b94b:c.instructions+=2;goto B58b94b;
case 0x58b94d:c.instructions+=1;goto B58b94d;
case 0x58b94f:goto L58b94f;
case 0x58b955:c.instructions+=6;goto B58b955;
case 0x58b957:c.instructions+=5;goto B58b957;
case 0x58b95c:c.instructions+=4;goto B58b95c;
case 0x58b962:c.instructions+=3;goto B58b962;
case 0x58b96c:c.instructions+=2;goto B58b96c;
case 0x58b973:c.instructions+=1;goto B58b973;
case 0x58b978:goto L58b978;
case 0x58b97b:goto L58b97b;
case 0x58b97f:c.instructions+=2;goto B58b97f;
case 0x58b981:c.instructions+=1;goto B58b981;
case 0x58b983:goto L58b983;
case 0x58b988:goto L58b988;
case 0x58b98a:c.instructions+=1;goto B58b98a;
case 0x58b98c:goto L58b98c;
case 0x58b98d:goto L58b98d;
case 0x58b992:c.instructions+=2;goto B58b992;
case 0x58b997:c.instructions+=1;goto B58b997;
case 0x58b9a0:goto L58b9a0;
case 0x58b9a6:c.instructions+=8;goto B58b9a6;
case 0x58b9ac:c.instructions+=7;goto B58b9ac;
case 0x58b9ae:c.instructions+=6;goto B58b9ae;
case 0x58b9b3:c.instructions+=5;goto B58b9b3;
case 0x58b9b4:c.instructions+=4;goto B58b9b4;
case 0x58b9b9:c.instructions+=3;goto B58b9b9;
case 0x58b9bb:c.instructions+=2;goto B58b9bb;
case 0x58b9c2:c.instructions+=1;goto B58b9c2;
case 0x58b9c4:goto L58b9c4;
case 0x58b9ca:c.instructions+=3;goto B58b9ca;
case 0x58b9cf:c.instructions+=2;goto B58b9cf;
case 0x58b9d7:c.instructions+=1;goto B58b9d7;
case 0x58b9dc:goto L58b9dc;
case 0x58b9e1:c.instructions+=1;goto B58b9e1;
case 0x58b9e6:goto L58b9e6;
case 0x58b9e9:goto L58b9e9;
case 0x58b9ed:c.instructions+=4;goto B58b9ed;
case 0x58b9f2:c.instructions+=3;goto B58b9f2;
case 0x58b9f9:c.instructions+=2;goto B58b9f9;
case 0x58b9fc:c.instructions+=1;goto B58b9fc;
case 0x58ba00:goto L58ba00;
case 0x58ba01:c.instructions+=6;goto B58ba01;
case 0x58ba03:c.instructions+=5;goto B58ba03;
case 0x58ba09:c.instructions+=4;goto B58ba09;
case 0x58ba0a:c.instructions+=3;goto B58ba0a;
case 0x58ba0b:c.instructions+=2;goto B58ba0b;
case 0x58ba0d:c.instructions+=1;goto B58ba0d;
case 0x58ba12:goto L58ba12;
case 0x58ba15:c.instructions+=3;goto B58ba15;
case 0x58ba17:c.instructions+=2;goto B58ba17;
case 0x58ba19:c.instructions+=1;goto B58ba19;
case 0x58ba1b:goto L58ba1b;
case 0x58ba1c:c.instructions+=5;goto B58ba1c;
case 0x58ba1e:c.instructions+=4;goto B58ba1e;
case 0x58ba1f:c.instructions+=3;goto B58ba1f;
case 0x58ba21:c.instructions+=2;goto B58ba21;
case 0x58ba22:c.instructions+=1;goto B58ba22;
case 0x58ba25:goto L58ba25;
case 0x58ba26:c.instructions+=2;goto B58ba26;
case 0x58ba2b:c.instructions+=1;goto B58ba2b;
case 0x58ba30:goto L58ba30;
case 0x58ba31:c.instructions+=3;goto B58ba31;
case 0x58ba34:c.instructions+=2;goto B58ba34;
case 0x58ba35:c.instructions+=1;goto B58ba35;
case 0x58ba3a:goto L58ba3a;
case 0x58ba3d:c.instructions+=2;goto B58ba3d;
case 0x58ba3f:c.instructions+=1;goto B58ba3f;
case 0x58ba41:goto L58ba41;
case 0x58ba44:c.instructions+=1;goto B58ba44;
case 0x58ba46:goto L58ba46;
case 0x58ba49:c.instructions+=8;goto B58ba49;
case 0x58ba4a:c.instructions+=7;goto B58ba4a;
case 0x58ba4d:c.instructions+=6;goto B58ba4d;
case 0x58ba4e:c.instructions+=5;goto B58ba4e;
case 0x58ba4f:c.instructions+=4;goto B58ba4f;
case 0x58ba54:c.instructions+=3;goto B58ba54;
case 0x58ba57:c.instructions+=2;goto B58ba57;
case 0x58ba5a:c.instructions+=1;goto B58ba5a;
case 0x58ba5f:goto L58ba5f;
case 0x58ba62:c.instructions+=6;goto B58ba62;
case 0x58ba65:c.instructions+=5;goto B58ba65;
case 0x58ba68:c.instructions+=4;goto B58ba68;
case 0x58ba6b:c.instructions+=3;goto B58ba6b;
case 0x58ba6c:c.instructions+=2;goto B58ba6c;
case 0x58ba6f:c.instructions+=1;goto B58ba6f;
case 0x58ba71:goto L58ba71;
case 0x58ba76:c.instructions+=1;goto B58ba76;
case 0x58ba7b:goto L58ba7b;
case 0x58ba7e:c.instructions+=8;goto B58ba7e;
case 0x58ba7f:c.instructions+=7;goto B58ba7f;
case 0x58ba80:c.instructions+=6;goto B58ba80;
case 0x58ba82:c.instructions+=5;goto B58ba82;
case 0x58ba84:c.instructions+=4;goto B58ba84;
case 0x58ba85:c.instructions+=3;goto B58ba85;
case 0x58ba87:c.instructions+=2;goto B58ba87;
case 0x58ba88:c.instructions+=1;goto B58ba88;
case 0x58ba8b:goto L58ba8b;
case 0x58ba8d:c.instructions+=2;goto B58ba8d;
case 0x58ba8f:c.instructions+=1;goto B58ba8f;
case 0x58ba94:goto L58ba94;
case 0x58ba96:c.instructions+=3;goto B58ba96;
case 0x58ba98:c.instructions+=2;goto B58ba98;
case 0x58ba9b:c.instructions+=1;goto B58ba9b;
case 0x58ba9d:goto L58ba9d;
case 0x58baa0:goto L58baa0;
case 0x58baa3:c.instructions+=4;goto B58baa3;
case 0x58baa4:c.instructions+=3;goto B58baa4;
case 0x58baa7:c.instructions+=2;goto B58baa7;
case 0x58baa8:c.instructions+=1;goto B58baa8;
case 0x58baad:goto L58baad;
case 0x58bab0:c.instructions+=2;goto B58bab0;
case 0x58bab2:c.instructions+=1;goto B58bab2;
case 0x58bab4:goto L58bab4;
case 0x58baba:c.instructions+=1;goto B58baba;
case 0x58babc:goto L58babc;
case 0x58babe:c.instructions+=3;goto B58babe;
case 0x58bac1:c.instructions+=2;goto B58bac1;
case 0x58bac6:c.instructions+=1;goto B58bac6;
case 0x58bac9:goto L58bac9;
case 0x58bacb:goto L58bacb;
case 0x58bad0:c.instructions+=9;goto B58bad0;
case 0x58bad2:c.instructions+=8;goto B58bad2;
case 0x58bad4:c.instructions+=7;goto B58bad4;
case 0x58bad7:c.instructions+=6;goto B58bad7;
case 0x58bad8:c.instructions+=5;goto B58bad8;
case 0x58bad9:c.instructions+=4;goto B58bad9;
case 0x58badf:c.instructions+=3;goto B58badf;
case 0x58bae4:c.instructions+=2;goto B58bae4;
case 0x58bae5:c.instructions+=1;goto B58bae5;
case 0x58baea:goto L58baea;
case 0x58baed:c.instructions+=2;goto B58baed;
case 0x58baee:c.instructions+=1;goto B58baee;
case 0x58baf3:goto L58baf3;
case 0x58baf6:c.instructions+=3;goto B58baf6;
case 0x58baf9:c.instructions+=2;goto B58baf9;
case 0x58bafb:c.instructions+=1;goto B58bafb;
case 0x58bafd:goto L58bafd;
case 0x58bb00:goto L58bb00;
case 0x58bb02:c.instructions+=2;goto B58bb02;
case 0x58bb04:c.instructions+=1;goto B58bb04;
case 0x58bb06:goto L58bb06;
case 0x58bb07:c.instructions+=6;goto B58bb07;
case 0x58bb08:c.instructions+=5;goto B58bb08;
case 0x58bb0a:c.instructions+=4;goto B58bb0a;
case 0x58bb0b:c.instructions+=3;goto B58bb0b;
case 0x58bb0d:c.instructions+=2;goto B58bb0d;
case 0x58bb0e:c.instructions+=1;goto B58bb0e;
case 0x58bb11:goto L58bb11;
case 0x58bb13:c.instructions+=5;goto B58bb13;
case 0x58bb16:c.instructions+=4;goto B58bb16;
case 0x58bb17:c.instructions+=3;goto B58bb17;
case 0x58bb1a:c.instructions+=2;goto B58bb1a;
case 0x58bb1b:c.instructions+=1;goto B58bb1b;
case 0x58bb20:goto L58bb20;
case 0x58bb23:c.instructions+=4;goto B58bb23;
case 0x58bb24:c.instructions+=3;goto B58bb24;
case 0x58bb27:c.instructions+=2;goto B58bb27;
case 0x58bb28:c.instructions+=1;goto B58bb28;
case 0x58bb2d:goto L58bb2d;
case 0x58bb30:c.instructions+=9;goto B58bb30;
case 0x58bb31:c.instructions+=8;goto B58bb31;
case 0x58bb34:c.instructions+=7;goto B58bb34;
case 0x58bb35:c.instructions+=6;goto B58bb35;
case 0x58bb3b:c.instructions+=5;goto B58bb3b;
case 0x58bb41:c.instructions+=4;goto B58bb41;
case 0x58bb44:c.instructions+=3;goto B58bb44;
case 0x58bb47:c.instructions+=2;goto B58bb47;
case 0x58bb4b:c.instructions+=1;goto B58bb4b;
case 0x58bb50:goto L58bb50;
case 0x58bb53:c.instructions+=1;goto B58bb53;
case 0x58bb55:goto L58bb55;
case 0x58bb57:c.instructions+=5;goto B58bb57;
case 0x58bb5a:c.instructions+=4;goto B58bb5a;
case 0x58bb5b:c.instructions+=3;goto B58bb5b;
case 0x58bb61:c.instructions+=2;goto B58bb61;
case 0x58bb64:c.instructions+=1;goto B58bb64;
case 0x58bb69:goto L58bb69;
case 0x58bb6d:c.instructions+=5;goto B58bb6d;
case 0x58bb70:c.instructions+=4;goto B58bb70;
case 0x58bb73:c.instructions+=3;goto B58bb73;
case 0x58bb74:c.instructions+=2;goto B58bb74;
case 0x58bb77:c.instructions+=1;goto B58bb77;
case 0x58bb79:goto L58bb79;
case 0x58bb7b:c.instructions+=5;goto B58bb7b;
case 0x58bb7e:c.instructions+=4;goto B58bb7e;
case 0x58bb7f:c.instructions+=3;goto B58bb7f;
case 0x58bb85:c.instructions+=2;goto B58bb85;
case 0x58bb88:c.instructions+=1;goto B58bb88;
case 0x58bb8d:goto L58bb8d;
case 0x58bb91:c.instructions+=10;goto B58bb91;
case 0x58bb94:c.instructions+=9;goto B58bb94;
case 0x58bb95:c.instructions+=8;goto B58bb95;
case 0x58bb98:c.instructions+=7;goto B58bb98;
case 0x58bb99:c.instructions+=6;goto B58bb99;
case 0x58bb9b:c.instructions+=5;goto B58bb9b;
case 0x58bb9d:c.instructions+=4;goto B58bb9d;
case 0x58bb9e:c.instructions+=3;goto B58bb9e;
case 0x58bba0:c.instructions+=2;goto B58bba0;
case 0x58bba1:c.instructions+=1;goto B58bba1;
case 0x58bbb0:goto L58bbb0;
case 0x58bbb1:c.instructions+=5;goto B58bbb1;
case 0x58bbb3:c.instructions+=4;goto B58bbb3;
case 0x58bbb6:c.instructions+=3;goto B58bbb6;
case 0x58bbbc:c.instructions+=2;goto B58bbbc;
case 0x58bbbd:c.instructions+=1;goto B58bbbd;
case 0x58bbc2:goto L58bbc2;
case 0x58bbc5:c.instructions+=2;goto B58bbc5;
case 0x58bbc7:c.instructions+=1;goto B58bbc7;
case 0x58bbc9:goto L58bbc9;
case 0x58bbcc:c.instructions+=4;goto B58bbcc;
case 0x58bbcd:c.instructions+=3;goto B58bbcd;
case 0x58bbcf:c.instructions+=2;goto B58bbcf;
case 0x58bbd0:c.instructions+=1;goto B58bbd0;
case 0x58bbd3:goto L58bbd3;
case 0x58bbd5:c.instructions+=3;goto B58bbd5;
case 0x58bbda:c.instructions+=2;goto B58bbda;
case 0x58bbdf:c.instructions+=1;goto B58bbdf;
case 0x58bbe3:goto L58bbe3;
case 0x58bbe5:goto L58bbe5;
case 0x58bbe7:c.instructions+=8;goto B58bbe7;
case 0x58bbe8:c.instructions+=7;goto B58bbe8;
case 0x58bbeb:c.instructions+=6;goto B58bbeb;
case 0x58bbec:c.instructions+=5;goto B58bbec;
case 0x58bbf1:c.instructions+=4;goto B58bbf1;
case 0x58bbf5:c.instructions+=3;goto B58bbf5;
case 0x58bbfa:c.instructions+=2;goto B58bbfa;
case 0x58bbfb:c.instructions+=1;goto B58bbfb;
case 0x58bc00:goto L58bc00;
case 0x58bc03:c.instructions+=6;goto B58bc03;
case 0x58bc06:c.instructions+=5;goto B58bc06;
case 0x58bc09:c.instructions+=4;goto B58bc09;
case 0x58bc0b:c.instructions+=3;goto B58bc0b;
case 0x58bc0c:c.instructions+=2;goto B58bc0c;
case 0x58bc0d:c.instructions+=1;goto B58bc0d;
case 0x58bc12:goto L58bc12;
case 0x58bc13:c.instructions+=5;goto B58bc13;
case 0x58bc18:c.instructions+=4;goto B58bc18;
case 0x58bc1c:c.instructions+=3;goto B58bc1c;
case 0x58bc1d:c.instructions+=2;goto B58bc1d;
case 0x58bc22:c.instructions+=1;goto B58bc22;
case 0x58bc27:goto L58bc27;
case 0x58bc29:c.instructions+=1;goto B58bc29;
case 0x58bc2e:goto L58bc2e;
case 0x58bc2f:c.instructions+=3;goto B58bc2f;
case 0x58bc31:c.instructions+=2;goto B58bc31;
case 0x58bc32:c.instructions+=1;goto B58bc32;
case 0x58bc40:goto L58bc40;
case 0x58bc44:c.instructions+=2;goto B58bc44;
case 0x58bc45:c.instructions+=1;goto B58bc45;
case 0x58bc4a:goto L58bc4a;
case 0x58bc4c:c.instructions+=1;goto B58bc4c;
case 0x58bc51:goto L58bc51;
case 0x58bc60:goto L58bc60;
case 0x58bc63:c.instructions+=1;goto B58bc63;
case 0x58bc68:goto L58bc68;
case 0x58bc6b:c.instructions+=2;goto B58bc6b;
case 0x58bc6d:c.instructions+=1;goto B58bc6d;
case 0x58bc73:goto L58bc73;
case 0x58bc77:c.instructions+=2;goto B58bc77;
case 0x58bc79:c.instructions+=1;goto B58bc79;
case 0x58bc7f:goto L58bc7f;
case 0x58bc82:c.instructions+=1;goto B58bc82;
case 0x58bc88:goto L58bc88;
case 0x58bc89:c.instructions+=4;goto B58bc89;
case 0x58bc8b:c.instructions+=3;goto B58bc8b;
case 0x58bc90:c.instructions+=2;goto B58bc90;
case 0x58bc95:c.instructions+=1;goto B58bc95;
case 0x58bc99:goto L58bc99;
case 0x58bc9b:goto L58bc9b;
case 0x58bc9d:c.instructions+=7;goto B58bc9d;
case 0x58bc9e:c.instructions+=6;goto B58bc9e;
case 0x58bca3:c.instructions+=5;goto B58bca3;
case 0x58bca4:c.instructions+=4;goto B58bca4;
case 0x58bca8:c.instructions+=3;goto B58bca8;
case 0x58bcaa:c.instructions+=2;goto B58bcaa;
case 0x58bcab:c.instructions+=1;goto B58bcab;
case 0x58bcb0:goto L58bcb0;
case 0x58bcb5:goto L58bcb5;
case 0x58bcb8:c.instructions+=7;goto B58bcb8;
case 0x58bcbf:c.instructions+=6;goto B58bcbf;
case 0x58bcc0:c.instructions+=5;goto B58bcc0;
case 0x58bcc5:c.instructions+=4;goto B58bcc5;
case 0x58bcc9:c.instructions+=3;goto B58bcc9;
case 0x58bccb:c.instructions+=2;goto B58bccb;
case 0x58bccc:c.instructions+=1;goto B58bccc;
case 0x58bcd1:goto L58bcd1;
case 0x58bcd5:c.instructions+=4;goto B58bcd5;
case 0x58bcd8:c.instructions+=3;goto B58bcd8;
case 0x58bcda:c.instructions+=2;goto B58bcda;
case 0x58bcdb:c.instructions+=1;goto B58bcdb;
case 0x58bcdd:goto L58bcdd;
case 0x58bce0:c.instructions+=1;goto B58bce0;
case 0x58bce2:goto L58bce2;
case 0x58bce3:c.instructions+=5;goto B58bce3;
case 0x58bce8:c.instructions+=4;goto B58bce8;
case 0x58bcec:c.instructions+=3;goto B58bcec;
case 0x58bcee:c.instructions+=2;goto B58bcee;
case 0x58bcef:c.instructions+=1;goto B58bcef;
case 0x58bcf4:goto L58bcf4;
case 0x58bcf7:goto L58bcf7;
case 0x58bcfb:c.instructions+=5;goto B58bcfb;
case 0x58bcff:c.instructions+=4;goto B58bcff;
case 0x58bd01:c.instructions+=3;goto B58bd01;
case 0x58bd02:c.instructions+=2;goto B58bd02;
case 0x58bd03:c.instructions+=1;goto B58bd03;
case 0x58bd08:goto L58bd08;
case 0x58bd09:c.instructions+=5;goto B58bd09;
case 0x58bd0e:c.instructions+=4;goto B58bd0e;
case 0x58bd12:c.instructions+=3;goto B58bd12;
case 0x58bd13:c.instructions+=2;goto B58bd13;
case 0x58bd18:c.instructions+=1;goto B58bd18;
case 0x58bd1d:goto L58bd1d;
case 0x58bd1f:c.instructions+=1;goto B58bd1f;
case 0x58bd24:goto L58bd24;
case 0x58bd27:c.instructions+=1;goto B58bd27;
case 0x58bd2a:goto L58bd2a;
case 0x58bd2d:c.instructions+=2;goto B58bd2d;
case 0x58bd30:c.instructions+=1;goto B58bd30;
case 0x58bd40:goto L58bd40;
case 0x58bd41:c.instructions+=1;goto B58bd41;
case 0x58bd46:goto L58bd46;
case 0x58bd48:c.instructions+=3;goto B58bd48;
case 0x58bd4b:c.instructions+=2;goto B58bd4b;
case 0x58bd4d:c.instructions+=1;goto B58bd4d;
case 0x58bd4f:goto L58bd4f;
case 0x58bd52:c.instructions+=2;goto B58bd52;
case 0x58bd54:c.instructions+=1;goto B58bd54;
case 0x58bd56:goto L58bd56;
case 0x58bd59:c.instructions+=4;goto B58bd59;
case 0x58bd5d:c.instructions+=3;goto B58bd5d;
case 0x58bd5e:c.instructions+=2;goto B58bd5e;
case 0x58bd5f:c.instructions+=1;goto B58bd5f;
case 0x58bd61:goto L58bd61;
case 0x58bd64:goto L58bd64;
case 0x58bd65:c.instructions+=3;goto B58bd65;
case 0x58bd68:c.instructions+=2;goto B58bd68;
case 0x58bd6a:c.instructions+=1;goto B58bd6a;
case 0x58bd6c:goto L58bd6c;
case 0x58bd6e:c.instructions+=1;goto B58bd6e;
case 0x58bd73:goto L58bd73;
case 0x58bd74:c.instructions+=1;goto B58bd74;
case 0x58bd79:goto L58bd79;
case 0x58bd7c:goto L58bd7c;
case 0x58bd83:c.instructions+=1;goto B58bd83;
case 0x58bd84:goto L58bd84;
case 0x58bd85:c.instructions+=1;goto B58bd85;
case 0x58bd90:goto L58bd90;
case 0x58bd93:c.instructions+=7;goto B58bd93;
case 0x58bd94:c.instructions+=6;goto B58bd94;
case 0x58bd98:c.instructions+=5;goto B58bd98;
case 0x58bd9b:c.instructions+=4;goto B58bd9b;
case 0x58bd9d:c.instructions+=3;goto B58bd9d;
case 0x58bd9e:c.instructions+=2;goto B58bd9e;
case 0x58bd9f:c.instructions+=1;goto B58bd9f;
case 0x58bda5:goto L58bda5;
case 0x58bda8:c.instructions+=14;goto B58bda8;
case 0x58bdaa:c.instructions+=13;goto B58bdaa;
case 0x58bdaf:c.instructions+=12;goto B58bdaf;
case 0x58bdb3:c.instructions+=11;goto B58bdb3;
case 0x58bdb5:c.instructions+=10;goto B58bdb5;
case 0x58bdb9:c.instructions+=9;goto B58bdb9;
case 0x58bdbd:c.instructions+=8;goto B58bdbd;
case 0x58bdbe:c.instructions+=7;goto B58bdbe;
case 0x58bdc2:c.instructions+=6;goto B58bdc2;
case 0x58bdc7:c.instructions+=5;goto B58bdc7;
case 0x58bdcc:c.instructions+=4;goto B58bdcc;
case 0x58bdcd:c.instructions+=3;goto B58bdcd;
case 0x58bdd2:c.instructions+=2;goto B58bdd2;
case 0x58bdd6:c.instructions+=1;goto B58bdd6;
case 0x58bddb:goto L58bddb;
case 0x58bdde:c.instructions+=2;goto B58bdde;
case 0x58bddf:c.instructions+=1;goto B58bddf;
case 0x58bde4:goto L58bde4;
case 0x58bde8:c.instructions+=3;goto B58bde8;
case 0x58bdea:c.instructions+=2;goto B58bdea;
case 0x58bded:c.instructions+=1;goto B58bded;
case 0x58bdf2:goto L58bdf2;
case 0x58bdf4:c.instructions+=2;goto B58bdf4;
case 0x58bdf6:c.instructions+=1;goto B58bdf6;
case 0x58bdf8:goto L58bdf8;
case 0x58bdfc:c.instructions+=4;goto B58bdfc;
case 0x58bdfd:c.instructions+=3;goto B58bdfd;
case 0x58be00:c.instructions+=2;goto B58be00;
case 0x58be01:c.instructions+=1;goto B58be01;
case 0x58be06:goto L58be06;
case 0x58be09:c.instructions+=2;goto B58be09;
case 0x58be0b:c.instructions+=1;goto B58be0b;
case 0x58be0d:goto L58be0d;
case 0x58be0f:c.instructions+=2;goto B58be0f;
case 0x58be11:c.instructions+=1;goto B58be11;
case 0x58be13:goto L58be13;
case 0x58be15:goto L58be15;
case 0x58be18:c.instructions+=4;goto B58be18;
case 0x58be19:c.instructions+=3;goto B58be19;
case 0x58be1c:c.instructions+=2;goto B58be1c;
case 0x58be1d:c.instructions+=1;goto B58be1d;
case 0x58be22:goto L58be22;
case 0x58be25:c.instructions+=1;goto B58be25;
case 0x58be2f:goto L58be2f;
case 0x58be34:goto L58be34;
case 0x58be36:c.instructions+=3;goto B58be36;
case 0x58be39:c.instructions+=2;goto B58be39;
case 0x58be3b:c.instructions+=1;goto B58be3b;
case 0x58be3d:goto L58be3d;
case 0x58be40:c.instructions+=2;goto B58be40;
case 0x58be42:c.instructions+=1;goto B58be42;
case 0x58be44:goto L58be44;
case 0x58be47:c.instructions+=3;goto B58be47;
case 0x58be48:c.instructions+=2;goto B58be48;
case 0x58be49:c.instructions+=1;goto B58be49;
case 0x58be4b:goto L58be4b;
case 0x58be4e:goto L58be4e;
case 0x58be51:c.instructions+=2;goto B58be51;
case 0x58be53:c.instructions+=1;goto B58be53;
case 0x58be55:goto L58be55;
case 0x58be57:c.instructions+=1;goto B58be57;
case 0x58be5c:goto L58be5c;
case 0x58be5d:c.instructions+=1;goto B58be5d;
case 0x58be62:goto L58be62;
case 0x58be65:goto L58be65;
case 0x58be6c:goto L58be6c;
case 0x58be6d:c.instructions+=4;goto B58be6d;
case 0x58be6e:c.instructions+=3;goto B58be6e;
case 0x58be6f:c.instructions+=2;goto B58be6f;
case 0x58be72:c.instructions+=1;goto B58be72;
case 0x58be80:goto L58be80;
case 0x58be81:c.instructions+=6;goto B58be81;
case 0x58be85:c.instructions+=5;goto B58be85;
case 0x58be88:c.instructions+=4;goto B58be88;
case 0x58be8a:c.instructions+=3;goto B58be8a;
case 0x58be8b:c.instructions+=2;goto B58be8b;
case 0x58be8c:c.instructions+=1;goto B58be8c;
case 0x58be8e:goto L58be8e;
case 0x58be91:c.instructions+=4;goto B58be91;
case 0x58be95:c.instructions+=3;goto B58be95;
case 0x58be96:c.instructions+=2;goto B58be96;
case 0x58be99:c.instructions+=1;goto B58be99;
case 0x58be9e:goto L58be9e;
case 0x58bea5:goto L58bea5;
case 0x58beaa:goto L58beaa;
case 0x58beac:c.instructions+=3;goto B58beac;
case 0x58beaf:c.instructions+=2;goto B58beaf;
case 0x58beb1:c.instructions+=1;goto B58beb1;
case 0x58beb3:goto L58beb3;
case 0x58beb6:c.instructions+=2;goto B58beb6;
case 0x58beb8:c.instructions+=1;goto B58beb8;
case 0x58beba:goto L58beba;
case 0x58bebd:c.instructions+=3;goto B58bebd;
case 0x58bebe:c.instructions+=2;goto B58bebe;
case 0x58bebf:c.instructions+=1;goto B58bebf;
case 0x58bec1:goto L58bec1;
case 0x58bec4:goto L58bec4;
case 0x58bec7:c.instructions+=2;goto B58bec7;
case 0x58bec9:c.instructions+=1;goto B58bec9;
case 0x58becb:goto L58becb;
case 0x58becd:c.instructions+=1;goto B58becd;
case 0x58bed2:goto L58bed2;
case 0x58bed3:c.instructions+=1;goto B58bed3;
case 0x58bed8:goto L58bed8;
case 0x58bedb:goto L58bedb;
case 0x58bee2:goto L58bee2;
case 0x58bee3:c.instructions+=3;goto B58bee3;
case 0x58bee4:c.instructions+=2;goto B58bee4;
case 0x58bee5:c.instructions+=1;goto B58bee5;
case 0x58bef0:goto L58bef0;
case 0x58bef1:c.instructions+=3;goto B58bef1;
case 0x58bef6:c.instructions+=2;goto B58bef6;
case 0x58bef8:c.instructions+=1;goto B58bef8;
case 0x58befe:goto L58befe;
case 0x58beff:c.instructions+=1;goto B58beff;
case 0x58bf04:goto L58bf04;
case 0x58bf0a:c.instructions+=5;goto B58bf0a;
case 0x58bf10:c.instructions+=4;goto B58bf10;
case 0x58bf16:c.instructions+=3;goto B58bf16;
case 0x58bf18:c.instructions+=2;goto B58bf18;
case 0x58bf1b:c.instructions+=1;goto B58bf1b;
case 0x58bf1d:goto L58bf1d;
case 0x58bf23:c.instructions+=6;goto B58bf23;
case 0x58bf25:c.instructions+=5;goto B58bf25;
case 0x58bf27:c.instructions+=4;goto B58bf27;
case 0x58bf2b:c.instructions+=3;goto B58bf2b;
case 0x58bf2f:c.instructions+=2;goto B58bf2f;
case 0x58bf35:c.instructions+=1;goto B58bf35;
case 0x58bf3a:goto L58bf3a;
case 0x58bf3e:c.instructions+=7;goto B58bf3e;
case 0x58bf42:c.instructions+=6;goto B58bf42;
case 0x58bf48:c.instructions+=5;goto B58bf48;
case 0x58bf4e:c.instructions+=4;goto B58bf4e;
case 0x58bf50:c.instructions+=3;goto B58bf50;
case 0x58bf52:c.instructions+=2;goto B58bf52;
case 0x58bf55:c.instructions+=1;goto B58bf55;
case 0x58bf57:goto L58bf57;
case 0x58bf59:c.instructions+=1;goto B58bf59;
case 0x58bf5e:goto L58bf5e;
case 0x58bf64:c.instructions+=2;goto B58bf64;
case 0x58bf67:c.instructions+=1;goto B58bf67;
case 0x58bf6d:goto L58bf6d;
case 0x58bf73:c.instructions+=4;goto B58bf73;
case 0x58bf77:c.instructions+=3;goto B58bf77;
case 0x58bf7b:c.instructions+=2;goto B58bf7b;
case 0x58bf81:c.instructions+=1;goto B58bf81;
case 0x58bf86:goto L58bf86;
case 0x58bf8a:c.instructions+=8;goto B58bf8a;
case 0x58bf8e:c.instructions+=7;goto B58bf8e;
case 0x58bf8f:c.instructions+=6;goto B58bf8f;
case 0x58bf95:c.instructions+=5;goto B58bf95;
case 0x58bf9b:c.instructions+=4;goto B58bf9b;
case 0x58bf9d:c.instructions+=3;goto B58bf9d;
case 0x58bf9f:c.instructions+=2;goto B58bf9f;
case 0x58bfa2:c.instructions+=1;goto B58bfa2;
case 0x58bfa4:goto L58bfa4;
case 0x58bfa7:c.instructions+=1;goto B58bfa7;
case 0x58bfac:goto L58bfac;
case 0x58bfad:c.instructions+=1;goto B58bfad;
case 0x58bfb0:goto L58bfb0;
case 0x58bfb1:c.instructions+=8;goto B58bfb1;
case 0x58bfb2:c.instructions+=7;goto B58bfb2;
case 0x58bfb6:c.instructions+=6;goto B58bfb6;
case 0x58bfb8:c.instructions+=5;goto B58bfb8;
case 0x58bfbc:c.instructions+=4;goto B58bfbc;
case 0x58bfbd:c.instructions+=3;goto B58bfbd;
case 0x58bfbf:c.instructions+=2;goto B58bfbf;
case 0x58bfc7:c.instructions+=1;goto B58bfc7;
case 0x58bfcc:goto L58bfcc;
case 0x58bfd0:c.instructions+=3;goto B58bfd0;
case 0x58bfd1:c.instructions+=2;goto B58bfd1;
case 0x58bfd2:c.instructions+=1;goto B58bfd2;
case 0x58bfd7:goto L58bfd7;
case 0x58bfda:c.instructions+=3;goto B58bfda;
case 0x58bfdb:c.instructions+=2;goto B58bfdb;
case 0x58bfdc:c.instructions+=1;goto B58bfdc;
case 0x58bfe0:goto L58bfe0;
case 0x58bfe6:c.instructions+=10;goto B58bfe6;
case 0x58bfe7:c.instructions+=9;goto B58bfe7;
case 0x58bfe8:c.instructions+=8;goto B58bfe8;
case 0x58bfef:c.instructions+=7;goto B58bfef;
case 0x58bff1:c.instructions+=6;goto B58bff1;
case 0x58bff5:c.instructions+=5;goto B58bff5;
case 0x58bff7:c.instructions+=4;goto B58bff7;
case 0x58bff8:c.instructions+=3;goto B58bff8;
case 0x58bffa:c.instructions+=2;goto B58bffa;
case 0x58bffe:c.instructions+=1;goto B58bffe;
default:missing_instruction(c.pc);}
B58b004:L58b004:{c.instructions+=3;NFSU2_TR(0x58b004);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B58b007:{NFSU2_TR(0x58b007);
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
B58b009:{NFSU2_TR(0x58b009);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58b06c;}}
}
B58b00b:L58b00b:{c.instructions+=5;NFSU2_TR(0x58b00b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58b00e:{NFSU2_TR(0x58b00e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58b010:{NFSU2_TR(0x58b010);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b011:{NFSU2_TR(0x58b011);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B58b015:{NFSU2_TR(0x58b015);
if(r1(R+518)){{goto L58b04e;}}
}
B58b017:L58b017:{c.instructions+=2;NFSU2_TR(0x58b017);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xffffffffull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B58b01b:{NFSU2_TR(0x58b01b);
if(r1(R+518)){{goto L58b040;}}
}
B58b01d:L58b01d:{c.instructions+=5;NFSU2_TR(0x58b01d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58b020:{NFSU2_TR(0x58b020);
u8 U[4];
w4(U+0,u32(0xfffffffeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b022:{NFSU2_TR(0x58b022);
u8 U[4];
w4(U+0,u32(0x7a15b4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b027:{NFSU2_TR(0x58b027);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b028:{NFSU2_TR(0x58b028);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b02dull));
TAIL_STATIC(0x7414a0u,741);
}
B58b02d:L58b02d:{c.instructions+=3;NFSU2_TR(0x58b02d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58b030:{NFSU2_TR(0x58b030);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b031:{NFSU2_TR(0x58b031);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b036ull));
TAIL_STATIC(0x7420b0u,742);
}
B58b036:L58b036:{c.instructions+=4;NFSU2_TR(0x58b036);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58b039:{NFSU2_TR(0x58b039);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58b03c:{NFSU2_TR(0x58b03c);
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
B58b03e:{NFSU2_TR(0x58b03e);
if(r1(R+518)){{goto L58b06b;}}
}
B58b040:L58b040:{c.instructions+=5;NFSU2_TR(0x58b040);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58b043:{NFSU2_TR(0x58b043);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b044:{NFSU2_TR(0x58b044);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b046:{NFSU2_TR(0x58b046);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b048:{NFSU2_TR(0x58b048);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b04bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B58b04b:L58b04b:{c.instructions+=1;NFSU2_TR(0x58b04b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B58b04e:L58b04e:{c.instructions+=1;NFSU2_TR(0x58b04e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b053ull));
TAIL_STATIC(0x58a0e0u,58a);
}
B58b053:L58b053:{c.instructions+=3;NFSU2_TR(0x58b053);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58b056:{NFSU2_TR(0x58b056);
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
B58b058:{NFSU2_TR(0x58b058);
if(r1(R+518)){{goto L58b06b;}}
}
B58b05a:L58b05a:{c.instructions+=2;NFSU2_TR(0x58b05a);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x67736561ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x67736561ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x67736561ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B58b061:{NFSU2_TR(0x58b061);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58b06b;}}
}
B58b063:L58b063:{c.instructions+=3;NFSU2_TR(0x58b063);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b064:{NFSU2_TR(0x58b064);
__builtin_memmove((R+4),(R+0),4);
}
B58b066:{NFSU2_TR(0x58b066);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b06bull));
TAIL_STATIC(0x584350u,584);
}
B58b06b:L58b06b:{c.instructions+=1;NFSU2_TR(0x58b06b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58b06c:L58b06c:{c.instructions+=2;NFSU2_TR(0x58b06c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58b06d:{NFSU2_TR(0x58b06d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58b070:L58b070:{c.instructions+=7;NFSU2_TR(0x58b070);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b071:{NFSU2_TR(0x58b071);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B58b075:{NFSU2_TR(0x58b075);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58b078:{NFSU2_TR(0x58b078);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58b07a:{NFSU2_TR(0x58b07a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b07b:{NFSU2_TR(0x58b07b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b07c:{NFSU2_TR(0x58b07c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58b229;}}
}
B58b082:L58b082:{c.instructions+=6;NFSU2_TR(0x58b082);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58b085:{NFSU2_TR(0x58b085);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B58b089:{NFSU2_TR(0x58b089);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b08a:{NFSU2_TR(0x58b08a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1cull))));
}
B58b08d:{NFSU2_TR(0x58b08d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b08e:{NFSU2_TR(0x58b08e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b093ull));
TAIL_STATIC(0x7449f0u,744);
}
B58b093:L58b093:{c.instructions+=3;NFSU2_TR(0x58b093);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58b096:{NFSU2_TR(0x58b096);
w4(R+4,u32(0x850080ull));
}
B58b09b:{NFSU2_TR(0x58b09b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b0a0ull));
TAIL_STATIC(0x5031f0u,503);
}
B58b0a0:L58b0a0:{c.instructions+=4;NFSU2_TR(0x58b0a0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b0a1:{NFSU2_TR(0x58b0a1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((R+4),(U+0),4);
}
B58b0a4:{NFSU2_TR(0x58b0a4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b0a5:{NFSU2_TR(0x58b0a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b0aaull));
TAIL_STATIC(0x43dc30u,43d);
}
B58b0aa:L58b0aa:{c.instructions+=3;NFSU2_TR(0x58b0aa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58b0ad:{NFSU2_TR(0x58b0ad);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58b0af:{NFSU2_TR(0x58b0af);
if(r1(R+518)){{goto L58b21f;}}
}
B58b0b5:L58b0b5:{c.instructions+=15;NFSU2_TR(0x58b0b5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B58b0bb:{NFSU2_TR(0x58b0bb);
w1(R+8,u8(u32(r1(R+8))&u32(u8(0x1ull))));
}
B58b0be:{NFSU2_TR(0x58b0be);
__builtin_memmove(gp(0x85009a),(R+8),1);
}
B58b0c4:{NFSU2_TR(0x58b0c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58b0ca:{NFSU2_TR(0x58b0ca);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B58b0cc:{NFSU2_TR(0x58b0cc);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
}
B58b0ce:{NFSU2_TR(0x58b0ce);
__builtin_memmove(gp(0x850099),(R+0),1);
}
B58b0d3:{NFSU2_TR(0x58b0d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58b0d9:{NFSU2_TR(0x58b0d9);
u8 U[4];
w4(U+0,u32(u32(u32(0x12ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B58b0dc:{NFSU2_TR(0x58b0dc);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0x1ull))));
}
B58b0df:{NFSU2_TR(0x58b0df);
__builtin_memmove(gp(0x850098),(R+4),1);
}
B58b0e5:{NFSU2_TR(0x58b0e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58b0eb:{NFSU2_TR(0x58b0eb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x4000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58b0f0:{NFSU2_TR(0x58b0f0);
w4(R+28,u32(0x8ull));
}
B58b0f5:{NFSU2_TR(0x58b0f5);
if(r1(R+518)){{goto L58b103;}}
}
B58b0f7:L58b0f7:{c.instructions+=2;NFSU2_TR(0x58b0f7);
s4(0x850088,u32(0x0ull));
}
B58b101:{NFSU2_TR(0x58b101);
{goto L58b16c;}
}
B58b103:L58b103:{c.instructions+=2;NFSU2_TR(0x58b103);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x8000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58b108:{NFSU2_TR(0x58b108);
if(r1(R+518)){{goto L58b116;}}
}
B58b10a:L58b10a:{c.instructions+=2;NFSU2_TR(0x58b10a);
s4(0x850088,u32(0x1ull));
}
B58b114:{NFSU2_TR(0x58b114);
{goto L58b16c;}
}
B58b116:L58b116:{c.instructions+=2;NFSU2_TR(0x58b116);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x2000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58b11b:{NFSU2_TR(0x58b11b);
if(r1(R+518)){{goto L58b125;}}
}
B58b11d:L58b11d:{c.instructions+=2;NFSU2_TR(0x58b11d);
__builtin_memmove(gp(0x850088),(R+28),4);
}
B58b123:{NFSU2_TR(0x58b123);
{goto L58b16c;}
}
B58b125:L58b125:{c.instructions+=2;NFSU2_TR(0x58b125);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x10000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58b12a:{NFSU2_TR(0x58b12a);
if(r1(R+518)){{goto L58b138;}}
}
B58b12c:L58b12c:{c.instructions+=2;NFSU2_TR(0x58b12c);
s4(0x850088,u32(0x2ull));
}
B58b136:{NFSU2_TR(0x58b136);
{goto L58b16c;}
}
B58b138:L58b138:{c.instructions+=2;NFSU2_TR(0x58b138);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x20000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58b13d:{NFSU2_TR(0x58b13d);
if(r1(R+518)){{goto L58b14b;}}
}
B58b13f:L58b13f:{c.instructions+=2;NFSU2_TR(0x58b13f);
s4(0x850088,u32(0x3ull));
}
B58b149:{NFSU2_TR(0x58b149);
{goto L58b16c;}
}
B58b14b:L58b14b:{c.instructions+=2;NFSU2_TR(0x58b14b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x40000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58b150:{NFSU2_TR(0x58b150);
if(r1(R+518)){{goto L58b15e;}}
}
B58b152:L58b152:{c.instructions+=2;NFSU2_TR(0x58b152);
s4(0x850088,u32(0xaull));
}
B58b15c:{NFSU2_TR(0x58b15c);
{goto L58b16c;}
}
B58b15e:L58b15e:{c.instructions+=2;NFSU2_TR(0x58b15e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B58b160:{NFSU2_TR(0x58b160);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L58b16c;}}
}
B58b162:L58b162:{c.instructions+=1;NFSU2_TR(0x58b162);
s4(0x850088,u32(0x4ull));
}
B58b16c:L58b16c:{c.instructions+=5;NFSU2_TR(0x58b16c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b16e:{NFSU2_TR(0x58b16e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8cull))));
}
B58b174:{NFSU2_TR(0x58b174);
u8 U[4];
w4(U+0,u32(0x795fe0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b179:{NFSU2_TR(0x58b179);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b17a:{NFSU2_TR(0x58b17a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b17full));
TAIL_STATIC(0x7414a0u,741);
}
B58b17f:L58b17f:{c.instructions+=3;NFSU2_TR(0x58b17f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58b182:{NFSU2_TR(0x58b182);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b183:{NFSU2_TR(0x58b183);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b188ull));
TAIL_STATIC(0x7420b0u,742);
}
B58b188:L58b188:{c.instructions+=6;NFSU2_TR(0x58b188);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58b18b:{NFSU2_TR(0x58b18b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b18d:{NFSU2_TR(0x58b18d);
u8 U[4];
w4(U+0,u32(0x7a15ccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b192:{NFSU2_TR(0x58b192);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b193:{NFSU2_TR(0x58b193);
__builtin_memmove(gp(0x8500b8),(R+0),2);
}
B58b199:{NFSU2_TR(0x58b199);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b19eull));
TAIL_STATIC(0x7414a0u,741);
}
B58b19e:L58b19e:{c.instructions+=3;NFSU2_TR(0x58b19e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58b1a1:{NFSU2_TR(0x58b1a1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b1a2:{NFSU2_TR(0x58b1a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b1a7ull));
TAIL_STATIC(0x7420b0u,742);
}
B58b1a7:L58b1a7:{c.instructions+=6;NFSU2_TR(0x58b1a7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58b1aa:{NFSU2_TR(0x58b1aa);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b1ac:{NFSU2_TR(0x58b1ac);
u8 U[4];
w4(U+0,u32(0x7a15c4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b1b1:{NFSU2_TR(0x58b1b1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b1b2:{NFSU2_TR(0x58b1b2);
__builtin_memmove(gp(0x8500bc),(R+0),4);
}
B58b1b7:{NFSU2_TR(0x58b1b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b1bcull));
TAIL_STATIC(0x7414a0u,741);
}
B58b1bc:L58b1bc:{c.instructions+=3;NFSU2_TR(0x58b1bc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58b1bf:{NFSU2_TR(0x58b1bf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b1c0:{NFSU2_TR(0x58b1c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b1c5ull));
TAIL_STATIC(0x7420b0u,742);
}
B58b1c5:L58b1c5:{c.instructions+=5;NFSU2_TR(0x58b1c5);
__builtin_memmove(gp(0x8500ba),(R+0),2);
}
B58b1cb:{NFSU2_TR(0x58b1cb);
__builtin_memmove((R+0),gp(0x850088),4);
}
B58b1d0:{NFSU2_TR(0x58b1d0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58b1d3:{NFSU2_TR(0x58b1d3);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58b1d5:{NFSU2_TR(0x58b1d5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58b213;}}
}
B58b1d7:L58b1d7:{c.instructions+=4;NFSU2_TR(0x58b1d7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b1d9:{NFSU2_TR(0x58b1d9);
u8 U[4];
w4(U+0,u32(0x7a15c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b1de:{NFSU2_TR(0x58b1de);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b1df:{NFSU2_TR(0x58b1df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b1e4ull));
TAIL_STATIC(0x7414a0u,741);
}
B58b1e4:L58b1e4:{c.instructions+=3;NFSU2_TR(0x58b1e4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58b1e7:{NFSU2_TR(0x58b1e7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b1e8:{NFSU2_TR(0x58b1e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b1edull));
TAIL_STATIC(0x7420b0u,742);
}
B58b1ed:L58b1ed:{c.instructions+=6;NFSU2_TR(0x58b1ed);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58b1f0:{NFSU2_TR(0x58b1f0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b1f2:{NFSU2_TR(0x58b1f2);
u8 U[4];
w4(U+0,u32(0x7a15bcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b1f7:{NFSU2_TR(0x58b1f7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b1f8:{NFSU2_TR(0x58b1f8);
__builtin_memmove(gp(0x850090),(R+0),4);
}
B58b1fd:{NFSU2_TR(0x58b1fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b202ull));
TAIL_STATIC(0x7414a0u,741);
}
B58b202:L58b202:{c.instructions+=3;NFSU2_TR(0x58b202);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58b205:{NFSU2_TR(0x58b205);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b206:{NFSU2_TR(0x58b206);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b20bull));
TAIL_STATIC(0x7420b0u,742);
}
B58b20b:L58b20b:{c.instructions+=2;NFSU2_TR(0x58b20b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58b20e:{NFSU2_TR(0x58b20e);
__builtin_memmove(gp(0x850094),(R+0),4);
}
B58b213:L58b213:{c.instructions+=2;NFSU2_TR(0x58b213);
s4(0x86676c,u32(0x0ull));
}
B58b21d:{NFSU2_TR(0x58b21d);
{goto L58b229;}
}
B58b21f:L58b21f:{c.instructions+=1;NFSU2_TR(0x58b21f);
s4(0x86676c,u32(0x1ull));
}
B58b229:L58b229:{c.instructions+=1;NFSU2_TR(0x58b229);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b22eull));
TAIL_STATIC(0x58a0e0u,58a);
}
B58b22e:L58b22e:{c.instructions+=4;NFSU2_TR(0x58b22e);
__builtin_memmove((R+28),(R+0),4);
}
B58b230:{NFSU2_TR(0x58b230);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58b233:{NFSU2_TR(0x58b233);
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
B58b235:{NFSU2_TR(0x58b235);
if(r1(R+518)){{goto L58b266;}}
}
B58b237:L58b237:{c.instructions+=3;NFSU2_TR(0x58b237);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58b23a:{NFSU2_TR(0x58b23a);
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
B58b23c:{NFSU2_TR(0x58b23c);
if(r1(R+518)){{goto L58b248;}}
}
B58b23e:L58b23e:{c.instructions+=4;NFSU2_TR(0x58b23e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58b241:{NFSU2_TR(0x58b241);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b242:{NFSU2_TR(0x58b242);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b243:{NFSU2_TR(0x58b243);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b245ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B58b245:L58b245:{c.instructions+=1;NFSU2_TR(0x58b245);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58b248:L58b248:{c.instructions+=3;NFSU2_TR(0x58b248);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B58b24b:{NFSU2_TR(0x58b24b);
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
B58b24d:{NFSU2_TR(0x58b24d);
if(r1(R+518)){{goto L58b25f;}}
}
B58b24f:L58b24f:{c.instructions+=2;NFSU2_TR(0x58b24f);
__builtin_memmove((R+4),(R+24),4);
}
B58b251:{NFSU2_TR(0x58b251);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b256ull));
TAIL_STATIC(0x584140u,584);
}
B58b256:L58b256:{c.instructions+=2;NFSU2_TR(0x58b256);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b257:{NFSU2_TR(0x58b257);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b25cull));
TAIL_STATIC(0x575630u,575);
}
B58b25c:L58b25c:{c.instructions+=1;NFSU2_TR(0x58b25c);
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
B58b25f:L58b25f:{c.instructions+=1;NFSU2_TR(0x58b25f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B58b266:L58b266:{c.instructions+=4;NFSU2_TR(0x58b266);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58b267:{NFSU2_TR(0x58b267);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58b268:{NFSU2_TR(0x58b268);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58b269:{NFSU2_TR(0x58b269);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58b270:L58b270:{c.instructions+=6;NFSU2_TR(0x58b270);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b271:{NFSU2_TR(0x58b271);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B58b275:{NFSU2_TR(0x58b275);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58b278:{NFSU2_TR(0x58b278);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58b27a:{NFSU2_TR(0x58b27a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b27b:{NFSU2_TR(0x58b27b);
if(r1(R+518)){{goto L58b284;}}
}
B58b27d:L58b27d:{c.instructions+=2;NFSU2_TR(0x58b27d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7567616dull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58b282:{NFSU2_TR(0x58b282);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58b29c;}}
}
B58b284:L58b284:{c.instructions+=5;NFSU2_TR(0x58b284);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58b288:{NFSU2_TR(0x58b288);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1cull))));
}
B58b28b:{NFSU2_TR(0x58b28b);
w4(R+4,u32(0x138ull));
}
B58b290:{NFSU2_TR(0x58b290);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B58b292:{NFSU2_TR(0x58b292);
__builtin_memmove((R+28),(R+8),4);
}
B58b294:L58b294:{c.instructions+=1;NFSU2_TR(0x58b294);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L58b296;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58b294u);}goto L58b294;}
}
B58b296:L58b296:{c.instructions+=1;NFSU2_TR(0x58b296);
u8 U[4];
w4(U+0,u32(0xffffffffull));
s4(u32(r4(R+8)),r4(U+0));
}
B58b29c:L58b29c:{c.instructions+=1;NFSU2_TR(0x58b29c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b2a1ull));
TAIL_STATIC(0x58a0e0u,58a);
}
B58b2a1:L58b2a1:{c.instructions+=4;NFSU2_TR(0x58b2a1);
__builtin_memmove((R+28),(R+0),4);
}
B58b2a3:{NFSU2_TR(0x58b2a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58b2a6:{NFSU2_TR(0x58b2a6);
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
B58b2a8:{NFSU2_TR(0x58b2a8);
if(r1(R+518)){{goto L58b2d9;}}
}
B58b2aa:L58b2aa:{c.instructions+=3;NFSU2_TR(0x58b2aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58b2ad:{NFSU2_TR(0x58b2ad);
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
B58b2af:{NFSU2_TR(0x58b2af);
if(r1(R+518)){{goto L58b2bb;}}
}
B58b2b1:L58b2b1:{c.instructions+=4;NFSU2_TR(0x58b2b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58b2b4:{NFSU2_TR(0x58b2b4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b2b5:{NFSU2_TR(0x58b2b5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b2b6:{NFSU2_TR(0x58b2b6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b2b8ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B58b2b8:L58b2b8:{c.instructions+=1;NFSU2_TR(0x58b2b8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58b2bb:L58b2bb:{c.instructions+=3;NFSU2_TR(0x58b2bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B58b2be:{NFSU2_TR(0x58b2be);
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
B58b2c0:{NFSU2_TR(0x58b2c0);
if(r1(R+518)){{goto L58b2d2;}}
}
B58b2c2:L58b2c2:{c.instructions+=2;NFSU2_TR(0x58b2c2);
__builtin_memmove((R+4),(R+24),4);
}
B58b2c4:{NFSU2_TR(0x58b2c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b2c9ull));
TAIL_STATIC(0x584140u,584);
}
B58b2c9:L58b2c9:{c.instructions+=2;NFSU2_TR(0x58b2c9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b2ca:{NFSU2_TR(0x58b2ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b2cfull));
TAIL_STATIC(0x575630u,575);
}
B58b2cf:L58b2cf:{c.instructions+=1;NFSU2_TR(0x58b2cf);
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
B58b2d2:L58b2d2:{c.instructions+=1;NFSU2_TR(0x58b2d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B58b2d9:L58b2d9:{c.instructions+=3;NFSU2_TR(0x58b2d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58b2da:{NFSU2_TR(0x58b2da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58b2db:{NFSU2_TR(0x58b2db);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58b2e0:L58b2e0:{c.instructions+=6;NFSU2_TR(0x58b2e0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b2e1:{NFSU2_TR(0x58b2e1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B58b2e5:{NFSU2_TR(0x58b2e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58b2e8:{NFSU2_TR(0x58b2e8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58b2ea:{NFSU2_TR(0x58b2ea);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b2eb:{NFSU2_TR(0x58b2eb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58b341;}}
}
B58b2ed:L58b2ed:{c.instructions+=6;NFSU2_TR(0x58b2ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58b2f0:{NFSU2_TR(0x58b2f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B58b2f4:{NFSU2_TR(0x58b2f4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b2f6:{NFSU2_TR(0x58b2f6);
u8 U[4];
w4(U+0,u32(0x7a15d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b2fb:{NFSU2_TR(0x58b2fb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b2fc:{NFSU2_TR(0x58b2fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b301ull));
TAIL_STATIC(0x7414a0u,741);
}
B58b301:L58b301:{c.instructions+=3;NFSU2_TR(0x58b301);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58b304:{NFSU2_TR(0x58b304);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b305:{NFSU2_TR(0x58b305);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b30aull));
TAIL_STATIC(0x7420b0u,742);
}
B58b30a:L58b30a:{c.instructions+=5;NFSU2_TR(0x58b30a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x500ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58b310:{NFSU2_TR(0x58b310);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58b313:{NFSU2_TR(0x58b313);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58b316:{NFSU2_TR(0x58b316);
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
B58b318:{NFSU2_TR(0x58b318);
if(r1(R+518)){{goto L58b327;}}
}
B58b31a:L58b31a:{c.instructions+=5;NFSU2_TR(0x58b31a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58b31d:{NFSU2_TR(0x58b31d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b31e:{NFSU2_TR(0x58b31e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b320:{NFSU2_TR(0x58b320);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b322:{NFSU2_TR(0x58b322);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b324ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B58b324:L58b324:{c.instructions+=1;NFSU2_TR(0x58b324);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B58b327:L58b327:{c.instructions+=3;NFSU2_TR(0x58b327);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x500ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58b32d:{NFSU2_TR(0x58b32d);
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
B58b32f:{NFSU2_TR(0x58b32f);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L58b380;}}
}
B58b331:L58b331:{c.instructions+=2;NFSU2_TR(0x58b331);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b332:{NFSU2_TR(0x58b332);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b337ull));
TAIL_STATIC(0x58a0e0u,58a);
}
B58b337:L58b337:{c.instructions+=2;NFSU2_TR(0x58b337);
__builtin_memmove((R+4),(R+0),4);
}
B58b339:{NFSU2_TR(0x58b339);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b33eull));
TAIL_STATIC(0x584350u,584);
}
B58b33e:L58b33e:{c.instructions+=3;NFSU2_TR(0x58b33e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58b33f:{NFSU2_TR(0x58b33f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58b340:{NFSU2_TR(0x58b340);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58b341:L58b341:{c.instructions+=2;NFSU2_TR(0x58b341);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b342:{NFSU2_TR(0x58b342);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b347ull));
TAIL_STATIC(0x58a0e0u,58a);
}
B58b347:L58b347:{c.instructions+=4;NFSU2_TR(0x58b347);
__builtin_memmove((R+28),(R+0),4);
}
B58b349:{NFSU2_TR(0x58b349);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58b34c:{NFSU2_TR(0x58b34c);
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
B58b34e:{NFSU2_TR(0x58b34e);
if(r1(R+518)){{goto L58b37f;}}
}
B58b350:L58b350:{c.instructions+=3;NFSU2_TR(0x58b350);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58b353:{NFSU2_TR(0x58b353);
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
B58b355:{NFSU2_TR(0x58b355);
if(r1(R+518)){{goto L58b361;}}
}
B58b357:L58b357:{c.instructions+=4;NFSU2_TR(0x58b357);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58b35a:{NFSU2_TR(0x58b35a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b35b:{NFSU2_TR(0x58b35b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b35c:{NFSU2_TR(0x58b35c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b35eull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B58b35e:L58b35e:{c.instructions+=1;NFSU2_TR(0x58b35e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58b361:L58b361:{c.instructions+=3;NFSU2_TR(0x58b361);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B58b364:{NFSU2_TR(0x58b364);
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
B58b366:{NFSU2_TR(0x58b366);
if(r1(R+518)){{goto L58b378;}}
}
B58b368:L58b368:{c.instructions+=2;NFSU2_TR(0x58b368);
__builtin_memmove((R+4),(R+24),4);
}
B58b36a:{NFSU2_TR(0x58b36a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b36full));
TAIL_STATIC(0x584140u,584);
}
B58b36f:L58b36f:{c.instructions+=2;NFSU2_TR(0x58b36f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b370:{NFSU2_TR(0x58b370);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b375ull));
TAIL_STATIC(0x575630u,575);
}
B58b375:L58b375:{c.instructions+=1;NFSU2_TR(0x58b375);
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
B58b378:L58b378:{c.instructions+=1;NFSU2_TR(0x58b378);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B58b37f:L58b37f:{c.instructions+=1;NFSU2_TR(0x58b37f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58b380:L58b380:{c.instructions+=3;NFSU2_TR(0x58b380);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58b381:{NFSU2_TR(0x58b381);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58b382:{NFSU2_TR(0x58b382);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58b390:L58b390:{c.instructions+=13;NFSU2_TR(0x58b390);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b391:{NFSU2_TR(0x58b391);
__builtin_memmove((R+20),(R+16),4);
}
B58b393:{NFSU2_TR(0x58b393);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B58b396:{NFSU2_TR(0x58b396);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x2acull))));
}
B58b39c:{NFSU2_TR(0x58b39c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b39d:{NFSU2_TR(0x58b39d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b39e:{NFSU2_TR(0x58b39e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B58b3a1:{NFSU2_TR(0x58b3a1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b3a2:{NFSU2_TR(0x58b3a2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B58b3a4:{NFSU2_TR(0x58b3a4);
__builtin_memmove((R+12),(R+4),4);
}
B58b3a6:{NFSU2_TR(0x58b3a6);
u8 U[5];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B58b3ae:{NFSU2_TR(0x58b3ae);
w4(R+4,u32(0x7full));
}
B58b3b3:{NFSU2_TR(0x58b3b3);
u8 U[4];
w4(U+0,u32(u32(u32(0xb9ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B58b3ba:L58b3ba:{c.instructions+=1;NFSU2_TR(0x58b3ba);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L58b3bc;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58b3bau);}goto L58b3ba;}
}
B58b3bc:L58b3bc:{c.instructions+=5;NFSU2_TR(0x58b3bc);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B58b3be:{NFSU2_TR(0x58b3be);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B58b3bf:{NFSU2_TR(0x58b3bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58b3c2:{NFSU2_TR(0x58b3c2);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x636e636cull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x636e636cull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58b3c7:{NFSU2_TR(0x58b3c7);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L58b7ec;}}
}
B58b3cd:L58b3cd:{c.instructions+=1;NFSU2_TR(0x58b3cd);
if(r1(R+518)){{goto L58b762;}}
}
B58b3d3:L58b3d3:{c.instructions+=2;NFSU2_TR(0x58b3d3);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x62757379ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x62757379ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58b3d8:{NFSU2_TR(0x58b3d8);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L58b4fb;}}
}
B58b3de:L58b3de:{c.instructions+=1;NFSU2_TR(0x58b3de);
if(r1(R+518)){{goto L58b4a6;}}
}
B58b3e4:L58b3e4:{c.instructions+=2;NFSU2_TR(0x58b3e4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x61637074ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58b3e9:{NFSU2_TR(0x58b3e9);
if(r1(R+518)){{goto L58b44b;}}
}
B58b3eb:L58b3eb:{c.instructions+=2;NFSU2_TR(0x58b3eb);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x626c636bull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x626c636bull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x626c636bull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58b3f0:{NFSU2_TR(0x58b3f0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58b936;}}
}
B58b3f6:L58b3f6:{c.instructions+=8;NFSU2_TR(0x58b3f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58b3f9:{NFSU2_TR(0x58b3f9);
u8 U[4];
w4(U+0,u32(0x7a15e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b3fe:{NFSU2_TR(0x58b3fe);
u8 U[4];
w4(U+0,u32(0x200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b403:{NFSU2_TR(0x58b403);
u8 U[4];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B58b40a:{NFSU2_TR(0x58b40a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b40b:{NFSU2_TR(0x58b40b);
u8 U[4];
w4(U+0,u32(0x79ac28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b410:{NFSU2_TR(0x58b410);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b411:{NFSU2_TR(0x58b411);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b416ull));
TAIL_STATIC(0x7414a0u,741);
}
B58b416:L58b416:{c.instructions+=3;NFSU2_TR(0x58b416);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58b419:{NFSU2_TR(0x58b419);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b41a:{NFSU2_TR(0x58b41a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b41full));
TAIL_STATIC(0x742360u,742);
}
B58b41f:L58b41f:{c.instructions+=3;NFSU2_TR(0x58b41f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b421:{NFSU2_TR(0x58b421);
u8 U[4];
w4(U+0,u32(0xedb87a03ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b426:{NFSU2_TR(0x58b426);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b42bull));
TAIL_STATIC(0x55dde0u,55d);
}
B58b42b:L58b42b:{c.instructions+=9;NFSU2_TR(0x58b42b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x18ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x18ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58b42e:{NFSU2_TR(0x58b42e);
s4(0x836378,u32(0x0ull));
}
B58b438:{NFSU2_TR(0x58b438);
s4(0x83637c,u32(0x1ull));
}
B58b442:{NFSU2_TR(0x58b442);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58b443:{NFSU2_TR(0x58b443);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58b444:{NFSU2_TR(0x58b444);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58b445:{NFSU2_TR(0x58b445);
__builtin_memmove((R+16),(R+20),4);
}
B58b447:{NFSU2_TR(0x58b447);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58b448:{NFSU2_TR(0x58b448);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58b44b:L58b44b:{c.instructions+=8;NFSU2_TR(0x58b44b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58b44e:{NFSU2_TR(0x58b44e);
u8 U[4];
w4(U+0,u32(0x7a15e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b453:{NFSU2_TR(0x58b453);
u8 U[4];
w4(U+0,u32(0x200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b458:{NFSU2_TR(0x58b458);
u8 U[4];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B58b45f:{NFSU2_TR(0x58b45f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b460:{NFSU2_TR(0x58b460);
u8 U[4];
w4(U+0,u32(0x79ac28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b465:{NFSU2_TR(0x58b465);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b466:{NFSU2_TR(0x58b466);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b46bull));
TAIL_STATIC(0x7414a0u,741);
}
B58b46b:L58b46b:{c.instructions+=3;NFSU2_TR(0x58b46b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58b46e:{NFSU2_TR(0x58b46e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b46f:{NFSU2_TR(0x58b46f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b474ull));
TAIL_STATIC(0x742360u,742);
}
B58b474:L58b474:{c.instructions+=5;NFSU2_TR(0x58b474);
__builtin_memmove((R+0),gp(0x836378),4);
}
B58b479:{NFSU2_TR(0x58b479);
w4(R+24,u32(0x1ull));
}
B58b47e:{NFSU2_TR(0x58b47e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B58b481:{NFSU2_TR(0x58b481);
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
B58b483:{NFSU2_TR(0x58b483);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58b497;}}
}
B58b485:L58b485:{c.instructions+=3;NFSU2_TR(0x58b485);
u8 U[4];
w4(U+0,u32(0x7979b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b48a:{NFSU2_TR(0x58b48a);
u8 U[4];
w4(U+0,u32(0x7c1bb77full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b48f:{NFSU2_TR(0x58b48f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b494ull));
TAIL_STATIC(0x55dda0u,55d);
}
B58b494:L58b494:{c.instructions+=1;NFSU2_TR(0x58b494);
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
B58b497:L58b497:{c.instructions+=7;NFSU2_TR(0x58b497);
__builtin_memmove(gp(0x83637c),(R+24),4);
}
B58b49d:{NFSU2_TR(0x58b49d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58b49e:{NFSU2_TR(0x58b49e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58b49f:{NFSU2_TR(0x58b49f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58b4a0:{NFSU2_TR(0x58b4a0);
__builtin_memmove((R+16),(R+20),4);
}
B58b4a2:{NFSU2_TR(0x58b4a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58b4a3:{NFSU2_TR(0x58b4a3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58b4a6:L58b4a6:{c.instructions+=8;NFSU2_TR(0x58b4a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58b4a9:{NFSU2_TR(0x58b4a9);
u8 U[4];
w4(U+0,u32(0x7a15e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b4ae:{NFSU2_TR(0x58b4ae);
u8 U[4];
w4(U+0,u32(0x200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b4b3:{NFSU2_TR(0x58b4b3);
u8 U[4];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58b4ba:{NFSU2_TR(0x58b4ba);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b4bb:{NFSU2_TR(0x58b4bb);
u8 U[4];
w4(U+0,u32(0x79ac28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b4c0:{NFSU2_TR(0x58b4c0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b4c1:{NFSU2_TR(0x58b4c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b4c6ull));
TAIL_STATIC(0x7414a0u,741);
}
B58b4c6:L58b4c6:{c.instructions+=3;NFSU2_TR(0x58b4c6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58b4c9:{NFSU2_TR(0x58b4c9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b4ca:{NFSU2_TR(0x58b4ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b4cfull));
TAIL_STATIC(0x742360u,742);
}
B58b4cf:L58b4cf:{c.instructions+=5;NFSU2_TR(0x58b4cf);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b4d1:{NFSU2_TR(0x58b4d1);
u8 U[4];
w4(U+0,u32(0xf5717b72ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b4d6:{NFSU2_TR(0x58b4d6);
s4(0x836378,u32(0x0ull));
}
B58b4e0:{NFSU2_TR(0x58b4e0);
s4(0x83637c,u32(0x1ull));
}
B58b4ea:{NFSU2_TR(0x58b4ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b4efull));
TAIL_STATIC(0x55dde0u,55d);
}
B58b4ef:L58b4ef:{c.instructions+=7;NFSU2_TR(0x58b4ef);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x18ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x18ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58b4f2:{NFSU2_TR(0x58b4f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58b4f3:{NFSU2_TR(0x58b4f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58b4f4:{NFSU2_TR(0x58b4f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58b4f5:{NFSU2_TR(0x58b4f5);
__builtin_memmove((R+16),(R+20),4);
}
B58b4f7:{NFSU2_TR(0x58b4f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58b4f8:{NFSU2_TR(0x58b4f8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58b4fb:L58b4fb:{c.instructions+=2;NFSU2_TR(0x58b4fb);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x6368616cull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x6368616cull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x6368616cull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58b500:{NFSU2_TR(0x58b500);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58b936;}}
}
B58b506:L58b506:{c.instructions+=4;NFSU2_TR(0x58b506);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B58b508:{NFSU2_TR(0x58b508);
u8 U[5];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B58b50d:{NFSU2_TR(0x58b50d);
w4(R+4,u32(0x1full));
}
B58b512:{NFSU2_TR(0x58b512);
u8 U[4];
w4(U+0,u32(u32(u32(0x39ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B58b516:L58b516:{c.instructions+=1;NFSU2_TR(0x58b516);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L58b518;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58b516u);}goto L58b516;}
}
B58b518:L58b518:{c.instructions+=10;NFSU2_TR(0x58b518);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58b51b:{NFSU2_TR(0x58b51b);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B58b51d:{NFSU2_TR(0x58b51d);
u8 U[4];
w4(U+0,u32(0x785078ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b522:{NFSU2_TR(0x58b522);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B58b523:{NFSU2_TR(0x58b523);
u8 U[4];
w4(U+0,u32(0x200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b528:{NFSU2_TR(0x58b528);
u8 U[4];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B58b52f:{NFSU2_TR(0x58b52f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b530:{NFSU2_TR(0x58b530);
u8 U[4];
w4(U+0,u32(0x7a15e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b535:{NFSU2_TR(0x58b535);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b536:{NFSU2_TR(0x58b536);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b53bull));
TAIL_STATIC(0x7414a0u,741);
}
B58b53b:L58b53b:{c.instructions+=3;NFSU2_TR(0x58b53b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58b53e:{NFSU2_TR(0x58b53e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b53f:{NFSU2_TR(0x58b53f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b544ull));
TAIL_STATIC(0x742360u,742);
}
B58b544:L58b544:{c.instructions+=9;NFSU2_TR(0x58b544);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B58b547:{NFSU2_TR(0x58b547);
u8 U[4];
w4(U+0,u32(0x7a15d8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b54c:{NFSU2_TR(0x58b54c);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b551:{NFSU2_TR(0x58b551);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B58b555:{NFSU2_TR(0x58b555);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b556:{NFSU2_TR(0x58b556);
u8 U[4];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B58b55d:{NFSU2_TR(0x58b55d);
u8 U[4];
w4(U+0,u32(0x79d53cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b562:{NFSU2_TR(0x58b562);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b563:{NFSU2_TR(0x58b563);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b568ull));
TAIL_STATIC(0x7414a0u,741);
}
B58b568:L58b568:{c.instructions+=3;NFSU2_TR(0x58b568);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58b56b:{NFSU2_TR(0x58b56b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b56c:{NFSU2_TR(0x58b56c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b571ull));
TAIL_STATIC(0x742360u,742);
}
B58b571:L58b571:{c.instructions+=4;NFSU2_TR(0x58b571);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58b575:{NFSU2_TR(0x58b575);
u8 U[4];
w4(U+0,u32(0x7a15d8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b57a:{NFSU2_TR(0x58b57a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b57b:{NFSU2_TR(0x58b57b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b580ull));
TAIL_STATIC(0x43dc30u,43d);
}
B58b580:L58b580:{c.instructions+=3;NFSU2_TR(0x58b580);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B58b583:{NFSU2_TR(0x58b583);
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
B58b585:{NFSU2_TR(0x58b585);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58b936;}}
}
B58b58b:L58b58b:{c.instructions+=2;NFSU2_TR(0x58b58b);
__builtin_memmove((R+4),(R+12),4);
}
B58b58d:{NFSU2_TR(0x58b58d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b592ull));
TAIL_STATIC(0x582ce0u,582);
}
B58b592:L58b592:{c.instructions+=10;NFSU2_TR(0x58b592);
u8 U[4];
w4(U+0,u32(0x7a15e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b597:{NFSU2_TR(0x58b597);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b59c:{NFSU2_TR(0x58b59c);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B58b5a0:{NFSU2_TR(0x58b5a0);
__builtin_memmove((R+24),(R+0),4);
}
B58b5a2:{NFSU2_TR(0x58b5a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58b5a5:{NFSU2_TR(0x58b5a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58b5a8:{NFSU2_TR(0x58b5a8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b5a9:{NFSU2_TR(0x58b5a9);
u8 U[4];
w4(U+0,u32(0x79ac28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b5ae:{NFSU2_TR(0x58b5ae);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b5af:{NFSU2_TR(0x58b5af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b5b4ull));
TAIL_STATIC(0x7414a0u,741);
}
B58b5b4:L58b5b4:{c.instructions+=3;NFSU2_TR(0x58b5b4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58b5b7:{NFSU2_TR(0x58b5b7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b5b8:{NFSU2_TR(0x58b5b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b5bdull));
TAIL_STATIC(0x742360u,742);
}
B58b5bd:L58b5bd:{c.instructions+=6;NFSU2_TR(0x58b5bd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B58b5c0:{NFSU2_TR(0x58b5c0);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b5c2:{NFSU2_TR(0x58b5c2);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B58b5c6:{NFSU2_TR(0x58b5c6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b5c7:{NFSU2_TR(0x58b5c7);
__builtin_memmove((R+4),(R+12),4);
}
B58b5c9:{NFSU2_TR(0x58b5c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b5ceull));
TAIL_STATIC(0x582eb0u,582);
}
B58b5ce:L58b5ce:{c.instructions+=4;NFSU2_TR(0x58b5ce);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B58b5d2:{NFSU2_TR(0x58b5d2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b5d3:{NFSU2_TR(0x58b5d3);
__builtin_memmove((R+4),(R+12),4);
}
B58b5d5:{NFSU2_TR(0x58b5d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b5daull));
TAIL_STATIC(0x582bb0u,582);
}
B58b5da:L58b5da:{c.instructions+=2;NFSU2_TR(0x58b5da);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b5db:{NFSU2_TR(0x58b5db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b5e0ull));
TAIL_STATIC(0x73eae0u,73e);
}
B58b5e0:L58b5e0:{c.instructions+=3;NFSU2_TR(0x58b5e0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B58b5e3:{NFSU2_TR(0x58b5e3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58b5e5:{NFSU2_TR(0x58b5e5);
if(r1(R+518)){{goto L58b604;}}
}
B58b5e7:L58b5e7:{c.instructions+=1;NFSU2_TR(0x58b5e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b5ecull));
TAIL_STATIC(0x582b60u,582);
}
B58b5ec:L58b5ec:{c.instructions+=3;NFSU2_TR(0x58b5ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58b5f2:{NFSU2_TR(0x58b5f2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b5f3:{NFSU2_TR(0x58b5f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b5f8ull));
TAIL_STATIC(0x73e350u,73e);
}
B58b5f8:L58b5f8:{c.instructions+=7;NFSU2_TR(0x58b5f8);
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
B58b5fb:{NFSU2_TR(0x58b5fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58b5fc:{NFSU2_TR(0x58b5fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58b5fd:{NFSU2_TR(0x58b5fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58b5fe:{NFSU2_TR(0x58b5fe);
__builtin_memmove((R+16),(R+20),4);
}
B58b600:{NFSU2_TR(0x58b600);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58b601:{NFSU2_TR(0x58b601);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58b604:L58b604:{c.instructions+=11;NFSU2_TR(0x58b604);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58b607:{NFSU2_TR(0x58b607);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0xc1ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B58b60d:{NFSU2_TR(0x58b60d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58b610:{NFSU2_TR(0x58b610);
u8 U[4];
w4(U+0,u32(0x7a15e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b615:{NFSU2_TR(0x58b615);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+12))));
}
B58b617:{NFSU2_TR(0x58b617);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b619:{NFSU2_TR(0x58b619);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x131ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58b61f:{NFSU2_TR(0x58b61f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b620:{NFSU2_TR(0x58b620);
u8 U[4];
w4(U+0,u32(0x79ac28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b625:{NFSU2_TR(0x58b625);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b626:{NFSU2_TR(0x58b626);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b62bull));
TAIL_STATIC(0x7414a0u,741);
}
B58b62b:L58b62b:{c.instructions+=3;NFSU2_TR(0x58b62b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58b62e:{NFSU2_TR(0x58b62e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b62f:{NFSU2_TR(0x58b62f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b634ull));
TAIL_STATIC(0x742360u,742);
}
B58b634:L58b634:{c.instructions+=9;NFSU2_TR(0x58b634);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B58b637:{NFSU2_TR(0x58b637);
u8 U[4];
w4(U+0,u32(0x79d548ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b63c:{NFSU2_TR(0x58b63c);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b641:{NFSU2_TR(0x58b641);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x151ull))));
__builtin_memmove((R+4),(U+0),4);
}
B58b647:{NFSU2_TR(0x58b647);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b648:{NFSU2_TR(0x58b648);
u8 U[4];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B58b64f:{NFSU2_TR(0x58b64f);
u8 U[4];
w4(U+0,u32(0x79d53cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b654:{NFSU2_TR(0x58b654);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b655:{NFSU2_TR(0x58b655);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b65aull));
TAIL_STATIC(0x7414a0u,741);
}
B58b65a:L58b65a:{c.instructions+=3;NFSU2_TR(0x58b65a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58b65d:{NFSU2_TR(0x58b65d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b65e:{NFSU2_TR(0x58b65e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b663ull));
TAIL_STATIC(0x742360u,742);
}
B58b663:L58b663:{c.instructions+=11;NFSU2_TR(0x58b663);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B58b666:{NFSU2_TR(0x58b666);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b66b:{NFSU2_TR(0x58b66b);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b66d:{NFSU2_TR(0x58b66d);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B58b671:{NFSU2_TR(0x58b671);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b672:{NFSU2_TR(0x58b672);
u8 U[4];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58b679:{NFSU2_TR(0x58b679);
u8 U[4];
w4(U+0,u32(0x7903e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b67e:{NFSU2_TR(0x58b67e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b67f:{NFSU2_TR(0x58b67f);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B58b684:{NFSU2_TR(0x58b684);
u8 U[5];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B58b689:{NFSU2_TR(0x58b689);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b68eull));
TAIL_STATIC(0x7414a0u,741);
}
B58b68e:L58b68e:{c.instructions+=3;NFSU2_TR(0x58b68e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58b691:{NFSU2_TR(0x58b691);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b692:{NFSU2_TR(0x58b692);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b697ull));
TAIL_STATIC(0x742360u,742);
}
B58b697:L58b697:{c.instructions+=9;NFSU2_TR(0x58b697);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B58b69a:{NFSU2_TR(0x58b69a);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b69f:{NFSU2_TR(0x58b69f);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b6a1:{NFSU2_TR(0x58b6a1);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B58b6a5:{NFSU2_TR(0x58b6a5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b6a6:{NFSU2_TR(0x58b6a6);
u8 U[4];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B58b6ad:{NFSU2_TR(0x58b6ad);
u8 U[4];
w4(U+0,u32(0x7903ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b6b2:{NFSU2_TR(0x58b6b2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b6b3:{NFSU2_TR(0x58b6b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b6b8ull));
TAIL_STATIC(0x7414a0u,741);
}
B58b6b8:L58b6b8:{c.instructions+=3;NFSU2_TR(0x58b6b8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58b6bb:{NFSU2_TR(0x58b6bb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b6bc:{NFSU2_TR(0x58b6bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b6c1ull));
TAIL_STATIC(0x742360u,742);
}
B58b6c1:L58b6c1:{c.instructions+=3;NFSU2_TR(0x58b6c1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B58b6c4:{NFSU2_TR(0x58b6c4);
u8 U[4];
w4(U+0,u32(0x73656c66ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b6c9:{NFSU2_TR(0x58b6c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b6ceull));
TAIL_STATIC(0x58a0e0u,58a);
}
B58b6ce:L58b6ce:{c.instructions+=3;NFSU2_TR(0x58b6ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58b6d1:{NFSU2_TR(0x58b6d1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b6d2:{NFSU2_TR(0x58b6d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b6d7ull));
TAIL_STATIC(0x744620u,744);
}
B58b6d7:L58b6d7:{c.instructions+=5;NFSU2_TR(0x58b6d7);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B58b6db:{NFSU2_TR(0x58b6db);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b6dc:{NFSU2_TR(0x58b6dc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x398ull))));
}
B58b6e1:{NFSU2_TR(0x58b6e1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b6e2:{NFSU2_TR(0x58b6e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b6e7ull));
TAIL_STATIC(0x43dc30u,43d);
}
B58b6e7:L58b6e7:{c.instructions+=4;NFSU2_TR(0x58b6e7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B58b6ea:{NFSU2_TR(0x58b6ea);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58b6ec:{NFSU2_TR(0x58b6ec);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B58b6f0:{NFSU2_TR(0x58b6f0);
if(r1(R+518)){{goto L58b6f6;}}
}
B58b6f2:L58b6f2:{c.instructions+=1;NFSU2_TR(0x58b6f2);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B58b6f6:L58b6f6:{c.instructions+=4;NFSU2_TR(0x58b6f6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b6f7:{NFSU2_TR(0x58b6f7);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x111ull))));
}
B58b6fd:{NFSU2_TR(0x58b6fd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b6fe:{NFSU2_TR(0x58b6fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b703ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B58b703:L58b703:{c.instructions+=2;NFSU2_TR(0x58b703);
u8 U[4];
w4(U+0,u32(0x7902a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b708:{NFSU2_TR(0x58b708);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b70dull));
TAIL_STATIC(0x52cef0u,52c);
}
B58b70d:L58b70d:{c.instructions+=3;NFSU2_TR(0x58b70d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B58b710:{NFSU2_TR(0x58b710);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58b712:{NFSU2_TR(0x58b712);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58b71e;}}
}
B58b714:L58b714:{c.instructions+=2;NFSU2_TR(0x58b714);
u8 U[4];
w4(U+0,u32(0x55ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b716:{NFSU2_TR(0x58b716);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b71bull));
TAIL_STATIC(0x50d180u,50d);
}
B58b71b:L58b71b:{c.instructions+=1;NFSU2_TR(0x58b71b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B58b71e:L58b71e:{c.instructions+=4;NFSU2_TR(0x58b71e);
w4(R+24,u32(0x1ull));
}
B58b723:{NFSU2_TR(0x58b723);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b724:{NFSU2_TR(0x58b724);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b726:{NFSU2_TR(0x58b726);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b72bull));
TAIL_STATIC(0x50cee0u,50c);
}
B58b72b:L58b72b:{c.instructions+=3;NFSU2_TR(0x58b72b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b72d:{NFSU2_TR(0x58b72d);
u8 U[4];
w4(U+0,u32(0x9757a0c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b732:{NFSU2_TR(0x58b732);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b737ull));
TAIL_STATIC(0x55dde0u,55d);
}
B58b737:L58b737:{c.instructions+=5;NFSU2_TR(0x58b737);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58b73d:{NFSU2_TR(0x58b73d);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b73f:{NFSU2_TR(0x58b73f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b740:{NFSU2_TR(0x58b740);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b741:{NFSU2_TR(0x58b741);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b746ull));
TAIL_STATIC(0x740790u,740);
}
B58b746:L58b746:{c.instructions+=9;NFSU2_TR(0x58b746);
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
B58b749:{NFSU2_TR(0x58b749);
__builtin_memmove(gp(0x83637c),(R+24),4);
}
B58b74f:{NFSU2_TR(0x58b74f);
s4(0x836378,u32(0x2ull));
}
B58b759:{NFSU2_TR(0x58b759);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58b75a:{NFSU2_TR(0x58b75a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58b75b:{NFSU2_TR(0x58b75b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58b75c:{NFSU2_TR(0x58b75c);
__builtin_memmove((R+16),(R+20),4);
}
B58b75e:{NFSU2_TR(0x58b75e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58b75f:{NFSU2_TR(0x58b75f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58b762:L58b762:{c.instructions+=8;NFSU2_TR(0x58b762);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58b765:{NFSU2_TR(0x58b765);
u8 U[4];
w4(U+0,u32(0x7a15e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b76a:{NFSU2_TR(0x58b76a);
u8 U[4];
w4(U+0,u32(0x200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b76f:{NFSU2_TR(0x58b76f);
u8 U[4];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58b776:{NFSU2_TR(0x58b776);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b777:{NFSU2_TR(0x58b777);
u8 U[4];
w4(U+0,u32(0x79ac28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b77c:{NFSU2_TR(0x58b77c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b77d:{NFSU2_TR(0x58b77d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b782ull));
TAIL_STATIC(0x7414a0u,741);
}
B58b782:L58b782:{c.instructions+=3;NFSU2_TR(0x58b782);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58b785:{NFSU2_TR(0x58b785);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b786:{NFSU2_TR(0x58b786);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b78bull));
TAIL_STATIC(0x742360u,742);
}
B58b78b:L58b78b:{c.instructions+=5;NFSU2_TR(0x58b78b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58b78e:{NFSU2_TR(0x58b78e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B58b791:{NFSU2_TR(0x58b791);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b792:{NFSU2_TR(0x58b792);
__builtin_memmove((R+4),(R+12),4);
}
B58b794:{NFSU2_TR(0x58b794);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b799ull));
TAIL_STATIC(0x582d00u,582);
}
B58b799:L58b799:{c.instructions+=2;NFSU2_TR(0x58b799);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B58b79b:{NFSU2_TR(0x58b79b);
if(r1(R+518)){{goto L58b7c1;}}
}
B58b79d:L58b79d:{c.instructions+=4;NFSU2_TR(0x58b79d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58b7a0:{NFSU2_TR(0x58b7a0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b7a1:{NFSU2_TR(0x58b7a1);
__builtin_memmove((R+4),(R+12),4);
}
B58b7a3:{NFSU2_TR(0x58b7a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b7a8ull));
TAIL_STATIC(0x582d40u,582);
}
B58b7a8:L58b7a8:{c.instructions+=3;NFSU2_TR(0x58b7a8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b7aa:{NFSU2_TR(0x58b7aa);
u8 U[4];
w4(U+0,u32(0x519201f5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b7af:{NFSU2_TR(0x58b7af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b7b4ull));
TAIL_STATIC(0x55dde0u,55d);
}
B58b7b4:L58b7b4:{c.instructions+=2;NFSU2_TR(0x58b7b4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58b7b7:{NFSU2_TR(0x58b7b7);
s4(0x836378,u32(0x0ull));
}
B58b7c1:L58b7c1:{c.instructions+=4;NFSU2_TR(0x58b7c1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b7c3:{NFSU2_TR(0x58b7c3);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b7c5:{NFSU2_TR(0x58b7c5);
s4(0x83637c,u32(0x1ull));
}
B58b7cf:{NFSU2_TR(0x58b7cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b7d4ull));
TAIL_STATIC(0x50cee0u,50c);
}
B58b7d4:L58b7d4:{c.instructions+=3;NFSU2_TR(0x58b7d4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b7d6:{NFSU2_TR(0x58b7d6);
u8 U[4];
w4(U+0,u32(0x9757a0c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b7db:{NFSU2_TR(0x58b7db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b7e0ull));
TAIL_STATIC(0x55dde0u,55d);
}
B58b7e0:L58b7e0:{c.instructions+=7;NFSU2_TR(0x58b7e0);
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
B58b7e3:{NFSU2_TR(0x58b7e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58b7e4:{NFSU2_TR(0x58b7e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58b7e5:{NFSU2_TR(0x58b7e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58b7e6:{NFSU2_TR(0x58b7e6);
__builtin_memmove((R+16),(R+20),4);
}
B58b7e8:{NFSU2_TR(0x58b7e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58b7e9:{NFSU2_TR(0x58b7e9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58b7ec:L58b7ec:{c.instructions+=2;NFSU2_TR(0x58b7ec);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x706c6179ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x706c6179ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58b7f1:{NFSU2_TR(0x58b7f1);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L58b8cd;}}
}
B58b7f7:L58b7f7:{c.instructions+=1;NFSU2_TR(0x58b7f7);
if(r1(R+518)){{goto L58b8ad;}}
}
B58b7fd:L58b7fd:{c.instructions+=2;NFSU2_TR(0x58b7fd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x6465636cull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58b802:{NFSU2_TR(0x58b802);
if(r1(R+518)){{goto L58b84e;}}
}
B58b804:L58b804:{c.instructions+=2;NFSU2_TR(0x58b804);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x6d657367ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x6d657367ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x6d657367ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58b809:{NFSU2_TR(0x58b809);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58b936;}}
}
B58b80f:L58b80f:{c.instructions+=7;NFSU2_TR(0x58b80f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58b812:{NFSU2_TR(0x58b812);
u8 U[4];
w4(U+0,u32(0x7a15e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b817:{NFSU2_TR(0x58b817);
u8 U[4];
w4(U+0,u32(0x200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b81c:{NFSU2_TR(0x58b81c);
u8 U[4];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B58b823:{NFSU2_TR(0x58b823);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b824:{NFSU2_TR(0x58b824);
u8 U[4];
w4(U+0,u32(0x79ac28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b829:{NFSU2_TR(0x58b829);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b82a:L58b82a:{c.instructions+=1;NFSU2_TR(0x58b82a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b82full));
TAIL_STATIC(0x7414a0u,741);
}
B58b82f:L58b82f:{c.instructions+=3;NFSU2_TR(0x58b82f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58b832:{NFSU2_TR(0x58b832);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b833:{NFSU2_TR(0x58b833);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b838ull));
TAIL_STATIC(0x742360u,742);
}
B58b838:L58b838:{c.instructions+=8;NFSU2_TR(0x58b838);
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
B58b83b:{NFSU2_TR(0x58b83b);
s4(0x83637c,u32(0x1ull));
}
B58b845:{NFSU2_TR(0x58b845);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58b846:{NFSU2_TR(0x58b846);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58b847:{NFSU2_TR(0x58b847);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58b848:{NFSU2_TR(0x58b848);
__builtin_memmove((R+16),(R+20),4);
}
B58b84a:{NFSU2_TR(0x58b84a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58b84b:{NFSU2_TR(0x58b84b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58b84e:L58b84e:{c.instructions+=8;NFSU2_TR(0x58b84e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58b851:{NFSU2_TR(0x58b851);
u8 U[4];
w4(U+0,u32(0x7a15e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b856:{NFSU2_TR(0x58b856);
u8 U[4];
w4(U+0,u32(0x200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b85b:{NFSU2_TR(0x58b85b);
u8 U[4];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58b862:{NFSU2_TR(0x58b862);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b863:{NFSU2_TR(0x58b863);
u8 U[4];
w4(U+0,u32(0x79ac28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b868:{NFSU2_TR(0x58b868);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b869:{NFSU2_TR(0x58b869);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b86eull));
TAIL_STATIC(0x7414a0u,741);
}
B58b86e:L58b86e:{c.instructions+=3;NFSU2_TR(0x58b86e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58b871:{NFSU2_TR(0x58b871);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b872:{NFSU2_TR(0x58b872);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b877ull));
TAIL_STATIC(0x742360u,742);
}
B58b877:L58b877:{c.instructions+=5;NFSU2_TR(0x58b877);
__builtin_memmove((R+0),gp(0x836378),4);
}
B58b87c:{NFSU2_TR(0x58b87c);
w4(R+24,u32(0x1ull));
}
B58b881:{NFSU2_TR(0x58b881);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B58b884:{NFSU2_TR(0x58b884);
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
B58b886:{NFSU2_TR(0x58b886);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58b497u);}goto L58b497;}}
}
B58b88c:L58b88c:{c.instructions+=3;NFSU2_TR(0x58b88c);
u8 U[4];
w4(U+0,u32(0x7979b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b891:{NFSU2_TR(0x58b891);
u8 U[4];
w4(U+0,u32(0x39992a2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b896:{NFSU2_TR(0x58b896);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b89bull));
TAIL_STATIC(0x55dda0u,55d);
}
B58b89b:L58b89b:{c.instructions+=8;NFSU2_TR(0x58b89b);
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
B58b89e:{NFSU2_TR(0x58b89e);
__builtin_memmove(gp(0x83637c),(R+24),4);
}
B58b8a4:{NFSU2_TR(0x58b8a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58b8a5:{NFSU2_TR(0x58b8a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58b8a6:{NFSU2_TR(0x58b8a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58b8a7:{NFSU2_TR(0x58b8a7);
__builtin_memmove((R+16),(R+20),4);
}
B58b8a9:{NFSU2_TR(0x58b8a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58b8aa:{NFSU2_TR(0x58b8aa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58b8ad:L58b8ad:{c.instructions+=8;NFSU2_TR(0x58b8ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58b8b0:{NFSU2_TR(0x58b8b0);
u8 U[4];
w4(U+0,u32(0x7a15e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b8b5:{NFSU2_TR(0x58b8b5);
u8 U[4];
w4(U+0,u32(0x200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b8ba:{NFSU2_TR(0x58b8ba);
u8 U[4];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B58b8c1:{NFSU2_TR(0x58b8c1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b8c2:{NFSU2_TR(0x58b8c2);
u8 U[4];
w4(U+0,u32(0x79ac28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b8c7:{NFSU2_TR(0x58b8c7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b8c8:{NFSU2_TR(0x58b8c8);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58b82au);}goto L58b82a;}
}
B58b8cd:L58b8cd:{c.instructions+=2;NFSU2_TR(0x58b8cd);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x74696d65ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x74696d65ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x74696d65ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58b8d2:{NFSU2_TR(0x58b8d2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58b936;}}
}
B58b8d4:L58b8d4:{c.instructions+=8;NFSU2_TR(0x58b8d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58b8d7:{NFSU2_TR(0x58b8d7);
u8 U[4];
w4(U+0,u32(0x7a15e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b8dc:{NFSU2_TR(0x58b8dc);
u8 U[4];
w4(U+0,u32(0x200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b8e1:{NFSU2_TR(0x58b8e1);
u8 U[4];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B58b8e8:{NFSU2_TR(0x58b8e8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b8e9:{NFSU2_TR(0x58b8e9);
u8 U[4];
w4(U+0,u32(0x79ac28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b8ee:{NFSU2_TR(0x58b8ee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b8ef:{NFSU2_TR(0x58b8ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b8f4ull));
TAIL_STATIC(0x7414a0u,741);
}
B58b8f4:L58b8f4:{c.instructions+=3;NFSU2_TR(0x58b8f4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58b8f7:{NFSU2_TR(0x58b8f7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b8f8:{NFSU2_TR(0x58b8f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b8fdull));
TAIL_STATIC(0x742360u,742);
}
B58b8fd:L58b8fd:{c.instructions+=7;NFSU2_TR(0x58b8fd);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B58b8ff:{NFSU2_TR(0x58b8ff);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b900:{NFSU2_TR(0x58b900);
u8 U[4];
w4(U+0,u32(0x72170696ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b905:{NFSU2_TR(0x58b905);
__builtin_memmove(gp(0x836378),(R+24),4);
}
B58b90b:{NFSU2_TR(0x58b90b);
s4(0x83637c,u32(0x1ull));
}
B58b915:{NFSU2_TR(0x58b915);
__builtin_memmove(gp(0x8667dc),(R+24),4);
}
B58b91b:{NFSU2_TR(0x58b91b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b920ull));
TAIL_STATIC(0x55dde0u,55d);
}
B58b920:L58b920:{c.instructions+=3;NFSU2_TR(0x58b920);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b921:{NFSU2_TR(0x58b921);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b923:{NFSU2_TR(0x58b923);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b928ull));
TAIL_STATIC(0x50cee0u,50c);
}
B58b928:L58b928:{c.instructions+=3;NFSU2_TR(0x58b928);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b929:{NFSU2_TR(0x58b929);
u8 U[4];
w4(U+0,u32(0x9757a0c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b92e:{NFSU2_TR(0x58b92e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b933ull));
TAIL_STATIC(0x55dde0u,55d);
}
B58b933:L58b933:{c.instructions+=1;NFSU2_TR(0x58b933);
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
B58b936:L58b936:{c.instructions+=6;NFSU2_TR(0x58b936);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58b937:{NFSU2_TR(0x58b937);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58b938:{NFSU2_TR(0x58b938);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58b939:{NFSU2_TR(0x58b939);
__builtin_memmove((R+16),(R+20),4);
}
B58b93b:{NFSU2_TR(0x58b93b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58b93c:{NFSU2_TR(0x58b93c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58b940:L58b940:{c.instructions+=4;NFSU2_TR(0x58b940);
__builtin_memmove((R+4),gp(0x86a48c),1);
}
B58b946:{NFSU2_TR(0x58b946);
w4(R+0,u32(0x1ull));
}
B58b94b:{NFSU2_TR(0x58b94b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B58b94d:{NFSU2_TR(0x58b94d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58b97b;}}
}
B58b94f:L58b94f:{c.instructions+=7;NFSU2_TR(0x58b94f);
__builtin_memmove((R+8),gp(0x86a48c),4);
}
B58b955:{NFSU2_TR(0x58b955);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+0))));
}
B58b957:{NFSU2_TR(0x58b957);
u8 U[4];
w4(U+0,u32(0x7822d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b95c:{NFSU2_TR(0x58b95c);
__builtin_memmove(gp(0x86a48c),(R+8),4);
}
B58b962:{NFSU2_TR(0x58b962);
s4(0x86a478,u32(0x0ull));
}
B58b96c:{NFSU2_TR(0x58b96c);
s1(0x86a47c,u8(0x0ull));
}
B58b973:{NFSU2_TR(0x58b973);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b978ull));
TAIL_STATIC(0x75c5edu,75c);
}
B58b978:L58b978:{c.instructions+=1;NFSU2_TR(0x58b978);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B58b97b:L58b97b:{c.instructions+=3;NFSU2_TR(0x58b97b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58b97f:{NFSU2_TR(0x58b97f);
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
B58b981:{NFSU2_TR(0x58b981);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58b98d;}}
}
B58b983:L58b983:{c.instructions+=1;NFSU2_TR(0x58b983);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b988ull));
TAIL_STATIC(0x58a0e0u,58a);
}
B58b988:L58b988:{c.instructions+=2;NFSU2_TR(0x58b988);
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
B58b98a:{NFSU2_TR(0x58b98a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58b98d;}}
}
B58b98c:L58b98c:{c.instructions+=1;NFSU2_TR(0x58b98c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58b98d:L58b98d:{c.instructions+=3;NFSU2_TR(0x58b98d);
__builtin_memmove(gp(0x86a478),(R+0),4);
}
B58b992:{NFSU2_TR(0x58b992);
w4(R+0,u32(0x86a478ull));
}
B58b997:{NFSU2_TR(0x58b997);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58b9a0:L58b9a0:{c.instructions+=9;NFSU2_TR(0x58b9a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58b9a6:{NFSU2_TR(0x58b9a6);
__builtin_memmove((R+4),gp(0x86a5e4),1);
}
B58b9ac:{NFSU2_TR(0x58b9ac);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b9ae:{NFSU2_TR(0x58b9ae);
u8 U[4];
w4(U+0,u32(0x778a7eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b9b3:{NFSU2_TR(0x58b9b3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b9b4:{NFSU2_TR(0x58b9b4);
w4(R+0,u32(0x1ull));
}
B58b9b9:{NFSU2_TR(0x58b9b9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B58b9bb:{NFSU2_TR(0x58b9bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58b9c2:{NFSU2_TR(0x58b9c2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58b9e9;}}
}
B58b9c4:L58b9c4:{c.instructions+=4;NFSU2_TR(0x58b9c4);
s4(0x86a5e4,u32(u32(m4(0x86a5e4))|u32(r4(R+0))));
}
B58b9ca:{NFSU2_TR(0x58b9ca);
w4(R+4,u32(0x86a490ull));
}
B58b9cf:{NFSU2_TR(0x58b9cf);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B58b9d7:{NFSU2_TR(0x58b9d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b9dcull));
TAIL_STATIC(0x586700u,586);
}
B58b9dc:L58b9dc:{c.instructions+=2;NFSU2_TR(0x58b9dc);
u8 U[4];
w4(U+0,u32(0x782380ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58b9e1:{NFSU2_TR(0x58b9e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58b9e6ull));
TAIL_STATIC(0x75c5edu,75c);
}
B58b9e6:L58b9e6:{c.instructions+=1;NFSU2_TR(0x58b9e6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B58b9e9:L58b9e9:{c.instructions+=5;NFSU2_TR(0x58b9e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+4),(U+0),4);
}
B58b9ed:{NFSU2_TR(0x58b9ed);
w4(R+0,u32(0x86a490ull));
}
B58b9f2:{NFSU2_TR(0x58b9f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58b9f9:{NFSU2_TR(0x58b9f9);
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
B58b9fc:{NFSU2_TR(0x58b9fc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58ba00:L58ba00:{c.instructions+=7;NFSU2_TR(0x58ba00);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ba01:{NFSU2_TR(0x58ba01);
__builtin_memmove((R+20),(R+16),4);
}
B58ba03:{NFSU2_TR(0x58ba03);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x450ull))));
}
B58ba09:{NFSU2_TR(0x58ba09);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ba0a:{NFSU2_TR(0x58ba0a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ba0b:{NFSU2_TR(0x58ba0b);
__builtin_memmove((R+28),(R+4),4);
}
B58ba0d:{NFSU2_TR(0x58ba0d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58ba12ull));
TAIL_STATIC(0x58a0e0u,58a);
}
B58ba12:L58ba12:{c.instructions+=4;NFSU2_TR(0x58ba12);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B58ba15:{NFSU2_TR(0x58ba15);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B58ba17:{NFSU2_TR(0x58ba17);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B58ba19:{NFSU2_TR(0x58ba19);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58ba25;}}
}
B58ba1b:L58ba1b:{c.instructions+=6;NFSU2_TR(0x58ba1b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58ba1c:{NFSU2_TR(0x58ba1c);
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
B58ba1e:{NFSU2_TR(0x58ba1e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58ba1f:{NFSU2_TR(0x58ba1f);
__builtin_memmove((R+16),(R+20),4);
}
B58ba21:{NFSU2_TR(0x58ba21);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58ba22:{NFSU2_TR(0x58ba22);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58ba25:L58ba25:{c.instructions+=3;NFSU2_TR(0x58ba25);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ba26:{NFSU2_TR(0x58ba26);
w4(R+4,u32(0x850080ull));
}
B58ba2b:{NFSU2_TR(0x58ba2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58ba30ull));
TAIL_STATIC(0x5031f0u,503);
}
B58ba30:L58ba30:{c.instructions+=4;NFSU2_TR(0x58ba30);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ba31:{NFSU2_TR(0x58ba31);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58ba34:{NFSU2_TR(0x58ba34);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ba35:{NFSU2_TR(0x58ba35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58ba3aull));
TAIL_STATIC(0x43dc30u,43d);
}
B58ba3a:L58ba3a:{c.instructions+=3;NFSU2_TR(0x58ba3a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58ba3d:{NFSU2_TR(0x58ba3d);
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
B58ba3f:{NFSU2_TR(0x58ba3f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58ba8b;}}
}
B58ba41:L58ba41:{c.instructions+=2;NFSU2_TR(0x58ba41);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B58ba44:{NFSU2_TR(0x58ba44);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B58ba46:L58ba46:{c.instructions+=9;NFSU2_TR(0x58ba46);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B58ba49:{NFSU2_TR(0x58ba49);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ba4a:{NFSU2_TR(0x58ba4a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B58ba4d:{NFSU2_TR(0x58ba4d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ba4e:{NFSU2_TR(0x58ba4e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ba4f:{NFSU2_TR(0x58ba4f);
w4(R+4,u32(0x85ad40ull));
}
B58ba54:{NFSU2_TR(0x58ba54);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58ba57:{NFSU2_TR(0x58ba57);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58ba5a:{NFSU2_TR(0x58ba5a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58ba5full));
TAIL_STATIC(0x513160u,513);
}
B58ba5f:L58ba5f:{c.instructions+=7;NFSU2_TR(0x58ba5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58ba62:{NFSU2_TR(0x58ba62);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B58ba65:{NFSU2_TR(0x58ba65);
__builtin_memmove((R+4),(R+518),1);
}
B58ba68:{NFSU2_TR(0x58ba68);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B58ba6b:{NFSU2_TR(0x58ba6b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B58ba6c:{NFSU2_TR(0x58ba6c);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x7ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B58ba6f:{NFSU2_TR(0x58ba6f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58ba46u);}goto L58ba46;}}
}
B58ba71:L58ba71:{c.instructions+=2;NFSU2_TR(0x58ba71);
w4(R+4,u32(0x85ad40ull));
}
B58ba76:{NFSU2_TR(0x58ba76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58ba7bull));
TAIL_STATIC(0x513880u,513);
}
B58ba7b:L58ba7b:{c.instructions+=9;NFSU2_TR(0x58ba7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58ba7e:{NFSU2_TR(0x58ba7e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58ba7f:{NFSU2_TR(0x58ba7f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58ba80:{NFSU2_TR(0x58ba80);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+8)),r1(U+0));
}
B58ba82:{NFSU2_TR(0x58ba82);
w1(R+0,u8(0x1ull));
}
B58ba84:{NFSU2_TR(0x58ba84);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58ba85:{NFSU2_TR(0x58ba85);
__builtin_memmove((R+16),(R+20),4);
}
B58ba87:{NFSU2_TR(0x58ba87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58ba88:{NFSU2_TR(0x58ba88);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58ba8b:L58ba8b:{c.instructions+=3;NFSU2_TR(0x58ba8b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B58ba8d:{NFSU2_TR(0x58ba8d);
__builtin_memmove((R+4),(R+28),4);
}
B58ba8f:{NFSU2_TR(0x58ba8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58ba94ull));
TAIL_STATIC(0x502fd0u,502);
}
B58ba94:L58ba94:{c.instructions+=4;NFSU2_TR(0x58ba94);
__builtin_memmove((R+28),(R+0),4);
}
B58ba96:{NFSU2_TR(0x58ba96);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58ba98:{NFSU2_TR(0x58ba98);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58ba9b:{NFSU2_TR(0x58ba9b);
if(r1(R+518)){{goto L58bb06;}}
}
B58ba9d:L58ba9d:{c.instructions+=1;NFSU2_TR(0x58ba9d);
__builtin_memmove((R+4),(R+4),4);
}
B58baa0:L58baa0:{c.instructions+=5;NFSU2_TR(0x58baa0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58baa3:{NFSU2_TR(0x58baa3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58baa4:{NFSU2_TR(0x58baa4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B58baa7:{NFSU2_TR(0x58baa7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58baa8:{NFSU2_TR(0x58baa8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58baadull));
TAIL_STATIC(0x43dc30u,43d);
}
B58baad:L58baad:{c.instructions+=3;NFSU2_TR(0x58baad);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58bab0:{NFSU2_TR(0x58bab0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58bab2:{NFSU2_TR(0x58bab2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58bb00;}}
}
B58bab4:L58bab4:{c.instructions+=2;NFSU2_TR(0x58bab4);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3b8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B58baba:{NFSU2_TR(0x58baba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58bb00;}}
}
B58babc:L58babc:{c.instructions+=4;NFSU2_TR(0x58babc);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B58babe:{NFSU2_TR(0x58babe);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B58bac1:{NFSU2_TR(0x58bac1);
w4(R+4,u32(0x7ull));
}
B58bac6:{NFSU2_TR(0x58bac6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffddull))));
__builtin_memmove((R+28),(U+0),4);
}
B58bac9:L58bac9:{c.instructions+=1;NFSU2_TR(0x58bac9);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L58bacb;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58bac9u);}goto L58bac9;}
}
B58bacb:L58bacb:{c.instructions+=10;NFSU2_TR(0x58bacb);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58bad0:{NFSU2_TR(0x58bad0);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B58bad2:{NFSU2_TR(0x58bad2);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58bad4:{NFSU2_TR(0x58bad4);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+8),(U+0),4);
}
B58bad7:{NFSU2_TR(0x58bad7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58bad8:{NFSU2_TR(0x58bad8);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B58bad9:{NFSU2_TR(0x58bad9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x134ull))));
__builtin_memmove((R+0),(U+0),4);
}
B58badf:{NFSU2_TR(0x58badf);
u8 U[4];
w4(U+0,u32(0x7a1104ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58bae4:{NFSU2_TR(0x58bae4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58bae5:{NFSU2_TR(0x58bae5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58baeaull));
TAIL_STATIC(0x7414a0u,741);
}
B58baea:L58baea:{c.instructions+=3;NFSU2_TR(0x58baea);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58baed:{NFSU2_TR(0x58baed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58baee:{NFSU2_TR(0x58baee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58baf3ull));
TAIL_STATIC(0x742360u,742);
}
B58baf3:L58baf3:{c.instructions+=4;NFSU2_TR(0x58baf3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B58baf6:{NFSU2_TR(0x58baf6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B58baf9:{NFSU2_TR(0x58baf9);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B58bafb:{NFSU2_TR(0x58bafb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58bb11;}}
}
B58bafd:L58bafd:{c.instructions+=1;NFSU2_TR(0x58bafd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B58bb00:L58bb00:{c.instructions+=3;NFSU2_TR(0x58bb00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B58bb02:{NFSU2_TR(0x58bb02);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58bb04:{NFSU2_TR(0x58bb04);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58baa0u);}goto L58baa0;}}
}
B58bb06:L58bb06:{c.instructions+=7;NFSU2_TR(0x58bb06);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58bb07:{NFSU2_TR(0x58bb07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58bb08:{NFSU2_TR(0x58bb08);
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
B58bb0a:{NFSU2_TR(0x58bb0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58bb0b:{NFSU2_TR(0x58bb0b);
__builtin_memmove((R+16),(R+20),4);
}
B58bb0d:{NFSU2_TR(0x58bb0d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58bb0e:{NFSU2_TR(0x58bb0e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58bb11:L58bb11:{c.instructions+=6;NFSU2_TR(0x58bb11);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58bb13:{NFSU2_TR(0x58bb13);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((R+4),(U+0),4);
}
B58bb16:{NFSU2_TR(0x58bb16);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58bb17:{NFSU2_TR(0x58bb17);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+8),(U+0),4);
}
B58bb1a:{NFSU2_TR(0x58bb1a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58bb1b:{NFSU2_TR(0x58bb1b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58bb20ull));
TAIL_STATIC(0x43dbb0u,43d);
}
B58bb20:L58bb20:{c.instructions+=5;NFSU2_TR(0x58bb20);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B58bb23:{NFSU2_TR(0x58bb23);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58bb24:{NFSU2_TR(0x58bb24);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+0),(U+0),4);
}
B58bb27:{NFSU2_TR(0x58bb27);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58bb28:{NFSU2_TR(0x58bb28);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58bb2dull));
TAIL_STATIC(0x576260u,576);
}
B58bb2d:L58bb2d:{c.instructions+=10;NFSU2_TR(0x58bb2d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B58bb30:{NFSU2_TR(0x58bb30);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58bb31:{NFSU2_TR(0x58bb31);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((R+4),(U+0),4);
}
B58bb34:{NFSU2_TR(0x58bb34);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58bb35:{NFSU2_TR(0x58bb35);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbb0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B58bb3b:{NFSU2_TR(0x58bb3b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbb0ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B58bb41:{NFSU2_TR(0x58bb41);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58bb44:{NFSU2_TR(0x58bb44);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58bb47:{NFSU2_TR(0x58bb47);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B58bb4b:{NFSU2_TR(0x58bb4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58bb50ull));
TAIL_STATIC(0x5840c0u,584);
}
B58bb50:L58bb50:{c.instructions+=2;NFSU2_TR(0x58bb50);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B58bb53:{NFSU2_TR(0x58bb53);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B58bb55:L58bb55:{c.instructions+=6;NFSU2_TR(0x58bb55);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58bb57:{NFSU2_TR(0x58bb57);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B58bb5a:{NFSU2_TR(0x58bb5a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58bb5b:{NFSU2_TR(0x58bb5b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbb0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B58bb61:{NFSU2_TR(0x58bb61);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58bb64:{NFSU2_TR(0x58bb64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58bb69ull));
TAIL_STATIC(0x581d90u,581);
}
B58bb69:L58bb69:{c.instructions+=6;NFSU2_TR(0x58bb69);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B58bb6d:{NFSU2_TR(0x58bb6d);
__builtin_memmove((R+0),(R+518),1);
}
B58bb70:{NFSU2_TR(0x58bb70);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),1);
s1(u32(r4(U+4)),r1(U+8));
}
B58bb73:{NFSU2_TR(0x58bb73);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B58bb74:{NFSU2_TR(0x58bb74);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x7ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B58bb77:{NFSU2_TR(0x58bb77);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58bb55u);}goto L58bb55;}}
}
B58bb79:L58bb79:{c.instructions+=6;NFSU2_TR(0x58bb79);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58bb7b:{NFSU2_TR(0x58bb7b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B58bb7e:{NFSU2_TR(0x58bb7e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58bb7f:{NFSU2_TR(0x58bb7f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbb0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B58bb85:{NFSU2_TR(0x58bb85);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58bb88:{NFSU2_TR(0x58bb88);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58bb8dull));
TAIL_STATIC(0x581d90u,581);
}
B58bb8d:L58bb8d:{c.instructions+=11;NFSU2_TR(0x58bb8d);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B58bb91:{NFSU2_TR(0x58bb91);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58bb94:{NFSU2_TR(0x58bb94);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58bb95:{NFSU2_TR(0x58bb95);
__builtin_memmove((R+8),(R+518),1);
}
B58bb98:{NFSU2_TR(0x58bb98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58bb99:{NFSU2_TR(0x58bb99);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+0)),r1(U+0));
}
B58bb9b:{NFSU2_TR(0x58bb9b);
w1(R+0,u8(0x1ull));
}
B58bb9d:{NFSU2_TR(0x58bb9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58bb9e:{NFSU2_TR(0x58bb9e);
__builtin_memmove((R+16),(R+20),4);
}
B58bba0:{NFSU2_TR(0x58bba0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58bba1:{NFSU2_TR(0x58bba1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58bbb0:L58bbb0:{c.instructions+=6;NFSU2_TR(0x58bbb0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58bbb1:{NFSU2_TR(0x58bbb1);
__builtin_memmove((R+20),(R+16),4);
}
B58bbb3:{NFSU2_TR(0x58bbb3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B58bbb6:{NFSU2_TR(0x58bbb6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x84ull))));
}
B58bbbc:{NFSU2_TR(0x58bbbc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58bbbd:{NFSU2_TR(0x58bbbd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58bbc2ull));
TAIL_STATIC(0x58a0e0u,58a);
}
B58bbc2:L58bbc2:{c.instructions+=3;NFSU2_TR(0x58bbc2);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B58bbc5:{NFSU2_TR(0x58bbc5);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B58bbc7:{NFSU2_TR(0x58bbc7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58bbd3;}}
}
B58bbc9:L58bbc9:{c.instructions+=5;NFSU2_TR(0x58bbc9);
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
B58bbcc:{NFSU2_TR(0x58bbcc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58bbcd:{NFSU2_TR(0x58bbcd);
__builtin_memmove((R+16),(R+20),4);
}
B58bbcf:{NFSU2_TR(0x58bbcf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58bbd0:{NFSU2_TR(0x58bbd0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58bbd3:L58bbd3:{c.instructions+=4;NFSU2_TR(0x58bbd3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B58bbd5:{NFSU2_TR(0x58bbd5);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B58bbda:{NFSU2_TR(0x58bbda);
w4(R+4,u32(0x1full));
}
B58bbdf:{NFSU2_TR(0x58bbdf);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B58bbe3:L58bbe3:{c.instructions+=1;NFSU2_TR(0x58bbe3);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L58bbe5;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58bbe3u);}goto L58bbe3;}
}
B58bbe5:L58bbe5:{c.instructions+=9;NFSU2_TR(0x58bbe5);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B58bbe7:{NFSU2_TR(0x58bbe7);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B58bbe8:{NFSU2_TR(0x58bbe8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58bbeb:{NFSU2_TR(0x58bbeb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58bbec:{NFSU2_TR(0x58bbec);
u8 U[4];
w4(U+0,u32(0x7a13e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58bbf1:{NFSU2_TR(0x58bbf1);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58bbf5:{NFSU2_TR(0x58bbf5);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58bbfa:{NFSU2_TR(0x58bbfa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58bbfb:{NFSU2_TR(0x58bbfb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58bc00ull));
TAIL_STATIC(0x741a50u,741);
}
B58bc00:L58bc00:{c.instructions+=7;NFSU2_TR(0x58bc00);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58bc03:{NFSU2_TR(0x58bc03);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58bc06:{NFSU2_TR(0x58bc06);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B58bc09:{NFSU2_TR(0x58bc09);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58bc0b:{NFSU2_TR(0x58bc0b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58bc0c:{NFSU2_TR(0x58bc0c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58bc0d:{NFSU2_TR(0x58bc0d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58bc12ull));
TAIL_STATIC(0x58a0e0u,58a);
}
B58bc12:L58bc12:{c.instructions+=6;NFSU2_TR(0x58bc12);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58bc13:{NFSU2_TR(0x58bc13);
u8 U[4];
w4(U+0,u32(0x584630ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58bc18:{NFSU2_TR(0x58bc18);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58bc1c:{NFSU2_TR(0x58bc1c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58bc1d:{NFSU2_TR(0x58bc1d);
u8 U[4];
w4(U+0,u32(0x75736572ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58bc22:{NFSU2_TR(0x58bc22);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58bc27ull));
TAIL_STATIC(0x58a0e0u,58a);
}
B58bc27:L58bc27:{c.instructions+=2;NFSU2_TR(0x58bc27);
__builtin_memmove((R+4),(R+0),4);
}
B58bc29:{NFSU2_TR(0x58bc29);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58bc2eull));
TAIL_STATIC(0x5869a0u,586);
}
B58bc2e:L58bc2e:{c.instructions+=4;NFSU2_TR(0x58bc2e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58bc2f:{NFSU2_TR(0x58bc2f);
__builtin_memmove((R+16),(R+20),4);
}
B58bc31:{NFSU2_TR(0x58bc31);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58bc32:{NFSU2_TR(0x58bc32);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58bc40:L58bc40:{c.instructions+=3;NFSU2_TR(0x58bc40);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58bc44:{NFSU2_TR(0x58bc44);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58bc45:{NFSU2_TR(0x58bc45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58bc4aull));
TAIL_STATIC(0x58a0e0u,58a);
}
B58bc4a:L58bc4a:{c.instructions+=2;NFSU2_TR(0x58bc4a);
__builtin_memmove((R+4),(R+0),4);
}
B58bc4c:{NFSU2_TR(0x58bc4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58bc51ull));
TAIL_STATIC(0x586850u,586);
}
B58bc51:L58bc51:{c.instructions+=1;NFSU2_TR(0x58bc51);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58bc60:L58bc60:{c.instructions+=2;NFSU2_TR(0x58bc60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x40ull))));
}
B58bc63:{NFSU2_TR(0x58bc63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58bc68ull));
TAIL_STATIC(0x58a0e0u,58a);
}
B58bc68:L58bc68:{c.instructions+=3;NFSU2_TR(0x58bc68);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B58bc6b:{NFSU2_TR(0x58bc6b);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B58bc6d:{NFSU2_TR(0x58bc6d);
if(r1(R+518)){{goto L58bd2a;}}
}
B58bc73:L58bc73:{c.instructions+=3;NFSU2_TR(0x58bc73);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58bc77:{NFSU2_TR(0x58bc77);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58bc79:{NFSU2_TR(0x58bc79);
if(r1(R+518)){{goto L58bd2a;}}
}
B58bc7f:L58bc7f:{c.instructions+=2;NFSU2_TR(0x58bc7f);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B58bc82:{NFSU2_TR(0x58bc82);
if(r1(R+518)){{goto L58bd2a;}}
}
B58bc88:L58bc88:{c.instructions+=5;NFSU2_TR(0x58bc88);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58bc89:{NFSU2_TR(0x58bc89);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B58bc8b:{NFSU2_TR(0x58bc8b);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B58bc90:{NFSU2_TR(0x58bc90);
w4(R+4,u32(0xfull));
}
B58bc95:{NFSU2_TR(0x58bc95);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B58bc99:L58bc99:{c.instructions+=1;NFSU2_TR(0x58bc99);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L58bc9b;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58bc99u);}goto L58bc99;}
}
B58bc9b:L58bc9b:{c.instructions+=8;NFSU2_TR(0x58bc9b);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B58bc9d:{NFSU2_TR(0x58bc9d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58bc9e:{NFSU2_TR(0x58bc9e);
u8 U[4];
w4(U+0,u32(0x7a13e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58bca3:{NFSU2_TR(0x58bca3);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B58bca4:{NFSU2_TR(0x58bca4);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B58bca8:{NFSU2_TR(0x58bca8);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58bcaa:{NFSU2_TR(0x58bcaa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58bcab:{NFSU2_TR(0x58bcab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58bcb0ull));
TAIL_STATIC(0x741a50u,741);
}
B58bcb0:L58bcb0:{c.instructions+=1;NFSU2_TR(0x58bcb0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58bcb5ull));
TAIL_STATIC(0x570a30u,570);
}
B58bcb5:L58bcb5:{c.instructions+=8;NFSU2_TR(0x58bcb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B58bcb8:{NFSU2_TR(0x58bcb8);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7fa744ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B58bcbf:{NFSU2_TR(0x58bcbf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58bcc0:{NFSU2_TR(0x58bcc0);
u8 U[4];
w4(U+0,u32(0x7a1398ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58bcc5:{NFSU2_TR(0x58bcc5);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B58bcc9:{NFSU2_TR(0x58bcc9);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58bccb:{NFSU2_TR(0x58bccb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58bccc:{NFSU2_TR(0x58bccc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58bcd1ull));
TAIL_STATIC(0x741a50u,741);
}
B58bcd1:L58bcd1:{c.instructions+=5;NFSU2_TR(0x58bcd1);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58bcd5:{NFSU2_TR(0x58bcd5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B58bcd8:{NFSU2_TR(0x58bcd8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58bcda:{NFSU2_TR(0x58bcda);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58bcdb:{NFSU2_TR(0x58bcdb);
if(r1(R+518)){{goto L58bcf7;}}
}
B58bcdd:L58bcdd:{c.instructions+=2;NFSU2_TR(0x58bcdd);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B58bce0:{NFSU2_TR(0x58bce0);
if(r1(R+518)){{goto L58bcf7;}}
}
B58bce2:L58bce2:{c.instructions+=6;NFSU2_TR(0x58bce2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58bce3:{NFSU2_TR(0x58bce3);
u8 U[4];
w4(U+0,u32(0x7a15f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58bce8:{NFSU2_TR(0x58bce8);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58bcec:{NFSU2_TR(0x58bcec);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58bcee:{NFSU2_TR(0x58bcee);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58bcef:{NFSU2_TR(0x58bcef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58bcf4ull));
TAIL_STATIC(0x741a50u,741);
}
B58bcf4:L58bcf4:{c.instructions+=1;NFSU2_TR(0x58bcf4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B58bcf7:L58bcf7:{c.instructions+=6;NFSU2_TR(0x58bcf7);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58bcfb:{NFSU2_TR(0x58bcfb);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58bcff:{NFSU2_TR(0x58bcff);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58bd01:{NFSU2_TR(0x58bd01);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58bd02:{NFSU2_TR(0x58bd02);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58bd03:{NFSU2_TR(0x58bd03);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58bd08ull));
TAIL_STATIC(0x58a0e0u,58a);
}
B58bd08:L58bd08:{c.instructions+=6;NFSU2_TR(0x58bd08);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58bd09:{NFSU2_TR(0x58bd09);
u8 U[4];
w4(U+0,u32(0x584630ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58bd0e:{NFSU2_TR(0x58bd0e);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58bd12:{NFSU2_TR(0x58bd12);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58bd13:{NFSU2_TR(0x58bd13);
u8 U[4];
w4(U+0,u32(0x72657074ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58bd18:{NFSU2_TR(0x58bd18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58bd1dull));
TAIL_STATIC(0x58a0e0u,58a);
}
B58bd1d:L58bd1d:{c.instructions+=2;NFSU2_TR(0x58bd1d);
__builtin_memmove((R+4),(R+0),4);
}
B58bd1f:{NFSU2_TR(0x58bd1f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58bd24ull));
TAIL_STATIC(0x5869a0u,586);
}
B58bd24:L58bd24:{c.instructions+=2;NFSU2_TR(0x58bd24);
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
B58bd27:{NFSU2_TR(0x58bd27);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58bd2a:L58bd2a:{c.instructions+=3;NFSU2_TR(0x58bd2a);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B58bd2d:{NFSU2_TR(0x58bd2d);
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
B58bd30:{NFSU2_TR(0x58bd30);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58bd40:L58bd40:{c.instructions+=2;NFSU2_TR(0x58bd40);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58bd41:{NFSU2_TR(0x58bd41);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58bd46ull));
TAIL_STATIC(0x58a0e0u,58a);
}
B58bd46:L58bd46:{c.instructions+=4;NFSU2_TR(0x58bd46);
__builtin_memmove((R+28),(R+0),4);
}
B58bd48:{NFSU2_TR(0x58bd48);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58bd4b:{NFSU2_TR(0x58bd4b);
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
B58bd4d:{NFSU2_TR(0x58bd4d);
if(r1(R+518)){{goto L58bd84;}}
}
B58bd4f:L58bd4f:{c.instructions+=3;NFSU2_TR(0x58bd4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58bd52:{NFSU2_TR(0x58bd52);
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
B58bd54:{NFSU2_TR(0x58bd54);
if(r1(R+518)){{goto L58bd64;}}
}
B58bd56:L58bd56:{c.instructions+=5;NFSU2_TR(0x58bd56);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58bd59:{NFSU2_TR(0x58bd59);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58bd5d:{NFSU2_TR(0x58bd5d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58bd5e:{NFSU2_TR(0x58bd5e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58bd5f:{NFSU2_TR(0x58bd5f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58bd61ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B58bd61:L58bd61:{c.instructions+=1;NFSU2_TR(0x58bd61);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58bd64:L58bd64:{c.instructions+=4;NFSU2_TR(0x58bd64);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58bd65:{NFSU2_TR(0x58bd65);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B58bd68:{NFSU2_TR(0x58bd68);
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
B58bd6a:{NFSU2_TR(0x58bd6a);
if(r1(R+518)){{goto L58bd7c;}}
}
B58bd6c:L58bd6c:{c.instructions+=2;NFSU2_TR(0x58bd6c);
__builtin_memmove((R+4),(R+24),4);
}
B58bd6e:{NFSU2_TR(0x58bd6e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58bd73ull));
TAIL_STATIC(0x584140u,584);
}
B58bd73:L58bd73:{c.instructions+=2;NFSU2_TR(0x58bd73);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58bd74:{NFSU2_TR(0x58bd74);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58bd79ull));
TAIL_STATIC(0x575630u,575);
}
B58bd79:L58bd79:{c.instructions+=1;NFSU2_TR(0x58bd79);
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
B58bd7c:L58bd7c:{c.instructions+=2;NFSU2_TR(0x58bd7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B58bd83:{NFSU2_TR(0x58bd83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58bd84:L58bd84:{c.instructions+=2;NFSU2_TR(0x58bd84);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58bd85:{NFSU2_TR(0x58bd85);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58bd90:L58bd90:{c.instructions+=8;NFSU2_TR(0x58bd90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B58bd93:{NFSU2_TR(0x58bd93);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58bd94:{NFSU2_TR(0x58bd94);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B58bd98:{NFSU2_TR(0x58bd98);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58bd9b:{NFSU2_TR(0x58bd9b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58bd9d:{NFSU2_TR(0x58bd9d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58bd9e:{NFSU2_TR(0x58bd9e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58bd9f:{NFSU2_TR(0x58bd9f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58be2f;}}
}
B58bda5:L58bda5:{c.instructions+=15;NFSU2_TR(0x58bda5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58bda8:{NFSU2_TR(0x58bda8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B58bdaa:{NFSU2_TR(0x58bdaa);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58bdaf:{NFSU2_TR(0x58bdaf);
u8 U[8];
w4(U+0,u32(u32(u32(0x11ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58bdb3:{NFSU2_TR(0x58bdb3);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58bdb5:{NFSU2_TR(0x58bdb5);
u8 U[8];
w4(U+0,u32(u32(u32(0x19ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58bdb9:{NFSU2_TR(0x58bdb9);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58bdbd:{NFSU2_TR(0x58bdbd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58bdbe:{NFSU2_TR(0x58bdbe);
u8 U[8];
w4(U+0,u32(u32(u32(0x21ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58bdc2:{NFSU2_TR(0x58bdc2);
u8 U[6];
w4(U+0,u32(u32(u32(0x25ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B58bdc7:{NFSU2_TR(0x58bdc7);
u8 U[4];
w4(U+0,u32(0x7a15f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58bdcc:{NFSU2_TR(0x58bdcc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58bdcd:{NFSU2_TR(0x58bdcd);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B58bdd2:{NFSU2_TR(0x58bdd2);
u8 U[5];
w4(U+0,u32(u32(u32(0x2full))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B58bdd6:{NFSU2_TR(0x58bdd6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58bddbull));
TAIL_STATIC(0x7414a0u,741);
}
B58bddb:L58bddb:{c.instructions+=3;NFSU2_TR(0x58bddb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58bdde:{NFSU2_TR(0x58bdde);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58bddf:{NFSU2_TR(0x58bddf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58bde4ull));
TAIL_STATIC(0x742360u,742);
}
B58bde4:L58bde4:{c.instructions+=4;NFSU2_TR(0x58bde4);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58bde8:{NFSU2_TR(0x58bde8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B58bdea:{NFSU2_TR(0x58bdea);
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
B58bded:{NFSU2_TR(0x58bded);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58bdf2ull));
TAIL_STATIC(0x502fd0u,502);
}
B58bdf2:L58bdf2:{c.instructions+=3;NFSU2_TR(0x58bdf2);
__builtin_memmove((R+28),(R+0),4);
}
B58bdf4:{NFSU2_TR(0x58bdf4);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58bdf6:{NFSU2_TR(0x58bdf6);
if(r1(R+518)){{goto L58be2f;}}
}
B58bdf8:L58bdf8:{c.instructions+=5;NFSU2_TR(0x58bdf8);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B58bdfc:{NFSU2_TR(0x58bdfc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58bdfd:{NFSU2_TR(0x58bdfd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B58be00:{NFSU2_TR(0x58be00);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58be01:{NFSU2_TR(0x58be01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58be06ull));
TAIL_STATIC(0x43dc30u,43d);
}
B58be06:L58be06:{c.instructions+=3;NFSU2_TR(0x58be06);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58be09:{NFSU2_TR(0x58be09);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58be0b:{NFSU2_TR(0x58be0b);
if(r1(R+518)){{goto L58be15;}}
}
B58be0d:L58be0d:{c.instructions+=3;NFSU2_TR(0x58be0d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B58be0f:{NFSU2_TR(0x58be0f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58be11:{NFSU2_TR(0x58be11);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58bdf8u);}goto L58bdf8;}}
}
B58be13:L58be13:{c.instructions+=1;NFSU2_TR(0x58be13);
{goto L58be2f;}
}
B58be15:L58be15:{c.instructions+=5;NFSU2_TR(0x58be15);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58be18:{NFSU2_TR(0x58be18);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58be19:{NFSU2_TR(0x58be19);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B58be1c:{NFSU2_TR(0x58be1c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58be1d:{NFSU2_TR(0x58be1d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58be22ull));
TAIL_STATIC(0x745250u,745);
}
B58be22:L58be22:{c.instructions+=2;NFSU2_TR(0x58be22);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58be25:{NFSU2_TR(0x58be25);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3b8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B58be2f:L58be2f:{c.instructions+=1;NFSU2_TR(0x58be2f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58be34ull));
TAIL_STATIC(0x58a0e0u,58a);
}
B58be34:L58be34:{c.instructions+=4;NFSU2_TR(0x58be34);
__builtin_memmove((R+28),(R+0),4);
}
B58be36:{NFSU2_TR(0x58be36);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58be39:{NFSU2_TR(0x58be39);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58be3b:{NFSU2_TR(0x58be3b);
if(r1(R+518)){{goto L58be6c;}}
}
B58be3d:L58be3d:{c.instructions+=3;NFSU2_TR(0x58be3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58be40:{NFSU2_TR(0x58be40);
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
B58be42:{NFSU2_TR(0x58be42);
if(r1(R+518)){{goto L58be4e;}}
}
B58be44:L58be44:{c.instructions+=4;NFSU2_TR(0x58be44);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58be47:{NFSU2_TR(0x58be47);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58be48:{NFSU2_TR(0x58be48);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58be49:{NFSU2_TR(0x58be49);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58be4bull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B58be4b:L58be4b:{c.instructions+=1;NFSU2_TR(0x58be4b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58be4e:L58be4e:{c.instructions+=3;NFSU2_TR(0x58be4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B58be51:{NFSU2_TR(0x58be51);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58be53:{NFSU2_TR(0x58be53);
if(r1(R+518)){{goto L58be65;}}
}
B58be55:L58be55:{c.instructions+=2;NFSU2_TR(0x58be55);
__builtin_memmove((R+4),(R+24),4);
}
B58be57:{NFSU2_TR(0x58be57);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58be5cull));
TAIL_STATIC(0x584140u,584);
}
B58be5c:L58be5c:{c.instructions+=2;NFSU2_TR(0x58be5c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58be5d:{NFSU2_TR(0x58be5d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58be62ull));
TAIL_STATIC(0x575630u,575);
}
B58be62:L58be62:{c.instructions+=1;NFSU2_TR(0x58be62);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B58be65:L58be65:{c.instructions+=1;NFSU2_TR(0x58be65);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B58be6c:L58be6c:{c.instructions+=5;NFSU2_TR(0x58be6c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58be6d:{NFSU2_TR(0x58be6d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58be6e:{NFSU2_TR(0x58be6e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58be6f:{NFSU2_TR(0x58be6f);
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
B58be72:{NFSU2_TR(0x58be72);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58be80:L58be80:{c.instructions+=7;NFSU2_TR(0x58be80);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58be81:{NFSU2_TR(0x58be81);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B58be85:{NFSU2_TR(0x58be85);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58be88:{NFSU2_TR(0x58be88);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58be8a:{NFSU2_TR(0x58be8a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58be8b:{NFSU2_TR(0x58be8b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58be8c:{NFSU2_TR(0x58be8c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58bea5;}}
}
B58be8e:L58be8e:{c.instructions+=5;NFSU2_TR(0x58be8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58be91:{NFSU2_TR(0x58be91);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B58be95:{NFSU2_TR(0x58be95);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58be96:{NFSU2_TR(0x58be96);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B58be99:{NFSU2_TR(0x58be99);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58be9eull));
TAIL_STATIC(0x5874e0u,587);
}
B58be9e:L58be9e:{c.instructions+=1;NFSU2_TR(0x58be9e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B58bea5:L58bea5:{c.instructions+=1;NFSU2_TR(0x58bea5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58beaaull));
TAIL_STATIC(0x58a0e0u,58a);
}
B58beaa:L58beaa:{c.instructions+=4;NFSU2_TR(0x58beaa);
__builtin_memmove((R+28),(R+0),4);
}
B58beac:{NFSU2_TR(0x58beac);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58beaf:{NFSU2_TR(0x58beaf);
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
B58beb1:{NFSU2_TR(0x58beb1);
if(r1(R+518)){{goto L58bee2;}}
}
B58beb3:L58beb3:{c.instructions+=3;NFSU2_TR(0x58beb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58beb6:{NFSU2_TR(0x58beb6);
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
B58beb8:{NFSU2_TR(0x58beb8);
if(r1(R+518)){{goto L58bec4;}}
}
B58beba:L58beba:{c.instructions+=4;NFSU2_TR(0x58beba);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58bebd:{NFSU2_TR(0x58bebd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58bebe:{NFSU2_TR(0x58bebe);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58bebf:{NFSU2_TR(0x58bebf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58bec1ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B58bec1:L58bec1:{c.instructions+=1;NFSU2_TR(0x58bec1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58bec4:L58bec4:{c.instructions+=3;NFSU2_TR(0x58bec4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B58bec7:{NFSU2_TR(0x58bec7);
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
B58bec9:{NFSU2_TR(0x58bec9);
if(r1(R+518)){{goto L58bedb;}}
}
B58becb:L58becb:{c.instructions+=2;NFSU2_TR(0x58becb);
__builtin_memmove((R+4),(R+24),4);
}
B58becd:{NFSU2_TR(0x58becd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58bed2ull));
TAIL_STATIC(0x584140u,584);
}
B58bed2:L58bed2:{c.instructions+=2;NFSU2_TR(0x58bed2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58bed3:{NFSU2_TR(0x58bed3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58bed8ull));
TAIL_STATIC(0x575630u,575);
}
B58bed8:L58bed8:{c.instructions+=1;NFSU2_TR(0x58bed8);
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
B58bedb:L58bedb:{c.instructions+=1;NFSU2_TR(0x58bedb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B58bee2:L58bee2:{c.instructions+=4;NFSU2_TR(0x58bee2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58bee3:{NFSU2_TR(0x58bee3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58bee4:{NFSU2_TR(0x58bee4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58bee5:{NFSU2_TR(0x58bee5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58bef0:L58bef0:{c.instructions+=4;NFSU2_TR(0x58bef0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58bef1:{NFSU2_TR(0x58bef1);
__builtin_memmove((R+0),gp(0x8669f8),1);
}
B58bef6:{NFSU2_TR(0x58bef6);
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
B58bef8:{NFSU2_TR(0x58bef8);
if(r1(R+518)){{goto L58bfac;}}
}
B58befe:L58befe:{c.instructions+=2;NFSU2_TR(0x58befe);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58beff:{NFSU2_TR(0x58beff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58bf04ull));
TAIL_STATIC(0x587830u,587);
}
B58bf04:L58bf04:{c.instructions+=6;NFSU2_TR(0x58bf04);
{u32 ea_=u32(u32(7999048u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B58bf0a:{NFSU2_TR(0x58bf0a);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B58bf10:{NFSU2_TR(0x58bf10);
__builtin_memmove((R+24),gp(0x8651ac),4);
}
B58bf16:{NFSU2_TR(0x58bf16);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B58bf18:{NFSU2_TR(0x58bf18);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B58bf1b:{NFSU2_TR(0x58bf1b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58bf6d;}}
}
B58bf1d:L58bf1d:{c.instructions+=7;NFSU2_TR(0x58bf1d);
__builtin_memmove((R+4),gp(0x869238),4);
}
B58bf23:{NFSU2_TR(0x58bf23);
__builtin_memmove((R+0),(R+24),4);
}
B58bf25:{NFSU2_TR(0x58bf25);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B58bf27:{NFSU2_TR(0x58bf27);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58bf2b:{NFSU2_TR(0x58bf2b);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B58bf2f:{NFSU2_TR(0x58bf2f);
{u32 ea_=u32(u32(7884072u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B58bf35:{NFSU2_TR(0x58bf35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58bf3aull));
TAIL_STATIC(0x75bed4u,75b);
}
B58bf3a:L58bf3a:{c.instructions+=8;NFSU2_TR(0x58bf3a);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58bf3e:{NFSU2_TR(0x58bf3e);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B58bf42:{NFSU2_TR(0x58bf42);
{u32 ea_=u32(u32(7882064u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B58bf48:{NFSU2_TR(0x58bf48);
{u32 ea_=u32(u32(7999048u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B58bf4e:{NFSU2_TR(0x58bf4e);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B58bf50:{NFSU2_TR(0x58bf50);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B58bf52:{NFSU2_TR(0x58bf52);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B58bf55:{NFSU2_TR(0x58bf55);
if(r1(R+514)){{goto L58bf6d;}}
}
B58bf57:L58bf57:{c.instructions+=2;NFSU2_TR(0x58bf57);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58bf59:{NFSU2_TR(0x58bf59);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58bf5eull));
TAIL_STATIC(0x587d50u,587);
}
B58bf5e:L58bf5e:{c.instructions+=3;NFSU2_TR(0x58bf5e);
__builtin_memmove((R+24),gp(0x8651ac),4);
}
B58bf64:{NFSU2_TR(0x58bf64);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B58bf67:{NFSU2_TR(0x58bf67);
__builtin_memmove(gp(0x869238),(R+24),4);
}
B58bf6d:L58bf6d:{c.instructions+=5;NFSU2_TR(0x58bf6d);
w4(R+24,u32(u32(r4(R+24))-u32(m4(0x869468))));
}
B58bf73:{NFSU2_TR(0x58bf73);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58bf77:{NFSU2_TR(0x58bf77);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B58bf7b:{NFSU2_TR(0x58bf7b);
{u32 ea_=u32(u32(7884072u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B58bf81:{NFSU2_TR(0x58bf81);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58bf86ull));
TAIL_STATIC(0x75bed4u,75b);
}
B58bf86:L58bf86:{c.instructions+=9;NFSU2_TR(0x58bf86);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58bf8a:{NFSU2_TR(0x58bf8a);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B58bf8e:{NFSU2_TR(0x58bf8e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58bf8f:{NFSU2_TR(0x58bf8f);
{u32 ea_=u32(u32(7999052u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B58bf95:{NFSU2_TR(0x58bf95);
{u32 ea_=u32(u32(7882064u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B58bf9b:{NFSU2_TR(0x58bf9b);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B58bf9d:{NFSU2_TR(0x58bf9d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B58bf9f:{NFSU2_TR(0x58bf9f);
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
B58bfa2:{NFSU2_TR(0x58bfa2);
if(r1(R+514)){{goto L58bfac;}}
}
B58bfa4:L58bfa4:{c.instructions+=2;NFSU2_TR(0x58bfa4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B58bfa7:{NFSU2_TR(0x58bfa7);
TAIL_STATIC(0x589080u,589);
}
B58bfac:L58bfac:{c.instructions+=2;NFSU2_TR(0x58bfac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B58bfad:{NFSU2_TR(0x58bfad);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58bfb0:L58bfb0:{c.instructions+=9;NFSU2_TR(0x58bfb0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58bfb1:{NFSU2_TR(0x58bfb1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58bfb2:{NFSU2_TR(0x58bfb2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B58bfb6:{NFSU2_TR(0x58bfb6);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58bfb8:{NFSU2_TR(0x58bfb8);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B58bfbc:{NFSU2_TR(0x58bfbc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58bfbd:{NFSU2_TR(0x58bfbd);
__builtin_memmove((R+4),(R+24),4);
}
B58bfbf:{NFSU2_TR(0x58bfbf);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B58bfc7:{NFSU2_TR(0x58bfc7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58bfccull));
TAIL_STATIC(0x581d90u,581);
}
B58bfcc:L58bfcc:{c.instructions+=4;NFSU2_TR(0x58bfcc);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58bfd0:{NFSU2_TR(0x58bfd0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58bfd1:{NFSU2_TR(0x58bfd1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58bfd2:{NFSU2_TR(0x58bfd2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58bfd7ull));
TAIL_STATIC(0x5890e0u,589);
}
B58bfd7:L58bfd7:{c.instructions+=4;NFSU2_TR(0x58bfd7);
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
B58bfda:{NFSU2_TR(0x58bfda);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58bfdb:{NFSU2_TR(0x58bfdb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B58bfdc:{NFSU2_TR(0x58bfdc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58bfe0:L58bfe0:{c.instructions+=11;NFSU2_TR(0x58bfe0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x410ull))));
}
B58bfe6:{NFSU2_TR(0x58bfe6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58bfe7:{NFSU2_TR(0x58bfe7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58bfe8:{NFSU2_TR(0x58bfe8);
u8 U[8];
w4(U+0,u32(u32(u32(0x41cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B58bfef:{NFSU2_TR(0x58bfef);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58bff1:{NFSU2_TR(0x58bff1);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B58bff5:{NFSU2_TR(0x58bff5);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B58bff7:{NFSU2_TR(0x58bff7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58bff8:{NFSU2_TR(0x58bff8);
__builtin_memmove((R+4),(R+24),4);
}
B58bffa:{NFSU2_TR(0x58bffa);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58bffe:{NFSU2_TR(0x58bffe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58c003ull));
TAIL_STATIC(0x581d90u,581);
}
XIT:NFSU2_TR_EXIT(0x58b,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
