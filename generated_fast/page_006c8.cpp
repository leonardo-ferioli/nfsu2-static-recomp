#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_673(u8* __restrict R,Cpu& c);
u32 body_698(u8* __restrict R,Cpu& c);
u32 body_699(u8* __restrict R,Cpu& c);
u32 body_69e(u8* __restrict R,Cpu& c);
u32 body_6c1(u8* __restrict R,Cpu& c);
u32 body_6c7(u8* __restrict R,Cpu& c);
u32 body_6c9(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6c8,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6c8,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6c8(u8* __restrict R,Cpu& c);
u32 page_6c8(Cpu& c){return body_6c8(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6c8(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6c8000:goto L6c8000;
case 0x6c8003:c.instructions+=3;goto B6c8003;
case 0x6c8006:c.instructions+=2;goto B6c8006;
case 0x6c800a:c.instructions+=1;goto B6c800a;
case 0x6c800c:goto L6c800c;
case 0x6c800f:c.instructions+=1;goto B6c800f;
case 0x6c8011:goto L6c8011;
case 0x6c8015:c.instructions+=1;goto B6c8015;
case 0x6c8017:goto L6c8017;
case 0x6c801b:c.instructions+=1;goto B6c801b;
case 0x6c801d:goto L6c801d;
case 0x6c8020:c.instructions+=4;goto B6c8020;
case 0x6c8023:c.instructions+=3;goto B6c8023;
case 0x6c8027:c.instructions+=2;goto B6c8027;
case 0x6c802a:c.instructions+=1;goto B6c802a;
case 0x6c8030:goto L6c8030;
case 0x6c8035:goto L6c8035;
case 0x6c803a:c.instructions+=4;goto B6c803a;
case 0x6c803f:c.instructions+=3;goto B6c803f;
case 0x6c8040:c.instructions+=2;goto B6c8040;
case 0x6c8041:c.instructions+=1;goto B6c8041;
case 0x6c8046:goto L6c8046;
case 0x6c8049:c.instructions+=2;goto B6c8049;
case 0x6c804e:c.instructions+=1;goto B6c804e;
case 0x6c8053:goto L6c8053;
case 0x6c8056:c.instructions+=15;goto B6c8056;
case 0x6c8059:c.instructions+=14;goto B6c8059;
case 0x6c805c:c.instructions+=13;goto B6c805c;
case 0x6c805f:c.instructions+=12;goto B6c805f;
case 0x6c8063:c.instructions+=11;goto B6c8063;
case 0x6c8065:c.instructions+=10;goto B6c8065;
case 0x6c8068:c.instructions+=9;goto B6c8068;
case 0x6c806b:c.instructions+=8;goto B6c806b;
case 0x6c806d:c.instructions+=7;goto B6c806d;
case 0x6c8070:c.instructions+=6;goto B6c8070;
case 0x6c8073:c.instructions+=5;goto B6c8073;
case 0x6c8076:c.instructions+=4;goto B6c8076;
case 0x6c8079:c.instructions+=3;goto B6c8079;
case 0x6c807c:c.instructions+=2;goto B6c807c;
case 0x6c807f:c.instructions+=1;goto B6c807f;
case 0x6c8085:goto L6c8085;
case 0x6c8087:goto L6c8087;
case 0x6c808a:goto L6c808a;
case 0x6c808d:c.instructions+=4;goto B6c808d;
case 0x6c8090:c.instructions+=3;goto B6c8090;
case 0x6c8094:c.instructions+=2;goto B6c8094;
case 0x6c8097:c.instructions+=1;goto B6c8097;
case 0x6c809d:goto L6c809d;
case 0x6c80a0:c.instructions+=8;goto B6c80a0;
case 0x6c80a2:c.instructions+=7;goto B6c80a2;
case 0x6c80a5:c.instructions+=6;goto B6c80a5;
case 0x6c80a8:c.instructions+=5;goto B6c80a8;
case 0x6c80ab:c.instructions+=4;goto B6c80ab;
case 0x6c80ae:c.instructions+=3;goto B6c80ae;
case 0x6c80b1:c.instructions+=2;goto B6c80b1;
case 0x6c80b3:c.instructions+=1;goto B6c80b3;
case 0x6c80b9:goto L6c80b9;
case 0x6c80bd:c.instructions+=2;goto B6c80bd;
case 0x6c80c1:c.instructions+=1;goto B6c80c1;
case 0x6c80c7:goto L6c80c7;
case 0x6c80ca:c.instructions+=8;goto B6c80ca;
case 0x6c80cd:c.instructions+=7;goto B6c80cd;
case 0x6c80d0:c.instructions+=6;goto B6c80d0;
case 0x6c80d3:c.instructions+=5;goto B6c80d3;
case 0x6c80d6:c.instructions+=4;goto B6c80d6;
case 0x6c80d9:c.instructions+=3;goto B6c80d9;
case 0x6c80dd:c.instructions+=2;goto B6c80dd;
case 0x6c80e0:c.instructions+=1;goto B6c80e0;
case 0x6c80e2:goto L6c80e2;
case 0x6c80e5:c.instructions+=3;goto B6c80e5;
case 0x6c80e8:c.instructions+=2;goto B6c80e8;
case 0x6c80eb:c.instructions+=1;goto B6c80eb;
case 0x6c80f1:goto L6c80f1;
case 0x6c80f4:c.instructions+=6;goto B6c80f4;
case 0x6c80f7:c.instructions+=5;goto B6c80f7;
case 0x6c80f9:c.instructions+=4;goto B6c80f9;
case 0x6c80fb:c.instructions+=3;goto B6c80fb;
case 0x6c8101:c.instructions+=2;goto B6c8101;
case 0x6c8107:c.instructions+=1;goto B6c8107;
case 0x6c8109:goto L6c8109;
case 0x6c810d:c.instructions+=3;goto B6c810d;
case 0x6c8110:c.instructions+=2;goto B6c8110;
case 0x6c8117:c.instructions+=1;goto B6c8117;
case 0x6c8119:goto L6c8119;
case 0x6c811c:goto L6c811c;
case 0x6c811e:c.instructions+=1;goto B6c811e;
case 0x6c8120:goto L6c8120;
case 0x6c8123:c.instructions+=4;goto B6c8123;
case 0x6c8126:c.instructions+=3;goto B6c8126;
case 0x6c8129:c.instructions+=2;goto B6c8129;
case 0x6c812c:c.instructions+=1;goto B6c812c;
case 0x6c812e:goto L6c812e;
case 0x6c8130:goto L6c8130;
case 0x6c8133:c.instructions+=4;goto B6c8133;
case 0x6c8136:c.instructions+=3;goto B6c8136;
case 0x6c8139:c.instructions+=2;goto B6c8139;
case 0x6c813c:c.instructions+=1;goto B6c813c;
case 0x6c813e:goto L6c813e;
case 0x6c8141:goto L6c8141;
case 0x6c8144:goto L6c8144;
case 0x6c8147:c.instructions+=4;goto B6c8147;
case 0x6c814a:c.instructions+=3;goto B6c814a;
case 0x6c814d:c.instructions+=2;goto B6c814d;
case 0x6c814f:c.instructions+=1;goto B6c814f;
case 0x6c8151:goto L6c8151;
case 0x6c8154:c.instructions+=2;goto B6c8154;
case 0x6c8157:c.instructions+=1;goto B6c8157;
case 0x6c8159:goto L6c8159;
case 0x6c815b:c.instructions+=5;goto B6c815b;
case 0x6c815c:c.instructions+=4;goto B6c815c;
case 0x6c815e:c.instructions+=3;goto B6c815e;
case 0x6c8163:c.instructions+=2;goto B6c8163;
case 0x6c8165:c.instructions+=1;goto B6c8165;
case 0x6c816a:goto L6c816a;
case 0x6c816c:c.instructions+=8;goto B6c816c;
case 0x6c816d:c.instructions+=7;goto B6c816d;
case 0x6c816e:c.instructions+=6;goto B6c816e;
case 0x6c8171:c.instructions+=5;goto B6c8171;
case 0x6c8173:c.instructions+=4;goto B6c8173;
case 0x6c8175:c.instructions+=3;goto B6c8175;
case 0x6c8176:c.instructions+=2;goto B6c8176;
case 0x6c8178:c.instructions+=1;goto B6c8178;
case 0x6c817d:goto L6c817d;
case 0x6c8180:c.instructions+=1;goto B6c8180;
case 0x6c8183:goto L6c8183;
case 0x6c8186:c.instructions+=3;goto B6c8186;
case 0x6c8189:c.instructions+=2;goto B6c8189;
case 0x6c818c:c.instructions+=1;goto B6c818c;
case 0x6c818e:goto L6c818e;
case 0x6c8191:c.instructions+=2;goto B6c8191;
case 0x6c8194:c.instructions+=1;goto B6c8194;
case 0x6c8197:goto L6c8197;
case 0x6c819a:c.instructions+=3;goto B6c819a;
case 0x6c819d:c.instructions+=2;goto B6c819d;
case 0x6c81a0:c.instructions+=1;goto B6c81a0;
case 0x6c81a6:goto L6c81a6;
case 0x6c81a9:c.instructions+=4;goto B6c81a9;
case 0x6c81ac:c.instructions+=3;goto B6c81ac;
case 0x6c81af:c.instructions+=2;goto B6c81af;
case 0x6c81b2:c.instructions+=1;goto B6c81b2;
case 0x6c81b8:goto L6c81b8;
case 0x6c81bc:c.instructions+=1;goto B6c81bc;
case 0x6c81c2:goto L6c81c2;
case 0x6c81c3:c.instructions+=9;goto B6c81c3;
case 0x6c81c5:c.instructions+=8;goto B6c81c5;
case 0x6c81c6:c.instructions+=7;goto B6c81c6;
case 0x6c81c9:c.instructions+=6;goto B6c81c9;
case 0x6c81cb:c.instructions+=5;goto B6c81cb;
case 0x6c81cc:c.instructions+=4;goto B6c81cc;
case 0x6c81cd:c.instructions+=3;goto B6c81cd;
case 0x6c81ce:c.instructions+=2;goto B6c81ce;
case 0x6c81d0:c.instructions+=1;goto B6c81d0;
case 0x6c81d5:goto L6c81d5;
case 0x6c81d7:c.instructions+=9;goto B6c81d7;
case 0x6c81d8:c.instructions+=8;goto B6c81d8;
case 0x6c81d9:c.instructions+=7;goto B6c81d9;
case 0x6c81dc:c.instructions+=6;goto B6c81dc;
case 0x6c81dd:c.instructions+=5;goto B6c81dd;
case 0x6c81de:c.instructions+=4;goto B6c81de;
case 0x6c81df:c.instructions+=3;goto B6c81df;
case 0x6c81e1:c.instructions+=2;goto B6c81e1;
case 0x6c81e3:c.instructions+=1;goto B6c81e3;
case 0x6c81e8:goto L6c81e8;
case 0x6c81eb:c.instructions+=1;goto B6c81eb;
case 0x6c81ed:goto L6c81ed;
case 0x6c81f0:c.instructions+=1;goto B6c81f0;
case 0x6c81f2:goto L6c81f2;
case 0x6c81f5:c.instructions+=10;goto B6c81f5;
case 0x6c81f8:c.instructions+=9;goto B6c81f8;
case 0x6c81fb:c.instructions+=8;goto B6c81fb;
case 0x6c81fd:c.instructions+=7;goto B6c81fd;
case 0x6c8200:c.instructions+=6;goto B6c8200;
case 0x6c8203:c.instructions+=5;goto B6c8203;
case 0x6c8206:c.instructions+=4;goto B6c8206;
case 0x6c8207:c.instructions+=3;goto B6c8207;
case 0x6c8209:c.instructions+=2;goto B6c8209;
case 0x6c820c:c.instructions+=1;goto B6c820c;
case 0x6c8211:goto L6c8211;
case 0x6c8214:c.instructions+=2;goto B6c8214;
case 0x6c8216:c.instructions+=1;goto B6c8216;
case 0x6c821b:goto L6c821b;
case 0x6c8222:c.instructions+=3;goto B6c8222;
case 0x6c8224:c.instructions+=2;goto B6c8224;
case 0x6c822b:c.instructions+=1;goto B6c822b;
case 0x6c8230:goto L6c8230;
case 0x6c8232:c.instructions+=1;goto B6c8232;
case 0x6c8234:goto L6c8234;
case 0x6c8236:c.instructions+=1;goto B6c8236;
case 0x6c823b:goto L6c823b;
case 0x6c823d:c.instructions+=1;goto B6c823d;
case 0x6c823f:goto L6c823f;
case 0x6c8241:goto L6c8241;
case 0x6c8243:c.instructions+=1;goto B6c8243;
case 0x6c8245:goto L6c8245;
case 0x6c824a:c.instructions+=1;goto B6c824a;
case 0x6c824f:goto L6c824f;
case 0x6c8251:c.instructions+=5;goto B6c8251;
case 0x6c8253:c.instructions+=4;goto B6c8253;
case 0x6c8255:c.instructions+=3;goto B6c8255;
case 0x6c825a:c.instructions+=2;goto B6c825a;
case 0x6c825c:c.instructions+=1;goto B6c825c;
case 0x6c8261:goto L6c8261;
case 0x6c8263:c.instructions+=3;goto B6c8263;
case 0x6c8265:c.instructions+=2;goto B6c8265;
case 0x6c8267:c.instructions+=1;goto B6c8267;
case 0x6c8269:goto L6c8269;
case 0x6c826b:c.instructions+=1;goto B6c826b;
case 0x6c8270:goto L6c8270;
case 0x6c8272:c.instructions+=1;goto B6c8272;
case 0x6c8277:goto L6c8277;
case 0x6c827a:c.instructions+=2;goto B6c827a;
case 0x6c827b:c.instructions+=1;goto B6c827b;
case 0x6c8280:goto L6c8280;
case 0x6c8282:c.instructions+=2;goto B6c8282;
case 0x6c8285:c.instructions+=1;goto B6c8285;
case 0x6c8287:goto L6c8287;
case 0x6c8289:c.instructions+=1;goto B6c8289;
case 0x6c828e:goto L6c828e;
case 0x6c8291:c.instructions+=18;goto B6c8291;
case 0x6c8293:c.instructions+=17;goto B6c8293;
case 0x6c8296:c.instructions+=16;goto B6c8296;
case 0x6c8298:c.instructions+=15;goto B6c8298;
case 0x6c829b:c.instructions+=14;goto B6c829b;
case 0x6c829d:c.instructions+=13;goto B6c829d;
case 0x6c82a0:c.instructions+=12;goto B6c82a0;
case 0x6c82a2:c.instructions+=11;goto B6c82a2;
case 0x6c82a5:c.instructions+=10;goto B6c82a5;
case 0x6c82a7:c.instructions+=9;goto B6c82a7;
case 0x6c82aa:c.instructions+=8;goto B6c82aa;
case 0x6c82ad:c.instructions+=7;goto B6c82ad;
case 0x6c82b0:c.instructions+=6;goto B6c82b0;
case 0x6c82b3:c.instructions+=5;goto B6c82b3;
case 0x6c82b5:c.instructions+=4;goto B6c82b5;
case 0x6c82b8:c.instructions+=3;goto B6c82b8;
case 0x6c82b9:c.instructions+=2;goto B6c82b9;
case 0x6c82bb:c.instructions+=1;goto B6c82bb;
case 0x6c82c0:goto L6c82c0;
case 0x6c82c2:c.instructions+=3;goto B6c82c2;
case 0x6c82c4:c.instructions+=2;goto B6c82c4;
case 0x6c82c7:c.instructions+=1;goto B6c82c7;
case 0x6c82cc:goto L6c82cc;
case 0x6c82d0:c.instructions+=1;goto B6c82d0;
case 0x6c82d6:goto L6c82d6;
case 0x6c82d9:c.instructions+=4;goto B6c82d9;
case 0x6c82dc:c.instructions+=3;goto B6c82dc;
case 0x6c82df:c.instructions+=2;goto B6c82df;
case 0x6c82e2:c.instructions+=1;goto B6c82e2;
case 0x6c82e4:goto L6c82e4;
case 0x6c82e9:goto L6c82e9;
case 0x6c82ec:c.instructions+=6;goto B6c82ec;
case 0x6c82ef:c.instructions+=5;goto B6c82ef;
case 0x6c82f1:c.instructions+=4;goto B6c82f1;
case 0x6c82f3:c.instructions+=3;goto B6c82f3;
case 0x6c82f9:c.instructions+=2;goto B6c82f9;
case 0x6c82ff:c.instructions+=1;goto B6c82ff;
case 0x6c8301:goto L6c8301;
case 0x6c8304:c.instructions+=8;goto B6c8304;
case 0x6c8306:c.instructions+=7;goto B6c8306;
case 0x6c8309:c.instructions+=6;goto B6c8309;
case 0x6c830c:c.instructions+=5;goto B6c830c;
case 0x6c830f:c.instructions+=4;goto B6c830f;
case 0x6c8312:c.instructions+=3;goto B6c8312;
case 0x6c8315:c.instructions+=2;goto B6c8315;
case 0x6c8317:c.instructions+=1;goto B6c8317;
case 0x6c8319:goto L6c8319;
case 0x6c831b:c.instructions+=6;goto B6c831b;
case 0x6c831d:c.instructions+=5;goto B6c831d;
case 0x6c831f:c.instructions+=4;goto B6c831f;
case 0x6c8325:c.instructions+=3;goto B6c8325;
case 0x6c8327:c.instructions+=2;goto B6c8327;
case 0x6c832a:c.instructions+=1;goto B6c832a;
case 0x6c832d:goto L6c832d;
case 0x6c8330:goto L6c8330;
case 0x6c8333:c.instructions+=4;goto B6c8333;
case 0x6c8334:c.instructions+=3;goto B6c8334;
case 0x6c8337:c.instructions+=2;goto B6c8337;
case 0x6c833a:c.instructions+=1;goto B6c833a;
case 0x6c833c:goto L6c833c;
case 0x6c833e:c.instructions+=2;goto B6c833e;
case 0x6c8341:c.instructions+=1;goto B6c8341;
case 0x6c8343:goto L6c8343;
case 0x6c8346:c.instructions+=6;goto B6c8346;
case 0x6c8349:c.instructions+=5;goto B6c8349;
case 0x6c834c:c.instructions+=4;goto B6c834c;
case 0x6c834f:c.instructions+=3;goto B6c834f;
case 0x6c8352:c.instructions+=2;goto B6c8352;
case 0x6c8354:c.instructions+=1;goto B6c8354;
case 0x6c8356:goto L6c8356;
case 0x6c8359:c.instructions+=3;goto B6c8359;
case 0x6c835c:c.instructions+=2;goto B6c835c;
case 0x6c835e:c.instructions+=1;goto B6c835e;
case 0x6c8361:goto L6c8361;
case 0x6c8362:c.instructions+=2;goto B6c8362;
case 0x6c8365:c.instructions+=1;goto B6c8365;
case 0x6c8367:goto L6c8367;
case 0x6c836a:goto L6c836a;
case 0x6c836c:c.instructions+=1;goto B6c836c;
case 0x6c8371:goto L6c8371;
case 0x6c8374:goto L6c8374;
case 0x6c8375:c.instructions+=4;goto B6c8375;
case 0x6c8376:c.instructions+=3;goto B6c8376;
case 0x6c8377:c.instructions+=2;goto B6c8377;
case 0x6c8378:c.instructions+=1;goto B6c8378;
case 0x6c8379:goto L6c8379;
case 0x6c837b:c.instructions+=33;goto B6c837b;
case 0x6c837c:c.instructions+=32;goto B6c837c;
case 0x6c837e:c.instructions+=31;goto B6c837e;
case 0x6c8384:c.instructions+=30;goto B6c8384;
case 0x6c8385:c.instructions+=29;goto B6c8385;
case 0x6c8386:c.instructions+=28;goto B6c8386;
case 0x6c8387:c.instructions+=27;goto B6c8387;
case 0x6c8389:c.instructions+=26;goto B6c8389;
case 0x6c838f:c.instructions+=25;goto B6c838f;
case 0x6c8391:c.instructions+=24;goto B6c8391;
case 0x6c8393:c.instructions+=23;goto B6c8393;
case 0x6c8396:c.instructions+=22;goto B6c8396;
case 0x6c8399:c.instructions+=21;goto B6c8399;
case 0x6c839b:c.instructions+=20;goto B6c839b;
case 0x6c839e:c.instructions+=19;goto B6c839e;
case 0x6c839f:c.instructions+=18;goto B6c839f;
case 0x6c83a0:c.instructions+=17;goto B6c83a0;
case 0x6c83a6:c.instructions+=16;goto B6c83a6;
case 0x6c83a7:c.instructions+=15;goto B6c83a7;
case 0x6c83aa:c.instructions+=14;goto B6c83aa;
case 0x6c83ab:c.instructions+=13;goto B6c83ab;
case 0x6c83b1:c.instructions+=12;goto B6c83b1;
case 0x6c83b2:c.instructions+=11;goto B6c83b2;
case 0x6c83b5:c.instructions+=10;goto B6c83b5;
case 0x6c83b6:c.instructions+=9;goto B6c83b6;
case 0x6c83b9:c.instructions+=8;goto B6c83b9;
case 0x6c83ba:c.instructions+=7;goto B6c83ba;
case 0x6c83bf:c.instructions+=6;goto B6c83bf;
case 0x6c83c0:c.instructions+=5;goto B6c83c0;
case 0x6c83c2:c.instructions+=4;goto B6c83c2;
case 0x6c83c5:c.instructions+=3;goto B6c83c5;
case 0x6c83cc:c.instructions+=2;goto B6c83cc;
case 0x6c83d3:c.instructions+=1;goto B6c83d3;
case 0x6c83d8:goto L6c83d8;
case 0x6c83da:c.instructions+=1;goto B6c83da;
case 0x6c83dc:goto L6c83dc;
case 0x6c83dd:c.instructions+=14;goto B6c83dd;
case 0x6c83de:c.instructions+=13;goto B6c83de;
case 0x6c83e1:c.instructions+=12;goto B6c83e1;
case 0x6c83e2:c.instructions+=11;goto B6c83e2;
case 0x6c83e8:c.instructions+=10;goto B6c83e8;
case 0x6c83e9:c.instructions+=9;goto B6c83e9;
case 0x6c83ec:c.instructions+=8;goto B6c83ec;
case 0x6c83ed:c.instructions+=7;goto B6c83ed;
case 0x6c83f0:c.instructions+=6;goto B6c83f0;
case 0x6c83f1:c.instructions+=5;goto B6c83f1;
case 0x6c83f6:c.instructions+=4;goto B6c83f6;
case 0x6c83fc:c.instructions+=3;goto B6c83fc;
case 0x6c83fe:c.instructions+=2;goto B6c83fe;
case 0x6c8401:c.instructions+=1;goto B6c8401;
case 0x6c8406:goto L6c8406;
case 0x6c8408:c.instructions+=1;goto B6c8408;
case 0x6c840e:goto L6c840e;
case 0x6c8411:c.instructions+=2;goto B6c8411;
case 0x6c8413:c.instructions+=1;goto B6c8413;
case 0x6c8415:goto L6c8415;
case 0x6c8417:c.instructions+=2;goto B6c8417;
case 0x6c841a:c.instructions+=1;goto B6c841a;
case 0x6c841d:goto L6c841d;
case 0x6c8420:c.instructions+=4;goto B6c8420;
case 0x6c8423:c.instructions+=3;goto B6c8423;
case 0x6c842a:c.instructions+=2;goto B6c842a;
case 0x6c8431:c.instructions+=1;goto B6c8431;
case 0x6c8433:goto L6c8433;
case 0x6c8439:c.instructions+=10;goto B6c8439;
case 0x6c843c:c.instructions+=9;goto B6c843c;
case 0x6c843f:c.instructions+=8;goto B6c843f;
case 0x6c8442:c.instructions+=7;goto B6c8442;
case 0x6c8445:c.instructions+=6;goto B6c8445;
case 0x6c8448:c.instructions+=5;goto B6c8448;
case 0x6c844b:c.instructions+=4;goto B6c844b;
case 0x6c844e:c.instructions+=3;goto B6c844e;
case 0x6c8451:c.instructions+=2;goto B6c8451;
case 0x6c8455:c.instructions+=1;goto B6c8455;
case 0x6c8457:goto L6c8457;
case 0x6c845d:c.instructions+=5;goto B6c845d;
case 0x6c8460:c.instructions+=4;goto B6c8460;
case 0x6c8462:c.instructions+=3;goto B6c8462;
case 0x6c8464:c.instructions+=2;goto B6c8464;
case 0x6c8467:c.instructions+=1;goto B6c8467;
case 0x6c8469:goto L6c8469;
case 0x6c846d:c.instructions+=1;goto B6c846d;
case 0x6c846f:goto L6c846f;
case 0x6c8472:c.instructions+=3;goto B6c8472;
case 0x6c8476:c.instructions+=2;goto B6c8476;
case 0x6c8479:c.instructions+=1;goto B6c8479;
case 0x6c847b:goto L6c847b;
case 0x6c8481:c.instructions+=5;goto B6c8481;
case 0x6c8483:c.instructions+=4;goto B6c8483;
case 0x6c8485:c.instructions+=3;goto B6c8485;
case 0x6c848b:c.instructions+=2;goto B6c848b;
case 0x6c848e:c.instructions+=1;goto B6c848e;
case 0x6c8490:goto L6c8490;
case 0x6c8496:c.instructions+=1;goto B6c8496;
case 0x6c8498:goto L6c8498;
case 0x6c849a:c.instructions+=1;goto B6c849a;
case 0x6c849c:goto L6c849c;
case 0x6c84a2:goto L6c84a2;
case 0x6c84a4:c.instructions+=2;goto B6c84a4;
case 0x6c84a6:c.instructions+=1;goto B6c84a6;
case 0x6c84a8:goto L6c84a8;
case 0x6c84ae:c.instructions+=6;goto B6c84ae;
case 0x6c84b5:c.instructions+=5;goto B6c84b5;
case 0x6c84b8:c.instructions+=4;goto B6c84b8;
case 0x6c84bb:c.instructions+=3;goto B6c84bb;
case 0x6c84bc:c.instructions+=2;goto B6c84bc;
case 0x6c84be:c.instructions+=1;goto B6c84be;
case 0x6c84c0:goto L6c84c0;
case 0x6c84c2:goto L6c84c2;
case 0x6c84c3:c.instructions+=4;goto B6c84c3;
case 0x6c84c4:c.instructions+=3;goto B6c84c4;
case 0x6c84c5:c.instructions+=2;goto B6c84c5;
case 0x6c84c6:c.instructions+=1;goto B6c84c6;
case 0x6c84c7:goto L6c84c7;
case 0x6c84c9:c.instructions+=33;goto B6c84c9;
case 0x6c84ca:c.instructions+=32;goto B6c84ca;
case 0x6c84cc:c.instructions+=31;goto B6c84cc;
case 0x6c84d2:c.instructions+=30;goto B6c84d2;
case 0x6c84d3:c.instructions+=29;goto B6c84d3;
case 0x6c84d4:c.instructions+=28;goto B6c84d4;
case 0x6c84d5:c.instructions+=27;goto B6c84d5;
case 0x6c84d7:c.instructions+=26;goto B6c84d7;
case 0x6c84dd:c.instructions+=25;goto B6c84dd;
case 0x6c84df:c.instructions+=24;goto B6c84df;
case 0x6c84e1:c.instructions+=23;goto B6c84e1;
case 0x6c84e4:c.instructions+=22;goto B6c84e4;
case 0x6c84e7:c.instructions+=21;goto B6c84e7;
case 0x6c84e9:c.instructions+=20;goto B6c84e9;
case 0x6c84ec:c.instructions+=19;goto B6c84ec;
case 0x6c84ed:c.instructions+=18;goto B6c84ed;
case 0x6c84ee:c.instructions+=17;goto B6c84ee;
case 0x6c84f4:c.instructions+=16;goto B6c84f4;
case 0x6c84f5:c.instructions+=15;goto B6c84f5;
case 0x6c84f8:c.instructions+=14;goto B6c84f8;
case 0x6c84f9:c.instructions+=13;goto B6c84f9;
case 0x6c84ff:c.instructions+=12;goto B6c84ff;
case 0x6c8500:c.instructions+=11;goto B6c8500;
case 0x6c8503:c.instructions+=10;goto B6c8503;
case 0x6c8504:c.instructions+=9;goto B6c8504;
case 0x6c850a:c.instructions+=8;goto B6c850a;
case 0x6c850b:c.instructions+=7;goto B6c850b;
case 0x6c8510:c.instructions+=6;goto B6c8510;
case 0x6c8511:c.instructions+=5;goto B6c8511;
case 0x6c8513:c.instructions+=4;goto B6c8513;
case 0x6c8516:c.instructions+=3;goto B6c8516;
case 0x6c851d:c.instructions+=2;goto B6c851d;
case 0x6c8524:c.instructions+=1;goto B6c8524;
case 0x6c8529:goto L6c8529;
case 0x6c852b:c.instructions+=1;goto B6c852b;
case 0x6c852d:goto L6c852d;
case 0x6c852e:c.instructions+=14;goto B6c852e;
case 0x6c852f:c.instructions+=13;goto B6c852f;
case 0x6c8532:c.instructions+=12;goto B6c8532;
case 0x6c8533:c.instructions+=11;goto B6c8533;
case 0x6c8539:c.instructions+=10;goto B6c8539;
case 0x6c853a:c.instructions+=9;goto B6c853a;
case 0x6c853d:c.instructions+=8;goto B6c853d;
case 0x6c853e:c.instructions+=7;goto B6c853e;
case 0x6c8544:c.instructions+=6;goto B6c8544;
case 0x6c8545:c.instructions+=5;goto B6c8545;
case 0x6c854a:c.instructions+=4;goto B6c854a;
case 0x6c8550:c.instructions+=3;goto B6c8550;
case 0x6c8552:c.instructions+=2;goto B6c8552;
case 0x6c8555:c.instructions+=1;goto B6c8555;
case 0x6c855a:goto L6c855a;
case 0x6c855c:c.instructions+=1;goto B6c855c;
case 0x6c8562:goto L6c8562;
case 0x6c8565:c.instructions+=2;goto B6c8565;
case 0x6c8567:c.instructions+=1;goto B6c8567;
case 0x6c8569:goto L6c8569;
case 0x6c856c:c.instructions+=5;goto B6c856c;
case 0x6c856f:c.instructions+=4;goto B6c856f;
case 0x6c8576:c.instructions+=3;goto B6c8576;
case 0x6c857d:c.instructions+=2;goto B6c857d;
case 0x6c857f:c.instructions+=1;goto B6c857f;
case 0x6c8581:goto L6c8581;
case 0x6c8588:c.instructions+=1;goto B6c8588;
case 0x6c858a:goto L6c858a;
case 0x6c8591:c.instructions+=1;goto B6c8591;
case 0x6c8593:goto L6c8593;
case 0x6c8596:c.instructions+=2;goto B6c8596;
case 0x6c8599:c.instructions+=1;goto B6c8599;
case 0x6c859b:goto L6c859b;
case 0x6c85a1:c.instructions+=5;goto B6c85a1;
case 0x6c85a3:c.instructions+=4;goto B6c85a3;
case 0x6c85a5:c.instructions+=3;goto B6c85a5;
case 0x6c85ab:c.instructions+=2;goto B6c85ab;
case 0x6c85ae:c.instructions+=1;goto B6c85ae;
case 0x6c85b0:goto L6c85b0;
case 0x6c85b6:c.instructions+=1;goto B6c85b6;
case 0x6c85b8:goto L6c85b8;
case 0x6c85ba:c.instructions+=1;goto B6c85ba;
case 0x6c85bc:goto L6c85bc;
case 0x6c85c2:goto L6c85c2;
case 0x6c85c3:c.instructions+=9;goto B6c85c3;
case 0x6c85c5:c.instructions+=8;goto B6c85c5;
case 0x6c85c6:c.instructions+=7;goto B6c85c6;
case 0x6c85c9:c.instructions+=6;goto B6c85c9;
case 0x6c85ca:c.instructions+=5;goto B6c85ca;
case 0x6c85cc:c.instructions+=4;goto B6c85cc;
case 0x6c85cd:c.instructions+=3;goto B6c85cd;
case 0x6c85d0:c.instructions+=2;goto B6c85d0;
case 0x6c85d2:c.instructions+=1;goto B6c85d2;
case 0x6c85d7:goto L6c85d7;
case 0x6c85da:c.instructions+=2;goto B6c85da;
case 0x6c85dd:c.instructions+=1;goto B6c85dd;
case 0x6c85df:goto L6c85df;
case 0x6c85e4:c.instructions+=1;goto B6c85e4;
case 0x6c85e6:goto L6c85e6;
case 0x6c85e8:c.instructions+=2;goto B6c85e8;
case 0x6c85ea:c.instructions+=1;goto B6c85ea;
case 0x6c85ec:goto L6c85ec;
case 0x6c85ee:c.instructions+=2;goto B6c85ee;
case 0x6c85f1:c.instructions+=1;goto B6c85f1;
case 0x6c85f4:goto L6c85f4;
case 0x6c85fa:c.instructions+=12;goto B6c85fa;
case 0x6c85fd:c.instructions+=11;goto B6c85fd;
case 0x6c8604:c.instructions+=10;goto B6c8604;
case 0x6c8607:c.instructions+=9;goto B6c8607;
case 0x6c860b:c.instructions+=8;goto B6c860b;
case 0x6c860e:c.instructions+=7;goto B6c860e;
case 0x6c8614:c.instructions+=6;goto B6c8614;
case 0x6c8617:c.instructions+=5;goto B6c8617;
case 0x6c861a:c.instructions+=4;goto B6c861a;
case 0x6c861b:c.instructions+=3;goto B6c861b;
case 0x6c861d:c.instructions+=2;goto B6c861d;
case 0x6c8620:c.instructions+=1;goto B6c8620;
case 0x6c8622:goto L6c8622;
case 0x6c8624:goto L6c8624;
case 0x6c8625:c.instructions+=4;goto B6c8625;
case 0x6c8626:c.instructions+=3;goto B6c8626;
case 0x6c8627:c.instructions+=2;goto B6c8627;
case 0x6c8628:c.instructions+=1;goto B6c8628;
case 0x6c8629:goto L6c8629;
case 0x6c862b:c.instructions+=20;goto B6c862b;
case 0x6c862c:c.instructions+=19;goto B6c862c;
case 0x6c862e:c.instructions+=18;goto B6c862e;
case 0x6c8634:c.instructions+=17;goto B6c8634;
case 0x6c8635:c.instructions+=16;goto B6c8635;
case 0x6c8636:c.instructions+=15;goto B6c8636;
case 0x6c8638:c.instructions+=14;goto B6c8638;
case 0x6c863e:c.instructions+=13;goto B6c863e;
case 0x6c8640:c.instructions+=12;goto B6c8640;
case 0x6c8641:c.instructions+=11;goto B6c8641;
case 0x6c8643:c.instructions+=10;goto B6c8643;
case 0x6c8645:c.instructions+=9;goto B6c8645;
case 0x6c8646:c.instructions+=8;goto B6c8646;
case 0x6c864b:c.instructions+=7;goto B6c864b;
case 0x6c864d:c.instructions+=6;goto B6c864d;
case 0x6c8650:c.instructions+=5;goto B6c8650;
case 0x6c8653:c.instructions+=4;goto B6c8653;
case 0x6c8656:c.instructions+=3;goto B6c8656;
case 0x6c865d:c.instructions+=2;goto B6c865d;
case 0x6c8664:c.instructions+=1;goto B6c8664;
case 0x6c8666:goto L6c8666;
case 0x6c8668:c.instructions+=1;goto B6c8668;
case 0x6c866d:goto L6c866d;
case 0x6c866e:c.instructions+=13;goto B6c866e;
case 0x6c866f:c.instructions+=12;goto B6c866f;
case 0x6c8672:c.instructions+=11;goto B6c8672;
case 0x6c8673:c.instructions+=10;goto B6c8673;
case 0x6c8679:c.instructions+=9;goto B6c8679;
case 0x6c867a:c.instructions+=8;goto B6c867a;
case 0x6c867d:c.instructions+=7;goto B6c867d;
case 0x6c867e:c.instructions+=6;goto B6c867e;
case 0x6c8681:c.instructions+=5;goto B6c8681;
case 0x6c8682:c.instructions+=4;goto B6c8682;
case 0x6c8687:c.instructions+=3;goto B6c8687;
case 0x6c8688:c.instructions+=2;goto B6c8688;
case 0x6c868a:c.instructions+=1;goto B6c868a;
case 0x6c868f:goto L6c868f;
case 0x6c8691:c.instructions+=1;goto B6c8691;
case 0x6c8693:goto L6c8693;
case 0x6c8694:c.instructions+=13;goto B6c8694;
case 0x6c8695:c.instructions+=12;goto B6c8695;
case 0x6c8698:c.instructions+=11;goto B6c8698;
case 0x6c8699:c.instructions+=10;goto B6c8699;
case 0x6c869f:c.instructions+=9;goto B6c869f;
case 0x6c86a0:c.instructions+=8;goto B6c86a0;
case 0x6c86a3:c.instructions+=7;goto B6c86a3;
case 0x6c86a4:c.instructions+=6;goto B6c86a4;
case 0x6c86a7:c.instructions+=5;goto B6c86a7;
case 0x6c86a8:c.instructions+=4;goto B6c86a8;
case 0x6c86ad:c.instructions+=3;goto B6c86ad;
case 0x6c86b3:c.instructions+=2;goto B6c86b3;
case 0x6c86b5:c.instructions+=1;goto B6c86b5;
case 0x6c86ba:goto L6c86ba;
case 0x6c86bc:c.instructions+=1;goto B6c86bc;
case 0x6c86be:goto L6c86be;
case 0x6c86bf:c.instructions+=13;goto B6c86bf;
case 0x6c86c0:c.instructions+=12;goto B6c86c0;
case 0x6c86c3:c.instructions+=11;goto B6c86c3;
case 0x6c86c4:c.instructions+=10;goto B6c86c4;
case 0x6c86ca:c.instructions+=9;goto B6c86ca;
case 0x6c86cb:c.instructions+=8;goto B6c86cb;
case 0x6c86ce:c.instructions+=7;goto B6c86ce;
case 0x6c86cf:c.instructions+=6;goto B6c86cf;
case 0x6c86d2:c.instructions+=5;goto B6c86d2;
case 0x6c86d3:c.instructions+=4;goto B6c86d3;
case 0x6c86d8:c.instructions+=3;goto B6c86d8;
case 0x6c86de:c.instructions+=2;goto B6c86de;
case 0x6c86e0:c.instructions+=1;goto B6c86e0;
case 0x6c86e5:goto L6c86e5;
case 0x6c86e7:c.instructions+=1;goto B6c86e7;
case 0x6c86e9:goto L6c86e9;
case 0x6c86ea:c.instructions+=13;goto B6c86ea;
case 0x6c86eb:c.instructions+=12;goto B6c86eb;
case 0x6c86ee:c.instructions+=11;goto B6c86ee;
case 0x6c86ef:c.instructions+=10;goto B6c86ef;
case 0x6c86f5:c.instructions+=9;goto B6c86f5;
case 0x6c86f6:c.instructions+=8;goto B6c86f6;
case 0x6c86f9:c.instructions+=7;goto B6c86f9;
case 0x6c86fa:c.instructions+=6;goto B6c86fa;
case 0x6c86fd:c.instructions+=5;goto B6c86fd;
case 0x6c86fe:c.instructions+=4;goto B6c86fe;
case 0x6c8703:c.instructions+=3;goto B6c8703;
case 0x6c8709:c.instructions+=2;goto B6c8709;
case 0x6c870b:c.instructions+=1;goto B6c870b;
case 0x6c8710:goto L6c8710;
case 0x6c8712:c.instructions+=1;goto B6c8712;
case 0x6c8718:goto L6c8718;
case 0x6c871e:c.instructions+=5;goto B6c871e;
case 0x6c8721:c.instructions+=4;goto B6c8721;
case 0x6c8724:c.instructions+=3;goto B6c8724;
case 0x6c8727:c.instructions+=2;goto B6c8727;
case 0x6c872a:c.instructions+=1;goto B6c872a;
case 0x6c872d:goto L6c872d;
case 0x6c872f:c.instructions+=5;goto B6c872f;
case 0x6c8732:c.instructions+=4;goto B6c8732;
case 0x6c8735:c.instructions+=3;goto B6c8735;
case 0x6c8738:c.instructions+=2;goto B6c8738;
case 0x6c873c:c.instructions+=1;goto B6c873c;
case 0x6c8742:goto L6c8742;
case 0x6c8748:c.instructions+=5;goto B6c8748;
case 0x6c874b:c.instructions+=4;goto B6c874b;
case 0x6c874d:c.instructions+=3;goto B6c874d;
case 0x6c874f:c.instructions+=2;goto B6c874f;
case 0x6c8752:c.instructions+=1;goto B6c8752;
case 0x6c8758:goto L6c8758;
case 0x6c875c:c.instructions+=1;goto B6c875c;
case 0x6c8762:goto L6c8762;
case 0x6c8765:c.instructions+=5;goto B6c8765;
case 0x6c8767:c.instructions+=4;goto B6c8767;
case 0x6c8768:c.instructions+=3;goto B6c8768;
case 0x6c876b:c.instructions+=2;goto B6c876b;
case 0x6c876e:c.instructions+=1;goto B6c876e;
case 0x6c8770:goto L6c8770;
case 0x6c8776:c.instructions+=4;goto B6c8776;
case 0x6c8779:c.instructions+=3;goto B6c8779;
case 0x6c877d:c.instructions+=2;goto B6c877d;
case 0x6c8781:c.instructions+=1;goto B6c8781;
case 0x6c8783:goto L6c8783;
case 0x6c8786:c.instructions+=3;goto B6c8786;
case 0x6c8789:c.instructions+=2;goto B6c8789;
case 0x6c878c:c.instructions+=1;goto B6c878c;
case 0x6c878e:goto L6c878e;
case 0x6c8791:goto L6c8791;
case 0x6c8793:goto L6c8793;
case 0x6c8799:c.instructions+=15;goto B6c8799;
case 0x6c879c:c.instructions+=14;goto B6c879c;
case 0x6c87a3:c.instructions+=13;goto B6c87a3;
case 0x6c87a6:c.instructions+=12;goto B6c87a6;
case 0x6c87a9:c.instructions+=11;goto B6c87a9;
case 0x6c87b0:c.instructions+=10;goto B6c87b0;
case 0x6c87b3:c.instructions+=9;goto B6c87b3;
case 0x6c87b6:c.instructions+=8;goto B6c87b6;
case 0x6c87b7:c.instructions+=7;goto B6c87b7;
case 0x6c87b8:c.instructions+=6;goto B6c87b8;
case 0x6c87bb:c.instructions+=5;goto B6c87bb;
case 0x6c87be:c.instructions+=4;goto B6c87be;
case 0x6c87c0:c.instructions+=3;goto B6c87c0;
case 0x6c87c3:c.instructions+=2;goto B6c87c3;
case 0x6c87c6:c.instructions+=1;goto B6c87c6;
case 0x6c87cb:goto L6c87cb;
case 0x6c87ce:c.instructions+=2;goto B6c87ce;
case 0x6c87d1:c.instructions+=1;goto B6c87d1;
case 0x6c87d3:goto L6c87d3;
case 0x6c87d6:c.instructions+=5;goto B6c87d6;
case 0x6c87d9:c.instructions+=4;goto B6c87d9;
case 0x6c87da:c.instructions+=3;goto B6c87da;
case 0x6c87dc:c.instructions+=2;goto B6c87dc;
case 0x6c87df:c.instructions+=1;goto B6c87df;
case 0x6c87e4:goto L6c87e4;
case 0x6c87e8:c.instructions+=2;goto B6c87e8;
case 0x6c87eb:c.instructions+=1;goto B6c87eb;
case 0x6c87ed:goto L6c87ed;
case 0x6c87f1:c.instructions+=1;goto B6c87f1;
case 0x6c87f3:goto L6c87f3;
case 0x6c87fa:c.instructions+=1;goto B6c87fa;
case 0x6c87fd:goto L6c87fd;
case 0x6c8804:goto L6c8804;
case 0x6c880a:c.instructions+=6;goto B6c880a;
case 0x6c880d:c.instructions+=5;goto B6c880d;
case 0x6c8810:c.instructions+=4;goto B6c8810;
case 0x6c8814:c.instructions+=3;goto B6c8814;
case 0x6c8817:c.instructions+=2;goto B6c8817;
case 0x6c881a:c.instructions+=1;goto B6c881a;
case 0x6c8820:goto L6c8820;
case 0x6c8822:goto L6c8822;
case 0x6c8823:c.instructions+=4;goto B6c8823;
case 0x6c8824:c.instructions+=3;goto B6c8824;
case 0x6c8825:c.instructions+=2;goto B6c8825;
case 0x6c8826:c.instructions+=1;goto B6c8826;
case 0x6c8827:goto L6c8827;
case 0x6c8829:c.instructions+=2;goto B6c8829;
case 0x6c882a:c.instructions+=1;goto B6c882a;
case 0x6c882c:goto L6c882c;
case 0x6c882f:c.instructions+=3;goto B6c882f;
case 0x6c8835:c.instructions+=2;goto B6c8835;
case 0x6c8838:c.instructions+=1;goto B6c8838;
case 0x6c883a:goto L6c883a;
case 0x6c883f:c.instructions+=1;goto B6c883f;
case 0x6c8841:goto L6c8841;
case 0x6c8843:c.instructions+=12;goto B6c8843;
case 0x6c8844:c.instructions+=11;goto B6c8844;
case 0x6c8846:c.instructions+=10;goto B6c8846;
case 0x6c884c:c.instructions+=9;goto B6c884c;
case 0x6c8850:c.instructions+=8;goto B6c8850;
case 0x6c8851:c.instructions+=7;goto B6c8851;
case 0x6c8852:c.instructions+=6;goto B6c8852;
case 0x6c8853:c.instructions+=5;goto B6c8853;
case 0x6c8855:c.instructions+=4;goto B6c8855;
case 0x6c8857:c.instructions+=3;goto B6c8857;
case 0x6c885a:c.instructions+=2;goto B6c885a;
case 0x6c885b:c.instructions+=1;goto B6c885b;
case 0x6c8861:goto L6c8861;
case 0x6c8863:goto L6c8863;
case 0x6c8869:c.instructions+=15;goto B6c8869;
case 0x6c886b:c.instructions+=14;goto B6c886b;
case 0x6c886d:c.instructions+=13;goto B6c886d;
case 0x6c8872:c.instructions+=12;goto B6c8872;
case 0x6c8874:c.instructions+=11;goto B6c8874;
case 0x6c8877:c.instructions+=10;goto B6c8877;
case 0x6c887a:c.instructions+=9;goto B6c887a;
case 0x6c887c:c.instructions+=8;goto B6c887c;
case 0x6c887d:c.instructions+=7;goto B6c887d;
case 0x6c8880:c.instructions+=6;goto B6c8880;
case 0x6c8883:c.instructions+=5;goto B6c8883;
case 0x6c888a:c.instructions+=4;goto B6c888a;
case 0x6c8891:c.instructions+=3;goto B6c8891;
case 0x6c8894:c.instructions+=2;goto B6c8894;
case 0x6c8897:c.instructions+=1;goto B6c8897;
case 0x6c8899:goto L6c8899;
case 0x6c889f:c.instructions+=2;goto B6c889f;
case 0x6c88a5:c.instructions+=1;goto B6c88a5;
case 0x6c88a7:goto L6c88a7;
case 0x6c88aa:c.instructions+=1;goto B6c88aa;
case 0x6c88af:goto L6c88af;
case 0x6c88b3:goto L6c88b3;
case 0x6c88b7:goto L6c88b7;
case 0x6c88b9:c.instructions+=5;goto B6c88b9;
case 0x6c88bb:c.instructions+=4;goto B6c88bb;
case 0x6c88bc:c.instructions+=3;goto B6c88bc;
case 0x6c88bf:c.instructions+=2;goto B6c88bf;
case 0x6c88c5:c.instructions+=1;goto B6c88c5;
case 0x6c88cb:goto L6c88cb;
case 0x6c88cd:goto L6c88cd;
case 0x6c88cf:c.instructions+=2;goto B6c88cf;
case 0x6c88d0:c.instructions+=1;goto B6c88d0;
case 0x6c88d6:goto L6c88d6;
case 0x6c88d8:goto L6c88d8;
case 0x6c88da:c.instructions+=5;goto B6c88da;
case 0x6c88e0:c.instructions+=4;goto B6c88e0;
case 0x6c88e3:c.instructions+=3;goto B6c88e3;
case 0x6c88e6:c.instructions+=2;goto B6c88e6;
case 0x6c88e9:c.instructions+=1;goto B6c88e9;
case 0x6c88ec:goto L6c88ec;
case 0x6c88f0:c.instructions+=1;goto B6c88f0;
case 0x6c88f2:goto L6c88f2;
case 0x6c88f4:c.instructions+=3;goto B6c88f4;
case 0x6c88f5:c.instructions+=2;goto B6c88f5;
case 0x6c88f8:c.instructions+=1;goto B6c88f8;
case 0x6c88fa:goto L6c88fa;
case 0x6c88fd:goto L6c88fd;
case 0x6c8900:c.instructions+=8;goto B6c8900;
case 0x6c8903:c.instructions+=7;goto B6c8903;
case 0x6c890a:c.instructions+=6;goto B6c890a;
case 0x6c890d:c.instructions+=5;goto B6c890d;
case 0x6c8910:c.instructions+=4;goto B6c8910;
case 0x6c8913:c.instructions+=3;goto B6c8913;
case 0x6c8915:c.instructions+=2;goto B6c8915;
case 0x6c8918:c.instructions+=1;goto B6c8918;
case 0x6c891a:goto L6c891a;
case 0x6c891d:c.instructions+=2;goto B6c891d;
case 0x6c8920:c.instructions+=1;goto B6c8920;
case 0x6c8926:goto L6c8926;
case 0x6c8929:c.instructions+=15;goto B6c8929;
case 0x6c892b:c.instructions+=14;goto B6c892b;
case 0x6c892e:c.instructions+=13;goto B6c892e;
case 0x6c8931:c.instructions+=12;goto B6c8931;
case 0x6c8933:c.instructions+=11;goto B6c8933;
case 0x6c8939:c.instructions+=10;goto B6c8939;
case 0x6c893f:c.instructions+=9;goto B6c893f;
case 0x6c8940:c.instructions+=8;goto B6c8940;
case 0x6c8943:c.instructions+=7;goto B6c8943;
case 0x6c8944:c.instructions+=6;goto B6c8944;
case 0x6c8947:c.instructions+=5;goto B6c8947;
case 0x6c8949:c.instructions+=4;goto B6c8949;
case 0x6c894a:c.instructions+=3;goto B6c894a;
case 0x6c894b:c.instructions+=2;goto B6c894b;
case 0x6c894e:c.instructions+=1;goto B6c894e;
case 0x6c8953:goto L6c8953;
case 0x6c8955:c.instructions+=1;goto B6c8955;
case 0x6c895b:goto L6c895b;
case 0x6c895c:c.instructions+=14;goto B6c895c;
case 0x6c895f:c.instructions+=13;goto B6c895f;
case 0x6c8965:c.instructions+=12;goto B6c8965;
case 0x6c8966:c.instructions+=11;goto B6c8966;
case 0x6c896c:c.instructions+=10;goto B6c896c;
case 0x6c896d:c.instructions+=9;goto B6c896d;
case 0x6c8970:c.instructions+=8;goto B6c8970;
case 0x6c8971:c.instructions+=7;goto B6c8971;
case 0x6c8977:c.instructions+=6;goto B6c8977;
case 0x6c8978:c.instructions+=5;goto B6c8978;
case 0x6c897e:c.instructions+=4;goto B6c897e;
case 0x6c897f:c.instructions+=3;goto B6c897f;
case 0x6c8982:c.instructions+=2;goto B6c8982;
case 0x6c8984:c.instructions+=1;goto B6c8984;
case 0x6c8989:goto L6c8989;
case 0x6c898c:c.instructions+=1;goto B6c898c;
case 0x6c898e:goto L6c898e;
case 0x6c8991:c.instructions+=3;goto B6c8991;
case 0x6c8993:c.instructions+=2;goto B6c8993;
case 0x6c8996:c.instructions+=1;goto B6c8996;
case 0x6c899d:goto L6c899d;
case 0x6c89a1:c.instructions+=2;goto B6c89a1;
case 0x6c89a4:c.instructions+=1;goto B6c89a4;
case 0x6c89a6:goto L6c89a6;
case 0x6c89a9:c.instructions+=4;goto B6c89a9;
case 0x6c89ab:c.instructions+=3;goto B6c89ab;
case 0x6c89ae:c.instructions+=2;goto B6c89ae;
case 0x6c89b0:c.instructions+=1;goto B6c89b0;
case 0x6c89b2:goto L6c89b2;
case 0x6c89b5:goto L6c89b5;
case 0x6c89b6:c.instructions+=3;goto B6c89b6;
case 0x6c89b9:c.instructions+=2;goto B6c89b9;
case 0x6c89bc:c.instructions+=1;goto B6c89bc;
case 0x6c89be:goto L6c89be;
case 0x6c89c2:c.instructions+=1;goto B6c89c2;
case 0x6c89c4:goto L6c89c4;
case 0x6c89c7:c.instructions+=5;goto B6c89c7;
case 0x6c89ca:c.instructions+=4;goto B6c89ca;
case 0x6c89cd:c.instructions+=3;goto B6c89cd;
case 0x6c89d1:c.instructions+=2;goto B6c89d1;
case 0x6c89d4:c.instructions+=1;goto B6c89d4;
case 0x6c89da:goto L6c89da;
case 0x6c89dc:goto L6c89dc;
case 0x6c89e3:goto L6c89e3;
case 0x6c89e5:c.instructions+=2;goto B6c89e5;
case 0x6c89e8:c.instructions+=1;goto B6c89e8;
case 0x6c89eb:goto L6c89eb;
case 0x6c89ee:c.instructions+=1;goto B6c89ee;
case 0x6c89f0:goto L6c89f0;
case 0x6c89f2:c.instructions+=3;goto B6c89f2;
case 0x6c89f3:c.instructions+=2;goto B6c89f3;
case 0x6c89f6:c.instructions+=1;goto B6c89f6;
case 0x6c89f8:goto L6c89f8;
case 0x6c89fb:goto L6c89fb;
case 0x6c8a03:c.instructions+=1;goto B6c8a03;
case 0x6c8a05:goto L6c8a05;
case 0x6c8a08:c.instructions+=2;goto B6c8a08;
case 0x6c8a0b:c.instructions+=1;goto B6c8a0b;
case 0x6c8a0d:goto L6c8a0d;
case 0x6c8a10:c.instructions+=1;goto B6c8a10;
case 0x6c8a12:goto L6c8a12;
case 0x6c8a15:c.instructions+=2;goto B6c8a15;
case 0x6c8a1c:c.instructions+=1;goto B6c8a1c;
case 0x6c8a1f:goto L6c8a1f;
case 0x6c8a23:c.instructions+=2;goto B6c8a23;
case 0x6c8a25:c.instructions+=1;goto B6c8a25;
case 0x6c8a27:goto L6c8a27;
case 0x6c8a2a:c.instructions+=5;goto B6c8a2a;
case 0x6c8a2d:c.instructions+=4;goto B6c8a2d;
case 0x6c8a30:c.instructions+=3;goto B6c8a30;
case 0x6c8a32:c.instructions+=2;goto B6c8a32;
case 0x6c8a35:c.instructions+=1;goto B6c8a35;
case 0x6c8a38:goto L6c8a38;
case 0x6c8a3a:c.instructions+=1;goto B6c8a3a;
case 0x6c8a3c:goto L6c8a3c;
case 0x6c8a3f:c.instructions+=4;goto B6c8a3f;
case 0x6c8a42:c.instructions+=3;goto B6c8a42;
case 0x6c8a45:c.instructions+=2;goto B6c8a45;
case 0x6c8a48:c.instructions+=1;goto B6c8a48;
case 0x6c8a4a:goto L6c8a4a;
case 0x6c8a4b:c.instructions+=2;goto B6c8a4b;
case 0x6c8a4e:c.instructions+=1;goto B6c8a4e;
case 0x6c8a50:goto L6c8a50;
case 0x6c8a52:goto L6c8a52;
case 0x6c8a59:goto L6c8a59;
case 0x6c8a5c:c.instructions+=4;goto B6c8a5c;
case 0x6c8a5f:c.instructions+=3;goto B6c8a5f;
case 0x6c8a61:c.instructions+=2;goto B6c8a61;
case 0x6c8a64:c.instructions+=1;goto B6c8a64;
case 0x6c8a66:goto L6c8a66;
case 0x6c8a69:c.instructions+=4;goto B6c8a69;
case 0x6c8a6c:c.instructions+=3;goto B6c8a6c;
case 0x6c8a6f:c.instructions+=2;goto B6c8a6f;
case 0x6c8a73:c.instructions+=1;goto B6c8a73;
case 0x6c8a79:goto L6c8a79;
case 0x6c8a7c:c.instructions+=1;goto B6c8a7c;
case 0x6c8a82:goto L6c8a82;
case 0x6c8a86:c.instructions+=1;goto B6c8a86;
case 0x6c8a8c:goto L6c8a8c;
case 0x6c8a90:c.instructions+=2;goto B6c8a90;
case 0x6c8a94:c.instructions+=1;goto B6c8a94;
case 0x6c8a9a:goto L6c8a9a;
case 0x6c8a9d:c.instructions+=6;goto B6c8a9d;
case 0x6c8aa4:c.instructions+=5;goto B6c8aa4;
case 0x6c8aa7:c.instructions+=4;goto B6c8aa7;
case 0x6c8aab:c.instructions+=3;goto B6c8aab;
case 0x6c8aad:c.instructions+=2;goto B6c8aad;
case 0x6c8ab0:c.instructions+=1;goto B6c8ab0;
case 0x6c8ab6:goto L6c8ab6;
case 0x6c8ab9:c.instructions+=2;goto B6c8ab9;
case 0x6c8abb:c.instructions+=1;goto B6c8abb;
case 0x6c8ac1:goto L6c8ac1;
case 0x6c8ac4:c.instructions+=2;goto B6c8ac4;
case 0x6c8ac7:c.instructions+=1;goto B6c8ac7;
case 0x6c8aca:goto L6c8aca;
case 0x6c8acd:c.instructions+=3;goto B6c8acd;
case 0x6c8acf:c.instructions+=2;goto B6c8acf;
case 0x6c8ad1:c.instructions+=1;goto B6c8ad1;
case 0x6c8ad3:goto L6c8ad3;
case 0x6c8ad6:c.instructions+=1;goto B6c8ad6;
case 0x6c8ad8:goto L6c8ad8;
case 0x6c8adb:c.instructions+=3;goto B6c8adb;
case 0x6c8adf:c.instructions+=2;goto B6c8adf;
case 0x6c8ae1:c.instructions+=1;goto B6c8ae1;
case 0x6c8ae3:goto L6c8ae3;
case 0x6c8ae6:c.instructions+=6;goto B6c8ae6;
case 0x6c8aed:c.instructions+=5;goto B6c8aed;
case 0x6c8af0:c.instructions+=4;goto B6c8af0;
case 0x6c8af3:c.instructions+=3;goto B6c8af3;
case 0x6c8af6:c.instructions+=2;goto B6c8af6;
case 0x6c8af9:c.instructions+=1;goto B6c8af9;
case 0x6c8afc:goto L6c8afc;
case 0x6c8afe:c.instructions+=2;goto B6c8afe;
case 0x6c8b00:c.instructions+=1;goto B6c8b00;
case 0x6c8b02:goto L6c8b02;
case 0x6c8b05:c.instructions+=3;goto B6c8b05;
case 0x6c8b08:c.instructions+=2;goto B6c8b08;
case 0x6c8b0b:c.instructions+=1;goto B6c8b0b;
case 0x6c8b0d:goto L6c8b0d;
case 0x6c8b14:goto L6c8b14;
case 0x6c8b17:c.instructions+=2;goto B6c8b17;
case 0x6c8b1a:c.instructions+=1;goto B6c8b1a;
case 0x6c8b1c:goto L6c8b1c;
case 0x6c8b1f:c.instructions+=1;goto B6c8b1f;
case 0x6c8b21:goto L6c8b21;
case 0x6c8b25:goto L6c8b25;
case 0x6c8b29:c.instructions+=1;goto B6c8b29;
case 0x6c8b2b:goto L6c8b2b;
case 0x6c8b2d:goto L6c8b2d;
case 0x6c8b34:c.instructions+=1;goto B6c8b34;
case 0x6c8b36:goto L6c8b36;
case 0x6c8b3a:goto L6c8b3a;
case 0x6c8b3b:c.instructions+=2;goto B6c8b3b;
case 0x6c8b3e:c.instructions+=1;goto B6c8b3e;
case 0x6c8b40:goto L6c8b40;
case 0x6c8b44:c.instructions+=1;goto B6c8b44;
case 0x6c8b46:goto L6c8b46;
case 0x6c8b4d:goto L6c8b4d;
case 0x6c8b51:c.instructions+=2;goto B6c8b51;
case 0x6c8b54:c.instructions+=1;goto B6c8b54;
case 0x6c8b5a:goto L6c8b5a;
case 0x6c8b5d:c.instructions+=3;goto B6c8b5d;
case 0x6c8b60:c.instructions+=2;goto B6c8b60;
case 0x6c8b63:c.instructions+=1;goto B6c8b63;
case 0x6c8b69:goto L6c8b69;
case 0x6c8b6c:c.instructions+=3;goto B6c8b6c;
case 0x6c8b6f:c.instructions+=2;goto B6c8b6f;
case 0x6c8b72:c.instructions+=1;goto B6c8b72;
case 0x6c8b78:goto L6c8b78;
case 0x6c8b7c:goto L6c8b7c;
case 0x6c8b7f:c.instructions+=3;goto B6c8b7f;
case 0x6c8b86:c.instructions+=2;goto B6c8b86;
case 0x6c8b89:c.instructions+=1;goto B6c8b89;
case 0x6c8b8b:goto L6c8b8b;
case 0x6c8b8d:c.instructions+=2;goto B6c8b8d;
case 0x6c8b90:c.instructions+=1;goto B6c8b90;
case 0x6c8b92:goto L6c8b92;
case 0x6c8b95:c.instructions+=2;goto B6c8b95;
case 0x6c8b98:c.instructions+=1;goto B6c8b98;
case 0x6c8b9b:goto L6c8b9b;
case 0x6c8ba2:c.instructions+=3;goto B6c8ba2;
case 0x6c8ba5:c.instructions+=2;goto B6c8ba5;
case 0x6c8ba7:c.instructions+=1;goto B6c8ba7;
case 0x6c8ba9:goto L6c8ba9;
case 0x6c8bac:c.instructions+=1;goto B6c8bac;
case 0x6c8baf:goto L6c8baf;
case 0x6c8bb1:c.instructions+=2;goto B6c8bb1;
case 0x6c8bb3:c.instructions+=1;goto B6c8bb3;
case 0x6c8bb5:goto L6c8bb5;
case 0x6c8bb8:c.instructions+=2;goto B6c8bb8;
case 0x6c8bbb:c.instructions+=1;goto B6c8bbb;
case 0x6c8bbd:goto L6c8bbd;
case 0x6c8bc4:goto L6c8bc4;
case 0x6c8bc7:c.instructions+=2;goto B6c8bc7;
case 0x6c8bca:c.instructions+=1;goto B6c8bca;
case 0x6c8bcc:goto L6c8bcc;
case 0x6c8bcd:c.instructions+=2;goto B6c8bcd;
case 0x6c8bd0:c.instructions+=1;goto B6c8bd0;
case 0x6c8bd2:goto L6c8bd2;
case 0x6c8bd5:c.instructions+=2;goto B6c8bd5;
case 0x6c8bd9:c.instructions+=1;goto B6c8bd9;
case 0x6c8bdb:goto L6c8bdb;
case 0x6c8bdf:c.instructions+=1;goto B6c8bdf;
case 0x6c8be1:goto L6c8be1;
case 0x6c8be4:c.instructions+=2;goto B6c8be4;
case 0x6c8be8:c.instructions+=1;goto B6c8be8;
case 0x6c8bee:goto L6c8bee;
case 0x6c8bf1:c.instructions+=2;goto B6c8bf1;
case 0x6c8bf3:c.instructions+=1;goto B6c8bf3;
case 0x6c8bf5:goto L6c8bf5;
case 0x6c8bf8:c.instructions+=2;goto B6c8bf8;
case 0x6c8bfc:c.instructions+=1;goto B6c8bfc;
case 0x6c8c02:goto L6c8c02;
case 0x6c8c04:goto L6c8c04;
case 0x6c8c07:c.instructions+=3;goto B6c8c07;
case 0x6c8c0a:c.instructions+=2;goto B6c8c0a;
case 0x6c8c11:c.instructions+=1;goto B6c8c11;
case 0x6c8c13:goto L6c8c13;
case 0x6c8c1a:c.instructions+=2;goto B6c8c1a;
case 0x6c8c1d:c.instructions+=1;goto B6c8c1d;
case 0x6c8c1f:goto L6c8c1f;
case 0x6c8c26:c.instructions+=2;goto B6c8c26;
case 0x6c8c29:c.instructions+=1;goto B6c8c29;
case 0x6c8c2b:goto L6c8c2b;
case 0x6c8c32:goto L6c8c32;
case 0x6c8c35:c.instructions+=2;goto B6c8c35;
case 0x6c8c3a:c.instructions+=1;goto B6c8c3a;
case 0x6c8c3c:goto L6c8c3c;
case 0x6c8c3e:goto L6c8c3e;
case 0x6c8c40:c.instructions+=2;goto B6c8c40;
case 0x6c8c43:c.instructions+=1;goto B6c8c43;
case 0x6c8c44:goto L6c8c44;
case 0x6c8c48:c.instructions+=1;goto B6c8c48;
case 0x6c8c4e:goto L6c8c4e;
case 0x6c8c52:c.instructions+=2;goto B6c8c52;
case 0x6c8c56:c.instructions+=1;goto B6c8c56;
case 0x6c8c58:goto L6c8c58;
case 0x6c8c5e:c.instructions+=2;goto B6c8c5e;
case 0x6c8c61:c.instructions+=1;goto B6c8c61;
case 0x6c8c64:goto L6c8c64;
case 0x6c8c66:c.instructions+=6;goto B6c8c66;
case 0x6c8c69:c.instructions+=5;goto B6c8c69;
case 0x6c8c6c:c.instructions+=4;goto B6c8c6c;
case 0x6c8c6f:c.instructions+=3;goto B6c8c6f;
case 0x6c8c72:c.instructions+=2;goto B6c8c72;
case 0x6c8c76:c.instructions+=1;goto B6c8c76;
case 0x6c8c7c:goto L6c8c7c;
case 0x6c8c7f:c.instructions+=2;goto B6c8c7f;
case 0x6c8c82:c.instructions+=1;goto B6c8c82;
case 0x6c8c88:goto L6c8c88;
case 0x6c8c89:c.instructions+=4;goto B6c8c89;
case 0x6c8c8c:c.instructions+=3;goto B6c8c8c;
case 0x6c8c8f:c.instructions+=2;goto B6c8c8f;
case 0x6c8c92:c.instructions+=1;goto B6c8c92;
case 0x6c8c94:goto L6c8c94;
case 0x6c8c98:c.instructions+=1;goto B6c8c98;
case 0x6c8c9e:goto L6c8c9e;
case 0x6c8ca0:goto L6c8ca0;
case 0x6c8ca7:c.instructions+=3;goto B6c8ca7;
case 0x6c8cae:c.instructions+=2;goto B6c8cae;
case 0x6c8cb1:c.instructions+=1;goto B6c8cb1;
case 0x6c8cb7:goto L6c8cb7;
case 0x6c8cb9:c.instructions+=1;goto B6c8cb9;
case 0x6c8cbf:goto L6c8cbf;
case 0x6c8cc2:c.instructions+=3;goto B6c8cc2;
case 0x6c8cc5:c.instructions+=2;goto B6c8cc5;
case 0x6c8cc8:c.instructions+=1;goto B6c8cc8;
case 0x6c8cca:goto L6c8cca;
case 0x6c8cce:c.instructions+=1;goto B6c8cce;
case 0x6c8cd4:goto L6c8cd4;
case 0x6c8cd5:c.instructions+=2;goto B6c8cd5;
case 0x6c8cd8:c.instructions+=1;goto B6c8cd8;
case 0x6c8cda:goto L6c8cda;
case 0x6c8ce1:c.instructions+=1;goto B6c8ce1;
case 0x6c8ce7:goto L6c8ce7;
case 0x6c8cee:c.instructions+=1;goto B6c8cee;
case 0x6c8cf4:goto L6c8cf4;
case 0x6c8cf6:c.instructions+=1;goto B6c8cf6;
case 0x6c8cfb:goto L6c8cfb;
case 0x6c8cfd:c.instructions+=1;goto B6c8cfd;
case 0x6c8cff:goto L6c8cff;
case 0x6c8d01:c.instructions+=1;goto B6c8d01;
case 0x6c8d06:goto L6c8d06;
case 0x6c8d08:c.instructions+=1;goto B6c8d08;
case 0x6c8d0a:goto L6c8d0a;
case 0x6c8d0c:c.instructions+=1;goto B6c8d0c;
case 0x6c8d11:goto L6c8d11;
case 0x6c8d13:goto L6c8d13;
case 0x6c8d15:c.instructions+=2;goto B6c8d15;
case 0x6c8d18:c.instructions+=1;goto B6c8d18;
case 0x6c8d1a:goto L6c8d1a;
case 0x6c8d1f:c.instructions+=1;goto B6c8d1f;
case 0x6c8d24:goto L6c8d24;
case 0x6c8d27:c.instructions+=8;goto B6c8d27;
case 0x6c8d29:c.instructions+=7;goto B6c8d29;
case 0x6c8d2c:c.instructions+=6;goto B6c8d2c;
case 0x6c8d31:c.instructions+=5;goto B6c8d31;
case 0x6c8d34:c.instructions+=4;goto B6c8d34;
case 0x6c8d39:c.instructions+=3;goto B6c8d39;
case 0x6c8d3a:c.instructions+=2;goto B6c8d3a;
case 0x6c8d3c:c.instructions+=1;goto B6c8d3c;
case 0x6c8d41:goto L6c8d41;
case 0x6c8d43:c.instructions+=3;goto B6c8d43;
case 0x6c8d45:c.instructions+=2;goto B6c8d45;
case 0x6c8d47:c.instructions+=1;goto B6c8d47;
case 0x6c8d49:goto L6c8d49;
case 0x6c8d4f:c.instructions+=1;goto B6c8d4f;
case 0x6c8d54:goto L6c8d54;
case 0x6c8d56:c.instructions+=2;goto B6c8d56;
case 0x6c8d58:c.instructions+=1;goto B6c8d58;
case 0x6c8d5a:goto L6c8d5a;
case 0x6c8d5c:goto L6c8d5c;
case 0x6c8d5e:c.instructions+=1;goto B6c8d5e;
case 0x6c8d63:goto L6c8d63;
case 0x6c8d65:c.instructions+=1;goto B6c8d65;
case 0x6c8d6a:goto L6c8d6a;
case 0x6c8d70:c.instructions+=7;goto B6c8d70;
case 0x6c8d73:c.instructions+=6;goto B6c8d73;
case 0x6c8d76:c.instructions+=5;goto B6c8d76;
case 0x6c8d79:c.instructions+=4;goto B6c8d79;
case 0x6c8d7c:c.instructions+=3;goto B6c8d7c;
case 0x6c8d7f:c.instructions+=2;goto B6c8d7f;
case 0x6c8d81:c.instructions+=1;goto B6c8d81;
case 0x6c8d84:goto L6c8d84;
case 0x6c8d86:goto L6c8d86;
case 0x6c8d88:c.instructions+=2;goto B6c8d88;
case 0x6c8d8b:c.instructions+=1;goto B6c8d8b;
case 0x6c8d8e:goto L6c8d8e;
case 0x6c8d90:goto L6c8d90;
case 0x6c8d93:c.instructions+=5;goto B6c8d93;
case 0x6c8d95:c.instructions+=4;goto B6c8d95;
case 0x6c8d98:c.instructions+=3;goto B6c8d98;
case 0x6c8d9a:c.instructions+=2;goto B6c8d9a;
case 0x6c8d9d:c.instructions+=1;goto B6c8d9d;
case 0x6c8da3:goto L6c8da3;
case 0x6c8da5:goto L6c8da5;
case 0x6c8da7:c.instructions+=1;goto B6c8da7;
case 0x6c8daa:goto L6c8daa;
case 0x6c8dac:goto L6c8dac;
case 0x6c8dae:c.instructions+=2;goto B6c8dae;
case 0x6c8db0:c.instructions+=1;goto B6c8db0;
case 0x6c8db2:goto L6c8db2;
case 0x6c8db7:goto L6c8db7;
case 0x6c8dbb:c.instructions+=1;goto B6c8dbb;
case 0x6c8dbd:goto L6c8dbd;
case 0x6c8dc3:c.instructions+=12;goto B6c8dc3;
case 0x6c8dc6:c.instructions+=11;goto B6c8dc6;
case 0x6c8dc9:c.instructions+=10;goto B6c8dc9;
case 0x6c8dcc:c.instructions+=9;goto B6c8dcc;
case 0x6c8dcf:c.instructions+=8;goto B6c8dcf;
case 0x6c8dd1:c.instructions+=7;goto B6c8dd1;
case 0x6c8dd7:c.instructions+=6;goto B6c8dd7;
case 0x6c8dda:c.instructions+=5;goto B6c8dda;
case 0x6c8ddd:c.instructions+=4;goto B6c8ddd;
case 0x6c8de0:c.instructions+=3;goto B6c8de0;
case 0x6c8de3:c.instructions+=2;goto B6c8de3;
case 0x6c8de7:c.instructions+=1;goto B6c8de7;
case 0x6c8de9:goto L6c8de9;
case 0x6c8deb:c.instructions+=7;goto B6c8deb;
case 0x6c8df1:c.instructions+=6;goto B6c8df1;
case 0x6c8df4:c.instructions+=5;goto B6c8df4;
case 0x6c8df7:c.instructions+=4;goto B6c8df7;
case 0x6c8dfa:c.instructions+=3;goto B6c8dfa;
case 0x6c8dfd:c.instructions+=2;goto B6c8dfd;
case 0x6c8e00:c.instructions+=1;goto B6c8e00;
case 0x6c8e02:goto L6c8e02;
case 0x6c8e08:c.instructions+=8;goto B6c8e08;
case 0x6c8e0b:c.instructions+=7;goto B6c8e0b;
case 0x6c8e0e:c.instructions+=6;goto B6c8e0e;
case 0x6c8e11:c.instructions+=5;goto B6c8e11;
case 0x6c8e14:c.instructions+=4;goto B6c8e14;
case 0x6c8e16:c.instructions+=3;goto B6c8e16;
case 0x6c8e17:c.instructions+=2;goto B6c8e17;
case 0x6c8e1a:c.instructions+=1;goto B6c8e1a;
case 0x6c8e1c:goto L6c8e1c;
case 0x6c8e1f:c.instructions+=2;goto B6c8e1f;
case 0x6c8e25:c.instructions+=1;goto B6c8e25;
case 0x6c8e2a:goto L6c8e2a;
case 0x6c8e2d:c.instructions+=3;goto B6c8e2d;
case 0x6c8e2f:c.instructions+=2;goto B6c8e2f;
case 0x6c8e32:c.instructions+=1;goto B6c8e32;
case 0x6c8e37:goto L6c8e37;
case 0x6c8e3a:goto L6c8e3a;
case 0x6c8e3b:c.instructions+=4;goto B6c8e3b;
case 0x6c8e3c:c.instructions+=3;goto B6c8e3c;
case 0x6c8e3d:c.instructions+=2;goto B6c8e3d;
case 0x6c8e3e:c.instructions+=1;goto B6c8e3e;
case 0x6c8e3f:goto L6c8e3f;
case 0x6c8e41:c.instructions+=2;goto B6c8e41;
case 0x6c8e42:c.instructions+=1;goto B6c8e42;
case 0x6c8e44:goto L6c8e44;
case 0x6c8e46:c.instructions+=33;goto B6c8e46;
case 0x6c8e47:c.instructions+=32;goto B6c8e47;
case 0x6c8e49:c.instructions+=31;goto B6c8e49;
case 0x6c8e4f:c.instructions+=30;goto B6c8e4f;
case 0x6c8e50:c.instructions+=29;goto B6c8e50;
case 0x6c8e51:c.instructions+=28;goto B6c8e51;
case 0x6c8e52:c.instructions+=27;goto B6c8e52;
case 0x6c8e54:c.instructions+=26;goto B6c8e54;
case 0x6c8e5a:c.instructions+=25;goto B6c8e5a;
case 0x6c8e5c:c.instructions+=24;goto B6c8e5c;
case 0x6c8e5e:c.instructions+=23;goto B6c8e5e;
case 0x6c8e61:c.instructions+=22;goto B6c8e61;
case 0x6c8e64:c.instructions+=21;goto B6c8e64;
case 0x6c8e66:c.instructions+=20;goto B6c8e66;
case 0x6c8e69:c.instructions+=19;goto B6c8e69;
case 0x6c8e6a:c.instructions+=18;goto B6c8e6a;
case 0x6c8e6b:c.instructions+=17;goto B6c8e6b;
case 0x6c8e71:c.instructions+=16;goto B6c8e71;
case 0x6c8e72:c.instructions+=15;goto B6c8e72;
case 0x6c8e75:c.instructions+=14;goto B6c8e75;
case 0x6c8e76:c.instructions+=13;goto B6c8e76;
case 0x6c8e7c:c.instructions+=12;goto B6c8e7c;
case 0x6c8e7d:c.instructions+=11;goto B6c8e7d;
case 0x6c8e80:c.instructions+=10;goto B6c8e80;
case 0x6c8e81:c.instructions+=9;goto B6c8e81;
case 0x6c8e87:c.instructions+=8;goto B6c8e87;
case 0x6c8e88:c.instructions+=7;goto B6c8e88;
case 0x6c8e8d:c.instructions+=6;goto B6c8e8d;
case 0x6c8e8e:c.instructions+=5;goto B6c8e8e;
case 0x6c8e90:c.instructions+=4;goto B6c8e90;
case 0x6c8e93:c.instructions+=3;goto B6c8e93;
case 0x6c8e9a:c.instructions+=2;goto B6c8e9a;
case 0x6c8ea1:c.instructions+=1;goto B6c8ea1;
case 0x6c8ea6:goto L6c8ea6;
case 0x6c8ea8:c.instructions+=1;goto B6c8ea8;
case 0x6c8eaa:goto L6c8eaa;
case 0x6c8eab:c.instructions+=13;goto B6c8eab;
case 0x6c8eac:c.instructions+=12;goto B6c8eac;
case 0x6c8eaf:c.instructions+=11;goto B6c8eaf;
case 0x6c8eb0:c.instructions+=10;goto B6c8eb0;
case 0x6c8eb6:c.instructions+=9;goto B6c8eb6;
case 0x6c8eb7:c.instructions+=8;goto B6c8eb7;
case 0x6c8eba:c.instructions+=7;goto B6c8eba;
case 0x6c8ebb:c.instructions+=6;goto B6c8ebb;
case 0x6c8ec1:c.instructions+=5;goto B6c8ec1;
case 0x6c8ec2:c.instructions+=4;goto B6c8ec2;
case 0x6c8ec7:c.instructions+=3;goto B6c8ec7;
case 0x6c8ecd:c.instructions+=2;goto B6c8ecd;
case 0x6c8ecf:c.instructions+=1;goto B6c8ecf;
case 0x6c8ed4:goto L6c8ed4;
case 0x6c8ed6:c.instructions+=1;goto B6c8ed6;
case 0x6c8edc:goto L6c8edc;
case 0x6c8edf:goto L6c8edf;
case 0x6c8ee5:c.instructions+=2;goto B6c8ee5;
case 0x6c8eeb:c.instructions+=1;goto B6c8eeb;
case 0x6c8ef1:goto L6c8ef1;
case 0x6c8ef3:c.instructions+=2;goto B6c8ef3;
case 0x6c8ef6:c.instructions+=1;goto B6c8ef6;
case 0x6c8ef8:goto L6c8ef8;
case 0x6c8efe:c.instructions+=6;goto B6c8efe;
case 0x6c8f01:c.instructions+=5;goto B6c8f01;
case 0x6c8f03:c.instructions+=4;goto B6c8f03;
case 0x6c8f06:c.instructions+=3;goto B6c8f06;
case 0x6c8f0d:c.instructions+=2;goto B6c8f0d;
case 0x6c8f10:c.instructions+=1;goto B6c8f10;
case 0x6c8f12:goto L6c8f12;
case 0x6c8f14:c.instructions+=1;goto B6c8f14;
case 0x6c8f15:goto L6c8f15;
case 0x6c8f18:c.instructions+=2;goto B6c8f18;
case 0x6c8f1a:c.instructions+=1;goto B6c8f1a;
case 0x6c8f20:goto L6c8f20;
case 0x6c8f26:c.instructions+=4;goto B6c8f26;
case 0x6c8f29:c.instructions+=3;goto B6c8f29;
case 0x6c8f2c:c.instructions+=2;goto B6c8f2c;
case 0x6c8f2f:c.instructions+=1;goto B6c8f2f;
case 0x6c8f31:goto L6c8f31;
case 0x6c8f34:c.instructions+=4;goto B6c8f34;
case 0x6c8f37:c.instructions+=3;goto B6c8f37;
case 0x6c8f3a:c.instructions+=2;goto B6c8f3a;
case 0x6c8f3d:c.instructions+=1;goto B6c8f3d;
case 0x6c8f3f:goto L6c8f3f;
case 0x6c8f41:c.instructions+=1;goto B6c8f41;
case 0x6c8f46:goto L6c8f46;
case 0x6c8f48:c.instructions+=1;goto B6c8f48;
case 0x6c8f4a:goto L6c8f4a;
case 0x6c8f4c:c.instructions+=1;goto B6c8f4c;
case 0x6c8f51:goto L6c8f51;
case 0x6c8f54:c.instructions+=1;goto B6c8f54;
case 0x6c8f56:goto L6c8f56;
case 0x6c8f58:c.instructions+=2;goto B6c8f58;
case 0x6c8f59:c.instructions+=1;goto B6c8f59;
case 0x6c8f5e:goto L6c8f5e;
case 0x6c8f62:goto L6c8f62;
case 0x6c8f65:c.instructions+=5;goto B6c8f65;
case 0x6c8f67:c.instructions+=4;goto B6c8f67;
case 0x6c8f68:c.instructions+=3;goto B6c8f68;
case 0x6c8f6a:c.instructions+=2;goto B6c8f6a;
case 0x6c8f6f:c.instructions+=1;goto B6c8f6f;
case 0x6c8f74:goto L6c8f74;
case 0x6c8f76:c.instructions+=2;goto B6c8f76;
case 0x6c8f78:c.instructions+=1;goto B6c8f78;
case 0x6c8f7e:goto L6c8f7e;
case 0x6c8f84:c.instructions+=2;goto B6c8f84;
case 0x6c8f87:c.instructions+=1;goto B6c8f87;
case 0x6c8f8c:goto L6c8f8c;
case 0x6c8f8e:c.instructions+=2;goto B6c8f8e;
case 0x6c8f90:c.instructions+=1;goto B6c8f90;
case 0x6c8f96:goto L6c8f96;
case 0x6c8f9a:c.instructions+=5;goto B6c8f9a;
case 0x6c8fa0:c.instructions+=4;goto B6c8fa0;
case 0x6c8fa2:c.instructions+=3;goto B6c8fa2;
case 0x6c8fa5:c.instructions+=2;goto B6c8fa5;
case 0x6c8fa8:c.instructions+=1;goto B6c8fa8;
case 0x6c8fab:goto L6c8fab;
case 0x6c8fad:goto L6c8fad;
case 0x6c8fb3:c.instructions+=6;goto B6c8fb3;
case 0x6c8fb5:c.instructions+=5;goto B6c8fb5;
case 0x6c8fb8:c.instructions+=4;goto B6c8fb8;
case 0x6c8fba:c.instructions+=3;goto B6c8fba;
case 0x6c8fc0:c.instructions+=2;goto B6c8fc0;
case 0x6c8fc3:c.instructions+=1;goto B6c8fc3;
case 0x6c8fc5:goto L6c8fc5;
case 0x6c8fcb:c.instructions+=4;goto B6c8fcb;
case 0x6c8fce:c.instructions+=3;goto B6c8fce;
case 0x6c8fd1:c.instructions+=2;goto B6c8fd1;
case 0x6c8fd7:c.instructions+=1;goto B6c8fd7;
case 0x6c8fdc:goto L6c8fdc;
case 0x6c8fe2:c.instructions+=9;goto B6c8fe2;
case 0x6c8fe5:c.instructions+=8;goto B6c8fe5;
case 0x6c8feb:c.instructions+=7;goto B6c8feb;
case 0x6c8fee:c.instructions+=6;goto B6c8fee;
case 0x6c8ff1:c.instructions+=5;goto B6c8ff1;
case 0x6c8ff4:c.instructions+=4;goto B6c8ff4;
case 0x6c8ff7:c.instructions+=3;goto B6c8ff7;
case 0x6c8ffa:c.instructions+=2;goto B6c8ffa;
case 0x6c8ffd:c.instructions+=1;goto B6c8ffd;
case 0x6c8fff:goto L6c8fff;
default:missing_instruction(c.pc);}
B6c8000:L6c8000:{c.instructions+=4;NFSU2_TR(0x6c8000);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c8003:{NFSU2_TR(0x6c8003);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c8006:{NFSU2_TR(0x6c8006);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6c800a:{NFSU2_TR(0x6c800a);
if(r1(R+518)){{goto L6c801d;}}
}
B6c800c:L6c800c:{c.instructions+=2;NFSU2_TR(0x6c800c);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
w1(U+1,u8(u32(r1(U+0))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6c800f:{NFSU2_TR(0x6c800f);
if(r1(R+518)){{goto L6c801d;}}
}
B6c8011:L6c8011:{c.instructions+=2;NFSU2_TR(0x6c8011);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c8015:{NFSU2_TR(0x6c8015);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c801d;}}
}
B6c8017:L6c8017:{c.instructions+=2;NFSU2_TR(0x6c8017);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c801b:{NFSU2_TR(0x6c801b);
if(r1(R+518)){{goto L6c8053;}}
}
B6c801d:L6c801d:{c.instructions+=5;NFSU2_TR(0x6c801d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c8020:{NFSU2_TR(0x6c8020);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c8023:{NFSU2_TR(0x6c8023);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c8027:{NFSU2_TR(0x6c8027);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
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
B6c802a:{NFSU2_TR(0x6c802a);
if(r1(R+512)){TAIL_STATIC(0x6c7c0fu,6c7);}
}
B6c8030:L6c8030:{c.instructions+=1;NFSU2_TR(0x6c8030);
{goto L6c8367;}
}
B6c8035:L6c8035:{c.instructions+=5;NFSU2_TR(0x6c8035);
u8 U[4];
w4(U+0,u32(0x7bf1ccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c803a:{NFSU2_TR(0x6c803a);
u8 U[4];
w4(U+0,u32(0x12e3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c803f:{NFSU2_TR(0x6c803f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c8040:{NFSU2_TR(0x6c8040);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c8041:{NFSU2_TR(0x6c8041);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c8046ull));
TAIL_STATIC(0x69e936u,69e);
}
B6c8046:L6c8046:{c.instructions+=3;NFSU2_TR(0x6c8046);
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
B6c8049:{NFSU2_TR(0x6c8049);
w4(R+0,u32(0x80004005ull));
}
B6c804e:{NFSU2_TR(0x6c804e);
{goto L6c8374;}
}
B6c8053:L6c8053:{c.instructions+=16;NFSU2_TR(0x6c8053);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c8056:{NFSU2_TR(0x6c8056);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c8059:{NFSU2_TR(0x6c8059);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c805c:{NFSU2_TR(0x6c805c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c805f:{NFSU2_TR(0x6c805f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c8063:{NFSU2_TR(0x6c8063);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+28)),r4(U+0));
}
B6c8065:{NFSU2_TR(0x6c8065);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B6c8068:{NFSU2_TR(0x6c8068);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c806b:{NFSU2_TR(0x6c806b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6c806d:{NFSU2_TR(0x6c806d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c8070:{NFSU2_TR(0x6c8070);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c8073:{NFSU2_TR(0x6c8073);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c8076:{NFSU2_TR(0x6c8076);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c8079:{NFSU2_TR(0x6c8079);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c807c:{NFSU2_TR(0x6c807c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c807f:{NFSU2_TR(0x6c807f);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6c82d6;}}
}
B6c8085:L6c8085:{c.instructions+=1;NFSU2_TR(0x6c8085);
{goto L6c808a;}
}
B6c8087:L6c8087:{c.instructions+=1;NFSU2_TR(0x6c8087);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c808a:L6c808a:{c.instructions+=5;NFSU2_TR(0x6c808a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c808d:{NFSU2_TR(0x6c808d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6c8090:{NFSU2_TR(0x6c8090);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c8094:{NFSU2_TR(0x6c8094);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c8097:{NFSU2_TR(0x6c8097);
if(r1(R+518)){{goto L6c81a6;}}
}
B6c809d:L6c809d:{c.instructions+=9;NFSU2_TR(0x6c809d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c80a0:{NFSU2_TR(0x6c80a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6c80a2:{NFSU2_TR(0x6c80a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c80a5:{NFSU2_TR(0x6c80a5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c80a8:{NFSU2_TR(0x6c80a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c80ab:{NFSU2_TR(0x6c80ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c80ae:{NFSU2_TR(0x6c80ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c80b1:{NFSU2_TR(0x6c80b1);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+0))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6c80b3:{NFSU2_TR(0x6c80b3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c81a6;}}
}
B6c80b9:L6c80b9:{c.instructions+=3;NFSU2_TR(0x6c80b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c80bd:{NFSU2_TR(0x6c80bd);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c80c1:{NFSU2_TR(0x6c80c1);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c81a6;}}
}
B6c80c7:L6c80c7:{c.instructions+=9;NFSU2_TR(0x6c80c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c80ca:{NFSU2_TR(0x6c80ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c80cd:{NFSU2_TR(0x6c80cd);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c80d0:{NFSU2_TR(0x6c80d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c80d3:{NFSU2_TR(0x6c80d3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6c80d6:{NFSU2_TR(0x6c80d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c80d9:{NFSU2_TR(0x6c80d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c80dd:{NFSU2_TR(0x6c80dd);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c80e0:{NFSU2_TR(0x6c80e0);
if(r1(R+518)){{goto L6c8144;}}
}
B6c80e2:L6c80e2:{c.instructions+=4;NFSU2_TR(0x6c80e2);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c80e5:{NFSU2_TR(0x6c80e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c80e8:{NFSU2_TR(0x6c80e8);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c80eb:{NFSU2_TR(0x6c80eb);
if(r1(R+518)){{goto L6c8197;}}
}
B6c80f1:L6c80f1:{c.instructions+=7;NFSU2_TR(0x6c80f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c80f4:{NFSU2_TR(0x6c80f4);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c80f7:{NFSU2_TR(0x6c80f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6c80f9:{NFSU2_TR(0x6c80f9);
__builtin_memmove((R+12),(R+0),4);
}
B6c80fb:{NFSU2_TR(0x6c80fb);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xfff00000ull))));
}
B6c8101:{NFSU2_TR(0x6c8101);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c8107:{NFSU2_TR(0x6c8107);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c813e;}}
}
B6c8109:L6c8109:{c.instructions+=4;NFSU2_TR(0x6c8109);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c810d:{NFSU2_TR(0x6c810d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c8110:{NFSU2_TR(0x6c8110);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
w1(R+512,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0xfffffull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c8117:{NFSU2_TR(0x6c8117);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c8141;}}
}
B6c8119:L6c8119:{c.instructions+=1;NFSU2_TR(0x6c8119);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c811c:L6c811c:{c.instructions+=2;NFSU2_TR(0x6c811c);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+8))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6c811e:{NFSU2_TR(0x6c811e);
if(r1(R+518)){{goto L6c8130;}}
}
B6c8120:L6c8120:{c.instructions+=5;NFSU2_TR(0x6c8120);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c8123:{NFSU2_TR(0x6c8123);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c8126:{NFSU2_TR(0x6c8126);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B6c8129:{NFSU2_TR(0x6c8129);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B6c812c:{NFSU2_TR(0x6c812c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c811cu);}goto L6c811c;}}
}
B6c812e:L6c812e:{c.instructions+=1;NFSU2_TR(0x6c812e);
{goto L6c8141;}
}
B6c8130:L6c8130:{c.instructions+=5;NFSU2_TR(0x6c8130);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c8133:{NFSU2_TR(0x6c8133);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c8136:{NFSU2_TR(0x6c8136);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c8139:{NFSU2_TR(0x6c8139);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c813c:{NFSU2_TR(0x6c813c);
{goto L6c8141;}
}
B6c813e:L6c813e:{c.instructions+=1;NFSU2_TR(0x6c813e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c8141:L6c8141:{c.instructions+=1;NFSU2_TR(0x6c8141);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c8144:L6c8144:{c.instructions+=5;NFSU2_TR(0x6c8144);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c8147:{NFSU2_TR(0x6c8147);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c814a:{NFSU2_TR(0x6c814a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c814d:{NFSU2_TR(0x6c814d);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+4))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6c814f:{NFSU2_TR(0x6c814f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c8197;}}
}
B6c8151:L6c8151:{c.instructions+=3;NFSU2_TR(0x6c8151);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c8154:{NFSU2_TR(0x6c8154);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c8157:{NFSU2_TR(0x6c8157);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c8183;}}
}
B6c8159:L6c8159:{c.instructions+=6;NFSU2_TR(0x6c8159);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c815b:{NFSU2_TR(0x6c815b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c815c:{NFSU2_TR(0x6c815c);
u8 U[4];
w4(U+0,u32(0x15ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c815e:{NFSU2_TR(0x6c815e);
u8 U[4];
w4(U+0,u32(0x7bf1c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c8163:{NFSU2_TR(0x6c8163);
__builtin_memmove((R+4),(R+24),4);
}
B6c8165:{NFSU2_TR(0x6c8165);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c816aull));
TAIL_STATIC(0x699be0u,699);
}
B6c816a:L6c816a:{c.instructions+=9;NFSU2_TR(0x6c816a);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6c816c:{NFSU2_TR(0x6c816c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c816d:{NFSU2_TR(0x6c816d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c816e:{NFSU2_TR(0x6c816e);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6c8171:{NFSU2_TR(0x6c8171);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c8173:{NFSU2_TR(0x6c8173);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c8175:{NFSU2_TR(0x6c8175);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c8176:{NFSU2_TR(0x6c8176);
__builtin_memmove((R+4),(R+24),4);
}
B6c8178:{NFSU2_TR(0x6c8178);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c817dull));
TAIL_STATIC(0x699c39u,699);
}
B6c817d:L6c817d:{c.instructions+=2;NFSU2_TR(0x6c817d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c8180:{NFSU2_TR(0x6c8180);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c8183:L6c8183:{c.instructions+=4;NFSU2_TR(0x6c8183);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c8186:{NFSU2_TR(0x6c8186);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c8189:{NFSU2_TR(0x6c8189);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c818c:{NFSU2_TR(0x6c818c);
if(r1(R+518)){{goto L6c8197;}}
}
B6c818e:L6c818e:{c.instructions+=3;NFSU2_TR(0x6c818e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c8191:{NFSU2_TR(0x6c8191);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c8194:{NFSU2_TR(0x6c8194);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c8197:L6c8197:{c.instructions+=4;NFSU2_TR(0x6c8197);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c819a:{NFSU2_TR(0x6c819a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c819d:{NFSU2_TR(0x6c819d);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6c81a0:{NFSU2_TR(0x6c81a0);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c80c7u);}goto L6c80c7;}}
}
B6c81a6:L6c81a6:{c.instructions+=5;NFSU2_TR(0x6c81a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c81a9:{NFSU2_TR(0x6c81a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c81ac:{NFSU2_TR(0x6c81ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c81af:{NFSU2_TR(0x6c81af);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c81b2:{NFSU2_TR(0x6c81b2);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c8087u);}goto L6c8087;}}
}
B6c81b8:L6c81b8:{c.instructions+=2;NFSU2_TR(0x6c81b8);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c81bc:{NFSU2_TR(0x6c81bc);
if(r1(R+518)){{goto L6c82d6;}}
}
B6c81c2:L6c81c2:{c.instructions+=10;NFSU2_TR(0x6c81c2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c81c3:{NFSU2_TR(0x6c81c3);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6c81c5:{NFSU2_TR(0x6c81c5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c81c6:{NFSU2_TR(0x6c81c6);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6c81c9:{NFSU2_TR(0x6c81c9);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6c81cb:{NFSU2_TR(0x6c81cb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c81cc:{NFSU2_TR(0x6c81cc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c81cd:{NFSU2_TR(0x6c81cd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c81ce:{NFSU2_TR(0x6c81ce);
__builtin_memmove((R+4),(R+24),4);
}
B6c81d0:{NFSU2_TR(0x6c81d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c81d5ull));
TAIL_STATIC(0x699c39u,699);
}
B6c81d5:L6c81d5:{c.instructions+=10;NFSU2_TR(0x6c81d5);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6c81d7:{NFSU2_TR(0x6c81d7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c81d8:{NFSU2_TR(0x6c81d8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c81d9:{NFSU2_TR(0x6c81d9);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6c81dc:{NFSU2_TR(0x6c81dc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c81dd:{NFSU2_TR(0x6c81dd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c81de:{NFSU2_TR(0x6c81de);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c81df:{NFSU2_TR(0x6c81df);
__builtin_memmove((R+4),(R+24),4);
}
B6c81e1:{NFSU2_TR(0x6c81e1);
__builtin_memmove((R+28),(R+0),4);
}
B6c81e3:{NFSU2_TR(0x6c81e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c81e8ull));
TAIL_STATIC(0x699c39u,699);
}
B6c81e8:L6c81e8:{c.instructions+=2;NFSU2_TR(0x6c81e8);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B6c81eb:{NFSU2_TR(0x6c81eb);
if(r1(R+518)){{goto L6c8245;}}
}
B6c81ed:L6c81ed:{c.instructions+=2;NFSU2_TR(0x6c81ed);
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
B6c81f0:{NFSU2_TR(0x6c81f0);
if(r1(R+518)){{goto L6c8245;}}
}
B6c81f2:L6c81f2:{c.instructions+=11;NFSU2_TR(0x6c81f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c81f5:{NFSU2_TR(0x6c81f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c81f8:{NFSU2_TR(0x6c81f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c81fb:{NFSU2_TR(0x6c81fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6c81fd:{NFSU2_TR(0x6c81fd);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6c8200:{NFSU2_TR(0x6c8200);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6c8203:{NFSU2_TR(0x6c8203);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6c8206:{NFSU2_TR(0x6c8206);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c8207:{NFSU2_TR(0x6c8207);
__builtin_memmove((R+4),(R+28),4);
}
B6c8209:{NFSU2_TR(0x6c8209);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c820c:{NFSU2_TR(0x6c820c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c8211ull));
TAIL_STATIC(0x699765u,699);
}
B6c8211:L6c8211:{c.instructions+=3;NFSU2_TR(0x6c8211);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c8214:{NFSU2_TR(0x6c8214);
__builtin_memmove((R+4),(R+12),4);
}
B6c8216:{NFSU2_TR(0x6c8216);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c821bull));
TAIL_STATIC(0x699765u,699);
}
B6c821b:L6c821b:{c.instructions+=4;NFSU2_TR(0x6c821b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c8222:{NFSU2_TR(0x6c8222);
u8 U[4];
w4(U+0,u32(0x74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c8224:{NFSU2_TR(0x6c8224);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c822b:{NFSU2_TR(0x6c822b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c8230ull));
TAIL_STATIC(0x699317u,699);
}
B6c8230:L6c8230:{c.instructions+=2;NFSU2_TR(0x6c8230);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c8232:{NFSU2_TR(0x6c8232);
if(r1(R+518)){{goto L6c823f;}}
}
B6c8234:L6c8234:{c.instructions+=2;NFSU2_TR(0x6c8234);
__builtin_memmove((R+4),(R+0),4);
}
B6c8236:{NFSU2_TR(0x6c8236);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c823bull));
TAIL_STATIC(0x698e7du,698);
}
B6c823b:L6c823b:{c.instructions+=2;NFSU2_TR(0x6c823b);
__builtin_memmove((R+28),(R+0),4);
}
B6c823d:{NFSU2_TR(0x6c823d);
{goto L6c8241;}
}
B6c823f:L6c823f:{c.instructions+=1;NFSU2_TR(0x6c823f);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6c8241:L6c8241:{c.instructions+=2;NFSU2_TR(0x6c8241);
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
B6c8243:{NFSU2_TR(0x6c8243);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c824f;}}
}
B6c8245:L6c8245:{c.instructions+=2;NFSU2_TR(0x6c8245);
w4(R+0,u32(0x8007000eull));
}
B6c824a:{NFSU2_TR(0x6c824a);
{goto L6c8374;}
}
B6c824f:L6c824f:{c.instructions+=6;NFSU2_TR(0x6c824f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c8251:{NFSU2_TR(0x6c8251);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c8253:{NFSU2_TR(0x6c8253);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c8255:{NFSU2_TR(0x6c8255);
u8 U[4];
w4(U+0,u32(0x74100001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c825a:{NFSU2_TR(0x6c825a);
__builtin_memmove((R+4),(R+28),4);
}
B6c825c:{NFSU2_TR(0x6c825c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c8261ull));
TAIL_STATIC(0x699362u,699);
}
B6c8261:L6c8261:{c.instructions+=4;NFSU2_TR(0x6c8261);
__builtin_memmove((R+12),(R+0),4);
}
B6c8263:{NFSU2_TR(0x6c8263);
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
B6c8265:{NFSU2_TR(0x6c8265);
__builtin_memmove((R+4),(R+28),4);
}
B6c8267:{NFSU2_TR(0x6c8267);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6c8277;}}
}
B6c8269:L6c8269:{c.instructions+=2;NFSU2_TR(0x6c8269);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c826b:{NFSU2_TR(0x6c826b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c8270ull));
TAIL_STATIC(0x6739efu,673);
}
B6c8270:L6c8270:{c.instructions+=2;NFSU2_TR(0x6c8270);
__builtin_memmove((R+0),(R+12),4);
}
B6c8272:{NFSU2_TR(0x6c8272);
{goto L6c8374;}
}
B6c8277:L6c8277:{c.instructions+=3;NFSU2_TR(0x6c8277);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c827a:{NFSU2_TR(0x6c827a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c827b:{NFSU2_TR(0x6c827b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c8280ull));
TAIL_STATIC(0x698eb3u,698);
}
B6c8280:L6c8280:{c.instructions+=3;NFSU2_TR(0x6c8280);
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
B6c8282:{NFSU2_TR(0x6c8282);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c8285:{NFSU2_TR(0x6c8285);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6c828e;}}
}
B6c8287:L6c8287:{c.instructions+=2;NFSU2_TR(0x6c8287);
__builtin_memmove((R+4),(R+28),4);
}
B6c8289:{NFSU2_TR(0x6c8289);
{goto L6c836a;}
}
B6c828e:L6c828e:{c.instructions+=19;NFSU2_TR(0x6c828e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c8291:{NFSU2_TR(0x6c8291);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6c8293:{NFSU2_TR(0x6c8293);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c8296:{NFSU2_TR(0x6c8296);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6c8298:{NFSU2_TR(0x6c8298);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c829b:{NFSU2_TR(0x6c829b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6c829d:{NFSU2_TR(0x6c829d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c82a0:{NFSU2_TR(0x6c82a0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6c82a2:{NFSU2_TR(0x6c82a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c82a5:{NFSU2_TR(0x6c82a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6c82a7:{NFSU2_TR(0x6c82a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c82aa:{NFSU2_TR(0x6c82aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c82ad:{NFSU2_TR(0x6c82ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c82b0:{NFSU2_TR(0x6c82b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c82b3:{NFSU2_TR(0x6c82b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6c82b5:{NFSU2_TR(0x6c82b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c82b8:{NFSU2_TR(0x6c82b8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c82b9:{NFSU2_TR(0x6c82b9);
__builtin_memmove((R+4),(R+12),4);
}
B6c82bb:{NFSU2_TR(0x6c82bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c82c0ull));
TAIL_STATIC(0x6995c1u,699);
}
B6c82c0:L6c82c0:{c.instructions+=4;NFSU2_TR(0x6c82c0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c82c2:{NFSU2_TR(0x6c82c2);
__builtin_memmove((R+4),(R+28),4);
}
B6c82c4:{NFSU2_TR(0x6c82c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c82c7:{NFSU2_TR(0x6c82c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c82ccull));
TAIL_STATIC(0x6739efu,673);
}
B6c82cc:L6c82cc:{c.instructions+=2;NFSU2_TR(0x6c82cc);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
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
B6c82d0:{NFSU2_TR(0x6c82d0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6c8371;}}
}
B6c82d6:L6c82d6:{c.instructions+=5;NFSU2_TR(0x6c82d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c82d9:{NFSU2_TR(0x6c82d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c82dc:{NFSU2_TR(0x6c82dc);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c82df:{NFSU2_TR(0x6c82df);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c82e2:{NFSU2_TR(0x6c82e2);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6c833c;}}
}
B6c82e4:L6c82e4:{c.instructions+=1;NFSU2_TR(0x6c82e4);
w4(R+8,u32(0xfffffull));
}
B6c82e9:L6c82e9:{c.instructions+=7;NFSU2_TR(0x6c82e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c82ec:{NFSU2_TR(0x6c82ec);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c82ef:{NFSU2_TR(0x6c82ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6c82f1:{NFSU2_TR(0x6c82f1);
__builtin_memmove((R+12),(R+4),4);
}
B6c82f3:{NFSU2_TR(0x6c82f3);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xfff00000ull))));
}
B6c82f9:{NFSU2_TR(0x6c82f9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20800000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c82ff:{NFSU2_TR(0x6c82ff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c8330;}}
}
B6c8301:L6c8301:{c.instructions+=9;NFSU2_TR(0x6c8301);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c8304:{NFSU2_TR(0x6c8304);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6c8306:{NFSU2_TR(0x6c8306);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c8309:{NFSU2_TR(0x6c8309);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6c830c:{NFSU2_TR(0x6c830c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c830f:{NFSU2_TR(0x6c830f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c8312:{NFSU2_TR(0x6c8312);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c8315:{NFSU2_TR(0x6c8315);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+28))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6c8317:{NFSU2_TR(0x6c8317);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c832d;}}
}
B6c8319:L6c8319:{c.instructions+=7;NFSU2_TR(0x6c8319);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+8))));
}
B6c831b:{NFSU2_TR(0x6c831b);
__builtin_memmove((R+28),(R+4),4);
}
B6c831d:{NFSU2_TR(0x6c831d);
w4(R+28,u32(u32(r4(R+28))&u32(r4(R+8))));
}
B6c831f:{NFSU2_TR(0x6c831f);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0x10000000ull))));
}
B6c8325:{NFSU2_TR(0x6c8325);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6c8327:{NFSU2_TR(0x6c8327);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c832a:{NFSU2_TR(0x6c832a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c832d:L6c832d:{c.instructions+=1;NFSU2_TR(0x6c832d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c8330:L6c8330:{c.instructions+=5;NFSU2_TR(0x6c8330);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c8333:{NFSU2_TR(0x6c8333);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6c8334:{NFSU2_TR(0x6c8334);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c8337:{NFSU2_TR(0x6c8337);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c833a:{NFSU2_TR(0x6c833a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c82e9u);}goto L6c82e9;}}
}
B6c833c:L6c833c:{c.instructions+=3;NFSU2_TR(0x6c833c);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6c833e:{NFSU2_TR(0x6c833e);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
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
B6c8341:{NFSU2_TR(0x6c8341);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c8367;}}
}
B6c8343:L6c8343:{c.instructions+=7;NFSU2_TR(0x6c8343);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c8346:{NFSU2_TR(0x6c8346);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c8349:{NFSU2_TR(0x6c8349);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c834c:{NFSU2_TR(0x6c834c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c834f:{NFSU2_TR(0x6c834f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c8352:{NFSU2_TR(0x6c8352);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+28))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6c8354:{NFSU2_TR(0x6c8354);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c8361;}}
}
B6c8356:L6c8356:{c.instructions+=4;NFSU2_TR(0x6c8356);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c8359:{NFSU2_TR(0x6c8359);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c835c:{NFSU2_TR(0x6c835c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6c835e:{NFSU2_TR(0x6c835e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c8361:L6c8361:{c.instructions+=3;NFSU2_TR(0x6c8361);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6c8362:{NFSU2_TR(0x6c8362);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+4),r4(U+14)));
w4(U+18,u32(u32(r4(R+4))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6c8365:{NFSU2_TR(0x6c8365);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c8343u);}goto L6c8343;}}
}
B6c8367:L6c8367:{c.instructions+=1;NFSU2_TR(0x6c8367);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c836a:L6c836a:{c.instructions+=2;NFSU2_TR(0x6c836a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c836c:{NFSU2_TR(0x6c836c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c8371ull));
TAIL_STATIC(0x6739efu,673);
}
B6c8371:L6c8371:{c.instructions+=1;NFSU2_TR(0x6c8371);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c8374:L6c8374:{c.instructions+=5;NFSU2_TR(0x6c8374);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c8375:{NFSU2_TR(0x6c8375);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c8376:{NFSU2_TR(0x6c8376);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6c8377:{NFSU2_TR(0x6c8377);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6c8378:{NFSU2_TR(0x6c8378);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6c8379:L6c8379:{c.instructions+=34;NFSU2_TR(0x6c8379);
__builtin_memmove((R+28),(R+28),4);
}
B6c837b:{NFSU2_TR(0x6c837b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c837c:{NFSU2_TR(0x6c837c);
__builtin_memmove((R+20),(R+16),4);
}
B6c837e:{NFSU2_TR(0x6c837e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xfcull))));
}
B6c8384:{NFSU2_TR(0x6c8384);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c8385:{NFSU2_TR(0x6c8385);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c8386:{NFSU2_TR(0x6c8386);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c8387:{NFSU2_TR(0x6c8387);
__builtin_memmove((R+28),(R+4),4);
}
B6c8389:{NFSU2_TR(0x6c8389);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c838f:{NFSU2_TR(0x6c838f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6c8391:{NFSU2_TR(0x6c8391);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6c8393:{NFSU2_TR(0x6c8393);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c8396:{NFSU2_TR(0x6c8396);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c8399:{NFSU2_TR(0x6c8399);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6c839b:{NFSU2_TR(0x6c839b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c839e:{NFSU2_TR(0x6c839e);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6c839f:{NFSU2_TR(0x6c839f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c83a0:{NFSU2_TR(0x6c83a0);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfffffull))));
}
B6c83a6:{NFSU2_TR(0x6c83a6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c83a7:{NFSU2_TR(0x6c83a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c83aa:{NFSU2_TR(0x6c83aa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c83ab:{NFSU2_TR(0x6c83ab);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff04ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c83b1:{NFSU2_TR(0x6c83b1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c83b2:{NFSU2_TR(0x6c83b2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c83b5:{NFSU2_TR(0x6c83b5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c83b6:{NFSU2_TR(0x6c83b6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c83b9:{NFSU2_TR(0x6c83b9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c83ba:{NFSU2_TR(0x6c83ba);
u8 U[4];
w4(U+0,u32(0x7be240ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c83bf:{NFSU2_TR(0x6c83bf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c83c0:{NFSU2_TR(0x6c83c0);
__builtin_memmove((R+4),(R+28),4);
}
B6c83c2:{NFSU2_TR(0x6c83c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c83c5:{NFSU2_TR(0x6c83c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c83cc:{NFSU2_TR(0x6c83cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c83d3:{NFSU2_TR(0x6c83d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c83d8ull));
TAIL_STATIC(0x6c1b89u,6c1);
}
B6c83d8:L6c83d8:{c.instructions+=2;NFSU2_TR(0x6c83d8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c83da:{NFSU2_TR(0x6c83da);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c8406;}}
}
B6c83dc:L6c83dc:{c.instructions+=15;NFSU2_TR(0x6c83dc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c83dd:{NFSU2_TR(0x6c83dd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c83de:{NFSU2_TR(0x6c83de);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c83e1:{NFSU2_TR(0x6c83e1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c83e2:{NFSU2_TR(0x6c83e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff04ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c83e8:{NFSU2_TR(0x6c83e8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c83e9:{NFSU2_TR(0x6c83e9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c83ec:{NFSU2_TR(0x6c83ec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c83ed:{NFSU2_TR(0x6c83ed);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c83f0:{NFSU2_TR(0x6c83f0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c83f1:{NFSU2_TR(0x6c83f1);
u8 U[4];
w4(U+0,u32(0x7be2a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c83f6:{NFSU2_TR(0x6c83f6);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c83fc:{NFSU2_TR(0x6c83fc);
__builtin_memmove((R+4),(R+28),4);
}
B6c83fe:{NFSU2_TR(0x6c83fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c8401:{NFSU2_TR(0x6c8401);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c8406ull));
TAIL_STATIC(0x6c1b89u,6c1);
}
B6c8406:L6c8406:{c.instructions+=2;NFSU2_TR(0x6c8406);
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
B6c8408:{NFSU2_TR(0x6c8408);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c84c2;}}
}
B6c840e:L6c840e:{c.instructions+=3;NFSU2_TR(0x6c840e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c8411:{NFSU2_TR(0x6c8411);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c8413:{NFSU2_TR(0x6c8413);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c847b;}}
}
B6c8415:L6c8415:{c.instructions+=3;NFSU2_TR(0x6c8415);
__builtin_memmove((R+0),(R+24),4);
}
B6c8417:{NFSU2_TR(0x6c8417);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6c841a:{NFSU2_TR(0x6c841a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c841d:L6c841d:{c.instructions+=5;NFSU2_TR(0x6c841d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c8420:{NFSU2_TR(0x6c8420);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6c8423:{NFSU2_TR(0x6c8423);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff14ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6c842a:{NFSU2_TR(0x6c842a);
u8 U[30];
w4(U+0,u32(u32(u32(0xffffff24ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+22),(U+12),4);
w1(R+512,u8((r4(R+4))<(r4(U+22))));
w1(R+523,sborrow<u32>(r4(R+4),r4(U+22)));
w4(U+26,u32(u32(r4(R+4))-u32(r4(U+22))));
w1(R+519,u8(s32(r4(U+26))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+26))==(u32(0x0ull))));
w4(U+16,u32(u32(r4(U+26))&u32(u32(0xffull))));
w1(U+20,u8(__builtin_popcountll(u64(r4(U+16)))));
w1(U+21,u8(u32(r1(U+20))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+21))==(u8(0x0ull))));
}
B6c8431:{NFSU2_TR(0x6c8431);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c8498;}}
}
B6c8433:L6c8433:{c.instructions+=11;NFSU2_TR(0x6c8433);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c8439:{NFSU2_TR(0x6c8439);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c843c:{NFSU2_TR(0x6c843c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c843f:{NFSU2_TR(0x6c843f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c8442:{NFSU2_TR(0x6c8442);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c8445:{NFSU2_TR(0x6c8445);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c8448:{NFSU2_TR(0x6c8448);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c844b:{NFSU2_TR(0x6c844b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c844e:{NFSU2_TR(0x6c844e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c8451:{NFSU2_TR(0x6c8451);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B6c8455:{NFSU2_TR(0x6c8455);
if(r1(R+518)){{goto L6c8498;}}
}
B6c8457:L6c8457:{c.instructions+=6;NFSU2_TR(0x6c8457);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6c845d:{NFSU2_TR(0x6c845d);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6c8460:{NFSU2_TR(0x6c8460);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6c8462:{NFSU2_TR(0x6c8462);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6c8464:{NFSU2_TR(0x6c8464);
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
B6c8467:{NFSU2_TR(0x6c8467);
if(r1(R+514)){{goto L6c8498;}}
}
B6c8469:L6c8469:{c.instructions+=2;NFSU2_TR(0x6c8469);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
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
B6c846d:{NFSU2_TR(0x6c846d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c8498;}}
}
B6c846f:L6c846f:{c.instructions+=4;NFSU2_TR(0x6c846f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c8472:{NFSU2_TR(0x6c8472);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c8476:{NFSU2_TR(0x6c8476);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
}
B6c8479:{NFSU2_TR(0x6c8479);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c841du);}goto L6c841d;}}
}
B6c847b:L6c847b:{c.instructions+=6;NFSU2_TR(0x6c847b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c8481:{NFSU2_TR(0x6c8481);
__builtin_memmove((R+4),(R+24),4);
}
B6c8483:{NFSU2_TR(0x6c8483);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c8485:{NFSU2_TR(0x6c8485);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffull))));
}
B6c848b:{NFSU2_TR(0x6c848b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c848e:{NFSU2_TR(0x6c848e);
if(r1(R+518)){{goto L6c849c;}}
}
B6c8490:L6c8490:{c.instructions+=2;NFSU2_TR(0x6c8490);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x74400000ull))));
}
B6c8496:{NFSU2_TR(0x6c8496);
{goto L6c84a2;}
}
B6c8498:L6c8498:{c.instructions+=2;NFSU2_TR(0x6c8498);
__builtin_memmove((R+0),(R+12),4);
}
B6c849a:{NFSU2_TR(0x6c849a);
{goto L6c84c2;}
}
B6c849c:L6c849c:{c.instructions+=1;NFSU2_TR(0x6c849c);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x74500000ull))));
}
B6c84a2:L6c84a2:{c.instructions+=3;NFSU2_TR(0x6c84a2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c84a4:{NFSU2_TR(0x6c84a4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6c84a6:{NFSU2_TR(0x6c84a6);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c84c0;}}
}
B6c84a8:L6c84a8:{c.instructions+=7;NFSU2_TR(0x6c84a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c84ae:{NFSU2_TR(0x6c84ae);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff14ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B6c84b5:{NFSU2_TR(0x6c84b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c84b8:{NFSU2_TR(0x6c84b8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6c84bb:{NFSU2_TR(0x6c84bb);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6c84bc:{NFSU2_TR(0x6c84bc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B6c84be:{NFSU2_TR(0x6c84be);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c84a8u);}goto L6c84a8;}}
}
B6c84c0:L6c84c0:{c.instructions+=1;NFSU2_TR(0x6c84c0);
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
B6c84c2:L6c84c2:{c.instructions+=5;NFSU2_TR(0x6c84c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c84c3:{NFSU2_TR(0x6c84c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c84c4:{NFSU2_TR(0x6c84c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6c84c5:{NFSU2_TR(0x6c84c5);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6c84c6:{NFSU2_TR(0x6c84c6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6c84c7:L6c84c7:{c.instructions+=34;NFSU2_TR(0x6c84c7);
__builtin_memmove((R+28),(R+28),4);
}
B6c84c9:{NFSU2_TR(0x6c84c9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c84ca:{NFSU2_TR(0x6c84ca);
__builtin_memmove((R+20),(R+16),4);
}
B6c84cc:{NFSU2_TR(0x6c84cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xf8ull))));
}
B6c84d2:{NFSU2_TR(0x6c84d2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c84d3:{NFSU2_TR(0x6c84d3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c84d4:{NFSU2_TR(0x6c84d4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c84d5:{NFSU2_TR(0x6c84d5);
__builtin_memmove((R+24),(R+4),4);
}
B6c84d7:{NFSU2_TR(0x6c84d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c84dd:{NFSU2_TR(0x6c84dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6c84df:{NFSU2_TR(0x6c84df);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6c84e1:{NFSU2_TR(0x6c84e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c84e4:{NFSU2_TR(0x6c84e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c84e7:{NFSU2_TR(0x6c84e7);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6c84e9:{NFSU2_TR(0x6c84e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c84ec:{NFSU2_TR(0x6c84ec);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6c84ed:{NFSU2_TR(0x6c84ed);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c84ee:{NFSU2_TR(0x6c84ee);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xfffffull))));
}
B6c84f4:{NFSU2_TR(0x6c84f4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c84f5:{NFSU2_TR(0x6c84f5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c84f8:{NFSU2_TR(0x6c84f8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c84f9:{NFSU2_TR(0x6c84f9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff48ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c84ff:{NFSU2_TR(0x6c84ff);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c8500:{NFSU2_TR(0x6c8500);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c8503:{NFSU2_TR(0x6c8503);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c8504:{NFSU2_TR(0x6c8504);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff08ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c850a:{NFSU2_TR(0x6c850a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c850b:{NFSU2_TR(0x6c850b);
u8 U[4];
w4(U+0,u32(0x7be300ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c8510:{NFSU2_TR(0x6c8510);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c8511:{NFSU2_TR(0x6c8511);
__builtin_memmove((R+4),(R+24),4);
}
B6c8513:{NFSU2_TR(0x6c8513);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c8516:{NFSU2_TR(0x6c8516);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c851d:{NFSU2_TR(0x6c851d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c8524:{NFSU2_TR(0x6c8524);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c8529ull));
TAIL_STATIC(0x6c1b89u,6c1);
}
B6c8529:L6c8529:{c.instructions+=2;NFSU2_TR(0x6c8529);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c852b:{NFSU2_TR(0x6c852b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c855a;}}
}
B6c852d:L6c852d:{c.instructions+=15;NFSU2_TR(0x6c852d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c852e:{NFSU2_TR(0x6c852e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c852f:{NFSU2_TR(0x6c852f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c8532:{NFSU2_TR(0x6c8532);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c8533:{NFSU2_TR(0x6c8533);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff48ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c8539:{NFSU2_TR(0x6c8539);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c853a:{NFSU2_TR(0x6c853a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c853d:{NFSU2_TR(0x6c853d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c853e:{NFSU2_TR(0x6c853e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff08ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c8544:{NFSU2_TR(0x6c8544);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c8545:{NFSU2_TR(0x6c8545);
u8 U[4];
w4(U+0,u32(0x7be380ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c854a:{NFSU2_TR(0x6c854a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c8550:{NFSU2_TR(0x6c8550);
__builtin_memmove((R+4),(R+24),4);
}
B6c8552:{NFSU2_TR(0x6c8552);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c8555:{NFSU2_TR(0x6c8555);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c855aull));
TAIL_STATIC(0x6c1b89u,6c1);
}
B6c855a:L6c855a:{c.instructions+=2;NFSU2_TR(0x6c855a);
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
B6c855c:{NFSU2_TR(0x6c855c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c8624;}}
}
B6c8562:L6c8562:{c.instructions+=3;NFSU2_TR(0x6c8562);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c8565:{NFSU2_TR(0x6c8565);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c8567:{NFSU2_TR(0x6c8567);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c859b;}}
}
B6c8569:L6c8569:{c.instructions+=6;NFSU2_TR(0x6c8569);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c856c:{NFSU2_TR(0x6c856c);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6c856f:{NFSU2_TR(0x6c856f);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff48ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B6c8576:{NFSU2_TR(0x6c8576);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff58ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6c857d:{NFSU2_TR(0x6c857d);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B6c857f:{NFSU2_TR(0x6c857f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c85b8;}}
}
B6c8581:L6c8581:{c.instructions+=2;NFSU2_TR(0x6c8581);
u8 U[30];
w4(U+0,u32(u32(u32(0xffffff68ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+22),(U+12),4);
w1(R+512,u8((r4(R+4))<(r4(U+22))));
w1(R+523,sborrow<u32>(r4(R+4),r4(U+22)));
w4(U+26,u32(u32(r4(R+4))-u32(r4(U+22))));
w1(R+519,u8(s32(r4(U+26))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+26))==(u32(0x0ull))));
w4(U+16,u32(u32(r4(U+26))&u32(u32(0xffull))));
w1(U+20,u8(__builtin_popcountll(u64(r4(U+16)))));
w1(U+21,u8(u32(r1(U+20))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+21))==(u8(0x0ull))));
}
B6c8588:{NFSU2_TR(0x6c8588);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c85b8;}}
}
B6c858a:L6c858a:{c.instructions+=2;NFSU2_TR(0x6c858a);
u8 U[30];
w4(U+0,u32(u32(u32(0xffffff78ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+22),(U+12),4);
w1(R+512,u8((r4(R+8))<(r4(U+22))));
w1(R+523,sborrow<u32>(r4(R+8),r4(U+22)));
w4(U+26,u32(u32(r4(R+8))-u32(r4(U+22))));
w1(R+519,u8(s32(r4(U+26))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+26))==(u32(0x0ull))));
w4(U+16,u32(u32(r4(U+26))&u32(u32(0xffull))));
w1(U+20,u8(__builtin_popcountll(u64(r4(U+16)))));
w1(U+21,u8(u32(r1(U+20))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+21))==(u8(0x0ull))));
}
B6c8591:{NFSU2_TR(0x6c8591);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c85b8;}}
}
B6c8593:L6c8593:{c.instructions+=3;NFSU2_TR(0x6c8593);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c8596:{NFSU2_TR(0x6c8596);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
}
B6c8599:{NFSU2_TR(0x6c8599);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c8569u);}goto L6c8569;}}
}
B6c859b:L6c859b:{c.instructions+=6;NFSU2_TR(0x6c859b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c85a1:{NFSU2_TR(0x6c85a1);
__builtin_memmove((R+4),(R+28),4);
}
B6c85a3:{NFSU2_TR(0x6c85a3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c85a5:{NFSU2_TR(0x6c85a5);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffull))));
}
B6c85ab:{NFSU2_TR(0x6c85ab);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c85ae:{NFSU2_TR(0x6c85ae);
if(r1(R+518)){{goto L6c85bc;}}
}
B6c85b0:L6c85b0:{c.instructions+=2;NFSU2_TR(0x6c85b0);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x74400000ull))));
}
B6c85b6:{NFSU2_TR(0x6c85b6);
{goto L6c85c2;}
}
B6c85b8:L6c85b8:{c.instructions+=2;NFSU2_TR(0x6c85b8);
__builtin_memmove((R+0),(R+12),4);
}
B6c85ba:{NFSU2_TR(0x6c85ba);
{goto L6c8624;}
}
B6c85bc:L6c85bc:{c.instructions+=1;NFSU2_TR(0x6c85bc);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x74500000ull))));
}
B6c85c2:L6c85c2:{c.instructions+=10;NFSU2_TR(0x6c85c2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c85c3:{NFSU2_TR(0x6c85c3);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6c85c5:{NFSU2_TR(0x6c85c5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c85c6:{NFSU2_TR(0x6c85c6);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6c85c9:{NFSU2_TR(0x6c85c9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c85ca:{NFSU2_TR(0x6c85ca);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6c85cc:{NFSU2_TR(0x6c85cc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c85cd:{NFSU2_TR(0x6c85cd);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c85d0:{NFSU2_TR(0x6c85d0);
__builtin_memmove((R+4),(R+24),4);
}
B6c85d2:{NFSU2_TR(0x6c85d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c85d7ull));
TAIL_STATIC(0x699c39u,699);
}
B6c85d7:L6c85d7:{c.instructions+=3;NFSU2_TR(0x6c85d7);
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
B6c85da:{NFSU2_TR(0x6c85da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c85dd:{NFSU2_TR(0x6c85dd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c85e6;}}
}
B6c85df:L6c85df:{c.instructions+=2;NFSU2_TR(0x6c85df);
w4(R+0,u32(0x8007000eull));
}
B6c85e4:{NFSU2_TR(0x6c85e4);
{goto L6c8624;}
}
B6c85e6:L6c85e6:{c.instructions+=3;NFSU2_TR(0x6c85e6);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6c85e8:{NFSU2_TR(0x6c85e8);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c85ea:{NFSU2_TR(0x6c85ea);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c8622;}}
}
B6c85ec:L6c85ec:{c.instructions+=3;NFSU2_TR(0x6c85ec);
__builtin_memmove((R+0),(R+28),4);
}
B6c85ee:{NFSU2_TR(0x6c85ee);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6c85f1:{NFSU2_TR(0x6c85f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c85f4:L6c85f4:{c.instructions+=13;NFSU2_TR(0x6c85f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c85fa:{NFSU2_TR(0x6c85fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c85fd:{NFSU2_TR(0x6c85fd);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff48ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B6c8604:{NFSU2_TR(0x6c8604);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c8607:{NFSU2_TR(0x6c8607);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c860b:{NFSU2_TR(0x6c860b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6c860e:{NFSU2_TR(0x6c860e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c8614:{NFSU2_TR(0x6c8614);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c8617:{NFSU2_TR(0x6c8617);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c861a:{NFSU2_TR(0x6c861a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6c861b:{NFSU2_TR(0x6c861b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B6c861d:{NFSU2_TR(0x6c861d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6c8620:{NFSU2_TR(0x6c8620);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c85f4u);}goto L6c85f4;}}
}
B6c8622:L6c8622:{c.instructions+=1;NFSU2_TR(0x6c8622);
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
B6c8624:L6c8624:{c.instructions+=5;NFSU2_TR(0x6c8624);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c8625:{NFSU2_TR(0x6c8625);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c8626:{NFSU2_TR(0x6c8626);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6c8627:{NFSU2_TR(0x6c8627);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6c8628:{NFSU2_TR(0x6c8628);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6c8629:L6c8629:{c.instructions+=21;NFSU2_TR(0x6c8629);
__builtin_memmove((R+28),(R+28),4);
}
B6c862b:{NFSU2_TR(0x6c862b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c862c:{NFSU2_TR(0x6c862c);
__builtin_memmove((R+20),(R+16),4);
}
B6c862e:{NFSU2_TR(0x6c862e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xfcull))));
}
B6c8634:{NFSU2_TR(0x6c8634);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c8635:{NFSU2_TR(0x6c8635);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c8636:{NFSU2_TR(0x6c8636);
__builtin_memmove((R+24),(R+4),4);
}
B6c8638:{NFSU2_TR(0x6c8638);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c863e:{NFSU2_TR(0x6c863e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6c8640:{NFSU2_TR(0x6c8640);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c8641:{NFSU2_TR(0x6c8641);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6c8643:{NFSU2_TR(0x6c8643);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6c8645:{NFSU2_TR(0x6c8645);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6c8646:{NFSU2_TR(0x6c8646);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6c864b:{NFSU2_TR(0x6c864b);
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
B6c864d:{NFSU2_TR(0x6c864d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c8650:{NFSU2_TR(0x6c8650);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c8653:{NFSU2_TR(0x6c8653);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c8656:{NFSU2_TR(0x6c8656);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c865d:{NFSU2_TR(0x6c865d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c8664:{NFSU2_TR(0x6c8664);
if(r1(R+518)){{goto L6c866d;}}
}
B6c8666:L6c8666:{c.instructions+=2;NFSU2_TR(0x6c8666);
__builtin_memmove((R+0),(R+28),4);
}
B6c8668:{NFSU2_TR(0x6c8668);
{goto L6c8822;}
}
B6c866d:L6c866d:{c.instructions+=14;NFSU2_TR(0x6c866d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c866e:{NFSU2_TR(0x6c866e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c866f:{NFSU2_TR(0x6c866f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c8672:{NFSU2_TR(0x6c8672);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c8673:{NFSU2_TR(0x6c8673);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff04ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c8679:{NFSU2_TR(0x6c8679);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c867a:{NFSU2_TR(0x6c867a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c867d:{NFSU2_TR(0x6c867d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c867e:{NFSU2_TR(0x6c867e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c8681:{NFSU2_TR(0x6c8681);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c8682:{NFSU2_TR(0x6c8682);
u8 U[4];
w4(U+0,u32(0x7be0c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c8687:{NFSU2_TR(0x6c8687);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c8688:{NFSU2_TR(0x6c8688);
__builtin_memmove((R+4),(R+24),4);
}
B6c868a:{NFSU2_TR(0x6c868a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c868full));
TAIL_STATIC(0x6c1b89u,6c1);
}
B6c868f:L6c868f:{c.instructions+=2;NFSU2_TR(0x6c868f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c8691:{NFSU2_TR(0x6c8691);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c8710;}}
}
B6c8693:L6c8693:{c.instructions+=14;NFSU2_TR(0x6c8693);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c8694:{NFSU2_TR(0x6c8694);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c8695:{NFSU2_TR(0x6c8695);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c8698:{NFSU2_TR(0x6c8698);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c8699:{NFSU2_TR(0x6c8699);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff04ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c869f:{NFSU2_TR(0x6c869f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c86a0:{NFSU2_TR(0x6c86a0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c86a3:{NFSU2_TR(0x6c86a3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c86a4:{NFSU2_TR(0x6c86a4);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c86a7:{NFSU2_TR(0x6c86a7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c86a8:{NFSU2_TR(0x6c86a8);
u8 U[4];
w4(U+0,u32(0x7be120ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c86ad:{NFSU2_TR(0x6c86ad);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c86b3:{NFSU2_TR(0x6c86b3);
__builtin_memmove((R+4),(R+24),4);
}
B6c86b5:{NFSU2_TR(0x6c86b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c86baull));
TAIL_STATIC(0x6c1b89u,6c1);
}
B6c86ba:L6c86ba:{c.instructions+=2;NFSU2_TR(0x6c86ba);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c86bc:{NFSU2_TR(0x6c86bc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c8710;}}
}
B6c86be:L6c86be:{c.instructions+=14;NFSU2_TR(0x6c86be);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c86bf:{NFSU2_TR(0x6c86bf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c86c0:{NFSU2_TR(0x6c86c0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c86c3:{NFSU2_TR(0x6c86c3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c86c4:{NFSU2_TR(0x6c86c4);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff04ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c86ca:{NFSU2_TR(0x6c86ca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c86cb:{NFSU2_TR(0x6c86cb);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c86ce:{NFSU2_TR(0x6c86ce);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c86cf:{NFSU2_TR(0x6c86cf);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c86d2:{NFSU2_TR(0x6c86d2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c86d3:{NFSU2_TR(0x6c86d3);
u8 U[4];
w4(U+0,u32(0x7be180ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c86d8:{NFSU2_TR(0x6c86d8);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c86de:{NFSU2_TR(0x6c86de);
__builtin_memmove((R+4),(R+24),4);
}
B6c86e0:{NFSU2_TR(0x6c86e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c86e5ull));
TAIL_STATIC(0x6c1b89u,6c1);
}
B6c86e5:L6c86e5:{c.instructions+=2;NFSU2_TR(0x6c86e5);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c86e7:{NFSU2_TR(0x6c86e7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c8710;}}
}
B6c86e9:L6c86e9:{c.instructions+=14;NFSU2_TR(0x6c86e9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c86ea:{NFSU2_TR(0x6c86ea);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c86eb:{NFSU2_TR(0x6c86eb);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c86ee:{NFSU2_TR(0x6c86ee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c86ef:{NFSU2_TR(0x6c86ef);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff04ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c86f5:{NFSU2_TR(0x6c86f5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c86f6:{NFSU2_TR(0x6c86f6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c86f9:{NFSU2_TR(0x6c86f9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c86fa:{NFSU2_TR(0x6c86fa);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c86fd:{NFSU2_TR(0x6c86fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c86fe:{NFSU2_TR(0x6c86fe);
u8 U[4];
w4(U+0,u32(0x7be1e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c8703:{NFSU2_TR(0x6c8703);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c8709:{NFSU2_TR(0x6c8709);
__builtin_memmove((R+4),(R+24),4);
}
B6c870b:{NFSU2_TR(0x6c870b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c8710ull));
TAIL_STATIC(0x6c1b89u,6c1);
}
B6c8710:L6c8710:{c.instructions+=2;NFSU2_TR(0x6c8710);
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
B6c8712:{NFSU2_TR(0x6c8712);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c8822;}}
}
B6c8718:L6c8718:{c.instructions+=6;NFSU2_TR(0x6c8718);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c871e:{NFSU2_TR(0x6c871e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c8721:{NFSU2_TR(0x6c8721);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c8724:{NFSU2_TR(0x6c8724);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c8727:{NFSU2_TR(0x6c8727);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c872a:{NFSU2_TR(0x6c872a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6c872d:L6c872d:{c.instructions+=6;NFSU2_TR(0x6c872d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6c872f:{NFSU2_TR(0x6c872f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6c8732:{NFSU2_TR(0x6c8732);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c8735:{NFSU2_TR(0x6c8735);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c8738:{NFSU2_TR(0x6c8738);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6c873c:{NFSU2_TR(0x6c873c);
if(r1(R+518)){{goto L6c8827;}}
}
B6c8742:L6c8742:{c.instructions+=6;NFSU2_TR(0x6c8742);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6c8748:{NFSU2_TR(0x6c8748);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6c874b:{NFSU2_TR(0x6c874b);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6c874d:{NFSU2_TR(0x6c874d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6c874f:{NFSU2_TR(0x6c874f);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6c8752:{NFSU2_TR(0x6c8752);
if(r1(R+514)){{goto L6c8827;}}
}
B6c8758:L6c8758:{c.instructions+=2;NFSU2_TR(0x6c8758);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c875c:{NFSU2_TR(0x6c875c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c8827;}}
}
B6c8762:L6c8762:{c.instructions+=6;NFSU2_TR(0x6c8762);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c8765:{NFSU2_TR(0x6c8765);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c8767:{NFSU2_TR(0x6c8767);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6c8768:{NFSU2_TR(0x6c8768);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6c876b:{NFSU2_TR(0x6c876b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B6c876e:{NFSU2_TR(0x6c876e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c872du);}goto L6c872d;}}
}
B6c8770:L6c8770:{c.instructions+=5;NFSU2_TR(0x6c8770);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c8776:{NFSU2_TR(0x6c8776);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6c8779:{NFSU2_TR(0x6c8779);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c877d:{NFSU2_TR(0x6c877d);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c8781:{NFSU2_TR(0x6c8781);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c8791;}}
}
B6c8783:L6c8783:{c.instructions+=4;NFSU2_TR(0x6c8783);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c8786:{NFSU2_TR(0x6c8786);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c8789:{NFSU2_TR(0x6c8789);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(r1(R+0))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6c878c:{NFSU2_TR(0x6c878c);
if(r1(R+518)){{goto L6c8791;}}
}
B6c878e:L6c878e:{c.instructions+=1;NFSU2_TR(0x6c878e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c8791:L6c8791:{c.instructions+=1;NFSU2_TR(0x6c8791);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6c8793:L6c8793:{c.instructions+=16;NFSU2_TR(0x6c8793);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c8799:{NFSU2_TR(0x6c8799);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c879c:{NFSU2_TR(0x6c879c);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff14ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6c87a3:{NFSU2_TR(0x6c87a3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6c87a6:{NFSU2_TR(0x6c87a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c87a9:{NFSU2_TR(0x6c87a9);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff24ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6c87b0:{NFSU2_TR(0x6c87b0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6c87b3:{NFSU2_TR(0x6c87b3);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6c87b6:{NFSU2_TR(0x6c87b6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c87b7:{NFSU2_TR(0x6c87b7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c87b8:{NFSU2_TR(0x6c87b8);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6c87bb:{NFSU2_TR(0x6c87bb);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c87be:{NFSU2_TR(0x6c87be);
__builtin_memmove((R+4),(R+24),4);
}
B6c87c0:{NFSU2_TR(0x6c87c0);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c87c3:{NFSU2_TR(0x6c87c3);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c87c6:{NFSU2_TR(0x6c87c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c87cbull));
TAIL_STATIC(0x699c39u,699);
}
B6c87cb:L6c87cb:{c.instructions+=3;NFSU2_TR(0x6c87cb);
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
B6c87ce:{NFSU2_TR(0x6c87ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c87d1:{NFSU2_TR(0x6c87d1);
if(r1(R+518)){{goto L6c883a;}}
}
B6c87d3:L6c87d3:{c.instructions+=6;NFSU2_TR(0x6c87d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c87d6:{NFSU2_TR(0x6c87d6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c87d9:{NFSU2_TR(0x6c87d9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c87da:{NFSU2_TR(0x6c87da);
__builtin_memmove((R+4),(R+0),4);
}
B6c87dc:{NFSU2_TR(0x6c87dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c87df:{NFSU2_TR(0x6c87df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c87e4ull));
TAIL_STATIC(0x699765u,699);
}
B6c87e4:L6c87e4:{c.instructions+=3;NFSU2_TR(0x6c87e4);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c87e8:{NFSU2_TR(0x6c87e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c87eb:{NFSU2_TR(0x6c87eb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c882c;}}
}
B6c87ed:L6c87ed:{c.instructions+=2;NFSU2_TR(0x6c87ed);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c87f1:{NFSU2_TR(0x6c87f1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c87fd;}}
}
B6c87f3:L6c87f3:{c.instructions+=2;NFSU2_TR(0x6c87f3);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff24ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6c87fa:{NFSU2_TR(0x6c87fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c87fd:L6c87fd:{c.instructions+=1;NFSU2_TR(0x6c87fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))^u32(u32(0x80000ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c8804:L6c8804:{c.instructions+=7;NFSU2_TR(0x6c8804);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c880a:{NFSU2_TR(0x6c880a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c880d:{NFSU2_TR(0x6c880d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c8810:{NFSU2_TR(0x6c8810);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6c8814:{NFSU2_TR(0x6c8814);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B6c8817:{NFSU2_TR(0x6c8817);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B6c881a:{NFSU2_TR(0x6c881a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c8793u);}goto L6c8793;}}
}
B6c8820:L6c8820:{c.instructions+=1;NFSU2_TR(0x6c8820);
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
B6c8822:L6c8822:{c.instructions+=5;NFSU2_TR(0x6c8822);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c8823:{NFSU2_TR(0x6c8823);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c8824:{NFSU2_TR(0x6c8824);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6c8825:{NFSU2_TR(0x6c8825);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6c8826:{NFSU2_TR(0x6c8826);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6c8827:L6c8827:{c.instructions+=3;NFSU2_TR(0x6c8827);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c8829:{NFSU2_TR(0x6c8829);
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
B6c882a:{NFSU2_TR(0x6c882a);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c8822u);}goto L6c8822;}
}
B6c882c:L6c882c:{c.instructions+=4;NFSU2_TR(0x6c882c);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6c882f:{NFSU2_TR(0x6c882f);
{u32 ea_=u32(u32(8077672u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B6c8835:{NFSU2_TR(0x6c8835);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6c8838:{NFSU2_TR(0x6c8838);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c8804u);}goto L6c8804;}
}
B6c883a:L6c883a:{c.instructions+=2;NFSU2_TR(0x6c883a);
w4(R+0,u32(0x8007000eull));
}
B6c883f:{NFSU2_TR(0x6c883f);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c8822u);}goto L6c8822;}
}
B6c8841:L6c8841:{c.instructions+=13;NFSU2_TR(0x6c8841);
__builtin_memmove((R+28),(R+28),4);
}
B6c8843:{NFSU2_TR(0x6c8843);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c8844:{NFSU2_TR(0x6c8844);
__builtin_memmove((R+20),(R+16),4);
}
B6c8846:{NFSU2_TR(0x6c8846);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x278ull))));
}
B6c884c:{NFSU2_TR(0x6c884c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c8850:{NFSU2_TR(0x6c8850);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c8851:{NFSU2_TR(0x6c8851);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c8852:{NFSU2_TR(0x6c8852);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c8853:{NFSU2_TR(0x6c8853);
__builtin_memmove((R+12),(R+4),4);
}
B6c8855:{NFSU2_TR(0x6c8855);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c8857:{NFSU2_TR(0x6c8857);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B6c885a:{NFSU2_TR(0x6c885a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c885b:{NFSU2_TR(0x6c885b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffec8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c8861:L6c8861:{c.instructions+=1;NFSU2_TR(0x6c8861);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6c8863;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c8861u);}goto L6c8861;}
}
B6c8863:L6c8863:{c.instructions+=16;NFSU2_TR(0x6c8863);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c8869:{NFSU2_TR(0x6c8869);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6c886b:{NFSU2_TR(0x6c886b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6c886d:{NFSU2_TR(0x6c886d);
w4(R+4,u32(0xfffffull));
}
B6c8872:{NFSU2_TR(0x6c8872);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6c8874:{NFSU2_TR(0x6c8874);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c8877:{NFSU2_TR(0x6c8877);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c887a:{NFSU2_TR(0x6c887a);
w4(R+28,u32(u32(r4(R+28))&u32(r4(R+4))));
}
B6c887c:{NFSU2_TR(0x6c887c);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6c887d:{NFSU2_TR(0x6c887d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c8880:{NFSU2_TR(0x6c8880);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c8883:{NFSU2_TR(0x6c8883);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c888a:{NFSU2_TR(0x6c888a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c8891:{NFSU2_TR(0x6c8891);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c8894:{NFSU2_TR(0x6c8894);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c8897:{NFSU2_TR(0x6c8897);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6c88a7;}}
}
B6c8899:L6c8899:{c.instructions+=3;NFSU2_TR(0x6c8899);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfff00000ull))));
}
B6c889f:{NFSU2_TR(0x6c889f);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20500000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c88a5:{NFSU2_TR(0x6c88a5);
if(r1(R+518)){{goto L6c88af;}}
}
B6c88a7:L6c88a7:{c.instructions+=2;NFSU2_TR(0x6c88a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c88aa:{NFSU2_TR(0x6c88aa);
{goto L6c8c44;}
}
B6c88af:L6c88af:{c.instructions+=1;NFSU2_TR(0x6c88af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c88b3:L6c88b3:{c.instructions+=1;NFSU2_TR(0x6c88b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c88b7:L6c88b7:{c.instructions+=6;NFSU2_TR(0x6c88b7);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6c88b9:{NFSU2_TR(0x6c88b9);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c88bb:{NFSU2_TR(0x6c88bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c88bc:{NFSU2_TR(0x6c88bc);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B6c88bf:{NFSU2_TR(0x6c88bf);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff78ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c88c5:{NFSU2_TR(0x6c88c5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe28ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c88cb:L6c88cb:{c.instructions+=1;NFSU2_TR(0x6c88cb);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6c88cd;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c88cbu);}goto L6c88cb;}
}
B6c88cd:L6c88cd:{c.instructions+=3;NFSU2_TR(0x6c88cd);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c88cf:{NFSU2_TR(0x6c88cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c88d0:{NFSU2_TR(0x6c88d0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd88ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c88d6:L6c88d6:{c.instructions+=1;NFSU2_TR(0x6c88d6);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6c88d8;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c88d6u);}goto L6c88d6;}
}
B6c88d8:L6c88d8:{c.instructions+=6;NFSU2_TR(0x6c88d8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c88da:{NFSU2_TR(0x6c88da);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff78ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c88e0:{NFSU2_TR(0x6c88e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c88e3:{NFSU2_TR(0x6c88e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c88e6:{NFSU2_TR(0x6c88e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c88e9:{NFSU2_TR(0x6c88e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c88ec:L6c88ec:{c.instructions+=2;NFSU2_TR(0x6c88ec);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c88f0:{NFSU2_TR(0x6c88f0);
if(r1(R+518)){{goto L6c88fa;}}
}
B6c88f2:L6c88f2:{c.instructions+=4;NFSU2_TR(0x6c88f2);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6c88f4:{NFSU2_TR(0x6c88f4);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6c88f5:{NFSU2_TR(0x6c88f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B6c88f8:{NFSU2_TR(0x6c88f8);
{goto L6c88fd;}
}
B6c88fa:L6c88fa:{c.instructions+=1;NFSU2_TR(0x6c88fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c88fd:L6c88fd:{c.instructions+=9;NFSU2_TR(0x6c88fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c8900:{NFSU2_TR(0x6c8900);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c8903:{NFSU2_TR(0x6c8903);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7bdb6cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c890a:{NFSU2_TR(0x6c890a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x10ull))));
}
B6c890d:{NFSU2_TR(0x6c890d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c8910:{NFSU2_TR(0x6c8910);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6c8913:{NFSU2_TR(0x6c8913);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6c8915:{NFSU2_TR(0x6c8915);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c8918:{NFSU2_TR(0x6c8918);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6c898e;}}
}
B6c891a:L6c891a:{c.instructions+=3;NFSU2_TR(0x6c891a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c891d:{NFSU2_TR(0x6c891d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c8920:{NFSU2_TR(0x6c8920);
if(r1(R+518)){{goto L6c89dc;}}
}
B6c8926:L6c8926:{c.instructions+=16;NFSU2_TR(0x6c8926);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6c8929:{NFSU2_TR(0x6c8929);
__builtin_memmove((R+28),(R+4),4);
}
B6c892b:{NFSU2_TR(0x6c892b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c892e:{NFSU2_TR(0x6c892e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c8931:{NFSU2_TR(0x6c8931);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c8933:{NFSU2_TR(0x6c8933);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7bdb78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c8939:{NFSU2_TR(0x6c8939);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff68ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c893f:{NFSU2_TR(0x6c893f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c8940:{NFSU2_TR(0x6c8940);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c8943:{NFSU2_TR(0x6c8943);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c8944:{NFSU2_TR(0x6c8944);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c8947:{NFSU2_TR(0x6c8947);
__builtin_memmove((R+4),(R+12),4);
}
B6c8949:{NFSU2_TR(0x6c8949);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c894a:{NFSU2_TR(0x6c894a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c894b:{NFSU2_TR(0x6c894b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c894e:{NFSU2_TR(0x6c894e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c8953ull));
TAIL_STATIC(0x6c19d8u,6c1);
}
B6c8953:L6c8953:{c.instructions+=2;NFSU2_TR(0x6c8953);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c8955:{NFSU2_TR(0x6c8955);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c89dc;}}
}
B6c895b:L6c895b:{c.instructions+=15;NFSU2_TR(0x6c895b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c895c:{NFSU2_TR(0x6c895c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c895f:{NFSU2_TR(0x6c895f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff68ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c8965:{NFSU2_TR(0x6c8965);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c8966:{NFSU2_TR(0x6c8966);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd88ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c896c:{NFSU2_TR(0x6c896c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c896d:{NFSU2_TR(0x6c896d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c8970:{NFSU2_TR(0x6c8970);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c8971:{NFSU2_TR(0x6c8971);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff78ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c8977:{NFSU2_TR(0x6c8977);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c8978:{NFSU2_TR(0x6c8978);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7bdb60ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c897e:{NFSU2_TR(0x6c897e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c897f:{NFSU2_TR(0x6c897f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c8982:{NFSU2_TR(0x6c8982);
__builtin_memmove((R+4),(R+12),4);
}
B6c8984:{NFSU2_TR(0x6c8984);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c8989ull));
TAIL_STATIC(0x6c1b89u,6c1);
}
B6c8989:L6c8989:{c.instructions+=2;NFSU2_TR(0x6c8989);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c898c:{NFSU2_TR(0x6c898c);
{goto L6c89be;}
}
B6c898e:L6c898e:{c.instructions+=4;NFSU2_TR(0x6c898e);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x10ull))));
}
B6c8991:{NFSU2_TR(0x6c8991);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6c8993:{NFSU2_TR(0x6c8993);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6c8996:{NFSU2_TR(0x6c8996);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffe28ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B6c899d:L6c899d:{c.instructions+=3;NFSU2_TR(0x6c899d);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffb8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6c89a1:{NFSU2_TR(0x6c89a1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6c89a4:{NFSU2_TR(0x6c89a4);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6c89b2;}}
}
B6c89a6:L6c89a6:{c.instructions+=5;NFSU2_TR(0x6c89a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c89a9:{NFSU2_TR(0x6c89a9);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B6c89ab:{NFSU2_TR(0x6c89ab);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c89ae:{NFSU2_TR(0x6c89ae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6c89b0:{NFSU2_TR(0x6c89b0);
{goto L6c89b5;}
}
B6c89b2:L6c89b2:{c.instructions+=1;NFSU2_TR(0x6c89b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))|u32(u32(0xffffffffull))));
s4(u32(r4(R+4)),r4(U+0));
}
B6c89b5:L6c89b5:{c.instructions+=4;NFSU2_TR(0x6c89b5);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6c89b6:{NFSU2_TR(0x6c89b6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6c89b9:{NFSU2_TR(0x6c89b9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B6c89bc:{NFSU2_TR(0x6c89bc);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c899du);}goto L6c899d;}}
}
B6c89be:L6c89be:{c.instructions+=2;NFSU2_TR(0x6c89be);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c89c2:{NFSU2_TR(0x6c89c2);
if(r1(R+518)){{goto L6c89e3;}}
}
B6c89c4:L6c89c4:{c.instructions+=6;NFSU2_TR(0x6c89c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c89c7:{NFSU2_TR(0x6c89c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B6c89ca:{NFSU2_TR(0x6c89ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c89cd:{NFSU2_TR(0x6c89cd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x2ull))));
}
B6c89d1:{NFSU2_TR(0x6c89d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c89d4:{NFSU2_TR(0x6c89d4);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c88ecu);}goto L6c88ec;}}
}
B6c89da:L6c89da:{c.instructions+=1;NFSU2_TR(0x6c89da);
{goto L6c89e3;}
}
B6c89dc:L6c89dc:{c.instructions+=1;NFSU2_TR(0x6c89dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c89e3:L6c89e3:{c.instructions+=3;NFSU2_TR(0x6c89e3);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6c89e5:{NFSU2_TR(0x6c89e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c89e8:{NFSU2_TR(0x6c89e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c89eb:L6c89eb:{c.instructions+=2;NFSU2_TR(0x6c89eb);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c89ee:{NFSU2_TR(0x6c89ee);
if(r1(R+518)){{goto L6c89f8;}}
}
B6c89f0:L6c89f0:{c.instructions+=4;NFSU2_TR(0x6c89f0);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6c89f2:{NFSU2_TR(0x6c89f2);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6c89f3:{NFSU2_TR(0x6c89f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B6c89f6:{NFSU2_TR(0x6c89f6);
{goto L6c89fb;}
}
B6c89f8:L6c89f8:{c.instructions+=1;NFSU2_TR(0x6c89f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c89fb:L6c89fb:{c.instructions+=2;NFSU2_TR(0x6c89fb);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7bdb6cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w1(R+512,u8((r4(U+12))<(u32(0x10ull))));
}
B6c8a03:{NFSU2_TR(0x6c8a03);
if(r1(R+512)){{goto L6c8a66;}}
}
B6c8a05:L6c8a05:{c.instructions+=3;NFSU2_TR(0x6c8a05);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c8a08:{NFSU2_TR(0x6c8a08);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c8a0b:{NFSU2_TR(0x6c8a0b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c8a66;}}
}
B6c8a0d:L6c8a0d:{c.instructions+=2;NFSU2_TR(0x6c8a0d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c8a10:{NFSU2_TR(0x6c8a10);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c8a59;}}
}
B6c8a12:L6c8a12:{c.instructions+=3;NFSU2_TR(0x6c8a12);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c8a15:{NFSU2_TR(0x6c8a15);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff78ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6c8a1c:{NFSU2_TR(0x6c8a1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c8a1f:L6c8a1f:{c.instructions+=3;NFSU2_TR(0x6c8a1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c8a23:{NFSU2_TR(0x6c8a23);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c8a25:{NFSU2_TR(0x6c8a25);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c8a4a;}}
}
B6c8a27:L6c8a27:{c.instructions+=6;NFSU2_TR(0x6c8a27);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c8a2a:{NFSU2_TR(0x6c8a2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c8a2d:{NFSU2_TR(0x6c8a2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c8a30:{NFSU2_TR(0x6c8a30);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B6c8a32:{NFSU2_TR(0x6c8a32);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6c8a35:{NFSU2_TR(0x6c8a35);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c8a38:L6c8a38:{c.instructions+=2;NFSU2_TR(0x6c8a38);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+8))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6c8a3a:{NFSU2_TR(0x6c8a3a);
if(r1(R+518)){{goto L6c8a52;}}
}
B6c8a3c:L6c8a3c:{c.instructions+=5;NFSU2_TR(0x6c8a3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c8a3f:{NFSU2_TR(0x6c8a3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c8a42:{NFSU2_TR(0x6c8a42);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6c8a45:{NFSU2_TR(0x6c8a45);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
}
B6c8a48:{NFSU2_TR(0x6c8a48);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c8a38u);}goto L6c8a38;}}
}
B6c8a4a:L6c8a4a:{c.instructions+=3;NFSU2_TR(0x6c8a4a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6c8a4b:{NFSU2_TR(0x6c8a4b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B6c8a4e:{NFSU2_TR(0x6c8a4e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c8a1fu);}goto L6c8a1f;}}
}
B6c8a50:L6c8a50:{c.instructions+=1;NFSU2_TR(0x6c8a50);
{goto L6c8a59;}
}
B6c8a52:L6c8a52:{c.instructions+=1;NFSU2_TR(0x6c8a52);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c8a59:L6c8a59:{c.instructions+=5;NFSU2_TR(0x6c8a59);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c8a5c:{NFSU2_TR(0x6c8a5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c8a5f:{NFSU2_TR(0x6c8a5f);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6c8a61:{NFSU2_TR(0x6c8a61);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6c8a64:{NFSU2_TR(0x6c8a64);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c8a0du);}goto L6c8a0d;}}
}
B6c8a66:L6c8a66:{c.instructions+=5;NFSU2_TR(0x6c8a66);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c8a69:{NFSU2_TR(0x6c8a69);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c8a6c:{NFSU2_TR(0x6c8a6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c8a6f:{NFSU2_TR(0x6c8a6f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x2ull))));
}
B6c8a73:{NFSU2_TR(0x6c8a73);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c89ebu);}goto L6c89eb;}}
}
B6c8a79:L6c8a79:{c.instructions+=2;NFSU2_TR(0x6c8a79);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c8a7c:{NFSU2_TR(0x6c8a7c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c8be1;}}
}
B6c8a82:L6c8a82:{c.instructions+=2;NFSU2_TR(0x6c8a82);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c8a86:{NFSU2_TR(0x6c8a86);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c8c04;}}
}
B6c8a8c:L6c8a8c:{c.instructions+=3;NFSU2_TR(0x6c8a8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c8a90:{NFSU2_TR(0x6c8a90);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c8a94:{NFSU2_TR(0x6c8a94);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c8b78;}}
}
B6c8a9a:L6c8a9a:{c.instructions+=7;NFSU2_TR(0x6c8a9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c8a9d:{NFSU2_TR(0x6c8a9d);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff78ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6c8aa4:{NFSU2_TR(0x6c8aa4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c8aa7:{NFSU2_TR(0x6c8aa7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c8aab:{NFSU2_TR(0x6c8aab);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c8aad:{NFSU2_TR(0x6c8aad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c8ab0:{NFSU2_TR(0x6c8ab0);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c8b69;}}
}
B6c8ab6:L6c8ab6:{c.instructions+=3;NFSU2_TR(0x6c8ab6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c8ab9:{NFSU2_TR(0x6c8ab9);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c8abb:{NFSU2_TR(0x6c8abb);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c8b5a;}}
}
B6c8ac1:L6c8ac1:{c.instructions+=3;NFSU2_TR(0x6c8ac1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c8ac4:{NFSU2_TR(0x6c8ac4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c8ac7:{NFSU2_TR(0x6c8ac7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c8aca:L6c8aca:{c.instructions+=4;NFSU2_TR(0x6c8aca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c8acd:{NFSU2_TR(0x6c8acd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6c8acf:{NFSU2_TR(0x6c8acf);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c8ad1:{NFSU2_TR(0x6c8ad1);
if(r1(R+518)){{goto L6c8b4d;}}
}
B6c8ad3:L6c8ad3:{c.instructions+=2;NFSU2_TR(0x6c8ad3);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6c8ad6:{NFSU2_TR(0x6c8ad6);
if(r1(R+518)){{goto L6c8b4d;}}
}
B6c8ad8:L6c8ad8:{c.instructions+=4;NFSU2_TR(0x6c8ad8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c8adb:{NFSU2_TR(0x6c8adb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c8adf:{NFSU2_TR(0x6c8adf);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c8ae1:{NFSU2_TR(0x6c8ae1);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c8b1c;}}
}
B6c8ae3:L6c8ae3:{c.instructions+=7;NFSU2_TR(0x6c8ae3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c8ae6:{NFSU2_TR(0x6c8ae6);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff78ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6c8aed:{NFSU2_TR(0x6c8aed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c8af0:{NFSU2_TR(0x6c8af0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c8af3:{NFSU2_TR(0x6c8af3);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6c8af6:{NFSU2_TR(0x6c8af6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c8af9:{NFSU2_TR(0x6c8af9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c8afc:L6c8afc:{c.instructions+=3;NFSU2_TR(0x6c8afc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6c8afe:{NFSU2_TR(0x6c8afe);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c8b00:{NFSU2_TR(0x6c8b00);
if(r1(R+518)){{goto L6c8b0d;}}
}
B6c8b02:L6c8b02:{c.instructions+=4;NFSU2_TR(0x6c8b02);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c8b05:{NFSU2_TR(0x6c8b05);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c8b08:{NFSU2_TR(0x6c8b08);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c8b0b:{NFSU2_TR(0x6c8b0b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c8b14;}}
}
B6c8b0d:L6c8b0d:{c.instructions+=1;NFSU2_TR(0x6c8b0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c8b14:L6c8b14:{c.instructions+=3;NFSU2_TR(0x6c8b14);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B6c8b17:{NFSU2_TR(0x6c8b17);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c8b1a:{NFSU2_TR(0x6c8b1a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c8afcu);}goto L6c8afc;}}
}
B6c8b1c:L6c8b1c:{c.instructions+=2;NFSU2_TR(0x6c8b1c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c8b1f:{NFSU2_TR(0x6c8b1f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c8b25;}}
}
B6c8b21:L6c8b21:{c.instructions+=1;NFSU2_TR(0x6c8b21);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c8b25:L6c8b25:{c.instructions+=2;NFSU2_TR(0x6c8b25);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c8b29:{NFSU2_TR(0x6c8b29);
if(r1(R+518)){{goto L6c8b4d;}}
}
B6c8b2b:L6c8b2b:{c.instructions+=1;NFSU2_TR(0x6c8b2b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c8b2d:L6c8b2d:{c.instructions+=2;NFSU2_TR(0x6c8b2d);
u8 U[24];
w4(U+0,u32(u32(u32(0xffffff78ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(R+4))-u32(r4(U+16))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B6c8b34:{NFSU2_TR(0x6c8b34);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c8b3a;}}
}
B6c8b36:L6c8b36:{c.instructions+=1;NFSU2_TR(0x6c8b36);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c8b3a:L6c8b3a:{c.instructions+=3;NFSU2_TR(0x6c8b3a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6c8b3b:{NFSU2_TR(0x6c8b3b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6c8b3e:{NFSU2_TR(0x6c8b3e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c8b2du);}goto L6c8b2d;}}
}
B6c8b40:L6c8b40:{c.instructions+=2;NFSU2_TR(0x6c8b40);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c8b44:{NFSU2_TR(0x6c8b44);
if(r1(R+518)){{goto L6c8b4d;}}
}
B6c8b46:L6c8b46:{c.instructions+=1;NFSU2_TR(0x6c8b46);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c8b4d:L6c8b4d:{c.instructions+=3;NFSU2_TR(0x6c8b4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c8b51:{NFSU2_TR(0x6c8b51);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c8b54:{NFSU2_TR(0x6c8b54);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c8acau);}goto L6c8aca;}}
}
B6c8b5a:L6c8b5a:{c.instructions+=4;NFSU2_TR(0x6c8b5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c8b5d:{NFSU2_TR(0x6c8b5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c8b60:{NFSU2_TR(0x6c8b60);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6c8b63:{NFSU2_TR(0x6c8b63);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c8ab6u);}goto L6c8ab6;}}
}
B6c8b69:L6c8b69:{c.instructions+=4;NFSU2_TR(0x6c8b69);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c8b6c:{NFSU2_TR(0x6c8b6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c8b6f:{NFSU2_TR(0x6c8b6f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6c8b72:{NFSU2_TR(0x6c8b72);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c8a9au);}goto L6c8a9a;}}
}
B6c8b78:L6c8b78:{c.instructions+=1;NFSU2_TR(0x6c8b78);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c8b7c:L6c8b7c:{c.instructions+=4;NFSU2_TR(0x6c8b7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c8b7f:{NFSU2_TR(0x6c8b7f);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffe28ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B6c8b86:{NFSU2_TR(0x6c8b86);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c8b89:{NFSU2_TR(0x6c8b89);
if(r1(R+518)){{goto L6c8bd2;}}
}
B6c8b8b:L6c8b8b:{c.instructions+=3;NFSU2_TR(0x6c8b8b);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6c8b8d:{NFSU2_TR(0x6c8b8d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c8b90:{NFSU2_TR(0x6c8b90);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c8bd2;}}
}
B6c8b92:L6c8b92:{c.instructions+=3;NFSU2_TR(0x6c8b92);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c8b95:{NFSU2_TR(0x6c8b95);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c8b98:{NFSU2_TR(0x6c8b98);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c8b9b:L6c8b9b:{c.instructions+=4;NFSU2_TR(0x6c8b9b);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff78ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6c8ba2:{NFSU2_TR(0x6c8ba2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c8ba5:{NFSU2_TR(0x6c8ba5);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c8ba7:{NFSU2_TR(0x6c8ba7);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c8bcc;}}
}
B6c8ba9:L6c8ba9:{c.instructions+=2;NFSU2_TR(0x6c8ba9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c8bac:{NFSU2_TR(0x6c8bac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c8baf:L6c8baf:{c.instructions+=3;NFSU2_TR(0x6c8baf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6c8bb1:{NFSU2_TR(0x6c8bb1);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c8bb3:{NFSU2_TR(0x6c8bb3);
if(r1(R+518)){{goto L6c8bbd;}}
}
B6c8bb5:L6c8bb5:{c.instructions+=3;NFSU2_TR(0x6c8bb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c8bb8:{NFSU2_TR(0x6c8bb8);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c8bbb:{NFSU2_TR(0x6c8bbb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c8bc4;}}
}
B6c8bbd:L6c8bbd:{c.instructions+=1;NFSU2_TR(0x6c8bbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c8bc4:L6c8bc4:{c.instructions+=3;NFSU2_TR(0x6c8bc4);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6c8bc7:{NFSU2_TR(0x6c8bc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c8bca:{NFSU2_TR(0x6c8bca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c8bafu);}goto L6c8baf;}}
}
B6c8bcc:L6c8bcc:{c.instructions+=3;NFSU2_TR(0x6c8bcc);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6c8bcd:{NFSU2_TR(0x6c8bcd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6c8bd0:{NFSU2_TR(0x6c8bd0);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c8b9bu);}goto L6c8b9b;}}
}
B6c8bd2:L6c8bd2:{c.instructions+=3;NFSU2_TR(0x6c8bd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c8bd5:{NFSU2_TR(0x6c8bd5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x28ull))));
}
B6c8bd9:{NFSU2_TR(0x6c8bd9);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c8b7cu);}goto L6c8b7c;}}
}
B6c8bdb:L6c8bdb:{c.instructions+=2;NFSU2_TR(0x6c8bdb);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c8bdf:{NFSU2_TR(0x6c8bdf);
if(r1(R+518)){{goto L6c8c04;}}
}
B6c8be1:L6c8be1:{c.instructions+=3;NFSU2_TR(0x6c8be1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c8be4:{NFSU2_TR(0x6c8be4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x2ull))));
}
B6c8be8:{NFSU2_TR(0x6c8be8);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c88b7u);}goto L6c88b7;}}
}
B6c8bee:L6c8bee:{c.instructions+=3;NFSU2_TR(0x6c8bee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c8bf1:{NFSU2_TR(0x6c8bf1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c8bf3:{NFSU2_TR(0x6c8bf3);
if(r1(R+518)){{goto L6c8c04;}}
}
B6c8bf5:L6c8bf5:{c.instructions+=3;NFSU2_TR(0x6c8bf5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c8bf8:{NFSU2_TR(0x6c8bf8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x1ull))));
}
B6c8bfc:{NFSU2_TR(0x6c8bfc);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c88b3u);}goto L6c88b3;}}
}
B6c8c02:L6c8c02:{c.instructions+=1;NFSU2_TR(0x6c8c02);
{goto L6c8c3e;}
}
B6c8c04:L6c8c04:{c.instructions+=4;NFSU2_TR(0x6c8c04);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c8c07:{NFSU2_TR(0x6c8c07);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c8c0a:{NFSU2_TR(0x6c8c0a);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff78ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6c8c11:{NFSU2_TR(0x6c8c11);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c8c13:L6c8c13:{c.instructions+=3;NFSU2_TR(0x6c8c13);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffe28ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6c8c1a:{NFSU2_TR(0x6c8c1a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c8c1d:{NFSU2_TR(0x6c8c1d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c8c2b;}}
}
B6c8c1f:L6c8c1f:{c.instructions+=3;NFSU2_TR(0x6c8c1f);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffd88ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6c8c26:{NFSU2_TR(0x6c8c26);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c8c29:{NFSU2_TR(0x6c8c29);
if(r1(R+518)){{goto L6c8c32;}}
}
B6c8c2b:L6c8c2b:{c.instructions+=1;NFSU2_TR(0x6c8c2b);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffec8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6c8c32:L6c8c32:{c.instructions+=3;NFSU2_TR(0x6c8c32);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6c8c35:{NFSU2_TR(0x6c8c35);
w1(R+512,u8((r4(R+0))<(u32(0xa0ull))));
}
B6c8c3a:{NFSU2_TR(0x6c8c3a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c8c13u);}goto L6c8c13;}}
}
B6c8c3c:L6c8c3c:{c.instructions+=1;NFSU2_TR(0x6c8c3c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c8c3e:L6c8c3e:{c.instructions+=3;NFSU2_TR(0x6c8c3e);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6c8c40:{NFSU2_TR(0x6c8c40);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c8c43:{NFSU2_TR(0x6c8c43);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6c8c44:L6c8c44:{c.instructions+=2;NFSU2_TR(0x6c8c44);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x3ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6c8c48:{NFSU2_TR(0x6c8c48);
if(r1(R+512)){{goto L6c8d0a;}}
}
B6c8c4e:L6c8c4e:{c.instructions+=3;NFSU2_TR(0x6c8c4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c8c52:{NFSU2_TR(0x6c8c52);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c8c56:{NFSU2_TR(0x6c8c56);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c8c94;}}
}
B6c8c58:L6c8c58:{c.instructions+=3;NFSU2_TR(0x6c8c58);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c8c5e:{NFSU2_TR(0x6c8c5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c8c61:{NFSU2_TR(0x6c8c61);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c8c64:L6c8c64:{c.instructions+=7;NFSU2_TR(0x6c8c64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6c8c66:{NFSU2_TR(0x6c8c66);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c8c69:{NFSU2_TR(0x6c8c69);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c8c6c:{NFSU2_TR(0x6c8c6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c8c6f:{NFSU2_TR(0x6c8c6f);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6c8c72:{NFSU2_TR(0x6c8c72);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(u8(0x20ull))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B6c8c76:{NFSU2_TR(0x6c8c76);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c8d0a;}}
}
B6c8c7c:L6c8c7c:{c.instructions+=3;NFSU2_TR(0x6c8c7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c8c7f:{NFSU2_TR(0x6c8c7f);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
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
B6c8c82:{NFSU2_TR(0x6c8c82);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c8d0a;}}
}
B6c8c88:L6c8c88:{c.instructions+=5;NFSU2_TR(0x6c8c88);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6c8c89:{NFSU2_TR(0x6c8c89);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6c8c8c:{NFSU2_TR(0x6c8c8c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6c8c8f:{NFSU2_TR(0x6c8c8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c8c92:{NFSU2_TR(0x6c8c92);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c8c64u);}goto L6c8c64;}}
}
B6c8c94:L6c8c94:{c.instructions+=2;NFSU2_TR(0x6c8c94);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
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
B6c8c98:{NFSU2_TR(0x6c8c98);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c8e37;}}
}
B6c8c9e:L6c8c9e:{c.instructions+=1;NFSU2_TR(0x6c8c9e);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6c8ca0:L6c8ca0:{c.instructions+=4;NFSU2_TR(0x6c8ca0);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffec8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6c8ca7:{NFSU2_TR(0x6c8ca7);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffee8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B6c8cae:{NFSU2_TR(0x6c8cae);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c8cb1:{NFSU2_TR(0x6c8cb1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c8e3f;}}
}
B6c8cb7:L6c8cb7:{c.instructions+=2;NFSU2_TR(0x6c8cb7);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+0))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6c8cb9:{NFSU2_TR(0x6c8cb9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c8e3f;}}
}
B6c8cbf:L6c8cbf:{c.instructions+=4;NFSU2_TR(0x6c8cbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c8cc2:{NFSU2_TR(0x6c8cc2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c8cc5:{NFSU2_TR(0x6c8cc5);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c8cc8:{NFSU2_TR(0x6c8cc8);
if(r1(R+518)){{goto L6c8cd4;}}
}
B6c8cca:L6c8cca:{c.instructions+=2;NFSU2_TR(0x6c8cca);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6c8cce:{NFSU2_TR(0x6c8cce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c8e3f;}}
}
B6c8cd4:L6c8cd4:{c.instructions+=3;NFSU2_TR(0x6c8cd4);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6c8cd5:{NFSU2_TR(0x6c8cd5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(U+0))<(u32(0x3ull))));
}
B6c8cd8:{NFSU2_TR(0x6c8cd8);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c8ca0u);}goto L6c8ca0;}}
}
B6c8cda:L6c8cda:{c.instructions+=2;NFSU2_TR(0x6c8cda);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffee4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c8ce1:{NFSU2_TR(0x6c8ce1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c8e3f;}}
}
B6c8ce7:L6c8ce7:{c.instructions+=2;NFSU2_TR(0x6c8ce7);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffef4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c8cee:{NFSU2_TR(0x6c8cee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c8e3f;}}
}
B6c8cf4:L6c8cf4:{c.instructions+=2;NFSU2_TR(0x6c8cf4);
u8 U[4];
w4(U+0,u32(0x74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c8cf6:{NFSU2_TR(0x6c8cf6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c8cfbull));
TAIL_STATIC(0x699317u,699);
}
B6c8cfb:L6c8cfb:{c.instructions+=2;NFSU2_TR(0x6c8cfb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c8cfd:{NFSU2_TR(0x6c8cfd);
if(r1(R+518)){{goto L6c8d11;}}
}
B6c8cff:L6c8cff:{c.instructions+=2;NFSU2_TR(0x6c8cff);
__builtin_memmove((R+4),(R+0),4);
}
B6c8d01:{NFSU2_TR(0x6c8d01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c8d06ull));
TAIL_STATIC(0x698e7du,698);
}
B6c8d06:L6c8d06:{c.instructions+=2;NFSU2_TR(0x6c8d06);
__builtin_memmove((R+24),(R+0),4);
}
B6c8d08:{NFSU2_TR(0x6c8d08);
{goto L6c8d13;}
}
B6c8d0a:L6c8d0a:{c.instructions+=2;NFSU2_TR(0x6c8d0a);
__builtin_memmove((R+0),(R+8),4);
}
B6c8d0c:{NFSU2_TR(0x6c8d0c);
{goto L6c8e3a;}
}
B6c8d11:L6c8d11:{c.instructions+=1;NFSU2_TR(0x6c8d11);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6c8d13:L6c8d13:{c.instructions+=3;NFSU2_TR(0x6c8d13);
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
B6c8d15:{NFSU2_TR(0x6c8d15);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c8d18:{NFSU2_TR(0x6c8d18);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c8d24;}}
}
B6c8d1a:L6c8d1a:{c.instructions+=2;NFSU2_TR(0x6c8d1a);
w4(R+0,u32(0x8007000eull));
}
B6c8d1f:{NFSU2_TR(0x6c8d1f);
{goto L6c8e3a;}
}
B6c8d24:L6c8d24:{c.instructions+=9;NFSU2_TR(0x6c8d24);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c8d27:{NFSU2_TR(0x6c8d27);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c8d29:{NFSU2_TR(0x6c8d29);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c8d2c:{NFSU2_TR(0x6c8d2c);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6c8d31:{NFSU2_TR(0x6c8d31);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c8d34:{NFSU2_TR(0x6c8d34);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x70200000ull))));
}
B6c8d39:{NFSU2_TR(0x6c8d39);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c8d3a:{NFSU2_TR(0x6c8d3a);
__builtin_memmove((R+4),(R+24),4);
}
B6c8d3c:{NFSU2_TR(0x6c8d3c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c8d41ull));
TAIL_STATIC(0x699362u,699);
}
B6c8d41:L6c8d41:{c.instructions+=4;NFSU2_TR(0x6c8d41);
__builtin_memmove((R+28),(R+0),4);
}
B6c8d43:{NFSU2_TR(0x6c8d43);
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
B6c8d45:{NFSU2_TR(0x6c8d45);
__builtin_memmove((R+4),(R+24),4);
}
B6c8d47:{NFSU2_TR(0x6c8d47);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6c8d5c;}}
}
B6c8d49:L6c8d49:{c.instructions+=2;NFSU2_TR(0x6c8d49);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c8d4f:{NFSU2_TR(0x6c8d4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c8d54ull));
TAIL_STATIC(0x698eb3u,698);
}
B6c8d54:L6c8d54:{c.instructions+=3;NFSU2_TR(0x6c8d54);
__builtin_memmove((R+28),(R+0),4);
}
B6c8d56:{NFSU2_TR(0x6c8d56);
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
B6c8d58:{NFSU2_TR(0x6c8d58);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6c8d6a;}}
}
B6c8d5a:L6c8d5a:{c.instructions+=1;NFSU2_TR(0x6c8d5a);
__builtin_memmove((R+4),(R+24),4);
}
B6c8d5c:L6c8d5c:{c.instructions+=2;NFSU2_TR(0x6c8d5c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c8d5e:{NFSU2_TR(0x6c8d5e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c8d63ull));
TAIL_STATIC(0x6739efu,673);
}
B6c8d63:L6c8d63:{c.instructions+=2;NFSU2_TR(0x6c8d63);
__builtin_memmove((R+0),(R+28),4);
}
B6c8d65:{NFSU2_TR(0x6c8d65);
{goto L6c8e3a;}
}
B6c8d6a:L6c8d6a:{c.instructions+=8;NFSU2_TR(0x6c8d6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c8d70:{NFSU2_TR(0x6c8d70);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c8d73:{NFSU2_TR(0x6c8d73);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c8d76:{NFSU2_TR(0x6c8d76);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c8d79:{NFSU2_TR(0x6c8d79);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c8d7c:{NFSU2_TR(0x6c8d7c);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6c8d7f:{NFSU2_TR(0x6c8d7f);
__builtin_memmove((R+8),(R+4),4);
}
B6c8d81:{NFSU2_TR(0x6c8d81);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6c8d84:L6c8d84:{c.instructions+=1;NFSU2_TR(0x6c8d84);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6c8d86;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c8d84u);}goto L6c8d84;}
}
B6c8d86:L6c8d86:{c.instructions+=3;NFSU2_TR(0x6c8d86);
__builtin_memmove((R+4),(R+8),4);
}
B6c8d88:{NFSU2_TR(0x6c8d88);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c8d8b:{NFSU2_TR(0x6c8d8b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6c8d8e:L6c8d8e:{c.instructions+=1;NFSU2_TR(0x6c8d8e);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6c8d90;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c8d8eu);}goto L6c8d8e;}
}
B6c8d90:L6c8d90:{c.instructions+=6;NFSU2_TR(0x6c8d90);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c8d93:{NFSU2_TR(0x6c8d93);
__builtin_memmove((R+4),(R+8),4);
}
B6c8d95:{NFSU2_TR(0x6c8d95);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6c8d98:{NFSU2_TR(0x6c8d98);
__builtin_memmove((R+0),(R+4),4);
}
B6c8d9a:{NFSU2_TR(0x6c8d9a);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6c8d9d:{NFSU2_TR(0x6c8d9d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffec8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c8da3:L6c8da3:{c.instructions+=1;NFSU2_TR(0x6c8da3);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6c8da5;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c8da3u);}goto L6c8da3;}
}
B6c8da5:L6c8da5:{c.instructions+=2;NFSU2_TR(0x6c8da5);
__builtin_memmove((R+4),(R+0),4);
}
B6c8da7:{NFSU2_TR(0x6c8da7);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6c8daa:L6c8daa:{c.instructions+=1;NFSU2_TR(0x6c8daa);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6c8dac;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c8daau);}goto L6c8daa;}
}
B6c8dac:L6c8dac:{c.instructions+=3;NFSU2_TR(0x6c8dac);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6c8dae:{NFSU2_TR(0x6c8dae);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c8db0:{NFSU2_TR(0x6c8db0);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c8e1c;}}
}
B6c8db2:L6c8db2:{c.instructions+=1;NFSU2_TR(0x6c8db2);
w4(R+0,u32(0x80000000ull));
}
B6c8db7:L6c8db7:{c.instructions+=2;NFSU2_TR(0x6c8db7);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6c8dbb:{NFSU2_TR(0x6c8dbb);
if(r1(R+518)){{goto L6c8e02;}}
}
B6c8dbd:L6c8dbd:{c.instructions+=13;NFSU2_TR(0x6c8dbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c8dc3:{NFSU2_TR(0x6c8dc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c8dc6:{NFSU2_TR(0x6c8dc6);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c8dc9:{NFSU2_TR(0x6c8dc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c8dcc:{NFSU2_TR(0x6c8dcc);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c8dcf:{NFSU2_TR(0x6c8dcf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))|u32(r4(R+0))));
s4(u32(r4(R+4)),r4(U+0));
}
B6c8dd1:{NFSU2_TR(0x6c8dd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c8dd7:{NFSU2_TR(0x6c8dd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c8dda:{NFSU2_TR(0x6c8dda);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c8ddd:{NFSU2_TR(0x6c8ddd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c8de0:{NFSU2_TR(0x6c8de0);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c8de3:{NFSU2_TR(0x6c8de3);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c8de7:{NFSU2_TR(0x6c8de7);
if(r1(R+518)){{goto L6c8e02;}}
}
B6c8de9:L6c8de9:{c.instructions+=8;NFSU2_TR(0x6c8de9);
__builtin_memmove((R+4),(R+8),4);
}
B6c8deb:{NFSU2_TR(0x6c8deb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c8df1:{NFSU2_TR(0x6c8df1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c8df4:{NFSU2_TR(0x6c8df4);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6c8df7:{NFSU2_TR(0x6c8df7);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6c8dfa:{NFSU2_TR(0x6c8dfa);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c8dfd:{NFSU2_TR(0x6c8dfd);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c8e00:{NFSU2_TR(0x6c8e00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))|u32(r4(R+0))));
s4(u32(r4(R+4)),r4(U+0));
}
B6c8e02:L6c8e02:{c.instructions+=9;NFSU2_TR(0x6c8e02);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c8e08:{NFSU2_TR(0x6c8e08);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c8e0b:{NFSU2_TR(0x6c8e0b);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c8e0e:{NFSU2_TR(0x6c8e0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c8e11:{NFSU2_TR(0x6c8e11);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c8e14:{NFSU2_TR(0x6c8e14);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))|u32(r4(R+0))));
s4(u32(r4(R+4)),r4(U+0));
}
B6c8e16:{NFSU2_TR(0x6c8e16);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6c8e17:{NFSU2_TR(0x6c8e17);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B6c8e1a:{NFSU2_TR(0x6c8e1a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c8db7u);}goto L6c8db7;}}
}
B6c8e1c:L6c8e1c:{c.instructions+=3;NFSU2_TR(0x6c8e1c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c8e1f:{NFSU2_TR(0x6c8e1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c8e25:{NFSU2_TR(0x6c8e25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c8e2aull));
TAIL_STATIC(0x6995c1u,699);
}
B6c8e2a:L6c8e2a:{c.instructions+=4;NFSU2_TR(0x6c8e2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c8e2d:{NFSU2_TR(0x6c8e2d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c8e2f:{NFSU2_TR(0x6c8e2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c8e32:{NFSU2_TR(0x6c8e32);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c8e37ull));
TAIL_STATIC(0x6739efu,673);
}
B6c8e37:L6c8e37:{c.instructions+=1;NFSU2_TR(0x6c8e37);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c8e3a:L6c8e3a:{c.instructions+=5;NFSU2_TR(0x6c8e3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c8e3b:{NFSU2_TR(0x6c8e3b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c8e3c:{NFSU2_TR(0x6c8e3c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6c8e3d:{NFSU2_TR(0x6c8e3d);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6c8e3e:{NFSU2_TR(0x6c8e3e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6c8e3f:L6c8e3f:{c.instructions+=3;NFSU2_TR(0x6c8e3f);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c8e41:{NFSU2_TR(0x6c8e41);
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
B6c8e42:{NFSU2_TR(0x6c8e42);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c8e3au);}goto L6c8e3a;}
}
B6c8e44:L6c8e44:{c.instructions+=34;NFSU2_TR(0x6c8e44);
__builtin_memmove((R+28),(R+28),4);
}
B6c8e46:{NFSU2_TR(0x6c8e46);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c8e47:{NFSU2_TR(0x6c8e47);
__builtin_memmove((R+20),(R+16),4);
}
B6c8e49:{NFSU2_TR(0x6c8e49);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x104ull))));
}
B6c8e4f:{NFSU2_TR(0x6c8e4f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c8e50:{NFSU2_TR(0x6c8e50);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c8e51:{NFSU2_TR(0x6c8e51);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c8e52:{NFSU2_TR(0x6c8e52);
__builtin_memmove((R+12),(R+4),4);
}
B6c8e54:{NFSU2_TR(0x6c8e54);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c8e5a:{NFSU2_TR(0x6c8e5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6c8e5c:{NFSU2_TR(0x6c8e5c);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6c8e5e:{NFSU2_TR(0x6c8e5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c8e61:{NFSU2_TR(0x6c8e61);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c8e64:{NFSU2_TR(0x6c8e64);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6c8e66:{NFSU2_TR(0x6c8e66);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c8e69:{NFSU2_TR(0x6c8e69);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6c8e6a:{NFSU2_TR(0x6c8e6a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c8e6b:{NFSU2_TR(0x6c8e6b);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfffffull))));
}
B6c8e71:{NFSU2_TR(0x6c8e71);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c8e72:{NFSU2_TR(0x6c8e72);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c8e75:{NFSU2_TR(0x6c8e75);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c8e76:{NFSU2_TR(0x6c8e76);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff3cull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c8e7c:{NFSU2_TR(0x6c8e7c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c8e7d:{NFSU2_TR(0x6c8e7d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c8e80:{NFSU2_TR(0x6c8e80);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c8e81:{NFSU2_TR(0x6c8e81);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffefcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c8e87:{NFSU2_TR(0x6c8e87);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c8e88:{NFSU2_TR(0x6c8e88);
u8 U[4];
w4(U+0,u32(0x7bed60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c8e8d:{NFSU2_TR(0x6c8e8d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c8e8e:{NFSU2_TR(0x6c8e8e);
__builtin_memmove((R+4),(R+12),4);
}
B6c8e90:{NFSU2_TR(0x6c8e90);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c8e93:{NFSU2_TR(0x6c8e93);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c8e9a:{NFSU2_TR(0x6c8e9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c8ea1:{NFSU2_TR(0x6c8ea1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c8ea6ull));
TAIL_STATIC(0x6c1b89u,6c1);
}
B6c8ea6:L6c8ea6:{c.instructions+=2;NFSU2_TR(0x6c8ea6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c8ea8:{NFSU2_TR(0x6c8ea8);
if(r1(R+518)){{goto L6c8edf;}}
}
B6c8eaa:L6c8eaa:{c.instructions+=14;NFSU2_TR(0x6c8eaa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c8eab:{NFSU2_TR(0x6c8eab);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c8eac:{NFSU2_TR(0x6c8eac);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c8eaf:{NFSU2_TR(0x6c8eaf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c8eb0:{NFSU2_TR(0x6c8eb0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff3cull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c8eb6:{NFSU2_TR(0x6c8eb6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c8eb7:{NFSU2_TR(0x6c8eb7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c8eba:{NFSU2_TR(0x6c8eba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c8ebb:{NFSU2_TR(0x6c8ebb);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffefcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c8ec1:{NFSU2_TR(0x6c8ec1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c8ec2:{NFSU2_TR(0x6c8ec2);
u8 U[4];
w4(U+0,u32(0x7bedc0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c8ec7:{NFSU2_TR(0x6c8ec7);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c8ecd:{NFSU2_TR(0x6c8ecd);
__builtin_memmove((R+4),(R+12),4);
}
B6c8ecf:{NFSU2_TR(0x6c8ecf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c8ed4ull));
TAIL_STATIC(0x6c1b89u,6c1);
}
B6c8ed4:L6c8ed4:{c.instructions+=2;NFSU2_TR(0x6c8ed4);
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
B6c8ed6:{NFSU2_TR(0x6c8ed6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6c90ffu,6c9);}
}
B6c8edc:L6c8edc:{c.instructions+=1;NFSU2_TR(0x6c8edc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c8edf:L6c8edf:{c.instructions+=3;NFSU2_TR(0x6c8edf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffefcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c8ee5:{NFSU2_TR(0x6c8ee5);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x50000002ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x50000002ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x50000002ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B6c8eeb:{NFSU2_TR(0x6c8eeb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6c90fdu,6c9);}
}
B6c8ef1:L6c8ef1:{c.instructions+=3;NFSU2_TR(0x6c8ef1);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c8ef3:{NFSU2_TR(0x6c8ef3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c8ef6:{NFSU2_TR(0x6c8ef6);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c8f3f;}}
}
B6c8ef8:L6c8ef8:{c.instructions+=7;NFSU2_TR(0x6c8ef8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c8efe:{NFSU2_TR(0x6c8efe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c8f01:{NFSU2_TR(0x6c8f01);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6c8f03:{NFSU2_TR(0x6c8f03);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c8f06:{NFSU2_TR(0x6c8f06);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4ull))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6c8f0d:{NFSU2_TR(0x6c8f0d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6c8f10:{NFSU2_TR(0x6c8f10);
{goto L6c8f15;}
}
B6c8f12:L6c8f12:{c.instructions+=2;NFSU2_TR(0x6c8f12);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6c8f14:{NFSU2_TR(0x6c8f14);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6c8f15:L6c8f15:{c.instructions+=3;NFSU2_TR(0x6c8f15);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c8f18:{NFSU2_TR(0x6c8f18);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+0)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B6c8f1a:{NFSU2_TR(0x6c8f1a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6c90fdu,6c9);}
}
B6c8f20:L6c8f20:{c.instructions+=5;NFSU2_TR(0x6c8f20);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c8f26:{NFSU2_TR(0x6c8f26);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c8f29:{NFSU2_TR(0x6c8f29);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6c8f2c:{NFSU2_TR(0x6c8f2c);
u8 U[20];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(R+28))-u32(r4(U+12))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6c8f2f:{NFSU2_TR(0x6c8f2f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c8f56;}}
}
B6c8f31:L6c8f31:{c.instructions+=5;NFSU2_TR(0x6c8f31);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c8f34:{NFSU2_TR(0x6c8f34);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6c8f37:{NFSU2_TR(0x6c8f37);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6c8f3a:{NFSU2_TR(0x6c8f3a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
}
B6c8f3d:{NFSU2_TR(0x6c8f3d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c8f12u);}goto L6c8f12;}}
}
B6c8f3f:L6c8f3f:{c.instructions+=2;NFSU2_TR(0x6c8f3f);
u8 U[4];
w4(U+0,u32(0x74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c8f41:{NFSU2_TR(0x6c8f41);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c8f46ull));
TAIL_STATIC(0x699317u,699);
}
B6c8f46:L6c8f46:{c.instructions+=2;NFSU2_TR(0x6c8f46);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c8f48:{NFSU2_TR(0x6c8f48);
if(r1(R+518)){{goto L6c8f5e;}}
}
B6c8f4a:L6c8f4a:{c.instructions+=2;NFSU2_TR(0x6c8f4a);
__builtin_memmove((R+4),(R+0),4);
}
B6c8f4c:{NFSU2_TR(0x6c8f4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c8f51ull));
TAIL_STATIC(0x698e7du,698);
}
B6c8f51:L6c8f51:{c.instructions+=2;NFSU2_TR(0x6c8f51);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c8f54:{NFSU2_TR(0x6c8f54);
{goto L6c8f62;}
}
B6c8f56:L6c8f56:{c.instructions+=3;NFSU2_TR(0x6c8f56);
w1(R+512,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6c8f58:{NFSU2_TR(0x6c8f58);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+28),u32(0x1ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6c8f59:{NFSU2_TR(0x6c8f59);
TAIL_STATIC(0x6c90fdu,6c9);
}
B6c8f5e:L6c8f5e:{c.instructions+=1;NFSU2_TR(0x6c8f5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c8f62:L6c8f62:{c.instructions+=6;NFSU2_TR(0x6c8f62);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c8f65:{NFSU2_TR(0x6c8f65);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c8f67:{NFSU2_TR(0x6c8f67);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c8f68:{NFSU2_TR(0x6c8f68);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c8f6a:{NFSU2_TR(0x6c8f6a);
u8 U[4];
w4(U+0,u32(0x70800002ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c8f6f:{NFSU2_TR(0x6c8f6f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c8f74ull));
TAIL_STATIC(0x699362u,699);
}
B6c8f74:L6c8f74:{c.instructions+=3;NFSU2_TR(0x6c8f74);
__builtin_memmove((R+28),(R+0),4);
}
B6c8f76:{NFSU2_TR(0x6c8f76);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6c8f78:{NFSU2_TR(0x6c8f78);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6c90efu,6c9);}
}
B6c8f7e:L6c8f7e:{c.instructions+=3;NFSU2_TR(0x6c8f7e);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c8f84:{NFSU2_TR(0x6c8f84);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c8f87:{NFSU2_TR(0x6c8f87);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c8f8cull));
TAIL_STATIC(0x698eb3u,698);
}
B6c8f8c:L6c8f8c:{c.instructions+=3;NFSU2_TR(0x6c8f8c);
__builtin_memmove((R+28),(R+0),4);
}
B6c8f8e:{NFSU2_TR(0x6c8f8e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6c8f90:{NFSU2_TR(0x6c8f90);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6c90efu,6c9);}
}
B6c8f96:L6c8f96:{c.instructions+=6;NFSU2_TR(0x6c8f96);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
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
B6c8f9a:{NFSU2_TR(0x6c8f9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c8fa0:{NFSU2_TR(0x6c8fa0);
__builtin_memmove((R+4),(R+24),4);
}
B6c8fa2:{NFSU2_TR(0x6c8fa2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c8fa5:{NFSU2_TR(0x6c8fa5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c8fa8:{NFSU2_TR(0x6c8fa8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c8fab:L6c8fab:{c.instructions+=1;NFSU2_TR(0x6c8fab);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6c8fad;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c8fabu);}goto L6c8fab;}
}
B6c8fad:L6c8fad:{c.instructions+=7;NFSU2_TR(0x6c8fad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c8fb3:{NFSU2_TR(0x6c8fb3);
__builtin_memmove((R+28),(R+0),4);
}
B6c8fb5:{NFSU2_TR(0x6c8fb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c8fb8:{NFSU2_TR(0x6c8fb8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6c8fba:{NFSU2_TR(0x6c8fba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c8fc0:{NFSU2_TR(0x6c8fc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c8fc3:{NFSU2_TR(0x6c8fc3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c8fdc;}}
}
B6c8fc5:L6c8fc5:{c.instructions+=5;NFSU2_TR(0x6c8fc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c8fcb:{NFSU2_TR(0x6c8fcb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c8fce:{NFSU2_TR(0x6c8fce);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c8fd1:{NFSU2_TR(0x6c8fd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c8fd7:{NFSU2_TR(0x6c8fd7);
TAIL_STATIC(0x6c90b4u,6c9);
}
B6c8fdc:L6c8fdc:{c.instructions+=10;NFSU2_TR(0x6c8fdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c8fe2:{NFSU2_TR(0x6c8fe2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c8fe5:{NFSU2_TR(0x6c8fe5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c8feb:{NFSU2_TR(0x6c8feb);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6c8fee:{NFSU2_TR(0x6c8fee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c8ff1:{NFSU2_TR(0x6c8ff1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c8ff4:{NFSU2_TR(0x6c8ff4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c8ff7:{NFSU2_TR(0x6c8ff7);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c8ffa:{NFSU2_TR(0x6c8ffa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c8ffd:{NFSU2_TR(0x6c8ffd);
if(r1(R+518)){TAIL_STATIC(0x6c9008u,6c9);}
}
B6c8fff:L6c8fff:{c.instructions+=1;NFSU2_TR(0x6c8fff);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
TAIL_STATIC(0x6c9002u,6c9);
}
XIT:NFSU2_TR_EXIT(0x6c8,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
