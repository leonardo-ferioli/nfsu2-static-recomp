#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_592(u8* __restrict R,Cpu& c);
u32 body_593(u8* __restrict R,Cpu& c);
u32 body_598(u8* __restrict R,Cpu& c);
u32 body_59a(u8* __restrict R,Cpu& c);
u32 body_5a7(u8* __restrict R,Cpu& c);
u32 body_5a8(u8* __restrict R,Cpu& c);
u32 body_5aa(u8* __restrict R,Cpu& c);
u32 body_5ac(u8* __restrict R,Cpu& c);
u32 body_5b3(u8* __restrict R,Cpu& c);
u32 body_5b4(u8* __restrict R,Cpu& c);
u32 body_5b6(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x5b5,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x5b5,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_5b5(u8* __restrict R,Cpu& c);
u32 page_5b5(Cpu& c){return body_5b5(c.regs.data(),c);}
__attribute__((noinline)) u32 body_5b5(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x5b5003:goto L5b5003;
case 0x5b5005:c.instructions+=1;goto B5b5005;
case 0x5b5007:goto L5b5007;
case 0x5b500c:c.instructions+=1;goto B5b500c;
case 0x5b500e:goto L5b500e;
case 0x5b5014:c.instructions+=2;goto B5b5014;
case 0x5b5016:c.instructions+=1;goto B5b5016;
case 0x5b5018:goto L5b5018;
case 0x5b501e:c.instructions+=2;goto B5b501e;
case 0x5b5020:c.instructions+=1;goto B5b5020;
case 0x5b5022:goto L5b5022;
case 0x5b5027:c.instructions+=1;goto B5b5027;
case 0x5b5029:goto L5b5029;
case 0x5b502b:c.instructions+=1;goto B5b502b;
case 0x5b502d:goto L5b502d;
case 0x5b502f:c.instructions+=1;goto B5b502f;
case 0x5b5031:goto L5b5031;
case 0x5b5036:goto L5b5036;
case 0x5b5037:c.instructions+=7;goto B5b5037;
case 0x5b5038:c.instructions+=6;goto B5b5038;
case 0x5b503c:c.instructions+=5;goto B5b503c;
case 0x5b5040:c.instructions+=4;goto B5b5040;
case 0x5b5041:c.instructions+=3;goto B5b5041;
case 0x5b5042:c.instructions+=2;goto B5b5042;
case 0x5b5043:c.instructions+=1;goto B5b5043;
case 0x5b5048:goto L5b5048;
case 0x5b5049:c.instructions+=1;goto B5b5049;
case 0x5b5050:goto L5b5050;
case 0x5b5052:c.instructions+=13;goto B5b5052;
case 0x5b5057:c.instructions+=12;goto B5b5057;
case 0x5b505d:c.instructions+=11;goto B5b505d;
case 0x5b505e:c.instructions+=10;goto B5b505e;
case 0x5b5065:c.instructions+=9;goto B5b5065;
case 0x5b5066:c.instructions+=8;goto B5b5066;
case 0x5b5067:c.instructions+=7;goto B5b5067;
case 0x5b5068:c.instructions+=6;goto B5b5068;
case 0x5b506a:c.instructions+=5;goto B5b506a;
case 0x5b5070:c.instructions+=4;goto B5b5070;
case 0x5b5073:c.instructions+=3;goto B5b5073;
case 0x5b5075:c.instructions+=2;goto B5b5075;
case 0x5b5077:c.instructions+=1;goto B5b5077;
case 0x5b5079:goto L5b5079;
case 0x5b507f:c.instructions+=3;goto B5b507f;
case 0x5b5082:c.instructions+=2;goto B5b5082;
case 0x5b5084:c.instructions+=1;goto B5b5084;
case 0x5b5086:goto L5b5086;
case 0x5b5088:c.instructions+=1;goto B5b5088;
case 0x5b508e:goto L5b508e;
case 0x5b5094:c.instructions+=2;goto B5b5094;
case 0x5b5098:c.instructions+=1;goto B5b5098;
case 0x5b509a:goto L5b509a;
case 0x5b509c:c.instructions+=1;goto B5b509c;
case 0x5b509e:goto L5b509e;
case 0x5b50a0:c.instructions+=1;goto B5b50a0;
case 0x5b50a6:goto L5b50a6;
case 0x5b50a8:c.instructions+=2;goto B5b50a8;
case 0x5b50a9:c.instructions+=1;goto B5b50a9;
case 0x5b50ac:goto L5b50ac;
case 0x5b50ae:c.instructions+=1;goto B5b50ae;
case 0x5b50b4:goto L5b50b4;
case 0x5b50ba:c.instructions+=4;goto B5b50ba;
case 0x5b50c0:c.instructions+=3;goto B5b50c0;
case 0x5b50c2:c.instructions+=2;goto B5b50c2;
case 0x5b50c3:c.instructions+=1;goto B5b50c3;
case 0x5b50c6:goto L5b50c6;
case 0x5b50c8:c.instructions+=1;goto B5b50c8;
case 0x5b50ce:goto L5b50ce;
case 0x5b50d4:c.instructions+=2;goto B5b50d4;
case 0x5b50d6:c.instructions+=1;goto B5b50d6;
case 0x5b50d8:goto L5b50d8;
case 0x5b50db:c.instructions+=9;goto B5b50db;
case 0x5b50e1:c.instructions+=8;goto B5b50e1;
case 0x5b50e3:c.instructions+=7;goto B5b50e3;
case 0x5b50e7:c.instructions+=6;goto B5b50e7;
case 0x5b50eb:c.instructions+=5;goto B5b50eb;
case 0x5b50f1:c.instructions+=4;goto B5b50f1;
case 0x5b50f7:c.instructions+=3;goto B5b50f7;
case 0x5b50f9:c.instructions+=2;goto B5b50f9;
case 0x5b50fc:c.instructions+=1;goto B5b50fc;
case 0x5b50fe:goto L5b50fe;
case 0x5b5100:c.instructions+=1;goto B5b5100;
case 0x5b5102:goto L5b5102;
case 0x5b5104:goto L5b5104;
case 0x5b5105:c.instructions+=2;goto B5b5105;
case 0x5b5107:c.instructions+=1;goto B5b5107;
case 0x5b510c:goto L5b510c;
case 0x5b5112:c.instructions+=2;goto B5b5112;
case 0x5b5114:c.instructions+=1;goto B5b5114;
case 0x5b5117:goto L5b5117;
case 0x5b511d:c.instructions+=3;goto B5b511d;
case 0x5b5120:c.instructions+=2;goto B5b5120;
case 0x5b5121:c.instructions+=1;goto B5b5121;
case 0x5b5123:goto L5b5123;
case 0x5b5125:c.instructions+=9;goto B5b5125;
case 0x5b5128:c.instructions+=8;goto B5b5128;
case 0x5b512b:c.instructions+=7;goto B5b512b;
case 0x5b512d:c.instructions+=6;goto B5b512d;
case 0x5b512f:c.instructions+=5;goto B5b512f;
case 0x5b5132:c.instructions+=4;goto B5b5132;
case 0x5b5135:c.instructions+=3;goto B5b5135;
case 0x5b5139:c.instructions+=2;goto B5b5139;
case 0x5b513c:c.instructions+=1;goto B5b513c;
case 0x5b513f:goto L5b513f;
case 0x5b5145:c.instructions+=2;goto B5b5145;
case 0x5b5147:c.instructions+=1;goto B5b5147;
case 0x5b514a:goto L5b514a;
case 0x5b5150:c.instructions+=3;goto B5b5150;
case 0x5b5153:c.instructions+=2;goto B5b5153;
case 0x5b5154:c.instructions+=1;goto B5b5154;
case 0x5b5156:goto L5b5156;
case 0x5b5158:c.instructions+=9;goto B5b5158;
case 0x5b515b:c.instructions+=8;goto B5b515b;
case 0x5b515e:c.instructions+=7;goto B5b515e;
case 0x5b5160:c.instructions+=6;goto B5b5160;
case 0x5b5162:c.instructions+=5;goto B5b5162;
case 0x5b5165:c.instructions+=4;goto B5b5165;
case 0x5b5168:c.instructions+=3;goto B5b5168;
case 0x5b516c:c.instructions+=2;goto B5b516c;
case 0x5b516f:c.instructions+=1;goto B5b516f;
case 0x5b5172:goto L5b5172;
case 0x5b5178:c.instructions+=8;goto B5b5178;
case 0x5b517e:c.instructions+=7;goto B5b517e;
case 0x5b517f:c.instructions+=6;goto B5b517f;
case 0x5b5181:c.instructions+=5;goto B5b5181;
case 0x5b5183:c.instructions+=4;goto B5b5183;
case 0x5b5187:c.instructions+=3;goto B5b5187;
case 0x5b518b:c.instructions+=2;goto B5b518b;
case 0x5b518d:c.instructions+=1;goto B5b518d;
case 0x5b5190:goto L5b5190;
case 0x5b5192:c.instructions+=3;goto B5b5192;
case 0x5b5193:c.instructions+=2;goto B5b5193;
case 0x5b5195:c.instructions+=1;goto B5b5195;
case 0x5b5198:goto L5b5198;
case 0x5b5199:c.instructions+=3;goto B5b5199;
case 0x5b519b:c.instructions+=2;goto B5b519b;
case 0x5b519d:c.instructions+=1;goto B5b519d;
case 0x5b51a0:goto L5b51a0;
case 0x5b51a2:c.instructions+=3;goto B5b51a2;
case 0x5b51a3:c.instructions+=2;goto B5b51a3;
case 0x5b51a5:c.instructions+=1;goto B5b51a5;
case 0x5b51a8:goto L5b51a8;
case 0x5b51a9:c.instructions+=2;goto B5b51a9;
case 0x5b51ab:c.instructions+=1;goto B5b51ab;
case 0x5b51b0:goto L5b51b0;
case 0x5b51b2:c.instructions+=1;goto B5b51b2;
case 0x5b51b7:goto L5b51b7;
case 0x5b51b9:c.instructions+=2;goto B5b51b9;
case 0x5b51bb:c.instructions+=1;goto B5b51bb;
case 0x5b51c0:goto L5b51c0;
case 0x5b51c3:c.instructions+=3;goto B5b51c3;
case 0x5b51c5:c.instructions+=2;goto B5b51c5;
case 0x5b51c6:c.instructions+=1;goto B5b51c6;
case 0x5b51cc:goto L5b51cc;
case 0x5b51d2:c.instructions+=2;goto B5b51d2;
case 0x5b51d4:c.instructions+=1;goto B5b51d4;
case 0x5b51d7:goto L5b51d7;
case 0x5b51d9:c.instructions+=1;goto B5b51d9;
case 0x5b51db:goto L5b51db;
case 0x5b51e1:c.instructions+=2;goto B5b51e1;
case 0x5b51e3:c.instructions+=1;goto B5b51e3;
case 0x5b51e6:goto L5b51e6;
case 0x5b51e8:c.instructions+=1;goto B5b51e8;
case 0x5b51ea:goto L5b51ea;
case 0x5b51f0:c.instructions+=3;goto B5b51f0;
case 0x5b51f3:c.instructions+=2;goto B5b51f3;
case 0x5b51f5:c.instructions+=1;goto B5b51f5;
case 0x5b51f7:goto L5b51f7;
case 0x5b51fd:c.instructions+=3;goto B5b51fd;
case 0x5b5200:c.instructions+=2;goto B5b5200;
case 0x5b5202:c.instructions+=1;goto B5b5202;
case 0x5b5204:goto L5b5204;
case 0x5b5207:c.instructions+=2;goto B5b5207;
case 0x5b5209:c.instructions+=1;goto B5b5209;
case 0x5b520b:goto L5b520b;
case 0x5b5211:c.instructions+=1;goto B5b5211;
case 0x5b5217:goto L5b5217;
case 0x5b521d:c.instructions+=3;goto B5b521d;
case 0x5b5220:c.instructions+=2;goto B5b5220;
case 0x5b5222:c.instructions+=1;goto B5b5222;
case 0x5b5228:goto L5b5228;
case 0x5b522d:c.instructions+=7;goto B5b522d;
case 0x5b5233:c.instructions+=6;goto B5b5233;
case 0x5b5234:c.instructions+=5;goto B5b5234;
case 0x5b5235:c.instructions+=4;goto B5b5235;
case 0x5b5239:c.instructions+=3;goto B5b5239;
case 0x5b5240:c.instructions+=2;goto B5b5240;
case 0x5b5243:c.instructions+=1;goto B5b5243;
case 0x5b5246:goto L5b5246;
case 0x5b524c:c.instructions+=3;goto B5b524c;
case 0x5b524f:c.instructions+=2;goto B5b524f;
case 0x5b5251:c.instructions+=1;goto B5b5251;
case 0x5b5253:goto L5b5253;
case 0x5b5259:c.instructions+=2;goto B5b5259;
case 0x5b525a:c.instructions+=1;goto B5b525a;
case 0x5b525f:goto L5b525f;
case 0x5b5262:c.instructions+=2;goto B5b5262;
case 0x5b5264:c.instructions+=1;goto B5b5264;
case 0x5b5266:goto L5b5266;
case 0x5b526b:c.instructions+=1;goto B5b526b;
case 0x5b5271:goto L5b5271;
case 0x5b5277:c.instructions+=2;goto B5b5277;
case 0x5b527d:c.instructions+=1;goto B5b527d;
case 0x5b5283:goto L5b5283;
case 0x5b5289:c.instructions+=3;goto B5b5289;
case 0x5b528c:c.instructions+=2;goto B5b528c;
case 0x5b528e:c.instructions+=1;goto B5b528e;
case 0x5b5290:goto L5b5290;
case 0x5b5296:c.instructions+=2;goto B5b5296;
case 0x5b5297:c.instructions+=1;goto B5b5297;
case 0x5b529c:goto L5b529c;
case 0x5b529f:c.instructions+=2;goto B5b529f;
case 0x5b52a1:c.instructions+=1;goto B5b52a1;
case 0x5b52a3:goto L5b52a3;
case 0x5b52a9:c.instructions+=1;goto B5b52a9;
case 0x5b52af:goto L5b52af;
case 0x5b52b5:c.instructions+=2;goto B5b52b5;
case 0x5b52bb:c.instructions+=1;goto B5b52bb;
case 0x5b52c1:goto L5b52c1;
case 0x5b52c6:c.instructions+=2;goto B5b52c6;
case 0x5b52c7:c.instructions+=1;goto B5b52c7;
case 0x5b52cc:goto L5b52cc;
case 0x5b52cf:c.instructions+=4;goto B5b52cf;
case 0x5b52d3:c.instructions+=3;goto B5b52d3;
case 0x5b52d5:c.instructions+=2;goto B5b52d5;
case 0x5b52dd:c.instructions+=1;goto B5b52dd;
case 0x5b52df:goto L5b52df;
case 0x5b52e5:c.instructions+=6;goto B5b52e5;
case 0x5b52eb:c.instructions+=5;goto B5b52eb;
case 0x5b52ec:c.instructions+=4;goto B5b52ec;
case 0x5b52ed:c.instructions+=3;goto B5b52ed;
case 0x5b52ee:c.instructions+=2;goto B5b52ee;
case 0x5b52f0:c.instructions+=1;goto B5b52f0;
case 0x5b52f5:goto L5b52f5;
case 0x5b52f7:goto L5b52f7;
case 0x5b52f9:goto L5b52f9;
case 0x5b52fd:c.instructions+=4;goto B5b52fd;
case 0x5b52fe:c.instructions+=3;goto B5b52fe;
case 0x5b5303:c.instructions+=2;goto B5b5303;
case 0x5b530b:c.instructions+=1;goto B5b530b;
case 0x5b5310:goto L5b5310;
case 0x5b5314:c.instructions+=5;goto B5b5314;
case 0x5b5315:c.instructions+=4;goto B5b5315;
case 0x5b5316:c.instructions+=3;goto B5b5316;
case 0x5b531d:c.instructions+=2;goto B5b531d;
case 0x5b5320:c.instructions+=1;goto B5b5320;
case 0x5b5330:goto L5b5330;
case 0x5b5331:c.instructions+=3;goto B5b5331;
case 0x5b5333:c.instructions+=2;goto B5b5333;
case 0x5b5337:c.instructions+=1;goto B5b5337;
case 0x5b5339:goto L5b5339;
case 0x5b533b:c.instructions+=3;goto B5b533b;
case 0x5b533d:c.instructions+=2;goto B5b533d;
case 0x5b533f:c.instructions+=1;goto B5b533f;
case 0x5b5344:goto L5b5344;
case 0x5b5347:c.instructions+=2;goto B5b5347;
case 0x5b5348:c.instructions+=1;goto B5b5348;
case 0x5b5350:goto L5b5350;
case 0x5b5351:c.instructions+=3;goto B5b5351;
case 0x5b5353:c.instructions+=2;goto B5b5353;
case 0x5b5357:c.instructions+=1;goto B5b5357;
case 0x5b5359:goto L5b5359;
case 0x5b535d:c.instructions+=2;goto B5b535d;
case 0x5b535f:c.instructions+=1;goto B5b535f;
case 0x5b5361:goto L5b5361;
case 0x5b5363:c.instructions+=3;goto B5b5363;
case 0x5b5365:c.instructions+=2;goto B5b5365;
case 0x5b5367:c.instructions+=1;goto B5b5367;
case 0x5b536c:goto L5b536c;
case 0x5b536f:c.instructions+=2;goto B5b536f;
case 0x5b5370:c.instructions+=1;goto B5b5370;
case 0x5b5380:goto L5b5380;
case 0x5b5381:c.instructions+=3;goto B5b5381;
case 0x5b5383:c.instructions+=2;goto B5b5383;
case 0x5b5387:c.instructions+=1;goto B5b5387;
case 0x5b5389:goto L5b5389;
case 0x5b538b:c.instructions+=3;goto B5b538b;
case 0x5b538d:c.instructions+=2;goto B5b538d;
case 0x5b538f:c.instructions+=1;goto B5b538f;
case 0x5b5394:goto L5b5394;
case 0x5b539a:c.instructions+=2;goto B5b539a;
case 0x5b539b:c.instructions+=1;goto B5b539b;
case 0x5b53a0:goto L5b53a0;
case 0x5b53a1:c.instructions+=4;goto B5b53a1;
case 0x5b53a2:c.instructions+=3;goto B5b53a2;
case 0x5b53a4:c.instructions+=2;goto B5b53a4;
case 0x5b53a8:c.instructions+=1;goto B5b53a8;
case 0x5b53aa:goto L5b53aa;
case 0x5b53ac:c.instructions+=3;goto B5b53ac;
case 0x5b53ae:c.instructions+=2;goto B5b53ae;
case 0x5b53b0:c.instructions+=1;goto B5b53b0;
case 0x5b53b5:goto L5b53b5;
case 0x5b53b7:c.instructions+=1;goto B5b53b7;
case 0x5b53bc:goto L5b53bc;
case 0x5b53c2:c.instructions+=11;goto B5b53c2;
case 0x5b53c8:c.instructions+=10;goto B5b53c8;
case 0x5b53cb:c.instructions+=9;goto B5b53cb;
case 0x5b53cd:c.instructions+=8;goto B5b53cd;
case 0x5b53d3:c.instructions+=7;goto B5b53d3;
case 0x5b53d5:c.instructions+=6;goto B5b53d5;
case 0x5b53db:c.instructions+=5;goto B5b53db;
case 0x5b53e1:c.instructions+=4;goto B5b53e1;
case 0x5b53e7:c.instructions+=3;goto B5b53e7;
case 0x5b53e9:c.instructions+=2;goto B5b53e9;
case 0x5b53ed:c.instructions+=1;goto B5b53ed;
case 0x5b53ef:goto L5b53ef;
case 0x5b53f1:c.instructions+=4;goto B5b53f1;
case 0x5b53f3:c.instructions+=3;goto B5b53f3;
case 0x5b53f5:c.instructions+=2;goto B5b53f5;
case 0x5b53f7:c.instructions+=1;goto B5b53f7;
case 0x5b53fc:goto L5b53fc;
case 0x5b5402:c.instructions+=10;goto B5b5402;
case 0x5b5408:c.instructions+=9;goto B5b5408;
case 0x5b540e:c.instructions+=8;goto B5b540e;
case 0x5b5414:c.instructions+=7;goto B5b5414;
case 0x5b541a:c.instructions+=6;goto B5b541a;
case 0x5b541c:c.instructions+=5;goto B5b541c;
case 0x5b5422:c.instructions+=4;goto B5b5422;
case 0x5b5426:c.instructions+=3;goto B5b5426;
case 0x5b542c:c.instructions+=2;goto B5b542c;
case 0x5b5432:c.instructions+=1;goto B5b5432;
case 0x5b5437:goto L5b5437;
case 0x5b543b:c.instructions+=10;goto B5b543b;
case 0x5b543f:c.instructions+=9;goto B5b543f;
case 0x5b5440:c.instructions+=8;goto B5b5440;
case 0x5b5446:c.instructions+=7;goto B5b5446;
case 0x5b544c:c.instructions+=6;goto B5b544c;
case 0x5b544e:c.instructions+=5;goto B5b544e;
case 0x5b5452:c.instructions+=4;goto B5b5452;
case 0x5b5458:c.instructions+=3;goto B5b5458;
case 0x5b545a:c.instructions+=2;goto B5b545a;
case 0x5b545d:c.instructions+=1;goto B5b545d;
case 0x5b545f:goto L5b545f;
case 0x5b5463:c.instructions+=5;goto B5b5463;
case 0x5b5469:c.instructions+=4;goto B5b5469;
case 0x5b546d:c.instructions+=3;goto B5b546d;
case 0x5b546f:c.instructions+=2;goto B5b546f;
case 0x5b5472:c.instructions+=1;goto B5b5472;
case 0x5b5474:goto L5b5474;
case 0x5b5476:c.instructions+=1;goto B5b5476;
case 0x5b547c:goto L5b547c;
case 0x5b547d:c.instructions+=1;goto B5b547d;
case 0x5b547e:goto L5b547e;
case 0x5b5484:c.instructions+=2;goto B5b5484;
case 0x5b5485:c.instructions+=1;goto B5b5485;
case 0x5b5490:goto L5b5490;
case 0x5b5493:c.instructions+=4;goto B5b5493;
case 0x5b5494:c.instructions+=3;goto B5b5494;
case 0x5b5496:c.instructions+=2;goto B5b5496;
case 0x5b549a:c.instructions+=1;goto B5b549a;
case 0x5b549c:goto L5b549c;
case 0x5b549e:c.instructions+=3;goto B5b549e;
case 0x5b54a0:c.instructions+=2;goto B5b54a0;
case 0x5b54a2:c.instructions+=1;goto B5b54a2;
case 0x5b54a7:goto L5b54a7;
case 0x5b54ab:c.instructions+=1;goto B5b54ab;
case 0x5b54ad:goto L5b54ad;
case 0x5b54af:c.instructions+=4;goto B5b54af;
case 0x5b54b1:c.instructions+=3;goto B5b54b1;
case 0x5b54b3:c.instructions+=2;goto B5b54b3;
case 0x5b54b5:c.instructions+=1;goto B5b54b5;
case 0x5b54ba:goto L5b54ba;
case 0x5b54c0:c.instructions+=82;goto B5b54c0;
case 0x5b54c6:c.instructions+=81;goto B5b54c6;
case 0x5b54cc:c.instructions+=80;goto B5b54cc;
case 0x5b54d0:c.instructions+=79;goto B5b54d0;
case 0x5b54d4:c.instructions+=78;goto B5b54d4;
case 0x5b54da:c.instructions+=77;goto B5b54da;
case 0x5b54e0:c.instructions+=76;goto B5b54e0;
case 0x5b54e6:c.instructions+=75;goto B5b54e6;
case 0x5b54ec:c.instructions+=74;goto B5b54ec;
case 0x5b54ee:c.instructions+=73;goto B5b54ee;
case 0x5b54f4:c.instructions+=72;goto B5b54f4;
case 0x5b54f6:c.instructions+=71;goto B5b54f6;
case 0x5b54fc:c.instructions+=70;goto B5b54fc;
case 0x5b5502:c.instructions+=69;goto B5b5502;
case 0x5b5508:c.instructions+=68;goto B5b5508;
case 0x5b550e:c.instructions+=67;goto B5b550e;
case 0x5b5510:c.instructions+=66;goto B5b5510;
case 0x5b5514:c.instructions+=65;goto B5b5514;
case 0x5b551a:c.instructions+=64;goto B5b551a;
case 0x5b5520:c.instructions+=63;goto B5b5520;
case 0x5b5526:c.instructions+=62;goto B5b5526;
case 0x5b552c:c.instructions+=61;goto B5b552c;
case 0x5b552e:c.instructions+=60;goto B5b552e;
case 0x5b5530:c.instructions+=59;goto B5b5530;
case 0x5b5536:c.instructions+=58;goto B5b5536;
case 0x5b553c:c.instructions+=57;goto B5b553c;
case 0x5b5542:c.instructions+=56;goto B5b5542;
case 0x5b5544:c.instructions+=55;goto B5b5544;
case 0x5b5548:c.instructions+=54;goto B5b5548;
case 0x5b554e:c.instructions+=53;goto B5b554e;
case 0x5b5554:c.instructions+=52;goto B5b5554;
case 0x5b555a:c.instructions+=51;goto B5b555a;
case 0x5b5560:c.instructions+=50;goto B5b5560;
case 0x5b5566:c.instructions+=49;goto B5b5566;
case 0x5b556c:c.instructions+=48;goto B5b556c;
case 0x5b556e:c.instructions+=47;goto B5b556e;
case 0x5b5574:c.instructions+=46;goto B5b5574;
case 0x5b5576:c.instructions+=45;goto B5b5576;
case 0x5b557c:c.instructions+=44;goto B5b557c;
case 0x5b5582:c.instructions+=43;goto B5b5582;
case 0x5b5588:c.instructions+=42;goto B5b5588;
case 0x5b558e:c.instructions+=41;goto B5b558e;
case 0x5b5590:c.instructions+=40;goto B5b5590;
case 0x5b5594:c.instructions+=39;goto B5b5594;
case 0x5b5596:c.instructions+=38;goto B5b5596;
case 0x5b559a:c.instructions+=37;goto B5b559a;
case 0x5b55a0:c.instructions+=36;goto B5b55a0;
case 0x5b55a6:c.instructions+=35;goto B5b55a6;
case 0x5b55ac:c.instructions+=34;goto B5b55ac;
case 0x5b55ae:c.instructions+=33;goto B5b55ae;
case 0x5b55b4:c.instructions+=32;goto B5b55b4;
case 0x5b55b8:c.instructions+=31;goto B5b55b8;
case 0x5b55bb:c.instructions+=30;goto B5b55bb;
case 0x5b55c1:c.instructions+=29;goto B5b55c1;
case 0x5b55c7:c.instructions+=28;goto B5b55c7;
case 0x5b55cd:c.instructions+=27;goto B5b55cd;
case 0x5b55cf:c.instructions+=26;goto B5b55cf;
case 0x5b55d5:c.instructions+=25;goto B5b55d5;
case 0x5b55d9:c.instructions+=24;goto B5b55d9;
case 0x5b55df:c.instructions+=23;goto B5b55df;
case 0x5b55e5:c.instructions+=22;goto B5b55e5;
case 0x5b55eb:c.instructions+=21;goto B5b55eb;
case 0x5b55f1:c.instructions+=20;goto B5b55f1;
case 0x5b55f3:c.instructions+=19;goto B5b55f3;
case 0x5b55f9:c.instructions+=18;goto B5b55f9;
case 0x5b55fd:c.instructions+=17;goto B5b55fd;
case 0x5b5603:c.instructions+=16;goto B5b5603;
case 0x5b5609:c.instructions+=15;goto B5b5609;
case 0x5b560f:c.instructions+=14;goto B5b560f;
case 0x5b5615:c.instructions+=13;goto B5b5615;
case 0x5b5617:c.instructions+=12;goto B5b5617;
case 0x5b561b:c.instructions+=11;goto B5b561b;
case 0x5b5621:c.instructions+=10;goto B5b5621;
case 0x5b5627:c.instructions+=9;goto B5b5627;
case 0x5b562d:c.instructions+=8;goto B5b562d;
case 0x5b5633:c.instructions+=7;goto B5b5633;
case 0x5b5635:c.instructions+=6;goto B5b5635;
case 0x5b5639:c.instructions+=5;goto B5b5639;
case 0x5b563f:c.instructions+=4;goto B5b563f;
case 0x5b5645:c.instructions+=3;goto B5b5645;
case 0x5b5647:c.instructions+=2;goto B5b5647;
case 0x5b564a:c.instructions+=1;goto B5b564a;
case 0x5b564c:goto L5b564c;
case 0x5b5652:c.instructions+=3;goto B5b5652;
case 0x5b5658:c.instructions+=2;goto B5b5658;
case 0x5b565e:c.instructions+=1;goto B5b565e;
case 0x5b5660:goto L5b5660;
case 0x5b5666:c.instructions+=2;goto B5b5666;
case 0x5b566c:c.instructions+=1;goto B5b566c;
case 0x5b5672:goto L5b5672;
case 0x5b5676:c.instructions+=3;goto B5b5676;
case 0x5b5678:c.instructions+=2;goto B5b5678;
case 0x5b5679:c.instructions+=1;goto B5b5679;
case 0x5b5680:goto L5b5680;
case 0x5b5686:c.instructions+=5;goto B5b5686;
case 0x5b5689:c.instructions+=4;goto B5b5689;
case 0x5b568c:c.instructions+=3;goto B5b568c;
case 0x5b5690:c.instructions+=2;goto B5b5690;
case 0x5b5692:c.instructions+=1;goto B5b5692;
case 0x5b5694:goto L5b5694;
case 0x5b569a:c.instructions+=3;goto B5b569a;
case 0x5b569c:c.instructions+=2;goto B5b569c;
case 0x5b569f:c.instructions+=1;goto B5b569f;
case 0x5b56a1:goto L5b56a1;
case 0x5b56a5:c.instructions+=6;goto B5b56a5;
case 0x5b56ab:c.instructions+=5;goto B5b56ab;
case 0x5b56ad:c.instructions+=4;goto B5b56ad;
case 0x5b56af:c.instructions+=3;goto B5b56af;
case 0x5b56b1:c.instructions+=2;goto B5b56b1;
case 0x5b56b4:c.instructions+=1;goto B5b56b4;
case 0x5b56b6:goto L5b56b6;
case 0x5b56bc:c.instructions+=2;goto B5b56bc;
case 0x5b56bf:c.instructions+=1;goto B5b56bf;
case 0x5b56c0:goto L5b56c0;
case 0x5b56c2:c.instructions+=3;goto B5b56c2;
case 0x5b56c8:c.instructions+=2;goto B5b56c8;
case 0x5b56cb:c.instructions+=1;goto B5b56cb;
case 0x5b56cc:goto L5b56cc;
case 0x5b56d0:c.instructions+=2;goto B5b56d0;
case 0x5b56d3:c.instructions+=1;goto B5b56d3;
case 0x5b56e0:goto L5b56e0;
case 0x5b56e3:c.instructions+=21;goto B5b56e3;
case 0x5b56e4:c.instructions+=20;goto B5b56e4;
case 0x5b56e6:c.instructions+=19;goto B5b56e6;
case 0x5b56ec:c.instructions+=18;goto B5b56ec;
case 0x5b56f2:c.instructions+=17;goto B5b56f2;
case 0x5b56f6:c.instructions+=16;goto B5b56f6;
case 0x5b56fa:c.instructions+=15;goto B5b56fa;
case 0x5b56fe:c.instructions+=14;goto B5b56fe;
case 0x5b5702:c.instructions+=13;goto B5b5702;
case 0x5b5708:c.instructions+=12;goto B5b5708;
case 0x5b5710:c.instructions+=11;goto B5b5710;
case 0x5b5716:c.instructions+=10;goto B5b5716;
case 0x5b571a:c.instructions+=9;goto B5b571a;
case 0x5b5722:c.instructions+=8;goto B5b5722;
case 0x5b572a:c.instructions+=7;goto B5b572a;
case 0x5b572e:c.instructions+=6;goto B5b572e;
case 0x5b5734:c.instructions+=5;goto B5b5734;
case 0x5b5738:c.instructions+=4;goto B5b5738;
case 0x5b573e:c.instructions+=3;goto B5b573e;
case 0x5b5740:c.instructions+=2;goto B5b5740;
case 0x5b5743:c.instructions+=1;goto B5b5743;
case 0x5b5745:goto L5b5745;
case 0x5b5749:c.instructions+=3;goto B5b5749;
case 0x5b574a:c.instructions+=2;goto B5b574a;
case 0x5b574e:c.instructions+=1;goto B5b574e;
case 0x5b5753:goto L5b5753;
case 0x5b5759:c.instructions+=6;goto B5b5759;
case 0x5b575d:c.instructions+=5;goto B5b575d;
case 0x5b5763:c.instructions+=4;goto B5b5763;
case 0x5b5767:c.instructions+=3;goto B5b5767;
case 0x5b5769:c.instructions+=2;goto B5b5769;
case 0x5b576c:c.instructions+=1;goto B5b576c;
case 0x5b576e:goto L5b576e;
case 0x5b5772:c.instructions+=3;goto B5b5772;
case 0x5b5776:c.instructions+=2;goto B5b5776;
case 0x5b577a:c.instructions+=1;goto B5b577a;
case 0x5b577c:goto L5b577c;
case 0x5b577e:goto L5b577e;
case 0x5b5782:c.instructions+=6;goto B5b5782;
case 0x5b5788:c.instructions+=5;goto B5b5788;
case 0x5b578c:c.instructions+=4;goto B5b578c;
case 0x5b5792:c.instructions+=3;goto B5b5792;
case 0x5b5794:c.instructions+=2;goto B5b5794;
case 0x5b5797:c.instructions+=1;goto B5b5797;
case 0x5b5799:goto L5b5799;
case 0x5b579d:c.instructions+=3;goto B5b579d;
case 0x5b579f:c.instructions+=2;goto B5b579f;
case 0x5b57a0:c.instructions+=1;goto B5b57a0;
case 0x5b57a2:goto L5b57a2;
case 0x5b57a6:c.instructions+=1;goto B5b57a6;
case 0x5b57a8:goto L5b57a8;
case 0x5b57ac:c.instructions+=2;goto B5b57ac;
case 0x5b57ae:c.instructions+=1;goto B5b57ae;
case 0x5b57b0:goto L5b57b0;
case 0x5b57b4:c.instructions+=4;goto B5b57b4;
case 0x5b57ba:c.instructions+=3;goto B5b57ba;
case 0x5b57bc:c.instructions+=2;goto B5b57bc;
case 0x5b57bf:c.instructions+=1;goto B5b57bf;
case 0x5b57c1:goto L5b57c1;
case 0x5b57c5:c.instructions+=1;goto B5b57c5;
case 0x5b57c7:goto L5b57c7;
case 0x5b57cd:goto L5b57cd;
case 0x5b57d3:c.instructions+=4;goto B5b57d3;
case 0x5b57d5:c.instructions+=3;goto B5b57d5;
case 0x5b57d7:c.instructions+=2;goto B5b57d7;
case 0x5b57da:c.instructions+=1;goto B5b57da;
case 0x5b57dc:goto L5b57dc;
case 0x5b57de:c.instructions+=1;goto B5b57de;
case 0x5b57e4:goto L5b57e4;
case 0x5b57ea:c.instructions+=5;goto B5b57ea;
case 0x5b57f0:c.instructions+=4;goto B5b57f0;
case 0x5b57f6:c.instructions+=3;goto B5b57f6;
case 0x5b57f8:c.instructions+=2;goto B5b57f8;
case 0x5b57fb:c.instructions+=1;goto B5b57fb;
case 0x5b57fe:goto L5b57fe;
case 0x5b5802:c.instructions+=2;goto B5b5802;
case 0x5b5805:c.instructions+=1;goto B5b5805;
case 0x5b5810:goto L5b5810;
case 0x5b5813:c.instructions+=21;goto B5b5813;
case 0x5b5814:c.instructions+=20;goto B5b5814;
case 0x5b5816:c.instructions+=19;goto B5b5816;
case 0x5b581c:c.instructions+=18;goto B5b581c;
case 0x5b5822:c.instructions+=17;goto B5b5822;
case 0x5b5826:c.instructions+=16;goto B5b5826;
case 0x5b582a:c.instructions+=15;goto B5b582a;
case 0x5b582e:c.instructions+=14;goto B5b582e;
case 0x5b5832:c.instructions+=13;goto B5b5832;
case 0x5b5838:c.instructions+=12;goto B5b5838;
case 0x5b5840:c.instructions+=11;goto B5b5840;
case 0x5b5846:c.instructions+=10;goto B5b5846;
case 0x5b584a:c.instructions+=9;goto B5b584a;
case 0x5b5852:c.instructions+=8;goto B5b5852;
case 0x5b585a:c.instructions+=7;goto B5b585a;
case 0x5b585e:c.instructions+=6;goto B5b585e;
case 0x5b5864:c.instructions+=5;goto B5b5864;
case 0x5b5868:c.instructions+=4;goto B5b5868;
case 0x5b586e:c.instructions+=3;goto B5b586e;
case 0x5b5870:c.instructions+=2;goto B5b5870;
case 0x5b5873:c.instructions+=1;goto B5b5873;
case 0x5b5875:goto L5b5875;
case 0x5b5879:c.instructions+=3;goto B5b5879;
case 0x5b587a:c.instructions+=2;goto B5b587a;
case 0x5b587e:c.instructions+=1;goto B5b587e;
case 0x5b5883:goto L5b5883;
case 0x5b5887:c.instructions+=3;goto B5b5887;
case 0x5b5889:c.instructions+=2;goto B5b5889;
case 0x5b588c:c.instructions+=1;goto B5b588c;
case 0x5b588e:goto L5b588e;
case 0x5b5892:c.instructions+=3;goto B5b5892;
case 0x5b5896:c.instructions+=2;goto B5b5896;
case 0x5b589a:c.instructions+=1;goto B5b589a;
case 0x5b589c:goto L5b589c;
case 0x5b589e:goto L5b589e;
case 0x5b58a2:c.instructions+=6;goto B5b58a2;
case 0x5b58a8:c.instructions+=5;goto B5b58a8;
case 0x5b58ac:c.instructions+=4;goto B5b58ac;
case 0x5b58b2:c.instructions+=3;goto B5b58b2;
case 0x5b58b4:c.instructions+=2;goto B5b58b4;
case 0x5b58b7:c.instructions+=1;goto B5b58b7;
case 0x5b58b9:goto L5b58b9;
case 0x5b58bd:c.instructions+=3;goto B5b58bd;
case 0x5b58bf:c.instructions+=2;goto B5b58bf;
case 0x5b58c0:c.instructions+=1;goto B5b58c0;
case 0x5b58c2:goto L5b58c2;
case 0x5b58c6:c.instructions+=1;goto B5b58c6;
case 0x5b58c8:goto L5b58c8;
case 0x5b58cc:c.instructions+=2;goto B5b58cc;
case 0x5b58ce:c.instructions+=1;goto B5b58ce;
case 0x5b58d0:goto L5b58d0;
case 0x5b58d4:c.instructions+=4;goto B5b58d4;
case 0x5b58da:c.instructions+=3;goto B5b58da;
case 0x5b58dc:c.instructions+=2;goto B5b58dc;
case 0x5b58df:c.instructions+=1;goto B5b58df;
case 0x5b58e1:goto L5b58e1;
case 0x5b58e5:c.instructions+=1;goto B5b58e5;
case 0x5b58e7:goto L5b58e7;
case 0x5b58ed:goto L5b58ed;
case 0x5b58f3:c.instructions+=4;goto B5b58f3;
case 0x5b58f5:c.instructions+=3;goto B5b58f5;
case 0x5b58f7:c.instructions+=2;goto B5b58f7;
case 0x5b58fa:c.instructions+=1;goto B5b58fa;
case 0x5b58fc:goto L5b58fc;
case 0x5b58fe:c.instructions+=1;goto B5b58fe;
case 0x5b5904:goto L5b5904;
case 0x5b590a:c.instructions+=5;goto B5b590a;
case 0x5b5910:c.instructions+=4;goto B5b5910;
case 0x5b5916:c.instructions+=3;goto B5b5916;
case 0x5b5918:c.instructions+=2;goto B5b5918;
case 0x5b591b:c.instructions+=1;goto B5b591b;
case 0x5b591e:goto L5b591e;
case 0x5b5922:c.instructions+=2;goto B5b5922;
case 0x5b5925:c.instructions+=1;goto B5b5925;
case 0x5b5930:goto L5b5930;
case 0x5b5933:c.instructions+=7;goto B5b5933;
case 0x5b5934:c.instructions+=6;goto B5b5934;
case 0x5b5935:c.instructions+=5;goto B5b5935;
case 0x5b5937:c.instructions+=4;goto B5b5937;
case 0x5b593a:c.instructions+=3;goto B5b593a;
case 0x5b593d:c.instructions+=2;goto B5b593d;
case 0x5b593f:c.instructions+=1;goto B5b593f;
case 0x5b5941:goto L5b5941;
case 0x5b5943:c.instructions+=3;goto B5b5943;
case 0x5b5945:c.instructions+=2;goto B5b5945;
case 0x5b5947:c.instructions+=1;goto B5b5947;
case 0x5b594c:goto L5b594c;
case 0x5b5952:c.instructions+=8;goto B5b5952;
case 0x5b5953:c.instructions+=7;goto B5b5953;
case 0x5b5959:c.instructions+=6;goto B5b5959;
case 0x5b595d:c.instructions+=5;goto B5b595d;
case 0x5b5961:c.instructions+=4;goto B5b5961;
case 0x5b5964:c.instructions+=3;goto B5b5964;
case 0x5b5966:c.instructions+=2;goto B5b5966;
case 0x5b5969:c.instructions+=1;goto B5b5969;
case 0x5b596b:goto L5b596b;
case 0x5b5970:goto L5b5970;
case 0x5b5974:c.instructions+=3;goto B5b5974;
case 0x5b5975:c.instructions+=2;goto B5b5975;
case 0x5b5977:c.instructions+=1;goto B5b5977;
case 0x5b597c:goto L5b597c;
case 0x5b5980:c.instructions+=2;goto B5b5980;
case 0x5b5983:c.instructions+=1;goto B5b5983;
case 0x5b5985:goto L5b5985;
case 0x5b5987:c.instructions+=4;goto B5b5987;
case 0x5b5989:c.instructions+=3;goto B5b5989;
case 0x5b598b:c.instructions+=2;goto B5b598b;
case 0x5b598d:c.instructions+=1;goto B5b598d;
case 0x5b5992:goto L5b5992;
case 0x5b5996:c.instructions+=6;goto B5b5996;
case 0x5b5999:c.instructions+=5;goto B5b5999;
case 0x5b599b:c.instructions+=4;goto B5b599b;
case 0x5b59a1:c.instructions+=3;goto B5b59a1;
case 0x5b59a5:c.instructions+=2;goto B5b59a5;
case 0x5b59a9:c.instructions+=1;goto B5b59a9;
case 0x5b59ab:goto L5b59ab;
case 0x5b59ad:c.instructions+=4;goto B5b59ad;
case 0x5b59af:c.instructions+=3;goto B5b59af;
case 0x5b59b1:c.instructions+=2;goto B5b59b1;
case 0x5b59b3:c.instructions+=1;goto B5b59b3;
case 0x5b59b8:goto L5b59b8;
case 0x5b59bc:c.instructions+=5;goto B5b59bc;
case 0x5b59c2:c.instructions+=4;goto B5b59c2;
case 0x5b59c6:c.instructions+=3;goto B5b59c6;
case 0x5b59c8:c.instructions+=2;goto B5b59c8;
case 0x5b59cb:c.instructions+=1;goto B5b59cb;
case 0x5b59cd:goto L5b59cd;
case 0x5b59d3:c.instructions+=6;goto B5b59d3;
case 0x5b59d7:c.instructions+=5;goto B5b59d7;
case 0x5b59db:c.instructions+=4;goto B5b59db;
case 0x5b59de:c.instructions+=3;goto B5b59de;
case 0x5b59e0:c.instructions+=2;goto B5b59e0;
case 0x5b59e3:c.instructions+=1;goto B5b59e3;
case 0x5b59e5:goto L5b59e5;
case 0x5b59e8:c.instructions+=1;goto B5b59e8;
case 0x5b59ea:goto L5b59ea;
case 0x5b59ec:c.instructions+=1;goto B5b59ec;
case 0x5b59ee:goto L5b59ee;
case 0x5b59f4:c.instructions+=4;goto B5b59f4;
case 0x5b59fa:c.instructions+=3;goto B5b59fa;
case 0x5b59fc:c.instructions+=2;goto B5b59fc;
case 0x5b59fe:c.instructions+=1;goto B5b59fe;
case 0x5b5a00:goto L5b5a00;
case 0x5b5a02:c.instructions+=1;goto B5b5a02;
case 0x5b5a04:goto L5b5a04;
case 0x5b5a0a:c.instructions+=2;goto B5b5a0a;
case 0x5b5a0c:c.instructions+=1;goto B5b5a0c;
case 0x5b5a0e:goto L5b5a0e;
case 0x5b5a14:c.instructions+=1;goto B5b5a14;
case 0x5b5a16:goto L5b5a16;
case 0x5b5a1c:c.instructions+=2;goto B5b5a1c;
case 0x5b5a1e:c.instructions+=1;goto B5b5a1e;
case 0x5b5a20:goto L5b5a20;
case 0x5b5a25:c.instructions+=1;goto B5b5a25;
case 0x5b5a27:goto L5b5a27;
case 0x5b5a2e:c.instructions+=1;goto B5b5a2e;
case 0x5b5a30:goto L5b5a30;
case 0x5b5a36:c.instructions+=2;goto B5b5a36;
case 0x5b5a38:c.instructions+=1;goto B5b5a38;
case 0x5b5a3a:goto L5b5a3a;
case 0x5b5a3f:c.instructions+=1;goto B5b5a3f;
case 0x5b5a41:goto L5b5a41;
case 0x5b5a43:c.instructions+=1;goto B5b5a43;
case 0x5b5a45:goto L5b5a45;
case 0x5b5a47:c.instructions+=1;goto B5b5a47;
case 0x5b5a49:goto L5b5a49;
case 0x5b5a4e:goto L5b5a4e;
case 0x5b5a50:c.instructions+=4;goto B5b5a50;
case 0x5b5a52:c.instructions+=3;goto B5b5a52;
case 0x5b5a53:c.instructions+=2;goto B5b5a53;
case 0x5b5a55:c.instructions+=1;goto B5b5a55;
case 0x5b5a5a:goto L5b5a5a;
case 0x5b5a60:c.instructions+=5;goto B5b5a60;
case 0x5b5a61:c.instructions+=4;goto B5b5a61;
case 0x5b5a67:c.instructions+=3;goto B5b5a67;
case 0x5b5a69:c.instructions+=2;goto B5b5a69;
case 0x5b5a6c:c.instructions+=1;goto B5b5a6c;
case 0x5b5a6e:goto L5b5a6e;
case 0x5b5a71:c.instructions+=1;goto B5b5a71;
case 0x5b5a73:goto L5b5a73;
case 0x5b5a75:c.instructions+=4;goto B5b5a75;
case 0x5b5a77:c.instructions+=3;goto B5b5a77;
case 0x5b5a79:c.instructions+=2;goto B5b5a79;
case 0x5b5a7b:c.instructions+=1;goto B5b5a7b;
case 0x5b5a80:goto L5b5a80;
case 0x5b5a86:c.instructions+=5;goto B5b5a86;
case 0x5b5a8c:c.instructions+=4;goto B5b5a8c;
case 0x5b5a90:c.instructions+=3;goto B5b5a90;
case 0x5b5a92:c.instructions+=2;goto B5b5a92;
case 0x5b5a95:c.instructions+=1;goto B5b5a95;
case 0x5b5a97:goto L5b5a97;
case 0x5b5a99:goto L5b5a99;
case 0x5b5a9d:goto L5b5a9d;
case 0x5b5a9e:c.instructions+=3;goto B5b5a9e;
case 0x5b5a9f:c.instructions+=2;goto B5b5a9f;
case 0x5b5aa2:c.instructions+=1;goto B5b5aa2;
case 0x5b5ab0:goto L5b5ab0;
case 0x5b5ab6:c.instructions+=30;goto B5b5ab6;
case 0x5b5ab7:c.instructions+=29;goto B5b5ab7;
case 0x5b5ab8:c.instructions+=28;goto B5b5ab8;
case 0x5b5abf:c.instructions+=27;goto B5b5abf;
case 0x5b5ac5:c.instructions+=26;goto B5b5ac5;
case 0x5b5ac6:c.instructions+=25;goto B5b5ac6;
case 0x5b5acc:c.instructions+=24;goto B5b5acc;
case 0x5b5ad2:c.instructions+=23;goto B5b5ad2;
case 0x5b5ad4:c.instructions+=22;goto B5b5ad4;
case 0x5b5ada:c.instructions+=21;goto B5b5ada;
case 0x5b5adc:c.instructions+=20;goto B5b5adc;
case 0x5b5add:c.instructions+=19;goto B5b5add;
case 0x5b5ae3:c.instructions+=18;goto B5b5ae3;
case 0x5b5ae7:c.instructions+=17;goto B5b5ae7;
case 0x5b5ae9:c.instructions+=16;goto B5b5ae9;
case 0x5b5aea:c.instructions+=15;goto B5b5aea;
case 0x5b5aed:c.instructions+=14;goto B5b5aed;
case 0x5b5af1:c.instructions+=13;goto B5b5af1;
case 0x5b5af2:c.instructions+=12;goto B5b5af2;
case 0x5b5af8:c.instructions+=11;goto B5b5af8;
case 0x5b5afa:c.instructions+=10;goto B5b5afa;
case 0x5b5afb:c.instructions+=9;goto B5b5afb;
case 0x5b5afc:c.instructions+=8;goto B5b5afc;
case 0x5b5b00:c.instructions+=7;goto B5b5b00;
case 0x5b5b04:c.instructions+=6;goto B5b5b04;
case 0x5b5b07:c.instructions+=5;goto B5b5b07;
case 0x5b5b09:c.instructions+=4;goto B5b5b09;
case 0x5b5b0c:c.instructions+=3;goto B5b5b0c;
case 0x5b5b0e:c.instructions+=2;goto B5b5b0e;
case 0x5b5b12:c.instructions+=1;goto B5b5b12;
case 0x5b5b17:goto L5b5b17;
case 0x5b5b1a:c.instructions+=18;goto B5b5b1a;
case 0x5b5b1c:c.instructions+=17;goto B5b5b1c;
case 0x5b5b20:c.instructions+=16;goto B5b5b20;
case 0x5b5b24:c.instructions+=15;goto B5b5b24;
case 0x5b5b28:c.instructions+=14;goto B5b5b28;
case 0x5b5b2b:c.instructions+=13;goto B5b5b2b;
case 0x5b5b2e:c.instructions+=12;goto B5b5b2e;
case 0x5b5b34:c.instructions+=11;goto B5b5b34;
case 0x5b5b38:c.instructions+=10;goto B5b5b38;
case 0x5b5b40:c.instructions+=9;goto B5b5b40;
case 0x5b5b45:c.instructions+=8;goto B5b5b45;
case 0x5b5b4d:c.instructions+=7;goto B5b5b4d;
case 0x5b5b55:c.instructions+=6;goto B5b5b55;
case 0x5b5b58:c.instructions+=5;goto B5b5b58;
case 0x5b5b5c:c.instructions+=4;goto B5b5b5c;
case 0x5b5b62:c.instructions+=3;goto B5b5b62;
case 0x5b5b66:c.instructions+=2;goto B5b5b66;
case 0x5b5b6a:c.instructions+=1;goto B5b5b6a;
case 0x5b5b70:goto L5b5b70;
case 0x5b5b74:c.instructions+=9;goto B5b5b74;
case 0x5b5b78:c.instructions+=8;goto B5b5b78;
case 0x5b5b7a:c.instructions+=7;goto B5b5b7a;
case 0x5b5b7e:c.instructions+=6;goto B5b5b7e;
case 0x5b5b84:c.instructions+=5;goto B5b5b84;
case 0x5b5b88:c.instructions+=4;goto B5b5b88;
case 0x5b5b8c:c.instructions+=3;goto B5b5b8c;
case 0x5b5b8e:c.instructions+=2;goto B5b5b8e;
case 0x5b5b91:c.instructions+=1;goto B5b5b91;
case 0x5b5b93:goto L5b5b93;
case 0x5b5b96:c.instructions+=5;goto B5b5b96;
case 0x5b5b97:c.instructions+=4;goto B5b5b97;
case 0x5b5b9a:c.instructions+=3;goto B5b5b9a;
case 0x5b5b9d:c.instructions+=2;goto B5b5b9d;
case 0x5b5b9f:c.instructions+=1;goto B5b5b9f;
case 0x5b5ba1:goto L5b5ba1;
case 0x5b5ba5:c.instructions+=3;goto B5b5ba5;
case 0x5b5ba6:c.instructions+=2;goto B5b5ba6;
case 0x5b5baa:c.instructions+=1;goto B5b5baa;
case 0x5b5baf:goto L5b5baf;
case 0x5b5bb1:c.instructions+=12;goto B5b5bb1;
case 0x5b5bb5:c.instructions+=11;goto B5b5bb5;
case 0x5b5bb6:c.instructions+=10;goto B5b5bb6;
case 0x5b5bb9:c.instructions+=9;goto B5b5bb9;
case 0x5b5bbd:c.instructions+=8;goto B5b5bbd;
case 0x5b5bc1:c.instructions+=7;goto B5b5bc1;
case 0x5b5bc5:c.instructions+=6;goto B5b5bc5;
case 0x5b5bc9:c.instructions+=5;goto B5b5bc9;
case 0x5b5bd0:c.instructions+=4;goto B5b5bd0;
case 0x5b5bd4:c.instructions+=3;goto B5b5bd4;
case 0x5b5bda:c.instructions+=2;goto B5b5bda;
case 0x5b5bde:c.instructions+=1;goto B5b5bde;
case 0x5b5be0:goto L5b5be0;
case 0x5b5be4:c.instructions+=4;goto B5b5be4;
case 0x5b5be7:c.instructions+=3;goto B5b5be7;
case 0x5b5bea:c.instructions+=2;goto B5b5bea;
case 0x5b5bee:c.instructions+=1;goto B5b5bee;
case 0x5b5bf0:goto L5b5bf0;
case 0x5b5bf5:c.instructions+=3;goto B5b5bf5;
case 0x5b5bfc:c.instructions+=2;goto B5b5bfc;
case 0x5b5bfe:c.instructions+=1;goto B5b5bfe;
case 0x5b5c00:goto L5b5c00;
case 0x5b5c02:goto L5b5c02;
case 0x5b5c06:c.instructions+=15;goto B5b5c06;
case 0x5b5c0a:c.instructions+=14;goto B5b5c0a;
case 0x5b5c0c:c.instructions+=13;goto B5b5c0c;
case 0x5b5c10:c.instructions+=12;goto B5b5c10;
case 0x5b5c14:c.instructions+=11;goto B5b5c14;
case 0x5b5c1b:c.instructions+=10;goto B5b5c1b;
case 0x5b5c1f:c.instructions+=9;goto B5b5c1f;
case 0x5b5c21:c.instructions+=8;goto B5b5c21;
case 0x5b5c23:c.instructions+=7;goto B5b5c23;
case 0x5b5c25:c.instructions+=6;goto B5b5c25;
case 0x5b5c29:c.instructions+=5;goto B5b5c29;
case 0x5b5c31:c.instructions+=4;goto B5b5c31;
case 0x5b5c39:c.instructions+=3;goto B5b5c39;
case 0x5b5c3d:c.instructions+=2;goto B5b5c3d;
case 0x5b5c41:c.instructions+=1;goto B5b5c41;
case 0x5b5c43:goto L5b5c43;
case 0x5b5c45:c.instructions+=2;goto B5b5c45;
case 0x5b5c49:c.instructions+=1;goto B5b5c49;
case 0x5b5c50:goto L5b5c50;
case 0x5b5c54:c.instructions+=9;goto B5b5c54;
case 0x5b5c56:c.instructions+=8;goto B5b5c56;
case 0x5b5c57:c.instructions+=7;goto B5b5c57;
case 0x5b5c5b:c.instructions+=6;goto B5b5c5b;
case 0x5b5c5f:c.instructions+=5;goto B5b5c5f;
case 0x5b5c60:c.instructions+=4;goto B5b5c60;
case 0x5b5c64:c.instructions+=3;goto B5b5c64;
case 0x5b5c68:c.instructions+=2;goto B5b5c68;
case 0x5b5c6b:c.instructions+=1;goto B5b5c6b;
case 0x5b5c70:goto L5b5c70;
case 0x5b5c73:c.instructions+=6;goto B5b5c73;
case 0x5b5c76:c.instructions+=5;goto B5b5c76;
case 0x5b5c78:c.instructions+=4;goto B5b5c78;
case 0x5b5c79:c.instructions+=3;goto B5b5c79;
case 0x5b5c7b:c.instructions+=2;goto B5b5c7b;
case 0x5b5c7f:c.instructions+=1;goto B5b5c7f;
case 0x5b5c81:goto L5b5c81;
case 0x5b5c83:c.instructions+=16;goto B5b5c83;
case 0x5b5c84:c.instructions+=15;goto B5b5c84;
case 0x5b5c88:c.instructions+=14;goto B5b5c88;
case 0x5b5c8c:c.instructions+=13;goto B5b5c8c;
case 0x5b5c90:c.instructions+=12;goto B5b5c90;
case 0x5b5c91:c.instructions+=11;goto B5b5c91;
case 0x5b5c98:c.instructions+=10;goto B5b5c98;
case 0x5b5c9c:c.instructions+=9;goto B5b5c9c;
case 0x5b5c9f:c.instructions+=8;goto B5b5c9f;
case 0x5b5ca1:c.instructions+=7;goto B5b5ca1;
case 0x5b5ca4:c.instructions+=6;goto B5b5ca4;
case 0x5b5ca5:c.instructions+=5;goto B5b5ca5;
case 0x5b5ca8:c.instructions+=4;goto B5b5ca8;
case 0x5b5ca9:c.instructions+=3;goto B5b5ca9;
case 0x5b5caa:c.instructions+=2;goto B5b5caa;
case 0x5b5cb0:c.instructions+=1;goto B5b5cb0;
case 0x5b5cc0:goto L5b5cc0;
case 0x5b5cc2:c.instructions+=37;goto B5b5cc2;
case 0x5b5cc7:c.instructions+=36;goto B5b5cc7;
case 0x5b5ccd:c.instructions+=35;goto B5b5ccd;
case 0x5b5cce:c.instructions+=34;goto B5b5cce;
case 0x5b5cd5:c.instructions+=33;goto B5b5cd5;
case 0x5b5cd8:c.instructions+=32;goto B5b5cd8;
case 0x5b5cd9:c.instructions+=31;goto B5b5cd9;
case 0x5b5cda:c.instructions+=30;goto B5b5cda;
case 0x5b5cdb:c.instructions+=29;goto B5b5cdb;
case 0x5b5cdd:c.instructions+=28;goto B5b5cdd;
case 0x5b5cde:c.instructions+=27;goto B5b5cde;
case 0x5b5ce2:c.instructions+=26;goto B5b5ce2;
case 0x5b5ce5:c.instructions+=25;goto B5b5ce5;
case 0x5b5ce8:c.instructions+=24;goto B5b5ce8;
case 0x5b5cea:c.instructions+=23;goto B5b5cea;
case 0x5b5cec:c.instructions+=22;goto B5b5cec;
case 0x5b5cef:c.instructions+=21;goto B5b5cef;
case 0x5b5cf3:c.instructions+=20;goto B5b5cf3;
case 0x5b5cf6:c.instructions+=19;goto B5b5cf6;
case 0x5b5cfc:c.instructions+=18;goto B5b5cfc;
case 0x5b5d00:c.instructions+=17;goto B5b5d00;
case 0x5b5d04:c.instructions+=16;goto B5b5d04;
case 0x5b5d0a:c.instructions+=15;goto B5b5d0a;
case 0x5b5d10:c.instructions+=14;goto B5b5d10;
case 0x5b5d13:c.instructions+=13;goto B5b5d13;
case 0x5b5d16:c.instructions+=12;goto B5b5d16;
case 0x5b5d1a:c.instructions+=11;goto B5b5d1a;
case 0x5b5d1d:c.instructions+=10;goto B5b5d1d;
case 0x5b5d20:c.instructions+=9;goto B5b5d20;
case 0x5b5d23:c.instructions+=8;goto B5b5d23;
case 0x5b5d28:c.instructions+=7;goto B5b5d28;
case 0x5b5d29:c.instructions+=6;goto B5b5d29;
case 0x5b5d2e:c.instructions+=5;goto B5b5d2e;
case 0x5b5d31:c.instructions+=4;goto B5b5d31;
case 0x5b5d34:c.instructions+=3;goto B5b5d34;
case 0x5b5d3b:c.instructions+=2;goto B5b5d3b;
case 0x5b5d41:c.instructions+=1;goto B5b5d41;
case 0x5b5d46:goto L5b5d46;
case 0x5b5d4b:c.instructions+=2;goto B5b5d4b;
case 0x5b5d4c:c.instructions+=1;goto B5b5d4c;
case 0x5b5d51:goto L5b5d51;
case 0x5b5d54:c.instructions+=4;goto B5b5d54;
case 0x5b5d58:c.instructions+=3;goto B5b5d58;
case 0x5b5d5a:c.instructions+=2;goto B5b5d5a;
case 0x5b5d5f:c.instructions+=1;goto B5b5d5f;
case 0x5b5d61:goto L5b5d61;
case 0x5b5d64:c.instructions+=4;goto B5b5d64;
case 0x5b5d6a:c.instructions+=3;goto B5b5d6a;
case 0x5b5d6b:c.instructions+=2;goto B5b5d6b;
case 0x5b5d6d:c.instructions+=1;goto B5b5d6d;
case 0x5b5d72:goto L5b5d72;
case 0x5b5d74:goto L5b5d74;
case 0x5b5d76:goto L5b5d76;
case 0x5b5d78:c.instructions+=3;goto B5b5d78;
case 0x5b5d7d:c.instructions+=2;goto B5b5d7d;
case 0x5b5d80:c.instructions+=1;goto B5b5d80;
case 0x5b5d82:goto L5b5d82;
case 0x5b5d85:c.instructions+=1;goto B5b5d85;
case 0x5b5d87:goto L5b5d87;
case 0x5b5d89:goto L5b5d89;
case 0x5b5d8c:c.instructions+=8;goto B5b5d8c;
case 0x5b5d8f:c.instructions+=7;goto B5b5d8f;
case 0x5b5d91:c.instructions+=6;goto B5b5d91;
case 0x5b5d94:c.instructions+=5;goto B5b5d94;
case 0x5b5d97:c.instructions+=4;goto B5b5d97;
case 0x5b5d99:c.instructions+=3;goto B5b5d99;
case 0x5b5d9b:c.instructions+=2;goto B5b5d9b;
case 0x5b5d9d:c.instructions+=1;goto B5b5d9d;
case 0x5b5da0:goto L5b5da0;
case 0x5b5da3:c.instructions+=22;goto B5b5da3;
case 0x5b5da6:c.instructions+=21;goto B5b5da6;
case 0x5b5dac:c.instructions+=20;goto B5b5dac;
case 0x5b5daf:c.instructions+=19;goto B5b5daf;
case 0x5b5db3:c.instructions+=18;goto B5b5db3;
case 0x5b5db9:c.instructions+=17;goto B5b5db9;
case 0x5b5dc0:c.instructions+=16;goto B5b5dc0;
case 0x5b5dc3:c.instructions+=15;goto B5b5dc3;
case 0x5b5dc9:c.instructions+=14;goto B5b5dc9;
case 0x5b5dcc:c.instructions+=13;goto B5b5dcc;
case 0x5b5dcf:c.instructions+=12;goto B5b5dcf;
case 0x5b5dd2:c.instructions+=11;goto B5b5dd2;
case 0x5b5dd4:c.instructions+=10;goto B5b5dd4;
case 0x5b5dd8:c.instructions+=9;goto B5b5dd8;
case 0x5b5ddb:c.instructions+=8;goto B5b5ddb;
case 0x5b5ddd:c.instructions+=7;goto B5b5ddd;
case 0x5b5ddf:c.instructions+=6;goto B5b5ddf;
case 0x5b5de5:c.instructions+=5;goto B5b5de5;
case 0x5b5deb:c.instructions+=4;goto B5b5deb;
case 0x5b5df1:c.instructions+=3;goto B5b5df1;
case 0x5b5df7:c.instructions+=2;goto B5b5df7;
case 0x5b5df8:c.instructions+=1;goto B5b5df8;
case 0x5b5dfd:goto L5b5dfd;
case 0x5b5e00:c.instructions+=2;goto B5b5e00;
case 0x5b5e02:c.instructions+=1;goto B5b5e02;
case 0x5b5e04:goto L5b5e04;
case 0x5b5e07:c.instructions+=5;goto B5b5e07;
case 0x5b5e0a:c.instructions+=4;goto B5b5e0a;
case 0x5b5e0d:c.instructions+=3;goto B5b5e0d;
case 0x5b5e13:c.instructions+=2;goto B5b5e13;
case 0x5b5e16:c.instructions+=1;goto B5b5e16;
case 0x5b5e18:goto L5b5e18;
case 0x5b5e1a:goto L5b5e1a;
case 0x5b5e1d:c.instructions+=4;goto B5b5e1d;
case 0x5b5e21:c.instructions+=3;goto B5b5e21;
case 0x5b5e25:c.instructions+=2;goto B5b5e25;
case 0x5b5e28:c.instructions+=1;goto B5b5e28;
case 0x5b5e30:goto L5b5e30;
case 0x5b5e35:c.instructions+=2;goto B5b5e35;
case 0x5b5e36:c.instructions+=1;goto B5b5e36;
case 0x5b5e3b:goto L5b5e3b;
case 0x5b5e3e:c.instructions+=4;goto B5b5e3e;
case 0x5b5e42:c.instructions+=3;goto B5b5e42;
case 0x5b5e44:c.instructions+=2;goto B5b5e44;
case 0x5b5e49:c.instructions+=1;goto B5b5e49;
case 0x5b5e4b:goto L5b5e4b;
case 0x5b5e4e:c.instructions+=15;goto B5b5e4e;
case 0x5b5e51:c.instructions+=14;goto B5b5e51;
case 0x5b5e52:c.instructions+=13;goto B5b5e52;
case 0x5b5e58:c.instructions+=12;goto B5b5e58;
case 0x5b5e59:c.instructions+=11;goto B5b5e59;
case 0x5b5e5d:c.instructions+=10;goto B5b5e5d;
case 0x5b5e5e:c.instructions+=9;goto B5b5e5e;
case 0x5b5e60:c.instructions+=8;goto B5b5e60;
case 0x5b5e62:c.instructions+=7;goto B5b5e62;
case 0x5b5e65:c.instructions+=6;goto B5b5e65;
case 0x5b5e6c:c.instructions+=5;goto B5b5e6c;
case 0x5b5e70:c.instructions+=4;goto B5b5e70;
case 0x5b5e74:c.instructions+=3;goto B5b5e74;
case 0x5b5e75:c.instructions+=2;goto B5b5e75;
case 0x5b5e76:c.instructions+=1;goto B5b5e76;
case 0x5b5e7b:goto L5b5e7b;
case 0x5b5e7d:goto L5b5e7d;
case 0x5b5e7f:goto L5b5e7f;
case 0x5b5e82:c.instructions+=4;goto B5b5e82;
case 0x5b5e88:c.instructions+=3;goto B5b5e88;
case 0x5b5e89:c.instructions+=2;goto B5b5e89;
case 0x5b5e8e:c.instructions+=1;goto B5b5e8e;
case 0x5b5e93:goto L5b5e93;
case 0x5b5e95:c.instructions+=6;goto B5b5e95;
case 0x5b5e98:c.instructions+=5;goto B5b5e98;
case 0x5b5e9c:c.instructions+=4;goto B5b5e9c;
case 0x5b5e9e:c.instructions+=3;goto B5b5e9e;
case 0x5b5ea0:c.instructions+=2;goto B5b5ea0;
case 0x5b5ea5:c.instructions+=1;goto B5b5ea5;
case 0x5b5ea7:goto L5b5ea7;
case 0x5b5eaa:c.instructions+=1;goto B5b5eaa;
case 0x5b5eac:goto L5b5eac;
case 0x5b5eaf:c.instructions+=2;goto B5b5eaf;
case 0x5b5eb3:c.instructions+=1;goto B5b5eb3;
case 0x5b5eb5:goto L5b5eb5;
case 0x5b5eb9:goto L5b5eb9;
case 0x5b5ebd:c.instructions+=16;goto B5b5ebd;
case 0x5b5ebf:c.instructions+=15;goto B5b5ebf;
case 0x5b5ec0:c.instructions+=14;goto B5b5ec0;
case 0x5b5ec2:c.instructions+=13;goto B5b5ec2;
case 0x5b5ec5:c.instructions+=12;goto B5b5ec5;
case 0x5b5ec7:c.instructions+=11;goto B5b5ec7;
case 0x5b5eca:c.instructions+=10;goto B5b5eca;
case 0x5b5ed1:c.instructions+=9;goto B5b5ed1;
case 0x5b5ed5:c.instructions+=8;goto B5b5ed5;
case 0x5b5ed6:c.instructions+=7;goto B5b5ed6;
case 0x5b5ed9:c.instructions+=6;goto B5b5ed9;
case 0x5b5eda:c.instructions+=5;goto B5b5eda;
case 0x5b5edd:c.instructions+=4;goto B5b5edd;
case 0x5b5ede:c.instructions+=3;goto B5b5ede;
case 0x5b5edf:c.instructions+=2;goto B5b5edf;
case 0x5b5ee0:c.instructions+=1;goto B5b5ee0;
case 0x5b5ee5:goto L5b5ee5;
case 0x5b5ee8:c.instructions+=4;goto B5b5ee8;
case 0x5b5eea:c.instructions+=3;goto B5b5eea;
case 0x5b5eef:c.instructions+=2;goto B5b5eef;
case 0x5b5ef2:c.instructions+=1;goto B5b5ef2;
case 0x5b5ef4:goto L5b5ef4;
case 0x5b5ef7:c.instructions+=1;goto B5b5ef7;
case 0x5b5ef9:goto L5b5ef9;
case 0x5b5efb:goto L5b5efb;
case 0x5b5efe:c.instructions+=7;goto B5b5efe;
case 0x5b5f01:c.instructions+=6;goto B5b5f01;
case 0x5b5f03:c.instructions+=5;goto B5b5f03;
case 0x5b5f06:c.instructions+=4;goto B5b5f06;
case 0x5b5f09:c.instructions+=3;goto B5b5f09;
case 0x5b5f0b:c.instructions+=2;goto B5b5f0b;
case 0x5b5f0d:c.instructions+=1;goto B5b5f0d;
case 0x5b5f10:goto L5b5f10;
case 0x5b5f13:c.instructions+=3;goto B5b5f13;
case 0x5b5f16:c.instructions+=2;goto B5b5f16;
case 0x5b5f18:c.instructions+=1;goto B5b5f18;
case 0x5b5f1a:goto L5b5f1a;
case 0x5b5f1d:c.instructions+=1;goto B5b5f1d;
case 0x5b5f1f:goto L5b5f1f;
case 0x5b5f21:goto L5b5f21;
case 0x5b5f24:c.instructions+=7;goto B5b5f24;
case 0x5b5f27:c.instructions+=6;goto B5b5f27;
case 0x5b5f29:c.instructions+=5;goto B5b5f29;
case 0x5b5f2c:c.instructions+=4;goto B5b5f2c;
case 0x5b5f2f:c.instructions+=3;goto B5b5f2f;
case 0x5b5f31:c.instructions+=2;goto B5b5f31;
case 0x5b5f33:c.instructions+=1;goto B5b5f33;
case 0x5b5f36:goto L5b5f36;
case 0x5b5f39:c.instructions+=12;goto B5b5f39;
case 0x5b5f3d:c.instructions+=11;goto B5b5f3d;
case 0x5b5f3f:c.instructions+=10;goto B5b5f3f;
case 0x5b5f40:c.instructions+=9;goto B5b5f40;
case 0x5b5f44:c.instructions+=8;goto B5b5f44;
case 0x5b5f48:c.instructions+=7;goto B5b5f48;
case 0x5b5f4b:c.instructions+=6;goto B5b5f4b;
case 0x5b5f4e:c.instructions+=5;goto B5b5f4e;
case 0x5b5f55:c.instructions+=4;goto B5b5f55;
case 0x5b5f58:c.instructions+=3;goto B5b5f58;
case 0x5b5f5e:c.instructions+=2;goto B5b5f5e;
case 0x5b5f62:c.instructions+=1;goto B5b5f62;
case 0x5b5f68:goto L5b5f68;
case 0x5b5f6b:c.instructions+=14;goto B5b5f6b;
case 0x5b5f6e:c.instructions+=13;goto B5b5f6e;
case 0x5b5f71:c.instructions+=12;goto B5b5f71;
case 0x5b5f74:c.instructions+=11;goto B5b5f74;
case 0x5b5f77:c.instructions+=10;goto B5b5f77;
case 0x5b5f7a:c.instructions+=9;goto B5b5f7a;
case 0x5b5f7d:c.instructions+=8;goto B5b5f7d;
case 0x5b5f80:c.instructions+=7;goto B5b5f80;
case 0x5b5f83:c.instructions+=6;goto B5b5f83;
case 0x5b5f86:c.instructions+=5;goto B5b5f86;
case 0x5b5f89:c.instructions+=4;goto B5b5f89;
case 0x5b5f8c:c.instructions+=3;goto B5b5f8c;
case 0x5b5f91:c.instructions+=2;goto B5b5f91;
case 0x5b5f92:c.instructions+=1;goto B5b5f92;
case 0x5b5f97:goto L5b5f97;
case 0x5b5f9a:c.instructions+=4;goto B5b5f9a;
case 0x5b5f9e:c.instructions+=3;goto B5b5f9e;
case 0x5b5fa0:c.instructions+=2;goto B5b5fa0;
case 0x5b5fa5:c.instructions+=1;goto B5b5fa5;
case 0x5b5fa7:goto L5b5fa7;
case 0x5b5faa:c.instructions+=6;goto B5b5faa;
case 0x5b5fad:c.instructions+=5;goto B5b5fad;
case 0x5b5fae:c.instructions+=4;goto B5b5fae;
case 0x5b5fb4:c.instructions+=3;goto B5b5fb4;
case 0x5b5fb5:c.instructions+=2;goto B5b5fb5;
case 0x5b5fb7:c.instructions+=1;goto B5b5fb7;
case 0x5b5fbc:goto L5b5fbc;
case 0x5b5fbe:goto L5b5fbe;
case 0x5b5fc0:goto L5b5fc0;
case 0x5b5fc2:c.instructions+=3;goto B5b5fc2;
case 0x5b5fc7:c.instructions+=2;goto B5b5fc7;
case 0x5b5fca:c.instructions+=1;goto B5b5fca;
case 0x5b5fcc:goto L5b5fcc;
case 0x5b5fcf:c.instructions+=1;goto B5b5fcf;
case 0x5b5fd1:goto L5b5fd1;
case 0x5b5fd3:goto L5b5fd3;
case 0x5b5fd6:c.instructions+=8;goto B5b5fd6;
case 0x5b5fd9:c.instructions+=7;goto B5b5fd9;
case 0x5b5fdb:c.instructions+=6;goto B5b5fdb;
case 0x5b5fde:c.instructions+=5;goto B5b5fde;
case 0x5b5fe1:c.instructions+=4;goto B5b5fe1;
case 0x5b5fe3:c.instructions+=3;goto B5b5fe3;
case 0x5b5fe5:c.instructions+=2;goto B5b5fe5;
case 0x5b5fe7:c.instructions+=1;goto B5b5fe7;
case 0x5b5fea:goto L5b5fea;
case 0x5b5fed:c.instructions+=5;goto B5b5fed;
case 0x5b5fef:c.instructions+=4;goto B5b5fef;
case 0x5b5ff3:c.instructions+=3;goto B5b5ff3;
case 0x5b5ff6:c.instructions+=2;goto B5b5ff6;
case 0x5b5ffd:c.instructions+=1;goto B5b5ffd;
default:missing_instruction(c.pc);}
B5b5003:L5b5003:{c.instructions+=2;NFSU2_TR(0x5b5003);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b5005:{NFSU2_TR(0x5b5005);
if(r1(R+518)){{goto L5b500e;}}
}
B5b5007:L5b5007:{c.instructions+=2;NFSU2_TR(0x5b5007);
w4(R+24,u32(0x3ull));
}
B5b500c:{NFSU2_TR(0x5b500c);
{goto L5b5036;}
}
B5b500e:L5b500e:{c.instructions+=3;NFSU2_TR(0x5b500e);
__builtin_memmove((R+12),gp(0x89e7e3),1);
}
B5b5014:{NFSU2_TR(0x5b5014);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b5016:{NFSU2_TR(0x5b5016);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b5022;}}
}
B5b5018:L5b5018:{c.instructions+=3;NFSU2_TR(0x5b5018);
__builtin_memmove((R+28),gp(0x89010c),4);
}
B5b501e:{NFSU2_TR(0x5b501e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b5020:{NFSU2_TR(0x5b5020);
if(r1(R+518)){{goto L5b5029;}}
}
B5b5022:L5b5022:{c.instructions+=2;NFSU2_TR(0x5b5022);
w4(R+24,u32(0xaull));
}
B5b5027:{NFSU2_TR(0x5b5027);
{goto L5b5036;}
}
B5b5029:L5b5029:{c.instructions+=2;NFSU2_TR(0x5b5029);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b502b:{NFSU2_TR(0x5b502b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b5031;}}
}
B5b502d:L5b502d:{c.instructions+=2;NFSU2_TR(0x5b502d);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b502f:{NFSU2_TR(0x5b502f);
if(r1(R+518)){{goto L5b5036;}}
}
B5b5031:L5b5031:{c.instructions+=1;NFSU2_TR(0x5b5031);
w4(R+24,u32(0x2ull));
}
B5b5036:L5b5036:{c.instructions+=8;NFSU2_TR(0x5b5036);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b5037:{NFSU2_TR(0x5b5037);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b5038:{NFSU2_TR(0x5b5038);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b503c:{NFSU2_TR(0x5b503c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b5040:{NFSU2_TR(0x5b5040);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b5041:{NFSU2_TR(0x5b5041);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b5042:{NFSU2_TR(0x5b5042);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b5043:{NFSU2_TR(0x5b5043);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b5048ull));
TAIL_STATIC(0x5b4dc0u,5b4);
}
B5b5048:L5b5048:{c.instructions+=2;NFSU2_TR(0x5b5048);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b5049:{NFSU2_TR(0x5b5049);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b5050:L5b5050:{c.instructions+=14;NFSU2_TR(0x5b5050);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b5052:{NFSU2_TR(0x5b5052);
u8 U[4];
w4(U+0,u32(0x77905bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b5057:{NFSU2_TR(0x5b5057);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b505d:{NFSU2_TR(0x5b505d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b505e:{NFSU2_TR(0x5b505e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b5065:{NFSU2_TR(0x5b5065);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b5066:{NFSU2_TR(0x5b5066);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b5067:{NFSU2_TR(0x5b5067);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b5068:{NFSU2_TR(0x5b5068);
__builtin_memmove((R+24),(R+4),4);
}
B5b506a:{NFSU2_TR(0x5b506a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b5070:{NFSU2_TR(0x5b5070);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5b5073:{NFSU2_TR(0x5b5073);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b5075:{NFSU2_TR(0x5b5075);
w1(R+12,u8(0x1ull));
}
B5b5077:{NFSU2_TR(0x5b5077);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b508e;}}
}
B5b5079:L5b5079:{c.instructions+=4;NFSU2_TR(0x5b5079);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b507f:{NFSU2_TR(0x5b507f);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5b5082:{NFSU2_TR(0x5b5082);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b5084:{NFSU2_TR(0x5b5084);
if(r1(R+518)){{goto L5b508e;}}
}
B5b5086:L5b5086:{c.instructions+=2;NFSU2_TR(0x5b5086);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+8))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5b5088:{NFSU2_TR(0x5b5088);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b5310;}}
}
B5b508e:L5b508e:{c.instructions+=3;NFSU2_TR(0x5b508e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b5094:{NFSU2_TR(0x5b5094);
u8 U[10];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(u8(0x4ull))));
w1(R+523,sborrow<u8>(r1(U+8),u8(0x4ull)));
w1(U+9,u8(u32(r1(U+8))-u32(u8(0x4ull))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B5b5098:{NFSU2_TR(0x5b5098);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b50a6;}}
}
B5b509a:L5b509a:{c.instructions+=2;NFSU2_TR(0x5b509a);
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
B5b509c:{NFSU2_TR(0x5b509c);
if(r1(R+518)){{goto L5b50a6;}}
}
B5b509e:L5b509e:{c.instructions+=2;NFSU2_TR(0x5b509e);
u8 U[5];
__builtin_memmove((U+3),(R+12),1);
w1(R+512,u8((r1(R+0))<(r1(U+3))));
w1(R+523,sborrow<u8>(r1(R+0),r1(U+3)));
w1(U+4,u8(u32(r1(R+0))-u32(r1(U+3))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b50a0:{NFSU2_TR(0x5b50a0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b5310;}}
}
B5b50a6:L5b50a6:{c.instructions+=3;NFSU2_TR(0x5b50a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5b50a8:{NFSU2_TR(0x5b50a8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b50a9:{NFSU2_TR(0x5b50a9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b50acull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b50ac:L5b50ac:{c.instructions+=2;NFSU2_TR(0x5b50ac);
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
B5b50ae:{NFSU2_TR(0x5b50ae);
if(r1(R+518)){{goto L5b5310;}}
}
B5b50b4:L5b50b4:{c.instructions+=5;NFSU2_TR(0x5b50b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b50ba:{NFSU2_TR(0x5b50ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b50c0:{NFSU2_TR(0x5b50c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5b50c2:{NFSU2_TR(0x5b50c2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b50c3:{NFSU2_TR(0x5b50c3);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b50c6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b50c6:L5b50c6:{c.instructions+=2;NFSU2_TR(0x5b50c6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b50c8:{NFSU2_TR(0x5b50c8);
if(r1(R+518)){{goto L5b5310;}}
}
B5b50ce:L5b50ce:{c.instructions+=3;NFSU2_TR(0x5b50ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x244ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b50d4:{NFSU2_TR(0x5b50d4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b50d6:{NFSU2_TR(0x5b50d6);
if(r1(R+518)){{goto L5b5102;}}
}
B5b50d8:L5b50d8:{c.instructions+=10;NFSU2_TR(0x5b50d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b50db:{NFSU2_TR(0x5b50db);
__builtin_memmove((R+4),gp(0x86518c),4);
}
B5b50e1:{NFSU2_TR(0x5b50e1);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B5b50e3:{NFSU2_TR(0x5b50e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b50e7:{NFSU2_TR(0x5b50e7);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5b50eb:{NFSU2_TR(0x5b50eb);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b50f1:{NFSU2_TR(0x5b50f1);
{u32 ea_=u32(u32(8001660u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b50f7:{NFSU2_TR(0x5b50f7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b50f9:{NFSU2_TR(0x5b50f9);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b50fc:{NFSU2_TR(0x5b50fc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b5102;}}
}
B5b50fe:L5b50fe:{c.instructions+=2;NFSU2_TR(0x5b50fe);
__builtin_memmove((R+0),(R+12),1);
}
B5b5100:{NFSU2_TR(0x5b5100);
{goto L5b5104;}
}
B5b5102:L5b5102:{c.instructions+=1;NFSU2_TR(0x5b5102);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B5b5104:L5b5104:{c.instructions+=3;NFSU2_TR(0x5b5104);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b5105:{NFSU2_TR(0x5b5105);
__builtin_memmove((R+4),(R+24),4);
}
B5b5107:{NFSU2_TR(0x5b5107);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b510cull));
TAIL_STATIC(0x592f00u,592);
}
B5b510c:L5b510c:{c.instructions+=3;NFSU2_TR(0x5b510c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b5112:{NFSU2_TR(0x5b5112);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5b5114:{NFSU2_TR(0x5b5114);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b5117ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b5117:L5b5117:{c.instructions+=4;NFSU2_TR(0x5b5117);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x224ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b511d:{NFSU2_TR(0x5b511d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b5120:{NFSU2_TR(0x5b5120);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+8),u32(0x1ull)));
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5b5121:{NFSU2_TR(0x5b5121);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b513f;}}
}
B5b5123:L5b5123:{c.instructions+=10;NFSU2_TR(0x5b5123);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b5125:{NFSU2_TR(0x5b5125);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b5128:{NFSU2_TR(0x5b5128);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b512b:{NFSU2_TR(0x5b512b);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5b512d:{NFSU2_TR(0x5b512d);
__builtin_memmove((R+8),(R+0),4);
}
B5b512f:{NFSU2_TR(0x5b512f);
{u32 ea_=u32(r4(R+4)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b5132:{NFSU2_TR(0x5b5132);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b5135:{NFSU2_TR(0x5b5135);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b5139:{NFSU2_TR(0x5b5139);
{u32 ea_=u32(r4(R+4)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b513c:{NFSU2_TR(0x5b513c);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3eull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5b513f:L5b513f:{c.instructions+=3;NFSU2_TR(0x5b513f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b5145:{NFSU2_TR(0x5b5145);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5b5147:{NFSU2_TR(0x5b5147);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b514aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b514a:L5b514a:{c.instructions+=4;NFSU2_TR(0x5b514a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x228ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b5150:{NFSU2_TR(0x5b5150);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b5153:{NFSU2_TR(0x5b5153);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+8),u32(0x1ull)));
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5b5154:{NFSU2_TR(0x5b5154);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b5172;}}
}
B5b5156:L5b5156:{c.instructions+=10;NFSU2_TR(0x5b5156);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b5158:{NFSU2_TR(0x5b5158);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b515b:{NFSU2_TR(0x5b515b);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b515e:{NFSU2_TR(0x5b515e);
__builtin_memmove((R+0),(R+8),4);
}
B5b5160:{NFSU2_TR(0x5b5160);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5b5162:{NFSU2_TR(0x5b5162);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b5165:{NFSU2_TR(0x5b5165);
{u32 ea_=u32(r4(R+4)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b5168:{NFSU2_TR(0x5b5168);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b516c:{NFSU2_TR(0x5b516c);
{u32 ea_=u32(r4(R+4)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b516f:{NFSU2_TR(0x5b516f);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3eull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5b5172:L5b5172:{c.instructions+=9;NFSU2_TR(0x5b5172);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b5178:{NFSU2_TR(0x5b5178);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b517e:{NFSU2_TR(0x5b517e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b517f:{NFSU2_TR(0x5b517f);
__builtin_memmove((R+28),(R+4),4);
}
B5b5181:{NFSU2_TR(0x5b5181);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5b5183:{NFSU2_TR(0x5b5183);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b5187:{NFSU2_TR(0x5b5187);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b518b:{NFSU2_TR(0x5b518b);
__builtin_memmove((R+12),(R+8),4);
}
B5b518d:{NFSU2_TR(0x5b518d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b5190ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b5190:L5b5190:{c.instructions+=4;NFSU2_TR(0x5b5190);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5b5192:{NFSU2_TR(0x5b5192);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b5193:{NFSU2_TR(0x5b5193);
__builtin_memmove((R+4),(R+28),4);
}
B5b5195:{NFSU2_TR(0x5b5195);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b5198ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b5198:L5b5198:{c.instructions+=4;NFSU2_TR(0x5b5198);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b5199:{NFSU2_TR(0x5b5199);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5b519b:{NFSU2_TR(0x5b519b);
__builtin_memmove((R+4),(R+12),4);
}
B5b519d:{NFSU2_TR(0x5b519d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b51a0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b51a0:L5b51a0:{c.instructions+=4;NFSU2_TR(0x5b51a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5b51a2:{NFSU2_TR(0x5b51a2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b51a3:{NFSU2_TR(0x5b51a3);
__builtin_memmove((R+4),(R+12),4);
}
B5b51a5:{NFSU2_TR(0x5b51a5);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b51a8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b51a8:L5b51a8:{c.instructions+=3;NFSU2_TR(0x5b51a8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b51a9:{NFSU2_TR(0x5b51a9);
__builtin_memmove((R+4),(R+24),4);
}
B5b51ab:{NFSU2_TR(0x5b51ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b51b0ull));
TAIL_STATIC(0x598620u,598);
}
B5b51b0:L5b51b0:{c.instructions+=2;NFSU2_TR(0x5b51b0);
__builtin_memmove((R+4),(R+24),4);
}
B5b51b2:{NFSU2_TR(0x5b51b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b51b7ull));
TAIL_STATIC(0x5b3d20u,5b3);
}
B5b51b7:L5b51b7:{c.instructions+=3;NFSU2_TR(0x5b51b7);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b51b9:{NFSU2_TR(0x5b51b9);
__builtin_memmove((R+4),(R+24),4);
}
B5b51bb:{NFSU2_TR(0x5b51bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b51c0ull));
TAIL_STATIC(0x593010u,593);
}
B5b51c0:L5b51c0:{c.instructions+=4;NFSU2_TR(0x5b51c0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5b51c3:{NFSU2_TR(0x5b51c3);
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
B5b51c5:{NFSU2_TR(0x5b51c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b51c6:{NFSU2_TR(0x5b51c6);
if(r1(R+518)){{goto L5b5310;}}
}
B5b51cc:L5b51cc:{c.instructions+=3;NFSU2_TR(0x5b51cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b51d2:{NFSU2_TR(0x5b51d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5b51d4:{NFSU2_TR(0x5b51d4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b51d7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b51d7:L5b51d7:{c.instructions+=2;NFSU2_TR(0x5b51d7);
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
B5b51d9:{NFSU2_TR(0x5b51d9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b51ea;}}
}
B5b51db:L5b51db:{c.instructions+=3;NFSU2_TR(0x5b51db);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b51e1:{NFSU2_TR(0x5b51e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5b51e3:{NFSU2_TR(0x5b51e3);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b51e6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b51e6:L5b51e6:{c.instructions+=2;NFSU2_TR(0x5b51e6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b51e8:{NFSU2_TR(0x5b51e8);
if(r1(R+518)){{goto L5b5246;}}
}
B5b51ea:L5b51ea:{c.instructions+=4;NFSU2_TR(0x5b51ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b51f0:{NFSU2_TR(0x5b51f0);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5b51f3:{NFSU2_TR(0x5b51f3);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b51f5:{NFSU2_TR(0x5b51f5);
if(r1(R+518)){{goto L5b5246;}}
}
B5b51f7:L5b51f7:{c.instructions+=4;NFSU2_TR(0x5b51f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b51fd:{NFSU2_TR(0x5b51fd);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5b5200:{NFSU2_TR(0x5b5200);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b5202:{NFSU2_TR(0x5b5202);
if(r1(R+518)){{goto L5b5246;}}
}
B5b5204:L5b5204:{c.instructions+=3;NFSU2_TR(0x5b5204);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5b5207:{NFSU2_TR(0x5b5207);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b5209:{NFSU2_TR(0x5b5209);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b5217;}}
}
B5b520b:L5b520b:{c.instructions+=2;NFSU2_TR(0x5b520b);
__builtin_memmove((R+8),gp(0x86518c),4);
}
B5b5211:{NFSU2_TR(0x5b5211);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x13cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b5217:L5b5217:{c.instructions+=4;NFSU2_TR(0x5b5217);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5b521d:{NFSU2_TR(0x5b521d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5b5220:{NFSU2_TR(0x5b5220);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b5222:{NFSU2_TR(0x5b5222);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b5310;}}
}
B5b5228:L5b5228:{c.instructions+=8;NFSU2_TR(0x5b5228);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B5b522d:{NFSU2_TR(0x5b522d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b5233:{NFSU2_TR(0x5b5233);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b5234:{NFSU2_TR(0x5b5234);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b5235:{NFSU2_TR(0x5b5235);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b5239:{NFSU2_TR(0x5b5239);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b5240:{NFSU2_TR(0x5b5240);
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
B5b5243:{NFSU2_TR(0x5b5243);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b5246:L5b5246:{c.instructions+=4;NFSU2_TR(0x5b5246);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b524c:{NFSU2_TR(0x5b524c);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5b524f:{NFSU2_TR(0x5b524f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b5251:{NFSU2_TR(0x5b5251);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b5283;}}
}
B5b5253:L5b5253:{c.instructions+=3;NFSU2_TR(0x5b5253);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b5259:{NFSU2_TR(0x5b5259);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b525a:{NFSU2_TR(0x5b525a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b525full));
TAIL_STATIC(0x592ed0u,592);
}
B5b525f:L5b525f:{c.instructions+=3;NFSU2_TR(0x5b525f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5b5262:{NFSU2_TR(0x5b5262);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b5264:{NFSU2_TR(0x5b5264);
if(r1(R+518)){{goto L5b5271;}}
}
B5b5266:L5b5266:{c.instructions+=2;NFSU2_TR(0x5b5266);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B5b526b:{NFSU2_TR(0x5b526b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x140ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b5271:L5b5271:{c.instructions+=3;NFSU2_TR(0x5b5271);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b5277:{NFSU2_TR(0x5b5277);
__builtin_memmove((R+4),gp(0x86518c),4);
}
B5b527d:{NFSU2_TR(0x5b527d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x138ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b5283:L5b5283:{c.instructions+=4;NFSU2_TR(0x5b5283);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b5289:{NFSU2_TR(0x5b5289);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5b528c:{NFSU2_TR(0x5b528c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b528e:{NFSU2_TR(0x5b528e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b52c1;}}
}
B5b5290:L5b5290:{c.instructions+=3;NFSU2_TR(0x5b5290);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b5296:{NFSU2_TR(0x5b5296);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b5297:{NFSU2_TR(0x5b5297);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b529cull));
TAIL_STATIC(0x592ed0u,592);
}
B5b529c:L5b529c:{c.instructions+=3;NFSU2_TR(0x5b529c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5b529f:{NFSU2_TR(0x5b529f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b52a1:{NFSU2_TR(0x5b52a1);
if(r1(R+518)){{goto L5b52af;}}
}
B5b52a3:L5b52a3:{c.instructions+=2;NFSU2_TR(0x5b52a3);
__builtin_memmove((R+4),gp(0x86518c),4);
}
B5b52a9:{NFSU2_TR(0x5b52a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x140ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b52af:L5b52af:{c.instructions+=3;NFSU2_TR(0x5b52af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b52b5:{NFSU2_TR(0x5b52b5);
__builtin_memmove((R+8),gp(0x86518c),4);
}
B5b52bb:{NFSU2_TR(0x5b52bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x138ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b52c1:L5b52c1:{c.instructions+=3;NFSU2_TR(0x5b52c1);
__builtin_memmove((R+0),gp(0x86b2cc),4);
}
B5b52c6:{NFSU2_TR(0x5b52c6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b52c7:{NFSU2_TR(0x5b52c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b52ccull));
TAIL_STATIC(0x440e50u,440);
}
B5b52cc:L5b52cc:{c.instructions+=5;NFSU2_TR(0x5b52cc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5b52cf:{NFSU2_TR(0x5b52cf);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b52d3:{NFSU2_TR(0x5b52d3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b52d5:{NFSU2_TR(0x5b52d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b52dd:{NFSU2_TR(0x5b52dd);
if(r1(R+518)){{goto L5b52f7;}}
}
B5b52df:L5b52df:{c.instructions+=7;NFSU2_TR(0x5b52df);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b52e5:{NFSU2_TR(0x5b52e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b52eb:{NFSU2_TR(0x5b52eb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b52ec:{NFSU2_TR(0x5b52ec);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b52ed:{NFSU2_TR(0x5b52ed);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b52ee:{NFSU2_TR(0x5b52ee);
__builtin_memmove((R+4),(R+0),4);
}
B5b52f0:{NFSU2_TR(0x5b52f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b52f5ull));
TAIL_STATIC(0x5b4f90u,5b4);
}
B5b52f5:L5b52f5:{c.instructions+=1;NFSU2_TR(0x5b52f5);
{goto L5b52f9;}
}
B5b52f7:L5b52f7:{c.instructions+=1;NFSU2_TR(0x5b52f7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5b52f9:L5b52f9:{c.instructions+=5;NFSU2_TR(0x5b52f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b52fd:{NFSU2_TR(0x5b52fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b52fe:{NFSU2_TR(0x5b52fe);
u8 U[4];
w4(U+0,u32(0x5a0eb0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b5303:{NFSU2_TR(0x5b5303);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b530b:{NFSU2_TR(0x5b530b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b5310ull));
TAIL_STATIC(0x43bee0u,43b);
}
B5b5310:L5b5310:{c.instructions+=6;NFSU2_TR(0x5b5310);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b5314:{NFSU2_TR(0x5b5314);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b5315:{NFSU2_TR(0x5b5315);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b5316:{NFSU2_TR(0x5b5316);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b531d:{NFSU2_TR(0x5b531d);
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
B5b5320:{NFSU2_TR(0x5b5320);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b5330:L5b5330:{c.instructions+=4;NFSU2_TR(0x5b5330);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b5331:{NFSU2_TR(0x5b5331);
__builtin_memmove((R+24),(R+4),4);
}
B5b5333:{NFSU2_TR(0x5b5333);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(u8(0xffull))));
w1(R+523,sborrow<u8>(r1(U+8),u8(0xffull)));
w1(U+9,u8(u32(r1(U+8))-u32(u8(0xffull))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B5b5337:{NFSU2_TR(0x5b5337);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b5344;}}
}
B5b5339:L5b5339:{c.instructions+=4;NFSU2_TR(0x5b5339);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b533b:{NFSU2_TR(0x5b533b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b533d:{NFSU2_TR(0x5b533d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b533f:{NFSU2_TR(0x5b533f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b5344ull));
TAIL_STATIC(0x5b4fc0u,5b4);
}
B5b5344:L5b5344:{c.instructions+=3;NFSU2_TR(0x5b5344);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5b5347:{NFSU2_TR(0x5b5347);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b5348:{NFSU2_TR(0x5b5348);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b5350:L5b5350:{c.instructions+=4;NFSU2_TR(0x5b5350);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b5351:{NFSU2_TR(0x5b5351);
__builtin_memmove((R+24),(R+4),4);
}
B5b5353:{NFSU2_TR(0x5b5353);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(u8(0xffull))));
w1(R+523,sborrow<u8>(r1(U+8),u8(0xffull)));
w1(U+9,u8(u32(r1(U+8))-u32(u8(0xffull))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B5b5357:{NFSU2_TR(0x5b5357);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b536c;}}
}
B5b5359:L5b5359:{c.instructions+=3;NFSU2_TR(0x5b5359);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5b535d:{NFSU2_TR(0x5b535d);
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
B5b535f:{NFSU2_TR(0x5b535f);
if(r1(R+518)){{goto L5b536c;}}
}
B5b5361:L5b5361:{c.instructions+=4;NFSU2_TR(0x5b5361);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b5363:{NFSU2_TR(0x5b5363);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b5365:{NFSU2_TR(0x5b5365);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b5367:{NFSU2_TR(0x5b5367);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b536cull));
TAIL_STATIC(0x5b4fc0u,5b4);
}
B5b536c:L5b536c:{c.instructions+=3;NFSU2_TR(0x5b536c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5b536f:{NFSU2_TR(0x5b536f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b5370:{NFSU2_TR(0x5b5370);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b5380:L5b5380:{c.instructions+=4;NFSU2_TR(0x5b5380);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b5381:{NFSU2_TR(0x5b5381);
__builtin_memmove((R+24),(R+4),4);
}
B5b5383:{NFSU2_TR(0x5b5383);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(u8(0xffull))));
w1(R+523,sborrow<u8>(r1(U+8),u8(0xffull)));
w1(U+9,u8(u32(r1(U+8))-u32(u8(0xffull))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B5b5387:{NFSU2_TR(0x5b5387);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b5394;}}
}
B5b5389:L5b5389:{c.instructions+=4;NFSU2_TR(0x5b5389);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b538b:{NFSU2_TR(0x5b538b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b538d:{NFSU2_TR(0x5b538d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b538f:{NFSU2_TR(0x5b538f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b5394ull));
TAIL_STATIC(0x5b4fc0u,5b4);
}
B5b5394:L5b5394:{c.instructions+=3;NFSU2_TR(0x5b5394);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x55cull))));
__builtin_memmove((R+0),(U+0),4);
}
B5b539a:{NFSU2_TR(0x5b539a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b539b:{NFSU2_TR(0x5b539b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b53a0:L5b53a0:{c.instructions+=5;NFSU2_TR(0x5b53a0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b53a1:{NFSU2_TR(0x5b53a1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b53a2:{NFSU2_TR(0x5b53a2);
__builtin_memmove((R+24),(R+4),4);
}
B5b53a4:{NFSU2_TR(0x5b53a4);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0xffull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5b53a8:{NFSU2_TR(0x5b53a8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b53b5;}}
}
B5b53aa:L5b53aa:{c.instructions+=4;NFSU2_TR(0x5b53aa);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b53ac:{NFSU2_TR(0x5b53ac);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b53ae:{NFSU2_TR(0x5b53ae);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b53b0:{NFSU2_TR(0x5b53b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b53b5ull));
TAIL_STATIC(0x5b4fc0u,5b4);
}
B5b53b5:L5b53b5:{c.instructions+=2;NFSU2_TR(0x5b53b5);
__builtin_memmove((R+4),(R+24),4);
}
B5b53b7:{NFSU2_TR(0x5b53b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b53bcull));
TAIL_STATIC(0x59a350u,59a);
}
B5b53bc:L5b53bc:{c.instructions+=12;NFSU2_TR(0x5b53bc);
{u32 ea_=u32(u32(8827864u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b53c2:{NFSU2_TR(0x5b53c2);
{u32 ea_=u32(u32(8827868u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b53c8:{NFSU2_TR(0x5b53c8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5b53cb:{NFSU2_TR(0x5b53cb);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0xffull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b53cd:{NFSU2_TR(0x5b53cd);
{u32 ea_=u32(u32(8827864u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b53d3:{NFSU2_TR(0x5b53d3);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B5b53d5:{NFSU2_TR(0x5b53d5);
{u32 ea_=u32(u32(8002240u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b53db:{NFSU2_TR(0x5b53db);
{u32 ea_=u32(u32(8002232u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5b53e1:{NFSU2_TR(0x5b53e1);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5b53e7:{NFSU2_TR(0x5b53e7);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B5b53e9:{NFSU2_TR(0x5b53e9);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b53ed:{NFSU2_TR(0x5b53ed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b53fc;}}
}
B5b53ef:L5b53ef:{c.instructions+=5;NFSU2_TR(0x5b53ef);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b53f1:{NFSU2_TR(0x5b53f1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b53f3:{NFSU2_TR(0x5b53f3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b53f5:{NFSU2_TR(0x5b53f5);
__builtin_memmove((R+4),(R+24),4);
}
B5b53f7:{NFSU2_TR(0x5b53f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b53fcull));
TAIL_STATIC(0x5b4fc0u,5b4);
}
B5b53fc:L5b53fc:{c.instructions+=11;NFSU2_TR(0x5b53fc);
{u32 ea_=u32(r4(R+24)+u32(732u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b5402:{NFSU2_TR(0x5b5402);
{u32 ea_=u32(r4(R+24)+u32(720u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b5408:{NFSU2_TR(0x5b5408);
{u32 ea_=u32(u32(8827888u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b540e:{NFSU2_TR(0x5b540e);
{u32 ea_=u32(u32(8827892u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b5414:{NFSU2_TR(0x5b5414);
{u32 ea_=u32(u32(8827888u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b541a:{NFSU2_TR(0x5b541a);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B5b541c:{NFSU2_TR(0x5b541c);
{u32 ea_=u32(u32(8002232u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b5422:{NFSU2_TR(0x5b5422);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5b5426:{NFSU2_TR(0x5b5426);
{u32 ea_=u32(r4(R+24)+u32(740u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b542c:{NFSU2_TR(0x5b542c);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5b5432:{NFSU2_TR(0x5b5432);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b5437ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5b5437:L5b5437:{c.instructions+=11;NFSU2_TR(0x5b5437);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b543b:{NFSU2_TR(0x5b543b);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5b543f:{NFSU2_TR(0x5b543f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b5440:{NFSU2_TR(0x5b5440);
{u32 ea_=u32(u32(7889736u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b5446:{NFSU2_TR(0x5b5446);
{u32 ea_=u32(u32(8002240u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b544c:{NFSU2_TR(0x5b544c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5b544e:{NFSU2_TR(0x5b544e);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5b5452:{NFSU2_TR(0x5b5452);
{u32 ea_=u32(u32(7897424u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b5458:{NFSU2_TR(0x5b5458);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b545a:{NFSU2_TR(0x5b545a);
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
B5b545d:{NFSU2_TR(0x5b545d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b547e;}}
}
B5b545f:L5b545f:{c.instructions+=6;NFSU2_TR(0x5b545f);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b5463:{NFSU2_TR(0x5b5463);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b5469:{NFSU2_TR(0x5b5469);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b546d:{NFSU2_TR(0x5b546d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b546f:{NFSU2_TR(0x5b546f);
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
B5b5472:{NFSU2_TR(0x5b5472);
if(r1(R+514)){{goto L5b547c;}}
}
B5b5474:L5b5474:{c.instructions+=2;NFSU2_TR(0x5b5474);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b5476:{NFSU2_TR(0x5b5476);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b547c:L5b547c:{c.instructions+=2;NFSU2_TR(0x5b547c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5b547d:{NFSU2_TR(0x5b547d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b547e:L5b547e:{c.instructions+=3;NFSU2_TR(0x5b547e);
{u32 ea_=u32(u32(7897424u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b5484:{NFSU2_TR(0x5b5484);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5b5485:{NFSU2_TR(0x5b5485);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b5490:L5b5490:{c.instructions+=5;NFSU2_TR(0x5b5490);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x28ull))));
}
B5b5493:{NFSU2_TR(0x5b5493);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b5494:{NFSU2_TR(0x5b5494);
__builtin_memmove((R+24),(R+4),4);
}
B5b5496:{NFSU2_TR(0x5b5496);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0xffull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5b549a:{NFSU2_TR(0x5b549a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b54ba;}}
}
B5b549c:L5b549c:{c.instructions+=4;NFSU2_TR(0x5b549c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b549e:{NFSU2_TR(0x5b549e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b54a0:{NFSU2_TR(0x5b54a0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b54a2:{NFSU2_TR(0x5b54a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b54a7ull));
TAIL_STATIC(0x5b4fc0u,5b4);
}
B5b54a7:L5b54a7:{c.instructions+=2;NFSU2_TR(0x5b54a7);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0xffull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5b54ab:{NFSU2_TR(0x5b54ab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b54ba;}}
}
B5b54ad:L5b54ad:{c.instructions+=5;NFSU2_TR(0x5b54ad);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b54af:{NFSU2_TR(0x5b54af);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b54b1:{NFSU2_TR(0x5b54b1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b54b3:{NFSU2_TR(0x5b54b3);
__builtin_memmove((R+4),(R+24),4);
}
B5b54b5:{NFSU2_TR(0x5b54b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b54baull));
TAIL_STATIC(0x5b4fc0u,5b4);
}
B5b54ba:L5b54ba:{c.instructions+=83;NFSU2_TR(0x5b54ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x140ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b54c0:{NFSU2_TR(0x5b54c0);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b54c6:{NFSU2_TR(0x5b54c6);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b54cc:{NFSU2_TR(0x5b54cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b54d0:{NFSU2_TR(0x5b54d0);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5b54d4:{NFSU2_TR(0x5b54d4);
{u32 ea_=u32(r4(R+24)+u32(304u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b54da:{NFSU2_TR(0x5b54da);
{u32 ea_=u32(r4(R+24)+u32(300u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5b54e0:{NFSU2_TR(0x5b54e0);
{u32 ea_=u32(r4(R+24)+u32(272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b54e6:{NFSU2_TR(0x5b54e6);
{u32 ea_=u32(r4(R+24)+u32(268u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5b54ec:{NFSU2_TR(0x5b54ec);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5b54ee:{NFSU2_TR(0x5b54ee);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b54f4:{NFSU2_TR(0x5b54f4);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5b54f6:{NFSU2_TR(0x5b54f6);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b54fc:{NFSU2_TR(0x5b54fc);
{u32 ea_=u32(u32(8827912u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b5502:{NFSU2_TR(0x5b5502);
{u32 ea_=u32(u32(8827916u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b5508:{NFSU2_TR(0x5b5508);
{u32 ea_=u32(u32(8827912u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b550e:{NFSU2_TR(0x5b550e);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B5b5510:{NFSU2_TR(0x5b5510);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b5514:{NFSU2_TR(0x5b5514);
{u32 ea_=u32(r4(R+24)+u32(680u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b551a:{NFSU2_TR(0x5b551a);
{u32 ea_=u32(u32(8002720u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b5520:{NFSU2_TR(0x5b5520);
{u32 ea_=u32(r4(R+24)+u32(676u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b5526:{NFSU2_TR(0x5b5526);
{u32 ea_=u32(u32(8002716u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b552c:{NFSU2_TR(0x5b552c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5b552e:{NFSU2_TR(0x5b552e);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5b5530:{NFSU2_TR(0x5b5530);
{u32 ea_=u32(u32(8827920u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b5536:{NFSU2_TR(0x5b5536);
{u32 ea_=u32(u32(8827924u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b553c:{NFSU2_TR(0x5b553c);
{u32 ea_=u32(u32(8827920u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b5542:{NFSU2_TR(0x5b5542);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B5b5544:{NFSU2_TR(0x5b5544);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b5548:{NFSU2_TR(0x5b5548);
{u32 ea_=u32(r4(R+24)+u32(452u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b554e:{NFSU2_TR(0x5b554e);
{u32 ea_=u32(r4(R+24)+u32(448u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b5554:{NFSU2_TR(0x5b5554);
{u32 ea_=u32(r4(R+24)+u32(464u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5b555a:{NFSU2_TR(0x5b555a);
{u32 ea_=u32(r4(R+24)+u32(420u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b5560:{NFSU2_TR(0x5b5560);
{u32 ea_=u32(r4(R+24)+u32(416u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b5566:{NFSU2_TR(0x5b5566);
{u32 ea_=u32(r4(R+24)+u32(432u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5b556c:{NFSU2_TR(0x5b556c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5b556e:{NFSU2_TR(0x5b556e);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b5574:{NFSU2_TR(0x5b5574);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5b5576:{NFSU2_TR(0x5b5576);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b557c:{NFSU2_TR(0x5b557c);
{u32 ea_=u32(u32(8827904u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b5582:{NFSU2_TR(0x5b5582);
{u32 ea_=u32(u32(8827908u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b5588:{NFSU2_TR(0x5b5588);
{u32 ea_=u32(u32(8827904u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b558e:{NFSU2_TR(0x5b558e);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B5b5590:{NFSU2_TR(0x5b5590);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b5594:{NFSU2_TR(0x5b5594);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b5596:{NFSU2_TR(0x5b5596);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b559a:{NFSU2_TR(0x5b559a);
{u32 ea_=u32(u32(8827928u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b55a0:{NFSU2_TR(0x5b55a0);
{u32 ea_=u32(u32(8827932u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b55a6:{NFSU2_TR(0x5b55a6);
{u32 ea_=u32(u32(8827928u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b55ac:{NFSU2_TR(0x5b55ac);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B5b55ae:{NFSU2_TR(0x5b55ae);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5b55b4:{NFSU2_TR(0x5b55b4);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b55b8:{NFSU2_TR(0x5b55b8);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b55bb:{NFSU2_TR(0x5b55bb);
{u32 ea_=u32(u32(8827936u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b55c1:{NFSU2_TR(0x5b55c1);
{u32 ea_=u32(u32(8827940u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b55c7:{NFSU2_TR(0x5b55c7);
{u32 ea_=u32(u32(8827936u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b55cd:{NFSU2_TR(0x5b55cd);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B5b55cf:{NFSU2_TR(0x5b55cf);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5b55d5:{NFSU2_TR(0x5b55d5);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b55d9:{NFSU2_TR(0x5b55d9);
{u32 ea_=u32(r4(R+24)+u32(400u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b55df:{NFSU2_TR(0x5b55df);
{u32 ea_=u32(u32(8827944u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b55e5:{NFSU2_TR(0x5b55e5);
{u32 ea_=u32(u32(8827948u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b55eb:{NFSU2_TR(0x5b55eb);
{u32 ea_=u32(u32(8827944u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b55f1:{NFSU2_TR(0x5b55f1);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B5b55f3:{NFSU2_TR(0x5b55f3);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5b55f9:{NFSU2_TR(0x5b55f9);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b55fd:{NFSU2_TR(0x5b55fd);
{u32 ea_=u32(r4(R+24)+u32(660u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b5603:{NFSU2_TR(0x5b5603);
{u32 ea_=u32(u32(8827952u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b5609:{NFSU2_TR(0x5b5609);
{u32 ea_=u32(u32(8827956u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b560f:{NFSU2_TR(0x5b560f);
{u32 ea_=u32(u32(8827952u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b5615:{NFSU2_TR(0x5b5615);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B5b5617:{NFSU2_TR(0x5b5617);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b561b:{NFSU2_TR(0x5b561b);
{u32 ea_=u32(r4(R+24)+u32(664u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b5621:{NFSU2_TR(0x5b5621);
{u32 ea_=u32(u32(8827960u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b5627:{NFSU2_TR(0x5b5627);
{u32 ea_=u32(u32(8827964u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b562d:{NFSU2_TR(0x5b562d);
{u32 ea_=u32(u32(8827960u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b5633:{NFSU2_TR(0x5b5633);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B5b5635:{NFSU2_TR(0x5b5635);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b5639:{NFSU2_TR(0x5b5639);
{u32 ea_=u32(r4(R+24)+u32(496u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b563f:{NFSU2_TR(0x5b563f);
{u32 ea_=u32(u32(7882084u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b5645:{NFSU2_TR(0x5b5645);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b5647:{NFSU2_TR(0x5b5647);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b564a:{NFSU2_TR(0x5b564a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b5660;}}
}
B5b564c:L5b564c:{c.instructions+=4;NFSU2_TR(0x5b564c);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b5652:{NFSU2_TR(0x5b5652);
{u32 ea_=u32(r4(R+24)+u32(496u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b5658:{NFSU2_TR(0x5b5658);
{u32 ea_=u32(u32(7976160u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b565e:{NFSU2_TR(0x5b565e);
{goto L5b5672;}
}
B5b5660:L5b5660:{c.instructions+=3;NFSU2_TR(0x5b5660);
{u32 ea_=u32(r4(R+24)+u32(496u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b5666:{NFSU2_TR(0x5b5666);
{u32 ea_=u32(u32(7882068u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5b566c:{NFSU2_TR(0x5b566c);
{u32 ea_=u32(u32(7889640u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b5672:L5b5672:{c.instructions+=4;NFSU2_TR(0x5b5672);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b5676:{NFSU2_TR(0x5b5676);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5b5678:{NFSU2_TR(0x5b5678);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b5679:{NFSU2_TR(0x5b5679);
__builtin_memmove((R+16),(R+16),4);
}
B5b5680:L5b5680:{c.instructions+=6;NFSU2_TR(0x5b5680);
{u32 ea_=u32(r4(R+0)+u32(8002196u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b5686:{NFSU2_TR(0x5b5686);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B5b5689:{NFSU2_TR(0x5b5689);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x24ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x24ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5b568c:{NFSU2_TR(0x5b568c);
{u32 ea_=u32(r4(R+0)+r4(R+16));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b5690:{NFSU2_TR(0x5b5690);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5b5692:{NFSU2_TR(0x5b5692);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b5680u);}goto L5b5680;}}
}
B5b5694:L5b5694:{c.instructions+=4;NFSU2_TR(0x5b5694);
{u32 ea_=u32(u32(7897424u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5b569a:{NFSU2_TR(0x5b569a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b569c:{NFSU2_TR(0x5b569c);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b569f:{NFSU2_TR(0x5b569f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b56c0;}}
}
B5b56a1:L5b56a1:{c.instructions+=7;NFSU2_TR(0x5b56a1);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5b56a5:{NFSU2_TR(0x5b56a5);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b56ab:{NFSU2_TR(0x5b56ab);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5b56ad:{NFSU2_TR(0x5b56ad);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b56af:{NFSU2_TR(0x5b56af);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b56b1:{NFSU2_TR(0x5b56b1);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b56b4:{NFSU2_TR(0x5b56b4);
if(r1(R+514)){{goto L5b56cc;}}
}
B5b56b6:L5b56b6:{c.instructions+=3;NFSU2_TR(0x5b56b6);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b56bc:{NFSU2_TR(0x5b56bc);
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
B5b56bf:{NFSU2_TR(0x5b56bf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b56c0:L5b56c0:{c.instructions+=4;NFSU2_TR(0x5b56c0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b56c2:{NFSU2_TR(0x5b56c2);
{u32 ea_=u32(u32(7897424u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b56c8:{NFSU2_TR(0x5b56c8);
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
B5b56cb:{NFSU2_TR(0x5b56cb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b56cc:L5b56cc:{c.instructions+=3;NFSU2_TR(0x5b56cc);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b56d0:{NFSU2_TR(0x5b56d0);
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
B5b56d3:{NFSU2_TR(0x5b56d3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b56e0:L5b56e0:{c.instructions+=22;NFSU2_TR(0x5b56e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B5b56e3:{NFSU2_TR(0x5b56e3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b56e4:{NFSU2_TR(0x5b56e4);
__builtin_memmove((R+24),(R+4),4);
}
B5b56e6:{NFSU2_TR(0x5b56e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x228ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b56ec:{NFSU2_TR(0x5b56ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b56f2:{NFSU2_TR(0x5b56f2);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b56f6:{NFSU2_TR(0x5b56f6);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b56fa:{NFSU2_TR(0x5b56fa);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b56fe:{NFSU2_TR(0x5b56fe);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b5702:{NFSU2_TR(0x5b5702);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5b5708:{NFSU2_TR(0x5b5708);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x9ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b5710:{NFSU2_TR(0x5b5710);
{u32 ea_=u32(u32(7897588u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B5b5716:{NFSU2_TR(0x5b5716);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b571a:{NFSU2_TR(0x5b571a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b5722:{NFSU2_TR(0x5b5722);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b572a:{NFSU2_TR(0x5b572a);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b572e:{NFSU2_TR(0x5b572e);
{u32 ea_=u32(r4(R+24)+u32(544u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b5734:{NFSU2_TR(0x5b5734);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5b5738:{NFSU2_TR(0x5b5738);
{u32 ea_=u32(r4(R+24)+u32(552u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b573e:{NFSU2_TR(0x5b573e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b5740:{NFSU2_TR(0x5b5740);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b5743:{NFSU2_TR(0x5b5743);
if(r1(R+514)){{goto L5b5799;}}
}
B5b5745:L5b5745:{c.instructions+=4;NFSU2_TR(0x5b5745);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b5749:{NFSU2_TR(0x5b5749);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b574a:{NFSU2_TR(0x5b574a);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5b574e:{NFSU2_TR(0x5b574e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b5753ull));
TAIL_STATIC(0x5764d0u,576);
}
B5b5753:L5b5753:{c.instructions+=7;NFSU2_TR(0x5b5753);
{u32 ea_=u32(u32(7882064u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b5759:{NFSU2_TR(0x5b5759);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b575d:{NFSU2_TR(0x5b575d);
{u32 ea_=u32(u32(7978744u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b5763:{NFSU2_TR(0x5b5763);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5b5767:{NFSU2_TR(0x5b5767);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b5769:{NFSU2_TR(0x5b5769);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b576c:{NFSU2_TR(0x5b576c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b577c;}}
}
B5b576e:L5b576e:{c.instructions+=4;NFSU2_TR(0x5b576e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b5772:{NFSU2_TR(0x5b5772);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b5776:{NFSU2_TR(0x5b5776);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b577a:{NFSU2_TR(0x5b577a);
{goto L5b577e;}
}
B5b577c:L5b577c:{c.instructions+=1;NFSU2_TR(0x5b577c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b577e:L5b577e:{c.instructions+=7;NFSU2_TR(0x5b577e);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b5782:{NFSU2_TR(0x5b5782);
{u32 ea_=u32(u32(7887744u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5b5788:{NFSU2_TR(0x5b5788);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5b578c:{NFSU2_TR(0x5b578c);
{u32 ea_=u32(r4(R+24)+u32(552u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b5792:{NFSU2_TR(0x5b5792);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b5794:{NFSU2_TR(0x5b5794);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b5797:{NFSU2_TR(0x5b5797);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b5745u);}goto L5b5745;}}
}
B5b5799:L5b5799:{c.instructions+=4;NFSU2_TR(0x5b5799);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b579d:{NFSU2_TR(0x5b579d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b579f:{NFSU2_TR(0x5b579f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b57a0:{NFSU2_TR(0x5b57a0);
if(r1(R+518)){{goto L5b57a8;}}
}
B5b57a2:L5b57a2:{c.instructions+=2;NFSU2_TR(0x5b57a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b57a6:{NFSU2_TR(0x5b57a6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5b57a8:L5b57a8:{c.instructions+=3;NFSU2_TR(0x5b57a8);
u8 U[5];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5b57ac:{NFSU2_TR(0x5b57ac);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b57ae:{NFSU2_TR(0x5b57ae);
if(r1(R+518)){{goto L5b57fe;}}
}
B5b57b0:L5b57b0:{c.instructions+=5;NFSU2_TR(0x5b57b0);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b57b4:{NFSU2_TR(0x5b57b4);
{u32 ea_=u32(u32(8827880u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b57ba:{NFSU2_TR(0x5b57ba);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b57bc:{NFSU2_TR(0x5b57bc);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b57bf:{NFSU2_TR(0x5b57bf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b57c7;}}
}
B5b57c1:L5b57c1:{c.instructions+=2;NFSU2_TR(0x5b57c1);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b57c5:{NFSU2_TR(0x5b57c5);
{goto L5b57cd;}
}
B5b57c7:L5b57c7:{c.instructions+=1;NFSU2_TR(0x5b57c7);
{u32 ea_=u32(u32(8827880u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b57cd:L5b57cd:{c.instructions+=5;NFSU2_TR(0x5b57cd);
{u32 ea_=u32(u32(8827884u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b57d3:{NFSU2_TR(0x5b57d3);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5b57d5:{NFSU2_TR(0x5b57d5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b57d7:{NFSU2_TR(0x5b57d7);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b57da:{NFSU2_TR(0x5b57da);
if(r1(R+514)){{goto L5b57e4;}}
}
B5b57dc:L5b57dc:{c.instructions+=2;NFSU2_TR(0x5b57dc);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b57de:{NFSU2_TR(0x5b57de);
{u32 ea_=u32(u32(8827884u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b57e4:L5b57e4:{c.instructions+=6;NFSU2_TR(0x5b57e4);
{u32 ea_=u32(u32(8827880u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b57ea:{NFSU2_TR(0x5b57ea);
{u32 ea_=u32(u32(8827884u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b57f0:{NFSU2_TR(0x5b57f0);
{u32 ea_=u32(u32(8827880u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b57f6:{NFSU2_TR(0x5b57f6);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B5b57f8:{NFSU2_TR(0x5b57f8);
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
B5b57fb:{NFSU2_TR(0x5b57fb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b57fe:L5b57fe:{c.instructions+=3;NFSU2_TR(0x5b57fe);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b5802:{NFSU2_TR(0x5b5802);
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
B5b5805:{NFSU2_TR(0x5b5805);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b5810:L5b5810:{c.instructions+=22;NFSU2_TR(0x5b5810);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B5b5813:{NFSU2_TR(0x5b5813);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b5814:{NFSU2_TR(0x5b5814);
__builtin_memmove((R+24),(R+4),4);
}
B5b5816:{NFSU2_TR(0x5b5816);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x228ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b581c:{NFSU2_TR(0x5b581c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b5822:{NFSU2_TR(0x5b5822);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b5826:{NFSU2_TR(0x5b5826);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b582a:{NFSU2_TR(0x5b582a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b582e:{NFSU2_TR(0x5b582e);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b5832:{NFSU2_TR(0x5b5832);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5b5838:{NFSU2_TR(0x5b5838);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x9ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b5840:{NFSU2_TR(0x5b5840);
{u32 ea_=u32(u32(7897588u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B5b5846:{NFSU2_TR(0x5b5846);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b584a:{NFSU2_TR(0x5b584a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b5852:{NFSU2_TR(0x5b5852);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b585a:{NFSU2_TR(0x5b585a);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b585e:{NFSU2_TR(0x5b585e);
{u32 ea_=u32(r4(R+24)+u32(544u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b5864:{NFSU2_TR(0x5b5864);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5b5868:{NFSU2_TR(0x5b5868);
{u32 ea_=u32(r4(R+24)+u32(552u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b586e:{NFSU2_TR(0x5b586e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b5870:{NFSU2_TR(0x5b5870);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b5873:{NFSU2_TR(0x5b5873);
if(r1(R+514)){{goto L5b58b9;}}
}
B5b5875:L5b5875:{c.instructions+=4;NFSU2_TR(0x5b5875);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b5879:{NFSU2_TR(0x5b5879);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b587a:{NFSU2_TR(0x5b587a);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5b587e:{NFSU2_TR(0x5b587e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b5883ull));
TAIL_STATIC(0x5764d0u,576);
}
B5b5883:L5b5883:{c.instructions+=4;NFSU2_TR(0x5b5883);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5b5887:{NFSU2_TR(0x5b5887);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b5889:{NFSU2_TR(0x5b5889);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b588c:{NFSU2_TR(0x5b588c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b589c;}}
}
B5b588e:L5b588e:{c.instructions+=4;NFSU2_TR(0x5b588e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b5892:{NFSU2_TR(0x5b5892);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b5896:{NFSU2_TR(0x5b5896);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b589a:{NFSU2_TR(0x5b589a);
{goto L5b589e;}
}
B5b589c:L5b589c:{c.instructions+=1;NFSU2_TR(0x5b589c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b589e:L5b589e:{c.instructions+=7;NFSU2_TR(0x5b589e);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b58a2:{NFSU2_TR(0x5b58a2);
{u32 ea_=u32(u32(7887744u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5b58a8:{NFSU2_TR(0x5b58a8);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5b58ac:{NFSU2_TR(0x5b58ac);
{u32 ea_=u32(r4(R+24)+u32(552u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b58b2:{NFSU2_TR(0x5b58b2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b58b4:{NFSU2_TR(0x5b58b4);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b58b7:{NFSU2_TR(0x5b58b7);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b5875u);}goto L5b5875;}}
}
B5b58b9:L5b58b9:{c.instructions+=4;NFSU2_TR(0x5b58b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b58bd:{NFSU2_TR(0x5b58bd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b58bf:{NFSU2_TR(0x5b58bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b58c0:{NFSU2_TR(0x5b58c0);
if(r1(R+518)){{goto L5b58c8;}}
}
B5b58c2:L5b58c2:{c.instructions+=2;NFSU2_TR(0x5b58c2);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b58c6:{NFSU2_TR(0x5b58c6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5b58c8:L5b58c8:{c.instructions+=3;NFSU2_TR(0x5b58c8);
u8 U[5];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5b58cc:{NFSU2_TR(0x5b58cc);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b58ce:{NFSU2_TR(0x5b58ce);
if(r1(R+518)){{goto L5b591e;}}
}
B5b58d0:L5b58d0:{c.instructions+=5;NFSU2_TR(0x5b58d0);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b58d4:{NFSU2_TR(0x5b58d4);
{u32 ea_=u32(u32(8827872u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b58da:{NFSU2_TR(0x5b58da);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b58dc:{NFSU2_TR(0x5b58dc);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b58df:{NFSU2_TR(0x5b58df);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b58e7;}}
}
B5b58e1:L5b58e1:{c.instructions+=2;NFSU2_TR(0x5b58e1);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b58e5:{NFSU2_TR(0x5b58e5);
{goto L5b58ed;}
}
B5b58e7:L5b58e7:{c.instructions+=1;NFSU2_TR(0x5b58e7);
{u32 ea_=u32(u32(8827872u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b58ed:L5b58ed:{c.instructions+=5;NFSU2_TR(0x5b58ed);
{u32 ea_=u32(u32(8827876u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b58f3:{NFSU2_TR(0x5b58f3);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5b58f5:{NFSU2_TR(0x5b58f5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b58f7:{NFSU2_TR(0x5b58f7);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b58fa:{NFSU2_TR(0x5b58fa);
if(r1(R+514)){{goto L5b5904;}}
}
B5b58fc:L5b58fc:{c.instructions+=2;NFSU2_TR(0x5b58fc);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b58fe:{NFSU2_TR(0x5b58fe);
{u32 ea_=u32(u32(8827876u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b5904:L5b5904:{c.instructions+=6;NFSU2_TR(0x5b5904);
{u32 ea_=u32(u32(8827872u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b590a:{NFSU2_TR(0x5b590a);
{u32 ea_=u32(u32(8827876u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b5910:{NFSU2_TR(0x5b5910);
{u32 ea_=u32(u32(8827872u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b5916:{NFSU2_TR(0x5b5916);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B5b5918:{NFSU2_TR(0x5b5918);
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
B5b591b:{NFSU2_TR(0x5b591b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b591e:L5b591e:{c.instructions+=3;NFSU2_TR(0x5b591e);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b5922:{NFSU2_TR(0x5b5922);
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
B5b5925:{NFSU2_TR(0x5b5925);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b5930:L5b5930:{c.instructions+=8;NFSU2_TR(0x5b5930);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B5b5933:{NFSU2_TR(0x5b5933);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b5934:{NFSU2_TR(0x5b5934);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b5935:{NFSU2_TR(0x5b5935);
__builtin_memmove((R+24),(R+4),4);
}
B5b5937:{NFSU2_TR(0x5b5937);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5b593a:{NFSU2_TR(0x5b593a);
w4(R+12,u32(u32(r4(R+12))|u32(u32(0xffffffffull))));
}
B5b593d:{NFSU2_TR(0x5b593d);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5b593f:{NFSU2_TR(0x5b593f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b594c;}}
}
B5b5941:L5b5941:{c.instructions+=4;NFSU2_TR(0x5b5941);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b5943:{NFSU2_TR(0x5b5943);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b5945:{NFSU2_TR(0x5b5945);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b5947:{NFSU2_TR(0x5b5947);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b594cull));
TAIL_STATIC(0x5b4fc0u,5b4);
}
B5b594c:L5b594c:{c.instructions+=9;NFSU2_TR(0x5b594c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x560ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b5952:{NFSU2_TR(0x5b5952);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b5953:{NFSU2_TR(0x5b5953);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x55cull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b5959:{NFSU2_TR(0x5b5959);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b595d:{NFSU2_TR(0x5b595d);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b5961:{NFSU2_TR(0x5b5961);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b5964:{NFSU2_TR(0x5b5964);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b5966:{NFSU2_TR(0x5b5966);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b5969:{NFSU2_TR(0x5b5969);
if(r1(R+514)){{goto L5b59e5;}}
}
B5b596b:L5b596b:{c.instructions+=1;NFSU2_TR(0x5b596b);
{goto L5b5970;}
}
B5b5970:L5b5970:{c.instructions+=4;NFSU2_TR(0x5b5970);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b5974:{NFSU2_TR(0x5b5974);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b5975:{NFSU2_TR(0x5b5975);
__builtin_memmove((R+4),(R+28),4);
}
B5b5977:{NFSU2_TR(0x5b5977);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b597cull));
TAIL_STATIC(0x5764d0u,576);
}
B5b597c:L5b597c:{c.instructions+=3;NFSU2_TR(0x5b597c);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b5980:{NFSU2_TR(0x5b5980);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5b5983:{NFSU2_TR(0x5b5983);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b5992;}}
}
B5b5985:L5b5985:{c.instructions+=5;NFSU2_TR(0x5b5985);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b5987:{NFSU2_TR(0x5b5987);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b5989:{NFSU2_TR(0x5b5989);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b598b:{NFSU2_TR(0x5b598b);
__builtin_memmove((R+4),(R+24),4);
}
B5b598d:{NFSU2_TR(0x5b598d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b5992ull));
TAIL_STATIC(0x5b4fc0u,5b4);
}
B5b5992:L5b5992:{c.instructions+=7;NFSU2_TR(0x5b5992);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b5996:{NFSU2_TR(0x5b5996);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5b5999:{NFSU2_TR(0x5b5999);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5b599b:{NFSU2_TR(0x5b599b);
{u32 ea_=u32(r4(R+24)+u32(656u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b59a1:{NFSU2_TR(0x5b59a1);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b59a5:{NFSU2_TR(0x5b59a5);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b59a9:{NFSU2_TR(0x5b59a9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b59b8;}}
}
B5b59ab:L5b59ab:{c.instructions+=5;NFSU2_TR(0x5b59ab);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b59ad:{NFSU2_TR(0x5b59ad);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b59af:{NFSU2_TR(0x5b59af);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b59b1:{NFSU2_TR(0x5b59b1);
__builtin_memmove((R+4),(R+24),4);
}
B5b59b3:{NFSU2_TR(0x5b59b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b59b8ull));
TAIL_STATIC(0x5b4fc0u,5b4);
}
B5b59b8:L5b59b8:{c.instructions+=6;NFSU2_TR(0x5b59b8);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b59bc:{NFSU2_TR(0x5b59bc);
{u32 ea_=u32(r4(R+24)+u32(320u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5b59c2:{NFSU2_TR(0x5b59c2);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b59c6:{NFSU2_TR(0x5b59c6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b59c8:{NFSU2_TR(0x5b59c8);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b59cb:{NFSU2_TR(0x5b59cb);
if(r1(R+518)){{goto L5b59e5;}}
}
B5b59cd:L5b59cd:{c.instructions+=7;NFSU2_TR(0x5b59cd);
{u32 ea_=u32(u32(8002176u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b59d3:{NFSU2_TR(0x5b59d3);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5b59d7:{NFSU2_TR(0x5b59d7);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5b59db:{NFSU2_TR(0x5b59db);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b59de:{NFSU2_TR(0x5b59de);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b59e0:{NFSU2_TR(0x5b59e0);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b59e3:{NFSU2_TR(0x5b59e3);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b5970u);}goto L5b5970;}}
}
B5b59e5:L5b59e5:{c.instructions+=2;NFSU2_TR(0x5b59e5);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5b59e8:{NFSU2_TR(0x5b59e8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b5a5a;}}
}
B5b59ea:L5b59ea:{c.instructions+=2;NFSU2_TR(0x5b59ea);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+12))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5b59ec:{NFSU2_TR(0x5b59ec);
if(r1(R+518)){{goto L5b5a5a;}}
}
B5b59ee:L5b59ee:{c.instructions+=5;NFSU2_TR(0x5b59ee);
__builtin_memmove((R+4),gp(0x89e7d8),1);
}
B5b59f4:{NFSU2_TR(0x5b59f4);
__builtin_memmove((R+8),gp(0x890108),4);
}
B5b59fa:{NFSU2_TR(0x5b59fa);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5b59fc:{NFSU2_TR(0x5b59fc);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b59fe:{NFSU2_TR(0x5b59fe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b5a27;}}
}
B5b5a00:L5b5a00:{c.instructions+=2;NFSU2_TR(0x5b5a00);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b5a02:{NFSU2_TR(0x5b5a02);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b5a27;}}
}
B5b5a04:L5b5a04:{c.instructions+=3;NFSU2_TR(0x5b5a04);
__builtin_memmove((R+28),gp(0x890114),4);
}
B5b5a0a:{NFSU2_TR(0x5b5a0a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b5a0c:{NFSU2_TR(0x5b5a0c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b5a20;}}
}
B5b5a0e:L5b5a0e:{c.instructions+=2;NFSU2_TR(0x5b5a0e);
u8 U[2];
__builtin_memmove((U+0),gp(0x89e7d9),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+8))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5b5a14:{NFSU2_TR(0x5b5a14);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b5a20;}}
}
B5b5a16:L5b5a16:{c.instructions+=3;NFSU2_TR(0x5b5a16);
__builtin_memmove((R+28),gp(0x890104),4);
}
B5b5a1c:{NFSU2_TR(0x5b5a1c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b5a1e:{NFSU2_TR(0x5b5a1e);
if(r1(R+518)){{goto L5b5a27;}}
}
B5b5a20:L5b5a20:{c.instructions+=2;NFSU2_TR(0x5b5a20);
w4(R+0,u32(0x3ull));
}
B5b5a25:{NFSU2_TR(0x5b5a25);
{goto L5b5a4e;}
}
B5b5a27:L5b5a27:{c.instructions+=2;NFSU2_TR(0x5b5a27);
u8 U[2];
__builtin_memmove((U+0),gp(0x89e7e3),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5b5a2e:{NFSU2_TR(0x5b5a2e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b5a3a;}}
}
B5b5a30:L5b5a30:{c.instructions+=3;NFSU2_TR(0x5b5a30);
__builtin_memmove((R+28),gp(0x89010c),4);
}
B5b5a36:{NFSU2_TR(0x5b5a36);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b5a38:{NFSU2_TR(0x5b5a38);
if(r1(R+518)){{goto L5b5a41;}}
}
B5b5a3a:L5b5a3a:{c.instructions+=2;NFSU2_TR(0x5b5a3a);
w4(R+0,u32(0xaull));
}
B5b5a3f:{NFSU2_TR(0x5b5a3f);
{goto L5b5a4e;}
}
B5b5a41:L5b5a41:{c.instructions+=2;NFSU2_TR(0x5b5a41);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b5a43:{NFSU2_TR(0x5b5a43);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b5a49;}}
}
B5b5a45:L5b5a45:{c.instructions+=2;NFSU2_TR(0x5b5a45);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b5a47:{NFSU2_TR(0x5b5a47);
if(r1(R+518)){{goto L5b5a4e;}}
}
B5b5a49:L5b5a49:{c.instructions+=1;NFSU2_TR(0x5b5a49);
w4(R+0,u32(0x2ull));
}
B5b5a4e:L5b5a4e:{c.instructions+=5;NFSU2_TR(0x5b5a4e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b5a50:{NFSU2_TR(0x5b5a50);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b5a52:{NFSU2_TR(0x5b5a52);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b5a53:{NFSU2_TR(0x5b5a53);
__builtin_memmove((R+4),(R+24),4);
}
B5b5a55:{NFSU2_TR(0x5b5a55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b5a5aull));
TAIL_STATIC(0x5b4dc0u,5b4);
}
B5b5a5a:L5b5a5a:{c.instructions+=6;NFSU2_TR(0x5b5a5a);
{u32 ea_=u32(r4(R+24)+u32(704u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b5a60:{NFSU2_TR(0x5b5a60);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b5a61:{NFSU2_TR(0x5b5a61);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b5a67:{NFSU2_TR(0x5b5a67);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b5a69:{NFSU2_TR(0x5b5a69);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b5a6c:{NFSU2_TR(0x5b5a6c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b5a99;}}
}
B5b5a6e:L5b5a6e:{c.instructions+=2;NFSU2_TR(0x5b5a6e);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5b5a71:{NFSU2_TR(0x5b5a71);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b5a80;}}
}
B5b5a73:L5b5a73:{c.instructions+=5;NFSU2_TR(0x5b5a73);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b5a75:{NFSU2_TR(0x5b5a75);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b5a77:{NFSU2_TR(0x5b5a77);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b5a79:{NFSU2_TR(0x5b5a79);
__builtin_memmove((R+4),(R+24),4);
}
B5b5a7b:{NFSU2_TR(0x5b5a7b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b5a80ull));
TAIL_STATIC(0x5b4fc0u,5b4);
}
B5b5a80:L5b5a80:{c.instructions+=6;NFSU2_TR(0x5b5a80);
{u32 ea_=u32(r4(R+24)+u32(704u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b5a86:{NFSU2_TR(0x5b5a86);
{u32 ea_=u32(u32(7881384u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b5a8c:{NFSU2_TR(0x5b5a8c);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5b5a90:{NFSU2_TR(0x5b5a90);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b5a92:{NFSU2_TR(0x5b5a92);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b5a95:{NFSU2_TR(0x5b5a95);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5b5a9d;}}
}
B5b5a97:L5b5a97:{c.instructions+=1;NFSU2_TR(0x5b5a97);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b5a99:L5b5a99:{c.instructions+=1;NFSU2_TR(0x5b5a99);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b5a9d:L5b5a9d:{c.instructions+=4;NFSU2_TR(0x5b5a9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b5a9e:{NFSU2_TR(0x5b5a9e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b5a9f:{NFSU2_TR(0x5b5a9f);
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
B5b5aa2:{NFSU2_TR(0x5b5aa2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b5ab0:L5b5ab0:{c.instructions+=31;NFSU2_TR(0x5b5ab0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x88ull))));
}
B5b5ab6:{NFSU2_TR(0x5b5ab6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b5ab7:{NFSU2_TR(0x5b5ab7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b5ab8:{NFSU2_TR(0x5b5ab8);
u8 U[8];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5b5abf:{NFSU2_TR(0x5b5abf);
{u32 ea_=u32(r4(R+20)+u32(496u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b5ac5:{NFSU2_TR(0x5b5ac5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b5ac6:{NFSU2_TR(0x5b5ac6);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b5acc:{NFSU2_TR(0x5b5acc);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1e0ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b5ad2:{NFSU2_TR(0x5b5ad2);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5b5ad4:{NFSU2_TR(0x5b5ad4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x140ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b5ada:{NFSU2_TR(0x5b5ada);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5b5adc:{NFSU2_TR(0x5b5adc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b5add:{NFSU2_TR(0x5b5add);
{u32 ea_=u32(r4(R+20)+u32(176u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b5ae3:{NFSU2_TR(0x5b5ae3);
u8 U[4];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5b5ae7:{NFSU2_TR(0x5b5ae7);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5b5ae9:{NFSU2_TR(0x5b5ae9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b5aea:{NFSU2_TR(0x5b5aea);
{u32 ea_=u32(r4(R+20)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b5aed:{NFSU2_TR(0x5b5aed);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5b5af1:{NFSU2_TR(0x5b5af1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b5af2:{NFSU2_TR(0x5b5af2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x220ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b5af8:{NFSU2_TR(0x5b5af8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5b5afa:{NFSU2_TR(0x5b5afa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b5afb:{NFSU2_TR(0x5b5afb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b5afc:{NFSU2_TR(0x5b5afc);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b5b00:{NFSU2_TR(0x5b5b00);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b5b04:{NFSU2_TR(0x5b5b04);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b5b07:{NFSU2_TR(0x5b5b07);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5b5b09:{NFSU2_TR(0x5b5b09);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b5b0c:{NFSU2_TR(0x5b5b0c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5b5b0e:{NFSU2_TR(0x5b5b0e);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b5b12:{NFSU2_TR(0x5b5b12);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b5b17ull));
TAIL_STATIC(0x5ac7d0u,5ac);
}
B5b5b17:L5b5b17:{c.instructions+=19;NFSU2_TR(0x5b5b17);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b5b1a:{NFSU2_TR(0x5b5b1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5b5b1c:{NFSU2_TR(0x5b5b1c);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5b5b20:{NFSU2_TR(0x5b5b20);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b5b24:{NFSU2_TR(0x5b5b24);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b5b28:{NFSU2_TR(0x5b5b28);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5b5b2b:{NFSU2_TR(0x5b5b2b);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B5b5b2e:{NFSU2_TR(0x5b5b2e);
{u32 ea_=u32(u32(7897588u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B5b5b34:{NFSU2_TR(0x5b5b34);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b5b38:{NFSU2_TR(0x5b5b38);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x9ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b5b40:{NFSU2_TR(0x5b5b40);
w4(R+28,u32(0x2ull));
}
B5b5b45:{NFSU2_TR(0x5b5b45);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b5b4d:{NFSU2_TR(0x5b5b4d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b5b55:{NFSU2_TR(0x5b5b55);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b5b58:{NFSU2_TR(0x5b5b58);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b5b5c:{NFSU2_TR(0x5b5b5c);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b5b62:{NFSU2_TR(0x5b5b62);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5b5b66:{NFSU2_TR(0x5b5b66);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b5b6a:{NFSU2_TR(0x5b5b6a);
__builtin_memmove((R+12),(R+12),4);
}
B5b5b70:L5b5b70:{c.instructions+=10;NFSU2_TR(0x5b5b70);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b5b74:{NFSU2_TR(0x5b5b74);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b5b78:{NFSU2_TR(0x5b5b78);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b5b7a:{NFSU2_TR(0x5b5b7a);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b5b7e:{NFSU2_TR(0x5b5b7e);
{u32 ea_=u32(u32(8002856u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b5b84:{NFSU2_TR(0x5b5b84);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5b5b88:{NFSU2_TR(0x5b5b88);
{u32 ea_=u32((r4(R+28)*4u)+r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b5b8c:{NFSU2_TR(0x5b5b8c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b5b8e:{NFSU2_TR(0x5b5b8e);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b5b91:{NFSU2_TR(0x5b5b91);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b5ba1;}}
}
B5b5b93:L5b5b93:{c.instructions+=6;NFSU2_TR(0x5b5b93);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b5b96:{NFSU2_TR(0x5b5b96);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5b5b97:{NFSU2_TR(0x5b5b97);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B5b5b9a:{NFSU2_TR(0x5b5b9a);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B5b5b9d:{NFSU2_TR(0x5b5b9d);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5b5b9f:{NFSU2_TR(0x5b5b9f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5b5be0;}}
}
B5b5ba1:L5b5ba1:{c.instructions+=4;NFSU2_TR(0x5b5ba1);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b5ba5:{NFSU2_TR(0x5b5ba5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b5ba6:{NFSU2_TR(0x5b5ba6);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5b5baa:{NFSU2_TR(0x5b5baa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b5bafull));
TAIL_STATIC(0x5764d0u,576);
}
B5b5baf:L5b5baf:{c.instructions+=13;NFSU2_TR(0x5b5baf);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b5bb1:{NFSU2_TR(0x5b5bb1);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b5bb5:{NFSU2_TR(0x5b5bb5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5b5bb6:{NFSU2_TR(0x5b5bb6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x5cull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5cull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5b5bb9:{NFSU2_TR(0x5b5bb9);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b5bbd:{NFSU2_TR(0x5b5bbd);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b5bc1:{NFSU2_TR(0x5b5bc1);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b5bc5:{NFSU2_TR(0x5b5bc5);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5b5bc9:{NFSU2_TR(0x5b5bc9);
{u32 ea_=u32((r4(R+0)*4u)+u32(8828444u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b5bd0:{NFSU2_TR(0x5b5bd0);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b5bd4:{NFSU2_TR(0x5b5bd4);
{u32 ea_=u32(u32(8005480u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5b5bda:{NFSU2_TR(0x5b5bda);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b5bde:{NFSU2_TR(0x5b5bde);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b5b70u);}goto L5b5b70;}}
}
B5b5be0:L5b5be0:{c.instructions+=5;NFSU2_TR(0x5b5be0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b5be4:{NFSU2_TR(0x5b5be4);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B5b5be7:{NFSU2_TR(0x5b5be7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x5cull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5cull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5b5bea:{NFSU2_TR(0x5b5bea);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b5bee:{NFSU2_TR(0x5b5bee);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5b5c02;}}
}
B5b5bf0:L5b5bf0:{c.instructions+=4;NFSU2_TR(0x5b5bf0);
w4(R+4,u32(0x5cull));
}
B5b5bf5:{NFSU2_TR(0x5b5bf5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86b620ull))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B5b5bfc:{NFSU2_TR(0x5b5bfc);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B5b5bfe:{NFSU2_TR(0x5b5bfe);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5b5c00:L5b5c00:{c.instructions+=1;NFSU2_TR(0x5b5c00);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5b5c02;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b5c00u);}goto L5b5c00;}
}
B5b5c02:L5b5c02:{c.instructions+=16;NFSU2_TR(0x5b5c02);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b5c06:{NFSU2_TR(0x5b5c06);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5b5c0a:{NFSU2_TR(0x5b5c0a);
__builtin_memmove((R+4),(R+0),4);
}
B5b5c0c:{NFSU2_TR(0x5b5c0c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b5c10:{NFSU2_TR(0x5b5c10);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5b5c14:{NFSU2_TR(0x5b5c14);
u8 U[8];
w4(U+0,u32(u32(u32(0x9cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5b5c1b:{NFSU2_TR(0x5b5c1b);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b5c1f:{NFSU2_TR(0x5b5c1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5b5c21:{NFSU2_TR(0x5b5c21);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5b5c23:{NFSU2_TR(0x5b5c23);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b5c25:{NFSU2_TR(0x5b5c25);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b5c29:{NFSU2_TR(0x5b5c29);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b5c31:{NFSU2_TR(0x5b5c31);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
w4(U+4,u32(0x86b620ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b5c39:{NFSU2_TR(0x5b5c39);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b5c3d:{NFSU2_TR(0x5b5c3d);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b5c41:{NFSU2_TR(0x5b5c41);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5b5c81;}}
}
B5b5c43:L5b5c43:{c.instructions+=3;NFSU2_TR(0x5b5c43);
__builtin_memmove((R+8),(R+4),4);
}
B5b5c45:{NFSU2_TR(0x5b5c45);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b5c49:{NFSU2_TR(0x5b5c49);
__builtin_memmove((R+16),(R+16),4);
}
B5b5c50:L5b5c50:{c.instructions+=10;NFSU2_TR(0x5b5c50);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5b5c54:{NFSU2_TR(0x5b5c54);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5b5c56:{NFSU2_TR(0x5b5c56);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B5b5c57:{NFSU2_TR(0x5b5c57);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b5c5b:{NFSU2_TR(0x5b5c5b);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b5c5f:{NFSU2_TR(0x5b5c5f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b5c60:{NFSU2_TR(0x5b5c60);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5b5c64:{NFSU2_TR(0x5b5c64);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xda,0x30"::"a"(ea_):"memory");}
}
B5b5c68:{NFSU2_TR(0x5b5c68);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b5c6b:{NFSU2_TR(0x5b5c6b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b5c70ull));
TAIL_STATIC(0x5764d0u,576);
}
B5b5c70:L5b5c70:{c.instructions+=7;NFSU2_TR(0x5b5c70);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b5c73:{NFSU2_TR(0x5b5c73);
{u32 ea_=u32((r4(R+28)*4u)+r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b5c76:{NFSU2_TR(0x5b5c76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5b5c78:{NFSU2_TR(0x5b5c78);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5b5c79:{NFSU2_TR(0x5b5c79);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5b5c7b:{NFSU2_TR(0x5b5c7b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b5c7f:{NFSU2_TR(0x5b5c7f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b5c50u);}goto L5b5c50;}}
}
B5b5c81:L5b5c81:{c.instructions+=17;NFSU2_TR(0x5b5c81);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5b5c83:{NFSU2_TR(0x5b5c83);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B5b5c84:{NFSU2_TR(0x5b5c84);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b5c88:{NFSU2_TR(0x5b5c88);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5b5c8c:{NFSU2_TR(0x5b5c8c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b5c90:{NFSU2_TR(0x5b5c90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b5c91:{NFSU2_TR(0x5b5c91);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b5c98:{NFSU2_TR(0x5b5c98);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5b5c9c:{NFSU2_TR(0x5b5c9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b5c9f:{NFSU2_TR(0x5b5c9f);
__builtin_memmove((R+0),(R+4),4);
}
B5b5ca1:{NFSU2_TR(0x5b5ca1);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b5ca4:{NFSU2_TR(0x5b5ca4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b5ca5:{NFSU2_TR(0x5b5ca5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b5ca8:{NFSU2_TR(0x5b5ca8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5b5ca9:{NFSU2_TR(0x5b5ca9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b5caa:{NFSU2_TR(0x5b5caa);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x88ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x88ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x88ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5b5cb0:{NFSU2_TR(0x5b5cb0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b5cc0:L5b5cc0:{c.instructions+=38;NFSU2_TR(0x5b5cc0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b5cc2:{NFSU2_TR(0x5b5cc2);
u8 U[4];
w4(U+0,u32(0x7790baull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b5cc7:{NFSU2_TR(0x5b5cc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b5ccd:{NFSU2_TR(0x5b5ccd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b5cce:{NFSU2_TR(0x5b5cce);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b5cd5:{NFSU2_TR(0x5b5cd5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B5b5cd8:{NFSU2_TR(0x5b5cd8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b5cd9:{NFSU2_TR(0x5b5cd9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b5cda:{NFSU2_TR(0x5b5cda);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b5cdb:{NFSU2_TR(0x5b5cdb);
__builtin_memmove((R+24),(R+4),4);
}
B5b5cdd:{NFSU2_TR(0x5b5cdd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b5cde:{NFSU2_TR(0x5b5cde);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b5ce2:{NFSU2_TR(0x5b5ce2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b5ce5:{NFSU2_TR(0x5b5ce5);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B5b5ce8:{NFSU2_TR(0x5b5ce8);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5b5cea:{NFSU2_TR(0x5b5cea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5b5cec:{NFSU2_TR(0x5b5cec);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b5cef:{NFSU2_TR(0x5b5cef);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b5cf3:{NFSU2_TR(0x5b5cf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b5cf6:{NFSU2_TR(0x5b5cf6);
u8 U[4];
w4(U+0,u32(0x7a2428ull));
s4(u32(r4(R+28)),r4(U+0));
}
B5b5cfc:{NFSU2_TR(0x5b5cfc);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b5d00:{NFSU2_TR(0x5b5d00);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b5d04:{NFSU2_TR(0x5b5d04);
u8 U[4];
w4(U+0,u32(0x7a25e0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5b5d0a:{NFSU2_TR(0x5b5d0a);
u8 U[4];
w4(U+0,u32(0x7a25d4ull));
s4(u32(r4(R+28)),r4(U+0));
}
B5b5d10:{NFSU2_TR(0x5b5d10);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b5d13:{NFSU2_TR(0x5b5d13);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b5d16:{NFSU2_TR(0x5b5d16);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b5d1a:{NFSU2_TR(0x5b5d1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b5d1d:{NFSU2_TR(0x5b5d1d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+8),(U+0),4);
}
B5b5d20:{NFSU2_TR(0x5b5d20);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
}
B5b5d23:{NFSU2_TR(0x5b5d23);
u8 U[4];
w4(U+0,u32(0x7a276cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b5d28:{NFSU2_TR(0x5b5d28);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b5d29:{NFSU2_TR(0x5b5d29);
u8 U[5];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b5d2e:{NFSU2_TR(0x5b5d2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b5d31:{NFSU2_TR(0x5b5d31);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b5d34:{NFSU2_TR(0x5b5d34);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b5d3b:{NFSU2_TR(0x5b5d3b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5b5d41:{NFSU2_TR(0x5b5d41);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b5d46ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B5b5d46:L5b5d46:{c.instructions+=3;NFSU2_TR(0x5b5d46);
__builtin_memmove((R+0),gp(0x86b2e0),4);
}
B5b5d4b:{NFSU2_TR(0x5b5d4b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b5d4c:{NFSU2_TR(0x5b5d4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b5d51ull));
TAIL_STATIC(0x440e50u,440);
}
B5b5d51:L5b5d51:{c.instructions+=5;NFSU2_TR(0x5b5d51);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5b5d54:{NFSU2_TR(0x5b5d54);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b5d58:{NFSU2_TR(0x5b5d58);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b5d5a:{NFSU2_TR(0x5b5d5a);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b5d5f:{NFSU2_TR(0x5b5d5f);
if(r1(R+518)){{goto L5b5d74;}}
}
B5b5d61:L5b5d61:{c.instructions+=5;NFSU2_TR(0x5b5d61);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b5d64:{NFSU2_TR(0x5b5d64);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x110ull))));
}
B5b5d6a:{NFSU2_TR(0x5b5d6a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b5d6b:{NFSU2_TR(0x5b5d6b);
__builtin_memmove((R+4),(R+0),4);
}
B5b5d6d:{NFSU2_TR(0x5b5d6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b5d72ull));
TAIL_STATIC(0x5a7f30u,5a7);
}
B5b5d72:L5b5d72:{c.instructions+=1;NFSU2_TR(0x5b5d72);
{goto L5b5d76;}
}
B5b5d74:L5b5d74:{c.instructions+=1;NFSU2_TR(0x5b5d74);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5b5d76:L5b5d76:{c.instructions+=4;NFSU2_TR(0x5b5d76);
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
B5b5d78:{NFSU2_TR(0x5b5d78);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b5d7d:{NFSU2_TR(0x5b5d7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b5d80:{NFSU2_TR(0x5b5d80);
if(r1(R+518)){{goto L5b5d87;}}
}
B5b5d82:L5b5d82:{c.instructions+=2;NFSU2_TR(0x5b5d82);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5b5d85:{NFSU2_TR(0x5b5d85);
{goto L5b5d89;}
}
B5b5d87:L5b5d87:{c.instructions+=1;NFSU2_TR(0x5b5d87);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5b5d89:L5b5d89:{c.instructions+=9;NFSU2_TR(0x5b5d89);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b5d8c:{NFSU2_TR(0x5b5d8c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((R+20),(U+0),4);
}
B5b5d8f:{NFSU2_TR(0x5b5d8f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5b5d91:{NFSU2_TR(0x5b5d91);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b5d94:{NFSU2_TR(0x5b5d94);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b5d97:{NFSU2_TR(0x5b5d97);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5b5d99:{NFSU2_TR(0x5b5d99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5b5d9b:{NFSU2_TR(0x5b5d9b);
__builtin_memmove((R+4),(R+0),4);
}
B5b5d9d:{NFSU2_TR(0x5b5d9d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b5da0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b5da0:L5b5da0:{c.instructions+=23;NFSU2_TR(0x5b5da0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B5b5da3:{NFSU2_TR(0x5b5da3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b5da6:{NFSU2_TR(0x5b5da6);
{u32 ea_=u32(r4(R+0)+u32(656u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b5dac:{NFSU2_TR(0x5b5dac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b5daf:{NFSU2_TR(0x5b5daf);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b5db3:{NFSU2_TR(0x5b5db3);
{u32 ea_=u32(r4(R+0)+u32(516u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b5db9:{NFSU2_TR(0x5b5db9);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B5b5dc0:{NFSU2_TR(0x5b5dc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b5dc3:{NFSU2_TR(0x5b5dc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x15cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b5dc9:{NFSU2_TR(0x5b5dc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b5dcc:{NFSU2_TR(0x5b5dcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b5dcf:{NFSU2_TR(0x5b5dcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b5dd2:{NFSU2_TR(0x5b5dd2);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b5dd4:{NFSU2_TR(0x5b5dd4);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b5dd8:{NFSU2_TR(0x5b5dd8);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b5ddb:{NFSU2_TR(0x5b5ddb);
__builtin_memmove((R+0),(R+8),4);
}
B5b5ddd:{NFSU2_TR(0x5b5ddd);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5b5ddf:{NFSU2_TR(0x5b5ddf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1f8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b5de5:{NFSU2_TR(0x5b5de5);
{u32 ea_=u32(r4(R+4)+u32(496u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b5deb:{NFSU2_TR(0x5b5deb);
{u32 ea_=u32(r4(R+4)+u32(500u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b5df1:{NFSU2_TR(0x5b5df1);
__builtin_memmove((R+4),gp(0x86b2e4),4);
}
B5b5df7:{NFSU2_TR(0x5b5df7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b5df8:{NFSU2_TR(0x5b5df8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b5dfdull));
TAIL_STATIC(0x440e50u,440);
}
B5b5dfd:L5b5dfd:{c.instructions+=3;NFSU2_TR(0x5b5dfd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5b5e00:{NFSU2_TR(0x5b5e00);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b5e02:{NFSU2_TR(0x5b5e02);
if(r1(R+518)){{goto L5b5e18;}}
}
B5b5e04:L5b5e04:{c.instructions+=6;NFSU2_TR(0x5b5e04);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b5e07:{NFSU2_TR(0x5b5e07);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5b5e0a:{NFSU2_TR(0x5b5e0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b5e0d:{NFSU2_TR(0x5b5e0d);
u8 U[4];
w4(U+0,u32(0x7a2084ull));
s4(u32(r4(R+0)),r4(U+0));
}
B5b5e13:{NFSU2_TR(0x5b5e13);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b5e16:{NFSU2_TR(0x5b5e16);
{goto L5b5e1a;}
}
B5b5e18:L5b5e18:{c.instructions+=1;NFSU2_TR(0x5b5e18);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5b5e1a:L5b5e1a:{c.instructions+=5;NFSU2_TR(0x5b5e1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b5e1d:{NFSU2_TR(0x5b5e1d);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b5e21:{NFSU2_TR(0x5b5e21);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b5e25:{NFSU2_TR(0x5b5e25);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5b5e28:{NFSU2_TR(0x5b5e28);
{goto L5b5e30;}
}
B5b5e30:L5b5e30:{c.instructions+=3;NFSU2_TR(0x5b5e30);
__builtin_memmove((R+0),gp(0x86b2e8),4);
}
B5b5e35:{NFSU2_TR(0x5b5e35);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b5e36:{NFSU2_TR(0x5b5e36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b5e3bull));
TAIL_STATIC(0x440e50u,440);
}
B5b5e3b:L5b5e3b:{c.instructions+=5;NFSU2_TR(0x5b5e3b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5b5e3e:{NFSU2_TR(0x5b5e3e);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b5e42:{NFSU2_TR(0x5b5e42);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b5e44:{NFSU2_TR(0x5b5e44);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w1(U+4,u8(0x3ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b5e49:{NFSU2_TR(0x5b5e49);
if(r1(R+518)){{goto L5b5e7d;}}
}
B5b5e4b:L5b5e4b:{c.instructions+=16;NFSU2_TR(0x5b5e4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b5e4e:{NFSU2_TR(0x5b5e4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b5e51:{NFSU2_TR(0x5b5e51);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b5e52:{NFSU2_TR(0x5b5e52);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x270ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5b5e58:{NFSU2_TR(0x5b5e58);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b5e59:{NFSU2_TR(0x5b5e59);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b5e5d:{NFSU2_TR(0x5b5e5d);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B5b5e5e:{NFSU2_TR(0x5b5e5e);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B5b5e60:{NFSU2_TR(0x5b5e60);
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
}
B5b5e62:{NFSU2_TR(0x5b5e62);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5b5e65:{NFSU2_TR(0x5b5e65);
u8 U[12];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B5b5e6c:{NFSU2_TR(0x5b5e6c);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5b5e70:{NFSU2_TR(0x5b5e70);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b5e74:{NFSU2_TR(0x5b5e74);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b5e75:{NFSU2_TR(0x5b5e75);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b5e76:{NFSU2_TR(0x5b5e76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b5e7bull));
TAIL_STATIC(0x5a8160u,5a8);
}
B5b5e7b:L5b5e7b:{c.instructions+=1;NFSU2_TR(0x5b5e7b);
{goto L5b5e7f;}
}
B5b5e7d:L5b5e7d:{c.instructions+=1;NFSU2_TR(0x5b5e7d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5b5e7f:L5b5e7f:{c.instructions+=5;NFSU2_TR(0x5b5e7f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+20)),r4(U+0));
}
B5b5e82:{NFSU2_TR(0x5b5e82);
__builtin_memmove((R+4),gp(0x86b2f8),4);
}
B5b5e88:{NFSU2_TR(0x5b5e88);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b5e89:{NFSU2_TR(0x5b5e89);
u8 U[5];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b5e8e:{NFSU2_TR(0x5b5e8e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b5e93ull));
TAIL_STATIC(0x440e50u,440);
}
B5b5e93:L5b5e93:{c.instructions+=7;NFSU2_TR(0x5b5e93);
__builtin_memmove((R+4),(R+0),4);
}
B5b5e95:{NFSU2_TR(0x5b5e95);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5b5e98:{NFSU2_TR(0x5b5e98);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b5e9c:{NFSU2_TR(0x5b5e9c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5b5e9e:{NFSU2_TR(0x5b5e9e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b5ea0:{NFSU2_TR(0x5b5ea0);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w1(U+4,u8(0x4ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b5ea5:{NFSU2_TR(0x5b5ea5);
if(r1(R+518)){{goto L5b5ee5;}}
}
B5b5ea7:L5b5ea7:{c.instructions+=2;NFSU2_TR(0x5b5ea7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x60ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5b5eaa:{NFSU2_TR(0x5b5eaa);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5b5eb5;}}
}
B5b5eac:L5b5eac:{c.instructions+=3;NFSU2_TR(0x5b5eac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b5eaf:{NFSU2_TR(0x5b5eaf);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b5eb3:{NFSU2_TR(0x5b5eb3);
{goto L5b5eb9;}
}
B5b5eb5:L5b5eb5:{c.instructions+=1;NFSU2_TR(0x5b5eb5);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b5eb9:L5b5eb9:{c.instructions+=17;NFSU2_TR(0x5b5eb9);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5b5ebd:{NFSU2_TR(0x5b5ebd);
__builtin_memmove((R+0),(R+12),4);
}
B5b5ebf:{NFSU2_TR(0x5b5ebf);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B5b5ec0:{NFSU2_TR(0x5b5ec0);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B5b5ec2:{NFSU2_TR(0x5b5ec2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b5ec5:{NFSU2_TR(0x5b5ec5);
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
}
B5b5ec7:{NFSU2_TR(0x5b5ec7);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5b5eca:{NFSU2_TR(0x5b5eca);
u8 U[12];
w4(U+0,u32(u32(u32(0x170ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5b5ed1:{NFSU2_TR(0x5b5ed1);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b5ed5:{NFSU2_TR(0x5b5ed5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b5ed6:{NFSU2_TR(0x5b5ed6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5b5ed9:{NFSU2_TR(0x5b5ed9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b5eda:{NFSU2_TR(0x5b5eda);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b5edd:{NFSU2_TR(0x5b5edd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b5ede:{NFSU2_TR(0x5b5ede);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b5edf:{NFSU2_TR(0x5b5edf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b5ee0:{NFSU2_TR(0x5b5ee0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b5ee5ull));
TAIL_STATIC(0x5a86c0u,5a8);
}
B5b5ee5:L5b5ee5:{c.instructions+=5;NFSU2_TR(0x5b5ee5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5b5ee8:{NFSU2_TR(0x5b5ee8);
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
B5b5eea:{NFSU2_TR(0x5b5eea);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b5eef:{NFSU2_TR(0x5b5eef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b5ef2:{NFSU2_TR(0x5b5ef2);
if(r1(R+518)){{goto L5b5ef9;}}
}
B5b5ef4:L5b5ef4:{c.instructions+=2;NFSU2_TR(0x5b5ef4);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5b5ef7:{NFSU2_TR(0x5b5ef7);
{goto L5b5efb;}
}
B5b5ef9:L5b5ef9:{c.instructions+=1;NFSU2_TR(0x5b5ef9);
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
B5b5efb:L5b5efb:{c.instructions+=8;NFSU2_TR(0x5b5efb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5b5efe:{NFSU2_TR(0x5b5efe);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((R+8),(U+0),4);
}
B5b5f01:{NFSU2_TR(0x5b5f01);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B5b5f03:{NFSU2_TR(0x5b5f03);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b5f06:{NFSU2_TR(0x5b5f06);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b5f09:{NFSU2_TR(0x5b5f09);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5b5f0b:{NFSU2_TR(0x5b5f0b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5b5f0d:{NFSU2_TR(0x5b5f0d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b5f10ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b5f10:L5b5f10:{c.instructions+=4;NFSU2_TR(0x5b5f10);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B5b5f13:{NFSU2_TR(0x5b5f13);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b5f16:{NFSU2_TR(0x5b5f16);
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
B5b5f18:{NFSU2_TR(0x5b5f18);
if(r1(R+518)){{goto L5b5f1f;}}
}
B5b5f1a:L5b5f1a:{c.instructions+=2;NFSU2_TR(0x5b5f1a);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5b5f1d:{NFSU2_TR(0x5b5f1d);
{goto L5b5f21;}
}
B5b5f1f:L5b5f1f:{c.instructions+=1;NFSU2_TR(0x5b5f1f);
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
B5b5f21:L5b5f21:{c.instructions+=8;NFSU2_TR(0x5b5f21);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5b5f24:{NFSU2_TR(0x5b5f24);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((R+8),(U+0),4);
}
B5b5f27:{NFSU2_TR(0x5b5f27);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B5b5f29:{NFSU2_TR(0x5b5f29);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b5f2c:{NFSU2_TR(0x5b5f2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b5f2f:{NFSU2_TR(0x5b5f2f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5b5f31:{NFSU2_TR(0x5b5f31);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5b5f33:{NFSU2_TR(0x5b5f33);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b5f36ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b5f36:L5b5f36:{c.instructions+=13;NFSU2_TR(0x5b5f36);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b5f39:{NFSU2_TR(0x5b5f39);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5b5f3d:{NFSU2_TR(0x5b5f3d);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B5b5f3f:{NFSU2_TR(0x5b5f3f);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B5b5f40:{NFSU2_TR(0x5b5f40);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b5f44:{NFSU2_TR(0x5b5f44);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5b5f48:{NFSU2_TR(0x5b5f48);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b5f4b:{NFSU2_TR(0x5b5f4b);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x30ull))));
}
B5b5f4e:{NFSU2_TR(0x5b5f4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x3cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b5f55:{NFSU2_TR(0x5b5f55);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x4ull))));
}
B5b5f58:{NFSU2_TR(0x5b5f58);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xc0ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc0ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5b5f5e:{NFSU2_TR(0x5b5f5e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b5f62:{NFSU2_TR(0x5b5f62);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b5e30u);}goto L5b5e30;}}
}
B5b5f68:L5b5f68:{c.instructions+=15;NFSU2_TR(0x5b5f68);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b5f6b:{NFSU2_TR(0x5b5f6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b5f6e:{NFSU2_TR(0x5b5f6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b5f71:{NFSU2_TR(0x5b5f71);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b5f74:{NFSU2_TR(0x5b5f74);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b5f77:{NFSU2_TR(0x5b5f77);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b5f7a:{NFSU2_TR(0x5b5f7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b5f7d:{NFSU2_TR(0x5b5f7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b5f80:{NFSU2_TR(0x5b5f80);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b5f83:{NFSU2_TR(0x5b5f83);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b5f86:{NFSU2_TR(0x5b5f86);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b5f89:{NFSU2_TR(0x5b5f89);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b5f8c:{NFSU2_TR(0x5b5f8c);
__builtin_memmove((R+0),gp(0x86b2ec),4);
}
B5b5f91:{NFSU2_TR(0x5b5f91);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b5f92:{NFSU2_TR(0x5b5f92);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b5f97ull));
TAIL_STATIC(0x440e50u,440);
}
B5b5f97:L5b5f97:{c.instructions+=5;NFSU2_TR(0x5b5f97);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5b5f9a:{NFSU2_TR(0x5b5f9a);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b5f9e:{NFSU2_TR(0x5b5f9e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b5fa0:{NFSU2_TR(0x5b5fa0);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w1(U+4,u8(0x5ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b5fa5:{NFSU2_TR(0x5b5fa5);
if(r1(R+518)){{goto L5b5fbe;}}
}
B5b5fa7:L5b5fa7:{c.instructions+=7;NFSU2_TR(0x5b5fa7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b5faa:{NFSU2_TR(0x5b5faa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b5fad:{NFSU2_TR(0x5b5fad);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b5fae:{NFSU2_TR(0x5b5fae);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1f0ull))));
}
B5b5fb4:{NFSU2_TR(0x5b5fb4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b5fb5:{NFSU2_TR(0x5b5fb5);
__builtin_memmove((R+4),(R+0),4);
}
B5b5fb7:{NFSU2_TR(0x5b5fb7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b5fbcull));
TAIL_STATIC(0x5aa5a0u,5aa);
}
B5b5fbc:L5b5fbc:{c.instructions+=1;NFSU2_TR(0x5b5fbc);
{goto L5b5fc0;}
}
B5b5fbe:L5b5fbe:{c.instructions+=1;NFSU2_TR(0x5b5fbe);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5b5fc0:L5b5fc0:{c.instructions+=4;NFSU2_TR(0x5b5fc0);
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
B5b5fc2:{NFSU2_TR(0x5b5fc2);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b5fc7:{NFSU2_TR(0x5b5fc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b5fca:{NFSU2_TR(0x5b5fca);
if(r1(R+518)){{goto L5b5fd1;}}
}
B5b5fcc:L5b5fcc:{c.instructions+=2;NFSU2_TR(0x5b5fcc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5b5fcf:{NFSU2_TR(0x5b5fcf);
{goto L5b5fd3;}
}
B5b5fd1:L5b5fd1:{c.instructions+=1;NFSU2_TR(0x5b5fd1);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5b5fd3:L5b5fd3:{c.instructions+=9;NFSU2_TR(0x5b5fd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b5fd6:{NFSU2_TR(0x5b5fd6);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((R+20),(U+0),4);
}
B5b5fd9:{NFSU2_TR(0x5b5fd9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5b5fdb:{NFSU2_TR(0x5b5fdb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b5fde:{NFSU2_TR(0x5b5fde);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b5fe1:{NFSU2_TR(0x5b5fe1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5b5fe3:{NFSU2_TR(0x5b5fe3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5b5fe5:{NFSU2_TR(0x5b5fe5);
__builtin_memmove((R+4),(R+0),4);
}
B5b5fe7:{NFSU2_TR(0x5b5fe7);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b5feaull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b5fea:L5b5fea:{c.instructions+=6;NFSU2_TR(0x5b5fea);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5b5fed:{NFSU2_TR(0x5b5fed);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B5b5fef:{NFSU2_TR(0x5b5fef);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b5ff3:{NFSU2_TR(0x5b5ff3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b5ff6:{NFSU2_TR(0x5b5ff6);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B5b5ffd:{NFSU2_TR(0x5b5ffd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
TAIL_STATIC(0x5b6000u,5b6);
}
XIT:NFSU2_TR_EXIT(0x5b5,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
