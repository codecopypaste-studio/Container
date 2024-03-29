#!/usr/bin/perl
 
# obmenu-generator - schema file
 
=for comment
 
    item:      add an item inside the menu               {item => ["command", "label", "icon"]},
    cat:       add a category inside the menu             {cat => ["name", "label", "icon"]},
    sep:       horizontal line separator                  {sep => undef}, {sep => "label"},
    pipe:      a pipe menu entry                         {pipe => ["command", "label", "icon"]},
    file:      include the content of an XML file        {file => "/path/to/file.xml"},
    raw:       any XML data supported by Openbox          {raw => q(...)},
    beg:       begin of a category                        {beg => ["name", "icon"]},
    end:       end of a category                          {end => undef},
    obgenmenu: generic menu settings                {obgenmenu => ["label", "icon"]},
    exit:      default "Exit" action                     {exit => ["label", "icon"]},
 
=cut
 
# NOTE:
#    * Keys and values are case sensitive. Keep all keys lowercase.
#    * ICON can be a either a direct path to an icon or a valid icon name
#    * Category names are case insensitive. (X-XFCE and x_xfce are equivalent)
 
require "$ENV{HOME}/.config/obmenu-generator/config.pl";
 
## Text editor
my $editor = $CONFIG->{editor};
 
our $SCHEMA = [
 
    #          COMMAND                 LABEL              ICON
	#{item => ['xdg-open .',       'File Manager', 'system-file-manager']}, Original
	{item => ['thunar',       'File Manager', 'system-file-manager']},
    {item => ['terminator',            'Terminator',     'utilities-terminal']},
    {item => ['zaproxy',            'ZAP!',     'zaproxy']},
    #{item => ['xdg-open http://', 'Web Browser',  'web-browser']}, original
    {item => ['firefox', 'Web Browser',  'web-browser']},
    {item => ['gmrun', 'run ...',  'run menu']},
 
    {sep => 'Categories'},
 
    #          NAME            LABEL                ICON
    {beg => ['1.Information Tools', 'Information tools']},
		
		{beg => ['Network Scanning', 'Network Scanning']},
			{item => ['terminator -e"nmap; exec /bin/bash -i"' , 'NMAP', 'nmap']},
			{item => ['terminator --geometry=0x0 -H -e "echo "kali" | sudo -S /usr/share/zenmap/su-to-zenmap.sh"' , 'Zenmap', 'zenmap']}, #echo 'kali' | sudo -S /usr/share/zenmap/su-to-zenmap.sh
		{end => undef},
		
		{beg => ['OSInt tools', 'OSInt Tools']},
			{beg => ['Spiderfoot', 'Spiderfoot']},
				{item => ['spiderfoot -l 127.0.0.1:5001' , 'Spiderfoot Start', 'Spiderfoot Start']},
				{item => ['killall sf.py' , 'Spiderfoot Stop', 'Spiderfoot Start']},
			{end => undef},
			{item => ['maltego' , '1.Maltego', 'Maltego']},
        {end => undef},
        
        {beg => ['Web Vulnerability', 'Web Vulnerability']},
            {item => ['terminator -e"dirb; exec /bin/bash -i"' ,  'Dirb',    'Dirb']},
            {item => ['terminator -e"knockpy -h; exec /bin/bash -i"' ,  'Knockpy', 'Knockpy']},
				{beg => ['Openvas', 'Openvas']},
				{item => ['terminator --command="echo kali | sudo -S openvas-start check"',  'openvas start service', 'openvas']},
				{item => ['terminator -e "echo kali | sudo -S openvas-stop check"',  'openvas stop service', 'openvas']},
				{end => undef},
        {end => undef},
    {end => undef},

    {beg => ['2.Wireles Attack', 'Wireless Attack tools']},
        {beg => ['Aircrack-NG', 'Aircrack-NG']},
            {item => ['terminator --command="airodump-ng;exec /bin/bash -i"' ,  'Airodump-ng',    'Airodump-ng']},
            {item => ['terminator --command="sudo airmon-ng check;exec /bin/bash -i"' , 'Airmon-ng check',    'Airmon-ng']}, #SAMPLE for open terminal command with root prompt
            {item => ['terminator --command="aireplay-ng;exec /bin/bash -i"' ,  'Aireplay-ng',    'Aireplay-ng']},
        {end => undef},
    {end => undef},

	{beg => ['3.Passwords Attack', 'Passwords Attack tools']},
		{item => ['terminator -e"crunch -h; exec /bin/bash -i"' , 'Crunch wordlist tool', 'Crunch']},
		{item => ['terminator -e"hashcat -h; exec /bin/bash -i"' , 'Hashcat Gpu Decypher', 'Hashcat']},
	{end => undef},
	
    {beg => ['X.Exploitation Tools', 'Exploitation tools']},
    {item => ['terminator -e"msfconsole; exec /bin/bash -i"' , 'MetaSploit Console', 'MetaSploit Console']},
    {beg => ['BEeF XSS Framework', 'BEeF XSS Framework']},
		#{item => ['terminator --command="sudo beef-xss check;exec /bin/bash -i"' , 'Beef Start3', 'Beef Start']},
		{item => ['terminator --command="echo kali | sudo -S beef-xss check"' , 'Beef Start', 'Beef Start']}, #SAMPLE For open service and close window
		{item => ['terminator --command="echo kali | sudo -S beef-xss-stop check"', 'Beef Stop', 'Beef Stop']},
	{end => undef},
    {end => undef},
    
    {beg => ['Network Tools', 'Network tools']},
        {item => ['terminator -e"ip a; exec /bin/bash -i"' ,    'ip //ifconfig',    'ifconfig']},
    {end => undef},
   
    #{cat => ['utility',     'Accessories', 'applications-utilities']},
    #{cat => ['development', 'Development', 'applications-development']},
    #{cat => ['education',   'Education',   'applications-science']},
    #{cat => ['game',        'Games',       'applications-games']},
    #{cat => ['graphics',    'Graphics',    'applications-graphics']},
    #{cat => ['audiovideo',  'Multimedia',  'applications-multimedia']},
    #{cat => ['network',     'Network',     'applications-internet']},
    #{cat => ['office',      'Office',      'applications-office']},
    {cat => ['other',       'Other',       'applications-other']},
    {cat => ['settings',    'Settings',    'applications-accessories']},
    {cat => ['system',      'System',      'applications-system']},
 
    #             LABEL          ICON
    #{beg => ['My category',  'cat-icon']},
    #          ... some items ...
    #{end => undef},
 
    #            COMMAND     LABEL        ICON
    #{pipe => ['obbrowser', 'Disk', 'drive-harddisk']},
 
    ## Generic advanced settings
    #{sep       => undef},
    #{obgenmenu => ['Openbox Settings', 'applications-engineering']},
    #{sep       => undef},
 
    ## Custom advanced settings
    {sep => undef},
    {beg => ['Advanced Settings', 'applications-engineering']},
 
      # Configuration files
      {item => ["$editor ~/.conkyrc",              'Conky RC',    'text-x-generic']},
      {item => ["$editor ~/.config/tint2/tint2rc", 'Tint2 Panel', 'text-x-generic']},
 
      # obmenu-generator category
      {beg => ['Obmenu-Generator', 'accessories-text-editor']},
        {item => ["$editor ~/.config/obmenu-generator/schema.pl", 'Menu Schema', 'text-x-generic']},
        {item => ["$editor ~/.config/obmenu-generator/config.pl", 'Menu Config', 'text-x-generic']},
 
        {sep  => undef},
        {item => ['obmenu-generator -s -c',    'Generate a static menu',             'accessories-text-editor']},
        {item => ['obmenu-generator -s -i -c', 'Generate a static menu with icons',  'accessories-text-editor']},
        {sep  => undef},
        {item => ['obmenu-generator -p',       'Generate a dynamic menu',            'accessories-text-editor']},
        {item => ['obmenu-generator -p -i',    'Generate a dynamic menu with icons', 'accessories-text-editor']},
        {sep  => undef},
 
        {item => ['obmenu-generator -d', 'Refresh cache', 'view-refresh']},
        {item => ['obmenu-generator -R', 'Refresh menu', 'Menu-refresh']},
      {end => undef},
 
      # Openbox category
      {beg => ['Openbox', 'openbox']},
        {item => ["$editor ~/.config/openbox/autostart", 'Openbox Autostart',   'text-x-generic']},
        {item => ["$editor ~/.config/openbox/rc.xml",    'Openbox RC',          'text-x-generic']},
        {item => ["$editor ~/.config/openbox/menu.xml",  'Openbox Menu',        'text-x-generic']},
        {item => ['openbox --reconfigure',               'Reconfigure Openbox', 'openbox']},
      {end => undef},
    {end => undef},
 
    {sep => undef},
 
    ## The xscreensaver lock command
    {item => ['xscreensaver-command -lock', 'Lock', 'system-lock-screen']},
 
    ## This option uses the default Openbox's "Exit" action
    {exit => ['Exit', 'application-exit']},
 
    ## This uses the 'oblogout' menu
    # {item => ['oblogout', 'Exit', 'application-exit']},
]
