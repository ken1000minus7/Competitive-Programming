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
        int n, k;
        cin >> n >> k;
        vector<ll> arr(n);
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort(all(arr));
        vector<ll> pref(n);
        pref[0] = arr[0];
        for(int i = 1; i < n; i++) {
            pref[i] = pref[i - 1] + arr[i];
        }
        ll ans = 0;
        for(int i = 0; i <= 2 * k; i += 2) {
            int rem = k - i / 2;
            ans = max(ans, pref[n - rem - 1] - pref[i] + arr[i]);
        }
        cout << ans << "\n";
    }
    return 0;
}