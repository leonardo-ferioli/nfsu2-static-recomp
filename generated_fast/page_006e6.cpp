#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_6db(u8* __restrict R,Cpu& c);
u32 body_6e2(u8* __restrict R,Cpu& c);
u32 body_6e3(u8* __restrict R,Cpu& c);
u32 body_6e4(u8* __restrict R,Cpu& c);
u32 body_6e5(u8* __restrict R,Cpu& c);
u32 body_6e7(u8* __restrict R,Cpu& c);
u32 body_6ef(u8* __restrict R,Cpu& c);
u32 body_6f0(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6e6,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6e6,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6e6(u8* __restrict R,Cpu& c);
u32 page_6e6(Cpu& c){return body_6e6(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6e6(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6e6001:goto L6e6001;
case 0x6e6004:c.instructions+=5;goto B6e6004;
case 0x6e6005:c.instructions+=4;goto B6e6005;
case 0x6e6008:c.instructions+=3;goto B6e6008;
case 0x6e600a:c.instructions+=2;goto B6e600a;
case 0x6e600e:c.instructions+=1;goto B6e600e;
case 0x6e6014:goto L6e6014;
case 0x6e6016:c.instructions+=6;goto B6e6016;
case 0x6e6017:c.instructions+=5;goto B6e6017;
case 0x6e6018:c.instructions+=4;goto B6e6018;
case 0x6e6019:c.instructions+=3;goto B6e6019;
case 0x6e601b:c.instructions+=2;goto B6e601b;
case 0x6e601c:c.instructions+=1;goto B6e601c;
case 0x6e601f:goto L6e601f;
case 0x6e6022:c.instructions+=3;goto B6e6022;
case 0x6e6025:c.instructions+=2;goto B6e6025;
case 0x6e6026:c.instructions+=1;goto B6e6026;
case 0x6e6028:goto L6e6028;
case 0x6e602b:c.instructions+=2;goto B6e602b;
case 0x6e602e:c.instructions+=1;goto B6e602e;
case 0x6e6031:goto L6e6031;
case 0x6e6033:c.instructions+=8;goto B6e6033;
case 0x6e6036:c.instructions+=7;goto B6e6036;
case 0x6e603b:c.instructions+=6;goto B6e603b;
case 0x6e603d:c.instructions+=5;goto B6e603d;
case 0x6e6040:c.instructions+=4;goto B6e6040;
case 0x6e6042:c.instructions+=3;goto B6e6042;
case 0x6e6045:c.instructions+=2;goto B6e6045;
case 0x6e6048:c.instructions+=1;goto B6e6048;
case 0x6e604a:goto L6e604a;
case 0x6e604d:c.instructions+=11;goto B6e604d;
case 0x6e6050:c.instructions+=10;goto B6e6050;
case 0x6e6053:c.instructions+=9;goto B6e6053;
case 0x6e6056:c.instructions+=8;goto B6e6056;
case 0x6e6057:c.instructions+=7;goto B6e6057;
case 0x6e605b:c.instructions+=6;goto B6e605b;
case 0x6e605d:c.instructions+=5;goto B6e605d;
case 0x6e605e:c.instructions+=4;goto B6e605e;
case 0x6e6060:c.instructions+=3;goto B6e6060;
case 0x6e6061:c.instructions+=2;goto B6e6061;
case 0x6e6062:c.instructions+=1;goto B6e6062;
case 0x6e6067:goto L6e6067;
case 0x6e606a:goto L6e606a;
case 0x6e606b:c.instructions+=3;goto B6e606b;
case 0x6e606e:c.instructions+=2;goto B6e606e;
case 0x6e6070:c.instructions+=1;goto B6e6070;
case 0x6e6072:goto L6e6072;
case 0x6e6075:c.instructions+=2;goto B6e6075;
case 0x6e6078:c.instructions+=1;goto B6e6078;
case 0x6e607a:goto L6e607a;
case 0x6e607d:c.instructions+=11;goto B6e607d;
case 0x6e6080:c.instructions+=10;goto B6e6080;
case 0x6e6083:c.instructions+=9;goto B6e6083;
case 0x6e6086:c.instructions+=8;goto B6e6086;
case 0x6e6087:c.instructions+=7;goto B6e6087;
case 0x6e608b:c.instructions+=6;goto B6e608b;
case 0x6e608e:c.instructions+=5;goto B6e608e;
case 0x6e608f:c.instructions+=4;goto B6e608f;
case 0x6e6092:c.instructions+=3;goto B6e6092;
case 0x6e6093:c.instructions+=2;goto B6e6093;
case 0x6e6094:c.instructions+=1;goto B6e6094;
case 0x6e6099:goto L6e6099;
case 0x6e609c:goto L6e609c;
case 0x6e609d:c.instructions+=6;goto B6e609d;
case 0x6e609e:c.instructions+=5;goto B6e609e;
case 0x6e60a0:c.instructions+=4;goto B6e60a0;
case 0x6e60a1:c.instructions+=3;goto B6e60a1;
case 0x6e60a3:c.instructions+=2;goto B6e60a3;
case 0x6e60a4:c.instructions+=1;goto B6e60a4;
case 0x6e60b0:goto L6e60b0;
case 0x6e60b1:c.instructions+=13;goto B6e60b1;
case 0x6e60b3:c.instructions+=12;goto B6e60b3;
case 0x6e60b6:c.instructions+=11;goto B6e60b6;
case 0x6e60b9:c.instructions+=10;goto B6e60b9;
case 0x6e60bc:c.instructions+=9;goto B6e60bc;
case 0x6e60bd:c.instructions+=8;goto B6e60bd;
case 0x6e60be:c.instructions+=7;goto B6e60be;
case 0x6e60bf:c.instructions+=6;goto B6e60bf;
case 0x6e60c1:c.instructions+=5;goto B6e60c1;
case 0x6e60c4:c.instructions+=4;goto B6e60c4;
case 0x6e60c7:c.instructions+=3;goto B6e60c7;
case 0x6e60c9:c.instructions+=2;goto B6e60c9;
case 0x6e60cc:c.instructions+=1;goto B6e60cc;
case 0x6e60ce:goto L6e60ce;
case 0x6e60d1:c.instructions+=10;goto B6e60d1;
case 0x6e60d4:c.instructions+=9;goto B6e60d4;
case 0x6e60d7:c.instructions+=8;goto B6e60d7;
case 0x6e60d9:c.instructions+=7;goto B6e60d9;
case 0x6e60da:c.instructions+=6;goto B6e60da;
case 0x6e60dd:c.instructions+=5;goto B6e60dd;
case 0x6e60e1:c.instructions+=4;goto B6e60e1;
case 0x6e60e4:c.instructions+=3;goto B6e60e4;
case 0x6e60e7:c.instructions+=2;goto B6e60e7;
case 0x6e60ea:c.instructions+=1;goto B6e60ea;
case 0x6e60ed:goto L6e60ed;
case 0x6e60ee:c.instructions+=5;goto B6e60ee;
case 0x6e60ef:c.instructions+=4;goto B6e60ef;
case 0x6e60f0:c.instructions+=3;goto B6e60f0;
case 0x6e60f2:c.instructions+=2;goto B6e60f2;
case 0x6e60f3:c.instructions+=1;goto B6e60f3;
case 0x6e60f6:goto L6e60f6;
case 0x6e60f9:c.instructions+=4;goto B6e60f9;
case 0x6e60fc:c.instructions+=3;goto B6e60fc;
case 0x6e60fe:c.instructions+=2;goto B6e60fe;
case 0x6e6101:c.instructions+=1;goto B6e6101;
case 0x6e6107:goto L6e6107;
case 0x6e610a:c.instructions+=10;goto B6e610a;
case 0x6e610d:c.instructions+=9;goto B6e610d;
case 0x6e6110:c.instructions+=8;goto B6e6110;
case 0x6e6112:c.instructions+=7;goto B6e6112;
case 0x6e6113:c.instructions+=6;goto B6e6113;
case 0x6e6116:c.instructions+=5;goto B6e6116;
case 0x6e611a:c.instructions+=4;goto B6e611a;
case 0x6e611d:c.instructions+=3;goto B6e611d;
case 0x6e6120:c.instructions+=2;goto B6e6120;
case 0x6e6123:c.instructions+=1;goto B6e6123;
case 0x6e6126:goto L6e6126;
case 0x6e6129:c.instructions+=2;goto B6e6129;
case 0x6e612b:c.instructions+=1;goto B6e612b;
case 0x6e6131:goto L6e6131;
case 0x6e6134:c.instructions+=24;goto B6e6134;
case 0x6e6137:c.instructions+=23;goto B6e6137;
case 0x6e613b:c.instructions+=22;goto B6e613b;
case 0x6e613f:c.instructions+=21;goto B6e613f;
case 0x6e6143:c.instructions+=20;goto B6e6143;
case 0x6e6145:c.instructions+=19;goto B6e6145;
case 0x6e6146:c.instructions+=18;goto B6e6146;
case 0x6e6149:c.instructions+=17;goto B6e6149;
case 0x6e614a:c.instructions+=16;goto B6e614a;
case 0x6e614d:c.instructions+=15;goto B6e614d;
case 0x6e614e:c.instructions+=14;goto B6e614e;
case 0x6e6151:c.instructions+=13;goto B6e6151;
case 0x6e6152:c.instructions+=12;goto B6e6152;
case 0x6e6155:c.instructions+=11;goto B6e6155;
case 0x6e6156:c.instructions+=10;goto B6e6156;
case 0x6e6159:c.instructions+=9;goto B6e6159;
case 0x6e615a:c.instructions+=8;goto B6e615a;
case 0x6e615d:c.instructions+=7;goto B6e615d;
case 0x6e615e:c.instructions+=6;goto B6e615e;
case 0x6e6160:c.instructions+=5;goto B6e6160;
case 0x6e6161:c.instructions+=4;goto B6e6161;
case 0x6e6162:c.instructions+=3;goto B6e6162;
case 0x6e6163:c.instructions+=2;goto B6e6163;
case 0x6e6167:c.instructions+=1;goto B6e6167;
case 0x6e616c:goto L6e616c;
case 0x6e616f:c.instructions+=3;goto B6e616f;
case 0x6e6170:c.instructions+=2;goto B6e6170;
case 0x6e6174:c.instructions+=1;goto B6e6174;
case 0x6e6179:goto L6e6179;
case 0x6e617d:c.instructions+=5;goto B6e617d;
case 0x6e617e:c.instructions+=4;goto B6e617e;
case 0x6e6182:c.instructions+=3;goto B6e6182;
case 0x6e6183:c.instructions+=2;goto B6e6183;
case 0x6e6187:c.instructions+=1;goto B6e6187;
case 0x6e618c:goto L6e618c;
case 0x6e6190:c.instructions+=19;goto B6e6190;
case 0x6e6193:c.instructions+=18;goto B6e6193;
case 0x6e6197:c.instructions+=17;goto B6e6197;
case 0x6e619a:c.instructions+=16;goto B6e619a;
case 0x6e619e:c.instructions+=15;goto B6e619e;
case 0x6e61a1:c.instructions+=14;goto B6e61a1;
case 0x6e61a5:c.instructions+=13;goto B6e61a5;
case 0x6e61a8:c.instructions+=12;goto B6e61a8;
case 0x6e61ac:c.instructions+=11;goto B6e61ac;
case 0x6e61af:c.instructions+=10;goto B6e61af;
case 0x6e61b3:c.instructions+=9;goto B6e61b3;
case 0x6e61b6:c.instructions+=8;goto B6e61b6;
case 0x6e61ba:c.instructions+=7;goto B6e61ba;
case 0x6e61bd:c.instructions+=6;goto B6e61bd;
case 0x6e61be:c.instructions+=5;goto B6e61be;
case 0x6e61bf:c.instructions+=4;goto B6e61bf;
case 0x6e61c0:c.instructions+=3;goto B6e61c0;
case 0x6e61c2:c.instructions+=2;goto B6e61c2;
case 0x6e61c3:c.instructions+=1;goto B6e61c3;
case 0x6e61c6:goto L6e61c6;
case 0x6e61c9:c.instructions+=5;goto B6e61c9;
case 0x6e61cc:c.instructions+=4;goto B6e61cc;
case 0x6e61ce:c.instructions+=3;goto B6e61ce;
case 0x6e61d1:c.instructions+=2;goto B6e61d1;
case 0x6e61d5:c.instructions+=1;goto B6e61d5;
case 0x6e61d7:goto L6e61d7;
case 0x6e61da:c.instructions+=4;goto B6e61da;
case 0x6e61dd:c.instructions+=3;goto B6e61dd;
case 0x6e61df:c.instructions+=2;goto B6e61df;
case 0x6e61e0:c.instructions+=1;goto B6e61e0;
case 0x6e61e5:goto L6e61e5;
case 0x6e61e8:c.instructions+=2;goto B6e61e8;
case 0x6e61ea:c.instructions+=1;goto B6e61ea;
case 0x6e61ec:goto L6e61ec;
case 0x6e61ef:c.instructions+=4;goto B6e61ef;
case 0x6e61f2:c.instructions+=3;goto B6e61f2;
case 0x6e61f4:c.instructions+=2;goto B6e61f4;
case 0x6e61f5:c.instructions+=1;goto B6e61f5;
case 0x6e61fa:goto L6e61fa;
case 0x6e61fd:c.instructions+=11;goto B6e61fd;
case 0x6e6200:c.instructions+=10;goto B6e6200;
case 0x6e6203:c.instructions+=9;goto B6e6203;
case 0x6e6206:c.instructions+=8;goto B6e6206;
case 0x6e6208:c.instructions+=7;goto B6e6208;
case 0x6e6209:c.instructions+=6;goto B6e6209;
case 0x6e620c:c.instructions+=5;goto B6e620c;
case 0x6e6210:c.instructions+=4;goto B6e6210;
case 0x6e6213:c.instructions+=3;goto B6e6213;
case 0x6e6216:c.instructions+=2;goto B6e6216;
case 0x6e6219:c.instructions+=1;goto B6e6219;
case 0x6e621c:goto L6e621c;
case 0x6e621f:c.instructions+=11;goto B6e621f;
case 0x6e6222:c.instructions+=10;goto B6e6222;
case 0x6e6225:c.instructions+=9;goto B6e6225;
case 0x6e6228:c.instructions+=8;goto B6e6228;
case 0x6e622a:c.instructions+=7;goto B6e622a;
case 0x6e622b:c.instructions+=6;goto B6e622b;
case 0x6e622e:c.instructions+=5;goto B6e622e;
case 0x6e6232:c.instructions+=4;goto B6e6232;
case 0x6e6235:c.instructions+=3;goto B6e6235;
case 0x6e6238:c.instructions+=2;goto B6e6238;
case 0x6e623b:c.instructions+=1;goto B6e623b;
case 0x6e623e:goto L6e623e;
case 0x6e6241:c.instructions+=2;goto B6e6241;
case 0x6e6243:c.instructions+=1;goto B6e6243;
case 0x6e6249:goto L6e6249;
case 0x6e624c:c.instructions+=4;goto B6e624c;
case 0x6e624f:c.instructions+=3;goto B6e624f;
case 0x6e6250:c.instructions+=2;goto B6e6250;
case 0x6e6254:c.instructions+=1;goto B6e6254;
case 0x6e625a:goto L6e625a;
case 0x6e625d:c.instructions+=5;goto B6e625d;
case 0x6e6260:c.instructions+=4;goto B6e6260;
case 0x6e6263:c.instructions+=3;goto B6e6263;
case 0x6e6266:c.instructions+=2;goto B6e6266;
case 0x6e626a:c.instructions+=1;goto B6e626a;
case 0x6e626c:goto L6e626c;
case 0x6e6270:goto L6e6270;
case 0x6e6273:c.instructions+=2;goto B6e6273;
case 0x6e6275:c.instructions+=1;goto B6e6275;
case 0x6e627b:goto L6e627b;
case 0x6e627e:c.instructions+=25;goto B6e627e;
case 0x6e6281:c.instructions+=24;goto B6e6281;
case 0x6e6284:c.instructions+=23;goto B6e6284;
case 0x6e6288:c.instructions+=22;goto B6e6288;
case 0x6e628c:c.instructions+=21;goto B6e628c;
case 0x6e628e:c.instructions+=20;goto B6e628e;
case 0x6e6291:c.instructions+=19;goto B6e6291;
case 0x6e6292:c.instructions+=18;goto B6e6292;
case 0x6e6295:c.instructions+=17;goto B6e6295;
case 0x6e6296:c.instructions+=16;goto B6e6296;
case 0x6e6299:c.instructions+=15;goto B6e6299;
case 0x6e629a:c.instructions+=14;goto B6e629a;
case 0x6e629d:c.instructions+=13;goto B6e629d;
case 0x6e629e:c.instructions+=12;goto B6e629e;
case 0x6e62a1:c.instructions+=11;goto B6e62a1;
case 0x6e62a2:c.instructions+=10;goto B6e62a2;
case 0x6e62a5:c.instructions+=9;goto B6e62a5;
case 0x6e62a6:c.instructions+=8;goto B6e62a6;
case 0x6e62a9:c.instructions+=7;goto B6e62a9;
case 0x6e62aa:c.instructions+=6;goto B6e62aa;
case 0x6e62ac:c.instructions+=5;goto B6e62ac;
case 0x6e62ad:c.instructions+=4;goto B6e62ad;
case 0x6e62ae:c.instructions+=3;goto B6e62ae;
case 0x6e62af:c.instructions+=2;goto B6e62af;
case 0x6e62b3:c.instructions+=1;goto B6e62b3;
case 0x6e62b8:goto L6e62b8;
case 0x6e62bb:c.instructions+=3;goto B6e62bb;
case 0x6e62bc:c.instructions+=2;goto B6e62bc;
case 0x6e62c0:c.instructions+=1;goto B6e62c0;
case 0x6e62c5:goto L6e62c5;
case 0x6e62c9:c.instructions+=5;goto B6e62c9;
case 0x6e62ca:c.instructions+=4;goto B6e62ca;
case 0x6e62ce:c.instructions+=3;goto B6e62ce;
case 0x6e62cf:c.instructions+=2;goto B6e62cf;
case 0x6e62d3:c.instructions+=1;goto B6e62d3;
case 0x6e62d8:goto L6e62d8;
case 0x6e62dc:c.instructions+=35;goto B6e62dc;
case 0x6e62df:c.instructions+=34;goto B6e62df;
case 0x6e62e3:c.instructions+=33;goto B6e62e3;
case 0x6e62e6:c.instructions+=32;goto B6e62e6;
case 0x6e62ea:c.instructions+=31;goto B6e62ea;
case 0x6e62ed:c.instructions+=30;goto B6e62ed;
case 0x6e62f1:c.instructions+=29;goto B6e62f1;
case 0x6e62f4:c.instructions+=28;goto B6e62f4;
case 0x6e62f8:c.instructions+=27;goto B6e62f8;
case 0x6e62fb:c.instructions+=26;goto B6e62fb;
case 0x6e62ff:c.instructions+=25;goto B6e62ff;
case 0x6e6302:c.instructions+=24;goto B6e6302;
case 0x6e6306:c.instructions+=23;goto B6e6306;
case 0x6e6309:c.instructions+=22;goto B6e6309;
case 0x6e630c:c.instructions+=21;goto B6e630c;
case 0x6e630f:c.instructions+=20;goto B6e630f;
case 0x6e6312:c.instructions+=19;goto B6e6312;
case 0x6e6319:c.instructions+=18;goto B6e6319;
case 0x6e631c:c.instructions+=17;goto B6e631c;
case 0x6e631e:c.instructions+=16;goto B6e631e;
case 0x6e6321:c.instructions+=15;goto B6e6321;
case 0x6e6323:c.instructions+=14;goto B6e6323;
case 0x6e6327:c.instructions+=13;goto B6e6327;
case 0x6e632b:c.instructions+=12;goto B6e632b;
case 0x6e632d:c.instructions+=11;goto B6e632d;
case 0x6e6330:c.instructions+=10;goto B6e6330;
case 0x6e6333:c.instructions+=9;goto B6e6333;
case 0x6e6336:c.instructions+=8;goto B6e6336;
case 0x6e633a:c.instructions+=7;goto B6e633a;
case 0x6e633d:c.instructions+=6;goto B6e633d;
case 0x6e6341:c.instructions+=5;goto B6e6341;
case 0x6e6344:c.instructions+=4;goto B6e6344;
case 0x6e6347:c.instructions+=3;goto B6e6347;
case 0x6e634b:c.instructions+=2;goto B6e634b;
case 0x6e634e:c.instructions+=1;goto B6e634e;
case 0x6e6352:goto L6e6352;
case 0x6e6355:c.instructions+=10;goto B6e6355;
case 0x6e6358:c.instructions+=9;goto B6e6358;
case 0x6e635b:c.instructions+=8;goto B6e635b;
case 0x6e635c:c.instructions+=7;goto B6e635c;
case 0x6e6360:c.instructions+=6;goto B6e6360;
case 0x6e6362:c.instructions+=5;goto B6e6362;
case 0x6e6363:c.instructions+=4;goto B6e6363;
case 0x6e6365:c.instructions+=3;goto B6e6365;
case 0x6e6366:c.instructions+=2;goto B6e6366;
case 0x6e6367:c.instructions+=1;goto B6e6367;
case 0x6e636c:goto L6e636c;
case 0x6e6370:c.instructions+=7;goto B6e6370;
case 0x6e6373:c.instructions+=6;goto B6e6373;
case 0x6e6374:c.instructions+=5;goto B6e6374;
case 0x6e6377:c.instructions+=4;goto B6e6377;
case 0x6e6379:c.instructions+=3;goto B6e6379;
case 0x6e637d:c.instructions+=2;goto B6e637d;
case 0x6e6381:c.instructions+=1;goto B6e6381;
case 0x6e6387:goto L6e6387;
case 0x6e6388:c.instructions+=5;goto B6e6388;
case 0x6e6389:c.instructions+=4;goto B6e6389;
case 0x6e638a:c.instructions+=3;goto B6e638a;
case 0x6e638c:c.instructions+=2;goto B6e638c;
case 0x6e638d:c.instructions+=1;goto B6e638d;
case 0x6e6390:goto L6e6390;
case 0x6e6393:c.instructions+=6;goto B6e6393;
case 0x6e6396:c.instructions+=5;goto B6e6396;
case 0x6e6399:c.instructions+=4;goto B6e6399;
case 0x6e639c:c.instructions+=3;goto B6e639c;
case 0x6e63a3:c.instructions+=2;goto B6e63a3;
case 0x6e63a6:c.instructions+=1;goto B6e63a6;
case 0x6e63a8:goto L6e63a8;
case 0x6e63b0:goto L6e63b0;
case 0x6e63b3:c.instructions+=11;goto B6e63b3;
case 0x6e63ba:c.instructions+=10;goto B6e63ba;
case 0x6e63bd:c.instructions+=9;goto B6e63bd;
case 0x6e63be:c.instructions+=8;goto B6e63be;
case 0x6e63c1:c.instructions+=7;goto B6e63c1;
case 0x6e63c3:c.instructions+=6;goto B6e63c3;
case 0x6e63c4:c.instructions+=5;goto B6e63c4;
case 0x6e63c8:c.instructions+=4;goto B6e63c8;
case 0x6e63ca:c.instructions+=3;goto B6e63ca;
case 0x6e63cb:c.instructions+=2;goto B6e63cb;
case 0x6e63cc:c.instructions+=1;goto B6e63cc;
case 0x6e63d1:goto L6e63d1;
case 0x6e63d4:c.instructions+=3;goto B6e63d4;
case 0x6e63d7:c.instructions+=2;goto B6e63d7;
case 0x6e63da:c.instructions+=1;goto B6e63da;
case 0x6e63dc:goto L6e63dc;
case 0x6e63df:c.instructions+=18;goto B6e63df;
case 0x6e63e2:c.instructions+=17;goto B6e63e2;
case 0x6e63e5:c.instructions+=16;goto B6e63e5;
case 0x6e63e8:c.instructions+=15;goto B6e63e8;
case 0x6e63eb:c.instructions+=14;goto B6e63eb;
case 0x6e63ee:c.instructions+=13;goto B6e63ee;
case 0x6e63f2:c.instructions+=12;goto B6e63f2;
case 0x6e63f4:c.instructions+=11;goto B6e63f4;
case 0x6e63f7:c.instructions+=10;goto B6e63f7;
case 0x6e63fa:c.instructions+=9;goto B6e63fa;
case 0x6e63fd:c.instructions+=8;goto B6e63fd;
case 0x6e6401:c.instructions+=7;goto B6e6401;
case 0x6e6404:c.instructions+=6;goto B6e6404;
case 0x6e6407:c.instructions+=5;goto B6e6407;
case 0x6e640a:c.instructions+=4;goto B6e640a;
case 0x6e640d:c.instructions+=3;goto B6e640d;
case 0x6e6411:c.instructions+=2;goto B6e6411;
case 0x6e6414:c.instructions+=1;goto B6e6414;
case 0x6e6417:goto L6e6417;
case 0x6e6418:c.instructions+=5;goto B6e6418;
case 0x6e6419:c.instructions+=4;goto B6e6419;
case 0x6e641a:c.instructions+=3;goto B6e641a;
case 0x6e641c:c.instructions+=2;goto B6e641c;
case 0x6e641d:c.instructions+=1;goto B6e641d;
case 0x6e6420:goto L6e6420;
case 0x6e6424:c.instructions+=7;goto B6e6424;
case 0x6e6425:c.instructions+=6;goto B6e6425;
case 0x6e6427:c.instructions+=5;goto B6e6427;
case 0x6e642a:c.instructions+=4;goto B6e642a;
case 0x6e642e:c.instructions+=3;goto B6e642e;
case 0x6e6430:c.instructions+=2;goto B6e6430;
case 0x6e6433:c.instructions+=1;goto B6e6433;
case 0x6e6439:goto L6e6439;
case 0x6e643c:c.instructions+=4;goto B6e643c;
case 0x6e6440:c.instructions+=3;goto B6e6440;
case 0x6e6442:c.instructions+=2;goto B6e6442;
case 0x6e6445:c.instructions+=1;goto B6e6445;
case 0x6e6447:goto L6e6447;
case 0x6e644a:c.instructions+=2;goto B6e644a;
case 0x6e644d:c.instructions+=1;goto B6e644d;
case 0x6e644f:goto L6e644f;
case 0x6e6450:c.instructions+=1;goto B6e6450;
case 0x6e6452:goto L6e6452;
case 0x6e6455:c.instructions+=11;goto B6e6455;
case 0x6e6458:c.instructions+=10;goto B6e6458;
case 0x6e645a:c.instructions+=9;goto B6e645a;
case 0x6e645b:c.instructions+=8;goto B6e645b;
case 0x6e645f:c.instructions+=7;goto B6e645f;
case 0x6e6460:c.instructions+=6;goto B6e6460;
case 0x6e6463:c.instructions+=5;goto B6e6463;
case 0x6e6467:c.instructions+=4;goto B6e6467;
case 0x6e646b:c.instructions+=3;goto B6e646b;
case 0x6e646e:c.instructions+=2;goto B6e646e;
case 0x6e6471:c.instructions+=1;goto B6e6471;
case 0x6e6474:goto L6e6474;
case 0x6e6478:c.instructions+=10;goto B6e6478;
case 0x6e647b:c.instructions+=9;goto B6e647b;
case 0x6e647e:c.instructions+=8;goto B6e647e;
case 0x6e6480:c.instructions+=7;goto B6e6480;
case 0x6e6481:c.instructions+=6;goto B6e6481;
case 0x6e6484:c.instructions+=5;goto B6e6484;
case 0x6e6488:c.instructions+=4;goto B6e6488;
case 0x6e648c:c.instructions+=3;goto B6e648c;
case 0x6e648f:c.instructions+=2;goto B6e648f;
case 0x6e6492:c.instructions+=1;goto B6e6492;
case 0x6e6495:goto L6e6495;
case 0x6e6496:c.instructions+=2;goto B6e6496;
case 0x6e6497:c.instructions+=1;goto B6e6497;
case 0x6e649a:goto L6e649a;
case 0x6e649d:c.instructions+=10;goto B6e649d;
case 0x6e64a1:c.instructions+=9;goto B6e64a1;
case 0x6e64a4:c.instructions+=8;goto B6e64a4;
case 0x6e64a6:c.instructions+=7;goto B6e64a6;
case 0x6e64a7:c.instructions+=6;goto B6e64a7;
case 0x6e64aa:c.instructions+=5;goto B6e64aa;
case 0x6e64ae:c.instructions+=4;goto B6e64ae;
case 0x6e64b2:c.instructions+=3;goto B6e64b2;
case 0x6e64b5:c.instructions+=2;goto B6e64b5;
case 0x6e64b8:c.instructions+=1;goto B6e64b8;
case 0x6e64bb:goto L6e64bb;
case 0x6e64bc:c.instructions+=1;goto B6e64bc;
case 0x6e64bf:goto L6e64bf;
case 0x6e64c2:c.instructions+=10;goto B6e64c2;
case 0x6e64c6:c.instructions+=9;goto B6e64c6;
case 0x6e64c9:c.instructions+=8;goto B6e64c9;
case 0x6e64cb:c.instructions+=7;goto B6e64cb;
case 0x6e64cc:c.instructions+=6;goto B6e64cc;
case 0x6e64cf:c.instructions+=5;goto B6e64cf;
case 0x6e64d3:c.instructions+=4;goto B6e64d3;
case 0x6e64d7:c.instructions+=3;goto B6e64d7;
case 0x6e64da:c.instructions+=2;goto B6e64da;
case 0x6e64dd:c.instructions+=1;goto B6e64dd;
case 0x6e64e0:goto L6e64e0;
case 0x6e64e1:c.instructions+=1;goto B6e64e1;
case 0x6e64f0:goto L6e64f0;
case 0x6e64f4:c.instructions+=11;goto B6e64f4;
case 0x6e64f7:c.instructions+=10;goto B6e64f7;
case 0x6e64fd:c.instructions+=9;goto B6e64fd;
case 0x6e6501:c.instructions+=8;goto B6e6501;
case 0x6e6505:c.instructions+=7;goto B6e6505;
case 0x6e6508:c.instructions+=6;goto B6e6508;
case 0x6e650a:c.instructions+=5;goto B6e650a;
case 0x6e650d:c.instructions+=4;goto B6e650d;
case 0x6e6510:c.instructions+=3;goto B6e6510;
case 0x6e6513:c.instructions+=2;goto B6e6513;
case 0x6e6515:c.instructions+=1;goto B6e6515;
case 0x6e6517:goto L6e6517;
case 0x6e651c:c.instructions+=2;goto B6e651c;
case 0x6e651f:c.instructions+=1;goto B6e651f;
case 0x6e6522:goto L6e6522;
case 0x6e6524:c.instructions+=1;goto B6e6524;
case 0x6e6526:goto L6e6526;
case 0x6e652b:c.instructions+=2;goto B6e652b;
case 0x6e652e:c.instructions+=1;goto B6e652e;
case 0x6e6531:goto L6e6531;
case 0x6e6533:c.instructions+=1;goto B6e6533;
case 0x6e6535:goto L6e6535;
case 0x6e653a:c.instructions+=2;goto B6e653a;
case 0x6e653d:c.instructions+=1;goto B6e653d;
case 0x6e6540:goto L6e6540;
case 0x6e6542:c.instructions+=6;goto B6e6542;
case 0x6e6544:c.instructions+=5;goto B6e6544;
case 0x6e6546:c.instructions+=4;goto B6e6546;
case 0x6e6549:c.instructions+=3;goto B6e6549;
case 0x6e654a:c.instructions+=2;goto B6e654a;
case 0x6e654d:c.instructions+=1;goto B6e654d;
case 0x6e6550:goto L6e6550;
case 0x6e6553:c.instructions+=13;goto B6e6553;
case 0x6e6554:c.instructions+=12;goto B6e6554;
case 0x6e6555:c.instructions+=11;goto B6e6555;
case 0x6e6559:c.instructions+=10;goto B6e6559;
case 0x6e655d:c.instructions+=9;goto B6e655d;
case 0x6e655e:c.instructions+=8;goto B6e655e;
case 0x6e6561:c.instructions+=7;goto B6e6561;
case 0x6e6565:c.instructions+=6;goto B6e6565;
case 0x6e6568:c.instructions+=5;goto B6e6568;
case 0x6e6569:c.instructions+=4;goto B6e6569;
case 0x6e656b:c.instructions+=3;goto B6e656b;
case 0x6e656c:c.instructions+=2;goto B6e656c;
case 0x6e6570:c.instructions+=1;goto B6e6570;
case 0x6e6576:goto L6e6576;
case 0x6e657a:c.instructions+=5;goto B6e657a;
case 0x6e6580:c.instructions+=4;goto B6e6580;
case 0x6e6584:c.instructions+=3;goto B6e6584;
case 0x6e6586:c.instructions+=2;goto B6e6586;
case 0x6e6589:c.instructions+=1;goto B6e6589;
case 0x6e658b:goto L6e658b;
case 0x6e658f:c.instructions+=5;goto B6e658f;
case 0x6e6590:c.instructions+=4;goto B6e6590;
case 0x6e6594:c.instructions+=3;goto B6e6594;
case 0x6e6598:c.instructions+=2;goto B6e6598;
case 0x6e659b:c.instructions+=1;goto B6e659b;
case 0x6e65a0:goto L6e65a0;
case 0x6e65a2:c.instructions+=8;goto B6e65a2;
case 0x6e65a5:c.instructions+=7;goto B6e65a5;
case 0x6e65a8:c.instructions+=6;goto B6e65a8;
case 0x6e65ac:c.instructions+=5;goto B6e65ac;
case 0x6e65b0:c.instructions+=4;goto B6e65b0;
case 0x6e65b4:c.instructions+=3;goto B6e65b4;
case 0x6e65b8:c.instructions+=2;goto B6e65b8;
case 0x6e65bc:c.instructions+=1;goto B6e65bc;
case 0x6e65be:goto L6e65be;
case 0x6e65c2:c.instructions+=4;goto B6e65c2;
case 0x6e65c4:c.instructions+=3;goto B6e65c4;
case 0x6e65c6:c.instructions+=2;goto B6e65c6;
case 0x6e65c9:c.instructions+=1;goto B6e65c9;
case 0x6e65cb:goto L6e65cb;
case 0x6e65cf:c.instructions+=7;goto B6e65cf;
case 0x6e65d0:c.instructions+=6;goto B6e65d0;
case 0x6e65d2:c.instructions+=5;goto B6e65d2;
case 0x6e65d6:c.instructions+=4;goto B6e65d6;
case 0x6e65d8:c.instructions+=3;goto B6e65d8;
case 0x6e65db:c.instructions+=2;goto B6e65db;
case 0x6e65dd:c.instructions+=1;goto B6e65dd;
case 0x6e65e2:goto L6e65e2;
case 0x6e65e5:c.instructions+=6;goto B6e65e5;
case 0x6e65e8:c.instructions+=5;goto B6e65e8;
case 0x6e65ec:c.instructions+=4;goto B6e65ec;
case 0x6e65f0:c.instructions+=3;goto B6e65f0;
case 0x6e65f4:c.instructions+=2;goto B6e65f4;
case 0x6e65f8:c.instructions+=1;goto B6e65f8;
case 0x6e65fa:goto L6e65fa;
case 0x6e65fc:goto L6e65fc;
case 0x6e6600:c.instructions+=5;goto B6e6600;
case 0x6e6606:c.instructions+=4;goto B6e6606;
case 0x6e660a:c.instructions+=3;goto B6e660a;
case 0x6e660c:c.instructions+=2;goto B6e660c;
case 0x6e660f:c.instructions+=1;goto B6e660f;
case 0x6e6611:goto L6e6611;
case 0x6e6617:c.instructions+=4;goto B6e6617;
case 0x6e661b:c.instructions+=3;goto B6e661b;
case 0x6e661f:c.instructions+=2;goto B6e661f;
case 0x6e6623:c.instructions+=1;goto B6e6623;
case 0x6e6625:goto L6e6625;
case 0x6e662b:c.instructions+=3;goto B6e662b;
case 0x6e662f:c.instructions+=2;goto B6e662f;
case 0x6e6633:c.instructions+=1;goto B6e6633;
case 0x6e6637:goto L6e6637;
case 0x6e663b:c.instructions+=15;goto B6e663b;
case 0x6e663f:c.instructions+=14;goto B6e663f;
case 0x6e6643:c.instructions+=13;goto B6e6643;
case 0x6e6644:c.instructions+=12;goto B6e6644;
case 0x6e6646:c.instructions+=11;goto B6e6646;
case 0x6e664a:c.instructions+=10;goto B6e664a;
case 0x6e664c:c.instructions+=9;goto B6e664c;
case 0x6e664f:c.instructions+=8;goto B6e664f;
case 0x6e6652:c.instructions+=7;goto B6e6652;
case 0x6e6656:c.instructions+=6;goto B6e6656;
case 0x6e6658:c.instructions+=5;goto B6e6658;
case 0x6e665c:c.instructions+=4;goto B6e665c;
case 0x6e665f:c.instructions+=3;goto B6e665f;
case 0x6e6663:c.instructions+=2;goto B6e6663;
case 0x6e6667:c.instructions+=1;goto B6e6667;
case 0x6e6669:goto L6e6669;
case 0x6e666e:goto L6e666e;
case 0x6e6670:c.instructions+=15;goto B6e6670;
case 0x6e6675:c.instructions+=14;goto B6e6675;
case 0x6e6679:c.instructions+=13;goto B6e6679;
case 0x6e667b:c.instructions+=12;goto B6e667b;
case 0x6e667f:c.instructions+=11;goto B6e667f;
case 0x6e6680:c.instructions+=10;goto B6e6680;
case 0x6e6686:c.instructions+=9;goto B6e6686;
case 0x6e668c:c.instructions+=8;goto B6e668c;
case 0x6e668f:c.instructions+=7;goto B6e668f;
case 0x6e6693:c.instructions+=6;goto B6e6693;
case 0x6e6697:c.instructions+=5;goto B6e6697;
case 0x6e6699:c.instructions+=4;goto B6e6699;
case 0x6e669a:c.instructions+=3;goto B6e669a;
case 0x6e669c:c.instructions+=2;goto B6e669c;
case 0x6e669f:c.instructions+=1;goto B6e669f;
case 0x6e66a1:goto L6e66a1;
case 0x6e66a3:c.instructions+=2;goto B6e66a3;
case 0x6e66a6:c.instructions+=1;goto B6e66a6;
case 0x6e66a8:goto L6e66a8;
case 0x6e66ad:goto L6e66ad;
case 0x6e66af:c.instructions+=19;goto B6e66af;
case 0x6e66b4:c.instructions+=18;goto B6e66b4;
case 0x6e66b8:c.instructions+=17;goto B6e66b8;
case 0x6e66b9:c.instructions+=16;goto B6e66b9;
case 0x6e66bd:c.instructions+=15;goto B6e66bd;
case 0x6e66be:c.instructions+=14;goto B6e66be;
case 0x6e66c4:c.instructions+=13;goto B6e66c4;
case 0x6e66ca:c.instructions+=12;goto B6e66ca;
case 0x6e66cc:c.instructions+=11;goto B6e66cc;
case 0x6e66d2:c.instructions+=10;goto B6e66d2;
case 0x6e66d4:c.instructions+=9;goto B6e66d4;
case 0x6e66d6:c.instructions+=8;goto B6e66d6;
case 0x6e66d8:c.instructions+=7;goto B6e66d8;
case 0x6e66db:c.instructions+=6;goto B6e66db;
case 0x6e66dc:c.instructions+=5;goto B6e66dc;
case 0x6e66dd:c.instructions+=4;goto B6e66dd;
case 0x6e66df:c.instructions+=3;goto B6e66df;
case 0x6e66e1:c.instructions+=2;goto B6e66e1;
case 0x6e66e4:c.instructions+=1;goto B6e66e4;
case 0x6e66e7:goto L6e66e7;
case 0x6e66e9:c.instructions+=2;goto B6e66e9;
case 0x6e66ec:c.instructions+=1;goto B6e66ec;
case 0x6e66ee:goto L6e66ee;
case 0x6e66f3:goto L6e66f3;
case 0x6e66f5:c.instructions+=19;goto B6e66f5;
case 0x6e66f7:c.instructions+=18;goto B6e66f7;
case 0x6e66fd:c.instructions+=17;goto B6e66fd;
case 0x6e6702:c.instructions+=16;goto B6e6702;
case 0x6e6706:c.instructions+=15;goto B6e6706;
case 0x6e6708:c.instructions+=14;goto B6e6708;
case 0x6e6709:c.instructions+=13;goto B6e6709;
case 0x6e670d:c.instructions+=12;goto B6e670d;
case 0x6e670e:c.instructions+=11;goto B6e670e;
case 0x6e6714:c.instructions+=10;goto B6e6714;
case 0x6e671a:c.instructions+=9;goto B6e671a;
case 0x6e671c:c.instructions+=8;goto B6e671c;
case 0x6e671e:c.instructions+=7;goto B6e671e;
case 0x6e6721:c.instructions+=6;goto B6e6721;
case 0x6e6722:c.instructions+=5;goto B6e6722;
case 0x6e6723:c.instructions+=4;goto B6e6723;
case 0x6e6725:c.instructions+=3;goto B6e6725;
case 0x6e6727:c.instructions+=2;goto B6e6727;
case 0x6e672a:c.instructions+=1;goto B6e672a;
case 0x6e6730:goto L6e6730;
case 0x6e6731:c.instructions+=5;goto B6e6731;
case 0x6e6733:c.instructions+=4;goto B6e6733;
case 0x6e6736:c.instructions+=3;goto B6e6736;
case 0x6e6738:c.instructions+=2;goto B6e6738;
case 0x6e673e:c.instructions+=1;goto B6e673e;
case 0x6e6740:goto L6e6740;
case 0x6e6743:c.instructions+=4;goto B6e6743;
case 0x6e6744:c.instructions+=3;goto B6e6744;
case 0x6e6748:c.instructions+=2;goto B6e6748;
case 0x6e6749:c.instructions+=1;goto B6e6749;
case 0x6e674b:goto L6e674b;
case 0x6e6750:goto L6e6750;
case 0x6e6753:c.instructions+=5;goto B6e6753;
case 0x6e6759:c.instructions+=4;goto B6e6759;
case 0x6e675c:c.instructions+=3;goto B6e675c;
case 0x6e675e:c.instructions+=2;goto B6e675e;
case 0x6e675f:c.instructions+=1;goto B6e675f;
case 0x6e6762:goto L6e6762;
case 0x6e6763:c.instructions+=1;goto B6e6763;
case 0x6e6765:goto L6e6765;
case 0x6e676b:c.instructions+=4;goto B6e676b;
case 0x6e676e:c.instructions+=3;goto B6e676e;
case 0x6e6770:c.instructions+=2;goto B6e6770;
case 0x6e6771:c.instructions+=1;goto B6e6771;
case 0x6e6774:goto L6e6774;
case 0x6e6775:goto L6e6775;
case 0x6e6777:c.instructions+=2;goto B6e6777;
case 0x6e6778:c.instructions+=1;goto B6e6778;
case 0x6e6780:goto L6e6780;
case 0x6e6784:c.instructions+=6;goto B6e6784;
case 0x6e6785:c.instructions+=5;goto B6e6785;
case 0x6e6787:c.instructions+=4;goto B6e6787;
case 0x6e678a:c.instructions+=3;goto B6e678a;
case 0x6e678c:c.instructions+=2;goto B6e678c;
case 0x6e678f:c.instructions+=1;goto B6e678f;
case 0x6e6791:goto L6e6791;
case 0x6e6792:c.instructions+=3;goto B6e6792;
case 0x6e6796:c.instructions+=2;goto B6e6796;
case 0x6e6797:c.instructions+=1;goto B6e6797;
case 0x6e6799:goto L6e6799;
case 0x6e67a0:goto L6e67a0;
case 0x6e67a3:c.instructions+=5;goto B6e67a3;
case 0x6e67a9:c.instructions+=4;goto B6e67a9;
case 0x6e67ac:c.instructions+=3;goto B6e67ac;
case 0x6e67ae:c.instructions+=2;goto B6e67ae;
case 0x6e67af:c.instructions+=1;goto B6e67af;
case 0x6e67b2:goto L6e67b2;
case 0x6e67b3:c.instructions+=1;goto B6e67b3;
case 0x6e67b5:goto L6e67b5;
case 0x6e67bb:c.instructions+=4;goto B6e67bb;
case 0x6e67be:c.instructions+=3;goto B6e67be;
case 0x6e67c0:c.instructions+=2;goto B6e67c0;
case 0x6e67c1:c.instructions+=1;goto B6e67c1;
case 0x6e67c4:goto L6e67c4;
case 0x6e67c5:goto L6e67c5;
case 0x6e67cc:c.instructions+=2;goto B6e67cc;
case 0x6e67cd:c.instructions+=1;goto B6e67cd;
case 0x6e67d0:goto L6e67d0;
case 0x6e67d1:c.instructions+=11;goto B6e67d1;
case 0x6e67d2:c.instructions+=10;goto B6e67d2;
case 0x6e67d4:c.instructions+=9;goto B6e67d4;
case 0x6e67da:c.instructions+=8;goto B6e67da;
case 0x6e67dc:c.instructions+=7;goto B6e67dc;
case 0x6e67dd:c.instructions+=6;goto B6e67dd;
case 0x6e67e0:c.instructions+=5;goto B6e67e0;
case 0x6e67e4:c.instructions+=4;goto B6e67e4;
case 0x6e67e7:c.instructions+=3;goto B6e67e7;
case 0x6e67ea:c.instructions+=2;goto B6e67ea;
case 0x6e67eb:c.instructions+=1;goto B6e67eb;
case 0x6e67ee:goto L6e67ee;
case 0x6e67f1:c.instructions+=3;goto B6e67f1;
case 0x6e67f5:c.instructions+=2;goto B6e67f5;
case 0x6e67f6:c.instructions+=1;goto B6e67f6;
case 0x6e67f8:goto L6e67f8;
case 0x6e67fc:c.instructions+=1;goto B6e67fc;
case 0x6e6800:goto L6e6800;
case 0x6e6802:c.instructions+=4;goto B6e6802;
case 0x6e6808:c.instructions+=3;goto B6e6808;
case 0x6e680a:c.instructions+=2;goto B6e680a;
case 0x6e680b:c.instructions+=1;goto B6e680b;
case 0x6e680e:goto L6e680e;
case 0x6e6811:c.instructions+=5;goto B6e6811;
case 0x6e6814:c.instructions+=4;goto B6e6814;
case 0x6e6815:c.instructions+=3;goto B6e6815;
case 0x6e6818:c.instructions+=2;goto B6e6818;
case 0x6e681a:c.instructions+=1;goto B6e681a;
case 0x6e681c:goto L6e681c;
case 0x6e681d:c.instructions+=3;goto B6e681d;
case 0x6e681e:c.instructions+=2;goto B6e681e;
case 0x6e681f:c.instructions+=1;goto B6e681f;
case 0x6e6820:goto L6e6820;
case 0x6e6821:c.instructions+=7;goto B6e6821;
case 0x6e6822:c.instructions+=6;goto B6e6822;
case 0x6e6823:c.instructions+=5;goto B6e6823;
case 0x6e6825:c.instructions+=4;goto B6e6825;
case 0x6e6828:c.instructions+=3;goto B6e6828;
case 0x6e682a:c.instructions+=2;goto B6e682a;
case 0x6e682d:c.instructions+=1;goto B6e682d;
case 0x6e682f:goto L6e682f;
case 0x6e6834:goto L6e6834;
case 0x6e6837:c.instructions+=2;goto B6e6837;
case 0x6e6839:c.instructions+=1;goto B6e6839;
case 0x6e683b:goto L6e683b;
case 0x6e683f:c.instructions+=7;goto B6e683f;
case 0x6e6843:c.instructions+=6;goto B6e6843;
case 0x6e6847:c.instructions+=5;goto B6e6847;
case 0x6e684b:c.instructions+=4;goto B6e684b;
case 0x6e684d:c.instructions+=3;goto B6e684d;
case 0x6e6851:c.instructions+=2;goto B6e6851;
case 0x6e6855:c.instructions+=1;goto B6e6855;
case 0x6e6859:goto L6e6859;
case 0x6e685d:c.instructions+=2;goto B6e685d;
case 0x6e685e:c.instructions+=1;goto B6e685e;
case 0x6e6860:goto L6e6860;
case 0x6e6861:c.instructions+=4;goto B6e6861;
case 0x6e6865:c.instructions+=3;goto B6e6865;
case 0x6e6866:c.instructions+=2;goto B6e6866;
case 0x6e686a:c.instructions+=1;goto B6e686a;
case 0x6e6870:goto L6e6870;
case 0x6e6873:c.instructions+=7;goto B6e6873;
case 0x6e6876:c.instructions+=6;goto B6e6876;
case 0x6e687a:c.instructions+=5;goto B6e687a;
case 0x6e687c:c.instructions+=4;goto B6e687c;
case 0x6e687d:c.instructions+=3;goto B6e687d;
case 0x6e687e:c.instructions+=2;goto B6e687e;
case 0x6e687f:c.instructions+=1;goto B6e687f;
case 0x6e6882:goto L6e6882;
case 0x6e6883:c.instructions+=1;goto B6e6883;
case 0x6e6885:goto L6e6885;
case 0x6e6886:c.instructions+=1;goto B6e6886;
case 0x6e6887:goto L6e6887;
case 0x6e6888:c.instructions+=3;goto B6e6888;
case 0x6e6889:c.instructions+=2;goto B6e6889;
case 0x6e688a:c.instructions+=1;goto B6e688a;
case 0x6e6890:goto L6e6890;
case 0x6e6891:c.instructions+=9;goto B6e6891;
case 0x6e6892:c.instructions+=8;goto B6e6892;
case 0x6e6893:c.instructions+=7;goto B6e6893;
case 0x6e6894:c.instructions+=6;goto B6e6894;
case 0x6e6896:c.instructions+=5;goto B6e6896;
case 0x6e6899:c.instructions+=4;goto B6e6899;
case 0x6e689c:c.instructions+=3;goto B6e689c;
case 0x6e689e:c.instructions+=2;goto B6e689e;
case 0x6e68a0:c.instructions+=1;goto B6e68a0;
case 0x6e68a2:goto L6e68a2;
case 0x6e68a7:goto L6e68a7;
case 0x6e68aa:c.instructions+=2;goto B6e68aa;
case 0x6e68ac:c.instructions+=1;goto B6e68ac;
case 0x6e68ae:goto L6e68ae;
case 0x6e68b2:c.instructions+=7;goto B6e68b2;
case 0x6e68b6:c.instructions+=6;goto B6e68b6;
case 0x6e68ba:c.instructions+=5;goto B6e68ba;
case 0x6e68be:c.instructions+=4;goto B6e68be;
case 0x6e68c0:c.instructions+=3;goto B6e68c0;
case 0x6e68c4:c.instructions+=2;goto B6e68c4;
case 0x6e68c8:c.instructions+=1;goto B6e68c8;
case 0x6e68cc:goto L6e68cc;
case 0x6e68d0:c.instructions+=2;goto B6e68d0;
case 0x6e68d1:c.instructions+=1;goto B6e68d1;
case 0x6e68d3:goto L6e68d3;
case 0x6e68d4:c.instructions+=2;goto B6e68d4;
case 0x6e68d8:c.instructions+=1;goto B6e68d8;
case 0x6e68e0:goto L6e68e0;
case 0x6e68e4:c.instructions+=10;goto B6e68e4;
case 0x6e68e7:c.instructions+=9;goto B6e68e7;
case 0x6e68ea:c.instructions+=8;goto B6e68ea;
case 0x6e68ec:c.instructions+=7;goto B6e68ec;
case 0x6e68ed:c.instructions+=6;goto B6e68ed;
case 0x6e68ee:c.instructions+=5;goto B6e68ee;
case 0x6e68f2:c.instructions+=4;goto B6e68f2;
case 0x6e68f3:c.instructions+=3;goto B6e68f3;
case 0x6e68f7:c.instructions+=2;goto B6e68f7;
case 0x6e68f8:c.instructions+=1;goto B6e68f8;
case 0x6e68fb:goto L6e68fb;
case 0x6e68fd:c.instructions+=2;goto B6e68fd;
case 0x6e68fe:c.instructions+=1;goto B6e68fe;
case 0x6e6900:goto L6e6900;
case 0x6e6901:goto L6e6901;
case 0x6e6902:c.instructions+=5;goto B6e6902;
case 0x6e6903:c.instructions+=4;goto B6e6903;
case 0x6e6905:c.instructions+=3;goto B6e6905;
case 0x6e6906:c.instructions+=2;goto B6e6906;
case 0x6e6907:c.instructions+=1;goto B6e6907;
case 0x6e6910:goto L6e6910;
case 0x6e6911:c.instructions+=9;goto B6e6911;
case 0x6e6912:c.instructions+=8;goto B6e6912;
case 0x6e6913:c.instructions+=7;goto B6e6913;
case 0x6e6914:c.instructions+=6;goto B6e6914;
case 0x6e6916:c.instructions+=5;goto B6e6916;
case 0x6e6919:c.instructions+=4;goto B6e6919;
case 0x6e691c:c.instructions+=3;goto B6e691c;
case 0x6e691e:c.instructions+=2;goto B6e691e;
case 0x6e6920:c.instructions+=1;goto B6e6920;
case 0x6e6922:goto L6e6922;
case 0x6e6927:goto L6e6927;
case 0x6e692a:c.instructions+=2;goto B6e692a;
case 0x6e692c:c.instructions+=1;goto B6e692c;
case 0x6e692e:goto L6e692e;
case 0x6e6932:c.instructions+=4;goto B6e6932;
case 0x6e6936:c.instructions+=3;goto B6e6936;
case 0x6e693a:c.instructions+=2;goto B6e693a;
case 0x6e693e:c.instructions+=1;goto B6e693e;
case 0x6e6942:goto L6e6942;
case 0x6e6946:c.instructions+=2;goto B6e6946;
case 0x6e6947:c.instructions+=1;goto B6e6947;
case 0x6e6949:goto L6e6949;
case 0x6e694a:c.instructions+=2;goto B6e694a;
case 0x6e694e:c.instructions+=1;goto B6e694e;
case 0x6e6950:goto L6e6950;
case 0x6e6954:c.instructions+=8;goto B6e6954;
case 0x6e6957:c.instructions+=7;goto B6e6957;
case 0x6e695a:c.instructions+=6;goto B6e695a;
case 0x6e695c:c.instructions+=5;goto B6e695c;
case 0x6e695d:c.instructions+=4;goto B6e695d;
case 0x6e695e:c.instructions+=3;goto B6e695e;
case 0x6e6962:c.instructions+=2;goto B6e6962;
case 0x6e6963:c.instructions+=1;goto B6e6963;
case 0x6e6966:goto L6e6966;
case 0x6e6968:c.instructions+=2;goto B6e6968;
case 0x6e6969:c.instructions+=1;goto B6e6969;
case 0x6e696b:goto L6e696b;
case 0x6e696c:goto L6e696c;
case 0x6e696d:c.instructions+=5;goto B6e696d;
case 0x6e696e:c.instructions+=4;goto B6e696e;
case 0x6e6970:c.instructions+=3;goto B6e6970;
case 0x6e6971:c.instructions+=2;goto B6e6971;
case 0x6e6972:c.instructions+=1;goto B6e6972;
case 0x6e6980:goto L6e6980;
case 0x6e6981:c.instructions+=9;goto B6e6981;
case 0x6e6982:c.instructions+=8;goto B6e6982;
case 0x6e6983:c.instructions+=7;goto B6e6983;
case 0x6e6984:c.instructions+=6;goto B6e6984;
case 0x6e6986:c.instructions+=5;goto B6e6986;
case 0x6e6989:c.instructions+=4;goto B6e6989;
case 0x6e698c:c.instructions+=3;goto B6e698c;
case 0x6e698e:c.instructions+=2;goto B6e698e;
case 0x6e6990:c.instructions+=1;goto B6e6990;
case 0x6e6992:goto L6e6992;
case 0x6e6997:goto L6e6997;
case 0x6e699a:c.instructions+=2;goto B6e699a;
case 0x6e699c:c.instructions+=1;goto B6e699c;
case 0x6e699e:goto L6e699e;
case 0x6e69a2:c.instructions+=4;goto B6e69a2;
case 0x6e69a6:c.instructions+=3;goto B6e69a6;
case 0x6e69aa:c.instructions+=2;goto B6e69aa;
case 0x6e69ae:c.instructions+=1;goto B6e69ae;
case 0x6e69b2:goto L6e69b2;
case 0x6e69b6:c.instructions+=2;goto B6e69b6;
case 0x6e69b7:c.instructions+=1;goto B6e69b7;
case 0x6e69b9:goto L6e69b9;
case 0x6e69ba:c.instructions+=2;goto B6e69ba;
case 0x6e69be:c.instructions+=1;goto B6e69be;
case 0x6e69c0:goto L6e69c0;
case 0x6e69c4:c.instructions+=8;goto B6e69c4;
case 0x6e69c7:c.instructions+=7;goto B6e69c7;
case 0x6e69ca:c.instructions+=6;goto B6e69ca;
case 0x6e69cc:c.instructions+=5;goto B6e69cc;
case 0x6e69cd:c.instructions+=4;goto B6e69cd;
case 0x6e69ce:c.instructions+=3;goto B6e69ce;
case 0x6e69d2:c.instructions+=2;goto B6e69d2;
case 0x6e69d3:c.instructions+=1;goto B6e69d3;
case 0x6e69d6:goto L6e69d6;
case 0x6e69d8:c.instructions+=2;goto B6e69d8;
case 0x6e69d9:c.instructions+=1;goto B6e69d9;
case 0x6e69db:goto L6e69db;
case 0x6e69dc:goto L6e69dc;
case 0x6e69dd:c.instructions+=5;goto B6e69dd;
case 0x6e69de:c.instructions+=4;goto B6e69de;
case 0x6e69e0:c.instructions+=3;goto B6e69e0;
case 0x6e69e1:c.instructions+=2;goto B6e69e1;
case 0x6e69e2:c.instructions+=1;goto B6e69e2;
case 0x6e69f0:goto L6e69f0;
case 0x6e69f1:c.instructions+=9;goto B6e69f1;
case 0x6e69f2:c.instructions+=8;goto B6e69f2;
case 0x6e69f3:c.instructions+=7;goto B6e69f3;
case 0x6e69f4:c.instructions+=6;goto B6e69f4;
case 0x6e69f6:c.instructions+=5;goto B6e69f6;
case 0x6e69f9:c.instructions+=4;goto B6e69f9;
case 0x6e69fc:c.instructions+=3;goto B6e69fc;
case 0x6e69fe:c.instructions+=2;goto B6e69fe;
case 0x6e6a00:c.instructions+=1;goto B6e6a00;
case 0x6e6a02:goto L6e6a02;
case 0x6e6a07:goto L6e6a07;
case 0x6e6a0a:c.instructions+=2;goto B6e6a0a;
case 0x6e6a0c:c.instructions+=1;goto B6e6a0c;
case 0x6e6a0e:goto L6e6a0e;
case 0x6e6a12:c.instructions+=4;goto B6e6a12;
case 0x6e6a16:c.instructions+=3;goto B6e6a16;
case 0x6e6a1a:c.instructions+=2;goto B6e6a1a;
case 0x6e6a1e:c.instructions+=1;goto B6e6a1e;
case 0x6e6a22:goto L6e6a22;
case 0x6e6a26:c.instructions+=2;goto B6e6a26;
case 0x6e6a27:c.instructions+=1;goto B6e6a27;
case 0x6e6a29:goto L6e6a29;
case 0x6e6a2a:c.instructions+=2;goto B6e6a2a;
case 0x6e6a2e:c.instructions+=1;goto B6e6a2e;
case 0x6e6a30:goto L6e6a30;
case 0x6e6a33:c.instructions+=6;goto B6e6a33;
case 0x6e6a36:c.instructions+=5;goto B6e6a36;
case 0x6e6a3a:c.instructions+=4;goto B6e6a3a;
case 0x6e6a3c:c.instructions+=3;goto B6e6a3c;
case 0x6e6a3d:c.instructions+=2;goto B6e6a3d;
case 0x6e6a3e:c.instructions+=1;goto B6e6a3e;
case 0x6e6a41:goto L6e6a41;
case 0x6e6a43:c.instructions+=2;goto B6e6a43;
case 0x6e6a44:c.instructions+=1;goto B6e6a44;
case 0x6e6a46:goto L6e6a46;
case 0x6e6a47:goto L6e6a47;
case 0x6e6a48:c.instructions+=5;goto B6e6a48;
case 0x6e6a49:c.instructions+=4;goto B6e6a49;
case 0x6e6a4b:c.instructions+=3;goto B6e6a4b;
case 0x6e6a4c:c.instructions+=2;goto B6e6a4c;
case 0x6e6a4d:c.instructions+=1;goto B6e6a4d;
case 0x6e6a50:goto L6e6a50;
case 0x6e6a51:c.instructions+=9;goto B6e6a51;
case 0x6e6a52:c.instructions+=8;goto B6e6a52;
case 0x6e6a53:c.instructions+=7;goto B6e6a53;
case 0x6e6a54:c.instructions+=6;goto B6e6a54;
case 0x6e6a56:c.instructions+=5;goto B6e6a56;
case 0x6e6a59:c.instructions+=4;goto B6e6a59;
case 0x6e6a5c:c.instructions+=3;goto B6e6a5c;
case 0x6e6a5e:c.instructions+=2;goto B6e6a5e;
case 0x6e6a60:c.instructions+=1;goto B6e6a60;
case 0x6e6a62:goto L6e6a62;
case 0x6e6a67:goto L6e6a67;
case 0x6e6a6a:c.instructions+=2;goto B6e6a6a;
case 0x6e6a6c:c.instructions+=1;goto B6e6a6c;
case 0x6e6a6e:goto L6e6a6e;
case 0x6e6a72:c.instructions+=4;goto B6e6a72;
case 0x6e6a76:c.instructions+=3;goto B6e6a76;
case 0x6e6a7a:c.instructions+=2;goto B6e6a7a;
case 0x6e6a7e:c.instructions+=1;goto B6e6a7e;
case 0x6e6a82:goto L6e6a82;
case 0x6e6a86:c.instructions+=2;goto B6e6a86;
case 0x6e6a87:c.instructions+=1;goto B6e6a87;
case 0x6e6a89:goto L6e6a89;
case 0x6e6a8a:c.instructions+=2;goto B6e6a8a;
case 0x6e6a8e:c.instructions+=1;goto B6e6a8e;
case 0x6e6a90:goto L6e6a90;
case 0x6e6a93:c.instructions+=6;goto B6e6a93;
case 0x6e6a96:c.instructions+=5;goto B6e6a96;
case 0x6e6a9a:c.instructions+=4;goto B6e6a9a;
case 0x6e6a9c:c.instructions+=3;goto B6e6a9c;
case 0x6e6a9d:c.instructions+=2;goto B6e6a9d;
case 0x6e6a9e:c.instructions+=1;goto B6e6a9e;
case 0x6e6aa1:goto L6e6aa1;
case 0x6e6aa3:c.instructions+=2;goto B6e6aa3;
case 0x6e6aa4:c.instructions+=1;goto B6e6aa4;
case 0x6e6aa6:goto L6e6aa6;
case 0x6e6aa7:goto L6e6aa7;
case 0x6e6aa8:c.instructions+=5;goto B6e6aa8;
case 0x6e6aa9:c.instructions+=4;goto B6e6aa9;
case 0x6e6aab:c.instructions+=3;goto B6e6aab;
case 0x6e6aac:c.instructions+=2;goto B6e6aac;
case 0x6e6aad:c.instructions+=1;goto B6e6aad;
case 0x6e6ab0:goto L6e6ab0;
case 0x6e6ab1:c.instructions+=9;goto B6e6ab1;
case 0x6e6ab2:c.instructions+=8;goto B6e6ab2;
case 0x6e6ab3:c.instructions+=7;goto B6e6ab3;
case 0x6e6ab4:c.instructions+=6;goto B6e6ab4;
case 0x6e6ab6:c.instructions+=5;goto B6e6ab6;
case 0x6e6ab9:c.instructions+=4;goto B6e6ab9;
case 0x6e6abc:c.instructions+=3;goto B6e6abc;
case 0x6e6abe:c.instructions+=2;goto B6e6abe;
case 0x6e6ac0:c.instructions+=1;goto B6e6ac0;
case 0x6e6ac2:goto L6e6ac2;
case 0x6e6ac7:goto L6e6ac7;
case 0x6e6aca:c.instructions+=2;goto B6e6aca;
case 0x6e6acc:c.instructions+=1;goto B6e6acc;
case 0x6e6ace:goto L6e6ace;
case 0x6e6ad2:c.instructions+=4;goto B6e6ad2;
case 0x6e6ad6:c.instructions+=3;goto B6e6ad6;
case 0x6e6ada:c.instructions+=2;goto B6e6ada;
case 0x6e6ade:c.instructions+=1;goto B6e6ade;
case 0x6e6ae2:goto L6e6ae2;
case 0x6e6ae6:c.instructions+=2;goto B6e6ae6;
case 0x6e6ae7:c.instructions+=1;goto B6e6ae7;
case 0x6e6ae9:goto L6e6ae9;
case 0x6e6aea:c.instructions+=2;goto B6e6aea;
case 0x6e6aee:c.instructions+=1;goto B6e6aee;
case 0x6e6af0:goto L6e6af0;
case 0x6e6af3:c.instructions+=6;goto B6e6af3;
case 0x6e6af6:c.instructions+=5;goto B6e6af6;
case 0x6e6afa:c.instructions+=4;goto B6e6afa;
case 0x6e6afc:c.instructions+=3;goto B6e6afc;
case 0x6e6afd:c.instructions+=2;goto B6e6afd;
case 0x6e6afe:c.instructions+=1;goto B6e6afe;
case 0x6e6b01:goto L6e6b01;
case 0x6e6b03:c.instructions+=2;goto B6e6b03;
case 0x6e6b04:c.instructions+=1;goto B6e6b04;
case 0x6e6b06:goto L6e6b06;
case 0x6e6b07:goto L6e6b07;
case 0x6e6b08:c.instructions+=5;goto B6e6b08;
case 0x6e6b09:c.instructions+=4;goto B6e6b09;
case 0x6e6b0b:c.instructions+=3;goto B6e6b0b;
case 0x6e6b0c:c.instructions+=2;goto B6e6b0c;
case 0x6e6b0d:c.instructions+=1;goto B6e6b0d;
case 0x6e6b10:goto L6e6b10;
case 0x6e6b11:c.instructions+=9;goto B6e6b11;
case 0x6e6b12:c.instructions+=8;goto B6e6b12;
case 0x6e6b13:c.instructions+=7;goto B6e6b13;
case 0x6e6b14:c.instructions+=6;goto B6e6b14;
case 0x6e6b16:c.instructions+=5;goto B6e6b16;
case 0x6e6b19:c.instructions+=4;goto B6e6b19;
case 0x6e6b1b:c.instructions+=3;goto B6e6b1b;
case 0x6e6b1e:c.instructions+=2;goto B6e6b1e;
case 0x6e6b1f:c.instructions+=1;goto B6e6b1f;
case 0x6e6b21:goto L6e6b21;
case 0x6e6b25:c.instructions+=4;goto B6e6b25;
case 0x6e6b29:c.instructions+=3;goto B6e6b29;
case 0x6e6b2d:c.instructions+=2;goto B6e6b2d;
case 0x6e6b31:c.instructions+=1;goto B6e6b31;
case 0x6e6b35:goto L6e6b35;
case 0x6e6b39:c.instructions+=2;goto B6e6b39;
case 0x6e6b3a:c.instructions+=1;goto B6e6b3a;
case 0x6e6b3c:goto L6e6b3c;
case 0x6e6b40:c.instructions+=1;goto B6e6b40;
case 0x6e6b44:goto L6e6b44;
case 0x6e6b47:c.instructions+=7;goto B6e6b47;
case 0x6e6b4a:c.instructions+=6;goto B6e6b4a;
case 0x6e6b4e:c.instructions+=5;goto B6e6b4e;
case 0x6e6b50:c.instructions+=4;goto B6e6b50;
case 0x6e6b51:c.instructions+=3;goto B6e6b51;
case 0x6e6b52:c.instructions+=2;goto B6e6b52;
case 0x6e6b53:c.instructions+=1;goto B6e6b53;
case 0x6e6b56:goto L6e6b56;
case 0x6e6b58:c.instructions+=1;goto B6e6b58;
case 0x6e6b5a:goto L6e6b5a;
case 0x6e6b5b:c.instructions+=1;goto B6e6b5b;
case 0x6e6b5d:goto L6e6b5d;
case 0x6e6b5e:c.instructions+=6;goto B6e6b5e;
case 0x6e6b5f:c.instructions+=5;goto B6e6b5f;
case 0x6e6b60:c.instructions+=4;goto B6e6b60;
case 0x6e6b62:c.instructions+=3;goto B6e6b62;
case 0x6e6b63:c.instructions+=2;goto B6e6b63;
case 0x6e6b64:c.instructions+=1;goto B6e6b64;
case 0x6e6b67:goto L6e6b67;
case 0x6e6b6a:c.instructions+=2;goto B6e6b6a;
case 0x6e6b6c:c.instructions+=1;goto B6e6b6c;
case 0x6e6b6e:goto L6e6b6e;
case 0x6e6b72:c.instructions+=4;goto B6e6b72;
case 0x6e6b76:c.instructions+=3;goto B6e6b76;
case 0x6e6b7a:c.instructions+=2;goto B6e6b7a;
case 0x6e6b7c:c.instructions+=1;goto B6e6b7c;
case 0x6e6b7e:goto L6e6b7e;
case 0x6e6b7f:c.instructions+=6;goto B6e6b7f;
case 0x6e6b80:c.instructions+=5;goto B6e6b80;
case 0x6e6b81:c.instructions+=4;goto B6e6b81;
case 0x6e6b83:c.instructions+=3;goto B6e6b83;
case 0x6e6b84:c.instructions+=2;goto B6e6b84;
case 0x6e6b85:c.instructions+=1;goto B6e6b85;
case 0x6e6b90:goto L6e6b90;
case 0x6e6b91:c.instructions+=9;goto B6e6b91;
case 0x6e6b92:c.instructions+=8;goto B6e6b92;
case 0x6e6b93:c.instructions+=7;goto B6e6b93;
case 0x6e6b94:c.instructions+=6;goto B6e6b94;
case 0x6e6b96:c.instructions+=5;goto B6e6b96;
case 0x6e6b99:c.instructions+=4;goto B6e6b99;
case 0x6e6b9c:c.instructions+=3;goto B6e6b9c;
case 0x6e6b9e:c.instructions+=2;goto B6e6b9e;
case 0x6e6ba0:c.instructions+=1;goto B6e6ba0;
case 0x6e6ba2:goto L6e6ba2;
case 0x6e6ba6:c.instructions+=4;goto B6e6ba6;
case 0x6e6baa:c.instructions+=3;goto B6e6baa;
case 0x6e6bae:c.instructions+=2;goto B6e6bae;
case 0x6e6bb2:c.instructions+=1;goto B6e6bb2;
case 0x6e6bb6:goto L6e6bb6;
case 0x6e6bba:c.instructions+=2;goto B6e6bba;
case 0x6e6bbb:c.instructions+=1;goto B6e6bbb;
case 0x6e6bbd:goto L6e6bbd;
case 0x6e6bbe:c.instructions+=1;goto B6e6bbe;
case 0x6e6bc2:goto L6e6bc2;
case 0x6e6bc5:c.instructions+=6;goto B6e6bc5;
case 0x6e6bc8:c.instructions+=5;goto B6e6bc8;
case 0x6e6bcc:c.instructions+=4;goto B6e6bcc;
case 0x6e6bce:c.instructions+=3;goto B6e6bce;
case 0x6e6bcf:c.instructions+=2;goto B6e6bcf;
case 0x6e6bd0:c.instructions+=1;goto B6e6bd0;
case 0x6e6bd3:goto L6e6bd3;
case 0x6e6bd5:c.instructions+=2;goto B6e6bd5;
case 0x6e6bd6:c.instructions+=1;goto B6e6bd6;
case 0x6e6bd8:goto L6e6bd8;
case 0x6e6bd9:goto L6e6bd9;
case 0x6e6bda:c.instructions+=5;goto B6e6bda;
case 0x6e6bdb:c.instructions+=4;goto B6e6bdb;
case 0x6e6bdd:c.instructions+=3;goto B6e6bdd;
case 0x6e6bde:c.instructions+=2;goto B6e6bde;
case 0x6e6bdf:c.instructions+=1;goto B6e6bdf;
case 0x6e6bf0:goto L6e6bf0;
case 0x6e6bf4:c.instructions+=3;goto B6e6bf4;
case 0x6e6bf8:c.instructions+=2;goto B6e6bf8;
case 0x6e6bf9:c.instructions+=1;goto B6e6bf9;
case 0x6e6bfb:goto L6e6bfb;
case 0x6e6bfc:c.instructions+=3;goto B6e6bfc;
case 0x6e6bfd:c.instructions+=2;goto B6e6bfd;
case 0x6e6c01:c.instructions+=1;goto B6e6c01;
case 0x6e6c04:goto L6e6c04;
case 0x6e6c0a:c.instructions+=4;goto B6e6c0a;
case 0x6e6c0c:c.instructions+=3;goto B6e6c0c;
case 0x6e6c0e:c.instructions+=2;goto B6e6c0e;
case 0x6e6c0f:c.instructions+=1;goto B6e6c0f;
case 0x6e6c12:goto L6e6c12;
case 0x6e6c15:c.instructions+=2;goto B6e6c15;
case 0x6e6c16:c.instructions+=1;goto B6e6c16;
case 0x6e6c18:goto L6e6c18;
case 0x6e6c19:c.instructions+=1;goto B6e6c19;
case 0x6e6c1a:goto L6e6c1a;
case 0x6e6c20:goto L6e6c20;
case 0x6e6c21:c.instructions+=6;goto B6e6c21;
case 0x6e6c22:c.instructions+=5;goto B6e6c22;
case 0x6e6c24:c.instructions+=4;goto B6e6c24;
case 0x6e6c27:c.instructions+=3;goto B6e6c27;
case 0x6e6c29:c.instructions+=2;goto B6e6c29;
case 0x6e6c2c:c.instructions+=1;goto B6e6c2c;
case 0x6e6c2e:goto L6e6c2e;
case 0x6e6c33:goto L6e6c33;
case 0x6e6c37:c.instructions+=2;goto B6e6c37;
case 0x6e6c38:c.instructions+=1;goto B6e6c38;
case 0x6e6c3a:goto L6e6c3a;
case 0x6e6c40:goto L6e6c40;
case 0x6e6c43:c.instructions+=3;goto B6e6c43;
case 0x6e6c46:c.instructions+=2;goto B6e6c46;
case 0x6e6c48:c.instructions+=1;goto B6e6c48;
case 0x6e6c4b:goto L6e6c4b;
case 0x6e6c4d:c.instructions+=1;goto B6e6c4d;
case 0x6e6c4f:goto L6e6c4f;
case 0x6e6c50:c.instructions+=1;goto B6e6c50;
case 0x6e6c52:goto L6e6c52;
case 0x6e6c54:goto L6e6c54;
case 0x6e6c55:c.instructions+=2;goto B6e6c55;
case 0x6e6c56:c.instructions+=1;goto B6e6c56;
case 0x6e6c60:goto L6e6c60;
case 0x6e6c64:c.instructions+=6;goto B6e6c64;
case 0x6e6c65:c.instructions+=5;goto B6e6c65;
case 0x6e6c67:c.instructions+=4;goto B6e6c67;
case 0x6e6c6a:c.instructions+=3;goto B6e6c6a;
case 0x6e6c6c:c.instructions+=2;goto B6e6c6c;
case 0x6e6c6f:c.instructions+=1;goto B6e6c6f;
case 0x6e6c71:goto L6e6c71;
case 0x6e6c73:c.instructions+=1;goto B6e6c73;
case 0x6e6c75:goto L6e6c75;
case 0x6e6c77:c.instructions+=2;goto B6e6c77;
case 0x6e6c79:c.instructions+=1;goto B6e6c79;
case 0x6e6c7c:goto L6e6c7c;
case 0x6e6c7e:c.instructions+=1;goto B6e6c7e;
case 0x6e6c80:goto L6e6c80;
case 0x6e6c84:c.instructions+=6;goto B6e6c84;
case 0x6e6c85:c.instructions+=5;goto B6e6c85;
case 0x6e6c86:c.instructions+=4;goto B6e6c86;
case 0x6e6c88:c.instructions+=3;goto B6e6c88;
case 0x6e6c8d:c.instructions+=2;goto B6e6c8d;
case 0x6e6c8f:c.instructions+=1;goto B6e6c8f;
case 0x6e6c94:goto L6e6c94;
case 0x6e6c96:c.instructions+=1;goto B6e6c96;
case 0x6e6c98:goto L6e6c98;
case 0x6e6c9c:c.instructions+=1;goto B6e6c9c;
case 0x6e6c9f:goto L6e6c9f;
case 0x6e6ca0:c.instructions+=1;goto B6e6ca0;
case 0x6e6cb0:goto L6e6cb0;
case 0x6e6cb1:c.instructions+=6;goto B6e6cb1;
case 0x6e6cb2:c.instructions+=5;goto B6e6cb2;
case 0x6e6cb6:c.instructions+=4;goto B6e6cb6;
case 0x6e6cb8:c.instructions+=3;goto B6e6cb8;
case 0x6e6cba:c.instructions+=2;goto B6e6cba;
case 0x6e6cbc:c.instructions+=1;goto B6e6cbc;
case 0x6e6cc1:goto L6e6cc1;
case 0x6e6cc5:c.instructions+=10;goto B6e6cc5;
case 0x6e6cc9:c.instructions+=9;goto B6e6cc9;
case 0x6e6cca:c.instructions+=8;goto B6e6cca;
case 0x6e6cce:c.instructions+=7;goto B6e6cce;
case 0x6e6ccf:c.instructions+=6;goto B6e6ccf;
case 0x6e6cd0:c.instructions+=5;goto B6e6cd0;
case 0x6e6cd6:c.instructions+=4;goto B6e6cd6;
case 0x6e6cd8:c.instructions+=3;goto B6e6cd8;
case 0x6e6cd9:c.instructions+=2;goto B6e6cd9;
case 0x6e6cdb:c.instructions+=1;goto B6e6cdb;
case 0x6e6cde:goto L6e6cde;
case 0x6e6cdf:c.instructions+=2;goto B6e6cdf;
case 0x6e6ce0:c.instructions+=1;goto B6e6ce0;
case 0x6e6cf0:goto L6e6cf0;
case 0x6e6cf1:c.instructions+=8;goto B6e6cf1;
case 0x6e6cf2:c.instructions+=7;goto B6e6cf2;
case 0x6e6cf3:c.instructions+=6;goto B6e6cf3;
case 0x6e6cf5:c.instructions+=5;goto B6e6cf5;
case 0x6e6cf8:c.instructions+=4;goto B6e6cf8;
case 0x6e6cfb:c.instructions+=3;goto B6e6cfb;
case 0x6e6cfd:c.instructions+=2;goto B6e6cfd;
case 0x6e6cff:c.instructions+=1;goto B6e6cff;
case 0x6e6d01:goto L6e6d01;
case 0x6e6d06:goto L6e6d06;
case 0x6e6d0a:c.instructions+=2;goto B6e6d0a;
case 0x6e6d0b:c.instructions+=1;goto B6e6d0b;
case 0x6e6d0d:goto L6e6d0d;
case 0x6e6d0e:c.instructions+=1;goto B6e6d0e;
case 0x6e6d12:goto L6e6d12;
case 0x6e6d15:c.instructions+=10;goto B6e6d15;
case 0x6e6d18:c.instructions+=9;goto B6e6d18;
case 0x6e6d1c:c.instructions+=8;goto B6e6d1c;
case 0x6e6d1e:c.instructions+=7;goto B6e6d1e;
case 0x6e6d1f:c.instructions+=6;goto B6e6d1f;
case 0x6e6d20:c.instructions+=5;goto B6e6d20;
case 0x6e6d24:c.instructions+=4;goto B6e6d24;
case 0x6e6d25:c.instructions+=3;goto B6e6d25;
case 0x6e6d29:c.instructions+=2;goto B6e6d29;
case 0x6e6d2a:c.instructions+=1;goto B6e6d2a;
case 0x6e6d2d:goto L6e6d2d;
case 0x6e6d2f:c.instructions+=2;goto B6e6d2f;
case 0x6e6d30:c.instructions+=1;goto B6e6d30;
case 0x6e6d32:goto L6e6d32;
case 0x6e6d33:goto L6e6d33;
case 0x6e6d34:c.instructions+=4;goto B6e6d34;
case 0x6e6d35:c.instructions+=3;goto B6e6d35;
case 0x6e6d37:c.instructions+=2;goto B6e6d37;
case 0x6e6d38:c.instructions+=1;goto B6e6d38;
case 0x6e6d40:goto L6e6d40;
case 0x6e6d41:c.instructions+=10;goto B6e6d41;
case 0x6e6d45:c.instructions+=9;goto B6e6d45;
case 0x6e6d46:c.instructions+=8;goto B6e6d46;
case 0x6e6d47:c.instructions+=7;goto B6e6d47;
case 0x6e6d4a:c.instructions+=6;goto B6e6d4a;
case 0x6e6d4d:c.instructions+=5;goto B6e6d4d;
case 0x6e6d4f:c.instructions+=4;goto B6e6d4f;
case 0x6e6d51:c.instructions+=3;goto B6e6d51;
case 0x6e6d53:c.instructions+=2;goto B6e6d53;
case 0x6e6d57:c.instructions+=1;goto B6e6d57;
case 0x6e6d5d:goto L6e6d5d;
case 0x6e6d5e:c.instructions+=3;goto B6e6d5e;
case 0x6e6d5f:c.instructions+=2;goto B6e6d5f;
case 0x6e6d63:c.instructions+=1;goto B6e6d63;
case 0x6e6d66:goto L6e6d66;
case 0x6e6d68:c.instructions+=11;goto B6e6d68;
case 0x6e6d6b:c.instructions+=10;goto B6e6d6b;
case 0x6e6d6f:c.instructions+=9;goto B6e6d6f;
case 0x6e6d72:c.instructions+=8;goto B6e6d72;
case 0x6e6d75:c.instructions+=7;goto B6e6d75;
case 0x6e6d77:c.instructions+=6;goto B6e6d77;
case 0x6e6d7b:c.instructions+=5;goto B6e6d7b;
case 0x6e6d80:c.instructions+=4;goto B6e6d80;
case 0x6e6d84:c.instructions+=3;goto B6e6d84;
case 0x6e6d87:c.instructions+=2;goto B6e6d87;
case 0x6e6d8a:c.instructions+=1;goto B6e6d8a;
case 0x6e6d8c:goto L6e6d8c;
case 0x6e6d93:goto L6e6d93;
case 0x6e6d95:c.instructions+=2;goto B6e6d95;
case 0x6e6d98:c.instructions+=1;goto B6e6d98;
case 0x6e6d9a:goto L6e6d9a;
case 0x6e6d9d:c.instructions+=2;goto B6e6d9d;
case 0x6e6da0:c.instructions+=1;goto B6e6da0;
case 0x6e6da2:goto L6e6da2;
case 0x6e6da5:c.instructions+=2;goto B6e6da5;
case 0x6e6da6:c.instructions+=1;goto B6e6da6;
case 0x6e6da8:goto L6e6da8;
case 0x6e6dab:c.instructions+=7;goto B6e6dab;
case 0x6e6dad:c.instructions+=6;goto B6e6dad;
case 0x6e6db0:c.instructions+=5;goto B6e6db0;
case 0x6e6db2:c.instructions+=4;goto B6e6db2;
case 0x6e6db4:c.instructions+=3;goto B6e6db4;
case 0x6e6db6:c.instructions+=2;goto B6e6db6;
case 0x6e6db9:c.instructions+=1;goto B6e6db9;
case 0x6e6dbb:goto L6e6dbb;
case 0x6e6dbe:c.instructions+=7;goto B6e6dbe;
case 0x6e6dc0:c.instructions+=6;goto B6e6dc0;
case 0x6e6dc3:c.instructions+=5;goto B6e6dc3;
case 0x6e6dc5:c.instructions+=4;goto B6e6dc5;
case 0x6e6dc7:c.instructions+=3;goto B6e6dc7;
case 0x6e6dc9:c.instructions+=2;goto B6e6dc9;
case 0x6e6dcc:c.instructions+=1;goto B6e6dcc;
case 0x6e6dce:goto L6e6dce;
case 0x6e6dd1:c.instructions+=6;goto B6e6dd1;
case 0x6e6dd3:c.instructions+=5;goto B6e6dd3;
case 0x6e6dd5:c.instructions+=4;goto B6e6dd5;
case 0x6e6dd7:c.instructions+=3;goto B6e6dd7;
case 0x6e6dd9:c.instructions+=2;goto B6e6dd9;
case 0x6e6ddb:c.instructions+=1;goto B6e6ddb;
case 0x6e6dde:goto L6e6dde;
case 0x6e6de1:c.instructions+=1;goto B6e6de1;
case 0x6e6de3:goto L6e6de3;
case 0x6e6de4:c.instructions+=1;goto B6e6de4;
case 0x6e6de6:goto L6e6de6;
case 0x6e6deb:c.instructions+=2;goto B6e6deb;
case 0x6e6dec:c.instructions+=1;goto B6e6dec;
case 0x6e6dee:goto L6e6dee;
case 0x6e6def:c.instructions+=1;goto B6e6def;
case 0x6e6df1:goto L6e6df1;
case 0x6e6df4:c.instructions+=1;goto B6e6df4;
case 0x6e6df6:goto L6e6df6;
case 0x6e6dfb:c.instructions+=2;goto B6e6dfb;
case 0x6e6dfe:c.instructions+=1;goto B6e6dfe;
case 0x6e6e00:goto L6e6e00;
case 0x6e6e05:c.instructions+=2;goto B6e6e05;
case 0x6e6e09:c.instructions+=1;goto B6e6e09;
case 0x6e6e0b:goto L6e6e0b;
case 0x6e6e10:c.instructions+=1;goto B6e6e10;
case 0x6e6e13:goto L6e6e13;
case 0x6e6e17:c.instructions+=4;goto B6e6e17;
case 0x6e6e1b:c.instructions+=3;goto B6e6e1b;
case 0x6e6e1e:c.instructions+=2;goto B6e6e1e;
case 0x6e6e22:c.instructions+=1;goto B6e6e22;
case 0x6e6e28:goto L6e6e28;
case 0x6e6e29:c.instructions+=1;goto B6e6e29;
case 0x6e6e2a:goto L6e6e2a;
case 0x6e6e2b:c.instructions+=3;goto B6e6e2b;
case 0x6e6e2c:c.instructions+=2;goto B6e6e2c;
case 0x6e6e2d:c.instructions+=1;goto B6e6e2d;
case 0x6e6e50:goto L6e6e50;
case 0x6e6e53:c.instructions+=14;goto B6e6e53;
case 0x6e6e54:c.instructions+=13;goto B6e6e54;
case 0x6e6e56:c.instructions+=12;goto B6e6e56;
case 0x6e6e57:c.instructions+=11;goto B6e6e57;
case 0x6e6e58:c.instructions+=10;goto B6e6e58;
case 0x6e6e5b:c.instructions+=9;goto B6e6e5b;
case 0x6e6e5e:c.instructions+=8;goto B6e6e5e;
case 0x6e6e60:c.instructions+=7;goto B6e6e60;
case 0x6e6e63:c.instructions+=6;goto B6e6e63;
case 0x6e6e66:c.instructions+=5;goto B6e6e66;
case 0x6e6e67:c.instructions+=4;goto B6e6e67;
case 0x6e6e6b:c.instructions+=3;goto B6e6e6b;
case 0x6e6e6f:c.instructions+=2;goto B6e6e6f;
case 0x6e6e73:c.instructions+=1;goto B6e6e73;
case 0x6e6e75:goto L6e6e75;
case 0x6e6e79:goto L6e6e79;
case 0x6e6e7d:c.instructions+=8;goto B6e6e7d;
case 0x6e6e81:c.instructions+=7;goto B6e6e81;
case 0x6e6e84:c.instructions+=6;goto B6e6e84;
case 0x6e6e86:c.instructions+=5;goto B6e6e86;
case 0x6e6e89:c.instructions+=4;goto B6e6e89;
case 0x6e6e8c:c.instructions+=3;goto B6e6e8c;
case 0x6e6e8e:c.instructions+=2;goto B6e6e8e;
case 0x6e6e91:c.instructions+=1;goto B6e6e91;
case 0x6e6e97:goto L6e6e97;
case 0x6e6e9b:c.instructions+=2;goto B6e6e9b;
case 0x6e6e9d:c.instructions+=1;goto B6e6e9d;
case 0x6e6e9f:goto L6e6e9f;
case 0x6e6ea1:c.instructions+=1;goto B6e6ea1;
case 0x6e6ea4:goto L6e6ea4;
case 0x6e6ea8:c.instructions+=3;goto B6e6ea8;
case 0x6e6eaa:c.instructions+=2;goto B6e6eaa;
case 0x6e6eae:c.instructions+=1;goto B6e6eae;
case 0x6e6eb0:goto L6e6eb0;
case 0x6e6eb4:goto L6e6eb4;
case 0x6e6eb8:c.instructions+=5;goto B6e6eb8;
case 0x6e6ebb:c.instructions+=4;goto B6e6ebb;
case 0x6e6ebe:c.instructions+=3;goto B6e6ebe;
case 0x6e6ec0:c.instructions+=2;goto B6e6ec0;
case 0x6e6ec3:c.instructions+=1;goto B6e6ec3;
case 0x6e6ec5:goto L6e6ec5;
case 0x6e6ec9:c.instructions+=4;goto B6e6ec9;
case 0x6e6eca:c.instructions+=3;goto B6e6eca;
case 0x6e6ecc:c.instructions+=2;goto B6e6ecc;
case 0x6e6ece:c.instructions+=1;goto B6e6ece;
case 0x6e6ed0:goto L6e6ed0;
case 0x6e6ed4:goto L6e6ed4;
case 0x6e6ed8:c.instructions+=2;goto B6e6ed8;
case 0x6e6eda:c.instructions+=1;goto B6e6eda;
case 0x6e6edc:goto L6e6edc;
case 0x6e6ee0:c.instructions+=1;goto B6e6ee0;
case 0x6e6ee2:goto L6e6ee2;
case 0x6e6ee6:c.instructions+=6;goto B6e6ee6;
case 0x6e6eea:c.instructions+=5;goto B6e6eea;
case 0x6e6eeb:c.instructions+=4;goto B6e6eeb;
case 0x6e6eee:c.instructions+=3;goto B6e6eee;
case 0x6e6eef:c.instructions+=2;goto B6e6eef;
case 0x6e6ef1:c.instructions+=1;goto B6e6ef1;
case 0x6e6ef6:goto L6e6ef6;
case 0x6e6ef9:c.instructions+=7;goto B6e6ef9;
case 0x6e6efa:c.instructions+=6;goto B6e6efa;
case 0x6e6efb:c.instructions+=5;goto B6e6efb;
case 0x6e6efc:c.instructions+=4;goto B6e6efc;
case 0x6e6efe:c.instructions+=3;goto B6e6efe;
case 0x6e6eff:c.instructions+=2;goto B6e6eff;
case 0x6e6f02:c.instructions+=1;goto B6e6f02;
case 0x6e6f05:goto L6e6f05;
case 0x6e6f09:goto L6e6f09;
case 0x6e6f0d:c.instructions+=8;goto B6e6f0d;
case 0x6e6f0e:c.instructions+=7;goto B6e6f0e;
case 0x6e6f12:c.instructions+=6;goto B6e6f12;
case 0x6e6f13:c.instructions+=5;goto B6e6f13;
case 0x6e6f16:c.instructions+=4;goto B6e6f16;
case 0x6e6f1a:c.instructions+=3;goto B6e6f1a;
case 0x6e6f1b:c.instructions+=2;goto B6e6f1b;
case 0x6e6f1d:c.instructions+=1;goto B6e6f1d;
case 0x6e6f22:goto L6e6f22;
case 0x6e6f26:c.instructions+=9;goto B6e6f26;
case 0x6e6f27:c.instructions+=8;goto B6e6f27;
case 0x6e6f28:c.instructions+=7;goto B6e6f28;
case 0x6e6f29:c.instructions+=6;goto B6e6f29;
case 0x6e6f2a:c.instructions+=5;goto B6e6f2a;
case 0x6e6f2d:c.instructions+=4;goto B6e6f2d;
case 0x6e6f2f:c.instructions+=3;goto B6e6f2f;
case 0x6e6f30:c.instructions+=2;goto B6e6f30;
case 0x6e6f33:c.instructions+=1;goto B6e6f33;
case 0x6e6f36:goto L6e6f36;
case 0x6e6f37:c.instructions+=2;goto B6e6f37;
case 0x6e6f39:c.instructions+=1;goto B6e6f39;
case 0x6e6f3b:goto L6e6f3b;
case 0x6e6f3d:c.instructions+=3;goto B6e6f3d;
case 0x6e6f40:c.instructions+=2;goto B6e6f40;
case 0x6e6f42:c.instructions+=1;goto B6e6f42;
case 0x6e6f46:goto L6e6f46;
case 0x6e6f4a:c.instructions+=3;goto B6e6f4a;
case 0x6e6f4c:c.instructions+=2;goto B6e6f4c;
case 0x6e6f50:c.instructions+=1;goto B6e6f50;
case 0x6e6f52:goto L6e6f52;
case 0x6e6f56:goto L6e6f56;
case 0x6e6f5a:c.instructions+=6;goto B6e6f5a;
case 0x6e6f5d:c.instructions+=5;goto B6e6f5d;
case 0x6e6f61:c.instructions+=4;goto B6e6f61;
case 0x6e6f65:c.instructions+=3;goto B6e6f65;
case 0x6e6f67:c.instructions+=2;goto B6e6f67;
case 0x6e6f6a:c.instructions+=1;goto B6e6f6a;
case 0x6e6f6c:goto L6e6f6c;
case 0x6e6f70:c.instructions+=4;goto B6e6f70;
case 0x6e6f71:c.instructions+=3;goto B6e6f71;
case 0x6e6f73:c.instructions+=2;goto B6e6f73;
case 0x6e6f75:c.instructions+=1;goto B6e6f75;
case 0x6e6f77:goto L6e6f77;
case 0x6e6f7b:c.instructions+=2;goto B6e6f7b;
case 0x6e6f7d:c.instructions+=1;goto B6e6f7d;
case 0x6e6f7f:goto L6e6f7f;
case 0x6e6f83:c.instructions+=1;goto B6e6f83;
case 0x6e6f85:goto L6e6f85;
case 0x6e6f89:c.instructions+=5;goto B6e6f89;
case 0x6e6f8c:c.instructions+=4;goto B6e6f8c;
case 0x6e6f8d:c.instructions+=3;goto B6e6f8d;
case 0x6e6f8e:c.instructions+=2;goto B6e6f8e;
case 0x6e6f90:c.instructions+=1;goto B6e6f90;
case 0x6e6f95:goto L6e6f95;
case 0x6e6f98:c.instructions+=7;goto B6e6f98;
case 0x6e6f99:c.instructions+=6;goto B6e6f99;
case 0x6e6f9a:c.instructions+=5;goto B6e6f9a;
case 0x6e6f9b:c.instructions+=4;goto B6e6f9b;
case 0x6e6f9d:c.instructions+=3;goto B6e6f9d;
case 0x6e6f9e:c.instructions+=2;goto B6e6f9e;
case 0x6e6fa1:c.instructions+=1;goto B6e6fa1;
case 0x6e6fa4:goto L6e6fa4;
case 0x6e6fa8:goto L6e6fa8;
case 0x6e6fac:c.instructions+=5;goto B6e6fac;
case 0x6e6fad:c.instructions+=4;goto B6e6fad;
case 0x6e6fb0:c.instructions+=3;goto B6e6fb0;
case 0x6e6fb1:c.instructions+=2;goto B6e6fb1;
case 0x6e6fb3:c.instructions+=1;goto B6e6fb3;
case 0x6e6fb8:goto L6e6fb8;
case 0x6e6fb9:c.instructions+=7;goto B6e6fb9;
case 0x6e6fba:c.instructions+=6;goto B6e6fba;
case 0x6e6fbb:c.instructions+=5;goto B6e6fbb;
case 0x6e6fc2:c.instructions+=4;goto B6e6fc2;
case 0x6e6fc4:c.instructions+=3;goto B6e6fc4;
case 0x6e6fc5:c.instructions+=2;goto B6e6fc5;
case 0x6e6fc8:c.instructions+=1;goto B6e6fc8;
case 0x6e6fd0:goto L6e6fd0;
case 0x6e6fd3:c.instructions+=9;goto B6e6fd3;
case 0x6e6fd4:c.instructions+=8;goto B6e6fd4;
case 0x6e6fd5:c.instructions+=7;goto B6e6fd5;
case 0x6e6fd6:c.instructions+=6;goto B6e6fd6;
case 0x6e6fd8:c.instructions+=5;goto B6e6fd8;
case 0x6e6fdb:c.instructions+=4;goto B6e6fdb;
case 0x6e6fdc:c.instructions+=3;goto B6e6fdc;
case 0x6e6fde:c.instructions+=2;goto B6e6fde;
case 0x6e6fe2:c.instructions+=1;goto B6e6fe2;
case 0x6e6fe4:goto L6e6fe4;
case 0x6e6fe8:c.instructions+=3;goto B6e6fe8;
case 0x6e6feb:c.instructions+=2;goto B6e6feb;
case 0x6e6fed:c.instructions+=1;goto B6e6fed;
case 0x6e6fef:goto L6e6fef;
case 0x6e6ff2:c.instructions+=2;goto B6e6ff2;
case 0x6e6ff6:c.instructions+=1;goto B6e6ff6;
case 0x6e6ff8:goto L6e6ff8;
case 0x6e6ffb:c.instructions+=1;goto B6e6ffb;
case 0x6e6fff:goto L6e6fff;
default:missing_instruction(c.pc);}
B6e6001:L6e6001:{c.instructions+=6;NFSU2_TR(0x6e6001);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6e6004:{NFSU2_TR(0x6e6004);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
}
B6e6005:{NFSU2_TR(0x6e6005);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x30ull))));
}
B6e6008:{NFSU2_TR(0x6e6008);
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
B6e600a:{NFSU2_TR(0x6e600a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e600e:{NFSU2_TR(0x6e600e);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6e5f00u,6e5);}
}
B6e6014:L6e6014:{c.instructions+=7;NFSU2_TR(0x6e6014);
w1(R+0,u8(0x1ull));
}
B6e6016:{NFSU2_TR(0x6e6016);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e6017:{NFSU2_TR(0x6e6017);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e6018:{NFSU2_TR(0x6e6018);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e6019:{NFSU2_TR(0x6e6019);
__builtin_memmove((R+16),(R+20),4);
}
B6e601b:{NFSU2_TR(0x6e601b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e601c:{NFSU2_TR(0x6e601c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e601f:L6e601f:{c.instructions+=4;NFSU2_TR(0x6e601f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e6022:{NFSU2_TR(0x6e6022);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e6025:{NFSU2_TR(0x6e6025);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
}
B6e6026:{NFSU2_TR(0x6e6026);
if(r1(R+519)){{goto L6e6072;}}
}
B6e6028:L6e6028:{c.instructions+=3;NFSU2_TR(0x6e6028);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B6e602b:{NFSU2_TR(0x6e602b);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B6e602e:{NFSU2_TR(0x6e602e);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
}
B6e6031:L6e6031:{c.instructions+=9;NFSU2_TR(0x6e6031);
__builtin_memmove((R+4),(R+28),4);
}
B6e6033:{NFSU2_TR(0x6e6033);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B6e6036:{NFSU2_TR(0x6e6036);
w4(R+8,u32(0x1ull));
}
B6e603b:{NFSU2_TR(0x6e603b);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B6e603d:{NFSU2_TR(0x6e603d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e6040:{NFSU2_TR(0x6e6040);
__builtin_memmove((R+0),(R+28),4);
}
B6e6042:{NFSU2_TR(0x6e6042);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B6e6045:{NFSU2_TR(0x6e6045);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6e6048:{NFSU2_TR(0x6e6048);
if(r1(R+518)){{goto L6e606a;}}
}
B6e604a:L6e604a:{c.instructions+=12;NFSU2_TR(0x6e604a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e604d:{NFSU2_TR(0x6e604d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e6050:{NFSU2_TR(0x6e6050);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6e6053:{NFSU2_TR(0x6e6053);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e6056:{NFSU2_TR(0x6e6056);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6057:{NFSU2_TR(0x6e6057);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e605b:{NFSU2_TR(0x6e605b);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+12))));
}
B6e605d:{NFSU2_TR(0x6e605d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e605e:{NFSU2_TR(0x6e605e);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+12))));
}
B6e6060:{NFSU2_TR(0x6e6060);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6061:{NFSU2_TR(0x6e6061);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6062:{NFSU2_TR(0x6e6062);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e6067ull));
TAIL_STATIC(0x6e4450u,6e4);
}
B6e6067:L6e6067:{c.instructions+=1;NFSU2_TR(0x6e6067);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6e606a:L6e606a:{c.instructions+=4;NFSU2_TR(0x6e606a);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B6e606b:{NFSU2_TR(0x6e606b);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x30ull))));
}
B6e606e:{NFSU2_TR(0x6e606e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6e6070:{NFSU2_TR(0x6e6070);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e6031u);}goto L6e6031;}}
}
B6e6072:L6e6072:{c.instructions+=3;NFSU2_TR(0x6e6072);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e6075:{NFSU2_TR(0x6e6075);
u8 U[5];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w1(U+4,u8(u32(r1(U+0))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+1,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r1(U+1)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B6e6078:{NFSU2_TR(0x6e6078);
if(r1(R+518)){{goto L6e609c;}}
}
B6e607a:L6e607a:{c.instructions+=12;NFSU2_TR(0x6e607a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e607d:{NFSU2_TR(0x6e607d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e6080:{NFSU2_TR(0x6e6080);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e6083:{NFSU2_TR(0x6e6083);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x20ull))));
}
B6e6086:{NFSU2_TR(0x6e6086);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6087:{NFSU2_TR(0x6e6087);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e608b:{NFSU2_TR(0x6e608b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
}
B6e608e:{NFSU2_TR(0x6e608e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e608f:{NFSU2_TR(0x6e608f);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x20ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x20ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6e6092:{NFSU2_TR(0x6e6092);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6093:{NFSU2_TR(0x6e6093);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6094:{NFSU2_TR(0x6e6094);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e6099ull));
TAIL_STATIC(0x6e5a20u,6e5);
}
B6e6099:L6e6099:{c.instructions+=1;NFSU2_TR(0x6e6099);
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
B6e609c:L6e609c:{c.instructions+=7;NFSU2_TR(0x6e609c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e609d:{NFSU2_TR(0x6e609d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e609e:{NFSU2_TR(0x6e609e);
w1(R+0,u8(0x1ull));
}
B6e60a0:{NFSU2_TR(0x6e60a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e60a1:{NFSU2_TR(0x6e60a1);
__builtin_memmove((R+16),(R+20),4);
}
B6e60a3:{NFSU2_TR(0x6e60a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e60a4:{NFSU2_TR(0x6e60a4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e60b0:L6e60b0:{c.instructions+=14;NFSU2_TR(0x6e60b0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e60b1:{NFSU2_TR(0x6e60b1);
__builtin_memmove((R+20),(R+16),4);
}
B6e60b3:{NFSU2_TR(0x6e60b3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B6e60b6:{NFSU2_TR(0x6e60b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x74ull))));
}
B6e60b9:{NFSU2_TR(0x6e60b9);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e60bc:{NFSU2_TR(0x6e60bc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e60bd:{NFSU2_TR(0x6e60bd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e60be:{NFSU2_TR(0x6e60be);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e60bf:{NFSU2_TR(0x6e60bf);
__builtin_memmove((R+28),(R+4),4);
}
B6e60c1:{NFSU2_TR(0x6e60c1);
{u32 ea_=u32(r4(R+28)+u32(112u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e60c4:{NFSU2_TR(0x6e60c4);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e60c7:{NFSU2_TR(0x6e60c7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e60c9:{NFSU2_TR(0x6e60c9);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6e60cc:{NFSU2_TR(0x6e60cc);
if(r1(R+514)){{goto L6e60f6;}}
}
B6e60ce:L6e60ce:{c.instructions+=11;NFSU2_TR(0x6e60ce);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e60d1:{NFSU2_TR(0x6e60d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e60d4:{NFSU2_TR(0x6e60d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e60d7:{NFSU2_TR(0x6e60d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6e60d9:{NFSU2_TR(0x6e60d9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e60da:{NFSU2_TR(0x6e60da);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x8ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x8ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6e60dd:{NFSU2_TR(0x6e60dd);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e60e1:{NFSU2_TR(0x6e60e1);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e60e4:{NFSU2_TR(0x6e60e4);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e60e7:{NFSU2_TR(0x6e60e7);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e60ea:{NFSU2_TR(0x6e60ea);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e60edull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e60ed:L6e60ed:{c.instructions+=6;NFSU2_TR(0x6e60ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e60ee:{NFSU2_TR(0x6e60ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e60ef:{NFSU2_TR(0x6e60ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e60f0:{NFSU2_TR(0x6e60f0);
__builtin_memmove((R+16),(R+20),4);
}
B6e60f2:{NFSU2_TR(0x6e60f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e60f3:{NFSU2_TR(0x6e60f3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e60f6:L6e60f6:{c.instructions+=5;NFSU2_TR(0x6e60f6);
{u32 ea_=u32(r4(R+28)+u32(120u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e60f9:{NFSU2_TR(0x6e60f9);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e60fc:{NFSU2_TR(0x6e60fc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e60fe:{NFSU2_TR(0x6e60fe);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6e6101:{NFSU2_TR(0x6e6101);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e61c6;}}
}
B6e6107:L6e6107:{c.instructions+=11;NFSU2_TR(0x6e6107);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e610a:{NFSU2_TR(0x6e610a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e610d:{NFSU2_TR(0x6e610d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e6110:{NFSU2_TR(0x6e6110);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6e6112:{NFSU2_TR(0x6e6112);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6113:{NFSU2_TR(0x6e6113);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x8ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x8ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6e6116:{NFSU2_TR(0x6e6116);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e611a:{NFSU2_TR(0x6e611a);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e611d:{NFSU2_TR(0x6e611d);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e6120:{NFSU2_TR(0x6e6120);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e6123:{NFSU2_TR(0x6e6123);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e6126ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e6126:L6e6126:{c.instructions+=3;NFSU2_TR(0x6e6126);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e6129:{NFSU2_TR(0x6e6129);
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
B6e612b:{NFSU2_TR(0x6e612b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6e6417;}}
}
B6e6131:L6e6131:{c.instructions+=25;NFSU2_TR(0x6e6131);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6e6134:{NFSU2_TR(0x6e6134);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B6e6137:{NFSU2_TR(0x6e6137);
u8 U[16];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6e613b:{NFSU2_TR(0x6e613b);
u8 U[16];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B6e613f:{NFSU2_TR(0x6e613f);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6e6143:{NFSU2_TR(0x6e6143);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+12))));
}
B6e6145:{NFSU2_TR(0x6e6145);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6146:{NFSU2_TR(0x6e6146);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e6149:{NFSU2_TR(0x6e6149);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e614a:{NFSU2_TR(0x6e614a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e614d:{NFSU2_TR(0x6e614d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e614e:{NFSU2_TR(0x6e614e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e6151:{NFSU2_TR(0x6e6151);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6152:{NFSU2_TR(0x6e6152);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e6155:{NFSU2_TR(0x6e6155);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6156:{NFSU2_TR(0x6e6156);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e6159:{NFSU2_TR(0x6e6159);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e615a:{NFSU2_TR(0x6e615a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e615d:{NFSU2_TR(0x6e615d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e615e:{NFSU2_TR(0x6e615e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6e6160:{NFSU2_TR(0x6e6160);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6161:{NFSU2_TR(0x6e6161);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6162:{NFSU2_TR(0x6e6162);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6163:{NFSU2_TR(0x6e6163);
u8 U[4];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6e6167:{NFSU2_TR(0x6e6167);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e616cull));
TAIL_STATIC(0x6e2d60u,6e2);
}
B6e616c:L6e616c:{c.instructions+=4;NFSU2_TR(0x6e616c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x30ull))));
}
B6e616f:{NFSU2_TR(0x6e616f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6170:{NFSU2_TR(0x6e6170);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6e6174:{NFSU2_TR(0x6e6174);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e6179ull));
TAIL_STATIC(0x6db7f0u,6db);
}
B6e6179:L6e6179:{c.instructions+=6;NFSU2_TR(0x6e6179);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6e617d:{NFSU2_TR(0x6e617d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e617e:{NFSU2_TR(0x6e617e);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6e6182:{NFSU2_TR(0x6e6182);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6183:{NFSU2_TR(0x6e6183);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6e6187:{NFSU2_TR(0x6e6187);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e618cull));
TAIL_STATIC(0x6db9c0u,6db);
}
B6e618c:L6e618c:{c.instructions+=20;NFSU2_TR(0x6e618c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e6190:{NFSU2_TR(0x6e6190);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e6193:{NFSU2_TR(0x6e6193);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e6197:{NFSU2_TR(0x6e6197);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e619a:{NFSU2_TR(0x6e619a);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e619e:{NFSU2_TR(0x6e619e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e61a1:{NFSU2_TR(0x6e61a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e61a5:{NFSU2_TR(0x6e61a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e61a8:{NFSU2_TR(0x6e61a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e61ac:{NFSU2_TR(0x6e61ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e61af:{NFSU2_TR(0x6e61af);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e61b3:{NFSU2_TR(0x6e61b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e61b6:{NFSU2_TR(0x6e61b6);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e61ba:{NFSU2_TR(0x6e61ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e61bd:{NFSU2_TR(0x6e61bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e61be:{NFSU2_TR(0x6e61be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e61bf:{NFSU2_TR(0x6e61bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e61c0:{NFSU2_TR(0x6e61c0);
__builtin_memmove((R+16),(R+20),4);
}
B6e61c2:{NFSU2_TR(0x6e61c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e61c3:{NFSU2_TR(0x6e61c3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e61c6:L6e61c6:{c.instructions+=6;NFSU2_TR(0x6e61c6);
{u32 ea_=u32(r4(R+28)+u32(112u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e61c9:{NFSU2_TR(0x6e61c9);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6e61cc:{NFSU2_TR(0x6e61cc);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6e61ce:{NFSU2_TR(0x6e61ce);
{u32 ea_=u32(r4(R+28)+u32(116u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B6e61d1:{NFSU2_TR(0x6e61d1);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e61d5:{NFSU2_TR(0x6e61d5);
if(r1(R+518)){{goto L6e61e5;}}
}
B6e61d7:L6e61d7:{c.instructions+=5;NFSU2_TR(0x6e61d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e61da:{NFSU2_TR(0x6e61da);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e61dd:{NFSU2_TR(0x6e61dd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e61df:{NFSU2_TR(0x6e61df);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e61e0:{NFSU2_TR(0x6e61e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e61e5ull));
TAIL_STATIC(0x6e3c70u,6e3);
}
B6e61e5:L6e61e5:{c.instructions+=3;NFSU2_TR(0x6e61e5);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6e61e8:{NFSU2_TR(0x6e61e8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6e61ea:{NFSU2_TR(0x6e61ea);
if(r1(R+518)){{goto L6e61fa;}}
}
B6e61ec:L6e61ec:{c.instructions+=5;NFSU2_TR(0x6e61ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e61ef:{NFSU2_TR(0x6e61ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e61f2:{NFSU2_TR(0x6e61f2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e61f4:{NFSU2_TR(0x6e61f4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e61f5:{NFSU2_TR(0x6e61f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e61faull));
TAIL_STATIC(0x6e3c70u,6e3);
}
B6e61fa:L6e61fa:{c.instructions+=12;NFSU2_TR(0x6e61fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e61fd:{NFSU2_TR(0x6e61fd);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e6200:{NFSU2_TR(0x6e6200);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e6203:{NFSU2_TR(0x6e6203);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e6206:{NFSU2_TR(0x6e6206);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e6208:{NFSU2_TR(0x6e6208);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6209:{NFSU2_TR(0x6e6209);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x8ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x8ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6e620c:{NFSU2_TR(0x6e620c);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e6210:{NFSU2_TR(0x6e6210);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e6213:{NFSU2_TR(0x6e6213);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e6216:{NFSU2_TR(0x6e6216);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e6219:{NFSU2_TR(0x6e6219);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e621cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e621c:L6e621c:{c.instructions+=12;NFSU2_TR(0x6e621c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e621f:{NFSU2_TR(0x6e621f);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e6222:{NFSU2_TR(0x6e6222);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e6225:{NFSU2_TR(0x6e6225);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e6228:{NFSU2_TR(0x6e6228);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e622a:{NFSU2_TR(0x6e622a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e622b:{NFSU2_TR(0x6e622b);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x8ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x8ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6e622e:{NFSU2_TR(0x6e622e);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e6232:{NFSU2_TR(0x6e6232);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e6235:{NFSU2_TR(0x6e6235);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e6238:{NFSU2_TR(0x6e6238);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e623b:{NFSU2_TR(0x6e623b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e623eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e623e:L6e623e:{c.instructions+=3;NFSU2_TR(0x6e623e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e6241:{NFSU2_TR(0x6e6241);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6e6243:{NFSU2_TR(0x6e6243);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6e6390;}}
}
B6e6249:L6e6249:{c.instructions+=5;NFSU2_TR(0x6e6249);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e624c:{NFSU2_TR(0x6e624c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e624f:{NFSU2_TR(0x6e624f);
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
B6e6250:{NFSU2_TR(0x6e6250);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e6254:{NFSU2_TR(0x6e6254);
if(r1(R+519)){{goto L6e6417;}}
}
B6e625a:L6e625a:{c.instructions+=6;NFSU2_TR(0x6e625a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e625d:{NFSU2_TR(0x6e625d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6e6260:{NFSU2_TR(0x6e6260);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B6e6263:{NFSU2_TR(0x6e6263);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B6e6266:{NFSU2_TR(0x6e6266);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e626a:{NFSU2_TR(0x6e626a);
{goto L6e6270;}
}
B6e626c:L6e626c:{c.instructions+=1;NFSU2_TR(0x6e626c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e6270:L6e6270:{c.instructions+=3;NFSU2_TR(0x6e6270);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e6273:{NFSU2_TR(0x6e6273);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6e6275:{NFSU2_TR(0x6e6275);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e6352;}}
}
B6e627b:L6e627b:{c.instructions+=26;NFSU2_TR(0x6e627b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e627e:{NFSU2_TR(0x6e627e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6e6281:{NFSU2_TR(0x6e6281);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B6e6284:{NFSU2_TR(0x6e6284);
u8 U[16];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B6e6288:{NFSU2_TR(0x6e6288);
u8 U[16];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6e628c:{NFSU2_TR(0x6e628c);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+4))));
}
B6e628e:{NFSU2_TR(0x6e628e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e6291:{NFSU2_TR(0x6e6291);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6292:{NFSU2_TR(0x6e6292);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e6295:{NFSU2_TR(0x6e6295);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6296:{NFSU2_TR(0x6e6296);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e6299:{NFSU2_TR(0x6e6299);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e629a:{NFSU2_TR(0x6e629a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e629d:{NFSU2_TR(0x6e629d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e629e:{NFSU2_TR(0x6e629e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e62a1:{NFSU2_TR(0x6e62a1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e62a2:{NFSU2_TR(0x6e62a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e62a5:{NFSU2_TR(0x6e62a5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e62a6:{NFSU2_TR(0x6e62a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e62a9:{NFSU2_TR(0x6e62a9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e62aa:{NFSU2_TR(0x6e62aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e62ac:{NFSU2_TR(0x6e62ac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e62ad:{NFSU2_TR(0x6e62ad);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e62ae:{NFSU2_TR(0x6e62ae);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e62af:{NFSU2_TR(0x6e62af);
u8 U[4];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6e62b3:{NFSU2_TR(0x6e62b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e62b8ull));
TAIL_STATIC(0x6e2d60u,6e2);
}
B6e62b8:L6e62b8:{c.instructions+=4;NFSU2_TR(0x6e62b8);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6e62bb:{NFSU2_TR(0x6e62bb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e62bc:{NFSU2_TR(0x6e62bc);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6e62c0:{NFSU2_TR(0x6e62c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e62c5ull));
TAIL_STATIC(0x6db7f0u,6db);
}
B6e62c5:L6e62c5:{c.instructions+=6;NFSU2_TR(0x6e62c5);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6e62c9:{NFSU2_TR(0x6e62c9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e62ca:{NFSU2_TR(0x6e62ca);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6e62ce:{NFSU2_TR(0x6e62ce);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e62cf:{NFSU2_TR(0x6e62cf);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6e62d3:{NFSU2_TR(0x6e62d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e62d8ull));
TAIL_STATIC(0x6db9c0u,6db);
}
B6e62d8:L6e62d8:{c.instructions+=36;NFSU2_TR(0x6e62d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e62dc:{NFSU2_TR(0x6e62dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e62df:{NFSU2_TR(0x6e62df);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e62e3:{NFSU2_TR(0x6e62e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e62e6:{NFSU2_TR(0x6e62e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e62ea:{NFSU2_TR(0x6e62ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e62ed:{NFSU2_TR(0x6e62ed);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e62f1:{NFSU2_TR(0x6e62f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e62f4:{NFSU2_TR(0x6e62f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e62f8:{NFSU2_TR(0x6e62f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e62fb:{NFSU2_TR(0x6e62fb);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e62ff:{NFSU2_TR(0x6e62ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e6302:{NFSU2_TR(0x6e6302);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e6306:{NFSU2_TR(0x6e6306);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e6309:{NFSU2_TR(0x6e6309);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e630c:{NFSU2_TR(0x6e630c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e630f:{NFSU2_TR(0x6e630f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e6312:{NFSU2_TR(0x6e6312);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x20ull))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6e6319:{NFSU2_TR(0x6e6319);
{u32 ea_=u32(r4(R+4)+r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e631c:{NFSU2_TR(0x6e631c);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B6e631e:{NFSU2_TR(0x6e631e);
{u32 ea_=u32(r4(R+4)+r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e6321:{NFSU2_TR(0x6e6321);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B6e6323:{NFSU2_TR(0x6e6323);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e6327:{NFSU2_TR(0x6e6327);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e632b:{NFSU2_TR(0x6e632b);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e632d:{NFSU2_TR(0x6e632d);
{u32 ea_=u32(r4(R+12)+r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e6330:{NFSU2_TR(0x6e6330);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e6333:{NFSU2_TR(0x6e6333);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e6336:{NFSU2_TR(0x6e6336);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e633a:{NFSU2_TR(0x6e633a);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e633d:{NFSU2_TR(0x6e633d);
{u32 ea_=u32(r4(R+12)+r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e6341:{NFSU2_TR(0x6e6341);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e6344:{NFSU2_TR(0x6e6344);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e6347:{NFSU2_TR(0x6e6347);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e634b:{NFSU2_TR(0x6e634b);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e634e:{NFSU2_TR(0x6e634e);
{u32 ea_=u32(r4(R+12)+r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e6352:L6e6352:{c.instructions+=11;NFSU2_TR(0x6e6352);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e6355:{NFSU2_TR(0x6e6355);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e6358:{NFSU2_TR(0x6e6358);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6e635b:{NFSU2_TR(0x6e635b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e635c:{NFSU2_TR(0x6e635c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e6360:{NFSU2_TR(0x6e6360);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B6e6362:{NFSU2_TR(0x6e6362);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6363:{NFSU2_TR(0x6e6363);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B6e6365:{NFSU2_TR(0x6e6365);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6366:{NFSU2_TR(0x6e6366);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6367:{NFSU2_TR(0x6e6367);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e636cull));
TAIL_STATIC(0x6e4450u,6e4);
}
B6e636c:L6e636c:{c.instructions+=8;NFSU2_TR(0x6e636c);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e6370:{NFSU2_TR(0x6e6370);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6e6373:{NFSU2_TR(0x6e6373);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B6e6374:{NFSU2_TR(0x6e6374);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x30ull))));
}
B6e6377:{NFSU2_TR(0x6e6377);
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
B6e6379:{NFSU2_TR(0x6e6379);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e637d:{NFSU2_TR(0x6e637d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e6381:{NFSU2_TR(0x6e6381);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e626cu);}goto L6e626c;}}
}
B6e6387:L6e6387:{c.instructions+=6;NFSU2_TR(0x6e6387);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e6388:{NFSU2_TR(0x6e6388);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e6389:{NFSU2_TR(0x6e6389);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e638a:{NFSU2_TR(0x6e638a);
__builtin_memmove((R+16),(R+20),4);
}
B6e638c:{NFSU2_TR(0x6e638c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e638d:{NFSU2_TR(0x6e638d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e6390:L6e6390:{c.instructions+=7;NFSU2_TR(0x6e6390);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e6393:{NFSU2_TR(0x6e6393);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e6396:{NFSU2_TR(0x6e6396);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e6399:{NFSU2_TR(0x6e6399);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6e639c:{NFSU2_TR(0x6e639c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0xfffffff8ull))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6e63a3:{NFSU2_TR(0x6e63a3);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e63a6:{NFSU2_TR(0x6e63a6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6e63dc;}}
}
B6e63a8:L6e63a8:{c.instructions+=1;NFSU2_TR(0x6e63a8);
{goto L6e63b0;}
}
B6e63b0:L6e63b0:{c.instructions+=12;NFSU2_TR(0x6e63b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e63b3:{NFSU2_TR(0x6e63b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6e63ba:{NFSU2_TR(0x6e63ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6e63bd:{NFSU2_TR(0x6e63bd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e63be:{NFSU2_TR(0x6e63be);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e63c1:{NFSU2_TR(0x6e63c1);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B6e63c3:{NFSU2_TR(0x6e63c3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e63c4:{NFSU2_TR(0x6e63c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e63c8:{NFSU2_TR(0x6e63c8);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B6e63ca:{NFSU2_TR(0x6e63ca);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e63cb:{NFSU2_TR(0x6e63cb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e63cc:{NFSU2_TR(0x6e63cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e63d1ull));
TAIL_STATIC(0x6e4450u,6e4);
}
B6e63d1:L6e63d1:{c.instructions+=4;NFSU2_TR(0x6e63d1);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0xcull))));
}
B6e63d4:{NFSU2_TR(0x6e63d4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6e63d7:{NFSU2_TR(0x6e63d7);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e63da:{NFSU2_TR(0x6e63da);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e63b0u);}goto L6e63b0;}}
}
B6e63dc:L6e63dc:{c.instructions+=19;NFSU2_TR(0x6e63dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e63df:{NFSU2_TR(0x6e63df);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e63e2:{NFSU2_TR(0x6e63e2);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e63e5:{NFSU2_TR(0x6e63e5);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e63e8:{NFSU2_TR(0x6e63e8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
}
B6e63eb:{NFSU2_TR(0x6e63eb);
u8 U[6];
w1(R+512,carry<u32>(r4(R+28),u32(0x20ull)));
w1(R+523,scarry<u32>(r4(R+28),u32(0x20ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6e63ee:{NFSU2_TR(0x6e63ee);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e63f2:{NFSU2_TR(0x6e63f2);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e63f4:{NFSU2_TR(0x6e63f4);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e63f7:{NFSU2_TR(0x6e63f7);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e63fa:{NFSU2_TR(0x6e63fa);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e63fd:{NFSU2_TR(0x6e63fd);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e6401:{NFSU2_TR(0x6e6401);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e6404:{NFSU2_TR(0x6e6404);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e6407:{NFSU2_TR(0x6e6407);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e640a:{NFSU2_TR(0x6e640a);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e640d:{NFSU2_TR(0x6e640d);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e6411:{NFSU2_TR(0x6e6411);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e6414:{NFSU2_TR(0x6e6414);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e6417:L6e6417:{c.instructions+=6;NFSU2_TR(0x6e6417);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e6418:{NFSU2_TR(0x6e6418);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e6419:{NFSU2_TR(0x6e6419);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e641a:{NFSU2_TR(0x6e641a);
__builtin_memmove((R+16),(R+20),4);
}
B6e641c:{NFSU2_TR(0x6e641c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e641d:{NFSU2_TR(0x6e641d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e6420:L6e6420:{c.instructions+=8;NFSU2_TR(0x6e6420);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e6424:{NFSU2_TR(0x6e6424);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6425:{NFSU2_TR(0x6e6425);
__builtin_memmove((R+24),(R+4),4);
}
B6e6427:{NFSU2_TR(0x6e6427);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e642a:{NFSU2_TR(0x6e642a);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e642e:{NFSU2_TR(0x6e642e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e6430:{NFSU2_TR(0x6e6430);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6e6433:{NFSU2_TR(0x6e6433);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6e64bf;}}
}
B6e6439:L6e6439:{c.instructions+=5;NFSU2_TR(0x6e6439);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e643c:{NFSU2_TR(0x6e643c);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e6440:{NFSU2_TR(0x6e6440);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e6442:{NFSU2_TR(0x6e6442);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6e6445:{NFSU2_TR(0x6e6445);
if(r1(R+518)){{goto L6e649a;}}
}
B6e6447:L6e6447:{c.instructions+=3;NFSU2_TR(0x6e6447);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e644a:{NFSU2_TR(0x6e644a);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6e644d:{NFSU2_TR(0x6e644d);
if(r1(R+518)){{goto L6e64bf;}}
}
B6e644f:L6e644f:{c.instructions+=2;NFSU2_TR(0x6e644f);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6e6450:{NFSU2_TR(0x6e6450);
if(r1(R+518)){{goto L6e649a;}}
}
B6e6452:L6e6452:{c.instructions+=12;NFSU2_TR(0x6e6452);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e6455:{NFSU2_TR(0x6e6455);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e6458:{NFSU2_TR(0x6e6458);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6e645a:{NFSU2_TR(0x6e645a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e645b:{NFSU2_TR(0x6e645b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e645f:{NFSU2_TR(0x6e645f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6460:{NFSU2_TR(0x6e6460);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x8ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x8ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6e6463:{NFSU2_TR(0x6e6463);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e6467:{NFSU2_TR(0x6e6467);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e646b:{NFSU2_TR(0x6e646b);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e646e:{NFSU2_TR(0x6e646e);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e6471:{NFSU2_TR(0x6e6471);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e6474ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e6474:L6e6474:{c.instructions+=11;NFSU2_TR(0x6e6474);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e6478:{NFSU2_TR(0x6e6478);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e647b:{NFSU2_TR(0x6e647b);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e647e:{NFSU2_TR(0x6e647e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e6480:{NFSU2_TR(0x6e6480);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6481:{NFSU2_TR(0x6e6481);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x8ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x8ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6e6484:{NFSU2_TR(0x6e6484);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e6488:{NFSU2_TR(0x6e6488);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e648c:{NFSU2_TR(0x6e648c);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e648f:{NFSU2_TR(0x6e648f);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e6492:{NFSU2_TR(0x6e6492);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e6495ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e6495:L6e6495:{c.instructions+=3;NFSU2_TR(0x6e6495);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e6496:{NFSU2_TR(0x6e6496);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e6497:{NFSU2_TR(0x6e6497);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e649a:L6e649a:{c.instructions+=11;NFSU2_TR(0x6e649a);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e649d:{NFSU2_TR(0x6e649d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e64a1:{NFSU2_TR(0x6e64a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e64a4:{NFSU2_TR(0x6e64a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6e64a6:{NFSU2_TR(0x6e64a6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e64a7:{NFSU2_TR(0x6e64a7);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x8ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x8ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6e64aa:{NFSU2_TR(0x6e64aa);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e64ae:{NFSU2_TR(0x6e64ae);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e64b2:{NFSU2_TR(0x6e64b2);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e64b5:{NFSU2_TR(0x6e64b5);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e64b8:{NFSU2_TR(0x6e64b8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e64bbull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e64bb:L6e64bb:{c.instructions+=2;NFSU2_TR(0x6e64bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e64bc:{NFSU2_TR(0x6e64bc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e64bf:L6e64bf:{c.instructions+=11;NFSU2_TR(0x6e64bf);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e64c2:{NFSU2_TR(0x6e64c2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e64c6:{NFSU2_TR(0x6e64c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e64c9:{NFSU2_TR(0x6e64c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6e64cb:{NFSU2_TR(0x6e64cb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e64cc:{NFSU2_TR(0x6e64cc);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x8ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x8ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6e64cf:{NFSU2_TR(0x6e64cf);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e64d3:{NFSU2_TR(0x6e64d3);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e64d7:{NFSU2_TR(0x6e64d7);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e64da:{NFSU2_TR(0x6e64da);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e64dd:{NFSU2_TR(0x6e64dd);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e64e0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e64e0:L6e64e0:{c.instructions+=2;NFSU2_TR(0x6e64e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e64e1:{NFSU2_TR(0x6e64e1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e64f0:L6e64f0:{c.instructions+=12;NFSU2_TR(0x6e64f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e64f4:{NFSU2_TR(0x6e64f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e64f7:{NFSU2_TR(0x6e64f7);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
w2(U+4,u16(0x0ull));
s2(u32(r4(U+0)),r2(U+4));
}
B6e64fd:{NFSU2_TR(0x6e64fd);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B6e6501:{NFSU2_TR(0x6e6501);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x12ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B6e6505:{NFSU2_TR(0x6e6505);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B6e6508:{NFSU2_TR(0x6e6508);
w1(R+8,u8(~u32(r1(R+8))));
}
B6e650a:{NFSU2_TR(0x6e650a);
w1(R+8,u8(u32(r1(R+8))&u32(u8(0x1ull))));
}
B6e650d:{NFSU2_TR(0x6e650d);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6e6510:{NFSU2_TR(0x6e6510);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6e6513:{NFSU2_TR(0x6e6513);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(u8(0x8ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6e6515:{NFSU2_TR(0x6e6515);
if(r1(R+518)){{goto L6e6522;}}
}
B6e6517:L6e6517:{c.instructions+=3;NFSU2_TR(0x6e6517);
w4(R+0,u32(0x1ull));
}
B6e651c:{NFSU2_TR(0x6e651c);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x15ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6e651f:{NFSU2_TR(0x6e651f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e6522:L6e6522:{c.instructions+=2;NFSU2_TR(0x6e6522);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(u8(0x10ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6e6524:{NFSU2_TR(0x6e6524);
if(r1(R+518)){{goto L6e6531;}}
}
B6e6526:L6e6526:{c.instructions+=3;NFSU2_TR(0x6e6526);
w4(R+0,u32(0x2ull));
}
B6e652b:{NFSU2_TR(0x6e652b);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x15ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6e652e:{NFSU2_TR(0x6e652e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e6531:L6e6531:{c.instructions+=2;NFSU2_TR(0x6e6531);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(u8(0x20ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6e6533:{NFSU2_TR(0x6e6533);
if(r1(R+518)){{goto L6e6540;}}
}
B6e6535:L6e6535:{c.instructions+=3;NFSU2_TR(0x6e6535);
w4(R+0,u32(0x4ull));
}
B6e653a:{NFSU2_TR(0x6e653a);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x15ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6e653d:{NFSU2_TR(0x6e653d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e6540:L6e6540:{c.instructions+=7;NFSU2_TR(0x6e6540);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0x40ull))));
}
B6e6542:{NFSU2_TR(0x6e6542);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B6e6544:{NFSU2_TR(0x6e6544);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6e6546:{NFSU2_TR(0x6e6546);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ull))));
}
B6e6549:{NFSU2_TR(0x6e6549);
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
B6e654a:{NFSU2_TR(0x6e654a);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x15ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6e654d:{NFSU2_TR(0x6e654d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e6550:L6e6550:{c.instructions+=14;NFSU2_TR(0x6e6550);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B6e6553:{NFSU2_TR(0x6e6553);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6554:{NFSU2_TR(0x6e6554);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6555:{NFSU2_TR(0x6e6555);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e6559:{NFSU2_TR(0x6e6559);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e655d:{NFSU2_TR(0x6e655d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e655e:{NFSU2_TR(0x6e655e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e6561:{NFSU2_TR(0x6e6561);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(r2(U+4)));
}
B6e6565:{NFSU2_TR(0x6e6565);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6e6568:{NFSU2_TR(0x6e6568);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
}
B6e6569:{NFSU2_TR(0x6e6569);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6e656b:{NFSU2_TR(0x6e656b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e656c:{NFSU2_TR(0x6e656c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e6570:{NFSU2_TR(0x6e6570);
if(r1(R+518)){{goto L6e65fc;}}
}
B6e6576:L6e6576:{c.instructions+=6;NFSU2_TR(0x6e6576);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e657a:{NFSU2_TR(0x6e657a);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e6580:{NFSU2_TR(0x6e6580);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e6584:{NFSU2_TR(0x6e6584);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e6586:{NFSU2_TR(0x6e6586);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6e6589:{NFSU2_TR(0x6e6589);
if(r1(R+514)){{goto L6e65be;}}
}
B6e658b:L6e658b:{c.instructions+=6;NFSU2_TR(0x6e658b);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e658f:{NFSU2_TR(0x6e658f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6590:{NFSU2_TR(0x6e6590);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e6594:{NFSU2_TR(0x6e6594);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B6e6598:{NFSU2_TR(0x6e6598);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e659b:{NFSU2_TR(0x6e659b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e65a0ull));
TAIL_STATIC(0x6e4900u,6e4);
}
B6e65a0:L6e65a0:{c.instructions+=9;NFSU2_TR(0x6e65a0);
__builtin_memmove((R+4),(R+12),4);
}
B6e65a2:{NFSU2_TR(0x6e65a2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6e65a5:{NFSU2_TR(0x6e65a5);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B6e65a8:{NFSU2_TR(0x6e65a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e65ac:{NFSU2_TR(0x6e65ac);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e65b0:{NFSU2_TR(0x6e65b0);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B6e65b4:{NFSU2_TR(0x6e65b4);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B6e65b8:{NFSU2_TR(0x6e65b8);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e65bc:{NFSU2_TR(0x6e65bc);
{goto L6e65fc;}
}
B6e65be:L6e65be:{c.instructions+=5;NFSU2_TR(0x6e65be);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e65c2:{NFSU2_TR(0x6e65c2);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B6e65c4:{NFSU2_TR(0x6e65c4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e65c6:{NFSU2_TR(0x6e65c6);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6e65c9:{NFSU2_TR(0x6e65c9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e65fa;}}
}
B6e65cb:L6e65cb:{c.instructions+=8;NFSU2_TR(0x6e65cb);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e65cf:{NFSU2_TR(0x6e65cf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e65d0:{NFSU2_TR(0x6e65d0);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B6e65d2:{NFSU2_TR(0x6e65d2);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B6e65d6:{NFSU2_TR(0x6e65d6);
__asm__ volatile(".byte 0xd8,0xf1":::"memory");
}
B6e65d8:{NFSU2_TR(0x6e65d8);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e65db:{NFSU2_TR(0x6e65db);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6e65dd:{NFSU2_TR(0x6e65dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e65e2ull));
TAIL_STATIC(0x6e4900u,6e4);
}
B6e65e2:L6e65e2:{c.instructions+=7;NFSU2_TR(0x6e65e2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6e65e5:{NFSU2_TR(0x6e65e5);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6e65e8:{NFSU2_TR(0x6e65e8);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e65ec:{NFSU2_TR(0x6e65ec);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e65f0:{NFSU2_TR(0x6e65f0);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B6e65f4:{NFSU2_TR(0x6e65f4);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e65f8:{NFSU2_TR(0x6e65f8);
{goto L6e65fc;}
}
B6e65fa:L6e65fa:{c.instructions+=1;NFSU2_TR(0x6e65fa);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6e65fc:L6e65fc:{c.instructions+=6;NFSU2_TR(0x6e65fc);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e6600:{NFSU2_TR(0x6e6600);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e6606:{NFSU2_TR(0x6e6606);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e660a:{NFSU2_TR(0x6e660a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e660c:{NFSU2_TR(0x6e660c);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6e660f:{NFSU2_TR(0x6e660f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e6625;}}
}
B6e6611:L6e6611:{c.instructions+=5;NFSU2_TR(0x6e6611);
{u32 ea_=u32(u32(8133180u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e6617:{NFSU2_TR(0x6e6617);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e661b:{NFSU2_TR(0x6e661b);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e661f:{NFSU2_TR(0x6e661f);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B6e6623:{NFSU2_TR(0x6e6623);
{goto L6e6637;}
}
B6e6625:L6e6625:{c.instructions+=4;NFSU2_TR(0x6e6625);
{u32 ea_=u32(u32(8133180u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e662b:{NFSU2_TR(0x6e662b);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e662f:{NFSU2_TR(0x6e662f);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e6633:{NFSU2_TR(0x6e6633);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B6e6637:L6e6637:{c.instructions+=16;NFSU2_TR(0x6e6637);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e663b:{NFSU2_TR(0x6e663b);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x15ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B6e663f:{NFSU2_TR(0x6e663f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e6643:{NFSU2_TR(0x6e6643);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B6e6644:{NFSU2_TR(0x6e6644);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x6e6644);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x6e6644);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B6e6646:{NFSU2_TR(0x6e6646);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e664a:{NFSU2_TR(0x6e664a);
__builtin_memmove((R+28),(R+0),4);
}
B6e664c:{NFSU2_TR(0x6e664c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6e664f:{NFSU2_TR(0x6e664f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B6e6652:{NFSU2_TR(0x6e6652);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e6656:{NFSU2_TR(0x6e6656);
w1(R+512,u8((r1(R+0))<(u8(0x2ull))));
}
B6e6658:{NFSU2_TR(0x6e6658);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e665c:{NFSU2_TR(0x6e665c);
w4(R+0,u32(r1(R+0)));
}
B6e665f:{NFSU2_TR(0x6e665f);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B6e6663:{NFSU2_TR(0x6e6663);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xda,0x30"::"a"(ea_):"memory");}
}
B6e6667:{NFSU2_TR(0x6e6667);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6e666e;}}
}
B6e6669:L6e6669:{c.instructions+=1;NFSU2_TR(0x6e6669);
w4(R+0,u32(0x2ull));
}
B6e666e:L6e666e:{c.instructions+=16;NFSU2_TR(0x6e666e);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B6e6670:{NFSU2_TR(0x6e6670);
u8 U[13];
w4(U+0,u32(u32(u32(0xaull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+0,u32(r1(U+12)));
}
B6e6675:{NFSU2_TR(0x6e6675);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e6679:{NFSU2_TR(0x6e6679);
__builtin_memmove((R+0),(R+12),4);
}
B6e667b:{NFSU2_TR(0x6e667b);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e667f:{NFSU2_TR(0x6e667f);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B6e6680:{NFSU2_TR(0x6e6680);
{u32 ea_=u32(u32(8133708u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e6686:{NFSU2_TR(0x6e6686);
{u32 ea_=u32(u32(7882000u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e668c:{NFSU2_TR(0x6e668c);
{u32 ea_=u32(r4(R+20));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B6e668f:{NFSU2_TR(0x6e668f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e6693:{NFSU2_TR(0x6e6693);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x15ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B6e6697:{NFSU2_TR(0x6e6697);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x6e6697);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x6e6697);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B6e6699:{NFSU2_TR(0x6e6699);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6e669a:{NFSU2_TR(0x6e669a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e669c:{NFSU2_TR(0x6e669c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6e669f:{NFSU2_TR(0x6e669f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6e66e7;}}
}
B6e66a1:L6e66a1:{c.instructions+=3;NFSU2_TR(0x6e66a1);
w1(R+512,u8((r1(R+0))<(u8(0x2ull))));
}
B6e66a3:{NFSU2_TR(0x6e66a3);
w4(R+0,u32(r1(R+0)));
}
B6e66a6:{NFSU2_TR(0x6e66a6);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6e66ad;}}
}
B6e66a8:L6e66a8:{c.instructions+=1;NFSU2_TR(0x6e66a8);
w4(R+0,u32(0x2ull));
}
B6e66ad:L6e66ad:{c.instructions+=20;NFSU2_TR(0x6e66ad);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B6e66af:{NFSU2_TR(0x6e66af);
u8 U[13];
w4(U+0,u32(u32(u32(0xbull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+8,u32(r1(U+12)));
}
B6e66b4:{NFSU2_TR(0x6e66b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e66b8:{NFSU2_TR(0x6e66b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e66b9:{NFSU2_TR(0x6e66b9);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e66bd:{NFSU2_TR(0x6e66bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e66be:{NFSU2_TR(0x6e66be);
{u32 ea_=u32(u32(8133708u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e66c4:{NFSU2_TR(0x6e66c4);
{u32 ea_=u32(u32(7882000u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e66ca:{NFSU2_TR(0x6e66ca);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B6e66cc:{NFSU2_TR(0x6e66cc);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e66d2:{NFSU2_TR(0x6e66d2);
__asm__ volatile(".byte 0xd8,0xe3":::"memory");
}
B6e66d4:{NFSU2_TR(0x6e66d4);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B6e66d6:{NFSU2_TR(0x6e66d6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6e66d8:{NFSU2_TR(0x6e66d8);
{u32 ea_=u32(r4(R+20));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e66db:{NFSU2_TR(0x6e66db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e66dc:{NFSU2_TR(0x6e66dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e66dd:{NFSU2_TR(0x6e66dd);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6e66df:{NFSU2_TR(0x6e66df);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6e66e1:{NFSU2_TR(0x6e66e1);
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
B6e66e4:{NFSU2_TR(0x6e66e4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e66e7:L6e66e7:{c.instructions+=3;NFSU2_TR(0x6e66e7);
w1(R+512,u8((r1(R+0))<(u8(0x2ull))));
}
B6e66e9:{NFSU2_TR(0x6e66e9);
w4(R+0,u32(r1(R+0)));
}
B6e66ec:{NFSU2_TR(0x6e66ec);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6e66f3;}}
}
B6e66ee:L6e66ee:{c.instructions+=1;NFSU2_TR(0x6e66ee);
w4(R+0,u32(0x2ull));
}
B6e66f3:L6e66f3:{c.instructions+=20;NFSU2_TR(0x6e66f3);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B6e66f5:{NFSU2_TR(0x6e66f5);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B6e66f7:{NFSU2_TR(0x6e66f7);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e66fd:{NFSU2_TR(0x6e66fd);
u8 U[13];
w4(U+0,u32(u32(u32(0x9ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+0,u32(r1(U+12)));
}
B6e6702:{NFSU2_TR(0x6e6702);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e6706:{NFSU2_TR(0x6e6706);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B6e6708:{NFSU2_TR(0x6e6708);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e6709:{NFSU2_TR(0x6e6709);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e670d:{NFSU2_TR(0x6e670d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e670e:{NFSU2_TR(0x6e670e);
{u32 ea_=u32(u32(8133708u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e6714:{NFSU2_TR(0x6e6714);
{u32 ea_=u32(u32(7882000u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e671a:{NFSU2_TR(0x6e671a);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B6e671c:{NFSU2_TR(0x6e671c);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B6e671e:{NFSU2_TR(0x6e671e);
{u32 ea_=u32(r4(R+20));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e6721:{NFSU2_TR(0x6e6721);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e6722:{NFSU2_TR(0x6e6722);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e6723:{NFSU2_TR(0x6e6723);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6e6725:{NFSU2_TR(0x6e6725);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6e6727:{NFSU2_TR(0x6e6727);
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
B6e672a:{NFSU2_TR(0x6e672a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e6730:L6e6730:{c.instructions+=6;NFSU2_TR(0x6e6730);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6731:{NFSU2_TR(0x6e6731);
__builtin_memmove((R+28),(R+4),4);
}
B6e6733:{NFSU2_TR(0x6e6733);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e6736:{NFSU2_TR(0x6e6736);
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
B6e6738:{NFSU2_TR(0x6e6738);
u8 U[4];
w4(U+0,u32(0x7c1978ull));
s4(u32(r4(R+28)),r4(U+0));
}
B6e673e:{NFSU2_TR(0x6e673e);
if(r1(R+518)){{goto L6e6775;}}
}
B6e6740:L6e6740:{c.instructions+=5;NFSU2_TR(0x6e6740);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e6743:{NFSU2_TR(0x6e6743);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6744:{NFSU2_TR(0x6e6744);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B6e6748:{NFSU2_TR(0x6e6748);
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
B6e6749:{NFSU2_TR(0x6e6749);
if(r1(R+519)){{goto L6e6765;}}
}
B6e674b:L6e674b:{c.instructions+=1;NFSU2_TR(0x6e674b);
{goto L6e6750;}
}
B6e6750:L6e6750:{c.instructions+=6;NFSU2_TR(0x6e6750);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e6753:{NFSU2_TR(0x6e6753);
__builtin_memmove((R+4),gp(0x8ab294),4);
}
B6e6759:{NFSU2_TR(0x6e6759);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6e675c:{NFSU2_TR(0x6e675c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e675e:{NFSU2_TR(0x6e675e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e675f:{NFSU2_TR(0x6e675f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e6762ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e6762:L6e6762:{c.instructions+=2;NFSU2_TR(0x6e6762);
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
B6e6763:{NFSU2_TR(0x6e6763);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e6750u);}goto L6e6750;}}
}
B6e6765:L6e6765:{c.instructions+=5;NFSU2_TR(0x6e6765);
__builtin_memmove((R+4),gp(0x8ab294),4);
}
B6e676b:{NFSU2_TR(0x6e676b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e676e:{NFSU2_TR(0x6e676e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e6770:{NFSU2_TR(0x6e6770);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6771:{NFSU2_TR(0x6e6771);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e6774ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e6774:L6e6774:{c.instructions+=1;NFSU2_TR(0x6e6774);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e6775:L6e6775:{c.instructions+=3;NFSU2_TR(0x6e6775);
__builtin_memmove((R+4),(R+28),4);
}
B6e6777:{NFSU2_TR(0x6e6777);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e6778:{NFSU2_TR(0x6e6778);
TAIL_STATIC(0x6e3ef0u,6e3);
}
B6e6780:L6e6780:{c.instructions+=7;NFSU2_TR(0x6e6780);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e6784:{NFSU2_TR(0x6e6784);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6785:{NFSU2_TR(0x6e6785);
__builtin_memmove((R+24),(R+4),4);
}
B6e6787:{NFSU2_TR(0x6e6787);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e678a:{NFSU2_TR(0x6e678a);
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
B6e678c:{NFSU2_TR(0x6e678c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e678f:{NFSU2_TR(0x6e678f);
if(r1(R+518)){{goto L6e67c5;}}
}
B6e6791:L6e6791:{c.instructions+=4;NFSU2_TR(0x6e6791);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6792:{NFSU2_TR(0x6e6792);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B6e6796:{NFSU2_TR(0x6e6796);
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
B6e6797:{NFSU2_TR(0x6e6797);
if(r1(R+519)){{goto L6e67b5;}}
}
B6e6799:L6e6799:{c.instructions+=1;NFSU2_TR(0x6e6799);
__builtin_memmove((R+16),(R+16),4);
}
B6e67a0:L6e67a0:{c.instructions+=6;NFSU2_TR(0x6e67a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e67a3:{NFSU2_TR(0x6e67a3);
__builtin_memmove((R+4),gp(0x8ab294),4);
}
B6e67a9:{NFSU2_TR(0x6e67a9);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6e67ac:{NFSU2_TR(0x6e67ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6e67ae:{NFSU2_TR(0x6e67ae);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e67af:{NFSU2_TR(0x6e67af);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e67b2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e67b2:L6e67b2:{c.instructions+=2;NFSU2_TR(0x6e67b2);
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
B6e67b3:{NFSU2_TR(0x6e67b3);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e67a0u);}goto L6e67a0;}}
}
B6e67b5:L6e67b5:{c.instructions+=5;NFSU2_TR(0x6e67b5);
__builtin_memmove((R+4),gp(0x8ab294),4);
}
B6e67bb:{NFSU2_TR(0x6e67bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e67be:{NFSU2_TR(0x6e67be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6e67c0:{NFSU2_TR(0x6e67c0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e67c1:{NFSU2_TR(0x6e67c1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e67c4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e67c4:L6e67c4:{c.instructions+=1;NFSU2_TR(0x6e67c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e67c5:L6e67c5:{c.instructions+=3;NFSU2_TR(0x6e67c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6e67cc:{NFSU2_TR(0x6e67cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e67cd:{NFSU2_TR(0x6e67cd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e67d0:L6e67d0:{c.instructions+=12;NFSU2_TR(0x6e67d0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e67d1:{NFSU2_TR(0x6e67d1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e67d2:{NFSU2_TR(0x6e67d2);
__builtin_memmove((R+12),(R+4),4);
}
B6e67d4:{NFSU2_TR(0x6e67d4);
__builtin_memmove((R+4),gp(0x8ab294),4);
}
B6e67da:{NFSU2_TR(0x6e67da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e67dc:{NFSU2_TR(0x6e67dc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e67dd:{NFSU2_TR(0x6e67dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e67e0:{NFSU2_TR(0x6e67e0);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B6e67e4:{NFSU2_TR(0x6e67e4);
w4(R+0,u32(r2(R+0)));
}
B6e67e7:{NFSU2_TR(0x6e67e7);
u8 U[45];
w4(U+37,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+0),4);
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+37))));
w1(U+24,u8((r4(U+37))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+37))-u32(u32(0x1ull))));
w4(U+29,shl<u32>(r4(U+41),u64(r4(U+25))));
w1(U+33,u8(s32(r4(U+29))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+33))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+34,u8((r4(U+37))==(u32(0x1ull))));
w1(U+35,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
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
B6e67ea:{NFSU2_TR(0x6e67ea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e67eb:{NFSU2_TR(0x6e67eb);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e67eeull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e67ee:L6e67ee:{c.instructions+=4;NFSU2_TR(0x6e67ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e67f1:{NFSU2_TR(0x6e67f1);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B6e67f5:{NFSU2_TR(0x6e67f5);
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
B6e67f6:{NFSU2_TR(0x6e67f6);
if(r1(R+519)){{goto L6e681c;}}
}
B6e67f8:L6e67f8:{c.instructions+=2;NFSU2_TR(0x6e67f8);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B6e67fc:{NFSU2_TR(0x6e67fc);
__builtin_memmove((R+16),(R+16),4);
}
B6e6800:L6e6800:{c.instructions+=5;NFSU2_TR(0x6e6800);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6e6802:{NFSU2_TR(0x6e6802);
__builtin_memmove((R+4),gp(0x8ab294),4);
}
B6e6808:{NFSU2_TR(0x6e6808);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e680a:{NFSU2_TR(0x6e680a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e680b:{NFSU2_TR(0x6e680b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e680eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e680e:L6e680e:{c.instructions+=6;NFSU2_TR(0x6e680e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e6811:{NFSU2_TR(0x6e6811);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6e6814:{NFSU2_TR(0x6e6814);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B6e6815:{NFSU2_TR(0x6e6815);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x4ull))));
}
B6e6818:{NFSU2_TR(0x6e6818);
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
B6e681a:{NFSU2_TR(0x6e681a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e6800u);}goto L6e6800;}}
}
B6e681c:L6e681c:{c.instructions+=4;NFSU2_TR(0x6e681c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e681d:{NFSU2_TR(0x6e681d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e681e:{NFSU2_TR(0x6e681e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e681f:{NFSU2_TR(0x6e681f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e6820:L6e6820:{c.instructions+=8;NFSU2_TR(0x6e6820);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6821:{NFSU2_TR(0x6e6821);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6822:{NFSU2_TR(0x6e6822);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6823:{NFSU2_TR(0x6e6823);
__builtin_memmove((R+28),(R+4),4);
}
B6e6825:{NFSU2_TR(0x6e6825);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e6828:{NFSU2_TR(0x6e6828);
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
B6e682a:{NFSU2_TR(0x6e682a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e682d:{NFSU2_TR(0x6e682d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e6834;}}
}
B6e682f:L6e682f:{c.instructions+=1;NFSU2_TR(0x6e682f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e6834ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e67d0u);}goto L6e67d0;}
}
B6e6834:L6e6834:{c.instructions+=3;NFSU2_TR(0x6e6834);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6e6837:{NFSU2_TR(0x6e6837);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6e6839:{NFSU2_TR(0x6e6839);
if(r1(R+518)){{goto L6e6859;}}
}
B6e683b:L6e683b:{c.instructions+=8;NFSU2_TR(0x6e683b);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x15ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B6e683f:{NFSU2_TR(0x6e683f);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e6843:{NFSU2_TR(0x6e6843);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e6847:{NFSU2_TR(0x6e6847);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e684b:{NFSU2_TR(0x6e684b);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B6e684d:{NFSU2_TR(0x6e684d);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e6851:{NFSU2_TR(0x6e6851);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e6855:{NFSU2_TR(0x6e6855);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e6859:L6e6859:{c.instructions+=3;NFSU2_TR(0x6e6859);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B6e685d:{NFSU2_TR(0x6e685d);
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
B6e685e:{NFSU2_TR(0x6e685e);
if(r1(R+519)){{goto L6e6887;}}
}
B6e6860:L6e6860:{c.instructions+=5;NFSU2_TR(0x6e6860);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6861:{NFSU2_TR(0x6e6861);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e6865:{NFSU2_TR(0x6e6865);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6866:{NFSU2_TR(0x6e6866);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e686a:{NFSU2_TR(0x6e686a);
__builtin_memmove((R+12),(R+12),4);
}
B6e6870:L6e6870:{c.instructions+=8;NFSU2_TR(0x6e6870);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e6873:{NFSU2_TR(0x6e6873);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6e6876:{NFSU2_TR(0x6e6876);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e687a:{NFSU2_TR(0x6e687a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e687c:{NFSU2_TR(0x6e687c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e687d:{NFSU2_TR(0x6e687d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e687e:{NFSU2_TR(0x6e687e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e687f:{NFSU2_TR(0x6e687f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e6882ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e6882:L6e6882:{c.instructions+=2;NFSU2_TR(0x6e6882);
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
B6e6883:{NFSU2_TR(0x6e6883);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e6870u);}goto L6e6870;}}
}
B6e6885:L6e6885:{c.instructions+=2;NFSU2_TR(0x6e6885);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e6886:{NFSU2_TR(0x6e6886);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e6887:L6e6887:{c.instructions+=4;NFSU2_TR(0x6e6887);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e6888:{NFSU2_TR(0x6e6888);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e6889:{NFSU2_TR(0x6e6889);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6e688a:{NFSU2_TR(0x6e688a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e6890:L6e6890:{c.instructions+=10;NFSU2_TR(0x6e6890);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6891:{NFSU2_TR(0x6e6891);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6892:{NFSU2_TR(0x6e6892);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6893:{NFSU2_TR(0x6e6893);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6894:{NFSU2_TR(0x6e6894);
__builtin_memmove((R+28),(R+4),4);
}
B6e6896:{NFSU2_TR(0x6e6896);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e6899:{NFSU2_TR(0x6e6899);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e689c:{NFSU2_TR(0x6e689c);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B6e689e:{NFSU2_TR(0x6e689e);
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
B6e68a0:{NFSU2_TR(0x6e68a0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e68a7;}}
}
B6e68a2:L6e68a2:{c.instructions+=1;NFSU2_TR(0x6e68a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e68a7ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e67d0u);}goto L6e67d0;}
}
B6e68a7:L6e68a7:{c.instructions+=3;NFSU2_TR(0x6e68a7);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6e68aa:{NFSU2_TR(0x6e68aa);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6e68ac:{NFSU2_TR(0x6e68ac);
if(r1(R+518)){{goto L6e68cc;}}
}
B6e68ae:L6e68ae:{c.instructions+=8;NFSU2_TR(0x6e68ae);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x15ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B6e68b2:{NFSU2_TR(0x6e68b2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e68b6:{NFSU2_TR(0x6e68b6);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e68ba:{NFSU2_TR(0x6e68ba);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e68be:{NFSU2_TR(0x6e68be);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B6e68c0:{NFSU2_TR(0x6e68c0);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e68c4:{NFSU2_TR(0x6e68c4);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e68c8:{NFSU2_TR(0x6e68c8);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e68cc:L6e68cc:{c.instructions+=3;NFSU2_TR(0x6e68cc);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B6e68d0:{NFSU2_TR(0x6e68d0);
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
B6e68d1:{NFSU2_TR(0x6e68d1);
if(r1(R+519)){{goto L6e6901;}}
}
B6e68d3:L6e68d3:{c.instructions+=3;NFSU2_TR(0x6e68d3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e68d4:{NFSU2_TR(0x6e68d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e68d8:{NFSU2_TR(0x6e68d8);
{goto L6e68e0;}
}
B6e68e0:L6e68e0:{c.instructions+=11;NFSU2_TR(0x6e68e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e68e4:{NFSU2_TR(0x6e68e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e68e7:{NFSU2_TR(0x6e68e7);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6e68ea:{NFSU2_TR(0x6e68ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e68ec:{NFSU2_TR(0x6e68ec);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e68ed:{NFSU2_TR(0x6e68ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e68ee:{NFSU2_TR(0x6e68ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e68f2:{NFSU2_TR(0x6e68f2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e68f3:{NFSU2_TR(0x6e68f3);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e68f7:{NFSU2_TR(0x6e68f7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e68f8:{NFSU2_TR(0x6e68f8);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e68fbull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e68fb:L6e68fb:{c.instructions+=3;NFSU2_TR(0x6e68fb);
w1(R+512,u8(0x0ull));
w1(R+12,u8(u32(r1(R+12))|u32(r1(R+0))));
}
B6e68fd:{NFSU2_TR(0x6e68fd);
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
B6e68fe:{NFSU2_TR(0x6e68fe);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e68e0u);}goto L6e68e0;}}
}
B6e6900:L6e6900:{c.instructions+=1;NFSU2_TR(0x6e6900);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e6901:L6e6901:{c.instructions+=6;NFSU2_TR(0x6e6901);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e6902:{NFSU2_TR(0x6e6902);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e6903:{NFSU2_TR(0x6e6903);
__builtin_memmove((R+0),(R+12),1);
}
B6e6905:{NFSU2_TR(0x6e6905);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e6906:{NFSU2_TR(0x6e6906);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6e6907:{NFSU2_TR(0x6e6907);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e6910:L6e6910:{c.instructions+=10;NFSU2_TR(0x6e6910);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6911:{NFSU2_TR(0x6e6911);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6912:{NFSU2_TR(0x6e6912);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6913:{NFSU2_TR(0x6e6913);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6914:{NFSU2_TR(0x6e6914);
__builtin_memmove((R+28),(R+4),4);
}
B6e6916:{NFSU2_TR(0x6e6916);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e6919:{NFSU2_TR(0x6e6919);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e691c:{NFSU2_TR(0x6e691c);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B6e691e:{NFSU2_TR(0x6e691e);
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
B6e6920:{NFSU2_TR(0x6e6920);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e6927;}}
}
B6e6922:L6e6922:{c.instructions+=1;NFSU2_TR(0x6e6922);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e6927ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e67d0u);}goto L6e67d0;}
}
B6e6927:L6e6927:{c.instructions+=3;NFSU2_TR(0x6e6927);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6e692a:{NFSU2_TR(0x6e692a);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6e692c:{NFSU2_TR(0x6e692c);
if(r1(R+518)){{goto L6e6942;}}
}
B6e692e:L6e692e:{c.instructions+=5;NFSU2_TR(0x6e692e);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x15ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B6e6932:{NFSU2_TR(0x6e6932);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e6936:{NFSU2_TR(0x6e6936);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e693a:{NFSU2_TR(0x6e693a);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e693e:{NFSU2_TR(0x6e693e);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e6942:L6e6942:{c.instructions+=3;NFSU2_TR(0x6e6942);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B6e6946:{NFSU2_TR(0x6e6946);
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
B6e6947:{NFSU2_TR(0x6e6947);
if(r1(R+519)){{goto L6e696c;}}
}
B6e6949:L6e6949:{c.instructions+=3;NFSU2_TR(0x6e6949);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e694a:{NFSU2_TR(0x6e694a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e694e:{NFSU2_TR(0x6e694e);
__builtin_memmove((R+28),(R+28),4);
}
B6e6950:L6e6950:{c.instructions+=9;NFSU2_TR(0x6e6950);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e6954:{NFSU2_TR(0x6e6954);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e6957:{NFSU2_TR(0x6e6957);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6e695a:{NFSU2_TR(0x6e695a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e695c:{NFSU2_TR(0x6e695c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e695d:{NFSU2_TR(0x6e695d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e695e:{NFSU2_TR(0x6e695e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e6962:{NFSU2_TR(0x6e6962);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6963:{NFSU2_TR(0x6e6963);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e6966ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e6966:L6e6966:{c.instructions+=3;NFSU2_TR(0x6e6966);
w1(R+512,u8(0x0ull));
w1(R+12,u8(u32(r1(R+12))|u32(r1(R+0))));
}
B6e6968:{NFSU2_TR(0x6e6968);
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
B6e6969:{NFSU2_TR(0x6e6969);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e6950u);}goto L6e6950;}}
}
B6e696b:L6e696b:{c.instructions+=1;NFSU2_TR(0x6e696b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e696c:L6e696c:{c.instructions+=6;NFSU2_TR(0x6e696c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e696d:{NFSU2_TR(0x6e696d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e696e:{NFSU2_TR(0x6e696e);
__builtin_memmove((R+0),(R+12),1);
}
B6e6970:{NFSU2_TR(0x6e6970);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e6971:{NFSU2_TR(0x6e6971);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6e6972:{NFSU2_TR(0x6e6972);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e6980:L6e6980:{c.instructions+=10;NFSU2_TR(0x6e6980);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6981:{NFSU2_TR(0x6e6981);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6982:{NFSU2_TR(0x6e6982);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6983:{NFSU2_TR(0x6e6983);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6984:{NFSU2_TR(0x6e6984);
__builtin_memmove((R+28),(R+4),4);
}
B6e6986:{NFSU2_TR(0x6e6986);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e6989:{NFSU2_TR(0x6e6989);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e698c:{NFSU2_TR(0x6e698c);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B6e698e:{NFSU2_TR(0x6e698e);
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
B6e6990:{NFSU2_TR(0x6e6990);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e6997;}}
}
B6e6992:L6e6992:{c.instructions+=1;NFSU2_TR(0x6e6992);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e6997ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e67d0u);}goto L6e67d0;}
}
B6e6997:L6e6997:{c.instructions+=3;NFSU2_TR(0x6e6997);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6e699a:{NFSU2_TR(0x6e699a);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6e699c:{NFSU2_TR(0x6e699c);
if(r1(R+518)){{goto L6e69b2;}}
}
B6e699e:L6e699e:{c.instructions+=5;NFSU2_TR(0x6e699e);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x15ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B6e69a2:{NFSU2_TR(0x6e69a2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e69a6:{NFSU2_TR(0x6e69a6);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e69aa:{NFSU2_TR(0x6e69aa);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e69ae:{NFSU2_TR(0x6e69ae);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e69b2:L6e69b2:{c.instructions+=3;NFSU2_TR(0x6e69b2);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B6e69b6:{NFSU2_TR(0x6e69b6);
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
B6e69b7:{NFSU2_TR(0x6e69b7);
if(r1(R+519)){{goto L6e69dc;}}
}
B6e69b9:L6e69b9:{c.instructions+=3;NFSU2_TR(0x6e69b9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e69ba:{NFSU2_TR(0x6e69ba);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e69be:{NFSU2_TR(0x6e69be);
__builtin_memmove((R+28),(R+28),4);
}
B6e69c0:L6e69c0:{c.instructions+=9;NFSU2_TR(0x6e69c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e69c4:{NFSU2_TR(0x6e69c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e69c7:{NFSU2_TR(0x6e69c7);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6e69ca:{NFSU2_TR(0x6e69ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e69cc:{NFSU2_TR(0x6e69cc);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e69cd:{NFSU2_TR(0x6e69cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e69ce:{NFSU2_TR(0x6e69ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e69d2:{NFSU2_TR(0x6e69d2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e69d3:{NFSU2_TR(0x6e69d3);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e69d6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e69d6:L6e69d6:{c.instructions+=3;NFSU2_TR(0x6e69d6);
w1(R+512,u8(0x0ull));
w1(R+12,u8(u32(r1(R+12))|u32(r1(R+0))));
}
B6e69d8:{NFSU2_TR(0x6e69d8);
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
B6e69d9:{NFSU2_TR(0x6e69d9);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e69c0u);}goto L6e69c0;}}
}
B6e69db:L6e69db:{c.instructions+=1;NFSU2_TR(0x6e69db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e69dc:L6e69dc:{c.instructions+=6;NFSU2_TR(0x6e69dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e69dd:{NFSU2_TR(0x6e69dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e69de:{NFSU2_TR(0x6e69de);
__builtin_memmove((R+0),(R+12),1);
}
B6e69e0:{NFSU2_TR(0x6e69e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e69e1:{NFSU2_TR(0x6e69e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6e69e2:{NFSU2_TR(0x6e69e2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e69f0:L6e69f0:{c.instructions+=10;NFSU2_TR(0x6e69f0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e69f1:{NFSU2_TR(0x6e69f1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e69f2:{NFSU2_TR(0x6e69f2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e69f3:{NFSU2_TR(0x6e69f3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e69f4:{NFSU2_TR(0x6e69f4);
__builtin_memmove((R+28),(R+4),4);
}
B6e69f6:{NFSU2_TR(0x6e69f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e69f9:{NFSU2_TR(0x6e69f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e69fc:{NFSU2_TR(0x6e69fc);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B6e69fe:{NFSU2_TR(0x6e69fe);
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
B6e6a00:{NFSU2_TR(0x6e6a00);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e6a07;}}
}
B6e6a02:L6e6a02:{c.instructions+=1;NFSU2_TR(0x6e6a02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e6a07ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e67d0u);}goto L6e67d0;}
}
B6e6a07:L6e6a07:{c.instructions+=3;NFSU2_TR(0x6e6a07);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6e6a0a:{NFSU2_TR(0x6e6a0a);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6e6a0c:{NFSU2_TR(0x6e6a0c);
if(r1(R+518)){{goto L6e6a22;}}
}
B6e6a0e:L6e6a0e:{c.instructions+=5;NFSU2_TR(0x6e6a0e);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x15ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B6e6a12:{NFSU2_TR(0x6e6a12);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e6a16:{NFSU2_TR(0x6e6a16);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e6a1a:{NFSU2_TR(0x6e6a1a);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e6a1e:{NFSU2_TR(0x6e6a1e);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e6a22:L6e6a22:{c.instructions+=3;NFSU2_TR(0x6e6a22);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B6e6a26:{NFSU2_TR(0x6e6a26);
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
B6e6a27:{NFSU2_TR(0x6e6a27);
if(r1(R+519)){{goto L6e6a47;}}
}
B6e6a29:L6e6a29:{c.instructions+=3;NFSU2_TR(0x6e6a29);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6a2a:{NFSU2_TR(0x6e6a2a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e6a2e:{NFSU2_TR(0x6e6a2e);
__builtin_memmove((R+28),(R+28),4);
}
B6e6a30:L6e6a30:{c.instructions+=7;NFSU2_TR(0x6e6a30);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e6a33:{NFSU2_TR(0x6e6a33);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6e6a36:{NFSU2_TR(0x6e6a36);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e6a3a:{NFSU2_TR(0x6e6a3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e6a3c:{NFSU2_TR(0x6e6a3c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6a3d:{NFSU2_TR(0x6e6a3d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6a3e:{NFSU2_TR(0x6e6a3e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e6a41ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e6a41:L6e6a41:{c.instructions+=3;NFSU2_TR(0x6e6a41);
w1(R+512,u8(0x0ull));
w1(R+12,u8(u32(r1(R+12))|u32(r1(R+0))));
}
B6e6a43:{NFSU2_TR(0x6e6a43);
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
B6e6a44:{NFSU2_TR(0x6e6a44);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e6a30u);}goto L6e6a30;}}
}
B6e6a46:L6e6a46:{c.instructions+=1;NFSU2_TR(0x6e6a46);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e6a47:L6e6a47:{c.instructions+=6;NFSU2_TR(0x6e6a47);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e6a48:{NFSU2_TR(0x6e6a48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e6a49:{NFSU2_TR(0x6e6a49);
__builtin_memmove((R+0),(R+12),1);
}
B6e6a4b:{NFSU2_TR(0x6e6a4b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e6a4c:{NFSU2_TR(0x6e6a4c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6e6a4d:{NFSU2_TR(0x6e6a4d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e6a50:L6e6a50:{c.instructions+=10;NFSU2_TR(0x6e6a50);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6a51:{NFSU2_TR(0x6e6a51);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6a52:{NFSU2_TR(0x6e6a52);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6a53:{NFSU2_TR(0x6e6a53);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6a54:{NFSU2_TR(0x6e6a54);
__builtin_memmove((R+28),(R+4),4);
}
B6e6a56:{NFSU2_TR(0x6e6a56);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e6a59:{NFSU2_TR(0x6e6a59);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e6a5c:{NFSU2_TR(0x6e6a5c);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B6e6a5e:{NFSU2_TR(0x6e6a5e);
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
B6e6a60:{NFSU2_TR(0x6e6a60);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e6a67;}}
}
B6e6a62:L6e6a62:{c.instructions+=1;NFSU2_TR(0x6e6a62);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e6a67ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e67d0u);}goto L6e67d0;}
}
B6e6a67:L6e6a67:{c.instructions+=3;NFSU2_TR(0x6e6a67);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6e6a6a:{NFSU2_TR(0x6e6a6a);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6e6a6c:{NFSU2_TR(0x6e6a6c);
if(r1(R+518)){{goto L6e6a82;}}
}
B6e6a6e:L6e6a6e:{c.instructions+=5;NFSU2_TR(0x6e6a6e);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x15ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B6e6a72:{NFSU2_TR(0x6e6a72);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e6a76:{NFSU2_TR(0x6e6a76);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e6a7a:{NFSU2_TR(0x6e6a7a);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e6a7e:{NFSU2_TR(0x6e6a7e);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e6a82:L6e6a82:{c.instructions+=3;NFSU2_TR(0x6e6a82);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B6e6a86:{NFSU2_TR(0x6e6a86);
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
B6e6a87:{NFSU2_TR(0x6e6a87);
if(r1(R+519)){{goto L6e6aa7;}}
}
B6e6a89:L6e6a89:{c.instructions+=3;NFSU2_TR(0x6e6a89);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6a8a:{NFSU2_TR(0x6e6a8a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e6a8e:{NFSU2_TR(0x6e6a8e);
__builtin_memmove((R+28),(R+28),4);
}
B6e6a90:L6e6a90:{c.instructions+=7;NFSU2_TR(0x6e6a90);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e6a93:{NFSU2_TR(0x6e6a93);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6e6a96:{NFSU2_TR(0x6e6a96);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e6a9a:{NFSU2_TR(0x6e6a9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e6a9c:{NFSU2_TR(0x6e6a9c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6a9d:{NFSU2_TR(0x6e6a9d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6a9e:{NFSU2_TR(0x6e6a9e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e6aa1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e6aa1:L6e6aa1:{c.instructions+=3;NFSU2_TR(0x6e6aa1);
w1(R+512,u8(0x0ull));
w1(R+12,u8(u32(r1(R+12))|u32(r1(R+0))));
}
B6e6aa3:{NFSU2_TR(0x6e6aa3);
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
B6e6aa4:{NFSU2_TR(0x6e6aa4);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e6a90u);}goto L6e6a90;}}
}
B6e6aa6:L6e6aa6:{c.instructions+=1;NFSU2_TR(0x6e6aa6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e6aa7:L6e6aa7:{c.instructions+=6;NFSU2_TR(0x6e6aa7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e6aa8:{NFSU2_TR(0x6e6aa8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e6aa9:{NFSU2_TR(0x6e6aa9);
__builtin_memmove((R+0),(R+12),1);
}
B6e6aab:{NFSU2_TR(0x6e6aab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e6aac:{NFSU2_TR(0x6e6aac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6e6aad:{NFSU2_TR(0x6e6aad);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e6ab0:L6e6ab0:{c.instructions+=10;NFSU2_TR(0x6e6ab0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6ab1:{NFSU2_TR(0x6e6ab1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6ab2:{NFSU2_TR(0x6e6ab2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6ab3:{NFSU2_TR(0x6e6ab3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6ab4:{NFSU2_TR(0x6e6ab4);
__builtin_memmove((R+28),(R+4),4);
}
B6e6ab6:{NFSU2_TR(0x6e6ab6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e6ab9:{NFSU2_TR(0x6e6ab9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e6abc:{NFSU2_TR(0x6e6abc);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B6e6abe:{NFSU2_TR(0x6e6abe);
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
B6e6ac0:{NFSU2_TR(0x6e6ac0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e6ac7;}}
}
B6e6ac2:L6e6ac2:{c.instructions+=1;NFSU2_TR(0x6e6ac2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e6ac7ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e67d0u);}goto L6e67d0;}
}
B6e6ac7:L6e6ac7:{c.instructions+=3;NFSU2_TR(0x6e6ac7);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6e6aca:{NFSU2_TR(0x6e6aca);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6e6acc:{NFSU2_TR(0x6e6acc);
if(r1(R+518)){{goto L6e6ae2;}}
}
B6e6ace:L6e6ace:{c.instructions+=5;NFSU2_TR(0x6e6ace);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x15ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B6e6ad2:{NFSU2_TR(0x6e6ad2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e6ad6:{NFSU2_TR(0x6e6ad6);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e6ada:{NFSU2_TR(0x6e6ada);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e6ade:{NFSU2_TR(0x6e6ade);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e6ae2:L6e6ae2:{c.instructions+=3;NFSU2_TR(0x6e6ae2);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B6e6ae6:{NFSU2_TR(0x6e6ae6);
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
B6e6ae7:{NFSU2_TR(0x6e6ae7);
if(r1(R+519)){{goto L6e6b07;}}
}
B6e6ae9:L6e6ae9:{c.instructions+=3;NFSU2_TR(0x6e6ae9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6aea:{NFSU2_TR(0x6e6aea);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e6aee:{NFSU2_TR(0x6e6aee);
__builtin_memmove((R+28),(R+28),4);
}
B6e6af0:L6e6af0:{c.instructions+=7;NFSU2_TR(0x6e6af0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e6af3:{NFSU2_TR(0x6e6af3);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6e6af6:{NFSU2_TR(0x6e6af6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e6afa:{NFSU2_TR(0x6e6afa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e6afc:{NFSU2_TR(0x6e6afc);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6afd:{NFSU2_TR(0x6e6afd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6afe:{NFSU2_TR(0x6e6afe);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e6b01ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e6b01:L6e6b01:{c.instructions+=3;NFSU2_TR(0x6e6b01);
w1(R+512,u8(0x0ull));
w1(R+12,u8(u32(r1(R+12))|u32(r1(R+0))));
}
B6e6b03:{NFSU2_TR(0x6e6b03);
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
B6e6b04:{NFSU2_TR(0x6e6b04);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e6af0u);}goto L6e6af0;}}
}
B6e6b06:L6e6b06:{c.instructions+=1;NFSU2_TR(0x6e6b06);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e6b07:L6e6b07:{c.instructions+=6;NFSU2_TR(0x6e6b07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e6b08:{NFSU2_TR(0x6e6b08);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e6b09:{NFSU2_TR(0x6e6b09);
__builtin_memmove((R+0),(R+12),1);
}
B6e6b0b:{NFSU2_TR(0x6e6b0b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e6b0c:{NFSU2_TR(0x6e6b0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6e6b0d:{NFSU2_TR(0x6e6b0d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e6b10:L6e6b10:{c.instructions+=10;NFSU2_TR(0x6e6b10);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6b11:{NFSU2_TR(0x6e6b11);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6b12:{NFSU2_TR(0x6e6b12);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6b13:{NFSU2_TR(0x6e6b13);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6b14:{NFSU2_TR(0x6e6b14);
__builtin_memmove((R+24),(R+4),4);
}
B6e6b16:{NFSU2_TR(0x6e6b16);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B6e6b19:{NFSU2_TR(0x6e6b19);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6e6b1b:{NFSU2_TR(0x6e6b1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e6b1e:{NFSU2_TR(0x6e6b1e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6b1f:{NFSU2_TR(0x6e6b1f);
if(r1(R+518)){{goto L6e6b35;}}
}
B6e6b21:L6e6b21:{c.instructions+=5;NFSU2_TR(0x6e6b21);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B6e6b25:{NFSU2_TR(0x6e6b25);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e6b29:{NFSU2_TR(0x6e6b29);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e6b2d:{NFSU2_TR(0x6e6b2d);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e6b31:{NFSU2_TR(0x6e6b31);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e6b35:L6e6b35:{c.instructions+=3;NFSU2_TR(0x6e6b35);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B6e6b39:{NFSU2_TR(0x6e6b39);
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
B6e6b3a:{NFSU2_TR(0x6e6b3a);
if(r1(R+519)){{goto L6e6b5d;}}
}
B6e6b3c:L6e6b3c:{c.instructions+=2;NFSU2_TR(0x6e6b3c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e6b40:{NFSU2_TR(0x6e6b40);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e6b44:L6e6b44:{c.instructions+=8;NFSU2_TR(0x6e6b44);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e6b47:{NFSU2_TR(0x6e6b47);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6e6b4a:{NFSU2_TR(0x6e6b4a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e6b4e:{NFSU2_TR(0x6e6b4e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6e6b50:{NFSU2_TR(0x6e6b50);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6b51:{NFSU2_TR(0x6e6b51);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6b52:{NFSU2_TR(0x6e6b52);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6b53:{NFSU2_TR(0x6e6b53);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e6b56ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e6b56:L6e6b56:{c.instructions+=2;NFSU2_TR(0x6e6b56);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6e6b58:{NFSU2_TR(0x6e6b58);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e6b67;}}
}
B6e6b5a:L6e6b5a:{c.instructions+=2;NFSU2_TR(0x6e6b5a);
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
B6e6b5b:{NFSU2_TR(0x6e6b5b);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e6b44u);}goto L6e6b44;}}
}
B6e6b5d:L6e6b5d:{c.instructions+=7;NFSU2_TR(0x6e6b5d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e6b5e:{NFSU2_TR(0x6e6b5e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e6b5f:{NFSU2_TR(0x6e6b5f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e6b60:{NFSU2_TR(0x6e6b60);
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
B6e6b62:{NFSU2_TR(0x6e6b62);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e6b63:{NFSU2_TR(0x6e6b63);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6e6b64:{NFSU2_TR(0x6e6b64);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e6b67:L6e6b67:{c.instructions+=3;NFSU2_TR(0x6e6b67);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6e6b6a:{NFSU2_TR(0x6e6b6a);
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
B6e6b6c:{NFSU2_TR(0x6e6b6c);
if(r1(R+518)){{goto L6e6b7e;}}
}
B6e6b6e:L6e6b6e:{c.instructions+=5;NFSU2_TR(0x6e6b6e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B6e6b72:{NFSU2_TR(0x6e6b72);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e6b76:{NFSU2_TR(0x6e6b76);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e6b7a:{NFSU2_TR(0x6e6b7a);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B6e6b7c:{NFSU2_TR(0x6e6b7c);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e6b7e:L6e6b7e:{c.instructions+=7;NFSU2_TR(0x6e6b7e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e6b7f:{NFSU2_TR(0x6e6b7f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e6b80:{NFSU2_TR(0x6e6b80);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e6b81:{NFSU2_TR(0x6e6b81);
w1(R+0,u8(0x1ull));
}
B6e6b83:{NFSU2_TR(0x6e6b83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e6b84:{NFSU2_TR(0x6e6b84);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6e6b85:{NFSU2_TR(0x6e6b85);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e6b90:L6e6b90:{c.instructions+=10;NFSU2_TR(0x6e6b90);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6b91:{NFSU2_TR(0x6e6b91);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6b92:{NFSU2_TR(0x6e6b92);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6b93:{NFSU2_TR(0x6e6b93);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6b94:{NFSU2_TR(0x6e6b94);
__builtin_memmove((R+28),(R+4),4);
}
B6e6b96:{NFSU2_TR(0x6e6b96);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B6e6b99:{NFSU2_TR(0x6e6b99);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e6b9c:{NFSU2_TR(0x6e6b9c);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B6e6b9e:{NFSU2_TR(0x6e6b9e);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6e6ba0:{NFSU2_TR(0x6e6ba0);
if(r1(R+518)){{goto L6e6bb6;}}
}
B6e6ba2:L6e6ba2:{c.instructions+=5;NFSU2_TR(0x6e6ba2);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x15ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B6e6ba6:{NFSU2_TR(0x6e6ba6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e6baa:{NFSU2_TR(0x6e6baa);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e6bae:{NFSU2_TR(0x6e6bae);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e6bb2:{NFSU2_TR(0x6e6bb2);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e6bb6:L6e6bb6:{c.instructions+=3;NFSU2_TR(0x6e6bb6);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B6e6bba:{NFSU2_TR(0x6e6bba);
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
B6e6bbb:{NFSU2_TR(0x6e6bbb);
if(r1(R+519)){{goto L6e6bd9;}}
}
B6e6bbd:L6e6bbd:{c.instructions+=2;NFSU2_TR(0x6e6bbd);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6bbe:{NFSU2_TR(0x6e6bbe);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e6bc2:L6e6bc2:{c.instructions+=7;NFSU2_TR(0x6e6bc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e6bc5:{NFSU2_TR(0x6e6bc5);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6e6bc8:{NFSU2_TR(0x6e6bc8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e6bcc:{NFSU2_TR(0x6e6bcc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6e6bce:{NFSU2_TR(0x6e6bce);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6bcf:{NFSU2_TR(0x6e6bcf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6bd0:{NFSU2_TR(0x6e6bd0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e6bd3ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e6bd3:L6e6bd3:{c.instructions+=3;NFSU2_TR(0x6e6bd3);
w1(R+512,u8(0x0ull));
w1(R+12,u8(u32(r1(R+12))|u32(r1(R+0))));
}
B6e6bd5:{NFSU2_TR(0x6e6bd5);
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
B6e6bd6:{NFSU2_TR(0x6e6bd6);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e6bc2u);}goto L6e6bc2;}}
}
B6e6bd8:L6e6bd8:{c.instructions+=1;NFSU2_TR(0x6e6bd8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e6bd9:L6e6bd9:{c.instructions+=6;NFSU2_TR(0x6e6bd9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e6bda:{NFSU2_TR(0x6e6bda);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e6bdb:{NFSU2_TR(0x6e6bdb);
__builtin_memmove((R+0),(R+12),1);
}
B6e6bdd:{NFSU2_TR(0x6e6bdd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e6bde:{NFSU2_TR(0x6e6bde);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6e6bdf:{NFSU2_TR(0x6e6bdf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e6bf0:L6e6bf0:{c.instructions+=4;NFSU2_TR(0x6e6bf0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e6bf4:{NFSU2_TR(0x6e6bf4);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6e6bf8:{NFSU2_TR(0x6e6bf8);
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
B6e6bf9:{NFSU2_TR(0x6e6bf9);
if(r1(R+519)){{goto L6e6c1a;}}
}
B6e6bfb:L6e6bfb:{c.instructions+=4;NFSU2_TR(0x6e6bfb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6bfc:{NFSU2_TR(0x6e6bfc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6bfd:{NFSU2_TR(0x6e6bfd);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B6e6c01:{NFSU2_TR(0x6e6c01);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e6c04:L6e6c04:{c.instructions+=5;NFSU2_TR(0x6e6c04);
__builtin_memmove((R+4),gp(0x8ab294),4);
}
B6e6c0a:{NFSU2_TR(0x6e6c0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e6c0c:{NFSU2_TR(0x6e6c0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6e6c0e:{NFSU2_TR(0x6e6c0e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6c0f:{NFSU2_TR(0x6e6c0f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e6c12ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e6c12:L6e6c12:{c.instructions+=3;NFSU2_TR(0x6e6c12);
w1(R+512,u8((r4(R+24))<(u32(0x4ull))));
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x4ull))));
}
B6e6c15:{NFSU2_TR(0x6e6c15);
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
B6e6c16:{NFSU2_TR(0x6e6c16);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e6c04u);}goto L6e6c04;}}
}
B6e6c18:L6e6c18:{c.instructions+=2;NFSU2_TR(0x6e6c18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e6c19:{NFSU2_TR(0x6e6c19);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e6c1a:L6e6c1a:{c.instructions+=1;NFSU2_TR(0x6e6c1a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e6c20:L6e6c20:{c.instructions+=7;NFSU2_TR(0x6e6c20);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6c21:{NFSU2_TR(0x6e6c21);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6c22:{NFSU2_TR(0x6e6c22);
__builtin_memmove((R+28),(R+4),4);
}
B6e6c24:{NFSU2_TR(0x6e6c24);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e6c27:{NFSU2_TR(0x6e6c27);
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
B6e6c29:{NFSU2_TR(0x6e6c29);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e6c2c:{NFSU2_TR(0x6e6c2c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e6c33;}}
}
B6e6c2e:L6e6c2e:{c.instructions+=1;NFSU2_TR(0x6e6c2e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e6c33ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e67d0u);}goto L6e67d0;}
}
B6e6c33:L6e6c33:{c.instructions+=3;NFSU2_TR(0x6e6c33);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B6e6c37:{NFSU2_TR(0x6e6c37);
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
B6e6c38:{NFSU2_TR(0x6e6c38);
if(r1(R+519)){{goto L6e6c52;}}
}
B6e6c3a:L6e6c3a:{c.instructions+=1;NFSU2_TR(0x6e6c3a);
__builtin_memmove((R+12),(R+12),4);
}
B6e6c40:L6e6c40:{c.instructions+=4;NFSU2_TR(0x6e6c40);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e6c43:{NFSU2_TR(0x6e6c43);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6e6c46:{NFSU2_TR(0x6e6c46);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e6c48:{NFSU2_TR(0x6e6c48);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e6c4bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e6c4b:L6e6c4b:{c.instructions+=2;NFSU2_TR(0x6e6c4b);
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
B6e6c4d:{NFSU2_TR(0x6e6c4d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e6c54;}}
}
B6e6c4f:L6e6c4f:{c.instructions+=2;NFSU2_TR(0x6e6c4f);
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
B6e6c50:{NFSU2_TR(0x6e6c50);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e6c40u);}goto L6e6c40;}}
}
B6e6c52:L6e6c52:{c.instructions+=1;NFSU2_TR(0x6e6c52);
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
B6e6c54:L6e6c54:{c.instructions+=3;NFSU2_TR(0x6e6c54);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e6c55:{NFSU2_TR(0x6e6c55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e6c56:{NFSU2_TR(0x6e6c56);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e6c60:L6e6c60:{c.instructions+=7;NFSU2_TR(0x6e6c60);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6e6c64:{NFSU2_TR(0x6e6c64);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6c65:{NFSU2_TR(0x6e6c65);
__builtin_memmove((R+24),(R+4),4);
}
B6e6c67:{NFSU2_TR(0x6e6c67);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B6e6c6a:{NFSU2_TR(0x6e6c6a);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6e6c6c:{NFSU2_TR(0x6e6c6c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6e6c6f:{NFSU2_TR(0x6e6c6f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e6c9f;}}
}
B6e6c71:L6e6c71:{c.instructions+=2;NFSU2_TR(0x6e6c71);
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
B6e6c73:{NFSU2_TR(0x6e6c73);
if(r1(R+518)){{goto L6e6c9f;}}
}
B6e6c75:L6e6c75:{c.instructions+=3;NFSU2_TR(0x6e6c75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6e6c77:{NFSU2_TR(0x6e6c77);
__builtin_memmove((R+4),(R+24),4);
}
B6e6c79:{NFSU2_TR(0x6e6c79);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e6c7cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e6c7c:L6e6c7c:{c.instructions+=2;NFSU2_TR(0x6e6c7c);
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
B6e6c7e:{NFSU2_TR(0x6e6c7e);
if(r1(R+518)){{goto L6e6c9f;}}
}
B6e6c80:L6e6c80:{c.instructions+=7;NFSU2_TR(0x6e6c80);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6e6c84:{NFSU2_TR(0x6e6c84);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6c85:{NFSU2_TR(0x6e6c85);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6c86:{NFSU2_TR(0x6e6c86);
__builtin_memmove((R+4),(R+16),4);
}
B6e6c88:{NFSU2_TR(0x6e6c88);
u8 U[2];
w2(U+0,u16(0x1ull));
s2(u32(r4(R+4)),r2(U+0));
}
B6e6c8d:{NFSU2_TR(0x6e6c8d);
__builtin_memmove((R+4),(R+0),4);
}
B6e6c8f:{NFSU2_TR(0x6e6c8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e6c94ull));
TAIL_STATIC(0x6f0c40u,6f0);
}
B6e6c94:L6e6c94:{c.instructions+=2;NFSU2_TR(0x6e6c94);
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
B6e6c96:{NFSU2_TR(0x6e6c96);
if(r1(R+518)){{goto L6e6c9f;}}
}
B6e6c98:L6e6c98:{c.instructions+=2;NFSU2_TR(0x6e6c98);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B6e6c9c:{NFSU2_TR(0x6e6c9c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6e6c9f:L6e6c9f:{c.instructions+=2;NFSU2_TR(0x6e6c9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e6ca0:{NFSU2_TR(0x6e6ca0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e6cb0:L6e6cb0:{c.instructions+=7;NFSU2_TR(0x6e6cb0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6cb1:{NFSU2_TR(0x6e6cb1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6cb2:{NFSU2_TR(0x6e6cb2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e6cb6:{NFSU2_TR(0x6e6cb6);
__builtin_memmove((R+24),(R+4),4);
}
B6e6cb8:{NFSU2_TR(0x6e6cb8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6cba:{NFSU2_TR(0x6e6cba);
__builtin_memmove((R+4),(R+28),4);
}
B6e6cbc:{NFSU2_TR(0x6e6cbc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e6cc1ull));
TAIL_STATIC(0x6ef990u,6ef);
}
B6e6cc1:L6e6cc1:{c.instructions+=11;NFSU2_TR(0x6e6cc1);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e6cc5:{NFSU2_TR(0x6e6cc5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e6cc9:{NFSU2_TR(0x6e6cc9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6cca:{NFSU2_TR(0x6e6cca);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e6cce:{NFSU2_TR(0x6e6cce);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6ccf:{NFSU2_TR(0x6e6ccf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6cd0:{NFSU2_TR(0x6e6cd0);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B6e6cd6:{NFSU2_TR(0x6e6cd6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e6cd8:{NFSU2_TR(0x6e6cd8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6cd9:{NFSU2_TR(0x6e6cd9);
__builtin_memmove((R+4),(R+24),4);
}
B6e6cdb:{NFSU2_TR(0x6e6cdb);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e6cdeull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e6cde:L6e6cde:{c.instructions+=3;NFSU2_TR(0x6e6cde);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e6cdf:{NFSU2_TR(0x6e6cdf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e6ce0:{NFSU2_TR(0x6e6ce0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e6cf0:L6e6cf0:{c.instructions+=9;NFSU2_TR(0x6e6cf0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6cf1:{NFSU2_TR(0x6e6cf1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6cf2:{NFSU2_TR(0x6e6cf2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6cf3:{NFSU2_TR(0x6e6cf3);
__builtin_memmove((R+28),(R+4),4);
}
B6e6cf5:{NFSU2_TR(0x6e6cf5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e6cf8:{NFSU2_TR(0x6e6cf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e6cfb:{NFSU2_TR(0x6e6cfb);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B6e6cfd:{NFSU2_TR(0x6e6cfd);
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
B6e6cff:{NFSU2_TR(0x6e6cff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e6d06;}}
}
B6e6d01:L6e6d01:{c.instructions+=1;NFSU2_TR(0x6e6d01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e6d06ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e67d0u);}goto L6e67d0;}
}
B6e6d06:L6e6d06:{c.instructions+=3;NFSU2_TR(0x6e6d06);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B6e6d0a:{NFSU2_TR(0x6e6d0a);
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
B6e6d0b:{NFSU2_TR(0x6e6d0b);
if(r1(R+519)){{goto L6e6d33;}}
}
B6e6d0d:L6e6d0d:{c.instructions+=2;NFSU2_TR(0x6e6d0d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6d0e:{NFSU2_TR(0x6e6d0e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e6d12:L6e6d12:{c.instructions+=11;NFSU2_TR(0x6e6d12);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e6d15:{NFSU2_TR(0x6e6d15);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6e6d18:{NFSU2_TR(0x6e6d18);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e6d1c:{NFSU2_TR(0x6e6d1c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e6d1e:{NFSU2_TR(0x6e6d1e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6d1f:{NFSU2_TR(0x6e6d1f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6d20:{NFSU2_TR(0x6e6d20);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e6d24:{NFSU2_TR(0x6e6d24);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6d25:{NFSU2_TR(0x6e6d25);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e6d29:{NFSU2_TR(0x6e6d29);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6d2a:{NFSU2_TR(0x6e6d2a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e6d2dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e6d2d:L6e6d2d:{c.instructions+=3;NFSU2_TR(0x6e6d2d);
w1(R+512,u8(0x0ull));
w1(R+12,u8(u32(r1(R+12))|u32(r1(R+0))));
}
B6e6d2f:{NFSU2_TR(0x6e6d2f);
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
B6e6d30:{NFSU2_TR(0x6e6d30);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e6d12u);}goto L6e6d12;}}
}
B6e6d32:L6e6d32:{c.instructions+=1;NFSU2_TR(0x6e6d32);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e6d33:L6e6d33:{c.instructions+=5;NFSU2_TR(0x6e6d33);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e6d34:{NFSU2_TR(0x6e6d34);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e6d35:{NFSU2_TR(0x6e6d35);
__builtin_memmove((R+0),(R+12),1);
}
B6e6d37:{NFSU2_TR(0x6e6d37);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e6d38:{NFSU2_TR(0x6e6d38);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e6d40:L6e6d40:{c.instructions+=11;NFSU2_TR(0x6e6d40);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6d41:{NFSU2_TR(0x6e6d41);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e6d45:{NFSU2_TR(0x6e6d45);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6d46:{NFSU2_TR(0x6e6d46);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6d47:{NFSU2_TR(0x6e6d47);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e6d4a:{NFSU2_TR(0x6e6d4a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B6e6d4d:{NFSU2_TR(0x6e6d4d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6e6d4f:{NFSU2_TR(0x6e6d4f);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B6e6d51:{NFSU2_TR(0x6e6d51);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6e6d53:{NFSU2_TR(0x6e6d53);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e6d57:{NFSU2_TR(0x6e6d57);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6e6e2a;}}
}
B6e6d5d:L6e6d5d:{c.instructions+=4;NFSU2_TR(0x6e6d5d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6d5e:{NFSU2_TR(0x6e6d5e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6d5f:{NFSU2_TR(0x6e6d5f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e6d63:{NFSU2_TR(0x6e6d63);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xaull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e6d66:L6e6d66:{c.instructions+=12;NFSU2_TR(0x6e6d66);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6e6d68:{NFSU2_TR(0x6e6d68);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
__builtin_memmove((R+4),(U+0),2);
}
B6e6d6b:{NFSU2_TR(0x6e6d6b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e6d6f:{NFSU2_TR(0x6e6d6f);
u8 U[4];
w4(U+0,u32(u32(u32(0xbull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6e6d72:{NFSU2_TR(0x6e6d72);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0x3ull))));
}
B6e6d75:{NFSU2_TR(0x6e6d75);
w1(R+4,u8(u32(r1(R+4))+u32(u8(0x1ull))));
}
B6e6d77:{NFSU2_TR(0x6e6d77);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6e6d7b:{NFSU2_TR(0x6e6d7b);
u8 U[6];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B6e6d80:{NFSU2_TR(0x6e6d80);
u8 U[4];
w4(U+0,u32(u32(u32(0xdull))&u32(u32(0x1full))));
w2(R+4,shr<u16>(r2(R+4),u64(r4(U+0))));
}
B6e6d84:{NFSU2_TR(0x6e6d84);
w4(R+4,u32(r1(R+4)));
}
B6e6d87:{NFSU2_TR(0x6e6d87);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B6e6d8a:{NFSU2_TR(0x6e6d8a);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6e6dde;}}
}
B6e6d8c:L6e6d8c:{c.instructions+=1;NFSU2_TR(0x6e6d8c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x6e6e30ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e6d93:L6e6d93:{c.instructions+=3;NFSU2_TR(0x6e6d93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6e6d95:{NFSU2_TR(0x6e6d95);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6e6d98:{NFSU2_TR(0x6e6d98);
{goto L6e6dde;}
}
B6e6d9a:L6e6d9a:{c.instructions+=3;NFSU2_TR(0x6e6d9a);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
w4(R+0,u32(r2(U+0)));
}
B6e6d9d:{NFSU2_TR(0x6e6d9d);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x2ull))));
}
B6e6da0:{NFSU2_TR(0x6e6da0);
{goto L6e6dde;}
}
B6e6da2:L6e6da2:{c.instructions+=3;NFSU2_TR(0x6e6da2);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w4(R+0,u32(r1(U+0)));
}
B6e6da5:{NFSU2_TR(0x6e6da5);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6e6da6:{NFSU2_TR(0x6e6da6);
{goto L6e6dde;}
}
B6e6da8:L6e6da8:{c.instructions+=8;NFSU2_TR(0x6e6da8);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w4(R+0,u32(r1(U+0)));
}
B6e6dab:{NFSU2_TR(0x6e6dab);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6e6dad:{NFSU2_TR(0x6e6dad);
w1(R+12,u8(u32(r1(R+12))+u32(u8(0x4ull))));
}
B6e6db0:{NFSU2_TR(0x6e6db0);
w1(R+4,u8(0x8ull));
}
B6e6db2:{NFSU2_TR(0x6e6db2);
w1(R+4,u8(u32(r1(R+4))-u32(r1(R+12))));
}
B6e6db4:{NFSU2_TR(0x6e6db4);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r1(U+0))));
}
B6e6db6:{NFSU2_TR(0x6e6db6);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfull))));
}
B6e6db9:{NFSU2_TR(0x6e6db9);
{goto L6e6dde;}
}
B6e6dbb:L6e6dbb:{c.instructions+=8;NFSU2_TR(0x6e6dbb);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w4(R+0,u32(r1(U+0)));
}
B6e6dbe:{NFSU2_TR(0x6e6dbe);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6e6dc0:{NFSU2_TR(0x6e6dc0);
w1(R+12,u8(u32(r1(R+12))+u32(u8(0x2ull))));
}
B6e6dc3:{NFSU2_TR(0x6e6dc3);
w1(R+4,u8(0x8ull));
}
B6e6dc5:{NFSU2_TR(0x6e6dc5);
w1(R+4,u8(u32(r1(R+4))-u32(r1(R+12))));
}
B6e6dc7:{NFSU2_TR(0x6e6dc7);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r1(U+0))));
}
B6e6dc9:{NFSU2_TR(0x6e6dc9);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x3ull))));
}
B6e6dcc:{NFSU2_TR(0x6e6dcc);
{goto L6e6dde;}
}
B6e6dce:L6e6dce:{c.instructions+=7;NFSU2_TR(0x6e6dce);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w4(R+0,u32(r1(U+0)));
}
B6e6dd1:{NFSU2_TR(0x6e6dd1);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6e6dd3:{NFSU2_TR(0x6e6dd3);
w1(R+12,u8(u32(r1(R+12))+u32(u8(0x1ull))));
}
B6e6dd5:{NFSU2_TR(0x6e6dd5);
w1(R+4,u8(0x8ull));
}
B6e6dd7:{NFSU2_TR(0x6e6dd7);
w1(R+4,u8(u32(r1(R+4))-u32(r1(R+12))));
}
B6e6dd9:{NFSU2_TR(0x6e6dd9);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r1(U+0))));
}
B6e6ddb:{NFSU2_TR(0x6e6ddb);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1ull))));
}
B6e6dde:L6e6dde:{c.instructions+=2;NFSU2_TR(0x6e6dde);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
w1(R+512,u8((r1(U+0))<(u8(0x8ull))));
}
B6e6de1:{NFSU2_TR(0x6e6de1);
if(r1(R+512)){{goto L6e6de6;}}
}
B6e6de3:L6e6de3:{c.instructions+=2;NFSU2_TR(0x6e6de3);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6e6de4:{NFSU2_TR(0x6e6de4);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B6e6de6:L6e6de6:{c.instructions+=3;NFSU2_TR(0x6e6de6);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B6e6deb:{NFSU2_TR(0x6e6deb);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6e6dec:{NFSU2_TR(0x6e6dec);
if(r1(R+518)){{goto L6e6e0b;}}
}
B6e6dee:L6e6dee:{c.instructions+=2;NFSU2_TR(0x6e6dee);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6e6def:{NFSU2_TR(0x6e6def);
if(r1(R+518)){{goto L6e6e00;}}
}
B6e6df1:L6e6df1:{c.instructions+=2;NFSU2_TR(0x6e6df1);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x2ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6e6df4:{NFSU2_TR(0x6e6df4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e6e13;}}
}
B6e6df6:L6e6df6:{c.instructions+=3;NFSU2_TR(0x6e6df6);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B6e6dfb:{NFSU2_TR(0x6e6dfb);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6e6dfe:{NFSU2_TR(0x6e6dfe);
{goto L6e6e13;}
}
B6e6e00:L6e6e00:{c.instructions+=3;NFSU2_TR(0x6e6e00);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B6e6e05:{NFSU2_TR(0x6e6e05);
u8 U[10];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),2);
s2(u32(r4(U+4)),r2(U+8));
}
B6e6e09:{NFSU2_TR(0x6e6e09);
{goto L6e6e13;}
}
B6e6e0b:L6e6e0b:{c.instructions+=2;NFSU2_TR(0x6e6e0b);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B6e6e10:{NFSU2_TR(0x6e6e10);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),1);
s1(u32(r4(U+4)),r1(U+8));
}
B6e6e13:L6e6e13:{c.instructions+=5;NFSU2_TR(0x6e6e13);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6e6e17:{NFSU2_TR(0x6e6e17);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B6e6e1b:{NFSU2_TR(0x6e6e1b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2ull))));
}
B6e6e1e:{NFSU2_TR(0x6e6e1e);
u8 U[22];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
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
B6e6e22:{NFSU2_TR(0x6e6e22);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e6d66u);}goto L6e6d66;}}
}
B6e6e28:L6e6e28:{c.instructions+=2;NFSU2_TR(0x6e6e28);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e6e29:{NFSU2_TR(0x6e6e29);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e6e2a:L6e6e2a:{c.instructions+=4;NFSU2_TR(0x6e6e2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e6e2b:{NFSU2_TR(0x6e6e2b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e6e2c:{NFSU2_TR(0x6e6e2c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6e6e2d:{NFSU2_TR(0x6e6e2d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e6e50:L6e6e50:{c.instructions+=15;NFSU2_TR(0x6e6e50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B6e6e53:{NFSU2_TR(0x6e6e53);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6e54:{NFSU2_TR(0x6e6e54);
__builtin_memmove((R+12),(R+4),4);
}
B6e6e56:{NFSU2_TR(0x6e6e56);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6e57:{NFSU2_TR(0x6e6e57);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6e58:{NFSU2_TR(0x6e6e58);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e6e5b:{NFSU2_TR(0x6e6e5b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6e6e5e:{NFSU2_TR(0x6e6e5e);
__builtin_memmove((R+4),(R+0),1);
}
B6e6e60:{NFSU2_TR(0x6e6e60);
w4(R+8,u32(r1(R+0)));
}
B6e6e63:{NFSU2_TR(0x6e6e63);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(R+4))==(u8(0x0ull))));
}
B6e6e66:{NFSU2_TR(0x6e6e66);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6e67:{NFSU2_TR(0x6e6e67);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e6e6b:{NFSU2_TR(0x6e6e6b);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6e6e6f:{NFSU2_TR(0x6e6e6f);
u8 U[12];
w4(U+0,u32(u32(u32(0xaull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6e6e73:{NFSU2_TR(0x6e6e73);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e6e79;}}
}
B6e6e75:L6e6e75:{c.instructions+=1;NFSU2_TR(0x6e6e75);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6e6e79:L6e6e79:{c.instructions+=9;NFSU2_TR(0x6e6e79);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B6e6e7d:{NFSU2_TR(0x6e6e7d);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e6e81:{NFSU2_TR(0x6e6e81);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e6e84:{NFSU2_TR(0x6e6e84);
__builtin_memmove((R+20),(R+28),4);
}
B6e6e86:{NFSU2_TR(0x6e6e86);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+20)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+20,u32(r8(U+16)));
}
B6e6e89:{NFSU2_TR(0x6e6e89);
{u32 ea_=u32(r4(R+20)+r4(R+0));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e6e8c:{NFSU2_TR(0x6e6e8c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e6e8e:{NFSU2_TR(0x6e6e8e);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6e6e91:{NFSU2_TR(0x6e6e91);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e6f36;}}
}
B6e6e97:L6e6e97:{c.instructions+=3;NFSU2_TR(0x6e6e97);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6e6e9b:{NFSU2_TR(0x6e6e9b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e6e9d:{NFSU2_TR(0x6e6e9d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6e6ed4;}}
}
B6e6e9f:L6e6e9f:{c.instructions+=2;NFSU2_TR(0x6e6e9f);
__builtin_memmove((R+12),(R+4),4);
}
B6e6ea1:{NFSU2_TR(0x6e6ea1);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B6e6ea4:L6e6ea4:{c.instructions+=4;NFSU2_TR(0x6e6ea4);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6e6ea8:{NFSU2_TR(0x6e6ea8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6e6eaa:{NFSU2_TR(0x6e6eaa);
u8 U[12];
w4(U+0,u32(u32(u32(0xaull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6e6eae:{NFSU2_TR(0x6e6eae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e6eb4;}}
}
B6e6eb0:L6e6eb0:{c.instructions+=1;NFSU2_TR(0x6e6eb0);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6e6eb4:L6e6eb4:{c.instructions+=6;NFSU2_TR(0x6e6eb4);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e6eb8:{NFSU2_TR(0x6e6eb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+20),(U+4),4);
}
B6e6ebb:{NFSU2_TR(0x6e6ebb);
{u32 ea_=u32(r4(R+20)+r4(R+4));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e6ebe:{NFSU2_TR(0x6e6ebe);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e6ec0:{NFSU2_TR(0x6e6ec0);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6e6ec3:{NFSU2_TR(0x6e6ec3);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6e6ee2;}}
}
B6e6ec5:L6e6ec5:{c.instructions+=5;NFSU2_TR(0x6e6ec5);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6e6ec9:{NFSU2_TR(0x6e6ec9);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6e6eca:{NFSU2_TR(0x6e6eca);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+4))));
}
B6e6ecc:{NFSU2_TR(0x6e6ecc);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e6ece:{NFSU2_TR(0x6e6ece);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e6ea4u);}goto L6e6ea4;}}
}
B6e6ed0:L6e6ed0:{c.instructions+=1;NFSU2_TR(0x6e6ed0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e6ed4:L6e6ed4:{c.instructions+=3;NFSU2_TR(0x6e6ed4);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6e6ed8:{NFSU2_TR(0x6e6ed8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6e6eda:{NFSU2_TR(0x6e6eda);
if(r1(R+518)){{goto L6e6f05;}}
}
B6e6edc:L6e6edc:{c.instructions+=2;NFSU2_TR(0x6e6edc);
u8 U[12];
w4(U+0,u32(u32(u32(0xaull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B6e6ee0:{NFSU2_TR(0x6e6ee0);
{goto L6e6f09;}
}
B6e6ee2:L6e6ee2:{c.instructions+=7;NFSU2_TR(0x6e6ee2);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e6ee6:{NFSU2_TR(0x6e6ee6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e6eea:{NFSU2_TR(0x6e6eea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6eeb:{NFSU2_TR(0x6e6eeb);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x4ull))));
}
B6e6eee:{NFSU2_TR(0x6e6eee);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6eef:{NFSU2_TR(0x6e6eef);
__builtin_memmove((R+4),(R+24),4);
}
B6e6ef1:{NFSU2_TR(0x6e6ef1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e6ef6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e6d40u);}goto L6e6d40;}
}
B6e6ef6:L6e6ef6:{c.instructions+=8;NFSU2_TR(0x6e6ef6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e6ef9:{NFSU2_TR(0x6e6ef9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e6efa:{NFSU2_TR(0x6e6efa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e6efb:{NFSU2_TR(0x6e6efb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e6efc:{NFSU2_TR(0x6e6efc);
w1(R+0,u8(0x1ull));
}
B6e6efe:{NFSU2_TR(0x6e6efe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e6eff:{NFSU2_TR(0x6e6eff);
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
B6e6f02:{NFSU2_TR(0x6e6f02);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e6f05:L6e6f05:{c.instructions+=1;NFSU2_TR(0x6e6f05);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B6e6f09:L6e6f09:{c.instructions+=9;NFSU2_TR(0x6e6f09);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e6f0d:{NFSU2_TR(0x6e6f0d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6f0e:{NFSU2_TR(0x6e6f0e);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6e6f12:{NFSU2_TR(0x6e6f12);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B6e6f13:{NFSU2_TR(0x6e6f13);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6e6f16:{NFSU2_TR(0x6e6f16);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B6e6f1a:{NFSU2_TR(0x6e6f1a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6f1b:{NFSU2_TR(0x6e6f1b);
__builtin_memmove((R+4),(R+12),4);
}
B6e6f1d:{NFSU2_TR(0x6e6f1d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e6f22ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e6d40u);}goto L6e6d40;}
}
B6e6f22:L6e6f22:{c.instructions+=10;NFSU2_TR(0x6e6f22);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B6e6f26:{NFSU2_TR(0x6e6f26);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e6f27:{NFSU2_TR(0x6e6f27);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e6f28:{NFSU2_TR(0x6e6f28);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B6e6f29:{NFSU2_TR(0x6e6f29);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e6f2a:{NFSU2_TR(0x6e6f2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e6f2d:{NFSU2_TR(0x6e6f2d);
w1(R+0,u8(0x1ull));
}
B6e6f2f:{NFSU2_TR(0x6e6f2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e6f30:{NFSU2_TR(0x6e6f30);
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
B6e6f33:{NFSU2_TR(0x6e6f33);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e6f36:L6e6f36:{c.instructions+=3;NFSU2_TR(0x6e6f36);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B6e6f37:{NFSU2_TR(0x6e6f37);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6e6f39:{NFSU2_TR(0x6e6f39);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6e6f77;}}
}
B6e6f3b:L6e6f3b:{c.instructions+=4;NFSU2_TR(0x6e6f3b);
__builtin_memmove((R+20),(R+4),4);
}
B6e6f3d:{NFSU2_TR(0x6e6f3d);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+20)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+20,u32(r8(U+16)));
}
B6e6f40:{NFSU2_TR(0x6e6f40);
w4(R+4,u32(0-u32(r4(R+4))));
}
B6e6f42:{NFSU2_TR(0x6e6f42);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e6f46:L6e6f46:{c.instructions+=4;NFSU2_TR(0x6e6f46);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6e6f4a:{NFSU2_TR(0x6e6f4a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6e6f4c:{NFSU2_TR(0x6e6f4c);
u8 U[12];
w4(U+0,u32(u32(u32(0xaull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6e6f50:{NFSU2_TR(0x6e6f50);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e6f56;}}
}
B6e6f52:L6e6f52:{c.instructions+=1;NFSU2_TR(0x6e6f52);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6e6f56:L6e6f56:{c.instructions+=7;NFSU2_TR(0x6e6f56);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e6f5a:{NFSU2_TR(0x6e6f5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6e6f5d:{NFSU2_TR(0x6e6f5d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e6f61:{NFSU2_TR(0x6e6f61);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e6f65:{NFSU2_TR(0x6e6f65);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e6f67:{NFSU2_TR(0x6e6f67);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6e6f6a:{NFSU2_TR(0x6e6f6a);
if(r1(R+518)){{goto L6e6f85;}}
}
B6e6f6c:L6e6f6c:{c.instructions+=5;NFSU2_TR(0x6e6f6c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e6f70:{NFSU2_TR(0x6e6f70);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B6e6f71:{NFSU2_TR(0x6e6f71);
w4(R+20,u32(u32(r4(R+20))+u32(r4(R+4))));
}
B6e6f73:{NFSU2_TR(0x6e6f73);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6e6f75:{NFSU2_TR(0x6e6f75);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e6f46u);}goto L6e6f46;}}
}
B6e6f77:L6e6f77:{c.instructions+=3;NFSU2_TR(0x6e6f77);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6e6f7b:{NFSU2_TR(0x6e6f7b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6e6f7d:{NFSU2_TR(0x6e6f7d);
if(r1(R+518)){{goto L6e6fa4;}}
}
B6e6f7f:L6e6f7f:{c.instructions+=2;NFSU2_TR(0x6e6f7f);
u8 U[12];
w4(U+0,u32(u32(u32(0xaull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B6e6f83:{NFSU2_TR(0x6e6f83);
{goto L6e6fa8;}
}
B6e6f85:L6e6f85:{c.instructions+=6;NFSU2_TR(0x6e6f85);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e6f89:{NFSU2_TR(0x6e6f89);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6e6f8c:{NFSU2_TR(0x6e6f8c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6f8d:{NFSU2_TR(0x6e6f8d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6f8e:{NFSU2_TR(0x6e6f8e);
__builtin_memmove((R+4),(R+12),4);
}
B6e6f90:{NFSU2_TR(0x6e6f90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e6f95ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e6d40u);}goto L6e6d40;}
}
B6e6f95:L6e6f95:{c.instructions+=8;NFSU2_TR(0x6e6f95);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e6f98:{NFSU2_TR(0x6e6f98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e6f99:{NFSU2_TR(0x6e6f99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e6f9a:{NFSU2_TR(0x6e6f9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e6f9b:{NFSU2_TR(0x6e6f9b);
w1(R+0,u8(0x1ull));
}
B6e6f9d:{NFSU2_TR(0x6e6f9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e6f9e:{NFSU2_TR(0x6e6f9e);
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
B6e6fa1:{NFSU2_TR(0x6e6fa1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e6fa4:L6e6fa4:{c.instructions+=1;NFSU2_TR(0x6e6fa4);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B6e6fa8:L6e6fa8:{c.instructions+=6;NFSU2_TR(0x6e6fa8);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e6fac:{NFSU2_TR(0x6e6fac);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6fad:{NFSU2_TR(0x6e6fad);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6e6fb0:{NFSU2_TR(0x6e6fb0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6fb1:{NFSU2_TR(0x6e6fb1);
__builtin_memmove((R+4),(R+12),4);
}
B6e6fb3:{NFSU2_TR(0x6e6fb3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e6fb8ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e6d40u);}goto L6e6d40;}
}
B6e6fb8:L6e6fb8:{c.instructions+=8;NFSU2_TR(0x6e6fb8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e6fb9:{NFSU2_TR(0x6e6fb9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e6fba:{NFSU2_TR(0x6e6fba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e6fbb:{NFSU2_TR(0x6e6fbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6e6fc2:{NFSU2_TR(0x6e6fc2);
w1(R+0,u8(0x1ull));
}
B6e6fc4:{NFSU2_TR(0x6e6fc4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e6fc5:{NFSU2_TR(0x6e6fc5);
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
B6e6fc8:{NFSU2_TR(0x6e6fc8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e6fd0:L6e6fd0:{c.instructions+=10;NFSU2_TR(0x6e6fd0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x50ull))));
}
B6e6fd3:{NFSU2_TR(0x6e6fd3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6fd4:{NFSU2_TR(0x6e6fd4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6fd5:{NFSU2_TR(0x6e6fd5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6fd6:{NFSU2_TR(0x6e6fd6);
__builtin_memmove((R+12),(R+4),4);
}
B6e6fd8:{NFSU2_TR(0x6e6fd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e6fdb:{NFSU2_TR(0x6e6fdb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e6fdc:{NFSU2_TR(0x6e6fdc);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6e6fde:{NFSU2_TR(0x6e6fde);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(U+6))<(r2(R+28))));
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+28))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B6e6fe2:{NFSU2_TR(0x6e6fe2);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6e7043u,6e7);}
}
B6e6fe4:L6e6fe4:{c.instructions+=4;NFSU2_TR(0x6e6fe4);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e6fe8:{NFSU2_TR(0x6e6fe8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6e6feb:{NFSU2_TR(0x6e6feb);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6e6fed:{NFSU2_TR(0x6e6fed);
if(r1(R+518)){{goto L6e6ff8;}}
}
B6e6fef:L6e6fef:{c.instructions+=3;NFSU2_TR(0x6e6fef);
w4(R+0,u32(r1(R+0)));
}
B6e6ff2:{NFSU2_TR(0x6e6ff2);
u8 U[12];
w4(U+0,u32(u32(u32(0xaull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6e6ff6:{NFSU2_TR(0x6e6ff6);
{goto L6e6fff;}
}
B6e6ff8:L6e6ff8:{c.instructions+=2;NFSU2_TR(0x6e6ff8);
w4(R+4,u32(r1(R+0)));
}
B6e6ffb:{NFSU2_TR(0x6e6ffb);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6e6fff:L6e6fff:{c.instructions+=1;NFSU2_TR(0x6e6fff);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
TAIL_STATIC(0x6e7003u,6e7);
}
XIT:NFSU2_TR_EXIT(0x6e6,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
