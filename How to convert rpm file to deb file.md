In Red Hat based linux the package file extension comes in .rpm format .(RPM means Red Hat Package Manager).Sometimes there are some package which are available in rpm file. Hence for installing these package in Debain based OS we have to convert rpm file into deb file.


Follow the given below steps, to convert rpm file into deb file.

Login into Debian based OS (ubuntu/debian/linux mint etc).

1: Install alien package in Ubuntu
# sudo apt-get install alien

2 : Check if alien is installed
# dpkg -l|grep alien

3: Download any rpm file.
# wget ftp://centos.arcticnetwork.ca/pub/centos/6.4/os/x86_64/Packages/vsftpd-2.2.2-11.el6_3.1.x86_64.rpm

4 : run the command , sudo alien package_name.rpm
# sudo alien vsftpd-2.2.2-11.el6_3.1.x86_64.rpm

Now above file should converted to vsftpd_2.2.2-12_amd64.deb.

5: Now you can install the .deb package with command, dpkg -i packag-name.deb
# dpkg -i vsftpd_2.2.2-12_amd64.deb
