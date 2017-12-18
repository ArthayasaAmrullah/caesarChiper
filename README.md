# Caesar cipher implementation

<p>Program that implements Caesar chiper and dechiper as well,
for any key between 0 and 25.</p>

# Tested

_Tested under Archlinux with GCC 7.3 and Visual Studio 2017_

# Getting repo
<p>Run under terminal</p>

`cd ~`
`mkdir -p cipher`
`git clone https://github.com/lnikon/caesarChiper ~/chiper`

# Compilation
<p>For compilation under the terminal you can use Makefile.</p>
<p>Open root folder of project under terminal and run</p>
`make`

**NO `make install` needed**

<p>Also, you can compile manually.</p>
<p>Just go to _src_ directory and run following command.</p>
`g++ -0 -Wall main.cpp caesar.cpp util.cpp -o caesar`
<p>To avoid compiler optimiziations exclude _-o_ from parameters list.</p>
