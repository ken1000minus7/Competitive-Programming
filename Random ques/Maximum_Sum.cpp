#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(0);
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
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

void buildTree(vector<ll> &arr,vector<pair<ll,ll>> &segTree,int l,int r,int ind)
{
	if(l==r)
	{
		segTree[ind] = {arr[l],0};
		return;
	}
	int mid = l + (r-l)/2;
	buildTree(arr,segTree,l,mid,2*ind+1);
	buildTree(arr,segTree,mid+1,r,2*ind+2);
	auto p1 = segTree[2*ind+1];
	auto p2 = segTree[2*ind+2];
	segTree[ind] = {max(max(p1.first,p2.second),max(p1.second,p2.first)),min(max(p1.first,p2.second),max(p1.second,p2.first))};
}

void update(vector<ll> &arr,vector<pair<ll,ll>> &segTree,int l,int r,int ind,int &i,ll &x)
{
	if(l==r)
	{
		segTree[ind] = {x,0};
		arr[l] = x;
		return;
	}
	int mid = l + (r-l)/2;
	if(i<=mid)
	{
		update(arr,segTree,l,mid,2*ind+1,i,x);
	}
	else
	{
		update(arr,segTree,mid+1,r,2*ind+2,i,x);
	}
	auto p1 = segTree[2*ind+1];
	auto p2 = segTree[2*ind+2];
	segTree[ind] = {max(max(p1.first,p2.second),max(p1.second,p2.first)),min(max(p1.first,p2.second),max(p1.second,p2.first))};
}

pair<ll,ll> query(vector<pair<ll,ll>> &segTree,int l,int r,int ind,int &s,int &e)
{
	pair<ll,ll> p;
	if(l>=s && r<=e) return segTree[ind];
	if(r<s || l>e) return {0,0};
	else
	{
		int mid = l + (r-l)/2;
		auto p1 = query(segTree,l,mid,2*ind+1,s,e);
		auto p2 = query(segTree,mid+1,r,2*ind+2,s,e);
		return {max(max(p1.first,p2.second),max(p1.second,p2.first)),min(max(p1.first,p2.second),max(p1.second,p2.first))};
	}
}

int main()
{
    FIO
    int n;
	cin>>n;
	vector<ll> arr(n);
	for(int i=0;i<n;i++) cin>>arr[i];
	vector<pair<ll,ll>> segTree(4*n);
	buildTree(arr,segTree,0,n-1,0);
	int q;
	cin>>q;
	while(q--)
	{
		char c;
		cin>>c;
		if(c=='U')
		{
			int i;
			ll x;
			cin>>i>>x;
			i--;
			update(arr,segTree,0,n-1,0,i,x);
		}
		else
		{
			int x,y;
			cin>>x>>y;
			x--,y--;
			auto p = query(segTree,0,n-1,0,x,y);
			cout<<p.first+p.second<<"\n";
		}
	}
    return 0;
}