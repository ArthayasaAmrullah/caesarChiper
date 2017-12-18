<h1><a id="Caesar_cipher_implementation_0"></a>Caesar cipher implementation</h1>
<p>Program that implements Caesar chiper and dechiper as well,<br>
for any key between 0 and 25.</p>
<h1><a id="Tested_5"></a>Tested</h1>
<p><em>Tested under Archlinux with GCC 7.3 and Visual Studio 2017</em></p>
<h1><a id="Getting_repo_9"></a>Getting repo</h1>
<p>Run under terminal</p>
<p><code>cd ~</code><br>
<code>mkdir -p cipher</code><br>
<code>git clone https://github.com/lnikon/caesarChiper ~/chiper</code></p>
<h1><a id="Compilation_16"></a>Compilation</h1>
<p>For compilation under the terminal you can use Makefile.<br>
Open root folder of project under terminal and run.<br>
<code>make</code></p>
<p><strong>NO <code>make install</code> needed</strong></p>
<p>Also, you can compile manually.<br>
Just go to <em>src</em> directory and run following command.<br>
<code>g++ -0 -Wall main.cpp caesar.cpp util.cpp -o caesar</code><br>
To avoid compiler optimiziations exclude <em>-o</em> from parameters list.</p
