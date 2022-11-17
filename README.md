# Hello-world-Linux-kernel-module
Sample to add a hello world Linux kernel modue


## Requirements
* You need to have a machine running on a Linux distro
* You need to install flex and bison packages

```
$ sudo apt install flex
$ sudo apt install bison
```
   
## How does this sample work?

```
$ git clone https://github.com/Chakib08/Hello-world-Linux-kernel-module.git
$ cd $HOME/Hello-world-Linux-kernel-module/
$ make
```

## Test the kernel module

```
$ sudo insmod hello_kernel_world.ko
$ dmesg | tail
```

## Remove the module from the Linux kernel
`$ sudo rmmod hello_world`
 
