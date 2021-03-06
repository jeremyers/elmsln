ELMSLN Vagrant Instructions
==============
[Watch how to use this!](https://www.youtube.com/watch?v=ZeuDKzs6sj0&list=PLJQupiji7J5fygec37Wd-gAbpMj8c5A_C)
###What is this
This is a Vagrant profile for installing a fully functioning [ELMS Learning Network](https://github.com/elmsln/elmsln) in a single command!  This instance is for development purposes but you can follow the [installation instructions](http://docs.elmsln.org/en/latest/INSTALL/) to install this on any real server!

###How to use this to bring up ELMSLN
1. Install [VirtualBox](https://www.virtualbox.org/wiki/Downloads) (ensure you are on the latest version 5.0.14+)
2. Install [Vagrant](http://www.vagrantup.com/downloads.html) (you'll need Vagrant 1.7+)
3. Install [git](http://git-scm.com/downloads) (recommended)
4. Download or Clone (`git clone https://github.com/elmsln/elmsln.git`) this project
5. Add this code to your /etc/hosts (or [windows equivalent](http://www.howtogeek.com/howto/27350/beginner-geek-how-to-edit-your-hosts-file/)) so you can access it "over the web":
```
###ELMSLN development

# front facing addresses
10.0.18.55      courses.elmsln.local
10.0.18.55      media.elmsln.local
10.0.18.55      online.elmsln.local
10.0.18.55      analytics.elmsln.local
10.0.18.55      studio.elmsln.local
10.0.18.55      interact.elmsln.local
10.0.18.55      blog.elmsln.local
10.0.18.55      comply.elmsln.local
10.0.18.55      discuss.elmsln.local
10.0.18.55      inbox.elmsln.local
10.0.18.55      people.elmsln.local
10.0.18.55      innovate.elmsln.local
10.0.18.55      grades.elmsln.local
10.0.18.55      hub.elmsln.local

# backend webservices addresses
10.0.18.55      data-courses.elmsln.local
10.0.18.55      data-media.elmsln.local
10.0.18.55      data-online.elmsln.local
10.0.18.55      data-studio.elmsln.local
10.0.18.55      data-interact.elmsln.local
10.0.18.55      data-blog.elmsln.local
10.0.18.55      data-comply.elmsln.local
10.0.18.55      data-discuss.elmsln.local
10.0.18.55      data-inbox.elmsln.local
10.0.18.55      data-people.elmsln.local
10.0.18.55      data-innovate.elmsln.local
10.0.18.55      data-grades.elmsln.local
10.0.18.55      data-hub.elmsln.local
```

###Spin up the vagrant instance
```
cd elmsln
vagrant up
```

Now you'll be able to jump into any of the domains that ELMSLN starts to establish for use!  Go to http://online.elmsln.local/ after installation completes (grab a coffee, it takes awhile the first time to finish).  If it all worked you should see a new Drupal site running the Course Information System (CIS) distribution.

You can log into this with `user: admin | password: admin`

To connect to the console of your instance: `vagrant ssh`

###Create a new course
1. Click Add, then select New Course
2. Create the name of the course. Ex: Art100
3. Choose which services to access under course network
4. Finish by clicking Create course
5. Wait while the services are installed
6. Once it says service is available, you can click Access service

###Why use this
This project is based on the [Vagrant Project](http://drupal.org/project/vagrant) on Drupal.org, but includes a number of tweaks.  It has been optimized and heavily tested for use with ELMS Learning Network.  It's what we use in daily testing and development and the drop dead easiest way to get up and running with such a complex system.

###Helpful Vagrant Plugins
* **VBGuest**  
   When handling a system through virtualization (a guest on a host), there are tools to simplify the process by allowing for things such as clipboard handoffs and file sharing. Within Virtualbox these tools are called VirtualBox Guest Tools. For them to work properly, they must match to the version of the Linux kernel that is installed in the guest operating system. If you upgrade/update your vagrant instance you're likely to have updated your Linux kernel. This is one of the most common reasons that sharing files into your VM is not working properly. You could manually update the VirtualBox Guest Tools, or you could have a robot do it for you. VBGuest is a script to automatically update your VirtualBox Guest Tools. To install vagrant vbguest, use `vagrant plugin install vagrant-vbguest` There is _not_ an activator in the elmsln Vagrantfile. More information about usage can be found in the [Vagrant Vagrant VBGuest Documentation](https://github.com/dotless-de/vagrant-vbguest)
* **Vagrant Cachier**  
   Vagrant Cachier is great if you are regularly rebuilding your virtual machine. The plugin identifies calls to code repositories and caches a local copy of the files that are downloaded. Then, on subsequent calls to the repository, the plugin checks the local cache before requesting the file from the remote repository. This reduces the data downloaded and, therefore, the time it takes to complete a VM setup. To install vagrant cachier, use `vagrant plugin install vagrant-cachier` There is a cache bucket activator in the [elmsln Vagrantfile](https://github.com/elmsln/elmsln/blob/master/Vagrantfile#L13). More information about usage can be found in the [Vagrant Cachier Documentation](http://fgrehm.viewdocs.io/vagrant-cachier/)

###Other projects of interest
(some that have provided inspiration for the work here)
*  [https://github.com/msonnabaum/drupalcon-training-chef-repo](https://github.com/msonnabaum/drupalcon-training-chef-repo)
*  [http://drupal.org/sandbox/mbutcher/1356522](http://drupal.org/sandbox/mbutcher/1356522)
*  [http://drupal.org/project/drush-vagrant](http://drupal.org/project/drush-vagrant)
