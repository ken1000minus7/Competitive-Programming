#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(0);
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
#define all(a) a.begin(), a.end()
using ll = long long;
using namespace std;
                                                                                                    
/*   

██╗  ██╗███████╗███╗   ██╗ ██╗ ██████╗  ██████╗  ██████╗ ███╗   ███╗██╗███╗   ██╗██╗   ██╗███████╗███████╗
██║ ██╔╝██╔════╝████╗  ██║███║██╔═████╗██╔═████╗██╔═████╗████╗ ████║██║████╗  ██║██║   ██║██╔════╝╚════██║
█████╔╝ █████╗  ██╔██╗ ██║╚██║██║██╔██║██║██╔██║██║██╔██║██╔████╔██║██║██╔██╗ ██║██║   ██║███████╗    ██╔╝
██╔═██╗ ██╔══╝  ██║╚██╗██║ ██║████╔╝██║████╔╝██║████╔╝██║██║╚██╔╝██║██║██║╚██╗██║██║   ██║╚════██║   ██╔╝ 
██║  ██╗███████╗██║ ╚████║ ██║╚██████╔╝╚██████╔╝╚██████╔╝██║ ╚═╝ ██║██║██║ ╚████║╚██████╔╝███████║   ██║  
╚═╝  ╚═╝╚══════╝╚═╝  ╚═══╝ ╚═╝ ╚═════╝  ╚═════╝  ╚═════╝ ╚═╝     ╚═╝╚═╝╚═╝  ╚═══╝ ╚═════╝ ╚══════╝   ╚═╝ 

                                                                                                                                                                                                                                                    
                                                  :-=+**######%%####%%%%%###**+=-:                                                
                                             :=*#%##***************************###%#*+-.                                          
                                         .=*%##***************************************###*+-.                                     
                                      .=*##************************************************#%#+:                                  
                                    :*#********************************************************##+:                               
                                  -##**************************************#####******************##+.                            
                                :##*******************************************##%%%%%%##*************%#=                          
                               +%+***********************************************###*******************%@*:                       
                             .#%+***************#********************************************************#%%=.                    
                            :%%****=++*******#%#************************************************************#%*.                  
                           .%%#+****+==++***#%*****+*****##****************************************************#+                 
                           %%#*******+====+%#*****+****#%#*******************************************************#:               
                          *%##+********+=*%+==++++****%#**********************##****#%%##************************=#=              
                         -%###+********#%@+=========*%**********#**********+#@@@%**#@@@%#******+*********++*******=#+             
                         ####*********#%@#*+=======*%======++++%**********+%@@@@@%%@@@@@##*****++*********++******==#=            
                        :@###*******###@%#***+++==+%+===+=====##=======++*%##%%%%%%%%%%@##******=#********+=+++++====@-           
                        *%####*****###%%##**#+****%%===*=====+%+========*#-...     ..:-%%#=======*+=========#===++===*%           
                        %######***####@###*#+****#@##**#====+@%========*%:           :-%%#=======+#=========%====#====%-          
                       .@#############@###*#+***#%@#####**++#@#=======+%:            :-%%#=======+%=========@+===#====*+          
                       -@#############@###%***###%@###%#**+#%@##*+++++@-             :=@##=======*#========*@*===%++==#=          
                       =%#############@###@######%@###%#*+##@@###***%%*              :+@#*=++++=+%#++++#*=+@%#**##**==@:          
                       =%#############@##%%####%@%%%##%%###%*%%####+#@+:. .:-       --#%#**%%***%@#***%**#%@#***%**+=##           
                       +%#############@%#%####%%###@%#%%##%%-=@#####%+.-==-:        =*@%%%%#*###@%**#%###%@%#**##++*%%.           
                       ###########%*##%@#%##%@%####@@%#@##@#++#@####@:              :%%########@%##%%###%%@##*#%*##%#.            
                      .@#########%#**##@%%%@%###*#%@@@@%%%@@@@@@@##%@%##*=.         *@#######%@@##%%##%@##%##%%###%*.             
                      *%#########@****##%@%%#****#@+--=+@@%%%%@@@@@@@@@@%:        .*%#####%%@@@%%%%%%@@@@@%#%%##%@=               
                     :@#########%%**+**####******#@.    %#***********#%...        +%%%%##@%%%%%%%%%##@-*@@%%%%%%%%=               
                     #%##*###*##%%**+**##********##     %++*********+*%            .:.. =@***********%:+###%%%##*#=               
                    +@##**##*+##%%*++************%=     %==*********=*%                 +#++*******==% .. .*%##**#+               
                   -@#***##**+##@%*++*#*********+@.     #+=****%#***=*%                 +#=+***#***==%     +%###*#*               
                  .%#++**%#***##@%#++*%#***#****+%      +*=********+=#+                 +%=****#***=+%     -@###*#%               
                 .%#++**#%**+###@##++*%#***#*****#      :%++*******++%.                 -@=+******+=**     .@###**@.              
                 *#++**#@#**+###@%#+=*%#***#******       *#=+****+==#*                  .%*=******++%.      %%##**%=              
                -%*=**#%@***+###@%#*=*%%***#****#+        +#*+++=++%*.                   :%++++++=+%:       +@##**##              
                ##==*#%@@***+###@%##=*#@#**%***+#+         .+*****=:                .     :*#***##+.        :@%#***%-             
               .@%++##@=@#**+###%%##*+#@##*%***+#+                                 :=       .:::.            *%##*#*#             
               .@##*#%+.@##*+*##%@###+#@%##%#**+#+                                                           .@##*%*%:            
                %%###%. #%##*+##%@#####%@##%##*+#*                                                            #%#*##**            
                .%%##%  .%%##*%##@%#####@%#%%#*+*#                                                            #%##*%+@.           
                 .+#%%   -@%##@%#%@#####%@##@##++@:                                                          .%%##*%+%+...........
           ..       :+:   :#%##@%#@%####%@%#%###+@=:..                                                       +@%%##%+*#...........
          :####:            -#%%@@%@%####@@%#%###@%*+=--::..              .:..                             :#@%#%##%+*#........   
          +####+ =++=-:.     .=%%*+#%####@=#%%%##@@@@@@%#*++=--:::...   .--:::                       .:-+*%%%###%##%+%#...........
        :=+*++**#%*:.:=++++**+:..:--=%%##%:-#%%##%@-=*#%@@@@@@@%%##***+==--:::...........:::---=+*#%@@@@@@@#####@%%%#@-...........
       *=       #%##.              .:-+%%#:--+@%##@+-:::-*%@@@@@@@@@@@@@@@@@@@@@@#**#@@@@@@@@@@@@@@@@#%@@@@####%+@%#%*............
      :@.       +%#%:                  .::-:::-*%%%%+--:::-+#%%%@%%%%%%###@%%%*=%--::-%@@@#+#@@@@@%%*.-@@@%#%%*.:@%@*.............
      .@=. ...::*%#%:                     :--==-:-++-++-:::-:=#%#%#=--=*#%%#+---%:--: .#=....===%#**##:@@@%#+:..:@%=..............
 ......*#+******%%@*:                     -:-#-::::----+*-:-:::-*%#%#%%%#+-:--:+*:-:    =*-..   -%#**#%=-:......-=.......   ......
.... :*##**#####***##.                   .:-#+:--:...:-:-+*--:-::-*%%#+---::--=#=:.      .=*+-...-%#***%+........     ............
 ... *%*++%++++#**###--:                 ::**:::.     ..:--*+:-=*#*=---::::-++-%--          .=**+--%#***%#:..................   ..
 ......-==%-==.=@+--::.                  -#*=++===-:.    :=+##*=-::::--:-++-. +#:::            .:=+*####*##:......................
.....     #-==::#::.                    :#%#+=-:..:-=++##+-.  ......:=+=-.   .@=--:.                   =@*#%=.....................
........:*%===:.%                      .*#+*#*+==-::....:=+=:   .-+##+=+++==-+%-::::                   -%===+*+:..................
......:+*-*+==: %.                    .*@**+++**###*++-::...*****++-:.......-%#%=-:-:                  -#     .+*:................
.....=#=:-*+==:.*-              .:.  .*@#+*+***+++++**########**+======--==+*%--**-:::                 +=       .#=.............  
....+*---:+*==-.=*..........:::--:  .#%#+++*++++**#*++++++++++++***######**+#+-::=#=:-:               .%-.:=+**+:-%...............
...+*::::-=%-=-..%::::::----:-::.  :%%#+*#+++++**++++=+**#****++++++++++++*#%+:--:-=--::.             ##-=%%#***#@-...............
..:@-:::::-@-==: %-::::::::::--. .+%%@=::-+*#*+++++**#*++===-----======+++*+*+::::::::::-:.          **=*#%%#****##:..............
..=%:::::--@-==: #=::::::::::-..=%%%*-**=. ..=%##*+++++++++***********#***+*%::::::::::::--:.      .**....:#%#****#%:.............
..=@-::-:::%===:.*+:--:::::::-+%%%%=:-::=*+-..% .-=+*##**+++++++++++++++**#%*.:::::::::::::..     .#=......:%#######%.............
...-**+=-::*+==-.=#:---:::-=*%%%%#--:.   ..-+*#=:.    .*-=+++++++++=====-:.*+:.                  -%:........-@%@@@%#+.............
..    :=+**#*===::@+++**##%@%%*-++::           *=++++=-*:..            ..:-*%--:..             .**.  ........:==--:...........   .

*/

int main()
{
    FIO
    int t;
    cin >> t; 
    while(t--) {
        ll l, r, a;
        cin >> l >> r >> a;
        ll lol = max(l, r - (r % a) - 1);
        ll ans = max((lol % a) + lol / a, (r % a) + r / a);
        
        cout << ans << "\n";
    }
    return 0;
}