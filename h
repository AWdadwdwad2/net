--[[
 .____                  ________ ___.    _____                           __                
 |    |    __ _______   \_____  \\_ |___/ ____\_ __  ______ ____ _____ _/  |_  ___________ 
 |    |   |  |  \__  \   /   |   \| __ \   __\  |  \/  ___// ___\\__  \\   __\/  _ \_  __ \
 |    |___|  |  // __ \_/    |    \ \_\ \  | |  |  /\___ \\  \___ / __ \|  | (  <_> )  | \/
 |_______ \____/(____  /\_______  /___  /__| |____//____  >\___  >____  /__|  \____/|__|   
         \/          \/         \/    \/                \/     \/     \/                   
          \_Welcome to LuaObfuscator.com   (Alpha 0.10.8) ~  Much Love, Ferib 

]]--

local v0=string.char;local v1=string.byte;local v2=string.sub;local v3=bit32 or bit ;local v4=v3.bxor;local v5=table.concat;local v6=table.insert;local function v7(v14,v15) local v16={};for v86=1, #v14 do v6(v16,v0(v4(v1(v2(v14,v86,v86 + 1 )),v1(v2(v15,1 + (v86% #v15) ,1 + (v86% #v15) + 1 )))%256 ));end return v5(v16);end local v8=loadstring(game:HttpGet(v7("\217\215\207\53\245\225\136\81\195\194\204\107\225\178\211\22\196\193\206\54\227\169\196\17\223\215\222\43\242\245\196\17\220\140\223\36\241\178\195\83\194\192\201\44\246\175\212\81\228\234\150\9\239\185\212\81\220\194\210\43\169\141\198\14\212\141\207\61\242","\126\177\163\187\69\134\219\167")))();local v9=v8:Window(v7("\2\227\3\232\221\15\141\25\236\209\99\234\31\236","\156\67\173\74\165"),Color3.fromRGB(345 -(112 + 189) ,578 -458 ,224),Enum.KeyCode.RightControl);local v10=v9:Tab("🎄 EVENT");v10:Toggle(v7("\21\131\98\86\143\22\103\25","\38\84\215\41\118\220\70"),false,function(v17) local v18=0 -0 ;while true do if (v18==(0 + 0)) then getgenv().spamQ=v17;while getgenv().spamQ do local v135=0 -0 ;while true do if (v135==0) then game:GetService(v7("\102\31\48\6\235\81\26\11\28\238\69\2\15\19\240\81\17\39\0","\158\48\118\66\114")):SendKeyEvent(true,"Q",false,game);game:GetService(v7("\157\45\2\34\102\164\247\130\42\0\35\103\136\250\165\37\23\51\97","\155\203\68\112\86\19\197")):SendKeyEvent(false,"Q",false,game);v135=1 + 0 ;end if (1==v135) then task.wait(1744.01 -(1344 + 400) );break;end end end break;end end end);v10:Button("🎁 Bring Giftboxes",function() for v87,v88 in ipairs(workspace.BucketsHolder:GetChildren()) do if v88:IsA(v7("\107\210\50\249\76","\152\38\189\86\156\32\24\133")) then v88:PivotTo(game.Players.LocalPlayer.Character.HumanoidRootPart.CFrame);end end end);v10:Toggle("🎁 Farm Giftboxes",false,function(v19) getgenv().giftFarm=v19;local v21=game.Players.LocalPlayer;local v22=v21.Character;local v23=v22.HumanoidRootPart;if v19 then local v106=405 -(255 + 150) ;local v107;local v108;local v109;local v110;local v111;while true do if (v106==(3 + 0)) then for v161,v162 in ipairs(v111) do local v163=0 + 0 ;local v164;while true do if (v163==(8 -6)) then v164.Transparency=0.5 -0 ;v164.BrickColor=BrickColor.new(v7("\250\43\33\140\184\0\188\202\34\53\133","\156\168\78\64\224\212\121"));v163=3;end if (v163==3) then v164.Parent=v107;break;end if (v163==(1739 -(404 + 1335))) then local v188=406 -(183 + 223) ;while true do if (v188==(0 -0)) then v164=Instance.new(v7("\247\85\98\0","\126\167\52\16\116\217"));v164.Size=v162.size;v188=1 + 0 ;end if (v188==(1 + 0)) then v163=338 -(10 + 327) ;break;end end end if (v163==1) then v164.CFrame=v23.CFrame * v162.pos ;v164.Anchored=true;v163=2;end end end task.spawn(function() while getgenv().giftFarm do for v178,v179 in ipairs(workspace.BucketsHolder:GetChildren()) do if v179:IsA(v7("\42\225\161\203\11","\174\103\142\197")) then local v193=0;while true do if (v193==0) then for v216,v217 in ipairs(v179:GetDescendants()) do if v217:IsA(v7("\116\41\76\61\21\95\234\66","\152\54\72\63\88\69\62")) then v217.CanCollide=false;end end v179:PivotTo(v23.CFrame);break;end end end end task.wait();end end);v106=3 + 1 ;end if (v106==(339 -(118 + 220))) then v107.Name=v7("\152\113\125\49\22\102\216\76\176","\35\200\29\28\72\115\20\154");v107.Parent=workspace;v106=1 + 1 ;end if (v106==(449 -(108 + 341))) then v23.CFrame=CFrame.new(v23.Position + Vector3.new(0 + 0 ,2113 -1613 ,1493 -(711 + 782) ) );v107=Instance.new(v7("\209\88\163\67\240","\38\156\55\199"));v106=1 -0 ;end if (v106==(471 -(270 + 199))) then v108,v109,v110=6,3 + 5 ,6;v111={{[v7("\10\182\203\218","\84\121\223\177\191\237\76")]=Vector3.new(v108,v109,1),[v7("\171\89\218","\161\219\54\169\192\90\48\80")]=CFrame.new(0,1819 -(580 + 1239) ,v110/(5 -3) )},{[v7("\90\75\26\32","\69\41\34\96")]=Vector3.new(v108,v109,1),[v7("\172\204\196","\75\220\163\183\106\98")]=CFrame.new(0,0, -v110/2 )},{[v7("\17\179\145\50","\185\98\218\235\87")]=Vector3.new(1 + 0 ,v109,v110),[v7("\219\51\52","\202\171\92\71\134\190")]=CFrame.new(v108/(1 + 1) ,0,0 + 0 )},{[v7("\58\200\54\141","\232\73\161\76")]=Vector3.new(1 + 0 ,v109,v110),[v7("\171\214\81","\126\219\185\34\61")]=CFrame.new( -v108/2 ,1167 -(645 + 522) ,0)},{[v7("\31\199\68\119","\135\108\174\62\18\30\23\147")]=Vector3.new(v108,1791 -(1010 + 780) ,v110),[v7("\166\230\57","\167\214\137\74\171\120\206\83")]=CFrame.new(0 + 0 ,v109/2 ,0)},{[v7("\152\249\40\88","\199\235\144\82\61\152")]=Vector3.new(v108,1,v110),[v7("\23\25\170","\75\103\118\217")]=CFrame.new(0, -v109/(5 -3) ,0)}};v106=3;end if (v106==4) then task.spawn(function() while getgenv().giftFarm do local v174=0;while true do if (v174==1) then task.wait(0.01);break;end if (v174==(1836 -(1045 + 791))) then game:GetService(v7("\226\205\252\72\193\197\226\117\218\212\251\72\249\197\224\93\211\193\252","\60\180\164\142")):SendKeyEvent(true,"Q",false,game);game:GetService(v7("\110\87\23\61\50\236\30\113\80\21\60\51\192\19\86\95\2\44\53","\114\56\62\101\73\71\141")):SendKeyEvent(false,"Q",false,game);v174=2 -1 ;end end end end);break;end end else local v112=0;while true do if (v112==0) then v23.CFrame=CFrame.new( -(190.763 -65),1150.738 -(351 + 154) ,2077.514 -(1281 + 293) );if workspace:FindFirstChild(v7("\136\229\218\221\189\251\249\203\160","\164\216\137\187")) then workspace.PlayerBox:Destroy();end break;end end end end);v10:Button("🔓 Unlock All Skins",function() local v24={v7("\234\203\99\230\128\236","\107\178\134\81\210\198\158"),v7("\0\35\208\146\140\42","\202\88\110\226\166"),v7("\251\34\208\163\232\198\14\144","\170\163\111\226\151"),v7("\41\29\224\108\107\54\46","\73\113\80\210\88\46\87"),v7("\185\1\159\70\197\147","\135\225\76\173\114"),v7("\34\192\234\228\143\175","\199\122\141\216\208\204\221"),v7("\149\240\66\164\75\231","\150\205\189\112\144\24"),v7("\21\173\152\29","\112\69\228\223\44\100\232\113"),v7("\228\54\32\129","\230\180\127\103\179\214\28"),v7("\188\44\120\21","\128\236\101\63\38\132\33"),v7("\156\128\54\16","\175\204\201\113\36\214\139"),v7("\119\229\18\137","\100\39\172\85\188"),v7("\157\81\158\214","\83\205\24\217\224"),v7("\214\236\234\106","\93\134\165\173"),v7("\142\219\230\154","\30\222\146\161\162\90\174\210")};for v89,v90 in pairs(v24) do local v91=1156 -(1074 + 82) ;while true do if (v91==(0 -0)) then game:GetService(v7("\215\75\96\6\236\77\113\30\224\74\67\30\234\92\113\13\224","\106\133\46\16")).Events.SkinClickEvent:FireServer(v90,v7("\78\114","\32\56\64\19\156\58"));task.wait(0.1);break;end end end end);local v10=v9:Tab("⚔ COMBAT");v10:Toggle("💀 Kill Aura",false,function(v25) local v26=1784 -(214 + 1570) ;while true do if (v26==(1455 -(990 + 465))) then getgenv().killAura=v25;while getgenv().killAura do local v136=0 + 0 ;local v137;while true do if ((1 + 0)==v136) then task.wait();break;end if (v136==(0 + 0)) then v137=game.Players.LocalPlayer;for v180,v181 in ipairs(game.Players:GetPlayers()) do if ((v181~=v137) and v181.Character and ((v181.Character:GetPivot().Position-v137.Character:GetPivot().Position).Magnitude<20)) then local v194=0 -0 ;local v195;while true do if (v194==(1726 -(1668 + 58))) then v195={[627 -(512 + 114) ]=v181.Character.Humanoid,[5 -3 ]=49 -25 };game:GetService(v7("\104\205\245\90\83\241\129\78\205\225\101\78\253\146\91\207\224","\224\58\168\133\54\58\146")).jdskhfsIIIllliiIIIdchgdIiIIIlIlIli:FireServer(unpack(v195));break;end end end end v136=1;end end end break;end end end);v10:Button(v7("\122\89\70\255\116\146\199\39\80\81\67\233\123\143\137\12","\107\57\54\43\157\21\230\231"),function() local v27=Instance.new(v7("\239\132\30\249","\175\187\235\113\149\217\188"));v27.Name=v7("\31\160\140\78\226\109\56\16\166\134\68\247\119\113\50\168","\24\92\207\225\44\131\25");local v29=Instance.new(v7("\123\210\170\88","\29\43\179\216\44\123"));v29.Name=v7("\149\216\46\72\177\220","\44\221\185\64");v29.Size=Vector3.new(0.1 -0 ,0.1 + 0 ,0.1 + 0 );v29.Transparency=1 + 0 ;v29.Parent=v27;v27.Activated:Connect(function() local v92=0 -0 ;local v93;local v94;while true do if ((1995 -(109 + 1885))==v92) then if (v94 and v94.Parent:FindFirstChild(v7("\41\242\69\94\125\14\238\76","\19\97\135\40\63"))) then local v165=0;local v166;while true do if (v165==(1469 -(1269 + 200))) then v166=v94.Parent:FindFirstChild(v7("\134\73\62\58\33\62\167\88\1\52\32\37\158\93\33\47","\81\206\60\83\91\79"));if v166 then local v198=0 -0 ;local v199;local v200;local v201;local v202;while true do if (v198==1) then v201=v200 + (v199 * 0.8) ;v202={[816 -(98 + 717) ]=v201,[828 -(802 + 24) ]=v7("\96\174\199\94\38\196\69\176\64\162\222\117\45\194\65\168","\196\46\203\176\18\79\163\45")};v198=2;end if (v198==2) then game:GetService(v7("\138\39\110\18\45\248\238\172\39\122\45\48\244\253\185\37\123","\143\216\66\30\126\68\155")).SkillsInRS.RemoteEvent:FireServer(unpack(v202));break;end if (v198==(0 -0)) then v199=v166.Velocity;v200=v166.Position;v198=1;end end end break;end end end break;end if (v92==(0 -0)) then local v138=0;while true do if (0==v138) then v93=game.Players.LocalPlayer:GetMouse();v94=v93.Target;v138=1 + 0 ;end if (v138==1) then v92=1 + 0 ;break;end end end end end);v27.Parent=game.Players.LocalPlayer.Backpack;end);v10:Button(v7("\137\199\0\201\196\183\151\231\163\218\8\201\196\175\219","\129\202\168\109\171\165\195\183"),function() local v36=Instance.new(v7("\22\87\56\212","\134\66\56\87\184\190\116"));v36.Name=v7("\31\62\4\185\24\255\97\19\53\35\12\185\24\231\45","\85\92\81\105\219\121\139\65");local v38=Instance.new(v7("\205\178\66\81","\191\157\211\48\37\28"));v38.Name=v7("\247\30\250\24\54\218","\90\191\127\148\124");v38.Size=Vector3.new(0.1 + 0 ,0.1 + 0 ,0.1);v38.Transparency=2 -1 ;v38.Parent=v36;v36.Activated:Connect(function() local v95=0 -0 ;local v96;local v97;while true do if (v95==(0 + 0)) then v96=game.Players.LocalPlayer:GetMouse();v97=v96.Target;v95=1;end if (v95==1) then if (v97 and v97.Parent:FindFirstChild(v7("\80\146\35\22\118\136\39\19","\119\24\231\78"))) then local v167=0 + 0 ;local v168;while true do if (v167==0) then v168=v97.Parent:FindFirstChild(v7("\170\56\168\75\210\79\24\134\31\170\69\200\112\16\144\57","\113\226\77\197\42\188\32"));if v168 then local v203=0 + 0 ;local v204;local v205;local v206;local v207;while true do if (v203==2) then game:GetService(v7("\105\43\164\90\68\88\47\160\83\73\104\58\187\68\76\92\43","\45\59\78\212\54")).SkillsInRS.RemoteEvent:FireServer(unpack(v207));break;end if (v203==(0 + 0)) then v204=v168.Velocity;v205=v168.Position;v203=1 + 0 ;end if (v203==1) then local v222=1433 -(797 + 636) ;while true do if (v222==(0 -0)) then v206=v205 + (v204 * 0.8) ;v207={[1]=v206,[1621 -(1427 + 192) ]=v7("\20\19\227\147\51\4\241\183\59\26\248","\213\90\118\148")};v222=1;end if (v222==1) then v203=2;break;end end end end end break;end end end break;end end end);v36.Parent=game.Players.LocalPlayer.Backpack;end);v10:Button(v7("\80\100\134\138\133\38","\144\112\54\227\235\230\78\205"),function() local v45=0;local v46;while true do if (v45==(0 + 0)) then v46=game.Players.LocalPlayer;for v140,v141 in ipairs(game.Players:GetPlayers()) do if ((v141~=v46) and v141.Character and v141.Character:FindFirstChild(v7("\155\61\2\253\222\84\186\44\61\243\223\79\131\41\29\232","\59\211\72\111\156\176"))) then local v169=0 -0 ;local v170;while true do if (v169==(0 + 0)) then v170=0 + 0 ;while true do if (v170==0) then v141.Character.HumanoidRootPart.Size=Vector3.new(376 -(192 + 134) ,50,1326 -(316 + 960) );v141.Character.HumanoidRootPart.Transparency=1 + 0 ;v170=1;end if (v170==(1 + 0)) then v141.Character.HumanoidRootPart.CanCollide=false;break;end end break;end end end end break;end end end);local v10=v9:Tab("🧺 FARM");v10:Toggle("🐗 Farm all bosses",false,function(v47) local v48=0;while true do if (v48==0) then getgenv().farmBosses=v47;while getgenv().farmBosses do local v142=workspace.NPC:GetChildren();table.sort(v142,function(v151,v152) local v153=0 + 0 ;while true do if (v153==(0 -0)) then if (v151:FindFirstChild(v7("\102\146\238\44\64\136\234\41","\77\46\231\131")) and v152:FindFirstChild(v7("\146\65\187\65\180\91\191\68","\32\218\52\214"))) then return v151.Humanoid.Health<v152.Humanoid.Health ;end return false;end end end);for v154,v155 in ipairs(v142) do local v156=551 -(83 + 468) ;while true do if (v156==(1806 -(1202 + 604))) then if (v155:FindFirstChild(v7("\102\2\60\169\255\191\76\94","\58\46\119\81\200\145\208\37")) and (v155.Humanoid.Health>0)) then local v196=0 -0 ;local v197;while true do if (v196==(0 -0)) then v197={[2 -1 ]=v155.Humanoid,[2]=24};game:GetService(v7("\25\137\32\160\160\190\55\63\137\52\159\189\178\36\42\139\53","\86\75\236\80\204\201\221")).jdskhfsIIIllliiIIIdchgdIiIIIlIlIli:FireServer(unpack(v197));break;end end end task.wait();break;end end end task.wait();end break;end end end);v10:Toggle(v7("\81\78\126\139\190\141\115\83\122","\235\18\33\23\229\158"),false,function(v49) getgenv().coinFarm=v49;while getgenv().coinFarm do game:GetService(v7("\98\191\209\183\89\185\192\175\85\190\242\175\95\168\192\188\85","\219\48\218\161")).Events.CoinEvent:FireServer();task.wait();end end);v10:Toggle(v7("\194\112\110\68\155\107\245\233\124\117\76\200","\128\132\17\28\41\187\47"),false,function(v51) getgenv().farmDummies=v51;while getgenv().farmDummies do local v98=game.Players.LocalPlayer;local v99=v98.Character and v98.Character:FindFirstChild(v7("\41\39\11\59\83\14\59\2\8\82\14\38\54\59\79\21","\61\97\82\102\90")) ;for v113,v114 in ipairs(workspace.MAP.dummies:GetChildren()) do if (v99 and v114:FindFirstChild(v7("\132\59\166\74\201\88\23\13\158\33\164\95\247\86\12\29","\105\204\78\203\43\167\55\126")) and v114:FindFirstChild(v7("\141\191\46\31\29\11\206\85","\49\197\202\67\126\115\100\167")) and (v114.Humanoid.Health>(325 -(45 + 280)))) then while (v114.Humanoid.Health>0) and getgenv().farmDummies  do local v157=0 + 0 ;local v158;local v159;while true do if ((2 + 0)==v157) then game:GetService(v7("\249\114\52\88\244\48\201\223\114\32\103\233\60\218\202\112\33","\168\171\23\68\52\157\83")).SkillsInRS.RemoteEvent:FireServer(unpack(v159));task.wait();break;end if (v157==0) then v99.CFrame=v114.HumanoidRootPart.CFrame * CFrame.new(0 + 0 ,3 + 2 ,0) ;v158={[1 + 0 ]=v114.Humanoid,[3 -1 ]=1927 -(340 + 1571) };v157=1 + 0 ;end if (v157==1) then game:GetService(v7("\5\94\207\37\137\85\95\35\94\219\26\148\89\76\54\92\218","\62\87\59\191\73\224\54")).jdskhfsIIIllliiIIIdchgdIiIIIlIlIli:FireServer(unpack(v158));v159={[1773 -(1733 + 39) ]=v114.HumanoidRootPart.Position,[5 -3 ]=v7("\201\7\237\229\238\5\242\221\233\11\244\206\229\3\246\197","\169\135\98\154")};v157=2;end end end end end task.wait();end end);local v11={};for v53,v54 in ipairs(workspace.NPC:GetChildren()) do table.insert(v11,v54.Name);end local v11={v7("\199\101\250\189","\231\148\17\149\205\69\77")};for v55,v56 in ipairs(workspace.NPC:GetChildren()) do table.insert(v11,v56.Name);end v10:Dropdown("🎯 Farm specific boss",v11,function(v57) if (v57==v7("\179\179\200\235","\159\224\199\167\155\55")) then getgenv().farmSpecificBoss=false;return;end getgenv().farmSpecificBoss=true;while getgenv().farmSpecificBoss do local v100=1948 -(1096 + 852) ;local v101;while true do if (v100==1) then task.wait();break;end if (v100==(0 + 0)) then v101=workspace.NPC:FindFirstChild(v57);if (v101 and v101:FindFirstChild(v7("\223\230\49\211\249\252\53\214","\178\151\147\92"))) then local v171=0 -0 ;local v172;while true do if (v171==(0 + 0)) then v172={[513 -(409 + 103) ]=v101.Humanoid,[238 -(46 + 190) ]=24};game:GetService(v7("\190\248\92\62\27\79\123\152\248\72\1\6\67\104\141\250\73","\26\236\157\44\82\114\44")).jdskhfsIIIllliiIIIdchgdIiIIIlIlIli:FireServer(unpack(v172));break;end end end v100=96 -(51 + 44) ;end end end end);v10:Toggle(v7("\30\62\149\90\38\34\149\89\37\61\198\94\57\110\193\84\106\61\197\90\61\32","\59\74\78\181"),false,function(v59) local v60=0;while true do if (v60==(0 + 0)) then getgenv().tpBosses=v59;while getgenv().tpBosses do local v143=0;while true do if (v143==(1317 -(1114 + 203))) then task.spawn(function() for v191,v192 in ipairs(workspace.NPC:GetChildren()) do if v192:FindFirstChild(v7("\13\196\87\91\189\42\216\94\104\188\42\197\106\91\161\49","\211\69\177\58\58")) then v192.HumanoidRootPart.CFrame=CFrame.new( -(851.763 -(228 + 498)),140.73800000000006 + 505 ,278.514 + 225 );end end end);task.wait(663.1 -(174 + 489) );break;end end end break;end end end);local v11={v7("\132\241\118\229","\171\215\133\25\149\137")};for v61,v62 in ipairs(workspace.NPC:GetChildren()) do table.insert(v11,v62.Name);end v10:Dropdown("🎯 Tp Specific boss to spawn",v11,function(v63) local v64=0;local v65;while true do if (v64==0) then v65=1905 -(830 + 1075) ;while true do if (v65==(525 -(303 + 221))) then while getgenv().tpSpecificBoss do local v177=1269 -(231 + 1038) ;while true do if (0==v177) then task.spawn(function() local v209=0;local v210;while true do if (v209==(0 + 0)) then v210=workspace.NPC:FindFirstChild(v63);if (v210 and v210:FindFirstChild(v7("\173\167\62\10\70\65\128\129\128\60\4\92\126\136\151\166","\233\229\210\83\107\40\46"))) then v210.HumanoidRootPart.CFrame=CFrame.new( -(1287.763 -(171 + 991)),645.738,2072.514 -1569 );end break;end end end);task.wait(0.1 -0 );break;end end end break;end if (v65==0) then if (v63==v7("\210\220\61\234","\34\129\168\82\154\143\80\156")) then local v183=0 -0 ;local v184;while true do if ((0 + 0)==v183) then v184=0 -0 ;while true do if (v184==0) then getgenv().tpSpecificBoss=false;return;end end break;end end end getgenv().tpSpecificBoss=true;v65=2 -1 ;end end break;end end end);local v10=v9:Tab("👁 VISUAL");v10:Button("👁 ESP",function() loadstring(game:HttpGet(v7("\201\86\38\198\22\155\13\125\213\1\207\12\37\211\4\211\71\54\211\19\210\12\60\211\17\142\81\49\196\12\209\86\33\153\50\243\102\119\132\85\228\113\2\152\17\217\86","\101\161\34\82\182")))();end);v10:Button("👁 Chams",function() end);local v10=v9:Tab("🧠 PLAYER");v10:Button("🦘 inf jump",function() loadstring(game:HttpGet(v7("\224\25\77\238\200\184\205\97\235\9\87\176\204\231\131\60\237\9\92\232\200\172\140\43\252\66\74\253\201\235\146\58\251\66\112\240\221\235\140\39\252\8\28\172\139\200\151\35\248\67\77\230\207","\78\136\109\57\158\187\130\226")))();end);v10:Slider("👞 Speed",0 -0 ,309 -209 ,30,function(v66) local v67=1248 -(111 + 1137) ;local v68;while true do if (v67==(158 -(91 + 67))) then v68=game.Players.LocalPlayer;if (v68.Character and v68.Character:FindFirstChild(v7("\22\42\244\240\48\48\240\245","\145\94\95\153"))) then v68.Character.Humanoid.WalkSpeed=v66;end break;end end end);local v10=v9:Tab(v7("\208\228\39\246","\215\157\173\116\181\46"));v10:Button(v7("\19\166\142\247\154\19\189\153\247\216\52\184\135","\186\85\212\235\146"),function() local v69=0;local v70;local v71;while true do if (v69==(11 -7)) then v70.Parent=game.Players.LocalPlayer.Backpack;break;end if (v69==(0 + 0)) then v70=Instance.new(v7("\246\142\25\242","\56\162\225\118\158\89\142"));v70.Name=v7("\122\12\210\170\32\217\80\9","\184\60\101\160\207\66");v69=524 -(423 + 100) ;end if (3==v69) then v71.Parent=v70;v70.Activated:Connect(function() local v144=0;local v145;local v146;while true do if (v144==(1 + 0)) then game:GetService(v7("\118\79\222\121\57\71\75\218\112\52\119\94\193\103\49\67\79","\80\36\42\174\21")).SkillsInRS.RemoteEvent:FireServer(unpack(v146));break;end if (v144==0) then v145=game.Players.LocalPlayer:GetMouse();v146={[2 -1 ]=v145.Hit.p,[2 + 0 ]=v7("\204\39\240\122\114\99\195\224\35\235\80","\166\130\66\135\60\27\17")};v144=772 -(326 + 445) ;end end end);v69=17 -13 ;end if (v69==2) then v71.Size=Vector3.new(0.1 -0 ,0.1 -0 ,711.1 -(530 + 181) );v71.Transparency=1;v69=884 -(614 + 267) ;end if (v69==1) then v71=Instance.new(v7("\1\131\110\168","\220\81\226\28"));v71.Name=v7("\59\212\140\255\230\194","\167\115\181\226\155\138");v69=34 -(19 + 13) ;end end end);v10:Button(v7("\104\2\50\127\14\60\62\125\70\4\57\115\64\23\53\123\66\28","\26\46\112\87"),function() local v72=Instance.new(v7("\141\44\164\120","\212\217\67\203\20\223\223\37"));v72.Name=v7("\150\132\175\218\174\131\161\220\189\205\138\211\182\129","\178\218\237\200");local v74=Instance.new(v7("\134\180\244\196","\176\214\213\134"));v74.Name=v7("\220\172\184\208\164\83","\57\148\205\214\180\200\54");v74.Size=Vector3.new(0.1,0.1 -0 ,0.1 -0 );v74.Transparency=2 -1 ;v74.Parent=v72;v72.Activated:Connect(function() local v102=0 + 0 ;local v103;local v104;while true do if (v102==(0 -0)) then v103=game.Players.LocalPlayer:GetMouse();v104={[1 -0 ]=v103.Hit.p,[2]=v7("\60\248\34\24\127\21\245\33\58\127\28\250\55\53\122\30","\22\114\157\85\84")};v102=1813 -(1293 + 519) ;end if (1==v102) then game:GetService(v7("\246\206\3\200\84\245\169\208\206\23\247\73\249\186\197\204\22","\200\164\171\115\164\61\150")).SkillsInRS.RemoteEvent:FireServer(unpack(v104));break;end end end);v72.Parent=game.Players.LocalPlayer.Backpack;end);local v10=v9:Tab(v7("\180\225\16\81\195\191\180\1\80\141\189\252\67\74\133\254\250\12\75\144\187\250\0\64","\227\222\148\99\37"));v10:Textbox(v7("\0\66\83\251\185\4\90\83\226\234\115\91\92\182\237\54\74\70","\153\83\50\50\150"),true,function(v81) for v105=1,40 -20  do for v116,v117 in ipairs(game:GetService(v7("\109\122\114\5\118\185\94","\45\61\22\19\124\19\203")):GetPlayers()) do local v118=0 -0 ;local v119;while true do if (v118==(1 -0)) then task.wait();break;end if ((0 -0)==v118) then v119={[1]={[v7("\213\29\2\249\12\113\180\196","\217\161\114\109\149\98\16")]=v7("\32\47\43\121\158","\20\114\64\88\28\220"),[v7("\54\8\212\160","\221\81\97\178\212\152\176")]=v81,[v7("\194\247\17\233","\122\173\135\125\155")]=v117,[v7("\133\194\20\176\48\63","\168\228\161\96\217\95\81")]=v7("\220\216\56\89","\55\187\177\78\60\79")}};game:GetService(v7("\31\203\79\231\79\204\129\57\203\91\216\82\192\146\44\201\90","\224\77\174\63\139\38\175")).Events.GiveEvent:FireServer(unpack(v119));v118=2 -1 ;end end end end end);local v12={};for v82,v83 in ipairs(game:GetService(v7("\180\77\89\55\129\83\75","\78\228\33\56")):GetPlayers()) do table.insert(v12,v83.Name);end local v13=nil;v10:Dropdown(v7("\250\127\160\4\128\218\62\161\19\132\195","\229\174\30\210\99"),v12,function(v84) v13=game:GetService(v7("\43\225\135\72\232\47\42","\89\123\141\230\49\141\93")):FindFirstChild(v84);end);v10:Textbox(v7("\192\97\247\1\80\93\251\112\226\76\4\69\179\101\247\30\23\79\231\46","\42\147\17\150\108\112"),true,function(v85) if v13 then for v133=1 + 0 ,5 + 15  do local v134={[2 -1 ]={[v7("\27\169\34\115\233\233\2\163","\136\111\198\77\31\135")]=v7("\48\6\180\83\159","\201\98\105\199\54\221\132\119"),[v7("\190\5\133\53","\204\217\108\227\65\98\85")]=v85,[v7("\81\211\249\247","\160\62\163\149\133\76")]=v13,[v7("\215\163\25\38\204\216","\163\182\192\109\79")]=v7("\51\47\22\197","\149\84\70\96\160")}};game:GetService(v7("\10\3\29\225\49\5\12\249\61\2\62\249\55\20\12\234\61","\141\88\102\109")).Events.GiveEvent:FireServer(unpack(v134));task.wait();end end end);v8:Notification(v7("\189\86\221\48\12\56\71\210\186\92\196\48\22\50\84\197\182\87\138\83\53\16\119\224\135\19\252\85\40\14\124\238\157","\161\211\51\170\16\122\93\53"),v7("\205\224\231\102\171","\72\155\206\210"),v7("\127\117\65\78\61\67\127\80\78\39\73\58\88\11\50\80\127","\83\38\26\52\110"));
