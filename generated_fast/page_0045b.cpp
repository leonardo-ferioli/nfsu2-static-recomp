#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_457(u8* __restrict R,Cpu& c);
u32 body_458(u8* __restrict R,Cpu& c);
u32 body_45a(u8* __restrict R,Cpu& c);
u32 body_45c(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_579(u8* __restrict R,Cpu& c);
u32 body_722(u8* __restrict R,Cpu& c);
u32 body_735(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x45b,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x45b,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_45b(u8* __restrict R,Cpu& c);
u32 page_45b(Cpu& c){return body_45b(c.regs.data(),c);}
__attribute__((noinline)) u32 body_45b(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x45b001:goto L45b001;
case 0x45b003:c.instructions+=1;goto B45b003;
case 0x45b008:goto L45b008;
case 0x45b00e:c.instructions+=3;goto B45b00e;
case 0x45b011:c.instructions+=2;goto B45b011;
case 0x45b013:c.instructions+=1;goto B45b013;
case 0x45b015:goto L45b015;
case 0x45b01b:c.instructions+=5;goto B45b01b;
case 0x45b01e:c.instructions+=4;goto B45b01e;
case 0x45b024:c.instructions+=3;goto B45b024;
case 0x45b025:c.instructions+=2;goto B45b025;
case 0x45b026:c.instructions+=1;goto B45b026;
case 0x45b02b:goto L45b02b;
case 0x45b02e:c.instructions+=1;goto B45b02e;
case 0x45b030:goto L45b030;
case 0x45b033:c.instructions+=5;goto B45b033;
case 0x45b038:c.instructions+=4;goto B45b038;
case 0x45b03a:c.instructions+=3;goto B45b03a;
case 0x45b03c:c.instructions+=2;goto B45b03c;
case 0x45b040:c.instructions+=1;goto B45b040;
case 0x45b042:goto L45b042;
case 0x45b045:c.instructions+=11;goto B45b045;
case 0x45b048:c.instructions+=10;goto B45b048;
case 0x45b04b:c.instructions+=9;goto B45b04b;
case 0x45b04c:c.instructions+=8;goto B45b04c;
case 0x45b052:c.instructions+=7;goto B45b052;
case 0x45b056:c.instructions+=6;goto B45b056;
case 0x45b057:c.instructions+=5;goto B45b057;
case 0x45b05b:c.instructions+=4;goto B45b05b;
case 0x45b05c:c.instructions+=3;goto B45b05c;
case 0x45b062:c.instructions+=2;goto B45b062;
case 0x45b063:c.instructions+=1;goto B45b063;
case 0x45b068:goto L45b068;
case 0x45b06d:c.instructions+=4;goto B45b06d;
case 0x45b06e:c.instructions+=3;goto B45b06e;
case 0x45b070:c.instructions+=2;goto B45b070;
case 0x45b074:c.instructions+=1;goto B45b074;
case 0x45b076:goto L45b076;
case 0x45b07c:c.instructions+=6;goto B45b07c;
case 0x45b07d:c.instructions+=5;goto B45b07d;
case 0x45b080:c.instructions+=4;goto B45b080;
case 0x45b081:c.instructions+=3;goto B45b081;
case 0x45b084:c.instructions+=2;goto B45b084;
case 0x45b085:c.instructions+=1;goto B45b085;
case 0x45b08a:goto L45b08a;
case 0x45b090:c.instructions+=2;goto B45b090;
case 0x45b091:c.instructions+=1;goto B45b091;
case 0x45b096:goto L45b096;
case 0x45b099:c.instructions+=6;goto B45b099;
case 0x45b09a:c.instructions+=5;goto B45b09a;
case 0x45b09b:c.instructions+=4;goto B45b09b;
case 0x45b0a5:c.instructions+=3;goto B45b0a5;
case 0x45b0a6:c.instructions+=2;goto B45b0a6;
case 0x45b0a9:c.instructions+=1;goto B45b0a9;
case 0x45b0b0:goto L45b0b0;
case 0x45b0b5:c.instructions+=1;goto B45b0b5;
case 0x45b0c0:goto L45b0c0;
case 0x45b0c4:c.instructions+=3;goto B45b0c4;
case 0x45b0c7:c.instructions+=2;goto B45b0c7;
case 0x45b0ca:c.instructions+=1;goto B45b0ca;
case 0x45b0cc:goto L45b0cc;
case 0x45b0cd:c.instructions+=4;goto B45b0cd;
case 0x45b0d1:c.instructions+=3;goto B45b0d1;
case 0x45b0d6:c.instructions+=2;goto B45b0d6;
case 0x45b0d7:c.instructions+=1;goto B45b0d7;
case 0x45b0dc:goto L45b0dc;
case 0x45b0df:goto L45b0df;
case 0x45b0e3:c.instructions+=2;goto B45b0e3;
case 0x45b0e4:c.instructions+=1;goto B45b0e4;
case 0x45b0e9:goto L45b0e9;
case 0x45b0ec:c.instructions+=2;goto B45b0ec;
case 0x45b0ef:c.instructions+=1;goto B45b0ef;
case 0x45b0f2:goto L45b0f2;
case 0x45b0f5:c.instructions+=1;goto B45b0f5;
case 0x45b0f7:goto L45b0f7;
case 0x45b0fc:c.instructions+=1;goto B45b0fc;
case 0x45b101:goto L45b101;
case 0x45b104:c.instructions+=2;goto B45b104;
case 0x45b107:c.instructions+=1;goto B45b107;
case 0x45b10a:goto L45b10a;
case 0x45b10d:c.instructions+=1;goto B45b10d;
case 0x45b10f:goto L45b10f;
case 0x45b114:c.instructions+=1;goto B45b114;
case 0x45b119:goto L45b119;
case 0x45b11c:c.instructions+=2;goto B45b11c;
case 0x45b11f:c.instructions+=1;goto B45b11f;
case 0x45b122:goto L45b122;
case 0x45b125:c.instructions+=1;goto B45b125;
case 0x45b127:goto L45b127;
case 0x45b12c:c.instructions+=1;goto B45b12c;
case 0x45b131:goto L45b131;
case 0x45b134:c.instructions+=2;goto B45b134;
case 0x45b137:c.instructions+=1;goto B45b137;
case 0x45b13a:goto L45b13a;
case 0x45b13d:c.instructions+=1;goto B45b13d;
case 0x45b13f:goto L45b13f;
case 0x45b144:c.instructions+=1;goto B45b144;
case 0x45b149:goto L45b149;
case 0x45b14c:c.instructions+=2;goto B45b14c;
case 0x45b14f:c.instructions+=1;goto B45b14f;
case 0x45b160:goto L45b160;
case 0x45b164:c.instructions+=7;goto B45b164;
case 0x45b167:c.instructions+=6;goto B45b167;
case 0x45b168:c.instructions+=5;goto B45b168;
case 0x45b169:c.instructions+=4;goto B45b169;
case 0x45b16a:c.instructions+=3;goto B45b16a;
case 0x45b16b:c.instructions+=2;goto B45b16b;
case 0x45b16d:c.instructions+=1;goto B45b16d;
case 0x45b16f:goto L45b16f;
case 0x45b170:c.instructions+=1;goto B45b170;
case 0x45b172:goto L45b172;
case 0x45b174:goto L45b174;
case 0x45b177:c.instructions+=3;goto B45b177;
case 0x45b178:c.instructions+=2;goto B45b178;
case 0x45b17a:c.instructions+=1;goto B45b17a;
case 0x45b17f:goto L45b17f;
case 0x45b186:c.instructions+=3;goto B45b186;
case 0x45b188:c.instructions+=2;goto B45b188;
case 0x45b18b:c.instructions+=1;goto B45b18b;
case 0x45b18d:goto L45b18d;
case 0x45b18e:c.instructions+=4;goto B45b18e;
case 0x45b18f:c.instructions+=3;goto B45b18f;
case 0x45b190:c.instructions+=2;goto B45b190;
case 0x45b193:c.instructions+=1;goto B45b193;
case 0x45b196:goto L45b196;
case 0x45b19b:c.instructions+=2;goto B45b19b;
case 0x45b1a0:c.instructions+=1;goto B45b1a0;
case 0x45b1a5:goto L45b1a5;
case 0x45b1a8:c.instructions+=2;goto B45b1a8;
case 0x45b1a9:c.instructions+=1;goto B45b1a9;
case 0x45b1ab:goto L45b1ab;
case 0x45b1b0:c.instructions+=3;goto B45b1b0;
case 0x45b1b4:c.instructions+=2;goto B45b1b4;
case 0x45b1b5:c.instructions+=1;goto B45b1b5;
case 0x45b1b7:goto L45b1b7;
case 0x45b1bc:c.instructions+=2;goto B45b1bc;
case 0x45b1c0:c.instructions+=1;goto B45b1c0;
case 0x45b1c1:goto L45b1c1;
case 0x45b1c6:goto L45b1c6;
case 0x45b1ca:c.instructions+=3;goto B45b1ca;
case 0x45b1cd:c.instructions+=2;goto B45b1cd;
case 0x45b1ce:c.instructions+=1;goto B45b1ce;
case 0x45b1d3:goto L45b1d3;
case 0x45b1d6:c.instructions+=5;goto B45b1d6;
case 0x45b1d8:c.instructions+=4;goto B45b1d8;
case 0x45b1d9:c.instructions+=3;goto B45b1d9;
case 0x45b1dc:c.instructions+=2;goto B45b1dc;
case 0x45b1dd:c.instructions+=1;goto B45b1dd;
case 0x45b1df:goto L45b1df;
case 0x45b1e0:c.instructions+=4;goto B45b1e0;
case 0x45b1e1:c.instructions+=3;goto B45b1e1;
case 0x45b1e2:c.instructions+=2;goto B45b1e2;
case 0x45b1e5:c.instructions+=1;goto B45b1e5;
case 0x45b1f0:goto L45b1f0;
case 0x45b1f2:c.instructions+=13;goto B45b1f2;
case 0x45b1f4:c.instructions+=12;goto B45b1f4;
case 0x45b1fa:c.instructions+=11;goto B45b1fa;
case 0x45b1fd:c.instructions+=10;goto B45b1fd;
case 0x45b200:c.instructions+=9;goto B45b200;
case 0x45b203:c.instructions+=8;goto B45b203;
case 0x45b207:c.instructions+=7;goto B45b207;
case 0x45b208:c.instructions+=6;goto B45b208;
case 0x45b20f:c.instructions+=5;goto B45b20f;
case 0x45b216:c.instructions+=4;goto B45b216;
case 0x45b219:c.instructions+=3;goto B45b219;
case 0x45b21b:c.instructions+=2;goto B45b21b;
case 0x45b21e:c.instructions+=1;goto B45b21e;
case 0x45b223:goto L45b223;
case 0x45b225:goto L45b225;
case 0x45b227:c.instructions+=2;goto B45b227;
case 0x45b228:c.instructions+=1;goto B45b228;
case 0x45b230:goto L45b230;
case 0x45b231:c.instructions+=6;goto B45b231;
case 0x45b232:c.instructions+=5;goto B45b232;
case 0x45b234:c.instructions+=4;goto B45b234;
case 0x45b235:c.instructions+=3;goto B45b235;
case 0x45b238:c.instructions+=2;goto B45b238;
case 0x45b23d:c.instructions+=1;goto B45b23d;
case 0x45b240:goto L45b240;
case 0x45b242:c.instructions+=2;goto B45b242;
case 0x45b244:c.instructions+=1;goto B45b244;
case 0x45b246:goto L45b246;
case 0x45b248:c.instructions+=2;goto B45b248;
case 0x45b24a:c.instructions+=1;goto B45b24a;
case 0x45b24c:goto L45b24c;
case 0x45b252:goto L45b252;
case 0x45b255:c.instructions+=2;goto B45b255;
case 0x45b256:c.instructions+=1;goto B45b256;
case 0x45b258:goto L45b258;
case 0x45b259:c.instructions+=4;goto B45b259;
case 0x45b25a:c.instructions+=3;goto B45b25a;
case 0x45b25e:c.instructions+=2;goto B45b25e;
case 0x45b25f:c.instructions+=1;goto B45b25f;
case 0x45b260:goto L45b260;
case 0x45b262:c.instructions+=8;goto B45b262;
case 0x45b266:c.instructions+=7;goto B45b266;
case 0x45b269:c.instructions+=6;goto B45b269;
case 0x45b26b:c.instructions+=5;goto B45b26b;
case 0x45b271:c.instructions+=4;goto B45b271;
case 0x45b274:c.instructions+=3;goto B45b274;
case 0x45b277:c.instructions+=2;goto B45b277;
case 0x45b27a:c.instructions+=1;goto B45b27a;
case 0x45b280:goto L45b280;
case 0x45b282:c.instructions+=10;goto B45b282;
case 0x45b287:c.instructions+=9;goto B45b287;
case 0x45b28d:c.instructions+=8;goto B45b28d;
case 0x45b28e:c.instructions+=7;goto B45b28e;
case 0x45b295:c.instructions+=6;goto B45b295;
case 0x45b296:c.instructions+=5;goto B45b296;
case 0x45b297:c.instructions+=4;goto B45b297;
case 0x45b299:c.instructions+=3;goto B45b299;
case 0x45b29c:c.instructions+=2;goto B45b29c;
case 0x45b29e:c.instructions+=1;goto B45b29e;
case 0x45b2a4:goto L45b2a4;
case 0x45b2a7:c.instructions+=2;goto B45b2a7;
case 0x45b2a9:c.instructions+=1;goto B45b2a9;
case 0x45b2af:goto L45b2af;
case 0x45b2b0:c.instructions+=5;goto B45b2b0;
case 0x45b2b1:c.instructions+=4;goto B45b2b1;
case 0x45b2b2:c.instructions+=3;goto B45b2b2;
case 0x45b2b5:c.instructions+=2;goto B45b2b5;
case 0x45b2ba:c.instructions+=1;goto B45b2ba;
case 0x45b2bc:goto L45b2bc;
case 0x45b2c0:c.instructions+=2;goto B45b2c0;
case 0x45b2c2:c.instructions+=1;goto B45b2c2;
case 0x45b2c4:goto L45b2c4;
case 0x45b2c6:goto L45b2c6;
case 0x45b2c7:c.instructions+=1;goto B45b2c7;
case 0x45b2cc:goto L45b2cc;
case 0x45b2d0:c.instructions+=4;goto B45b2d0;
case 0x45b2d3:c.instructions+=3;goto B45b2d3;
case 0x45b2d5:c.instructions+=2;goto B45b2d5;
case 0x45b2d8:c.instructions+=1;goto B45b2d8;
case 0x45b2da:goto L45b2da;
case 0x45b2de:c.instructions+=1;goto B45b2de;
case 0x45b2e1:goto L45b2e1;
case 0x45b2e5:c.instructions+=6;goto B45b2e5;
case 0x45b2e8:c.instructions+=5;goto B45b2e8;
case 0x45b2ec:c.instructions+=4;goto B45b2ec;
case 0x45b2ef:c.instructions+=3;goto B45b2ef;
case 0x45b2f2:c.instructions+=2;goto B45b2f2;
case 0x45b2f7:c.instructions+=1;goto B45b2f7;
case 0x45b2f9:goto L45b2f9;
case 0x45b2fd:c.instructions+=2;goto B45b2fd;
case 0x45b2ff:c.instructions+=1;goto B45b2ff;
case 0x45b301:goto L45b301;
case 0x45b303:goto L45b303;
case 0x45b304:c.instructions+=1;goto B45b304;
case 0x45b309:goto L45b309;
case 0x45b30d:c.instructions+=4;goto B45b30d;
case 0x45b310:c.instructions+=3;goto B45b310;
case 0x45b312:c.instructions+=2;goto B45b312;
case 0x45b315:c.instructions+=1;goto B45b315;
case 0x45b317:goto L45b317;
case 0x45b31b:c.instructions+=1;goto B45b31b;
case 0x45b31e:goto L45b31e;
case 0x45b321:c.instructions+=8;goto B45b321;
case 0x45b326:c.instructions+=7;goto B45b326;
case 0x45b328:c.instructions+=6;goto B45b328;
case 0x45b32c:c.instructions+=5;goto B45b32c;
case 0x45b330:c.instructions+=4;goto B45b330;
case 0x45b336:c.instructions+=3;goto B45b336;
case 0x45b339:c.instructions+=2;goto B45b339;
case 0x45b33b:c.instructions+=1;goto B45b33b;
case 0x45b340:goto L45b340;
case 0x45b342:c.instructions+=6;goto B45b342;
case 0x45b345:c.instructions+=5;goto B45b345;
case 0x45b347:c.instructions+=4;goto B45b347;
case 0x45b34a:c.instructions+=3;goto B45b34a;
case 0x45b34d:c.instructions+=2;goto B45b34d;
case 0x45b34f:c.instructions+=1;goto B45b34f;
case 0x45b351:goto L45b351;
case 0x45b353:c.instructions+=1;goto B45b353;
case 0x45b358:goto L45b358;
case 0x45b35b:c.instructions+=4;goto B45b35b;
case 0x45b35f:c.instructions+=3;goto B45b35f;
case 0x45b361:c.instructions+=2;goto B45b361;
case 0x45b369:c.instructions+=1;goto B45b369;
case 0x45b36b:goto L45b36b;
case 0x45b36e:c.instructions+=6;goto B45b36e;
case 0x45b372:c.instructions+=5;goto B45b372;
case 0x45b373:c.instructions+=4;goto B45b373;
case 0x45b377:c.instructions+=3;goto B45b377;
case 0x45b37e:c.instructions+=2;goto B45b37e;
case 0x45b384:c.instructions+=1;goto B45b384;
case 0x45b386:goto L45b386;
case 0x45b387:c.instructions+=2;goto B45b387;
case 0x45b38d:c.instructions+=1;goto B45b38d;
case 0x45b38e:goto L45b38e;
case 0x45b38f:c.instructions+=8;goto B45b38f;
case 0x45b392:c.instructions+=7;goto B45b392;
case 0x45b396:c.instructions+=6;goto B45b396;
case 0x45b397:c.instructions+=5;goto B45b397;
case 0x45b398:c.instructions+=4;goto B45b398;
case 0x45b399:c.instructions+=3;goto B45b399;
case 0x45b39a:c.instructions+=2;goto B45b39a;
case 0x45b39c:c.instructions+=1;goto B45b39c;
case 0x45b3a1:goto L45b3a1;
case 0x45b3a3:goto L45b3a3;
case 0x45b3a5:goto L45b3a5;
case 0x45b3a8:c.instructions+=5;goto B45b3a8;
case 0x45b3aa:c.instructions+=4;goto B45b3aa;
case 0x45b3ac:c.instructions+=3;goto B45b3ac;
case 0x45b3b4:c.instructions+=2;goto B45b3b4;
case 0x45b3bc:c.instructions+=1;goto B45b3bc;
case 0x45b3be:goto L45b3be;
case 0x45b3c2:c.instructions+=3;goto B45b3c2;
case 0x45b3c3:c.instructions+=2;goto B45b3c3;
case 0x45b3c5:c.instructions+=1;goto B45b3c5;
case 0x45b3ca:goto L45b3ca;
case 0x45b3cd:c.instructions+=2;goto B45b3cd;
case 0x45b3d1:c.instructions+=1;goto B45b3d1;
case 0x45b3d3:goto L45b3d3;
case 0x45b3d5:c.instructions+=1;goto B45b3d5;
case 0x45b3da:goto L45b3da;
case 0x45b3dd:c.instructions+=4;goto B45b3dd;
case 0x45b3e1:c.instructions+=3;goto B45b3e1;
case 0x45b3e3:c.instructions+=2;goto B45b3e3;
case 0x45b3eb:c.instructions+=1;goto B45b3eb;
case 0x45b3ed:goto L45b3ed;
case 0x45b3f0:c.instructions+=6;goto B45b3f0;
case 0x45b3f4:c.instructions+=5;goto B45b3f4;
case 0x45b3f5:c.instructions+=4;goto B45b3f5;
case 0x45b3f9:c.instructions+=3;goto B45b3f9;
case 0x45b400:c.instructions+=2;goto B45b400;
case 0x45b406:c.instructions+=1;goto B45b406;
case 0x45b408:goto L45b408;
case 0x45b409:c.instructions+=2;goto B45b409;
case 0x45b40f:c.instructions+=1;goto B45b40f;
case 0x45b410:goto L45b410;
case 0x45b411:c.instructions+=8;goto B45b411;
case 0x45b414:c.instructions+=7;goto B45b414;
case 0x45b418:c.instructions+=6;goto B45b418;
case 0x45b419:c.instructions+=5;goto B45b419;
case 0x45b41a:c.instructions+=4;goto B45b41a;
case 0x45b41b:c.instructions+=3;goto B45b41b;
case 0x45b41c:c.instructions+=2;goto B45b41c;
case 0x45b41e:c.instructions+=1;goto B45b41e;
case 0x45b423:goto L45b423;
case 0x45b425:goto L45b425;
case 0x45b427:goto L45b427;
case 0x45b42a:c.instructions+=5;goto B45b42a;
case 0x45b42c:c.instructions+=4;goto B45b42c;
case 0x45b42e:c.instructions+=3;goto B45b42e;
case 0x45b436:c.instructions+=2;goto B45b436;
case 0x45b43e:c.instructions+=1;goto B45b43e;
case 0x45b440:goto L45b440;
case 0x45b444:c.instructions+=3;goto B45b444;
case 0x45b445:c.instructions+=2;goto B45b445;
case 0x45b447:c.instructions+=1;goto B45b447;
case 0x45b44c:goto L45b44c;
case 0x45b44d:c.instructions+=3;goto B45b44d;
case 0x45b44e:c.instructions+=2;goto B45b44e;
case 0x45b452:c.instructions+=1;goto B45b452;
case 0x45b453:goto L45b453;
case 0x45b457:c.instructions+=4;goto B45b457;
case 0x45b458:c.instructions+=3;goto B45b458;
case 0x45b45f:c.instructions+=2;goto B45b45f;
case 0x45b462:c.instructions+=1;goto B45b462;
case 0x45b470:goto L45b470;
case 0x45b472:c.instructions+=2;goto B45b472;
case 0x45b478:c.instructions+=1;goto B45b478;
case 0x45b480:goto L45b480;
case 0x45b485:c.instructions+=3;goto B45b485;
case 0x45b488:c.instructions+=2;goto B45b488;
case 0x45b48a:c.instructions+=1;goto B45b48a;
case 0x45b48f:goto L45b48f;
case 0x45b490:goto L45b490;
case 0x45b495:c.instructions+=2;goto B45b495;
case 0x45b497:c.instructions+=1;goto B45b497;
case 0x45b499:goto L45b499;
case 0x45b49c:c.instructions+=4;goto B45b49c;
case 0x45b49f:c.instructions+=3;goto B45b49f;
case 0x45b4a2:c.instructions+=2;goto B45b4a2;
case 0x45b4a3:c.instructions+=1;goto B45b4a3;
case 0x45b4a8:goto L45b4a8;
case 0x45b4a9:goto L45b4a9;
case 0x45b4b0:goto L45b4b0;
case 0x45b4b3:c.instructions+=1;goto B45b4b3;
case 0x45b4c0:goto L45b4c0;
case 0x45b4c4:c.instructions+=7;goto B45b4c4;
case 0x45b4c5:c.instructions+=6;goto B45b4c5;
case 0x45b4c7:c.instructions+=5;goto B45b4c7;
case 0x45b4c8:c.instructions+=4;goto B45b4c8;
case 0x45b4cb:c.instructions+=3;goto B45b4cb;
case 0x45b4cc:c.instructions+=2;goto B45b4cc;
case 0x45b4ce:c.instructions+=1;goto B45b4ce;
case 0x45b4d3:goto L45b4d3;
case 0x45b4d5:c.instructions+=2;goto B45b4d5;
case 0x45b4d7:c.instructions+=1;goto B45b4d7;
case 0x45b4da:goto L45b4da;
case 0x45b4dd:c.instructions+=5;goto B45b4dd;
case 0x45b4e0:c.instructions+=4;goto B45b4e0;
case 0x45b4e3:c.instructions+=3;goto B45b4e3;
case 0x45b4e5:c.instructions+=2;goto B45b4e5;
case 0x45b4e8:c.instructions+=1;goto B45b4e8;
case 0x45b4ea:goto L45b4ea;
case 0x45b4ed:c.instructions+=6;goto B45b4ed;
case 0x45b4f0:c.instructions+=5;goto B45b4f0;
case 0x45b4f2:c.instructions+=4;goto B45b4f2;
case 0x45b4f4:c.instructions+=3;goto B45b4f4;
case 0x45b4f6:c.instructions+=2;goto B45b4f6;
case 0x45b4f9:c.instructions+=1;goto B45b4f9;
case 0x45b4fb:goto L45b4fb;
case 0x45b4fd:c.instructions+=1;goto B45b4fd;
case 0x45b501:goto L45b501;
case 0x45b504:c.instructions+=4;goto B45b504;
case 0x45b505:c.instructions+=3;goto B45b505;
case 0x45b508:c.instructions+=2;goto B45b508;
case 0x45b509:c.instructions+=1;goto B45b509;
case 0x45b50c:goto L45b50c;
case 0x45b50e:c.instructions+=6;goto B45b50e;
case 0x45b511:c.instructions+=5;goto B45b511;
case 0x45b513:c.instructions+=4;goto B45b513;
case 0x45b515:c.instructions+=3;goto B45b515;
case 0x45b517:c.instructions+=2;goto B45b517;
case 0x45b51a:c.instructions+=1;goto B45b51a;
case 0x45b51c:goto L45b51c;
case 0x45b51f:c.instructions+=6;goto B45b51f;
case 0x45b523:c.instructions+=5;goto B45b523;
case 0x45b526:c.instructions+=4;goto B45b526;
case 0x45b52c:c.instructions+=3;goto B45b52c;
case 0x45b52e:c.instructions+=2;goto B45b52e;
case 0x45b531:c.instructions+=1;goto B45b531;
case 0x45b533:goto L45b533;
case 0x45b536:c.instructions+=5;goto B45b536;
case 0x45b537:c.instructions+=4;goto B45b537;
case 0x45b53b:c.instructions+=3;goto B45b53b;
case 0x45b53e:c.instructions+=2;goto B45b53e;
case 0x45b53f:c.instructions+=1;goto B45b53f;
case 0x45b542:goto L45b542;
case 0x45b545:c.instructions+=4;goto B45b545;
case 0x45b546:c.instructions+=3;goto B45b546;
case 0x45b549:c.instructions+=2;goto B45b549;
case 0x45b54a:c.instructions+=1;goto B45b54a;
case 0x45b54d:goto L45b54d;
case 0x45b54f:c.instructions+=5;goto B45b54f;
case 0x45b552:c.instructions+=4;goto B45b552;
case 0x45b554:c.instructions+=3;goto B45b554;
case 0x45b556:c.instructions+=2;goto B45b556;
case 0x45b559:c.instructions+=1;goto B45b559;
case 0x45b55b:goto L45b55b;
case 0x45b55e:c.instructions+=6;goto B45b55e;
case 0x45b562:c.instructions+=5;goto B45b562;
case 0x45b565:c.instructions+=4;goto B45b565;
case 0x45b56b:c.instructions+=3;goto B45b56b;
case 0x45b56d:c.instructions+=2;goto B45b56d;
case 0x45b570:c.instructions+=1;goto B45b570;
case 0x45b572:goto L45b572;
case 0x45b575:c.instructions+=2;goto B45b575;
case 0x45b579:c.instructions+=1;goto B45b579;
case 0x45b57c:goto L45b57c;
case 0x45b57d:c.instructions+=2;goto B45b57d;
case 0x45b57e:c.instructions+=1;goto B45b57e;
case 0x45b590:goto L45b590;
case 0x45b592:c.instructions+=16;goto B45b592;
case 0x45b597:c.instructions+=15;goto B45b597;
case 0x45b59d:c.instructions+=14;goto B45b59d;
case 0x45b59e:c.instructions+=13;goto B45b59e;
case 0x45b5a5:c.instructions+=12;goto B45b5a5;
case 0x45b5a6:c.instructions+=11;goto B45b5a6;
case 0x45b5a7:c.instructions+=10;goto B45b5a7;
case 0x45b5a8:c.instructions+=9;goto B45b5a8;
case 0x45b5a9:c.instructions+=8;goto B45b5a9;
case 0x45b5ab:c.instructions+=7;goto B45b5ab;
case 0x45b5ac:c.instructions+=6;goto B45b5ac;
case 0x45b5b0:c.instructions+=5;goto B45b5b0;
case 0x45b5b2:c.instructions+=4;goto B45b5b2;
case 0x45b5b5:c.instructions+=3;goto B45b5b5;
case 0x45b5b9:c.instructions+=2;goto B45b5b9;
case 0x45b5bf:c.instructions+=1;goto B45b5bf;
case 0x45b5c4:goto L45b5c4;
case 0x45b5c9:c.instructions+=13;goto B45b5c9;
case 0x45b5ce:c.instructions+=12;goto B45b5ce;
case 0x45b5d1:c.instructions+=11;goto B45b5d1;
case 0x45b5d4:c.instructions+=10;goto B45b5d4;
case 0x45b5d7:c.instructions+=9;goto B45b5d7;
case 0x45b5da:c.instructions+=8;goto B45b5da;
case 0x45b5dd:c.instructions+=7;goto B45b5dd;
case 0x45b5e0:c.instructions+=6;goto B45b5e0;
case 0x45b5e3:c.instructions+=5;goto B45b5e3;
case 0x45b5e6:c.instructions+=4;goto B45b5e6;
case 0x45b5e9:c.instructions+=3;goto B45b5e9;
case 0x45b5ec:c.instructions+=2;goto B45b5ec;
case 0x45b5f1:c.instructions+=1;goto B45b5f1;
case 0x45b5f6:goto L45b5f6;
case 0x45b5f9:c.instructions+=11;goto B45b5f9;
case 0x45b5fc:c.instructions+=10;goto B45b5fc;
case 0x45b5ff:c.instructions+=9;goto B45b5ff;
case 0x45b602:c.instructions+=8;goto B45b602;
case 0x45b608:c.instructions+=7;goto B45b608;
case 0x45b60e:c.instructions+=6;goto B45b60e;
case 0x45b614:c.instructions+=5;goto B45b614;
case 0x45b617:c.instructions+=4;goto B45b617;
case 0x45b61d:c.instructions+=3;goto B45b61d;
case 0x45b623:c.instructions+=2;goto B45b623;
case 0x45b628:c.instructions+=1;goto B45b628;
case 0x45b62d:goto L45b62d;
case 0x45b633:c.instructions+=11;goto B45b633;
case 0x45b639:c.instructions+=10;goto B45b639;
case 0x45b63f:c.instructions+=9;goto B45b63f;
case 0x45b645:c.instructions+=8;goto B45b645;
case 0x45b64b:c.instructions+=7;goto B45b64b;
case 0x45b651:c.instructions+=6;goto B45b651;
case 0x45b657:c.instructions+=5;goto B45b657;
case 0x45b65d:c.instructions+=4;goto B45b65d;
case 0x45b663:c.instructions+=3;goto B45b663;
case 0x45b669:c.instructions+=2;goto B45b669;
case 0x45b66e:c.instructions+=1;goto B45b66e;
case 0x45b673:goto L45b673;
case 0x45b679:c.instructions+=11;goto B45b679;
case 0x45b67f:c.instructions+=10;goto B45b67f;
case 0x45b685:c.instructions+=9;goto B45b685;
case 0x45b68b:c.instructions+=8;goto B45b68b;
case 0x45b691:c.instructions+=7;goto B45b691;
case 0x45b697:c.instructions+=6;goto B45b697;
case 0x45b69d:c.instructions+=5;goto B45b69d;
case 0x45b6a3:c.instructions+=4;goto B45b6a3;
case 0x45b6a9:c.instructions+=3;goto B45b6a9;
case 0x45b6af:c.instructions+=2;goto B45b6af;
case 0x45b6b4:c.instructions+=1;goto B45b6b4;
case 0x45b6b9:goto L45b6b9;
case 0x45b6bf:c.instructions+=22;goto B45b6bf;
case 0x45b6c5:c.instructions+=21;goto B45b6c5;
case 0x45b6cb:c.instructions+=20;goto B45b6cb;
case 0x45b6d1:c.instructions+=19;goto B45b6d1;
case 0x45b6d7:c.instructions+=18;goto B45b6d7;
case 0x45b6dd:c.instructions+=17;goto B45b6dd;
case 0x45b6e3:c.instructions+=16;goto B45b6e3;
case 0x45b6e9:c.instructions+=15;goto B45b6e9;
case 0x45b6ef:c.instructions+=14;goto B45b6ef;
case 0x45b6f5:c.instructions+=13;goto B45b6f5;
case 0x45b6fb:c.instructions+=12;goto B45b6fb;
case 0x45b701:c.instructions+=11;goto B45b701;
case 0x45b707:c.instructions+=10;goto B45b707;
case 0x45b70d:c.instructions+=9;goto B45b70d;
case 0x45b70f:c.instructions+=8;goto B45b70f;
case 0x45b713:c.instructions+=7;goto B45b713;
case 0x45b714:c.instructions+=6;goto B45b714;
case 0x45b715:c.instructions+=5;goto B45b715;
case 0x45b716:c.instructions+=4;goto B45b716;
case 0x45b717:c.instructions+=3;goto B45b717;
case 0x45b71e:c.instructions+=2;goto B45b71e;
case 0x45b721:c.instructions+=1;goto B45b721;
case 0x45b730:goto L45b730;
case 0x45b732:c.instructions+=12;goto B45b732;
case 0x45b737:c.instructions+=11;goto B45b737;
case 0x45b73d:c.instructions+=10;goto B45b73d;
case 0x45b73e:c.instructions+=9;goto B45b73e;
case 0x45b745:c.instructions+=8;goto B45b745;
case 0x45b746:c.instructions+=7;goto B45b746;
case 0x45b747:c.instructions+=6;goto B45b747;
case 0x45b749:c.instructions+=5;goto B45b749;
case 0x45b74d:c.instructions+=4;goto B45b74d;
case 0x45b753:c.instructions+=3;goto B45b753;
case 0x45b759:c.instructions+=2;goto B45b759;
case 0x45b761:c.instructions+=1;goto B45b761;
case 0x45b766:goto L45b766;
case 0x45b76c:c.instructions+=2;goto B45b76c;
case 0x45b771:c.instructions+=1;goto B45b771;
case 0x45b776:goto L45b776;
case 0x45b77c:c.instructions+=2;goto B45b77c;
case 0x45b781:c.instructions+=1;goto B45b781;
case 0x45b786:goto L45b786;
case 0x45b789:c.instructions+=2;goto B45b789;
case 0x45b78e:c.instructions+=1;goto B45b78e;
case 0x45b793:goto L45b793;
case 0x45b796:c.instructions+=2;goto B45b796;
case 0x45b79b:c.instructions+=1;goto B45b79b;
case 0x45b7a0:goto L45b7a0;
case 0x45b7a4:c.instructions+=5;goto B45b7a4;
case 0x45b7aa:c.instructions+=4;goto B45b7aa;
case 0x45b7ab:c.instructions+=3;goto B45b7ab;
case 0x45b7b2:c.instructions+=2;goto B45b7b2;
case 0x45b7b5:c.instructions+=1;goto B45b7b5;
case 0x45b7c0:goto L45b7c0;
case 0x45b7c4:c.instructions+=17;goto B45b7c4;
case 0x45b7c5:c.instructions+=16;goto B45b7c5;
case 0x45b7c7:c.instructions+=15;goto B45b7c7;
case 0x45b7cd:c.instructions+=14;goto B45b7cd;
case 0x45b7d3:c.instructions+=13;goto B45b7d3;
case 0x45b7d6:c.instructions+=12;goto B45b7d6;
case 0x45b7dc:c.instructions+=11;goto B45b7dc;
case 0x45b7df:c.instructions+=10;goto B45b7df;
case 0x45b7e4:c.instructions+=9;goto B45b7e4;
case 0x45b7e7:c.instructions+=8;goto B45b7e7;
case 0x45b7ed:c.instructions+=7;goto B45b7ed;
case 0x45b7f0:c.instructions+=6;goto B45b7f0;
case 0x45b7f6:c.instructions+=5;goto B45b7f6;
case 0x45b7f9:c.instructions+=4;goto B45b7f9;
case 0x45b7ff:c.instructions+=3;goto B45b7ff;
case 0x45b800:c.instructions+=2;goto B45b800;
case 0x45b803:c.instructions+=1;goto B45b803;
case 0x45b808:goto L45b808;
case 0x45b809:c.instructions+=2;goto B45b809;
case 0x45b80b:c.instructions+=1;goto B45b80b;
case 0x45b810:goto L45b810;
case 0x45b812:c.instructions+=2;goto B45b812;
case 0x45b814:c.instructions+=1;goto B45b814;
case 0x45b819:goto L45b819;
case 0x45b81c:c.instructions+=17;goto B45b81c;
case 0x45b81f:c.instructions+=16;goto B45b81f;
case 0x45b825:c.instructions+=15;goto B45b825;
case 0x45b827:c.instructions+=14;goto B45b827;
case 0x45b82a:c.instructions+=13;goto B45b82a;
case 0x45b82d:c.instructions+=12;goto B45b82d;
case 0x45b833:c.instructions+=11;goto B45b833;
case 0x45b835:c.instructions+=10;goto B45b835;
case 0x45b838:c.instructions+=9;goto B45b838;
case 0x45b83e:c.instructions+=8;goto B45b83e;
case 0x45b841:c.instructions+=7;goto B45b841;
case 0x45b847:c.instructions+=6;goto B45b847;
case 0x45b84a:c.instructions+=5;goto B45b84a;
case 0x45b850:c.instructions+=4;goto B45b850;
case 0x45b852:c.instructions+=3;goto B45b852;
case 0x45b855:c.instructions+=2;goto B45b855;
case 0x45b85b:c.instructions+=1;goto B45b85b;
case 0x45b860:goto L45b860;
case 0x45b861:c.instructions+=2;goto B45b861;
case 0x45b863:c.instructions+=1;goto B45b863;
case 0x45b868:goto L45b868;
case 0x45b86a:c.instructions+=2;goto B45b86a;
case 0x45b86c:c.instructions+=1;goto B45b86c;
case 0x45b871:goto L45b871;
case 0x45b874:c.instructions+=14;goto B45b874;
case 0x45b87a:c.instructions+=13;goto B45b87a;
case 0x45b880:c.instructions+=12;goto B45b880;
case 0x45b886:c.instructions+=11;goto B45b886;
case 0x45b88c:c.instructions+=10;goto B45b88c;
case 0x45b892:c.instructions+=9;goto B45b892;
case 0x45b897:c.instructions+=8;goto B45b897;
case 0x45b89d:c.instructions+=7;goto B45b89d;
case 0x45b8a3:c.instructions+=6;goto B45b8a3;
case 0x45b8a9:c.instructions+=5;goto B45b8a9;
case 0x45b8af:c.instructions+=4;goto B45b8af;
case 0x45b8b5:c.instructions+=3;goto B45b8b5;
case 0x45b8bb:c.instructions+=2;goto B45b8bb;
case 0x45b8c1:c.instructions+=1;goto B45b8c1;
case 0x45b8c6:goto L45b8c6;
case 0x45b8c7:c.instructions+=2;goto B45b8c7;
case 0x45b8c9:c.instructions+=1;goto B45b8c9;
case 0x45b8ce:goto L45b8ce;
case 0x45b8d0:c.instructions+=2;goto B45b8d0;
case 0x45b8d2:c.instructions+=1;goto B45b8d2;
case 0x45b8d7:goto L45b8d7;
case 0x45b8dd:c.instructions+=14;goto B45b8dd;
case 0x45b8e3:c.instructions+=13;goto B45b8e3;
case 0x45b8e9:c.instructions+=12;goto B45b8e9;
case 0x45b8ef:c.instructions+=11;goto B45b8ef;
case 0x45b8f5:c.instructions+=10;goto B45b8f5;
case 0x45b8fb:c.instructions+=9;goto B45b8fb;
case 0x45b900:c.instructions+=8;goto B45b900;
case 0x45b906:c.instructions+=7;goto B45b906;
case 0x45b90c:c.instructions+=6;goto B45b90c;
case 0x45b912:c.instructions+=5;goto B45b912;
case 0x45b918:c.instructions+=4;goto B45b918;
case 0x45b91e:c.instructions+=3;goto B45b91e;
case 0x45b924:c.instructions+=2;goto B45b924;
case 0x45b92a:c.instructions+=1;goto B45b92a;
case 0x45b92f:goto L45b92f;
case 0x45b930:c.instructions+=2;goto B45b930;
case 0x45b932:c.instructions+=1;goto B45b932;
case 0x45b937:goto L45b937;
case 0x45b939:c.instructions+=2;goto B45b939;
case 0x45b93b:c.instructions+=1;goto B45b93b;
case 0x45b940:goto L45b940;
case 0x45b946:c.instructions+=14;goto B45b946;
case 0x45b94c:c.instructions+=13;goto B45b94c;
case 0x45b952:c.instructions+=12;goto B45b952;
case 0x45b958:c.instructions+=11;goto B45b958;
case 0x45b95e:c.instructions+=10;goto B45b95e;
case 0x45b964:c.instructions+=9;goto B45b964;
case 0x45b969:c.instructions+=8;goto B45b969;
case 0x45b96f:c.instructions+=7;goto B45b96f;
case 0x45b975:c.instructions+=6;goto B45b975;
case 0x45b97b:c.instructions+=5;goto B45b97b;
case 0x45b981:c.instructions+=4;goto B45b981;
case 0x45b987:c.instructions+=3;goto B45b987;
case 0x45b98d:c.instructions+=2;goto B45b98d;
case 0x45b993:c.instructions+=1;goto B45b993;
case 0x45b998:goto L45b998;
case 0x45b999:c.instructions+=2;goto B45b999;
case 0x45b99b:c.instructions+=1;goto B45b99b;
case 0x45b9a0:goto L45b9a0;
case 0x45b9a2:c.instructions+=2;goto B45b9a2;
case 0x45b9a4:c.instructions+=1;goto B45b9a4;
case 0x45b9a9:goto L45b9a9;
case 0x45b9af:c.instructions+=4;goto B45b9af;
case 0x45b9b0:c.instructions+=3;goto B45b9b0;
case 0x45b9b6:c.instructions+=2;goto B45b9b6;
case 0x45b9b7:c.instructions+=1;goto B45b9b7;
case 0x45b9c0:goto L45b9c0;
case 0x45b9c6:c.instructions+=8;goto B45b9c6;
case 0x45b9c9:c.instructions+=7;goto B45b9c9;
case 0x45b9cf:c.instructions+=6;goto B45b9cf;
case 0x45b9d5:c.instructions+=5;goto B45b9d5;
case 0x45b9d9:c.instructions+=4;goto B45b9d9;
case 0x45b9df:c.instructions+=3;goto B45b9df;
case 0x45b9e5:c.instructions+=2;goto B45b9e5;
case 0x45b9ec:c.instructions+=1;goto B45b9ec;
case 0x45b9f0:goto L45b9f0;
case 0x45b9f5:c.instructions+=5;goto B45b9f5;
case 0x45b9f7:c.instructions+=4;goto B45b9f7;
case 0x45b9f8:c.instructions+=3;goto B45b9f8;
case 0x45b9fa:c.instructions+=2;goto B45b9fa;
case 0x45b9fd:c.instructions+=1;goto B45b9fd;
case 0x45b9ff:goto L45b9ff;
case 0x45ba02:c.instructions+=1;goto B45ba02;
case 0x45ba04:goto L45ba04;
case 0x45ba06:c.instructions+=1;goto B45ba06;
case 0x45ba08:goto L45ba08;
case 0x45ba0c:c.instructions+=2;goto B45ba0c;
case 0x45ba0f:c.instructions+=1;goto B45ba0f;
case 0x45ba11:goto L45ba11;
case 0x45ba15:c.instructions+=1;goto B45ba15;
case 0x45ba19:goto L45ba19;
case 0x45ba1f:c.instructions+=8;goto B45ba1f;
case 0x45ba22:c.instructions+=7;goto B45ba22;
case 0x45ba25:c.instructions+=6;goto B45ba25;
case 0x45ba2b:c.instructions+=5;goto B45ba2b;
case 0x45ba31:c.instructions+=4;goto B45ba31;
case 0x45ba37:c.instructions+=3;goto B45ba37;
case 0x45ba39:c.instructions+=2;goto B45ba39;
case 0x45ba3c:c.instructions+=1;goto B45ba3c;
case 0x45ba3e:goto L45ba3e;
case 0x45ba42:c.instructions+=1;goto B45ba42;
case 0x45ba44:goto L45ba44;
case 0x45ba47:goto L45ba47;
case 0x45ba4d:c.instructions+=7;goto B45ba4d;
case 0x45ba50:c.instructions+=6;goto B45ba50;
case 0x45ba53:c.instructions+=5;goto B45ba53;
case 0x45ba59:c.instructions+=4;goto B45ba59;
case 0x45ba5c:c.instructions+=3;goto B45ba5c;
case 0x45ba5f:c.instructions+=2;goto B45ba5f;
case 0x45ba65:c.instructions+=1;goto B45ba65;
case 0x45ba67:goto L45ba67;
case 0x45ba6a:c.instructions+=1;goto B45ba6a;
case 0x45ba6c:goto L45ba6c;
case 0x45ba70:c.instructions+=1;goto B45ba70;
case 0x45ba72:goto L45ba72;
case 0x45ba75:goto L45ba75;
case 0x45ba7b:c.instructions+=1;goto B45ba7b;
case 0x45ba7d:goto L45ba7d;
case 0x45ba83:c.instructions+=1;goto B45ba83;
case 0x45ba85:goto L45ba85;
case 0x45ba89:c.instructions+=2;goto B45ba89;
case 0x45ba8a:c.instructions+=1;goto B45ba8a;
case 0x45ba8d:goto L45ba8d;
case 0x45ba90:c.instructions+=2;goto B45ba90;
case 0x45ba91:c.instructions+=1;goto B45ba91;
case 0x45baa0:goto L45baa0;
case 0x45baa5:c.instructions+=1;goto B45baa5;
case 0x45bab0:goto L45bab0;
case 0x45bab5:c.instructions+=1;goto B45bab5;
case 0x45bac0:goto L45bac0;
case 0x45bac3:c.instructions+=1;goto B45bac3;
case 0x45bad0:goto L45bad0;
case 0x45bad4:c.instructions+=1;goto B45bad4;
case 0x45bae0:goto L45bae0;
case 0x45bae5:c.instructions+=1;goto B45bae5;
case 0x45baf0:goto L45baf0;
case 0x45baf5:c.instructions+=1;goto B45baf5;
case 0x45bb00:goto L45bb00;
case 0x45bb02:c.instructions+=14;goto B45bb02;
case 0x45bb07:c.instructions+=13;goto B45bb07;
case 0x45bb0d:c.instructions+=12;goto B45bb0d;
case 0x45bb0e:c.instructions+=11;goto B45bb0e;
case 0x45bb15:c.instructions+=10;goto B45bb15;
case 0x45bb16:c.instructions+=9;goto B45bb16;
case 0x45bb17:c.instructions+=8;goto B45bb17;
case 0x45bb18:c.instructions+=7;goto B45bb18;
case 0x45bb1a:c.instructions+=6;goto B45bb1a;
case 0x45bb1e:c.instructions+=5;goto B45bb1e;
case 0x45bb24:c.instructions+=4;goto B45bb24;
case 0x45bb27:c.instructions+=3;goto B45bb27;
case 0x45bb2c:c.instructions+=2;goto B45bb2c;
case 0x45bb2e:c.instructions+=1;goto B45bb2e;
case 0x45bb30:goto L45bb30;
case 0x45bb32:c.instructions+=4;goto B45bb32;
case 0x45bb35:c.instructions+=3;goto B45bb35;
case 0x45bb36:c.instructions+=2;goto B45bb36;
case 0x45bb3a:c.instructions+=1;goto B45bb3a;
case 0x45bb3c:goto L45bb3c;
case 0x45bb3f:c.instructions+=14;goto B45bb3f;
case 0x45bb42:c.instructions+=13;goto B45bb42;
case 0x45bb45:c.instructions+=12;goto B45bb45;
case 0x45bb48:c.instructions+=11;goto B45bb48;
case 0x45bb4b:c.instructions+=10;goto B45bb4b;
case 0x45bb51:c.instructions+=9;goto B45bb51;
case 0x45bb53:c.instructions+=8;goto B45bb53;
case 0x45bb59:c.instructions+=7;goto B45bb59;
case 0x45bb5d:c.instructions+=6;goto B45bb5d;
case 0x45bb60:c.instructions+=5;goto B45bb60;
case 0x45bb63:c.instructions+=4;goto B45bb63;
case 0x45bb66:c.instructions+=3;goto B45bb66;
case 0x45bb69:c.instructions+=2;goto B45bb69;
case 0x45bb6f:c.instructions+=1;goto B45bb6f;
case 0x45bb74:goto L45bb74;
case 0x45bb76:c.instructions+=3;goto B45bb76;
case 0x45bb7c:c.instructions+=2;goto B45bb7c;
case 0x45bb81:c.instructions+=1;goto B45bb81;
case 0x45bb86:goto L45bb86;
case 0x45bb88:c.instructions+=3;goto B45bb88;
case 0x45bb8e:c.instructions+=2;goto B45bb8e;
case 0x45bb93:c.instructions+=1;goto B45bb93;
case 0x45bb98:goto L45bb98;
case 0x45bb9a:c.instructions+=3;goto B45bb9a;
case 0x45bba0:c.instructions+=2;goto B45bba0;
case 0x45bba5:c.instructions+=1;goto B45bba5;
case 0x45bbaa:goto L45bbaa;
case 0x45bbac:c.instructions+=3;goto B45bbac;
case 0x45bbb2:c.instructions+=2;goto B45bbb2;
case 0x45bbb7:c.instructions+=1;goto B45bbb7;
case 0x45bbbc:goto L45bbbc;
case 0x45bbbe:c.instructions+=3;goto B45bbbe;
case 0x45bbc4:c.instructions+=2;goto B45bbc4;
case 0x45bbc9:c.instructions+=1;goto B45bbc9;
case 0x45bbce:goto L45bbce;
case 0x45bbd2:c.instructions+=28;goto B45bbd2;
case 0x45bbd8:c.instructions+=27;goto B45bbd8;
case 0x45bbde:c.instructions+=26;goto B45bbde;
case 0x45bbe4:c.instructions+=25;goto B45bbe4;
case 0x45bbea:c.instructions+=24;goto B45bbea;
case 0x45bbf0:c.instructions+=23;goto B45bbf0;
case 0x45bbf6:c.instructions+=22;goto B45bbf6;
case 0x45bbfc:c.instructions+=21;goto B45bbfc;
case 0x45bc02:c.instructions+=20;goto B45bc02;
case 0x45bc08:c.instructions+=19;goto B45bc08;
case 0x45bc0e:c.instructions+=18;goto B45bc0e;
case 0x45bc14:c.instructions+=17;goto B45bc14;
case 0x45bc1a:c.instructions+=16;goto B45bc1a;
case 0x45bc20:c.instructions+=15;goto B45bc20;
case 0x45bc26:c.instructions+=14;goto B45bc26;
case 0x45bc2c:c.instructions+=13;goto B45bc2c;
case 0x45bc32:c.instructions+=12;goto B45bc32;
case 0x45bc38:c.instructions+=11;goto B45bc38;
case 0x45bc3e:c.instructions+=10;goto B45bc3e;
case 0x45bc44:c.instructions+=9;goto B45bc44;
case 0x45bc4a:c.instructions+=8;goto B45bc4a;
case 0x45bc50:c.instructions+=7;goto B45bc50;
case 0x45bc56:c.instructions+=6;goto B45bc56;
case 0x45bc58:c.instructions+=5;goto B45bc58;
case 0x45bc59:c.instructions+=4;goto B45bc59;
case 0x45bc5a:c.instructions+=3;goto B45bc5a;
case 0x45bc61:c.instructions+=2;goto B45bc61;
case 0x45bc64:c.instructions+=1;goto B45bc64;
case 0x45bc70:goto L45bc70;
case 0x45bc72:c.instructions+=12;goto B45bc72;
case 0x45bc77:c.instructions+=11;goto B45bc77;
case 0x45bc7d:c.instructions+=10;goto B45bc7d;
case 0x45bc7e:c.instructions+=9;goto B45bc7e;
case 0x45bc85:c.instructions+=8;goto B45bc85;
case 0x45bc86:c.instructions+=7;goto B45bc86;
case 0x45bc87:c.instructions+=6;goto B45bc87;
case 0x45bc89:c.instructions+=5;goto B45bc89;
case 0x45bc8d:c.instructions+=4;goto B45bc8d;
case 0x45bc93:c.instructions+=3;goto B45bc93;
case 0x45bc99:c.instructions+=2;goto B45bc99;
case 0x45bca1:c.instructions+=1;goto B45bca1;
case 0x45bca6:goto L45bca6;
case 0x45bcac:c.instructions+=2;goto B45bcac;
case 0x45bcb1:c.instructions+=1;goto B45bcb1;
case 0x45bcb6:goto L45bcb6;
case 0x45bcbc:c.instructions+=2;goto B45bcbc;
case 0x45bcc1:c.instructions+=1;goto B45bcc1;
case 0x45bcc6:goto L45bcc6;
case 0x45bccc:c.instructions+=2;goto B45bccc;
case 0x45bcd1:c.instructions+=1;goto B45bcd1;
case 0x45bcd6:goto L45bcd6;
case 0x45bcdc:c.instructions+=2;goto B45bcdc;
case 0x45bce1:c.instructions+=1;goto B45bce1;
case 0x45bce6:goto L45bce6;
case 0x45bcec:c.instructions+=2;goto B45bcec;
case 0x45bcf1:c.instructions+=1;goto B45bcf1;
case 0x45bcf6:goto L45bcf6;
case 0x45bcfa:c.instructions+=5;goto B45bcfa;
case 0x45bd00:c.instructions+=4;goto B45bd00;
case 0x45bd01:c.instructions+=3;goto B45bd01;
case 0x45bd08:c.instructions+=2;goto B45bd08;
case 0x45bd0b:c.instructions+=1;goto B45bd0b;
case 0x45bd10:goto L45bd10;
case 0x45bd11:c.instructions+=5;goto B45bd11;
case 0x45bd13:c.instructions+=4;goto B45bd13;
case 0x45bd17:c.instructions+=3;goto B45bd17;
case 0x45bd1a:c.instructions+=2;goto B45bd1a;
case 0x45bd1d:c.instructions+=1;goto B45bd1d;
case 0x45bd1f:goto L45bd1f;
case 0x45bd22:c.instructions+=1;goto B45bd22;
case 0x45bd24:goto L45bd24;
case 0x45bd27:c.instructions+=1;goto B45bd27;
case 0x45bd29:goto L45bd29;
case 0x45bd30:c.instructions+=1;goto B45bd30;
case 0x45bd32:goto L45bd32;
case 0x45bd35:goto L45bd35;
case 0x45bd38:c.instructions+=3;goto B45bd38;
case 0x45bd3b:c.instructions+=2;goto B45bd3b;
case 0x45bd3d:c.instructions+=1;goto B45bd3d;
case 0x45bd40:goto L45bd40;
case 0x45bd42:c.instructions+=7;goto B45bd42;
case 0x45bd45:c.instructions+=6;goto B45bd45;
case 0x45bd48:c.instructions+=5;goto B45bd48;
case 0x45bd4b:c.instructions+=4;goto B45bd4b;
case 0x45bd4e:c.instructions+=3;goto B45bd4e;
case 0x45bd53:c.instructions+=2;goto B45bd53;
case 0x45bd55:c.instructions+=1;goto B45bd55;
case 0x45bd57:goto L45bd57;
case 0x45bd5c:c.instructions+=2;goto B45bd5c;
case 0x45bd5e:c.instructions+=1;goto B45bd5e;
case 0x45bd60:goto L45bd60;
case 0x45bd62:c.instructions+=1;goto B45bd62;
case 0x45bd64:goto L45bd64;
case 0x45bd69:goto L45bd69;
case 0x45bd6c:c.instructions+=9;goto B45bd6c;
case 0x45bd6e:c.instructions+=8;goto B45bd6e;
case 0x45bd70:c.instructions+=7;goto B45bd70;
case 0x45bd73:c.instructions+=6;goto B45bd73;
case 0x45bd75:c.instructions+=5;goto B45bd75;
case 0x45bd7b:c.instructions+=4;goto B45bd7b;
case 0x45bd81:c.instructions+=3;goto B45bd81;
case 0x45bd84:c.instructions+=2;goto B45bd84;
case 0x45bd87:c.instructions+=1;goto B45bd87;
case 0x45bd89:goto L45bd89;
case 0x45bd90:c.instructions+=1;goto B45bd90;
case 0x45bd97:goto L45bd97;
case 0x45bd98:c.instructions+=8;goto B45bd98;
case 0x45bd9a:c.instructions+=7;goto B45bd9a;
case 0x45bd9c:c.instructions+=6;goto B45bd9c;
case 0x45bd9f:c.instructions+=5;goto B45bd9f;
case 0x45bda2:c.instructions+=4;goto B45bda2;
case 0x45bda9:c.instructions+=3;goto B45bda9;
case 0x45bdac:c.instructions+=2;goto B45bdac;
case 0x45bdad:c.instructions+=1;goto B45bdad;
case 0x45bdb0:goto L45bdb0;
case 0x45bdb2:c.instructions+=8;goto B45bdb2;
case 0x45bdb5:c.instructions+=7;goto B45bdb5;
case 0x45bdb8:c.instructions+=6;goto B45bdb8;
case 0x45bdba:c.instructions+=5;goto B45bdba;
case 0x45bdbd:c.instructions+=4;goto B45bdbd;
case 0x45bdc4:c.instructions+=3;goto B45bdc4;
case 0x45bdc7:c.instructions+=2;goto B45bdc7;
case 0x45bdc8:c.instructions+=1;goto B45bdc8;
case 0x45bdf0:goto L45bdf0;
case 0x45bdf1:c.instructions+=7;goto B45bdf1;
case 0x45bdf2:c.instructions+=6;goto B45bdf2;
case 0x45bdf4:c.instructions+=5;goto B45bdf4;
case 0x45bdf8:c.instructions+=4;goto B45bdf8;
case 0x45bdfd:c.instructions+=3;goto B45bdfd;
case 0x45bdff:c.instructions+=2;goto B45bdff;
case 0x45be01:c.instructions+=1;goto B45be01;
case 0x45be03:goto L45be03;
case 0x45be09:c.instructions+=1;goto B45be09;
case 0x45be0b:goto L45be0b;
case 0x45be0d:c.instructions+=1;goto B45be0d;
case 0x45be0f:goto L45be0f;
case 0x45be14:goto L45be14;
case 0x45be16:c.instructions+=8;goto B45be16;
case 0x45be18:c.instructions+=7;goto B45be18;
case 0x45be1b:c.instructions+=6;goto B45be1b;
case 0x45be1c:c.instructions+=5;goto B45be1c;
case 0x45be22:c.instructions+=4;goto B45be22;
case 0x45be23:c.instructions+=3;goto B45be23;
case 0x45be29:c.instructions+=2;goto B45be29;
case 0x45be2b:c.instructions+=1;goto B45be2b;
case 0x45be30:goto L45be30;
case 0x45be31:c.instructions+=2;goto B45be31;
case 0x45be33:c.instructions+=1;goto B45be33;
case 0x45be38:goto L45be38;
case 0x45be39:c.instructions+=2;goto B45be39;
case 0x45be3f:c.instructions+=1;goto B45be3f;
case 0x45be44:goto L45be44;
case 0x45be45:c.instructions+=2;goto B45be45;
case 0x45be4b:c.instructions+=1;goto B45be4b;
case 0x45be50:goto L45be50;
case 0x45be51:c.instructions+=2;goto B45be51;
case 0x45be57:c.instructions+=1;goto B45be57;
case 0x45be5c:goto L45be5c;
case 0x45be5d:c.instructions+=2;goto B45be5d;
case 0x45be63:c.instructions+=1;goto B45be63;
case 0x45be68:goto L45be68;
case 0x45be6e:c.instructions+=2;goto B45be6e;
case 0x45be6f:c.instructions+=1;goto B45be6f;
case 0x45be71:goto L45be71;
case 0x45be77:c.instructions+=1;goto B45be77;
case 0x45be79:goto L45be79;
case 0x45be7b:c.instructions+=1;goto B45be7b;
case 0x45be7d:goto L45be7d;
case 0x45be82:goto L45be82;
case 0x45be84:c.instructions+=20;goto B45be84;
case 0x45be86:c.instructions+=19;goto B45be86;
case 0x45be89:c.instructions+=18;goto B45be89;
case 0x45be8c:c.instructions+=17;goto B45be8c;
case 0x45be92:c.instructions+=16;goto B45be92;
case 0x45be95:c.instructions+=15;goto B45be95;
case 0x45be98:c.instructions+=14;goto B45be98;
case 0x45be9b:c.instructions+=13;goto B45be9b;
case 0x45be9e:c.instructions+=12;goto B45be9e;
case 0x45bea5:c.instructions+=11;goto B45bea5;
case 0x45bea7:c.instructions+=10;goto B45bea7;
case 0x45bead:c.instructions+=9;goto B45bead;
case 0x45beb0:c.instructions+=8;goto B45beb0;
case 0x45beb6:c.instructions+=7;goto B45beb6;
case 0x45beb8:c.instructions+=6;goto B45beb8;
case 0x45beba:c.instructions+=5;goto B45beba;
case 0x45bebc:c.instructions+=4;goto B45bebc;
case 0x45bec2:c.instructions+=3;goto B45bec2;
case 0x45bec4:c.instructions+=2;goto B45bec4;
case 0x45bec7:c.instructions+=1;goto B45bec7;
case 0x45bec9:goto L45bec9;
case 0x45becf:c.instructions+=4;goto B45becf;
case 0x45bed2:c.instructions+=3;goto B45bed2;
case 0x45bed3:c.instructions+=2;goto B45bed3;
case 0x45bed4:c.instructions+=1;goto B45bed4;
case 0x45bed5:goto L45bed5;
case 0x45bed6:c.instructions+=3;goto B45bed6;
case 0x45bed8:c.instructions+=2;goto B45bed8;
case 0x45bed9:c.instructions+=1;goto B45bed9;
case 0x45bee0:goto L45bee0;
case 0x45bee5:c.instructions+=1;goto B45bee5;
case 0x45bef0:goto L45bef0;
case 0x45bef5:c.instructions+=1;goto B45bef5;
case 0x45bf00:goto L45bf00;
case 0x45bf02:c.instructions+=5;goto B45bf02;
case 0x45bf03:c.instructions+=4;goto B45bf03;
case 0x45bf09:c.instructions+=3;goto B45bf09;
case 0x45bf0c:c.instructions+=2;goto B45bf0c;
case 0x45bf11:c.instructions+=1;goto B45bf11;
case 0x45bf13:goto L45bf13;
case 0x45bf15:c.instructions+=4;goto B45bf15;
case 0x45bf18:c.instructions+=3;goto B45bf18;
case 0x45bf19:c.instructions+=2;goto B45bf19;
case 0x45bf1d:c.instructions+=1;goto B45bf1d;
case 0x45bf1f:goto L45bf1f;
case 0x45bf21:c.instructions+=12;goto B45bf21;
case 0x45bf24:c.instructions+=11;goto B45bf24;
case 0x45bf27:c.instructions+=10;goto B45bf27;
case 0x45bf2a:c.instructions+=9;goto B45bf2a;
case 0x45bf2d:c.instructions+=8;goto B45bf2d;
case 0x45bf30:c.instructions+=7;goto B45bf30;
case 0x45bf36:c.instructions+=6;goto B45bf36;
case 0x45bf3c:c.instructions+=5;goto B45bf3c;
case 0x45bf42:c.instructions+=4;goto B45bf42;
case 0x45bf48:c.instructions+=3;goto B45bf48;
case 0x45bf4e:c.instructions+=2;goto B45bf4e;
case 0x45bf4f:c.instructions+=1;goto B45bf4f;
case 0x45bf50:goto L45bf50;
case 0x45bf51:c.instructions+=7;goto B45bf51;
case 0x45bf53:c.instructions+=6;goto B45bf53;
case 0x45bf59:c.instructions+=5;goto B45bf59;
case 0x45bf5f:c.instructions+=4;goto B45bf5f;
case 0x45bf63:c.instructions+=3;goto B45bf63;
case 0x45bf65:c.instructions+=2;goto B45bf65;
case 0x45bf66:c.instructions+=1;goto B45bf66;
case 0x45bf69:goto L45bf69;
case 0x45bf6f:c.instructions+=4;goto B45bf6f;
case 0x45bf71:c.instructions+=3;goto B45bf71;
case 0x45bf77:c.instructions+=2;goto B45bf77;
case 0x45bf78:c.instructions+=1;goto B45bf78;
case 0x45bf7b:goto L45bf7b;
case 0x45bf7c:c.instructions+=1;goto B45bf7c;
case 0x45bf80:goto L45bf80;
case 0x45bf84:c.instructions+=2;goto B45bf84;
case 0x45bf87:c.instructions+=1;goto B45bf87;
case 0x45bf89:goto L45bf89;
case 0x45bf8a:c.instructions+=1;goto B45bf8a;
case 0x45bf8c:goto L45bf8c;
case 0x45bf8f:c.instructions+=1;goto B45bf8f;
case 0x45bf92:goto L45bf92;
case 0x45bf97:c.instructions+=1;goto B45bf97;
case 0x45bf9a:goto L45bf9a;
case 0x45bf9f:c.instructions+=1;goto B45bf9f;
case 0x45bfb0:goto L45bfb0;
case 0x45bfb3:c.instructions+=9;goto B45bfb3;
case 0x45bfb6:c.instructions+=8;goto B45bfb6;
case 0x45bfbc:c.instructions+=7;goto B45bfbc;
case 0x45bfbd:c.instructions+=6;goto B45bfbd;
case 0x45bfc3:c.instructions+=5;goto B45bfc3;
case 0x45bfc4:c.instructions+=4;goto B45bfc4;
case 0x45bfca:c.instructions+=3;goto B45bfca;
case 0x45bfcb:c.instructions+=2;goto B45bfcb;
case 0x45bfd1:c.instructions+=1;goto B45bfd1;
case 0x45bfd3:goto L45bfd3;
case 0x45bfd9:goto L45bfd9;
case 0x45bfdb:c.instructions+=1;goto B45bfdb;
case 0x45bfdd:goto L45bfdd;
case 0x45bfe3:goto L45bfe3;
case 0x45bfe9:c.instructions+=4;goto B45bfe9;
case 0x45bfef:c.instructions+=3;goto B45bfef;
case 0x45bff5:c.instructions+=2;goto B45bff5;
case 0x45bffb:c.instructions+=1;goto B45bffb;
default:missing_instruction(c.pc);}
B45b001:L45b001:{c.instructions+=2;NFSU2_TR(0x45b001);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B45b003:{NFSU2_TR(0x45b003);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45b008ull));
TAIL_STATIC(0x43e910u,43e);
}
B45b008:L45b008:{c.instructions+=4;NFSU2_TR(0x45b008);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x400ull))));
__builtin_memmove((R+4),(U+0),4);
}
B45b00e:{NFSU2_TR(0x45b00e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B45b011:{NFSU2_TR(0x45b011);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45b013:{NFSU2_TR(0x45b013);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L45b030;}}
}
B45b015:L45b015:{c.instructions+=6;NFSU2_TR(0x45b015);
__builtin_memmove((R+8),gp(0x7ec840),4);
}
B45b01b:{NFSU2_TR(0x45b01b);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7ull))));
}
B45b01e:{NFSU2_TR(0x45b01e);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x1000ull))));
}
B45b024:{NFSU2_TR(0x45b024);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45b025:{NFSU2_TR(0x45b025);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45b026:{NFSU2_TR(0x45b026);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45b02bull));
TAIL_STATIC(0x440820u,440);
}
B45b02b:L45b02b:{c.instructions+=2;NFSU2_TR(0x45b02b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B45b02e:{NFSU2_TR(0x45b02e);
__builtin_memmove((R+12),(R+0),4);
}
B45b030:L45b030:{c.instructions+=6;NFSU2_TR(0x45b030);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b033:{NFSU2_TR(0x45b033);
__builtin_memmove((R+0),gp(0x82ba5c),4);
}
B45b038:{NFSU2_TR(0x45b038);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B45b03a:{NFSU2_TR(0x45b03a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B45b03c:{NFSU2_TR(0x45b03c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b040:{NFSU2_TR(0x45b040);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L45b076;}}
}
B45b042:L45b042:{c.instructions+=12;NFSU2_TR(0x45b042);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45b045:{NFSU2_TR(0x45b045);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B45b048:{NFSU2_TR(0x45b048);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B45b04b:{NFSU2_TR(0x45b04b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45b04c:{NFSU2_TR(0x45b04c);
__builtin_memmove((R+8),gp(0x82ba64),4);
}
B45b052:{NFSU2_TR(0x45b052);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B45b056:{NFSU2_TR(0x45b056);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45b057:{NFSU2_TR(0x45b057);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B45b05b:{NFSU2_TR(0x45b05b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45b05c:{NFSU2_TR(0x45b05c);
__builtin_memmove((R+4),gp(0x82ba30),4);
}
B45b062:{NFSU2_TR(0x45b062);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45b063:{NFSU2_TR(0x45b063);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45b068ull));
TAIL_STATIC(0x45aa30u,45a);
}
B45b068:L45b068:{c.instructions+=5;NFSU2_TR(0x45b068);
__builtin_memmove((R+0),gp(0x82ba5c),4);
}
B45b06d:{NFSU2_TR(0x45b06d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B45b06e:{NFSU2_TR(0x45b06e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B45b070:{NFSU2_TR(0x45b070);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b074:{NFSU2_TR(0x45b074);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x45b042u);}goto L45b042;}}
}
B45b076:L45b076:{c.instructions+=7;NFSU2_TR(0x45b076);
__builtin_memmove((R+4),gp(0x82ba30),4);
}
B45b07c:{NFSU2_TR(0x45b07c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45b07d:{NFSU2_TR(0x45b07d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45b080:{NFSU2_TR(0x45b080);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45b081:{NFSU2_TR(0x45b081);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x28ull))));
}
B45b084:{NFSU2_TR(0x45b084);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45b085:{NFSU2_TR(0x45b085);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45b08aull));
TAIL_STATIC(0x45ab00u,45a);
}
B45b08a:L45b08a:{c.instructions+=3;NFSU2_TR(0x45b08a);
__builtin_memmove((R+4),gp(0x82ba64),4);
}
B45b090:{NFSU2_TR(0x45b090);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45b091:{NFSU2_TR(0x45b091);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45b096ull));
TAIL_STATIC(0x440540u,440);
}
B45b096:L45b096:{c.instructions+=7;NFSU2_TR(0x45b096);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B45b099:{NFSU2_TR(0x45b099);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45b09a:{NFSU2_TR(0x45b09a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45b09b:{NFSU2_TR(0x45b09b);
s4(0x82ba64,u32(0x0ull));
}
B45b0a5:{NFSU2_TR(0x45b0a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B45b0a6:{NFSU2_TR(0x45b0a6);
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
B45b0a9:{NFSU2_TR(0x45b0a9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45b0b0:L45b0b0:{c.instructions+=2;NFSU2_TR(0x45b0b0);
__builtin_memmove((R+0),gp(0x82ba5c),4);
}
B45b0b5:{NFSU2_TR(0x45b0b5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45b0c0:L45b0c0:{c.instructions+=4;NFSU2_TR(0x45b0c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45b0c4:{NFSU2_TR(0x45b0c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B45b0c7:{NFSU2_TR(0x45b0c7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B45b0ca:{NFSU2_TR(0x45b0ca);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L45b0f2;}}
}
B45b0cc:L45b0cc:{c.instructions+=5;NFSU2_TR(0x45b0cc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45b0cd:{NFSU2_TR(0x45b0cd);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B45b0d1:{NFSU2_TR(0x45b0d1);
u8 U[4];
w4(U+0,u32(0x785d44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45b0d6:{NFSU2_TR(0x45b0d6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45b0d7:{NFSU2_TR(0x45b0d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45b0dcull));
TAIL_STATIC(0x4400d0u,440);
}
B45b0dc:L45b0dc:{c.instructions+=1;NFSU2_TR(0x45b0dc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B45b0df:L45b0df:{c.instructions+=3;NFSU2_TR(0x45b0df);
__builtin_memmove((R+4),(R+16),4);
}
B45b0e3:{NFSU2_TR(0x45b0e3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45b0e4:{NFSU2_TR(0x45b0e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45b0e9ull));
TAIL_STATIC(0x43db50u,43d);
}
B45b0e9:L45b0e9:{c.instructions+=3;NFSU2_TR(0x45b0e9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B45b0ec:{NFSU2_TR(0x45b0ec);
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
B45b0ef:{NFSU2_TR(0x45b0ef);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45b0f2:L45b0f2:{c.instructions+=2;NFSU2_TR(0x45b0f2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45b0f5:{NFSU2_TR(0x45b0f5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45b10a;}}
}
B45b0f7:L45b0f7:{c.instructions+=2;NFSU2_TR(0x45b0f7);
u8 U[4];
w4(U+0,u32(0x786370ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45b0fc:{NFSU2_TR(0x45b0fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45b101ull));
TAIL_STATIC(0x43db50u,43d);
}
B45b101:L45b101:{c.instructions+=3;NFSU2_TR(0x45b101);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B45b104:{NFSU2_TR(0x45b104);
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
B45b107:{NFSU2_TR(0x45b107);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45b10a:L45b10a:{c.instructions+=2;NFSU2_TR(0x45b10a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45b10d:{NFSU2_TR(0x45b10d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45b122;}}
}
B45b10f:L45b10f:{c.instructions+=2;NFSU2_TR(0x45b10f);
u8 U[4];
w4(U+0,u32(0x789eb0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45b114:{NFSU2_TR(0x45b114);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45b119ull));
TAIL_STATIC(0x43db50u,43d);
}
B45b119:L45b119:{c.instructions+=3;NFSU2_TR(0x45b119);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B45b11c:{NFSU2_TR(0x45b11c);
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
B45b11f:{NFSU2_TR(0x45b11f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45b122:L45b122:{c.instructions+=2;NFSU2_TR(0x45b122);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xbull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45b125:{NFSU2_TR(0x45b125);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45b13a;}}
}
B45b127:L45b127:{c.instructions+=2;NFSU2_TR(0x45b127);
u8 U[4];
w4(U+0,u32(0x78637cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45b12c:{NFSU2_TR(0x45b12c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45b131ull));
TAIL_STATIC(0x43db50u,43d);
}
B45b131:L45b131:{c.instructions+=3;NFSU2_TR(0x45b131);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B45b134:{NFSU2_TR(0x45b134);
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
B45b137:{NFSU2_TR(0x45b137);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45b13a:L45b13a:{c.instructions+=2;NFSU2_TR(0x45b13a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45b13d:{NFSU2_TR(0x45b13d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x45b0dfu);}goto L45b0df;}}
}
B45b13f:L45b13f:{c.instructions+=2;NFSU2_TR(0x45b13f);
u8 U[4];
w4(U+0,u32(0x789ea4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45b144:{NFSU2_TR(0x45b144);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45b149ull));
TAIL_STATIC(0x43db50u,43d);
}
B45b149:L45b149:{c.instructions+=3;NFSU2_TR(0x45b149);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B45b14c:{NFSU2_TR(0x45b14c);
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
B45b14f:{NFSU2_TR(0x45b14f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45b160:L45b160:{c.instructions+=8;NFSU2_TR(0x45b160);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45b164:{NFSU2_TR(0x45b164);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B45b167:{NFSU2_TR(0x45b167);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B45b168:{NFSU2_TR(0x45b168);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45b169:{NFSU2_TR(0x45b169);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45b16a:{NFSU2_TR(0x45b16a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45b16b:{NFSU2_TR(0x45b16b);
__builtin_memmove((R+12),(R+4),4);
}
B45b16d:{NFSU2_TR(0x45b16d);
if(r1(R+518)){{goto L45b196;}}
}
B45b16f:L45b16f:{c.instructions+=2;NFSU2_TR(0x45b16f);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B45b170:{NFSU2_TR(0x45b170);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45b1df;}}
}
B45b172:L45b172:{c.instructions+=1;NFSU2_TR(0x45b172);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B45b174:L45b174:{c.instructions+=4;NFSU2_TR(0x45b174);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45b177:{NFSU2_TR(0x45b177);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45b178:{NFSU2_TR(0x45b178);
__builtin_memmove((R+4),(R+12),4);
}
B45b17a:{NFSU2_TR(0x45b17a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45b17full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x45b0c0u);}goto L45b0c0;}
}
B45b17f:L45b17f:{c.instructions+=4;NFSU2_TR(0x45b17f);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x82baf8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B45b186:{NFSU2_TR(0x45b186);
__builtin_memmove((R+24),(R+28),4);
}
B45b188:{NFSU2_TR(0x45b188);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xcull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B45b18b:{NFSU2_TR(0x45b18b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x45b174u);}goto L45b174;}}
}
B45b18d:L45b18d:{c.instructions+=5;NFSU2_TR(0x45b18d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45b18e:{NFSU2_TR(0x45b18e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45b18f:{NFSU2_TR(0x45b18f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B45b190:{NFSU2_TR(0x45b190);
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
B45b193:{NFSU2_TR(0x45b193);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45b196:L45b196:{c.instructions+=3;NFSU2_TR(0x45b196);
w4(R+24,u32(0x1ull));
}
B45b19b:{NFSU2_TR(0x45b19b);
w4(R+28,u32(0x82ba78ull));
}
B45b1a0:{NFSU2_TR(0x45b1a0);
w4(R+12,u32(0x20ull));
}
B45b1a5:L45b1a5:{c.instructions+=3;NFSU2_TR(0x45b1a5);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xaull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B45b1a8:{NFSU2_TR(0x45b1a8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45b1a9:{NFSU2_TR(0x45b1a9);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L45b1b7;}}
}
B45b1ab:L45b1ab:{c.instructions+=4;NFSU2_TR(0x45b1ab);
u8 U[4];
w4(U+0,u32(0x785d38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45b1b0:{NFSU2_TR(0x45b1b0);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B45b1b4:{NFSU2_TR(0x45b1b4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45b1b5:{NFSU2_TR(0x45b1b5);
{goto L45b1c1;}
}
B45b1b7:L45b1b7:{c.instructions+=3;NFSU2_TR(0x45b1b7);
u8 U[4];
w4(U+0,u32(0x785d2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45b1bc:{NFSU2_TR(0x45b1bc);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B45b1c0:{NFSU2_TR(0x45b1c0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45b1c1:L45b1c1:{c.instructions+=1;NFSU2_TR(0x45b1c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45b1c6ull));
TAIL_STATIC(0x4400d0u,440);
}
B45b1c6:L45b1c6:{c.instructions+=4;NFSU2_TR(0x45b1c6);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B45b1ca:{NFSU2_TR(0x45b1ca);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B45b1cd:{NFSU2_TR(0x45b1cd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45b1ce:{NFSU2_TR(0x45b1ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45b1d3ull));
TAIL_STATIC(0x43db50u,43d);
}
B45b1d3:L45b1d3:{c.instructions+=6;NFSU2_TR(0x45b1d3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B45b1d6:{NFSU2_TR(0x45b1d6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B45b1d8:{NFSU2_TR(0x45b1d8);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B45b1d9:{NFSU2_TR(0x45b1d9);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B45b1dc:{NFSU2_TR(0x45b1dc);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B45b1dd:{NFSU2_TR(0x45b1dd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x45b1a5u);}goto L45b1a5;}}
}
B45b1df:L45b1df:{c.instructions+=5;NFSU2_TR(0x45b1df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45b1e0:{NFSU2_TR(0x45b1e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45b1e1:{NFSU2_TR(0x45b1e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B45b1e2:{NFSU2_TR(0x45b1e2);
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
B45b1e5:{NFSU2_TR(0x45b1e5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45b1f0:L45b1f0:{c.instructions+=14;NFSU2_TR(0x45b1f0);
__builtin_memmove((R+8),(R+4),4);
}
B45b1f2:{NFSU2_TR(0x45b1f2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B45b1f4:{NFSU2_TR(0x45b1f4);
u8 U[4];
w4(U+0,u32(0x789ebcull));
s4(u32(r4(R+8)),r4(U+0));
}
B45b1fa:{NFSU2_TR(0x45b1fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b1fd:{NFSU2_TR(0x45b1fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b200:{NFSU2_TR(0x45b200);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b203:{NFSU2_TR(0x45b203);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45b207:{NFSU2_TR(0x45b207);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45b208:{NFSU2_TR(0x45b208);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
w4(U+4,u32(0x7fffull));
s4(u32(r4(U+0)),r4(U+4));
}
B45b20f:{NFSU2_TR(0x45b20f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
w4(U+4,u32(0x1000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45b216:{NFSU2_TR(0x45b216);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b219:{NFSU2_TR(0x45b219);
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
B45b21b:{NFSU2_TR(0x45b21b);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45b21e:{NFSU2_TR(0x45b21e);
w4(R+4,u32(0xfull));
}
B45b223:L45b223:{c.instructions+=1;NFSU2_TR(0x45b223);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L45b225;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x45b223u);}goto L45b223;}
}
B45b225:L45b225:{c.instructions+=3;NFSU2_TR(0x45b225);
__builtin_memmove((R+0),(R+8),4);
}
B45b227:{NFSU2_TR(0x45b227);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45b228:{NFSU2_TR(0x45b228);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45b230:L45b230:{c.instructions+=7;NFSU2_TR(0x45b230);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45b231:{NFSU2_TR(0x45b231);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45b232:{NFSU2_TR(0x45b232);
__builtin_memmove((R+12),(R+4),4);
}
B45b234:{NFSU2_TR(0x45b234);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45b235:{NFSU2_TR(0x45b235);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45b238:{NFSU2_TR(0x45b238);
w4(R+28,u32(0xfull));
}
B45b23d:{NFSU2_TR(0x45b23d);
__builtin_memmove((R+4),(R+4),4);
}
B45b240:L45b240:{c.instructions+=3;NFSU2_TR(0x45b240);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B45b242:{NFSU2_TR(0x45b242);
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
B45b244:{NFSU2_TR(0x45b244);
if(r1(R+518)){{goto L45b252;}}
}
B45b246:L45b246:{c.instructions+=3;NFSU2_TR(0x45b246);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B45b248:{NFSU2_TR(0x45b248);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45b24a:{NFSU2_TR(0x45b24a);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45b24cull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B45b24c:L45b24c:{c.instructions+=1;NFSU2_TR(0x45b24c);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B45b252:L45b252:{c.instructions+=3;NFSU2_TR(0x45b252);
w1(R+512,carry<u32>(r4(R+24),u32(0x4ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B45b255:{NFSU2_TR(0x45b255);
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
B45b256:{NFSU2_TR(0x45b256);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x45b240u);}goto L45b240;}}
}
B45b258:L45b258:{c.instructions+=5;NFSU2_TR(0x45b258);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45b259:{NFSU2_TR(0x45b259);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45b25a:{NFSU2_TR(0x45b25a);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B45b25e:{NFSU2_TR(0x45b25e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B45b25f:{NFSU2_TR(0x45b25f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45b260:L45b260:{c.instructions+=9;NFSU2_TR(0x45b260);
__builtin_memmove((R+0),(R+4),4);
}
B45b262:{NFSU2_TR(0x45b262);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45b266:{NFSU2_TR(0x45b266);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b269:{NFSU2_TR(0x45b269);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B45b26b:{NFSU2_TR(0x45b26b);
u8 U[4];
w4(U+0,u32(0x789ec0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B45b271:{NFSU2_TR(0x45b271);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B45b274:{NFSU2_TR(0x45b274);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b277:{NFSU2_TR(0x45b277);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b27a:{NFSU2_TR(0x45b27a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45b280:L45b280:{c.instructions+=11;NFSU2_TR(0x45b280);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45b282:{NFSU2_TR(0x45b282);
u8 U[4];
w4(U+0,u32(0x7722b6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45b287:{NFSU2_TR(0x45b287);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45b28d:{NFSU2_TR(0x45b28d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45b28e:{NFSU2_TR(0x45b28e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b295:{NFSU2_TR(0x45b295);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45b296:{NFSU2_TR(0x45b296);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45b297:{NFSU2_TR(0x45b297);
__builtin_memmove((R+24),(R+4),4);
}
B45b299:{NFSU2_TR(0x45b299);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45b29c:{NFSU2_TR(0x45b29c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B45b29e:{NFSU2_TR(0x45b29e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45b453;}}
}
B45b2a4:L45b2a4:{c.instructions+=3;NFSU2_TR(0x45b2a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45b2a7:{NFSU2_TR(0x45b2a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B45b2a9:{NFSU2_TR(0x45b2a9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45b453;}}
}
B45b2af:L45b2af:{c.instructions+=6;NFSU2_TR(0x45b2af);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45b2b0:{NFSU2_TR(0x45b2b0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45b2b1:{NFSU2_TR(0x45b2b1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45b2b2:{NFSU2_TR(0x45b2b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B45b2b5:{NFSU2_TR(0x45b2b5);
u8 U[10];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B45b2ba:{NFSU2_TR(0x45b2ba);
if(r1(R+518)){{goto L45b2da;}}
}
B45b2bc:L45b2bc:{c.instructions+=3;NFSU2_TR(0x45b2bc);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B45b2c0:{NFSU2_TR(0x45b2c0);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B45b2c2:{NFSU2_TR(0x45b2c2);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L45b2c6;}}
}
B45b2c4:L45b2c4:{c.instructions+=1;NFSU2_TR(0x45b2c4);
w4(R+0,u32(0-u32(r4(R+0))));
}
B45b2c6:L45b2c6:{c.instructions+=2;NFSU2_TR(0x45b2c6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45b2c7:{NFSU2_TR(0x45b2c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45b2ccull));
TAIL_STATIC(0x43c1c0u,43c);
}
B45b2cc:L45b2cc:{c.instructions+=5;NFSU2_TR(0x45b2cc);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B45b2d0:{NFSU2_TR(0x45b2d0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B45b2d3:{NFSU2_TR(0x45b2d3);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B45b2d5:{NFSU2_TR(0x45b2d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b2d8:{NFSU2_TR(0x45b2d8);
{goto L45b2e1;}
}
B45b2da:L45b2da:{c.instructions+=2;NFSU2_TR(0x45b2da);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B45b2de:{NFSU2_TR(0x45b2de);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b2e1:L45b2e1:{c.instructions+=7;NFSU2_TR(0x45b2e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B45b2e5:{NFSU2_TR(0x45b2e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B45b2e8:{NFSU2_TR(0x45b2e8);
u8 U[32];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w8(U+8,u64(s64(s32(r4(R+28)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+28,u32(r8(U+24)));
}
B45b2ec:{NFSU2_TR(0x45b2ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B45b2ef:{NFSU2_TR(0x45b2ef);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+28,sar<u32>(r4(R+28),u64(r4(U+0))));
}
B45b2f2:{NFSU2_TR(0x45b2f2);
u8 U[10];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B45b2f7:{NFSU2_TR(0x45b2f7);
if(r1(R+518)){{goto L45b317;}}
}
B45b2f9:L45b2f9:{c.instructions+=3;NFSU2_TR(0x45b2f9);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B45b2fd:{NFSU2_TR(0x45b2fd);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B45b2ff:{NFSU2_TR(0x45b2ff);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L45b303;}}
}
B45b301:L45b301:{c.instructions+=1;NFSU2_TR(0x45b301);
w4(R+0,u32(0-u32(r4(R+0))));
}
B45b303:L45b303:{c.instructions+=2;NFSU2_TR(0x45b303);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45b304:{NFSU2_TR(0x45b304);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45b309ull));
TAIL_STATIC(0x43c1c0u,43c);
}
B45b309:L45b309:{c.instructions+=5;NFSU2_TR(0x45b309);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B45b30d:{NFSU2_TR(0x45b30d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B45b310:{NFSU2_TR(0x45b310);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B45b312:{NFSU2_TR(0x45b312);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b315:{NFSU2_TR(0x45b315);
{goto L45b31e;}
}
B45b317:L45b317:{c.instructions+=2;NFSU2_TR(0x45b317);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B45b31b:{NFSU2_TR(0x45b31b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b31e:L45b31e:{c.instructions+=9;NFSU2_TR(0x45b31e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45b321:{NFSU2_TR(0x45b321);
w4(R+0,u32(0x1000ull));
}
B45b326:{NFSU2_TR(0x45b326);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B45b328:{NFSU2_TR(0x45b328);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b32c:{NFSU2_TR(0x45b32c);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B45b330:{NFSU2_TR(0x45b330);
{u32 ea_=u32(u32(7904964u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45b336:{NFSU2_TR(0x45b336);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B45b339:{NFSU2_TR(0x45b339);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B45b33b:{NFSU2_TR(0x45b33b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45b340ull));
TAIL_STATIC(0x75bed4u,75b);
}
B45b340:L45b340:{c.instructions+=7;NFSU2_TR(0x45b340);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B45b342:{NFSU2_TR(0x45b342);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B45b345:{NFSU2_TR(0x45b345);
__builtin_memmove((R+20),(R+0),4);
}
B45b347:{NFSU2_TR(0x45b347);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45b34a:{NFSU2_TR(0x45b34a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B45b34d:{NFSU2_TR(0x45b34d);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B45b34f:{NFSU2_TR(0x45b34f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45b3ca;}}
}
B45b351:L45b351:{c.instructions+=2;NFSU2_TR(0x45b351);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45b353:{NFSU2_TR(0x45b353);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45b358ull));
TAIL_STATIC(0x457e20u,457);
}
B45b358:L45b358:{c.instructions+=5;NFSU2_TR(0x45b358);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B45b35b:{NFSU2_TR(0x45b35b);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b35f:{NFSU2_TR(0x45b35f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B45b361:{NFSU2_TR(0x45b361);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45b369:{NFSU2_TR(0x45b369);
if(r1(R+518)){{goto L45b3a3;}}
}
B45b36b:L45b36b:{c.instructions+=7;NFSU2_TR(0x45b36b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45b36e:{NFSU2_TR(0x45b36e);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B45b372:{NFSU2_TR(0x45b372);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45b373:{NFSU2_TR(0x45b373);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B45b377:{NFSU2_TR(0x45b377);
u8 U[12];
w4(U+0,u32(u32(u32(0x10000ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B45b37e:{NFSU2_TR(0x45b37e);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x8000ffffull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
}
B45b384:{NFSU2_TR(0x45b384);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L45b38e;}}
}
B45b386:L45b386:{c.instructions+=3;NFSU2_TR(0x45b386);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B45b387:{NFSU2_TR(0x45b387);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xffff0000ull))));
}
B45b38d:{NFSU2_TR(0x45b38d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B45b38e:L45b38e:{c.instructions+=9;NFSU2_TR(0x45b38e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45b38f:{NFSU2_TR(0x45b38f);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w4(R+4,u32(r1(U+0)));
}
B45b392:{NFSU2_TR(0x45b392);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B45b396:{NFSU2_TR(0x45b396);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45b397:{NFSU2_TR(0x45b397);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45b398:{NFSU2_TR(0x45b398);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45b399:{NFSU2_TR(0x45b399);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45b39a:{NFSU2_TR(0x45b39a);
__builtin_memmove((R+4),(R+0),4);
}
B45b39c:{NFSU2_TR(0x45b39c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45b3a1ull));
TAIL_STATIC(0x458360u,458);
}
B45b3a1:L45b3a1:{c.instructions+=1;NFSU2_TR(0x45b3a1);
{goto L45b3a5;}
}
B45b3a3:L45b3a3:{c.instructions+=1;NFSU2_TR(0x45b3a3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B45b3a5:L45b3a5:{c.instructions+=6;NFSU2_TR(0x45b3a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b3a8:{NFSU2_TR(0x45b3a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B45b3aa:{NFSU2_TR(0x45b3aa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B45b3ac:{NFSU2_TR(0x45b3ac);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B45b3b4:{NFSU2_TR(0x45b3b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45b3bc:{NFSU2_TR(0x45b3bc);
if(r1(R+518)){{goto L45b3ca;}}
}
B45b3be:L45b3be:{c.instructions+=4;NFSU2_TR(0x45b3be);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B45b3c2:{NFSU2_TR(0x45b3c2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45b3c3:{NFSU2_TR(0x45b3c3);
__builtin_memmove((R+4),(R+0),4);
}
B45b3c5:{NFSU2_TR(0x45b3c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45b3caull));
TAIL_STATIC(0x735070u,735);
}
B45b3ca:L45b3ca:{c.instructions+=3;NFSU2_TR(0x45b3ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45b3cd:{NFSU2_TR(0x45b3cd);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B45b3d1:{NFSU2_TR(0x45b3d1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45b44c;}}
}
B45b3d3:L45b3d3:{c.instructions+=2;NFSU2_TR(0x45b3d3);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45b3d5:{NFSU2_TR(0x45b3d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45b3daull));
TAIL_STATIC(0x457e20u,457);
}
B45b3da:L45b3da:{c.instructions+=5;NFSU2_TR(0x45b3da);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B45b3dd:{NFSU2_TR(0x45b3dd);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b3e1:{NFSU2_TR(0x45b3e1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B45b3e3:{NFSU2_TR(0x45b3e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45b3eb:{NFSU2_TR(0x45b3eb);
if(r1(R+518)){{goto L45b425;}}
}
B45b3ed:L45b3ed:{c.instructions+=7;NFSU2_TR(0x45b3ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45b3f0:{NFSU2_TR(0x45b3f0);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B45b3f4:{NFSU2_TR(0x45b3f4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45b3f5:{NFSU2_TR(0x45b3f5);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B45b3f9:{NFSU2_TR(0x45b3f9);
u8 U[12];
w4(U+0,u32(u32(u32(0x10000ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B45b400:{NFSU2_TR(0x45b400);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x8000ffffull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
}
B45b406:{NFSU2_TR(0x45b406);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L45b410;}}
}
B45b408:L45b408:{c.instructions+=3;NFSU2_TR(0x45b408);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B45b409:{NFSU2_TR(0x45b409);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xffff0000ull))));
}
B45b40f:{NFSU2_TR(0x45b40f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B45b410:L45b410:{c.instructions+=9;NFSU2_TR(0x45b410);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45b411:{NFSU2_TR(0x45b411);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w4(R+4,u32(r1(U+0)));
}
B45b414:{NFSU2_TR(0x45b414);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B45b418:{NFSU2_TR(0x45b418);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45b419:{NFSU2_TR(0x45b419);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45b41a:{NFSU2_TR(0x45b41a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45b41b:{NFSU2_TR(0x45b41b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45b41c:{NFSU2_TR(0x45b41c);
__builtin_memmove((R+4),(R+0),4);
}
B45b41e:{NFSU2_TR(0x45b41e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45b423ull));
TAIL_STATIC(0x458440u,458);
}
B45b423:L45b423:{c.instructions+=1;NFSU2_TR(0x45b423);
{goto L45b427;}
}
B45b425:L45b425:{c.instructions+=1;NFSU2_TR(0x45b425);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B45b427:L45b427:{c.instructions+=6;NFSU2_TR(0x45b427);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b42a:{NFSU2_TR(0x45b42a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B45b42c:{NFSU2_TR(0x45b42c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B45b42e:{NFSU2_TR(0x45b42e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B45b436:{NFSU2_TR(0x45b436);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45b43e:{NFSU2_TR(0x45b43e);
if(r1(R+518)){{goto L45b44c;}}
}
B45b440:L45b440:{c.instructions+=4;NFSU2_TR(0x45b440);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B45b444:{NFSU2_TR(0x45b444);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45b445:{NFSU2_TR(0x45b445);
__builtin_memmove((R+4),(R+0),4);
}
B45b447:{NFSU2_TR(0x45b447);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45b44cull));
TAIL_STATIC(0x735070u,735);
}
B45b44c:L45b44c:{c.instructions+=4;NFSU2_TR(0x45b44c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45b44d:{NFSU2_TR(0x45b44d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B45b44e:{NFSU2_TR(0x45b44e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B45b452:{NFSU2_TR(0x45b452);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B45b453:L45b453:{c.instructions+=5;NFSU2_TR(0x45b453);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45b457:{NFSU2_TR(0x45b457);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45b458:{NFSU2_TR(0x45b458);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b45f:{NFSU2_TR(0x45b45f);
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
B45b462:{NFSU2_TR(0x45b462);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45b470:L45b470:{c.instructions+=3;NFSU2_TR(0x45b470);
__builtin_memmove((R+0),(R+4),4);
}
B45b472:{NFSU2_TR(0x45b472);
u8 U[4];
w4(U+0,u32(0x789ec8ull));
s4(u32(r4(R+0)),r4(U+0));
}
B45b478:{NFSU2_TR(0x45b478);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45b480:L45b480:{c.instructions+=4;NFSU2_TR(0x45b480);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B45b485:{NFSU2_TR(0x45b485);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45b488:{NFSU2_TR(0x45b488);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45b48a:{NFSU2_TR(0x45b48a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45b48full));
TAIL_STATIC(0x45ad40u,45a);
}
B45b48f:L45b48f:{c.instructions+=1;NFSU2_TR(0x45b48f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45b490:L45b490:{c.instructions+=3;NFSU2_TR(0x45b490);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B45b495:{NFSU2_TR(0x45b495);
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
B45b497:{NFSU2_TR(0x45b497);
if(r1(R+518)){{goto L45b4a9;}}
}
B45b499:L45b499:{c.instructions+=5;NFSU2_TR(0x45b499);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45b49c:{NFSU2_TR(0x45b49c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45b49f:{NFSU2_TR(0x45b49f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45b4a2:{NFSU2_TR(0x45b4a2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45b4a3:{NFSU2_TR(0x45b4a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45b4a8ull));
TAIL_STATIC(0x7227cbu,722);
}
B45b4a8:L45b4a8:{c.instructions+=1;NFSU2_TR(0x45b4a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B45b4a9:L45b4a9:{c.instructions+=1;NFSU2_TR(0x45b4a9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45b4b0:L45b4b0:{c.instructions+=2;NFSU2_TR(0x45b4b0);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x14ull))));
}
B45b4b3:{NFSU2_TR(0x45b4b3);
TAIL_STATIC(0x5768e0u,576);
}
B45b4c0:L45b4c0:{c.instructions+=8;NFSU2_TR(0x45b4c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45b4c4:{NFSU2_TR(0x45b4c4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45b4c5:{NFSU2_TR(0x45b4c5);
__builtin_memmove((R+24),(R+4),4);
}
B45b4c7:{NFSU2_TR(0x45b4c7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45b4c8:{NFSU2_TR(0x45b4c8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45b4cb:{NFSU2_TR(0x45b4cb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45b4cc:{NFSU2_TR(0x45b4cc);
__builtin_memmove((R+4),(R+28),4);
}
B45b4ce:{NFSU2_TR(0x45b4ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45b4d3ull));
TAIL_STATIC(0x576970u,576);
}
B45b4d3:L45b4d3:{c.instructions+=3;NFSU2_TR(0x45b4d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B45b4d5:{NFSU2_TR(0x45b4d5);
__builtin_memmove((R+4),(R+28),4);
}
B45b4d7:{NFSU2_TR(0x45b4d7);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45b4daull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B45b4da:L45b4da:{c.instructions+=6;NFSU2_TR(0x45b4da);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45b4dd:{NFSU2_TR(0x45b4dd);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B45b4e0:{NFSU2_TR(0x45b4e0);
{u32 ea_=u32(r4(R+24)+u32(72u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B45b4e3:{NFSU2_TR(0x45b4e3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B45b4e5:{NFSU2_TR(0x45b4e5);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45b4e8:{NFSU2_TR(0x45b4e8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45b54d;}}
}
B45b4ea:L45b4ea:{c.instructions+=7;NFSU2_TR(0x45b4ea);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45b4ed:{NFSU2_TR(0x45b4ed);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45b4f0:{NFSU2_TR(0x45b4f0);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B45b4f2:{NFSU2_TR(0x45b4f2);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B45b4f4:{NFSU2_TR(0x45b4f4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B45b4f6:{NFSU2_TR(0x45b4f6);
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
B45b4f9:{NFSU2_TR(0x45b4f9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45b50c;}}
}
B45b4fb:L45b4fb:{c.instructions+=2;NFSU2_TR(0x45b4fb);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B45b4fd:{NFSU2_TR(0x45b4fd);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B45b501:L45b501:{c.instructions+=5;NFSU2_TR(0x45b501);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45b504:{NFSU2_TR(0x45b504);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45b505:{NFSU2_TR(0x45b505);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b508:{NFSU2_TR(0x45b508);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45b509:{NFSU2_TR(0x45b509);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45b50c:L45b50c:{c.instructions+=7;NFSU2_TR(0x45b50c);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45b50e:{NFSU2_TR(0x45b50e);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45b511:{NFSU2_TR(0x45b511);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B45b513:{NFSU2_TR(0x45b513);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B45b515:{NFSU2_TR(0x45b515);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B45b517:{NFSU2_TR(0x45b517);
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
B45b51a:{NFSU2_TR(0x45b51a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45b542;}}
}
B45b51c:L45b51c:{c.instructions+=7;NFSU2_TR(0x45b51c);
{u32 ea_=u32(r4(R+24)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45b51f:{NFSU2_TR(0x45b51f);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B45b523:{NFSU2_TR(0x45b523);
{u32 ea_=u32(r4(R+24)+u32(64u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B45b526:{NFSU2_TR(0x45b526);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B45b52c:{NFSU2_TR(0x45b52c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B45b52e:{NFSU2_TR(0x45b52e);
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
B45b531:{NFSU2_TR(0x45b531);
if(r1(R+514)){{goto L45b57c;}}
}
B45b533:L45b533:{c.instructions+=6;NFSU2_TR(0x45b533);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45b536:{NFSU2_TR(0x45b536);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45b537:{NFSU2_TR(0x45b537);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B45b53b:{NFSU2_TR(0x45b53b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b53e:{NFSU2_TR(0x45b53e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45b53f:{NFSU2_TR(0x45b53f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45b542:L45b542:{c.instructions+=5;NFSU2_TR(0x45b542);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45b545:{NFSU2_TR(0x45b545);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45b546:{NFSU2_TR(0x45b546);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b549:{NFSU2_TR(0x45b549);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45b54a:{NFSU2_TR(0x45b54a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45b54d:L45b54d:{c.instructions+=6;NFSU2_TR(0x45b54d);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45b54f:{NFSU2_TR(0x45b54f);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45b552:{NFSU2_TR(0x45b552);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B45b554:{NFSU2_TR(0x45b554);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B45b556:{NFSU2_TR(0x45b556);
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
B45b559:{NFSU2_TR(0x45b559);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x45b501u);}goto L45b501;}}
}
B45b55b:L45b55b:{c.instructions+=7;NFSU2_TR(0x45b55b);
{u32 ea_=u32(r4(R+24)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45b55e:{NFSU2_TR(0x45b55e);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B45b562:{NFSU2_TR(0x45b562);
{u32 ea_=u32(r4(R+24)+u32(68u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B45b565:{NFSU2_TR(0x45b565);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B45b56b:{NFSU2_TR(0x45b56b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B45b56d:{NFSU2_TR(0x45b56d);
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
B45b570:{NFSU2_TR(0x45b570);
if(r1(R+514)){{goto L45b57c;}}
}
B45b572:L45b572:{c.instructions+=3;NFSU2_TR(0x45b572);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45b575:{NFSU2_TR(0x45b575);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B45b579:{NFSU2_TR(0x45b579);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b57c:L45b57c:{c.instructions+=3;NFSU2_TR(0x45b57c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45b57d:{NFSU2_TR(0x45b57d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45b57e:{NFSU2_TR(0x45b57e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45b590:L45b590:{c.instructions+=17;NFSU2_TR(0x45b590);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45b592:{NFSU2_TR(0x45b592);
u8 U[4];
w4(U+0,u32(0x7722faull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45b597:{NFSU2_TR(0x45b597);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45b59d:{NFSU2_TR(0x45b59d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45b59e:{NFSU2_TR(0x45b59e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b5a5:{NFSU2_TR(0x45b5a5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45b5a6:{NFSU2_TR(0x45b5a6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45b5a7:{NFSU2_TR(0x45b5a7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45b5a8:{NFSU2_TR(0x45b5a8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45b5a9:{NFSU2_TR(0x45b5a9);
__builtin_memmove((R+24),(R+4),4);
}
B45b5ab:{NFSU2_TR(0x45b5ab);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45b5ac:{NFSU2_TR(0x45b5ac);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b5b0:{NFSU2_TR(0x45b5b0);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B45b5b2:{NFSU2_TR(0x45b5b2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((R+4),(U+0),4);
}
B45b5b5:{NFSU2_TR(0x45b5b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b5b9:{NFSU2_TR(0x45b5b9);
u8 U[4];
w4(U+0,u32(0x789eccull));
s4(u32(r4(R+24)),r4(U+0));
}
B45b5bf:{NFSU2_TR(0x45b5bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45b5c4ull));
TAIL_STATIC(0x576880u,576);
}
B45b5c4:L45b5c4:{c.instructions+=14;NFSU2_TR(0x45b5c4);
w4(R+28,u32(0xbf800000ull));
}
B45b5c9:{NFSU2_TR(0x45b5c9);
w4(R+20,u32(0x3f800000ull));
}
B45b5ce:{NFSU2_TR(0x45b5ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b5d1:{NFSU2_TR(0x45b5d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b5d4:{NFSU2_TR(0x45b5d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b5d7:{NFSU2_TR(0x45b5d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b5da:{NFSU2_TR(0x45b5da);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b5dd:{NFSU2_TR(0x45b5dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b5e0:{NFSU2_TR(0x45b5e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b5e3:{NFSU2_TR(0x45b5e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b5e6:{NFSU2_TR(0x45b5e6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B45b5e9:{NFSU2_TR(0x45b5e9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((R+4),(U+0),4);
}
B45b5ec:{NFSU2_TR(0x45b5ec);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B45b5f1:{NFSU2_TR(0x45b5f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45b5f6ull));
TAIL_STATIC(0x576880u,576);
}
B45b5f6:L45b5f6:{c.instructions+=12;NFSU2_TR(0x45b5f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b5f9:{NFSU2_TR(0x45b5f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b5fc:{NFSU2_TR(0x45b5fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b5ff:{NFSU2_TR(0x45b5ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b602:{NFSU2_TR(0x45b602);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b608:{NFSU2_TR(0x45b608);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b60e:{NFSU2_TR(0x45b60e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b614:{NFSU2_TR(0x45b614);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b617:{NFSU2_TR(0x45b617);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B45b61d:{NFSU2_TR(0x45b61d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B45b623:{NFSU2_TR(0x45b623);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B45b628:{NFSU2_TR(0x45b628);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45b62dull));
TAIL_STATIC(0x576880u,576);
}
B45b62d:L45b62d:{c.instructions+=12;NFSU2_TR(0x45b62d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b633:{NFSU2_TR(0x45b633);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b639:{NFSU2_TR(0x45b639);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b63f:{NFSU2_TR(0x45b63f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b645:{NFSU2_TR(0x45b645);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b64b:{NFSU2_TR(0x45b64b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b651:{NFSU2_TR(0x45b651);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b657:{NFSU2_TR(0x45b657);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b65d:{NFSU2_TR(0x45b65d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B45b663:{NFSU2_TR(0x45b663);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+4),(U+0),4);
}
B45b669:{NFSU2_TR(0x45b669);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0x3ull));
s1(u32(r4(U+0)),r1(U+4));
}
B45b66e:{NFSU2_TR(0x45b66e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45b673ull));
TAIL_STATIC(0x576880u,576);
}
B45b673:L45b673:{c.instructions+=12;NFSU2_TR(0x45b673);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b679:{NFSU2_TR(0x45b679);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b67f:{NFSU2_TR(0x45b67f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xecull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b685:{NFSU2_TR(0x45b685);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b68b:{NFSU2_TR(0x45b68b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x128ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b691:{NFSU2_TR(0x45b691);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b697:{NFSU2_TR(0x45b697);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b69d:{NFSU2_TR(0x45b69d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b6a3:{NFSU2_TR(0x45b6a3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B45b6a9:{NFSU2_TR(0x45b6a9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x148ull))));
__builtin_memmove((R+4),(U+0),4);
}
B45b6af:{NFSU2_TR(0x45b6af);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0x4ull));
s1(u32(r4(U+0)),r1(U+4));
}
B45b6b4:{NFSU2_TR(0x45b6b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45b6b9ull));
TAIL_STATIC(0x576880u,576);
}
B45b6b9:L45b6b9:{c.instructions+=23;NFSU2_TR(0x45b6b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x134ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b6bf:{NFSU2_TR(0x45b6bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b6c5:{NFSU2_TR(0x45b6c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x138ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b6cb:{NFSU2_TR(0x45b6cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x140ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b6d1:{NFSU2_TR(0x45b6d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x174ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b6d7:{NFSU2_TR(0x45b6d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x178ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b6dd:{NFSU2_TR(0x45b6dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b6e3:{NFSU2_TR(0x45b6e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x144ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b6e9:{NFSU2_TR(0x45b6e9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x170ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B45b6ef:{NFSU2_TR(0x45b6ef);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B45b6f5:{NFSU2_TR(0x45b6f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x184ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b6fb:{NFSU2_TR(0x45b6fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x188ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b701:{NFSU2_TR(0x45b701);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x190ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b707:{NFSU2_TR(0x45b707);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x180ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b70d:{NFSU2_TR(0x45b70d);
__builtin_memmove((R+0),(R+24),4);
}
B45b70f:{NFSU2_TR(0x45b70f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45b713:{NFSU2_TR(0x45b713);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45b714:{NFSU2_TR(0x45b714);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45b715:{NFSU2_TR(0x45b715);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B45b716:{NFSU2_TR(0x45b716);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B45b717:{NFSU2_TR(0x45b717);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b71e:{NFSU2_TR(0x45b71e);
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
B45b721:{NFSU2_TR(0x45b721);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45b730:L45b730:{c.instructions+=13;NFSU2_TR(0x45b730);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45b732:{NFSU2_TR(0x45b732);
u8 U[4];
w4(U+0,u32(0x7722faull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45b737:{NFSU2_TR(0x45b737);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45b73d:{NFSU2_TR(0x45b73d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45b73e:{NFSU2_TR(0x45b73e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b745:{NFSU2_TR(0x45b745);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45b746:{NFSU2_TR(0x45b746);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45b747:{NFSU2_TR(0x45b747);
__builtin_memmove((R+24),(R+4),4);
}
B45b749:{NFSU2_TR(0x45b749);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b74d:{NFSU2_TR(0x45b74d);
u8 U[4];
w4(U+0,u32(0x789eccull));
s4(u32(r4(R+24)),r4(U+0));
}
B45b753:{NFSU2_TR(0x45b753);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x148ull))));
__builtin_memmove((R+4),(U+0),4);
}
B45b759:{NFSU2_TR(0x45b759);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45b761:{NFSU2_TR(0x45b761);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45b766ull));
TAIL_STATIC(0x5768e0u,576);
}
B45b766:L45b766:{c.instructions+=3;NFSU2_TR(0x45b766);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+4),(U+0),4);
}
B45b76c:{NFSU2_TR(0x45b76c);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x3ull));
s1(u32(r4(U+0)),r1(U+4));
}
B45b771:{NFSU2_TR(0x45b771);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45b776ull));
TAIL_STATIC(0x5768e0u,576);
}
B45b776:L45b776:{c.instructions+=3;NFSU2_TR(0x45b776);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B45b77c:{NFSU2_TR(0x45b77c);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B45b781:{NFSU2_TR(0x45b781);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45b786ull));
TAIL_STATIC(0x5768e0u,576);
}
B45b786:L45b786:{c.instructions+=3;NFSU2_TR(0x45b786);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((R+4),(U+0),4);
}
B45b789:{NFSU2_TR(0x45b789);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B45b78e:{NFSU2_TR(0x45b78e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45b793ull));
TAIL_STATIC(0x5768e0u,576);
}
B45b793:L45b793:{c.instructions+=3;NFSU2_TR(0x45b793);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((R+4),(U+0),4);
}
B45b796:{NFSU2_TR(0x45b796);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B45b79b:{NFSU2_TR(0x45b79b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45b7a0ull));
TAIL_STATIC(0x5768e0u,576);
}
B45b7a0:L45b7a0:{c.instructions+=6;NFSU2_TR(0x45b7a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45b7a4:{NFSU2_TR(0x45b7a4);
u8 U[4];
w4(U+0,u32(0x789ce4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B45b7aa:{NFSU2_TR(0x45b7aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45b7ab:{NFSU2_TR(0x45b7ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b7b2:{NFSU2_TR(0x45b7b2);
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
B45b7b5:{NFSU2_TR(0x45b7b5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45b7c0:L45b7c0:{c.instructions+=18;NFSU2_TR(0x45b7c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45b7c4:{NFSU2_TR(0x45b7c4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45b7c5:{NFSU2_TR(0x45b7c5);
__builtin_memmove((R+24),(R+4),4);
}
B45b7c7:{NFSU2_TR(0x45b7c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x180ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b7cd:{NFSU2_TR(0x45b7cd);
__builtin_memmove((R+4),gp(0x78851c),4);
}
B45b7d3:{NFSU2_TR(0x45b7d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b7d6:{NFSU2_TR(0x45b7d6);
__builtin_memmove((R+8),gp(0x788520),4);
}
B45b7dc:{NFSU2_TR(0x45b7dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b7df:{NFSU2_TR(0x45b7df);
__builtin_memmove((R+0),gp(0x788524),4);
}
B45b7e4:{NFSU2_TR(0x45b7e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b7e7:{NFSU2_TR(0x45b7e7);
__builtin_memmove((R+4),gp(0x788528),4);
}
B45b7ed:{NFSU2_TR(0x45b7ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b7f0:{NFSU2_TR(0x45b7f0);
__builtin_memmove((R+8),gp(0x78852c),4);
}
B45b7f6:{NFSU2_TR(0x45b7f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b7f9:{NFSU2_TR(0x45b7f9);
{u32 ea_=u32(u32(7898392u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45b7ff:{NFSU2_TR(0x45b7ff);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45b800:{NFSU2_TR(0x45b800);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45b803:{NFSU2_TR(0x45b803);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45b808ull));
TAIL_STATIC(0x75bed4u,75b);
}
B45b808:L45b808:{c.instructions+=3;NFSU2_TR(0x45b808);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45b809:{NFSU2_TR(0x45b809);
__builtin_memmove((R+4),(R+28),4);
}
B45b80b:{NFSU2_TR(0x45b80b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45b810ull));
TAIL_STATIC(0x5768a0u,576);
}
B45b810:L45b810:{c.instructions+=3;NFSU2_TR(0x45b810);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45b812:{NFSU2_TR(0x45b812);
__builtin_memmove((R+4),(R+28),4);
}
B45b814:{NFSU2_TR(0x45b814);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45b819ull));
TAIL_STATIC(0x5769d0u,576);
}
B45b819:L45b819:{c.instructions+=18;NFSU2_TR(0x45b819);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45b81c:{NFSU2_TR(0x45b81c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b81f:{NFSU2_TR(0x45b81f);
{u32 ea_=u32(u32(7898396u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45b825:{NFSU2_TR(0x45b825);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B45b827:{NFSU2_TR(0x45b827);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45b82a:{NFSU2_TR(0x45b82a);
{u32 ea_=u32(r4(R+24)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B45b82d:{NFSU2_TR(0x45b82d);
{u32 ea_=u32(u32(7898400u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45b833:{NFSU2_TR(0x45b833);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B45b835:{NFSU2_TR(0x45b835);
{u32 ea_=u32(r4(R+24)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B45b838:{NFSU2_TR(0x45b838);
__builtin_memmove((R+4),gp(0x788524),4);
}
B45b83e:{NFSU2_TR(0x45b83e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b841:{NFSU2_TR(0x45b841);
__builtin_memmove((R+8),gp(0x788528),4);
}
B45b847:{NFSU2_TR(0x45b847);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b84a:{NFSU2_TR(0x45b84a);
{u32 ea_=u32(u32(7898412u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45b850:{NFSU2_TR(0x45b850);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B45b852:{NFSU2_TR(0x45b852);
{u32 ea_=u32(r4(R+24)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B45b855:{NFSU2_TR(0x45b855);
{u32 ea_=u32(u32(7898392u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45b85b:{NFSU2_TR(0x45b85b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45b860ull));
TAIL_STATIC(0x75bed4u,75b);
}
B45b860:L45b860:{c.instructions+=3;NFSU2_TR(0x45b860);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45b861:{NFSU2_TR(0x45b861);
__builtin_memmove((R+4),(R+28),4);
}
B45b863:{NFSU2_TR(0x45b863);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45b868ull));
TAIL_STATIC(0x5768a0u,576);
}
B45b868:L45b868:{c.instructions+=3;NFSU2_TR(0x45b868);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45b86a:{NFSU2_TR(0x45b86a);
__builtin_memmove((R+4),(R+28),4);
}
B45b86c:{NFSU2_TR(0x45b86c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45b871ull));
TAIL_STATIC(0x5769d0u,576);
}
B45b871:L45b871:{c.instructions+=15;NFSU2_TR(0x45b871);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45b874:{NFSU2_TR(0x45b874);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b87a:{NFSU2_TR(0x45b87a);
__builtin_memmove((R+4),gp(0x788534),4);
}
B45b880:{NFSU2_TR(0x45b880);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b886:{NFSU2_TR(0x45b886);
__builtin_memmove((R+8),gp(0x788538),4);
}
B45b88c:{NFSU2_TR(0x45b88c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b892:{NFSU2_TR(0x45b892);
__builtin_memmove((R+0),gp(0x78853c),4);
}
B45b897:{NFSU2_TR(0x45b897);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b89d:{NFSU2_TR(0x45b89d);
__builtin_memmove((R+4),gp(0x788540),4);
}
B45b8a3:{NFSU2_TR(0x45b8a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b8a9:{NFSU2_TR(0x45b8a9);
__builtin_memmove((R+8),gp(0x788544),4);
}
B45b8af:{NFSU2_TR(0x45b8af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b8b5:{NFSU2_TR(0x45b8b5);
{u32 ea_=u32(u32(7898416u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45b8bb:{NFSU2_TR(0x45b8bb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45b8c1:{NFSU2_TR(0x45b8c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45b8c6ull));
TAIL_STATIC(0x75bed4u,75b);
}
B45b8c6:L45b8c6:{c.instructions+=3;NFSU2_TR(0x45b8c6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45b8c7:{NFSU2_TR(0x45b8c7);
__builtin_memmove((R+4),(R+28),4);
}
B45b8c9:{NFSU2_TR(0x45b8c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45b8ceull));
TAIL_STATIC(0x5768a0u,576);
}
B45b8ce:L45b8ce:{c.instructions+=3;NFSU2_TR(0x45b8ce);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45b8d0:{NFSU2_TR(0x45b8d0);
__builtin_memmove((R+4),(R+28),4);
}
B45b8d2:{NFSU2_TR(0x45b8d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45b8d7ull));
TAIL_STATIC(0x5769d0u,576);
}
B45b8d7:L45b8d7:{c.instructions+=15;NFSU2_TR(0x45b8d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45b8dd:{NFSU2_TR(0x45b8dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b8e3:{NFSU2_TR(0x45b8e3);
__builtin_memmove((R+4),gp(0x78854c),4);
}
B45b8e9:{NFSU2_TR(0x45b8e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b8ef:{NFSU2_TR(0x45b8ef);
__builtin_memmove((R+8),gp(0x788550),4);
}
B45b8f5:{NFSU2_TR(0x45b8f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b8fb:{NFSU2_TR(0x45b8fb);
__builtin_memmove((R+0),gp(0x788554),4);
}
B45b900:{NFSU2_TR(0x45b900);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b906:{NFSU2_TR(0x45b906);
__builtin_memmove((R+4),gp(0x788558),4);
}
B45b90c:{NFSU2_TR(0x45b90c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b912:{NFSU2_TR(0x45b912);
__builtin_memmove((R+8),gp(0x78855c),4);
}
B45b918:{NFSU2_TR(0x45b918);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b91e:{NFSU2_TR(0x45b91e);
{u32 ea_=u32(u32(7898440u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45b924:{NFSU2_TR(0x45b924);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+28),(U+0),4);
}
B45b92a:{NFSU2_TR(0x45b92a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45b92full));
TAIL_STATIC(0x75bed4u,75b);
}
B45b92f:L45b92f:{c.instructions+=3;NFSU2_TR(0x45b92f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45b930:{NFSU2_TR(0x45b930);
__builtin_memmove((R+4),(R+28),4);
}
B45b932:{NFSU2_TR(0x45b932);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45b937ull));
TAIL_STATIC(0x5768a0u,576);
}
B45b937:L45b937:{c.instructions+=3;NFSU2_TR(0x45b937);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45b939:{NFSU2_TR(0x45b939);
__builtin_memmove((R+4),(R+28),4);
}
B45b93b:{NFSU2_TR(0x45b93b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45b940ull));
TAIL_STATIC(0x5769d0u,576);
}
B45b940:L45b940:{c.instructions+=15;NFSU2_TR(0x45b940);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45b946:{NFSU2_TR(0x45b946);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x128ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b94c:{NFSU2_TR(0x45b94c);
__builtin_memmove((R+4),gp(0x788564),4);
}
B45b952:{NFSU2_TR(0x45b952);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x134ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b958:{NFSU2_TR(0x45b958);
__builtin_memmove((R+8),gp(0x788568),4);
}
B45b95e:{NFSU2_TR(0x45b95e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x138ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b964:{NFSU2_TR(0x45b964);
__builtin_memmove((R+0),gp(0x78856c),4);
}
B45b969:{NFSU2_TR(0x45b969);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b96f:{NFSU2_TR(0x45b96f);
__builtin_memmove((R+4),gp(0x788570),4);
}
B45b975:{NFSU2_TR(0x45b975);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x140ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b97b:{NFSU2_TR(0x45b97b);
__builtin_memmove((R+8),gp(0x788574),4);
}
B45b981:{NFSU2_TR(0x45b981);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x144ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b987:{NFSU2_TR(0x45b987);
{u32 ea_=u32(u32(7898464u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45b98d:{NFSU2_TR(0x45b98d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x148ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45b993:{NFSU2_TR(0x45b993);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45b998ull));
TAIL_STATIC(0x75bed4u,75b);
}
B45b998:L45b998:{c.instructions+=3;NFSU2_TR(0x45b998);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45b999:{NFSU2_TR(0x45b999);
__builtin_memmove((R+4),(R+28),4);
}
B45b99b:{NFSU2_TR(0x45b99b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45b9a0ull));
TAIL_STATIC(0x5768a0u,576);
}
B45b9a0:L45b9a0:{c.instructions+=3;NFSU2_TR(0x45b9a0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45b9a2:{NFSU2_TR(0x45b9a2);
__builtin_memmove((R+4),(R+28),4);
}
B45b9a4:{NFSU2_TR(0x45b9a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45b9a9ull));
TAIL_STATIC(0x5769d0u,576);
}
B45b9a9:L45b9a9:{c.instructions+=5;NFSU2_TR(0x45b9a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45b9af:{NFSU2_TR(0x45b9af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45b9b0:{NFSU2_TR(0x45b9b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x174ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b9b6:{NFSU2_TR(0x45b9b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45b9b7:{NFSU2_TR(0x45b9b7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45b9c0:L45b9c0:{c.instructions+=9;NFSU2_TR(0x45b9c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x180ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45b9c6:{NFSU2_TR(0x45b9c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45b9c9:{NFSU2_TR(0x45b9c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x184ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45b9cf:{NFSU2_TR(0x45b9cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x190ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b9d5:{NFSU2_TR(0x45b9d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45b9d9:{NFSU2_TR(0x45b9d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x188ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b9df:{NFSU2_TR(0x45b9df);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x184ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45b9e5:{NFSU2_TR(0x45b9e5);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B45b9ec:{NFSU2_TR(0x45b9ec);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45b9f0:L45b9f0:{c.instructions+=6;NFSU2_TR(0x45b9f0);
__builtin_memmove((R+0),gp(0x890118),4);
}
B45b9f5:{NFSU2_TR(0x45b9f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B45b9f7:{NFSU2_TR(0x45b9f7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45b9f8:{NFSU2_TR(0x45b9f8);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B45b9fa:{NFSU2_TR(0x45b9fa);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45b9fd:{NFSU2_TR(0x45b9fd);
if(r1(R+518)){{goto L45ba11;}}
}
B45b9ff:L45b9ff:{c.instructions+=2;NFSU2_TR(0x45b9ff);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45ba02:{NFSU2_TR(0x45ba02);
if(r1(R+518)){{goto L45ba11;}}
}
B45ba04:L45ba04:{c.instructions+=2;NFSU2_TR(0x45ba04);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45ba06:{NFSU2_TR(0x45ba06);
if(r1(R+518)){{goto L45ba11;}}
}
B45ba08:L45ba08:{c.instructions+=3;NFSU2_TR(0x45ba08);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45ba0c:{NFSU2_TR(0x45ba0c);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B45ba0f:{NFSU2_TR(0x45ba0f);
{goto L45ba19;}
}
B45ba11:L45ba11:{c.instructions+=2;NFSU2_TR(0x45ba11);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45ba15:{NFSU2_TR(0x45ba15);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B45ba19:L45ba19:{c.instructions+=9;NFSU2_TR(0x45ba19);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x180ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45ba1f:{NFSU2_TR(0x45ba1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45ba22:{NFSU2_TR(0x45ba22);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45ba25:{NFSU2_TR(0x45ba25);
{u32 ea_=u32(r4(R+0)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45ba2b:{NFSU2_TR(0x45ba2b);
{u32 ea_=u32(u32(7881324u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45ba31:{NFSU2_TR(0x45ba31);
{u32 ea_=u32(u32(7881704u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B45ba37:{NFSU2_TR(0x45ba37);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B45ba39:{NFSU2_TR(0x45ba39);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B45ba3c:{NFSU2_TR(0x45ba3c);
if(r1(R+514)){{goto L45ba44;}}
}
B45ba3e:L45ba3e:{c.instructions+=2;NFSU2_TR(0x45ba3e);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B45ba42:{NFSU2_TR(0x45ba42);
{goto L45ba47;}
}
B45ba44:L45ba44:{c.instructions+=1;NFSU2_TR(0x45ba44);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B45ba47:L45ba47:{c.instructions+=8;NFSU2_TR(0x45ba47);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B45ba4d:{NFSU2_TR(0x45ba4d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B45ba50:{NFSU2_TR(0x45ba50);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B45ba53:{NFSU2_TR(0x45ba53);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B45ba59:{NFSU2_TR(0x45ba59);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B45ba5c:{NFSU2_TR(0x45ba5c);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B45ba5f:{NFSU2_TR(0x45ba5f);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B45ba65:{NFSU2_TR(0x45ba65);
if(r1(R+518)){{goto L45ba72;}}
}
B45ba67:L45ba67:{c.instructions+=2;NFSU2_TR(0x45ba67);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B45ba6a:{NFSU2_TR(0x45ba6a);
if(r1(R+518)){{goto L45ba72;}}
}
B45ba6c:L45ba6c:{c.instructions+=2;NFSU2_TR(0x45ba6c);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B45ba70:{NFSU2_TR(0x45ba70);
{goto L45ba75;}
}
B45ba72:L45ba72:{c.instructions+=1;NFSU2_TR(0x45ba72);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B45ba75:L45ba75:{c.instructions+=2;NFSU2_TR(0x45ba75);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x124ull))));
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
B45ba7b:{NFSU2_TR(0x45ba7b);
if(r1(R+518)){{goto L45ba8d;}}
}
B45ba7d:L45ba7d:{c.instructions+=2;NFSU2_TR(0x45ba7d);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8cull))));
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
B45ba83:{NFSU2_TR(0x45ba83);
if(r1(R+518)){{goto L45ba8d;}}
}
B45ba85:L45ba85:{c.instructions+=3;NFSU2_TR(0x45ba85);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x6ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B45ba89:{NFSU2_TR(0x45ba89);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B45ba8a:{NFSU2_TR(0x45ba8a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45ba8d:L45ba8d:{c.instructions+=3;NFSU2_TR(0x45ba8d);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x6ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B45ba90:{NFSU2_TR(0x45ba90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B45ba91:{NFSU2_TR(0x45ba91);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45baa0:L45baa0:{c.instructions+=2;NFSU2_TR(0x45baa0);
w4(R+0,u32(0x7ed138ull));
}
B45baa5:{NFSU2_TR(0x45baa5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45bab0:L45bab0:{c.instructions+=2;NFSU2_TR(0x45bab0);
__builtin_memmove((R+0),gp(0x7ed13c),4);
}
B45bab5:{NFSU2_TR(0x45bab5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45bac0:L45bac0:{c.instructions+=2;NFSU2_TR(0x45bac0);
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
B45bac3:{NFSU2_TR(0x45bac3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45bad0:L45bad0:{c.instructions+=2;NFSU2_TR(0x45bad0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B45bad4:{NFSU2_TR(0x45bad4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45bae0:L45bae0:{c.instructions+=2;NFSU2_TR(0x45bae0);
w4(R+0,u32(0x7ed244ull));
}
B45bae5:{NFSU2_TR(0x45bae5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45baf0:L45baf0:{c.instructions+=2;NFSU2_TR(0x45baf0);
__builtin_memmove((R+0),gp(0x7ed248),4);
}
B45baf5:{NFSU2_TR(0x45baf5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45bb00:L45bb00:{c.instructions+=15;NFSU2_TR(0x45bb00);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45bb02:{NFSU2_TR(0x45bb02);
u8 U[4];
w4(U+0,u32(0x77235eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45bb07:{NFSU2_TR(0x45bb07);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45bb0d:{NFSU2_TR(0x45bb0d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45bb0e:{NFSU2_TR(0x45bb0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45bb15:{NFSU2_TR(0x45bb15);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45bb16:{NFSU2_TR(0x45bb16);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45bb17:{NFSU2_TR(0x45bb17);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45bb18:{NFSU2_TR(0x45bb18);
__builtin_memmove((R+24),(R+4),4);
}
B45bb1a:{NFSU2_TR(0x45bb1a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45bb1e:{NFSU2_TR(0x45bb1e);
u8 U[4];
w4(U+0,u32(0x789ed4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B45bb24:{NFSU2_TR(0x45bb24);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B45bb27:{NFSU2_TR(0x45bb27);
w4(R+4,u32(0x10ull));
}
B45bb2c:{NFSU2_TR(0x45bb2c);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B45bb2e:{NFSU2_TR(0x45bb2e);
__builtin_memmove((R+28),(R+28),4);
}
B45bb30:L45bb30:{c.instructions+=5;NFSU2_TR(0x45bb30);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B45bb32:{NFSU2_TR(0x45bb32);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B45bb35:{NFSU2_TR(0x45bb35);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B45bb36:{NFSU2_TR(0x45bb36);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B45bb3a:{NFSU2_TR(0x45bb3a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x45bb30u);}goto L45bb30;}}
}
B45bb3c:L45bb3c:{c.instructions+=15;NFSU2_TR(0x45bb3c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B45bb3f:{NFSU2_TR(0x45bb3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45bb42:{NFSU2_TR(0x45bb42);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45bb45:{NFSU2_TR(0x45bb45);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45bb48:{NFSU2_TR(0x45bb48);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45bb4b:{NFSU2_TR(0x45bb4b);
u8 U[4];
w4(U+0,u32(0x789ee0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B45bb51:{NFSU2_TR(0x45bb51);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45bb53:{NFSU2_TR(0x45bb53);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B45bb59:{NFSU2_TR(0x45bb59);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45bb5d:{NFSU2_TR(0x45bb5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45bb60:{NFSU2_TR(0x45bb60);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45bb63:{NFSU2_TR(0x45bb63);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45bb66:{NFSU2_TR(0x45bb66);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45bb69:{NFSU2_TR(0x45bb69);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45bb6f:{NFSU2_TR(0x45bb6f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45bb74ull));
TAIL_STATIC(0x579f20u,579);
}
B45bb74:L45bb74:{c.instructions+=4;NFSU2_TR(0x45bb74);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45bb76:{NFSU2_TR(0x45bb76);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((R+4),(U+0),4);
}
B45bb7c:{NFSU2_TR(0x45bb7c);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B45bb81:{NFSU2_TR(0x45bb81);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45bb86ull));
TAIL_STATIC(0x579f20u,579);
}
B45bb86:L45bb86:{c.instructions+=4;NFSU2_TR(0x45bb86);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45bb88:{NFSU2_TR(0x45bb88);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B45bb8e:{NFSU2_TR(0x45bb8e);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B45bb93:{NFSU2_TR(0x45bb93);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45bb98ull));
TAIL_STATIC(0x579f20u,579);
}
B45bb98:L45bb98:{c.instructions+=4;NFSU2_TR(0x45bb98);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45bb9a:{NFSU2_TR(0x45bb9a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+4),(U+0),4);
}
B45bba0:{NFSU2_TR(0x45bba0);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0x3ull));
s1(u32(r4(U+0)),r1(U+4));
}
B45bba5:{NFSU2_TR(0x45bba5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45bbaaull));
TAIL_STATIC(0x579f20u,579);
}
B45bbaa:L45bbaa:{c.instructions+=4;NFSU2_TR(0x45bbaa);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45bbac:{NFSU2_TR(0x45bbac);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x144ull))));
__builtin_memmove((R+4),(U+0),4);
}
B45bbb2:{NFSU2_TR(0x45bbb2);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0x4ull));
s1(u32(r4(U+0)),r1(U+4));
}
B45bbb7:{NFSU2_TR(0x45bbb7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45bbbcull));
TAIL_STATIC(0x579f20u,579);
}
B45bbbc:L45bbbc:{c.instructions+=4;NFSU2_TR(0x45bbbc);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45bbbe:{NFSU2_TR(0x45bbbe);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16cull))));
__builtin_memmove((R+4),(U+0),4);
}
B45bbc4:{NFSU2_TR(0x45bbc4);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0x5ull));
s1(u32(r4(U+0)),r1(U+4));
}
B45bbc9:{NFSU2_TR(0x45bbc9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45bbceull));
TAIL_STATIC(0x579f20u,579);
}
B45bbce:L45bbce:{c.instructions+=29;NFSU2_TR(0x45bbce);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45bbd2:{NFSU2_TR(0x45bbd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45bbd8:{NFSU2_TR(0x45bbd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45bbde:{NFSU2_TR(0x45bbde);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45bbe4:{NFSU2_TR(0x45bbe4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45bbea:{NFSU2_TR(0x45bbea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45bbf0:{NFSU2_TR(0x45bbf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45bbf6:{NFSU2_TR(0x45bbf6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1acull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45bbfc:{NFSU2_TR(0x45bbfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45bc02:{NFSU2_TR(0x45bc02);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45bc08:{NFSU2_TR(0x45bc08);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45bc0e:{NFSU2_TR(0x45bc0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45bc14:{NFSU2_TR(0x45bc14);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45bc1a:{NFSU2_TR(0x45bc1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45bc20:{NFSU2_TR(0x45bc20);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45bc26:{NFSU2_TR(0x45bc26);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x194ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45bc2c:{NFSU2_TR(0x45bc2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x198ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45bc32:{NFSU2_TR(0x45bc32);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x19cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45bc38:{NFSU2_TR(0x45bc38);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45bc3e:{NFSU2_TR(0x45bc3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45bc44:{NFSU2_TR(0x45bc44);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45bc4a:{NFSU2_TR(0x45bc4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ccull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45bc50:{NFSU2_TR(0x45bc50);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45bc56:{NFSU2_TR(0x45bc56);
__builtin_memmove((R+0),(R+24),4);
}
B45bc58:{NFSU2_TR(0x45bc58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45bc59:{NFSU2_TR(0x45bc59);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B45bc5a:{NFSU2_TR(0x45bc5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45bc61:{NFSU2_TR(0x45bc61);
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
B45bc64:{NFSU2_TR(0x45bc64);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45bc70:L45bc70:{c.instructions+=13;NFSU2_TR(0x45bc70);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45bc72:{NFSU2_TR(0x45bc72);
u8 U[4];
w4(U+0,u32(0x77235eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45bc77:{NFSU2_TR(0x45bc77);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45bc7d:{NFSU2_TR(0x45bc7d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45bc7e:{NFSU2_TR(0x45bc7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45bc85:{NFSU2_TR(0x45bc85);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45bc86:{NFSU2_TR(0x45bc86);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45bc87:{NFSU2_TR(0x45bc87);
__builtin_memmove((R+24),(R+4),4);
}
B45bc89:{NFSU2_TR(0x45bc89);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45bc8d:{NFSU2_TR(0x45bc8d);
u8 U[4];
w4(U+0,u32(0x789ee0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B45bc93:{NFSU2_TR(0x45bc93);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16cull))));
__builtin_memmove((R+4),(U+0),4);
}
B45bc99:{NFSU2_TR(0x45bc99);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45bca1:{NFSU2_TR(0x45bca1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45bca6ull));
TAIL_STATIC(0x5768e0u,576);
}
B45bca6:L45bca6:{c.instructions+=3;NFSU2_TR(0x45bca6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x144ull))));
__builtin_memmove((R+4),(U+0),4);
}
B45bcac:{NFSU2_TR(0x45bcac);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x4ull));
s1(u32(r4(U+0)),r1(U+4));
}
B45bcb1:{NFSU2_TR(0x45bcb1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45bcb6ull));
TAIL_STATIC(0x5768e0u,576);
}
B45bcb6:L45bcb6:{c.instructions+=3;NFSU2_TR(0x45bcb6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+4),(U+0),4);
}
B45bcbc:{NFSU2_TR(0x45bcbc);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x3ull));
s1(u32(r4(U+0)),r1(U+4));
}
B45bcc1:{NFSU2_TR(0x45bcc1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45bcc6ull));
TAIL_STATIC(0x5768e0u,576);
}
B45bcc6:L45bcc6:{c.instructions+=3;NFSU2_TR(0x45bcc6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B45bccc:{NFSU2_TR(0x45bccc);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B45bcd1:{NFSU2_TR(0x45bcd1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45bcd6ull));
TAIL_STATIC(0x5768e0u,576);
}
B45bcd6:L45bcd6:{c.instructions+=3;NFSU2_TR(0x45bcd6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((R+4),(U+0),4);
}
B45bcdc:{NFSU2_TR(0x45bcdc);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B45bce1:{NFSU2_TR(0x45bce1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45bce6ull));
TAIL_STATIC(0x5768e0u,576);
}
B45bce6:L45bce6:{c.instructions+=3;NFSU2_TR(0x45bce6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B45bcec:{NFSU2_TR(0x45bcec);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B45bcf1:{NFSU2_TR(0x45bcf1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45bcf6ull));
TAIL_STATIC(0x5768e0u,576);
}
B45bcf6:L45bcf6:{c.instructions+=6;NFSU2_TR(0x45bcf6);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45bcfa:{NFSU2_TR(0x45bcfa);
u8 U[4];
w4(U+0,u32(0x789ce4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B45bd00:{NFSU2_TR(0x45bd00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45bd01:{NFSU2_TR(0x45bd01);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45bd08:{NFSU2_TR(0x45bd08);
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
B45bd0b:{NFSU2_TR(0x45bd0b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45bd10:L45bd10:{c.instructions+=6;NFSU2_TR(0x45bd10);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45bd11:{NFSU2_TR(0x45bd11);
__builtin_memmove((R+24),(R+4),4);
}
B45bd13:{NFSU2_TR(0x45bd13);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45bd17:{NFSU2_TR(0x45bd17);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45bd1a:{NFSU2_TR(0x45bd1a);
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
B45bd1d:{NFSU2_TR(0x45bd1d);
if(r1(R+518)){{goto L45bd32;}}
}
B45bd1f:L45bd1f:{c.instructions+=2;NFSU2_TR(0x45bd1f);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B45bd22:{NFSU2_TR(0x45bd22);
if(r1(R+518)){{goto L45bd32;}}
}
B45bd24:L45bd24:{c.instructions+=2;NFSU2_TR(0x45bd24);
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
B45bd27:{NFSU2_TR(0x45bd27);
if(r1(R+518)){{goto L45bd32;}}
}
B45bd29:L45bd29:{c.instructions+=2;NFSU2_TR(0x45bd29);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45bd30:{NFSU2_TR(0x45bd30);
{goto L45bd35;}
}
B45bd32:L45bd32:{c.instructions+=1;NFSU2_TR(0x45bd32);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45bd35:L45bd35:{c.instructions+=4;NFSU2_TR(0x45bd35);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45bd38:{NFSU2_TR(0x45bd38);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45bd3b:{NFSU2_TR(0x45bd3b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B45bd3d:{NFSU2_TR(0x45bd3d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45bd40ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B45bd40:L45bd40:{c.instructions+=8;NFSU2_TR(0x45bd40);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B45bd42:{NFSU2_TR(0x45bd42);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B45bd45:{NFSU2_TR(0x45bd45);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
__builtin_memmove((R+4),(U+0),1);
}
B45bd48:{NFSU2_TR(0x45bd48);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45bd4b:{NFSU2_TR(0x45bd4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45bd4e:{NFSU2_TR(0x45bd4e);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B45bd53:{NFSU2_TR(0x45bd53);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B45bd55:{NFSU2_TR(0x45bd55);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45bd64;}}
}
B45bd57:L45bd57:{c.instructions+=3;NFSU2_TR(0x45bd57);
__builtin_memmove((R+0),gp(0x890104),4);
}
B45bd5c:{NFSU2_TR(0x45bd5c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B45bd5e:{NFSU2_TR(0x45bd5e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45bd64;}}
}
B45bd60:L45bd60:{c.instructions+=2;NFSU2_TR(0x45bd60);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B45bd62:{NFSU2_TR(0x45bd62);
{goto L45bd69;}
}
B45bd64:L45bd64:{c.instructions+=1;NFSU2_TR(0x45bd64);
w4(R+0,u32(0x1ull));
}
B45bd69:L45bd69:{c.instructions+=10;NFSU2_TR(0x45bd69);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45bd6c:{NFSU2_TR(0x45bd6c);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B45bd6e:{NFSU2_TR(0x45bd6e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B45bd70:{NFSU2_TR(0x45bd70);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B45bd73:{NFSU2_TR(0x45bd73);
__builtin_memmove((R+0),(R+8),4);
}
B45bd75:{NFSU2_TR(0x45bd75);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45bd7b:{NFSU2_TR(0x45bd7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45bd81:{NFSU2_TR(0x45bd81);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xfffffff7ull))));
}
B45bd84:{NFSU2_TR(0x45bd84);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0xcull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xcull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B45bd87:{NFSU2_TR(0x45bd87);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L45bdb0;}}
}
B45bd89:L45bd89:{c.instructions+=2;NFSU2_TR(0x45bd89);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x45bdd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B45bd90:{NFSU2_TR(0x45bd90);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x45bdccull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B45bd97:L45bd97:{c.instructions+=9;NFSU2_TR(0x45bd97);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B45bd98:{NFSU2_TR(0x45bd98);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B45bd9a:{NFSU2_TR(0x45bd9a);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B45bd9c:{NFSU2_TR(0x45bd9c);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x3ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x3ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B45bd9f:{NFSU2_TR(0x45bd9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B45bda2:{NFSU2_TR(0x45bda2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x7f2f20ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B45bda9:{NFSU2_TR(0x45bda9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45bdac:{NFSU2_TR(0x45bdac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45bdad:{NFSU2_TR(0x45bdad);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45bdb0:L45bdb0:{c.instructions+=9;NFSU2_TR(0x45bdb0);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B45bdb2:{NFSU2_TR(0x45bdb2);
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
B45bdb5:{NFSU2_TR(0x45bdb5);
__builtin_memmove((R+4),(R+518),1);
}
B45bdb8:{NFSU2_TR(0x45bdb8);
__builtin_memmove((R+0),(R+4),4);
}
B45bdba:{NFSU2_TR(0x45bdba);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B45bdbd:{NFSU2_TR(0x45bdbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x7f2f20ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B45bdc4:{NFSU2_TR(0x45bdc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45bdc7:{NFSU2_TR(0x45bdc7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45bdc8:{NFSU2_TR(0x45bdc8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45bdf0:L45bdf0:{c.instructions+=8;NFSU2_TR(0x45bdf0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45bdf1:{NFSU2_TR(0x45bdf1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45bdf2:{NFSU2_TR(0x45bdf2);
__builtin_memmove((R+24),(R+4),4);
}
B45bdf4:{NFSU2_TR(0x45bdf4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B45bdf8:{NFSU2_TR(0x45bdf8);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B45bdfd:{NFSU2_TR(0x45bdfd);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B45bdff:{NFSU2_TR(0x45bdff);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B45be01:{NFSU2_TR(0x45be01);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45be0f;}}
}
B45be03:L45be03:{c.instructions+=2;NFSU2_TR(0x45be03);
u8 U[8];
__builtin_memmove((U+0),gp(0x890104),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45be09:{NFSU2_TR(0x45be09);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45be0f;}}
}
B45be0b:L45be0b:{c.instructions+=2;NFSU2_TR(0x45be0b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B45be0d:{NFSU2_TR(0x45be0d);
{goto L45be14;}
}
B45be0f:L45be0f:{c.instructions+=1;NFSU2_TR(0x45be0f);
w4(R+0,u32(0x1ull));
}
B45be14:L45be14:{c.instructions+=9;NFSU2_TR(0x45be14);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B45be16:{NFSU2_TR(0x45be16);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B45be18:{NFSU2_TR(0x45be18);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B45be1b:{NFSU2_TR(0x45be1b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45be1c:{NFSU2_TR(0x45be1c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45be22:{NFSU2_TR(0x45be22);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45be23:{NFSU2_TR(0x45be23);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45be29:{NFSU2_TR(0x45be29);
__builtin_memmove((R+4),(R+28),4);
}
B45be2b:{NFSU2_TR(0x45be2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45be30ull));
TAIL_STATIC(0x576a10u,576);
}
B45be30:L45be30:{c.instructions+=3;NFSU2_TR(0x45be30);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45be31:{NFSU2_TR(0x45be31);
__builtin_memmove((R+4),(R+28),4);
}
B45be33:{NFSU2_TR(0x45be33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45be38ull));
TAIL_STATIC(0x576a10u,576);
}
B45be38:L45be38:{c.instructions+=3;NFSU2_TR(0x45be38);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45be39:{NFSU2_TR(0x45be39);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B45be3f:{NFSU2_TR(0x45be3f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45be44ull));
TAIL_STATIC(0x576a10u,576);
}
B45be44:L45be44:{c.instructions+=3;NFSU2_TR(0x45be44);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45be45:{NFSU2_TR(0x45be45);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+4),(U+0),4);
}
B45be4b:{NFSU2_TR(0x45be4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45be50ull));
TAIL_STATIC(0x576a10u,576);
}
B45be50:L45be50:{c.instructions+=3;NFSU2_TR(0x45be50);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45be51:{NFSU2_TR(0x45be51);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x144ull))));
__builtin_memmove((R+4),(U+0),4);
}
B45be57:{NFSU2_TR(0x45be57);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45be5cull));
TAIL_STATIC(0x576a10u,576);
}
B45be5c:L45be5c:{c.instructions+=3;NFSU2_TR(0x45be5c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45be5d:{NFSU2_TR(0x45be5d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16cull))));
__builtin_memmove((R+4),(U+0),4);
}
B45be63:{NFSU2_TR(0x45be63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45be68ull));
TAIL_STATIC(0x576a10u,576);
}
B45be68:L45be68:{c.instructions+=3;NFSU2_TR(0x45be68);
u8 U[2];
__builtin_memmove((U+0),gp(0x89e7d9),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B45be6e:{NFSU2_TR(0x45be6e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45be6f:{NFSU2_TR(0x45be6f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45be7d;}}
}
B45be71:L45be71:{c.instructions+=2;NFSU2_TR(0x45be71);
u8 U[8];
__builtin_memmove((U+0),gp(0x890104),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45be77:{NFSU2_TR(0x45be77);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45be7d;}}
}
B45be79:L45be79:{c.instructions+=2;NFSU2_TR(0x45be79);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B45be7b:{NFSU2_TR(0x45be7b);
{goto L45be82;}
}
B45be7d:L45be7d:{c.instructions+=1;NFSU2_TR(0x45be7d);
w4(R+0,u32(0x1ull));
}
B45be82:L45be82:{c.instructions+=21;NFSU2_TR(0x45be82);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B45be84:{NFSU2_TR(0x45be84);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B45be86:{NFSU2_TR(0x45be86);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45be89:{NFSU2_TR(0x45be89);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B45be8c:{NFSU2_TR(0x45be8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45be92:{NFSU2_TR(0x45be92);
{u32 ea_=u32(r4(R+0)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45be95:{NFSU2_TR(0x45be95);
{u32 ea_=u32(r4(R+0)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45be98:{NFSU2_TR(0x45be98);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45be9b:{NFSU2_TR(0x45be9b);
{u32 ea_=u32(r4(R+24)+u32(120u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B45be9e:{NFSU2_TR(0x45be9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45bea5:{NFSU2_TR(0x45bea5);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B45bea7:{NFSU2_TR(0x45bea7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45bead:{NFSU2_TR(0x45bead);
{u32 ea_=u32(r4(R+24)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B45beb0:{NFSU2_TR(0x45beb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45beb6:{NFSU2_TR(0x45beb6);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B45beb8:{NFSU2_TR(0x45beb8);
__asm__ volatile(".byte 0xde,0xe1":::"memory");
}
B45beba:{NFSU2_TR(0x45beba);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B45bebc:{NFSU2_TR(0x45bebc);
{u32 ea_=u32(u32(7894420u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B45bec2:{NFSU2_TR(0x45bec2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B45bec4:{NFSU2_TR(0x45bec4);
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
B45bec7:{NFSU2_TR(0x45bec7);
if(r1(R+514)){{goto L45bed5;}}
}
B45bec9:L45bec9:{c.instructions+=5;NFSU2_TR(0x45bec9);
{u32 ea_=u32(u32(7894420u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B45becf:{NFSU2_TR(0x45becf);
{u32 ea_=u32(r4(R+24)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B45bed2:{NFSU2_TR(0x45bed2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45bed3:{NFSU2_TR(0x45bed3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B45bed4:{NFSU2_TR(0x45bed4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45bed5:L45bed5:{c.instructions+=4;NFSU2_TR(0x45bed5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45bed6:{NFSU2_TR(0x45bed6);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B45bed8:{NFSU2_TR(0x45bed8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B45bed9:{NFSU2_TR(0x45bed9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45bee0:L45bee0:{c.instructions+=2;NFSU2_TR(0x45bee0);
w4(R+0,u32(0x7ed254ull));
}
B45bee5:{NFSU2_TR(0x45bee5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45bef0:L45bef0:{c.instructions+=2;NFSU2_TR(0x45bef0);
__builtin_memmove((R+0),gp(0x7ed258),4);
}
B45bef5:{NFSU2_TR(0x45bef5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45bf00:L45bf00:{c.instructions+=6;NFSU2_TR(0x45bf00);
__builtin_memmove((R+0),(R+4),4);
}
B45bf02:{NFSU2_TR(0x45bf02);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45bf03:{NFSU2_TR(0x45bf03);
u8 U[4];
w4(U+0,u32(0x789ed4ull));
s4(u32(r4(R+0)),r4(U+0));
}
B45bf09:{NFSU2_TR(0x45bf09);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B45bf0c:{NFSU2_TR(0x45bf0c);
w4(R+24,u32(0x10ull));
}
B45bf11:{NFSU2_TR(0x45bf11);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B45bf13:L45bf13:{c.instructions+=5;NFSU2_TR(0x45bf13);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B45bf15:{NFSU2_TR(0x45bf15);
w1(R+512,carry<u32>(r4(R+4),u32(0x4ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B45bf18:{NFSU2_TR(0x45bf18);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+24),u32(0x1ull)));
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B45bf19:{NFSU2_TR(0x45bf19);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B45bf1d:{NFSU2_TR(0x45bf1d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x45bf13u);}goto L45bf13;}}
}
B45bf1f:L45bf1f:{c.instructions+=13;NFSU2_TR(0x45bf1f);
w1(R+4,u8(0x1ull));
}
B45bf21:{NFSU2_TR(0x45bf21);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B45bf24:{NFSU2_TR(0x45bf24);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45bf27:{NFSU2_TR(0x45bf27);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45bf2a:{NFSU2_TR(0x45bf2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45bf2d:{NFSU2_TR(0x45bf2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45bf30:{NFSU2_TR(0x45bf30);
u8 U[4];
w4(U+0,u32(0x789f04ull));
s4(u32(r4(R+0)),r4(U+0));
}
B45bf36:{NFSU2_TR(0x45bf36);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45bf3c:{NFSU2_TR(0x45bf3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45bf42:{NFSU2_TR(0x45bf42);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xe9ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B45bf48:{NFSU2_TR(0x45bf48);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B45bf4e:{NFSU2_TR(0x45bf4e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45bf4f:{NFSU2_TR(0x45bf4f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45bf50:L45bf50:{c.instructions+=8;NFSU2_TR(0x45bf50);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45bf51:{NFSU2_TR(0x45bf51);
__builtin_memmove((R+24),(R+4),4);
}
B45bf53:{NFSU2_TR(0x45bf53);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45bf59:{NFSU2_TR(0x45bf59);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B45bf5f:{NFSU2_TR(0x45bf5f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B45bf63:{NFSU2_TR(0x45bf63);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B45bf65:{NFSU2_TR(0x45bf65);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45bf66:{NFSU2_TR(0x45bf66);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45bf69ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B45bf69:L45bf69:{c.instructions+=5;NFSU2_TR(0x45bf69);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45bf6f:{NFSU2_TR(0x45bf6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B45bf71:{NFSU2_TR(0x45bf71);
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0xd0ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0xd0ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B45bf77:{NFSU2_TR(0x45bf77);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45bf78:{NFSU2_TR(0x45bf78);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45bf7bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B45bf7b:L45bf7b:{c.instructions+=2;NFSU2_TR(0x45bf7b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45bf7c:{NFSU2_TR(0x45bf7c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45bf80:L45bf80:{c.instructions+=3;NFSU2_TR(0x45bf80);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45bf84:{NFSU2_TR(0x45bf84);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x0ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B45bf87:{NFSU2_TR(0x45bf87);
if(r1(R+518)){{goto L45bf9a;}}
}
B45bf89:L45bf89:{c.instructions+=2;NFSU2_TR(0x45bf89);
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
B45bf8a:{NFSU2_TR(0x45bf8a);
if(r1(R+518)){{goto L45bf92;}}
}
B45bf8c:L45bf8c:{c.instructions+=2;NFSU2_TR(0x45bf8c);
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
B45bf8f:{NFSU2_TR(0x45bf8f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45bf92:L45bf92:{c.instructions+=2;NFSU2_TR(0x45bf92);
w4(R+0,u32(0xcull));
}
B45bf97:{NFSU2_TR(0x45bf97);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45bf9a:L45bf9a:{c.instructions+=2;NFSU2_TR(0x45bf9a);
w4(R+0,u32(0xbull));
}
B45bf9f:{NFSU2_TR(0x45bf9f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45bfb0:L45bfb0:{c.instructions+=10;NFSU2_TR(0x45bfb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45bfb3:{NFSU2_TR(0x45bfb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45bfb6:{NFSU2_TR(0x45bfb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x398ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45bfbc:{NFSU2_TR(0x45bfbc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45bfbd:{NFSU2_TR(0x45bfbd);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x39cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B45bfc3:{NFSU2_TR(0x45bfc3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45bfc4:{NFSU2_TR(0x45bfc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x394ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B45bfca:{NFSU2_TR(0x45bfca);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45bfcb:{NFSU2_TR(0x45bfcb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3a0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B45bfd1:{NFSU2_TR(0x45bfd1);
if(r1(R+518)){{goto L45bfd9;}}
}
B45bfd3:L45bfd3:{c.instructions+=1;NFSU2_TR(0x45bfd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45bfd9:L45bfd9:{c.instructions+=2;NFSU2_TR(0x45bfd9);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45bfdb:{NFSU2_TR(0x45bfdb);
if(r1(R+518)){{goto L45bfe3;}}
}
B45bfdd:L45bfdd:{c.instructions+=1;NFSU2_TR(0x45bfdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B45bfe3:L45bfe3:{c.instructions+=5;NFSU2_TR(0x45bfe3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45bfe9:{NFSU2_TR(0x45bfe9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45bfef:{NFSU2_TR(0x45bfef);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45bff5:{NFSU2_TR(0x45bff5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45bffb:{NFSU2_TR(0x45bffb);
u8 U[14];
__builtin_memmove((U+6),gp(0x89e7b0),4);
w1(R+512,u8((r4(U+6))<(u32(0x8ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x8ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
TAIL_STATIC(0x45c002u,45c);
}
XIT:NFSU2_TR_EXIT(0x45b,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
