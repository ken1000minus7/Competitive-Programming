#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(0);
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
#define all(a) a.begin(), a.end()
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
        int n;
        cin >> n;
        vector<int> even, odd;
        for(int i = 0; i < n; i++) {
            int a;
            cin >> a;
            if(a % 2 == 0) even.push_back(i + 1);
            else odd.push_back(i + 1);
        }
        if(odd.size() >= 3) {
            YES
            cout << odd[0] << " " << odd[1] << " " << odd[2] << "\n";
        }
        else if(odd.size() >= 1 && even.size() >= 2) {
            YES
            cout << odd[0] << " " << even[0] << " " << even[1] << "\n";
        }
        else NO
    }
    return 0;
}