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
    int n;
    cin >> n;
    vector<vector<int>> adj(n, vector<int>());
    for(int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        u--, v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    long double ans = 0;

    auto dfs = [&](auto &&self, int i, int p, long double prob, int d) -> void {
        if((i != 0 && adj[i].size() == 1) || adj[i].size() == 0) {
            ans += (prob * d);
            return;
        }
        long double nprob = prob / (adj[i].size() - (i != 0));
        for(int j : adj[i]) {
            if(j == p) continue;
            self(self, j, i, nprob, d + 1);
        }
    };

    dfs(dfs, 0, -1, 1, 0);

    cout << fixed << setprecision(6) << ans << "\n";
    return 0;
}